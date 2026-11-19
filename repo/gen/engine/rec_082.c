#include "recomp.h"
#include "rec_mod.h"

void f_8776f0(void) {
  LOAD_REGS();
L_8776f0: /* 8776f0: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8776f3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8776f8: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 8776fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8776fc: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 8776ff: call 0x99caf8 */
  esp -= 4; W32(esp, 0x877704u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_877704(); return;
}

void f_877704(void) {
  LOAD_REGS();
L_877704: /* 877704: push 0xa18aa0 */
  { uint32_t v = 0xa18aa0u; esp -= 4; W32(esp, v); }
/* 877709: push 0xae62d4 */
  { uint32_t v = 0xae62d4u; esp -= 4; W32(esp, v); }
/* 87770e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x877714u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 877714: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 877717: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 877719: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87771b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x877720u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_877720: guest_badaddr(0x877720); return;
}

void f_8778d0(void) {
  LOAD_REGS();
L_8778d0: /* 8778d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8778d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8778d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8778d3: mov esi, ecx */
  esi = ecx;
/* 8778d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8778d7: lea ebp, [esi + 0x37c] */
  ebp = (uint32_t)(esi + 0x37cu);
/* 8778dd: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8778df: mov ecx, ebp */
  ecx = ebp;
/* 8778e1: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8778e7u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8778e7: mov eax, dword ptr [esi + 0x340] */
  eax = R32((uint32_t)(esi + 0x340u));
/* 8778ed: xor edi, edi */
  edi = 0;
/* 8778ef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8778f1: jle 0x877994 */
  if ((zf || sf != of)) goto L_877994;
L_8778f7: /* 8778f7: jmp 0x877900 */
  goto L_877900;
L_877900: /* 877900: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 877906: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 877909: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87790b: add ecx, 0x70 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 87790e: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 877910: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x877916u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 877916: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 87791c: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* 87791f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 877920: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 877921: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 877922: mov ecx, 0xb19098 */
  ecx = 0xb19098u;
/* 877927: call 0x6c6541 */
  esp -= 4; W32(esp, 0x87792cu); SPILL(); f_6c6541(); if (g_unwind) return; RELOAD();
/* 87792c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87792d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87792e: mov ecx, 0xb19098 */
  ecx = 0xb19098u;
/* 877933: call 0x6ca817 */
  esp -= 4; W32(esp, 0x877938u); SPILL(); f_6ca817(); if (g_unwind) return; RELOAD();
/* 877938: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 87793e: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 877941: lea ecx, [eax + 0x70] */
  ecx = (uint32_t)(eax + 0x70u);
/* 877944: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 877945: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 877946: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 877947: mov ecx, 0xb19098 */
  ecx = 0xb19098u;
/* 87794c: call 0x6c6541 */
  esp -= 4; W32(esp, 0x877951u); SPILL(); f_6c6541(); if (g_unwind) return; RELOAD();
/* 877951: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 877952: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 877953: mov ecx, 0xb19098 */
  ecx = 0xb19098u;
/* 877958: call 0x6ca817 */
  esp -= 4; W32(esp, 0x87795du); SPILL(); f_6ca817(); if (g_unwind) return; RELOAD();
/* 87795d: mov edx, dword ptr [esi + 0x33c] */
  edx = R32((uint32_t)(esi + 0x33cu));
/* 877963: mov ecx, dword ptr [edx + edi*4] */
  ecx = R32((uint32_t)(edx + edi*4));
/* 877966: test byte ptr [ecx + 0x64], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x64u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87796a: je 0x877985 */
  if (zf) goto L_877985;
L_87796c: /* 87796c: fld dword ptr [ecx + 0x68] */
  { double v = F32((uint32_t)(ecx + 0x68u)); FPUSH(v); }
/* 87796f: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 877975: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 877977: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 87797a: jnp 0x877985 */
  if (!pf) goto L_877985;
L_87797c: /* 87797c: fld dword ptr [ecx + 0x6c] */
  { double v = F32((uint32_t)(ecx + 0x6cu)); FPUSH(v); }
/* 87797f: fdiv dword ptr [ecx + 0x68] */
  ST0 = ST0 / (F32((uint32_t)(ecx + 0x68u)));
/* 877982: fstp dword ptr [ecx + 0x38] */
  WF32((uint32_t)(ecx + 0x38u), ST0); FPOP();
L_877985: /* 877985: mov eax, dword ptr [esi + 0x340] */
  eax = R32((uint32_t)(esi + 0x340u));
/* 87798b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 87798c: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 87798e: jl 0x877900 */
  if ((sf != of)) goto L_877900;
L_877994: /* 877994: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 877999: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87799c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87799d: je 0x8779a8 */
  if (zf) goto L_8779a8;
L_87799f: /* 87799f: mov ecx, esi */
  ecx = esi;
/* 8779a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8779a2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8779a3: jmp 0x6ca533 */
  SPILL(); f_6ca533(); return;
L_8779a8: /* 8779a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8779a9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8779aa: ret  */
  esp += 4; SPILL(); return;
}

void f_8778f9(void) {
  LOAD_REGS();
L_8778f9: /* 8778f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_877900: /* 877900: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 877906: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 877909: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87790b: add ecx, 0x70 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 87790e: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 877910: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x877916u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 877916: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 87791c: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* 87791f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 877920: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 877921: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 877922: mov ecx, 0xb19098 */
  ecx = 0xb19098u;
/* 877927: call 0x6c6541 */
  esp -= 4; W32(esp, 0x87792cu); SPILL(); f_6c6541(); if (g_unwind) return; RELOAD();
/* 87792c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87792d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87792e: mov ecx, 0xb19098 */
  ecx = 0xb19098u;
/* 877933: call 0x6ca817 */
  esp -= 4; W32(esp, 0x877938u); SPILL(); f_6ca817(); if (g_unwind) return; RELOAD();
/* 877938: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 87793e: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 877941: lea ecx, [eax + 0x70] */
  ecx = (uint32_t)(eax + 0x70u);
/* 877944: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 877945: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 877946: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 877947: mov ecx, 0xb19098 */
  ecx = 0xb19098u;
/* 87794c: call 0x6c6541 */
  esp -= 4; W32(esp, 0x877951u); SPILL(); f_6c6541(); if (g_unwind) return; RELOAD();
/* 877951: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 877952: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 877953: mov ecx, 0xb19098 */
  ecx = 0xb19098u;
/* 877958: call 0x6ca817 */
  esp -= 4; W32(esp, 0x87795du); SPILL(); f_6ca817(); if (g_unwind) return; RELOAD();
/* 87795d: mov edx, dword ptr [esi + 0x33c] */
  edx = R32((uint32_t)(esi + 0x33cu));
/* 877963: mov ecx, dword ptr [edx + edi*4] */
  ecx = R32((uint32_t)(edx + edi*4));
/* 877966: test byte ptr [ecx + 0x64], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x64u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87796a: je 0x877985 */
  if (zf) goto L_877985;
L_87796c: /* 87796c: fld dword ptr [ecx + 0x68] */
  { double v = F32((uint32_t)(ecx + 0x68u)); FPUSH(v); }
/* 87796f: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 877975: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 877977: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 87797a: jnp 0x877985 */
  if (!pf) goto L_877985;
L_87797c: /* 87797c: fld dword ptr [ecx + 0x6c] */
  { double v = F32((uint32_t)(ecx + 0x6cu)); FPUSH(v); }
/* 87797f: fdiv dword ptr [ecx + 0x68] */
  ST0 = ST0 / (F32((uint32_t)(ecx + 0x68u)));
/* 877982: fstp dword ptr [ecx + 0x38] */
  WF32((uint32_t)(ecx + 0x38u), ST0); FPOP();
L_877985: /* 877985: mov eax, dword ptr [esi + 0x340] */
  eax = R32((uint32_t)(esi + 0x340u));
/* 87798b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 87798c: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 87798e: jl 0x877900 */
  if ((sf != of)) goto L_877900;
L_877994: /* 877994: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 877999: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87799c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87799d: je 0x8779a8 */
  if (zf) goto L_8779a8;
L_87799f: /* 87799f: mov ecx, esi */
  ecx = esi;
/* 8779a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8779a2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8779a3: jmp 0x6ca533 */
  SPILL(); f_6ca533(); return;
L_8779a8: /* 8779a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8779a9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8779aa: ret  */
  esp += 4; SPILL(); return;
}

void f_8779f0(void) {
  LOAD_REGS();
L_8779f0: /* 8779f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8779f2: add ecx, 0x37c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x37cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8779f8: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8779fa: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x877a00u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 877a00: ret  */
  esp += 4; SPILL(); return;
}

void f_877a20(void) {
  LOAD_REGS();
L_877a20: /* 877a20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 877a24: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 877a25: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 877a26: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 877a2a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 877a2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 877a2c: mov esi, ecx */
  esi = ecx;
/* 877a2e: call 0x6c69fb */
  esp -= 4; W32(esp, 0x877a33u); SPILL(); f_6c69fb(); if (g_unwind) return; RELOAD();
/* 877a33: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 877a35: je 0x877a59 */
  if (zf) goto L_877a59;
L_877a37: /* 877a37: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 877a39: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x877a3cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 877a3c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 877a3e: je 0x877a60 */
  if (zf) goto L_877a60;
L_877a40: /* 877a40: mov eax, dword ptr [edi + 0x370] */
  eax = R32((uint32_t)(edi + 0x370u));
/* 877a46: mov ecx, dword ptr [edi + 0x36c] */
  ecx = R32((uint32_t)(edi + 0x36cu));
/* 877a4c: mov edx, dword ptr [esi + 0x50] */
  edx = R32((uint32_t)(esi + 0x50u));
/* 877a4f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 877a50: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 877a51: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 877a52: mov ecx, edi */
  ecx = edi;
/* 877a54: call 0x6c65fa */
  esp -= 4; W32(esp, 0x877a59u); SPILL(); f_6c65fa(); if (g_unwind) return; RELOAD();
L_877a59: /* 877a59: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 877a5a: xor eax, eax */
  eax = 0;
/* 877a5c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 877a5d: ret 8 */
  esp += 12; SPILL(); return;
L_877a60: /* 877a60: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 877a61: mov eax, 1 */
  eax = 0x1u;
/* 877a66: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 877a67: ret 8 */
  esp += 12; SPILL(); return;
}

void f_877a90(void) {
  LOAD_REGS();
L_877a90: /* 877a90: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 877a92: push 0x9d4c19 */
  { uint32_t v = 0x9d4c19u; esp -= 4; W32(esp, v); }
/* 877a97: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 877a9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 877a9e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 877aa5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 877aa6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 877aa7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 877aa8: mov esi, ecx */
  esi = ecx;
/* 877aaa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 877aab: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 877aaf: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 877ab2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 877ab4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 877aba: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 877ac2: jge 0x877ad8 */
  if ((sf == of)) goto L_877ad8;
L_877ac4: /* 877ac4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 877ac9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 877ace: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 877ad3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x877ad5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 877ad5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_877ad8: /* 877ad8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 877adb: jle 0x877af1 */
  if ((zf || sf != of)) goto L_877af1;
L_877add: /* 877add: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 877ae2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 877ae7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 877aec: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x877aeeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 877aee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_877af1: /* 877af1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 877af3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 877af4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 877af6: mov ecx, esi */
  ecx = esi;
/* 877af8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x877afeu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 877afe: mov ecx, esi */
  ecx = esi;
/* 877b00: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 877b08: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x877b0eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 877b0e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 877b12: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 877b13: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 877b14: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 877b15: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 877b1c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 877b1f: ret  */
  esp += 4; SPILL(); return;
}

void f_877b50(void) {
  LOAD_REGS();
L_877b50: /* 877b50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 877b51: mov esi, ecx */
  esi = ecx;
/* 877b53: mov dword ptr [esi], 0xcc74c0 */
  W32((uint32_t)(esi), 0xcc74c0u);
/* 877b59: mov dword ptr [esi + 4], 0xffffffff */
  W32((uint32_t)(esi + 0x4u), 0xffffffffu);
/* 877b60: call 0x6c38b4 */
  esp -= 4; W32(esp, 0x877b65u); SPILL(); f_6c38b4(); if (g_unwind) return; RELOAD();
/* 877b65: mov eax, esi */
  eax = esi;
/* 877b67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 877b68: ret  */
  esp += 4; SPILL(); return;
}

void f_877b80(void) {
  LOAD_REGS();
L_877b80: /* 877b80: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 877b82: push 0x9d4c39 */
  { uint32_t v = 0x9d4c39u; esp -= 4; W32(esp, v); }
/* 877b87: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 877b8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 877b8e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 877b95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 877b96: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 877b97: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 877b98: mov esi, ecx */
  esi = ecx;
/* 877b9a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 877b9b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 877b9f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 877ba2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 877ba4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 877baa: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 877bb2: jge 0x877bc8 */
  if ((sf == of)) goto L_877bc8;
L_877bb4: /* 877bb4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 877bb9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 877bbe: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 877bc3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x877bc5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 877bc5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_877bc8: /* 877bc8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 877bcb: jle 0x877be1 */
  if ((zf || sf != of)) goto L_877be1;
L_877bcd: /* 877bcd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 877bd2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 877bd7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 877bdc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x877bdeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 877bde: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_877be1: /* 877be1: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 877be3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 877be4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 877be6: mov ecx, esi */
  ecx = esi;
/* 877be8: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x877beeu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 877bee: mov ecx, esi */
  ecx = esi;
/* 877bf0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 877bf8: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x877bfeu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 877bfe: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 877c02: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 877c03: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 877c04: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 877c05: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 877c0c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 877c0f: ret  */
  esp += 4; SPILL(); return;
}

void f_877c40(void) {
  LOAD_REGS();
L_877c40: /* 877c40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 877c41: mov esi, ecx */
  esi = ecx;
/* 877c43: mov dword ptr [esi], 0xb6d258 */
  W32((uint32_t)(esi), 0xb6d258u);
/* 877c49: mov dword ptr [esi + 4], 0xffffffff */
  W32((uint32_t)(esi + 0x4u), 0xffffffffu);
/* 877c50: call 0x6c38b4 */
  esp -= 4; W32(esp, 0x877c55u); SPILL(); f_6c38b4(); if (g_unwind) return; RELOAD();
/* 877c55: mov eax, esi */
  eax = esi;
/* 877c57: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 877c58: ret  */
  esp += 4; SPILL(); return;
}

void f_877c70(void) {
  LOAD_REGS();
L_877c70: /* 877c70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 877c71: mov ebp, esp */
  ebp = esp;
/* 877c73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 877c75: push 0x9d4c50 */
  { uint32_t v = 0x9d4c50u; esp -= 4; W32(esp, v); }
/* 877c7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 877c80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 877c81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 877c88: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 877c8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 877c8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 877c8d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 877c8e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 877c91: mov esi, ecx */
  esi = ecx;
/* 877c93: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 877c9a: call 0x6c45ed */
  esp -= 4; W32(esp, 0x877c9fu); SPILL(); f_6c45ed(); if (g_unwind) return; RELOAD();
/* 877c9f: mov ecx, esi */
  ecx = esi;
/* 877ca1: call 0x6c1a96 */
  esp -= 4; W32(esp, 0x877ca6u); SPILL(); f_6c1a96(); if (g_unwind) return; RELOAD();
/* 877ca6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 877ca9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 877caa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 877cab: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 877cb2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 877cb3: mov esp, ebp */
  esp = ebp;
/* 877cb5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 877cb6: ret  */
  esp += 4; SPILL(); return;
}

void f_877cb7(void) {
  LOAD_REGS();
L_877cb7: /* 877cb7: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 877cba: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 877cbf: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 877cc2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 877cc3: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 877cc6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x877ccbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_877ccb(); return;
}

void f_877ccb(void) {
  LOAD_REGS();
L_877ccb: /* 877ccb: push 0xa18ae4 */
  { uint32_t v = 0xa18ae4u; esp -= 4; W32(esp, v); }
/* 877cd0: push 0xae5f7c */
  { uint32_t v = 0xae5f7cu; esp -= 4; W32(esp, v); }
/* 877cd5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x877cdbu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 877cdb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 877cde: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 877ce0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 877ce2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x877ce7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_877ce7: guest_badaddr(0x877ce7); return;
}

void f_877d10(void) {
  LOAD_REGS();
L_877d10: /* 877d10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 877d11: mov ebp, esp */
  ebp = esp;
/* 877d13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 877d15: push 0x9d4c60 */
  { uint32_t v = 0x9d4c60u; esp -= 4; W32(esp, v); }
/* 877d1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 877d20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 877d21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 877d28: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 877d2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 877d2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 877d2d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 877d2e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 877d31: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 877d38: call dword ptr [0xcfa214] */
  esp -= 4; W32(esp, 0x877d3eu); SPILL(); f_4e1d11(); if (g_unwind) return; /* Core!?PostEditChange@UObject@@UAEXXZ */ RELOAD();
/* 877d3e: mov ecx, dword ptr [0xb190d8] */
  ecx = R32((uint32_t)(0xb190d8u));
/* 877d44: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 877d46: je 0x877d4d */
  if (zf) goto L_877d4d;
L_877d48: /* 877d48: call 0x6c1a96 */
  esp -= 4; W32(esp, 0x877d4du); SPILL(); f_6c1a96(); if (g_unwind) return; RELOAD();
L_877d4d: /* 877d4d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 877d50: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 877d51: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 877d52: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 877d59: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 877d5a: mov esp, ebp */
  esp = ebp;
/* 877d5c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 877d5d: ret  */
  esp += 4; SPILL(); return;
}

void f_877d5e(void) {
  LOAD_REGS();
L_877d5e: /* 877d5e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 877d61: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 877d66: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 877d69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 877d6a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 877d6d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x877d72u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_877d72(); return;
}

void f_877d72(void) {
  LOAD_REGS();
L_877d72: /* 877d72: push 0xa18b2c */
  { uint32_t v = 0xa18b2cu; esp -= 4; W32(esp, v); }
/* 877d77: push 0xae5fe4 */
  { uint32_t v = 0xae5fe4u; esp -= 4; W32(esp, v); }
/* 877d7c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x877d82u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 877d82: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 877d85: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 877d87: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 877d89: call 0x99caf8 */
  esp -= 4; W32(esp, 0x877d8eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_877d8e: guest_badaddr(0x877d8e); return;
}

void f_877db0(void) {
  LOAD_REGS();
L_877db0: /* 877db0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 877db1: mov ebp, esp */
  ebp = esp;
/* 877db3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 877db5: push 0x9d4c70 */
  { uint32_t v = 0x9d4c70u; esp -= 4; W32(esp, v); }
/* 877dba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 877dc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 877dc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 877dc8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 877dcb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 877dcc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 877dcd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 877dce: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 877dd1: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 877dd8: call dword ptr [0xcfa214] */
  esp -= 4; W32(esp, 0x877ddeu); SPILL(); f_4e1d11(); if (g_unwind) return; /* Core!?PostEditChange@UObject@@UAEXXZ */ RELOAD();
/* 877dde: mov ecx, dword ptr [0xb190d8] */
  ecx = R32((uint32_t)(0xb190d8u));
/* 877de4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 877de6: je 0x877ded */
  if (zf) goto L_877ded;
L_877de8: /* 877de8: call 0x6c1a96 */
  esp -= 4; W32(esp, 0x877dedu); SPILL(); f_6c1a96(); if (g_unwind) return; RELOAD();
L_877ded: /* 877ded: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 877df0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 877df1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 877df2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 877df9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 877dfa: mov esp, ebp */
  esp = ebp;
/* 877dfc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 877dfd: ret  */
  esp += 4; SPILL(); return;
}

void f_877dfe(void) {
  LOAD_REGS();
L_877dfe: /* 877dfe: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 877e01: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 877e06: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 877e09: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 877e0a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 877e0d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x877e12u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_877e12(); return;
}

void f_877e12(void) {
  LOAD_REGS();
L_877e12: /* 877e12: push 0xa18b6c */
  { uint32_t v = 0xa18b6cu; esp -= 4; W32(esp, v); }
/* 877e17: push 0xae5ffc */
  { uint32_t v = 0xae5ffcu; esp -= 4; W32(esp, v); }
/* 877e1c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x877e22u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 877e22: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 877e25: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 877e27: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 877e29: call 0x99caf8 */
  esp -= 4; W32(esp, 0x877e2eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_877e2e: guest_badaddr(0x877e2e); return;
}

void f_877e50(void) {
  LOAD_REGS();
L_877e50: /* 877e50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 877e51: mov ebp, esp */
  ebp = esp;
/* 877e53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 877e55: push 0x9d4c80 */
  { uint32_t v = 0x9d4c80u; esp -= 4; W32(esp, v); }
/* 877e5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 877e60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 877e61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 877e68: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 877e6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 877e6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 877e6d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 877e6e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 877e71: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 877e78: call 0x6c45ed */
  esp -= 4; W32(esp, 0x877e7du); SPILL(); f_6c45ed(); if (g_unwind) return; RELOAD();
/* 877e7d: mov ecx, dword ptr [0xb190d8] */
  ecx = R32((uint32_t)(0xb190d8u));
/* 877e83: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 877e85: je 0x877e8c */
  if (zf) goto L_877e8c;
L_877e87: /* 877e87: call 0x6c1a96 */
  esp -= 4; W32(esp, 0x877e8cu); SPILL(); f_6c1a96(); if (g_unwind) return; RELOAD();
L_877e8c: /* 877e8c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 877e8f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 877e90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 877e91: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 877e98: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 877e99: mov esp, ebp */
  esp = ebp;
/* 877e9b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 877e9c: ret  */
  esp += 4; SPILL(); return;
}

void f_877e9d(void) {
  LOAD_REGS();
L_877e9d: /* 877e9d: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 877ea0: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 877ea5: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 877ea8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 877ea9: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 877eac: call 0x99caf8 */
  esp -= 4; W32(esp, 0x877eb1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_877eb1(); return;
}

void f_877eb1(void) {
  LOAD_REGS();
L_877eb1: /* 877eb1: push 0xa18bb8 */
  { uint32_t v = 0xa18bb8u; esp -= 4; W32(esp, v); }
/* 877eb6: push 0xae6004 */
  { uint32_t v = 0xae6004u; esp -= 4; W32(esp, v); }
/* 877ebb: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x877ec1u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 877ec1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 877ec4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 877ec6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 877ec8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x877ecdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_877ecd: guest_badaddr(0x877ecd); return;
}

void f_877ef0(void) {
  LOAD_REGS();
L_877ef0: /* 877ef0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 877ef1: mov ebp, esp */
  ebp = esp;
/* 877ef3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 877ef5: push 0x9d4c90 */
  { uint32_t v = 0x9d4c90u; esp -= 4; W32(esp, v); }
/* 877efa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 877f00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 877f01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 877f08: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 877f0b: mov ecx, dword ptr [0xb190d8] */
  ecx = R32((uint32_t)(0xb190d8u));
/* 877f11: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 877f13: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 877f14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 877f15: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 877f16: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 877f19: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 877f20: je 0x877f27 */
  if (zf) goto L_877f27;
L_877f22: /* 877f22: call 0x6c1a96 */
  esp -= 4; W32(esp, 0x877f27u); SPILL(); f_6c1a96(); if (g_unwind) return; RELOAD();
L_877f27: /* 877f27: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 877f2a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 877f2b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 877f2c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 877f33: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 877f34: mov esp, ebp */
  esp = ebp;
/* 877f36: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 877f37: ret  */
  esp += 4; SPILL(); return;
}

void f_877f38(void) {
  LOAD_REGS();
L_877f38: /* 877f38: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 877f3b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 877f40: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 877f43: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 877f44: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 877f47: call 0x99caf8 */
  esp -= 4; W32(esp, 0x877f4cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_877f4c(); return;
}

void f_877f4c(void) {
  LOAD_REGS();
L_877f4c: /* 877f4c: push 0xa18c10 */
  { uint32_t v = 0xa18c10u; esp -= 4; W32(esp, v); }
/* 877f51: push 0xae600c */
  { uint32_t v = 0xae600cu; esp -= 4; W32(esp, v); }
/* 877f56: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x877f5cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 877f5c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 877f5f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 877f61: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 877f63: call 0x99caf8 */
  esp -= 4; W32(esp, 0x877f68u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_877f68: guest_badaddr(0x877f68); return;
}

void f_877f90(void) {
  LOAD_REGS();
L_877f90: /* 877f90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 877f91: mov ebp, esp */
  ebp = esp;
/* 877f93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 877f95: push 0x9d4ca0 */
  { uint32_t v = 0x9d4ca0u; esp -= 4; W32(esp, v); }
/* 877f9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 877fa0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 877fa1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 877fa8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 877fab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 877fac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 877fad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 877fae: mov esi, ecx */
  esi = ecx;
/* 877fb0: mov edi, dword ptr [esi + 0x374] */
  edi = R32((uint32_t)(esi + 0x374u));
/* 877fb6: xor ebx, ebx */
  ebx = 0;
/* 877fb8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 877fbb: and edi, 0xfffffffc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 877fbe: mov dword ptr [esi + 0x374], edi */
  W32((uint32_t)(esi + 0x374u), edi);
/* 877fc4: mov dword ptr [esi + 0x3e0], ebx */
  W32((uint32_t)(esi + 0x3e0u), ebx);
/* 877fca: mov eax, dword ptr [0xb7e35c] */
  eax = R32((uint32_t)(0xb7e35cu));
/* 877fcf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 877fd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 877fd1: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 877fd4: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x877fdau); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 877fda: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 877fdc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 877fdd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 877fde: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 877fdf: mov ecx, esi */
  ecx = esi;
/* 877fe1: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x877fe4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 877fe4: lea ecx, [esi + 0x37c] */
  ecx = (uint32_t)(esi + 0x37cu);
/* 877fea: xor eax, eax */
  eax = 0;
/* 877fec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_877ff0: /* 877ff0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 877ff3: jge 0x877ff8 */
  if ((sf == of)) goto L_877ff8;
L_877ff5: /* 877ff5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 877ff6: jmp 0x877ff0 */
  goto L_877ff0;
L_877ff8: /* 877ff8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 877ff9: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 877ffb: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x878001u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 878001: dec dword ptr [0xb190fc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb190fcu)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(0xb190fcu), r);
  }
/* 878007: mov edi, dword ptr [esi + 0x36c] */
  edi = R32((uint32_t)(esi + 0x36cu));
/* 87800d: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87800f: je 0x878022 */
  if (zf) goto L_878022;
L_878011: /* 878011: push 0xb6a8d8 */
  { uint32_t v = 0xb6a8d8u; esp -= 4; W32(esp, v); }
/* 878016: mov ecx, edi */
  ecx = edi;
/* 878018: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x87801eu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 87801e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 878020: jne 0x878024 */
  if (!zf) goto L_878024;
L_878022: /* 878022: xor edi, edi */
  edi = 0;
L_878024: /* 878024: test byte ptr [esi + 0x350], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x350u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87802b: je 0x878052 */
  if (zf) goto L_878052;
L_87802d: /* 87802d: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87802f: je 0x878052 */
  if (zf) goto L_878052;
L_878031: /* 878031: mov esi, dword ptr [edi + 0x4c0] */
  esi = R32((uint32_t)(edi + 0x4c0u));
/* 878037: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 878039: je 0x878052 */
  if (zf) goto L_878052;
L_87803b: /* 87803b: push 0xb79f88 */
  { uint32_t v = 0xb79f88u; esp -= 4; W32(esp, v); }
/* 878040: mov ecx, esi */
  ecx = esi;
/* 878042: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x878048u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 878048: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87804a: je 0x878052 */
  if (zf) goto L_878052;
L_87804c: /* 87804c: mov dword ptr [esi + 0x11c], ebx */
  W32((uint32_t)(esi + 0x11cu), ebx);
L_878052: /* 878052: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 878055: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 878056: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 878057: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87805e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87805f: mov esp, ebp */
  esp = ebp;
/* 878061: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 878062: ret  */
  esp += 4; SPILL(); return;
}

void f_878063(void) {
  LOAD_REGS();
L_878063: /* 878063: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 878066: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 87806b: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 87806e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87806f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 878072: call 0x99caf8 */
  esp -= 4; W32(esp, 0x878077u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_878077(); return;
}

void f_878077(void) {
  LOAD_REGS();
L_878077: /* 878077: push 0xa18c64 */
  { uint32_t v = 0xa18c64u; esp -= 4; W32(esp, v); }
/* 87807c: push 0xae623c */
  { uint32_t v = 0xae623cu; esp -= 4; W32(esp, v); }
/* 878081: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x878087u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 878087: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87808a: xor ebx, ebx */
  ebx = 0;
/* 87808c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87808d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87808e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x878093u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_878093: guest_badaddr(0x878093); return;
}

void f_8780f0(void) {
  LOAD_REGS();
L_8780f0: /* 8780f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8780f1: mov ebp, esp */
  ebp = esp;
/* 8780f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8780f5: push 0x9d4cb0 */
  { uint32_t v = 0x9d4cb0u; esp -= 4; W32(esp, v); }
/* 8780fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 878100: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 878101: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 878108: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87810b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87810c: mov ebx, ecx */
  ebx = ecx;
/* 87810e: mov eax, dword ptr [ebx + 0x374] */
  eax = R32((uint32_t)(ebx + 0x374u));
/* 878114: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 878115: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 878116: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 878119: xor esi, esi */
  esi = 0;
/* 87811b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 87811e: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 878121: mov dword ptr [ebx + 0x374], eax */
  W32((uint32_t)(ebx + 0x374u), eax);
/* 878127: call 0x6ca533 */
  esp -= 4; W32(esp, 0x87812cu); SPILL(); f_6ca533(); if (g_unwind) return; RELOAD();
/* 87812c: mov eax, dword ptr [0xb7e358] */
  eax = R32((uint32_t)(0xb7e358u));
/* 878131: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 878132: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 878133: mov ecx, ebx */
  ecx = ebx;
/* 878135: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x87813bu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 87813b: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 87813d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87813e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87813f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 878140: mov ecx, ebx */
  ecx = ebx;
/* 878142: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x878145u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 878145: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 878148: mov dword ptr [ebx + 0x364], 0x3f800000 */
  W32((uint32_t)(ebx + 0x364u), 0x3f800000u);
/* 878152: mov dword ptr [ebx + 0x360], esi */
  W32((uint32_t)(ebx + 0x360u), esi);
/* 878158: mov dword ptr [ebp - 0x4c], 2 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x2u);
/* 87815f: mov dword ptr [ebp - 0x48], esi */
  W32((uint32_t)(ebp + 0xffffffb8u), esi);
/* 878162: mov dword ptr [ebp - 0x44], esi */
  W32((uint32_t)(ebp + 0xffffffbcu), esi);
/* 878165: mov dword ptr [ebp - 0x40], esi */
  W32((uint32_t)(ebp + 0xffffffc0u), esi);
/* 878168: mov dword ptr [ebp - 0x3c], esi */
  W32((uint32_t)(ebp + 0xffffffc4u), esi);
/* 87816b: mov dword ptr [ebp - 0x38], esi */
  W32((uint32_t)(ebp + 0xffffffc8u), esi);
/* 87816e: mov dword ptr [ebp - 0x34], esi */
  W32((uint32_t)(ebp + 0xffffffccu), esi);
/* 878171: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x878177u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 878177: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87817a: mov edi, esp */
  edi = esp;
/* 87817c: mov ecx, 0xd */
  ecx = 0xdu;
/* 878181: lea esi, [ebp - 0x4c] */
  esi = (uint32_t)(ebp + 0xffffffb4u);
/* 878184: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 878186: mov ecx, ebx */
  ecx = ebx;
/* 878188: call 0x6c452a */
  esp -= 4; W32(esp, 0x87818du); SPILL(); f_6c452a(); if (g_unwind) return; RELOAD();
/* 87818d: inc dword ptr [0xb190fc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb190fcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xb190fcu), r);
  }
/* 878193: mov esi, dword ptr [ebx + 0x36c] */
  esi = R32((uint32_t)(ebx + 0x36cu));
/* 878199: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87819b: je 0x8781ae */
  if (zf) goto L_8781ae;
L_87819d: /* 87819d: push 0xb6a8d8 */
  { uint32_t v = 0xb6a8d8u; esp -= 4; W32(esp, v); }
/* 8781a2: mov ecx, esi */
  ecx = esi;
/* 8781a4: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8781aau); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8781aa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8781ac: jne 0x8781b0 */
  if (!zf) goto L_8781b0;
L_8781ae: /* 8781ae: xor esi, esi */
  esi = 0;
L_8781b0: /* 8781b0: test byte ptr [ebx + 0x350], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x350u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8781b7: je 0x8781e2 */
  if (zf) goto L_8781e2;
L_8781b9: /* 8781b9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8781bb: je 0x8781e2 */
  if (zf) goto L_8781e2;
L_8781bd: /* 8781bd: mov esi, dword ptr [esi + 0x4c0] */
  esi = R32((uint32_t)(esi + 0x4c0u));
/* 8781c3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8781c5: je 0x8781e2 */
  if (zf) goto L_8781e2;
L_8781c7: /* 8781c7: push 0xb79f88 */
  { uint32_t v = 0xb79f88u; esp -= 4; W32(esp, v); }
/* 8781cc: mov ecx, esi */
  ecx = esi;
/* 8781ce: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8781d4u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8781d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8781d6: je 0x8781e2 */
  if (zf) goto L_8781e2;
L_8781d8: /* 8781d8: mov dword ptr [esi + 0x11c], 1 */
  W32((uint32_t)(esi + 0x11cu), 0x1u);
L_8781e2: /* 8781e2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8781e5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8781e6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8781e7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8781ee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8781ef: mov esp, ebp */
  esp = ebp;
/* 8781f1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8781f2: ret  */
  esp += 4; SPILL(); return;
}

void f_8781f3(void) {
  LOAD_REGS();
L_8781f3: /* 8781f3: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8781f6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8781fb: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8781fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8781ff: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 878202: call 0x99caf8 */
  esp -= 4; W32(esp, 0x878207u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_878207(); return;
}

void f_878207(void) {
  LOAD_REGS();
L_878207: /* 878207: push 0xa18ca4 */
  { uint32_t v = 0xa18ca4u; esp -= 4; W32(esp, v); }
/* 87820c: push 0xae6244 */
  { uint32_t v = 0xae6244u; esp -= 4; W32(esp, v); }
/* 878211: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x878217u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 878217: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87821a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87821c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87821e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x878223u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_878223: guest_badaddr(0x878223); return;
}

void f_878280(void) {
  LOAD_REGS();
L_878280: /* 878280: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 878281: mov ebp, esp */
  ebp = esp;
/* 878283: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 878285: push 0x9d4cc0 */
  { uint32_t v = 0x9d4cc0u; esp -= 4; W32(esp, v); }
/* 87828a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 878290: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 878291: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 878298: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87829b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87829c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87829d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87829e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8782a1: mov esi, ecx */
  esi = ecx;
/* 8782a3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8782aa: call 0x6c3aa8 */
  esp -= 4; W32(esp, 0x8782afu); SPILL(); f_6c3aa8(); if (g_unwind) return; RELOAD();
/* 8782af: mov ecx, esi */
  ecx = esi;
/* 8782b1: call 0x6c1a96 */
  esp -= 4; W32(esp, 0x8782b6u); SPILL(); f_6c1a96(); if (g_unwind) return; RELOAD();
/* 8782b6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8782b9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8782ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8782bb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8782c2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8782c3: mov esp, ebp */
  esp = ebp;
/* 8782c5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8782c6: ret  */
  esp += 4; SPILL(); return;
}

void f_8782c7(void) {
  LOAD_REGS();
L_8782c7: /* 8782c7: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8782ca: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8782cf: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8782d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8782d3: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8782d6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8782dbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8782db(); return;
}

void f_8782db(void) {
  LOAD_REGS();
L_8782db: /* 8782db: push 0xa18ce8 */
  { uint32_t v = 0xa18ce8u; esp -= 4; W32(esp, v); }
/* 8782e0: push 0xae6254 */
  { uint32_t v = 0xae6254u; esp -= 4; W32(esp, v); }
/* 8782e5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8782ebu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8782eb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8782ee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8782f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8782f2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8782f7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8782f7: guest_badaddr(0x8782f7); return;
}

void f_878320(void) {
  LOAD_REGS();
L_878320: /* 878320: mov eax, dword ptr [0xb190d0] */
  eax = R32((uint32_t)(0xb190d0u));
/* 878325: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 878326: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 878327: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 878328: xor ebp, ebp */
  ebp = 0;
/* 87832a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 87832c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87832d: mov ebx, ecx */
  ebx = ecx;
/* 87832f: jle 0x878421 */
  if ((zf || sf != of)) goto L_878421;
L_878335: /* 878335: xor edi, edi */
  edi = 0;
/* 878337: jmp 0x878340 */
  goto L_878340;
L_878340: /* 878340: mov eax, dword ptr [0xb190cc] */
  eax = R32((uint32_t)(0xb190ccu));
/* 878345: mov esi, dword ptr [edi + eax + 4] */
  esi = R32((uint32_t)(edi + eax + 0x4u));
/* 878349: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87834b: je 0x878394 */
  if (zf) goto L_878394;
L_87834d: /* 87834d: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 878353: mov edx, dword ptr [eax + 0x30] */
  edx = R32((uint32_t)(eax + 0x30u));
/* 878356: add eax, 0x2c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 878359: xor ecx, ecx */
  ecx = 0;
/* 87835b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 87835d: jle 0x878394 */
  if ((zf || sf != of)) goto L_878394;
L_87835f: /* 87835f: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
L_878361: /* 878361: cmp dword ptr [eax], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 878363: je 0x87836f */
  if (zf) goto L_87836f;
L_878365: /* 878365: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 878366: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 878369: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 87836b: jl 0x878361 */
  if ((sf != of)) goto L_878361;
L_87836d: /* 87836d: jmp 0x878394 */
  goto L_878394;
L_87836f: /* 87836f: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 878372: je 0x878394 */
  if (zf) goto L_878394;
L_878374: /* 878374: or dword ptr [esi + 0x88], 0x8000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x88u), r);
  }
/* 87837e: mov ecx, dword ptr [0xb190cc] */
  ecx = R32((uint32_t)(0xb190ccu));
/* 878384: mov edx, dword ptr [edi + ecx + 4] */
  edx = R32((uint32_t)(edi + ecx + 0x4u));
/* 878388: mov ecx, dword ptr [ebx + 0xb4] */
  ecx = R32((uint32_t)(ebx + 0xb4u));
/* 87838e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87838f: call 0x6ca81c */
  esp -= 4; W32(esp, 0x878394u); SPILL(); f_6ca81c(); if (g_unwind) return; RELOAD();
L_878394: /* 878394: mov eax, dword ptr [0xb190cc] */
  eax = R32((uint32_t)(0xb190ccu));
/* 878399: mov esi, dword ptr [edi + eax] */
  esi = R32((uint32_t)(edi + eax));
/* 87839c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87839e: je 0x8783fc */
  if (zf) goto L_8783fc;
L_8783a0: /* 8783a0: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 8783a6: mov edx, dword ptr [eax + 0x30] */
  edx = R32((uint32_t)(eax + 0x30u));
/* 8783a9: add eax, 0x2c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8783ac: xor ecx, ecx */
  ecx = 0;
/* 8783ae: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8783b0: jle 0x8783fc */
  if ((zf || sf != of)) goto L_8783fc;
L_8783b2: /* 8783b2: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
L_8783b4: /* 8783b4: cmp dword ptr [eax], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8783b6: je 0x8783c2 */
  if (zf) goto L_8783c2;
L_8783b8: /* 8783b8: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8783b9: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8783bc: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8783be: jl 0x8783b4 */
  if ((sf != of)) goto L_8783b4;
L_8783c0: /* 8783c0: jmp 0x8783fc */
  goto L_8783fc;
L_8783c2: /* 8783c2: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8783c5: je 0x8783fc */
  if (zf) goto L_8783fc;
L_8783c7: /* 8783c7: mov esi, dword ptr [esi + 0xd0] */
  esi = R32((uint32_t)(esi + 0xd0u));
/* 8783cd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8783cf: je 0x8783fc */
  if (zf) goto L_8783fc;
L_8783d1: /* 8783d1: push 0xb859a0 */
  { uint32_t v = 0xb859a0u; esp -= 4; W32(esp, v); }
/* 8783d6: mov ecx, esi */
  ecx = esi;
/* 8783d8: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8783deu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8783de: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8783e0: je 0x8783fc */
  if (zf) goto L_8783fc;
L_8783e2: /* 8783e2: mov eax, dword ptr [0xb190cc] */
  eax = R32((uint32_t)(0xb190ccu));
/* 8783e7: mov ecx, dword ptr [edi + eax] */
  ecx = R32((uint32_t)(edi + eax));
/* 8783ea: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8783ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8783ed: mov ecx, esi */
  ecx = esi;
/* 8783ef: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x8783f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8783f5: mov dword ptr [eax + 0x6c], 0 */
  W32((uint32_t)(eax + 0x6cu), 0x0u);
L_8783fc: /* 8783fc: mov edx, dword ptr [0xb190cc] */
  edx = R32((uint32_t)(0xb190ccu));
/* 878402: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878404: lea ecx, [edi + edx + 0x1c] */
  ecx = (uint32_t)(edi + edx + 0x1cu);
/* 878408: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 87840a: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x878410u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 878410: mov eax, dword ptr [0xb190d0] */
  eax = R32((uint32_t)(0xb190d0u));
/* 878415: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 878416: add edi, 0x28 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 878419: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 87841b: jl 0x878340 */
  if ((sf != of)) goto L_878340;
L_878421: /* 878421: xor esi, esi */
  esi = 0;
/* 878423: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 878425: jle 0x87844a */
  if ((zf || sf != of)) goto L_87844a;
L_878427: /* 878427: xor edi, edi */
  edi = 0;
/* 878429: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_878430: /* 878430: mov eax, dword ptr [0xb190cc] */
  eax = R32((uint32_t)(0xb190ccu));
/* 878435: lea ecx, [edi + eax] */
  ecx = (uint32_t)(edi + eax);
/* 878438: call 0x6c56b9 */
  esp -= 4; W32(esp, 0x87843du); SPILL(); f_6c56b9(); if (g_unwind) return; RELOAD();
/* 87843d: mov eax, dword ptr [0xb190d0] */
  eax = R32((uint32_t)(0xb190d0u));
/* 878442: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 878443: add edi, 0x28 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 878446: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878448: jl 0x878430 */
  if ((sf != of)) goto L_878430;
L_87844a: /* 87844a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87844c: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 87844e: mov ecx, 0xb190cc */
  ecx = 0xb190ccu;
/* 878453: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x878459u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 878459: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87845a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87845b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87845c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87845d: ret  */
  esp += 4; SPILL(); return;
}

void f_878339(void) {
  LOAD_REGS();
L_878339: /* 878339: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_878340: /* 878340: mov eax, dword ptr [0xb190cc] */
  eax = R32((uint32_t)(0xb190ccu));
/* 878345: mov esi, dword ptr [edi + eax + 4] */
  esi = R32((uint32_t)(edi + eax + 0x4u));
/* 878349: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87834b: je 0x878394 */
  if (zf) goto L_878394;
L_87834d: /* 87834d: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 878353: mov edx, dword ptr [eax + 0x30] */
  edx = R32((uint32_t)(eax + 0x30u));
/* 878356: add eax, 0x2c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 878359: xor ecx, ecx */
  ecx = 0;
/* 87835b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 87835d: jle 0x878394 */
  if ((zf || sf != of)) goto L_878394;
L_87835f: /* 87835f: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
L_878361: /* 878361: cmp dword ptr [eax], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 878363: je 0x87836f */
  if (zf) goto L_87836f;
L_878365: /* 878365: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 878366: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 878369: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 87836b: jl 0x878361 */
  if ((sf != of)) goto L_878361;
L_87836d: /* 87836d: jmp 0x878394 */
  goto L_878394;
L_87836f: /* 87836f: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 878372: je 0x878394 */
  if (zf) goto L_878394;
L_878374: /* 878374: or dword ptr [esi + 0x88], 0x8000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x88u), r);
  }
/* 87837e: mov ecx, dword ptr [0xb190cc] */
  ecx = R32((uint32_t)(0xb190ccu));
/* 878384: mov edx, dword ptr [edi + ecx + 4] */
  edx = R32((uint32_t)(edi + ecx + 0x4u));
/* 878388: mov ecx, dword ptr [ebx + 0xb4] */
  ecx = R32((uint32_t)(ebx + 0xb4u));
/* 87838e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87838f: call 0x6ca81c */
  esp -= 4; W32(esp, 0x878394u); SPILL(); f_6ca81c(); if (g_unwind) return; RELOAD();
L_878394: /* 878394: mov eax, dword ptr [0xb190cc] */
  eax = R32((uint32_t)(0xb190ccu));
/* 878399: mov esi, dword ptr [edi + eax] */
  esi = R32((uint32_t)(edi + eax));
/* 87839c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87839e: je 0x8783fc */
  if (zf) goto L_8783fc;
L_8783a0: /* 8783a0: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 8783a6: mov edx, dword ptr [eax + 0x30] */
  edx = R32((uint32_t)(eax + 0x30u));
/* 8783a9: add eax, 0x2c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8783ac: xor ecx, ecx */
  ecx = 0;
/* 8783ae: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8783b0: jle 0x8783fc */
  if ((zf || sf != of)) goto L_8783fc;
L_8783b2: /* 8783b2: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
L_8783b4: /* 8783b4: cmp dword ptr [eax], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8783b6: je 0x8783c2 */
  if (zf) goto L_8783c2;
L_8783b8: /* 8783b8: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8783b9: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8783bc: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8783be: jl 0x8783b4 */
  if ((sf != of)) goto L_8783b4;
L_8783c0: /* 8783c0: jmp 0x8783fc */
  goto L_8783fc;
L_8783c2: /* 8783c2: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8783c5: je 0x8783fc */
  if (zf) goto L_8783fc;
L_8783c7: /* 8783c7: mov esi, dword ptr [esi + 0xd0] */
  esi = R32((uint32_t)(esi + 0xd0u));
/* 8783cd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8783cf: je 0x8783fc */
  if (zf) goto L_8783fc;
L_8783d1: /* 8783d1: push 0xb859a0 */
  { uint32_t v = 0xb859a0u; esp -= 4; W32(esp, v); }
/* 8783d6: mov ecx, esi */
  ecx = esi;
/* 8783d8: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8783deu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8783de: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8783e0: je 0x8783fc */
  if (zf) goto L_8783fc;
L_8783e2: /* 8783e2: mov eax, dword ptr [0xb190cc] */
  eax = R32((uint32_t)(0xb190ccu));
/* 8783e7: mov ecx, dword ptr [edi + eax] */
  ecx = R32((uint32_t)(edi + eax));
/* 8783ea: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8783ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8783ed: mov ecx, esi */
  ecx = esi;
/* 8783ef: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x8783f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8783f5: mov dword ptr [eax + 0x6c], 0 */
  W32((uint32_t)(eax + 0x6cu), 0x0u);
L_8783fc: /* 8783fc: mov edx, dword ptr [0xb190cc] */
  edx = R32((uint32_t)(0xb190ccu));
/* 878402: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878404: lea ecx, [edi + edx + 0x1c] */
  ecx = (uint32_t)(edi + edx + 0x1cu);
/* 878408: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 87840a: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x878410u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 878410: mov eax, dword ptr [0xb190d0] */
  eax = R32((uint32_t)(0xb190d0u));
/* 878415: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 878416: add edi, 0x28 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 878419: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 87841b: jl 0x878340 */
  if ((sf != of)) goto L_878340;
L_878421: /* 878421: xor esi, esi */
  esi = 0;
/* 878423: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 878425: jle 0x87844a */
  if ((zf || sf != of)) goto L_87844a;
L_878427: /* 878427: xor edi, edi */
  edi = 0;
/* 878429: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_878430: /* 878430: mov eax, dword ptr [0xb190cc] */
  eax = R32((uint32_t)(0xb190ccu));
/* 878435: lea ecx, [edi + eax] */
  ecx = (uint32_t)(edi + eax);
/* 878438: call 0x6c56b9 */
  esp -= 4; W32(esp, 0x87843du); SPILL(); f_6c56b9(); if (g_unwind) return; RELOAD();
/* 87843d: mov eax, dword ptr [0xb190d0] */
  eax = R32((uint32_t)(0xb190d0u));
/* 878442: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 878443: add edi, 0x28 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 878446: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878448: jl 0x878430 */
  if ((sf != of)) goto L_878430;
L_87844a: /* 87844a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87844c: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 87844e: mov ecx, 0xb190cc */
  ecx = 0xb190ccu;
/* 878453: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x878459u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 878459: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87845a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87845b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87845c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87845d: ret  */
  esp += 4; SPILL(); return;
}

void f_8784b0(void) {
  LOAD_REGS();
L_8784b0: /* 8784b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8784b2: push 0x9d4d13 */
  { uint32_t v = 0x9d4d13u; esp -= 4; W32(esp, v); }
/* 8784b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8784bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8784be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8784c5: sub esp, 0xc8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8784cb: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 8784d0: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8784d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8784d4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8784d5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8784d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8784d7: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 8784db: je 0x878f48 */
  if (zf) goto L_878f48;
L_8784e1: /* 8784e1: mov eax, dword ptr [0xb190d0] */
  eax = R32((uint32_t)(0xb190d0u));
/* 8784e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8784e8: je 0x8784ef */
  if (zf) goto L_8784ef;
L_8784ea: /* 8784ea: call 0x6c1b95 */
  esp -= 4; W32(esp, 0x8784efu); SPILL(); f_6c1b95(); if (g_unwind) return; RELOAD();
L_8784ef: /* 8784ef: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 8784f5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8784f7: push 0xae6038 */
  { uint32_t v = 0xae6038u; esp -= 4; W32(esp, v); }
/* 8784fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8784fd: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x878503u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 878503: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 878506: lea ecx, [esp + 0x5c] */
  ecx = (uint32_t)(esp + 0x5cu);
/* 87850a: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x878510u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 878510: lea ecx, [esp + 0xc0] */
  ecx = (uint32_t)(esp + 0xc0u);
/* 878517: mov dword ptr [esp + 0xe0], 0 */
  W32((uint32_t)(esp + 0xe0u), 0x0u);
/* 878522: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x878528u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 878528: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 87852c: mov byte ptr [esp + 0xe0], 1 */
  W8((uint32_t)(esp + 0xe0u), 0x1u);
/* 878534: mov dword ptr [esp + 0x34], 0xcc74c0 */
  W32((uint32_t)(esp + 0x34u), 0xcc74c0u);
/* 87853c: mov dword ptr [esp + 0x38], 0xffffffff */
  W32((uint32_t)(esp + 0x38u), 0xffffffffu);
/* 878544: call 0x6c38b4 */
  esp -= 4; W32(esp, 0x878549u); SPILL(); f_6c38b4(); if (g_unwind) return; RELOAD();
/* 878549: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 87854e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 878551: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 878555: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878557: jge 0x8785eb */
  if ((sf == of)) goto L_8785eb;
L_87855d: /* 87855d: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
L_878561: /* 878561: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 878563: mov edi, dword ptr [eax + esi*4] */
  edi = R32((uint32_t)(eax + esi*4));
/* 878566: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878568: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 87856c: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x878572u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 878572: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 878576: lea ebp, [edi + 0x3a4] */
  ebp = (uint32_t)(edi + 0x3a4u);
/* 87857c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87857d: mov ecx, ebp */
  ecx = ebp;
/* 87857f: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x878585u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 878585: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878587: je 0x8785bc */
  if (zf) goto L_8785bc;
L_878589: /* 878589: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 87858b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 87858d: lea ecx, [esp + 0x64] */
  ecx = (uint32_t)(esp + 0x64u);
/* 878591: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x878597u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 878597: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 87859b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 87859d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 87859f: lea ecx, [esp + 0xc8] */
  ecx = (uint32_t)(esp + 0xc8u);
/* 8785a6: mov dword ptr [edx + eax*4], edi */
  W32((uint32_t)(edx + eax*4), edi);
/* 8785a9: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8785afu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8785af: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 8785b2: mov edx, dword ptr [esp + 0xc0] */
  edx = R32((uint32_t)(esp + 0xc0u));
/* 8785b9: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_8785bc: /* 8785bc: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
L_8785c1: /* 8785c1: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8785c4: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8785c5: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8785c7: jge 0x8785eb */
  if ((sf == of)) goto L_8785eb;
L_8785c9: /* 8785c9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8785cb: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 8785ce: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8785d0: je 0x8785c1 */
  if (zf) goto L_8785c1;
L_8785d2: /* 8785d2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8785d3: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8785d9u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8785d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8785db: je 0x8785bc */
  if (zf) goto L_8785bc;
L_8785dd: /* 8785dd: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 8785e2: cmp esi, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8785e5: jl 0x878561 */
  if ((sf != of)) goto L_878561;
L_8785eb: /* 8785eb: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 8785ef: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8785f5u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8785f5: lea ecx, [esp + 0x9c] */
  ecx = (uint32_t)(esp + 0x9cu);
/* 8785fc: mov byte ptr [esp + 0xe0], 2 */
  W8((uint32_t)(esp + 0xe0u), 0x2u);
/* 878604: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x87860au); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 87860a: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 87860e: mov eax, dword ptr [ebx + 0x38c] */
  eax = R32((uint32_t)(ebx + 0x38cu));
/* 878614: xor ebp, ebp */
  ebp = 0;
/* 878616: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 878618: mov byte ptr [esp + 0xe0], 3 */
  W8((uint32_t)(esp + 0xe0u), 0x3u);
/* 878620: jle 0x8786ae */
  if ((zf || sf != of)) goto L_8786ae;
L_878626: /* 878626: jmp 0x878630 */
  goto L_878630;
L_878630: /* 878630: mov edx, dword ptr [ebx + 0x388] */
  edx = R32((uint32_t)(ebx + 0x388u));
/* 878636: mov esi, dword ptr [edx + ebp*4] */
  esi = R32((uint32_t)(edx + ebp*4));
/* 878639: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87863b: je 0x8786a3 */
  if (zf) goto L_8786a3;
L_87863d: /* 87863d: push 0xcdced8 */
  { uint32_t v = 0xcdced8u; esp -= 4; W32(esp, v); }
/* 878642: mov ecx, esi */
  ecx = esi;
/* 878644: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x87864au); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 87864a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87864c: je 0x8786a3 */
  if (zf) goto L_8786a3;
L_87864e: /* 87864e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878650: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 878654: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x87865au); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 87865a: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 87865e: lea edi, [esi + 0x50] */
  edi = (uint32_t)(esi + 0x50u);
/* 878661: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 878662: mov ecx, edi */
  ecx = edi;
/* 878664: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x87866au); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 87866a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87866c: je 0x8786a3 */
  if (zf) goto L_8786a3;
L_87866e: /* 87866e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 878670: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 878672: lea ecx, [esp + 0x70] */
  ecx = (uint32_t)(esp + 0x70u);
/* 878676: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x87867cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 87867c: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 87867e: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 878682: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 878684: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 878687: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 878689: lea ecx, [esp + 0xa4] */
  ecx = (uint32_t)(esp + 0xa4u);
/* 878690: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x878696u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 878696: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* 878699: mov edx, dword ptr [esp + 0x9c] */
  edx = R32((uint32_t)(esp + 0x9cu));
/* 8786a0: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_8786a3: /* 8786a3: mov eax, dword ptr [ebx + 0x38c] */
  eax = R32((uint32_t)(ebx + 0x38cu));
/* 8786a9: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 8786aa: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8786ac: jl 0x878630 */
  if ((sf != of)) goto L_878630;
L_8786ae: /* 8786ae: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 8786b2: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8786b8u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8786b8: mov byte ptr [esp + 0xe0], 4 */
  W8((uint32_t)(esp + 0xe0u), 0x4u);
/* 8786c0: or ebx, 0xffffffff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_8786c3: /* 8786c3: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
L_8786c8: /* 8786c8: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8786cb: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8786cc: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8786ce: jge 0x8786ed */
  if ((sf == of)) goto L_8786ed;
L_8786d0: /* 8786d0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8786d2: mov ecx, dword ptr [ecx + ebx*4] */
  ecx = R32((uint32_t)(ecx + ebx*4));
/* 8786d5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8786d7: je 0x8786c8 */
  if (zf) goto L_8786c8;
L_8786d9: /* 8786d9: push 0xb6d258 */
  { uint32_t v = 0xb6d258u; esp -= 4; W32(esp, v); }
/* 8786de: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8786e4u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8786e4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8786e6: je 0x8786c3 */
  if (zf) goto L_8786c3;
L_8786e8: /* 8786e8: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
L_8786ed: /* 8786ed: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8786f0: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8786f2: jge 0x878b40 */
  if ((sf == of)) goto L_878b40;
L_8786f8: /* 8786f8: jmp 0x878700 */
  goto L_878700;
L_878700: /* 878700: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 878702: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 878705: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x87870bu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 87870b: mov ecx, eax */
  ecx = eax;
/* 87870d: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x878713u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 878713: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 878714: lea ecx, [esp + 0xd0] */
  ecx = (uint32_t)(esp + 0xd0u);
/* 87871b: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x878721u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 878721: push 0xae60ac */
  { uint32_t v = 0xae60acu; esp -= 4; W32(esp, v); }
/* 878726: lea ecx, [esp + 0xd0] */
  ecx = (uint32_t)(esp + 0xd0u);
/* 87872d: mov byte ptr [esp + 0xe4], 5 */
  W8((uint32_t)(esp + 0xe4u), 0x5u);
/* 878735: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x87873bu); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 87873b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87873d: je 0x878af8 */
  if (zf) goto L_878af8;
L_878743: /* 878743: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 878748: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 87874a: mov eax, dword ptr [ecx + ebx*4] */
  eax = R32((uint32_t)(ecx + ebx*4));
/* 87874d: mov edx, dword ptr [eax + 0x100] */
  edx = R32((uint32_t)(eax + 0x100u));
/* 878753: lea eax, [esp + 0x50] */
  eax = (uint32_t)(esp + 0x50u);
/* 878757: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 878758: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 87875c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87875d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 878760: xor ebp, ebp */
  ebp = 0;
/* 878762: mov ecx, esp */
  ecx = esp;
/* 878764: mov dword ptr [esp + 0x24], esp */
  W32((uint32_t)(esp + 0x24u), esp);
/* 878768: push 0xae60dc */
  { uint32_t v = 0xae60dcu; esp -= 4; W32(esp, v); }
/* 87876d: mov dword ptr [esp + 0x70], edx */
  W32((uint32_t)(esp + 0x70u), edx);
/* 878771: mov dword ptr [esp + 0x60], ebp */
  W32((uint32_t)(esp + 0x60u), ebp);
/* 878775: mov dword ptr [esp + 0x68], ebp */
  W32((uint32_t)(esp + 0x68u), ebp);
/* 878779: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x87877fu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 87877f: mov edx, dword ptr [0xcfa1ac] */
  edx = R32((uint32_t)(0xcfa1acu));
/* 878785: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 878787: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* 87878a: call dword ptr [0xcfab5c] */
  esp -= 4; W32(esp, 0x878790u); SPILL(); f_4e1f5a(); if (g_unwind) return; /* Core!?FindArrayProperty@UObject@@QAEHVFString@@PAPAVFArray@@PAH@Z */ RELOAD();
/* 878790: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 878792: je 0x878af8 */
  if (zf) goto L_878af8;
L_878798: /* 878798: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 878799: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 87879d: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8787a3u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8787a3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8787a4: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 8787a8: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 8787ac: mov dword ptr [esp + 0x24], ebp */
  W32((uint32_t)(esp + 0x24u), ebp);
/* 8787b0: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8787b6u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8787b6: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 8787ba: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8787bd: xor edi, edi */
  edi = 0;
/* 8787bf: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8787c1: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 8787c5: jle 0x878af8 */
  if ((zf || sf != of)) goto L_878af8;
L_8787cb: /* 8787cb: jmp 0x8787d0 */
  goto L_8787d0;
L_8787d0: /* 8787d0: call dword ptr [0xcfa544] */
  esp -= 4; W32(esp, 0x8787d6u); SPILL(); f_4e3d19(); if (g_unwind) return; /* Core!?GetData@FArray@@QAEPAXXZ */ RELOAD();
/* 8787d6: mov ecx, edi */
  ecx = edi;
/* 8787d8: imul ecx, dword ptr [esp + 0x50] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x50u)));
  ecx = (uint32_t)r;
  }
/* 8787dd: mov esi, eax */
  esi = eax;
/* 8787df: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8787e1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8787e3: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8787e9u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8787e9: mov ecx, eax */
  ecx = eax;
/* 8787eb: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8787f1u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8787f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8787f2: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 8787f6: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8787fcu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8787fc: push 0xae60ec */
  { uint32_t v = 0xae60ecu; esp -= 4; W32(esp, v); }
/* 878801: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 878805: mov byte ptr [esp + 0xe4], 6 */
  W8((uint32_t)(esp + 0xe4u), 0x6u);
/* 87880d: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x878813u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 878813: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878815: je 0x87884e */
  if (zf) goto L_87884e;
L_878817: /* 878817: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 87881b: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x878821u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 878821: lea edx, [esp + 0x54] */
  edx = (uint32_t)(esp + 0x54u);
/* 878825: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 878826: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 878829: mov ecx, esp */
  ecx = esp;
/* 87882b: mov dword ptr [esp + 0x44], esp */
  W32((uint32_t)(esp + 0x44u), esp);
/* 87882f: push 0xae6114 */
  { uint32_t v = 0xae6114u; esp -= 4; W32(esp, v); }
/* 878834: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x87883au); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 87883a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 87883c: call dword ptr [0xcfab58] */
  esp -= 4; W32(esp, 0x878842u); SPILL(); f_4e219e(); if (g_unwind) return; /* Core!?FindFNameProperty@UObject@@QAEHVFString@@PAVFName@@@Z */ RELOAD();
/* 878842: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 878844: je 0x87884e */
  if (zf) goto L_87884e;
L_878846: /* 878846: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 87884a: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
L_87884e: /* 87884e: push 0xae6130 */
  { uint32_t v = 0xae6130u; esp -= 4; W32(esp, v); }
/* 878853: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 878857: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x87885du); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 87885d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87885f: je 0x8788fc */
  if (zf) goto L_8788fc;
L_878865: /* 878865: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 878869: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x87886fu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 87886f: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 878873: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 878874: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 878877: mov ecx, esp */
  ecx = esp;
/* 878879: mov dword ptr [esp + 0x44], esp */
  W32((uint32_t)(esp + 0x44u), esp);
/* 87887d: push 0xae6150 */
  { uint32_t v = 0xae6150u; esp -= 4; W32(esp, v); }
/* 878882: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x878888u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 878888: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 87888a: call dword ptr [0xcfab58] */
  esp -= 4; W32(esp, 0x878890u); SPILL(); f_4e219e(); if (g_unwind) return; /* Core!?FindFNameProperty@UObject@@QAEHVFString@@PAVFName@@@Z */ RELOAD();
/* 878890: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 878892: je 0x87889c */
  if (zf) goto L_87889c;
L_878894: /* 878894: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 878898: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
L_87889c: /* 87889c: lea eax, [esp + 0x78] */
  eax = (uint32_t)(esp + 0x78u);
/* 8788a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8788a1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8788a4: mov ecx, esp */
  ecx = esp;
/* 8788a6: mov dword ptr [esp + 0x44], esp */
  W32((uint32_t)(esp + 0x44u), esp);
/* 8788aa: push 0xae6164 */
  { uint32_t v = 0xae6164u; esp -= 4; W32(esp, v); }
/* 8788af: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8788b5u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8788b5: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8788b7: call dword ptr [0xcfab54] */
  esp -= 4; W32(esp, 0x8788bdu); SPILL(); f_4e2121(); if (g_unwind) return; /* Core!?FindFloatProperty@UObject@@QAEHVFString@@PAM@Z */ RELOAD();
/* 8788bd: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8788bf: je 0x8788c9 */
  if (zf) goto L_8788c9;
L_8788c1: /* 8788c1: mov ecx, dword ptr [esp + 0x78] */
  ecx = R32((uint32_t)(esp + 0x78u));
/* 8788c5: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
L_8788c9: /* 8788c9: lea edx, [esp + 0x8c] */
  edx = (uint32_t)(esp + 0x8cu);
/* 8788d0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8788d1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8788d4: mov ecx, esp */
  ecx = esp;
/* 8788d6: mov dword ptr [esp + 0x44], esp */
  W32((uint32_t)(esp + 0x44u), esp);
/* 8788da: push 0xae6178 */
  { uint32_t v = 0xae6178u; esp -= 4; W32(esp, v); }
/* 8788df: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8788e5u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8788e5: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8788e7: call dword ptr [0xcfab54] */
  esp -= 4; W32(esp, 0x8788edu); SPILL(); f_4e2121(); if (g_unwind) return; /* Core!?FindFloatProperty@UObject@@QAEHVFString@@PAM@Z */ RELOAD();
/* 8788ed: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8788ef: je 0x8788fc */
  if (zf) goto L_8788fc;
L_8788f1: /* 8788f1: mov eax, dword ptr [esp + 0x8c] */
  eax = R32((uint32_t)(esp + 0x8cu));
/* 8788f8: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
L_8788fc: /* 8788fc: push 0xae6190 */
  { uint32_t v = 0xae6190u; esp -= 4; W32(esp, v); }
/* 878901: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 878905: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x87890bu); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 87890b: push 0xae61b8 */
  { uint32_t v = 0xae61b8u; esp -= 4; W32(esp, v); }
/* 878910: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 878914: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x87891au); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 87891a: push 0xae61e4 */
  { uint32_t v = 0xae61e4u; esp -= 4; W32(esp, v); }
/* 87891f: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 878923: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x878929u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 878929: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87892b: je 0x878946 */
  if (zf) goto L_878946;
L_87892d: /* 87892d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 87892e: lea ecx, [esp + 0x9c] */
  ecx = (uint32_t)(esp + 0x9cu);
/* 878935: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x87893bu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 87893b: mov ecx, dword ptr [esp + 0x98] */
  ecx = R32((uint32_t)(esp + 0x98u));
/* 878942: mov dword ptr [esp + 0x58], ecx */
  W32((uint32_t)(esp + 0x58u), ecx);
L_878946: /* 878946: push 0xae620c */
  { uint32_t v = 0xae620cu; esp -= 4; W32(esp, v); }
/* 87894b: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 87894f: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x878955u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 878955: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 878959: mov byte ptr [esp + 0xe0], 5 */
  W8((uint32_t)(esp + 0xe0u), 0x5u);
/* 878961: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x878967u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 878967: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 878968: lea ecx, [esp + 0x78] */
  ecx = (uint32_t)(esp + 0x78u);
/* 87896c: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x878972u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 878972: lea edx, [esp + 0x74] */
  edx = (uint32_t)(esp + 0x74u);
/* 878976: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 878977: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 87897b: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x878981u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 878981: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878983: je 0x8789ca */
  if (zf) goto L_8789ca;
L_878985: /* 878985: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 878986: lea ecx, [esp + 0x84] */
  ecx = (uint32_t)(esp + 0x84u);
/* 87898d: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x878993u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 878993: lea eax, [esp + 0x80] */
  eax = (uint32_t)(esp + 0x80u);
/* 87899a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87899b: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 87899f: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x8789a5u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 8789a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8789a7: je 0x8789ca */
  if (zf) goto L_8789ca;
L_8789a9: /* 8789a9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8789aa: lea ecx, [esp + 0x8c] */
  ecx = (uint32_t)(esp + 0x8cu);
/* 8789b1: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8789b7u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8789b7: mov ecx, dword ptr [esp + 0x88] */
  ecx = R32((uint32_t)(esp + 0x88u));
/* 8789be: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 8789c2: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_8789ca: /* 8789ca: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8789cb: lea ecx, [esp + 0x80] */
  ecx = (uint32_t)(esp + 0x80u);
/* 8789d2: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8789d8u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8789d8: lea edx, [esp + 0x7c] */
  edx = (uint32_t)(esp + 0x7cu);
/* 8789dc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8789dd: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 8789e1: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x8789e7u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 8789e7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8789e9: je 0x878ae4 */
  if (zf) goto L_878ae4;
L_8789ef: /* 8789ef: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8789f0: lea ecx, [esp + 0x98] */
  ecx = (uint32_t)(esp + 0x98u);
/* 8789f7: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8789fdu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8789fd: lea eax, [esp + 0x94] */
  eax = (uint32_t)(esp + 0x94u);
/* 878a04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 878a05: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 878a09: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x878a0fu); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 878a0f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878a11: je 0x878ae4 */
  if (zf) goto L_878ae4;
L_878a17: /* 878a17: lea ecx, [esp + 0xa8] */
  ecx = (uint32_t)(esp + 0xa8u);
/* 878a1e: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x878a24u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 878a24: lea ecx, [esp + 0xac] */
  ecx = (uint32_t)(esp + 0xacu);
/* 878a2b: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x878a31u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 878a31: lea ecx, [esp + 0xb0] */
  ecx = (uint32_t)(esp + 0xb0u);
/* 878a38: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x878a3eu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 878a3e: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 878a42: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 878a46: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 878a4a: mov dword ptr [esp + 0xa8], ecx */
  W32((uint32_t)(esp + 0xa8u), ecx);
/* 878a51: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 878a55: mov dword ptr [esp + 0xac], edx */
  W32((uint32_t)(esp + 0xacu), edx);
/* 878a5c: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 878a60: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 878a62: mov dword ptr [esp + 0xb8], ecx */
  W32((uint32_t)(esp + 0xb8u), ecx);
/* 878a69: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 878a6b: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 878a6f: mov dword ptr [esp + 0xb8], eax */
  W32((uint32_t)(esp + 0xb8u), eax);
/* 878a76: mov dword ptr [esp + 0xc4], edx */
  W32((uint32_t)(esp + 0xc4u), edx);
/* 878a7d: mov dword ptr [esp + 0xc0], 0 */
  W32((uint32_t)(esp + 0xc0u), 0x0u);
/* 878a88: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x878a8eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 878a8e: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 878a92: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 878a95: lea edi, [ecx + eax*8] */
  edi = (uint32_t)(ecx + eax*8);
/* 878a98: mov ecx, 6 */
  ecx = 0x6u;
/* 878a9d: lea esi, [esp + 0xa8] */
  esi = (uint32_t)(esp + 0xa8u);
/* 878aa4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 878aa6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 878aa7: lea ecx, [esp + 0x88] */
  ecx = (uint32_t)(esp + 0x88u);
/* 878aae: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x878ab4u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 878ab4: mov edx, dword ptr [esp + 0x84] */
  edx = R32((uint32_t)(esp + 0x84u));
/* 878abb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 878abc: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* 878ac3: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 878ac7: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x878acdu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 878acd: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* 878ad4: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 878ad8: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 878adc: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_878ae4: /* 878ae4: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 878ae8: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 878aeb: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 878aec: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878aee: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 878af2: jl 0x8787d0 */
  if ((sf != of)) goto L_8787d0;
L_878af8: /* 878af8: lea ecx, [esp + 0xcc] */
  ecx = (uint32_t)(esp + 0xccu);
/* 878aff: mov byte ptr [esp + 0xe0], 4 */
  W8((uint32_t)(esp + 0xe0u), 0x4u);
/* 878b07: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x878b0du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_878b0d: /* 878b0d: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
L_878b12: /* 878b12: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 878b15: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 878b16: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878b18: jge 0x878b40 */
  if ((sf == of)) goto L_878b40;
L_878b1a: /* 878b1a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 878b1c: mov ecx, dword ptr [ecx + ebx*4] */
  ecx = R32((uint32_t)(ecx + ebx*4));
/* 878b1f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878b21: je 0x878b12 */
  if (zf) goto L_878b12;
L_878b23: /* 878b23: push 0xb6d258 */
  { uint32_t v = 0xb6d258u; esp -= 4; W32(esp, v); }
/* 878b28: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x878b2eu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 878b2e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878b30: je 0x878b0d */
  if (zf) goto L_878b0d;
L_878b32: /* 878b32: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 878b37: cmp ebx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878b3a: jl 0x878700 */
  if ((sf != of)) goto L_878700;
L_878b40: /* 878b40: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 878b44: xor ebp, ebp */
  ebp = 0;
/* 878b46: xor ebx, ebx */
  ebx = 0;
/* 878b48: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878b4a: jle 0x878ba3 */
  if ((zf || sf != of)) goto L_878ba3;
L_878b4c: /* 878b4c: xor edi, edi */
  edi = 0;
/* 878b4e: mov edi, edi */
  edi = edi;
L_878b50: /* 878b50: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 878b54: mov dword ptr [edi + edx + 0x10], ebp */
  W32((uint32_t)(edi + edx + 0x10u), ebp);
/* 878b58: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 878b5c: xor esi, esi */
  esi = 0;
/* 878b5e: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878b60: jle 0x878b97 */
  if ((zf || sf != of)) goto L_878b97;
L_878b62: /* 878b62: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 878b66: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 878b6a: lea ecx, [eax + esi*4] */
  ecx = (uint32_t)(eax + esi*4);
/* 878b6d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 878b6e: lea ecx, [edi + edx + 4] */
  ecx = (uint32_t)(edi + edx + 0x4u);
/* 878b72: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x878b78u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 878b78: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878b7a: je 0x878b8e */
  if (zf) goto L_878b8e;
L_878b7c: /* 878b7c: mov eax, dword ptr [esp + 0x9c] */
  eax = R32((uint32_t)(esp + 0x9cu));
/* 878b83: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 878b86: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 878b8a: mov dword ptr [edi + edx + 0x10], ecx */
  W32((uint32_t)(edi + edx + 0x10u), ecx);
L_878b8e: /* 878b8e: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 878b92: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 878b93: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878b95: jl 0x878b62 */
  if ((sf != of)) goto L_878b62;
L_878b97: /* 878b97: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 878b9b: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 878b9c: add edi, 0x18 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 878b9f: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878ba1: jl 0x878b50 */
  if ((sf != of)) goto L_878b50;
L_878ba3: /* 878ba3: cmp dword ptr [esp + 0x60], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x60u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878ba7: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 878bab: jle 0x878cd2 */
  if ((zf || sf != of)) goto L_878cd2;
L_878bb1: /* 878bb1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 878bb3: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 878bb5: mov ecx, 0xb190cc */
  ecx = 0xb190ccu;
/* 878bba: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x878bc0u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 878bc0: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 878bc4: mov ebp, eax */
  ebp = eax;
/* 878bc6: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 878bca: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 878bcd: mov eax, dword ptr [0xb190cc] */
  eax = R32((uint32_t)(0xb190ccu));
/* 878bd2: lea esi, [ebp + ebp*4] */
  esi = (uint32_t)(ebp + ebp*4);
/* 878bd6: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 878bd9: mov dword ptr [esi + eax], edx */
  W32((uint32_t)(esi + eax), edx);
/* 878bdc: mov ecx, dword ptr [0xb190cc] */
  ecx = R32((uint32_t)(0xb190ccu));
/* 878be2: xor ebx, ebx */
  ebx = 0;
/* 878be4: mov dword ptr [esi + ecx + 4], ebx */
  W32((uint32_t)(esi + ecx + 0x4u), ebx);
/* 878be8: cmp dword ptr [esp + 0x28], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878bec: jle 0x878c6a */
  if ((zf || sf != of)) goto L_878c6a;
L_878bee: /* 878bee: xor edi, edi */
  edi = 0;
L_878bf0: /* 878bf0: mov edx, dword ptr [esp + 0xc0] */
  edx = R32((uint32_t)(esp + 0xc0u));
/* 878bf7: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 878bfb: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 878bfe: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 878c02: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 878c03: lea ecx, [edi + edx] */
  ecx = (uint32_t)(edi + edx);
/* 878c06: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x878c0cu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 878c0c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878c0e: je 0x878c5e */
  if (zf) goto L_878c5e;
L_878c10: /* 878c10: mov eax, dword ptr [0xb190cc] */
  eax = R32((uint32_t)(0xb190ccu));
/* 878c15: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 878c17: lea ecx, [esi + eax + 0x1c] */
  ecx = (uint32_t)(esi + eax + 0x1cu);
/* 878c1b: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 878c1d: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x878c23u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 878c23: mov edx, dword ptr [0xb190cc] */
  edx = R32((uint32_t)(0xb190ccu));
/* 878c29: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 878c2c: mov eax, dword ptr [esi + edx + 0x1c] */
  eax = R32((uint32_t)(esi + edx + 0x1cu));
/* 878c30: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 878c33: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 878c37: mov edx, dword ptr [edi + ecx + 0x10] */
  edx = R32((uint32_t)(edi + ecx + 0x10u));
/* 878c3b: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 878c3d: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 878c41: mov edx, dword ptr [edi + ecx + 8] */
  edx = R32((uint32_t)(edi + ecx + 0x8u));
/* 878c45: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 878c48: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 878c4c: mov edx, dword ptr [edi + ecx + 0xc] */
  edx = R32((uint32_t)(edi + ecx + 0xcu));
/* 878c50: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 878c53: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 878c57: mov edx, dword ptr [edi + ecx + 0x14] */
  edx = R32((uint32_t)(edi + ecx + 0x14u));
/* 878c5b: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
L_878c5e: /* 878c5e: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 878c62: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 878c63: add edi, 0x18 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 878c66: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878c68: jl 0x878bf0 */
  if ((sf != of)) goto L_878bf0;
L_878c6a: /* 878c6a: mov eax, dword ptr [0xb190cc] */
  eax = R32((uint32_t)(0xb190ccu));
/* 878c6f: mov ecx, dword ptr [esi + eax + 0x20] */
  ecx = R32((uint32_t)(esi + eax + 0x20u));
/* 878c73: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878c75: je 0x878ca0 */
  if (zf) goto L_878ca0;
L_878c77: /* 878c77: mov ecx, dword ptr [esi + eax] */
  ecx = R32((uint32_t)(esi + eax));
/* 878c7a: mov edx, dword ptr [ecx + 0xd0] */
  edx = R32((uint32_t)(ecx + 0xd0u));
/* 878c80: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878c82: je 0x878ca0 */
  if (zf) goto L_878ca0;
L_878c84: /* 878c84: mov edx, ecx */
  edx = ecx;
/* 878c86: mov ecx, dword ptr [edx + 0xd0] */
  ecx = R32((uint32_t)(edx + 0xd0u));
/* 878c8c: push 0xb859a0 */
  { uint32_t v = 0xb859a0u; esp -= 4; W32(esp, v); }
/* 878c91: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x878c97u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 878c97: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878c99: jne 0x878cbd */
  if (!zf) goto L_878cbd;
L_878c9b: /* 878c9b: mov eax, dword ptr [0xb190cc] */
  eax = R32((uint32_t)(0xb190ccu));
L_878ca0: /* 878ca0: lea esi, [esi + eax + 0x1c] */
  esi = (uint32_t)(esi + eax + 0x1cu);
/* 878ca4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878ca6: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 878ca8: mov ecx, esi */
  ecx = esi;
/* 878caa: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x878cb0u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 878cb0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 878cb2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 878cb3: mov ecx, 0xb190cc */
  ecx = 0xb190ccu;
/* 878cb8: call 0x6c35da */
  esp -= 4; W32(esp, 0x878cbdu); SPILL(); f_6c35da(); if (g_unwind) return; RELOAD();
L_878cbd: /* 878cbd: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 878cc1: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 878cc5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 878cc6: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878cc8: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 878ccc: jl 0x878bb1 */
  if ((sf != of)) goto L_878bb1;
L_878cd2: /* 878cd2: mov eax, dword ptr [0xb190d0] */
  eax = R32((uint32_t)(0xb190d0u));
/* 878cd7: xor ebp, ebp */
  ebp = 0;
/* 878cd9: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878cdb: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 878cdf: jle 0x878ee1 */
  if ((zf || sf != of)) goto L_878ee1;
L_878ce5: /* 878ce5: mov dword ptr [esp + 0x3c], ebp */
  W32((uint32_t)(esp + 0x3cu), ebp);
/* 878ce9: mov dword ptr [esp + 0x40], ebp */
  W32((uint32_t)(esp + 0x40u), ebp);
/* 878ced: mov dword ptr [esp + 0x44], ebp */
  W32((uint32_t)(esp + 0x44u), ebp);
/* 878cf1: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 878cf5: jmp 0x878d00 */
  goto L_878d00;
L_878d00: /* 878d00: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 878d04: mov eax, dword ptr [0xb190cc] */
  eax = R32((uint32_t)(0xb190ccu));
/* 878d09: mov edi, dword ptr [ecx + 0xb4] */
  edi = R32((uint32_t)(ecx + 0xb4u));
/* 878d0f: mov esi, dword ptr [eax + ebp] */
  esi = R32((uint32_t)(eax + ebp));
/* 878d12: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d14: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d16: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d18: lea ecx, [esp + 0xd8] */
  ecx = (uint32_t)(esp + 0xd8u);
/* 878d1f: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x878d25u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 878d25: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 878d27: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d2b: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 878d2d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d2f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d33: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 878d36: mov edx, esp */
  edx = esp;
/* 878d38: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 878d3a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 878d3d: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 878d40: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 878d43: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 878d46: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 878d4a: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 878d4e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 878d51: mov ecx, esp */
  ecx = esp;
/* 878d53: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 878d55: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* 878d59: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 878d5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 878d5d: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 878d60: mov ecx, esp */
  ecx = esp;
/* 878d62: mov dword ptr [esp + 0x64], esp */
  W32((uint32_t)(esp + 0x64u), esp);
/* 878d66: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d68: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x878d6eu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 878d6e: push 0xcdbf48 */
  { uint32_t v = 0xcdbf48u; esp -= 4; W32(esp, v); }
/* 878d73: mov ecx, edi */
  ecx = edi;
/* 878d75: call dword ptr [ebx + 0xac] */
  { uint32_t t = R32((uint32_t)(ebx + 0xacu)); esp -= 4; W32(esp, 0x878d7bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 878d7b: mov edi, eax */
  edi = eax;
/* 878d7d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878d7f: je 0x878ec3 */
  if (zf) goto L_878ec3;
L_878d85: /* 878d85: mov eax, dword ptr [0xb190cc] */
  eax = R32((uint32_t)(0xb190ccu));
/* 878d8a: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 878d8e: mov dword ptr [eax + ebp + 4], edi */
  W32((uint32_t)(eax + ebp + 0x4u), edi);
/* 878d92: mov edx, dword ptr [ebx + 0xb4] */
  edx = R32((uint32_t)(ebx + 0xb4u));
/* 878d98: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 878d9b: xor eax, eax */
  eax = 0;
/* 878d9d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 878d9f: jle 0x878db0 */
  if ((zf || sf != of)) goto L_878db0;
L_878da1: /* 878da1: mov edx, dword ptr [edx + 0x2c] */
  edx = R32((uint32_t)(edx + 0x2cu));
L_878da4: /* 878da4: cmp dword ptr [edx], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 878da6: je 0x878db3 */
  if (zf) goto L_878db3;
L_878da8: /* 878da8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 878da9: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 878dac: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878dae: jl 0x878da4 */
  if ((sf != of)) goto L_878da4;
L_878db0: /* 878db0: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_878db3: /* 878db3: mov ecx, dword ptr [0xb190cc] */
  ecx = R32((uint32_t)(0xb190ccu));
/* 878db9: mov dword ptr [ecx + ebp + 0xc], eax */
  W32((uint32_t)(ecx + ebp + 0xcu), eax);
/* 878dbd: mov edx, dword ptr [ebx + 0xb4] */
  edx = R32((uint32_t)(ebx + 0xb4u));
/* 878dc3: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 878dc6: xor eax, eax */
  eax = 0;
/* 878dc8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 878dca: jle 0x878ddc */
  if ((zf || sf != of)) goto L_878ddc;
L_878dcc: /* 878dcc: mov edx, dword ptr [edx + 0x2c] */
  edx = R32((uint32_t)(edx + 0x2cu));
/* 878dcf: nop  */
L_878dd0: /* 878dd0: cmp dword ptr [edx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 878dd2: je 0x878ddf */
  if (zf) goto L_878ddf;
L_878dd4: /* 878dd4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 878dd5: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 878dd8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878dda: jl 0x878dd0 */
  if ((sf != of)) goto L_878dd0;
L_878ddc: /* 878ddc: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_878ddf: /* 878ddf: mov edx, dword ptr [0xb190cc] */
  edx = R32((uint32_t)(0xb190ccu));
/* 878de5: mov dword ptr [edx + ebp + 0x10], eax */
  W32((uint32_t)(edx + ebp + 0x10u), eax);
/* 878de9: mov eax, dword ptr [esi + 0xd0] */
  eax = R32((uint32_t)(esi + 0xd0u));
/* 878def: mov ecx, dword ptr [0xb190cc] */
  ecx = R32((uint32_t)(0xb190ccu));
/* 878df5: mov dword ptr [ecx + ebp + 8], eax */
  W32((uint32_t)(ecx + ebp + 0x8u), eax);
/* 878df9: mov edx, dword ptr [esi + 0xd0] */
  edx = R32((uint32_t)(esi + 0xd0u));
/* 878dff: mov dword ptr [edi + 0xd0], edx */
  W32((uint32_t)(edi + 0xd0u), edx);
/* 878e05: mov eax, dword ptr [esi + 0x284] */
  eax = R32((uint32_t)(esi + 0x284u));
/* 878e0b: mov dword ptr [edi + 0x284], eax */
  W32((uint32_t)(edi + 0x284u), eax);
/* 878e11: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 878e17: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 878e19: lea edx, [edi + 0x17c] */
  edx = (uint32_t)(edi + 0x17cu);
/* 878e1f: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 878e21: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 878e24: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 878e27: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 878e2a: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 878e2d: lea edx, [esi + 0x288] */
  edx = (uint32_t)(esi + 0x288u);
/* 878e33: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 878e35: lea eax, [edi + 0x288] */
  eax = (uint32_t)(edi + 0x288u);
/* 878e3b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 878e3d: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 878e40: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 878e43: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 878e46: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 878e49: mov al, byte ptr [esi + 0x2b0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2b0u))) & 0xffu);
/* 878e4f: mov byte ptr [edi + 0x2b0], al */
  W8((uint32_t)(edi + 0x2b0u), (eax & 0xffu));
/* 878e55: mov cl, byte ptr [esi + 0x51] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x51u))) & 0xffu);
/* 878e58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878e5a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878e5c: mov byte ptr [edi + 0x51], cl */
  W8((uint32_t)(edi + 0x51u), (ecx & 0xffu));
/* 878e5f: mov ecx, dword ptr [ebx + 0xb4] */
  ecx = R32((uint32_t)(ebx + 0xb4u));
/* 878e65: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 878e67: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878e69: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 878e6c: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 878e72: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 878e74: mov ebx, esp */
  ebx = esp;
/* 878e76: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
/* 878e78: mov ebp, dword ptr [eax + 4] */
  ebp = R32((uint32_t)(eax + 0x4u));
/* 878e7b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 878e7e: mov dword ptr [ebx + 4], ebp */
  W32((uint32_t)(ebx + 0x4u), ebp);
/* 878e81: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 878e82: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 878e85: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x878e8bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 878e8b: mov ecx, dword ptr [edi + 0xd0] */
  ecx = R32((uint32_t)(edi + 0xd0u));
/* 878e91: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 878e93: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 878e94: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x878e9au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 878e9a: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* 878ea0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 878ea2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 878ea3: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x878ea9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 878ea9: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* 878eaf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 878eb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 878eb2: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x878eb8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 878eb8: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 878ebc: mov dword ptr [eax + 0x6c], 1 */
  W32((uint32_t)(eax + 0x6cu), 0x1u);
L_878ec3: /* 878ec3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 878ec7: mov ecx, dword ptr [0xb190d0] */
  ecx = R32((uint32_t)(0xb190d0u));
/* 878ecd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 878ece: add ebp, 0x28 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 878ed1: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878ed3: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 878ed7: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 878edb: jl 0x878d00 */
  if ((sf != of)) goto L_878d00;
L_878ee1: /* 878ee1: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 878ee5: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 878ee9: mov dword ptr [0xb190c8], eax */
  W32((uint32_t)(0xb190c8u), eax);
/* 878eee: mov byte ptr [esp + 0xe0], 3 */
  W8((uint32_t)(esp + 0xe0u), 0x3u);
/* 878ef6: call 0x6c6ab9 */
  esp -= 4; W32(esp, 0x878efbu); SPILL(); f_6c6ab9(); if (g_unwind) return; RELOAD();
/* 878efb: lea ecx, [esp + 0x9c] */
  ecx = (uint32_t)(esp + 0x9cu);
/* 878f02: mov byte ptr [esp + 0xe0], 2 */
  W8((uint32_t)(esp + 0xe0u), 0x2u);
/* 878f0a: call 0x6c2ed2 */
  esp -= 4; W32(esp, 0x878f0fu); SPILL(); f_6c2ed2(); if (g_unwind) return; RELOAD();
/* 878f0f: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 878f13: mov byte ptr [esp + 0xe0], 1 */
  W8((uint32_t)(esp + 0xe0u), 0x1u);
/* 878f1b: call 0x6c34f9 */
  esp -= 4; W32(esp, 0x878f20u); SPILL(); f_6c34f9(); if (g_unwind) return; RELOAD();
/* 878f20: lea ecx, [esp + 0xc0] */
  ecx = (uint32_t)(esp + 0xc0u);
/* 878f27: mov byte ptr [esp + 0xe0], 0 */
  W8((uint32_t)(esp + 0xe0u), 0x0u);
/* 878f2f: call 0x6c34f9 */
  esp -= 4; W32(esp, 0x878f34u); SPILL(); f_6c34f9(); if (g_unwind) return; RELOAD();
/* 878f34: lea ecx, [esp + 0x5c] */
  ecx = (uint32_t)(esp + 0x5cu);
/* 878f38: mov dword ptr [esp + 0xe0], 0xffffffff */
  W32((uint32_t)(esp + 0xe0u), 0xffffffffu);
/* 878f43: call 0x6c9d0e */
  esp -= 4; W32(esp, 0x878f48u); SPILL(); f_6c9d0e(); if (g_unwind) return; RELOAD();
L_878f48: /* 878f48: mov ecx, dword ptr [esp + 0xd8] */
  ecx = R32((uint32_t)(esp + 0xd8u));
/* 878f4f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 878f50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 878f51: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 878f52: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 878f59: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 878f5a: add esp, 0xd4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xd4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 878f60: ret  */
  esp += 4; SPILL(); return;
}

void f_878628(void) {
  LOAD_REGS();
L_878628: /* 878628: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 87862f: nop  */
L_878630: /* 878630: mov edx, dword ptr [ebx + 0x388] */
  edx = R32((uint32_t)(ebx + 0x388u));
/* 878636: mov esi, dword ptr [edx + ebp*4] */
  esi = R32((uint32_t)(edx + ebp*4));
/* 878639: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87863b: je 0x8786a3 */
  if (zf) goto L_8786a3;
L_87863d: /* 87863d: push 0xcdced8 */
  { uint32_t v = 0xcdced8u; esp -= 4; W32(esp, v); }
/* 878642: mov ecx, esi */
  ecx = esi;
/* 878644: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x87864au); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 87864a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87864c: je 0x8786a3 */
  if (zf) goto L_8786a3;
L_87864e: /* 87864e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878650: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 878654: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x87865au); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 87865a: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 87865e: lea edi, [esi + 0x50] */
  edi = (uint32_t)(esi + 0x50u);
/* 878661: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 878662: mov ecx, edi */
  ecx = edi;
/* 878664: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x87866au); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 87866a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87866c: je 0x8786a3 */
  if (zf) goto L_8786a3;
L_87866e: /* 87866e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 878670: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 878672: lea ecx, [esp + 0x70] */
  ecx = (uint32_t)(esp + 0x70u);
/* 878676: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x87867cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 87867c: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 87867e: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 878682: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 878684: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 878687: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 878689: lea ecx, [esp + 0xa4] */
  ecx = (uint32_t)(esp + 0xa4u);
/* 878690: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x878696u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 878696: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* 878699: mov edx, dword ptr [esp + 0x9c] */
  edx = R32((uint32_t)(esp + 0x9cu));
/* 8786a0: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
L_8786a3: /* 8786a3: mov eax, dword ptr [ebx + 0x38c] */
  eax = R32((uint32_t)(ebx + 0x38cu));
/* 8786a9: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 8786aa: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8786ac: jl 0x878630 */
  if ((sf != of)) goto L_878630;
L_8786ae: /* 8786ae: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 8786b2: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8786b8u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8786b8: mov byte ptr [esp + 0xe0], 4 */
  W8((uint32_t)(esp + 0xe0u), 0x4u);
/* 8786c0: or ebx, 0xffffffff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_8786c3: /* 8786c3: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
L_8786c8: /* 8786c8: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8786cb: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8786cc: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8786ce: jge 0x8786ed */
  if ((sf == of)) goto L_8786ed;
L_8786d0: /* 8786d0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8786d2: mov ecx, dword ptr [ecx + ebx*4] */
  ecx = R32((uint32_t)(ecx + ebx*4));
/* 8786d5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8786d7: je 0x8786c8 */
  if (zf) goto L_8786c8;
L_8786d9: /* 8786d9: push 0xb6d258 */
  { uint32_t v = 0xb6d258u; esp -= 4; W32(esp, v); }
/* 8786de: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8786e4u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8786e4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8786e6: je 0x8786c3 */
  if (zf) goto L_8786c3;
L_8786e8: /* 8786e8: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
L_8786ed: /* 8786ed: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8786f0: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8786f2: jge 0x878b40 */
  if ((sf == of)) goto L_878b40;
L_8786f8: /* 8786f8: jmp 0x878700 */
  goto L_878700;
L_878700: /* 878700: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 878702: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 878705: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x87870bu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 87870b: mov ecx, eax */
  ecx = eax;
/* 87870d: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x878713u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 878713: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 878714: lea ecx, [esp + 0xd0] */
  ecx = (uint32_t)(esp + 0xd0u);
/* 87871b: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x878721u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 878721: push 0xae60ac */
  { uint32_t v = 0xae60acu; esp -= 4; W32(esp, v); }
/* 878726: lea ecx, [esp + 0xd0] */
  ecx = (uint32_t)(esp + 0xd0u);
/* 87872d: mov byte ptr [esp + 0xe4], 5 */
  W8((uint32_t)(esp + 0xe4u), 0x5u);
/* 878735: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x87873bu); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 87873b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87873d: je 0x878af8 */
  if (zf) goto L_878af8;
L_878743: /* 878743: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 878748: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 87874a: mov eax, dword ptr [ecx + ebx*4] */
  eax = R32((uint32_t)(ecx + ebx*4));
/* 87874d: mov edx, dword ptr [eax + 0x100] */
  edx = R32((uint32_t)(eax + 0x100u));
/* 878753: lea eax, [esp + 0x50] */
  eax = (uint32_t)(esp + 0x50u);
/* 878757: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 878758: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 87875c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87875d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 878760: xor ebp, ebp */
  ebp = 0;
/* 878762: mov ecx, esp */
  ecx = esp;
/* 878764: mov dword ptr [esp + 0x24], esp */
  W32((uint32_t)(esp + 0x24u), esp);
/* 878768: push 0xae60dc */
  { uint32_t v = 0xae60dcu; esp -= 4; W32(esp, v); }
/* 87876d: mov dword ptr [esp + 0x70], edx */
  W32((uint32_t)(esp + 0x70u), edx);
/* 878771: mov dword ptr [esp + 0x60], ebp */
  W32((uint32_t)(esp + 0x60u), ebp);
/* 878775: mov dword ptr [esp + 0x68], ebp */
  W32((uint32_t)(esp + 0x68u), ebp);
/* 878779: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x87877fu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 87877f: mov edx, dword ptr [0xcfa1ac] */
  edx = R32((uint32_t)(0xcfa1acu));
/* 878785: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 878787: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* 87878a: call dword ptr [0xcfab5c] */
  esp -= 4; W32(esp, 0x878790u); SPILL(); f_4e1f5a(); if (g_unwind) return; /* Core!?FindArrayProperty@UObject@@QAEHVFString@@PAPAVFArray@@PAH@Z */ RELOAD();
/* 878790: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 878792: je 0x878af8 */
  if (zf) goto L_878af8;
L_878798: /* 878798: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 878799: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 87879d: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8787a3u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8787a3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8787a4: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 8787a8: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 8787ac: mov dword ptr [esp + 0x24], ebp */
  W32((uint32_t)(esp + 0x24u), ebp);
/* 8787b0: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8787b6u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8787b6: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 8787ba: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8787bd: xor edi, edi */
  edi = 0;
/* 8787bf: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8787c1: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 8787c5: jle 0x878af8 */
  if ((zf || sf != of)) goto L_878af8;
L_8787cb: /* 8787cb: jmp 0x8787d0 */
  goto L_8787d0;
L_8787d0: /* 8787d0: call dword ptr [0xcfa544] */
  esp -= 4; W32(esp, 0x8787d6u); SPILL(); f_4e3d19(); if (g_unwind) return; /* Core!?GetData@FArray@@QAEPAXXZ */ RELOAD();
/* 8787d6: mov ecx, edi */
  ecx = edi;
/* 8787d8: imul ecx, dword ptr [esp + 0x50] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x50u)));
  ecx = (uint32_t)r;
  }
/* 8787dd: mov esi, eax */
  esi = eax;
/* 8787df: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8787e1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8787e3: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8787e9u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8787e9: mov ecx, eax */
  ecx = eax;
/* 8787eb: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8787f1u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8787f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8787f2: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 8787f6: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8787fcu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8787fc: push 0xae60ec */
  { uint32_t v = 0xae60ecu; esp -= 4; W32(esp, v); }
/* 878801: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 878805: mov byte ptr [esp + 0xe4], 6 */
  W8((uint32_t)(esp + 0xe4u), 0x6u);
/* 87880d: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x878813u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 878813: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878815: je 0x87884e */
  if (zf) goto L_87884e;
L_878817: /* 878817: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 87881b: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x878821u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 878821: lea edx, [esp + 0x54] */
  edx = (uint32_t)(esp + 0x54u);
/* 878825: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 878826: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 878829: mov ecx, esp */
  ecx = esp;
/* 87882b: mov dword ptr [esp + 0x44], esp */
  W32((uint32_t)(esp + 0x44u), esp);
/* 87882f: push 0xae6114 */
  { uint32_t v = 0xae6114u; esp -= 4; W32(esp, v); }
/* 878834: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x87883au); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 87883a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 87883c: call dword ptr [0xcfab58] */
  esp -= 4; W32(esp, 0x878842u); SPILL(); f_4e219e(); if (g_unwind) return; /* Core!?FindFNameProperty@UObject@@QAEHVFString@@PAVFName@@@Z */ RELOAD();
/* 878842: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 878844: je 0x87884e */
  if (zf) goto L_87884e;
L_878846: /* 878846: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 87884a: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
L_87884e: /* 87884e: push 0xae6130 */
  { uint32_t v = 0xae6130u; esp -= 4; W32(esp, v); }
/* 878853: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 878857: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x87885du); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 87885d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87885f: je 0x8788fc */
  if (zf) goto L_8788fc;
L_878865: /* 878865: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 878869: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x87886fu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 87886f: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 878873: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 878874: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 878877: mov ecx, esp */
  ecx = esp;
/* 878879: mov dword ptr [esp + 0x44], esp */
  W32((uint32_t)(esp + 0x44u), esp);
/* 87887d: push 0xae6150 */
  { uint32_t v = 0xae6150u; esp -= 4; W32(esp, v); }
/* 878882: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x878888u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 878888: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 87888a: call dword ptr [0xcfab58] */
  esp -= 4; W32(esp, 0x878890u); SPILL(); f_4e219e(); if (g_unwind) return; /* Core!?FindFNameProperty@UObject@@QAEHVFString@@PAVFName@@@Z */ RELOAD();
/* 878890: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 878892: je 0x87889c */
  if (zf) goto L_87889c;
L_878894: /* 878894: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 878898: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
L_87889c: /* 87889c: lea eax, [esp + 0x78] */
  eax = (uint32_t)(esp + 0x78u);
/* 8788a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8788a1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8788a4: mov ecx, esp */
  ecx = esp;
/* 8788a6: mov dword ptr [esp + 0x44], esp */
  W32((uint32_t)(esp + 0x44u), esp);
/* 8788aa: push 0xae6164 */
  { uint32_t v = 0xae6164u; esp -= 4; W32(esp, v); }
/* 8788af: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8788b5u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8788b5: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8788b7: call dword ptr [0xcfab54] */
  esp -= 4; W32(esp, 0x8788bdu); SPILL(); f_4e2121(); if (g_unwind) return; /* Core!?FindFloatProperty@UObject@@QAEHVFString@@PAM@Z */ RELOAD();
/* 8788bd: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8788bf: je 0x8788c9 */
  if (zf) goto L_8788c9;
L_8788c1: /* 8788c1: mov ecx, dword ptr [esp + 0x78] */
  ecx = R32((uint32_t)(esp + 0x78u));
/* 8788c5: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
L_8788c9: /* 8788c9: lea edx, [esp + 0x8c] */
  edx = (uint32_t)(esp + 0x8cu);
/* 8788d0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8788d1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8788d4: mov ecx, esp */
  ecx = esp;
/* 8788d6: mov dword ptr [esp + 0x44], esp */
  W32((uint32_t)(esp + 0x44u), esp);
/* 8788da: push 0xae6178 */
  { uint32_t v = 0xae6178u; esp -= 4; W32(esp, v); }
/* 8788df: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8788e5u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8788e5: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8788e7: call dword ptr [0xcfab54] */
  esp -= 4; W32(esp, 0x8788edu); SPILL(); f_4e2121(); if (g_unwind) return; /* Core!?FindFloatProperty@UObject@@QAEHVFString@@PAM@Z */ RELOAD();
/* 8788ed: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8788ef: je 0x8788fc */
  if (zf) goto L_8788fc;
L_8788f1: /* 8788f1: mov eax, dword ptr [esp + 0x8c] */
  eax = R32((uint32_t)(esp + 0x8cu));
/* 8788f8: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
L_8788fc: /* 8788fc: push 0xae6190 */
  { uint32_t v = 0xae6190u; esp -= 4; W32(esp, v); }
/* 878901: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 878905: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x87890bu); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 87890b: push 0xae61b8 */
  { uint32_t v = 0xae61b8u; esp -= 4; W32(esp, v); }
/* 878910: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 878914: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x87891au); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 87891a: push 0xae61e4 */
  { uint32_t v = 0xae61e4u; esp -= 4; W32(esp, v); }
/* 87891f: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 878923: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x878929u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 878929: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87892b: je 0x878946 */
  if (zf) goto L_878946;
L_87892d: /* 87892d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 87892e: lea ecx, [esp + 0x9c] */
  ecx = (uint32_t)(esp + 0x9cu);
/* 878935: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x87893bu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 87893b: mov ecx, dword ptr [esp + 0x98] */
  ecx = R32((uint32_t)(esp + 0x98u));
/* 878942: mov dword ptr [esp + 0x58], ecx */
  W32((uint32_t)(esp + 0x58u), ecx);
L_878946: /* 878946: push 0xae620c */
  { uint32_t v = 0xae620cu; esp -= 4; W32(esp, v); }
/* 87894b: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 87894f: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x878955u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 878955: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 878959: mov byte ptr [esp + 0xe0], 5 */
  W8((uint32_t)(esp + 0xe0u), 0x5u);
/* 878961: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x878967u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 878967: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 878968: lea ecx, [esp + 0x78] */
  ecx = (uint32_t)(esp + 0x78u);
/* 87896c: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x878972u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 878972: lea edx, [esp + 0x74] */
  edx = (uint32_t)(esp + 0x74u);
/* 878976: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 878977: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 87897b: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x878981u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 878981: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878983: je 0x8789ca */
  if (zf) goto L_8789ca;
L_878985: /* 878985: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 878986: lea ecx, [esp + 0x84] */
  ecx = (uint32_t)(esp + 0x84u);
/* 87898d: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x878993u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 878993: lea eax, [esp + 0x80] */
  eax = (uint32_t)(esp + 0x80u);
/* 87899a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87899b: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 87899f: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x8789a5u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 8789a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8789a7: je 0x8789ca */
  if (zf) goto L_8789ca;
L_8789a9: /* 8789a9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8789aa: lea ecx, [esp + 0x8c] */
  ecx = (uint32_t)(esp + 0x8cu);
/* 8789b1: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8789b7u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8789b7: mov ecx, dword ptr [esp + 0x88] */
  ecx = R32((uint32_t)(esp + 0x88u));
/* 8789be: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 8789c2: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_8789ca: /* 8789ca: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8789cb: lea ecx, [esp + 0x80] */
  ecx = (uint32_t)(esp + 0x80u);
/* 8789d2: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8789d8u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8789d8: lea edx, [esp + 0x7c] */
  edx = (uint32_t)(esp + 0x7cu);
/* 8789dc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8789dd: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 8789e1: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x8789e7u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 8789e7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8789e9: je 0x878ae4 */
  if (zf) goto L_878ae4;
L_8789ef: /* 8789ef: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8789f0: lea ecx, [esp + 0x98] */
  ecx = (uint32_t)(esp + 0x98u);
/* 8789f7: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8789fdu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8789fd: lea eax, [esp + 0x94] */
  eax = (uint32_t)(esp + 0x94u);
/* 878a04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 878a05: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 878a09: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x878a0fu); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 878a0f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878a11: je 0x878ae4 */
  if (zf) goto L_878ae4;
L_878a17: /* 878a17: lea ecx, [esp + 0xa8] */
  ecx = (uint32_t)(esp + 0xa8u);
/* 878a1e: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x878a24u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 878a24: lea ecx, [esp + 0xac] */
  ecx = (uint32_t)(esp + 0xacu);
/* 878a2b: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x878a31u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 878a31: lea ecx, [esp + 0xb0] */
  ecx = (uint32_t)(esp + 0xb0u);
/* 878a38: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x878a3eu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 878a3e: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 878a42: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 878a46: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 878a4a: mov dword ptr [esp + 0xa8], ecx */
  W32((uint32_t)(esp + 0xa8u), ecx);
/* 878a51: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 878a55: mov dword ptr [esp + 0xac], edx */
  W32((uint32_t)(esp + 0xacu), edx);
/* 878a5c: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 878a60: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 878a62: mov dword ptr [esp + 0xb8], ecx */
  W32((uint32_t)(esp + 0xb8u), ecx);
/* 878a69: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 878a6b: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 878a6f: mov dword ptr [esp + 0xb8], eax */
  W32((uint32_t)(esp + 0xb8u), eax);
/* 878a76: mov dword ptr [esp + 0xc4], edx */
  W32((uint32_t)(esp + 0xc4u), edx);
/* 878a7d: mov dword ptr [esp + 0xc0], 0 */
  W32((uint32_t)(esp + 0xc0u), 0x0u);
/* 878a88: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x878a8eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 878a8e: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 878a92: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 878a95: lea edi, [ecx + eax*8] */
  edi = (uint32_t)(ecx + eax*8);
/* 878a98: mov ecx, 6 */
  ecx = 0x6u;
/* 878a9d: lea esi, [esp + 0xa8] */
  esi = (uint32_t)(esp + 0xa8u);
/* 878aa4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 878aa6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 878aa7: lea ecx, [esp + 0x88] */
  ecx = (uint32_t)(esp + 0x88u);
/* 878aae: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x878ab4u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 878ab4: mov edx, dword ptr [esp + 0x84] */
  edx = R32((uint32_t)(esp + 0x84u));
/* 878abb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 878abc: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* 878ac3: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 878ac7: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x878acdu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 878acd: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* 878ad4: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 878ad8: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 878adc: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_878ae4: /* 878ae4: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 878ae8: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 878aeb: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 878aec: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878aee: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 878af2: jl 0x8787d0 */
  if ((sf != of)) goto L_8787d0;
L_878af8: /* 878af8: lea ecx, [esp + 0xcc] */
  ecx = (uint32_t)(esp + 0xccu);
/* 878aff: mov byte ptr [esp + 0xe0], 4 */
  W8((uint32_t)(esp + 0xe0u), 0x4u);
/* 878b07: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x878b0du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_878b0d: /* 878b0d: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
L_878b12: /* 878b12: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 878b15: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 878b16: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878b18: jge 0x878b40 */
  if ((sf == of)) goto L_878b40;
L_878b1a: /* 878b1a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 878b1c: mov ecx, dword ptr [ecx + ebx*4] */
  ecx = R32((uint32_t)(ecx + ebx*4));
/* 878b1f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878b21: je 0x878b12 */
  if (zf) goto L_878b12;
L_878b23: /* 878b23: push 0xb6d258 */
  { uint32_t v = 0xb6d258u; esp -= 4; W32(esp, v); }
/* 878b28: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x878b2eu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 878b2e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878b30: je 0x878b0d */
  if (zf) goto L_878b0d;
L_878b32: /* 878b32: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 878b37: cmp ebx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878b3a: jl 0x878700 */
  if ((sf != of)) goto L_878700;
L_878b40: /* 878b40: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 878b44: xor ebp, ebp */
  ebp = 0;
/* 878b46: xor ebx, ebx */
  ebx = 0;
/* 878b48: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878b4a: jle 0x878ba3 */
  if ((zf || sf != of)) goto L_878ba3;
L_878b4c: /* 878b4c: xor edi, edi */
  edi = 0;
/* 878b4e: mov edi, edi */
  edi = edi;
L_878b50: /* 878b50: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 878b54: mov dword ptr [edi + edx + 0x10], ebp */
  W32((uint32_t)(edi + edx + 0x10u), ebp);
/* 878b58: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 878b5c: xor esi, esi */
  esi = 0;
/* 878b5e: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878b60: jle 0x878b97 */
  if ((zf || sf != of)) goto L_878b97;
L_878b62: /* 878b62: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 878b66: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 878b6a: lea ecx, [eax + esi*4] */
  ecx = (uint32_t)(eax + esi*4);
/* 878b6d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 878b6e: lea ecx, [edi + edx + 4] */
  ecx = (uint32_t)(edi + edx + 0x4u);
/* 878b72: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x878b78u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 878b78: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878b7a: je 0x878b8e */
  if (zf) goto L_878b8e;
L_878b7c: /* 878b7c: mov eax, dword ptr [esp + 0x9c] */
  eax = R32((uint32_t)(esp + 0x9cu));
/* 878b83: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 878b86: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 878b8a: mov dword ptr [edi + edx + 0x10], ecx */
  W32((uint32_t)(edi + edx + 0x10u), ecx);
L_878b8e: /* 878b8e: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 878b92: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 878b93: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878b95: jl 0x878b62 */
  if ((sf != of)) goto L_878b62;
L_878b97: /* 878b97: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 878b9b: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 878b9c: add edi, 0x18 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 878b9f: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878ba1: jl 0x878b50 */
  if ((sf != of)) goto L_878b50;
L_878ba3: /* 878ba3: cmp dword ptr [esp + 0x60], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x60u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878ba7: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 878bab: jle 0x878cd2 */
  if ((zf || sf != of)) goto L_878cd2;
L_878bb1: /* 878bb1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 878bb3: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 878bb5: mov ecx, 0xb190cc */
  ecx = 0xb190ccu;
/* 878bba: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x878bc0u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 878bc0: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 878bc4: mov ebp, eax */
  ebp = eax;
/* 878bc6: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 878bca: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 878bcd: mov eax, dword ptr [0xb190cc] */
  eax = R32((uint32_t)(0xb190ccu));
/* 878bd2: lea esi, [ebp + ebp*4] */
  esi = (uint32_t)(ebp + ebp*4);
/* 878bd6: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 878bd9: mov dword ptr [esi + eax], edx */
  W32((uint32_t)(esi + eax), edx);
/* 878bdc: mov ecx, dword ptr [0xb190cc] */
  ecx = R32((uint32_t)(0xb190ccu));
/* 878be2: xor ebx, ebx */
  ebx = 0;
/* 878be4: mov dword ptr [esi + ecx + 4], ebx */
  W32((uint32_t)(esi + ecx + 0x4u), ebx);
/* 878be8: cmp dword ptr [esp + 0x28], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878bec: jle 0x878c6a */
  if ((zf || sf != of)) goto L_878c6a;
L_878bee: /* 878bee: xor edi, edi */
  edi = 0;
L_878bf0: /* 878bf0: mov edx, dword ptr [esp + 0xc0] */
  edx = R32((uint32_t)(esp + 0xc0u));
/* 878bf7: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 878bfb: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 878bfe: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 878c02: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 878c03: lea ecx, [edi + edx] */
  ecx = (uint32_t)(edi + edx);
/* 878c06: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x878c0cu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 878c0c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878c0e: je 0x878c5e */
  if (zf) goto L_878c5e;
L_878c10: /* 878c10: mov eax, dword ptr [0xb190cc] */
  eax = R32((uint32_t)(0xb190ccu));
/* 878c15: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 878c17: lea ecx, [esi + eax + 0x1c] */
  ecx = (uint32_t)(esi + eax + 0x1cu);
/* 878c1b: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 878c1d: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x878c23u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 878c23: mov edx, dword ptr [0xb190cc] */
  edx = R32((uint32_t)(0xb190ccu));
/* 878c29: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 878c2c: mov eax, dword ptr [esi + edx + 0x1c] */
  eax = R32((uint32_t)(esi + edx + 0x1cu));
/* 878c30: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 878c33: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 878c37: mov edx, dword ptr [edi + ecx + 0x10] */
  edx = R32((uint32_t)(edi + ecx + 0x10u));
/* 878c3b: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 878c3d: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 878c41: mov edx, dword ptr [edi + ecx + 8] */
  edx = R32((uint32_t)(edi + ecx + 0x8u));
/* 878c45: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 878c48: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 878c4c: mov edx, dword ptr [edi + ecx + 0xc] */
  edx = R32((uint32_t)(edi + ecx + 0xcu));
/* 878c50: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 878c53: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 878c57: mov edx, dword ptr [edi + ecx + 0x14] */
  edx = R32((uint32_t)(edi + ecx + 0x14u));
/* 878c5b: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
L_878c5e: /* 878c5e: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 878c62: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 878c63: add edi, 0x18 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 878c66: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878c68: jl 0x878bf0 */
  if ((sf != of)) goto L_878bf0;
L_878c6a: /* 878c6a: mov eax, dword ptr [0xb190cc] */
  eax = R32((uint32_t)(0xb190ccu));
/* 878c6f: mov ecx, dword ptr [esi + eax + 0x20] */
  ecx = R32((uint32_t)(esi + eax + 0x20u));
/* 878c73: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878c75: je 0x878ca0 */
  if (zf) goto L_878ca0;
L_878c77: /* 878c77: mov ecx, dword ptr [esi + eax] */
  ecx = R32((uint32_t)(esi + eax));
/* 878c7a: mov edx, dword ptr [ecx + 0xd0] */
  edx = R32((uint32_t)(ecx + 0xd0u));
/* 878c80: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878c82: je 0x878ca0 */
  if (zf) goto L_878ca0;
L_878c84: /* 878c84: mov edx, ecx */
  edx = ecx;
/* 878c86: mov ecx, dword ptr [edx + 0xd0] */
  ecx = R32((uint32_t)(edx + 0xd0u));
/* 878c8c: push 0xb859a0 */
  { uint32_t v = 0xb859a0u; esp -= 4; W32(esp, v); }
/* 878c91: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x878c97u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 878c97: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878c99: jne 0x878cbd */
  if (!zf) goto L_878cbd;
L_878c9b: /* 878c9b: mov eax, dword ptr [0xb190cc] */
  eax = R32((uint32_t)(0xb190ccu));
L_878ca0: /* 878ca0: lea esi, [esi + eax + 0x1c] */
  esi = (uint32_t)(esi + eax + 0x1cu);
/* 878ca4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878ca6: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 878ca8: mov ecx, esi */
  ecx = esi;
/* 878caa: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x878cb0u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 878cb0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 878cb2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 878cb3: mov ecx, 0xb190cc */
  ecx = 0xb190ccu;
/* 878cb8: call 0x6c35da */
  esp -= 4; W32(esp, 0x878cbdu); SPILL(); f_6c35da(); if (g_unwind) return; RELOAD();
L_878cbd: /* 878cbd: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 878cc1: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 878cc5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 878cc6: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878cc8: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 878ccc: jl 0x878bb1 */
  if ((sf != of)) goto L_878bb1;
L_878cd2: /* 878cd2: mov eax, dword ptr [0xb190d0] */
  eax = R32((uint32_t)(0xb190d0u));
/* 878cd7: xor ebp, ebp */
  ebp = 0;
/* 878cd9: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878cdb: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 878cdf: jle 0x878ee1 */
  if ((zf || sf != of)) goto L_878ee1;
L_878ce5: /* 878ce5: mov dword ptr [esp + 0x3c], ebp */
  W32((uint32_t)(esp + 0x3cu), ebp);
/* 878ce9: mov dword ptr [esp + 0x40], ebp */
  W32((uint32_t)(esp + 0x40u), ebp);
/* 878ced: mov dword ptr [esp + 0x44], ebp */
  W32((uint32_t)(esp + 0x44u), ebp);
/* 878cf1: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 878cf5: jmp 0x878d00 */
  goto L_878d00;
L_878d00: /* 878d00: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 878d04: mov eax, dword ptr [0xb190cc] */
  eax = R32((uint32_t)(0xb190ccu));
/* 878d09: mov edi, dword ptr [ecx + 0xb4] */
  edi = R32((uint32_t)(ecx + 0xb4u));
/* 878d0f: mov esi, dword ptr [eax + ebp] */
  esi = R32((uint32_t)(eax + ebp));
/* 878d12: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d14: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d16: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d18: lea ecx, [esp + 0xd8] */
  ecx = (uint32_t)(esp + 0xd8u);
/* 878d1f: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x878d25u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 878d25: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 878d27: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d2b: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 878d2d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d2f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d33: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 878d36: mov edx, esp */
  edx = esp;
/* 878d38: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 878d3a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 878d3d: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 878d40: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 878d43: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 878d46: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 878d4a: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 878d4e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 878d51: mov ecx, esp */
  ecx = esp;
/* 878d53: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 878d55: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* 878d59: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 878d5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 878d5d: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 878d60: mov ecx, esp */
  ecx = esp;
/* 878d62: mov dword ptr [esp + 0x64], esp */
  W32((uint32_t)(esp + 0x64u), esp);
/* 878d66: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d68: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x878d6eu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 878d6e: push 0xcdbf48 */
  { uint32_t v = 0xcdbf48u; esp -= 4; W32(esp, v); }
/* 878d73: mov ecx, edi */
  ecx = edi;
/* 878d75: call dword ptr [ebx + 0xac] */
  { uint32_t t = R32((uint32_t)(ebx + 0xacu)); esp -= 4; W32(esp, 0x878d7bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 878d7b: mov edi, eax */
  edi = eax;
/* 878d7d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878d7f: je 0x878ec3 */
  if (zf) goto L_878ec3;
L_878d85: /* 878d85: mov eax, dword ptr [0xb190cc] */
  eax = R32((uint32_t)(0xb190ccu));
/* 878d8a: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 878d8e: mov dword ptr [eax + ebp + 4], edi */
  W32((uint32_t)(eax + ebp + 0x4u), edi);
/* 878d92: mov edx, dword ptr [ebx + 0xb4] */
  edx = R32((uint32_t)(ebx + 0xb4u));
/* 878d98: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 878d9b: xor eax, eax */
  eax = 0;
/* 878d9d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 878d9f: jle 0x878db0 */
  if ((zf || sf != of)) goto L_878db0;
L_878da1: /* 878da1: mov edx, dword ptr [edx + 0x2c] */
  edx = R32((uint32_t)(edx + 0x2cu));
L_878da4: /* 878da4: cmp dword ptr [edx], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 878da6: je 0x878db3 */
  if (zf) goto L_878db3;
L_878da8: /* 878da8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 878da9: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 878dac: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878dae: jl 0x878da4 */
  if ((sf != of)) goto L_878da4;
L_878db0: /* 878db0: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_878db3: /* 878db3: mov ecx, dword ptr [0xb190cc] */
  ecx = R32((uint32_t)(0xb190ccu));
/* 878db9: mov dword ptr [ecx + ebp + 0xc], eax */
  W32((uint32_t)(ecx + ebp + 0xcu), eax);
/* 878dbd: mov edx, dword ptr [ebx + 0xb4] */
  edx = R32((uint32_t)(ebx + 0xb4u));
/* 878dc3: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 878dc6: xor eax, eax */
  eax = 0;
/* 878dc8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 878dca: jle 0x878ddc */
  if ((zf || sf != of)) goto L_878ddc;
L_878dcc: /* 878dcc: mov edx, dword ptr [edx + 0x2c] */
  edx = R32((uint32_t)(edx + 0x2cu));
/* 878dcf: nop  */
L_878dd0: /* 878dd0: cmp dword ptr [edx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 878dd2: je 0x878ddf */
  if (zf) goto L_878ddf;
L_878dd4: /* 878dd4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 878dd5: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 878dd8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878dda: jl 0x878dd0 */
  if ((sf != of)) goto L_878dd0;
L_878ddc: /* 878ddc: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_878ddf: /* 878ddf: mov edx, dword ptr [0xb190cc] */
  edx = R32((uint32_t)(0xb190ccu));
/* 878de5: mov dword ptr [edx + ebp + 0x10], eax */
  W32((uint32_t)(edx + ebp + 0x10u), eax);
/* 878de9: mov eax, dword ptr [esi + 0xd0] */
  eax = R32((uint32_t)(esi + 0xd0u));
/* 878def: mov ecx, dword ptr [0xb190cc] */
  ecx = R32((uint32_t)(0xb190ccu));
/* 878df5: mov dword ptr [ecx + ebp + 8], eax */
  W32((uint32_t)(ecx + ebp + 0x8u), eax);
/* 878df9: mov edx, dword ptr [esi + 0xd0] */
  edx = R32((uint32_t)(esi + 0xd0u));
/* 878dff: mov dword ptr [edi + 0xd0], edx */
  W32((uint32_t)(edi + 0xd0u), edx);
/* 878e05: mov eax, dword ptr [esi + 0x284] */
  eax = R32((uint32_t)(esi + 0x284u));
/* 878e0b: mov dword ptr [edi + 0x284], eax */
  W32((uint32_t)(edi + 0x284u), eax);
/* 878e11: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 878e17: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 878e19: lea edx, [edi + 0x17c] */
  edx = (uint32_t)(edi + 0x17cu);
/* 878e1f: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 878e21: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 878e24: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 878e27: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 878e2a: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 878e2d: lea edx, [esi + 0x288] */
  edx = (uint32_t)(esi + 0x288u);
/* 878e33: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 878e35: lea eax, [edi + 0x288] */
  eax = (uint32_t)(edi + 0x288u);
/* 878e3b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 878e3d: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 878e40: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 878e43: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 878e46: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 878e49: mov al, byte ptr [esi + 0x2b0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2b0u))) & 0xffu);
/* 878e4f: mov byte ptr [edi + 0x2b0], al */
  W8((uint32_t)(edi + 0x2b0u), (eax & 0xffu));
/* 878e55: mov cl, byte ptr [esi + 0x51] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x51u))) & 0xffu);
/* 878e58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878e5a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878e5c: mov byte ptr [edi + 0x51], cl */
  W8((uint32_t)(edi + 0x51u), (ecx & 0xffu));
/* 878e5f: mov ecx, dword ptr [ebx + 0xb4] */
  ecx = R32((uint32_t)(ebx + 0xb4u));
/* 878e65: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 878e67: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878e69: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 878e6c: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 878e72: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 878e74: mov ebx, esp */
  ebx = esp;
/* 878e76: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
/* 878e78: mov ebp, dword ptr [eax + 4] */
  ebp = R32((uint32_t)(eax + 0x4u));
/* 878e7b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 878e7e: mov dword ptr [ebx + 4], ebp */
  W32((uint32_t)(ebx + 0x4u), ebp);
/* 878e81: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 878e82: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 878e85: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x878e8bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 878e8b: mov ecx, dword ptr [edi + 0xd0] */
  ecx = R32((uint32_t)(edi + 0xd0u));
/* 878e91: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 878e93: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 878e94: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x878e9au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 878e9a: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* 878ea0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 878ea2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 878ea3: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x878ea9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 878ea9: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* 878eaf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 878eb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 878eb2: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x878eb8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 878eb8: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 878ebc: mov dword ptr [eax + 0x6c], 1 */
  W32((uint32_t)(eax + 0x6cu), 0x1u);
L_878ec3: /* 878ec3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 878ec7: mov ecx, dword ptr [0xb190d0] */
  ecx = R32((uint32_t)(0xb190d0u));
/* 878ecd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 878ece: add ebp, 0x28 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 878ed1: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878ed3: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 878ed7: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 878edb: jl 0x878d00 */
  if ((sf != of)) goto L_878d00;
L_878ee1: /* 878ee1: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 878ee5: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 878ee9: mov dword ptr [0xb190c8], eax */
  W32((uint32_t)(0xb190c8u), eax);
/* 878eee: mov byte ptr [esp + 0xe0], 3 */
  W8((uint32_t)(esp + 0xe0u), 0x3u);
/* 878ef6: call 0x6c6ab9 */
  esp -= 4; W32(esp, 0x878efbu); SPILL(); f_6c6ab9(); if (g_unwind) return; RELOAD();
/* 878efb: lea ecx, [esp + 0x9c] */
  ecx = (uint32_t)(esp + 0x9cu);
/* 878f02: mov byte ptr [esp + 0xe0], 2 */
  W8((uint32_t)(esp + 0xe0u), 0x2u);
/* 878f0a: call 0x6c2ed2 */
  esp -= 4; W32(esp, 0x878f0fu); SPILL(); f_6c2ed2(); if (g_unwind) return; RELOAD();
/* 878f0f: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 878f13: mov byte ptr [esp + 0xe0], 1 */
  W8((uint32_t)(esp + 0xe0u), 0x1u);
/* 878f1b: call 0x6c34f9 */
  esp -= 4; W32(esp, 0x878f20u); SPILL(); f_6c34f9(); if (g_unwind) return; RELOAD();
/* 878f20: lea ecx, [esp + 0xc0] */
  ecx = (uint32_t)(esp + 0xc0u);
/* 878f27: mov byte ptr [esp + 0xe0], 0 */
  W8((uint32_t)(esp + 0xe0u), 0x0u);
/* 878f2f: call 0x6c34f9 */
  esp -= 4; W32(esp, 0x878f34u); SPILL(); f_6c34f9(); if (g_unwind) return; RELOAD();
/* 878f34: lea ecx, [esp + 0x5c] */
  ecx = (uint32_t)(esp + 0x5cu);
/* 878f38: mov dword ptr [esp + 0xe0], 0xffffffff */
  W32((uint32_t)(esp + 0xe0u), 0xffffffffu);
/* 878f43: call 0x6c9d0e */
  esp -= 4; W32(esp, 0x878f48u); SPILL(); f_6c9d0e(); if (g_unwind) return; RELOAD();
/* 878f48: mov ecx, dword ptr [esp + 0xd8] */
  ecx = R32((uint32_t)(esp + 0xd8u));
/* 878f4f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 878f50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 878f51: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 878f52: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 878f59: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 878f5a: add esp, 0xd4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xd4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 878f60: ret  */
  esp += 4; SPILL(); return;
}

void f_8786fa(void) {
  LOAD_REGS();
L_8786fa: /* 8786fa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_878700: /* 878700: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 878702: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 878705: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x87870bu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 87870b: mov ecx, eax */
  ecx = eax;
/* 87870d: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x878713u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 878713: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 878714: lea ecx, [esp + 0xd0] */
  ecx = (uint32_t)(esp + 0xd0u);
/* 87871b: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x878721u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 878721: push 0xae60ac */
  { uint32_t v = 0xae60acu; esp -= 4; W32(esp, v); }
/* 878726: lea ecx, [esp + 0xd0] */
  ecx = (uint32_t)(esp + 0xd0u);
/* 87872d: mov byte ptr [esp + 0xe4], 5 */
  W8((uint32_t)(esp + 0xe4u), 0x5u);
/* 878735: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x87873bu); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 87873b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87873d: je 0x878af8 */
  if (zf) goto L_878af8;
L_878743: /* 878743: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 878748: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 87874a: mov eax, dword ptr [ecx + ebx*4] */
  eax = R32((uint32_t)(ecx + ebx*4));
/* 87874d: mov edx, dword ptr [eax + 0x100] */
  edx = R32((uint32_t)(eax + 0x100u));
/* 878753: lea eax, [esp + 0x50] */
  eax = (uint32_t)(esp + 0x50u);
/* 878757: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 878758: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 87875c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87875d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 878760: xor ebp, ebp */
  ebp = 0;
/* 878762: mov ecx, esp */
  ecx = esp;
/* 878764: mov dword ptr [esp + 0x24], esp */
  W32((uint32_t)(esp + 0x24u), esp);
/* 878768: push 0xae60dc */
  { uint32_t v = 0xae60dcu; esp -= 4; W32(esp, v); }
/* 87876d: mov dword ptr [esp + 0x70], edx */
  W32((uint32_t)(esp + 0x70u), edx);
/* 878771: mov dword ptr [esp + 0x60], ebp */
  W32((uint32_t)(esp + 0x60u), ebp);
/* 878775: mov dword ptr [esp + 0x68], ebp */
  W32((uint32_t)(esp + 0x68u), ebp);
/* 878779: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x87877fu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 87877f: mov edx, dword ptr [0xcfa1ac] */
  edx = R32((uint32_t)(0xcfa1acu));
/* 878785: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 878787: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* 87878a: call dword ptr [0xcfab5c] */
  esp -= 4; W32(esp, 0x878790u); SPILL(); f_4e1f5a(); if (g_unwind) return; /* Core!?FindArrayProperty@UObject@@QAEHVFString@@PAPAVFArray@@PAH@Z */ RELOAD();
/* 878790: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 878792: je 0x878af8 */
  if (zf) goto L_878af8;
L_878798: /* 878798: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 878799: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 87879d: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8787a3u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8787a3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8787a4: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 8787a8: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 8787ac: mov dword ptr [esp + 0x24], ebp */
  W32((uint32_t)(esp + 0x24u), ebp);
/* 8787b0: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8787b6u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8787b6: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 8787ba: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8787bd: xor edi, edi */
  edi = 0;
/* 8787bf: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8787c1: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 8787c5: jle 0x878af8 */
  if ((zf || sf != of)) goto L_878af8;
L_8787cb: /* 8787cb: jmp 0x8787d0 */
  goto L_8787d0;
L_8787d0: /* 8787d0: call dword ptr [0xcfa544] */
  esp -= 4; W32(esp, 0x8787d6u); SPILL(); f_4e3d19(); if (g_unwind) return; /* Core!?GetData@FArray@@QAEPAXXZ */ RELOAD();
/* 8787d6: mov ecx, edi */
  ecx = edi;
/* 8787d8: imul ecx, dword ptr [esp + 0x50] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x50u)));
  ecx = (uint32_t)r;
  }
/* 8787dd: mov esi, eax */
  esi = eax;
/* 8787df: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8787e1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8787e3: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8787e9u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8787e9: mov ecx, eax */
  ecx = eax;
/* 8787eb: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8787f1u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8787f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8787f2: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 8787f6: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8787fcu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8787fc: push 0xae60ec */
  { uint32_t v = 0xae60ecu; esp -= 4; W32(esp, v); }
/* 878801: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 878805: mov byte ptr [esp + 0xe4], 6 */
  W8((uint32_t)(esp + 0xe4u), 0x6u);
/* 87880d: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x878813u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 878813: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878815: je 0x87884e */
  if (zf) goto L_87884e;
L_878817: /* 878817: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 87881b: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x878821u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 878821: lea edx, [esp + 0x54] */
  edx = (uint32_t)(esp + 0x54u);
/* 878825: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 878826: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 878829: mov ecx, esp */
  ecx = esp;
/* 87882b: mov dword ptr [esp + 0x44], esp */
  W32((uint32_t)(esp + 0x44u), esp);
/* 87882f: push 0xae6114 */
  { uint32_t v = 0xae6114u; esp -= 4; W32(esp, v); }
/* 878834: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x87883au); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 87883a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 87883c: call dword ptr [0xcfab58] */
  esp -= 4; W32(esp, 0x878842u); SPILL(); f_4e219e(); if (g_unwind) return; /* Core!?FindFNameProperty@UObject@@QAEHVFString@@PAVFName@@@Z */ RELOAD();
/* 878842: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 878844: je 0x87884e */
  if (zf) goto L_87884e;
L_878846: /* 878846: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 87884a: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
L_87884e: /* 87884e: push 0xae6130 */
  { uint32_t v = 0xae6130u; esp -= 4; W32(esp, v); }
/* 878853: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 878857: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x87885du); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 87885d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87885f: je 0x8788fc */
  if (zf) goto L_8788fc;
L_878865: /* 878865: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 878869: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x87886fu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 87886f: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 878873: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 878874: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 878877: mov ecx, esp */
  ecx = esp;
/* 878879: mov dword ptr [esp + 0x44], esp */
  W32((uint32_t)(esp + 0x44u), esp);
/* 87887d: push 0xae6150 */
  { uint32_t v = 0xae6150u; esp -= 4; W32(esp, v); }
/* 878882: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x878888u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 878888: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 87888a: call dword ptr [0xcfab58] */
  esp -= 4; W32(esp, 0x878890u); SPILL(); f_4e219e(); if (g_unwind) return; /* Core!?FindFNameProperty@UObject@@QAEHVFString@@PAVFName@@@Z */ RELOAD();
/* 878890: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 878892: je 0x87889c */
  if (zf) goto L_87889c;
L_878894: /* 878894: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 878898: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
L_87889c: /* 87889c: lea eax, [esp + 0x78] */
  eax = (uint32_t)(esp + 0x78u);
/* 8788a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8788a1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8788a4: mov ecx, esp */
  ecx = esp;
/* 8788a6: mov dword ptr [esp + 0x44], esp */
  W32((uint32_t)(esp + 0x44u), esp);
/* 8788aa: push 0xae6164 */
  { uint32_t v = 0xae6164u; esp -= 4; W32(esp, v); }
/* 8788af: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8788b5u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8788b5: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8788b7: call dword ptr [0xcfab54] */
  esp -= 4; W32(esp, 0x8788bdu); SPILL(); f_4e2121(); if (g_unwind) return; /* Core!?FindFloatProperty@UObject@@QAEHVFString@@PAM@Z */ RELOAD();
/* 8788bd: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8788bf: je 0x8788c9 */
  if (zf) goto L_8788c9;
L_8788c1: /* 8788c1: mov ecx, dword ptr [esp + 0x78] */
  ecx = R32((uint32_t)(esp + 0x78u));
/* 8788c5: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
L_8788c9: /* 8788c9: lea edx, [esp + 0x8c] */
  edx = (uint32_t)(esp + 0x8cu);
/* 8788d0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8788d1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8788d4: mov ecx, esp */
  ecx = esp;
/* 8788d6: mov dword ptr [esp + 0x44], esp */
  W32((uint32_t)(esp + 0x44u), esp);
/* 8788da: push 0xae6178 */
  { uint32_t v = 0xae6178u; esp -= 4; W32(esp, v); }
/* 8788df: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8788e5u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8788e5: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8788e7: call dword ptr [0xcfab54] */
  esp -= 4; W32(esp, 0x8788edu); SPILL(); f_4e2121(); if (g_unwind) return; /* Core!?FindFloatProperty@UObject@@QAEHVFString@@PAM@Z */ RELOAD();
/* 8788ed: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8788ef: je 0x8788fc */
  if (zf) goto L_8788fc;
L_8788f1: /* 8788f1: mov eax, dword ptr [esp + 0x8c] */
  eax = R32((uint32_t)(esp + 0x8cu));
/* 8788f8: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
L_8788fc: /* 8788fc: push 0xae6190 */
  { uint32_t v = 0xae6190u; esp -= 4; W32(esp, v); }
/* 878901: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 878905: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x87890bu); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 87890b: push 0xae61b8 */
  { uint32_t v = 0xae61b8u; esp -= 4; W32(esp, v); }
/* 878910: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 878914: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x87891au); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 87891a: push 0xae61e4 */
  { uint32_t v = 0xae61e4u; esp -= 4; W32(esp, v); }
/* 87891f: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 878923: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x878929u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 878929: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87892b: je 0x878946 */
  if (zf) goto L_878946;
L_87892d: /* 87892d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 87892e: lea ecx, [esp + 0x9c] */
  ecx = (uint32_t)(esp + 0x9cu);
/* 878935: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x87893bu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 87893b: mov ecx, dword ptr [esp + 0x98] */
  ecx = R32((uint32_t)(esp + 0x98u));
/* 878942: mov dword ptr [esp + 0x58], ecx */
  W32((uint32_t)(esp + 0x58u), ecx);
L_878946: /* 878946: push 0xae620c */
  { uint32_t v = 0xae620cu; esp -= 4; W32(esp, v); }
/* 87894b: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 87894f: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x878955u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 878955: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 878959: mov byte ptr [esp + 0xe0], 5 */
  W8((uint32_t)(esp + 0xe0u), 0x5u);
/* 878961: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x878967u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 878967: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 878968: lea ecx, [esp + 0x78] */
  ecx = (uint32_t)(esp + 0x78u);
/* 87896c: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x878972u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 878972: lea edx, [esp + 0x74] */
  edx = (uint32_t)(esp + 0x74u);
/* 878976: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 878977: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 87897b: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x878981u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 878981: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878983: je 0x8789ca */
  if (zf) goto L_8789ca;
L_878985: /* 878985: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 878986: lea ecx, [esp + 0x84] */
  ecx = (uint32_t)(esp + 0x84u);
/* 87898d: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x878993u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 878993: lea eax, [esp + 0x80] */
  eax = (uint32_t)(esp + 0x80u);
/* 87899a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87899b: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 87899f: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x8789a5u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 8789a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8789a7: je 0x8789ca */
  if (zf) goto L_8789ca;
L_8789a9: /* 8789a9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8789aa: lea ecx, [esp + 0x8c] */
  ecx = (uint32_t)(esp + 0x8cu);
/* 8789b1: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8789b7u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8789b7: mov ecx, dword ptr [esp + 0x88] */
  ecx = R32((uint32_t)(esp + 0x88u));
/* 8789be: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 8789c2: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_8789ca: /* 8789ca: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8789cb: lea ecx, [esp + 0x80] */
  ecx = (uint32_t)(esp + 0x80u);
/* 8789d2: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8789d8u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8789d8: lea edx, [esp + 0x7c] */
  edx = (uint32_t)(esp + 0x7cu);
/* 8789dc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8789dd: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 8789e1: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x8789e7u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 8789e7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8789e9: je 0x878ae4 */
  if (zf) goto L_878ae4;
L_8789ef: /* 8789ef: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8789f0: lea ecx, [esp + 0x98] */
  ecx = (uint32_t)(esp + 0x98u);
/* 8789f7: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8789fdu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8789fd: lea eax, [esp + 0x94] */
  eax = (uint32_t)(esp + 0x94u);
/* 878a04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 878a05: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 878a09: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x878a0fu); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 878a0f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878a11: je 0x878ae4 */
  if (zf) goto L_878ae4;
L_878a17: /* 878a17: lea ecx, [esp + 0xa8] */
  ecx = (uint32_t)(esp + 0xa8u);
/* 878a1e: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x878a24u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 878a24: lea ecx, [esp + 0xac] */
  ecx = (uint32_t)(esp + 0xacu);
/* 878a2b: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x878a31u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 878a31: lea ecx, [esp + 0xb0] */
  ecx = (uint32_t)(esp + 0xb0u);
/* 878a38: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x878a3eu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 878a3e: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 878a42: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 878a46: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 878a4a: mov dword ptr [esp + 0xa8], ecx */
  W32((uint32_t)(esp + 0xa8u), ecx);
/* 878a51: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 878a55: mov dword ptr [esp + 0xac], edx */
  W32((uint32_t)(esp + 0xacu), edx);
/* 878a5c: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 878a60: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 878a62: mov dword ptr [esp + 0xb8], ecx */
  W32((uint32_t)(esp + 0xb8u), ecx);
/* 878a69: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 878a6b: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 878a6f: mov dword ptr [esp + 0xb8], eax */
  W32((uint32_t)(esp + 0xb8u), eax);
/* 878a76: mov dword ptr [esp + 0xc4], edx */
  W32((uint32_t)(esp + 0xc4u), edx);
/* 878a7d: mov dword ptr [esp + 0xc0], 0 */
  W32((uint32_t)(esp + 0xc0u), 0x0u);
/* 878a88: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x878a8eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 878a8e: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 878a92: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 878a95: lea edi, [ecx + eax*8] */
  edi = (uint32_t)(ecx + eax*8);
/* 878a98: mov ecx, 6 */
  ecx = 0x6u;
/* 878a9d: lea esi, [esp + 0xa8] */
  esi = (uint32_t)(esp + 0xa8u);
/* 878aa4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 878aa6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 878aa7: lea ecx, [esp + 0x88] */
  ecx = (uint32_t)(esp + 0x88u);
/* 878aae: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x878ab4u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 878ab4: mov edx, dword ptr [esp + 0x84] */
  edx = R32((uint32_t)(esp + 0x84u));
/* 878abb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 878abc: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* 878ac3: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 878ac7: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x878acdu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 878acd: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* 878ad4: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 878ad8: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 878adc: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_878ae4: /* 878ae4: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 878ae8: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 878aeb: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 878aec: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878aee: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 878af2: jl 0x8787d0 */
  if ((sf != of)) goto L_8787d0;
L_878af8: /* 878af8: lea ecx, [esp + 0xcc] */
  ecx = (uint32_t)(esp + 0xccu);
/* 878aff: mov byte ptr [esp + 0xe0], 4 */
  W8((uint32_t)(esp + 0xe0u), 0x4u);
/* 878b07: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x878b0du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_878b0d: /* 878b0d: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
L_878b12: /* 878b12: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 878b15: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 878b16: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878b18: jge 0x878b40 */
  if ((sf == of)) goto L_878b40;
L_878b1a: /* 878b1a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 878b1c: mov ecx, dword ptr [ecx + ebx*4] */
  ecx = R32((uint32_t)(ecx + ebx*4));
/* 878b1f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878b21: je 0x878b12 */
  if (zf) goto L_878b12;
L_878b23: /* 878b23: push 0xb6d258 */
  { uint32_t v = 0xb6d258u; esp -= 4; W32(esp, v); }
/* 878b28: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x878b2eu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 878b2e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878b30: je 0x878b0d */
  if (zf) goto L_878b0d;
L_878b32: /* 878b32: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 878b37: cmp ebx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878b3a: jl 0x878700 */
  if ((sf != of)) goto L_878700;
L_878b40: /* 878b40: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 878b44: xor ebp, ebp */
  ebp = 0;
/* 878b46: xor ebx, ebx */
  ebx = 0;
/* 878b48: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878b4a: jle 0x878ba3 */
  if ((zf || sf != of)) goto L_878ba3;
L_878b4c: /* 878b4c: xor edi, edi */
  edi = 0;
/* 878b4e: mov edi, edi */
  edi = edi;
L_878b50: /* 878b50: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 878b54: mov dword ptr [edi + edx + 0x10], ebp */
  W32((uint32_t)(edi + edx + 0x10u), ebp);
/* 878b58: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 878b5c: xor esi, esi */
  esi = 0;
/* 878b5e: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878b60: jle 0x878b97 */
  if ((zf || sf != of)) goto L_878b97;
L_878b62: /* 878b62: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 878b66: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 878b6a: lea ecx, [eax + esi*4] */
  ecx = (uint32_t)(eax + esi*4);
/* 878b6d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 878b6e: lea ecx, [edi + edx + 4] */
  ecx = (uint32_t)(edi + edx + 0x4u);
/* 878b72: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x878b78u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 878b78: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878b7a: je 0x878b8e */
  if (zf) goto L_878b8e;
L_878b7c: /* 878b7c: mov eax, dword ptr [esp + 0x9c] */
  eax = R32((uint32_t)(esp + 0x9cu));
/* 878b83: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 878b86: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 878b8a: mov dword ptr [edi + edx + 0x10], ecx */
  W32((uint32_t)(edi + edx + 0x10u), ecx);
L_878b8e: /* 878b8e: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 878b92: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 878b93: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878b95: jl 0x878b62 */
  if ((sf != of)) goto L_878b62;
L_878b97: /* 878b97: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 878b9b: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 878b9c: add edi, 0x18 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 878b9f: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878ba1: jl 0x878b50 */
  if ((sf != of)) goto L_878b50;
L_878ba3: /* 878ba3: cmp dword ptr [esp + 0x60], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x60u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878ba7: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 878bab: jle 0x878cd2 */
  if ((zf || sf != of)) goto L_878cd2;
L_878bb1: /* 878bb1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 878bb3: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 878bb5: mov ecx, 0xb190cc */
  ecx = 0xb190ccu;
/* 878bba: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x878bc0u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 878bc0: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 878bc4: mov ebp, eax */
  ebp = eax;
/* 878bc6: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 878bca: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 878bcd: mov eax, dword ptr [0xb190cc] */
  eax = R32((uint32_t)(0xb190ccu));
/* 878bd2: lea esi, [ebp + ebp*4] */
  esi = (uint32_t)(ebp + ebp*4);
/* 878bd6: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 878bd9: mov dword ptr [esi + eax], edx */
  W32((uint32_t)(esi + eax), edx);
/* 878bdc: mov ecx, dword ptr [0xb190cc] */
  ecx = R32((uint32_t)(0xb190ccu));
/* 878be2: xor ebx, ebx */
  ebx = 0;
/* 878be4: mov dword ptr [esi + ecx + 4], ebx */
  W32((uint32_t)(esi + ecx + 0x4u), ebx);
/* 878be8: cmp dword ptr [esp + 0x28], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878bec: jle 0x878c6a */
  if ((zf || sf != of)) goto L_878c6a;
L_878bee: /* 878bee: xor edi, edi */
  edi = 0;
L_878bf0: /* 878bf0: mov edx, dword ptr [esp + 0xc0] */
  edx = R32((uint32_t)(esp + 0xc0u));
/* 878bf7: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 878bfb: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 878bfe: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 878c02: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 878c03: lea ecx, [edi + edx] */
  ecx = (uint32_t)(edi + edx);
/* 878c06: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x878c0cu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 878c0c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878c0e: je 0x878c5e */
  if (zf) goto L_878c5e;
L_878c10: /* 878c10: mov eax, dword ptr [0xb190cc] */
  eax = R32((uint32_t)(0xb190ccu));
/* 878c15: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 878c17: lea ecx, [esi + eax + 0x1c] */
  ecx = (uint32_t)(esi + eax + 0x1cu);
/* 878c1b: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 878c1d: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x878c23u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 878c23: mov edx, dword ptr [0xb190cc] */
  edx = R32((uint32_t)(0xb190ccu));
/* 878c29: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 878c2c: mov eax, dword ptr [esi + edx + 0x1c] */
  eax = R32((uint32_t)(esi + edx + 0x1cu));
/* 878c30: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 878c33: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 878c37: mov edx, dword ptr [edi + ecx + 0x10] */
  edx = R32((uint32_t)(edi + ecx + 0x10u));
/* 878c3b: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 878c3d: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 878c41: mov edx, dword ptr [edi + ecx + 8] */
  edx = R32((uint32_t)(edi + ecx + 0x8u));
/* 878c45: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 878c48: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 878c4c: mov edx, dword ptr [edi + ecx + 0xc] */
  edx = R32((uint32_t)(edi + ecx + 0xcu));
/* 878c50: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 878c53: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 878c57: mov edx, dword ptr [edi + ecx + 0x14] */
  edx = R32((uint32_t)(edi + ecx + 0x14u));
/* 878c5b: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
L_878c5e: /* 878c5e: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 878c62: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 878c63: add edi, 0x18 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 878c66: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878c68: jl 0x878bf0 */
  if ((sf != of)) goto L_878bf0;
L_878c6a: /* 878c6a: mov eax, dword ptr [0xb190cc] */
  eax = R32((uint32_t)(0xb190ccu));
/* 878c6f: mov ecx, dword ptr [esi + eax + 0x20] */
  ecx = R32((uint32_t)(esi + eax + 0x20u));
/* 878c73: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878c75: je 0x878ca0 */
  if (zf) goto L_878ca0;
L_878c77: /* 878c77: mov ecx, dword ptr [esi + eax] */
  ecx = R32((uint32_t)(esi + eax));
/* 878c7a: mov edx, dword ptr [ecx + 0xd0] */
  edx = R32((uint32_t)(ecx + 0xd0u));
/* 878c80: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878c82: je 0x878ca0 */
  if (zf) goto L_878ca0;
L_878c84: /* 878c84: mov edx, ecx */
  edx = ecx;
/* 878c86: mov ecx, dword ptr [edx + 0xd0] */
  ecx = R32((uint32_t)(edx + 0xd0u));
/* 878c8c: push 0xb859a0 */
  { uint32_t v = 0xb859a0u; esp -= 4; W32(esp, v); }
/* 878c91: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x878c97u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 878c97: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878c99: jne 0x878cbd */
  if (!zf) goto L_878cbd;
L_878c9b: /* 878c9b: mov eax, dword ptr [0xb190cc] */
  eax = R32((uint32_t)(0xb190ccu));
L_878ca0: /* 878ca0: lea esi, [esi + eax + 0x1c] */
  esi = (uint32_t)(esi + eax + 0x1cu);
/* 878ca4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878ca6: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 878ca8: mov ecx, esi */
  ecx = esi;
/* 878caa: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x878cb0u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 878cb0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 878cb2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 878cb3: mov ecx, 0xb190cc */
  ecx = 0xb190ccu;
/* 878cb8: call 0x6c35da */
  esp -= 4; W32(esp, 0x878cbdu); SPILL(); f_6c35da(); if (g_unwind) return; RELOAD();
L_878cbd: /* 878cbd: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 878cc1: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 878cc5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 878cc6: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878cc8: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 878ccc: jl 0x878bb1 */
  if ((sf != of)) goto L_878bb1;
L_878cd2: /* 878cd2: mov eax, dword ptr [0xb190d0] */
  eax = R32((uint32_t)(0xb190d0u));
/* 878cd7: xor ebp, ebp */
  ebp = 0;
/* 878cd9: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878cdb: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 878cdf: jle 0x878ee1 */
  if ((zf || sf != of)) goto L_878ee1;
L_878ce5: /* 878ce5: mov dword ptr [esp + 0x3c], ebp */
  W32((uint32_t)(esp + 0x3cu), ebp);
/* 878ce9: mov dword ptr [esp + 0x40], ebp */
  W32((uint32_t)(esp + 0x40u), ebp);
/* 878ced: mov dword ptr [esp + 0x44], ebp */
  W32((uint32_t)(esp + 0x44u), ebp);
/* 878cf1: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 878cf5: jmp 0x878d00 */
  goto L_878d00;
L_878d00: /* 878d00: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 878d04: mov eax, dword ptr [0xb190cc] */
  eax = R32((uint32_t)(0xb190ccu));
/* 878d09: mov edi, dword ptr [ecx + 0xb4] */
  edi = R32((uint32_t)(ecx + 0xb4u));
/* 878d0f: mov esi, dword ptr [eax + ebp] */
  esi = R32((uint32_t)(eax + ebp));
/* 878d12: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d14: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d16: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d18: lea ecx, [esp + 0xd8] */
  ecx = (uint32_t)(esp + 0xd8u);
/* 878d1f: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x878d25u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 878d25: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 878d27: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d2b: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 878d2d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d2f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d33: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 878d36: mov edx, esp */
  edx = esp;
/* 878d38: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 878d3a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 878d3d: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 878d40: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 878d43: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 878d46: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 878d4a: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 878d4e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 878d51: mov ecx, esp */
  ecx = esp;
/* 878d53: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 878d55: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* 878d59: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 878d5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 878d5d: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 878d60: mov ecx, esp */
  ecx = esp;
/* 878d62: mov dword ptr [esp + 0x64], esp */
  W32((uint32_t)(esp + 0x64u), esp);
/* 878d66: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d68: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x878d6eu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 878d6e: push 0xcdbf48 */
  { uint32_t v = 0xcdbf48u; esp -= 4; W32(esp, v); }
/* 878d73: mov ecx, edi */
  ecx = edi;
/* 878d75: call dword ptr [ebx + 0xac] */
  { uint32_t t = R32((uint32_t)(ebx + 0xacu)); esp -= 4; W32(esp, 0x878d7bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 878d7b: mov edi, eax */
  edi = eax;
/* 878d7d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878d7f: je 0x878ec3 */
  if (zf) goto L_878ec3;
L_878d85: /* 878d85: mov eax, dword ptr [0xb190cc] */
  eax = R32((uint32_t)(0xb190ccu));
/* 878d8a: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 878d8e: mov dword ptr [eax + ebp + 4], edi */
  W32((uint32_t)(eax + ebp + 0x4u), edi);
/* 878d92: mov edx, dword ptr [ebx + 0xb4] */
  edx = R32((uint32_t)(ebx + 0xb4u));
/* 878d98: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 878d9b: xor eax, eax */
  eax = 0;
/* 878d9d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 878d9f: jle 0x878db0 */
  if ((zf || sf != of)) goto L_878db0;
L_878da1: /* 878da1: mov edx, dword ptr [edx + 0x2c] */
  edx = R32((uint32_t)(edx + 0x2cu));
L_878da4: /* 878da4: cmp dword ptr [edx], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 878da6: je 0x878db3 */
  if (zf) goto L_878db3;
L_878da8: /* 878da8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 878da9: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 878dac: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878dae: jl 0x878da4 */
  if ((sf != of)) goto L_878da4;
L_878db0: /* 878db0: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_878db3: /* 878db3: mov ecx, dword ptr [0xb190cc] */
  ecx = R32((uint32_t)(0xb190ccu));
/* 878db9: mov dword ptr [ecx + ebp + 0xc], eax */
  W32((uint32_t)(ecx + ebp + 0xcu), eax);
/* 878dbd: mov edx, dword ptr [ebx + 0xb4] */
  edx = R32((uint32_t)(ebx + 0xb4u));
/* 878dc3: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 878dc6: xor eax, eax */
  eax = 0;
/* 878dc8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 878dca: jle 0x878ddc */
  if ((zf || sf != of)) goto L_878ddc;
L_878dcc: /* 878dcc: mov edx, dword ptr [edx + 0x2c] */
  edx = R32((uint32_t)(edx + 0x2cu));
/* 878dcf: nop  */
L_878dd0: /* 878dd0: cmp dword ptr [edx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 878dd2: je 0x878ddf */
  if (zf) goto L_878ddf;
L_878dd4: /* 878dd4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 878dd5: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 878dd8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878dda: jl 0x878dd0 */
  if ((sf != of)) goto L_878dd0;
L_878ddc: /* 878ddc: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_878ddf: /* 878ddf: mov edx, dword ptr [0xb190cc] */
  edx = R32((uint32_t)(0xb190ccu));
/* 878de5: mov dword ptr [edx + ebp + 0x10], eax */
  W32((uint32_t)(edx + ebp + 0x10u), eax);
/* 878de9: mov eax, dword ptr [esi + 0xd0] */
  eax = R32((uint32_t)(esi + 0xd0u));
/* 878def: mov ecx, dword ptr [0xb190cc] */
  ecx = R32((uint32_t)(0xb190ccu));
/* 878df5: mov dword ptr [ecx + ebp + 8], eax */
  W32((uint32_t)(ecx + ebp + 0x8u), eax);
/* 878df9: mov edx, dword ptr [esi + 0xd0] */
  edx = R32((uint32_t)(esi + 0xd0u));
/* 878dff: mov dword ptr [edi + 0xd0], edx */
  W32((uint32_t)(edi + 0xd0u), edx);
/* 878e05: mov eax, dword ptr [esi + 0x284] */
  eax = R32((uint32_t)(esi + 0x284u));
/* 878e0b: mov dword ptr [edi + 0x284], eax */
  W32((uint32_t)(edi + 0x284u), eax);
/* 878e11: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 878e17: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 878e19: lea edx, [edi + 0x17c] */
  edx = (uint32_t)(edi + 0x17cu);
/* 878e1f: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 878e21: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 878e24: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 878e27: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 878e2a: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 878e2d: lea edx, [esi + 0x288] */
  edx = (uint32_t)(esi + 0x288u);
/* 878e33: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 878e35: lea eax, [edi + 0x288] */
  eax = (uint32_t)(edi + 0x288u);
/* 878e3b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 878e3d: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 878e40: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 878e43: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 878e46: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 878e49: mov al, byte ptr [esi + 0x2b0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2b0u))) & 0xffu);
/* 878e4f: mov byte ptr [edi + 0x2b0], al */
  W8((uint32_t)(edi + 0x2b0u), (eax & 0xffu));
/* 878e55: mov cl, byte ptr [esi + 0x51] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x51u))) & 0xffu);
/* 878e58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878e5a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878e5c: mov byte ptr [edi + 0x51], cl */
  W8((uint32_t)(edi + 0x51u), (ecx & 0xffu));
/* 878e5f: mov ecx, dword ptr [ebx + 0xb4] */
  ecx = R32((uint32_t)(ebx + 0xb4u));
/* 878e65: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 878e67: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878e69: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 878e6c: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 878e72: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 878e74: mov ebx, esp */
  ebx = esp;
/* 878e76: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
/* 878e78: mov ebp, dword ptr [eax + 4] */
  ebp = R32((uint32_t)(eax + 0x4u));
/* 878e7b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 878e7e: mov dword ptr [ebx + 4], ebp */
  W32((uint32_t)(ebx + 0x4u), ebp);
/* 878e81: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 878e82: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 878e85: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x878e8bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 878e8b: mov ecx, dword ptr [edi + 0xd0] */
  ecx = R32((uint32_t)(edi + 0xd0u));
/* 878e91: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 878e93: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 878e94: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x878e9au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 878e9a: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* 878ea0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 878ea2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 878ea3: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x878ea9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 878ea9: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* 878eaf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 878eb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 878eb2: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x878eb8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 878eb8: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 878ebc: mov dword ptr [eax + 0x6c], 1 */
  W32((uint32_t)(eax + 0x6cu), 0x1u);
L_878ec3: /* 878ec3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 878ec7: mov ecx, dword ptr [0xb190d0] */
  ecx = R32((uint32_t)(0xb190d0u));
/* 878ecd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 878ece: add ebp, 0x28 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 878ed1: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878ed3: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 878ed7: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 878edb: jl 0x878d00 */
  if ((sf != of)) goto L_878d00;
L_878ee1: /* 878ee1: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 878ee5: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 878ee9: mov dword ptr [0xb190c8], eax */
  W32((uint32_t)(0xb190c8u), eax);
/* 878eee: mov byte ptr [esp + 0xe0], 3 */
  W8((uint32_t)(esp + 0xe0u), 0x3u);
/* 878ef6: call 0x6c6ab9 */
  esp -= 4; W32(esp, 0x878efbu); SPILL(); f_6c6ab9(); if (g_unwind) return; RELOAD();
/* 878efb: lea ecx, [esp + 0x9c] */
  ecx = (uint32_t)(esp + 0x9cu);
/* 878f02: mov byte ptr [esp + 0xe0], 2 */
  W8((uint32_t)(esp + 0xe0u), 0x2u);
/* 878f0a: call 0x6c2ed2 */
  esp -= 4; W32(esp, 0x878f0fu); SPILL(); f_6c2ed2(); if (g_unwind) return; RELOAD();
/* 878f0f: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 878f13: mov byte ptr [esp + 0xe0], 1 */
  W8((uint32_t)(esp + 0xe0u), 0x1u);
/* 878f1b: call 0x6c34f9 */
  esp -= 4; W32(esp, 0x878f20u); SPILL(); f_6c34f9(); if (g_unwind) return; RELOAD();
/* 878f20: lea ecx, [esp + 0xc0] */
  ecx = (uint32_t)(esp + 0xc0u);
/* 878f27: mov byte ptr [esp + 0xe0], 0 */
  W8((uint32_t)(esp + 0xe0u), 0x0u);
/* 878f2f: call 0x6c34f9 */
  esp -= 4; W32(esp, 0x878f34u); SPILL(); f_6c34f9(); if (g_unwind) return; RELOAD();
/* 878f34: lea ecx, [esp + 0x5c] */
  ecx = (uint32_t)(esp + 0x5cu);
/* 878f38: mov dword ptr [esp + 0xe0], 0xffffffff */
  W32((uint32_t)(esp + 0xe0u), 0xffffffffu);
/* 878f43: call 0x6c9d0e */
  esp -= 4; W32(esp, 0x878f48u); SPILL(); f_6c9d0e(); if (g_unwind) return; RELOAD();
/* 878f48: mov ecx, dword ptr [esp + 0xd8] */
  ecx = R32((uint32_t)(esp + 0xd8u));
/* 878f4f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 878f50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 878f51: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 878f52: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 878f59: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 878f5a: add esp, 0xd4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xd4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 878f60: ret  */
  esp += 4; SPILL(); return;
}

void f_8787cd(void) {
  LOAD_REGS();
  goto L_8787cd;
L_878700: /* 878700: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 878702: mov ecx, dword ptr [edx + ebx*4] */
  ecx = R32((uint32_t)(edx + ebx*4));
/* 878705: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x87870bu); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 87870b: mov ecx, eax */
  ecx = eax;
/* 87870d: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x878713u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 878713: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 878714: lea ecx, [esp + 0xd0] */
  ecx = (uint32_t)(esp + 0xd0u);
/* 87871b: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x878721u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 878721: push 0xae60ac */
  { uint32_t v = 0xae60acu; esp -= 4; W32(esp, v); }
/* 878726: lea ecx, [esp + 0xd0] */
  ecx = (uint32_t)(esp + 0xd0u);
/* 87872d: mov byte ptr [esp + 0xe4], 5 */
  W8((uint32_t)(esp + 0xe4u), 0x5u);
/* 878735: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x87873bu); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 87873b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87873d: je 0x878af8 */
  if (zf) goto L_878af8;
L_878743: /* 878743: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 878748: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 87874a: mov eax, dword ptr [ecx + ebx*4] */
  eax = R32((uint32_t)(ecx + ebx*4));
/* 87874d: mov edx, dword ptr [eax + 0x100] */
  edx = R32((uint32_t)(eax + 0x100u));
/* 878753: lea eax, [esp + 0x50] */
  eax = (uint32_t)(esp + 0x50u);
/* 878757: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 878758: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 87875c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87875d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 878760: xor ebp, ebp */
  ebp = 0;
/* 878762: mov ecx, esp */
  ecx = esp;
/* 878764: mov dword ptr [esp + 0x24], esp */
  W32((uint32_t)(esp + 0x24u), esp);
/* 878768: push 0xae60dc */
  { uint32_t v = 0xae60dcu; esp -= 4; W32(esp, v); }
/* 87876d: mov dword ptr [esp + 0x70], edx */
  W32((uint32_t)(esp + 0x70u), edx);
/* 878771: mov dword ptr [esp + 0x60], ebp */
  W32((uint32_t)(esp + 0x60u), ebp);
/* 878775: mov dword ptr [esp + 0x68], ebp */
  W32((uint32_t)(esp + 0x68u), ebp);
/* 878779: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x87877fu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 87877f: mov edx, dword ptr [0xcfa1ac] */
  edx = R32((uint32_t)(0xcfa1acu));
/* 878785: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 878787: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* 87878a: call dword ptr [0xcfab5c] */
  esp -= 4; W32(esp, 0x878790u); SPILL(); f_4e1f5a(); if (g_unwind) return; /* Core!?FindArrayProperty@UObject@@QAEHVFString@@PAPAVFArray@@PAH@Z */ RELOAD();
/* 878790: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 878792: je 0x878af8 */
  if (zf) goto L_878af8;
L_878798: /* 878798: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 878799: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 87879d: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8787a3u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8787a3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8787a4: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 8787a8: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 8787ac: mov dword ptr [esp + 0x24], ebp */
  W32((uint32_t)(esp + 0x24u), ebp);
/* 8787b0: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8787b6u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8787b6: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 8787ba: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8787bd: xor edi, edi */
  edi = 0;
/* 8787bf: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8787c1: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 8787c5: jle 0x878af8 */
  if ((zf || sf != of)) goto L_878af8;
L_8787cb: /* 8787cb: jmp 0x8787d0 */
  goto L_8787d0;
L_8787cd: /* 8787cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8787d0: /* 8787d0: call dword ptr [0xcfa544] */
  esp -= 4; W32(esp, 0x8787d6u); SPILL(); f_4e3d19(); if (g_unwind) return; /* Core!?GetData@FArray@@QAEPAXXZ */ RELOAD();
/* 8787d6: mov ecx, edi */
  ecx = edi;
/* 8787d8: imul ecx, dword ptr [esp + 0x50] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x50u)));
  ecx = (uint32_t)r;
  }
/* 8787dd: mov esi, eax */
  esi = eax;
/* 8787df: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8787e1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8787e3: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x8787e9u); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 8787e9: mov ecx, eax */
  ecx = eax;
/* 8787eb: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8787f1u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8787f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8787f2: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 8787f6: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8787fcu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8787fc: push 0xae60ec */
  { uint32_t v = 0xae60ecu; esp -= 4; W32(esp, v); }
/* 878801: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 878805: mov byte ptr [esp + 0xe4], 6 */
  W8((uint32_t)(esp + 0xe4u), 0x6u);
/* 87880d: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x878813u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 878813: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878815: je 0x87884e */
  if (zf) goto L_87884e;
L_878817: /* 878817: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 87881b: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x878821u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 878821: lea edx, [esp + 0x54] */
  edx = (uint32_t)(esp + 0x54u);
/* 878825: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 878826: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 878829: mov ecx, esp */
  ecx = esp;
/* 87882b: mov dword ptr [esp + 0x44], esp */
  W32((uint32_t)(esp + 0x44u), esp);
/* 87882f: push 0xae6114 */
  { uint32_t v = 0xae6114u; esp -= 4; W32(esp, v); }
/* 878834: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x87883au); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 87883a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 87883c: call dword ptr [0xcfab58] */
  esp -= 4; W32(esp, 0x878842u); SPILL(); f_4e219e(); if (g_unwind) return; /* Core!?FindFNameProperty@UObject@@QAEHVFString@@PAVFName@@@Z */ RELOAD();
/* 878842: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 878844: je 0x87884e */
  if (zf) goto L_87884e;
L_878846: /* 878846: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 87884a: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
L_87884e: /* 87884e: push 0xae6130 */
  { uint32_t v = 0xae6130u; esp -= 4; W32(esp, v); }
/* 878853: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 878857: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x87885du); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 87885d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87885f: je 0x8788fc */
  if (zf) goto L_8788fc;
L_878865: /* 878865: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 878869: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x87886fu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 87886f: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 878873: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 878874: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 878877: mov ecx, esp */
  ecx = esp;
/* 878879: mov dword ptr [esp + 0x44], esp */
  W32((uint32_t)(esp + 0x44u), esp);
/* 87887d: push 0xae6150 */
  { uint32_t v = 0xae6150u; esp -= 4; W32(esp, v); }
/* 878882: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x878888u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 878888: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 87888a: call dword ptr [0xcfab58] */
  esp -= 4; W32(esp, 0x878890u); SPILL(); f_4e219e(); if (g_unwind) return; /* Core!?FindFNameProperty@UObject@@QAEHVFString@@PAVFName@@@Z */ RELOAD();
/* 878890: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 878892: je 0x87889c */
  if (zf) goto L_87889c;
L_878894: /* 878894: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 878898: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
L_87889c: /* 87889c: lea eax, [esp + 0x78] */
  eax = (uint32_t)(esp + 0x78u);
/* 8788a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8788a1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8788a4: mov ecx, esp */
  ecx = esp;
/* 8788a6: mov dword ptr [esp + 0x44], esp */
  W32((uint32_t)(esp + 0x44u), esp);
/* 8788aa: push 0xae6164 */
  { uint32_t v = 0xae6164u; esp -= 4; W32(esp, v); }
/* 8788af: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8788b5u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8788b5: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8788b7: call dword ptr [0xcfab54] */
  esp -= 4; W32(esp, 0x8788bdu); SPILL(); f_4e2121(); if (g_unwind) return; /* Core!?FindFloatProperty@UObject@@QAEHVFString@@PAM@Z */ RELOAD();
/* 8788bd: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8788bf: je 0x8788c9 */
  if (zf) goto L_8788c9;
L_8788c1: /* 8788c1: mov ecx, dword ptr [esp + 0x78] */
  ecx = R32((uint32_t)(esp + 0x78u));
/* 8788c5: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
L_8788c9: /* 8788c9: lea edx, [esp + 0x8c] */
  edx = (uint32_t)(esp + 0x8cu);
/* 8788d0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8788d1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8788d4: mov ecx, esp */
  ecx = esp;
/* 8788d6: mov dword ptr [esp + 0x44], esp */
  W32((uint32_t)(esp + 0x44u), esp);
/* 8788da: push 0xae6178 */
  { uint32_t v = 0xae6178u; esp -= 4; W32(esp, v); }
/* 8788df: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8788e5u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8788e5: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8788e7: call dword ptr [0xcfab54] */
  esp -= 4; W32(esp, 0x8788edu); SPILL(); f_4e2121(); if (g_unwind) return; /* Core!?FindFloatProperty@UObject@@QAEHVFString@@PAM@Z */ RELOAD();
/* 8788ed: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8788ef: je 0x8788fc */
  if (zf) goto L_8788fc;
L_8788f1: /* 8788f1: mov eax, dword ptr [esp + 0x8c] */
  eax = R32((uint32_t)(esp + 0x8cu));
/* 8788f8: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
L_8788fc: /* 8788fc: push 0xae6190 */
  { uint32_t v = 0xae6190u; esp -= 4; W32(esp, v); }
/* 878901: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 878905: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x87890bu); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 87890b: push 0xae61b8 */
  { uint32_t v = 0xae61b8u; esp -= 4; W32(esp, v); }
/* 878910: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 878914: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x87891au); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 87891a: push 0xae61e4 */
  { uint32_t v = 0xae61e4u; esp -= 4; W32(esp, v); }
/* 87891f: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 878923: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x878929u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 878929: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87892b: je 0x878946 */
  if (zf) goto L_878946;
L_87892d: /* 87892d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 87892e: lea ecx, [esp + 0x9c] */
  ecx = (uint32_t)(esp + 0x9cu);
/* 878935: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x87893bu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 87893b: mov ecx, dword ptr [esp + 0x98] */
  ecx = R32((uint32_t)(esp + 0x98u));
/* 878942: mov dword ptr [esp + 0x58], ecx */
  W32((uint32_t)(esp + 0x58u), ecx);
L_878946: /* 878946: push 0xae620c */
  { uint32_t v = 0xae620cu; esp -= 4; W32(esp, v); }
/* 87894b: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 87894f: call dword ptr [0xcfa8e8] */
  esp -= 4; W32(esp, 0x878955u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* 878955: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 878959: mov byte ptr [esp + 0xe0], 5 */
  W8((uint32_t)(esp + 0xe0u), 0x5u);
/* 878961: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x878967u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 878967: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 878968: lea ecx, [esp + 0x78] */
  ecx = (uint32_t)(esp + 0x78u);
/* 87896c: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x878972u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 878972: lea edx, [esp + 0x74] */
  edx = (uint32_t)(esp + 0x74u);
/* 878976: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 878977: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 87897b: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x878981u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 878981: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878983: je 0x8789ca */
  if (zf) goto L_8789ca;
L_878985: /* 878985: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 878986: lea ecx, [esp + 0x84] */
  ecx = (uint32_t)(esp + 0x84u);
/* 87898d: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x878993u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 878993: lea eax, [esp + 0x80] */
  eax = (uint32_t)(esp + 0x80u);
/* 87899a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87899b: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 87899f: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x8789a5u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 8789a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8789a7: je 0x8789ca */
  if (zf) goto L_8789ca;
L_8789a9: /* 8789a9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8789aa: lea ecx, [esp + 0x8c] */
  ecx = (uint32_t)(esp + 0x8cu);
/* 8789b1: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8789b7u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8789b7: mov ecx, dword ptr [esp + 0x88] */
  ecx = R32((uint32_t)(esp + 0x88u));
/* 8789be: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 8789c2: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_8789ca: /* 8789ca: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8789cb: lea ecx, [esp + 0x80] */
  ecx = (uint32_t)(esp + 0x80u);
/* 8789d2: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8789d8u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8789d8: lea edx, [esp + 0x7c] */
  edx = (uint32_t)(esp + 0x7cu);
/* 8789dc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8789dd: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 8789e1: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x8789e7u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 8789e7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8789e9: je 0x878ae4 */
  if (zf) goto L_878ae4;
L_8789ef: /* 8789ef: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8789f0: lea ecx, [esp + 0x98] */
  ecx = (uint32_t)(esp + 0x98u);
/* 8789f7: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8789fdu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8789fd: lea eax, [esp + 0x94] */
  eax = (uint32_t)(esp + 0x94u);
/* 878a04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 878a05: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 878a09: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x878a0fu); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 878a0f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878a11: je 0x878ae4 */
  if (zf) goto L_878ae4;
L_878a17: /* 878a17: lea ecx, [esp + 0xa8] */
  ecx = (uint32_t)(esp + 0xa8u);
/* 878a1e: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x878a24u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 878a24: lea ecx, [esp + 0xac] */
  ecx = (uint32_t)(esp + 0xacu);
/* 878a2b: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x878a31u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 878a31: lea ecx, [esp + 0xb0] */
  ecx = (uint32_t)(esp + 0xb0u);
/* 878a38: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x878a3eu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 878a3e: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 878a42: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 878a46: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 878a4a: mov dword ptr [esp + 0xa8], ecx */
  W32((uint32_t)(esp + 0xa8u), ecx);
/* 878a51: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 878a55: mov dword ptr [esp + 0xac], edx */
  W32((uint32_t)(esp + 0xacu), edx);
/* 878a5c: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 878a60: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 878a62: mov dword ptr [esp + 0xb8], ecx */
  W32((uint32_t)(esp + 0xb8u), ecx);
/* 878a69: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 878a6b: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 878a6f: mov dword ptr [esp + 0xb8], eax */
  W32((uint32_t)(esp + 0xb8u), eax);
/* 878a76: mov dword ptr [esp + 0xc4], edx */
  W32((uint32_t)(esp + 0xc4u), edx);
/* 878a7d: mov dword ptr [esp + 0xc0], 0 */
  W32((uint32_t)(esp + 0xc0u), 0x0u);
/* 878a88: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x878a8eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 878a8e: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 878a92: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 878a95: lea edi, [ecx + eax*8] */
  edi = (uint32_t)(ecx + eax*8);
/* 878a98: mov ecx, 6 */
  ecx = 0x6u;
/* 878a9d: lea esi, [esp + 0xa8] */
  esi = (uint32_t)(esp + 0xa8u);
/* 878aa4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 878aa6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 878aa7: lea ecx, [esp + 0x88] */
  ecx = (uint32_t)(esp + 0x88u);
/* 878aae: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x878ab4u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 878ab4: mov edx, dword ptr [esp + 0x84] */
  edx = R32((uint32_t)(esp + 0x84u));
/* 878abb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 878abc: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* 878ac3: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 878ac7: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x878acdu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 878acd: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* 878ad4: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 878ad8: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 878adc: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
L_878ae4: /* 878ae4: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 878ae8: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 878aeb: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 878aec: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878aee: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 878af2: jl 0x8787d0 */
  if ((sf != of)) goto L_8787d0;
L_878af8: /* 878af8: lea ecx, [esp + 0xcc] */
  ecx = (uint32_t)(esp + 0xccu);
/* 878aff: mov byte ptr [esp + 0xe0], 4 */
  W8((uint32_t)(esp + 0xe0u), 0x4u);
/* 878b07: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x878b0du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_878b0d: /* 878b0d: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
L_878b12: /* 878b12: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 878b15: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 878b16: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878b18: jge 0x878b40 */
  if ((sf == of)) goto L_878b40;
L_878b1a: /* 878b1a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 878b1c: mov ecx, dword ptr [ecx + ebx*4] */
  ecx = R32((uint32_t)(ecx + ebx*4));
/* 878b1f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878b21: je 0x878b12 */
  if (zf) goto L_878b12;
L_878b23: /* 878b23: push 0xb6d258 */
  { uint32_t v = 0xb6d258u; esp -= 4; W32(esp, v); }
/* 878b28: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x878b2eu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 878b2e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878b30: je 0x878b0d */
  if (zf) goto L_878b0d;
L_878b32: /* 878b32: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 878b37: cmp ebx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878b3a: jl 0x878700 */
  if ((sf != of)) goto L_878700;
L_878b40: /* 878b40: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 878b44: xor ebp, ebp */
  ebp = 0;
/* 878b46: xor ebx, ebx */
  ebx = 0;
/* 878b48: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878b4a: jle 0x878ba3 */
  if ((zf || sf != of)) goto L_878ba3;
L_878b4c: /* 878b4c: xor edi, edi */
  edi = 0;
/* 878b4e: mov edi, edi */
  edi = edi;
L_878b50: /* 878b50: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 878b54: mov dword ptr [edi + edx + 0x10], ebp */
  W32((uint32_t)(edi + edx + 0x10u), ebp);
/* 878b58: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 878b5c: xor esi, esi */
  esi = 0;
/* 878b5e: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878b60: jle 0x878b97 */
  if ((zf || sf != of)) goto L_878b97;
L_878b62: /* 878b62: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 878b66: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 878b6a: lea ecx, [eax + esi*4] */
  ecx = (uint32_t)(eax + esi*4);
/* 878b6d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 878b6e: lea ecx, [edi + edx + 4] */
  ecx = (uint32_t)(edi + edx + 0x4u);
/* 878b72: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x878b78u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 878b78: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878b7a: je 0x878b8e */
  if (zf) goto L_878b8e;
L_878b7c: /* 878b7c: mov eax, dword ptr [esp + 0x9c] */
  eax = R32((uint32_t)(esp + 0x9cu));
/* 878b83: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 878b86: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 878b8a: mov dword ptr [edi + edx + 0x10], ecx */
  W32((uint32_t)(edi + edx + 0x10u), ecx);
L_878b8e: /* 878b8e: mov eax, dword ptr [esp + 0x6c] */
  eax = R32((uint32_t)(esp + 0x6cu));
/* 878b92: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 878b93: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878b95: jl 0x878b62 */
  if ((sf != of)) goto L_878b62;
L_878b97: /* 878b97: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 878b9b: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 878b9c: add edi, 0x18 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 878b9f: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878ba1: jl 0x878b50 */
  if ((sf != of)) goto L_878b50;
L_878ba3: /* 878ba3: cmp dword ptr [esp + 0x60], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x60u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878ba7: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 878bab: jle 0x878cd2 */
  if ((zf || sf != of)) goto L_878cd2;
L_878bb1: /* 878bb1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 878bb3: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 878bb5: mov ecx, 0xb190cc */
  ecx = 0xb190ccu;
/* 878bba: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x878bc0u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 878bc0: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 878bc4: mov ebp, eax */
  ebp = eax;
/* 878bc6: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 878bca: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 878bcd: mov eax, dword ptr [0xb190cc] */
  eax = R32((uint32_t)(0xb190ccu));
/* 878bd2: lea esi, [ebp + ebp*4] */
  esi = (uint32_t)(ebp + ebp*4);
/* 878bd6: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 878bd9: mov dword ptr [esi + eax], edx */
  W32((uint32_t)(esi + eax), edx);
/* 878bdc: mov ecx, dword ptr [0xb190cc] */
  ecx = R32((uint32_t)(0xb190ccu));
/* 878be2: xor ebx, ebx */
  ebx = 0;
/* 878be4: mov dword ptr [esi + ecx + 4], ebx */
  W32((uint32_t)(esi + ecx + 0x4u), ebx);
/* 878be8: cmp dword ptr [esp + 0x28], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878bec: jle 0x878c6a */
  if ((zf || sf != of)) goto L_878c6a;
L_878bee: /* 878bee: xor edi, edi */
  edi = 0;
L_878bf0: /* 878bf0: mov edx, dword ptr [esp + 0xc0] */
  edx = R32((uint32_t)(esp + 0xc0u));
/* 878bf7: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 878bfb: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 878bfe: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 878c02: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 878c03: lea ecx, [edi + edx] */
  ecx = (uint32_t)(edi + edx);
/* 878c06: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x878c0cu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 878c0c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878c0e: je 0x878c5e */
  if (zf) goto L_878c5e;
L_878c10: /* 878c10: mov eax, dword ptr [0xb190cc] */
  eax = R32((uint32_t)(0xb190ccu));
/* 878c15: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 878c17: lea ecx, [esi + eax + 0x1c] */
  ecx = (uint32_t)(esi + eax + 0x1cu);
/* 878c1b: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 878c1d: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x878c23u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 878c23: mov edx, dword ptr [0xb190cc] */
  edx = R32((uint32_t)(0xb190ccu));
/* 878c29: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 878c2c: mov eax, dword ptr [esi + edx + 0x1c] */
  eax = R32((uint32_t)(esi + edx + 0x1cu));
/* 878c30: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 878c33: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 878c37: mov edx, dword ptr [edi + ecx + 0x10] */
  edx = R32((uint32_t)(edi + ecx + 0x10u));
/* 878c3b: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 878c3d: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 878c41: mov edx, dword ptr [edi + ecx + 8] */
  edx = R32((uint32_t)(edi + ecx + 0x8u));
/* 878c45: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 878c48: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 878c4c: mov edx, dword ptr [edi + ecx + 0xc] */
  edx = R32((uint32_t)(edi + ecx + 0xcu));
/* 878c50: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 878c53: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 878c57: mov edx, dword ptr [edi + ecx + 0x14] */
  edx = R32((uint32_t)(edi + ecx + 0x14u));
/* 878c5b: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
L_878c5e: /* 878c5e: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 878c62: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 878c63: add edi, 0x18 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 878c66: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878c68: jl 0x878bf0 */
  if ((sf != of)) goto L_878bf0;
L_878c6a: /* 878c6a: mov eax, dword ptr [0xb190cc] */
  eax = R32((uint32_t)(0xb190ccu));
/* 878c6f: mov ecx, dword ptr [esi + eax + 0x20] */
  ecx = R32((uint32_t)(esi + eax + 0x20u));
/* 878c73: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878c75: je 0x878ca0 */
  if (zf) goto L_878ca0;
L_878c77: /* 878c77: mov ecx, dword ptr [esi + eax] */
  ecx = R32((uint32_t)(esi + eax));
/* 878c7a: mov edx, dword ptr [ecx + 0xd0] */
  edx = R32((uint32_t)(ecx + 0xd0u));
/* 878c80: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878c82: je 0x878ca0 */
  if (zf) goto L_878ca0;
L_878c84: /* 878c84: mov edx, ecx */
  edx = ecx;
/* 878c86: mov ecx, dword ptr [edx + 0xd0] */
  ecx = R32((uint32_t)(edx + 0xd0u));
/* 878c8c: push 0xb859a0 */
  { uint32_t v = 0xb859a0u; esp -= 4; W32(esp, v); }
/* 878c91: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x878c97u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 878c97: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878c99: jne 0x878cbd */
  if (!zf) goto L_878cbd;
L_878c9b: /* 878c9b: mov eax, dword ptr [0xb190cc] */
  eax = R32((uint32_t)(0xb190ccu));
L_878ca0: /* 878ca0: lea esi, [esi + eax + 0x1c] */
  esi = (uint32_t)(esi + eax + 0x1cu);
/* 878ca4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878ca6: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 878ca8: mov ecx, esi */
  ecx = esi;
/* 878caa: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x878cb0u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 878cb0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 878cb2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 878cb3: mov ecx, 0xb190cc */
  ecx = 0xb190ccu;
/* 878cb8: call 0x6c35da */
  esp -= 4; W32(esp, 0x878cbdu); SPILL(); f_6c35da(); if (g_unwind) return; RELOAD();
L_878cbd: /* 878cbd: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 878cc1: mov ecx, dword ptr [esp + 0x60] */
  ecx = R32((uint32_t)(esp + 0x60u));
/* 878cc5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 878cc6: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878cc8: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 878ccc: jl 0x878bb1 */
  if ((sf != of)) goto L_878bb1;
L_878cd2: /* 878cd2: mov eax, dword ptr [0xb190d0] */
  eax = R32((uint32_t)(0xb190d0u));
/* 878cd7: xor ebp, ebp */
  ebp = 0;
/* 878cd9: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878cdb: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 878cdf: jle 0x878ee1 */
  if ((zf || sf != of)) goto L_878ee1;
L_878ce5: /* 878ce5: mov dword ptr [esp + 0x3c], ebp */
  W32((uint32_t)(esp + 0x3cu), ebp);
/* 878ce9: mov dword ptr [esp + 0x40], ebp */
  W32((uint32_t)(esp + 0x40u), ebp);
/* 878ced: mov dword ptr [esp + 0x44], ebp */
  W32((uint32_t)(esp + 0x44u), ebp);
/* 878cf1: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 878cf5: jmp 0x878d00 */
  goto L_878d00;
L_878d00: /* 878d00: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 878d04: mov eax, dword ptr [0xb190cc] */
  eax = R32((uint32_t)(0xb190ccu));
/* 878d09: mov edi, dword ptr [ecx + 0xb4] */
  edi = R32((uint32_t)(ecx + 0xb4u));
/* 878d0f: mov esi, dword ptr [eax + ebp] */
  esi = R32((uint32_t)(eax + ebp));
/* 878d12: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d14: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d16: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d18: lea ecx, [esp + 0xd8] */
  ecx = (uint32_t)(esp + 0xd8u);
/* 878d1f: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x878d25u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 878d25: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 878d27: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d2b: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 878d2d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d2f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d33: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 878d36: mov edx, esp */
  edx = esp;
/* 878d38: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 878d3a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 878d3d: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 878d40: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 878d43: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 878d46: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 878d4a: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 878d4e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 878d51: mov ecx, esp */
  ecx = esp;
/* 878d53: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 878d55: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* 878d59: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 878d5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 878d5d: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 878d60: mov ecx, esp */
  ecx = esp;
/* 878d62: mov dword ptr [esp + 0x64], esp */
  W32((uint32_t)(esp + 0x64u), esp);
/* 878d66: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d68: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x878d6eu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 878d6e: push 0xcdbf48 */
  { uint32_t v = 0xcdbf48u; esp -= 4; W32(esp, v); }
/* 878d73: mov ecx, edi */
  ecx = edi;
/* 878d75: call dword ptr [ebx + 0xac] */
  { uint32_t t = R32((uint32_t)(ebx + 0xacu)); esp -= 4; W32(esp, 0x878d7bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 878d7b: mov edi, eax */
  edi = eax;
/* 878d7d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878d7f: je 0x878ec3 */
  if (zf) goto L_878ec3;
L_878d85: /* 878d85: mov eax, dword ptr [0xb190cc] */
  eax = R32((uint32_t)(0xb190ccu));
/* 878d8a: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 878d8e: mov dword ptr [eax + ebp + 4], edi */
  W32((uint32_t)(eax + ebp + 0x4u), edi);
/* 878d92: mov edx, dword ptr [ebx + 0xb4] */
  edx = R32((uint32_t)(ebx + 0xb4u));
/* 878d98: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 878d9b: xor eax, eax */
  eax = 0;
/* 878d9d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 878d9f: jle 0x878db0 */
  if ((zf || sf != of)) goto L_878db0;
L_878da1: /* 878da1: mov edx, dword ptr [edx + 0x2c] */
  edx = R32((uint32_t)(edx + 0x2cu));
L_878da4: /* 878da4: cmp dword ptr [edx], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 878da6: je 0x878db3 */
  if (zf) goto L_878db3;
L_878da8: /* 878da8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 878da9: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 878dac: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878dae: jl 0x878da4 */
  if ((sf != of)) goto L_878da4;
L_878db0: /* 878db0: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_878db3: /* 878db3: mov ecx, dword ptr [0xb190cc] */
  ecx = R32((uint32_t)(0xb190ccu));
/* 878db9: mov dword ptr [ecx + ebp + 0xc], eax */
  W32((uint32_t)(ecx + ebp + 0xcu), eax);
/* 878dbd: mov edx, dword ptr [ebx + 0xb4] */
  edx = R32((uint32_t)(ebx + 0xb4u));
/* 878dc3: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 878dc6: xor eax, eax */
  eax = 0;
/* 878dc8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 878dca: jle 0x878ddc */
  if ((zf || sf != of)) goto L_878ddc;
L_878dcc: /* 878dcc: mov edx, dword ptr [edx + 0x2c] */
  edx = R32((uint32_t)(edx + 0x2cu));
/* 878dcf: nop  */
L_878dd0: /* 878dd0: cmp dword ptr [edx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 878dd2: je 0x878ddf */
  if (zf) goto L_878ddf;
L_878dd4: /* 878dd4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 878dd5: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 878dd8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878dda: jl 0x878dd0 */
  if ((sf != of)) goto L_878dd0;
L_878ddc: /* 878ddc: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_878ddf: /* 878ddf: mov edx, dword ptr [0xb190cc] */
  edx = R32((uint32_t)(0xb190ccu));
/* 878de5: mov dword ptr [edx + ebp + 0x10], eax */
  W32((uint32_t)(edx + ebp + 0x10u), eax);
/* 878de9: mov eax, dword ptr [esi + 0xd0] */
  eax = R32((uint32_t)(esi + 0xd0u));
/* 878def: mov ecx, dword ptr [0xb190cc] */
  ecx = R32((uint32_t)(0xb190ccu));
/* 878df5: mov dword ptr [ecx + ebp + 8], eax */
  W32((uint32_t)(ecx + ebp + 0x8u), eax);
/* 878df9: mov edx, dword ptr [esi + 0xd0] */
  edx = R32((uint32_t)(esi + 0xd0u));
/* 878dff: mov dword ptr [edi + 0xd0], edx */
  W32((uint32_t)(edi + 0xd0u), edx);
/* 878e05: mov eax, dword ptr [esi + 0x284] */
  eax = R32((uint32_t)(esi + 0x284u));
/* 878e0b: mov dword ptr [edi + 0x284], eax */
  W32((uint32_t)(edi + 0x284u), eax);
/* 878e11: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 878e17: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 878e19: lea edx, [edi + 0x17c] */
  edx = (uint32_t)(edi + 0x17cu);
/* 878e1f: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 878e21: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 878e24: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 878e27: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 878e2a: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 878e2d: lea edx, [esi + 0x288] */
  edx = (uint32_t)(esi + 0x288u);
/* 878e33: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 878e35: lea eax, [edi + 0x288] */
  eax = (uint32_t)(edi + 0x288u);
/* 878e3b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 878e3d: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 878e40: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 878e43: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 878e46: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 878e49: mov al, byte ptr [esi + 0x2b0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2b0u))) & 0xffu);
/* 878e4f: mov byte ptr [edi + 0x2b0], al */
  W8((uint32_t)(edi + 0x2b0u), (eax & 0xffu));
/* 878e55: mov cl, byte ptr [esi + 0x51] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x51u))) & 0xffu);
/* 878e58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878e5a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878e5c: mov byte ptr [edi + 0x51], cl */
  W8((uint32_t)(edi + 0x51u), (ecx & 0xffu));
/* 878e5f: mov ecx, dword ptr [ebx + 0xb4] */
  ecx = R32((uint32_t)(ebx + 0xb4u));
/* 878e65: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 878e67: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878e69: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 878e6c: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 878e72: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 878e74: mov ebx, esp */
  ebx = esp;
/* 878e76: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
/* 878e78: mov ebp, dword ptr [eax + 4] */
  ebp = R32((uint32_t)(eax + 0x4u));
/* 878e7b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 878e7e: mov dword ptr [ebx + 4], ebp */
  W32((uint32_t)(ebx + 0x4u), ebp);
/* 878e81: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 878e82: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 878e85: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x878e8bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 878e8b: mov ecx, dword ptr [edi + 0xd0] */
  ecx = R32((uint32_t)(edi + 0xd0u));
/* 878e91: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 878e93: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 878e94: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x878e9au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 878e9a: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* 878ea0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 878ea2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 878ea3: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x878ea9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 878ea9: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* 878eaf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 878eb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 878eb2: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x878eb8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 878eb8: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 878ebc: mov dword ptr [eax + 0x6c], 1 */
  W32((uint32_t)(eax + 0x6cu), 0x1u);
L_878ec3: /* 878ec3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 878ec7: mov ecx, dword ptr [0xb190d0] */
  ecx = R32((uint32_t)(0xb190d0u));
/* 878ecd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 878ece: add ebp, 0x28 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 878ed1: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878ed3: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 878ed7: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 878edb: jl 0x878d00 */
  if ((sf != of)) goto L_878d00;
L_878ee1: /* 878ee1: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 878ee5: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 878ee9: mov dword ptr [0xb190c8], eax */
  W32((uint32_t)(0xb190c8u), eax);
/* 878eee: mov byte ptr [esp + 0xe0], 3 */
  W8((uint32_t)(esp + 0xe0u), 0x3u);
/* 878ef6: call 0x6c6ab9 */
  esp -= 4; W32(esp, 0x878efbu); SPILL(); f_6c6ab9(); if (g_unwind) return; RELOAD();
/* 878efb: lea ecx, [esp + 0x9c] */
  ecx = (uint32_t)(esp + 0x9cu);
/* 878f02: mov byte ptr [esp + 0xe0], 2 */
  W8((uint32_t)(esp + 0xe0u), 0x2u);
/* 878f0a: call 0x6c2ed2 */
  esp -= 4; W32(esp, 0x878f0fu); SPILL(); f_6c2ed2(); if (g_unwind) return; RELOAD();
/* 878f0f: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 878f13: mov byte ptr [esp + 0xe0], 1 */
  W8((uint32_t)(esp + 0xe0u), 0x1u);
/* 878f1b: call 0x6c34f9 */
  esp -= 4; W32(esp, 0x878f20u); SPILL(); f_6c34f9(); if (g_unwind) return; RELOAD();
/* 878f20: lea ecx, [esp + 0xc0] */
  ecx = (uint32_t)(esp + 0xc0u);
/* 878f27: mov byte ptr [esp + 0xe0], 0 */
  W8((uint32_t)(esp + 0xe0u), 0x0u);
/* 878f2f: call 0x6c34f9 */
  esp -= 4; W32(esp, 0x878f34u); SPILL(); f_6c34f9(); if (g_unwind) return; RELOAD();
/* 878f34: lea ecx, [esp + 0x5c] */
  ecx = (uint32_t)(esp + 0x5cu);
/* 878f38: mov dword ptr [esp + 0xe0], 0xffffffff */
  W32((uint32_t)(esp + 0xe0u), 0xffffffffu);
/* 878f43: call 0x6c9d0e */
  esp -= 4; W32(esp, 0x878f48u); SPILL(); f_6c9d0e(); if (g_unwind) return; RELOAD();
/* 878f48: mov ecx, dword ptr [esp + 0xd8] */
  ecx = R32((uint32_t)(esp + 0xd8u));
/* 878f4f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 878f50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 878f51: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 878f52: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 878f59: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 878f5a: add esp, 0xd4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xd4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 878f60: ret  */
  esp += 4; SPILL(); return;
}

void f_878cf7(void) {
  LOAD_REGS();
L_878cf7: /* 878cf7: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 878cfe: mov edi, edi */
  edi = edi;
L_878d00: /* 878d00: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 878d04: mov eax, dword ptr [0xb190cc] */
  eax = R32((uint32_t)(0xb190ccu));
/* 878d09: mov edi, dword ptr [ecx + 0xb4] */
  edi = R32((uint32_t)(ecx + 0xb4u));
/* 878d0f: mov esi, dword ptr [eax + ebp] */
  esi = R32((uint32_t)(eax + ebp));
/* 878d12: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d14: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d16: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d18: lea ecx, [esp + 0xd8] */
  ecx = (uint32_t)(esp + 0xd8u);
/* 878d1f: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x878d25u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 878d25: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 878d27: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d2b: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 878d2d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d2f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d33: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 878d36: mov edx, esp */
  edx = esp;
/* 878d38: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 878d3a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 878d3d: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 878d40: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 878d43: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 878d46: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 878d4a: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 878d4e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 878d51: mov ecx, esp */
  ecx = esp;
/* 878d53: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 878d55: mov edx, dword ptr [esp + 0x70] */
  edx = R32((uint32_t)(esp + 0x70u));
/* 878d59: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 878d5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 878d5d: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 878d60: mov ecx, esp */
  ecx = esp;
/* 878d62: mov dword ptr [esp + 0x64], esp */
  W32((uint32_t)(esp + 0x64u), esp);
/* 878d66: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878d68: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x878d6eu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 878d6e: push 0xcdbf48 */
  { uint32_t v = 0xcdbf48u; esp -= 4; W32(esp, v); }
/* 878d73: mov ecx, edi */
  ecx = edi;
/* 878d75: call dword ptr [ebx + 0xac] */
  { uint32_t t = R32((uint32_t)(ebx + 0xacu)); esp -= 4; W32(esp, 0x878d7bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 878d7b: mov edi, eax */
  edi = eax;
/* 878d7d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 878d7f: je 0x878ec3 */
  if (zf) goto L_878ec3;
L_878d85: /* 878d85: mov eax, dword ptr [0xb190cc] */
  eax = R32((uint32_t)(0xb190ccu));
/* 878d8a: mov ebx, dword ptr [esp + 0x30] */
  ebx = R32((uint32_t)(esp + 0x30u));
/* 878d8e: mov dword ptr [eax + ebp + 4], edi */
  W32((uint32_t)(eax + ebp + 0x4u), edi);
/* 878d92: mov edx, dword ptr [ebx + 0xb4] */
  edx = R32((uint32_t)(ebx + 0xb4u));
/* 878d98: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 878d9b: xor eax, eax */
  eax = 0;
/* 878d9d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 878d9f: jle 0x878db0 */
  if ((zf || sf != of)) goto L_878db0;
L_878da1: /* 878da1: mov edx, dword ptr [edx + 0x2c] */
  edx = R32((uint32_t)(edx + 0x2cu));
L_878da4: /* 878da4: cmp dword ptr [edx], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 878da6: je 0x878db3 */
  if (zf) goto L_878db3;
L_878da8: /* 878da8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 878da9: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 878dac: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878dae: jl 0x878da4 */
  if ((sf != of)) goto L_878da4;
L_878db0: /* 878db0: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_878db3: /* 878db3: mov ecx, dword ptr [0xb190cc] */
  ecx = R32((uint32_t)(0xb190ccu));
/* 878db9: mov dword ptr [ecx + ebp + 0xc], eax */
  W32((uint32_t)(ecx + ebp + 0xcu), eax);
/* 878dbd: mov edx, dword ptr [ebx + 0xb4] */
  edx = R32((uint32_t)(ebx + 0xb4u));
/* 878dc3: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 878dc6: xor eax, eax */
  eax = 0;
/* 878dc8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 878dca: jle 0x878ddc */
  if ((zf || sf != of)) goto L_878ddc;
L_878dcc: /* 878dcc: mov edx, dword ptr [edx + 0x2c] */
  edx = R32((uint32_t)(edx + 0x2cu));
/* 878dcf: nop  */
L_878dd0: /* 878dd0: cmp dword ptr [edx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 878dd2: je 0x878ddf */
  if (zf) goto L_878ddf;
L_878dd4: /* 878dd4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 878dd5: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 878dd8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878dda: jl 0x878dd0 */
  if ((sf != of)) goto L_878dd0;
L_878ddc: /* 878ddc: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_878ddf: /* 878ddf: mov edx, dword ptr [0xb190cc] */
  edx = R32((uint32_t)(0xb190ccu));
/* 878de5: mov dword ptr [edx + ebp + 0x10], eax */
  W32((uint32_t)(edx + ebp + 0x10u), eax);
/* 878de9: mov eax, dword ptr [esi + 0xd0] */
  eax = R32((uint32_t)(esi + 0xd0u));
/* 878def: mov ecx, dword ptr [0xb190cc] */
  ecx = R32((uint32_t)(0xb190ccu));
/* 878df5: mov dword ptr [ecx + ebp + 8], eax */
  W32((uint32_t)(ecx + ebp + 0x8u), eax);
/* 878df9: mov edx, dword ptr [esi + 0xd0] */
  edx = R32((uint32_t)(esi + 0xd0u));
/* 878dff: mov dword ptr [edi + 0xd0], edx */
  W32((uint32_t)(edi + 0xd0u), edx);
/* 878e05: mov eax, dword ptr [esi + 0x284] */
  eax = R32((uint32_t)(esi + 0x284u));
/* 878e0b: mov dword ptr [edi + 0x284], eax */
  W32((uint32_t)(edi + 0x284u), eax);
/* 878e11: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 878e17: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 878e19: lea edx, [edi + 0x17c] */
  edx = (uint32_t)(edi + 0x17cu);
/* 878e1f: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 878e21: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 878e24: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 878e27: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 878e2a: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 878e2d: lea edx, [esi + 0x288] */
  edx = (uint32_t)(esi + 0x288u);
/* 878e33: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 878e35: lea eax, [edi + 0x288] */
  eax = (uint32_t)(edi + 0x288u);
/* 878e3b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 878e3d: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 878e40: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 878e43: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 878e46: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 878e49: mov al, byte ptr [esi + 0x2b0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2b0u))) & 0xffu);
/* 878e4f: mov byte ptr [edi + 0x2b0], al */
  W8((uint32_t)(edi + 0x2b0u), (eax & 0xffu));
/* 878e55: mov cl, byte ptr [esi + 0x51] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x51u))) & 0xffu);
/* 878e58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878e5a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878e5c: mov byte ptr [edi + 0x51], cl */
  W8((uint32_t)(edi + 0x51u), (ecx & 0xffu));
/* 878e5f: mov ecx, dword ptr [ebx + 0xb4] */
  ecx = R32((uint32_t)(ebx + 0xb4u));
/* 878e65: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 878e67: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 878e69: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 878e6c: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 878e72: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 878e74: mov ebx, esp */
  ebx = esp;
/* 878e76: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
/* 878e78: mov ebp, dword ptr [eax + 4] */
  ebp = R32((uint32_t)(eax + 0x4u));
/* 878e7b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 878e7e: mov dword ptr [ebx + 4], ebp */
  W32((uint32_t)(ebx + 0x4u), ebp);
/* 878e81: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 878e82: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 878e85: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x878e8bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 878e8b: mov ecx, dword ptr [edi + 0xd0] */
  ecx = R32((uint32_t)(edi + 0xd0u));
/* 878e91: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 878e93: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 878e94: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x878e9au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 878e9a: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* 878ea0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 878ea2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 878ea3: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x878ea9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 878ea9: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* 878eaf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 878eb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 878eb2: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x878eb8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 878eb8: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 878ebc: mov dword ptr [eax + 0x6c], 1 */
  W32((uint32_t)(eax + 0x6cu), 0x1u);
L_878ec3: /* 878ec3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 878ec7: mov ecx, dword ptr [0xb190d0] */
  ecx = R32((uint32_t)(0xb190d0u));
/* 878ecd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 878ece: add ebp, 0x28 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 878ed1: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 878ed3: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 878ed7: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 878edb: jl 0x878d00 */
  if ((sf != of)) goto L_878d00;
L_878ee1: /* 878ee1: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 878ee5: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 878ee9: mov dword ptr [0xb190c8], eax */
  W32((uint32_t)(0xb190c8u), eax);
/* 878eee: mov byte ptr [esp + 0xe0], 3 */
  W8((uint32_t)(esp + 0xe0u), 0x3u);
/* 878ef6: call 0x6c6ab9 */
  esp -= 4; W32(esp, 0x878efbu); SPILL(); f_6c6ab9(); if (g_unwind) return; RELOAD();
/* 878efb: lea ecx, [esp + 0x9c] */
  ecx = (uint32_t)(esp + 0x9cu);
/* 878f02: mov byte ptr [esp + 0xe0], 2 */
  W8((uint32_t)(esp + 0xe0u), 0x2u);
/* 878f0a: call 0x6c2ed2 */
  esp -= 4; W32(esp, 0x878f0fu); SPILL(); f_6c2ed2(); if (g_unwind) return; RELOAD();
/* 878f0f: lea ecx, [esp + 0x68] */
  ecx = (uint32_t)(esp + 0x68u);
/* 878f13: mov byte ptr [esp + 0xe0], 1 */
  W8((uint32_t)(esp + 0xe0u), 0x1u);
/* 878f1b: call 0x6c34f9 */
  esp -= 4; W32(esp, 0x878f20u); SPILL(); f_6c34f9(); if (g_unwind) return; RELOAD();
/* 878f20: lea ecx, [esp + 0xc0] */
  ecx = (uint32_t)(esp + 0xc0u);
/* 878f27: mov byte ptr [esp + 0xe0], 0 */
  W8((uint32_t)(esp + 0xe0u), 0x0u);
/* 878f2f: call 0x6c34f9 */
  esp -= 4; W32(esp, 0x878f34u); SPILL(); f_6c34f9(); if (g_unwind) return; RELOAD();
/* 878f34: lea ecx, [esp + 0x5c] */
  ecx = (uint32_t)(esp + 0x5cu);
/* 878f38: mov dword ptr [esp + 0xe0], 0xffffffff */
  W32((uint32_t)(esp + 0xe0u), 0xffffffffu);
/* 878f43: call 0x6c9d0e */
  esp -= 4; W32(esp, 0x878f48u); SPILL(); f_6c9d0e(); if (g_unwind) return; RELOAD();
/* 878f48: mov ecx, dword ptr [esp + 0xd8] */
  ecx = R32((uint32_t)(esp + 0xd8u));
/* 878f4f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 878f50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 878f51: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 878f52: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 878f59: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 878f5a: add esp, 0xd4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xd4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 878f60: ret  */
  esp += 4; SPILL(); return;
}

void f_879220(void) {
  LOAD_REGS();
L_879220: /* 879220: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 879223: mov eax, dword ptr [0xb190c8] */
  eax = R32((uint32_t)(0xb190c8u));
/* 879228: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 879229: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 87922a: mov ebp, ecx */
  ebp = ecx;
/* 87922c: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87922e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87922f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 879230: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 879234: jne 0x8792b2 */
  if (!zf) goto L_8792b2;
L_879236: /* 879236: mov ebx, dword ptr [ebp + 0xb4] */
  ebx = R32((uint32_t)(ebp + 0xb4u));
/* 87923c: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 87923f: mov ecx, dword ptr [0xb190cc] */
  ecx = R32((uint32_t)(0xb190ccu));
/* 879245: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 879249: mov eax, dword ptr [0xb190d0] */
  eax = R32((uint32_t)(0xb190d0u));
/* 87924e: xor edi, edi */
  edi = 0;
/* 879250: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 879252: jle 0x8792c6 */
  if ((zf || sf != of)) goto L_8792c6;
L_879254: /* 879254: xor eax, eax */
  eax = 0;
/* 879256: lea esi, [ecx + 0x10] */
  esi = (uint32_t)(ecx + 0x10u);
/* 879259: jmp 0x879260 */
  goto L_879260;
L_87925b: /* 87925b: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 87925f: nop  */
L_879260: /* 879260: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 879264: cmp dword ptr [esi - 4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xfffffffcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 879267: jge 0x8792b2 */
  if ((sf == of)) goto L_8792b2;
L_879269: /* 879269: mov edx, dword ptr [ebx + 0x2c] */
  edx = R32((uint32_t)(ebx + 0x2cu));
/* 87926c: mov ebp, dword ptr [eax + ecx + 0xc] */
  ebp = R32((uint32_t)(eax + ecx + 0xcu));
/* 879270: mov ebp, dword ptr [edx + ebp*4] */
  ebp = R32((uint32_t)(edx + ebp*4));
/* 879273: cmp ebp, dword ptr [eax + ecx] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(eax + ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 879276: jne 0x8792ae */
  if (!zf) goto L_8792ae;
L_879278: /* 879278: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 87927c: cmp dword ptr [esi], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 87927e: jge 0x8792ae */
  if ((sf == of)) goto L_8792ae;
L_879280: /* 879280: mov ebp, dword ptr [eax + ecx + 0x10] */
  ebp = R32((uint32_t)(eax + ecx + 0x10u));
/* 879284: mov edx, dword ptr [edx + ebp*4] */
  edx = R32((uint32_t)(edx + ebp*4));
/* 879287: cmp edx, dword ptr [eax + ecx + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87928b: jne 0x8792ae */
  if (!zf) goto L_8792ae;
L_87928d: /* 87928d: mov edx, dword ptr [esi - 0x10] */
  edx = R32((uint32_t)(esi + 0xfffffff0u));
/* 879290: mov ebp, dword ptr [esi - 8] */
  ebp = R32((uint32_t)(esi + 0xfffffff8u));
/* 879293: cmp ebp, dword ptr [edx + 0xd0] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0xd0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 879299: jne 0x8792ae */
  if (!zf) goto L_8792ae;
L_87929b: /* 87929b: mov edx, dword ptr [0xb190d0] */
  edx = R32((uint32_t)(0xb190d0u));
/* 8792a1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8792a2: add eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8792a5: add esi, 0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8792a8: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8792aa: jl 0x87925b */
  if ((sf != of)) goto L_87925b;
L_8792ac: /* 8792ac: jmp 0x8792c6 */
  goto L_8792c6;
L_8792ae: /* 8792ae: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
L_8792b2: /* 8792b2: mov ecx, ebp */
  ecx = ebp;
/* 8792b4: call 0x6c1b95 */
  esp -= 4; W32(esp, 0x8792b9u); SPILL(); f_6c1b95(); if (g_unwind) return; RELOAD();
/* 8792b9: mov ecx, ebp */
  ecx = ebp;
/* 8792bb: call 0x6c7fd6 */
  esp -= 4; W32(esp, 0x8792c0u); SPILL(); f_6c7fd6(); if (g_unwind) return; RELOAD();
/* 8792c0: mov ecx, dword ptr [0xb190cc] */
  ecx = R32((uint32_t)(0xb190ccu));
L_8792c6: /* 8792c6: mov eax, dword ptr [0xb190d0] */
  eax = R32((uint32_t)(0xb190d0u));
/* 8792cb: xor ebp, ebp */
  ebp = 0;
/* 8792cd: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8792cf: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
/* 8792d3: jle 0x8794f0 */
  if ((zf || sf != of)) goto L_8794f0;
L_8792d9: /* 8792d9: jmp 0x8792e1 */
  goto L_8792e1;
L_8792db: /* 8792db: mov ecx, dword ptr [0xb190cc] */
  ecx = R32((uint32_t)(0xb190ccu));
L_8792e1: /* 8792e1: mov ebx, dword ptr [ecx + ebp + 4] */
  ebx = R32((uint32_t)(ecx + ebp + 0x4u));
/* 8792e5: mov ecx, dword ptr [ebx + 0xd0] */
  ecx = R32((uint32_t)(ebx + 0xd0u));
/* 8792eb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8792ed: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 8792f1: je 0x8794f0 */
  if (zf) goto L_8794f0;
L_8792f7: /* 8792f7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8792f9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8792fa: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x879300u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 879300: fld dword ptr [0xa08220] */
  { double v = F32((uint32_t)(0xa08220u)); FPUSH(v); }
/* 879306: mov edx, dword ptr [0xb190cc] */
  edx = R32((uint32_t)(0xb190ccu));
/* 87930c: mov esi, eax */
  esi = eax;
/* 87930e: mov eax, dword ptr [edx + ebp + 0x20] */
  eax = R32((uint32_t)(edx + ebp + 0x20u));
/* 879312: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 879315: xor ecx, ecx */
  ecx = 0;
/* 879317: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 879319: jle 0x8794af */
  if ((zf || sf != of)) goto L_8794af;
L_87931f: /* 87931f: mov ebx, dword ptr [edx + ebp + 0x1c] */
  ebx = R32((uint32_t)(edx + ebp + 0x1cu));
/* 879323: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 879327: jmp 0x879330 */
  goto L_879330;
L_879330: /* 879330: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 879332: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 879336: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 87933a: fcomp dword ptr [esp + 0x38] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x38u)));
  FPOP();
/* 87933e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 879340: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 879343: jp 0x879358 */
  if (pf) goto L_879358;
L_879345: /* 879345: fcom dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
/* 879349: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 87934b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 87934e: jp 0x879358 */
  if (pf) goto L_879358;
L_879350: /* 879350: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 879352: mov edi, ecx */
  edi = ecx;
/* 879354: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
L_879358: /* 879358: mov eax, dword ptr [edx + ebp + 0x20] */
  eax = R32((uint32_t)(edx + ebp + 0x20u));
/* 87935c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 87935d: add ebx, 0x18 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 879360: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 879362: jl 0x879330 */
  if ((sf != of)) goto L_879330;
L_879364: /* 879364: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 879366: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 879368: jl 0x8794b3 */
  if ((sf != of)) goto L_8794b3;
L_87936e: /* 87936e: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 879372: mov eax, dword ptr [ecx + 0xd0] */
  eax = R32((uint32_t)(ecx + 0xd0u));
/* 879378: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87937a: je 0x8794b3 */
  if (zf) goto L_8794b3;
L_879380: /* 879380: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 879384: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 879387: lea edi, [eax + edx*8] */
  edi = (uint32_t)(eax + edx*8);
/* 87938a: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 87938d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 87938f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 879390: mov ecx, esi */
  ecx = esi;
/* 879392: call dword ptr [edx + 0xb4] */
  { uint32_t t = R32((uint32_t)(edx + 0xb4u)); esp -= 4; W32(esp, 0x879398u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 879398: mov ebx, eax */
  ebx = eax;
/* 87939a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87939c: je 0x8793ab */
  if (zf) goto L_8793ab;
L_87939e: /* 87939e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8793a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8793a1: mov ecx, esi */
  ecx = esi;
/* 8793a3: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0x8793a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8793a9: jmp 0x8793b1 */
  goto L_8793b1;
L_8793ab: /* 8793ab: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_8793b1: /* 8793b1: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8793b3: fmul dword ptr [edi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xcu)));
/* 8793b6: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 8793ba: je 0x8793cd */
  if (zf) goto L_8793cd;
L_8793bc: /* 8793bc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8793be: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8793bf: mov ecx, esi */
  ecx = esi;
/* 8793c1: call dword ptr [eax + 0xc4] */
  { uint32_t t = R32((uint32_t)(eax + 0xc4u)); esp -= 4; W32(esp, 0x8793c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8793c7: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 8793cb: jmp 0x8793d5 */
  goto L_8793d5;
L_8793cd: /* 8793cd: mov dword ptr [esp + 0x1c], 0x3f800000 */
  W32((uint32_t)(esp + 0x1cu), 0x3f800000u);
L_8793d5: /* 8793d5: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 8793d9: fsub dword ptr [edi + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x10u)));
/* 8793dc: fdiv dword ptr [esp + 0x28] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x28u)));
/* 8793e0: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 8793e4: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8793ea: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8793ec: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8793ef: jp 0x8793f9 */
  if (pf) goto L_8793f9;
L_8793f1: /* 8793f1: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
L_8793f9: /* 8793f9: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 8793fd: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 879401: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 879403: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 879407: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 87940c: fmul dword ptr [ecx + 0x368] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x368u)));
/* 879412: mov ecx, dword ptr [edx + 0xd0] */
  ecx = R32((uint32_t)(edx + 0xd0u));
/* 879418: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 87941c: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x879422u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 879422: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 879424: je 0x879430 */
  if (zf) goto L_879430;
L_879426: /* 879426: mov dword ptr [esi + 0x198], 0 */
  W32((uint32_t)(esi + 0x198u), 0x0u);
L_879430: /* 879430: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 879434: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 879436: fcomp dword ptr [esp + 0x1c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x1cu)));
  FPOP();
/* 87943a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87943c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87943e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 879440: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 879443: jp 0x879483 */
  if (pf) goto L_879483;
L_879445: /* 879445: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 879448: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 87944a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87944b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87944d: mov ecx, esi */
  ecx = esi;
/* 87944f: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0x879455u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 879455: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 879459: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 87945d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 87945f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 879461: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 879462: fadd dword ptr [edi + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x10u)));
/* 879465: mov ecx, esi */
  ecx = esi;
/* 879467: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 87946a: call dword ptr [edx + 0xe4] */
  { uint32_t t = R32((uint32_t)(edx + 0xe4u)); esp -= 4; W32(esp, 0x879470u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 879470: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 879472: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 879474: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 879478: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 879479: mov ecx, esi */
  ecx = esi;
/* 87947b: call dword ptr [eax + 0xf8] */
  { uint32_t t = R32((uint32_t)(eax + 0xf8u)); esp -= 4; W32(esp, 0x879481u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 879481: jmp 0x8794d6 */
  goto L_8794d6;
L_879483: /* 879483: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 879486: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 879488: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 879489: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87948b: mov ecx, esi */
  ecx = esi;
/* 87948d: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x879493u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 879493: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 879497: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 87949d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 87949f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8794a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8794a2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8794a5: mov ecx, esi */
  ecx = esi;
/* 8794a7: call dword ptr [edx + 0xe4] */
  { uint32_t t = R32((uint32_t)(edx + 0xe4u)); esp -= 4; W32(esp, 0x8794adu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8794ad: jmp 0x8794d6 */
  goto L_8794d6;
L_8794af: /* 8794af: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8794b1: jmp 0x8794b7 */
  goto L_8794b7;
L_8794b3: /* 8794b3: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
L_8794b7: /* 8794b7: mov ecx, dword ptr [ebx + 0xd0] */
  ecx = R32((uint32_t)(ebx + 0xd0u));
/* 8794bd: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 8794c2: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8794c8u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8794c8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8794ca: je 0x8794d6 */
  if (zf) goto L_8794d6;
L_8794cc: /* 8794cc: mov dword ptr [esi + 0x198], 1 */
  W32((uint32_t)(esi + 0x198u), 0x1u);
L_8794d6: /* 8794d6: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 8794da: mov ecx, dword ptr [0xb190d0] */
  ecx = R32((uint32_t)(0xb190d0u));
/* 8794e0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8794e1: add ebp, 0x28 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8794e4: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8794e6: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 8794ea: jl 0x8792db */
  if ((sf != of)) goto L_8792db;
L_8794f0: /* 8794f0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8794f1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8794f2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8794f3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8794f4: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8794f7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_879329(void) {
  LOAD_REGS();
  goto L_879329;
L_8792db: /* 8792db: mov ecx, dword ptr [0xb190cc] */
  ecx = R32((uint32_t)(0xb190ccu));
/* 8792e1: mov ebx, dword ptr [ecx + ebp + 4] */
  ebx = R32((uint32_t)(ecx + ebp + 0x4u));
/* 8792e5: mov ecx, dword ptr [ebx + 0xd0] */
  ecx = R32((uint32_t)(ebx + 0xd0u));
/* 8792eb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8792ed: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 8792f1: je 0x8794f0 */
  if (zf) goto L_8794f0;
L_8792f7: /* 8792f7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8792f9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8792fa: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x879300u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 879300: fld dword ptr [0xa08220] */
  { double v = F32((uint32_t)(0xa08220u)); FPUSH(v); }
/* 879306: mov edx, dword ptr [0xb190cc] */
  edx = R32((uint32_t)(0xb190ccu));
/* 87930c: mov esi, eax */
  esi = eax;
/* 87930e: mov eax, dword ptr [edx + ebp + 0x20] */
  eax = R32((uint32_t)(edx + ebp + 0x20u));
/* 879312: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 879315: xor ecx, ecx */
  ecx = 0;
/* 879317: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 879319: jle 0x8794af */
  if ((zf || sf != of)) goto L_8794af;
L_87931f: /* 87931f: mov ebx, dword ptr [edx + ebp + 0x1c] */
  ebx = R32((uint32_t)(edx + ebp + 0x1cu));
/* 879323: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 879327: jmp 0x879330 */
  goto L_879330;
L_879329: /* 879329: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_879330: /* 879330: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 879332: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 879336: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 87933a: fcomp dword ptr [esp + 0x38] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x38u)));
  FPOP();
/* 87933e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 879340: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 879343: jp 0x879358 */
  if (pf) goto L_879358;
L_879345: /* 879345: fcom dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
/* 879349: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 87934b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 87934e: jp 0x879358 */
  if (pf) goto L_879358;
L_879350: /* 879350: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 879352: mov edi, ecx */
  edi = ecx;
/* 879354: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
L_879358: /* 879358: mov eax, dword ptr [edx + ebp + 0x20] */
  eax = R32((uint32_t)(edx + ebp + 0x20u));
/* 87935c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 87935d: add ebx, 0x18 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 879360: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 879362: jl 0x879330 */
  if ((sf != of)) goto L_879330;
L_879364: /* 879364: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 879366: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 879368: jl 0x8794b3 */
  if ((sf != of)) goto L_8794b3;
L_87936e: /* 87936e: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 879372: mov eax, dword ptr [ecx + 0xd0] */
  eax = R32((uint32_t)(ecx + 0xd0u));
/* 879378: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87937a: je 0x8794b3 */
  if (zf) goto L_8794b3;
L_879380: /* 879380: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 879384: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 879387: lea edi, [eax + edx*8] */
  edi = (uint32_t)(eax + edx*8);
/* 87938a: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 87938d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 87938f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 879390: mov ecx, esi */
  ecx = esi;
/* 879392: call dword ptr [edx + 0xb4] */
  { uint32_t t = R32((uint32_t)(edx + 0xb4u)); esp -= 4; W32(esp, 0x879398u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 879398: mov ebx, eax */
  ebx = eax;
/* 87939a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87939c: je 0x8793ab */
  if (zf) goto L_8793ab;
L_87939e: /* 87939e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8793a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8793a1: mov ecx, esi */
  ecx = esi;
/* 8793a3: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0x8793a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8793a9: jmp 0x8793b1 */
  goto L_8793b1;
L_8793ab: /* 8793ab: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_8793b1: /* 8793b1: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8793b3: fmul dword ptr [edi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xcu)));
/* 8793b6: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 8793ba: je 0x8793cd */
  if (zf) goto L_8793cd;
L_8793bc: /* 8793bc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8793be: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8793bf: mov ecx, esi */
  ecx = esi;
/* 8793c1: call dword ptr [eax + 0xc4] */
  { uint32_t t = R32((uint32_t)(eax + 0xc4u)); esp -= 4; W32(esp, 0x8793c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8793c7: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 8793cb: jmp 0x8793d5 */
  goto L_8793d5;
L_8793cd: /* 8793cd: mov dword ptr [esp + 0x1c], 0x3f800000 */
  W32((uint32_t)(esp + 0x1cu), 0x3f800000u);
L_8793d5: /* 8793d5: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 8793d9: fsub dword ptr [edi + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x10u)));
/* 8793dc: fdiv dword ptr [esp + 0x28] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x28u)));
/* 8793e0: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 8793e4: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8793ea: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8793ec: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8793ef: jp 0x8793f9 */
  if (pf) goto L_8793f9;
L_8793f1: /* 8793f1: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
L_8793f9: /* 8793f9: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 8793fd: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 879401: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 879403: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 879407: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 87940c: fmul dword ptr [ecx + 0x368] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x368u)));
/* 879412: mov ecx, dword ptr [edx + 0xd0] */
  ecx = R32((uint32_t)(edx + 0xd0u));
/* 879418: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 87941c: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x879422u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 879422: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 879424: je 0x879430 */
  if (zf) goto L_879430;
L_879426: /* 879426: mov dword ptr [esi + 0x198], 0 */
  W32((uint32_t)(esi + 0x198u), 0x0u);
L_879430: /* 879430: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 879434: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 879436: fcomp dword ptr [esp + 0x1c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x1cu)));
  FPOP();
/* 87943a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87943c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87943e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 879440: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 879443: jp 0x879483 */
  if (pf) goto L_879483;
L_879445: /* 879445: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 879448: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 87944a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87944b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87944d: mov ecx, esi */
  ecx = esi;
/* 87944f: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0x879455u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 879455: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 879459: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 87945d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 87945f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 879461: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 879462: fadd dword ptr [edi + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x10u)));
/* 879465: mov ecx, esi */
  ecx = esi;
/* 879467: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 87946a: call dword ptr [edx + 0xe4] */
  { uint32_t t = R32((uint32_t)(edx + 0xe4u)); esp -= 4; W32(esp, 0x879470u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 879470: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 879472: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 879474: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 879478: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 879479: mov ecx, esi */
  ecx = esi;
/* 87947b: call dword ptr [eax + 0xf8] */
  { uint32_t t = R32((uint32_t)(eax + 0xf8u)); esp -= 4; W32(esp, 0x879481u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 879481: jmp 0x8794d6 */
  goto L_8794d6;
L_879483: /* 879483: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 879486: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 879488: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 879489: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87948b: mov ecx, esi */
  ecx = esi;
/* 87948d: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x879493u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 879493: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 879497: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 87949d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 87949f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8794a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8794a2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8794a5: mov ecx, esi */
  ecx = esi;
/* 8794a7: call dword ptr [edx + 0xe4] */
  { uint32_t t = R32((uint32_t)(edx + 0xe4u)); esp -= 4; W32(esp, 0x8794adu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8794ad: jmp 0x8794d6 */
  goto L_8794d6;
L_8794af: /* 8794af: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8794b1: jmp 0x8794b7 */
  goto L_8794b7;
L_8794b3: /* 8794b3: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
L_8794b7: /* 8794b7: mov ecx, dword ptr [ebx + 0xd0] */
  ecx = R32((uint32_t)(ebx + 0xd0u));
/* 8794bd: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 8794c2: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8794c8u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8794c8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8794ca: je 0x8794d6 */
  if (zf) goto L_8794d6;
L_8794cc: /* 8794cc: mov dword ptr [esi + 0x198], 1 */
  W32((uint32_t)(esi + 0x198u), 0x1u);
L_8794d6: /* 8794d6: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 8794da: mov ecx, dword ptr [0xb190d0] */
  ecx = R32((uint32_t)(0xb190d0u));
/* 8794e0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8794e1: add ebp, 0x28 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8794e4: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8794e6: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 8794ea: jl 0x8792db */
  if ((sf != of)) goto L_8792db;
L_8794f0: /* 8794f0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8794f1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8794f2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8794f3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8794f4: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8794f7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8795c0(void) {
  LOAD_REGS();
L_8795c0: /* 8795c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8795c1: mov ebp, esp */
  ebp = esp;
/* 8795c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8795c5: push 0x9d4d30 */
  { uint32_t v = 0x9d4d30u; esp -= 4; W32(esp, v); }
/* 8795ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8795d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8795d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8795d8: sub esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8795db: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8795de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8795df: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 8795e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8795e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8795e7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8795ea: mov esi, ecx */
  esi = ecx;
/* 8795ec: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8795ee: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8795f5: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8795f8: jne 0x879612 */
  if (!zf) goto L_879612;
L_8795fa: /* 8795fa: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8795fd: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 879600: fcomp dword ptr [0xa09ac8] */
  fpu_com(ST0, F32((uint32_t)(0xa09ac8u)));
  FPOP();
/* 879606: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 879608: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 87960b: jp 0x87961d */
  if (pf) goto L_87961d;
L_87960d: /* 87960d: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 879610: jmp 0x879626 */
  goto L_879626;
L_879612: /* 879612: fld dword ptr [0xa087d0] */
  { double v = F32((uint32_t)(0xa087d0u)); FPUSH(v); }
/* 879618: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 87961b: jmp 0x879626 */
  goto L_879626;
L_87961d: /* 87961d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 87961f: mov dword ptr [ebp + 8], 0x42c80000 */
  W32((uint32_t)(ebp + 0x8u), 0x42c80000u);
L_879626: /* 879626: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 879629: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87962a: mov ecx, esi */
  ecx = esi;
/* 87962c: call 0x6c9dfe */
  esp -= 4; W32(esp, 0x879631u); SPILL(); f_6c9dfe(); if (g_unwind) return; RELOAD();
/* 879631: mov dword ptr [esi + 0x360], eax */
  W32((uint32_t)(esi + 0x360u), eax);
/* 879637: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 879638: add eax, 0x70 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 87963b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87963c: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 87963f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 879640: mov ecx, esi */
  ecx = esi;
/* 879642: call 0x6c48b8 */
  esp -= 4; W32(esp, 0x879647u); SPILL(); f_6c48b8(); if (g_unwind) return; RELOAD();
/* 879647: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 87964a: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 879650: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 879652: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 879654: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 879656: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 879658: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87965b: mov eax, esp */
  eax = esp;
/* 87965d: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 87965f: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 879662: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 879665: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 879668: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 87966b: mov eax, dword ptr [esi + 0x36c] */
  eax = R32((uint32_t)(esi + 0x36cu));
/* 879671: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 879672: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x879678u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 879678: mov eax, dword ptr [esi + 0x444] */
  eax = R32((uint32_t)(esi + 0x444u));
/* 87967e: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 879680: jne 0x8796da */
  if (!zf) goto L_8796da;
L_879682: /* 879682: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 879689: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 87968c: lea ecx, [esi + 0x42c] */
  ecx = (uint32_t)(esi + 0x42cu);
/* 879692: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 879694: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 87969b: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 87969e: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8796a1: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 8796a8: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8796ab: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8796ae: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 8796b5: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8796b8: lea ecx, [esi + 0x438] */
  ecx = (uint32_t)(esi + 0x438u);
/* 8796be: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8796c0: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 8796c7: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8796ca: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8796cd: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 8796d4: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8796d7: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
L_8796da: /* 8796da: and eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8796dd: mov dword ptr [esi + 0x444], eax */
  W32((uint32_t)(esi + 0x444u), eax);
/* 8796e3: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 8796ea: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8796ed: lea eax, [esi + 0x414] */
  eax = (uint32_t)(esi + 0x414u);
/* 8796f3: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8796f5: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 8796fc: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8796ff: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 879702: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 879709: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 87970c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 87970f: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 879715: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 879718: je 0x879722 */
  if (zf) goto L_879722;
L_87971a: /* 87971a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87971b: mov ecx, esi */
  ecx = esi;
/* 87971d: call 0x6c228e */
  esp -= 4; W32(esp, 0x879722u); SPILL(); f_6c228e(); if (g_unwind) return; RELOAD();
L_879722: /* 879722: xor edi, edi */
  edi = 0;
L_879724: /* 879724: cmp edi, dword ptr [esi + 0x38c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x38cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 87972a: jge 0x879745 */
  if ((sf == of)) goto L_879745;
L_87972c: /* 87972c: mov eax, dword ptr [esi + 0x388] */
  eax = R32((uint32_t)(esi + 0x388u));
/* 879732: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 879735: cmp byte ptr [ecx + 0x34], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x34u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 879739: je 0x879742 */
  if (zf) goto L_879742;
L_87973b: /* 87973b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87973d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87973e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87973f: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x879742u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_879742: /* 879742: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 879743: jmp 0x879724 */
  goto L_879724;
L_879745: /* 879745: mov ecx, dword ptr [esi + 0x360] */
  ecx = R32((uint32_t)(esi + 0x360u));
/* 87974b: mov eax, dword ptr [esi + 0x36c] */
  eax = R32((uint32_t)(esi + 0x36cu));
/* 879751: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 879753: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 879754: lea edx, [eax + 0x17c] */
  edx = (uint32_t)(eax + 0x17cu);
/* 87975a: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 87975c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87975f: mov ecx, esp */
  ecx = esp;
/* 879761: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 879763: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 879766: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 879769: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 87976c: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 87976f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 879772: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 879777: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 879779: mov ecx, esp */
  ecx = esp;
/* 87977b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 87977d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 879780: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 879783: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 879786: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 879789: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87978a: lea ecx, [esi + 0x37c] */
  ecx = (uint32_t)(esi + 0x37cu);
/* 879790: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 879791: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 879794: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 879795: mov ecx, esi */
  ecx = esi;
/* 879797: call 0x6cc4eb */
  esp -= 4; W32(esp, 0x87979cu); SPILL(); f_6cc4eb(); if (g_unwind) return; RELOAD();
/* 87979c: xor eax, eax */
  eax = 0;
/* 87979e: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8797a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8797a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8797a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8797a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8797a5: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 8797a8: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 8797ab: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 8797ae: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 8797b1: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 8797b4: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 8797b7: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 8797ba: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 8797bd: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 8797c0: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 8797c3: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8797c6: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8797c9: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8797cc: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8797d2: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 8797d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8797d6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8797d9: mov eax, esp */
  eax = esp;
/* 8797db: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 8797dd: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8797e0: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 8797e3: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8797e6: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 8797e9: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8797ec: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8797ef: mov eax, esp */
  eax = esp;
/* 8797f1: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 8797f3: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8797f6: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 8797f9: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8797fc: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 8797ff: mov eax, dword ptr [esi + 0x36c] */
  eax = R32((uint32_t)(esi + 0x36cu));
/* 879805: mov dword ptr [ebp - 0x3c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x3f800000u);
/* 87980c: mov dword ptr [ebp - 0x38], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffc8u), 0xffffffffu);
/* 879813: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 879815: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 879816: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x87981cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87981c: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 879822: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 879825: je 0x87982f */
  if (zf) goto L_87982f;
L_879827: /* 879827: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 879828: mov ecx, esi */
  ecx = esi;
/* 87982a: call 0x6c16ae */
  esp -= 4; W32(esp, 0x87982fu); SPILL(); f_6c16ae(); if (g_unwind) return; RELOAD();
L_87982f: /* 87982f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 879832: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 879833: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 879834: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87983b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87983c: mov esp, ebp */
  esp = ebp;
/* 87983e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87983f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_879842(void) {
  LOAD_REGS();
L_879842: /* 879842: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 879845: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 87984a: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 87984d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87984e: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 879851: call 0x99caf8 */
  esp -= 4; W32(esp, 0x879856u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_879856(); return;
}

void f_879856(void) {
  LOAD_REGS();
L_879856: /* 879856: push 0xa18d30 */
  { uint32_t v = 0xa18d30u; esp -= 4; W32(esp, v); }
/* 87985b: push 0xae62b4 */
  { uint32_t v = 0xae62b4u; esp -= 4; W32(esp, v); }
/* 879860: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x879866u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 879866: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 879869: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87986b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87986d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x879872u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_879872: guest_badaddr(0x879872); return;
}

void f_879930(void) {
  LOAD_REGS();
L_879930: /* 879930: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 879931: mov ebp, esp */
  ebp = esp;
/* 879933: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 879935: push 0x9d4d40 */
  { uint32_t v = 0x9d4d40u; esp -= 4; W32(esp, v); }
/* 87993a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 879940: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 879941: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 879948: sub esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87994b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87994c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87994d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87994e: xor esi, esi */
  esi = 0;
/* 879950: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 879953: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 879956: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 879959: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 87995b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 87995e: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 879961: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 879964: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 879965: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 879966: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 879969: call 0x6c9aa7 */
  esp -= 4; W32(esp, 0x87996eu); SPILL(); f_6c9aa7(); if (g_unwind) return; RELOAD();
/* 87996e: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 879970: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 879973: jne 0x879993 */
  if (!zf) goto L_879993;
L_879975: /* 879975: test byte ptr [eax + 0x374], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x374u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87997c: jne 0x879993 */
  if (!zf) goto L_879993;
L_87997e: /* 87997e: xor eax, eax */
  eax = 0;
/* 879980: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 879983: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87998a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87998b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87998c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87998d: mov esp, ebp */
  esp = ebp;
/* 87998f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 879990: ret 8 */
  esp += 12; SPILL(); return;
L_879993: /* 879993: mov ecx, dword ptr [eax + 0x374] */
  ecx = R32((uint32_t)(eax + 0x374u));
/* 879999: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87999c: je 0x879c4c */
  if (zf) goto L_879c4c;
L_8799a2: /* 8799a2: test cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8799a5: jne 0x879acc */
  if (!zf) goto L_879acc;
L_8799ab: /* 8799ab: or ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 8799ae: mov dword ptr [eax + 0x374], ecx */
  W32((uint32_t)(eax + 0x374u), ecx);
/* 8799b4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8799b7: call 0x6c3107 */
  esp -= 4; W32(esp, 0x8799bcu); SPILL(); f_6c3107(); if (g_unwind) return; RELOAD();
/* 8799bc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8799bf: cmp dword ptr [eax + 0x36c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x36cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8799c5: jne 0x8799e2 */
  if (!zf) goto L_8799e2;
L_8799c7: /* 8799c7: push 0x2f7 */
  { uint32_t v = 0x2f7u; esp -= 4; W32(esp, v); }
/* 8799cc: push 0xae625c */
  { uint32_t v = 0xae625cu; esp -= 4; W32(esp, v); }
/* 8799d1: push 0xae6270 */
  { uint32_t v = 0xae6270u; esp -= 4; W32(esp, v); }
/* 8799d6: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8799dcu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8799dc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8799df: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8799e2: /* 8799e2: cmp dword ptr [eax + 0x340], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x340u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8799e8: je 0x879b00 */
  if (zf) goto L_879b00;
L_8799ee: /* 8799ee: mov edx, dword ptr [eax + 0x33c] */
  edx = R32((uint32_t)(eax + 0x33cu));
/* 8799f4: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8799f6: cmp dword ptr [ecx + 0x28], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x28u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8799f9: jne 0x879a16 */
  if (!zf) goto L_879a16;
L_8799fb: /* 8799fb: push 0x2fc */
  { uint32_t v = 0x2fcu; esp -= 4; W32(esp, v); }
/* 879a00: push 0xae6278 */
  { uint32_t v = 0xae6278u; esp -= 4; W32(esp, v); }
/* 879a05: push 0xae628c */
  { uint32_t v = 0xae628cu; esp -= 4; W32(esp, v); }
/* 879a0a: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x879a10u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 879a10: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 879a13: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_879a16: /* 879a16: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 879a17: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 879a18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 879a19: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 879a1a: mov dword ptr [ebp - 0x6c], esi */
  W32((uint32_t)(ebp + 0xffffff94u), esi);
/* 879a1d: mov dword ptr [ebp - 0x68], esi */
  W32((uint32_t)(ebp + 0xffffff98u), esi);
/* 879a20: mov dword ptr [ebp - 0x4c], esi */
  W32((uint32_t)(ebp + 0xffffffb4u), esi);
/* 879a23: mov dword ptr [ebp - 0x40], esi */
  W32((uint32_t)(ebp + 0xffffffc0u), esi);
/* 879a26: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 879a2d: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 879a34: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 879a3b: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 879a42: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 879a49: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 879a50: mov dword ptr [ebp - 0x48], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x3f800000u);
/* 879a57: mov dword ptr [ebp - 0x44], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffbcu), 0xffffffffu);
/* 879a5e: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 879a64: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 879a66: lea esi, [ebp - 0x6c] */
  esi = (uint32_t)(ebp + 0xffffff94u);
/* 879a69: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 879a6a: mov esi, dword ptr [eax + 0x33c] */
  esi = R32((uint32_t)(eax + 0x33cu));
/* 879a70: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 879a72: mov esi, dword ptr [esi + 0x28] */
  esi = R32((uint32_t)(esi + 0x28u));
/* 879a75: mov eax, dword ptr [eax + 0x36c] */
  eax = R32((uint32_t)(eax + 0x36cu));
/* 879a7b: add esi, 0x17c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 879a81: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 879a83: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 879a86: mov edi, esp */
  edi = esp;
/* 879a88: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 879a8a: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 879a8d: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 879a90: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 879a93: mov dword ptr [edi + 8], esi */
  W32((uint32_t)(edi + 0x8u), esi);
/* 879a96: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 879a99: mov esi, esp */
  esi = esp;
/* 879a9b: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 879aa2: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 879aa5: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 879aa7: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 879aae: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 879ab1: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 879ab4: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 879abb: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 879abe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 879abf: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 879ac2: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x879ac8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 879ac8: xor esi, esi */
  esi = 0;
/* 879aca: jmp 0x879afd */
  goto L_879afd;
L_879acc: /* 879acc: mov edx, dword ptr [eax + 0x3fc] */
  edx = R32((uint32_t)(eax + 0x3fcu));
/* 879ad2: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 879ad4: lea ecx, [eax + 0x3fc] */
  ecx = (uint32_t)(eax + 0x3fcu);
/* 879ada: jne 0x879ae8 */
  if (!zf) goto L_879ae8;
L_879adc: /* 879adc: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 879adf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 879ae0: call 0x6cbe15 */
  esp -= 4; W32(esp, 0x879ae5u); SPILL(); f_6cbe15(); if (g_unwind) return; RELOAD();
/* 879ae5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_879ae8: /* 879ae8: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 879aeb: fmul dword ptr [eax + 0x364] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x364u)));
/* 879af1: fadd dword ptr [eax + 0x378] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x378u)));
/* 879af7: fstp dword ptr [eax + 0x378] */
  WF32((uint32_t)(eax + 0x378u), ST0); FPOP();
L_879afd: /* 879afd: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_879b00: /* 879b00: fld dword ptr [eax + 0x378] */
  { double v = F32((uint32_t)(eax + 0x378u)); FPUSH(v); }
/* 879b06: fdiv dword ptr [eax + 0x368] */
  ST0 = ST0 / (F32((uint32_t)(eax + 0x368u)));
/* 879b0c: fstp dword ptr [eax + 0x35c] */
  WF32((uint32_t)(eax + 0x35cu), ST0); FPOP();
/* 879b12: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 879b15: fld dword ptr [ecx + 0x35c] */
  { double v = F32((uint32_t)(ecx + 0x35cu)); FPUSH(v); }
/* 879b1b: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 879b21: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 879b23: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 879b26: jne 0x879b9c */
  if (!zf) goto L_879b9c;
L_879b28: /* 879b28: call 0x6cb479 */
  esp -= 4; W32(esp, 0x879b2du); SPILL(); f_6cb479(); if (g_unwind) return; RELOAD();
/* 879b2d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 879b2e: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 879b31: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x879b37u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 879b37: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 879b3a: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 879b3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 879b3e: add ecx, 0x358 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x358u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 879b44: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x879b4au); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 879b4a: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 879b4c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 879b4f: je 0x879b70 */
  if (zf) goto L_879b70;
L_879b51: /* 879b51: mov edx, dword ptr [ecx + 0x370] */
  edx = R32((uint32_t)(ecx + 0x370u));
/* 879b57: mov eax, dword ptr [ecx + 0x36c] */
  eax = R32((uint32_t)(ecx + 0x36cu));
/* 879b5d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 879b5e: mov edx, dword ptr [ecx + 0x358] */
  edx = R32((uint32_t)(ecx + 0x358u));
/* 879b64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 879b65: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 879b66: call 0x6c65fa */
  esp -= 4; W32(esp, 0x879b6bu); SPILL(); f_6c65fa(); if (g_unwind) return; RELOAD();
/* 879b6b: jmp 0x879c30 */
  goto L_879c30;
L_879b70: /* 879b70: test byte ptr [ecx + 0x350], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x350u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 879b77: je 0x879c30 */
  if (zf) goto L_879c30;
L_879b7d: /* 879b7d: mov eax, dword ptr [ecx + 0x370] */
  eax = R32((uint32_t)(ecx + 0x370u));
/* 879b83: mov edx, dword ptr [ecx + 0x36c] */
  edx = R32((uint32_t)(ecx + 0x36cu));
/* 879b89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 879b8a: mov eax, dword ptr [ecx + 0x100] */
  eax = R32((uint32_t)(ecx + 0x100u));
/* 879b90: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 879b91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 879b92: call 0x6c65fa */
  esp -= 4; W32(esp, 0x879b97u); SPILL(); f_6c65fa(); if (g_unwind) return; RELOAD();
/* 879b97: jmp 0x879c30 */
  goto L_879c30;
L_879b9c: /* 879b9c: mov edx, dword ptr [ecx + 0x36c] */
  edx = R32((uint32_t)(ecx + 0x36cu));
/* 879ba2: add edx, 0x170 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 879ba8: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 879baa: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 879bad: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 879bb0: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 879bb3: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 879bb6: mov eax, dword ptr [ecx + 0x35c] */
  eax = R32((uint32_t)(ecx + 0x35cu));
/* 879bbc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 879bbd: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 879bc0: call 0x6c8021 */
  esp -= 4; W32(esp, 0x879bc5u); SPILL(); f_6c8021(); if (g_unwind) return; RELOAD();
/* 879bc5: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 879bc8: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 879bce: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 879bd0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 879bd3: jne 0x879c30 */
  if (!zf) goto L_879c30;
L_879bd5: /* 879bd5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 879bd8: mov eax, dword ptr [ecx + 0x36c] */
  eax = R32((uint32_t)(ecx + 0x36cu));
/* 879bde: fld dword ptr [eax + 0x178] */
  { double v = F32((uint32_t)(eax + 0x178u)); FPUSH(v); }
/* 879be4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 879be7: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 879bea: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 879bef: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 879bf2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 879bf3: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 879bf6: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 879bf9: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 879bfb: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 879bfe: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 879c01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 879c02: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 879c05: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 879c08: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 879c0b: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x879c11u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 879c11: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 879c14: mov edx, dword ptr [ecx + 0x36c] */
  edx = R32((uint32_t)(ecx + 0x36cu));
/* 879c1a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 879c1c: add edx, 0x188 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 879c22: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 879c24: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 879c27: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 879c2a: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 879c2d: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_879c30: /* 879c30: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 879c36: mov edx, dword ptr [0xce83c0] */
  edx = R32((uint32_t)(0xce83c0u));
/* 879c3c: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 879c3f: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 879c41: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 879c44: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 879c46: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 879c48: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 879c4a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_879c4c: /* 879c4c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 879c4f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 879c50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 879c51: mov eax, 1 */
  eax = 0x1u;
/* 879c56: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 879c5d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 879c5e: mov esp, ebp */
  esp = ebp;
/* 879c60: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 879c61: ret 8 */
  esp += 12; SPILL(); return;
}

void f_879c64(void) {
  LOAD_REGS();
L_879c64: /* 879c64: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 879c67: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 879c6c: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 879c6f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 879c70: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 879c73: call 0x99caf8 */
  esp -= 4; W32(esp, 0x879c78u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_879c78(); return;
}

void f_879c78(void) {
  LOAD_REGS();
L_879c78: /* 879c78: push 0xa18d84 */
  { uint32_t v = 0xa18d84u; esp -= 4; W32(esp, v); }
/* 879c7d: push 0xae62a4 */
  { uint32_t v = 0xae62a4u; esp -= 4; W32(esp, v); }
/* 879c82: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x879c88u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 879c88: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 879c8b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 879c8d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 879c8f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x879c94u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_879c94: guest_badaddr(0x879c94); return;
}

void f_879d80(void) {
  LOAD_REGS();
L_879d80: /* 879d80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 879d81: mov ebp, esp */
  ebp = esp;
/* 879d83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 879d85: push 0x9d4d59 */
  { uint32_t v = 0x9d4d59u; esp -= 4; W32(esp, v); }
/* 879d8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 879d90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 879d91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 879d98: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 879d9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 879d9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 879d9d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 879d9e: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 879da1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 879da4: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 879dab: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x879db1u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 879db1: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 879db4: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 879db7: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 879dba: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 879dbd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 879dbe: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 879dc1: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 879dc4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 879dc5: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 879dca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 879dcb: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 879dcf: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x879dd2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 879dd2: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 879dd5: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 879dd6: mov eax, edx */
  eax = edx;
/* 879dd8: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 879ddb: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 879dde: jne 0x879df6 */
  if (!zf) goto L_879df6;
L_879de0: /* 879de0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 879de3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 879de4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 879de6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 879de9: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 879def: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 879df0: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x879df6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_879df6: /* 879df6: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 879df9: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x879dffu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 879dff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 879e00: call dword ptr [0xcfa5bc] */
  esp -= 4; W32(esp, 0x879e06u); SPILL(); f_4e15eb(); if (g_unwind) return; /* Core!?appClipboardCopy@@YAXPBG@Z */ RELOAD();
/* 879e06: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 879e09: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 879e0c: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 879e10: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x879e16u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 879e16: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 879e19: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 879e1a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 879e1b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 879e22: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 879e23: mov esp, ebp */
  esp = ebp;
/* 879e25: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 879e26: ret 8 */
  esp += 12; SPILL(); return;
}

void f_879e29(void) {
  LOAD_REGS();
L_879e29: /* 879e29: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 879e2c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 879e31: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 879e34: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 879e35: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 879e38: call 0x99caf8 */
  esp -= 4; W32(esp, 0x879e3du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_879e3d(); return;
}

void f_879e3d(void) {
  LOAD_REGS();
L_879e3d: /* 879e3d: push 0xa18db8 */
  { uint32_t v = 0xa18db8u; esp -= 4; W32(esp, v); }
/* 879e42: push 0xae68ac */
  { uint32_t v = 0xae68acu; esp -= 4; W32(esp, v); }
/* 879e47: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x879e4du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 879e4d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 879e50: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 879e52: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 879e54: call 0x99caf8 */
  esp -= 4; W32(esp, 0x879e59u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_879e59: guest_badaddr(0x879e59); return;
}

void f_879ea0(void) {
  LOAD_REGS();
L_879ea0: /* 879ea0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 879ea1: mov ebp, esp */
  ebp = esp;
/* 879ea3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 879ea5: push 0x9d4d82 */
  { uint32_t v = 0x9d4d82u; esp -= 4; W32(esp, v); }
/* 879eaa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 879eb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 879eb1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 879eb8: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 879ebb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 879ebc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 879ebd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 879ebe: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 879ec1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 879ec4: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 879ecb: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x879ed1u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 879ed1: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 879ed4: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 879ed7: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 879eda: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 879edd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 879ede: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 879ee1: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 879ee4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 879ee5: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 879eea: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 879eec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 879eed: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 879ef0: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x879ef3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 879ef3: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 879ef6: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 879ef7: mov eax, edx */
  eax = edx;
/* 879ef9: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 879efc: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 879eff: jne 0x879f17 */
  if (!zf) goto L_879f17;
L_879f01: /* 879f01: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 879f04: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 879f05: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 879f07: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 879f0a: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 879f10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 879f11: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x879f17u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_879f17: /* 879f17: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 879f1a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 879f1b: call dword ptr [0xcfab60] */
  esp -= 4; W32(esp, 0x879f21u); SPILL(); f_4e1e79(); if (g_unwind) return; /* Core!?appClipboardPaste@@YA?AVFString@@XZ */ RELOAD();
/* 879f21: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 879f24: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 879f27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 879f28: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 879f2c: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x879f32u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 879f32: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 879f35: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 879f38: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x879f3eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 879f3e: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 879f41: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 879f45: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x879f4bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 879f4b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 879f4e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 879f4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 879f50: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 879f57: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 879f58: mov esp, ebp */
  esp = ebp;
/* 879f5a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 879f5b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_879f5e(void) {
  LOAD_REGS();
L_879f5e: /* 879f5e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 879f61: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 879f66: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 879f69: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 879f6a: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 879f6d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x879f72u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_879f72(); return;
}

void f_879f72(void) {
  LOAD_REGS();
L_879f72: /* 879f72: push 0xa18e18 */
  { uint32_t v = 0xa18e18u; esp -= 4; W32(esp, v); }
/* 879f77: push 0xae68b4 */
  { uint32_t v = 0xae68b4u; esp -= 4; W32(esp, v); }
/* 879f7c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x879f82u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 879f82: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 879f85: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 879f87: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 879f89: call 0x99caf8 */
  esp -= 4; W32(esp, 0x879f8eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_879f8e: guest_badaddr(0x879f8e); return;
}

void f_879fd0(void) {
  LOAD_REGS();
L_879fd0: /* 879fd0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 879fd1: mov ebp, esp */
  ebp = esp;
/* 879fd3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 879fd5: push 0x9d4da0 */
  { uint32_t v = 0x9d4da0u; esp -= 4; W32(esp, v); }
/* 879fda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 879fe0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 879fe1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 879fe8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 879feb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 879fec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 879fed: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 879ff0: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 879ff3: mov byte ptr [ebp - 0x11], 0 */
  W8((uint32_t)(ebp + 0xffffffefu), 0x0u);
/* 879ff7: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 879ffa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 879ffb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 879ffc: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 879fff: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 87a002: lea eax, [ebp - 0x11] */
  eax = (uint32_t)(ebp + 0xffffffefu);
/* 87a005: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87a006: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87a00b: mov edi, ecx */
  edi = ecx;
/* 87a00d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87a010: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87a011: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 87a018: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87a01bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87a01b: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87a01e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87a01f: mov eax, edx */
  eax = edx;
/* 87a021: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87a024: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87a027: jne 0x87a03f */
  if (!zf) goto L_87a03f;
L_87a029: /* 87a029: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87a02c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87a02d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87a02f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87a032: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87a038: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87a039: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87a03fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87a03f: /* 87a03f: movzx edx, byte ptr [ebp - 0x11] */
  edx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffefu)));
/* 87a043: mov ecx, dword ptr [edi + 0xb4] */
  ecx = R32((uint32_t)(edi + 0xb4u));
/* 87a049: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 87a04b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87a04c: call dword ptr [eax + 0xdc] */
  { uint32_t t = R32((uint32_t)(eax + 0xdcu)); esp -= 4; W32(esp, 0x87a052u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87a052: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 87a055: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87a056: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87a057: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87a05e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87a05f: mov esp, ebp */
  esp = ebp;
/* 87a061: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87a062: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87a065(void) {
  LOAD_REGS();
L_87a065: /* 87a065: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 87a068: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 87a06d: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 87a070: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87a071: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 87a074: call 0x99caf8 */
  esp -= 4; W32(esp, 0x87a079u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_87a079(); return;
}

void f_87a079(void) {
  LOAD_REGS();
L_87a079: /* 87a079: push 0xa18e78 */
  { uint32_t v = 0xa18e78u; esp -= 4; W32(esp, v); }
/* 87a07e: push 0xae68bc */
  { uint32_t v = 0xae68bcu; esp -= 4; W32(esp, v); }
/* 87a083: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x87a089u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 87a089: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87a08c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87a08e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87a090: call 0x99caf8 */
  esp -= 4; W32(esp, 0x87a095u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_87a095: guest_badaddr(0x87a095); return;
}

void f_87a0e0(void) {
  LOAD_REGS();
L_87a0e0: /* 87a0e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 87a0e4: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 87a0e7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 87a0e8: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 87a0eb: cmp byte ptr [ecx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87a0ee: jne 0x87a112 */
  if (!zf) goto L_87a112;
L_87a0f0: /* 87a0f0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 87a0f1: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 87a0f4: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 87a0f7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87a0f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87a0fa: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87a0ff: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x87a105u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87a105: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 87a109: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* 87a10f: ret 8 */
  esp += 12; SPILL(); return;
L_87a112: /* 87a112: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 87a116: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 87a11c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87a130(void) {
  LOAD_REGS();
L_87a130: /* 87a130: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87a131: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87a132: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 87a136: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87a139: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 87a141: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87a144: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87a145: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87a146: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87a149: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 87a14d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87a14e: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87a153: mov edi, ecx */
  edi = ecx;
/* 87a155: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87a158: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87a159: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87a15cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87a15c: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87a15f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87a160: mov eax, edx */
  eax = edx;
/* 87a162: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87a165: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87a168: jne 0x87a180 */
  if (!zf) goto L_87a180;
L_87a16a: /* 87a16a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87a16d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87a16e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87a170: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87a173: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87a179: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87a17a: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87a180u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87a180: /* 87a180: mov ecx, edi */
  ecx = edi;
/* 87a182: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x87a188u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 87a188: mov dword ptr [eax + 0x28], 0x180 */
  W32((uint32_t)(eax + 0x28u), 0x180u);
/* 87a18f: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 87a193: mov dword ptr [edi + 0x160], eax */
  W32((uint32_t)(edi + 0x160u), eax);
/* 87a199: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87a19a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87a19b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 87a19c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87a1c0(void) {
  LOAD_REGS();
L_87a1c0: /* 87a1c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87a1c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87a1c2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 87a1c6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87a1c9: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 87a1d1: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87a1d4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87a1d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87a1d6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87a1d9: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 87a1dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87a1de: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87a1e3: mov edi, ecx */
  edi = ecx;
/* 87a1e5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87a1e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87a1e9: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87a1ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87a1ec: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87a1ef: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87a1f0: mov eax, edx */
  eax = edx;
/* 87a1f2: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87a1f5: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87a1f8: jne 0x87a210 */
  if (!zf) goto L_87a210;
L_87a1fa: /* 87a1fa: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87a1fd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87a1fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87a200: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87a203: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87a209: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87a20a: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87a210u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87a210: /* 87a210: mov ecx, edi */
  ecx = edi;
/* 87a212: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x87a218u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 87a218: mov dword ptr [eax + 0x28], 0x182 */
  W32((uint32_t)(eax + 0x28u), 0x182u);
/* 87a21f: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 87a223: mov dword ptr [edi + 0x160], eax */
  W32((uint32_t)(edi + 0x160u), eax);
/* 87a229: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87a22a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87a22b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 87a22c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87a250(void) {
  LOAD_REGS();
L_87a250: /* 87a250: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 87a254: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87a255: mov esi, ecx */
  esi = ecx;
/* 87a257: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 87a25a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 87a25b: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 87a25e: cmp byte ptr [ecx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87a261: jne 0x87a278 */
  if (!zf) goto L_87a278;
L_87a263: /* 87a263: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 87a264: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 87a267: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 87a26a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87a26c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87a26d: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87a272: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x87a278u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87a278: /* 87a278: mov ecx, esi */
  ecx = esi;
/* 87a27a: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x87a280u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 87a280: cmp dword ptr [eax + 0x28], 0x182 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x28u))); uint32_t b = (uint32_t)(0x182u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87a287: jne 0x87a298 */
  if (!zf) goto L_87a298;
L_87a289: /* 87a289: mov ecx, esi */
  ecx = esi;
/* 87a28b: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x87a291u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 87a291: mov dword ptr [eax + 0x28], 0 */
  W32((uint32_t)(eax + 0x28u), 0x0u);
L_87a298: /* 87a298: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87a299: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87a2c0(void) {
  LOAD_REGS();
L_87a2c0: /* 87a2c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87a2c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87a2c2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 87a2c6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87a2c9: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 87a2d1: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87a2d4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87a2d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87a2d6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87a2d9: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 87a2dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87a2de: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87a2e3: mov edi, ecx */
  edi = ecx;
/* 87a2e5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87a2e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87a2e9: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87a2ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87a2ec: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87a2ef: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87a2f0: mov eax, edx */
  eax = edx;
/* 87a2f2: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87a2f5: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87a2f8: jne 0x87a310 */
  if (!zf) goto L_87a310;
L_87a2fa: /* 87a2fa: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87a2fd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87a2fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87a300: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87a303: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87a309: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87a30a: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87a310u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87a310: /* 87a310: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 87a314: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 87a316: mov ecx, edi */
  ecx = edi;
/* 87a318: fstp dword ptr [edi + 0x160] */
  WF32((uint32_t)(edi + 0x160u), ST0); FPOP();
/* 87a31e: call dword ptr [eax + 0xdc] */
  { uint32_t t = R32((uint32_t)(eax + 0xdcu)); esp -= 4; W32(esp, 0x87a324u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87a324: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87a325: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87a326: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 87a327: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87a350(void) {
  LOAD_REGS();
L_87a350: /* 87a350: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87a351: mov esi, ecx */
  esi = ecx;
/* 87a353: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* 87a359: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87a35b: je 0x87a3f0 */
  if (zf) goto L_87a3f0;
L_87a361: /* 87a361: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 87a363: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87a364: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87a365: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87a366: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x87a36cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87a36c: fld dword ptr [esi + 0x160] */
  { double v = F32((uint32_t)(esi + 0x160u)); FPUSH(v); }
/* 87a372: mov edi, dword ptr [esi + 0xec] */
  edi = R32((uint32_t)(esi + 0xecu));
/* 87a378: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 87a37a: call 0x99c958 */
  esp -= 4; W32(esp, 0x87a37fu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 87a37f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87a380: mov ecx, edi */
  ecx = edi;
/* 87a382: call dword ptr [ebx + 0xec] */
  { uint32_t t = R32((uint32_t)(ebx + 0xecu)); esp -= 4; W32(esp, 0x87a388u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87a388: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87a38a: je 0x87a3a8 */
  if (zf) goto L_87a3a8;
L_87a38c: /* 87a38c: mov edi, dword ptr [esi + 0xec] */
  edi = R32((uint32_t)(esi + 0xecu));
/* 87a392: fld dword ptr [esi + 0x160] */
  { double v = F32((uint32_t)(esi + 0x160u)); FPUSH(v); }
/* 87a398: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 87a39a: call 0x99c958 */
  esp -= 4; W32(esp, 0x87a39fu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 87a39f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87a3a0: mov ecx, edi */
  ecx = edi;
/* 87a3a2: call dword ptr [ebx + 0xf4] */
  { uint32_t t = R32((uint32_t)(ebx + 0xf4u)); esp -= 4; W32(esp, 0x87a3a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87a3a8: /* 87a3a8: fld dword ptr [esi + 0x160] */
  { double v = F32((uint32_t)(esi + 0x160u)); FPUSH(v); }
/* 87a3ae: call 0x99c958 */
  esp -= 4; W32(esp, 0x87a3b3u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 87a3b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87a3b4: mov ecx, esi */
  ecx = esi;
/* 87a3b6: call 0x6c5961 */
  esp -= 4; W32(esp, 0x87a3bbu); SPILL(); f_6c5961(); if (g_unwind) return; RELOAD();
/* 87a3bb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87a3bd: je 0x87a3ee */
  if (zf) goto L_87a3ee;
L_87a3bf: /* 87a3bf: mov edi, dword ptr [esi + 0xec] */
  edi = R32((uint32_t)(esi + 0xecu));
/* 87a3c5: fld dword ptr [esi + 0x160] */
  { double v = F32((uint32_t)(esi + 0x160u)); FPUSH(v); }
/* 87a3cb: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 87a3cd: call 0x99c958 */
  esp -= 4; W32(esp, 0x87a3d2u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 87a3d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87a3d3: mov ecx, edi */
  ecx = edi;
/* 87a3d5: call dword ptr [ebx + 0xf0] */
  { uint32_t t = R32((uint32_t)(ebx + 0xf0u)); esp -= 4; W32(esp, 0x87a3dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87a3db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87a3dd: jne 0x87a3ee */
  if (!zf) goto L_87a3ee;
L_87a3df: /* 87a3df: mov ecx, esi */
  ecx = esi;
/* 87a3e1: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x87a3e7u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 87a3e7: mov dword ptr [eax + 0x28], 0x181 */
  W32((uint32_t)(eax + 0x28u), 0x181u);
L_87a3ee: /* 87a3ee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87a3ef: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_87a3f0: /* 87a3f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87a3f1: ret  */
  esp += 4; SPILL(); return;
}

void f_87a430(void) {
  LOAD_REGS();
L_87a430: /* 87a430: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87a431: mov esi, ecx */
  esi = ecx;
/* 87a433: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 87a439: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87a43b: je 0x87a4f4 */
  if (zf) goto L_87a4f4;
L_87a441: /* 87a441: mov ecx, dword ptr [eax + 0xd0] */
  ecx = R32((uint32_t)(eax + 0xd0u));
/* 87a447: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87a449: je 0x87a4f4 */
  if (zf) goto L_87a4f4;
L_87a44f: /* 87a44f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 87a451: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87a452: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87a453: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87a454: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x87a45au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87a45a: fld dword ptr [esi + 0x160] */
  { double v = F32((uint32_t)(esi + 0x160u)); FPUSH(v); }
/* 87a460: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 87a466: mov edi, dword ptr [ecx + 0xec] */
  edi = R32((uint32_t)(ecx + 0xecu));
/* 87a46c: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 87a46e: call 0x99c958 */
  esp -= 4; W32(esp, 0x87a473u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 87a473: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87a474: mov ecx, edi */
  ecx = edi;
/* 87a476: call dword ptr [ebx + 0xec] */
  { uint32_t t = R32((uint32_t)(ebx + 0xecu)); esp -= 4; W32(esp, 0x87a47cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87a47c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87a47e: je 0x87a4a2 */
  if (zf) goto L_87a4a2;
L_87a480: /* 87a480: mov edx, dword ptr [esi + 0x33c] */
  edx = R32((uint32_t)(esi + 0x33cu));
/* 87a486: fld dword ptr [esi + 0x160] */
  { double v = F32((uint32_t)(esi + 0x160u)); FPUSH(v); }
/* 87a48c: mov edi, dword ptr [edx + 0xec] */
  edi = R32((uint32_t)(edx + 0xecu));
/* 87a492: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 87a494: call 0x99c958 */
  esp -= 4; W32(esp, 0x87a499u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 87a499: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87a49a: mov ecx, edi */
  ecx = edi;
/* 87a49c: call dword ptr [ebx + 0xf4] */
  { uint32_t t = R32((uint32_t)(ebx + 0xf4u)); esp -= 4; W32(esp, 0x87a4a2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87a4a2: /* 87a4a2: fld dword ptr [esi + 0x160] */
  { double v = F32((uint32_t)(esi + 0x160u)); FPUSH(v); }
/* 87a4a8: call 0x99c958 */
  esp -= 4; W32(esp, 0x87a4adu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 87a4ad: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 87a4b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87a4b4: call 0x6c5961 */
  esp -= 4; W32(esp, 0x87a4b9u); SPILL(); f_6c5961(); if (g_unwind) return; RELOAD();
/* 87a4b9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87a4bb: je 0x87a4f2 */
  if (zf) goto L_87a4f2;
L_87a4bd: /* 87a4bd: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 87a4c3: fld dword ptr [esi + 0x160] */
  { double v = F32((uint32_t)(esi + 0x160u)); FPUSH(v); }
/* 87a4c9: mov edi, dword ptr [eax + 0xec] */
  edi = R32((uint32_t)(eax + 0xecu));
/* 87a4cf: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 87a4d1: call 0x99c958 */
  esp -= 4; W32(esp, 0x87a4d6u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 87a4d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87a4d7: mov ecx, edi */
  ecx = edi;
/* 87a4d9: call dword ptr [ebx + 0xf0] */
  { uint32_t t = R32((uint32_t)(ebx + 0xf0u)); esp -= 4; W32(esp, 0x87a4dfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87a4df: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87a4e1: jne 0x87a4f2 */
  if (!zf) goto L_87a4f2;
L_87a4e3: /* 87a4e3: mov ecx, esi */
  ecx = esi;
/* 87a4e5: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x87a4ebu); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 87a4eb: mov dword ptr [eax + 0x28], 0x181 */
  W32((uint32_t)(eax + 0x28u), 0x181u);
L_87a4f2: /* 87a4f2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87a4f3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_87a4f4: /* 87a4f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87a4f5: ret  */
  esp += 4; SPILL(); return;
}

void f_87a540(void) {
  LOAD_REGS();
L_87a540: /* 87a540: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87a541: mov esi, ecx */
  esi = ecx;
/* 87a543: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* 87a549: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87a54b: jne 0x87a556 */
  if (!zf) goto L_87a556;
L_87a54d: /* 87a54d: mov eax, 1 */
  eax = 0x1u;
/* 87a552: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87a553: ret 4 */
  esp += 8; SPILL(); return;
L_87a556: /* 87a556: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 87a558: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87a559: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87a55a: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x87a560u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87a560: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 87a564: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87a565: mov ecx, esi */
  ecx = esi;
/* 87a567: call 0x6c5961 */
  esp -= 4; W32(esp, 0x87a56cu); SPILL(); f_6c5961(); if (g_unwind) return; RELOAD();
/* 87a56c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87a56e: je 0x87a588 */
  if (zf) goto L_87a588;
L_87a570: /* 87a570: mov ecx, dword ptr [esi + 0xec] */
  ecx = R32((uint32_t)(esi + 0xecu));
/* 87a576: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87a578: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87a579: call dword ptr [edx + 0xf0] */
  { uint32_t t = R32((uint32_t)(edx + 0xf0u)); esp -= 4; W32(esp, 0x87a57fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87a57f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87a581: jne 0x87a588 */
  if (!zf) goto L_87a588;
L_87a583: /* 87a583: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87a584: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87a585: ret 4 */
  esp += 8; SPILL(); return;
L_87a588: /* 87a588: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87a589: mov eax, 1 */
  eax = 0x1u;
/* 87a58e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87a58f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_87a5c0(void) {
  LOAD_REGS();
L_87a5c0: /* 87a5c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87a5c1: mov esi, ecx */
  esi = ecx;
/* 87a5c3: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 87a5c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87a5cb: je 0x87a61d */
  if (zf) goto L_87a61d;
L_87a5cd: /* 87a5cd: mov ecx, dword ptr [eax + 0xd0] */
  ecx = R32((uint32_t)(eax + 0xd0u));
/* 87a5d3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87a5d5: je 0x87a61d */
  if (zf) goto L_87a61d;
L_87a5d7: /* 87a5d7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 87a5d9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87a5da: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87a5db: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x87a5e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87a5e1: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 87a5e5: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 87a5eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87a5ec: call 0x6c5961 */
  esp -= 4; W32(esp, 0x87a5f1u); SPILL(); f_6c5961(); if (g_unwind) return; RELOAD();
/* 87a5f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87a5f3: je 0x87a613 */
  if (zf) goto L_87a613;
L_87a5f5: /* 87a5f5: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 87a5fb: mov ecx, dword ptr [ecx + 0xec] */
  ecx = R32((uint32_t)(ecx + 0xecu));
/* 87a601: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87a603: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87a604: call dword ptr [edx + 0xf0] */
  { uint32_t t = R32((uint32_t)(edx + 0xf0u)); esp -= 4; W32(esp, 0x87a60au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87a60a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87a60c: jne 0x87a613 */
  if (!zf) goto L_87a613;
L_87a60e: /* 87a60e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87a60f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87a610: ret 4 */
  esp += 8; SPILL(); return;
L_87a613: /* 87a613: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87a614: mov eax, 1 */
  eax = 0x1u;
/* 87a619: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87a61a: ret 4 */
  esp += 8; SPILL(); return;
L_87a61d: /* 87a61d: mov eax, 1 */
  eax = 0x1u;
/* 87a622: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87a623: ret 4 */
  esp += 8; SPILL(); return;
}

void f_87a650(void) {
  LOAD_REGS();
L_87a650: /* 87a650: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 87a654: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87a655: mov esi, ecx */
  esi = ecx;
/* 87a657: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 87a65a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 87a65b: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 87a65e: cmp byte ptr [ecx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87a661: jne 0x87a678 */
  if (!zf) goto L_87a678;
L_87a663: /* 87a663: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 87a664: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 87a667: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 87a66a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87a66c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87a66d: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87a672: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x87a678u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87a678: /* 87a678: mov ecx, esi */
  ecx = esi;
/* 87a67a: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x87a680u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 87a680: mov dword ptr [eax + 0x28], 0x12e */
  W32((uint32_t)(eax + 0x28u), 0x12eu);
/* 87a687: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87a688: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87a6a0(void) {
  LOAD_REGS();
L_87a6a0: /* 87a6a0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 87a6a4: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 87a6a6: fld dword ptr [ecx + 0x160] */
  { double v = F32((uint32_t)(ecx + 0x160u)); FPUSH(v); }
/* 87a6ac: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 87a6ae: fst dword ptr [ecx + 0x160] */
  WF32((uint32_t)(ecx + 0x160u), ST0);
/* 87a6b4: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 87a6b6: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 87a6bc: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 87a6be: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 87a6c0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87a6c3: jne 0x87a6d2 */
  if (!zf) goto L_87a6d2;
L_87a6c5: /* 87a6c5: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x87a6cbu); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 87a6cb: mov dword ptr [eax + 0x28], 0 */
  W32((uint32_t)(eax + 0x28u), 0x0u);
L_87a6d2: /* 87a6d2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87a6f0(void) {
  LOAD_REGS();
L_87a6f0: /* 87a6f0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 87a6f4: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 87a6f6: fld dword ptr [ecx + 0x160] */
  { double v = F32((uint32_t)(ecx + 0x160u)); FPUSH(v); }
/* 87a6fc: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 87a702: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 87a704: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 87a707: jnp 0x87a738 */
  if (!pf) goto L_87a738;
L_87a709: /* 87a709: fld dword ptr [ecx + 0x160] */
  { double v = F32((uint32_t)(ecx + 0x160u)); FPUSH(v); }
/* 87a70f: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 87a711: fst dword ptr [ecx + 0x160] */
  WF32((uint32_t)(ecx + 0x160u), ST0);
/* 87a717: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 87a719: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 87a71f: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 87a721: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 87a723: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87a726: jne 0x87a73a */
  if (!zf) goto L_87a73a;
L_87a728: /* 87a728: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x87a72eu); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 87a72e: mov dword ptr [eax + 0x28], 0 */
  W32((uint32_t)(eax + 0x28u), 0x0u);
/* 87a735: ret 8 */
  esp += 12; SPILL(); return;
L_87a738: /* 87a738: fstp st(0) */
  STI(0) = ST0; FPOP();
L_87a73a: /* 87a73a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87a760(void) {
  LOAD_REGS();
L_87a760: /* 87a760: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87a761: mov esi, ecx */
  esi = ecx;
/* 87a763: fld dword ptr [esi + 0x160] */
  { double v = F32((uint32_t)(esi + 0x160u)); FPUSH(v); }
/* 87a769: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87a76a: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 87a76c: call 0x99c958 */
  esp -= 4; W32(esp, 0x87a771u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 87a771: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87a772: mov ecx, esi */
  ecx = esi;
/* 87a774: call dword ptr [edi + 0xe0] */
  { uint32_t t = R32((uint32_t)(edi + 0xe0u)); esp -= 4; W32(esp, 0x87a77au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87a77a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87a77c: je 0x87a78d */
  if (zf) goto L_87a78d;
L_87a77e: /* 87a77e: mov ecx, esi */
  ecx = esi;
/* 87a780: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x87a786u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 87a786: mov dword ptr [eax + 0x28], 0 */
  W32((uint32_t)(eax + 0x28u), 0x0u);
L_87a78d: /* 87a78d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87a78e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87a78f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87a7b0(void) {
  LOAD_REGS();
L_87a7b0: /* 87a7b0: test byte ptr [ecx + 0x8a], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x8au))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87a7b7: jne 0x87a7c6 */
  if (!zf) goto L_87a7c6;
L_87a7b9: /* 87a7b9: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x87a7bfu); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 87a7bf: mov dword ptr [eax + 0x28], 0 */
  W32((uint32_t)(eax + 0x28u), 0x0u);
L_87a7c6: /* 87a7c6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87a7e0(void) {
  LOAD_REGS();
L_87a7e0: /* 87a7e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 87a7e1: mov ebp, esp */
  ebp = esp;
/* 87a7e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 87a7e5: push 0x9d4dc2 */
  { uint32_t v = 0x9d4dc2u; esp -= 4; W32(esp, v); }
/* 87a7ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 87a7f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87a7f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 87a7f8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87a7fb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 87a7fe: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 87a801: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87a802: xor ebx, ebx */
  ebx = 0;
/* 87a804: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87a805: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87a806: mov esi, ecx */
  esi = ecx;
/* 87a808: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 87a80b: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87a80e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87a80f: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 87a812: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 87a815: jne 0x87a82b */
  if (!zf) goto L_87a82b;
L_87a817: /* 87a817: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 87a81a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87a81b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87a81c: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 87a81f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87a820: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87a825: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x87a82bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87a82b: /* 87a82b: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* 87a831: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87a833: je 0x87a872 */
  if (zf) goto L_87a872;
L_87a835: /* 87a835: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x87a83bu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 87a83b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87a83c: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 87a83f: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x87a845u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 87a845: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
L_87a849: /* 87a849: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 87a84c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87a84d: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x87a853u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 87a853: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 87a856: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 87a859: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x87a85fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 87a85f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 87a862: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87a863: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87a864: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87a86b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87a86c: mov esp, ebp */
  esp = ebp;
/* 87a86e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87a86f: ret 8 */
  esp += 12; SPILL(); return;
L_87a872: /* 87a872: push 0xce0a0c */
  { uint32_t v = 0xce0a0cu; esp -= 4; W32(esp, v); }
/* 87a877: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 87a87a: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x87a880u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 87a880: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 87a884: jmp 0x87a849 */
  goto L_87a849;
}

void f_87a886(void) {
  LOAD_REGS();
L_87a886: /* 87a886: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 87a889: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 87a88e: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 87a891: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87a892: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 87a895: call 0x99caf8 */
  esp -= 4; W32(esp, 0x87a89au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_87a89a(); return;
}

void f_87a89a(void) {
  LOAD_REGS();
L_87a89a: /* 87a89a: push 0xa18ec0 */
  { uint32_t v = 0xa18ec0u; esp -= 4; W32(esp, v); }
/* 87a89f: push 0xae6914 */
  { uint32_t v = 0xae6914u; esp -= 4; W32(esp, v); }
/* 87a8a4: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x87a8aau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 87a8aa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87a8ad: xor ebx, ebx */
  ebx = 0;
/* 87a8af: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87a8b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87a8b1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x87a8b6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_87a8b6: guest_badaddr(0x87a8b6); return;
}

void f_87a900(void) {
  LOAD_REGS();
L_87a900: /* 87a900: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 87a901: mov ebp, esp */
  ebp = esp;
/* 87a903: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 87a905: push 0x9d4de0 */
  { uint32_t v = 0x9d4de0u; esp -= 4; W32(esp, v); }
/* 87a90a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 87a910: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87a911: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 87a918: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87a91b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87a91c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87a91d: mov esi, ecx */
  esi = ecx;
/* 87a91f: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* 87a925: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87a927: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87a928: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 87a92b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 87a932: jne 0x87a970 */
  if (!zf) goto L_87a970;
L_87a934: /* 87a934: mov al, byte ptr [esi + 0x80] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x80u))) & 0xffu);
/* 87a93a: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 87a93c: js 0x87a95d */
  if (sf) goto L_87a95d;
L_87a93e: /* 87a93e: mov ecx, esi */
  ecx = esi;
/* 87a940: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x87a946u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 87a946: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87a947: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 87a94c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 87a94e: push 0xae691c */
  { uint32_t v = 0xae691cu; esp -= 4; W32(esp, v); }
/* 87a953: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87a954: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x87a95au); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 87a95a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_87a95d: /* 87a95d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 87a960: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87a967: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87a968: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87a969: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87a96a: mov esp, ebp */
  esp = ebp;
/* 87a96c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87a96d: ret 0x14 */
  esp += 24; SPILL(); return;
L_87a970: /* 87a970: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87a972: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87a973: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x87a979u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87a979: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 87a97c: mov ecx, dword ptr [esi + 0xec] */
  ecx = R32((uint32_t)(esi + 0xecu));
/* 87a982: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 87a984: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87a985: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 87a988: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87a989: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 87a98c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87a98d: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 87a990: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87a991: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 87a994: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87a995: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0x87a99bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87a99b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 87a99e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87a99f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87a9a0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 87a9a7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87a9a8: mov esp, ebp */
  esp = ebp;
/* 87a9aa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87a9ab: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_87a9ae(void) {
  LOAD_REGS();
L_87a9ae: /* 87a9ae: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 87a9b1: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 87a9b6: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 87a9b9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87a9ba: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 87a9bd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x87a9c2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_87a9c2(); return;
}

void f_87a9c2(void) {
  LOAD_REGS();
L_87a9c2: /* 87a9c2: push 0xa18ef0 */
  { uint32_t v = 0xa18ef0u; esp -= 4; W32(esp, v); }
/* 87a9c7: push 0xae6950 */
  { uint32_t v = 0xae6950u; esp -= 4; W32(esp, v); }
/* 87a9cc: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x87a9d2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 87a9d2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87a9d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87a9d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87a9d9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x87a9deu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_87a9de: guest_badaddr(0x87a9de); return;
}

void f_87aa20(void) {
  LOAD_REGS();
L_87aa20: /* 87aa20: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87aa23: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87aa24: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87aa25: mov edi, ecx */
  edi = ecx;
/* 87aa27: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87aa29: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 87aa2d: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x87aa33u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 87aa33: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 87aa37: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87aa3a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87aa3d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87aa40: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87aa41: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87aa44: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 87aa48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87aa49: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87aa4e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87aa4f: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87aa52u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87aa52: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87aa55: mov dword ptr [esp + 0xc], 0x3f800000 */
  W32((uint32_t)(esp + 0xcu), 0x3f800000u);
/* 87aa5d: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87aa60: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87aa61: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 87aa65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87aa66: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87aa69: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87aa6c: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87aa71: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87aa72: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87aa75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87aa75: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87aa78: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 87aa80: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87aa83: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87aa84: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 87aa88: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87aa89: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87aa8c: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87aa8f: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87aa94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87aa95: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87aa98u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87aa98: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87aa9b: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 87aaa3: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87aaa6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87aaa7: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 87aaab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87aaac: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87aaaf: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87aab2: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87aab7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87aab8: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87aabbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87aabb: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87aabe: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87aabf: mov eax, edx */
  eax = edx;
/* 87aac1: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87aac4: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87aac7: jne 0x87aadf */
  if (!zf) goto L_87aadf;
L_87aac9: /* 87aac9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87aacc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87aacd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87aacf: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87aad2: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87aad8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87aad9: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87aadfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87aadf: /* 87aadf: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 87aae3: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 87aae7: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 87aae9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87aaeb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87aaec: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 87aaf0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87aaf1: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 87aaf5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87aaf6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87aaf7: mov ecx, edi */
  ecx = edi;
/* 87aaf9: call dword ptr [eax + 0x160] */
  { uint32_t t = R32((uint32_t)(eax + 0x160u)); esp -= 4; W32(esp, 0x87aaffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87aaff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87ab00: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87ab01: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87ab04: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87ab50(void) {
  LOAD_REGS();
L_87ab50: /* 87ab50: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87ab53: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87ab54: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87ab55: mov edi, ecx */
  edi = ecx;
/* 87ab57: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87ab59: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 87ab5d: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x87ab63u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 87ab63: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 87ab67: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87ab6a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87ab6d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87ab70: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87ab71: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87ab74: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 87ab78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87ab79: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87ab7e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87ab7f: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87ab82u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87ab82: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87ab85: mov dword ptr [esp + 0xc], 0x3f800000 */
  W32((uint32_t)(esp + 0xcu), 0x3f800000u);
/* 87ab8d: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87ab90: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87ab91: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 87ab95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87ab96: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87ab99: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87ab9c: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87aba1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87aba2: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87aba5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87aba5: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87aba8: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 87abb0: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87abb3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87abb4: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 87abb8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87abb9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87abbc: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87abbf: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87abc4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87abc5: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87abc8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87abc8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87abcb: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 87abd3: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87abd6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87abd7: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 87abdb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87abdc: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87abdf: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87abe2: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87abe7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87abe8: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87abebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87abeb: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87abee: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87abef: mov eax, edx */
  eax = edx;
/* 87abf1: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87abf4: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87abf7: jne 0x87ac0f */
  if (!zf) goto L_87ac0f;
L_87abf9: /* 87abf9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87abfc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87abfd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87abff: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87ac02: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87ac08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87ac09: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87ac0fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87ac0f: /* 87ac0f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 87ac13: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 87ac17: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 87ac19: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 87ac1b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87ac1c: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 87ac20: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87ac21: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 87ac25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87ac26: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87ac27: mov ecx, edi */
  ecx = edi;
/* 87ac29: call dword ptr [eax + 0x160] */
  { uint32_t t = R32((uint32_t)(eax + 0x160u)); esp -= 4; W32(esp, 0x87ac2fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87ac2f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87ac30: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87ac31: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87ac34: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87ac80(void) {
  LOAD_REGS();
L_87ac80: /* 87ac80: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87ac83: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87ac84: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87ac85: mov edi, ecx */
  edi = ecx;
/* 87ac87: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87ac89: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 87ac8d: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x87ac93u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 87ac93: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 87ac97: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87ac9a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87ac9d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87aca0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87aca1: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87aca4: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 87aca8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87aca9: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87acae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87acaf: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87acb2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87acb2: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87acb5: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 87acbd: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87acc0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87acc1: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 87acc5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87acc6: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87acc9: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87accc: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87acd1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87acd2: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87acd5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87acd5: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87acd8: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 87ace0: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87ace3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87ace4: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 87ace8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87ace9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87acec: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87acef: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87acf4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87acf5: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87acf8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87acf8: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87acfb: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87acfc: mov eax, edx */
  eax = edx;
/* 87acfe: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87ad01: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87ad04: jne 0x87ad1c */
  if (!zf) goto L_87ad1c;
L_87ad06: /* 87ad06: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87ad09: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87ad0a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87ad0c: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87ad0f: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87ad15: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87ad16: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87ad1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87ad1c: /* 87ad1c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 87ad20: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 87ad24: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 87ad26: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87ad28: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87ad29: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 87ad2d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87ad2f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87ad30: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87ad31: mov ecx, edi */
  ecx = edi;
/* 87ad33: call dword ptr [eax + 0x160] */
  { uint32_t t = R32((uint32_t)(eax + 0x160u)); esp -= 4; W32(esp, 0x87ad39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87ad39: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87ad3a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87ad3b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87ad3e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87ad90(void) {
  LOAD_REGS();
L_87ad90: /* 87ad90: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87ad91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87ad92: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 87ad96: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87ad99: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 87ada1: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87ada4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87ada5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87ada6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87ada9: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 87adad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87adae: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87adb3: mov edi, ecx */
  edi = ecx;
/* 87adb5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87adb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87adb9: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87adbcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87adbc: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87adbf: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87adc0: mov eax, edx */
  eax = edx;
/* 87adc2: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87adc5: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87adc8: jne 0x87ade0 */
  if (!zf) goto L_87ade0;
L_87adca: /* 87adca: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87adcd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87adce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87add0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87add3: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87add9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87adda: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87ade0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87ade0: /* 87ade0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 87ade4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87ade5: mov ecx, edi */
  ecx = edi;
/* 87ade7: call 0x6c5961 */
  esp -= 4; W32(esp, 0x87adecu); SPILL(); f_6c5961(); if (g_unwind) return; RELOAD();
/* 87adec: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 87adf0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87adf1: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 87adf3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87adf4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 87adf5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87ae20(void) {
  LOAD_REGS();
L_87ae20: /* 87ae20: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87ae21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87ae22: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 87ae26: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87ae29: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 87ae31: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87ae34: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87ae35: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87ae36: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87ae39: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 87ae3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87ae3e: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87ae43: mov edi, ecx */
  edi = ecx;
/* 87ae45: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87ae48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87ae49: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87ae4cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87ae4c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87ae4f: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 87ae57: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87ae5a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87ae5b: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 87ae5f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87ae60: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87ae63: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87ae66: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87ae6b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87ae6c: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87ae6fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87ae6f: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87ae72: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87ae73: mov eax, edx */
  eax = edx;
/* 87ae75: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87ae78: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87ae7b: jne 0x87ae93 */
  if (!zf) goto L_87ae93;
L_87ae7d: /* 87ae7d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87ae80: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87ae81: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87ae83: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87ae86: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87ae8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87ae8d: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87ae93u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87ae93: /* 87ae93: mov ecx, dword ptr [edi + 0xd0] */
  ecx = R32((uint32_t)(edi + 0xd0u));
/* 87ae99: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87ae9b: je 0x87aebe */
  if (zf) goto L_87aebe;
L_87ae9d: /* 87ae9d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 87ae9f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87aea0: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x87aea6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87aea6: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 87aeaa: mov ecx, dword ptr [edi + 0xec] */
  ecx = R32((uint32_t)(edi + 0xecu));
/* 87aeb0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87aeb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87aeb3: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 87aeb7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87aeb8: call dword ptr [edx + 0xe4] */
  { uint32_t t = R32((uint32_t)(edx + 0xe4u)); esp -= 4; W32(esp, 0x87aebeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87aebe: /* 87aebe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87aebf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87aec0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 87aec1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87af00(void) {
  LOAD_REGS();
L_87af00: /* 87af00: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87af03: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87af04: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 87af08: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87af0b: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 87af13: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87af16: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87af17: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87af18: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87af1b: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 87af1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87af20: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87af25: mov edi, ecx */
  edi = ecx;
/* 87af27: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87af2a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87af2b: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87af2eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87af2e: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87af31: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 87af39: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87af3c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87af3d: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 87af41: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87af42: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87af45: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87af48: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87af4d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87af4e: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87af51u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87af51: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87af54: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 87af5c: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87af5f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87af60: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 87af64: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87af65: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87af68: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87af6b: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87af70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87af71: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87af74u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87af74: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87af77: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87af78: mov eax, edx */
  eax = edx;
/* 87af7a: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87af7d: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87af80: jne 0x87af98 */
  if (!zf) goto L_87af98;
L_87af82: /* 87af82: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87af85: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87af86: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87af88: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87af8b: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87af91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87af92: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87af98u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87af98: /* 87af98: mov ecx, dword ptr [edi + 0xd0] */
  ecx = R32((uint32_t)(edi + 0xd0u));
/* 87af9e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87afa0: je 0x87afc8 */
  if (zf) goto L_87afc8;
L_87afa2: /* 87afa2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 87afa4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87afa5: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x87afabu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87afab: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 87afaf: mov ecx, dword ptr [edi + 0xec] */
  ecx = R32((uint32_t)(edi + 0xecu));
/* 87afb5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87afb7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87afb8: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 87afbc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87afbd: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 87afc1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87afc2: call dword ptr [edx + 0x104] */
  { uint32_t t = R32((uint32_t)(edx + 0x104u)); esp -= 4; W32(esp, 0x87afc8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87afc8: /* 87afc8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87afc9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87afca: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87afcd: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87b010(void) {
  LOAD_REGS();
L_87b010: /* 87b010: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87b011: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87b012: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 87b016: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87b019: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 87b021: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87b024: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87b025: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87b026: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87b029: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 87b02d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87b02e: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87b033: mov edi, ecx */
  edi = ecx;
/* 87b035: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87b038: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87b039: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87b03cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87b03c: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87b03f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87b040: mov eax, edx */
  eax = edx;
/* 87b042: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87b045: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87b048: jne 0x87b060 */
  if (!zf) goto L_87b060;
L_87b04a: /* 87b04a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87b04d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87b04e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87b050: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87b053: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87b059: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87b05a: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87b060u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87b060: /* 87b060: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 87b064: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 87b06a: mov ecx, dword ptr [edi + 0xd0] */
  ecx = R32((uint32_t)(edi + 0xd0u));
/* 87b070: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87b072: je 0x87b098 */
  if (zf) goto L_87b098;
L_87b074: /* 87b074: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 87b076: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87b077: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x87b07du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87b07d: mov ecx, dword ptr [edi + 0xec] */
  ecx = R32((uint32_t)(edi + 0xecu));
/* 87b083: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 87b087: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87b089: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87b08a: call dword ptr [edx + 0xe8] */
  { uint32_t t = R32((uint32_t)(edx + 0xe8u)); esp -= 4; W32(esp, 0x87b090u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87b090: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 87b092: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 87b094: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 87b096: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_87b098: /* 87b098: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87b099: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87b09a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 87b09b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87b0d0(void) {
  LOAD_REGS();
L_87b0d0: /* 87b0d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87b0d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87b0d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87b0d3: mov edi, ecx */
  edi = ecx;
/* 87b0d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87b0d7: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 87b0db: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x87b0e1u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 87b0e1: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 87b0e5: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87b0e8: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87b0eb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87b0ee: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87b0ef: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87b0f2: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 87b0f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87b0f7: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87b0fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87b0fd: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87b100u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87b100: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87b103: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87b104: mov eax, edx */
  eax = edx;
/* 87b106: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87b109: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87b10c: jne 0x87b124 */
  if (!zf) goto L_87b124;
L_87b10e: /* 87b10e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87b111: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87b112: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87b114: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87b117: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87b11d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87b11e: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87b124u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87b124: /* 87b124: mov ecx, dword ptr [edi + 0xd0] */
  ecx = R32((uint32_t)(edi + 0xd0u));
/* 87b12a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87b12c: je 0x87b15c */
  if (zf) goto L_87b15c;
L_87b12e: /* 87b12e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 87b130: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87b131: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x87b137u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87b137: mov ecx, dword ptr [edi + 0xec] */
  ecx = R32((uint32_t)(edi + 0xecu));
/* 87b13d: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 87b141: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87b143: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87b144: call dword ptr [edx + 0xb4] */
  { uint32_t t = R32((uint32_t)(edx + 0xb4u)); esp -= 4; W32(esp, 0x87b14au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87b14a: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 87b14e: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 87b150: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 87b152: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 87b154: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87b155: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 87b157: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87b158: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 87b159: ret 8 */
  esp += 12; SPILL(); return;
L_87b15c: /* 87b15c: push 0xae6958 */
  { uint32_t v = 0xae6958u; esp -= 4; W32(esp, v); }
/* 87b161: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87b162: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x87b168u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 87b168: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87b16b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87b16c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87b16d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 87b16e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87b1b0(void) {
  LOAD_REGS();
L_87b1b0: /* 87b1b0: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87b1b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 87b1b4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 87b1b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87b1b6: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 87b1ba: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87b1bd: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 87b1c5: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87b1c8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87b1c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87b1ca: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87b1cd: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 87b1d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87b1d2: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87b1d7: mov edi, ecx */
  edi = ecx;
/* 87b1d9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87b1dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87b1dd: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87b1e0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87b1e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87b1e2: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 87b1e6: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x87b1ecu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 87b1ec: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 87b1f2: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* 87b1f8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87b1fb: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87b1fe: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87b201: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87b202: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87b205: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 87b209: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87b20a: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87b20f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87b210: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87b213u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87b213: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 87b219: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 87b21b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87b21d: je 0x87b22c */
  if (zf) goto L_87b22c;
L_87b21f: /* 87b21f: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 87b224: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 87b226: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87b228: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87b229: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x87b22cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87b22c: /* 87b22c: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 87b232: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 87b234: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87b236: je 0x87b23e */
  if (zf) goto L_87b23e;
L_87b238: /* 87b238: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 87b23c: jmp 0x87b246 */
  goto L_87b246;
L_87b23e: /* 87b23e: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* 87b242: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
L_87b246: /* 87b246: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 87b24e: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* 87b254: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87b257: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87b25a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87b25d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87b25e: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87b261: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 87b265: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87b266: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87b26b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87b26c: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87b26fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87b26f: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 87b275: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 87b277: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87b279: je 0x87b288 */
  if (zf) goto L_87b288;
L_87b27b: /* 87b27b: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 87b280: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 87b282: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87b284: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87b285: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x87b288u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87b288: /* 87b288: mov eax, dword ptr [0xcfa514] */
  eax = R32((uint32_t)(0xcfa514u));
/* 87b28d: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 87b28f: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87b291: jne 0x87b297 */
  if (!zf) goto L_87b297;
L_87b293: /* 87b293: lea ebp, [esp + 0x14] */
  ebp = (uint32_t)(esp + 0x14u);
L_87b297: /* 87b297: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 87b29f: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 87b2a5: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87b2a8: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87b2ab: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87b2ac: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 87b2b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87b2b1: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87b2b4: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87b2b7: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87b2bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87b2bd: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87b2c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87b2c0: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 87b2c6: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 87b2c8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87b2ca: je 0x87b2d9 */
  if (zf) goto L_87b2d9;
L_87b2cc: /* 87b2cc: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 87b2d1: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 87b2d3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87b2d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87b2d6: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x87b2d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87b2d9: /* 87b2d9: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 87b2df: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 87b2e1: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87b2e3: jne 0x87b2e9 */
  if (!zf) goto L_87b2e9;
L_87b2e5: /* 87b2e5: lea ebx, [esp + 0x18] */
  ebx = (uint32_t)(esp + 0x18u);
L_87b2e9: /* 87b2e9: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87b2ec: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87b2ed: mov eax, edx */
  eax = edx;
/* 87b2ef: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87b2f2: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87b2f5: jne 0x87b30d */
  if (!zf) goto L_87b30d;
L_87b2f7: /* 87b2f7: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87b2fa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87b2fb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87b2fd: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87b300: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87b306: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87b307: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87b30du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87b30d: /* 87b30d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87b30f: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 87b313: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x87b319u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 87b319: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 87b31d: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 87b321: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 87b323: mov dword ptr [ebp], 0 */
  W32((uint32_t)(ebp), 0x0u);
/* 87b32a: mov dword ptr [ebx], 0 */
  W32((uint32_t)(ebx), 0x0u);
/* 87b330: mov ecx, dword ptr [edi + 0xd0] */
  ecx = R32((uint32_t)(edi + 0xd0u));
/* 87b336: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87b338: je 0x87b38a */
  if (zf) goto L_87b38a;
L_87b33a: /* 87b33a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87b33c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87b33d: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x87b343u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87b343: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 87b347: mov ecx, dword ptr [edi + 0xec] */
  ecx = R32((uint32_t)(edi + 0xecu));
/* 87b34d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 87b34f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87b350: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* 87b354: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87b355: call dword ptr [eax + 0xf8] */
  { uint32_t t = R32((uint32_t)(eax + 0xf8u)); esp -= 4; W32(esp, 0x87b35bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87b35b: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 87b35d: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 87b35f: mov ecx, dword ptr [edi + 0xec] */
  ecx = R32((uint32_t)(edi + 0xecu));
/* 87b365: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 87b369: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87b36b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87b36c: call dword ptr [edx + 0x100] */
  { uint32_t t = R32((uint32_t)(edx + 0x100u)); esp -= 4; W32(esp, 0x87b372u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87b372: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 87b375: mov ecx, dword ptr [edi + 0xec] */
  ecx = R32((uint32_t)(edi + 0xecu));
/* 87b37b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 87b37f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87b381: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87b382: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0x87b388u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87b388: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
L_87b38a: /* 87b38a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87b38b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87b38c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 87b38d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 87b38e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87b391: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87b420(void) {
  LOAD_REGS();
L_87b420: /* 87b420: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87b423: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87b424: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 87b428: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87b42b: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 87b433: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87b436: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87b437: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87b438: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87b43b: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 87b43f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87b440: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87b445: mov edi, ecx */
  edi = ecx;
/* 87b447: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87b44a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87b44b: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87b44eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87b44e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87b450: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 87b454: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x87b45au); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 87b45a: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87b45d: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87b460: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87b461: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 87b465: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87b466: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87b469: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87b46c: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87b471: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87b472: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87b475u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87b475: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87b478: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87b479: mov eax, edx */
  eax = edx;
/* 87b47b: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87b47e: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87b481: jne 0x87b499 */
  if (!zf) goto L_87b499;
L_87b483: /* 87b483: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87b486: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87b487: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87b489: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87b48c: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87b492: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87b493: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87b499u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87b499: /* 87b499: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 87b49d: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 87b4a3: mov ecx, dword ptr [edi + 0xd0] */
  ecx = R32((uint32_t)(edi + 0xd0u));
/* 87b4a9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87b4ab: je 0x87b536 */
  if (zf) goto L_87b536;
L_87b4b1: /* 87b4b1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 87b4b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87b4b4: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x87b4bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87b4ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87b4bc: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 87b4c0: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x87b4c6u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 87b4c6: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 87b4ca: mov ecx, dword ptr [edi + 0xec] */
  ecx = R32((uint32_t)(edi + 0xecu));
/* 87b4d0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87b4d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87b4d3: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 87b4d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87b4d8: call dword ptr [edx + 0xf8] */
  { uint32_t t = R32((uint32_t)(edx + 0xf8u)); esp -= 4; W32(esp, 0x87b4deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87b4de: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 87b4e0: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 87b4e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87b4e6: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 87b4ea: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x87b4f0u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 87b4f0: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 87b4f4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87b4f5: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 87b4f9: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x87b4ffu); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 87b4ff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87b501: je 0x87b536 */
  if (zf) goto L_87b536;
L_87b503: /* 87b503: mov ecx, dword ptr [edi + 0xec] */
  ecx = R32((uint32_t)(edi + 0xecu));
/* 87b509: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 87b50d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 87b50f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87b510: call dword ptr [eax + 0xb4] */
  { uint32_t t = R32((uint32_t)(eax + 0xb4u)); esp -= 4; W32(esp, 0x87b516u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87b516: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 87b518: je 0x87b536 */
  if (zf) goto L_87b536;
L_87b51a: /* 87b51a: mov ecx, dword ptr [edi + 0xec] */
  ecx = R32((uint32_t)(edi + 0xecu));
/* 87b520: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 87b524: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 87b526: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87b527: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87b528: call dword ptr [edx + 0xc0] */
  { uint32_t t = R32((uint32_t)(edx + 0xc0u)); esp -= 4; W32(esp, 0x87b52eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87b52e: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 87b530: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 87b532: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 87b534: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_87b536: /* 87b536: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87b537: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87b538: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87b53b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87b590(void) {
  LOAD_REGS();
L_87b590: /* 87b590: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 87b593: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87b594: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 87b598: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87b599: mov edi, ecx */
  edi = ecx;
/* 87b59b: mov eax, dword ptr [edi + 0x88] */
  eax = R32((uint32_t)(edi + 0x88u));
/* 87b5a1: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 87b5a3: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 87b5a6: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 87b5aa: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87b5ad: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87b5b0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87b5b1: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 87b5b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87b5b6: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87b5b9: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87b5bc: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87b5c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87b5c2: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87b5c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87b5c5: mov ecx, dword ptr [edi + 0x88] */
  ecx = R32((uint32_t)(edi + 0x88u));
/* 87b5cb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87b5ce: shr ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 87b5d1: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 87b5d4: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 87b5d8: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87b5db: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87b5de: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87b5df: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87b5e2: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 87b5e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87b5e7: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87b5ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87b5ed: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87b5f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87b5f0: mov ecx, dword ptr [edi + 0x88] */
  ecx = R32((uint32_t)(edi + 0x88u));
/* 87b5f6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87b5f9: shr ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 87b5fc: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 87b5ff: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 87b603: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87b606: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87b609: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87b60a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87b60d: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 87b611: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87b612: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87b617: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87b618: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87b61bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87b61b: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87b61e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87b61f: mov eax, edx */
  eax = edx;
/* 87b621: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87b624: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87b627: jne 0x87b63f */
  if (!zf) goto L_87b63f;
L_87b629: /* 87b629: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87b62c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87b62d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87b62f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87b632: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87b638: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87b639: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87b63fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87b63f: /* 87b63f: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 87b643: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 87b647: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 87b64b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87b64c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87b64d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87b64e: mov ecx, edi */
  ecx = edi;
/* 87b650: call 0x6c19d3 */
  esp -= 4; W32(esp, 0x87b655u); SPILL(); f_6c19d3(); if (g_unwind) return; RELOAD();
/* 87b655: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87b656: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87b657: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 87b65a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87b6a0(void) {
  LOAD_REGS();
L_87b6a0: /* 87b6a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87b6a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87b6a2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 87b6a6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87b6a9: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 87b6b1: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87b6b4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87b6b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87b6b6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87b6b9: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 87b6bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87b6be: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87b6c3: mov edi, ecx */
  edi = ecx;
/* 87b6c5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87b6c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87b6c9: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87b6ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87b6cc: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87b6cf: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87b6d0: mov eax, edx */
  eax = edx;
/* 87b6d2: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87b6d5: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87b6d8: jne 0x87b6f0 */
  if (!zf) goto L_87b6f0;
L_87b6da: /* 87b6da: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87b6dd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87b6de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87b6e0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87b6e3: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87b6e9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87b6ea: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87b6f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87b6f0: /* 87b6f0: mov eax, dword ptr [edi + 0x88] */
  eax = R32((uint32_t)(edi + 0x88u));
/* 87b6f6: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 87b6f8: je 0x87b763 */
  if (zf) goto L_87b763;
L_87b6fa: /* 87b6fa: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 87b6fe: xor ecx, ecx */
  ecx = 0;
/* 87b700: mov cl, byte ptr [edi + 0x83] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x83u))) & 0xffu);
/* 87b706: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 87b709: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 87b70b: je 0x87b763 */
  if (zf) goto L_87b763;
L_87b70d: /* 87b70d: mov edx, eax */
  edx = eax;
/* 87b70f: shr edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 87b712: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 87b715: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 87b718: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 87b719: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 87b71c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87b71d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87b71f: mov ecx, edi */
  ecx = edi;
/* 87b721: call 0x6c19d3 */
  esp -= 4; W32(esp, 0x87b726u); SPILL(); f_6c19d3(); if (g_unwind) return; RELOAD();
/* 87b726: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 87b72a: mov edx, dword ptr [edi + 0x80] */
  edx = R32((uint32_t)(edi + 0x80u));
/* 87b730: shl eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 87b733: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 87b735: and eax, 0x1000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 87b73a: mov esi, edx */
  esi = edx;
/* 87b73c: xor esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 87b73e: mov eax, dword ptr [edi + 0x88] */
  eax = R32((uint32_t)(edi + 0x88u));
/* 87b744: mov ecx, eax */
  ecx = eax;
/* 87b746: shr ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 87b749: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 87b74c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87b74d: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 87b750: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 87b753: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87b754: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 87b756: mov ecx, edi */
  ecx = edi;
/* 87b758: mov dword ptr [edi + 0x80], esi */
  W32((uint32_t)(edi + 0x80u), esi);
/* 87b75e: call 0x6c19d3 */
  esp -= 4; W32(esp, 0x87b763u); SPILL(); f_6c19d3(); if (g_unwind) return; RELOAD();
L_87b763: /* 87b763: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87b764: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87b765: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 87b766: ret 8 */
  esp += 12; SPILL(); return;
}

void f_87b7b0(void) {
  LOAD_REGS();
L_87b7b0: /* 87b7b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87b7b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87b7b2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 87b7b6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87b7b9: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 87b7c1: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87b7c4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87b7c5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 87b7c6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87b7c9: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 87b7cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87b7ce: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87b7d3: mov edi, ecx */
  edi = ecx;
/* 87b7d5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87b7d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87b7d9: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87b7dcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87b7dc: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 87b7df: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 87b7e7: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 87b7ea: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87b7eb: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 87b7ef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87b7f0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87b7f3: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87b7f6: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 87b7fb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87b7fc: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x87b7ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 87b7ff: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 87b802: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 87b803: mov eax, edx */
  eax = edx;
/* 87b805: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 87b808: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 87b80b: jne 0x87b823 */
  if (!zf) goto L_87b823;
L_87b80d: /* 87b80d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 87b810: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 87b811: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 87b813: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 87b816: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 87b81c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 87b81d: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x87b823u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_87b823: /* 87b823: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 87b827: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 87b82b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 87b82c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 87b82d: mov ecx, edi */
  ecx = edi;
/* 87b82f: call 0x6c389b */
  esp -= 4; W32(esp, 0x87b834u); SPILL(); f_6c389b(); if (g_unwind) return; RELOAD();
/* 87b834: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 87b838: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 87b839: mov dword ptr [edx], 1 */
  W32((uint32_t)(edx), 0x1u);
/* 87b83f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 87b840: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 87b841: ret 8 */
  esp += 12; SPILL(); return;
}
