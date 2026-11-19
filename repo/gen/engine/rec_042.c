#include "recomp.h"
#include "rec_mod.h"

void f_7c2fc0(void) {
  LOAD_REGS();
L_7c2fc0: /* 7c2fc0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c2fc1: mov ebp, esp */
  ebp = esp;
/* 7c2fc3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c2fc5: push 0x9cf800 */
  { uint32_t v = 0x9cf800u; esp -= 4; W32(esp, v); }
/* 7c2fca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c2fd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c2fd1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c2fd8: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c2fdb: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 7c2fde: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c2fdf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c2fe0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c2fe1: xor edi, edi */
  edi = 0;
/* 7c2fe3: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c2fe5: mov esi, ecx */
  esi = ecx;
/* 7c2fe7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c2fea: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 7c2fed: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7c2ff0: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 7c2ff3: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 7c2ff6: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 7c2ff9: mov dword ptr [ebp - 0x18], 2 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x2u);
/* 7c3000: mov dword ptr [ebp + 0x18], 0x3c23d70a */
  W32((uint32_t)(ebp + 0x18u), 0x3c23d70au);
/* 7c3007: jne 0x7c3010 */
  if (!zf) goto L_7c3010;
L_7c3009: /* 7c3009: mov dword ptr [ebp + 0x18], 0x3e800000 */
  W32((uint32_t)(ebp + 0x18u), 0x3e800000u);
L_7c3010: /* 7c3010: cmp dword ptr [esi + 0x100], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x100u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c3017: jge 0x7c3031 */
  if ((sf == of)) goto L_7c3031;
L_7c3019: /* 7c3019: push 0x8d */
  { uint32_t v = 0x8du; esp -= 4; W32(esp, v); }
/* 7c301e: push 0xad3d8c */
  { uint32_t v = 0xad3d8cu; esp -= 4; W32(esp, v); }
/* 7c3023: push 0xad3d98 */
  { uint32_t v = 0xad3d98u; esp -= 4; W32(esp, v); }
/* 7c3028: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7c302eu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7c302e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7c3031: /* 7c3031: cmp dword ptr [esi + 0x100], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x100u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c3038: jle 0x7c3052 */
  if ((zf || sf != of)) goto L_7c3052;
L_7c303a: /* 7c303a: push 0x8e */
  { uint32_t v = 0x8eu; esp -= 4; W32(esp, v); }
/* 7c303f: push 0xad3da8 */
  { uint32_t v = 0xad3da8u; esp -= 4; W32(esp, v); }
/* 7c3044: push 0xad3db4 */
  { uint32_t v = 0xad3db4u; esp -= 4; W32(esp, v); }
/* 7c3049: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7c304fu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7c304f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7c3052: /* 7c3052: xor ecx, ecx */
  ecx = 0;
L_7c3054: /* 7c3054: cmp ecx, dword ptr [esi + 0x100] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x100u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c305a: jge 0x7c30ee */
  if ((sf == of)) goto L_7c30ee;
L_7c3060: /* 7c3060: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c3062: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7c3065: lea eax, [ecx + ecx*2 + 0xc] */
  eax = (uint32_t)(ecx + ecx*2 + 0xcu);
/* 7c3069: fld dword ptr [esi + eax*4] */
  { double v = F32((uint32_t)(esi + eax*4)); FPUSH(v); }
/* 7c306c: lea eax, [esi + eax*4] */
  eax = (uint32_t)(esi + eax*4);
/* 7c306f: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 7c3071: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7c3074: fsub dword ptr [edx + 4] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x4u)));
/* 7c3077: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7c307a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7c307d: fsub dword ptr [edx + 8] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x8u)));
/* 7c3080: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 7c3083: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c3085: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 7c3088: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c308a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c308c: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 7c308e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c3090: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7c3093: je 0x7c30a2 */
  if (zf) goto L_7c30a2;
L_7c3095: /* 7c3095: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7c3098: fcomp dword ptr [ebp - 0x20] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe0u)));
  FPOP();
/* 7c309b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c309d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c30a0: jne 0x7c30a8 */
  if (!zf) goto L_7c30a8;
L_7c30a2: /* 7c30a2: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c30a5: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
L_7c30a8: /* 7c30a8: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c30aa: je 0x7c30b9 */
  if (zf) goto L_7c30b9;
L_7c30ac: /* 7c30ac: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7c30af: fcomp dword ptr [ebp - 0x24] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffdcu)));
  FPOP();
/* 7c30b2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c30b4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7c30b7: jp 0x7c30bf */
  if (pf) goto L_7c30bf;
L_7c30b9: /* 7c30b9: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c30bc: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
L_7c30bf: /* 7c30bf: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7c30c2: fcomp dword ptr [ebp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x18u)));
  FPOP();
/* 7c30c5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c30c7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c30ca: jne 0x7c30d2 */
  if (!zf) goto L_7c30d2;
L_7c30cc: /* 7c30cc: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 7c30cf: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7c30d0: jmp 0x7c3054 */
  goto L_7c3054;
L_7c30d2: /* 7c30d2: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 7c30d5: fchs  */
  ST0 = -ST0;
/* 7c30d7: fcomp dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
  FPOP();
/* 7c30da: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c30dc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c30df: jne 0x7c30e8 */
  if (!zf) goto L_7c30e8;
L_7c30e1: /* 7c30e1: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
L_7c30e8: /* 7c30e8: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7c30e9: jmp 0x7c3054 */
  goto L_7c3054;
L_7c30ee: /* 7c30ee: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7c30f1: fcomp dword ptr [ebp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x18u)));
  FPOP();
/* 7c30f4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c30f6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7c30f9: jp 0x7c3130 */
  if (pf) goto L_7c3130;
L_7c30fb: /* 7c30fb: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 7c30fe: fchs  */
  ST0 = -ST0;
/* 7c3100: fcomp dword ptr [ebp - 0x24] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffdcu)));
  FPOP();
/* 7c3103: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c3105: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7c3108: jp 0x7c311f */
  if (pf) goto L_7c311f;
L_7c310a: /* 7c310a: xor eax, eax */
  eax = 0;
/* 7c310c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c310f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c3116: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c3117: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c3118: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c3119: mov esp, ebp */
  esp = ebp;
/* 7c311b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c311c: ret 0x14 */
  esp += 24; SPILL(); return;
L_7c311f: /* 7c311f: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7c3122: fcomp dword ptr [ebp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x18u)));
  FPOP();
/* 7c3125: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c3127: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7c312a: jnp 0x7c354d */
  if (!pf) goto L_7c354d;
L_7c3130: /* 7c3130: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 7c3133: fchs  */
  ST0 = -ST0;
/* 7c3135: fcomp dword ptr [ebp - 0x24] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffdcu)));
  FPOP();
/* 7c3138: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c313a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7c313d: jnp 0x7c3592 */
  if (!pf) goto L_7c3592;
L_7c3143: /* 7c3143: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 7c3146: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c3148: jne 0x7c3162 */
  if (!zf) goto L_7c3162;
L_7c314a: /* 7c314a: mov eax, 3 */
  eax = 0x3u;
/* 7c314f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c3152: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c3159: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c315a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c315b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c315c: mov esp, ebp */
  esp = ebp;
/* 7c315e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c315f: ret 0x14 */
  esp += 24; SPILL(); return;
L_7c3162: /* 7c3162: cmp dword ptr [esi + 0x100], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x100u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c3169: jle 0x7c3187 */
  if ((zf || sf != of)) goto L_7c3187;
L_7c316b: /* 7c316b: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7c3171: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c3173: push 0xad3dd0 */
  { uint32_t v = 0xad3dd0u; esp -= 4; W32(esp, v); }
/* 7c3178: push 0xad3e20 */
  { uint32_t v = 0xad3e20u; esp -= 4; W32(esp, v); }
/* 7c317d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c317e: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7c3184u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7c3184: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7c3187: /* 7c3187: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7c318a: mov ecx, 0x52 */
  ecx = 0x52u;
/* 7c318f: mov edi, ebx */
  edi = ebx;
/* 7c3191: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7c3193: or dword ptr [ebx + 0xf0], 0x80000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xf0u))); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebx + 0xf0u), r);
  }
/* 7c319d: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7c31a0: mov dword ptr [ebx + 0x100], 0 */
  W32((uint32_t)(ebx + 0x100u), 0x0u);
/* 7c31aa: mov ecx, 0x52 */
  ecx = 0x52u;
/* 7c31af: mov esi, eax */
  esi = eax;
/* 7c31b1: mov edi, edx */
  edi = edx;
/* 7c31b3: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7c31b5: mov ecx, dword ptr [edx + 0xf0] */
  ecx = R32((uint32_t)(edx + 0xf0u));
/* 7c31bb: or ecx, 0x80000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 7c31c1: xor esi, esi */
  esi = 0;
/* 7c31c3: mov dword ptr [edx + 0xf0], ecx */
  W32((uint32_t)(edx + 0xf0u), ecx);
/* 7c31c9: mov dword ptr [edx + 0x100], esi */
  W32((uint32_t)(edx + 0x100u), esi);
/* 7c31cf: mov ecx, dword ptr [eax + 0x100] */
  ecx = R32((uint32_t)(eax + 0x100u));
/* 7c31d5: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7c31d6: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 7c31d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7c31e0: /* 7c31e0: cmp esi, dword ptr [eax + 0x100] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x100u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c31e6: jge 0x7c3525 */
  if ((sf == of)) goto L_7c3525;
L_7c31ec: /* 7c31ec: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c31ef: lea esi, [esi + esi*2 + 0xc] */
  esi = (uint32_t)(esi + esi*2 + 0xcu);
/* 7c31f3: fld dword ptr [eax + esi*4] */
  { double v = F32((uint32_t)(eax + esi*4)); FPUSH(v); }
/* 7c31f6: lea esi, [eax + esi*4] */
  esi = (uint32_t)(eax + esi*4);
/* 7c31f9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7c31fc: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7c31fe: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 7c3201: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7c3204: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 7c3207: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7c320a: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7c320d: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 7c3210: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 7c3213: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c3215: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 7c3218: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c321a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c321c: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 7c321e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c3220: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 7c3223: fcomp dword ptr [ebp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x18u)));
  FPOP();
/* 7c3226: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c3228: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c322b: jne 0x7c32ab */
  if (!zf) goto L_7c32ab;
L_7c322d: /* 7c322d: mov dword ptr [ebp + 0x10], 0 */
  W32((uint32_t)(ebp + 0x10u), 0x0u);
L_7c3234: /* 7c3234: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c3237: cmp dword ptr [ebp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c323a: je 0x7c32cc */
  if (zf) goto L_7c32cc;
L_7c3240: /* 7c3240: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 7c3243: fchs  */
  ST0 = -ST0;
/* 7c3245: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7c3248: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 7c324a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c324c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c324f: jne 0x7c3360 */
  if (!zf) goto L_7c3360;
L_7c3255: /* 7c3255: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7c3258: fcomp dword ptr [ebp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x18u)));
  FPOP();
/* 7c325b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c325d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7c3260: jp 0x7c3360 */
  if (pf) goto L_7c3360;
L_7c3266: /* 7c3266: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c3269: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7c326b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c326d: jne 0x7c3312 */
  if (!zf) goto L_7c3312;
L_7c3273: /* 7c3273: mov eax, dword ptr [ebx + 0x100] */
  eax = R32((uint32_t)(ebx + 0x100u));
/* 7c3279: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c327c: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 7c327f: lea eax, [ebx + ecx*4] */
  eax = (uint32_t)(ebx + ecx*4);
/* 7c3282: mov ecx, esi */
  ecx = esi;
/* 7c3284: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7c3286: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 7c3288: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 7c328b: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 7c328e: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7c3291: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7c3294: inc dword ptr [ebx + 0x100] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x100u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebx + 0x100u), r);
  }
/* 7c329a: mov eax, dword ptr [edx + 0x100] */
  eax = R32((uint32_t)(edx + 0x100u));
/* 7c32a0: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c32a3: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7c32a6: jmp 0x7c33fb */
  goto L_7c33fb;
L_7c32ab: /* 7c32ab: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 7c32ae: fchs  */
  ST0 = -ST0;
/* 7c32b0: fcomp dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
  FPOP();
/* 7c32b3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c32b5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c32b8: jne 0x7c32c6 */
  if (!zf) goto L_7c32c6;
L_7c32ba: /* 7c32ba: mov dword ptr [ebp + 0x10], 1 */
  W32((uint32_t)(ebp + 0x10u), 0x1u);
/* 7c32c1: jmp 0x7c3234 */
  goto L_7c3234;
L_7c32c6: /* 7c32c6: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c32c9: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_7c32cc: /* 7c32cc: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7c32cf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c32d1: je 0x7c3339 */
  if (zf) goto L_7c3339;
L_7c32d3: /* 7c32d3: mov eax, dword ptr [edx + 0x100] */
  eax = R32((uint32_t)(edx + 0x100u));
/* 7c32d9: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c32dc: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 7c32df: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 7c32e2: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7c32e4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7c32e6: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7c32e9: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7c32ec: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7c32ef: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_7c32f2: /* 7c32f2: inc dword ptr [edx + 0x100] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x100u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edx + 0x100u), r);
  }
L_7c32f8: /* 7c32f8: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7c32fb: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 7c32fe: mov ecx, eax */
  ecx = eax;
/* 7c3300: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7c3301: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7c3304: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7c3307: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 7c330a: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7c330d: jmp 0x7c31e0 */
  goto L_7c31e0;
L_7c3312: /* 7c3312: mov eax, dword ptr [edx + 0x100] */
  eax = R32((uint32_t)(edx + 0x100u));
/* 7c3318: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c331b: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 7c331e: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 7c3321: mov ecx, esi */
  ecx = esi;
/* 7c3323: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7c3325: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 7c3327: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 7c332a: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 7c332d: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7c3330: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7c3333: inc dword ptr [edx + 0x100] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x100u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edx + 0x100u), r);
  }
L_7c3339: /* 7c3339: mov eax, dword ptr [ebx + 0x100] */
  eax = R32((uint32_t)(ebx + 0x100u));
/* 7c333f: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c3342: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
L_7c3345: /* 7c3345: lea ecx, [ebx + eax*4] */
  ecx = (uint32_t)(ebx + eax*4);
/* 7c3348: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7c334a: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7c334c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7c334f: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7c3352: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 7c3355: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7c3358: inc dword ptr [ebx + 0x100] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x100u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebx + 0x100u), r);
  }
/* 7c335e: jmp 0x7c32f8 */
  goto L_7c32f8;
L_7c3360: /* 7c3360: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7c3363: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 7c3365: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c3367: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7c3369: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c336c: jne 0x7c3413 */
  if (!zf) goto L_7c3413;
L_7c3372: /* 7c3372: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7c3375: fcomp dword ptr [ebp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x18u)));
  FPOP();
/* 7c3378: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c337a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7c337d: jp 0x7c3413 */
  if (pf) goto L_7c3413;
L_7c3383: /* 7c3383: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7c3386: lea ecx, [ecx + ecx*2 + 0xc] */
  ecx = (uint32_t)(ecx + ecx*2 + 0xcu);
/* 7c338a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c338c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7c338f: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 7c3392: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7c3394: jne 0x7c33cb */
  if (!zf) goto L_7c33cb;
L_7c3396: /* 7c3396: mov eax, dword ptr [ebx + 0x100] */
  eax = R32((uint32_t)(ebx + 0x100u));
/* 7c339c: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c339f: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7c33a2: lea eax, [ebx + eax*4] */
  eax = (uint32_t)(ebx + eax*4);
/* 7c33a5: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 7c33a7: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 7c33aa: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 7c33ad: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7c33b0: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7c33b3: mov ecx, dword ptr [ebx + 0x100] */
  ecx = R32((uint32_t)(ebx + 0x100u));
/* 7c33b9: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7c33ba: mov eax, ecx */
  eax = ecx;
/* 7c33bc: mov dword ptr [ebx + 0x100], ecx */
  W32((uint32_t)(ebx + 0x100u), ecx);
/* 7c33c2: lea eax, [eax + eax*2 + 0xc] */
  eax = (uint32_t)(eax + eax*2 + 0xcu);
/* 7c33c6: jmp 0x7c3345 */
  goto L_7c3345;
L_7c33cb: /* 7c33cb: mov eax, dword ptr [edx + 0x100] */
  eax = R32((uint32_t)(edx + 0x100u));
/* 7c33d1: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c33d4: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7c33d7: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 7c33da: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 7c33dc: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 7c33df: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 7c33e2: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7c33e5: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7c33e8: mov ecx, dword ptr [edx + 0x100] */
  ecx = R32((uint32_t)(edx + 0x100u));
/* 7c33ee: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7c33ef: mov eax, ecx */
  eax = ecx;
/* 7c33f1: mov dword ptr [edx + 0x100], ecx */
  W32((uint32_t)(edx + 0x100u), ecx);
/* 7c33f7: lea eax, [eax + eax*2 + 0xc] */
  eax = (uint32_t)(eax + eax*2 + 0xcu);
L_7c33fb: /* 7c33fb: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 7c33fe: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7c3400: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7c3402: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7c3405: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7c3408: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 7c340b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7c340e: jmp 0x7c32f2 */
  goto L_7c32f2;
L_7c3413: /* 7c3413: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7c3416: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c3417: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c3418: lea eax, [ecx + ecx*2 + 0xc] */
  eax = (uint32_t)(ecx + ecx*2 + 0xcu);
/* 7c341c: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7c341f: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 7c3422: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c3423: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c3424: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 7c3427: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c3428: call 0x6c504c */
  esp -= 4; W32(esp, 0x7c342du); SPILL(); f_6c504c(); if (g_unwind) return; RELOAD();
/* 7c342d: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 7c3430: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 7c3433: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7c3435: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c3438: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c343b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c343d: mov dword ptr [ebp - 0x34], edi */
  W32((uint32_t)(ebp + 0xffffffccu), edi);
/* 7c3440: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 7c3443: jne 0x7c34b2 */
  if (!zf) goto L_7c34b2;
L_7c3445: /* 7c3445: mov eax, dword ptr [ebx + 0x100] */
  eax = R32((uint32_t)(ebx + 0x100u));
/* 7c344b: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c344e: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7c3451: lea eax, [ebx + eax*4] */
  eax = (uint32_t)(ebx + eax*4);
/* 7c3454: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7c3456: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 7c3459: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7c345c: inc dword ptr [ebx + 0x100] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x100u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebx + 0x100u), r);
  }
/* 7c3462: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7c3465: mov edx, dword ptr [eax + 0x100] */
  edx = R32((uint32_t)(eax + 0x100u));
/* 7c346b: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7c346e: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 7c3471: lea edx, [eax + edx*4] */
  edx = (uint32_t)(eax + edx*4);
/* 7c3474: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7c3476: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7c3479: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 7c347c: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7c347f: mov edx, dword ptr [eax + 0x100] */
  edx = R32((uint32_t)(eax + 0x100u));
/* 7c3485: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7c3486: mov dword ptr [eax + 0x100], edx */
  W32((uint32_t)(eax + 0x100u), edx);
/* 7c348c: mov ecx, edx */
  ecx = edx;
/* 7c348e: lea edx, [ecx + ecx*2 + 0xc] */
  edx = (uint32_t)(ecx + ecx*2 + 0xcu);
/* 7c3492: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 7c3495: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7c3497: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7c3499: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 7c349c: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7c349f: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 7c34a2: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7c34a5: inc dword ptr [eax + 0x100] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x100u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0x100u), r);
  }
/* 7c34ab: mov edx, eax */
  edx = eax;
/* 7c34ad: jmp 0x7c32f8 */
  goto L_7c32f8;
L_7c34b2: /* 7c34b2: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7c34b5: mov edx, dword ptr [eax + 0x100] */
  edx = R32((uint32_t)(eax + 0x100u));
/* 7c34bb: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7c34be: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 7c34c1: lea edx, [eax + edx*4] */
  edx = (uint32_t)(eax + edx*4);
/* 7c34c4: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7c34c6: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 7c34c9: mov edi, edx */
  edi = edx;
/* 7c34cb: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7c34ce: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 7c34d1: inc dword ptr [eax + 0x100] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x100u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0x100u), r);
  }
/* 7c34d7: mov eax, dword ptr [ebx + 0x100] */
  eax = R32((uint32_t)(ebx + 0x100u));
/* 7c34dd: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c34e0: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7c34e3: lea eax, [ebx + eax*4] */
  eax = (uint32_t)(ebx + eax*4);
/* 7c34e6: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7c34e8: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7c34eb: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7c34ee: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7c34f1: mov ecx, dword ptr [ebx + 0x100] */
  ecx = R32((uint32_t)(ebx + 0x100u));
/* 7c34f7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7c34f8: mov dword ptr [ebx + 0x100], ecx */
  W32((uint32_t)(ebx + 0x100u), ecx);
/* 7c34fe: mov eax, ecx */
  eax = ecx;
/* 7c3500: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7c3502: lea edx, [eax + eax*2 + 0xc] */
  edx = (uint32_t)(eax + eax*2 + 0xcu);
/* 7c3506: lea eax, [ebx + edx*4] */
  eax = (uint32_t)(ebx + edx*4);
/* 7c3509: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7c350b: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 7c350e: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7c3511: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7c3514: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7c3517: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7c351a: inc dword ptr [ebx + 0x100] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x100u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebx + 0x100u), r);
  }
/* 7c3520: jmp 0x7c32f8 */
  goto L_7c32f8;
L_7c3525: /* 7c3525: mov ecx, ebx */
  ecx = ebx;
/* 7c3527: call 0x6c4b88 */
  esp -= 4; W32(esp, 0x7c352cu); SPILL(); f_6c4b88(); if (g_unwind) return; RELOAD();
/* 7c352c: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c352f: jge 0x7c3565 */
  if ((sf == of)) goto L_7c3565;
L_7c3531: /* 7c3531: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7c3537: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7c3539: push 0xad3e28 */
  { uint32_t v = 0xad3e28u; esp -= 4; W32(esp, v); }
/* 7c353e: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 7c3543: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c3544: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7c354au); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7c354a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7c354d: /* 7c354d: mov eax, 2 */
  eax = 0x2u;
/* 7c3552: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c3555: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c355c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c355d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c355e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c355f: mov esp, ebp */
  esp = ebp;
/* 7c3561: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c3562: ret 0x14 */
  esp += 24; SPILL(); return;
L_7c3565: /* 7c3565: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7c3568: call 0x6c4b88 */
  esp -= 4; W32(esp, 0x7c356du); SPILL(); f_6c4b88(); if (g_unwind) return; RELOAD();
/* 7c356d: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c3570: jge 0x7c314a */
  if ((sf == of)) goto L_7c314a;
L_7c3576: /* 7c3576: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7c357c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c357e: push 0xad3e80 */
  { uint32_t v = 0xad3e80u; esp -= 4; W32(esp, v); }
/* 7c3583: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 7c3588: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c3589: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7c358fu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7c358f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7c3592: /* 7c3592: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c3595: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c3596: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c3597: mov eax, 1 */
  eax = 0x1u;
/* 7c359c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c35a3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c35a4: mov esp, ebp */
  esp = ebp;
/* 7c35a6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c35a7: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_7c35aa(void) {
  LOAD_REGS();
L_7c35aa: /* 7c35aa: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7c35ad: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c35b2: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7c35b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c35b6: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 7c35b9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c35beu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c35be(); return;
}

void f_7c35be(void) {
  LOAD_REGS();
L_7c35be: /* 7c35be: push 0xa0e154 */
  { uint32_t v = 0xa0e154u; esp -= 4; W32(esp, v); }
/* 7c35c3: push 0xad3ed8 */
  { uint32_t v = 0xad3ed8u; esp -= 4; W32(esp, v); }
/* 7c35c8: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c35ceu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c35ce: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c35d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c35d3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c35d5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c35dau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c35da: guest_badaddr(0x7c35da); return;
}

void f_7c3770(void) {
  LOAD_REGS();
L_7c3770: /* 7c3770: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c3771: mov ebp, esp */
  ebp = esp;
/* 7c3773: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c3775: push 0x9cf810 */
  { uint32_t v = 0x9cf810u; esp -= 4; W32(esp, v); }
/* 7c377a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c3780: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c3781: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c3788: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c378b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7c378e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7c3791: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 7c3794: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c3795: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c3796: add eax, dword ptr [edx + 0x58] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x58u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c3799: mov esi, dword ptr [eax + 0x1c] */
  esi = R32((uint32_t)(eax + 0x1cu));
/* 7c379c: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 7c379f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c37a0: mov edi, dword ptr [edx + 0x98] */
  edi = R32((uint32_t)(edx + 0x98u));
/* 7c37a6: shl esi, 6 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 7c37a9: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7c37ab: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 7c37ae: mov esi, dword ptr [esi + 0xc] */
  esi = R32((uint32_t)(esi + 0xcu));
/* 7c37b1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c37b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c37b5: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 7c37b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c37b9: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 7c37bc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c37bd: mov edi, dword ptr [edx + 0x78] */
  edi = R32((uint32_t)(edx + 0x78u));
/* 7c37c0: lea esi, [esi + esi*2] */
  esi = (uint32_t)(esi + esi*2);
/* 7c37c3: lea esi, [edi + esi*4] */
  esi = (uint32_t)(edi + esi*4);
/* 7c37c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c37c7: mov esi, dword ptr [edx + 0x68] */
  esi = R32((uint32_t)(edx + 0x68u));
/* 7c37ca: mov eax, dword ptr [esi + eax*8] */
  eax = R32((uint32_t)(esi + eax*8));
/* 7c37cd: mov edx, dword ptr [edx + 0x88] */
  edx = R32((uint32_t)(edx + 0x88u));
/* 7c37d3: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7c37d6: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 7c37d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c37da: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c37e1: call 0x6cc108 */
  esp -= 4; W32(esp, 0x7c37e6u); SPILL(); f_6cc108(); if (g_unwind) return; RELOAD();
/* 7c37e6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c37e9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c37ea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c37eb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c37f2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c37f3: mov esp, ebp */
  esp = ebp;
/* 7c37f5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c37f6: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_7c37f9(void) {
  LOAD_REGS();
L_7c37f9: /* 7c37f9: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c37fc: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c3801: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7c3804: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c3805: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7c3808: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c380du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c380d(); return;
}

void f_7c380d(void) {
  LOAD_REGS();
L_7c380d: /* 7c380d: push 0xa0e188 */
  { uint32_t v = 0xa0e188u; esp -= 4; W32(esp, v); }
/* 7c3812: push 0xad3ee0 */
  { uint32_t v = 0xad3ee0u; esp -= 4; W32(esp, v); }
/* 7c3817: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c381du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c381d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c3820: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c3822: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c3824: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c3829u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c3829: guest_badaddr(0x7c3829); return;
}

void f_7c3860(void) {
  LOAD_REGS();
L_7c3860: /* 7c3860: sub esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c3863: mov edx, dword ptr [ecx + 0x100] */
  edx = R32((uint32_t)(ecx + 0x100u));
/* 7c3869: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c386a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c386b: xor ebx, ebx */
  ebx = 0;
/* 7c386d: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c386f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c3870: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c3871: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 7c3875: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 7c3879: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 7c387d: lea esi, [esp + 0x38] */
  esi = (uint32_t)(esp + 0x38u);
/* 7c3881: jle 0x7c391f */
  if ((zf || sf != of)) goto L_7c391f;
L_7c3887: /* 7c3887: lea edi, [ecx + 0x38] */
  edi = (uint32_t)(ecx + 0x38u);
/* 7c388a: mov ebp, edx */
  ebp = edx;
/* 7c388c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7c3890: /* 7c3890: fld dword ptr [esp + 0x80] */
  { double v = F32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 7c3897: fmul dword ptr [edi - 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffffcu)));
/* 7c389a: fld dword ptr [esp + 0x7c] */
  { double v = F32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 7c389e: fmul dword ptr [edi - 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xfffffff8u)));
/* 7c38a1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c38a3: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 7c38aa: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 7c38ac: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c38ae: fsub dword ptr [esp + 0x88] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x88u)));
/* 7c38b5: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 7c38bb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c38bd: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c38c0: jne 0x7c38de */
  if (!zf) goto L_7c38de;
L_7c38c2: /* 7c38c2: fcomp dword ptr [0xa0e1c0] */
  fpu_com(ST0, F32((uint32_t)(0xa0e1c0u)));
  FPOP();
/* 7c38c8: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 7c38ca: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7c38cd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c38cf: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c38d2: jne 0x7c38fc */
  if (!zf) goto L_7c38fc;
L_7c38d4: /* 7c38d4: mov dword ptr [esp + 0x1c], 1 */
  W32((uint32_t)(esp + 0x1cu), 0x1u);
/* 7c38dc: jmp 0x7c38fc */
  goto L_7c38fc;
L_7c38de: /* 7c38de: fcomp dword ptr [0xa0e1bc] */
  fpu_com(ST0, F32((uint32_t)(0xa0e1bcu)));
  FPOP();
/* 7c38e4: mov dword ptr [esi], 1 */
  W32((uint32_t)(esi), 0x1u);
/* 7c38ea: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7c38ed: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c38ef: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7c38f2: jp 0x7c38fc */
  if (pf) goto L_7c38fc;
L_7c38f4: /* 7c38f4: mov dword ptr [esp + 0x14], 1 */
  W32((uint32_t)(esp + 0x14u), 0x1u);
L_7c38fc: /* 7c38fc: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7c38ff: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 7c3900: jne 0x7c3890 */
  if (!zf) goto L_7c3890;
L_7c3902: /* 7c3902: cmp dword ptr [esp + 0x1c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x1cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c3906: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 7c390a: jne 0x7c392b */
  if (!zf) goto L_7c392b;
L_7c390c: /* 7c390c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c390e: je 0x7c391f */
  if (zf) goto L_7c391f;
L_7c3910: /* 7c3910: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c3911: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c3912: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c3913: mov eax, 2 */
  eax = 0x2u;
/* 7c3918: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c3919: add esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c391c: ret 0x18 */
  esp += 28; SPILL(); return;
L_7c391f: /* 7c391f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c3920: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c3921: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c3922: xor eax, eax */
  eax = 0;
/* 7c3924: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c3925: add esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c3928: ret 0x18 */
  esp += 28; SPILL(); return;
L_7c392b: /* 7c392b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c392d: jne 0x7c393e */
  if (!zf) goto L_7c393e;
L_7c392f: /* 7c392f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c3930: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c3931: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c3932: mov eax, 1 */
  eax = 0x1u;
/* 7c3937: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c3938: add esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c393b: ret 0x18 */
  esp += 28; SPILL(); return;
L_7c393e: /* 7c393e: mov ebp, dword ptr [esp + 0x8c] */
  ebp = R32((uint32_t)(esp + 0x8cu));
/* 7c3945: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c3947: je 0x7c3b3c */
  if (zf) goto L_7c3b3c;
L_7c394d: /* 7c394d: mov edi, dword ptr [esp + 0x90] */
  edi = R32((uint32_t)(esp + 0x90u));
/* 7c3954: lea eax, [edx + edx*2 + 9] */
  eax = (uint32_t)(edx + edx*2 + 0x9u);
/* 7c3958: mov edx, dword ptr [esp + edx*4 + 0x34] */
  edx = R32((uint32_t)(esp + edx*4 + 0x34u));
/* 7c395c: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 7c3960: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* 7c3964: add ebp, 0x30 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 7c3967: lea esi, [ecx + 0x30] */
  esi = (uint32_t)(ecx + 0x30u);
/* 7c396a: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7c396d: add edi, 0x30 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7c3970: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 7c3974: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 7c3978: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 7c397c: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
L_7c3980: /* 7c3980: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7c3984: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7c3988: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 7c398a: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7c398d: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 7c3991: cmp edx, dword ptr [esp + 0x1c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c3995: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 7c3999: je 0x7c3a45 */
  if (zf) goto L_7c3a45;
L_7c399f: /* 7c399f: lea ecx, [esp + 0x7c] */
  ecx = (uint32_t)(esp + 0x7cu);
/* 7c39a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c39a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c39a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c39a6: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* 7c39aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c39ab: mov ebx, edi */
  ebx = edi;
/* 7c39ad: call 0x6c8fbc */
  esp -= 4; W32(esp, 0x7c39b2u); SPILL(); f_6c8fbc(); if (g_unwind) return; RELOAD();
/* 7c39b2: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7c39b4: mov ecx, edi */
  ecx = edi;
/* 7c39b6: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7c39b8: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7c39bb: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7c39be: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7c39c1: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7c39c4: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7c39c6: mov ecx, ebp */
  ecx = ebp;
/* 7c39c8: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7c39ca: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 7c39cd: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7c39d0: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 7c39d4: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 7c39d7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c39da: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7c39dd: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 7c39e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c39e2: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7c39e5: jne 0x7c3a14 */
  if (!zf) goto L_7c3a14;
L_7c39e7: /* 7c39e7: mov eax, esi */
  eax = esi;
/* 7c39e9: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7c39eb: mov ecx, edi */
  ecx = edi;
/* 7c39ed: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7c39ef: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7c39f2: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7c39f5: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7c39f8: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7c39fb: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c39ff: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 7c3a03: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7c3a06: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7c3a07: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 7c3a0b: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 7c3a0f: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c3a12: jmp 0x7c3a87 */
  goto L_7c3a87;
L_7c3a14: /* 7c3a14: mov ecx, esi */
  ecx = esi;
/* 7c3a16: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7c3a18: mov edx, ebp */
  edx = ebp;
/* 7c3a1a: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7c3a1c: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7c3a1f: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7c3a22: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7c3a25: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 7c3a29: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7c3a2c: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7c3a30: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 7c3a33: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7c3a34: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c3a37: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 7c3a3b: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 7c3a3f: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 7c3a43: jmp 0x7c3a8b */
  goto L_7c3a8b;
L_7c3a45: /* 7c3a45: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c3a47: jne 0x7c3a6b */
  if (!zf) goto L_7c3a6b;
L_7c3a49: /* 7c3a49: mov edx, esi */
  edx = esi;
/* 7c3a4b: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 7c3a4d: mov eax, ebp */
  eax = ebp;
/* 7c3a4f: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 7c3a51: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 7c3a54: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 7c3a57: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7c3a5a: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7c3a5d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 7c3a61: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 7c3a64: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7c3a65: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 7c3a69: jmp 0x7c3a8b */
  goto L_7c3a8b;
L_7c3a6b: /* 7c3a6b: mov eax, esi */
  eax = esi;
/* 7c3a6d: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 7c3a6f: mov edx, edi */
  edx = edi;
/* 7c3a71: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 7c3a73: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 7c3a76: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 7c3a79: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7c3a7c: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7c3a7f: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 7c3a83: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7c3a86: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_7c3a87: /* 7c3a87: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
L_7c3a8b: /* 7c3a8b: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 7c3a8f: mov ebx, dword ptr [ecx + 0x100] */
  ebx = R32((uint32_t)(ecx + 0x100u));
/* 7c3a95: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 7c3a99: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 7c3a9d: mov eax, esi */
  eax = esi;
/* 7c3a9f: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7c3aa2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7c3aa3: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c3aa5: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 7c3aa9: jl 0x7c3980 */
  if ((sf != of)) goto L_7c3980;
L_7c3aaf: /* 7c3aaf: mov edx, dword ptr [esp + 0x8c] */
  edx = R32((uint32_t)(esp + 0x8cu));
/* 7c3ab6: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 7c3aba: mov dword ptr [edx + 0x100], eax */
  W32((uint32_t)(edx + 0x100u), eax);
/* 7c3ac0: mov eax, ecx */
  eax = ecx;
/* 7c3ac2: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 7c3ac4: mov esi, edx */
  esi = edx;
/* 7c3ac6: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 7c3ac8: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 7c3acb: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 7c3ace: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7c3ad1: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 7c3ad4: lea eax, [ecx + 0xc] */
  eax = (uint32_t)(ecx + 0xcu);
/* 7c3ad7: mov edi, eax */
  edi = eax;
/* 7c3ad9: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 7c3adb: lea esi, [edx + 0xc] */
  esi = (uint32_t)(edx + 0xcu);
/* 7c3ade: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 7c3ae0: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 7c3ae3: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 7c3ae6: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 7c3ae9: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 7c3aec: mov esi, dword ptr [ecx + 0xf0] */
  esi = R32((uint32_t)(ecx + 0xf0u));
/* 7c3af2: mov dword ptr [edx + 0xf0], esi */
  W32((uint32_t)(edx + 0xf0u), esi);
/* 7c3af8: mov edx, dword ptr [esp + 0x90] */
  edx = R32((uint32_t)(esp + 0x90u));
/* 7c3aff: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 7c3b03: mov dword ptr [edx + 0x100], esi */
  W32((uint32_t)(edx + 0x100u), esi);
/* 7c3b09: mov esi, ecx */
  esi = ecx;
/* 7c3b0b: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 7c3b0d: mov edi, edx */
  edi = edx;
/* 7c3b0f: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 7c3b11: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 7c3b14: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 7c3b17: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 7c3b1a: mov dword ptr [edi + 8], esi */
  W32((uint32_t)(edi + 0x8u), esi);
/* 7c3b1d: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 7c3b1f: lea esi, [edx + 0xc] */
  esi = (uint32_t)(edx + 0xcu);
/* 7c3b22: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 7c3b24: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 7c3b27: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 7c3b2a: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7c3b2d: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 7c3b30: mov ecx, dword ptr [ecx + 0xf0] */
  ecx = R32((uint32_t)(ecx + 0xf0u));
/* 7c3b36: mov dword ptr [edx + 0xf0], ecx */
  W32((uint32_t)(edx + 0xf0u), ecx);
L_7c3b3c: /* 7c3b3c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c3b3d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c3b3e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c3b3f: mov eax, 3 */
  eax = 0x3u;
/* 7c3b44: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c3b45: add esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c3b48: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_7c3c10(void) {
  LOAD_REGS();
L_7c3c10: /* 7c3c10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c3c11: mov ebp, esp */
  ebp = esp;
/* 7c3c13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c3c15: push 0x9cf820 */
  { uint32_t v = 0x9cf820u; esp -= 4; W32(esp, v); }
/* 7c3c1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c3c20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c3c21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c3c28: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c3c2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c3c2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c3c2d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c3c2e: xor ebx, ebx */
  ebx = 0;
/* 7c3c30: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c3c33: mov esi, ecx */
  esi = ecx;
/* 7c3c35: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7c3c38: jmp 0x7c3c40 */
  goto L_7c3c40;
L_7c3c40: /* 7c3c40: mov ecx, dword ptr [esi + 0x100] */
  ecx = R32((uint32_t)(esi + 0x100u));
/* 7c3c46: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c3c48: jge 0x7c3d4e */
  if ((sf == of)) goto L_7c3d4e;
L_7c3c4e: /* 7c3c4e: lea eax, [ebx - 1] */
  eax = (uint32_t)(ebx + 0xffffffffu);
/* 7c3c51: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7c3c53: jge 0x7c3c58 */
  if ((sf == of)) goto L_7c3c58;
L_7c3c55: /* 7c3c55: lea eax, [ecx - 1] */
  eax = (uint32_t)(ecx + 0xffffffffu);
L_7c3c58: /* 7c3c58: lea ecx, [ebx + ebx*2 + 0xc] */
  ecx = (uint32_t)(ebx + ebx*2 + 0xcu);
/* 7c3c5c: fld dword ptr [esi + ecx*4 + 8] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0x8u)); FPUSH(v); }
/* 7c3c60: lea edi, [esi + ecx*4] */
  edi = (uint32_t)(esi + ecx*4);
/* 7c3c63: lea eax, [eax + eax*2 + 0xc] */
  eax = (uint32_t)(eax + eax*2 + 0xcu);
/* 7c3c67: fsub dword ptr [esi + eax*4 + 8] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4 + 0x8u)));
/* 7c3c6b: lea eax, [esi + eax*4] */
  eax = (uint32_t)(esi + eax*4);
/* 7c3c6e: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7c3c71: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 7c3c74: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7c3c77: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7c3c7a: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 7c3c7c: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7c3c7e: fst dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0);
/* 7c3c81: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 7c3c84: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7c3c87: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 7c3c8a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7c3c8c: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7c3c8f: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 7c3c92: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 7c3c95: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 7c3c98: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7c3c9a: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7c3c9d: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 7c3ca0: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7c3ca3: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 7c3ca6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7c3ca8: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 7c3cab: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7c3cae: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 7c3cb1: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7c3cb4: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 7c3cb7: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 7c3cba: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7c3cbd: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7c3cc0: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 7c3cc3: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7c3cc6: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x7c3cccu); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 7c3ccc: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7c3ccf: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 7c3cd1: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 7c3cd4: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 7c3cd7: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 7c3cda: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 7c3cdd: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7c3ce0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7c3ce2: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7c3ce5: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 7c3ce7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c3ce9: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c3ceb: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 7c3cee: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 7c3cf0: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 7c3cf2: fcomp dword ptr [0xa0973c] */
  fpu_com(ST0, F32((uint32_t)(0xa0973cu)));
  FPOP();
/* 7c3cf8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c3cfa: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 7c3cfc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c3cff: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7c3d01: jne 0x7c3d18 */
  if (!zf) goto L_7c3d18;
L_7c3d03: /* 7c3d03: xor eax, eax */
  eax = 0;
/* 7c3d05: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c3d08: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c3d0f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c3d10: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c3d11: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c3d12: mov esp, ebp */
  esp = ebp;
/* 7c3d14: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c3d15: ret 0xc */
  esp += 16; SPILL(); return;
L_7c3d18: /* 7c3d18: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7c3d19: jmp 0x7c3c40 */
  goto L_7c3c40;
L_7c3d4e: /* 7c3d4e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c3d51: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c3d52: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c3d53: mov eax, 1 */
  eax = 0x1u;
/* 7c3d58: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c3d5f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c3d60: mov esp, ebp */
  esp = ebp;
/* 7c3d62: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c3d63: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_7c3c3a(void) {
  LOAD_REGS();
L_7c3c3a: /* 7c3c3a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7c3c40: /* 7c3c40: mov ecx, dword ptr [esi + 0x100] */
  ecx = R32((uint32_t)(esi + 0x100u));
/* 7c3c46: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c3c48: jge 0x7c3d4e */
  if ((sf == of)) goto L_7c3d4e;
L_7c3c4e: /* 7c3c4e: lea eax, [ebx - 1] */
  eax = (uint32_t)(ebx + 0xffffffffu);
/* 7c3c51: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7c3c53: jge 0x7c3c58 */
  if ((sf == of)) goto L_7c3c58;
L_7c3c55: /* 7c3c55: lea eax, [ecx - 1] */
  eax = (uint32_t)(ecx + 0xffffffffu);
L_7c3c58: /* 7c3c58: lea ecx, [ebx + ebx*2 + 0xc] */
  ecx = (uint32_t)(ebx + ebx*2 + 0xcu);
/* 7c3c5c: fld dword ptr [esi + ecx*4 + 8] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0x8u)); FPUSH(v); }
/* 7c3c60: lea edi, [esi + ecx*4] */
  edi = (uint32_t)(esi + ecx*4);
/* 7c3c63: lea eax, [eax + eax*2 + 0xc] */
  eax = (uint32_t)(eax + eax*2 + 0xcu);
/* 7c3c67: fsub dword ptr [esi + eax*4 + 8] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax*4 + 0x8u)));
/* 7c3c6b: lea eax, [esi + eax*4] */
  eax = (uint32_t)(esi + eax*4);
/* 7c3c6e: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7c3c71: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 7c3c74: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7c3c77: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7c3c7a: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 7c3c7c: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7c3c7e: fst dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0);
/* 7c3c81: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 7c3c84: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7c3c87: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 7c3c8a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7c3c8c: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7c3c8f: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 7c3c92: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 7c3c95: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 7c3c98: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7c3c9a: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7c3c9d: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 7c3ca0: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7c3ca3: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 7c3ca6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7c3ca8: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 7c3cab: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7c3cae: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 7c3cb1: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7c3cb4: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 7c3cb7: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 7c3cba: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7c3cbd: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7c3cc0: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 7c3cc3: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7c3cc6: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x7c3cccu); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 7c3ccc: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7c3ccf: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 7c3cd1: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 7c3cd4: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 7c3cd7: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 7c3cda: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 7c3cdd: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7c3ce0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7c3ce2: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7c3ce5: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 7c3ce7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c3ce9: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c3ceb: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 7c3cee: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 7c3cf0: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 7c3cf2: fcomp dword ptr [0xa0973c] */
  fpu_com(ST0, F32((uint32_t)(0xa0973cu)));
  FPOP();
/* 7c3cf8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c3cfa: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 7c3cfc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c3cff: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7c3d01: jne 0x7c3d18 */
  if (!zf) goto L_7c3d18;
L_7c3d03: /* 7c3d03: xor eax, eax */
  eax = 0;
/* 7c3d05: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c3d08: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c3d0f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c3d10: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c3d11: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c3d12: mov esp, ebp */
  esp = ebp;
/* 7c3d14: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c3d15: ret 0xc */
  esp += 16; SPILL(); return;
L_7c3d18: /* 7c3d18: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7c3d19: jmp 0x7c3c40 */
  goto L_7c3c40;
L_7c3d4e: /* 7c3d4e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c3d51: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c3d52: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c3d53: mov eax, 1 */
  eax = 0x1u;
/* 7c3d58: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c3d5f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c3d60: mov esp, ebp */
  esp = ebp;
/* 7c3d62: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c3d63: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_7c3d1e(void) {
  LOAD_REGS();
L_7c3d1e: /* 7c3d1e: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7c3d21: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c3d26: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7c3d29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c3d2a: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7c3d2d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c3d32u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c3d32(); return;
}

void f_7c3d32(void) {
  LOAD_REGS();
L_7c3d32: /* 7c3d32: push 0xa0e1c4 */
  { uint32_t v = 0xa0e1c4u; esp -= 4; W32(esp, v); }
/* 7c3d37: push 0xad3fa4 */
  { uint32_t v = 0xad3fa4u; esp -= 4; W32(esp, v); }
/* 7c3d3c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c3d42u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c3d42: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c3d45: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c3d47: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c3d49: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c3d4eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7c3d4e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c3d51: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c3d52: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c3d53: mov eax, 1 */
  eax = 0x1u;
/* 7c3d58: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c3d5f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c3d60: mov esp, ebp */
  esp = ebp;
/* 7c3d62: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c3d63: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_7c3dd0(void) {
  LOAD_REGS();
L_7c3dd0: /* 7c3dd0: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 7c3dd4: fsub dword ptr [ecx + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x30u)));
/* 7c3dd7: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 7c3ddb: fsub dword ptr [ecx + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x34u)));
/* 7c3dde: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 7c3de2: fsub dword ptr [ecx + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x38u)));
/* 7c3de5: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 7c3de8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c3dea: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 7c3ded: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c3def: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c3df1: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 7c3df4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c3df6: fcomp dword ptr [0xa0e1e8] */
  fpu_com(ST0, F32((uint32_t)(0xa0e1e8u)));
  FPOP();
/* 7c3dfc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c3dfe: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c3e01: jne 0x7c3e3e */
  if (!zf) goto L_7c3e3e;
L_7c3e03: /* 7c3e03: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 7c3e07: fsub dword ptr [ecx + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x30u)));
/* 7c3e0a: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 7c3e0e: fsub dword ptr [ecx + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x34u)));
/* 7c3e11: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 7c3e15: fsub dword ptr [ecx + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x38u)));
/* 7c3e18: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* 7c3e1b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c3e1d: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 7c3e20: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c3e22: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c3e24: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 7c3e27: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c3e29: fcomp dword ptr [0xa0973c] */
  fpu_com(ST0, F32((uint32_t)(0xa0973cu)));
  FPOP();
/* 7c3e2f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c3e31: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7c3e34: jp 0x7c3e3e */
  if (pf) goto L_7c3e3e;
L_7c3e36: /* 7c3e36: mov eax, 1 */
  eax = 0x1u;
/* 7c3e3b: ret 0xc */
  esp += 16; SPILL(); return;
L_7c3e3e: /* 7c3e3e: xor eax, eax */
  eax = 0;
/* 7c3e40: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_7c3e70(void) {
  LOAD_REGS();
L_7c3e70: /* 7c3e70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c3e71: mov ebp, esp */
  ebp = esp;
/* 7c3e73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c3e75: push 0x9cf830 */
  { uint32_t v = 0x9cf830u; esp -= 4; W32(esp, v); }
/* 7c3e7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c3e80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c3e81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c3e88: sub esp, 0x2a8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2a8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c3e8e: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7c3e91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c3e93: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c3e94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c3e95: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c3e96: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c3e99: mov ebx, ecx */
  ebx = ecx;
/* 7c3e9b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c3ea2: je 0x7c3f21 */
  if (zf) goto L_7c3f21;
L_7c3ea4: /* 7c3ea4: cmp dword ptr [ebx + 0x100], 0xe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x100u))); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c3eab: jl 0x7c3f21 */
  if ((sf != of)) goto L_7c3f21;
L_7c3ead: /* 7c3ead: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7c3eb0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7c3eb2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7c3eb5: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7c3eb8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c3eba: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7c3ebd: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7c3ec0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c3ec2: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7c3ec5: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7c3ec8: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 7c3ecb: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c3ece: mov ecx, esp */
  ecx = esp;
/* 7c3ed0: mov edx, eax */
  edx = eax;
/* 7c3ed2: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 7c3ed4: mov esi, ecx */
  esi = ecx;
/* 7c3ed6: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 7c3ed8: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 7c3edb: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 7c3ede: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7c3ee1: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 7c3ee4: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 7c3ee7: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7c3eea: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 7c3eed: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 7c3ef0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c3ef2: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7c3ef5: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 7c3ef7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c3ef9: fstp dword ptr [ecx + 0xc] */
  WF32((uint32_t)(ecx + 0xcu), ST0); FPOP();
/* 7c3efc: mov ecx, ebx */
  ecx = ebx;
/* 7c3efe: call 0x6c5b28 */
  esp -= 4; W32(esp, 0x7c3f03u); SPILL(); f_6c5b28(); if (g_unwind) return; RELOAD();
/* 7c3f03: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c3f06: jne 0x7c3fc8 */
  if (!zf) goto L_7c3fc8;
L_7c3f0c: /* 7c3f0c: xor eax, eax */
  eax = 0;
/* 7c3f0e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c3f11: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c3f18: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c3f19: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c3f1a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c3f1b: mov esp, ebp */
  esp = ebp;
/* 7c3f1d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c3f1e: ret 0xc */
  esp += 16; SPILL(); return;
L_7c3f21: /* 7c3f21: lea ecx, [ebp - 0x16c] */
  ecx = (uint32_t)(ebp + 0xfffffe94u);
/* 7c3f27: call 0x6cba3c */
  esp -= 4; W32(esp, 0x7c3f2cu); SPILL(); f_6cba3c(); if (g_unwind) return; RELOAD();
/* 7c3f2c: lea ecx, [ebp - 0x2b4] */
  ecx = (uint32_t)(ebp + 0xfffffd4cu);
/* 7c3f32: call 0x6cba3c */
  esp -= 4; W32(esp, 0x7c3f37u); SPILL(); f_6cba3c(); if (g_unwind) return; RELOAD();
/* 7c3f37: lea ecx, [ebp - 0x16c] */
  ecx = (uint32_t)(ebp + 0xfffffe94u);
/* 7c3f3d: call 0x6c5aec */
  esp -= 4; W32(esp, 0x7c3f42u); SPILL(); f_6c5aec(); if (g_unwind) return; RELOAD();
/* 7c3f42: lea ecx, [ebp - 0x2b4] */
  ecx = (uint32_t)(ebp + 0xfffffd4cu);
/* 7c3f48: call 0x6c5aec */
  esp -= 4; W32(esp, 0x7c3f4du); SPILL(); f_6c5aec(); if (g_unwind) return; RELOAD();
/* 7c3f4d: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7c3f50: lea eax, [ebp - 0x2b4] */
  eax = (uint32_t)(ebp + 0xfffffd4cu);
/* 7c3f56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c3f57: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7c3f59: lea ecx, [ebp - 0x16c] */
  ecx = (uint32_t)(ebp + 0xfffffe94u);
/* 7c3f5f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c3f60: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7c3f63: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7c3f66: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7c3f69: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7c3f6c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7c3f6f: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7c3f72: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7c3f75: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c3f78: mov ecx, esp */
  ecx = esp;
/* 7c3f7a: mov edx, eax */
  edx = eax;
/* 7c3f7c: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 7c3f7e: mov esi, ecx */
  esi = ecx;
/* 7c3f80: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 7c3f82: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 7c3f85: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 7c3f88: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7c3f8b: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 7c3f8e: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 7c3f91: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7c3f94: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 7c3f97: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 7c3f9a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c3f9c: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7c3f9f: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 7c3fa1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c3fa3: fstp dword ptr [ecx + 0xc] */
  WF32((uint32_t)(ecx + 0xcu), ST0); FPOP();
/* 7c3fa6: mov ecx, ebx */
  ecx = ebx;
/* 7c3fa8: call 0x6c5b28 */
  esp -= 4; W32(esp, 0x7c3fadu); SPILL(); f_6c5b28(); if (g_unwind) return; RELOAD();
/* 7c3fad: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 7c3fb0: je 0x7c3f0c */
  if (zf) goto L_7c3f0c;
L_7c3fb6: /* 7c3fb6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 7c3fb7: jne 0x7c3fc8 */
  if (!zf) goto L_7c3fc8;
L_7c3fb9: /* 7c3fb9: mov ecx, 0x52 */
  ecx = 0x52u;
/* 7c3fbe: lea esi, [ebp - 0x16c] */
  esi = (uint32_t)(ebp + 0xfffffe94u);
/* 7c3fc4: mov edi, ebx */
  edi = ebx;
/* 7c3fc6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_7c3fc8: /* 7c3fc8: mov eax, dword ptr [ebx + 0x100] */
  eax = R32((uint32_t)(ebx + 0x100u));
/* 7c3fce: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c3fd1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c3fd2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c3fd3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c3fda: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c3fdb: mov esp, ebp */
  esp = ebp;
/* 7c3fdd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c3fde: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_7c3fe1(void) {
  LOAD_REGS();
L_7c3fe1: /* 7c3fe1: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7c3fe4: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c3fe9: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7c3fec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c3fed: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7c3ff0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c3ff5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c3ff5(); return;
}

void f_7c3ff5(void) {
  LOAD_REGS();
L_7c3ff5: /* 7c3ff5: push 0xa0e1ec */
  { uint32_t v = 0xa0e1ecu; esp -= 4; W32(esp, v); }
/* 7c3ffa: push 0xad3fe8 */
  { uint32_t v = 0xad3fe8u; esp -= 4; W32(esp, v); }
/* 7c3fff: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c4005u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c4005: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c4008: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c400a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c400c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c4011u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c4011: guest_badaddr(0x7c4011); return;
}

void f_7c4090(void) {
  LOAD_REGS();
L_7c4090: /* 7c4090: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c4091: mov ebp, esp */
  ebp = esp;
/* 7c4093: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c4095: push 0x9cf840 */
  { uint32_t v = 0x9cf840u; esp -= 4; W32(esp, v); }
/* 7c409a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c40a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c40a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c40a8: sub esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c40ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c40ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c40ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c40ae: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c40b1: mov ebx, ecx */
  ebx = ecx;
/* 7c40b3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c40ba: call 0x6c4b88 */
  esp -= 4; W32(esp, 0x7c40bfu); SPILL(); f_6c4b88(); if (g_unwind) return; RELOAD();
/* 7c40bf: mov eax, dword ptr [ebx + 0x100] */
  eax = R32((uint32_t)(ebx + 0x100u));
/* 7c40c5: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c40c8: jge 0x7c4120 */
  if ((sf == of)) goto L_7c4120;
L_7c40ca: /* 7c40ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c40cb: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7c40d0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7c40d2: push 0xad3ff0 */
  { uint32_t v = 0xad3ff0u; esp -= 4; W32(esp, v); }
/* 7c40d7: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 7c40dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c40dd: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7c40e3u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7c40e3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7c40e6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c40e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c40eb: je 0x7c4103 */
  if (zf) goto L_7c4103;
L_7c40ed: /* 7c40ed: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 7c40f0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c40f3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c40fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c40fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c40fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c40fd: mov esp, ebp */
  esp = ebp;
/* 7c40ff: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c4100: ret 4 */
  esp += 8; SPILL(); return;
L_7c4103: /* 7c4103: mov edx, dword ptr [ebx + 0x100] */
  edx = R32((uint32_t)(ebx + 0x100u));
/* 7c4109: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 7c410e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7c4110: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c4111: push 0xad4048 */
  { uint32_t v = 0xad4048u; esp -= 4; W32(esp, v); }
/* 7c4116: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c4117: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7c411du); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7c411d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7c4120: /* 7c4120: lea esi, [ebx + 0xc] */
  esi = (uint32_t)(ebx + 0xcu);
/* 7c4123: mov ecx, esi */
  ecx = esi;
/* 7c4125: call dword ptr [0xcfa5e8] */
  esp -= 4; W32(esp, 0x7c412bu); SPILL(); f_4e3edb(); if (g_unwind) return; /* Core!?IsZero@FVector@@QBEHXZ */ RELOAD();
/* 7c412b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c412d: je 0x7c41b5 */
  if (zf) goto L_7c41b5;
L_7c4133: /* 7c4133: cmp dword ptr [ebx + 0x100], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x100u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c413a: jl 0x7c41b5 */
  if ((sf != of)) goto L_7c41b5;
L_7c413c: /* 7c413c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c413e: mov ecx, ebx */
  ecx = ebx;
/* 7c4140: call 0x6c2860 */
  esp -= 4; W32(esp, 0x7c4145u); SPILL(); f_6c2860(); if (g_unwind) return; RELOAD();
/* 7c4145: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c4147: je 0x7c41b5 */
  if (zf) goto L_7c41b5;
L_7c4149: /* 7c4149: mov ecx, esi */
  ecx = esi;
/* 7c414b: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x7c4151u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 7c4151: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 7c4154: mov edx, dword ptr [ebx + 0x100] */
  edx = R32((uint32_t)(ebx + 0x100u));
/* 7c415a: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7c415f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7c4161: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c4164: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 7c4167: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c4168: push 0xad40a0 */
  { uint32_t v = 0xad40a0u; esp -= 4; W32(esp, v); }
/* 7c416d: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 7c4172: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c4173: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7c4179u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7c4179: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7c417c: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c417f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c4181: jne 0x7c40ed */
  if (!zf) goto L_7c40ed;
L_7c4187: /* 7c4187: mov ecx, esi */
  ecx = esi;
/* 7c4189: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x7c418fu); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 7c418f: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 7c4192: mov edx, dword ptr [ebx + 0x100] */
  edx = R32((uint32_t)(ebx + 0x100u));
/* 7c4198: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 7c419d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7c419f: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c41a2: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 7c41a5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c41a6: push 0xad4118 */
  { uint32_t v = 0xad4118u; esp -= 4; W32(esp, v); }
/* 7c41ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c41ac: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7c41b2u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7c41b2: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7c41b5: /* 7c41b5: lea edi, [ebx + 0x18] */
  edi = (uint32_t)(ebx + 0x18u);
/* 7c41b8: mov ecx, edi */
  ecx = edi;
/* 7c41ba: call dword ptr [0xcfa5e8] */
  esp -= 4; W32(esp, 0x7c41c0u); SPILL(); f_4e3edb(); if (g_unwind) return; /* Core!?IsZero@FVector@@QBEHXZ */ RELOAD();
/* 7c41c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c41c2: je 0x7c42e8 */
  if (zf) goto L_7c42e8;
L_7c41c8: /* 7c41c8: lea ecx, [ebx + 0x24] */
  ecx = (uint32_t)(ebx + 0x24u);
/* 7c41cb: call dword ptr [0xcfa5e8] */
  esp -= 4; W32(esp, 0x7c41d1u); SPILL(); f_4e3edb(); if (g_unwind) return; /* Core!?IsZero@FVector@@QBEHXZ */ RELOAD();
/* 7c41d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c41d3: je 0x7c42e8 */
  if (zf) goto L_7c42e8;
L_7c41d9: /* 7c41d9: mov eax, 1 */
  eax = 0x1u;
/* 7c41de: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
L_7c41e1: /* 7c41e1: cmp eax, dword ptr [ebx + 0x100] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x100u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c41e7: jge 0x7c42e8 */
  if ((sf == of)) goto L_7c42e8;
L_7c41ed: /* 7c41ed: fld dword ptr [ebx + 0x38] */
  { double v = F32((uint32_t)(ebx + 0x38u)); FPUSH(v); }
/* 7c41f0: lea edx, [eax + eax*2 + 0xc] */
  edx = (uint32_t)(eax + eax*2 + 0xcu);
/* 7c41f4: fsub dword ptr [ebx + edx*4 + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebx + edx*4 + 0x8u)));
/* 7c41f8: lea eax, [ebx + edx*4] */
  eax = (uint32_t)(ebx + edx*4);
/* 7c41fb: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7c41fe: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7c4201: fld dword ptr [ebx + 0x34] */
  { double v = F32((uint32_t)(ebx + 0x34u)); FPUSH(v); }
/* 7c4204: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7c4207: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7c420a: fld dword ptr [ebx + 0x30] */
  { double v = F32((uint32_t)(ebx + 0x30u)); FPUSH(v); }
/* 7c420d: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7c420f: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 7c4212: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c4213: fst dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0);
/* 7c4216: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 7c4219: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7c421c: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 7c421e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7c4220: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7c4223: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 7c4225: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 7c4228: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 7c422b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7c422d: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7c4230: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 7c4233: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7c4236: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 7c4239: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7c423b: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7c423e: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7c4241: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7c4244: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x7c424au); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 7c424a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7c424c: mov ecx, edi */
  ecx = edi;
/* 7c424e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7c4250: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7c4253: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7c4256: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7c4259: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7c425c: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 7c425f: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 7c4261: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 7c4264: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 7c4266: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c4267: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 7c426a: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 7c426d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7c426f: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 7c4271: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 7c4274: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7c4276: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 7c4279: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7c427b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7c427e: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 7c4281: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 7c4284: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 7c4287: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7c4289: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 7c428c: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7c428f: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7c4292: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x7c4298u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 7c4298: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7c429a: lea ecx, [ebx + 0x24] */
  ecx = (uint32_t)(ebx + 0x24u);
/* 7c429d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7c429f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7c42a2: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7c42a5: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7c42a8: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7c42ab: mov ecx, edi */
  ecx = edi;
/* 7c42ad: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x7c42b3u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 7c42b3: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 7c42b6: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7c42bc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c42be: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7c42c1: jnp 0x7c42dc */
  if (!pf) goto L_7c42dc;
L_7c42c3: /* 7c42c3: lea ecx, [ebx + 0x24] */
  ecx = (uint32_t)(ebx + 0x24u);
/* 7c42c6: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x7c42ccu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 7c42cc: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 7c42cf: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7c42d5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c42d7: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7c42da: jp 0x7c42e8 */
  if (pf) goto L_7c42e8;
L_7c42dc: /* 7c42dc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7c42df: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7c42e0: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7c42e3: jmp 0x7c41e1 */
  goto L_7c41e1;
L_7c42e8: /* 7c42e8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c42eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c42ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c42ed: xor eax, eax */
  eax = 0;
/* 7c42ef: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c42f6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c42f7: mov esp, ebp */
  esp = ebp;
/* 7c42f9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c42fa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7c42fd(void) {
  LOAD_REGS();
L_7c42fd: /* 7c42fd: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7c4300: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c4305: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 7c4308: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c4309: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 7c430c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c4311u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c4311(); return;
}

void f_7c4311(void) {
  LOAD_REGS();
L_7c4311: /* 7c4311: push 0xa0e20c */
  { uint32_t v = 0xa0e20cu; esp -= 4; W32(esp, v); }
/* 7c4316: push 0xad418c */
  { uint32_t v = 0xad418cu; esp -= 4; W32(esp, v); }
/* 7c431b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c4321u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c4321: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c4324: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c4326: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c4328: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c432du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c432d: guest_badaddr(0x7c432d); return;
}

void f_7c43e0(void) {
  LOAD_REGS();
L_7c43e0: /* 7c43e0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7c43e4: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 7c43e6: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 7c43ea: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 7c43ec: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 7c43f2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c43f4: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c43f7: je 0x7c43fb */
  if (zf) goto L_7c43fb;
L_7c43f9: /* 7c43f9: fchs  */
  ST0 = -ST0;
L_7c43fb: /* 7c43fb: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 7c43ff: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c4401: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c4404: je 0x7c4446 */
  if (zf) goto L_7c4446;
L_7c4406: /* 7c4406: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 7c4409: fsub dword ptr [edx + 4] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x4u)));
/* 7c440c: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 7c4412: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c4414: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c4417: je 0x7c441b */
  if (zf) goto L_7c441b;
L_7c4419: /* 7c4419: fchs  */
  ST0 = -ST0;
L_7c441b: /* 7c441b: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 7c441f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c4421: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c4424: je 0x7c4446 */
  if (zf) goto L_7c4446;
L_7c4426: /* 7c4426: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 7c4429: fsub dword ptr [edx + 8] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x8u)));
/* 7c442c: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 7c4432: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c4434: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c4437: je 0x7c443b */
  if (zf) goto L_7c443b;
L_7c4439: /* 7c4439: fchs  */
  ST0 = -ST0;
L_7c443b: /* 7c443b: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 7c443f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c4441: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c4444: jne 0x7c4449 */
  if (!zf) goto L_7c4449;
L_7c4446: /* 7c4446: xor eax, eax */
  eax = 0;
/* 7c4448: ret  */
  esp += 4; SPILL(); return;
L_7c4449: /* 7c4449: mov eax, 1 */
  eax = 0x1u;
/* 7c444e: ret  */
  esp += 4; SPILL(); return;
}

void f_7c4470(void) {
  LOAD_REGS();
L_7c4470: /* 7c4470: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c4471: mov ebp, esp */
  ebp = esp;
/* 7c4473: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c4475: push 0x9cf850 */
  { uint32_t v = 0x9cf850u; esp -= 4; W32(esp, v); }
/* 7c447a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c4480: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c4481: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c4488: sub esp, 0xf0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xf0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c448e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c448f: mov ebx, dword ptr [0xcfa1e0] */
  ebx = R32((uint32_t)(0xcfa1e0u));
/* 7c4495: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c4496: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c4497: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c449a: mov esi, ecx */
  esi = ecx;
/* 7c449c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c44a3: mov dword ptr [ebp - 0x14], 0x10 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x10u);
/* 7c44aa: lea edi, [ebp - 0xfc] */
  edi = (uint32_t)(ebp + 0xffffff04u);
L_7c44b0: /* 7c44b0: dec dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 7c44b3: js 0x7c44c2 */
  if (sf) goto L_7c44c2;
L_7c44b5: /* 7c44b5: mov ecx, edi */
  ecx = edi;
/* 7c44b7: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7c44b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c44b9: mov eax, 0xc */
  eax = 0xcu;
/* 7c44be: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7c44c0: jmp 0x7c44b0 */
  goto L_7c44b0;
L_7c44c2: /* 7c44c2: xor edi, edi */
  edi = 0;
/* 7c44c4: jmp 0x7c44d0 */
  goto L_7c44d0;
L_7c44d0: /* 7c44d0: mov ecx, dword ptr [esi + 0x100] */
  ecx = R32((uint32_t)(esi + 0x100u));
/* 7c44d6: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c44d8: jge 0x7c45c5 */
  if ((sf == of)) goto L_7c45c5;
L_7c44de: /* 7c44de: lea eax, [edi - 1] */
  eax = (uint32_t)(edi + 0xffffffffu);
/* 7c44e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7c44e3: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 7c44e6: jge 0x7c44eb */
  if ((sf == of)) goto L_7c44eb;
L_7c44e8: /* 7c44e8: lea eax, [ecx - 1] */
  eax = (uint32_t)(ecx + 0xffffffffu);
L_7c44eb: /* 7c44eb: lea eax, [eax + eax*2 + 0xc] */
  eax = (uint32_t)(eax + eax*2 + 0xcu);
/* 7c44ef: lea eax, [esi + eax*4] */
  eax = (uint32_t)(esi + eax*4);
/* 7c44f2: lea ecx, [edi + edi*2 + 0xc] */
  ecx = (uint32_t)(edi + edi*2 + 0xcu);
/* 7c44f6: fld dword ptr [esi + ecx*4 + 8] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0x8u)); FPUSH(v); }
/* 7c44fa: lea ebx, [esi + ecx*4] */
  ebx = (uint32_t)(esi + ecx*4);
/* 7c44fd: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 7c4500: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 7c4503: lea ecx, [ebp + ecx*4 - 0xfc] */
  ecx = (uint32_t)(ebp + ecx*4 + 0xffffff04u);
/* 7c450a: mov edx, ecx */
  edx = ecx;
/* 7c450c: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7c450f: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 7c4512: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7c4515: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7c4518: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 7c451a: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7c451c: fst dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0);
/* 7c451f: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 7c4522: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7c4525: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 7c4528: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7c452a: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7c452d: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 7c4530: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 7c4533: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 7c4536: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7c4538: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7c453b: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 7c453e: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7c4541: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 7c4544: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7c4546: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7c4549: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7c454c: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7c454e: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7c4551: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7c4554: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7c4557: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7c455a: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7c455d: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7c4560: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x7c4566u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 7c4566: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c4568: jne 0x7c45bf */
  if (!zf) goto L_7c45bf;
L_7c456a: /* 7c456a: mov eax, dword ptr [esi + 0x100] */
  eax = R32((uint32_t)(esi + 0x100u));
/* 7c4570: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7c4572: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 7c4573: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 7c4576: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7c4579: lea edx, [edi + edi*2 + 0xf] */
  edx = (uint32_t)(edi + edi*2 + 0xfu);
/* 7c457d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c457e: lea eax, [esi + edx*4] */
  eax = (uint32_t)(esi + edx*4);
/* 7c4581: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c4582: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c4583: call 0x6ca83f */
  esp -= 4; W32(esp, 0x7c4588u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 7c4588: mov ecx, dword ptr [esi + 0x100] */
  ecx = R32((uint32_t)(esi + 0x100u));
/* 7c458e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c4591: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7c4592: mov eax, ecx */
  eax = ecx;
/* 7c4594: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c4597: mov dword ptr [esi + 0x100], ecx */
  W32((uint32_t)(esi + 0x100u), ecx);
/* 7c459d: jge 0x7c45bc */
  if ((sf == of)) goto L_7c45bc;
L_7c459f: /* 7c459f: mov dword ptr [esi + 0x100], 0 */
  W32((uint32_t)(esi + 0x100u), 0x0u);
L_7c45a9: /* 7c45a9: xor eax, eax */
  eax = 0;
/* 7c45ab: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c45ae: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c45b5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c45b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c45b7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c45b8: mov esp, ebp */
  esp = ebp;
/* 7c45ba: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c45bb: ret  */
  esp += 4; SPILL(); return;
L_7c45bc: /* 7c45bc: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
L_7c45bf: /* 7c45bf: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7c45c0: jmp 0x7c44d0 */
  goto L_7c44d0;
L_7c45c5: /* 7c45c5: xor edi, edi */
  edi = 0;
/* 7c45c7: jmp 0x7c45d0 */
  goto L_7c45d0;
L_7c45d0: /* 7c45d0: mov ecx, dword ptr [esi + 0x100] */
  ecx = R32((uint32_t)(esi + 0x100u));
/* 7c45d6: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c45d8: jge 0x7c4762 */
  if ((sf == of)) goto L_7c4762;
L_7c45de: /* 7c45de: lea eax, [edi + 1] */
  eax = (uint32_t)(edi + 0x1u);
/* 7c45e1: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c45e3: jl 0x7c45e7 */
  if ((sf != of)) goto L_7c45e7;
L_7c45e5: /* 7c45e5: xor eax, eax */
  eax = 0;
L_7c45e7: /* 7c45e7: lea ebx, [edi + edi*2] */
  ebx = (uint32_t)(edi + edi*2);
/* 7c45ea: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 7c45ed: shl ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 7c45f0: fld dword ptr [ebp + ebx - 0xfc] */
  { double v = F32((uint32_t)(ebp + ebx + 0xffffff04u)); FPUSH(v); }
/* 7c45f7: lea eax, [ebp + ebx - 0xfc] */
  eax = (uint32_t)(ebp + ebx + 0xffffff04u);
/* 7c45fe: fsub dword ptr [ebp + edx*4 - 0xfc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + edx*4 + 0xffffff04u)));
/* 7c4605: lea edx, [ebp + edx*4 - 0xfc] */
  edx = (uint32_t)(ebp + edx*4 + 0xffffff04u);
/* 7c460c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7c460f: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 7c4615: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c4617: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c461a: je 0x7c461e */
  if (zf) goto L_7c461e;
L_7c461c: /* 7c461c: fchs  */
  ST0 = -ST0;
L_7c461e: /* 7c461e: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 7c4624: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c4626: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c4629: je 0x7c46e2 */
  if (zf) goto L_7c46e2;
L_7c462f: /* 7c462f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c4632: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7c4635: fsub dword ptr [edx + 4] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x4u)));
/* 7c4638: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 7c463e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c4640: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c4643: je 0x7c4647 */
  if (zf) goto L_7c4647;
L_7c4645: /* 7c4645: fchs  */
  ST0 = -ST0;
L_7c4647: /* 7c4647: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 7c464d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c464f: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c4652: je 0x7c46e2 */
  if (zf) goto L_7c46e2;
L_7c4658: /* 7c4658: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c465b: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7c465e: fsub dword ptr [edx + 8] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x8u)));
/* 7c4661: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 7c4667: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c4669: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c466c: je 0x7c4670 */
  if (zf) goto L_7c4670;
L_7c466e: /* 7c466e: fchs  */
  ST0 = -ST0;
L_7c4670: /* 7c4670: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 7c4676: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c4678: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c467b: je 0x7c46e2 */
  if (zf) goto L_7c46e2;
L_7c467d: /* 7c467d: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 7c467f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7c4680: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 7c4683: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7c4686: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c4687: lea edx, [edi + edi*2 + 0xf] */
  edx = (uint32_t)(edi + edi*2 + 0xfu);
/* 7c468b: lea eax, [esi + edx*4] */
  eax = (uint32_t)(esi + edx*4);
/* 7c468e: lea ecx, [edi + edi*2 + 0xc] */
  ecx = (uint32_t)(edi + edi*2 + 0xcu);
/* 7c4692: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c4693: lea edx, [esi + ecx*4] */
  edx = (uint32_t)(esi + ecx*4);
/* 7c4696: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c4697: call 0x6ca83f */
  esp -= 4; W32(esp, 0x7c469cu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 7c469c: mov eax, dword ptr [esi + 0x100] */
  eax = R32((uint32_t)(esi + 0x100u));
/* 7c46a2: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c46a5: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7c46a7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c46aa: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 7c46ab: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7c46ae: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7c46b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c46b2: lea ecx, [ebp + ebx - 0xf0] */
  ecx = (uint32_t)(ebp + ebx + 0xffffff10u);
/* 7c46b9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c46ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c46bb: call 0x6ca83f */
  esp -= 4; W32(esp, 0x7c46c0u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 7c46c0: mov ecx, dword ptr [esi + 0x100] */
  ecx = R32((uint32_t)(esi + 0x100u));
/* 7c46c6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c46c9: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7c46ca: mov eax, ecx */
  eax = ecx;
/* 7c46cc: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c46cf: mov dword ptr [esi + 0x100], ecx */
  W32((uint32_t)(esi + 0x100u), ecx);
/* 7c46d5: jl 0x7c459f */
  if ((sf != of)) goto L_7c459f;
L_7c46db: /* 7c46db: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
L_7c46dc: /* 7c46dc: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7c46dd: jmp 0x7c45d0 */
  goto L_7c45d0;
L_7c46e2: /* 7c46e2: xor ebx, ebx */
  ebx = 0;
L_7c46e4: /* 7c46e4: cmp ebx, dword ptr [esi + 0x100] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x100u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c46ea: jge 0x7c46dc */
  if ((sf == of)) goto L_7c46dc;
L_7c46ec: /* 7c46ec: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c46ee: je 0x7c475f */
  if (zf) goto L_7c475f;
L_7c46f0: /* 7c46f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c46f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c46f4: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 7c46f7: lea ecx, [ebp + eax*4 - 0xfc] */
  ecx = (uint32_t)(ebp + eax*4 + 0xffffff04u);
/* 7c46fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c4700: lea edx, [edi + edi*2 + 0xc] */
  edx = (uint32_t)(edi + edi*2 + 0xcu);
/* 7c4704: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c4705: lea eax, [esi + edx*4] */
  eax = (uint32_t)(esi + edx*4);
/* 7c4708: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c4709: mov ecx, esi */
  ecx = esi;
/* 7c470b: call 0x6cc108 */
  esp -= 4; W32(esp, 0x7c4710u); SPILL(); f_6cc108(); if (g_unwind) return; RELOAD();
/* 7c4710: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 7c4711: je 0x7c45a9 */
  if (zf) goto L_7c45a9;
L_7c4717: /* 7c4717: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 7c471a: jne 0x7c475f */
  if (!zf) goto L_7c475f;
L_7c471c: /* 7c471c: xor eax, eax */
  eax = 0;
/* 7c471e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c4721: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c4728: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c4729: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c472a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c472b: mov esp, ebp */
  esp = ebp;
/* 7c472d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c472e: ret  */
  esp += 4; SPILL(); return;
L_7c475f: /* 7c475f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7c4760: jmp 0x7c46e4 */
  goto L_7c46e4;
L_7c4762: /* 7c4762: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c4765: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c4766: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c4767: mov eax, 1 */
  eax = 0x1u;
/* 7c476c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c4773: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c4774: mov esp, ebp */
  esp = ebp;
/* 7c4776: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c4777: ret  */
  esp += 4; SPILL(); return;
}

void f_7c44c6(void) {
  LOAD_REGS();
L_7c44c6: /* 7c44c6: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 7c44cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7c44d0: /* 7c44d0: mov ecx, dword ptr [esi + 0x100] */
  ecx = R32((uint32_t)(esi + 0x100u));
/* 7c44d6: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c44d8: jge 0x7c45c5 */
  if ((sf == of)) goto L_7c45c5;
L_7c44de: /* 7c44de: lea eax, [edi - 1] */
  eax = (uint32_t)(edi + 0xffffffffu);
/* 7c44e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7c44e3: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 7c44e6: jge 0x7c44eb */
  if ((sf == of)) goto L_7c44eb;
L_7c44e8: /* 7c44e8: lea eax, [ecx - 1] */
  eax = (uint32_t)(ecx + 0xffffffffu);
L_7c44eb: /* 7c44eb: lea eax, [eax + eax*2 + 0xc] */
  eax = (uint32_t)(eax + eax*2 + 0xcu);
/* 7c44ef: lea eax, [esi + eax*4] */
  eax = (uint32_t)(esi + eax*4);
/* 7c44f2: lea ecx, [edi + edi*2 + 0xc] */
  ecx = (uint32_t)(edi + edi*2 + 0xcu);
/* 7c44f6: fld dword ptr [esi + ecx*4 + 8] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0x8u)); FPUSH(v); }
/* 7c44fa: lea ebx, [esi + ecx*4] */
  ebx = (uint32_t)(esi + ecx*4);
/* 7c44fd: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 7c4500: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 7c4503: lea ecx, [ebp + ecx*4 - 0xfc] */
  ecx = (uint32_t)(ebp + ecx*4 + 0xffffff04u);
/* 7c450a: mov edx, ecx */
  edx = ecx;
/* 7c450c: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7c450f: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 7c4512: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7c4515: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7c4518: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 7c451a: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7c451c: fst dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0);
/* 7c451f: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 7c4522: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7c4525: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 7c4528: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7c452a: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7c452d: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 7c4530: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 7c4533: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 7c4536: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7c4538: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7c453b: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 7c453e: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7c4541: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 7c4544: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7c4546: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7c4549: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7c454c: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7c454e: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7c4551: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7c4554: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7c4557: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7c455a: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7c455d: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7c4560: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x7c4566u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 7c4566: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c4568: jne 0x7c45bf */
  if (!zf) goto L_7c45bf;
L_7c456a: /* 7c456a: mov eax, dword ptr [esi + 0x100] */
  eax = R32((uint32_t)(esi + 0x100u));
/* 7c4570: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7c4572: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 7c4573: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 7c4576: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7c4579: lea edx, [edi + edi*2 + 0xf] */
  edx = (uint32_t)(edi + edi*2 + 0xfu);
/* 7c457d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c457e: lea eax, [esi + edx*4] */
  eax = (uint32_t)(esi + edx*4);
/* 7c4581: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c4582: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c4583: call 0x6ca83f */
  esp -= 4; W32(esp, 0x7c4588u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 7c4588: mov ecx, dword ptr [esi + 0x100] */
  ecx = R32((uint32_t)(esi + 0x100u));
/* 7c458e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c4591: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7c4592: mov eax, ecx */
  eax = ecx;
/* 7c4594: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c4597: mov dword ptr [esi + 0x100], ecx */
  W32((uint32_t)(esi + 0x100u), ecx);
/* 7c459d: jge 0x7c45bc */
  if ((sf == of)) goto L_7c45bc;
L_7c459f: /* 7c459f: mov dword ptr [esi + 0x100], 0 */
  W32((uint32_t)(esi + 0x100u), 0x0u);
L_7c45a9: /* 7c45a9: xor eax, eax */
  eax = 0;
/* 7c45ab: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c45ae: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c45b5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c45b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c45b7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c45b8: mov esp, ebp */
  esp = ebp;
/* 7c45ba: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c45bb: ret  */
  esp += 4; SPILL(); return;
L_7c45bc: /* 7c45bc: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
L_7c45bf: /* 7c45bf: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7c45c0: jmp 0x7c44d0 */
  goto L_7c44d0;
L_7c45c5: /* 7c45c5: xor edi, edi */
  edi = 0;
/* 7c45c7: jmp 0x7c45d0 */
  goto L_7c45d0;
L_7c45d0: /* 7c45d0: mov ecx, dword ptr [esi + 0x100] */
  ecx = R32((uint32_t)(esi + 0x100u));
/* 7c45d6: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c45d8: jge 0x7c4762 */
  if ((sf == of)) goto L_7c4762;
L_7c45de: /* 7c45de: lea eax, [edi + 1] */
  eax = (uint32_t)(edi + 0x1u);
/* 7c45e1: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c45e3: jl 0x7c45e7 */
  if ((sf != of)) goto L_7c45e7;
L_7c45e5: /* 7c45e5: xor eax, eax */
  eax = 0;
L_7c45e7: /* 7c45e7: lea ebx, [edi + edi*2] */
  ebx = (uint32_t)(edi + edi*2);
/* 7c45ea: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 7c45ed: shl ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 7c45f0: fld dword ptr [ebp + ebx - 0xfc] */
  { double v = F32((uint32_t)(ebp + ebx + 0xffffff04u)); FPUSH(v); }
/* 7c45f7: lea eax, [ebp + ebx - 0xfc] */
  eax = (uint32_t)(ebp + ebx + 0xffffff04u);
/* 7c45fe: fsub dword ptr [ebp + edx*4 - 0xfc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + edx*4 + 0xffffff04u)));
/* 7c4605: lea edx, [ebp + edx*4 - 0xfc] */
  edx = (uint32_t)(ebp + edx*4 + 0xffffff04u);
/* 7c460c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7c460f: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 7c4615: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c4617: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c461a: je 0x7c461e */
  if (zf) goto L_7c461e;
L_7c461c: /* 7c461c: fchs  */
  ST0 = -ST0;
L_7c461e: /* 7c461e: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 7c4624: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c4626: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c4629: je 0x7c46e2 */
  if (zf) goto L_7c46e2;
L_7c462f: /* 7c462f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c4632: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7c4635: fsub dword ptr [edx + 4] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x4u)));
/* 7c4638: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 7c463e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c4640: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c4643: je 0x7c4647 */
  if (zf) goto L_7c4647;
L_7c4645: /* 7c4645: fchs  */
  ST0 = -ST0;
L_7c4647: /* 7c4647: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 7c464d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c464f: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c4652: je 0x7c46e2 */
  if (zf) goto L_7c46e2;
L_7c4658: /* 7c4658: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c465b: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7c465e: fsub dword ptr [edx + 8] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x8u)));
/* 7c4661: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 7c4667: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c4669: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c466c: je 0x7c4670 */
  if (zf) goto L_7c4670;
L_7c466e: /* 7c466e: fchs  */
  ST0 = -ST0;
L_7c4670: /* 7c4670: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 7c4676: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c4678: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c467b: je 0x7c46e2 */
  if (zf) goto L_7c46e2;
L_7c467d: /* 7c467d: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 7c467f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7c4680: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 7c4683: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7c4686: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c4687: lea edx, [edi + edi*2 + 0xf] */
  edx = (uint32_t)(edi + edi*2 + 0xfu);
/* 7c468b: lea eax, [esi + edx*4] */
  eax = (uint32_t)(esi + edx*4);
/* 7c468e: lea ecx, [edi + edi*2 + 0xc] */
  ecx = (uint32_t)(edi + edi*2 + 0xcu);
/* 7c4692: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c4693: lea edx, [esi + ecx*4] */
  edx = (uint32_t)(esi + ecx*4);
/* 7c4696: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c4697: call 0x6ca83f */
  esp -= 4; W32(esp, 0x7c469cu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 7c469c: mov eax, dword ptr [esi + 0x100] */
  eax = R32((uint32_t)(esi + 0x100u));
/* 7c46a2: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c46a5: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7c46a7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c46aa: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 7c46ab: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7c46ae: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7c46b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c46b2: lea ecx, [ebp + ebx - 0xf0] */
  ecx = (uint32_t)(ebp + ebx + 0xffffff10u);
/* 7c46b9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c46ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c46bb: call 0x6ca83f */
  esp -= 4; W32(esp, 0x7c46c0u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 7c46c0: mov ecx, dword ptr [esi + 0x100] */
  ecx = R32((uint32_t)(esi + 0x100u));
/* 7c46c6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c46c9: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7c46ca: mov eax, ecx */
  eax = ecx;
/* 7c46cc: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c46cf: mov dword ptr [esi + 0x100], ecx */
  W32((uint32_t)(esi + 0x100u), ecx);
/* 7c46d5: jl 0x7c459f */
  if ((sf != of)) goto L_7c459f;
L_7c46db: /* 7c46db: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
L_7c46dc: /* 7c46dc: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7c46dd: jmp 0x7c45d0 */
  goto L_7c45d0;
L_7c46e2: /* 7c46e2: xor ebx, ebx */
  ebx = 0;
L_7c46e4: /* 7c46e4: cmp ebx, dword ptr [esi + 0x100] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x100u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c46ea: jge 0x7c46dc */
  if ((sf == of)) goto L_7c46dc;
L_7c46ec: /* 7c46ec: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c46ee: je 0x7c475f */
  if (zf) goto L_7c475f;
L_7c46f0: /* 7c46f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c46f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c46f4: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 7c46f7: lea ecx, [ebp + eax*4 - 0xfc] */
  ecx = (uint32_t)(ebp + eax*4 + 0xffffff04u);
/* 7c46fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c4700: lea edx, [edi + edi*2 + 0xc] */
  edx = (uint32_t)(edi + edi*2 + 0xcu);
/* 7c4704: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c4705: lea eax, [esi + edx*4] */
  eax = (uint32_t)(esi + edx*4);
/* 7c4708: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c4709: mov ecx, esi */
  ecx = esi;
/* 7c470b: call 0x6cc108 */
  esp -= 4; W32(esp, 0x7c4710u); SPILL(); f_6cc108(); if (g_unwind) return; RELOAD();
/* 7c4710: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 7c4711: je 0x7c45a9 */
  if (zf) goto L_7c45a9;
L_7c4717: /* 7c4717: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 7c471a: jne 0x7c475f */
  if (!zf) goto L_7c475f;
L_7c471c: /* 7c471c: xor eax, eax */
  eax = 0;
/* 7c471e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c4721: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c4728: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c4729: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c472a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c472b: mov esp, ebp */
  esp = ebp;
/* 7c472d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c472e: ret  */
  esp += 4; SPILL(); return;
L_7c475f: /* 7c475f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7c4760: jmp 0x7c46e4 */
  goto L_7c46e4;
L_7c4762: /* 7c4762: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c4765: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c4766: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c4767: mov eax, 1 */
  eax = 0x1u;
/* 7c476c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c4773: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c4774: mov esp, ebp */
  esp = ebp;
/* 7c4776: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c4777: ret  */
  esp += 4; SPILL(); return;
}

void f_7c45bc(void) {
  LOAD_REGS();
  goto L_7c45bc;
L_7c44d0: /* 7c44d0: mov ecx, dword ptr [esi + 0x100] */
  ecx = R32((uint32_t)(esi + 0x100u));
/* 7c44d6: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c44d8: jge 0x7c45c5 */
  if ((sf == of)) goto L_7c45c5;
L_7c44de: /* 7c44de: lea eax, [edi - 1] */
  eax = (uint32_t)(edi + 0xffffffffu);
/* 7c44e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7c44e3: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 7c44e6: jge 0x7c44eb */
  if ((sf == of)) goto L_7c44eb;
L_7c44e8: /* 7c44e8: lea eax, [ecx - 1] */
  eax = (uint32_t)(ecx + 0xffffffffu);
L_7c44eb: /* 7c44eb: lea eax, [eax + eax*2 + 0xc] */
  eax = (uint32_t)(eax + eax*2 + 0xcu);
/* 7c44ef: lea eax, [esi + eax*4] */
  eax = (uint32_t)(esi + eax*4);
/* 7c44f2: lea ecx, [edi + edi*2 + 0xc] */
  ecx = (uint32_t)(edi + edi*2 + 0xcu);
/* 7c44f6: fld dword ptr [esi + ecx*4 + 8] */
  { double v = F32((uint32_t)(esi + ecx*4 + 0x8u)); FPUSH(v); }
/* 7c44fa: lea ebx, [esi + ecx*4] */
  ebx = (uint32_t)(esi + ecx*4);
/* 7c44fd: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 7c4500: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 7c4503: lea ecx, [ebp + ecx*4 - 0xfc] */
  ecx = (uint32_t)(ebp + ecx*4 + 0xffffff04u);
/* 7c450a: mov edx, ecx */
  edx = ecx;
/* 7c450c: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7c450f: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 7c4512: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7c4515: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7c4518: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 7c451a: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7c451c: fst dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0);
/* 7c451f: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 7c4522: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7c4525: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 7c4528: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7c452a: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7c452d: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 7c4530: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 7c4533: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 7c4536: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7c4538: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7c453b: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 7c453e: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7c4541: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 7c4544: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7c4546: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7c4549: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7c454c: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7c454e: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7c4551: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7c4554: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7c4557: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7c455a: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7c455d: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7c4560: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x7c4566u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 7c4566: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c4568: jne 0x7c45bf */
  if (!zf) goto L_7c45bf;
L_7c456a: /* 7c456a: mov eax, dword ptr [esi + 0x100] */
  eax = R32((uint32_t)(esi + 0x100u));
/* 7c4570: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7c4572: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 7c4573: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 7c4576: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7c4579: lea edx, [edi + edi*2 + 0xf] */
  edx = (uint32_t)(edi + edi*2 + 0xfu);
/* 7c457d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c457e: lea eax, [esi + edx*4] */
  eax = (uint32_t)(esi + edx*4);
/* 7c4581: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c4582: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c4583: call 0x6ca83f */
  esp -= 4; W32(esp, 0x7c4588u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 7c4588: mov ecx, dword ptr [esi + 0x100] */
  ecx = R32((uint32_t)(esi + 0x100u));
/* 7c458e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c4591: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7c4592: mov eax, ecx */
  eax = ecx;
/* 7c4594: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c4597: mov dword ptr [esi + 0x100], ecx */
  W32((uint32_t)(esi + 0x100u), ecx);
/* 7c459d: jge 0x7c45bc */
  if ((sf == of)) goto L_7c45bc;
L_7c459f: /* 7c459f: mov dword ptr [esi + 0x100], 0 */
  W32((uint32_t)(esi + 0x100u), 0x0u);
L_7c45a9: /* 7c45a9: xor eax, eax */
  eax = 0;
/* 7c45ab: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c45ae: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c45b5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c45b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c45b7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c45b8: mov esp, ebp */
  esp = ebp;
/* 7c45ba: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c45bb: ret  */
  esp += 4; SPILL(); return;
L_7c45bc: /* 7c45bc: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
L_7c45bf: /* 7c45bf: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7c45c0: jmp 0x7c44d0 */
  goto L_7c44d0;
L_7c45c5: /* 7c45c5: xor edi, edi */
  edi = 0;
/* 7c45c7: jmp 0x7c45d0 */
  goto L_7c45d0;
L_7c45d0: /* 7c45d0: mov ecx, dword ptr [esi + 0x100] */
  ecx = R32((uint32_t)(esi + 0x100u));
/* 7c45d6: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c45d8: jge 0x7c4762 */
  if ((sf == of)) goto L_7c4762;
L_7c45de: /* 7c45de: lea eax, [edi + 1] */
  eax = (uint32_t)(edi + 0x1u);
/* 7c45e1: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c45e3: jl 0x7c45e7 */
  if ((sf != of)) goto L_7c45e7;
L_7c45e5: /* 7c45e5: xor eax, eax */
  eax = 0;
L_7c45e7: /* 7c45e7: lea ebx, [edi + edi*2] */
  ebx = (uint32_t)(edi + edi*2);
/* 7c45ea: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 7c45ed: shl ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 7c45f0: fld dword ptr [ebp + ebx - 0xfc] */
  { double v = F32((uint32_t)(ebp + ebx + 0xffffff04u)); FPUSH(v); }
/* 7c45f7: lea eax, [ebp + ebx - 0xfc] */
  eax = (uint32_t)(ebp + ebx + 0xffffff04u);
/* 7c45fe: fsub dword ptr [ebp + edx*4 - 0xfc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + edx*4 + 0xffffff04u)));
/* 7c4605: lea edx, [ebp + edx*4 - 0xfc] */
  edx = (uint32_t)(ebp + edx*4 + 0xffffff04u);
/* 7c460c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7c460f: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 7c4615: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c4617: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c461a: je 0x7c461e */
  if (zf) goto L_7c461e;
L_7c461c: /* 7c461c: fchs  */
  ST0 = -ST0;
L_7c461e: /* 7c461e: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 7c4624: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c4626: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c4629: je 0x7c46e2 */
  if (zf) goto L_7c46e2;
L_7c462f: /* 7c462f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c4632: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7c4635: fsub dword ptr [edx + 4] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x4u)));
/* 7c4638: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 7c463e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c4640: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c4643: je 0x7c4647 */
  if (zf) goto L_7c4647;
L_7c4645: /* 7c4645: fchs  */
  ST0 = -ST0;
L_7c4647: /* 7c4647: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 7c464d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c464f: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c4652: je 0x7c46e2 */
  if (zf) goto L_7c46e2;
L_7c4658: /* 7c4658: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c465b: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7c465e: fsub dword ptr [edx + 8] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x8u)));
/* 7c4661: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 7c4667: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c4669: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c466c: je 0x7c4670 */
  if (zf) goto L_7c4670;
L_7c466e: /* 7c466e: fchs  */
  ST0 = -ST0;
L_7c4670: /* 7c4670: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 7c4676: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c4678: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c467b: je 0x7c46e2 */
  if (zf) goto L_7c46e2;
L_7c467d: /* 7c467d: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 7c467f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7c4680: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 7c4683: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7c4686: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c4687: lea edx, [edi + edi*2 + 0xf] */
  edx = (uint32_t)(edi + edi*2 + 0xfu);
/* 7c468b: lea eax, [esi + edx*4] */
  eax = (uint32_t)(esi + edx*4);
/* 7c468e: lea ecx, [edi + edi*2 + 0xc] */
  ecx = (uint32_t)(edi + edi*2 + 0xcu);
/* 7c4692: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c4693: lea edx, [esi + ecx*4] */
  edx = (uint32_t)(esi + ecx*4);
/* 7c4696: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c4697: call 0x6ca83f */
  esp -= 4; W32(esp, 0x7c469cu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 7c469c: mov eax, dword ptr [esi + 0x100] */
  eax = R32((uint32_t)(esi + 0x100u));
/* 7c46a2: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c46a5: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7c46a7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c46aa: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 7c46ab: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7c46ae: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7c46b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c46b2: lea ecx, [ebp + ebx - 0xf0] */
  ecx = (uint32_t)(ebp + ebx + 0xffffff10u);
/* 7c46b9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c46ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c46bb: call 0x6ca83f */
  esp -= 4; W32(esp, 0x7c46c0u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 7c46c0: mov ecx, dword ptr [esi + 0x100] */
  ecx = R32((uint32_t)(esi + 0x100u));
/* 7c46c6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c46c9: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7c46ca: mov eax, ecx */
  eax = ecx;
/* 7c46cc: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c46cf: mov dword ptr [esi + 0x100], ecx */
  W32((uint32_t)(esi + 0x100u), ecx);
/* 7c46d5: jl 0x7c459f */
  if ((sf != of)) goto L_7c459f;
L_7c46db: /* 7c46db: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
L_7c46dc: /* 7c46dc: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7c46dd: jmp 0x7c45d0 */
  goto L_7c45d0;
L_7c46e2: /* 7c46e2: xor ebx, ebx */
  ebx = 0;
L_7c46e4: /* 7c46e4: cmp ebx, dword ptr [esi + 0x100] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x100u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c46ea: jge 0x7c46dc */
  if ((sf == of)) goto L_7c46dc;
L_7c46ec: /* 7c46ec: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c46ee: je 0x7c475f */
  if (zf) goto L_7c475f;
L_7c46f0: /* 7c46f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c46f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c46f4: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 7c46f7: lea ecx, [ebp + eax*4 - 0xfc] */
  ecx = (uint32_t)(ebp + eax*4 + 0xffffff04u);
/* 7c46fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c4700: lea edx, [edi + edi*2 + 0xc] */
  edx = (uint32_t)(edi + edi*2 + 0xcu);
/* 7c4704: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c4705: lea eax, [esi + edx*4] */
  eax = (uint32_t)(esi + edx*4);
/* 7c4708: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c4709: mov ecx, esi */
  ecx = esi;
/* 7c470b: call 0x6cc108 */
  esp -= 4; W32(esp, 0x7c4710u); SPILL(); f_6cc108(); if (g_unwind) return; RELOAD();
/* 7c4710: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 7c4711: je 0x7c45a9 */
  if (zf) goto L_7c45a9;
L_7c4717: /* 7c4717: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 7c471a: jne 0x7c475f */
  if (!zf) goto L_7c475f;
L_7c471c: /* 7c471c: xor eax, eax */
  eax = 0;
/* 7c471e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c4721: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c4728: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c4729: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c472a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c472b: mov esp, ebp */
  esp = ebp;
/* 7c472d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c472e: ret  */
  esp += 4; SPILL(); return;
L_7c475f: /* 7c475f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7c4760: jmp 0x7c46e4 */
  goto L_7c46e4;
L_7c4762: /* 7c4762: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c4765: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c4766: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c4767: mov eax, 1 */
  eax = 0x1u;
/* 7c476c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c4773: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c4774: mov esp, ebp */
  esp = ebp;
/* 7c4776: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c4777: ret  */
  esp += 4; SPILL(); return;
}

void f_7c45c5(void) {
  LOAD_REGS();
  goto L_7c45c5;
L_7c459f: /* 7c459f: mov dword ptr [esi + 0x100], 0 */
  W32((uint32_t)(esi + 0x100u), 0x0u);
L_7c45a9: /* 7c45a9: xor eax, eax */
  eax = 0;
/* 7c45ab: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c45ae: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c45b5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c45b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c45b7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c45b8: mov esp, ebp */
  esp = ebp;
/* 7c45ba: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c45bb: ret  */
  esp += 4; SPILL(); return;
L_7c45c5: /* 7c45c5: xor edi, edi */
  edi = 0;
/* 7c45c7: jmp 0x7c45d0 */
  goto L_7c45d0;
L_7c45d0: /* 7c45d0: mov ecx, dword ptr [esi + 0x100] */
  ecx = R32((uint32_t)(esi + 0x100u));
/* 7c45d6: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c45d8: jge 0x7c4762 */
  if ((sf == of)) goto L_7c4762;
L_7c45de: /* 7c45de: lea eax, [edi + 1] */
  eax = (uint32_t)(edi + 0x1u);
/* 7c45e1: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c45e3: jl 0x7c45e7 */
  if ((sf != of)) goto L_7c45e7;
L_7c45e5: /* 7c45e5: xor eax, eax */
  eax = 0;
L_7c45e7: /* 7c45e7: lea ebx, [edi + edi*2] */
  ebx = (uint32_t)(edi + edi*2);
/* 7c45ea: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 7c45ed: shl ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 7c45f0: fld dword ptr [ebp + ebx - 0xfc] */
  { double v = F32((uint32_t)(ebp + ebx + 0xffffff04u)); FPUSH(v); }
/* 7c45f7: lea eax, [ebp + ebx - 0xfc] */
  eax = (uint32_t)(ebp + ebx + 0xffffff04u);
/* 7c45fe: fsub dword ptr [ebp + edx*4 - 0xfc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + edx*4 + 0xffffff04u)));
/* 7c4605: lea edx, [ebp + edx*4 - 0xfc] */
  edx = (uint32_t)(ebp + edx*4 + 0xffffff04u);
/* 7c460c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7c460f: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 7c4615: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c4617: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c461a: je 0x7c461e */
  if (zf) goto L_7c461e;
L_7c461c: /* 7c461c: fchs  */
  ST0 = -ST0;
L_7c461e: /* 7c461e: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 7c4624: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c4626: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c4629: je 0x7c46e2 */
  if (zf) goto L_7c46e2;
L_7c462f: /* 7c462f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c4632: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7c4635: fsub dword ptr [edx + 4] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x4u)));
/* 7c4638: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 7c463e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c4640: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c4643: je 0x7c4647 */
  if (zf) goto L_7c4647;
L_7c4645: /* 7c4645: fchs  */
  ST0 = -ST0;
L_7c4647: /* 7c4647: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 7c464d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c464f: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c4652: je 0x7c46e2 */
  if (zf) goto L_7c46e2;
L_7c4658: /* 7c4658: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c465b: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7c465e: fsub dword ptr [edx + 8] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x8u)));
/* 7c4661: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 7c4667: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c4669: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c466c: je 0x7c4670 */
  if (zf) goto L_7c4670;
L_7c466e: /* 7c466e: fchs  */
  ST0 = -ST0;
L_7c4670: /* 7c4670: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 7c4676: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c4678: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c467b: je 0x7c46e2 */
  if (zf) goto L_7c46e2;
L_7c467d: /* 7c467d: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 7c467f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7c4680: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 7c4683: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7c4686: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c4687: lea edx, [edi + edi*2 + 0xf] */
  edx = (uint32_t)(edi + edi*2 + 0xfu);
/* 7c468b: lea eax, [esi + edx*4] */
  eax = (uint32_t)(esi + edx*4);
/* 7c468e: lea ecx, [edi + edi*2 + 0xc] */
  ecx = (uint32_t)(edi + edi*2 + 0xcu);
/* 7c4692: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c4693: lea edx, [esi + ecx*4] */
  edx = (uint32_t)(esi + ecx*4);
/* 7c4696: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c4697: call 0x6ca83f */
  esp -= 4; W32(esp, 0x7c469cu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 7c469c: mov eax, dword ptr [esi + 0x100] */
  eax = R32((uint32_t)(esi + 0x100u));
/* 7c46a2: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c46a5: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7c46a7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c46aa: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 7c46ab: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7c46ae: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7c46b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c46b2: lea ecx, [ebp + ebx - 0xf0] */
  ecx = (uint32_t)(ebp + ebx + 0xffffff10u);
/* 7c46b9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c46ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c46bb: call 0x6ca83f */
  esp -= 4; W32(esp, 0x7c46c0u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 7c46c0: mov ecx, dword ptr [esi + 0x100] */
  ecx = R32((uint32_t)(esi + 0x100u));
/* 7c46c6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c46c9: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7c46ca: mov eax, ecx */
  eax = ecx;
/* 7c46cc: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c46cf: mov dword ptr [esi + 0x100], ecx */
  W32((uint32_t)(esi + 0x100u), ecx);
/* 7c46d5: jl 0x7c459f */
  if ((sf != of)) goto L_7c459f;
L_7c46db: /* 7c46db: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
L_7c46dc: /* 7c46dc: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7c46dd: jmp 0x7c45d0 */
  goto L_7c45d0;
L_7c46e2: /* 7c46e2: xor ebx, ebx */
  ebx = 0;
L_7c46e4: /* 7c46e4: cmp ebx, dword ptr [esi + 0x100] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x100u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c46ea: jge 0x7c46dc */
  if ((sf == of)) goto L_7c46dc;
L_7c46ec: /* 7c46ec: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c46ee: je 0x7c475f */
  if (zf) goto L_7c475f;
L_7c46f0: /* 7c46f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c46f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c46f4: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 7c46f7: lea ecx, [ebp + eax*4 - 0xfc] */
  ecx = (uint32_t)(ebp + eax*4 + 0xffffff04u);
/* 7c46fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c4700: lea edx, [edi + edi*2 + 0xc] */
  edx = (uint32_t)(edi + edi*2 + 0xcu);
/* 7c4704: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c4705: lea eax, [esi + edx*4] */
  eax = (uint32_t)(esi + edx*4);
/* 7c4708: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c4709: mov ecx, esi */
  ecx = esi;
/* 7c470b: call 0x6cc108 */
  esp -= 4; W32(esp, 0x7c4710u); SPILL(); f_6cc108(); if (g_unwind) return; RELOAD();
/* 7c4710: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 7c4711: je 0x7c45a9 */
  if (zf) goto L_7c45a9;
L_7c4717: /* 7c4717: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 7c471a: jne 0x7c475f */
  if (!zf) goto L_7c475f;
L_7c471c: /* 7c471c: xor eax, eax */
  eax = 0;
/* 7c471e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c4721: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c4728: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c4729: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c472a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c472b: mov esp, ebp */
  esp = ebp;
/* 7c472d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c472e: ret  */
  esp += 4; SPILL(); return;
L_7c475f: /* 7c475f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7c4760: jmp 0x7c46e4 */
  goto L_7c46e4;
L_7c4762: /* 7c4762: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c4765: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c4766: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c4767: mov eax, 1 */
  eax = 0x1u;
/* 7c476c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c4773: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c4774: mov esp, ebp */
  esp = ebp;
/* 7c4776: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c4777: ret  */
  esp += 4; SPILL(); return;
}

void f_7c45c9(void) {
  LOAD_REGS();
  goto L_7c45c9;
L_7c459f: /* 7c459f: mov dword ptr [esi + 0x100], 0 */
  W32((uint32_t)(esi + 0x100u), 0x0u);
L_7c45a9: /* 7c45a9: xor eax, eax */
  eax = 0;
/* 7c45ab: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c45ae: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c45b5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c45b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c45b7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c45b8: mov esp, ebp */
  esp = ebp;
/* 7c45ba: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c45bb: ret  */
  esp += 4; SPILL(); return;
L_7c45c9: /* 7c45c9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7c45d0: /* 7c45d0: mov ecx, dword ptr [esi + 0x100] */
  ecx = R32((uint32_t)(esi + 0x100u));
/* 7c45d6: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c45d8: jge 0x7c4762 */
  if ((sf == of)) goto L_7c4762;
L_7c45de: /* 7c45de: lea eax, [edi + 1] */
  eax = (uint32_t)(edi + 0x1u);
/* 7c45e1: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c45e3: jl 0x7c45e7 */
  if ((sf != of)) goto L_7c45e7;
L_7c45e5: /* 7c45e5: xor eax, eax */
  eax = 0;
L_7c45e7: /* 7c45e7: lea ebx, [edi + edi*2] */
  ebx = (uint32_t)(edi + edi*2);
/* 7c45ea: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 7c45ed: shl ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 7c45f0: fld dword ptr [ebp + ebx - 0xfc] */
  { double v = F32((uint32_t)(ebp + ebx + 0xffffff04u)); FPUSH(v); }
/* 7c45f7: lea eax, [ebp + ebx - 0xfc] */
  eax = (uint32_t)(ebp + ebx + 0xffffff04u);
/* 7c45fe: fsub dword ptr [ebp + edx*4 - 0xfc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + edx*4 + 0xffffff04u)));
/* 7c4605: lea edx, [ebp + edx*4 - 0xfc] */
  edx = (uint32_t)(ebp + edx*4 + 0xffffff04u);
/* 7c460c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7c460f: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 7c4615: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c4617: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c461a: je 0x7c461e */
  if (zf) goto L_7c461e;
L_7c461c: /* 7c461c: fchs  */
  ST0 = -ST0;
L_7c461e: /* 7c461e: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 7c4624: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c4626: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c4629: je 0x7c46e2 */
  if (zf) goto L_7c46e2;
L_7c462f: /* 7c462f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c4632: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7c4635: fsub dword ptr [edx + 4] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x4u)));
/* 7c4638: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 7c463e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c4640: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c4643: je 0x7c4647 */
  if (zf) goto L_7c4647;
L_7c4645: /* 7c4645: fchs  */
  ST0 = -ST0;
L_7c4647: /* 7c4647: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 7c464d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c464f: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c4652: je 0x7c46e2 */
  if (zf) goto L_7c46e2;
L_7c4658: /* 7c4658: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c465b: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7c465e: fsub dword ptr [edx + 8] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x8u)));
/* 7c4661: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 7c4667: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c4669: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c466c: je 0x7c4670 */
  if (zf) goto L_7c4670;
L_7c466e: /* 7c466e: fchs  */
  ST0 = -ST0;
L_7c4670: /* 7c4670: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 7c4676: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c4678: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c467b: je 0x7c46e2 */
  if (zf) goto L_7c46e2;
L_7c467d: /* 7c467d: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 7c467f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7c4680: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 7c4683: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7c4686: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c4687: lea edx, [edi + edi*2 + 0xf] */
  edx = (uint32_t)(edi + edi*2 + 0xfu);
/* 7c468b: lea eax, [esi + edx*4] */
  eax = (uint32_t)(esi + edx*4);
/* 7c468e: lea ecx, [edi + edi*2 + 0xc] */
  ecx = (uint32_t)(edi + edi*2 + 0xcu);
/* 7c4692: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c4693: lea edx, [esi + ecx*4] */
  edx = (uint32_t)(esi + ecx*4);
/* 7c4696: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c4697: call 0x6ca83f */
  esp -= 4; W32(esp, 0x7c469cu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 7c469c: mov eax, dword ptr [esi + 0x100] */
  eax = R32((uint32_t)(esi + 0x100u));
/* 7c46a2: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c46a5: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7c46a7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c46aa: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 7c46ab: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7c46ae: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7c46b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c46b2: lea ecx, [ebp + ebx - 0xf0] */
  ecx = (uint32_t)(ebp + ebx + 0xffffff10u);
/* 7c46b9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c46ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c46bb: call 0x6ca83f */
  esp -= 4; W32(esp, 0x7c46c0u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 7c46c0: mov ecx, dword ptr [esi + 0x100] */
  ecx = R32((uint32_t)(esi + 0x100u));
/* 7c46c6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c46c9: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7c46ca: mov eax, ecx */
  eax = ecx;
/* 7c46cc: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c46cf: mov dword ptr [esi + 0x100], ecx */
  W32((uint32_t)(esi + 0x100u), ecx);
/* 7c46d5: jl 0x7c459f */
  if ((sf != of)) goto L_7c459f;
L_7c46db: /* 7c46db: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
L_7c46dc: /* 7c46dc: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7c46dd: jmp 0x7c45d0 */
  goto L_7c45d0;
L_7c46e2: /* 7c46e2: xor ebx, ebx */
  ebx = 0;
L_7c46e4: /* 7c46e4: cmp ebx, dword ptr [esi + 0x100] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x100u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c46ea: jge 0x7c46dc */
  if ((sf == of)) goto L_7c46dc;
L_7c46ec: /* 7c46ec: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c46ee: je 0x7c475f */
  if (zf) goto L_7c475f;
L_7c46f0: /* 7c46f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c46f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c46f4: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 7c46f7: lea ecx, [ebp + eax*4 - 0xfc] */
  ecx = (uint32_t)(ebp + eax*4 + 0xffffff04u);
/* 7c46fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c4700: lea edx, [edi + edi*2 + 0xc] */
  edx = (uint32_t)(edi + edi*2 + 0xcu);
/* 7c4704: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c4705: lea eax, [esi + edx*4] */
  eax = (uint32_t)(esi + edx*4);
/* 7c4708: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c4709: mov ecx, esi */
  ecx = esi;
/* 7c470b: call 0x6cc108 */
  esp -= 4; W32(esp, 0x7c4710u); SPILL(); f_6cc108(); if (g_unwind) return; RELOAD();
/* 7c4710: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 7c4711: je 0x7c45a9 */
  if (zf) goto L_7c45a9;
L_7c4717: /* 7c4717: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 7c471a: jne 0x7c475f */
  if (!zf) goto L_7c475f;
L_7c471c: /* 7c471c: xor eax, eax */
  eax = 0;
/* 7c471e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c4721: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c4728: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c4729: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c472a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c472b: mov esp, ebp */
  esp = ebp;
/* 7c472d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c472e: ret  */
  esp += 4; SPILL(); return;
L_7c475f: /* 7c475f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7c4760: jmp 0x7c46e4 */
  goto L_7c46e4;
L_7c4762: /* 7c4762: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c4765: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c4766: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c4767: mov eax, 1 */
  eax = 0x1u;
/* 7c476c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c4773: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c4774: mov esp, ebp */
  esp = ebp;
/* 7c4776: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c4777: ret  */
  esp += 4; SPILL(); return;
}

void f_7c472f(void) {
  LOAD_REGS();
L_7c472f: /* 7c472f: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7c4732: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c4737: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 7c473a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c473b: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 7c473e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c4743u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c4743(); return;
}

void f_7c4743(void) {
  LOAD_REGS();
  goto L_7c4743;
L_7c459f: /* 7c459f: mov dword ptr [esi + 0x100], 0 */
  W32((uint32_t)(esi + 0x100u), 0x0u);
L_7c45a9: /* 7c45a9: xor eax, eax */
  eax = 0;
/* 7c45ab: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c45ae: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c45b5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c45b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c45b7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c45b8: mov esp, ebp */
  esp = ebp;
/* 7c45ba: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c45bb: ret  */
  esp += 4; SPILL(); return;
L_7c45d0: /* 7c45d0: mov ecx, dword ptr [esi + 0x100] */
  ecx = R32((uint32_t)(esi + 0x100u));
/* 7c45d6: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c45d8: jge 0x7c4762 */
  if ((sf == of)) goto L_7c4762;
L_7c45de: /* 7c45de: lea eax, [edi + 1] */
  eax = (uint32_t)(edi + 0x1u);
/* 7c45e1: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c45e3: jl 0x7c45e7 */
  if ((sf != of)) goto L_7c45e7;
L_7c45e5: /* 7c45e5: xor eax, eax */
  eax = 0;
L_7c45e7: /* 7c45e7: lea ebx, [edi + edi*2] */
  ebx = (uint32_t)(edi + edi*2);
/* 7c45ea: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 7c45ed: shl ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 7c45f0: fld dword ptr [ebp + ebx - 0xfc] */
  { double v = F32((uint32_t)(ebp + ebx + 0xffffff04u)); FPUSH(v); }
/* 7c45f7: lea eax, [ebp + ebx - 0xfc] */
  eax = (uint32_t)(ebp + ebx + 0xffffff04u);
/* 7c45fe: fsub dword ptr [ebp + edx*4 - 0xfc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + edx*4 + 0xffffff04u)));
/* 7c4605: lea edx, [ebp + edx*4 - 0xfc] */
  edx = (uint32_t)(ebp + edx*4 + 0xffffff04u);
/* 7c460c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7c460f: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 7c4615: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c4617: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c461a: je 0x7c461e */
  if (zf) goto L_7c461e;
L_7c461c: /* 7c461c: fchs  */
  ST0 = -ST0;
L_7c461e: /* 7c461e: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 7c4624: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c4626: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c4629: je 0x7c46e2 */
  if (zf) goto L_7c46e2;
L_7c462f: /* 7c462f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c4632: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7c4635: fsub dword ptr [edx + 4] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x4u)));
/* 7c4638: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 7c463e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c4640: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c4643: je 0x7c4647 */
  if (zf) goto L_7c4647;
L_7c4645: /* 7c4645: fchs  */
  ST0 = -ST0;
L_7c4647: /* 7c4647: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 7c464d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c464f: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c4652: je 0x7c46e2 */
  if (zf) goto L_7c46e2;
L_7c4658: /* 7c4658: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c465b: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7c465e: fsub dword ptr [edx + 8] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x8u)));
/* 7c4661: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 7c4667: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c4669: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c466c: je 0x7c4670 */
  if (zf) goto L_7c4670;
L_7c466e: /* 7c466e: fchs  */
  ST0 = -ST0;
L_7c4670: /* 7c4670: fcomp dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
  FPOP();
/* 7c4676: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c4678: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c467b: je 0x7c46e2 */
  if (zf) goto L_7c46e2;
L_7c467d: /* 7c467d: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 7c467f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7c4680: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 7c4683: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7c4686: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c4687: lea edx, [edi + edi*2 + 0xf] */
  edx = (uint32_t)(edi + edi*2 + 0xfu);
/* 7c468b: lea eax, [esi + edx*4] */
  eax = (uint32_t)(esi + edx*4);
/* 7c468e: lea ecx, [edi + edi*2 + 0xc] */
  ecx = (uint32_t)(edi + edi*2 + 0xcu);
/* 7c4692: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c4693: lea edx, [esi + ecx*4] */
  edx = (uint32_t)(esi + ecx*4);
/* 7c4696: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c4697: call 0x6ca83f */
  esp -= 4; W32(esp, 0x7c469cu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 7c469c: mov eax, dword ptr [esi + 0x100] */
  eax = R32((uint32_t)(esi + 0x100u));
/* 7c46a2: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c46a5: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7c46a7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c46aa: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 7c46ab: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7c46ae: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7c46b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c46b2: lea ecx, [ebp + ebx - 0xf0] */
  ecx = (uint32_t)(ebp + ebx + 0xffffff10u);
/* 7c46b9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c46ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c46bb: call 0x6ca83f */
  esp -= 4; W32(esp, 0x7c46c0u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 7c46c0: mov ecx, dword ptr [esi + 0x100] */
  ecx = R32((uint32_t)(esi + 0x100u));
/* 7c46c6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c46c9: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7c46ca: mov eax, ecx */
  eax = ecx;
/* 7c46cc: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c46cf: mov dword ptr [esi + 0x100], ecx */
  W32((uint32_t)(esi + 0x100u), ecx);
/* 7c46d5: jl 0x7c459f */
  if ((sf != of)) goto L_7c459f;
L_7c46db: /* 7c46db: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
L_7c46dc: /* 7c46dc: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7c46dd: jmp 0x7c45d0 */
  goto L_7c45d0;
L_7c46e2: /* 7c46e2: xor ebx, ebx */
  ebx = 0;
L_7c46e4: /* 7c46e4: cmp ebx, dword ptr [esi + 0x100] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x100u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c46ea: jge 0x7c46dc */
  if ((sf == of)) goto L_7c46dc;
L_7c46ec: /* 7c46ec: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c46ee: je 0x7c475f */
  if (zf) goto L_7c475f;
L_7c46f0: /* 7c46f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c46f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c46f4: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 7c46f7: lea ecx, [ebp + eax*4 - 0xfc] */
  ecx = (uint32_t)(ebp + eax*4 + 0xffffff04u);
/* 7c46fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c4700: lea edx, [edi + edi*2 + 0xc] */
  edx = (uint32_t)(edi + edi*2 + 0xcu);
/* 7c4704: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c4705: lea eax, [esi + edx*4] */
  eax = (uint32_t)(esi + edx*4);
/* 7c4708: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c4709: mov ecx, esi */
  ecx = esi;
/* 7c470b: call 0x6cc108 */
  esp -= 4; W32(esp, 0x7c4710u); SPILL(); f_6cc108(); if (g_unwind) return; RELOAD();
/* 7c4710: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 7c4711: je 0x7c45a9 */
  if (zf) goto L_7c45a9;
L_7c4717: /* 7c4717: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 7c471a: jne 0x7c475f */
  if (!zf) goto L_7c475f;
L_7c471c: /* 7c471c: xor eax, eax */
  eax = 0;
/* 7c471e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c4721: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c4728: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c4729: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c472a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c472b: mov esp, ebp */
  esp = ebp;
/* 7c472d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c472e: ret  */
  esp += 4; SPILL(); return;
L_7c4743: /* 7c4743: push 0xa0e234 */
  { uint32_t v = 0xa0e234u; esp -= 4; W32(esp, v); }
/* 7c4748: push 0xad3f94 */
  { uint32_t v = 0xad3f94u; esp -= 4; W32(esp, v); }
/* 7c474d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c4753u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c4753: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c4756: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c4758: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c475a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c475fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c475f: /* 7c475f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7c4760: jmp 0x7c46e4 */
  goto L_7c46e4;
L_7c4762: /* 7c4762: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c4765: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c4766: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c4767: mov eax, 1 */
  eax = 0x1u;
/* 7c476c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c4773: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c4774: mov esp, ebp */
  esp = ebp;
/* 7c4776: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c4777: ret  */
  esp += 4; SPILL(); return;
}

void f_7c4850(void) {
  LOAD_REGS();
L_7c4850: /* 7c4850: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c4851: mov ebp, esp */
  ebp = esp;
/* 7c4853: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c4855: push 0x9cf860 */
  { uint32_t v = 0x9cf860u; esp -= 4; W32(esp, v); }
/* 7c485a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c4860: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c4861: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c4868: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c486b: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 7c486e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c486f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c4870: mov esi, ecx */
  esi = ecx;
/* 7c4872: fsub dword ptr [esi + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x38u)));
/* 7c4875: lea edx, [esi + 0x30] */
  edx = (uint32_t)(esi + 0x30u);
/* 7c4878: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 7c487b: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 7c487e: fsub dword ptr [edx + 4] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x4u)));
/* 7c4881: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c4882: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7c4885: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c4888: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 7c488a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c4891: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c4893: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 7c4896: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 7c4898: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 7c489b: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 7c489d: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 7c489f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c48a1: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 7c48a4: fsub dword ptr [edx + 8] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x8u)));
/* 7c48a7: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 7c48aa: fsub dword ptr [edx + 4] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x4u)));
/* 7c48ad: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7c48b0: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 7c48b2: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c48b4: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 7c48b7: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 7c48b9: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 7c48bc: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 7c48be: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 7c48c0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c48c2: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7c48c5: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 7c48cb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c48cd: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7c48d0: jp 0x7c48e6 */
  if (pf) goto L_7c48e6;
L_7c48d2: /* 7c48d2: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7c48d5: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7c48db: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c48dd: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7c48e0: jnp 0x7c4987 */
  if (!pf) goto L_7c4987;
L_7c48e6: /* 7c48e6: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7c48ec: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c48ee: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c48f1: jne 0x7c4907 */
  if (!zf) goto L_7c4907;
L_7c48f3: /* 7c48f3: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7c48f6: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7c48fc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c48fe: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c4901: je 0x7c4989 */
  if (zf) goto L_7c4989;
L_7c4907: /* 7c4907: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c4908: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c4909: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 7c490c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c490d: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 7c4910: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c4911: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 7c4914: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c4915: call 0x6c504c */
  esp -= 4; W32(esp, 0x7c491au); SPILL(); f_6c504c(); if (g_unwind) return; RELOAD();
/* 7c491a: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 7c491d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c4920: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c4922: je 0x7c4935 */
  if (zf) goto L_7c4935;
L_7c4924: /* 7c4924: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7c4927: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7c492a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7c492c: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7c492f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7c4932: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_7c4935: /* 7c4935: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7c4938: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c4939: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7c493c: call dword ptr [0xcfa5e0] */
  esp -= 4; W32(esp, 0x7c4942u); SPILL(); f_4e2e87(); if (g_unwind) return; /* Core!??8FVector@@QBEHABV0@@Z */ RELOAD();
/* 7c4942: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c4944: jne 0x7c4989 */
  if (!zf) goto L_7c4989;
L_7c4946: /* 7c4946: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 7c4949: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c494a: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7c494d: call dword ptr [0xcfa5e0] */
  esp -= 4; W32(esp, 0x7c4953u); SPILL(); f_4e2e87(); if (g_unwind) return; /* Core!??8FVector@@QBEHABV0@@Z */ RELOAD();
/* 7c4953: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c4955: jne 0x7c4989 */
  if (!zf) goto L_7c4989;
L_7c4957: /* 7c4957: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7c495a: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7c495d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c4960: mov ecx, esp */
  ecx = esp;
/* 7c4962: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7c4964: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7c4967: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7c496a: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7c496d: mov ecx, esi */
  ecx = esi;
/* 7c496f: call 0x6c169f */
  esp -= 4; W32(esp, 0x7c4974u); SPILL(); f_6c169f(); if (g_unwind) return; RELOAD();
/* 7c4974: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c4977: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c497e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c497f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c4980: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c4981: mov esp, ebp */
  esp = ebp;
/* 7c4983: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c4984: ret 0x1c */
  esp += 32; SPILL(); return;
L_7c4987: /* 7c4987: fstp st(0) */
  STI(0) = ST0; FPOP();
L_7c4989: /* 7c4989: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c498c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c498d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c498e: xor eax, eax */
  eax = 0;
/* 7c4990: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c4997: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c4998: mov esp, ebp */
  esp = ebp;
/* 7c499a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c499b: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_7c499e(void) {
  LOAD_REGS();
L_7c499e: /* 7c499e: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7c49a1: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c49a6: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7c49a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c49aa: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7c49ad: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c49b2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c49b2(); return;
}

void f_7c49b2(void) {
  LOAD_REGS();
L_7c49b2: /* 7c49b2: push 0xa0e26c */
  { uint32_t v = 0xa0e26cu; esp -= 4; W32(esp, v); }
/* 7c49b7: push 0xad3f9c */
  { uint32_t v = 0xad3f9cu; esp -= 4; W32(esp, v); }
/* 7c49bc: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c49c2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c49c2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c49c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c49c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c49c9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c49ceu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c49ce: guest_badaddr(0x7c49ce); return;
}

void f_7c4a30(void) {
  LOAD_REGS();
L_7c4a30: /* 7c4a30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c4a31: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c4a32: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 7c4a36: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c4a37: mov esi, ecx */
  esi = ecx;
/* 7c4a39: call 0x6c5d58 */
  esp -= 4; W32(esp, 0x7c4a3eu); SPILL(); f_6c5d58(); if (g_unwind) return; RELOAD();
/* 7c4a3e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c4a40: je 0x7c4a49 */
  if (zf) goto L_7c4a49;
L_7c4a42: /* 7c4a42: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c4a43: xor eax, eax */
  eax = 0;
/* 7c4a45: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c4a46: ret 4 */
  esp += 8; SPILL(); return;
L_7c4a49: /* 7c4a49: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c4a4a: mov ebx, dword ptr [edi + 0x100] */
  ebx = R32((uint32_t)(edi + 0x100u));
/* 7c4a50: xor edx, edx */
  edx = 0;
/* 7c4a52: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7c4a54: jle 0x7c4a96 */
  if ((zf || sf != of)) goto L_7c4a96;
L_7c4a56: /* 7c4a56: lea ecx, [edi + 0x38] */
  ecx = (uint32_t)(edi + 0x38u);
/* 7c4a59: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7c4a60: /* 7c4a60: fld dword ptr [ecx - 8] */
  { double v = F32((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 7c4a63: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 7c4a65: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 7c4a68: fsub dword ptr [esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4u)));
/* 7c4a6b: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 7c4a6d: fsub dword ptr [esi + 8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x8u)));
/* 7c4a70: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 7c4a73: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c4a75: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 7c4a78: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c4a7a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c4a7c: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 7c4a7f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c4a81: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7c4a87: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c4a89: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7c4a8c: jp 0x7c4a9e */
  if (pf) goto L_7c4a9e;
L_7c4a8e: /* 7c4a8e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7c4a8f: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7c4a92: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c4a94: jl 0x7c4a60 */
  if ((sf != of)) goto L_7c4a60;
L_7c4a96: /* 7c4a96: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c4a97: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c4a98: xor eax, eax */
  eax = 0;
/* 7c4a9a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c4a9b: ret 4 */
  esp += 8; SPILL(); return;
L_7c4a9e: /* 7c4a9e: mov ebx, dword ptr [esi + 0x100] */
  ebx = R32((uint32_t)(esi + 0x100u));
/* 7c4aa4: xor edx, edx */
  edx = 0;
/* 7c4aa6: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7c4aa8: jle 0x7c4a96 */
  if ((zf || sf != of)) goto L_7c4a96;
L_7c4aaa: /* 7c4aaa: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 7c4aad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7c4ab0: /* 7c4ab0: fld dword ptr [ecx - 8] */
  { double v = F32((uint32_t)(ecx + 0xfffffff8u)); FPUSH(v); }
/* 7c4ab3: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 7c4ab5: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 7c4ab8: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 7c4abb: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 7c4abd: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 7c4ac0: fmul dword ptr [edi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x14u)));
/* 7c4ac3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c4ac5: fmul dword ptr [edi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x10u)));
/* 7c4ac8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c4aca: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c4acc: fmul dword ptr [edi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xcu)));
/* 7c4acf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c4ad1: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7c4ad7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7c4ad9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7c4adc: jnp 0x7c4aee */
  if (!pf) goto L_7c4aee;
L_7c4ade: /* 7c4ade: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7c4adf: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7c4ae2: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c4ae4: jl 0x7c4ab0 */
  if ((sf != of)) goto L_7c4ab0;
L_7c4ae6: /* 7c4ae6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c4ae7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c4ae8: xor eax, eax */
  eax = 0;
/* 7c4aea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c4aeb: ret 4 */
  esp += 8; SPILL(); return;
L_7c4aee: /* 7c4aee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c4aef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c4af0: mov eax, 1 */
  eax = 0x1u;
/* 7c4af5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c4af6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7c4b40(void) {
  LOAD_REGS();
L_7c4b40: /* 7c4b40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c4b41: mov ebp, esp */
  ebp = esp;
/* 7c4b43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c4b45: push 0x9cf878 */
  { uint32_t v = 0x9cf878u; esp -= 4; W32(esp, v); }
/* 7c4b4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c4b50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c4b51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c4b58: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c4b5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c4b5c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7c4b5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c4b60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c4b61: mov edi, ecx */
  edi = ecx;
/* 7c4b63: mov eax, dword ptr [edi + 0x100] */
  eax = R32((uint32_t)(edi + 0x100u));
/* 7c4b69: xor esi, esi */
  esi = 0;
/* 7c4b6b: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c4b6d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c4b70: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7c4b73: jle 0x7c4b8d */
  if ((zf || sf != of)) goto L_7c4b8d;
L_7c4b75: /* 7c4b75: push 0x25e */
  { uint32_t v = 0x25eu; esp -= 4; W32(esp, v); }
/* 7c4b7a: push 0xad3fac */
  { uint32_t v = 0xad3facu; esp -= 4; W32(esp, v); }
/* 7c4b7f: push 0xad3fb8 */
  { uint32_t v = 0xad3fb8u; esp -= 4; W32(esp, v); }
/* 7c4b84: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7c4b8au); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7c4b8a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7c4b8d: /* 7c4b8d: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7c4b90: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7c4b96u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7c4b96: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7c4b9a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7c4ba0: /* 7c4ba0: cmp esi, dword ptr [edi + 0x100] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x100u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c4ba6: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7c4ba8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7c4baa: jge 0x7c4bdc */
  if ((sf == of)) goto L_7c4bdc;
L_7c4bac: /* 7c4bac: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7c4baf: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7c4bb5u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7c4bb5: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7c4bb8: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7c4bbb: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7c4bbe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c4bc0: je 0x7c4bd9 */
  if (zf) goto L_7c4bd9;
L_7c4bc2: /* 7c4bc2: lea edx, [esi + esi*2 + 0xc] */
  edx = (uint32_t)(esi + esi*2 + 0xcu);
/* 7c4bc6: lea ecx, [edi + edx*4] */
  ecx = (uint32_t)(edi + edx*4);
/* 7c4bc9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c4bcb: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7c4bcd: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7c4bd0: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7c4bd3: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7c4bd6: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_7c4bd9: /* 7c4bd9: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7c4bda: jmp 0x7c4ba0 */
  goto L_7c4ba0;
L_7c4bdc: /* 7c4bdc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c4bdd: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7c4be0: call dword ptr [0xcfa388] */
  esp -= 4; W32(esp, 0x7c4be6u); SPILL(); f_4e1a2d(); if (g_unwind) return; /* Core!?Insert@FArray@@QAEXHHH@Z */ RELOAD();
/* 7c4be6: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7c4be9: lea edx, [ebx + ebx*2] */
  edx = (uint32_t)(ebx + ebx*2);
/* 7c4bec: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 7c4bef: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7c4bf2: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7c4bf5: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7c4bf7: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7c4bfa: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7c4bfd: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7c4c00: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7c4c03: xor eax, eax */
  eax = 0;
L_7c4c05: /* 7c4c05: cmp eax, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c4c08: jge 0x7c4c2a */
  if ((sf == of)) goto L_7c4c2a;
L_7c4c0a: /* 7c4c0a: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 7c4c0d: lea edx, [ecx + edx*4] */
  edx = (uint32_t)(ecx + edx*4);
/* 7c4c10: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 7c4c12: lea esi, [eax + eax*2 + 0xc] */
  esi = (uint32_t)(eax + eax*2 + 0xcu);
/* 7c4c16: lea esi, [edi + esi*4] */
  esi = (uint32_t)(edi + esi*4);
/* 7c4c19: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 7c4c1b: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 7c4c1e: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 7c4c21: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7c4c24: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 7c4c27: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7c4c28: jmp 0x7c4c05 */
  goto L_7c4c05;
L_7c4c2a: /* 7c4c2a: mov eax, dword ptr [edi + 0x100] */
  eax = R32((uint32_t)(edi + 0x100u));
/* 7c4c30: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7c4c31: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7c4c34: mov dword ptr [edi + 0x100], eax */
  W32((uint32_t)(edi + 0x100u), eax);
/* 7c4c3a: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c4c3e: call 0x6c9543 */
  esp -= 4; W32(esp, 0x7c4c43u); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 7c4c43: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c4c46: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c4c47: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c4c48: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c4c4f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c4c50: mov esp, ebp */
  esp = ebp;
/* 7c4c52: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c4c53: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7c4c56(void) {
  LOAD_REGS();
L_7c4c56: /* 7c4c56: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c4c59: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c4c5e: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7c4c61: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c4c62: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7c4c65: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c4c6au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c4c6a(); return;
}

void f_7c4c6a(void) {
  LOAD_REGS();
L_7c4c6a: /* 7c4c6a: push 0xa0e2a8 */
  { uint32_t v = 0xa0e2a8u; esp -= 4; W32(esp, v); }
/* 7c4c6f: push 0xad3fd0 */
  { uint32_t v = 0xad3fd0u; esp -= 4; W32(esp, v); }
/* 7c4c74: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c4c7au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c4c7a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c4c7d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c4c7f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c4c81: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c4c86u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c4c86: guest_badaddr(0x7c4c86); return;
}

void f_7c4cf0(void) {
  LOAD_REGS();
L_7c4cf0: /* 7c4cf0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c4cf1: mov ebp, esp */
  ebp = esp;
/* 7c4cf3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c4cf5: push 0x9cf890 */
  { uint32_t v = 0x9cf890u; esp -= 4; W32(esp, v); }
/* 7c4cfa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c4d00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c4d01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c4d08: sub esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c4d0e: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 7c4d11: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c4d12: fadd dword ptr [ebp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x18u)));
/* 7c4d15: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c4d16: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 7c4d19: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c4d1a: fadd dword ptr [ebp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x14u)));
/* 7c4d1d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c4d20: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 7c4d23: mov esi, ecx */
  esi = ecx;
/* 7c4d25: fadd dword ptr [ebp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x10u)));
/* 7c4d28: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 7c4d2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c4d2c: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 7c4d2f: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7c4d32: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c4d33: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7c4d36: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7c4d39: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c4d40: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7c4d43: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 7c4d46: fsub dword ptr [ebp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x24u)));
/* 7c4d49: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 7c4d4c: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 7c4d4f: fsub dword ptr [ebp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x20u)));
/* 7c4d52: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 7c4d55: fsub dword ptr [ebp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x1cu)));
/* 7c4d58: fstp dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0); FPOP();
/* 7c4d5b: fstp dword ptr [ebp + 0x20] */
  WF32((uint32_t)(ebp + 0x20u), ST0); FPOP();
/* 7c4d5e: fstp dword ptr [ebp + 0x24] */
  WF32((uint32_t)(ebp + 0x24u), ST0); FPOP();
/* 7c4d61: call dword ptr [0xcfa530] */
  esp -= 4; W32(esp, 0x7c4d67u); SPILL(); f_4e310c(); if (g_unwind) return; /* Core!??0FBox@@QAE@ABVFVector@@0@Z */ RELOAD();
/* 7c4d67: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7c4d6a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c4d6c: lea eax, [ebp - 0x90] */
  eax = (uint32_t)(ebp + 0xffffff70u);
/* 7c4d72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c4d73: call dword ptr [edx + 0xb0] */
  { uint32_t t = R32((uint32_t)(edx + 0xb0u)); esp -= 4; W32(esp, 0x7c4d79u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c4d79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c4d7a: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 7c4d7d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c4d7e: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 7c4d81: call dword ptr [0xcfa890] */
  esp -= 4; W32(esp, 0x7c4d87u); SPILL(); f_4e3ea9(); if (g_unwind) return; /* Core!?TransformBy@FBox@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 7c4d87: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* 7c4d8a: lea edx, [ebp - 0x60] */
  edx = (uint32_t)(ebp + 0xffffffa0u);
/* 7c4d8d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c4d8e: add ecx, 0x3fc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7c4d94: call dword ptr [0xcfa88c] */
  esp -= 4; W32(esp, 0x7c4d9au); SPILL(); f_4e21d5(); if (g_unwind) return; /* Core!?Intersect@FBox@@QBE_NABV1@@Z */ RELOAD();
/* 7c4d9a: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c4d9c: je 0x7c4e0b */
  if (zf) goto L_7c4e0b;
L_7c4d9e: /* 7c4d9e: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* 7c4da1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7c4da4: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7c4da7: lea edx, [eax + 0x14] */
  edx = (uint32_t)(eax + 0x14u);
/* 7c4daa: mov dword ptr [ebp + 0x1c], 0 */
  W32((uint32_t)(ebp + 0x1cu), 0x0u);
/* 7c4db1: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 7c4db4: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7c4db6: mov dword ptr [ebp + 0x20], 0 */
  W32((uint32_t)(ebp + 0x20u), 0x0u);
/* 7c4dbd: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 7c4dc0: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7c4dc3: mov dword ptr [ebp + 0x24], 0x3f800000 */
  W32((uint32_t)(ebp + 0x24u), 0x3f800000u);
/* 7c4dca: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 7c4dcd: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7c4dd0: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 7c4dd3: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7c4dd6: mov dword ptr [ebp + 0x1c], edx */
  W32((uint32_t)(ebp + 0x1cu), edx);
/* 7c4dd9: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c4ddc: mov dword ptr [ebp + 0x20], ecx */
  W32((uint32_t)(ebp + 0x20u), ecx);
/* 7c4ddf: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 7c4de2: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c4de5: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7c4de7: mov dword ptr [ebp + 0x24], edx */
  W32((uint32_t)(ebp + 0x24u), edx);
/* 7c4dea: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 7c4ded: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 7c4df0: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7c4df3: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7c4df6: xor eax, eax */
  eax = 0;
/* 7c4df8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c4dfb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c4e02: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c4e03: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c4e04: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c4e05: mov esp, ebp */
  esp = ebp;
/* 7c4e07: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c4e08: ret 0x24 */
  esp += 40; SPILL(); return;
L_7c4e0b: /* 7c4e0b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c4e0e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c4e0f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c4e10: mov eax, 1 */
  eax = 0x1u;
/* 7c4e15: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c4e1c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c4e1d: mov esp, ebp */
  esp = ebp;
/* 7c4e1f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c4e20: ret 0x24 */
  esp += 40; SPILL(); return;
}

void f_7c4e23(void) {
  LOAD_REGS();
L_7c4e23: /* 7c4e23: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7c4e26: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c4e2b: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7c4e2e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c4e2f: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7c4e32: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c4e37u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c4e37(); return;
}

void f_7c4e37(void) {
  LOAD_REGS();
L_7c4e37: /* 7c4e37: push 0xa0e2e8 */
  { uint32_t v = 0xa0e2e8u; esp -= 4; W32(esp, v); }
/* 7c4e3c: push 0xad4344 */
  { uint32_t v = 0xad4344u; esp -= 4; W32(esp, v); }
/* 7c4e41: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c4e47u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c4e47: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c4e4a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c4e4c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c4e4e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c4e53u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c4e53: guest_badaddr(0x7c4e53); return;
}

void f_7c4ec0(void) {
  LOAD_REGS();
L_7c4ec0: /* 7c4ec0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7c4ec4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c4ec5: mov esi, dword ptr [ecx + 0x54] */
  esi = R32((uint32_t)(ecx + 0x54u));
/* 7c4ec8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c4ec9: add esi, 0x3fc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3fcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7c4ecf: mov ecx, 7 */
  ecx = 0x7u;
/* 7c4ed4: mov edi, eax */
  edi = eax;
/* 7c4ed6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7c4ed8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c4ed9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c4eda: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7c4ef0(void) {
  LOAD_REGS();
L_7c4ef0: /* 7c4ef0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c4ef1: mov ebp, esp */
  ebp = esp;
/* 7c4ef3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c4ef5: push 0x9cf8a0 */
  { uint32_t v = 0x9cf8a0u; esp -= 4; W32(esp, v); }
/* 7c4efa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c4f00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c4f01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c4f08: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c4f0b: mov ecx, dword ptr [ecx + 0x54] */
  ecx = R32((uint32_t)(ecx + 0x54u));
/* 7c4f0e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c4f0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c4f10: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c4f11: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c4f14: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c4f16: add ecx, 0x3fc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7c4f1c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c4f23: call dword ptr [0xcfa894] */
  esp -= 4; W32(esp, 0x7c4f29u); SPILL(); f_4e44f8(); if (g_unwind) return; /* Core!?GetExtrema@FBox@@QAEAAVFVector@@H@Z */ RELOAD();
/* 7c4f29: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7c4f2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c4f2c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7c4f2f: call dword ptr [0xcfa55c] */
  esp -= 4; W32(esp, 0x7c4f35u); SPILL(); f_4e34c2(); if (g_unwind) return; /* Core!??0FSphere@@QAE@PBVFVector@@H@Z */ RELOAD();
/* 7c4f35: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7c4f38: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 7c4f3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c4f3c: mov ecx, esi */
  ecx = esi;
/* 7c4f3e: call dword ptr [0xcfa268] */
  esp -= 4; W32(esp, 0x7c4f44u); SPILL(); f_4e1dac(); if (g_unwind) return; /* Core!??0FSphere@@QAE@ABV0@@Z */ RELOAD();
/* 7c4f44: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c4f47: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c4f48: mov eax, esi */
  eax = esi;
/* 7c4f4a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c4f4b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c4f52: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c4f53: mov esp, ebp */
  esp = ebp;
/* 7c4f55: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c4f56: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7c4f59(void) {
  LOAD_REGS();
L_7c4f59: /* 7c4f59: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c4f5c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c4f61: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7c4f64: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c4f65: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7c4f68: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c4f6du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c4f6d(); return;
}

void f_7c4f6d(void) {
  LOAD_REGS();
L_7c4f6d: /* 7c4f6d: push 0xa0e340 */
  { uint32_t v = 0xa0e340u; esp -= 4; W32(esp, v); }
/* 7c4f72: push 0xad4354 */
  { uint32_t v = 0xad4354u; esp -= 4; W32(esp, v); }
/* 7c4f77: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c4f7du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c4f7d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c4f80: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c4f82: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c4f84: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c4f89u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c4f89: guest_badaddr(0x7c4f89); return;
}

void f_7c4fc0(void) {
  LOAD_REGS();
L_7c4fc0: /* 7c4fc0: xor eax, eax */
  eax = 0;
/* 7c4fc2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7c4fe0(void) {
  LOAD_REGS();
L_7c4fe0: /* 7c4fe0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c4fe1: mov ebp, esp */
  ebp = esp;
/* 7c4fe3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c4fe5: push 0x9cf8b0 */
  { uint32_t v = 0x9cf8b0u; esp -= 4; W32(esp, v); }
/* 7c4fea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c4ff0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c4ff1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c4ff8: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c4ffb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c4ffc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c4ffd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c4ffe: mov esi, ecx */
  esi = ecx;
/* 7c5000: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7c5003: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7c5005: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 7c5008: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c500b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c500c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c5013: call dword ptr [eax + 0xb4] */
  { uint32_t t = R32((uint32_t)(eax + 0xb4u)); esp -= 4; W32(esp, 0x7c5019u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c5019: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* 7c501c: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 7c501f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c5020: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c5021: add ecx, 0x3fc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7c5027: call dword ptr [0xcfa890] */
  esp -= 4; W32(esp, 0x7c502du); SPILL(); f_4e3ea9(); if (g_unwind) return; /* Core!?TransformBy@FBox@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 7c502d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c5030: mov eax, edi */
  eax = edi;
/* 7c5032: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c5033: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c5034: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c503b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c503c: mov esp, ebp */
  esp = ebp;
/* 7c503e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c503f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7c5042(void) {
  LOAD_REGS();
L_7c5042: /* 7c5042: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c5045: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c504a: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7c504d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c504e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7c5051: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c5056u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c5056(); return;
}

void f_7c5056(void) {
  LOAD_REGS();
L_7c5056: /* 7c5056: push 0xa0e3b0 */
  { uint32_t v = 0xa0e3b0u; esp -= 4; W32(esp, v); }
/* 7c505b: push 0xad435c */
  { uint32_t v = 0xad435cu; esp -= 4; W32(esp, v); }
/* 7c5060: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c5066u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c5066: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c5069: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c506b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c506d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c5072u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c5072: guest_badaddr(0x7c5072); return;
}

void f_7c50b0(void) {
  LOAD_REGS();
L_7c50b0: /* 7c50b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c50b1: mov ebp, esp */
  ebp = esp;
/* 7c50b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c50b5: push 0x9cf8c0 */
  { uint32_t v = 0x9cf8c0u; esp -= 4; W32(esp, v); }
/* 7c50ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c50c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c50c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c50c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c50cb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7c50ce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c50cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c50d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c50d1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c50d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c50d5: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c50dc: call 0x6c974b */
  esp -= 4; W32(esp, 0x7c50e1u); SPILL(); f_6c974b(); if (g_unwind) return; RELOAD();
/* 7c50e1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c50e4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c50e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c50e6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c50ed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c50ee: mov esp, ebp */
  esp = ebp;
/* 7c50f0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c50f1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7c50f4(void) {
  LOAD_REGS();
L_7c50f4: /* 7c50f4: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c50f7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c50fc: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7c50ff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c5100: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7c5103: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c5108u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c5108(); return;
}

void f_7c5108(void) {
  LOAD_REGS();
L_7c5108: /* 7c5108: push 0xa0e428 */
  { uint32_t v = 0xa0e428u; esp -= 4; W32(esp, v); }
/* 7c510d: push 0xad4364 */
  { uint32_t v = 0xad4364u; esp -= 4; W32(esp, v); }
/* 7c5112: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c5118u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c5118: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c511b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c511d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c511f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c5124u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c5124: guest_badaddr(0x7c5124); return;
}

void f_7c5150(void) {
  LOAD_REGS();
L_7c5150: /* 7c5150: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c5153: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7c5157: mov dl, byte ptr [ecx + 0x33c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x33cu))) & 0xffu);
/* 7c515d: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 7c515f: cmp dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7c5161: fmul dword ptr [ecx + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x340u)));
/* 7c5167: fadd dword ptr [ecx + 0x418] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x418u)));
/* 7c516d: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7c5171: jne 0x7c51af */
  if (!zf) goto L_7c51af;
L_7c5173: /* 7c5173: test byte ptr [esp + 0x14], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x14u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c5177: je 0x7c518d */
  if (zf) goto L_7c518d;
L_7c5179: /* 7c5179: fld dword ptr [ecx + 0x340] */
  { double v = F32((uint32_t)(ecx + 0x340u)); FPUSH(v); }
/* 7c517f: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 7c5185: fadd dword ptr [esp] */
  ST0 = ST0 + (F32((uint32_t)(esp)));
/* 7c5189: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
L_7c518d: /* 7c518d: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 7c5191: mov eax, dword ptr [ecx + 0x420] */
  eax = R32((uint32_t)(ecx + 0x420u));
/* 7c5197: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 7c519b: fmul dword ptr [ecx + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x340u)));
/* 7c51a1: fmul dword ptr [0xa0e47c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0e47cu)));
/* 7c51a7: fadd dword ptr [ecx + 0x41c] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x41cu)));
/* 7c51ad: jmp 0x7c51c9 */
  goto L_7c51c9;
L_7c51af: /* 7c51af: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 7c51b3: fmul dword ptr [ecx + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x340u)));
/* 7c51b9: fadd dword ptr [ecx + 0x41c] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x41cu)));
/* 7c51bf: mov ecx, dword ptr [ecx + 0x420] */
  ecx = R32((uint32_t)(ecx + 0x420u));
/* 7c51c5: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
L_7c51c9: /* 7c51c9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 7c51cd: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 7c51d1: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* 7c51d5: mov edx, eax */
  edx = eax;
/* 7c51d7: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7c51d9: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7c51dd: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7c51e0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7c51e4: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7c51e7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c51ea: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_7c5220(void) {
  LOAD_REGS();
L_7c5220: /* 7c5220: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c5221: mov ebp, esp */
  ebp = esp;
/* 7c5223: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c5225: push 0x9cf8dc */
  { uint32_t v = 0x9cf8dcu; esp -= 4; W32(esp, v); }
/* 7c522a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c5230: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c5231: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c5238: sub esp, 0x84 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x84u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c523e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c523f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c5240: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c5241: lea edx, [ebp - 0x90] */
  edx = (uint32_t)(ebp + 0xffffff70u);
/* 7c5247: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c524a: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7c524d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7c524f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c5250: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c5257: call dword ptr [eax + 0xb8] */
  { uint32_t t = R32((uint32_t)(eax + 0xb8u)); esp -= 4; W32(esp, 0x7c525du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c525d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7c5260: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7c5263: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7c5266: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c5267: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c5268: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c526b: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 7c526e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c526f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7c5273: call 0x6c8684 */
  esp -= 4; W32(esp, 0x7c5278u); SPILL(); f_6c8684(); if (g_unwind) return; RELOAD();
/* 7c5278: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7c527b: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7c527e: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7c5280: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 7c5283: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7c5286: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 7c5289: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 7c528c: mov dword ptr [ebp - 0x34], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x3f800000u);
/* 7c5293: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 7c5296: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7c5299: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c529c: lea edi, [ebp - 0x50] */
  edi = (uint32_t)(ebp + 0xffffffb0u);
/* 7c529f: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7c52a1: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 7c52a3: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7c52a5: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 7c52a8: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7c52aa: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 7c52ad: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7c52af: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 7c52b2: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7c52b5: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 7c52b8: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7c52bb: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 7c52be: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7c52c1: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 7c52c4: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7c52c7: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 7c52ca: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c52cc: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7c52ce: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c52d0: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c52d2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c52d4: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7c52d7: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7c52da: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7c52dd: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7c52e0: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7c52e3: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7c52e6: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7c52e9: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7c52ec: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c52ee: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7c52f0: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c52f2: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c52f4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c52f6: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7c52f9: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7c52fc: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7c52ff: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7c5302: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7c5305: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7c5308: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7c530b: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 7c530e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c5310: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7c5312: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c5314: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c5316: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c5318: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c531a: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7c531c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c531e: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 7c5321: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 7c5324: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 7c5327: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7c532a: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7c532d: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7c532f: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 7c5332: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7c5335: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7c5338: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 7c533e: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7c5341: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c5345: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7c534bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7c534b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c534e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7c5351: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c5352: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c5353: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c535a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c535b: mov esp, ebp */
  esp = ebp;
/* 7c535d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c535e: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_7c5361(void) {
  LOAD_REGS();
L_7c5361: /* 7c5361: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7c5364: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c5369: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 7c536c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c536d: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 7c5370: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c5375u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c5375(); return;
}

void f_7c5375(void) {
  LOAD_REGS();
L_7c5375: /* 7c5375: push 0xa0e480 */
  { uint32_t v = 0xa0e480u; esp -= 4; W32(esp, v); }
/* 7c537a: push 0xad4390 */
  { uint32_t v = 0xad4390u; esp -= 4; W32(esp, v); }
/* 7c537f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c5385u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c5385: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c5388: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c538a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c538c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c5391u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c5391: guest_badaddr(0x7c5391); return;
}

void f_7c5400(void) {
  LOAD_REGS();
L_7c5400: /* 7c5400: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c5401: mov ebp, esp */
  ebp = esp;
/* 7c5403: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c5405: push 0x9cf8f0 */
  { uint32_t v = 0x9cf8f0u; esp -= 4; W32(esp, v); }
/* 7c540a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c5410: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c5411: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c5418: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c541b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c541c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c541d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c541e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c5421: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c5428: call 0x6c1ee7 */
  esp -= 4; W32(esp, 0x7c542du); SPILL(); f_6c1ee7(); if (g_unwind) return; RELOAD();
/* 7c542d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c5430: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c5431: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c5432: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c5439: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c543a: mov esp, ebp */
  esp = ebp;
/* 7c543c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c543d: ret  */
  esp += 4; SPILL(); return;
}

void f_7c543e(void) {
  LOAD_REGS();
L_7c543e: /* 7c543e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c5441: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c5446: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7c5449: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c544a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7c544d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c5452u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c5452(); return;
}

void f_7c5452(void) {
  LOAD_REGS();
L_7c5452: /* 7c5452: push 0xa0e4d8 */
  { uint32_t v = 0xa0e4d8u; esp -= 4; W32(esp, v); }
/* 7c5457: push 0xad4458 */
  { uint32_t v = 0xad4458u; esp -= 4; W32(esp, v); }
/* 7c545c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c5462u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c5462: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c5465: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c5467: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c5469: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c546eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c546e: guest_badaddr(0x7c546e); return;
}

void f_7c5490(void) {
  LOAD_REGS();
L_7c5490: /* 7c5490: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7c5494: mov eax, 1 */
  eax = 0x1u;
/* 7c5499: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7c549b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7c549e: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 7c54a1: mov eax, 4 */
  eax = 0x4u;
/* 7c54a6: mov edx, 2 */
  edx = 0x2u;
/* 7c54ab: mov dword ptr [ecx + 4], 0 */
  W32((uint32_t)(ecx + 0x4u), 0x0u);
/* 7c54b2: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 7c54b5: mov dword ptr [ecx + 0x14], edx */
  W32((uint32_t)(ecx + 0x14u), edx);
/* 7c54b8: mov dword ptr [ecx + 0x18], edx */
  W32((uint32_t)(ecx + 0x18u), edx);
/* 7c54bb: mov dword ptr [ecx + 0x1c], eax */
  W32((uint32_t)(ecx + 0x1cu), eax);
/* 7c54be: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7c54e0(void) {
  LOAD_REGS();
L_7c54e0: /* 7c54e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7c54e4: mov word ptr [eax], 0 */
  W16((uint32_t)(eax), 0x0u);
/* 7c54e9: mov word ptr [eax + 2], 3 */
  W16((uint32_t)(eax + 0x2u), 0x3u);
/* 7c54ef: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c54f2: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c54f5: mov word ptr [eax], 1 */
  W16((uint32_t)(eax), 0x1u);
/* 7c54fa: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c54fd: mov word ptr [eax], 0 */
  W16((uint32_t)(eax), 0x0u);
/* 7c5502: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c5505: mov word ptr [eax], 2 */
  W16((uint32_t)(eax), 0x2u);
/* 7c550a: mov word ptr [eax + 2], 3 */
  W16((uint32_t)(eax + 0x2u), 0x3u);
/* 7c5510: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7c5530(void) {
  LOAD_REGS();
L_7c5530: /* 7c5530: cmp byte ptr [ecx + 0x33c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x33cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7c5537: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7c553b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c553c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c553d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c553e: jne 0x7c56e0 */
  if (!zf) goto L_7c56e0;
L_7c5544: /* 7c5544: mov esi, dword ptr [ecx + 0x348] */
  esi = R32((uint32_t)(ecx + 0x348u));
/* 7c554a: xor edx, edx */
  edx = 0;
/* 7c554c: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 7c554d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7c554f: jle 0x7c57ba */
  if ((zf || sf != of)) goto L_7c57ba;
L_7c5555: /* 7c5555: mov esi, dword ptr [ecx + 0x344] */
  esi = R32((uint32_t)(ecx + 0x344u));
/* 7c555b: lea edi, [esi - 1] */
  edi = (uint32_t)(esi + 0xffffffffu);
/* 7c555e: mov edi, edi */
  edi = edi;
L_7c5560: /* 7c5560: xor esi, esi */
  esi = 0;
/* 7c5562: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c5565: je 0x7c561f */
  if (zf) goto L_7c561f;
L_7c556b: /* 7c556b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7c556d: jle 0x7c56ca */
  if ((zf || sf != of)) goto L_7c56ca;
L_7c5573: /* 7c5573: lea ebx, [edx + 1] */
  ebx = (uint32_t)(edx + 0x1u);
/* 7c5576: jmp 0x7c5580 */
  goto L_7c5580;
L_7c5580: /* 7c5580: xor edi, edi */
  edi = 0;
/* 7c5582: mov di, word ptr [ecx + 0x344] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x344u))) & 0xffffu);
/* 7c5589: imul di, dx */
  { int32_t r = (int32_t)(int16_t)((edi & 0xffffu)) * (int32_t)(int16_t)((edx & 0xffffu));
  edi = (edi & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7c558d: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c5590: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c5593: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c5596: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c5599: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c559c: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c559f: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7c55a1: mov word ptr [eax - 0xc], di */
  W16((uint32_t)(eax + 0xfffffff4u), (edi & 0xffffu));
/* 7c55a5: xor edi, edi */
  edi = 0;
/* 7c55a7: mov di, word ptr [ecx + 0x344] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x344u))) & 0xffffu);
/* 7c55ae: imul di, bx */
  { int32_t r = (int32_t)(int16_t)((edi & 0xffffu)) * (int32_t)(int16_t)((ebx & 0xffffu));
  edi = (edi & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7c55b2: lea edi, [edi + esi + 1] */
  edi = (uint32_t)(edi + esi + 0x1u);
/* 7c55b6: mov word ptr [eax - 0xa], di */
  W16((uint32_t)(eax + 0xfffffff6u), (edi & 0xffffu));
/* 7c55ba: xor edi, edi */
  edi = 0;
/* 7c55bc: mov di, word ptr [ecx + 0x344] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x344u))) & 0xffffu);
/* 7c55c3: imul di, dx */
  { int32_t r = (int32_t)(int16_t)((edi & 0xffffu)) * (int32_t)(int16_t)((edx & 0xffffu));
  edi = (edi & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7c55c7: lea edi, [edi + esi + 1] */
  edi = (uint32_t)(edi + esi + 0x1u);
/* 7c55cb: mov word ptr [eax - 8], di */
  W16((uint32_t)(eax + 0xfffffff8u), (edi & 0xffffu));
/* 7c55cf: xor edi, edi */
  edi = 0;
/* 7c55d1: mov di, word ptr [ecx + 0x344] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x344u))) & 0xffffu);
/* 7c55d8: imul di, dx */
  { int32_t r = (int32_t)(int16_t)((edi & 0xffffu)) * (int32_t)(int16_t)((edx & 0xffffu));
  edi = (edi & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7c55dc: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7c55de: mov word ptr [eax - 6], di */
  W16((uint32_t)(eax + 0xfffffffau), (edi & 0xffffu));
/* 7c55e2: xor edi, edi */
  edi = 0;
/* 7c55e4: mov di, word ptr [ecx + 0x344] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x344u))) & 0xffffu);
/* 7c55eb: imul di, bx */
  { int32_t r = (int32_t)(int16_t)((edi & 0xffffu)) * (int32_t)(int16_t)((ebx & 0xffffu));
  edi = (edi & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7c55ef: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7c55f1: mov word ptr [eax - 4], di */
  W16((uint32_t)(eax + 0xfffffffcu), (edi & 0xffffu));
/* 7c55f5: xor edi, edi */
  edi = 0;
/* 7c55f7: mov di, word ptr [ecx + 0x344] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x344u))) & 0xffffu);
/* 7c55fe: imul di, bx */
  { int32_t r = (int32_t)(int16_t)((edi & 0xffffu)) * (int32_t)(int16_t)((ebx & 0xffffu));
  edi = (edi & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7c5602: lea edi, [edi + esi + 1] */
  edi = (uint32_t)(edi + esi + 0x1u);
/* 7c5606: mov word ptr [eax - 2], di */
  W16((uint32_t)(eax + 0xfffffffeu), (edi & 0xffffu));
/* 7c560a: mov edi, dword ptr [ecx + 0x344] */
  edi = R32((uint32_t)(ecx + 0x344u));
/* 7c5610: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7c5611: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 7c5612: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c5614: jl 0x7c5580 */
  if ((sf != of)) goto L_7c5580;
L_7c561a: /* 7c561a: jmp 0x7c56ca */
  goto L_7c56ca;
L_7c561f: /* 7c561f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7c5621: jle 0x7c56ca */
  if ((zf || sf != of)) goto L_7c56ca;
L_7c5627: /* 7c5627: lea ebx, [edx + 1] */
  ebx = (uint32_t)(edx + 0x1u);
/* 7c562a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7c5630: /* 7c5630: xor edi, edi */
  edi = 0;
/* 7c5632: mov di, word ptr [ecx + 0x344] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x344u))) & 0xffffu);
/* 7c5639: imul di, dx */
  { int32_t r = (int32_t)(int16_t)((edi & 0xffffu)) * (int32_t)(int16_t)((edx & 0xffffu));
  edi = (edi & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7c563d: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c5640: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c5643: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c5646: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c5649: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c564c: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c564f: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7c5651: mov word ptr [eax - 0xc], di */
  W16((uint32_t)(eax + 0xfffffff4u), (edi & 0xffffu));
/* 7c5655: xor edi, edi */
  edi = 0;
/* 7c5657: mov di, word ptr [ecx + 0x344] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x344u))) & 0xffffu);
/* 7c565e: imul di, bx */
  { int32_t r = (int32_t)(int16_t)((edi & 0xffffu)) * (int32_t)(int16_t)((ebx & 0xffffu));
  edi = (edi & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7c5662: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7c5664: mov word ptr [eax - 0xa], di */
  W16((uint32_t)(eax + 0xfffffff6u), (edi & 0xffffu));
/* 7c5668: xor edi, edi */
  edi = 0;
/* 7c566a: mov di, word ptr [ecx + 0x344] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x344u))) & 0xffffu);
/* 7c5671: imul di, dx */
  { int32_t r = (int32_t)(int16_t)((edi & 0xffffu)) * (int32_t)(int16_t)((edx & 0xffffu));
  edi = (edi & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7c5675: lea edi, [edi + esi + 1] */
  edi = (uint32_t)(edi + esi + 0x1u);
/* 7c5679: mov word ptr [eax - 8], di */
  W16((uint32_t)(eax + 0xfffffff8u), (edi & 0xffffu));
/* 7c567d: xor edi, edi */
  edi = 0;
/* 7c567f: mov di, word ptr [ecx + 0x344] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x344u))) & 0xffffu);
/* 7c5686: imul di, bx */
  { int32_t r = (int32_t)(int16_t)((edi & 0xffffu)) * (int32_t)(int16_t)((ebx & 0xffffu));
  edi = (edi & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7c568a: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7c568c: mov word ptr [eax - 6], di */
  W16((uint32_t)(eax + 0xfffffffau), (edi & 0xffffu));
/* 7c5690: xor edi, edi */
  edi = 0;
/* 7c5692: mov di, word ptr [ecx + 0x344] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x344u))) & 0xffffu);
/* 7c5699: imul di, bx */
  { int32_t r = (int32_t)(int16_t)((edi & 0xffffu)) * (int32_t)(int16_t)((ebx & 0xffffu));
  edi = (edi & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7c569d: lea edi, [edi + esi + 1] */
  edi = (uint32_t)(edi + esi + 0x1u);
/* 7c56a1: mov word ptr [eax - 4], di */
  W16((uint32_t)(eax + 0xfffffffcu), (edi & 0xffffu));
/* 7c56a5: xor edi, edi */
  edi = 0;
/* 7c56a7: mov di, word ptr [ecx + 0x344] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x344u))) & 0xffffu);
/* 7c56ae: imul di, dx */
  { int32_t r = (int32_t)(int16_t)((edi & 0xffffu)) * (int32_t)(int16_t)((edx & 0xffffu));
  edi = (edi & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7c56b2: lea edi, [edi + esi + 1] */
  edi = (uint32_t)(edi + esi + 0x1u);
/* 7c56b6: mov word ptr [eax - 2], di */
  W16((uint32_t)(eax + 0xfffffffeu), (edi & 0xffffu));
/* 7c56ba: mov edi, dword ptr [ecx + 0x344] */
  edi = R32((uint32_t)(ecx + 0x344u));
/* 7c56c0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7c56c1: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 7c56c2: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c56c4: jl 0x7c5630 */
  if ((sf != of)) goto L_7c5630;
L_7c56ca: /* 7c56ca: mov esi, dword ptr [ecx + 0x348] */
  esi = R32((uint32_t)(ecx + 0x348u));
/* 7c56d0: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7c56d1: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 7c56d2: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c56d4: jl 0x7c5560 */
  if ((sf != of)) goto L_7c5560;
L_7c56da: /* 7c56da: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c56db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c56dc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c56dd: ret 4 */
  esp += 8; SPILL(); return;
L_7c56e0: /* 7c56e0: mov edx, dword ptr [ecx + 0x348] */
  edx = R32((uint32_t)(ecx + 0x348u));
/* 7c56e6: xor esi, esi */
  esi = 0;
/* 7c56e8: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 7c56e9: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7c56eb: jle 0x7c57ba */
  if ((zf || sf != of)) goto L_7c57ba;
L_7c56f1: /* 7c56f1: mov edx, dword ptr [ecx + 0x344] */
  edx = R32((uint32_t)(ecx + 0x344u));
/* 7c56f7: lea ebx, [edx - 1] */
  ebx = (uint32_t)(edx + 0xffffffffu);
/* 7c56fa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7c5700: /* 7c5700: xor edx, edx */
  edx = 0;
/* 7c5702: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7c5704: jle 0x7c57aa */
  if ((zf || sf != of)) goto L_7c57aa;
L_7c570a: /* 7c570a: lea edi, [esi + 1] */
  edi = (uint32_t)(esi + 0x1u);
/* 7c570d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7c5710: /* 7c5710: xor ebx, ebx */
  ebx = 0;
/* 7c5712: mov bx, word ptr [ecx + 0x344] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x344u))) & 0xffffu);
/* 7c5719: imul bx, si */
  { int32_t r = (int32_t)(int16_t)((ebx & 0xffffu)) * (int32_t)(int16_t)((esi & 0xffffu));
  ebx = (ebx & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7c571d: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c5720: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c5723: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c5726: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c5729: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c572c: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c572f: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7c5731: mov word ptr [eax - 0xc], bx */
  W16((uint32_t)(eax + 0xfffffff4u), (ebx & 0xffffu));
/* 7c5735: xor ebx, ebx */
  ebx = 0;
/* 7c5737: mov bx, word ptr [ecx + 0x344] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x344u))) & 0xffffu);
/* 7c573e: imul bx, di */
  { int32_t r = (int32_t)(int16_t)((ebx & 0xffffu)) * (int32_t)(int16_t)((edi & 0xffffu));
  ebx = (ebx & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7c5742: lea ebx, [ebx + edx + 1] */
  ebx = (uint32_t)(ebx + edx + 0x1u);
/* 7c5746: mov word ptr [eax - 0xa], bx */
  W16((uint32_t)(eax + 0xfffffff6u), (ebx & 0xffffu));
/* 7c574a: xor ebx, ebx */
  ebx = 0;
/* 7c574c: mov bx, word ptr [ecx + 0x344] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x344u))) & 0xffffu);
/* 7c5753: imul bx, si */
  { int32_t r = (int32_t)(int16_t)((ebx & 0xffffu)) * (int32_t)(int16_t)((esi & 0xffffu));
  ebx = (ebx & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7c5757: lea ebx, [ebx + edx + 1] */
  ebx = (uint32_t)(ebx + edx + 0x1u);
/* 7c575b: mov word ptr [eax - 8], bx */
  W16((uint32_t)(eax + 0xfffffff8u), (ebx & 0xffffu));
/* 7c575f: xor ebx, ebx */
  ebx = 0;
/* 7c5761: mov bx, word ptr [ecx + 0x344] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x344u))) & 0xffffu);
/* 7c5768: imul bx, si */
  { int32_t r = (int32_t)(int16_t)((ebx & 0xffffu)) * (int32_t)(int16_t)((esi & 0xffffu));
  ebx = (ebx & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7c576c: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7c576e: mov word ptr [eax - 6], bx */
  W16((uint32_t)(eax + 0xfffffffau), (ebx & 0xffffu));
/* 7c5772: xor ebx, ebx */
  ebx = 0;
/* 7c5774: mov bx, word ptr [ecx + 0x344] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x344u))) & 0xffffu);
/* 7c577b: imul bx, di */
  { int32_t r = (int32_t)(int16_t)((ebx & 0xffffu)) * (int32_t)(int16_t)((edi & 0xffffu));
  ebx = (ebx & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7c577f: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7c5781: mov word ptr [eax - 4], bx */
  W16((uint32_t)(eax + 0xfffffffcu), (ebx & 0xffffu));
/* 7c5785: xor ebx, ebx */
  ebx = 0;
/* 7c5787: mov bx, word ptr [ecx + 0x344] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x344u))) & 0xffffu);
/* 7c578e: imul bx, di */
  { int32_t r = (int32_t)(int16_t)((ebx & 0xffffu)) * (int32_t)(int16_t)((edi & 0xffffu));
  ebx = (ebx & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7c5792: lea ebx, [ebx + edx + 1] */
  ebx = (uint32_t)(ebx + edx + 0x1u);
/* 7c5796: mov word ptr [eax - 2], bx */
  W16((uint32_t)(eax + 0xfffffffeu), (ebx & 0xffffu));
/* 7c579a: mov ebx, dword ptr [ecx + 0x344] */
  ebx = R32((uint32_t)(ecx + 0x344u));
/* 7c57a0: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7c57a1: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 7c57a2: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c57a4: jl 0x7c5710 */
  if ((sf != of)) goto L_7c5710;
L_7c57aa: /* 7c57aa: mov edx, dword ptr [ecx + 0x348] */
  edx = R32((uint32_t)(ecx + 0x348u));
/* 7c57b0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7c57b1: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 7c57b2: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c57b4: jl 0x7c5700 */
  if ((sf != of)) goto L_7c5700;
L_7c57ba: /* 7c57ba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c57bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c57bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c57bd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7c5578(void) {
  LOAD_REGS();
  goto L_7c5578;
L_7c5560: /* 7c5560: xor esi, esi */
  esi = 0;
/* 7c5562: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c5565: je 0x7c561f */
  if (zf) goto L_7c561f;
L_7c556b: /* 7c556b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7c556d: jle 0x7c56ca */
  if ((zf || sf != of)) goto L_7c56ca;
L_7c5573: /* 7c5573: lea ebx, [edx + 1] */
  ebx = (uint32_t)(edx + 0x1u);
/* 7c5576: jmp 0x7c5580 */
  goto L_7c5580;
L_7c5578: /* 7c5578: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 7c557f: nop  */
L_7c5580: /* 7c5580: xor edi, edi */
  edi = 0;
/* 7c5582: mov di, word ptr [ecx + 0x344] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x344u))) & 0xffffu);
/* 7c5589: imul di, dx */
  { int32_t r = (int32_t)(int16_t)((edi & 0xffffu)) * (int32_t)(int16_t)((edx & 0xffffu));
  edi = (edi & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7c558d: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c5590: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c5593: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c5596: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c5599: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c559c: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c559f: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7c55a1: mov word ptr [eax - 0xc], di */
  W16((uint32_t)(eax + 0xfffffff4u), (edi & 0xffffu));
/* 7c55a5: xor edi, edi */
  edi = 0;
/* 7c55a7: mov di, word ptr [ecx + 0x344] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x344u))) & 0xffffu);
/* 7c55ae: imul di, bx */
  { int32_t r = (int32_t)(int16_t)((edi & 0xffffu)) * (int32_t)(int16_t)((ebx & 0xffffu));
  edi = (edi & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7c55b2: lea edi, [edi + esi + 1] */
  edi = (uint32_t)(edi + esi + 0x1u);
/* 7c55b6: mov word ptr [eax - 0xa], di */
  W16((uint32_t)(eax + 0xfffffff6u), (edi & 0xffffu));
/* 7c55ba: xor edi, edi */
  edi = 0;
/* 7c55bc: mov di, word ptr [ecx + 0x344] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x344u))) & 0xffffu);
/* 7c55c3: imul di, dx */
  { int32_t r = (int32_t)(int16_t)((edi & 0xffffu)) * (int32_t)(int16_t)((edx & 0xffffu));
  edi = (edi & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7c55c7: lea edi, [edi + esi + 1] */
  edi = (uint32_t)(edi + esi + 0x1u);
/* 7c55cb: mov word ptr [eax - 8], di */
  W16((uint32_t)(eax + 0xfffffff8u), (edi & 0xffffu));
/* 7c55cf: xor edi, edi */
  edi = 0;
/* 7c55d1: mov di, word ptr [ecx + 0x344] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x344u))) & 0xffffu);
/* 7c55d8: imul di, dx */
  { int32_t r = (int32_t)(int16_t)((edi & 0xffffu)) * (int32_t)(int16_t)((edx & 0xffffu));
  edi = (edi & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7c55dc: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7c55de: mov word ptr [eax - 6], di */
  W16((uint32_t)(eax + 0xfffffffau), (edi & 0xffffu));
/* 7c55e2: xor edi, edi */
  edi = 0;
/* 7c55e4: mov di, word ptr [ecx + 0x344] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x344u))) & 0xffffu);
/* 7c55eb: imul di, bx */
  { int32_t r = (int32_t)(int16_t)((edi & 0xffffu)) * (int32_t)(int16_t)((ebx & 0xffffu));
  edi = (edi & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7c55ef: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7c55f1: mov word ptr [eax - 4], di */
  W16((uint32_t)(eax + 0xfffffffcu), (edi & 0xffffu));
/* 7c55f5: xor edi, edi */
  edi = 0;
/* 7c55f7: mov di, word ptr [ecx + 0x344] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x344u))) & 0xffffu);
/* 7c55fe: imul di, bx */
  { int32_t r = (int32_t)(int16_t)((edi & 0xffffu)) * (int32_t)(int16_t)((ebx & 0xffffu));
  edi = (edi & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7c5602: lea edi, [edi + esi + 1] */
  edi = (uint32_t)(edi + esi + 0x1u);
/* 7c5606: mov word ptr [eax - 2], di */
  W16((uint32_t)(eax + 0xfffffffeu), (edi & 0xffffu));
/* 7c560a: mov edi, dword ptr [ecx + 0x344] */
  edi = R32((uint32_t)(ecx + 0x344u));
/* 7c5610: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7c5611: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 7c5612: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c5614: jl 0x7c5580 */
  if ((sf != of)) goto L_7c5580;
L_7c561a: /* 7c561a: jmp 0x7c56ca */
  goto L_7c56ca;
L_7c561f: /* 7c561f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7c5621: jle 0x7c56ca */
  if ((zf || sf != of)) goto L_7c56ca;
L_7c5627: /* 7c5627: lea ebx, [edx + 1] */
  ebx = (uint32_t)(edx + 0x1u);
/* 7c562a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7c5630: /* 7c5630: xor edi, edi */
  edi = 0;
/* 7c5632: mov di, word ptr [ecx + 0x344] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x344u))) & 0xffffu);
/* 7c5639: imul di, dx */
  { int32_t r = (int32_t)(int16_t)((edi & 0xffffu)) * (int32_t)(int16_t)((edx & 0xffffu));
  edi = (edi & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7c563d: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c5640: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c5643: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c5646: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c5649: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c564c: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c564f: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7c5651: mov word ptr [eax - 0xc], di */
  W16((uint32_t)(eax + 0xfffffff4u), (edi & 0xffffu));
/* 7c5655: xor edi, edi */
  edi = 0;
/* 7c5657: mov di, word ptr [ecx + 0x344] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x344u))) & 0xffffu);
/* 7c565e: imul di, bx */
  { int32_t r = (int32_t)(int16_t)((edi & 0xffffu)) * (int32_t)(int16_t)((ebx & 0xffffu));
  edi = (edi & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7c5662: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7c5664: mov word ptr [eax - 0xa], di */
  W16((uint32_t)(eax + 0xfffffff6u), (edi & 0xffffu));
/* 7c5668: xor edi, edi */
  edi = 0;
/* 7c566a: mov di, word ptr [ecx + 0x344] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x344u))) & 0xffffu);
/* 7c5671: imul di, dx */
  { int32_t r = (int32_t)(int16_t)((edi & 0xffffu)) * (int32_t)(int16_t)((edx & 0xffffu));
  edi = (edi & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7c5675: lea edi, [edi + esi + 1] */
  edi = (uint32_t)(edi + esi + 0x1u);
/* 7c5679: mov word ptr [eax - 8], di */
  W16((uint32_t)(eax + 0xfffffff8u), (edi & 0xffffu));
/* 7c567d: xor edi, edi */
  edi = 0;
/* 7c567f: mov di, word ptr [ecx + 0x344] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x344u))) & 0xffffu);
/* 7c5686: imul di, bx */
  { int32_t r = (int32_t)(int16_t)((edi & 0xffffu)) * (int32_t)(int16_t)((ebx & 0xffffu));
  edi = (edi & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7c568a: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7c568c: mov word ptr [eax - 6], di */
  W16((uint32_t)(eax + 0xfffffffau), (edi & 0xffffu));
/* 7c5690: xor edi, edi */
  edi = 0;
/* 7c5692: mov di, word ptr [ecx + 0x344] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x344u))) & 0xffffu);
/* 7c5699: imul di, bx */
  { int32_t r = (int32_t)(int16_t)((edi & 0xffffu)) * (int32_t)(int16_t)((ebx & 0xffffu));
  edi = (edi & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7c569d: lea edi, [edi + esi + 1] */
  edi = (uint32_t)(edi + esi + 0x1u);
/* 7c56a1: mov word ptr [eax - 4], di */
  W16((uint32_t)(eax + 0xfffffffcu), (edi & 0xffffu));
/* 7c56a5: xor edi, edi */
  edi = 0;
/* 7c56a7: mov di, word ptr [ecx + 0x344] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x344u))) & 0xffffu);
/* 7c56ae: imul di, dx */
  { int32_t r = (int32_t)(int16_t)((edi & 0xffffu)) * (int32_t)(int16_t)((edx & 0xffffu));
  edi = (edi & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 7c56b2: lea edi, [edi + esi + 1] */
  edi = (uint32_t)(edi + esi + 0x1u);
/* 7c56b6: mov word ptr [eax - 2], di */
  W16((uint32_t)(eax + 0xfffffffeu), (edi & 0xffffu));
/* 7c56ba: mov edi, dword ptr [ecx + 0x344] */
  edi = R32((uint32_t)(ecx + 0x344u));
/* 7c56c0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7c56c1: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 7c56c2: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c56c4: jl 0x7c5630 */
  if ((sf != of)) goto L_7c5630;
L_7c56ca: /* 7c56ca: mov esi, dword ptr [ecx + 0x348] */
  esi = R32((uint32_t)(ecx + 0x348u));
/* 7c56d0: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7c56d1: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 7c56d2: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c56d4: jl 0x7c5560 */
  if ((sf != of)) goto L_7c5560;
L_7c56da: /* 7c56da: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c56db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c56dc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c56dd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7c5870(void) {
  LOAD_REGS();
L_7c5870: /* 7c5870: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7c5874: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c5875: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7c5877: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x7c587du); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 7c587d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7c5890(void) {
  LOAD_REGS();
L_7c5890: /* 7c5890: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7c5894: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c5895: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7c5897: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x7c589du); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 7c589d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7c58b0(void) {
  LOAD_REGS();
L_7c58b0: /* 7c58b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7c58b4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7c58b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c58b7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7c58bdu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7c58bd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7c58d0(void) {
  LOAD_REGS();
L_7c58d0: /* 7c58d0: mov eax, ecx */
  eax = ecx;
/* 7c58d2: mov dword ptr [eax], 0x9f43f0 */
  W32((uint32_t)(eax), 0x9f43f0u);
/* 7c58d8: ret  */
  esp += 4; SPILL(); return;
}

void f_7c58f0(void) {
  LOAD_REGS();
L_7c58f0: /* 7c58f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c58f1: mov ebp, esp */
  ebp = esp;
/* 7c58f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c58f5: push 0x9cf90c */
  { uint32_t v = 0x9cf90cu; esp -= 4; W32(esp, v); }
/* 7c58fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c5900: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c5901: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c5908: sub esp, 0x120 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x120u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c590e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c590f: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7c5912: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c5915: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7c5918: mov edx, dword ptr [eax + 0x54] */
  edx = R32((uint32_t)(eax + 0x54u));
/* 7c591b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c591c: xor ebx, ebx */
  ebx = 0;
/* 7c591e: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c5920: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c5921: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c5924: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7c5927: je 0x7c5941 */
  if (zf) goto L_7c5941;
L_7c5929: /* 7c5929: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 7c592b: push 0xad4314 */
  { uint32_t v = 0xad4314u; esp -= 4; W32(esp, v); }
/* 7c5930: push 0xad4328 */
  { uint32_t v = 0xad4328u; esp -= 4; W32(esp, v); }
/* 7c5935: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7c593bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7c593b: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7c593e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7c5941: /* 7c5941: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c5943: lea eax, [ebp - 0xd0] */
  eax = (uint32_t)(ebp + 0xffffff30u);
/* 7c5949: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c594a: call dword ptr [edx + 0xbc] */
  { uint32_t t = R32((uint32_t)(edx + 0xbcu)); esp -= 4; W32(esp, 0x7c5950u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c5950: lea ecx, [ebp + 0x28] */
  ecx = (uint32_t)(ebp + 0x28u);
/* 7c5953: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7c5957: call dword ptr [0xcfa5e8] */
  esp -= 4; W32(esp, 0x7c595du); SPILL(); f_4e3edb(); if (g_unwind) return; /* Core!?IsZero@FVector@@QBEHXZ */ RELOAD();
/* 7c595d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c595f: jne 0x7c59ef */
  if (!zf) goto L_7c59ef;
L_7c5965: /* 7c5965: fld dword ptr [ebp + 0x30] */
  { double v = F32((uint32_t)(ebp + 0x30u)); FPUSH(v); }
/* 7c5968: lea ecx, [ebp + 0x28] */
  ecx = (uint32_t)(ebp + 0x28u);
/* 7c596b: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7c5971: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c5972: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 7c5975: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 7c5978: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7c597e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c597f: fld dword ptr [ebp + 0x28] */
  { double v = F32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 7c5982: lea ecx, [ebp - 0xec] */
  ecx = (uint32_t)(ebp + 0xffffff14u);
/* 7c5988: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7c598e: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7c5991: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7c5994: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7c5997: call dword ptr [0xcfa530] */
  esp -= 4; W32(esp, 0x7c599du); SPILL(); f_4e310c(); if (g_unwind) return; /* Core!??0FBox@@QAE@ABVFVector@@0@Z */ RELOAD();
/* 7c599d: lea eax, [ebp - 0xd0] */
  eax = (uint32_t)(ebp + 0xffffff30u);
/* 7c59a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c59a4: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 7c59a7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c59a8: lea ecx, [ebp - 0xec] */
  ecx = (uint32_t)(ebp + 0xffffff14u);
/* 7c59ae: call dword ptr [0xcfa638] */
  esp -= 4; W32(esp, 0x7c59b4u); SPILL(); f_4e2806(); if (g_unwind) return; /* Core!?TransformBy@FBox@@QBE?AV1@ABVFMatrix@@@Z */ RELOAD();
/* 7c59b4: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 7c59b7: fsub dword ptr [ebp - 0x50] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 7c59ba: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 7c59bd: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 7c59c0: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7c59c3: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 7c59c6: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 7c59c9: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7c59cc: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7c59d2: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7c59d5: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7c59db: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7c59de: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7c59e4: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7c59e7: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7c59ea: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7c59ed: jmp 0x7c5a04 */
  goto L_7c5a04;
L_7c59ef: /* 7c59ef: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7c59f6: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7c59fd: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_7c5a04: /* 7c5a04: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7c5a07: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7c5a0a: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c5a0d: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 7c5a10: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 7c5a13: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 7c5a16: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 7c5a19: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 7c5a1c: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 7c5a1f: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 7c5a22: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7c5a25: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 7c5a28: lea eax, [ebp - 0xd0] */
  eax = (uint32_t)(ebp + 0xffffff30u);
/* 7c5a2e: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 7c5a31: mov dword ptr [ebp - 0x18], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3f800000u);
/* 7c5a38: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 7c5a3b: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 7c5a3e: mov esi, dword ptr [ebp - 0x30] */
  esi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7c5a41: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7c5a44: lea edi, [ebp - 0x4c] */
  edi = (uint32_t)(ebp + 0xffffffb4u);
/* 7c5a47: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7c5a49: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 7c5a4b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7c5a4d: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 7c5a50: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7c5a52: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 7c5a55: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7c5a57: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 7c5a5a: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7c5a5d: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 7c5a60: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7c5a63: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 7c5a66: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7c5a69: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 7c5a6c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7c5a6f: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 7c5a72: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c5a74: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7c5a76: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c5a78: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c5a7a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c5a7c: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7c5a7f: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7c5a82: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7c5a85: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7c5a88: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7c5a8b: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7c5a8e: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7c5a91: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7c5a94: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c5a96: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7c5a98: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c5a9a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c5a9c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c5a9e: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7c5aa1: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7c5aa4: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7c5aa7: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7c5aaa: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7c5aad: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7c5ab0: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7c5ab3: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 7c5ab6: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c5ab8: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7c5aba: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c5abc: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c5abe: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c5ac0: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c5ac2: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7c5ac4: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c5ac6: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 7c5ac9: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 7c5acc: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 7c5acf: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 7c5ad2: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7c5ad5: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7c5ad8: mov dword ptr [ebp - 0x64], ecx */
  W32((uint32_t)(ebp + 0xffffff9cu), ecx);
/* 7c5adb: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7c5ade: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 7c5ae1: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7c5ae4: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 7c5ae7: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 7c5aea: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 7c5aed: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 7c5af0: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7c5af3: lea edx, [ebp - 0xd0] */
  edx = (uint32_t)(ebp + 0xffffff30u);
/* 7c5af9: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7c5afc: mov dword ptr [ebp - 0x18], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3f800000u);
/* 7c5b03: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 7c5b06: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 7c5b09: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7c5b0c: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7c5b0f: lea edi, [ebp - 0x4c] */
  edi = (uint32_t)(ebp + 0xffffffb4u);
/* 7c5b12: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7c5b14: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 7c5b16: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7c5b18: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 7c5b1b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7c5b1d: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 7c5b20: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7c5b22: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 7c5b25: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7c5b28: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 7c5b2b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7c5b2e: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 7c5b31: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7c5b34: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 7c5b37: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7c5b3a: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 7c5b3d: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c5b3f: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7c5b41: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c5b43: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c5b45: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c5b47: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7c5b4a: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7c5b4d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7c5b50: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7c5b53: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7c5b56: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7c5b59: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7c5b5c: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7c5b5f: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c5b61: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7c5b63: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c5b65: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c5b67: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c5b69: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7c5b6c: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7c5b6f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7c5b72: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7c5b75: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7c5b78: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7c5b7b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7c5b7e: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 7c5b81: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c5b83: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7c5b85: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c5b87: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c5b89: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c5b8b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c5b8d: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7c5b8f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c5b91: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 7c5b94: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 7c5b97: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 7c5b9a: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 7c5b9d: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7c5ba0: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7c5ba3: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
/* 7c5ba6: mov dword ptr [ebp - 0x78], ecx */
  W32((uint32_t)(ebp + 0xffffff88u), ecx);
/* 7c5ba9: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 7c5bac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c5bad: mov dword ptr [ebp - 0x74], edx */
  W32((uint32_t)(ebp + 0xffffff8cu), edx);
/* 7c5bb0: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7c5bb6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c5bb7: lea edx, [ebp - 0x70] */
  edx = (uint32_t)(ebp + 0xffffff90u);
/* 7c5bba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c5bbb: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 7c5bbe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c5bbf: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c5bc2: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 7c5bc5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c5bc6: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* 7c5bc9: lea edx, [ebp - 0x64] */
  edx = (uint32_t)(ebp + 0xffffff9cu);
/* 7c5bcc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c5bcd: add ecx, 0x3fc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7c5bd3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c5bd4: call dword ptr [0xcfa898] */
  esp -= 4; W32(esp, 0x7c5bdau); SPILL(); f_4e18e8(); if (g_unwind) return; /* Core!?FLineExtentBoxIntersection@@YAHABVFBox@@ABVFVector@@11AAV2@2AAM@Z */ RELOAD();
/* 7c5bda: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c5bdd: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c5bdf: je 0x7c5d49 */
  if (zf) goto L_7c5d49;
L_7c5be5: /* 7c5be5: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c5be8: mov eax, dword ptr [edx + 0x54] */
  eax = R32((uint32_t)(edx + 0x54u));
/* 7c5beb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7c5bee: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7c5bf1: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7c5bf4: mov dword ptr [edx + 0x28], ebx */
  W32((uint32_t)(edx + 0x28u), ebx);
/* 7c5bf7: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7c5bfa: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7c5bfc: lea edx, [ebp - 0x12c] */
  edx = (uint32_t)(ebp + 0xfffffed4u);
/* 7c5c02: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c5c03: call dword ptr [eax + 0xb8] */
  { uint32_t t = R32((uint32_t)(eax + 0xb8u)); esp -= 4; W32(esp, 0x7c5c09u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c5c09: mov ecx, dword ptr [ebp - 0x6c] */
  ecx = R32((uint32_t)(ebp + 0xffffff94u));
/* 7c5c0c: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 7c5c0f: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 7c5c12: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 7c5c15: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7c5c18: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 7c5c1b: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 7c5c1e: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7c5c21: mov dword ptr [ebp - 0x18], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3f800000u);
/* 7c5c28: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 7c5c2b: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7c5c2e: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7c5c31: lea edi, [ebp - 0x4c] */
  edi = (uint32_t)(ebp + 0xffffffb4u);
/* 7c5c34: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7c5c36: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 7c5c38: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7c5c3a: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 7c5c3d: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7c5c3f: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 7c5c42: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7c5c44: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 7c5c47: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7c5c4a: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 7c5c4d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7c5c50: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 7c5c53: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7c5c56: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 7c5c59: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7c5c5c: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 7c5c5f: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c5c61: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7c5c63: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c5c65: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c5c67: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c5c69: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7c5c6c: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7c5c6f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7c5c72: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7c5c75: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7c5c78: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7c5c7b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7c5c7e: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7c5c81: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c5c83: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7c5c85: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c5c87: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c5c89: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c5c8b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7c5c8e: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7c5c91: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7c5c94: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7c5c97: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7c5c9a: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7c5c9d: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7c5ca0: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 7c5ca3: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c5ca5: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7c5ca7: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c5ca9: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c5cab: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c5cad: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c5caf: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7c5cb1: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c5cb3: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 7c5cb6: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 7c5cb9: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 7c5cbc: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7c5cbf: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 7c5cc2: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7c5cc5: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7c5cc8: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7c5ccb: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7c5ccd: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 7c5cd0: lea ecx, [ebp - 0x12c] */
  ecx = (uint32_t)(ebp + 0xfffffed4u);
/* 7c5cd6: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 7c5cd9: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7c5cdfu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7c5cdf: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c5ce2: mov eax, dword ptr [ecx + 0x54] */
  eax = R32((uint32_t)(ecx + 0x54u));
/* 7c5ce5: cmp dword ptr [eax + 0x2a4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x2a4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c5ceb: jle 0x7c5cf7 */
  if ((zf || sf != of)) goto L_7c5cf7;
L_7c5ced: /* 7c5ced: mov edx, dword ptr [eax + 0x2a0] */
  edx = R32((uint32_t)(eax + 0x2a0u));
/* 7c5cf3: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7c5cf5: jmp 0x7c5cf9 */
  goto L_7c5cf9;
L_7c5cf7: /* 7c5cf7: xor eax, eax */
  eax = 0;
L_7c5cf9: /* 7c5cf9: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7c5cfc: mov dword ptr [ecx + 0x2c], eax */
  W32((uint32_t)(ecx + 0x2cu), eax);
/* 7c5cff: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7c5d02: mov eax, dword ptr [ebp - 0x88] */
  eax = R32((uint32_t)(ebp + 0xffffff78u));
/* 7c5d08: add edx, 0x14 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7c5d0b: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7c5d0d: mov ecx, dword ptr [ebp - 0x84] */
  ecx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 7c5d13: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7c5d16: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 7c5d19: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7c5d1c: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7c5d1f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7c5d22: fstp dword ptr [ecx + 0x24] */
  WF32((uint32_t)(ecx + 0x24u), ST0); FPOP();
/* 7c5d25: lea ecx, [ebp - 0xd0] */
  ecx = (uint32_t)(ebp + 0xffffff30u);
/* 7c5d2b: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7c5d2e: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7c5d34u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7c5d34: xor eax, eax */
  eax = 0;
/* 7c5d36: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c5d39: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c5d40: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c5d41: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c5d42: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c5d43: mov esp, ebp */
  esp = ebp;
/* 7c5d45: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c5d46: ret 0x34 */
  esp += 56; SPILL(); return;
L_7c5d49: /* 7c5d49: lea ecx, [ebp - 0xd0] */
  ecx = (uint32_t)(ebp + 0xffffff30u);
/* 7c5d4f: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7c5d52: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7c5d58u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7c5d58: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c5d5b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c5d5c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c5d5d: mov eax, 1 */
  eax = 0x1u;
/* 7c5d62: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c5d69: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c5d6a: mov esp, ebp */
  esp = ebp;
/* 7c5d6c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c5d6d: ret 0x34 */
  esp += 56; SPILL(); return;
}

void f_7c5d70(void) {
  LOAD_REGS();
L_7c5d70: /* 7c5d70: mov edx, dword ptr [ebp - 0x90] */
  edx = R32((uint32_t)(ebp + 0xffffff70u));
/* 7c5d76: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c5d7b: lea eax, [ebp - 0x8c] */
  eax = (uint32_t)(ebp + 0xffffff74u);
/* 7c5d81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c5d82: mov dword ptr [ebp - 0x8c], edx */
  W32((uint32_t)(ebp + 0xffffff74u), edx);
/* 7c5d88: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c5d8du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c5d8d(); return;
}

void f_7c5d8d(void) {
  LOAD_REGS();
L_7c5d8d: /* 7c5d8d: push 0xa0e518 */
  { uint32_t v = 0xa0e518u; esp -= 4; W32(esp, v); }
/* 7c5d92: push 0xad433c */
  { uint32_t v = 0xad433cu; esp -= 4; W32(esp, v); }
/* 7c5d97: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c5d9du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c5d9d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c5da0: xor ebx, ebx */
  ebx = 0;
/* 7c5da2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c5da3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c5da4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c5da9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c5da9: guest_badaddr(0x7c5da9); return;
}

void f_7c5ee0(void) {
  LOAD_REGS();
L_7c5ee0: /* 7c5ee0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c5ee1: mov ebp, esp */
  ebp = esp;
/* 7c5ee3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7c5ee5: push 0x9cf920 */
  { uint32_t v = 0x9cf920u; esp -= 4; W32(esp, v); }
/* 7c5eea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7c5ef0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c5ef1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7c5ef8: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c5efb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c5efc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c5efd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c5efe: lea edx, [ebp - 0x84] */
  edx = (uint32_t)(ebp + 0xffffff7cu);
/* 7c5f04: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7c5f07: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7c5f0a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7c5f0c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c5f0d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7c5f14: call dword ptr [eax + 0xbc] */
  { uint32_t t = R32((uint32_t)(eax + 0xbcu)); esp -= 4; W32(esp, 0x7c5f1au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c5f1a: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7c5f1d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7c5f20: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7c5f23: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7c5f26: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7c5f29: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7c5f2b: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7c5f2e: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 7c5f31: mov dword ptr [ebp - 0x28], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x3f800000u);
/* 7c5f38: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7c5f3b: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 7c5f3e: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7c5f41: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7c5f44: lea edi, [ebp - 0x44] */
  edi = (uint32_t)(ebp + 0xffffffbcu);
/* 7c5f47: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7c5f49: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 7c5f4b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7c5f4d: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 7c5f50: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7c5f52: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 7c5f55: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7c5f57: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 7c5f5a: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7c5f5d: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 7c5f60: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7c5f63: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 7c5f66: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7c5f69: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 7c5f6c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7c5f6f: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 7c5f72: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c5f74: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7c5f76: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c5f78: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c5f7a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c5f7c: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7c5f7f: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7c5f82: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7c5f85: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7c5f88: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7c5f8b: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7c5f8e: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7c5f91: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7c5f94: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c5f96: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7c5f98: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c5f9a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c5f9c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c5f9e: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7c5fa1: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7c5fa4: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7c5fa7: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7c5faa: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7c5fad: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7c5fb0: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7c5fb3: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 7c5fb6: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c5fb8: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7c5fba: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c5fbc: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7c5fbe: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7c5fc0: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c5fc2: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7c5fc4: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c5fc6: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 7c5fc9: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 7c5fcc: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 7c5fcf: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 7c5fd5: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x7c5fdbu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 7c5fdb: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 7c5fde: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c5fe1: fsub dword ptr [eax + 0x418] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x418u)));
/* 7c5fe7: mov esi, dword ptr [0xcfa5d8] */
  esi = R32((uint32_t)(0xcfa5d8u));
/* 7c5fed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c5fee: fdiv dword ptr [eax + 0x340] */
  ST0 = ST0 / (F32((uint32_t)(eax + 0x340u)));
/* 7c5ff4: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7c5ff7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7c5ff9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c5ff9: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7c5ffc: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7c5ffe: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c6001: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7c6004: mov eax, dword ptr [eax + 0x344] */
  eax = R32((uint32_t)(eax + 0x344u));
/* 7c600a: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7c600c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c600f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 7c6010: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7c6012: jge 0x7c6018 */
  if ((sf == of)) goto L_7c6018;
L_7c6014: /* 7c6014: xor eax, eax */
  eax = 0;
/* 7c6016: jmp 0x7c601e */
  goto L_7c601e;
L_7c6018: /* 7c6018: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c601a: jge 0x7c601e */
  if ((sf == of)) goto L_7c601e;
L_7c601c: /* 7c601c: mov eax, ecx */
  eax = ecx;
L_7c601e: /* 7c601e: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 7c6021: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7c6023: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c6026: mov cl, byte ptr [eax + 0x33c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x33cu))) & 0xffu);
/* 7c602c: fsub dword ptr [eax + 0x41c] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x41cu)));
/* 7c6032: cmp cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7c6035: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c6036: jne 0x7c6052 */
  if (!zf) goto L_7c6052;
L_7c6038: /* 7c6038: fld dword ptr [eax + 0x340] */
  { double v = F32((uint32_t)(eax + 0x340u)); FPUSH(v); }
/* 7c603e: fmul dword ptr [0xa0e47c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0e47cu)));
/* 7c6044: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 7c6046: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7c6049: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7c604bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c604b: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7c604e: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7c6050: jmp 0x7c6062 */
  goto L_7c6062;
L_7c6052: /* 7c6052: fdiv dword ptr [eax + 0x340] */
  ST0 = ST0 / (F32((uint32_t)(eax + 0x340u)));
/* 7c6058: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7c605b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7c605du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7c605d: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 7c6060: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
L_7c6062: /* 7c6062: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7c6065: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 7c6068: mov eax, dword ptr [eax + 0x348] */
  eax = R32((uint32_t)(eax + 0x348u));
/* 7c606e: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7c6070: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c6073: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 7c6074: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7c6076: jge 0x7c607c */
  if ((sf == of)) goto L_7c607c;
L_7c6078: /* 7c6078: xor eax, eax */
  eax = 0;
/* 7c607a: jmp 0x7c6082 */
  goto L_7c6082;
L_7c607c: /* 7c607c: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c607e: jge 0x7c6082 */
  if ((sf == of)) goto L_7c6082;
L_7c6080: /* 7c6080: mov eax, ecx */
  eax = ecx;
L_7c6082: /* 7c6082: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7c6085: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c6086: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c6087: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7c6089: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7c6090: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c6091: mov esp, ebp */
  esp = ebp;
/* 7c6093: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c6094: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_7c6097(void) {
  LOAD_REGS();
L_7c6097: /* 7c6097: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7c609a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7c609f: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 7c60a2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c60a3: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 7c60a6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c60abu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7c60ab(); return;
}

void f_7c60ab(void) {
  LOAD_REGS();
L_7c60ab: /* 7c60ab: push 0xa0e570 */
  { uint32_t v = 0xa0e570u; esp -= 4; W32(esp, v); }
/* 7c60b0: push 0xad4398 */
  { uint32_t v = 0xad4398u; esp -= 4; W32(esp, v); }
/* 7c60b5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7c60bbu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7c60bb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c60be: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c60c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c60c2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7c60c7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7c60c7: guest_badaddr(0x7c60c7); return;
}

void f_7c6150(void) {
  LOAD_REGS();
L_7c6150: /* 7c6150: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c6153: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c6154: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c6155: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c6156: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c6157: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 7c615b: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7c615d: mov edx, dword ptr [0xcfa278] */
  edx = R32((uint32_t)(0xcfa278u));
/* 7c6163: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c6166: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c616a: mov ebp, eax */
  ebp = eax;
/* 7c616c: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 7c6170: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7c6178: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 7c6180: mov dword ptr [esp + 0x20], 0x3f800000 */
  W32((uint32_t)(esp + 0x20u), 0x3f800000u);
/* 7c6188: je 0x7c61aa */
  if (zf) goto L_7c61aa;
L_7c618a: /* 7c618a: mov dl, byte ptr [ecx + 0x3d2] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x3d2u))) & 0xffu);
/* 7c6190: mov byte ptr [esp + 0x14], dl */
  W8((uint32_t)(esp + 0x14u), (edx & 0xffu));
/* 7c6194: mov dl, byte ptr [ecx + 0x3d1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x3d1u))) & 0xffu);
/* 7c619a: mov byte ptr [esp + 0x15], dl */
  W8((uint32_t)(esp + 0x15u), (edx & 0xffu));
/* 7c619e: mov dl, byte ptr [ecx + 0x3d0] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x3d0u))) & 0xffu);
/* 7c61a4: mov byte ptr [esp + 0x16], dl */
  W8((uint32_t)(esp + 0x16u), (edx & 0xffu));
/* 7c61a8: jmp 0x7c61b4 */
  goto L_7c61b4;
L_7c61aa: /* 7c61aa: mov edx, dword ptr [ecx + 0x3d0] */
  edx = R32((uint32_t)(ecx + 0x3d0u));
/* 7c61b0: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
L_7c61b4: /* 7c61b4: mov ecx, dword ptr [ecx + 0x3fc] */
  ecx = R32((uint32_t)(ecx + 0x3fcu));
/* 7c61ba: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7c61bc: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 7c61c0: mov ecx, dword ptr [edx + 0x400] */
  ecx = R32((uint32_t)(edx + 0x400u));
/* 7c61c6: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7c61c9: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 7c61cd: mov ecx, dword ptr [edx + 0x420] */
  ecx = R32((uint32_t)(edx + 0x420u));
/* 7c61d3: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7c61d6: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 7c61da: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 7c61de: lea edx, [eax + 0xc] */
  edx = (uint32_t)(eax + 0xcu);
/* 7c61e1: mov edi, edx */
  edi = edx;
/* 7c61e3: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 7c61e5: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 7c61e9: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 7c61ec: mov dword ptr [edi + 8], esi */
  W32((uint32_t)(edi + 0x8u), esi);
/* 7c61ef: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 7c61f3: mov edi, dword ptr [edi + 0x378] */
  edi = R32((uint32_t)(edi + 0x378u));
/* 7c61f9: mov dword ptr [eax + 0x1c], edi */
  W32((uint32_t)(eax + 0x1cu), edi);
/* 7c61fc: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 7c6200: mov edi, dword ptr [edi + 0x380] */
  edi = R32((uint32_t)(edi + 0x380u));
/* 7c6206: mov dword ptr [eax + 0x20], edi */
  W32((uint32_t)(eax + 0x20u), edi);
/* 7c6209: add eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c620c: mov byte ptr [esp + 0x17], 0 */
  W8((uint32_t)(esp + 0x17u), 0x0u);
/* 7c6211: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7c6215: mov dword ptr [eax - 0xc], edi */
  W32((uint32_t)(eax + 0xfffffff4u), edi);
/* 7c6218: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 7c621c: mov ebx, dword ptr [ebx + 0x408] */
  ebx = R32((uint32_t)(ebx + 0x408u));
/* 7c6222: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 7c6224: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 7c6228: mov ebx, dword ptr [ebx + 0x400] */
  ebx = R32((uint32_t)(ebx + 0x400u));
/* 7c622e: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 7c6231: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 7c6235: mov ebx, dword ptr [ebx + 0x420] */
  ebx = R32((uint32_t)(ebx + 0x420u));
/* 7c623b: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 7c623e: lea ebx, [eax + 0xc] */
  ebx = (uint32_t)(eax + 0xcu);
/* 7c6241: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 7c6243: mov dword ptr [ebx + 4], edx */
  W32((uint32_t)(ebx + 0x4u), edx);
/* 7c6246: mov dword ptr [ebx + 8], esi */
  W32((uint32_t)(ebx + 0x8u), esi);
/* 7c6249: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 7c624d: fld dword ptr [ebx + 0x378] */
  { double v = F32((uint32_t)(ebx + 0x378u)); FPUSH(v); }
/* 7c6253: add eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c6256: fadd dword ptr [ebx + 0x374] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x374u)));
/* 7c625c: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 7c625f: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 7c6263: mov ebx, dword ptr [ebx + 0x380] */
  ebx = R32((uint32_t)(ebx + 0x380u));
/* 7c6269: mov dword ptr [eax - 4], ebx */
  W32((uint32_t)(eax + 0xfffffffcu), ebx);
/* 7c626c: mov dword ptr [eax - 0xc], edi */
  W32((uint32_t)(eax + 0xfffffff4u), edi);
/* 7c626f: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 7c6273: mov ebx, dword ptr [ebx + 0x3fc] */
  ebx = R32((uint32_t)(ebx + 0x3fcu));
/* 7c6279: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 7c627b: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 7c627f: mov ebx, dword ptr [ebx + 0x40c] */
  ebx = R32((uint32_t)(ebx + 0x40cu));
/* 7c6285: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 7c6288: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 7c628c: mov ebx, dword ptr [ebx + 0x420] */
  ebx = R32((uint32_t)(ebx + 0x420u));
/* 7c6292: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 7c6295: lea ebx, [eax + 0xc] */
  ebx = (uint32_t)(eax + 0xcu);
/* 7c6298: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 7c629a: mov dword ptr [ebx + 4], edx */
  W32((uint32_t)(ebx + 0x4u), edx);
/* 7c629d: mov dword ptr [ebx + 8], esi */
  W32((uint32_t)(ebx + 0x8u), esi);
/* 7c62a0: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 7c62a4: mov ebx, dword ptr [ebx + 0x378] */
  ebx = R32((uint32_t)(ebx + 0x378u));
/* 7c62aa: mov dword ptr [eax + 0x1c], ebx */
  W32((uint32_t)(eax + 0x1cu), ebx);
/* 7c62ad: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 7c62b1: fld dword ptr [ebx + 0x380] */
  { double v = F32((uint32_t)(ebx + 0x380u)); FPUSH(v); }
/* 7c62b7: add eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c62ba: fadd dword ptr [ebx + 0x37c] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x37cu)));
/* 7c62c0: mov dword ptr [eax - 0xc], edi */
  W32((uint32_t)(eax + 0xfffffff4u), edi);
/* 7c62c3: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* 7c62c6: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 7c62ca: mov ebx, dword ptr [ebx + 0x408] */
  ebx = R32((uint32_t)(ebx + 0x408u));
/* 7c62d0: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 7c62d2: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 7c62d6: mov ebx, dword ptr [ebx + 0x40c] */
  ebx = R32((uint32_t)(ebx + 0x40cu));
/* 7c62dc: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 7c62df: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 7c62e3: mov ebx, dword ptr [ebx + 0x420] */
  ebx = R32((uint32_t)(ebx + 0x420u));
/* 7c62e9: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 7c62ec: lea ebx, [eax + 0xc] */
  ebx = (uint32_t)(eax + 0xcu);
/* 7c62ef: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 7c62f1: mov dword ptr [ebx + 4], edx */
  W32((uint32_t)(ebx + 0x4u), edx);
/* 7c62f4: mov dword ptr [ebx + 8], esi */
  W32((uint32_t)(ebx + 0x8u), esi);
/* 7c62f7: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c62fb: fld dword ptr [ecx + 0x378] */
  { double v = F32((uint32_t)(ecx + 0x378u)); FPUSH(v); }
/* 7c6301: fadd dword ptr [ecx + 0x374] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x374u)));
/* 7c6307: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* 7c630a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c630e: fld dword ptr [ecx + 0x380] */
  { double v = F32((uint32_t)(ecx + 0x380u)); FPUSH(v); }
/* 7c6314: fadd dword ptr [ecx + 0x37c] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x37cu)));
/* 7c631a: mov dword ptr [eax + 0x18], edi */
  W32((uint32_t)(eax + 0x18u), edi);
/* 7c631d: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 7c6320: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7c6325: mov ecx, dword ptr [0xce84a8] */
  ecx = R32((uint32_t)(0xce84a8u));
/* 7c632b: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 7c632e: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7c6330: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c6332: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c6333: sub eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7c6335: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c6336: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7c6338: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c6339: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7c633b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c633c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c633f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7c63d0(void) {
  LOAD_REGS();
L_7c63d0: /* 7c63d0: sub esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7c63d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c63d4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c63d5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c63d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c63d7: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 7c63db: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7c63dd: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c63e1: mov edx, dword ptr [ecx + 0x3f8] */
  edx = R32((uint32_t)(ecx + 0x3f8u));
/* 7c63e7: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c63e9: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 7c63ed: mov eax, dword ptr [esp + 0x90] */
  eax = R32((uint32_t)(esp + 0x90u));
/* 7c63f4: lea edi, [ecx + 0x3d4] */
  edi = (uint32_t)(ecx + 0x3d4u);
/* 7c63fa: je 0x7c6402 */
  if (zf) goto L_7c6402;
L_7c63fc: /* 7c63fc: lea edi, [ecx + 0x3e0] */
  edi = (uint32_t)(ecx + 0x3e0u);
L_7c6402: /* 7c6402: mov edx, dword ptr [0xcfa278] */
  edx = R32((uint32_t)(0xcfa278u));
/* 7c6408: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 7c640a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c640c: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 7c6410: je 0x7c6432 */
  if (zf) goto L_7c6432;
L_7c6412: /* 7c6412: mov dl, byte ptr [ecx + 0x3d2] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x3d2u))) & 0xffu);
/* 7c6418: mov byte ptr [esp + 0x24], dl */
  W8((uint32_t)(esp + 0x24u), (edx & 0xffu));
/* 7c641c: mov dl, byte ptr [ecx + 0x3d1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x3d1u))) & 0xffu);
/* 7c6422: mov byte ptr [esp + 0x25], dl */
  W8((uint32_t)(esp + 0x25u), (edx & 0xffu));
/* 7c6426: mov dl, byte ptr [ecx + 0x3d0] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x3d0u))) & 0xffu);
/* 7c642c: mov byte ptr [esp + 0x26], dl */
  W8((uint32_t)(esp + 0x26u), (edx & 0xffu));
/* 7c6430: jmp 0x7c643c */
  goto L_7c643c;
L_7c6432: /* 7c6432: mov edx, dword ptr [ecx + 0x3d0] */
  edx = R32((uint32_t)(ecx + 0x3d0u));
/* 7c6438: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
L_7c643c: /* 7c643c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c643e: je 0x7c646a */
  if (zf) goto L_7c646a;
L_7c6440: /* 7c6440: mov dl, byte ptr [ecx + 0x3d2] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x3d2u))) & 0xffu);
/* 7c6446: mov byte ptr [esp + 0x1c], dl */
  W8((uint32_t)(esp + 0x1cu), (edx & 0xffu));
/* 7c644a: mov dl, byte ptr [ecx + 0x3d1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x3d1u))) & 0xffu);
/* 7c6450: mov byte ptr [esp + 0x1d], dl */
  W8((uint32_t)(esp + 0x1du), (edx & 0xffu));
/* 7c6454: mov dl, byte ptr [ecx + 0x3d0] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x3d0u))) & 0xffu);
/* 7c645a: mov byte ptr [esp + 0x1e], dl */
  W8((uint32_t)(esp + 0x1eu), (edx & 0xffu));
/* 7c645e: mov dl, byte ptr [ecx + 0x3d3] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x3d3u))) & 0xffu);
/* 7c6464: mov byte ptr [esp + 0x1f], dl */
  W8((uint32_t)(esp + 0x1fu), (edx & 0xffu));
/* 7c6468: jmp 0x7c6474 */
  goto L_7c6474;
L_7c646a: /* 7c646a: mov edx, dword ptr [ecx + 0x3d0] */
  edx = R32((uint32_t)(ecx + 0x3d0u));
/* 7c6470: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
L_7c6474: /* 7c6474: mov esi, dword ptr [ecx + 0x344] */
  esi = R32((uint32_t)(ecx + 0x344u));
/* 7c647a: cmp byte ptr [ecx + 0x33c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x33cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7c6481: mov dword ptr [esp + 0x30], esi */
  W32((uint32_t)(esp + 0x30u), esi);
/* 7c6485: fild dword ptr [esp + 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 7c6489: mov byte ptr [esp + 0x27], 0 */
  W8((uint32_t)(esp + 0x27u), 0x0u);
/* 7c648e: mov dword ptr [esp + 0x58], 0x3f800000 */
  W32((uint32_t)(esp + 0x58u), 0x3f800000u);
/* 7c6496: mov dword ptr [esp + 0x54], 0 */
  W32((uint32_t)(esp + 0x54u), 0x0u);
/* 7c649e: mov dword ptr [esp + 0x50], 0 */
  W32((uint32_t)(esp + 0x50u), 0x0u);
/* 7c64a6: jne 0x7c6c49 */
  if (!zf) goto L_7c6c49;
L_7c64ac: /* 7c64ac: fsub dword ptr [0x9f7194] */
  ST0 = ST0 - (F32((uint32_t)(0x9f7194u)));
/* 7c64b2: mov edx, dword ptr [ecx + 0x41c] */
  edx = R32((uint32_t)(ecx + 0x41cu));
/* 7c64b8: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 7c64be: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 7c64c2: mov edx, dword ptr [ecx + 0x348] */
  edx = R32((uint32_t)(ecx + 0x348u));
/* 7c64c8: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 7c64ca: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 7c64cb: mov dword ptr [esp + 0x38], edx */
  W32((uint32_t)(esp + 0x38u), edx);
/* 7c64cf: mov edx, dword ptr [ecx + 0x418] */
  edx = R32((uint32_t)(ecx + 0x418u));
/* 7c64d5: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 7c64d9: lea edx, [esi - 1] */
  edx = (uint32_t)(esi + 0xffffffffu);
/* 7c64dc: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 7c64e0: mov ebp, dword ptr [esp + 0x54] */
  ebp = R32((uint32_t)(esp + 0x54u));
/* 7c64e4: xor edx, edx */
  edx = 0;
/* 7c64e6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7c64e8: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 7c64ec: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 7c64f0: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 7c64f4: fild dword ptr [esp + 0x38] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 7c64f8: fmul dword ptr [ecx + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x340u)));
/* 7c64fe: fmul dword ptr [0xa0e47c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0e47cu)));
/* 7c6504: fadd dword ptr [ecx + 0x41c] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x41cu)));
/* 7c650a: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 7c650e: fild dword ptr [esp + 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 7c6512: fmul dword ptr [ecx + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x340u)));
/* 7c6518: fadd dword ptr [ecx + 0x418] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x418u)));
/* 7c651e: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 7c6522: fld dword ptr [ecx + 0x340] */
  { double v = F32((uint32_t)(ecx + 0x340u)); FPUSH(v); }
/* 7c6528: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7c652e: fadd dword ptr [ecx + 0x418] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x418u)));
/* 7c6534: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 7c6538: fmul dword ptr [ecx + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x340u)));
/* 7c653e: fadd dword ptr [ecx + 0x418] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x418u)));
/* 7c6544: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 7c6548: fld dword ptr [ecx + 0x340] */
  { double v = F32((uint32_t)(ecx + 0x340u)); FPUSH(v); }
/* 7c654e: fmul dword ptr [0xa0e47c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0e47cu)));
/* 7c6554: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 7c6558: fmul dword ptr [ecx + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x340u)));
/* 7c655e: fmul dword ptr [0xa0a848] */
  ST0 = ST0 * (F32((uint32_t)(0xa0a848u)));
/* 7c6564: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 7c6568: jle 0x7c65e6 */
  if ((zf || sf != of)) goto L_7c65e6;
L_7c656a: /* 7c656a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7c6570: /* 7c6570: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7c6574: mov ebx, dword ptr [esp + 0x50] */
  ebx = R32((uint32_t)(esp + 0x50u));
/* 7c6578: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7c657a: fmul dword ptr [ecx + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x340u)));
/* 7c6580: fadd dword ptr [ecx + 0x418] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x418u)));
/* 7c6586: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 7c658a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7c658d: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7c658f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6593: mov ecx, dword ptr [ecx + 0x420] */
  ecx = R32((uint32_t)(ecx + 0x420u));
/* 7c6599: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7c659c: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 7c659f: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 7c65a1: mov ebx, dword ptr [esp + 0x58] */
  ebx = R32((uint32_t)(esp + 0x58u));
/* 7c65a5: mov dword ptr [ecx + 4], ebp */
  W32((uint32_t)(ecx + 0x4u), ebp);
/* 7c65a8: mov dword ptr [ecx + 8], ebx */
  W32((uint32_t)(ecx + 0x8u), ebx);
/* 7c65ab: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c65af: fmul dword ptr [ecx + 0x374] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x374u)));
/* 7c65b5: add eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c65b8: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7c65b9: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 7c65bd: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 7c65c1: fadd dword ptr [ecx + 0x378] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x378u)));
/* 7c65c7: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 7c65ca: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c65ce: mov ecx, dword ptr [ecx + 0x380] */
  ecx = R32((uint32_t)(ecx + 0x380u));
/* 7c65d4: mov dword ptr [eax - 4], ecx */
  W32((uint32_t)(eax + 0xfffffffcu), ecx);
/* 7c65d7: mov dword ptr [eax - 0xc], esi */
  W32((uint32_t)(eax + 0xfffffff4u), esi);
/* 7c65da: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c65de: cmp edx, dword ptr [ecx + 0x344] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x344u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c65e4: jl 0x7c6570 */
  if ((sf != of)) goto L_7c6570;
L_7c65e6: /* 7c65e6: mov edx, dword ptr [ecx + 0x348] */
  edx = R32((uint32_t)(ecx + 0x348u));
/* 7c65ec: mov ebx, 1 */
  ebx = 0x1u;
/* 7c65f1: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 7c65f2: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c65f4: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 7c65f8: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 7c65fc: jle 0x7c6afe */
  if ((zf || sf != of)) goto L_7c6afe;
L_7c6602: /* 7c6602: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c6605: fild dword ptr [esp + 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 7c6609: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 7c660d: fmul dword ptr [ecx + 0x37c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x37cu)));
/* 7c6613: fidiv dword ptr [esp + 0x30] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(esp + 0x30u)));
/* 7c6617: fadd dword ptr [ecx + 0x380] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x380u)));
/* 7c661d: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7c6621: fmul dword ptr [ecx + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x340u)));
/* 7c6627: fmul dword ptr [0xa0e47c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0e47cu)));
/* 7c662d: fadd dword ptr [ecx + 0x41c] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x41cu)));
/* 7c6633: fst dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0);
/* 7c6636: je 0x7c6889 */
  if (zf) goto L_7c6889;
L_7c663c: /* 7c663c: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 7c6640: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 7c6644: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7c6646: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c664a: mov edx, dword ptr [ecx + 0x420] */
  edx = R32((uint32_t)(ecx + 0x420u));
/* 7c6650: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7c6653: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 7c6657: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 7c665a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7c665c: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 7c6660: mov dword ptr [ecx + 4], ebp */
  W32((uint32_t)(ecx + 0x4u), ebp);
/* 7c6663: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7c6666: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c666a: fmul dword ptr [ecx + 0x374] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x374u)));
/* 7c6670: add eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c6673: mov edx, 1 */
  edx = 0x1u;
/* 7c6678: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 7c667c: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7c6682: fadd dword ptr [ecx + 0x378] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x378u)));
/* 7c6688: mov dword ptr [eax - 0xc], esi */
  W32((uint32_t)(eax + 0xfffffff4u), esi);
/* 7c668b: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 7c668e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7c6690: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* 7c6693: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6697: mov ebp, dword ptr [ecx + 0x344] */
  ebp = R32((uint32_t)(ecx + 0x344u));
/* 7c669d: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  ebp = r;
  }
/* 7c669e: cmp ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c66a0: jle 0x7c6847 */
  if ((zf || sf != of)) goto L_7c6847;
L_7c66a6: /* 7c66a6: jmp 0x7c66b0 */
  goto L_7c66b0;
L_7c66b0: /* 7c66b0: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7c66b4: fadd dword ptr [0x9f7194] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7194u)));
/* 7c66ba: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7c66bc: fmul dword ptr [ecx + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x340u)));
/* 7c66c2: fadd dword ptr [ecx + 0x418] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x418u)));
/* 7c66c8: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7c66ca: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7c66cc: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 7c66cf: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c66d3: mov esi, dword ptr [ecx + 0x344] */
  esi = R32((uint32_t)(ecx + 0x344u));
/* 7c66d9: mov ebp, dword ptr [edi] */
  ebp = R32((uint32_t)(edi));
/* 7c66db: imul esi, ebx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(ebx);
  esi = (uint32_t)r;
  }
/* 7c66de: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7c66e0: fld dword ptr [ebp + esi*4] */
  { double v = F32((uint32_t)(ebp + esi*4)); FPUSH(v); }
/* 7c66e4: fmul dword ptr [ecx + 0x34c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x34cu)));
/* 7c66ea: fadd dword ptr [ecx + 0x420] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x420u)));
/* 7c66f0: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 7c66f3: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c66f7: fmul dword ptr [ecx + 0x374] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x374u)));
/* 7c66fd: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 7c6701: fadd dword ptr [ecx + 0x378] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x378u)));
/* 7c6707: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* 7c670a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7c670c: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 7c670f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6713: mov esi, dword ptr [ecx + 0x344] */
  esi = R32((uint32_t)(ecx + 0x344u));
/* 7c6719: mov ebp, dword ptr [ecx + 0x3ec] */
  ebp = R32((uint32_t)(ecx + 0x3ecu));
/* 7c671f: imul esi, ebx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(ebx);
  esi = (uint32_t)r;
  }
/* 7c6722: add esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7c6724: mov cl, byte ptr [esi + edx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + edx))) & 0xffu);
/* 7c6727: mov byte ptr [esp + 0x1f], cl */
  W8((uint32_t)(esp + 0x1fu), (ecx & 0xffu));
/* 7c672b: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 7c672f: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 7c6732: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7c6734: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 7c6738: mov ebp, dword ptr [esi + 0x344] */
  ebp = R32((uint32_t)(esi + 0x344u));
/* 7c673e: mov edi, ebp */
  edi = ebp;
/* 7c6740: imul edi, ebx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ebx);
  edi = (uint32_t)r;
  }
/* 7c6743: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7c6745: lea ecx, [ecx + edi*4] */
  ecx = (uint32_t)(ecx + edi*4);
/* 7c6748: lea edi, [ebx + 1] */
  edi = (uint32_t)(ebx + 0x1u);
/* 7c674b: imul edi, ebp */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ebp);
  edi = (uint32_t)r;
  }
/* 7c674e: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 7c6751: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 7c6755: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7c6757: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* 7c675b: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 7c675e: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 7c6762: lea edi, [edi + ebp*4] */
  edi = (uint32_t)(edi + ebp*4);
/* 7c6765: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 7c6767: fmul dword ptr [esi + 0x34c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34cu)));
/* 7c676d: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 7c676f: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 7c6771: fmul dword ptr [esi + 0x34c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34cu)));
/* 7c6777: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 7c677a: lea edi, [ebx - 1] */
  edi = (uint32_t)(ebx + 0xffffffffu);
/* 7c677d: mov ebp, edi */
  ebp = edi;
/* 7c677f: imul ebp, dword ptr [esi + 0x344] */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x344u)));
  ebp = (uint32_t)r;
  }
/* 7c6786: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 7c678a: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 7c678c: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 7c678e: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 7c6790: lea edi, [edi + ebp*4] */
  edi = (uint32_t)(edi + ebp*4);
/* 7c6793: fmul dword ptr [esi + 0x34c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34cu)));
/* 7c6799: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 7c679c: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 7c679e: fmul dword ptr [esi + 0x34c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34cu)));
/* 7c67a4: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 7c67a7: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 7c67a9: fmul dword ptr [esi + 0x34c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34cu)));
/* 7c67af: add eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c67b2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7c67b3: fstp dword ptr [esp + 0x6c] */
  WF32((uint32_t)(esp + 0x6cu), ST0); FPOP();
/* 7c67b7: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 7c67bb: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 7c67bd: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 7c67c1: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 7c67c3: fmul dword ptr [esi + 0x34c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34cu)));
/* 7c67c9: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 7c67cd: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c67cf: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 7c67d3: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7c67d5: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c67d7: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 7c67db: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7c67dd: fsubp st(3) */
  STI(3) = STI(3) - ST0;
  FPOP();
/* 7c67df: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7c67e1: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 7c67e5: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 7c67e7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7c67e9: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 7c67ed: fsubp st(3) */
  STI(3) = STI(3) - ST0;
  FPOP();
/* 7c67ef: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 7c67f3: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 7c67f7: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 7c67f9: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 7c67fd: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 7c6801: fsubp st(3) */
  STI(3) = STI(3) - ST0;
  FPOP();
/* 7c6803: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 7c6805: fstp dword ptr [eax - 0x18] */
  WF32((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 7c6808: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c680c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c680e: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7c6810: fsubr dword ptr [esp + 0x70] */
  ST0 = (F32((uint32_t)(esp + 0x70u))) - ST0;
/* 7c6814: fadd dword ptr [esp + 0x6c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x6cu)));
/* 7c6818: fmul dword ptr [ecx + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x340u)));
/* 7c681e: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 7c6822: mov dword ptr [eax - 0x10], ecx */
  W32((uint32_t)(eax + 0xfffffff0u), ecx);
/* 7c6825: fmul dword ptr [0xa07fdc] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fdcu)));
/* 7c682b: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* 7c682e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6832: mov esi, dword ptr [ecx + 0x344] */
  esi = R32((uint32_t)(ecx + 0x344u));
/* 7c6838: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 7c6839: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7c683b: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c683d: jl 0x7c66b0 */
  if ((sf != of)) goto L_7c66b0;
L_7c6843: /* 7c6843: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
L_7c6847: /* 7c6847: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 7c684b: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 7c684e: mov ebp, dword ptr [esp + 0x54] */
  ebp = R32((uint32_t)(esp + 0x54u));
/* 7c6852: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7c6854: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6858: mov edx, dword ptr [ecx + 0x420] */
  edx = R32((uint32_t)(ecx + 0x420u));
/* 7c685e: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7c6861: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 7c6865: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 7c6868: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7c686a: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 7c686e: mov dword ptr [ecx + 4], ebp */
  W32((uint32_t)(ecx + 0x4u), ebp);
/* 7c6871: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7c6874: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6878: fld dword ptr [ecx + 0x378] */
  { double v = F32((uint32_t)(ecx + 0x378u)); FPUSH(v); }
/* 7c687e: fadd dword ptr [ecx + 0x374] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x374u)));
/* 7c6884: jmp 0x7c6ad6 */
  goto L_7c6ad6;
L_7c6889: /* 7c6889: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 7c688d: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7c688f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7c6891: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 7c6895: mov ecx, dword ptr [edx + 0x420] */
  ecx = R32((uint32_t)(edx + 0x420u));
/* 7c689b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7c689e: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 7c68a2: lea edx, [eax + 0xc] */
  edx = (uint32_t)(eax + 0xcu);
/* 7c68a5: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7c68a7: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 7c68ab: mov dword ptr [edx + 4], ebp */
  W32((uint32_t)(edx + 0x4u), ebp);
/* 7c68ae: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7c68b1: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 7c68b5: mov ecx, dword ptr [edx + 0x378] */
  ecx = R32((uint32_t)(edx + 0x378u));
/* 7c68bb: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 7c68be: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 7c68c1: mov dword ptr [eax + 0x18], esi */
  W32((uint32_t)(eax + 0x18u), esi);
/* 7c68c4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c68c8: mov ebp, dword ptr [ecx + 0x344] */
  ebp = R32((uint32_t)(ecx + 0x344u));
/* 7c68ce: add eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c68d1: mov edx, 1 */
  edx = 0x1u;
/* 7c68d6: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  ebp = r;
  }
/* 7c68d7: cmp ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c68d9: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 7c68dd: jle 0x7c6a86 */
  if ((zf || sf != of)) goto L_7c6a86;
L_7c68e3: /* 7c68e3: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7c68e7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7c68e9: fmul dword ptr [ecx + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x340u)));
/* 7c68ef: fadd dword ptr [ecx + 0x418] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x418u)));
/* 7c68f5: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7c68f7: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7c68f9: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 7c68fc: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6900: mov esi, dword ptr [ecx + 0x344] */
  esi = R32((uint32_t)(ecx + 0x344u));
/* 7c6906: mov ebp, dword ptr [edi] */
  ebp = R32((uint32_t)(edi));
/* 7c6908: imul esi, ebx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(ebx);
  esi = (uint32_t)r;
  }
/* 7c690b: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7c690d: fld dword ptr [ebp + esi*4] */
  { double v = F32((uint32_t)(ebp + esi*4)); FPUSH(v); }
/* 7c6911: fmul dword ptr [ecx + 0x34c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x34cu)));
/* 7c6917: fadd dword ptr [ecx + 0x420] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x420u)));
/* 7c691d: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 7c6920: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6924: fmul dword ptr [ecx + 0x374] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x374u)));
/* 7c692a: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 7c692e: fadd dword ptr [ecx + 0x378] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x378u)));
/* 7c6934: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* 7c6937: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7c6939: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 7c693c: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6940: mov esi, dword ptr [ecx + 0x344] */
  esi = R32((uint32_t)(ecx + 0x344u));
/* 7c6946: mov ebp, dword ptr [ecx + 0x3ec] */
  ebp = R32((uint32_t)(ecx + 0x3ecu));
/* 7c694c: imul esi, ebx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(ebx);
  esi = (uint32_t)r;
  }
/* 7c694f: add esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7c6951: mov cl, byte ptr [esi + edx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + edx))) & 0xffu);
/* 7c6954: mov byte ptr [esp + 0x1f], cl */
  W8((uint32_t)(esp + 0x1fu), (ecx & 0xffu));
/* 7c6958: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 7c695c: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 7c695f: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7c6961: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 7c6965: mov ebp, dword ptr [esi + 0x344] */
  ebp = R32((uint32_t)(esi + 0x344u));
/* 7c696b: mov edi, ebp */
  edi = ebp;
/* 7c696d: imul edi, ebx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ebx);
  edi = (uint32_t)r;
  }
/* 7c6970: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7c6972: lea ecx, [ecx + edi*4] */
  ecx = (uint32_t)(ecx + edi*4);
/* 7c6975: lea edi, [ebx + 1] */
  edi = (uint32_t)(ebx + 0x1u);
/* 7c6978: imul edi, ebp */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ebp);
  edi = (uint32_t)r;
  }
/* 7c697b: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 7c697e: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 7c6982: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7c6984: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* 7c6988: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 7c698b: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 7c698f: lea edi, [edi + ebp*4] */
  edi = (uint32_t)(edi + ebp*4);
/* 7c6992: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 7c6994: fmul dword ptr [esi + 0x34c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34cu)));
/* 7c699a: fld dword ptr [edi - 4] */
  { double v = F32((uint32_t)(edi + 0xfffffffcu)); FPUSH(v); }
/* 7c699d: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 7c699f: fmul dword ptr [esi + 0x34c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34cu)));
/* 7c69a5: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 7c69a7: lea edi, [ebx - 1] */
  edi = (uint32_t)(ebx + 0xffffffffu);
/* 7c69aa: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 7c69ac: mov ebp, edi */
  ebp = edi;
/* 7c69ae: imul ebp, dword ptr [esi + 0x344] */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x344u)));
  ebp = (uint32_t)r;
  }
/* 7c69b5: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 7c69b9: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 7c69bb: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 7c69bd: fmul dword ptr [esi + 0x34c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34cu)));
/* 7c69c3: lea edi, [edi + ebp*4] */
  edi = (uint32_t)(edi + ebp*4);
/* 7c69c6: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 7c69c9: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 7c69cb: fmul dword ptr [esi + 0x34c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34cu)));
/* 7c69d1: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 7c69d3: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 7c69d5: fmul dword ptr [esi + 0x34c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34cu)));
/* 7c69db: fstp dword ptr [esp + 0x84] */
  WF32((uint32_t)(esp + 0x84u), ST0); FPOP();
/* 7c69e2: add eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c69e5: fld dword ptr [edi - 4] */
  { double v = F32((uint32_t)(edi + 0xfffffffcu)); FPUSH(v); }
/* 7c69e8: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 7c69ec: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 7c69ee: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7c69ef: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 7c69f3: fmul dword ptr [esi + 0x34c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34cu)));
/* 7c69f9: fstp dword ptr [esp + 0x88] */
  WF32((uint32_t)(esp + 0x88u), ST0); FPOP();
/* 7c6a00: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c6a02: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 7c6a06: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7c6a08: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c6a0a: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 7c6a0e: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7c6a10: fsubp st(3) */
  STI(3) = STI(3) - ST0;
  FPOP();
/* 7c6a12: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7c6a14: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 7c6a18: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 7c6a1a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7c6a1c: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 7c6a20: fsubp st(3) */
  STI(3) = STI(3) - ST0;
  FPOP();
/* 7c6a22: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 7c6a29: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 7c6a2d: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 7c6a2f: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 7c6a36: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 7c6a3a: fsubp st(3) */
  STI(3) = STI(3) - ST0;
  FPOP();
/* 7c6a3c: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 7c6a3e: fstp dword ptr [eax - 0x18] */
  WF32((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 7c6a41: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6a45: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c6a47: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7c6a49: fsubr dword ptr [esp + 0x88] */
  ST0 = (F32((uint32_t)(esp + 0x88u))) - ST0;
/* 7c6a50: fadd dword ptr [esp + 0x84] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x84u)));
/* 7c6a57: fmul dword ptr [ecx + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x340u)));
/* 7c6a5d: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 7c6a61: mov dword ptr [eax - 0x10], ecx */
  W32((uint32_t)(eax + 0xfffffff0u), ecx);
/* 7c6a64: fmul dword ptr [0xa07fdc] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fdcu)));
/* 7c6a6a: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* 7c6a6d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6a71: mov esi, dword ptr [ecx + 0x344] */
  esi = R32((uint32_t)(ecx + 0x344u));
/* 7c6a77: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 7c6a78: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7c6a7a: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c6a7c: jl 0x7c68e3 */
  if ((sf != of)) goto L_7c68e3;
L_7c6a82: /* 7c6a82: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
L_7c6a86: /* 7c6a86: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 7c6a8a: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 7c6a8d: mov ebp, dword ptr [esp + 0x54] */
  ebp = R32((uint32_t)(esp + 0x54u));
/* 7c6a91: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7c6a93: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6a97: mov edx, dword ptr [ecx + 0x420] */
  edx = R32((uint32_t)(ecx + 0x420u));
/* 7c6a9d: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7c6aa0: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 7c6aa4: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 7c6aa7: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7c6aa9: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 7c6aad: mov dword ptr [ecx + 4], ebp */
  W32((uint32_t)(ecx + 0x4u), ebp);
/* 7c6ab0: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7c6ab3: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6ab7: mov edx, dword ptr [ecx + 0x344] */
  edx = R32((uint32_t)(ecx + 0x344u));
/* 7c6abd: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 7c6abe: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 7c6ac2: fild dword ptr [esp + 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 7c6ac6: fmul dword ptr [ecx + 0x374] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x374u)));
/* 7c6acc: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 7c6ad0: fadd dword ptr [ecx + 0x378] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x378u)));
L_7c6ad6: /* 7c6ad6: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* 7c6ad9: mov dword ptr [eax + 0x18], esi */
  W32((uint32_t)(eax + 0x18u), esi);
/* 7c6adc: add eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c6adf: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* 7c6ae2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6ae6: mov edx, dword ptr [ecx + 0x348] */
  edx = R32((uint32_t)(ecx + 0x348u));
/* 7c6aec: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7c6aed: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 7c6aee: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c6af0: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 7c6af4: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 7c6af8: jl 0x7c6602 */
  if ((sf != of)) goto L_7c6602;
L_7c6afe: /* 7c6afe: mov edx, dword ptr [ecx + 0x348] */
  edx = R32((uint32_t)(ecx + 0x348u));
/* 7c6b04: mov edi, dword ptr [ecx + 0x344] */
  edi = R32((uint32_t)(ecx + 0x344u));
/* 7c6b0a: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 7c6b0b: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c6b0e: je 0x7c6baf */
  if (zf) goto L_7c6baf;
L_7c6b14: /* 7c6b14: xor edx, edx */
  edx = 0;
/* 7c6b16: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7c6b18: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 7c6b1c: jle 0x7c700f */
  if ((zf || sf != of)) goto L_7c700f;
L_7c6b22: /* 7c6b22: mov ebx, dword ptr [esp + 0x50] */
  ebx = R32((uint32_t)(esp + 0x50u));
/* 7c6b26: mov edi, dword ptr [esp + 0x58] */
  edi = R32((uint32_t)(esp + 0x58u));
/* 7c6b2a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7c6b30: /* 7c6b30: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7c6b34: fadd dword ptr [0x9f7194] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7194u)));
/* 7c6b3a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7c6b3c: fmul dword ptr [ecx + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x340u)));
/* 7c6b42: fadd dword ptr [ecx + 0x418] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x418u)));
/* 7c6b48: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 7c6b4c: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7c6b4f: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7c6b51: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6b55: mov ecx, dword ptr [ecx + 0x420] */
  ecx = R32((uint32_t)(ecx + 0x420u));
/* 7c6b5b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7c6b5e: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 7c6b61: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 7c6b63: mov dword ptr [ecx + 4], ebp */
  W32((uint32_t)(ecx + 0x4u), ebp);
/* 7c6b66: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7c6b69: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6b6d: fmul dword ptr [ecx + 0x374] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x374u)));
/* 7c6b73: add eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c6b76: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7c6b77: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 7c6b7b: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 7c6b7f: fadd dword ptr [ecx + 0x378] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x378u)));
/* 7c6b85: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 7c6b88: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6b8c: fld dword ptr [ecx + 0x380] */
  { double v = F32((uint32_t)(ecx + 0x380u)); FPUSH(v); }
/* 7c6b92: fadd dword ptr [ecx + 0x37c] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x37cu)));
/* 7c6b98: mov dword ptr [eax - 0xc], esi */
  W32((uint32_t)(eax + 0xfffffff4u), esi);
/* 7c6b9b: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* 7c6b9e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6ba2: cmp edx, dword ptr [ecx + 0x344] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x344u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c6ba8: jl 0x7c6b30 */
  if ((sf != of)) goto L_7c6b30;
L_7c6baa: /* 7c6baa: jmp 0x7c700f */
  goto L_7c700f;
L_7c6baf: /* 7c6baf: xor edx, edx */
  edx = 0;
/* 7c6bb1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7c6bb3: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 7c6bb7: jle 0x7c700f */
  if ((zf || sf != of)) goto L_7c700f;
L_7c6bbd: /* 7c6bbd: mov edi, dword ptr [esp + 0x58] */
  edi = R32((uint32_t)(esp + 0x58u));
/* 7c6bc1: mov ebx, dword ptr [esp + 0x50] */
  ebx = R32((uint32_t)(esp + 0x50u));
/* 7c6bc5: jmp 0x7c6bd0 */
  goto L_7c6bd0;
L_7c6bd0: /* 7c6bd0: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7c6bd4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7c6bd6: fmul dword ptr [ecx + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x340u)));
/* 7c6bdc: fadd dword ptr [ecx + 0x418] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x418u)));
/* 7c6be2: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 7c6be6: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7c6be9: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7c6beb: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6bef: mov ecx, dword ptr [ecx + 0x420] */
  ecx = R32((uint32_t)(ecx + 0x420u));
/* 7c6bf5: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7c6bf8: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 7c6bfb: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 7c6bfd: mov dword ptr [ecx + 4], ebp */
  W32((uint32_t)(ecx + 0x4u), ebp);
/* 7c6c00: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7c6c03: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6c07: fmul dword ptr [ecx + 0x374] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x374u)));
/* 7c6c0d: add eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c6c10: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7c6c11: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 7c6c15: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 7c6c19: fadd dword ptr [ecx + 0x378] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x378u)));
/* 7c6c1f: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 7c6c22: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6c26: fld dword ptr [ecx + 0x380] */
  { double v = F32((uint32_t)(ecx + 0x380u)); FPUSH(v); }
/* 7c6c2c: fadd dword ptr [ecx + 0x37c] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x37cu)));
/* 7c6c32: mov dword ptr [eax - 0xc], esi */
  W32((uint32_t)(eax + 0xfffffff4u), esi);
/* 7c6c35: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* 7c6c38: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6c3c: cmp edx, dword ptr [ecx + 0x344] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x344u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c6c42: jl 0x7c6bd0 */
  if ((sf != of)) goto L_7c6bd0;
L_7c6c44: /* 7c6c44: jmp 0x7c700f */
  goto L_7c700f;
L_7c6c49: /* 7c6c49: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 7c6c4f: mov ebx, dword ptr [esp + 0x54] */
  ebx = R32((uint32_t)(esp + 0x54u));
/* 7c6c53: xor edx, edx */
  edx = 0;
/* 7c6c55: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7c6c57: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 7c6c5d: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 7c6c61: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 7c6c65: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 7c6c69: fld dword ptr [ecx + 0x340] */
  { double v = F32((uint32_t)(ecx + 0x340u)); FPUSH(v); }
/* 7c6c6f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7c6c71: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7c6c73: fmul dword ptr [0xa0aef4] */
  ST0 = ST0 * (F32((uint32_t)(0xa0aef4u)));
/* 7c6c79: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 7c6c7d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7c6c7f: jle 0x7c6cfd */
  if ((zf || sf != of)) goto L_7c6cfd;
L_7c6c81: /* 7c6c81: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7c6c85: mov ebp, dword ptr [esp + 0x50] */
  ebp = R32((uint32_t)(esp + 0x50u));
/* 7c6c89: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7c6c8b: fmul dword ptr [ecx + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x340u)));
/* 7c6c91: fadd dword ptr [ecx + 0x418] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x418u)));
/* 7c6c97: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7c6c99: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6c9d: mov ecx, dword ptr [ecx + 0x41c] */
  ecx = R32((uint32_t)(ecx + 0x41cu));
/* 7c6ca3: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7c6ca6: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6caa: mov ecx, dword ptr [ecx + 0x420] */
  ecx = R32((uint32_t)(ecx + 0x420u));
/* 7c6cb0: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7c6cb3: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 7c6cb6: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 7c6cb8: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 7c6cbc: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 7c6cbf: mov dword ptr [ecx + 8], ebp */
  W32((uint32_t)(ecx + 0x8u), ebp);
/* 7c6cc2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6cc6: fmul dword ptr [ecx + 0x374] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x374u)));
/* 7c6ccc: add eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c6ccf: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7c6cd0: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 7c6cd4: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 7c6cd8: fadd dword ptr [ecx + 0x378] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x378u)));
/* 7c6cde: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 7c6ce1: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6ce5: mov ecx, dword ptr [ecx + 0x380] */
  ecx = R32((uint32_t)(ecx + 0x380u));
/* 7c6ceb: mov dword ptr [eax - 4], ecx */
  W32((uint32_t)(eax + 0xfffffffcu), ecx);
/* 7c6cee: mov dword ptr [eax - 0xc], esi */
  W32((uint32_t)(eax + 0xfffffff4u), esi);
/* 7c6cf1: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6cf5: cmp edx, dword ptr [ecx + 0x344] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x344u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c6cfb: jl 0x7c6c81 */
  if ((sf != of)) goto L_7c6c81;
L_7c6cfd: /* 7c6cfd: mov edx, dword ptr [ecx + 0x348] */
  edx = R32((uint32_t)(ecx + 0x348u));
/* 7c6d03: mov ebp, 1 */
  ebp = 0x1u;
/* 7c6d08: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 7c6d09: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c6d0b: mov dword ptr [esp + 0x28], ebp */
  W32((uint32_t)(esp + 0x28u), ebp);
/* 7c6d0f: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 7c6d13: jle 0x7c6f60 */
  if ((zf || sf != of)) goto L_7c6f60;
L_7c6d19: /* 7c6d19: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7c6d20: /* 7c6d20: fild dword ptr [esp + 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 7c6d24: mov edx, dword ptr [ecx + 0x418] */
  edx = R32((uint32_t)(ecx + 0x418u));
/* 7c6d2a: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 7c6d2e: fmul dword ptr [ecx + 0x37c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x37cu)));
/* 7c6d34: fidiv dword ptr [esp + 0x30] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(esp + 0x30u)));
/* 7c6d38: fadd dword ptr [ecx + 0x380] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x380u)));
/* 7c6d3e: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7c6d42: fmul dword ptr [ecx + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x340u)));
/* 7c6d48: fadd dword ptr [ecx + 0x41c] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x41cu)));
/* 7c6d4e: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7c6d50: fst dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0);
/* 7c6d53: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6d57: mov edx, dword ptr [ecx + 0x420] */
  edx = R32((uint32_t)(ecx + 0x420u));
/* 7c6d5d: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7c6d5f: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7c6d62: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 7c6d66: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 7c6d69: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7c6d6b: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 7c6d6f: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 7c6d72: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7c6d75: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6d79: mov edx, dword ptr [ecx + 0x378] */
  edx = R32((uint32_t)(ecx + 0x378u));
/* 7c6d7f: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 7c6d82: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 7c6d85: mov dword ptr [eax + 0x18], esi */
  W32((uint32_t)(eax + 0x18u), esi);
/* 7c6d88: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 7c6d8c: mov ebx, dword ptr [edx + 0x344] */
  ebx = R32((uint32_t)(edx + 0x344u));
/* 7c6d92: add eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c6d95: mov ecx, 1 */
  ecx = 0x1u;
/* 7c6d9a: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 7c6d9b: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c6d9d: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 7c6da1: jle 0x7c6ee4 */
  if ((zf || sf != of)) goto L_7c6ee4;
L_7c6da7: /* 7c6da7: jmp 0x7c6db0 */
  goto L_7c6db0;
L_7c6db0: /* 7c6db0: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7c6db4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7c6db6: fmul dword ptr [edx + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x340u)));
/* 7c6dbc: fadd dword ptr [edx + 0x418] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x418u)));
/* 7c6dc2: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7c6dc4: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7c6dc6: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 7c6dc9: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 7c6dcd: mov esi, dword ptr [edx + 0x344] */
  esi = R32((uint32_t)(edx + 0x344u));
/* 7c6dd3: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 7c6dd5: imul esi, ebp */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(ebp);
  esi = (uint32_t)r;
  }
/* 7c6dd8: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7c6dda: fld dword ptr [ebx + esi*4] */
  { double v = F32((uint32_t)(ebx + esi*4)); FPUSH(v); }
/* 7c6ddd: fmul dword ptr [edx + 0x34c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34cu)));
/* 7c6de3: fadd dword ptr [edx + 0x420] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x420u)));
/* 7c6de9: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 7c6dec: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 7c6df0: fmul dword ptr [edx + 0x374] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x374u)));
/* 7c6df6: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 7c6dfa: fadd dword ptr [edx + 0x378] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x378u)));
/* 7c6e00: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* 7c6e03: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7c6e05: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 7c6e08: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 7c6e0c: mov esi, dword ptr [edx + 0x344] */
  esi = R32((uint32_t)(edx + 0x344u));
/* 7c6e12: mov ebx, dword ptr [edx + 0x3ec] */
  ebx = R32((uint32_t)(edx + 0x3ecu));
/* 7c6e18: imul esi, ebp */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(ebp);
  esi = (uint32_t)r;
  }
/* 7c6e1b: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7c6e1d: mov dl, byte ptr [esi + ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + ecx))) & 0xffu);
/* 7c6e20: mov byte ptr [esp + 0x1f], dl */
  W8((uint32_t)(esp + 0x1fu), (edx & 0xffu));
/* 7c6e24: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 7c6e28: mov dword ptr [eax + 0x18], edx */
  W32((uint32_t)(eax + 0x18u), edx);
/* 7c6e2b: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 7c6e2f: mov ebx, dword ptr [esi + 0x344] */
  ebx = R32((uint32_t)(esi + 0x344u));
/* 7c6e35: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7c6e37: imul ebx, ebp */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(ebp);
  ebx = (uint32_t)r;
  }
/* 7c6e3a: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7c6e3c: lea edx, [edx + ebx*4] */
  edx = (uint32_t)(edx + ebx*4);
/* 7c6e3f: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  ebp = r;
  }
/* 7c6e40: lea ebx, [ebp + 2] */
  ebx = (uint32_t)(ebp + 0x2u);
/* 7c6e43: fld dword ptr [edx - 4] */
  { double v = F32((uint32_t)(edx + 0xfffffffcu)); FPUSH(v); }
/* 7c6e46: mov ebp, ebx */
  ebp = ebx;
/* 7c6e48: imul ebp, dword ptr [esi + 0x344] */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x344u)));
  ebp = (uint32_t)r;
  }
/* 7c6e4f: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 7c6e51: add ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 7c6e53: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 7c6e55: fmul dword ptr [esi + 0x34c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34cu)));
/* 7c6e5b: fld dword ptr [ebx + ebp*4] */
  { double v = F32((uint32_t)(ebx + ebp*4)); FPUSH(v); }
/* 7c6e5e: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 7c6e62: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 7c6e63: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 7c6e65: mov ebp, ebx */
  ebp = ebx;
/* 7c6e67: imul ebp, dword ptr [esi + 0x344] */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x344u)));
  ebp = (uint32_t)r;
  }
/* 7c6e6e: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 7c6e70: add ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 7c6e72: fmul dword ptr [esi + 0x34c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34cu)));
/* 7c6e78: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 7c6e7b: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 7c6e7d: fmul dword ptr [esi + 0x34c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34cu)));
/* 7c6e83: fld dword ptr [ebx + ebp*4] */
  { double v = F32((uint32_t)(ebx + ebp*4)); FPUSH(v); }
/* 7c6e86: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 7c6e88: fmul dword ptr [esi + 0x34c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34cu)));
/* 7c6e8e: fstp dword ptr [esp + 0x68] */
  WF32((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 7c6e92: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 7c6e94: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 7c6e96: fmul dword ptr [esi + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x340u)));
/* 7c6e9c: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7c6e9e: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 7c6ea1: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 7c6ea5: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 7c6ea7: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 7c6eab: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 7c6eaf: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 7c6eb1: add eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c6eb4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7c6eb5: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 7c6eb9: fmul dword ptr [edx + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x340u)));
/* 7c6ebf: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 7c6ec3: mov dword ptr [eax - 0x10], edx */
  W32((uint32_t)(eax + 0xfffffff0u), edx);
/* 7c6ec6: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7c6ec8: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* 7c6ecb: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 7c6ecf: mov esi, dword ptr [edx + 0x344] */
  esi = R32((uint32_t)(edx + 0x344u));
/* 7c6ed5: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 7c6ed6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7c6ed8: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c6eda: jl 0x7c6db0 */
  if ((sf != of)) goto L_7c6db0;
L_7c6ee0: /* 7c6ee0: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
L_7c6ee4: /* 7c6ee4: mov ecx, dword ptr [edx + 0x344] */
  ecx = R32((uint32_t)(edx + 0x344u));
/* 7c6eea: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7c6eeb: mov ebx, dword ptr [esp + 0x54] */
  ebx = R32((uint32_t)(esp + 0x54u));
/* 7c6eef: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 7c6ef3: fild dword ptr [esp + 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 7c6ef7: fmul dword ptr [edx + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x340u)));
/* 7c6efd: fadd dword ptr [edx + 0x418] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x418u)));
/* 7c6f03: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7c6f05: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 7c6f08: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 7c6f0c: mov ecx, dword ptr [edx + 0x420] */
  ecx = R32((uint32_t)(edx + 0x420u));
/* 7c6f12: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7c6f15: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 7c6f19: lea edx, [eax + 0xc] */
  edx = (uint32_t)(eax + 0xcu);
/* 7c6f1c: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7c6f1e: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 7c6f22: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 7c6f25: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7c6f28: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6f2c: fld dword ptr [ecx + 0x378] */
  { double v = F32((uint32_t)(ecx + 0x378u)); FPUSH(v); }
/* 7c6f32: add eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c6f35: fadd dword ptr [ecx + 0x374] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x374u)));
/* 7c6f3b: mov dword ptr [eax - 0xc], esi */
  W32((uint32_t)(eax + 0xfffffff4u), esi);
/* 7c6f3e: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 7c6f3f: mov dword ptr [esp + 0x28], ebp */
  W32((uint32_t)(esp + 0x28u), ebp);
/* 7c6f43: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 7c6f46: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* 7c6f49: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6f4d: mov edx, dword ptr [ecx + 0x348] */
  edx = R32((uint32_t)(ecx + 0x348u));
/* 7c6f53: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 7c6f54: cmp ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c6f56: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 7c6f5a: jl 0x7c6d20 */
  if ((sf != of)) goto L_7c6d20;
L_7c6f60: /* 7c6f60: mov edi, dword ptr [ecx + 0x344] */
  edi = R32((uint32_t)(ecx + 0x344u));
/* 7c6f66: xor edx, edx */
  edx = 0;
/* 7c6f68: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7c6f6a: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 7c6f6e: jle 0x7c700f */
  if ((zf || sf != of)) goto L_7c700f;
L_7c6f74: /* 7c6f74: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7c6f78: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7c6f7a: fmul dword ptr [ecx + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x340u)));
/* 7c6f80: fadd dword ptr [ecx + 0x418] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x418u)));
/* 7c6f86: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7c6f88: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6f8c: mov edi, dword ptr [ecx + 0x348] */
  edi = R32((uint32_t)(ecx + 0x348u));
/* 7c6f92: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 7c6f93: mov dword ptr [esp + 0x48], edi */
  W32((uint32_t)(esp + 0x48u), edi);
/* 7c6f97: fild dword ptr [esp + 0x48] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 7c6f9b: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 7c6f9f: fmul dword ptr [ecx + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x340u)));
/* 7c6fa5: fadd dword ptr [ecx + 0x41c] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x41cu)));
/* 7c6fab: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 7c6fae: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6fb2: mov ecx, dword ptr [ecx + 0x420] */
  ecx = R32((uint32_t)(ecx + 0x420u));
/* 7c6fb8: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7c6fbb: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 7c6fbe: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7c6fc0: mov edi, dword ptr [esp + 0x58] */
  edi = R32((uint32_t)(esp + 0x58u));
/* 7c6fc4: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 7c6fc7: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7c6fca: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6fce: fmul dword ptr [ecx + 0x374] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x374u)));
/* 7c6fd4: add eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c6fd7: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7c6fd8: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 7c6fdc: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 7c6fe0: fadd dword ptr [ecx + 0x378] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x378u)));
/* 7c6fe6: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 7c6fe9: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6fed: fld dword ptr [ecx + 0x380] */
  { double v = F32((uint32_t)(ecx + 0x380u)); FPUSH(v); }
/* 7c6ff3: fadd dword ptr [ecx + 0x37c] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x37cu)));
/* 7c6ff9: mov dword ptr [eax - 0xc], esi */
  W32((uint32_t)(eax + 0xfffffff4u), esi);
/* 7c6ffc: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* 7c6fff: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c7003: cmp edx, dword ptr [ecx + 0x344] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x344u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c7009: jl 0x7c6f74 */
  if ((sf != of)) goto L_7c6f74;
L_7c700f: /* 7c700f: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 7c7015: mov eax, dword ptr [0xce84a8] */
  eax = R32((uint32_t)(0xce84a8u));
/* 7c701a: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 7c701d: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7c701f: mov esi, dword ptr [esp + 0x4c] */
  esi = R32((uint32_t)(esp + 0x4cu));
/* 7c7023: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c7025: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c7026: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7c7028: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c7029: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7c702b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c702c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7c702e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c702f: add esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c7032: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7c66a8(void) {
  LOAD_REGS();
  goto L_7c66a8;
L_7c6602: /* 7c6602: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c6605: fild dword ptr [esp + 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 7c6609: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 7c660d: fmul dword ptr [ecx + 0x37c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x37cu)));
/* 7c6613: fidiv dword ptr [esp + 0x30] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(esp + 0x30u)));
/* 7c6617: fadd dword ptr [ecx + 0x380] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x380u)));
/* 7c661d: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7c6621: fmul dword ptr [ecx + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x340u)));
/* 7c6627: fmul dword ptr [0xa0e47c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0e47cu)));
/* 7c662d: fadd dword ptr [ecx + 0x41c] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x41cu)));
/* 7c6633: fst dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0);
/* 7c6636: je 0x7c6889 */
  if (zf) goto L_7c6889;
L_7c663c: /* 7c663c: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 7c6640: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 7c6644: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7c6646: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c664a: mov edx, dword ptr [ecx + 0x420] */
  edx = R32((uint32_t)(ecx + 0x420u));
/* 7c6650: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7c6653: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 7c6657: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 7c665a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7c665c: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 7c6660: mov dword ptr [ecx + 4], ebp */
  W32((uint32_t)(ecx + 0x4u), ebp);
/* 7c6663: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7c6666: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c666a: fmul dword ptr [ecx + 0x374] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x374u)));
/* 7c6670: add eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c6673: mov edx, 1 */
  edx = 0x1u;
/* 7c6678: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 7c667c: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7c6682: fadd dword ptr [ecx + 0x378] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x378u)));
/* 7c6688: mov dword ptr [eax - 0xc], esi */
  W32((uint32_t)(eax + 0xfffffff4u), esi);
/* 7c668b: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 7c668e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7c6690: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* 7c6693: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6697: mov ebp, dword ptr [ecx + 0x344] */
  ebp = R32((uint32_t)(ecx + 0x344u));
/* 7c669d: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  ebp = r;
  }
/* 7c669e: cmp ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c66a0: jle 0x7c6847 */
  if ((zf || sf != of)) goto L_7c6847;
L_7c66a6: /* 7c66a6: jmp 0x7c66b0 */
  goto L_7c66b0;
L_7c66a8: /* 7c66a8: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 7c66af: nop  */
L_7c66b0: /* 7c66b0: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7c66b4: fadd dword ptr [0x9f7194] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7194u)));
/* 7c66ba: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7c66bc: fmul dword ptr [ecx + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x340u)));
/* 7c66c2: fadd dword ptr [ecx + 0x418] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x418u)));
/* 7c66c8: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7c66ca: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7c66cc: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 7c66cf: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c66d3: mov esi, dword ptr [ecx + 0x344] */
  esi = R32((uint32_t)(ecx + 0x344u));
/* 7c66d9: mov ebp, dword ptr [edi] */
  ebp = R32((uint32_t)(edi));
/* 7c66db: imul esi, ebx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(ebx);
  esi = (uint32_t)r;
  }
/* 7c66de: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7c66e0: fld dword ptr [ebp + esi*4] */
  { double v = F32((uint32_t)(ebp + esi*4)); FPUSH(v); }
/* 7c66e4: fmul dword ptr [ecx + 0x34c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x34cu)));
/* 7c66ea: fadd dword ptr [ecx + 0x420] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x420u)));
/* 7c66f0: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 7c66f3: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c66f7: fmul dword ptr [ecx + 0x374] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x374u)));
/* 7c66fd: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 7c6701: fadd dword ptr [ecx + 0x378] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x378u)));
/* 7c6707: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* 7c670a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7c670c: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 7c670f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6713: mov esi, dword ptr [ecx + 0x344] */
  esi = R32((uint32_t)(ecx + 0x344u));
/* 7c6719: mov ebp, dword ptr [ecx + 0x3ec] */
  ebp = R32((uint32_t)(ecx + 0x3ecu));
/* 7c671f: imul esi, ebx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(ebx);
  esi = (uint32_t)r;
  }
/* 7c6722: add esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7c6724: mov cl, byte ptr [esi + edx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + edx))) & 0xffu);
/* 7c6727: mov byte ptr [esp + 0x1f], cl */
  W8((uint32_t)(esp + 0x1fu), (ecx & 0xffu));
/* 7c672b: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 7c672f: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 7c6732: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7c6734: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 7c6738: mov ebp, dword ptr [esi + 0x344] */
  ebp = R32((uint32_t)(esi + 0x344u));
/* 7c673e: mov edi, ebp */
  edi = ebp;
/* 7c6740: imul edi, ebx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ebx);
  edi = (uint32_t)r;
  }
/* 7c6743: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7c6745: lea ecx, [ecx + edi*4] */
  ecx = (uint32_t)(ecx + edi*4);
/* 7c6748: lea edi, [ebx + 1] */
  edi = (uint32_t)(ebx + 0x1u);
/* 7c674b: imul edi, ebp */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ebp);
  edi = (uint32_t)r;
  }
/* 7c674e: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 7c6751: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 7c6755: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7c6757: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* 7c675b: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 7c675e: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 7c6762: lea edi, [edi + ebp*4] */
  edi = (uint32_t)(edi + ebp*4);
/* 7c6765: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 7c6767: fmul dword ptr [esi + 0x34c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34cu)));
/* 7c676d: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 7c676f: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 7c6771: fmul dword ptr [esi + 0x34c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34cu)));
/* 7c6777: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 7c677a: lea edi, [ebx - 1] */
  edi = (uint32_t)(ebx + 0xffffffffu);
/* 7c677d: mov ebp, edi */
  ebp = edi;
/* 7c677f: imul ebp, dword ptr [esi + 0x344] */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x344u)));
  ebp = (uint32_t)r;
  }
/* 7c6786: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 7c678a: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 7c678c: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 7c678e: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 7c6790: lea edi, [edi + ebp*4] */
  edi = (uint32_t)(edi + ebp*4);
/* 7c6793: fmul dword ptr [esi + 0x34c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34cu)));
/* 7c6799: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 7c679c: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 7c679e: fmul dword ptr [esi + 0x34c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34cu)));
/* 7c67a4: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 7c67a7: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 7c67a9: fmul dword ptr [esi + 0x34c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34cu)));
/* 7c67af: add eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c67b2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7c67b3: fstp dword ptr [esp + 0x6c] */
  WF32((uint32_t)(esp + 0x6cu), ST0); FPOP();
/* 7c67b7: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 7c67bb: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 7c67bd: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 7c67c1: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 7c67c3: fmul dword ptr [esi + 0x34c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34cu)));
/* 7c67c9: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 7c67cd: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c67cf: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 7c67d3: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7c67d5: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c67d7: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 7c67db: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7c67dd: fsubp st(3) */
  STI(3) = STI(3) - ST0;
  FPOP();
/* 7c67df: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7c67e1: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 7c67e5: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 7c67e7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7c67e9: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 7c67ed: fsubp st(3) */
  STI(3) = STI(3) - ST0;
  FPOP();
/* 7c67ef: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 7c67f3: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 7c67f7: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 7c67f9: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 7c67fd: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 7c6801: fsubp st(3) */
  STI(3) = STI(3) - ST0;
  FPOP();
/* 7c6803: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 7c6805: fstp dword ptr [eax - 0x18] */
  WF32((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 7c6808: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c680c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c680e: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7c6810: fsubr dword ptr [esp + 0x70] */
  ST0 = (F32((uint32_t)(esp + 0x70u))) - ST0;
/* 7c6814: fadd dword ptr [esp + 0x6c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x6cu)));
/* 7c6818: fmul dword ptr [ecx + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x340u)));
/* 7c681e: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 7c6822: mov dword ptr [eax - 0x10], ecx */
  W32((uint32_t)(eax + 0xfffffff0u), ecx);
/* 7c6825: fmul dword ptr [0xa07fdc] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fdcu)));
/* 7c682b: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* 7c682e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6832: mov esi, dword ptr [ecx + 0x344] */
  esi = R32((uint32_t)(ecx + 0x344u));
/* 7c6838: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 7c6839: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7c683b: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c683d: jl 0x7c66b0 */
  if ((sf != of)) goto L_7c66b0;
L_7c6843: /* 7c6843: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
L_7c6847: /* 7c6847: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 7c684b: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 7c684e: mov ebp, dword ptr [esp + 0x54] */
  ebp = R32((uint32_t)(esp + 0x54u));
/* 7c6852: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7c6854: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6858: mov edx, dword ptr [ecx + 0x420] */
  edx = R32((uint32_t)(ecx + 0x420u));
/* 7c685e: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7c6861: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 7c6865: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 7c6868: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7c686a: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 7c686e: mov dword ptr [ecx + 4], ebp */
  W32((uint32_t)(ecx + 0x4u), ebp);
/* 7c6871: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7c6874: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6878: fld dword ptr [ecx + 0x378] */
  { double v = F32((uint32_t)(ecx + 0x378u)); FPUSH(v); }
/* 7c687e: fadd dword ptr [ecx + 0x374] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x374u)));
/* 7c6884: jmp 0x7c6ad6 */
  goto L_7c6ad6;
L_7c6889: /* 7c6889: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 7c688d: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7c688f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7c6891: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 7c6895: mov ecx, dword ptr [edx + 0x420] */
  ecx = R32((uint32_t)(edx + 0x420u));
/* 7c689b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7c689e: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 7c68a2: lea edx, [eax + 0xc] */
  edx = (uint32_t)(eax + 0xcu);
/* 7c68a5: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7c68a7: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 7c68ab: mov dword ptr [edx + 4], ebp */
  W32((uint32_t)(edx + 0x4u), ebp);
/* 7c68ae: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7c68b1: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 7c68b5: mov ecx, dword ptr [edx + 0x378] */
  ecx = R32((uint32_t)(edx + 0x378u));
/* 7c68bb: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 7c68be: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 7c68c1: mov dword ptr [eax + 0x18], esi */
  W32((uint32_t)(eax + 0x18u), esi);
/* 7c68c4: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c68c8: mov ebp, dword ptr [ecx + 0x344] */
  ebp = R32((uint32_t)(ecx + 0x344u));
/* 7c68ce: add eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c68d1: mov edx, 1 */
  edx = 0x1u;
/* 7c68d6: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  ebp = r;
  }
/* 7c68d7: cmp ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c68d9: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 7c68dd: jle 0x7c6a86 */
  if ((zf || sf != of)) goto L_7c6a86;
L_7c68e3: /* 7c68e3: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7c68e7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7c68e9: fmul dword ptr [ecx + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x340u)));
/* 7c68ef: fadd dword ptr [ecx + 0x418] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x418u)));
/* 7c68f5: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7c68f7: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7c68f9: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 7c68fc: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6900: mov esi, dword ptr [ecx + 0x344] */
  esi = R32((uint32_t)(ecx + 0x344u));
/* 7c6906: mov ebp, dword ptr [edi] */
  ebp = R32((uint32_t)(edi));
/* 7c6908: imul esi, ebx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(ebx);
  esi = (uint32_t)r;
  }
/* 7c690b: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7c690d: fld dword ptr [ebp + esi*4] */
  { double v = F32((uint32_t)(ebp + esi*4)); FPUSH(v); }
/* 7c6911: fmul dword ptr [ecx + 0x34c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x34cu)));
/* 7c6917: fadd dword ptr [ecx + 0x420] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x420u)));
/* 7c691d: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 7c6920: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6924: fmul dword ptr [ecx + 0x374] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x374u)));
/* 7c692a: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 7c692e: fadd dword ptr [ecx + 0x378] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x378u)));
/* 7c6934: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* 7c6937: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7c6939: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 7c693c: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6940: mov esi, dword ptr [ecx + 0x344] */
  esi = R32((uint32_t)(ecx + 0x344u));
/* 7c6946: mov ebp, dword ptr [ecx + 0x3ec] */
  ebp = R32((uint32_t)(ecx + 0x3ecu));
/* 7c694c: imul esi, ebx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(ebx);
  esi = (uint32_t)r;
  }
/* 7c694f: add esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7c6951: mov cl, byte ptr [esi + edx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + edx))) & 0xffu);
/* 7c6954: mov byte ptr [esp + 0x1f], cl */
  W8((uint32_t)(esp + 0x1fu), (ecx & 0xffu));
/* 7c6958: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 7c695c: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 7c695f: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7c6961: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 7c6965: mov ebp, dword ptr [esi + 0x344] */
  ebp = R32((uint32_t)(esi + 0x344u));
/* 7c696b: mov edi, ebp */
  edi = ebp;
/* 7c696d: imul edi, ebx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ebx);
  edi = (uint32_t)r;
  }
/* 7c6970: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7c6972: lea ecx, [ecx + edi*4] */
  ecx = (uint32_t)(ecx + edi*4);
/* 7c6975: lea edi, [ebx + 1] */
  edi = (uint32_t)(ebx + 0x1u);
/* 7c6978: imul edi, ebp */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ebp);
  edi = (uint32_t)r;
  }
/* 7c697b: fld dword ptr [ecx - 4] */
  { double v = F32((uint32_t)(ecx + 0xfffffffcu)); FPUSH(v); }
/* 7c697e: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 7c6982: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7c6984: mov dword ptr [esp + 0x30], edi */
  W32((uint32_t)(esp + 0x30u), edi);
/* 7c6988: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 7c698b: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 7c698f: lea edi, [edi + ebp*4] */
  edi = (uint32_t)(edi + ebp*4);
/* 7c6992: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 7c6994: fmul dword ptr [esi + 0x34c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34cu)));
/* 7c699a: fld dword ptr [edi - 4] */
  { double v = F32((uint32_t)(edi + 0xfffffffcu)); FPUSH(v); }
/* 7c699d: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 7c699f: fmul dword ptr [esi + 0x34c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34cu)));
/* 7c69a5: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 7c69a7: lea edi, [ebx - 1] */
  edi = (uint32_t)(ebx + 0xffffffffu);
/* 7c69aa: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 7c69ac: mov ebp, edi */
  ebp = edi;
/* 7c69ae: imul ebp, dword ptr [esi + 0x344] */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x344u)));
  ebp = (uint32_t)r;
  }
/* 7c69b5: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 7c69b9: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 7c69bb: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 7c69bd: fmul dword ptr [esi + 0x34c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34cu)));
/* 7c69c3: lea edi, [edi + ebp*4] */
  edi = (uint32_t)(edi + ebp*4);
/* 7c69c6: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 7c69c9: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 7c69cb: fmul dword ptr [esi + 0x34c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34cu)));
/* 7c69d1: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 7c69d3: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 7c69d5: fmul dword ptr [esi + 0x34c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34cu)));
/* 7c69db: fstp dword ptr [esp + 0x84] */
  WF32((uint32_t)(esp + 0x84u), ST0); FPOP();
/* 7c69e2: add eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c69e5: fld dword ptr [edi - 4] */
  { double v = F32((uint32_t)(edi + 0xfffffffcu)); FPUSH(v); }
/* 7c69e8: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 7c69ec: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 7c69ee: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7c69ef: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 7c69f3: fmul dword ptr [esi + 0x34c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34cu)));
/* 7c69f9: fstp dword ptr [esp + 0x88] */
  WF32((uint32_t)(esp + 0x88u), ST0); FPOP();
/* 7c6a00: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c6a02: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 7c6a06: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7c6a08: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7c6a0a: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 7c6a0e: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7c6a10: fsubp st(3) */
  STI(3) = STI(3) - ST0;
  FPOP();
/* 7c6a12: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7c6a14: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 7c6a18: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 7c6a1a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7c6a1c: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 7c6a20: fsubp st(3) */
  STI(3) = STI(3) - ST0;
  FPOP();
/* 7c6a22: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 7c6a29: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 7c6a2d: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 7c6a2f: fld dword ptr [esp + 0x84] */
  { double v = F32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 7c6a36: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 7c6a3a: fsubp st(3) */
  STI(3) = STI(3) - ST0;
  FPOP();
/* 7c6a3c: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 7c6a3e: fstp dword ptr [eax - 0x18] */
  WF32((uint32_t)(eax + 0xffffffe8u), ST0); FPOP();
/* 7c6a41: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6a45: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7c6a47: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7c6a49: fsubr dword ptr [esp + 0x88] */
  ST0 = (F32((uint32_t)(esp + 0x88u))) - ST0;
/* 7c6a50: fadd dword ptr [esp + 0x84] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x84u)));
/* 7c6a57: fmul dword ptr [ecx + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x340u)));
/* 7c6a5d: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 7c6a61: mov dword ptr [eax - 0x10], ecx */
  W32((uint32_t)(eax + 0xfffffff0u), ecx);
/* 7c6a64: fmul dword ptr [0xa07fdc] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fdcu)));
/* 7c6a6a: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* 7c6a6d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6a71: mov esi, dword ptr [ecx + 0x344] */
  esi = R32((uint32_t)(ecx + 0x344u));
/* 7c6a77: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 7c6a78: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7c6a7a: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c6a7c: jl 0x7c68e3 */
  if ((sf != of)) goto L_7c68e3;
L_7c6a82: /* 7c6a82: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
L_7c6a86: /* 7c6a86: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 7c6a8a: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 7c6a8d: mov ebp, dword ptr [esp + 0x54] */
  ebp = R32((uint32_t)(esp + 0x54u));
/* 7c6a91: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7c6a93: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6a97: mov edx, dword ptr [ecx + 0x420] */
  edx = R32((uint32_t)(ecx + 0x420u));
/* 7c6a9d: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7c6aa0: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 7c6aa4: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 7c6aa7: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7c6aa9: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 7c6aad: mov dword ptr [ecx + 4], ebp */
  W32((uint32_t)(ecx + 0x4u), ebp);
/* 7c6ab0: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7c6ab3: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6ab7: mov edx, dword ptr [ecx + 0x344] */
  edx = R32((uint32_t)(ecx + 0x344u));
/* 7c6abd: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 7c6abe: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 7c6ac2: fild dword ptr [esp + 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 7c6ac6: fmul dword ptr [ecx + 0x374] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x374u)));
/* 7c6acc: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 7c6ad0: fadd dword ptr [ecx + 0x378] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x378u)));
L_7c6ad6: /* 7c6ad6: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* 7c6ad9: mov dword ptr [eax + 0x18], esi */
  W32((uint32_t)(eax + 0x18u), esi);
/* 7c6adc: add eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c6adf: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* 7c6ae2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6ae6: mov edx, dword ptr [ecx + 0x348] */
  edx = R32((uint32_t)(ecx + 0x348u));
/* 7c6aec: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7c6aed: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 7c6aee: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c6af0: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* 7c6af4: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 7c6af8: jl 0x7c6602 */
  if ((sf != of)) goto L_7c6602;
L_7c6afe: /* 7c6afe: mov edx, dword ptr [ecx + 0x348] */
  edx = R32((uint32_t)(ecx + 0x348u));
/* 7c6b04: mov edi, dword ptr [ecx + 0x344] */
  edi = R32((uint32_t)(ecx + 0x344u));
/* 7c6b0a: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 7c6b0b: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c6b0e: je 0x7c6baf */
  if (zf) goto L_7c6baf;
L_7c6b14: /* 7c6b14: xor edx, edx */
  edx = 0;
/* 7c6b16: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7c6b18: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 7c6b1c: jle 0x7c700f */
  if ((zf || sf != of)) goto L_7c700f;
L_7c6b22: /* 7c6b22: mov ebx, dword ptr [esp + 0x50] */
  ebx = R32((uint32_t)(esp + 0x50u));
/* 7c6b26: mov edi, dword ptr [esp + 0x58] */
  edi = R32((uint32_t)(esp + 0x58u));
/* 7c6b2a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7c6b30: /* 7c6b30: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7c6b34: fadd dword ptr [0x9f7194] */
  ST0 = ST0 + (F32((uint32_t)(0x9f7194u)));
/* 7c6b3a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7c6b3c: fmul dword ptr [ecx + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x340u)));
/* 7c6b42: fadd dword ptr [ecx + 0x418] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x418u)));
/* 7c6b48: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 7c6b4c: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7c6b4f: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7c6b51: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6b55: mov ecx, dword ptr [ecx + 0x420] */
  ecx = R32((uint32_t)(ecx + 0x420u));
/* 7c6b5b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7c6b5e: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 7c6b61: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 7c6b63: mov dword ptr [ecx + 4], ebp */
  W32((uint32_t)(ecx + 0x4u), ebp);
/* 7c6b66: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7c6b69: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6b6d: fmul dword ptr [ecx + 0x374] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x374u)));
/* 7c6b73: add eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c6b76: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7c6b77: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 7c6b7b: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 7c6b7f: fadd dword ptr [ecx + 0x378] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x378u)));
/* 7c6b85: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 7c6b88: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6b8c: fld dword ptr [ecx + 0x380] */
  { double v = F32((uint32_t)(ecx + 0x380u)); FPUSH(v); }
/* 7c6b92: fadd dword ptr [ecx + 0x37c] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x37cu)));
/* 7c6b98: mov dword ptr [eax - 0xc], esi */
  W32((uint32_t)(eax + 0xfffffff4u), esi);
/* 7c6b9b: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* 7c6b9e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6ba2: cmp edx, dword ptr [ecx + 0x344] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x344u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c6ba8: jl 0x7c6b30 */
  if ((sf != of)) goto L_7c6b30;
L_7c6baa: /* 7c6baa: jmp 0x7c700f */
  goto L_7c700f;
L_7c6baf: /* 7c6baf: xor edx, edx */
  edx = 0;
/* 7c6bb1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7c6bb3: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 7c6bb7: jle 0x7c700f */
  if ((zf || sf != of)) goto L_7c700f;
L_7c6bbd: /* 7c6bbd: mov edi, dword ptr [esp + 0x58] */
  edi = R32((uint32_t)(esp + 0x58u));
/* 7c6bc1: mov ebx, dword ptr [esp + 0x50] */
  ebx = R32((uint32_t)(esp + 0x50u));
/* 7c6bc5: jmp 0x7c6bd0 */
  goto L_7c6bd0;
L_7c6bd0: /* 7c6bd0: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7c6bd4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7c6bd6: fmul dword ptr [ecx + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x340u)));
/* 7c6bdc: fadd dword ptr [ecx + 0x418] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x418u)));
/* 7c6be2: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 7c6be6: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7c6be9: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7c6beb: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6bef: mov ecx, dword ptr [ecx + 0x420] */
  ecx = R32((uint32_t)(ecx + 0x420u));
/* 7c6bf5: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7c6bf8: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 7c6bfb: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 7c6bfd: mov dword ptr [ecx + 4], ebp */
  W32((uint32_t)(ecx + 0x4u), ebp);
/* 7c6c00: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7c6c03: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6c07: fmul dword ptr [ecx + 0x374] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x374u)));
/* 7c6c0d: add eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c6c10: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7c6c11: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 7c6c15: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 7c6c19: fadd dword ptr [ecx + 0x378] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x378u)));
/* 7c6c1f: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 7c6c22: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6c26: fld dword ptr [ecx + 0x380] */
  { double v = F32((uint32_t)(ecx + 0x380u)); FPUSH(v); }
/* 7c6c2c: fadd dword ptr [ecx + 0x37c] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x37cu)));
/* 7c6c32: mov dword ptr [eax - 0xc], esi */
  W32((uint32_t)(eax + 0xfffffff4u), esi);
/* 7c6c35: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* 7c6c38: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6c3c: cmp edx, dword ptr [ecx + 0x344] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x344u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c6c42: jl 0x7c6bd0 */
  if ((sf != of)) goto L_7c6bd0;
L_7c6c44: /* 7c6c44: jmp 0x7c700f */
  goto L_7c700f;
L_7c700f: /* 7c700f: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 7c7015: mov eax, dword ptr [0xce84a8] */
  eax = R32((uint32_t)(0xce84a8u));
/* 7c701a: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 7c701d: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7c701f: mov esi, dword ptr [esp + 0x4c] */
  esi = R32((uint32_t)(esp + 0x4cu));
/* 7c7023: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c7025: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c7026: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7c7028: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c7029: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7c702b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c702c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7c702e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c702f: add esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c7032: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7c6bc7(void) {
  LOAD_REGS();
L_7c6bc7: /* 7c6bc7: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 7c6bce: mov edi, edi */
  edi = edi;
L_7c6bd0: /* 7c6bd0: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7c6bd4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7c6bd6: fmul dword ptr [ecx + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x340u)));
/* 7c6bdc: fadd dword ptr [ecx + 0x418] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x418u)));
/* 7c6be2: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 7c6be6: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7c6be9: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7c6beb: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6bef: mov ecx, dword ptr [ecx + 0x420] */
  ecx = R32((uint32_t)(ecx + 0x420u));
/* 7c6bf5: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7c6bf8: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 7c6bfb: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 7c6bfd: mov dword ptr [ecx + 4], ebp */
  W32((uint32_t)(ecx + 0x4u), ebp);
/* 7c6c00: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7c6c03: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6c07: fmul dword ptr [ecx + 0x374] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x374u)));
/* 7c6c0d: add eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c6c10: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7c6c11: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 7c6c15: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 7c6c19: fadd dword ptr [ecx + 0x378] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x378u)));
/* 7c6c1f: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 7c6c22: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6c26: fld dword ptr [ecx + 0x380] */
  { double v = F32((uint32_t)(ecx + 0x380u)); FPUSH(v); }
/* 7c6c2c: fadd dword ptr [ecx + 0x37c] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x37cu)));
/* 7c6c32: mov dword ptr [eax - 0xc], esi */
  W32((uint32_t)(eax + 0xfffffff4u), esi);
/* 7c6c35: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* 7c6c38: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6c3c: cmp edx, dword ptr [ecx + 0x344] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x344u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c6c42: jl 0x7c6bd0 */
  if ((sf != of)) goto L_7c6bd0;
L_7c6c44: /* 7c6c44: jmp 0x7c700f */
  goto L_7c700f;
L_7c700f: /* 7c700f: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 7c7015: mov eax, dword ptr [0xce84a8] */
  eax = R32((uint32_t)(0xce84a8u));
/* 7c701a: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 7c701d: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7c701f: mov esi, dword ptr [esp + 0x4c] */
  esi = R32((uint32_t)(esp + 0x4cu));
/* 7c7023: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c7025: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c7026: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7c7028: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c7029: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7c702b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c702c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7c702e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c702f: add esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c7032: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7c6da9(void) {
  LOAD_REGS();
  goto L_7c6da9;
L_7c6d20: /* 7c6d20: fild dword ptr [esp + 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 7c6d24: mov edx, dword ptr [ecx + 0x418] */
  edx = R32((uint32_t)(ecx + 0x418u));
/* 7c6d2a: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 7c6d2e: fmul dword ptr [ecx + 0x37c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x37cu)));
/* 7c6d34: fidiv dword ptr [esp + 0x30] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(esp + 0x30u)));
/* 7c6d38: fadd dword ptr [ecx + 0x380] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x380u)));
/* 7c6d3e: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7c6d42: fmul dword ptr [ecx + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x340u)));
/* 7c6d48: fadd dword ptr [ecx + 0x41c] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x41cu)));
/* 7c6d4e: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7c6d50: fst dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0);
/* 7c6d53: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6d57: mov edx, dword ptr [ecx + 0x420] */
  edx = R32((uint32_t)(ecx + 0x420u));
/* 7c6d5d: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7c6d5f: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7c6d62: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 7c6d66: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 7c6d69: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7c6d6b: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 7c6d6f: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 7c6d72: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7c6d75: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6d79: mov edx, dword ptr [ecx + 0x378] */
  edx = R32((uint32_t)(ecx + 0x378u));
/* 7c6d7f: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 7c6d82: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 7c6d85: mov dword ptr [eax + 0x18], esi */
  W32((uint32_t)(eax + 0x18u), esi);
/* 7c6d88: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 7c6d8c: mov ebx, dword ptr [edx + 0x344] */
  ebx = R32((uint32_t)(edx + 0x344u));
/* 7c6d92: add eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c6d95: mov ecx, 1 */
  ecx = 0x1u;
/* 7c6d9a: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 7c6d9b: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c6d9d: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 7c6da1: jle 0x7c6ee4 */
  if ((zf || sf != of)) goto L_7c6ee4;
L_7c6da7: /* 7c6da7: jmp 0x7c6db0 */
  goto L_7c6db0;
L_7c6da9: /* 7c6da9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7c6db0: /* 7c6db0: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7c6db4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7c6db6: fmul dword ptr [edx + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x340u)));
/* 7c6dbc: fadd dword ptr [edx + 0x418] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x418u)));
/* 7c6dc2: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7c6dc4: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7c6dc6: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 7c6dc9: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 7c6dcd: mov esi, dword ptr [edx + 0x344] */
  esi = R32((uint32_t)(edx + 0x344u));
/* 7c6dd3: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 7c6dd5: imul esi, ebp */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(ebp);
  esi = (uint32_t)r;
  }
/* 7c6dd8: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7c6dda: fld dword ptr [ebx + esi*4] */
  { double v = F32((uint32_t)(ebx + esi*4)); FPUSH(v); }
/* 7c6ddd: fmul dword ptr [edx + 0x34c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34cu)));
/* 7c6de3: fadd dword ptr [edx + 0x420] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x420u)));
/* 7c6de9: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 7c6dec: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 7c6df0: fmul dword ptr [edx + 0x374] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x374u)));
/* 7c6df6: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 7c6dfa: fadd dword ptr [edx + 0x378] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x378u)));
/* 7c6e00: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* 7c6e03: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7c6e05: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 7c6e08: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 7c6e0c: mov esi, dword ptr [edx + 0x344] */
  esi = R32((uint32_t)(edx + 0x344u));
/* 7c6e12: mov ebx, dword ptr [edx + 0x3ec] */
  ebx = R32((uint32_t)(edx + 0x3ecu));
/* 7c6e18: imul esi, ebp */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(ebp);
  esi = (uint32_t)r;
  }
/* 7c6e1b: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7c6e1d: mov dl, byte ptr [esi + ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + ecx))) & 0xffu);
/* 7c6e20: mov byte ptr [esp + 0x1f], dl */
  W8((uint32_t)(esp + 0x1fu), (edx & 0xffu));
/* 7c6e24: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 7c6e28: mov dword ptr [eax + 0x18], edx */
  W32((uint32_t)(eax + 0x18u), edx);
/* 7c6e2b: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 7c6e2f: mov ebx, dword ptr [esi + 0x344] */
  ebx = R32((uint32_t)(esi + 0x344u));
/* 7c6e35: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7c6e37: imul ebx, ebp */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(ebp);
  ebx = (uint32_t)r;
  }
/* 7c6e3a: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7c6e3c: lea edx, [edx + ebx*4] */
  edx = (uint32_t)(edx + ebx*4);
/* 7c6e3f: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  ebp = r;
  }
/* 7c6e40: lea ebx, [ebp + 2] */
  ebx = (uint32_t)(ebp + 0x2u);
/* 7c6e43: fld dword ptr [edx - 4] */
  { double v = F32((uint32_t)(edx + 0xfffffffcu)); FPUSH(v); }
/* 7c6e46: mov ebp, ebx */
  ebp = ebx;
/* 7c6e48: imul ebp, dword ptr [esi + 0x344] */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x344u)));
  ebp = (uint32_t)r;
  }
/* 7c6e4f: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 7c6e51: add ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 7c6e53: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 7c6e55: fmul dword ptr [esi + 0x34c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34cu)));
/* 7c6e5b: fld dword ptr [ebx + ebp*4] */
  { double v = F32((uint32_t)(ebx + ebp*4)); FPUSH(v); }
/* 7c6e5e: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* 7c6e62: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 7c6e63: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 7c6e65: mov ebp, ebx */
  ebp = ebx;
/* 7c6e67: imul ebp, dword ptr [esi + 0x344] */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x344u)));
  ebp = (uint32_t)r;
  }
/* 7c6e6e: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 7c6e70: add ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 7c6e72: fmul dword ptr [esi + 0x34c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34cu)));
/* 7c6e78: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 7c6e7b: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 7c6e7d: fmul dword ptr [esi + 0x34c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34cu)));
/* 7c6e83: fld dword ptr [ebx + ebp*4] */
  { double v = F32((uint32_t)(ebx + ebp*4)); FPUSH(v); }
/* 7c6e86: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 7c6e88: fmul dword ptr [esi + 0x34c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34cu)));
/* 7c6e8e: fstp dword ptr [esp + 0x68] */
  WF32((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 7c6e92: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 7c6e94: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 7c6e96: fmul dword ptr [esi + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x340u)));
/* 7c6e9c: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7c6e9e: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 7c6ea1: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 7c6ea5: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 7c6ea7: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 7c6eab: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 7c6eaf: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 7c6eb1: add eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c6eb4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7c6eb5: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 7c6eb9: fmul dword ptr [edx + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x340u)));
/* 7c6ebf: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 7c6ec3: mov dword ptr [eax - 0x10], edx */
  W32((uint32_t)(eax + 0xfffffff0u), edx);
/* 7c6ec6: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7c6ec8: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* 7c6ecb: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 7c6ecf: mov esi, dword ptr [edx + 0x344] */
  esi = R32((uint32_t)(edx + 0x344u));
/* 7c6ed5: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 7c6ed6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7c6ed8: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c6eda: jl 0x7c6db0 */
  if ((sf != of)) goto L_7c6db0;
L_7c6ee0: /* 7c6ee0: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
L_7c6ee4: /* 7c6ee4: mov ecx, dword ptr [edx + 0x344] */
  ecx = R32((uint32_t)(edx + 0x344u));
/* 7c6eea: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7c6eeb: mov ebx, dword ptr [esp + 0x54] */
  ebx = R32((uint32_t)(esp + 0x54u));
/* 7c6eef: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 7c6ef3: fild dword ptr [esp + 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 7c6ef7: fmul dword ptr [edx + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x340u)));
/* 7c6efd: fadd dword ptr [edx + 0x418] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x418u)));
/* 7c6f03: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7c6f05: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 7c6f08: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 7c6f0c: mov ecx, dword ptr [edx + 0x420] */
  ecx = R32((uint32_t)(edx + 0x420u));
/* 7c6f12: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7c6f15: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 7c6f19: lea edx, [eax + 0xc] */
  edx = (uint32_t)(eax + 0xcu);
/* 7c6f1c: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7c6f1e: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 7c6f22: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 7c6f25: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7c6f28: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6f2c: fld dword ptr [ecx + 0x378] */
  { double v = F32((uint32_t)(ecx + 0x378u)); FPUSH(v); }
/* 7c6f32: add eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c6f35: fadd dword ptr [ecx + 0x374] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x374u)));
/* 7c6f3b: mov dword ptr [eax - 0xc], esi */
  W32((uint32_t)(eax + 0xfffffff4u), esi);
/* 7c6f3e: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 7c6f3f: mov dword ptr [esp + 0x28], ebp */
  W32((uint32_t)(esp + 0x28u), ebp);
/* 7c6f43: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 7c6f46: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* 7c6f49: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6f4d: mov edx, dword ptr [ecx + 0x348] */
  edx = R32((uint32_t)(ecx + 0x348u));
/* 7c6f53: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 7c6f54: cmp ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c6f56: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 7c6f5a: jl 0x7c6d20 */
  if ((sf != of)) goto L_7c6d20;
L_7c6f60: /* 7c6f60: mov edi, dword ptr [ecx + 0x344] */
  edi = R32((uint32_t)(ecx + 0x344u));
/* 7c6f66: xor edx, edx */
  edx = 0;
/* 7c6f68: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7c6f6a: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 7c6f6e: jle 0x7c700f */
  if ((zf || sf != of)) goto L_7c700f;
L_7c6f74: /* 7c6f74: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7c6f78: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7c6f7a: fmul dword ptr [ecx + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x340u)));
/* 7c6f80: fadd dword ptr [ecx + 0x418] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x418u)));
/* 7c6f86: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7c6f88: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6f8c: mov edi, dword ptr [ecx + 0x348] */
  edi = R32((uint32_t)(ecx + 0x348u));
/* 7c6f92: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 7c6f93: mov dword ptr [esp + 0x48], edi */
  W32((uint32_t)(esp + 0x48u), edi);
/* 7c6f97: fild dword ptr [esp + 0x48] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 7c6f9b: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 7c6f9f: fmul dword ptr [ecx + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x340u)));
/* 7c6fa5: fadd dword ptr [ecx + 0x41c] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x41cu)));
/* 7c6fab: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 7c6fae: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6fb2: mov ecx, dword ptr [ecx + 0x420] */
  ecx = R32((uint32_t)(ecx + 0x420u));
/* 7c6fb8: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7c6fbb: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 7c6fbe: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7c6fc0: mov edi, dword ptr [esp + 0x58] */
  edi = R32((uint32_t)(esp + 0x58u));
/* 7c6fc4: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 7c6fc7: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* 7c6fca: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6fce: fmul dword ptr [ecx + 0x374] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x374u)));
/* 7c6fd4: add eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7c6fd7: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7c6fd8: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 7c6fdc: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 7c6fe0: fadd dword ptr [ecx + 0x378] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x378u)));
/* 7c6fe6: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* 7c6fe9: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c6fed: fld dword ptr [ecx + 0x380] */
  { double v = F32((uint32_t)(ecx + 0x380u)); FPUSH(v); }
/* 7c6ff3: fadd dword ptr [ecx + 0x37c] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x37cu)));
/* 7c6ff9: mov dword ptr [eax - 0xc], esi */
  W32((uint32_t)(eax + 0xfffffff4u), esi);
/* 7c6ffc: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* 7c6fff: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7c7003: cmp edx, dword ptr [ecx + 0x344] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x344u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c7009: jl 0x7c6f74 */
  if ((sf != of)) goto L_7c6f74;
L_7c700f: /* 7c700f: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 7c7015: mov eax, dword ptr [0xce84a8] */
  eax = R32((uint32_t)(0xce84a8u));
/* 7c701a: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 7c701d: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7c701f: mov esi, dword ptr [esp + 0x4c] */
  esi = R32((uint32_t)(esp + 0x4cu));
/* 7c7023: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c7025: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c7026: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7c7028: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c7029: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7c702b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c702c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7c702e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c702f: add esp, 0x7c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c7032: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7c7360(void) {
  LOAD_REGS();
L_7c7360: /* 7c7360: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c7361: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7c7363: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7c7365: mov esi, ecx */
  esi = ecx;
/* 7c7367: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7c736du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7c736d: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 7c7371: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7c7373: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 7c7375: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 7c7378: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c7379: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7c7390(void) {
  LOAD_REGS();
L_7c7390: /* 7c7390: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c7391: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7c7395: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c7397: je 0x7c73ae */
  if (zf) goto L_7c73ae;
L_7c7399: /* 7c7399: push 0xb80c70 */
  { uint32_t v = 0xb80c70u; esp -= 4; W32(esp, v); }
/* 7c739e: mov ecx, esi */
  ecx = esi;
/* 7c73a0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7c73a6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7c73a6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c73a8: je 0x7c73ae */
  if (zf) goto L_7c73ae;
L_7c73aa: /* 7c73aa: mov eax, esi */
  eax = esi;
/* 7c73ac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c73ad: ret  */
  esp += 4; SPILL(); return;
L_7c73ae: /* 7c73ae: xor eax, eax */
  eax = 0;
/* 7c73b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c73b1: ret  */
  esp += 4; SPILL(); return;
}

void f_7c73d0(void) {
  LOAD_REGS();
L_7c73d0: /* 7c73d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c73d1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7c73d5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c73d7: je 0x7c73ee */
  if (zf) goto L_7c73ee;
L_7c73d9: /* 7c73d9: push 0xb6f6a8 */
  { uint32_t v = 0xb6f6a8u; esp -= 4; W32(esp, v); }
/* 7c73de: mov ecx, esi */
  ecx = esi;
/* 7c73e0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7c73e6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7c73e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c73e8: je 0x7c73ee */
  if (zf) goto L_7c73ee;
L_7c73ea: /* 7c73ea: mov eax, esi */
  eax = esi;
/* 7c73ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c73ed: ret  */
  esp += 4; SPILL(); return;
L_7c73ee: /* 7c73ee: xor eax, eax */
  eax = 0;
/* 7c73f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c73f1: ret  */
  esp += 4; SPILL(); return;
}

void f_7c7410(void) {
  LOAD_REGS();
L_7c7410: /* 7c7410: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c7411: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7c7415: push 0xb80740 */
  { uint32_t v = 0xb80740u; esp -= 4; W32(esp, v); }
/* 7c741a: mov ecx, esi */
  ecx = esi;
/* 7c741c: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x7c7422u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 7c7422: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c7424: jne 0x7c743e */
  if (!zf) goto L_7c743e;
L_7c7426: /* 7c7426: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 7c742b: push 0xad4518 */
  { uint32_t v = 0xad4518u; esp -= 4; W32(esp, v); }
/* 7c7430: push 0xad455c */
  { uint32_t v = 0xad455cu; esp -= 4; W32(esp, v); }
/* 7c7435: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7c743bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7c743b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7c743e: /* 7c743e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7c7442: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7c7445: jne 0x7c744d */
  if (!zf) goto L_7c744d;
L_7c7447: /* 7c7447: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x7c744du); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
L_7c744d: /* 7c744d: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 7c7453: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7c7455: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7c7459: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c745b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c745c: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7c7460: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c7462: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7c7463: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7c7464: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7c7465: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c7466: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x7c746cu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 7c746c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7c746f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c7470: ret  */
  esp += 4; SPILL(); return;
}

void f_7c74a0(void) {
  LOAD_REGS();
L_7c74a0: /* 7c74a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c74a1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7c74a5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c74a7: je 0x7c74be */
  if (zf) goto L_7c74be;
L_7c74a9: /* 7c74a9: push 0xb80210 */
  { uint32_t v = 0xb80210u; esp -= 4; W32(esp, v); }
/* 7c74ae: mov ecx, esi */
  ecx = esi;
/* 7c74b0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7c74b6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7c74b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c74b8: je 0x7c74be */
  if (zf) goto L_7c74be;
L_7c74ba: /* 7c74ba: mov eax, esi */
  eax = esi;
/* 7c74bc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c74bd: ret  */
  esp += 4; SPILL(); return;
L_7c74be: /* 7c74be: xor eax, eax */
  eax = 0;
/* 7c74c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c74c1: ret  */
  esp += 4; SPILL(); return;
}

void f_7c74e0(void) {
  LOAD_REGS();
L_7c74e0: /* 7c74e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7c74e4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c74e5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c74e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c74e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c74e8: mov esi, ecx */
  esi = ecx;
/* 7c74ea: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 7c74ed: mov dword ptr [esi], 0xa0e5c4 */
  W32((uint32_t)(esi), 0xa0e5c4u);
/* 7c74f3: mov ebp, dword ptr [0xcfa1b0] */
  ebp = R32((uint32_t)(0xcfa1b0u));
/* 7c74f9: mov ebx, dword ptr [ebp + 4] */
  ebx = R32((uint32_t)(ebp + 0x4u));
/* 7c74fc: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 7c74ff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c7501: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 7c7506: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c7507: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c7508: call 0x99c910 */
  esp -= 4; W32(esp, 0x7c750du); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 7c750d: add eax, 0xe1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 7c7512: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 7c7515: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 7c7518: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 7c751b: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 7c7521: adc ebx, 0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 7c7524: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 7c7527: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c7528: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 7c752b: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7c752e: mov dword ptr [esi + 0x10], 0 */
  W32((uint32_t)(esi + 0x10u), 0x0u);
/* 7c7535: mov eax, esi */
  eax = esi;
/* 7c7537: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c7538: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c7539: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c753a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7c7560(void) {
  LOAD_REGS();
L_7c7560: /* 7c7560: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 7c7563: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 7c7566: ret  */
  esp += 4; SPILL(); return;
}

void f_7c7580(void) {
  LOAD_REGS();
L_7c7580: /* 7c7580: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 7c7583: ret  */
  esp += 4; SPILL(); return;
}

void f_7c75a0(void) {
  LOAD_REGS();
L_7c75a0: /* 7c75a0: mov eax, 0x24 */
  eax = 0x24u;
/* 7c75a5: ret  */
  esp += 4; SPILL(); return;
}

void f_7c75c0(void) {
  LOAD_REGS();
L_7c75c0: /* 7c75c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7c75c4: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 7c75ca: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7c75e0(void) {
  LOAD_REGS();
L_7c75e0: /* 7c75e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7c75e4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c75e5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c75e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c75e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c75e8: mov esi, ecx */
  esi = ecx;
/* 7c75ea: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 7c75ed: mov dword ptr [esi], 0xa0e5f0 */
  W32((uint32_t)(esi), 0xa0e5f0u);
/* 7c75f3: mov ebp, dword ptr [0xcfa1b0] */
  ebp = R32((uint32_t)(0xcfa1b0u));
/* 7c75f9: mov ebx, dword ptr [ebp + 4] */
  ebx = R32((uint32_t)(ebp + 0x4u));
/* 7c75fc: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 7c75ff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7c7601: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 7c7606: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c7607: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c7608: call 0x99c910 */
  esp -= 4; W32(esp, 0x7c760du); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 7c760d: add eax, 0xe2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe2u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 7c7612: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 7c7615: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 7c7618: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 7c761b: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 7c7621: adc ebx, 0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 7c7624: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 7c7627: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c7628: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 7c762b: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7c762e: mov eax, esi */
  eax = esi;
/* 7c7630: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c7631: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c7632: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c7633: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7c7660(void) {
  LOAD_REGS();
L_7c7660: /* 7c7660: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 7c7663: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 7c7666: ret  */
  esp += 4; SPILL(); return;
}

void f_7c7680(void) {
  LOAD_REGS();
L_7c7680: /* 7c7680: mov eax, 1 */
  eax = 0x1u;
/* 7c7685: ret  */
  esp += 4; SPILL(); return;
}

void f_7c76a0(void) {
  LOAD_REGS();
L_7c76a0: /* 7c76a0: mov eax, 2 */
  eax = 0x2u;
/* 7c76a5: ret  */
  esp += 4; SPILL(); return;
}

void f_7c76c0(void) {
  LOAD_REGS();
L_7c76c0: /* 7c76c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7c76c4: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 7c76ca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c76cc: je 0x7c76d7 */
  if (zf) goto L_7c76d7;
L_7c76ce: /* 7c76ce: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7c76d1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7c76d3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c76d5: jne 0x7c76da */
  if (!zf) goto L_7c76da;
L_7c76d7: /* 7c76d7: xor eax, eax */
  eax = 0;
/* 7c76d9: ret  */
  esp += 4; SPILL(); return;
L_7c76da: /* 7c76da: mov cl, byte ptr [eax + 0x3f0] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x3f0u))) & 0xffu);
/* 7c76e0: xor edx, edx */
  edx = 0;
/* 7c76e2: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c76e4: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7c76e7: mov eax, edx */
  eax = edx;
/* 7c76e9: ret  */
  esp += 4; SPILL(); return;
}

void f_7c7700(void) {
  LOAD_REGS();
L_7c7700: /* 7c7700: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7c7701: mov edi, ecx */
  edi = ecx;
/* 7c7703: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 7c7709: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c770b: je 0x7c7724 */
  if (zf) goto L_7c7724;
L_7c770d: /* 7c770d: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7c7710: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7c7712: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c7714: je 0x7c7724 */
  if (zf) goto L_7c7724;
L_7c7716: /* 7c7716: mov cl, byte ptr [eax + 0x3f0] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x3f0u))) & 0xffu);
/* 7c771c: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7c771e: je 0x7c77a5 */
  if (zf) goto L_7c77a5;
L_7c7724: /* 7c7724: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c7725: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c7726: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 7c772a: cmp ebp, 1 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c772d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7c772e: jl 0x7c77a2 */
  if ((sf != of)) goto L_7c77a2;
L_7c7730: /* 7c7730: mov esi, dword ptr [edi + 0x344] */
  esi = R32((uint32_t)(edi + 0x344u));
/* 7c7736: lea ecx, [esi - 2] */
  ecx = (uint32_t)(esi + 0xfffffffeu);
/* 7c7739: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c773b: jg 0x7c77a2 */
  if ((!zf && sf == of)) goto L_7c77a2;
L_7c773d: /* 7c773d: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 7c7741: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c7744: jl 0x7c77a2 */
  if ((sf != of)) goto L_7c77a2;
L_7c7746: /* 7c7746: mov edx, dword ptr [edi + 0x348] */
  edx = R32((uint32_t)(edi + 0x348u));
/* 7c774c: sub edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7c774f: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7c7751: jg 0x7c77a2 */
  if ((!zf && sf == of)) goto L_7c77a2;
L_7c7753: /* 7c7753: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7c7754: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7c7755: mov ecx, edi */
  ecx = edi;
/* 7c7757: call 0x6c56f0 */
  esp -= 4; W32(esp, 0x7c775cu); SPILL(); f_6c56f0(); if (g_unwind) return; RELOAD();
/* 7c775c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c775e: jne 0x7c77a2 */
  if (!zf) goto L_7c77a2;
L_7c7760: /* 7c7760: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 7c7766: mov eax, dword ptr [edi + 0x3f8] */
  eax = R32((uint32_t)(edi + 0x3f8u));
/* 7c776c: imul esi, ebx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(ebx);
  esi = (uint32_t)r;
  }
/* 7c776f: fdiv dword ptr [edi + 0x3cc] */
  ST0 = ST0 / (F32((uint32_t)(edi + 0x3ccu)));
/* 7c7775: add esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7c7777: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7c7779: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 7c777d: jne 0x7c7794 */
  if (!zf) goto L_7c7794;
L_7c777f: /* 7c777f: mov eax, dword ptr [edi + 0x3e0] */
  eax = R32((uint32_t)(edi + 0x3e0u));
/* 7c7785: fadd dword ptr [eax + esi*4] */
  ST0 = ST0 + (F32((uint32_t)(eax + esi*4)));
/* 7c7788: lea eax, [eax + esi*4] */
  eax = (uint32_t)(eax + esi*4);
/* 7c778b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c778c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c778d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7c778e: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7c7790: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c7791: ret 0xc */
  esp += 16; SPILL(); return;
L_7c7794: /* 7c7794: mov ecx, dword ptr [edi + 0x3d4] */
  ecx = R32((uint32_t)(edi + 0x3d4u));
/* 7c779a: fadd dword ptr [ecx + esi*4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + esi*4)));
/* 7c779d: lea eax, [ecx + esi*4] */
  eax = (uint32_t)(ecx + esi*4);
/* 7c77a0: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
L_7c77a2: /* 7c77a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7c77a3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7c77a4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_7c77a5: /* 7c77a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7c77a6: ret 0xc */
  esp += 16; SPILL(); return;
}
