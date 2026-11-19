#include "recomp.h"
#include "rec_mod.h"

void f_8a502a(void) {
  LOAD_REGS();
L_8a502a: /* 8a502a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8a5030: /* 8a5030: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 8a5033: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8a5035: mov bp, word ptr [eax + edx] */
  ebp = (ebp & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + edx))) & 0xffffu);
/* 8a5039: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a503b: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a503d: mov word ptr [ecx], bp */
  W16((uint32_t)(ecx), (ebp & 0xffffu));
/* 8a5040: mov ebp, dword ptr [eax + 4] */
  ebp = R32((uint32_t)(eax + 0x4u));
/* 8a5043: mov dword ptr [ecx + 4], ebp */
  W32((uint32_t)(ecx + 0x4u), ebp);
/* 8a5046: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8a5049: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8a504c: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 8a504f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8a5050: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8a5053: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a5055: jl 0x8a5030 */
  if ((sf != of)) goto L_8a5030;
L_8a5057: /* 8a5057: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 8a505b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a505d: lea ebx, [ebp + 0xe0] */
  ebx = (uint32_t)(ebp + 0xe0u);
/* 8a5063: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a5065: mov ecx, ebx */
  ecx = ebx;
/* 8a5067: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a506du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a506d: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 8a5070: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a5072: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a5073: mov ecx, ebx */
  ecx = ebx;
/* 8a5075: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a507bu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a507b: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 8a507e: xor edx, edx */
  edx = 0;
/* 8a5080: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a5082: jle 0x8a50ba */
  if ((zf || sf != of)) goto L_8a50ba;
L_8a5084: /* 8a5084: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 8a5087: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8a5089: lea edi, [edx*8] */
  edi = (uint32_t)(edx*8);
/* 8a5090: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a5092: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a5094: mov di, word ptr [eax] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 8a5097: mov word ptr [ecx], di */
  W16((uint32_t)(ecx), (edi & 0xffffu));
/* 8a509a: mov di, word ptr [eax + 2] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x2u))) & 0xffffu);
/* 8a509e: mov word ptr [ecx + 2], di */
  W16((uint32_t)(ecx + 0x2u), (edi & 0xffffu));
/* 8a50a2: mov di, word ptr [eax + 4] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x4u))) & 0xffffu);
/* 8a50a6: mov word ptr [ecx + 4], di */
  W16((uint32_t)(ecx + 0x4u), (edi & 0xffffu));
/* 8a50aa: mov ax, word ptr [eax + 6] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x6u))) & 0xffffu);
/* 8a50ae: mov word ptr [ecx + 6], ax */
  W16((uint32_t)(ecx + 0x6u), (eax & 0xffffu));
/* 8a50b2: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 8a50b5: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8a50b6: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a50b8: jl 0x8a5084 */
  if ((sf != of)) goto L_8a5084;
L_8a50ba: /* 8a50ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a50bc: lea edi, [ebp + 0xf8] */
  edi = (uint32_t)(ebp + 0xf8u);
/* 8a50c2: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a50c4: mov ecx, edi */
  ecx = edi;
/* 8a50c6: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a50ccu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a50cc: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8a50cf: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a50d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a50d2: mov ecx, edi */
  ecx = edi;
/* 8a50d4: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a50dau); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a50da: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8a50dd: xor ecx, ecx */
  ecx = 0;
/* 8a50df: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a50e1: jle 0x8a5109 */
  if ((zf || sf != of)) goto L_8a5109;
L_8a50e3: /* 8a50e3: xor eax, eax */
  eax = 0;
L_8a50e5: /* 8a50e5: mov edx, dword ptr [esi + 0x24] */
  edx = R32((uint32_t)(esi + 0x24u));
/* 8a50e8: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 8a50ea: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8a50ec: mov ebp, dword ptr [edx] */
  ebp = R32((uint32_t)(edx));
/* 8a50ee: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8a50f0: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
/* 8a50f2: mov ebp, dword ptr [edx + 4] */
  ebp = R32((uint32_t)(edx + 0x4u));
/* 8a50f5: mov dword ptr [ebx + 4], ebp */
  W32((uint32_t)(ebx + 0x4u), ebp);
/* 8a50f8: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8a50fb: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 8a50fe: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8a5101: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8a5102: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a5105: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a5107: jl 0x8a50e5 */
  if ((sf != of)) goto L_8a50e5;
L_8a5109: /* 8a5109: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a510a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a510b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a510c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a510d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a5170(void) {
  LOAD_REGS();
L_8a5170: /* 8a5170: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a5171: mov ebp, esp */
  ebp = esp;
/* 8a5173: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a5175: push 0x9d6100 */
  { uint32_t v = 0x9d6100u; esp -= 4; W32(esp, v); }
/* 8a517a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a5180: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a5181: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a5188: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a518b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a518c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a518d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8a5190: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a5191: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8a5194: xor edi, edi */
  edi = 0;
/* 8a5196: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a5197: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a5199: mov ecx, esi */
  ecx = esi;
/* 8a519b: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8a519e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a51a4u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a51a4: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 8a51a7: xor eax, eax */
  eax = 0;
/* 8a51a9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8a51b0: /* 8a51b0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a51b3: jge 0x8a51b8 */
  if ((sf == of)) goto L_8a51b8;
L_8a51b5: /* 8a51b5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a51b6: jmp 0x8a51b0 */
  goto L_8a51b0;
L_8a51b8: /* 8a51b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a51b9: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8a51bb: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a51c1u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a51c1: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 8a51c4: xor eax, eax */
  eax = 0;
L_8a51c6: /* 8a51c6: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a51c9: jge 0x8a51ce */
  if ((sf == of)) goto L_8a51ce;
L_8a51cb: /* 8a51cb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a51cc: jmp 0x8a51c6 */
  goto L_8a51c6;
L_8a51ce: /* 8a51ce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a51cf: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8a51d1: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a51d7u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a51d7: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 8a51da: xor eax, eax */
  eax = 0;
/* 8a51dc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8a51e0: /* 8a51e0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a51e3: jge 0x8a51e8 */
  if ((sf == of)) goto L_8a51e8;
L_8a51e5: /* 8a51e5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a51e6: jmp 0x8a51e0 */
  goto L_8a51e0;
L_8a51e8: /* 8a51e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a51e9: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8a51eb: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a51f1u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a51f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a51f2: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 8a51f5: call dword ptr [0xcfa3a0] */
  esp -= 4; W32(esp, 0x8a51fbu); SPILL(); f_4e264e(); if (g_unwind) return; /* Core!?Empty@?$TArray@G@@QAEXH@Z */ RELOAD();
/* 8a51fb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a51fc: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* 8a51ff: call dword ptr [0xcfa3a0] */
  esp -= 4; W32(esp, 0x8a5205u); SPILL(); f_4e264e(); if (g_unwind) return; /* Core!?Empty@?$TArray@G@@QAEXH@Z */ RELOAD();
/* 8a5205: lea ecx, [esi + 0x8c] */
  ecx = (uint32_t)(esi + 0x8cu);
/* 8a520b: xor eax, eax */
  eax = 0;
/* 8a520d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8a5210: /* 8a5210: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a5213: jge 0x8a5218 */
  if ((sf == of)) goto L_8a5218;
L_8a5215: /* 8a5215: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a5216: jmp 0x8a5210 */
  goto L_8a5210;
L_8a5218: /* 8a5218: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a5219: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 8a521b: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a5221u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a5221: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a5222: lea ecx, [esi + 0x98] */
  ecx = (uint32_t)(esi + 0x98u);
/* 8a5228: call dword ptr [0xcfa3a0] */
  esp -= 4; W32(esp, 0x8a522eu); SPILL(); f_4e264e(); if (g_unwind) return; /* Core!?Empty@?$TArray@G@@QAEXH@Z */ RELOAD();
/* 8a522e: lea ecx, [esi + 0xb0] */
  ecx = (uint32_t)(esi + 0xb0u);
/* 8a5234: xor eax, eax */
  eax = 0;
L_8a5236: /* 8a5236: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a5239: jge 0x8a523e */
  if ((sf == of)) goto L_8a523e;
L_8a523b: /* 8a523b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a523c: jmp 0x8a5236 */
  goto L_8a5236;
L_8a523e: /* 8a523e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a523f: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a5241: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a5247u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a5247: lea ecx, [esi + 0xc8] */
  ecx = (uint32_t)(esi + 0xc8u);
/* 8a524d: xor eax, eax */
  eax = 0;
/* 8a524f: nop  */
L_8a5250: /* 8a5250: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a5253: jge 0x8a5258 */
  if ((sf == of)) goto L_8a5258;
L_8a5255: /* 8a5255: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a5256: jmp 0x8a5250 */
  goto L_8a5250;
L_8a5258: /* 8a5258: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a5259: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a525b: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a5261u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a5261: lea ecx, [esi + 0xe0] */
  ecx = (uint32_t)(esi + 0xe0u);
/* 8a5267: xor eax, eax */
  eax = 0;
/* 8a5269: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8a5270: /* 8a5270: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a5273: jge 0x8a5278 */
  if ((sf == of)) goto L_8a5278;
L_8a5275: /* 8a5275: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a5276: jmp 0x8a5270 */
  goto L_8a5270;
L_8a5278: /* 8a5278: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a5279: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a527b: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a5281u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a5281: lea ecx, [esi + 0xf8] */
  ecx = (uint32_t)(esi + 0xf8u);
/* 8a5287: xor eax, eax */
  eax = 0;
/* 8a5289: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8a5290: /* 8a5290: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a5293: jge 0x8a5298 */
  if ((sf == of)) goto L_8a5298;
L_8a5295: /* 8a5295: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a5296: jmp 0x8a5290 */
  goto L_8a5290;
L_8a5298: /* 8a5298: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a5299: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a529b: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a52a1u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a52a1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a52a4: mov dword ptr [esi + 0x104], edi */
  W32((uint32_t)(esi + 0x104u), edi);
/* 8a52aa: mov dword ptr [esi + 0x108], edi */
  W32((uint32_t)(esi + 0x108u), edi);
/* 8a52b0: mov dword ptr [esi + 0x10c], edi */
  W32((uint32_t)(esi + 0x10cu), edi);
/* 8a52b6: mov dword ptr [esi + 0x110], edi */
  W32((uint32_t)(esi + 0x110u), edi);
/* 8a52bc: mov dword ptr [esi + 0x114], edi */
  W32((uint32_t)(esi + 0x114u), edi);
/* 8a52c2: mov dword ptr [esi + 0x118], edi */
  W32((uint32_t)(esi + 0x118u), edi);
/* 8a52c8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a52c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a52ca: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a52d1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a52d2: mov esp, ebp */
  esp = ebp;
/* 8a52d4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a52d5: ret  */
  esp += 4; SPILL(); return;
}

void f_8a52d6(void) {
  LOAD_REGS();
L_8a52d6: /* 8a52d6: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8a52d9: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8a52de: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8a52e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a52e2: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8a52e5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a52eau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8a52ea(); return;
}

void f_8a52ea(void) {
  LOAD_REGS();
L_8a52ea: /* 8a52ea: push 0xa1ad0c */
  { uint32_t v = 0xa1ad0cu; esp -= 4; W32(esp, v); }
/* 8a52ef: push 0xae8fdc */
  { uint32_t v = 0xae8fdcu; esp -= 4; W32(esp, v); }
/* 8a52f4: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8a52fau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8a52fa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a52fd: xor edi, edi */
  edi = 0;
/* 8a52ff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a5300: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a5301: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a5306u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8a5306: guest_badaddr(0x8a5306); return;
}

void f_8a5380(void) {
  LOAD_REGS();
L_8a5380: /* 8a5380: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a5381: mov ebp, esp */
  ebp = esp;
/* 8a5383: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a5385: push 0x9d6110 */
  { uint32_t v = 0x9d6110u; esp -= 4; W32(esp, v); }
/* 8a538a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a5390: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a5391: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a5398: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a539b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a539c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a539d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a539e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8a53a1: mov eax, dword ptr [edi + 0xe4] */
  eax = R32((uint32_t)(edi + 0xe4u));
/* 8a53a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a53a9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8a53ac: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8a53b3: je 0x8a5588 */
  if (zf) goto L_8a5588;
L_8a53b9: /* 8a53b9: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 8a53bc: xor eax, eax */
  eax = 0;
/* 8a53be: mov edi, edi */
  edi = edi;
L_8a53c0: /* 8a53c0: cmp eax, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a53c3: jge 0x8a53c8 */
  if ((sf == of)) goto L_8a53c8;
L_8a53c5: /* 8a53c5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a53c6: jmp 0x8a53c0 */
  goto L_8a53c0;
L_8a53c8: /* 8a53c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a53ca: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a53cc: mov ecx, ebx */
  ecx = ebx;
/* 8a53ce: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a53d4u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a53d4: mov eax, dword ptr [edi + 0xfc] */
  eax = R32((uint32_t)(edi + 0xfcu));
/* 8a53da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a53db: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a53dd: mov ecx, ebx */
  ecx = ebx;
/* 8a53df: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8a53e5u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8a53e5: xor edx, edx */
  edx = 0;
/* 8a53e7: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 8a53ea: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8a53f0: /* 8a53f0: cmp edx, dword ptr [edi + 0xe4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0xe4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a53f6: jge 0x8a54ff */
  if ((sf == of)) goto L_8a54ff;
L_8a53fc: /* 8a53fc: xor eax, eax */
  eax = 0;
/* 8a53fe: mov edi, edi */
  edi = edi;
L_8a5400: /* 8a5400: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a5403: jge 0x8a5426 */
  if ((sf == of)) goto L_8a5426;
L_8a5405: /* 8a5405: mov esi, dword ptr [edi + 0xe0] */
  esi = R32((uint32_t)(edi + 0xe0u));
/* 8a540b: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8a540e: movzx ecx, word ptr [esi + ecx*2] */
  ecx = (uint32_t)(R16((uint32_t)(esi + ecx*2)));
/* 8a5412: mov esi, dword ptr [edi + 0xc8] */
  esi = R32((uint32_t)(edi + 0xc8u));
/* 8a5418: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 8a541b: movzx ecx, word ptr [esi + ecx*4] */
  ecx = (uint32_t)(R16((uint32_t)(esi + ecx*4)));
/* 8a541f: mov dword ptr [ebp + eax*4 - 0x3c], ecx */
  W32((uint32_t)(ebp + eax*4 + 0xffffffc4u), ecx);
/* 8a5423: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a5424: jmp 0x8a5400 */
  goto L_8a5400;
L_8a5426: /* 8a5426: mov eax, dword ptr [edi + 0xf8] */
  eax = R32((uint32_t)(edi + 0xf8u));
/* 8a542c: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8a542f: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8a5432: mov esi, dword ptr [ebp - 0x38] */
  esi = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8a5435: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 8a5438: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8a543b: fld dword ptr [edx + eax] */
  { double v = F32((uint32_t)(edx + eax)); FPUSH(v); }
/* 8a543e: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 8a5441: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8a5444: fsub dword ptr [eax + ecx] */
  ST0 = ST0 - (F32((uint32_t)(eax + ecx)));
/* 8a5447: lea esi, [esi + esi*2] */
  esi = (uint32_t)(esi + esi*2);
/* 8a544a: fld dword ptr [edx + eax + 4] */
  { double v = F32((uint32_t)(edx + eax + 0x4u)); FPUSH(v); }
/* 8a544e: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8a5451: fsub dword ptr [eax + ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + ecx + 0x4u)));
/* 8a5455: fld dword ptr [edx + eax + 8] */
  { double v = F32((uint32_t)(edx + eax + 0x8u)); FPUSH(v); }
/* 8a5459: fsub dword ptr [eax + ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + ecx + 0x8u)));
/* 8a545d: fld dword ptr [eax + ecx] */
  { double v = F32((uint32_t)(eax + ecx)); FPUSH(v); }
/* 8a5460: fsub dword ptr [esi + eax] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax)));
/* 8a5463: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8a5466: fld dword ptr [eax + ecx + 4] */
  { double v = F32((uint32_t)(eax + ecx + 0x4u)); FPUSH(v); }
/* 8a546a: fsub dword ptr [esi + eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax + 0x4u)));
/* 8a546e: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8a5471: fld dword ptr [eax + ecx + 8] */
  { double v = F32((uint32_t)(eax + ecx + 0x8u)); FPUSH(v); }
/* 8a5475: fsub dword ptr [esi + eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax + 0x8u)));
/* 8a5479: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8a547b: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8a547e: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a5480: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8a5482: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8a5484: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 8a5486: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8a5488: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8a548b: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8a548d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8a548f: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 8a5492: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8a5494: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8a5497: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 8a549a: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8a549d: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8a549f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8a54a1: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 8a54a3: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8a54a6: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 8a54a8: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 8a54aa: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8a54ad: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 8a54b0: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 8a54b3: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8a54b5: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 8a54b8: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 8a54bb: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8a54bd: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8a54c0: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a54c2: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 8a54c4: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 8a54c6: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8a54c9: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 8a54cc: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 8a54cf: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8a54d1: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 8a54d4: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 8a54d7: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8a54d9: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8a54dc: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a54de: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 8a54e0: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 8a54e2: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8a54e5: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 8a54e8: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 8a54eb: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 8a54ee: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 8a54f1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8a54f4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a54f5: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 8a54f8: mov edx, eax */
  edx = eax;
/* 8a54fa: jmp 0x8a53f0 */
  goto L_8a53f0;
L_8a54ff: /* 8a54ff: xor edi, edi */
  edi = 0;
L_8a5501: /* 8a5501: cmp edi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a5504: jge 0x8a5588 */
  if ((sf == of)) goto L_8a5588;
L_8a550a: /* 8a550a: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8a550c: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 8a550f: lea esi, [eax + edx*4] */
  esi = (uint32_t)(eax + edx*4);
/* 8a5512: mov ecx, esi */
  ecx = esi;
/* 8a5514: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8a551au); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8a551a: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 8a551d: fadd dword ptr [0xa087d0] */
  ST0 = ST0 + (F32((uint32_t)(0xa087d0u)));
/* 8a5523: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a5526: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8a5529: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x8a552fu); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 8a552f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a5532: fst qword ptr [ebp - 0x20] */
  WF64((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 8a5535: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a5536: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8a5539: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8a553c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a553d: mov ecx, esi */
  ecx = esi;
/* 8a553f: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x8a5545u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 8a5545: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8a5547: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 8a5549: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8a554c: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 8a554f: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8a5552: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 8a5555: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8a5556: jmp 0x8a5501 */
  goto L_8a5501;
L_8a5588: /* 8a5588: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a558b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a558c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a558d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a5594: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a5595: mov esp, ebp */
  esp = ebp;
/* 8a5597: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a5598: ret  */
  esp += 4; SPILL(); return;
}

void f_8a5558(void) {
  LOAD_REGS();
L_8a5558: /* 8a5558: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8a555b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8a5560: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8a5563: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a5564: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8a5567: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a556cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8a556c(); return;
}

void f_8a556c(void) {
  LOAD_REGS();
L_8a556c: /* 8a556c: push 0xa1ad30 */
  { uint32_t v = 0xa1ad30u; esp -= 4; W32(esp, v); }
/* 8a5571: push 0xae9044 */
  { uint32_t v = 0xae9044u; esp -= 4; W32(esp, v); }
/* 8a5576: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8a557cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8a557c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a557f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a5581: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a5583: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a5588u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8a5588: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a558b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a558c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a558d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a5594: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a5595: mov esp, ebp */
  esp = ebp;
/* 8a5597: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a5598: ret  */
  esp += 4; SPILL(); return;
}

void f_8a5630(void) {
  LOAD_REGS();
L_8a5630: /* 8a5630: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a5631: mov ebp, esp */
  ebp = esp;
/* 8a5633: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a5635: push 0x9d6120 */
  { uint32_t v = 0x9d6120u; esp -= 4; W32(esp, v); }
/* 8a563a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a5640: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a5641: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a5648: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a564b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a564c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a564d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a564e: xor esi, esi */
  esi = 0;
/* 8a5650: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8a5653: mov edi, ecx */
  edi = ecx;
/* 8a5655: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 8a5658: xor ebx, ebx */
  ebx = 0;
/* 8a565a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8a5660: /* 8a5660: cmp esi, dword ptr [edi + 0x3c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x3cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a5663: jge 0x8a56ab */
  if ((sf == of)) goto L_8a56ab;
L_8a5665: /* 8a5665: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8a5668: mov ecx, esi */
  ecx = esi;
/* 8a566a: imul ecx, ecx, 0x64 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x64u);
  ecx = (uint32_t)r;
  }
/* 8a566d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a566f: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a5671: call 0x6c8201 */
  esp -= 4; W32(esp, 0x8a5676u); SPILL(); f_6c8201(); if (g_unwind) return; RELOAD();
/* 8a5676: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8a5678: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8a5679: jmp 0x8a5660 */
  goto L_8a5660;
L_8a56ab: /* 8a56ab: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a56ae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a56af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a56b0: mov eax, ebx */
  eax = ebx;
/* 8a56b2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a56b9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a56ba: mov esp, ebp */
  esp = ebp;
/* 8a56bc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a56bd: ret  */
  esp += 4; SPILL(); return;
}

void f_8a567b(void) {
  LOAD_REGS();
L_8a567b: /* 8a567b: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8a567e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8a5683: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8a5686: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a5687: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8a568a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a568fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8a568f(); return;
}

void f_8a568f(void) {
  LOAD_REGS();
L_8a568f: /* 8a568f: push 0xa1ad80 */
  { uint32_t v = 0xa1ad80u; esp -= 4; W32(esp, v); }
/* 8a5694: push 0xae9638 */
  { uint32_t v = 0xae9638u; esp -= 4; W32(esp, v); }
/* 8a5699: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8a569fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8a569f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a56a2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a56a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a56a6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a56abu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8a56ab: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a56ae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a56af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a56b0: mov eax, ebx */
  eax = ebx;
/* 8a56b2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a56b9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a56ba: mov esp, ebp */
  esp = ebp;
/* 8a56bc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a56bd: ret  */
  esp += 4; SPILL(); return;
}

void f_8a56f0(void) {
  LOAD_REGS();
L_8a56f0: /* 8a56f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a56f1: mov ebp, esp */
  ebp = esp;
/* 8a56f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a56f5: push 0x9d6130 */
  { uint32_t v = 0x9d6130u; esp -= 4; W32(esp, v); }
/* 8a56fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a5700: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a5701: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a5708: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a570b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a570c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a570d: xor esi, esi */
  esi = 0;
/* 8a570f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a5710: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8a5713: mov edi, ecx */
  edi = ecx;
/* 8a5715: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 8a5718: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 8a571b: or ebx, 0xffffffff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 8a571e: mov edi, edi */
  edi = edi;
L_8a5720: /* 8a5720: cmp esi, dword ptr [edi + 0x48] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x48u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a5723: jge 0x8a5742 */
  if ((sf == of)) goto L_8a5742;
L_8a5725: /* 8a5725: mov edx, dword ptr [edi + 0x44] */
  edx = R32((uint32_t)(edi + 0x44u));
/* 8a5728: mov eax, esi */
  eax = esi;
/* 8a572a: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 8a572d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a572f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a5730: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 8a5733: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x8a5739u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 8a5739: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a573b: je 0x8a573f */
  if (zf) goto L_8a573f;
L_8a573d: /* 8a573d: mov ebx, esi */
  ebx = esi;
L_8a573f: /* 8a573f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8a5740: jmp 0x8a5720 */
  goto L_8a5720;
L_8a5742: /* 8a5742: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a5744: jl 0x8a575a */
  if ((sf != of)) goto L_8a575a;
L_8a5746: /* 8a5746: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8a5749: mov ecx, ebx */
  ecx = ebx;
/* 8a574b: imul ecx, ecx, 0x64 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x64u);
  ecx = (uint32_t)r;
  }
/* 8a574e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a5750: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a5752: call 0x6c8201 */
  esp -= 4; W32(esp, 0x8a5757u); SPILL(); f_6c8201(); if (g_unwind) return; RELOAD();
/* 8a5757: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_8a575a: /* 8a575a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a575d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a5760: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a5761: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a5762: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a5769: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a576a: mov esp, ebp */
  esp = ebp;
/* 8a576c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a576d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a5770(void) {
  LOAD_REGS();
L_8a5770: /* 8a5770: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8a5773: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8a5778: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 8a577b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a577c: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8a577f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a5784u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8a5784(); return;
}

void f_8a5784(void) {
  LOAD_REGS();
L_8a5784: /* 8a5784: push 0xa1adc8 */
  { uint32_t v = 0xa1adc8u; esp -= 4; W32(esp, v); }
/* 8a5789: push 0xae9640 */
  { uint32_t v = 0xae9640u; esp -= 4; W32(esp, v); }
/* 8a578e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8a5794u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8a5794: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a5797: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a5799: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a579b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a57a0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8a57a0: guest_badaddr(0x8a57a0); return;
}

void f_8a57e0(void) {
  LOAD_REGS();
L_8a57e0: /* 8a57e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a57e2: push 0x9d6149 */
  { uint32_t v = 0x9d6149u; esp -= 4; W32(esp, v); }
/* 8a57e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a57ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a57ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a57f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a57f6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a57f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a57f8: mov esi, ecx */
  esi = ecx;
/* 8a57fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a57fb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 8a57ff: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 8a5802: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a5804: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 8a580a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 8a5812: jge 0x8a5828 */
  if ((sf == of)) goto L_8a5828;
L_8a5814: /* 8a5814: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8a5819: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8a581e: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8a5823: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8a5825u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a5825: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a5828: /* 8a5828: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a582b: jle 0x8a5841 */
  if ((zf || sf != of)) goto L_8a5841;
L_8a582d: /* 8a582d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8a5832: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8a5837: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8a583c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8a583eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a583e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a5841: /* 8a5841: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a5843: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a5844: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a5846: mov ecx, esi */
  ecx = esi;
/* 8a5848: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8a584eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8a584e: mov ecx, esi */
  ecx = esi;
/* 8a5850: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 8a5858: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x8a585eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 8a585e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a5862: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a5863: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a5864: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a5865: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a586c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a586f: ret  */
  esp += 4; SPILL(); return;
}

void f_8a58a0(void) {
  LOAD_REGS();
L_8a58a0: /* 8a58a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a58a2: push 0x9d6169 */
  { uint32_t v = 0x9d6169u; esp -= 4; W32(esp, v); }
/* 8a58a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a58ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a58ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a58b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a58b6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a58b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a58b8: mov esi, ecx */
  esi = ecx;
/* 8a58ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a58bb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 8a58bf: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 8a58c2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a58c4: mov ebx, dword ptr [0xcfa2fc] */
  ebx = R32((uint32_t)(0xcfa2fcu));
/* 8a58ca: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 8a58d2: jge 0x8a58e8 */
  if ((sf == of)) goto L_8a58e8;
L_8a58d4: /* 8a58d4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8a58d9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8a58de: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8a58e3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8a58e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a58e5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a58e8: /* 8a58e8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a58eb: jle 0x8a5901 */
  if ((zf || sf != of)) goto L_8a5901;
L_8a58ed: /* 8a58ed: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8a58f2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8a58f7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8a58fc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8a58feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a58fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a5901: /* 8a5901: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a5903: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a5904: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a5906: mov ecx, esi */
  ecx = esi;
/* 8a5908: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8a590eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8a590e: mov ecx, esi */
  ecx = esi;
/* 8a5910: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 8a5918: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x8a591eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 8a591e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8a5922: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a5923: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a5924: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a5925: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a592c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a592f: ret  */
  esp += 4; SPILL(); return;
}

void f_8a5960(void) {
  LOAD_REGS();
L_8a5960: /* 8a5960: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a5961: mov ebp, esp */
  ebp = esp;
/* 8a5963: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a5965: push 0x9d6180 */
  { uint32_t v = 0x9d6180u; esp -= 4; W32(esp, v); }
/* 8a596a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a5970: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a5971: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a5978: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a597b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a597c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a597d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a597e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8a5981: mov esi, ecx */
  esi = ecx;
/* 8a5983: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a5985: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8a5988: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a598a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8a5991: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a5997u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a5997: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 8a599a: xor eax, eax */
  eax = 0;
/* 8a599c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8a59a0: /* 8a59a0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a59a3: jge 0x8a59a8 */
  if ((sf == of)) goto L_8a59a8;
L_8a59a5: /* 8a59a5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a59a6: jmp 0x8a59a0 */
  goto L_8a59a0;
L_8a59a8: /* 8a59a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a59aa: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a59ac: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a59b2u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a59b2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a59b5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a59b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a59b7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a59be: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a59bf: mov esp, ebp */
  esp = ebp;
/* 8a59c1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a59c2: ret  */
  esp += 4; SPILL(); return;
}

void f_8a59c3(void) {
  LOAD_REGS();
L_8a59c3: /* 8a59c3: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8a59c6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8a59cb: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8a59ce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a59cf: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8a59d2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a59d7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8a59d7(); return;
}

void f_8a59d7(void) {
  LOAD_REGS();
L_8a59d7: /* 8a59d7: push 0xa1ae20 */
  { uint32_t v = 0xa1ae20u; esp -= 4; W32(esp, v); }
/* 8a59dc: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8a59e1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8a59e7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8a59e7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a59ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a59ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a59ee: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a59f3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8a59f3: guest_badaddr(0x8a59f3); return;
}

void f_8a5a30(void) {
  LOAD_REGS();
L_8a5a30: /* 8a5a30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a5a32: push 0x9d61c4 */
  { uint32_t v = 0x9d61c4u; esp -= 4; W32(esp, v); }
/* 8a5a37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a5a3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a5a3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a5a45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a5a46: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a5a47: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a5a48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a5a49: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a5a4a: mov edi, ecx */
  edi = ecx;
/* 8a5a4c: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 8a5a50: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a5a56u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a5a56: lea ebx, [edi + 0xc] */
  ebx = (uint32_t)(edi + 0xcu);
/* 8a5a59: mov ecx, ebx */
  ecx = ebx;
/* 8a5a5b: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 8a5a63: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a5a69u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a5a69: lea ecx, [edi + 0x18] */
  ecx = (uint32_t)(edi + 0x18u);
/* 8a5a6c: mov byte ptr [esp + 0x1c], 1 */
  W8((uint32_t)(esp + 0x1cu), 0x1u);
/* 8a5a71: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a5a77u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a5a77: lea ecx, [edi + 0x24] */
  ecx = (uint32_t)(edi + 0x24u);
/* 8a5a7a: mov byte ptr [esp + 0x1c], 2 */
  W8((uint32_t)(esp + 0x1cu), 0x2u);
/* 8a5a7f: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a5a85u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a5a85: lea ecx, [edi + 0x30] */
  ecx = (uint32_t)(edi + 0x30u);
/* 8a5a88: mov byte ptr [esp + 0x1c], 3 */
  W8((uint32_t)(esp + 0x1cu), 0x3u);
/* 8a5a8d: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a5a93u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a5a93: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a5a95: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a5a97: mov ecx, edi */
  ecx = edi;
/* 8a5a99: mov byte ptr [esp + 0x24], 4 */
  W8((uint32_t)(esp + 0x24u), 0x4u);
/* 8a5a9e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a5aa4u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a5aa4: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 8a5aa8: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 8a5aae: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a5ab0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a5ab1: mov ecx, edi */
  ecx = edi;
/* 8a5ab3: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a5ab9u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a5ab9: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8a5abf: xor eax, eax */
  eax = 0;
/* 8a5ac1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a5ac3: jle 0x8a5ae6 */
  if ((zf || sf != of)) goto L_8a5ae6;
L_8a5ac5: /* 8a5ac5: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* 8a5acb: mov ebp, dword ptr [ecx + eax*8] */
  ebp = R32((uint32_t)(ecx + eax*8));
/* 8a5ace: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8a5ad0: mov dword ptr [edx + eax*8], ebp */
  W32((uint32_t)(edx + eax*8), ebp);
/* 8a5ad3: mov ecx, dword ptr [ecx + eax*8 + 4] */
  ecx = R32((uint32_t)(ecx + eax*8 + 0x4u));
/* 8a5ad7: mov dword ptr [edx + eax*8 + 4], ecx */
  W32((uint32_t)(edx + eax*8 + 0x4u), ecx);
/* 8a5adb: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8a5ae1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a5ae2: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a5ae4: jl 0x8a5ac5 */
  if ((sf != of)) goto L_8a5ac5;
L_8a5ae6: /* 8a5ae6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a5ae8: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a5aea: mov ecx, ebx */
  ecx = ebx;
/* 8a5aec: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a5af2u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a5af2: mov edx, dword ptr [esi + 0xcc] */
  edx = R32((uint32_t)(esi + 0xccu));
/* 8a5af8: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a5afa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a5afb: mov ecx, ebx */
  ecx = ebx;
/* 8a5afd: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a5b03u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a5b03: mov eax, dword ptr [esi + 0xcc] */
  eax = R32((uint32_t)(esi + 0xccu));
/* 8a5b09: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a5b0b: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 8a5b13: jle 0x8a5b55 */
  if ((zf || sf != of)) goto L_8a5b55;
L_8a5b15: /* 8a5b15: xor edx, edx */
  edx = 0;
/* 8a5b17: jmp 0x8a5b20 */
  goto L_8a5b20;
L_8a5b20: /* 8a5b20: mov eax, dword ptr [esi + 0xc8] */
  eax = R32((uint32_t)(esi + 0xc8u));
/* 8a5b26: mov bp, word ptr [eax + edx] */
  ebp = (ebp & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + edx))) & 0xffffu);
/* 8a5b2a: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8a5b2c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a5b2e: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a5b30: mov word ptr [ecx], bp */
  W16((uint32_t)(ecx), (ebp & 0xffffu));
/* 8a5b33: mov ebp, dword ptr [eax + 4] */
  ebp = R32((uint32_t)(eax + 0x4u));
/* 8a5b36: mov dword ptr [ecx + 4], ebp */
  W32((uint32_t)(ecx + 0x4u), ebp);
/* 8a5b39: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8a5b3c: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8a5b3f: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 8a5b43: mov ecx, dword ptr [esi + 0xcc] */
  ecx = R32((uint32_t)(esi + 0xccu));
/* 8a5b49: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a5b4a: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8a5b4d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a5b4f: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 8a5b53: jl 0x8a5b20 */
  if ((sf != of)) goto L_8a5b20;
L_8a5b55: /* 8a5b55: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a5b57: lea ebp, [edi + 0x18] */
  ebp = (uint32_t)(edi + 0x18u);
/* 8a5b5a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a5b5c: mov ecx, ebp */
  ecx = ebp;
/* 8a5b5e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a5b64u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a5b64: mov ecx, dword ptr [esi + 0xe4] */
  ecx = R32((uint32_t)(esi + 0xe4u));
/* 8a5b6a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a5b6c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a5b6d: mov ecx, ebp */
  ecx = ebp;
/* 8a5b6f: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a5b75u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a5b75: mov eax, dword ptr [esi + 0xe4] */
  eax = R32((uint32_t)(esi + 0xe4u));
/* 8a5b7b: xor edx, edx */
  edx = 0;
/* 8a5b7d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a5b7f: jle 0x8a5bcd */
  if ((zf || sf != of)) goto L_8a5bcd;
L_8a5b81: /* 8a5b81: jmp 0x8a5b90 */
  goto L_8a5b90;
L_8a5b90: /* 8a5b90: mov eax, dword ptr [esi + 0xe0] */
  eax = R32((uint32_t)(esi + 0xe0u));
/* 8a5b96: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 8a5b99: lea ebx, [edx*8] */
  ebx = (uint32_t)(edx*8);
/* 8a5ba0: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a5ba2: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a5ba4: mov bx, word ptr [eax] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 8a5ba7: mov word ptr [ecx], bx */
  W16((uint32_t)(ecx), (ebx & 0xffffu));
/* 8a5baa: mov bx, word ptr [eax + 2] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x2u))) & 0xffffu);
/* 8a5bae: mov word ptr [ecx + 2], bx */
  W16((uint32_t)(ecx + 0x2u), (ebx & 0xffffu));
/* 8a5bb2: mov bx, word ptr [eax + 4] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x4u))) & 0xffffu);
/* 8a5bb6: mov word ptr [ecx + 4], bx */
  W16((uint32_t)(ecx + 0x4u), (ebx & 0xffffu));
/* 8a5bba: mov ax, word ptr [eax + 6] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x6u))) & 0xffffu);
/* 8a5bbe: mov word ptr [ecx + 6], ax */
  W16((uint32_t)(ecx + 0x6u), (eax & 0xffffu));
/* 8a5bc2: mov eax, dword ptr [esi + 0xe4] */
  eax = R32((uint32_t)(esi + 0xe4u));
/* 8a5bc8: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8a5bc9: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a5bcb: jl 0x8a5b90 */
  if ((sf != of)) goto L_8a5b90;
L_8a5bcd: /* 8a5bcd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a5bcf: lea ebx, [edi + 0x24] */
  ebx = (uint32_t)(edi + 0x24u);
/* 8a5bd2: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a5bd4: mov ecx, ebx */
  ecx = ebx;
/* 8a5bd6: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a5bdcu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a5bdc: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* 8a5be2: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a5be4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a5be5: mov ecx, ebx */
  ecx = ebx;
/* 8a5be7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a5bedu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a5bed: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* 8a5bf3: xor eax, eax */
  eax = 0;
/* 8a5bf5: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a5bf7: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 8a5bfb: jle 0x8a5c32 */
  if ((zf || sf != of)) goto L_8a5c32;
L_8a5bfd: /* 8a5bfd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8a5c00: /* 8a5c00: mov edx, dword ptr [esi + 0xf8] */
  edx = R32((uint32_t)(esi + 0xf8u));
/* 8a5c06: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8a5c08: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8a5c0a: mov ebp, dword ptr [edx] */
  ebp = R32((uint32_t)(edx));
/* 8a5c0c: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a5c0e: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 8a5c10: mov ebp, dword ptr [edx + 4] */
  ebp = R32((uint32_t)(edx + 0x4u));
/* 8a5c13: mov dword ptr [ecx + 4], ebp */
  W32((uint32_t)(ecx + 0x4u), ebp);
/* 8a5c16: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8a5c19: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8a5c1c: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 8a5c20: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* 8a5c26: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8a5c27: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a5c2a: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a5c2c: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 8a5c30: jl 0x8a5c00 */
  if ((sf != of)) goto L_8a5c00;
L_8a5c32: /* 8a5c32: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 8a5c36: mov eax, edi */
  eax = edi;
/* 8a5c38: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a5c39: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a5c3a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a5c3b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a5c3c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a5c43: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a5c46: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a5b19(void) {
  LOAD_REGS();
L_8a5b19: /* 8a5b19: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8a5b20: /* 8a5b20: mov eax, dword ptr [esi + 0xc8] */
  eax = R32((uint32_t)(esi + 0xc8u));
/* 8a5b26: mov bp, word ptr [eax + edx] */
  ebp = (ebp & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + edx))) & 0xffffu);
/* 8a5b2a: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8a5b2c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a5b2e: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a5b30: mov word ptr [ecx], bp */
  W16((uint32_t)(ecx), (ebp & 0xffffu));
/* 8a5b33: mov ebp, dword ptr [eax + 4] */
  ebp = R32((uint32_t)(eax + 0x4u));
/* 8a5b36: mov dword ptr [ecx + 4], ebp */
  W32((uint32_t)(ecx + 0x4u), ebp);
/* 8a5b39: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8a5b3c: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8a5b3f: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 8a5b43: mov ecx, dword ptr [esi + 0xcc] */
  ecx = R32((uint32_t)(esi + 0xccu));
/* 8a5b49: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a5b4a: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8a5b4d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a5b4f: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 8a5b53: jl 0x8a5b20 */
  if ((sf != of)) goto L_8a5b20;
L_8a5b55: /* 8a5b55: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a5b57: lea ebp, [edi + 0x18] */
  ebp = (uint32_t)(edi + 0x18u);
/* 8a5b5a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a5b5c: mov ecx, ebp */
  ecx = ebp;
/* 8a5b5e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a5b64u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a5b64: mov ecx, dword ptr [esi + 0xe4] */
  ecx = R32((uint32_t)(esi + 0xe4u));
/* 8a5b6a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a5b6c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a5b6d: mov ecx, ebp */
  ecx = ebp;
/* 8a5b6f: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a5b75u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a5b75: mov eax, dword ptr [esi + 0xe4] */
  eax = R32((uint32_t)(esi + 0xe4u));
/* 8a5b7b: xor edx, edx */
  edx = 0;
/* 8a5b7d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a5b7f: jle 0x8a5bcd */
  if ((zf || sf != of)) goto L_8a5bcd;
L_8a5b81: /* 8a5b81: jmp 0x8a5b90 */
  goto L_8a5b90;
L_8a5b90: /* 8a5b90: mov eax, dword ptr [esi + 0xe0] */
  eax = R32((uint32_t)(esi + 0xe0u));
/* 8a5b96: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 8a5b99: lea ebx, [edx*8] */
  ebx = (uint32_t)(edx*8);
/* 8a5ba0: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a5ba2: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a5ba4: mov bx, word ptr [eax] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 8a5ba7: mov word ptr [ecx], bx */
  W16((uint32_t)(ecx), (ebx & 0xffffu));
/* 8a5baa: mov bx, word ptr [eax + 2] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x2u))) & 0xffffu);
/* 8a5bae: mov word ptr [ecx + 2], bx */
  W16((uint32_t)(ecx + 0x2u), (ebx & 0xffffu));
/* 8a5bb2: mov bx, word ptr [eax + 4] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x4u))) & 0xffffu);
/* 8a5bb6: mov word ptr [ecx + 4], bx */
  W16((uint32_t)(ecx + 0x4u), (ebx & 0xffffu));
/* 8a5bba: mov ax, word ptr [eax + 6] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x6u))) & 0xffffu);
/* 8a5bbe: mov word ptr [ecx + 6], ax */
  W16((uint32_t)(ecx + 0x6u), (eax & 0xffffu));
/* 8a5bc2: mov eax, dword ptr [esi + 0xe4] */
  eax = R32((uint32_t)(esi + 0xe4u));
/* 8a5bc8: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8a5bc9: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a5bcb: jl 0x8a5b90 */
  if ((sf != of)) goto L_8a5b90;
L_8a5bcd: /* 8a5bcd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a5bcf: lea ebx, [edi + 0x24] */
  ebx = (uint32_t)(edi + 0x24u);
/* 8a5bd2: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a5bd4: mov ecx, ebx */
  ecx = ebx;
/* 8a5bd6: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a5bdcu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a5bdc: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* 8a5be2: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a5be4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a5be5: mov ecx, ebx */
  ecx = ebx;
/* 8a5be7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a5bedu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a5bed: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* 8a5bf3: xor eax, eax */
  eax = 0;
/* 8a5bf5: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a5bf7: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 8a5bfb: jle 0x8a5c32 */
  if ((zf || sf != of)) goto L_8a5c32;
L_8a5bfd: /* 8a5bfd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8a5c00: /* 8a5c00: mov edx, dword ptr [esi + 0xf8] */
  edx = R32((uint32_t)(esi + 0xf8u));
/* 8a5c06: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8a5c08: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8a5c0a: mov ebp, dword ptr [edx] */
  ebp = R32((uint32_t)(edx));
/* 8a5c0c: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a5c0e: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 8a5c10: mov ebp, dword ptr [edx + 4] */
  ebp = R32((uint32_t)(edx + 0x4u));
/* 8a5c13: mov dword ptr [ecx + 4], ebp */
  W32((uint32_t)(ecx + 0x4u), ebp);
/* 8a5c16: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8a5c19: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8a5c1c: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 8a5c20: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* 8a5c26: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8a5c27: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a5c2a: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a5c2c: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 8a5c30: jl 0x8a5c00 */
  if ((sf != of)) goto L_8a5c00;
L_8a5c32: /* 8a5c32: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 8a5c36: mov eax, edi */
  eax = edi;
/* 8a5c38: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a5c39: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a5c3a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a5c3b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a5c3c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a5c43: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a5c46: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a5b83(void) {
  LOAD_REGS();
L_8a5b83: /* 8a5b83: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 8a5b8a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8a5b90: /* 8a5b90: mov eax, dword ptr [esi + 0xe0] */
  eax = R32((uint32_t)(esi + 0xe0u));
/* 8a5b96: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 8a5b99: lea ebx, [edx*8] */
  ebx = (uint32_t)(edx*8);
/* 8a5ba0: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a5ba2: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a5ba4: mov bx, word ptr [eax] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 8a5ba7: mov word ptr [ecx], bx */
  W16((uint32_t)(ecx), (ebx & 0xffffu));
/* 8a5baa: mov bx, word ptr [eax + 2] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x2u))) & 0xffffu);
/* 8a5bae: mov word ptr [ecx + 2], bx */
  W16((uint32_t)(ecx + 0x2u), (ebx & 0xffffu));
/* 8a5bb2: mov bx, word ptr [eax + 4] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x4u))) & 0xffffu);
/* 8a5bb6: mov word ptr [ecx + 4], bx */
  W16((uint32_t)(ecx + 0x4u), (ebx & 0xffffu));
/* 8a5bba: mov ax, word ptr [eax + 6] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x6u))) & 0xffffu);
/* 8a5bbe: mov word ptr [ecx + 6], ax */
  W16((uint32_t)(ecx + 0x6u), (eax & 0xffffu));
/* 8a5bc2: mov eax, dword ptr [esi + 0xe4] */
  eax = R32((uint32_t)(esi + 0xe4u));
/* 8a5bc8: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8a5bc9: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a5bcb: jl 0x8a5b90 */
  if ((sf != of)) goto L_8a5b90;
L_8a5bcd: /* 8a5bcd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a5bcf: lea ebx, [edi + 0x24] */
  ebx = (uint32_t)(edi + 0x24u);
/* 8a5bd2: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a5bd4: mov ecx, ebx */
  ecx = ebx;
/* 8a5bd6: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a5bdcu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a5bdc: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* 8a5be2: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a5be4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a5be5: mov ecx, ebx */
  ecx = ebx;
/* 8a5be7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a5bedu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a5bed: mov ecx, dword ptr [esi + 0xfc] */
  ecx = R32((uint32_t)(esi + 0xfcu));
/* 8a5bf3: xor eax, eax */
  eax = 0;
/* 8a5bf5: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a5bf7: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 8a5bfb: jle 0x8a5c32 */
  if ((zf || sf != of)) goto L_8a5c32;
L_8a5bfd: /* 8a5bfd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8a5c00: /* 8a5c00: mov edx, dword ptr [esi + 0xf8] */
  edx = R32((uint32_t)(esi + 0xf8u));
/* 8a5c06: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8a5c08: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8a5c0a: mov ebp, dword ptr [edx] */
  ebp = R32((uint32_t)(edx));
/* 8a5c0c: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a5c0e: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 8a5c10: mov ebp, dword ptr [edx + 4] */
  ebp = R32((uint32_t)(edx + 0x4u));
/* 8a5c13: mov dword ptr [ecx + 4], ebp */
  W32((uint32_t)(ecx + 0x4u), ebp);
/* 8a5c16: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8a5c19: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8a5c1c: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 8a5c20: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* 8a5c26: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8a5c27: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a5c2a: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a5c2c: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 8a5c30: jl 0x8a5c00 */
  if ((sf != of)) goto L_8a5c00;
L_8a5c32: /* 8a5c32: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 8a5c36: mov eax, edi */
  eax = edi;
/* 8a5c38: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a5c39: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a5c3a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a5c3b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a5c3c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a5c43: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a5c46: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a5ce0(void) {
  LOAD_REGS();
L_8a5ce0: /* 8a5ce0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a5ce1: mov ebp, esp */
  ebp = esp;
/* 8a5ce3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a5ce5: push 0x9d61e8 */
  { uint32_t v = 0x9d61e8u; esp -= 4; W32(esp, v); }
/* 8a5cea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a5cf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a5cf1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a5cf8: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a5cfb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a5cfc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a5cfd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8a5d00: mov eax, dword ptr [esi + 0xe4] */
  eax = R32((uint32_t)(esi + 0xe4u));
/* 8a5d06: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a5d07: xor edi, edi */
  edi = 0;
/* 8a5d09: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a5d0b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8a5d0e: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8a5d11: je 0x8a5f65 */
  if (zf) goto L_8a5f65;
L_8a5d17: /* 8a5d17: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8a5d1a: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a5d20u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a5d20: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 8a5d23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a5d24: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a5d26: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8a5d29: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8a5d2d: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8a5d33u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8a5d33: mov esi, dword ptr [ebp - 0x40] */
  esi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8a5d36: mov ebx, dword ptr [ebp - 0x48] */
  ebx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8a5d39: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 8a5d3c: mov edi, dword ptr [ebp - 0x44] */
  edi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8a5d3f: nop  */
L_8a5d40: /* 8a5d40: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8a5d43: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a5d46: cmp eax, dword ptr [edx + 0xe4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0xe4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a5d4c: jge 0x8a5e56 */
  if ((sf == of)) goto L_8a5e56;
L_8a5d52: /* 8a5d52: xor eax, eax */
  eax = 0;
L_8a5d54: /* 8a5d54: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a5d57: jge 0x8a5d86 */
  if ((sf == of)) goto L_8a5d86;
L_8a5d59: /* 8a5d59: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a5d5c: mov esi, dword ptr [edx + 0xe0] */
  esi = R32((uint32_t)(edx + 0xe0u));
/* 8a5d62: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 8a5d65: movzx ecx, word ptr [esi + ecx*2] */
  ecx = (uint32_t)(R16((uint32_t)(esi + ecx*2)));
/* 8a5d69: mov esi, dword ptr [edx + 0xc8] */
  esi = R32((uint32_t)(edx + 0xc8u));
/* 8a5d6f: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 8a5d72: movzx ecx, word ptr [esi + ecx*4] */
  ecx = (uint32_t)(R16((uint32_t)(esi + ecx*4)));
/* 8a5d76: mov dword ptr [ebp + eax*4 - 0x48], ecx */
  W32((uint32_t)(ebp + eax*4 + 0xffffffb8u), ecx);
/* 8a5d7a: mov esi, dword ptr [ebp - 0x40] */
  esi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8a5d7d: mov edi, dword ptr [ebp - 0x44] */
  edi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8a5d80: mov ebx, dword ptr [ebp - 0x48] */
  ebx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8a5d83: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a5d84: jmp 0x8a5d54 */
  goto L_8a5d54;
L_8a5d86: /* 8a5d86: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 8a5d89: mov ecx, esi */
  ecx = esi;
/* 8a5d8b: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8a5d8e: fld dword ptr [ecx + edx] */
  { double v = F32((uint32_t)(ecx + edx)); FPUSH(v); }
/* 8a5d91: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a5d93: mov eax, ebx */
  eax = ebx;
/* 8a5d95: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8a5d98: fsub dword ptr [eax + edx] */
  ST0 = ST0 - (F32((uint32_t)(eax + edx)));
/* 8a5d9b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a5d9d: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 8a5da0: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 8a5da3: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 8a5da6: mov ecx, edi */
  ecx = edi;
/* 8a5da8: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 8a5dab: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8a5dae: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8a5db0: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a5db2: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 8a5db4: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8a5db7: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 8a5dba: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8a5dbd: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 8a5dc0: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 8a5dc3: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8a5dc6: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 8a5dc9: lea ecx, [ebx + ebx*2] */
  ecx = (uint32_t)(ebx + ebx*2);
/* 8a5dcc: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 8a5dcf: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 8a5dd2: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8a5dd4: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 8a5dd7: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8a5dd9: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 8a5ddb: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8a5ddd: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8a5de0: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8a5de2: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8a5de4: fmul dword ptr [ebp - 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffacu)));
/* 8a5de7: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8a5de9: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8a5dec: fmul dword ptr [ebp - 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffacu)));
/* 8a5def: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 8a5df2: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8a5df4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8a5df6: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 8a5df8: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8a5dfb: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 8a5dfd: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 8a5dff: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8a5e02: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 8a5e05: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 8a5e08: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8a5e0a: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 8a5e0d: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 8a5e10: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8a5e13: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8a5e16: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 8a5e19: fadd dword ptr [ecx + eax*4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + eax*4)));
/* 8a5e1c: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8a5e1f: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 8a5e21: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8a5e24: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 8a5e27: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 8a5e2a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8a5e2c: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 8a5e2f: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 8a5e32: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8a5e35: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8a5e38: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 8a5e3b: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 8a5e3d: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 8a5e3f: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8a5e42: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 8a5e45: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 8a5e48: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 8a5e4b: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 8a5e4e: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 8a5e51: jmp 0x8a5d40 */
  goto L_8a5d40;
L_8a5e56: /* 8a5e56: xor ebx, ebx */
  ebx = 0;
/* 8a5e58: jmp 0x8a5e60 */
  goto L_8a5e60;
L_8a5e60: /* 8a5e60: cmp ebx, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a5e63: jge 0x8a5f59 */
  if ((sf == of)) goto L_8a5f59;
L_8a5e69: /* 8a5e69: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8a5e6c: lea edi, [ebx + ebx*2] */
  edi = (uint32_t)(ebx + ebx*2);
/* 8a5e6f: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8a5e72: lea esi, [edi + ecx] */
  esi = (uint32_t)(edi + ecx);
/* 8a5e75: mov ecx, esi */
  ecx = esi;
/* 8a5e77: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8a5e7du); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8a5e7d: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 8a5e80: fadd dword ptr [0xa087d0] */
  ST0 = ST0 + (F32((uint32_t)(0xa087d0u)));
/* 8a5e86: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a5e89: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8a5e8c: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x8a5e92u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 8a5e92: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a5e95: fst qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 8a5e98: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a5e99: lea edx, [ebp - 0x54] */
  edx = (uint32_t)(ebp + 0xffffffacu);
/* 8a5e9c: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8a5e9f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a5ea0: mov ecx, esi */
  ecx = esi;
/* 8a5ea2: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x8a5ea8u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 8a5ea8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8a5eaa: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 8a5eac: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8a5eaf: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 8a5eb2: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8a5eb5: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 8a5eb8: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8a5ebb: fld dword ptr [edi + ecx + 8] */
  { double v = F32((uint32_t)(edi + ecx + 0x8u)); FPUSH(v); }
/* 8a5ebf: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8a5ec1: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 8a5ec7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a5ec8: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 8a5ecb: fmul dword ptr [0xa1aea0] */
  ST0 = ST0 * (F32((uint32_t)(0xa1aea0u)));
/* 8a5ed1: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8a5ed4: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x8a5edau); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 8a5eda: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 8a5edd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a5ee0: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 8a5ee6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a5ee7: mov esi, eax */
  esi = eax;
/* 8a5ee9: fmul dword ptr [0xa1aea0] */
  ST0 = ST0 * (F32((uint32_t)(0xa1aea0u)));
/* 8a5eef: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8a5ef2: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x8a5ef8u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 8a5ef8: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a5efb: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 8a5efd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a5f00: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 8a5f06: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a5f07: mov edi, eax */
  edi = eax;
/* 8a5f09: fmul dword ptr [0xa1aea0] */
  ST0 = ST0 * (F32((uint32_t)(0xa1aea0u)));
/* 8a5f0f: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8a5f12: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x8a5f18u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 8a5f18: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8a5f1b: and esi, 0x3ff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 8a5f21: shl esi, 0xa */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8a5f24: and edi, 0x3ff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 8a5f2a: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 8a5f2c: shl esi, 0xa */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8a5f2f: and ecx, 0xc0000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xc0000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8a5f35: or esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 8a5f37: and eax, 0x3ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8a5f3c: or esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 8a5f3e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8a5f41: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8a5f44: mov edx, ebx */
  edx = ebx;
/* 8a5f46: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8a5f49: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a5f4c: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 8a5f4f: mov dword ptr [edx + ecx + 0xc], esi */
  W32((uint32_t)(edx + ecx + 0xcu), esi);
/* 8a5f53: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8a5f54: jmp 0x8a5e60 */
  goto L_8a5e60;
L_8a5f59: /* 8a5f59: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8a5f5c: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8a5f60: call 0x6c9543 */
  esp -= 4; W32(esp, 0x8a5f65u); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
L_8a5f65: /* 8a5f65: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a5f68: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a5f69: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a5f6a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a5f71: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a5f72: mov esp, ebp */
  esp = ebp;
/* 8a5f74: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a5f75: ret  */
  esp += 4; SPILL(); return;
}

void f_8a5e5a(void) {
  LOAD_REGS();
L_8a5e5a: /* 8a5e5a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8a5e60: /* 8a5e60: cmp ebx, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a5e63: jge 0x8a5f59 */
  if ((sf == of)) goto L_8a5f59;
L_8a5e69: /* 8a5e69: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8a5e6c: lea edi, [ebx + ebx*2] */
  edi = (uint32_t)(ebx + ebx*2);
/* 8a5e6f: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8a5e72: lea esi, [edi + ecx] */
  esi = (uint32_t)(edi + ecx);
/* 8a5e75: mov ecx, esi */
  ecx = esi;
/* 8a5e77: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8a5e7du); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8a5e7d: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 8a5e80: fadd dword ptr [0xa087d0] */
  ST0 = ST0 + (F32((uint32_t)(0xa087d0u)));
/* 8a5e86: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a5e89: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8a5e8c: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x8a5e92u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 8a5e92: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a5e95: fst qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 8a5e98: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a5e99: lea edx, [ebp - 0x54] */
  edx = (uint32_t)(ebp + 0xffffffacu);
/* 8a5e9c: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8a5e9f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a5ea0: mov ecx, esi */
  ecx = esi;
/* 8a5ea2: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x8a5ea8u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 8a5ea8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8a5eaa: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 8a5eac: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8a5eaf: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 8a5eb2: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8a5eb5: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 8a5eb8: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8a5ebb: fld dword ptr [edi + ecx + 8] */
  { double v = F32((uint32_t)(edi + ecx + 0x8u)); FPUSH(v); }
/* 8a5ebf: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8a5ec1: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 8a5ec7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a5ec8: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 8a5ecb: fmul dword ptr [0xa1aea0] */
  ST0 = ST0 * (F32((uint32_t)(0xa1aea0u)));
/* 8a5ed1: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8a5ed4: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x8a5edau); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 8a5eda: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 8a5edd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a5ee0: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 8a5ee6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a5ee7: mov esi, eax */
  esi = eax;
/* 8a5ee9: fmul dword ptr [0xa1aea0] */
  ST0 = ST0 * (F32((uint32_t)(0xa1aea0u)));
/* 8a5eef: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8a5ef2: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x8a5ef8u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 8a5ef8: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a5efb: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 8a5efd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a5f00: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 8a5f06: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a5f07: mov edi, eax */
  edi = eax;
/* 8a5f09: fmul dword ptr [0xa1aea0] */
  ST0 = ST0 * (F32((uint32_t)(0xa1aea0u)));
/* 8a5f0f: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8a5f12: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x8a5f18u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 8a5f18: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8a5f1b: and esi, 0x3ff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 8a5f21: shl esi, 0xa */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8a5f24: and edi, 0x3ff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 8a5f2a: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 8a5f2c: shl esi, 0xa */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8a5f2f: and ecx, 0xc0000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xc0000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8a5f35: or esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 8a5f37: and eax, 0x3ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8a5f3c: or esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 8a5f3e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8a5f41: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8a5f44: mov edx, ebx */
  edx = ebx;
/* 8a5f46: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8a5f49: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a5f4c: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 8a5f4f: mov dword ptr [edx + ecx + 0xc], esi */
  W32((uint32_t)(edx + ecx + 0xcu), esi);
/* 8a5f53: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8a5f54: jmp 0x8a5e60 */
  goto L_8a5e60;
L_8a5f59: /* 8a5f59: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8a5f5c: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8a5f60: call 0x6c9543 */
  esp -= 4; W32(esp, 0x8a5f65u); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 8a5f65: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a5f68: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a5f69: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a5f6a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a5f71: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a5f72: mov esp, ebp */
  esp = ebp;
/* 8a5f74: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a5f75: ret  */
  esp += 4; SPILL(); return;
}

void f_8a5f76(void) {
  LOAD_REGS();
L_8a5f76: /* 8a5f76: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8a5f79: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8a5f7e: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 8a5f81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a5f82: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8a5f85: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a5f8au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8a5f8a(); return;
}

void f_8a5f8a(void) {
  LOAD_REGS();
L_8a5f8a: /* 8a5f8a: push 0xa1ae50 */
  { uint32_t v = 0xa1ae50u; esp -= 4; W32(esp, v); }
/* 8a5f8f: push 0xae903c */
  { uint32_t v = 0xae903cu; esp -= 4; W32(esp, v); }
/* 8a5f94: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8a5f9au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8a5f9a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a5f9d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a5f9f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a5fa1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a5fa6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8a5fa6: guest_badaddr(0x8a5fa6); return;
}

void f_8a6070(void) {
  LOAD_REGS();
L_8a6070: /* 8a6070: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a6071: mov ebp, esp */
  ebp = esp;
/* 8a6073: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a6075: push 0x9d6208 */
  { uint32_t v = 0x9d6208u; esp -= 4; W32(esp, v); }
/* 8a607a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a6080: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a6081: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a6088: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a608b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8a608e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a608f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a6090: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a6091: mov edi, ecx */
  edi = ecx;
/* 8a6093: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8a6096: xor ebx, ebx */
  ebx = 0;
/* 8a6098: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a609a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8a609d: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8a60a0: jne 0x8a62a4 */
  if (!zf) goto L_8a62a4;
L_8a60a6: /* 8a60a6: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8a60a9: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a60afu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a60af: mov eax, dword ptr [edi + 0x1fc] */
  eax = R32((uint32_t)(edi + 0x1fcu));
/* 8a60b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a60b6: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a60b8: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8a60bb: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8a60bf: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8a60c5u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8a60c5: jmp 0x8a60d0 */
  goto L_8a60d0;
L_8a60d0: /* 8a60d0: cmp ebx, dword ptr [edi + 0xac] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0xacu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a60d6: jge 0x8a61db */
  if ((sf == of)) goto L_8a61db;
L_8a60dc: /* 8a60dc: xor eax, eax */
  eax = 0;
/* 8a60de: mov edi, edi */
  edi = edi;
L_8a60e0: /* 8a60e0: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a60e3: jge 0x8a6106 */
  if ((sf == of)) goto L_8a6106;
L_8a60e5: /* 8a60e5: mov edx, dword ptr [edi + 0xa8] */
  edx = R32((uint32_t)(edi + 0xa8u));
/* 8a60eb: lea ecx, [eax + ebx*4] */
  ecx = (uint32_t)(eax + ebx*4);
/* 8a60ee: movzx ecx, word ptr [edx + ecx*2] */
  ecx = (uint32_t)(R16((uint32_t)(edx + ecx*2)));
/* 8a60f2: mov edx, dword ptr [edi + 0xc0] */
  edx = R32((uint32_t)(edi + 0xc0u));
/* 8a60f8: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 8a60fb: movzx ecx, word ptr [edx + ecx*4] */
  ecx = (uint32_t)(R16((uint32_t)(edx + ecx*4)));
/* 8a60ff: mov dword ptr [ebp + eax*4 - 0x4c], ecx */
  W32((uint32_t)(ebp + eax*4 + 0xffffffb4u), ecx);
/* 8a6103: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a6104: jmp 0x8a60e0 */
  goto L_8a60e0;
L_8a6106: /* 8a6106: mov eax, dword ptr [edi + 0x1f8] */
  eax = R32((uint32_t)(edi + 0x1f8u));
/* 8a610c: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8a610f: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8a6112: mov esi, dword ptr [ebp - 0x48] */
  esi = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8a6115: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 8a6118: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8a611b: fld dword ptr [edx + eax] */
  { double v = F32((uint32_t)(edx + eax)); FPUSH(v); }
/* 8a611e: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 8a6121: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8a6124: fsub dword ptr [eax + ecx] */
  ST0 = ST0 - (F32((uint32_t)(eax + ecx)));
/* 8a6127: lea esi, [esi + esi*2] */
  esi = (uint32_t)(esi + esi*2);
/* 8a612a: fld dword ptr [edx + eax + 4] */
  { double v = F32((uint32_t)(edx + eax + 0x4u)); FPUSH(v); }
/* 8a612e: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8a6131: fsub dword ptr [eax + ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + ecx + 0x4u)));
/* 8a6135: fld dword ptr [edx + eax + 8] */
  { double v = F32((uint32_t)(edx + eax + 0x8u)); FPUSH(v); }
/* 8a6139: fsub dword ptr [eax + ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + ecx + 0x8u)));
/* 8a613d: fld dword ptr [eax + ecx] */
  { double v = F32((uint32_t)(eax + ecx)); FPUSH(v); }
/* 8a6140: fsub dword ptr [esi + eax] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax)));
/* 8a6143: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8a6146: fld dword ptr [eax + ecx + 4] */
  { double v = F32((uint32_t)(eax + ecx + 0x4u)); FPUSH(v); }
/* 8a614a: fsub dword ptr [esi + eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax + 0x4u)));
/* 8a614e: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8a6151: fld dword ptr [eax + ecx + 8] */
  { double v = F32((uint32_t)(eax + ecx + 0x8u)); FPUSH(v); }
/* 8a6155: fsub dword ptr [esi + eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax + 0x8u)));
/* 8a6159: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8a615c: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8a615f: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a6161: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8a6163: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8a6165: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 8a6167: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8a6169: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8a616c: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8a616e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8a6170: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8a6173: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8a6175: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8a6178: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8a617b: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8a617e: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8a6180: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8a6182: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 8a6184: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8a6187: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 8a6189: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 8a618b: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8a618e: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 8a6191: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 8a6194: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8a6196: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 8a6199: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 8a619c: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8a619f: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8a61a2: lea eax, [esi + ecx] */
  eax = (uint32_t)(esi + ecx);
/* 8a61a5: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 8a61a7: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 8a61a9: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8a61ac: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 8a61af: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 8a61b2: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8a61b4: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 8a61b7: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 8a61ba: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8a61bd: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8a61c0: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a61c2: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 8a61c4: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8a61c5: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 8a61c7: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8a61ca: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 8a61cd: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 8a61d0: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 8a61d3: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 8a61d6: jmp 0x8a60d0 */
  goto L_8a60d0;
L_8a61db: /* 8a61db: mov eax, dword ptr [edi + 0x1fc] */
  eax = R32((uint32_t)(edi + 0x1fcu));
/* 8a61e1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8a61e4: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a61e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a61e7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a61edu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a61ed: xor esi, esi */
  esi = 0;
/* 8a61ef: nop  */
L_8a61f0: /* 8a61f0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8a61f3: cmp esi, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a61f6: jge 0x8a6298 */
  if ((sf == of)) goto L_8a6298;
L_8a61fc: /* 8a61fc: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8a61ff: lea ebx, [esi + esi*2] */
  ebx = (uint32_t)(esi + esi*2);
/* 8a6202: shl ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 8a6205: lea ecx, [ebx + edx] */
  ecx = (uint32_t)(ebx + edx);
/* 8a6208: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8a620b: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8a6211u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8a6211: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 8a6214: fadd dword ptr [0xa0892c] */
  ST0 = ST0 + (F32((uint32_t)(0xa0892cu)));
/* 8a621a: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a621d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8a6220: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x8a6226u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 8a6226: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a6229: fst qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 8a622c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a622d: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8a6230: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8a6233: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 8a6236: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a6237: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x8a623du); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 8a623d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8a6240: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a6242: je 0x8a627a */
  if (zf) goto L_8a627a;
L_8a6244: /* 8a6244: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8a6247: mov eax, dword ptr [edi + 0x1f8] */
  eax = R32((uint32_t)(edi + 0x1f8u));
/* 8a624d: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8a6250: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a6252: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8a6255: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 8a6257: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 8a625a: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8a625d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8a625f: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 8a6262: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 8a6265: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8a6268: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 8a626b: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 8a626e: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 8a6271: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 8a6274: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8a6277: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
L_8a627a: /* 8a627a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8a627d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8a627f: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 8a6282: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8a6284: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8a6286: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8a6289: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8a628c: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8a628f: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8a6292: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8a6293: jmp 0x8a61f0 */
  goto L_8a61f0;
L_8a6298: /* 8a6298: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8a629b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8a629f: call 0x6c9543 */
  esp -= 4; W32(esp, 0x8a62a4u); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
L_8a62a4: /* 8a62a4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a62a7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a62a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a62a9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a62b0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a62b1: mov esp, ebp */
  esp = ebp;
/* 8a62b3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a62b4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8a60c7(void) {
  LOAD_REGS();
L_8a60c7: /* 8a60c7: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 8a60ce: mov edi, edi */
  edi = edi;
L_8a60d0: /* 8a60d0: cmp ebx, dword ptr [edi + 0xac] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0xacu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a60d6: jge 0x8a61db */
  if ((sf == of)) goto L_8a61db;
L_8a60dc: /* 8a60dc: xor eax, eax */
  eax = 0;
/* 8a60de: mov edi, edi */
  edi = edi;
L_8a60e0: /* 8a60e0: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a60e3: jge 0x8a6106 */
  if ((sf == of)) goto L_8a6106;
L_8a60e5: /* 8a60e5: mov edx, dword ptr [edi + 0xa8] */
  edx = R32((uint32_t)(edi + 0xa8u));
/* 8a60eb: lea ecx, [eax + ebx*4] */
  ecx = (uint32_t)(eax + ebx*4);
/* 8a60ee: movzx ecx, word ptr [edx + ecx*2] */
  ecx = (uint32_t)(R16((uint32_t)(edx + ecx*2)));
/* 8a60f2: mov edx, dword ptr [edi + 0xc0] */
  edx = R32((uint32_t)(edi + 0xc0u));
/* 8a60f8: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 8a60fb: movzx ecx, word ptr [edx + ecx*4] */
  ecx = (uint32_t)(R16((uint32_t)(edx + ecx*4)));
/* 8a60ff: mov dword ptr [ebp + eax*4 - 0x4c], ecx */
  W32((uint32_t)(ebp + eax*4 + 0xffffffb4u), ecx);
/* 8a6103: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a6104: jmp 0x8a60e0 */
  goto L_8a60e0;
L_8a6106: /* 8a6106: mov eax, dword ptr [edi + 0x1f8] */
  eax = R32((uint32_t)(edi + 0x1f8u));
/* 8a610c: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8a610f: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8a6112: mov esi, dword ptr [ebp - 0x48] */
  esi = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8a6115: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 8a6118: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8a611b: fld dword ptr [edx + eax] */
  { double v = F32((uint32_t)(edx + eax)); FPUSH(v); }
/* 8a611e: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 8a6121: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8a6124: fsub dword ptr [eax + ecx] */
  ST0 = ST0 - (F32((uint32_t)(eax + ecx)));
/* 8a6127: lea esi, [esi + esi*2] */
  esi = (uint32_t)(esi + esi*2);
/* 8a612a: fld dword ptr [edx + eax + 4] */
  { double v = F32((uint32_t)(edx + eax + 0x4u)); FPUSH(v); }
/* 8a612e: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8a6131: fsub dword ptr [eax + ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + ecx + 0x4u)));
/* 8a6135: fld dword ptr [edx + eax + 8] */
  { double v = F32((uint32_t)(edx + eax + 0x8u)); FPUSH(v); }
/* 8a6139: fsub dword ptr [eax + ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + ecx + 0x8u)));
/* 8a613d: fld dword ptr [eax + ecx] */
  { double v = F32((uint32_t)(eax + ecx)); FPUSH(v); }
/* 8a6140: fsub dword ptr [esi + eax] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax)));
/* 8a6143: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8a6146: fld dword ptr [eax + ecx + 4] */
  { double v = F32((uint32_t)(eax + ecx + 0x4u)); FPUSH(v); }
/* 8a614a: fsub dword ptr [esi + eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax + 0x4u)));
/* 8a614e: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8a6151: fld dword ptr [eax + ecx + 8] */
  { double v = F32((uint32_t)(eax + ecx + 0x8u)); FPUSH(v); }
/* 8a6155: fsub dword ptr [esi + eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(esi + eax + 0x8u)));
/* 8a6159: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8a615c: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8a615f: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a6161: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8a6163: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8a6165: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 8a6167: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8a6169: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8a616c: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8a616e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8a6170: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8a6173: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8a6175: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8a6178: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8a617b: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8a617e: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8a6180: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8a6182: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 8a6184: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8a6187: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 8a6189: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 8a618b: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8a618e: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 8a6191: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 8a6194: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8a6196: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 8a6199: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 8a619c: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8a619f: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8a61a2: lea eax, [esi + ecx] */
  eax = (uint32_t)(esi + ecx);
/* 8a61a5: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 8a61a7: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 8a61a9: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8a61ac: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 8a61af: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 8a61b2: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8a61b4: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 8a61b7: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 8a61ba: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8a61bd: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8a61c0: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a61c2: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 8a61c4: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8a61c5: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 8a61c7: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8a61ca: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 8a61cd: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 8a61d0: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 8a61d3: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 8a61d6: jmp 0x8a60d0 */
  goto L_8a60d0;
L_8a61db: /* 8a61db: mov eax, dword ptr [edi + 0x1fc] */
  eax = R32((uint32_t)(edi + 0x1fcu));
/* 8a61e1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8a61e4: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a61e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a61e7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a61edu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a61ed: xor esi, esi */
  esi = 0;
/* 8a61ef: nop  */
L_8a61f0: /* 8a61f0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8a61f3: cmp esi, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a61f6: jge 0x8a6298 */
  if ((sf == of)) goto L_8a6298;
L_8a61fc: /* 8a61fc: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8a61ff: lea ebx, [esi + esi*2] */
  ebx = (uint32_t)(esi + esi*2);
/* 8a6202: shl ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 8a6205: lea ecx, [ebx + edx] */
  ecx = (uint32_t)(ebx + edx);
/* 8a6208: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8a620b: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8a6211u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8a6211: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 8a6214: fadd dword ptr [0xa0892c] */
  ST0 = ST0 + (F32((uint32_t)(0xa0892cu)));
/* 8a621a: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a621d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8a6220: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x8a6226u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 8a6226: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a6229: fst qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 8a622c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a622d: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8a6230: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8a6233: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 8a6236: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a6237: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x8a623du); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 8a623d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8a6240: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a6242: je 0x8a627a */
  if (zf) goto L_8a627a;
L_8a6244: /* 8a6244: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8a6247: mov eax, dword ptr [edi + 0x1f8] */
  eax = R32((uint32_t)(edi + 0x1f8u));
/* 8a624d: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8a6250: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a6252: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8a6255: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 8a6257: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 8a625a: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8a625d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8a625f: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 8a6262: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 8a6265: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8a6268: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 8a626b: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 8a626e: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 8a6271: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 8a6274: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8a6277: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
L_8a627a: /* 8a627a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8a627d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8a627f: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 8a6282: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8a6284: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8a6286: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8a6289: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8a628c: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8a628f: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8a6292: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8a6293: jmp 0x8a61f0 */
  goto L_8a61f0;
L_8a6298: /* 8a6298: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8a629b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8a629f: call 0x6c9543 */
  esp -= 4; W32(esp, 0x8a62a4u); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 8a62a4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a62a7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a62a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a62a9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a62b0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a62b1: mov esp, ebp */
  esp = ebp;
/* 8a62b3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a62b4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8a62b7(void) {
  LOAD_REGS();
L_8a62b7: /* 8a62b7: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8a62ba: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8a62bf: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 8a62c2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a62c3: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 8a62c6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a62cbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8a62cb(); return;
}

void f_8a62cb(void) {
  LOAD_REGS();
L_8a62cb: /* 8a62cb: push 0xa1aea8 */
  { uint32_t v = 0xa1aea8u; esp -= 4; W32(esp, v); }
/* 8a62d0: push 0xae9054 */
  { uint32_t v = 0xae9054u; esp -= 4; W32(esp, v); }
/* 8a62d5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8a62dbu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8a62db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a62de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a62e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a62e2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a62e7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8a62e7: guest_badaddr(0x8a62e7); return;
}

void f_8a6390(void) {
  LOAD_REGS();
L_8a6390: /* 8a6390: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a6391: mov ebp, esp */
  ebp = esp;
/* 8a6393: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a6395: push 0x9d6230 */
  { uint32_t v = 0x9d6230u; esp -= 4; W32(esp, v); }
/* 8a639a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a63a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a63a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a63a8: sub esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a63ab: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 8a63b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a63b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a63b2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a63b3: mov esi, ecx */
  esi = ecx;
/* 8a63b5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8a63b7: xor edi, edi */
  edi = 0;
/* 8a63b9: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a63bb: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8a63be: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8a63c1: jne 0x8a63d0 */
  if (!zf) goto L_8a63d0;
L_8a63c3: /* 8a63c3: mov ecx, dword ptr [0xcfabc0] */
  ecx = R32((uint32_t)(0xcfabc0u));
/* 8a63c9: cmp dword ptr [ecx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a63cb: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 8a63ce: je 0x8a63d7 */
  if (zf) goto L_8a63d7;
L_8a63d0: /* 8a63d0: mov dword ptr [ebp - 0x24], 1 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x1u);
L_8a63d7: /* 8a63d7: mov edx, dword ptr [esi + 0x134] */
  edx = R32((uint32_t)(esi + 0x134u));
/* 8a63dd: lea ecx, [esi + 0x134] */
  ecx = (uint32_t)(esi + 0x134u);
/* 8a63e3: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8a63e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a63e5: mov eax, dword ptr [esi + 0x17c] */
  eax = R32((uint32_t)(esi + 0x17cu));
/* 8a63eb: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 8a63f1: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8a63f3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a63f3: mov edx, dword ptr [esi + 0x164] */
  edx = R32((uint32_t)(esi + 0x164u));
/* 8a63f9: lea ecx, [esi + 0x164] */
  ecx = (uint32_t)(esi + 0x164u);
/* 8a63ff: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8a6401u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a6401: mov eax, dword ptr [esi + 0x14c] */
  eax = R32((uint32_t)(esi + 0x14cu));
/* 8a6407: lea ecx, [esi + 0x14c] */
  ecx = (uint32_t)(esi + 0x14cu);
/* 8a640d: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8a640fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a640f: mov edx, dword ptr [esi + 0x194] */
  edx = R32((uint32_t)(esi + 0x194u));
/* 8a6415: lea ecx, [esi + 0x194] */
  ecx = (uint32_t)(esi + 0x194u);
/* 8a641b: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8a641du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a641d: mov eax, dword ptr [esi + 0x1ac] */
  eax = R32((uint32_t)(esi + 0x1acu));
/* 8a6423: lea ecx, [esi + 0x1ac] */
  ecx = (uint32_t)(esi + 0x1acu);
/* 8a6429: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8a642bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a642b: mov edx, dword ptr [esi + 0x1c4] */
  edx = R32((uint32_t)(esi + 0x1c4u));
/* 8a6431: lea ecx, [esi + 0x1c4] */
  ecx = (uint32_t)(esi + 0x1c4u);
/* 8a6437: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8a6439u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a6439: lea ecx, [esi + 0x140] */
  ecx = (uint32_t)(esi + 0x140u);
/* 8a643f: xor eax, eax */
  eax = 0;
L_8a6441: /* 8a6441: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a6444: jge 0x8a6449 */
  if ((sf == of)) goto L_8a6449;
L_8a6446: /* 8a6446: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a6447: jmp 0x8a6441 */
  goto L_8a6441;
L_8a6449: /* 8a6449: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a644a: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a644c: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a6452u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a6452: lea ecx, [esi + 0x170] */
  ecx = (uint32_t)(esi + 0x170u);
/* 8a6458: xor eax, eax */
  eax = 0;
/* 8a645a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8a6460: /* 8a6460: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a6463: jge 0x8a6468 */
  if ((sf == of)) goto L_8a6468;
L_8a6465: /* 8a6465: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a6466: jmp 0x8a6460 */
  goto L_8a6460;
L_8a6468: /* 8a6468: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a6469: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a646b: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a6471u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a6471: lea ecx, [esi + 0x188] */
  ecx = (uint32_t)(esi + 0x188u);
/* 8a6477: xor eax, eax */
  eax = 0;
/* 8a6479: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8a6480: /* 8a6480: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a6483: jge 0x8a6488 */
  if ((sf == of)) goto L_8a6488;
L_8a6485: /* 8a6485: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a6486: jmp 0x8a6480 */
  goto L_8a6480;
L_8a6488: /* 8a6488: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a6489: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a648b: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a6491u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a6491: lea ecx, [esi + 0x1a0] */
  ecx = (uint32_t)(esi + 0x1a0u);
/* 8a6497: xor eax, eax */
  eax = 0;
/* 8a6499: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8a64a0: /* 8a64a0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a64a3: jge 0x8a64a8 */
  if ((sf == of)) goto L_8a64a8;
L_8a64a5: /* 8a64a5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a64a6: jmp 0x8a64a0 */
  goto L_8a64a0;
L_8a64a8: /* 8a64a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a64a9: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a64ab: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a64b1u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a64b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a64b2: lea ecx, [esi + 0x1b8] */
  ecx = (uint32_t)(esi + 0x1b8u);
/* 8a64b8: call dword ptr [0xcfa3a0] */
  esp -= 4; W32(esp, 0x8a64beu); SPILL(); f_4e264e(); if (g_unwind) return; /* Core!?Empty@?$TArray@G@@QAEXH@Z */ RELOAD();
/* 8a64be: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a64bf: lea ecx, [esi + 0x1d0] */
  ecx = (uint32_t)(esi + 0x1d0u);
/* 8a64c5: call dword ptr [0xcfa3a0] */
  esp -= 4; W32(esp, 0x8a64cbu); SPILL(); f_4e264e(); if (g_unwind) return; /* Core!?Empty@?$TArray@G@@QAEXH@Z */ RELOAD();
/* 8a64cb: mov eax, dword ptr [esi + 0x208] */
  eax = R32((uint32_t)(esi + 0x208u));
/* 8a64d1: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a64d4: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8a64d7: jle 0x8a64e0 */
  if ((zf || sf != of)) goto L_8a64e0;
L_8a64d9: /* 8a64d9: mov dword ptr [ebp - 0x20], 7 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x7u);
L_8a64e0: /* 8a64e0: xor eax, eax */
  eax = 0;
/* 8a64e2: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_8a64e5: /* 8a64e5: cmp eax, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a64e8: jge 0x8a66c1 */
  if ((sf == of)) goto L_8a66c1;
L_8a64ee: /* 8a64ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a64f0: jne 0x8a65a9 */
  if (!zf) goto L_8a65a9;
L_8a64f6: /* 8a64f6: mov ecx, dword ptr [esi + 0x204] */
  ecx = R32((uint32_t)(esi + 0x204u));
/* 8a64fc: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 8a64ff: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8a6502: xor ebx, ebx */
  ebx = 0;
L_8a6504: /* 8a6504: mov ecx, dword ptr [esi + 0x204] */
  ecx = R32((uint32_t)(esi + 0x204u));
/* 8a650a: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8a650d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a650f: cmp ebx, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a6512: jge 0x8a66b5 */
  if ((sf == of)) goto L_8a66b5;
L_8a6518: /* 8a6518: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a6519: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8a651fu); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8a651f: mov dx, word ptr [eax] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 8a6522: mov eax, dword ptr [esi + 0x210] */
  eax = R32((uint32_t)(esi + 0x210u));
/* 8a6528: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8a652b: mov ax, word ptr [eax + ecx*4 + 2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + ecx*4 + 0x2u))) & 0xffffu);
/* 8a6530: mov ecx, dword ptr [esi + 0x1e0] */
  ecx = R32((uint32_t)(esi + 0x1e0u));
/* 8a6536: mov word ptr [ebp - 0x3e], ax */
  W16((uint32_t)(ebp + 0xffffffc2u), (eax & 0xffffu));
/* 8a653a: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 8a653d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a653f: mov word ptr [ebp - 0x40], dx */
  W16((uint32_t)(ebp + 0xffffffc0u), (edx & 0xffffu));
/* 8a6543: mov dword ptr [ebp - 0x44], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x3f800000u);
/* 8a654a: jl 0x8a6578 */
  if ((sf != of)) goto L_8a6578;
L_8a654c: /* 8a654c: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8a6552: push 0x3ff00000 */
  { uint32_t v = 0x3ff00000u; esp -= 4; W32(esp, v); }
/* 8a6557: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a6559: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a655a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8a655c: push 0xae9060 */
  { uint32_t v = 0xae9060u; esp -= 4; W32(esp, v); }
/* 8a6561: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a6562: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8a6568u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8a6568: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a656b: mov word ptr [ebp - 0x3e], 0 */
  W16((uint32_t)(ebp + 0xffffffc2u), 0x0u);
/* 8a6571: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
L_8a6578: /* 8a6578: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a657a: lea edi, [esi + 0x1a0] */
  edi = (uint32_t)(esi + 0x1a0u);
/* 8a6580: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a6582: mov ecx, edi */
  ecx = edi;
/* 8a6584: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a658au); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a658a: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8a658c: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8a658f: mov dword ptr [ecx + eax*8], edx */
  W32((uint32_t)(ecx + eax*8), edx);
/* 8a6592: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8a6595: mov dword ptr [ecx + eax*8 + 4], edx */
  W32((uint32_t)(ecx + eax*8 + 0x4u), edx);
/* 8a6599: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8a659c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a659f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8a65a0: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8a65a3: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8a65a4: jmp 0x8a6504 */
  goto L_8a6504;
L_8a65a9: /* 8a65a9: jle 0x8a66b5 */
  if ((zf || sf != of)) goto L_8a66b5;
L_8a65af: /* 8a65af: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a65b2: mov ecx, dword ptr [esi + 0x204] */
  ecx = R32((uint32_t)(esi + 0x204u));
/* 8a65b8: mov eax, edi */
  eax = edi;
/* 8a65ba: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8a65bd: mov ebx, dword ptr [ecx + eax + 0xc] */
  ebx = R32((uint32_t)(ecx + eax + 0xcu));
/* 8a65c1: xor eax, eax */
  eax = 0;
/* 8a65c3: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8a65c6: jmp 0x8a65d0 */
  goto L_8a65d0;
L_8a65d0: /* 8a65d0: mov ecx, dword ptr [esi + 0x204] */
  ecx = R32((uint32_t)(esi + 0x204u));
/* 8a65d6: mov edx, edi */
  edx = edi;
/* 8a65d8: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8a65db: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a65dd: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a65e0: jge 0x8a66b5 */
  if ((sf == of)) goto L_8a66b5;
L_8a65e6: /* 8a65e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a65e7: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8a65edu); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8a65ed: movzx edx, word ptr [eax] */
  edx = (uint32_t)(R16((uint32_t)(eax)));
/* 8a65f0: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 8a65f3: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 8a65fa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8a6600: /* 8a6600: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8a6603: lea eax, [edi + 1] */
  eax = (uint32_t)(edi + 0x1u);
/* 8a6606: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a6608: jge 0x8a66a9 */
  if ((sf == of)) goto L_8a66a9;
L_8a660e: /* 8a660e: mov edx, dword ptr [esi + 0x210] */
  edx = R32((uint32_t)(esi + 0x210u));
/* 8a6614: mov cx, word ptr [ebp - 0x28] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffffd8u))) & 0xffffu);
/* 8a6618: lea eax, [edx + ebx*4] */
  eax = (uint32_t)(edx + ebx*4);
/* 8a661b: mov edx, dword ptr [esi + 0x1e0] */
  edx = R32((uint32_t)(esi + 0x1e0u));
/* 8a6621: mov word ptr [ebp - 0x38], cx */
  W16((uint32_t)(ebp + 0xffffffc8u), (ecx & 0xffffu));
/* 8a6625: mov cx, word ptr [eax + 2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x2u))) & 0xffffu);
/* 8a6629: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 8a662c: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8a662f: movzx eax, cx */
  eax = (uint32_t)((ecx & 0xffffu));
/* 8a6632: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8a6635: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a6637: mov word ptr [ebp - 0x36], cx */
  W16((uint32_t)(ebp + 0xffffffcau), (ecx & 0xffffu));
/* 8a663b: fmul dword ptr [0xa11f0c] */
  ST0 = ST0 * (F32((uint32_t)(0xa11f0cu)));
/* 8a6641: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8a6644: jl 0x8a6678 */
  if ((sf != of)) goto L_8a6678;
L_8a6646: /* 8a6646: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8a6649: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8a664c: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8a6652: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a6655: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8a6658: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a6659: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8a665b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a665c: push 0xae90d8 */
  { uint32_t v = 0xae90d8u; esp -= 4; W32(esp, v); }
/* 8a6661: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a6662: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8a6668u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8a6668: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a666b: mov word ptr [ebp - 0x36], 0 */
  W16((uint32_t)(ebp + 0xffffffcau), 0x0u);
/* 8a6671: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
L_8a6678: /* 8a6678: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a667a: lea edi, [esi + 0x1a0] */
  edi = (uint32_t)(esi + 0x1a0u);
/* 8a6680: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a6682: mov ecx, edi */
  ecx = edi;
/* 8a6684: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a668au); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a668a: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8a668c: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8a668f: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a6692: mov dword ptr [ecx + eax*8], edx */
  W32((uint32_t)(ecx + eax*8), edx);
/* 8a6695: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8a6698: mov dword ptr [ecx + eax*8 + 4], edx */
  W32((uint32_t)(ecx + eax*8 + 0x4u), edx);
/* 8a669c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8a669f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8a66a0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a66a1: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8a66a4: jmp 0x8a6600 */
  goto L_8a6600;
L_8a66a9: /* 8a66a9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8a66ac: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a66ad: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8a66b0: jmp 0x8a65d0 */
  goto L_8a65d0;
L_8a66b5: /* 8a66b5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a66b8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a66b9: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8a66bc: jmp 0x8a64e5 */
  goto L_8a64e5;
L_8a66c1: /* 8a66c1: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 8a66c4: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a66cau); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a66ca: mov eax, dword ptr [esi + 0xc4] */
  eax = R32((uint32_t)(esi + 0xc4u));
/* 8a66d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a66d1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a66d3: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 8a66d6: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8a66da: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8a66e0u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8a66e0: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8a66e3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a66e9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a66e9: mov eax, dword ptr [esi + 0x1fc] */
  eax = R32((uint32_t)(esi + 0x1fcu));
/* 8a66ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a66f0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a66f2: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8a66f5: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8a66f9: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8a66ffu); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8a66ff: xor edi, edi */
  edi = 0;
L_8a6701: /* 8a6701: cmp edi, dword ptr [esi + 0xac] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xacu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a6707: jge 0x8a675a */
  if ((sf == of)) goto L_8a675a;
L_8a6709: /* 8a6709: mov ecx, dword ptr [esi + 0xa8] */
  ecx = R32((uint32_t)(esi + 0xa8u));
/* 8a670f: mov al, byte ptr [ecx + edi*8 + 6] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + edi*8 + 0x6u))) & 0xffu);
/* 8a6713: mov byte ptr [ebp - 0x42], al */
  W8((uint32_t)(ebp + 0xffffffbeu), (eax & 0xffu));
/* 8a6716: mov dword ptr [ebp - 0x40], 1 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x1u);
/* 8a671d: xor eax, eax */
  eax = 0;
/* 8a671f: nop  */
L_8a6720: /* 8a6720: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a6723: jge 0x8a6734 */
  if ((sf == of)) goto L_8a6734;
L_8a6725: /* 8a6725: lea edx, [eax + edi*4] */
  edx = (uint32_t)(eax + edi*4);
/* 8a6728: mov dx, word ptr [ecx + edx*2] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + edx*2))) & 0xffffu);
/* 8a672c: mov word ptr [ebp + eax*2 - 0x48], dx */
  W16((uint32_t)(ebp + eax*2 + 0xffffffb8u), (edx & 0xffffu));
/* 8a6731: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a6732: jmp 0x8a6720 */
  goto L_8a6720;
L_8a6734: /* 8a6734: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a6736: lea ebx, [esi + 0x188] */
  ebx = (uint32_t)(esi + 0x188u);
/* 8a673c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a673e: mov ecx, ebx */
  ecx = ebx;
/* 8a6740: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a6746u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a6746: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8a6749: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8a674b: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 8a674e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a674f: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8a6752: call 0x6c11e5 */
  esp -= 4; W32(esp, 0x8a6757u); SPILL(); f_6c11e5(); if (g_unwind) return; RELOAD();
/* 8a6757: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8a6758: jmp 0x8a6701 */
  goto L_8a6701;
L_8a675a: /* 8a675a: xor edi, edi */
  edi = 0;
/* 8a675c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8a6760: /* 8a6760: cmp edi, dword ptr [esi + 0xc4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xc4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a6766: jge 0x8a67b7 */
  if ((sf == of)) goto L_8a67b7;
L_8a6768: /* 8a6768: mov edx, dword ptr [esi + 0xc0] */
  edx = R32((uint32_t)(esi + 0xc0u));
/* 8a676e: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 8a6771: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 8a6774: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8a6777: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8a677a: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 8a677d: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a677f: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 8a6782: lea ebx, [esi + 0x170] */
  ebx = (uint32_t)(esi + 0x170u);
/* 8a6788: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a678a: mov ecx, ebx */
  ecx = ebx;
/* 8a678c: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 8a678f: mov word ptr [ebp - 0x48], ax */
  W16((uint32_t)(ebp + 0xffffffb8u), (eax & 0xffffu));
/* 8a6793: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a6799u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a6799: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8a679b: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8a679e: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 8a67a1: mov cx, word ptr [ebp - 0x48] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffffb8u))) & 0xffffu);
/* 8a67a5: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8a67a8: mov word ptr [eax], cx */
  W16((uint32_t)(eax), (ecx & 0xffffu));
/* 8a67ab: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8a67ae: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8a67b1: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8a67b4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8a67b5: jmp 0x8a6760 */
  goto L_8a6760;
L_8a67b7: /* 8a67b7: xor edi, edi */
  edi = 0;
/* 8a67b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8a67c0: /* 8a67c0: cmp edi, dword ptr [esi + 0x1fc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1fcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a67c6: jge 0x8a6813 */
  if ((sf == of)) goto L_8a6813;
L_8a67c8: /* 8a67c8: mov eax, dword ptr [esi + 0x1f8] */
  eax = R32((uint32_t)(esi + 0x1f8u));
/* 8a67ce: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 8a67d1: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8a67d4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8a67d6: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8a67d9: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8a67dc: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a67de: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 8a67e1: lea ebx, [esi + 0x140] */
  ebx = (uint32_t)(esi + 0x140u);
/* 8a67e7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a67e9: mov ecx, ebx */
  ecx = ebx;
/* 8a67eb: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 8a67ee: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 8a67f1: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a67f7u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a67f7: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8a67fa: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8a67fc: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8a67ff: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8a6802: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8a6805: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8a6807: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8a680a: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8a680d: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8a6810: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8a6811: jmp 0x8a67c0 */
  goto L_8a67c0;
L_8a6813: /* 8a6813: xor edi, edi */
  edi = 0;
L_8a6815: /* 8a6815: cmp edi, dword ptr [esi + 0xb8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xb8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a681b: jge 0x8a683a */
  if ((sf == of)) goto L_8a683a;
L_8a681d: /* 8a681d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a681e: lea ecx, [esi + 0xb4] */
  ecx = (uint32_t)(esi + 0xb4u);
/* 8a6824: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8a682au); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8a682a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a682b: lea ecx, [esi + 0x1b8] */
  ecx = (uint32_t)(esi + 0x1b8u);
/* 8a6831: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8a6837u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8a6837: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8a6838: jmp 0x8a6815 */
  goto L_8a6815;
L_8a683a: /* 8a683a: xor edi, edi */
  edi = 0;
/* 8a683c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8a6840: /* 8a6840: cmp edi, dword ptr [esi + 0xa0] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xa0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a6846: jge 0x8a6865 */
  if ((sf == of)) goto L_8a6865;
L_8a6848: /* 8a6848: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a6849: lea ecx, [esi + 0x9c] */
  ecx = (uint32_t)(esi + 0x9cu);
/* 8a684f: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8a6855u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8a6855: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a6856: lea ecx, [esi + 0x1d0] */
  ecx = (uint32_t)(esi + 0x1d0u);
/* 8a685c: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8a6862u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8a6862: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8a6863: jmp 0x8a6840 */
  goto L_8a6840;
L_8a6865: /* 8a6865: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8a6868: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a686a: je 0x8a68b3 */
  if (zf) goto L_8a68b3;
L_8a686c: /* 8a686c: mov eax, dword ptr [esi + 0x1fc] */
  eax = R32((uint32_t)(esi + 0x1fcu));
/* 8a6872: mov ecx, dword ptr [esi + 0xc4] */
  ecx = R32((uint32_t)(esi + 0xc4u));
/* 8a6878: mov edx, dword ptr [esi + 0xac] */
  edx = R32((uint32_t)(esi + 0xacu));
/* 8a687e: mov edi, dword ptr [esi + 0x1bc] */
  edi = R32((uint32_t)(esi + 0x1bcu));
/* 8a6884: mov ebx, dword ptr [esi + 0x18c] */
  ebx = R32((uint32_t)(esi + 0x18cu));
/* 8a688a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a688b: mov eax, dword ptr [esi + 0x144] */
  eax = R32((uint32_t)(esi + 0x144u));
/* 8a6891: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a6892: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a6893: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a6894: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a6895: mov eax, dword ptr [esi + 0x174] */
  eax = R32((uint32_t)(esi + 0x174u));
/* 8a689b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a689c: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 8a68a1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8a68a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a68a4: push 0xae9150 */
  { uint32_t v = 0xae9150u; esp -= 4; W32(esp, v); }
/* 8a68a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a68aa: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8a68b0u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8a68b0: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a68b3: /* 8a68b3: lea ecx, [esi + 0xa8] */
  ecx = (uint32_t)(esi + 0xa8u);
/* 8a68b9: xor eax, eax */
  eax = 0;
/* 8a68bb: jmp 0x8a68c0 */
  goto L_8a68c0;
L_8a68c0: /* 8a68c0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a68c3: jge 0x8a68c8 */
  if ((sf == of)) goto L_8a68c8;
L_8a68c5: /* 8a68c5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a68c6: jmp 0x8a68c0 */
  goto L_8a68c0;
L_8a68c8: /* 8a68c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a68ca: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a68cc: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a68d2u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a68d2: lea ecx, [esi + 0xc0] */
  ecx = (uint32_t)(esi + 0xc0u);
/* 8a68d8: xor eax, eax */
  eax = 0;
/* 8a68da: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8a68e0: /* 8a68e0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a68e3: jge 0x8a68e8 */
  if ((sf == of)) goto L_8a68e8;
L_8a68e5: /* 8a68e5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a68e6: jmp 0x8a68e0 */
  goto L_8a68e0;
L_8a68e8: /* 8a68e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a68ea: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a68ec: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a68f2u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a68f2: lea ecx, [esi + 0x1f8] */
  ecx = (uint32_t)(esi + 0x1f8u);
/* 8a68f8: xor eax, eax */
  eax = 0;
/* 8a68fa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8a6900: /* 8a6900: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a6903: jge 0x8a6908 */
  if ((sf == of)) goto L_8a6908;
L_8a6905: /* 8a6905: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a6906: jmp 0x8a6900 */
  goto L_8a6900;
L_8a6908: /* 8a6908: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a690a: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a690c: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a6912u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a6912: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a6914: lea ecx, [esi + 0xb4] */
  ecx = (uint32_t)(esi + 0xb4u);
/* 8a691a: call dword ptr [0xcfa3a0] */
  esp -= 4; W32(esp, 0x8a6920u); SPILL(); f_4e264e(); if (g_unwind) return; /* Core!?Empty@?$TArray@G@@QAEXH@Z */ RELOAD();
/* 8a6920: lea ebx, [esi + 0x204] */
  ebx = (uint32_t)(esi + 0x204u);
/* 8a6926: xor edi, edi */
  edi = 0;
L_8a6928: /* 8a6928: cmp edi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a692b: jge 0x8a693f */
  if ((sf == of)) goto L_8a693f;
L_8a692d: /* 8a692d: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8a692f: mov ecx, edi */
  ecx = edi;
/* 8a6931: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8a6934: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a6936: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x8a693cu); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 8a693c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8a693d: jmp 0x8a6928 */
  goto L_8a6928;
L_8a693f: /* 8a693f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a6941: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8a6943: mov ecx, ebx */
  ecx = ebx;
/* 8a6945: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a694bu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a694b: lea ecx, [esi + 0x210] */
  ecx = (uint32_t)(esi + 0x210u);
/* 8a6951: xor eax, eax */
  eax = 0;
L_8a6953: /* 8a6953: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a6956: jge 0x8a695b */
  if ((sf == of)) goto L_8a695b;
L_8a6958: /* 8a6958: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a6959: jmp 0x8a6953 */
  goto L_8a6953;
L_8a695b: /* 8a695b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a695d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a695f: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a6965u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a6965: lea ecx, [esi + 0x2e0] */
  ecx = (uint32_t)(esi + 0x2e0u);
/* 8a696b: xor eax, eax */
  eax = 0;
/* 8a696d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8a6970: /* 8a6970: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a6973: jge 0x8a6978 */
  if ((sf == of)) goto L_8a6978;
L_8a6975: /* 8a6975: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a6976: jmp 0x8a6970 */
  goto L_8a6970;
L_8a6978: /* 8a6978: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a697a: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8a697c: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a6982u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a6982: add esi, 0x210 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x210u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8a6988: xor eax, eax */
  eax = 0;
/* 8a698a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8a6990: /* 8a6990: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a6993: jge 0x8a6998 */
  if ((sf == of)) goto L_8a6998;
L_8a6995: /* 8a6995: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a6996: jmp 0x8a6990 */
  goto L_8a6990;
L_8a6998: /* 8a6998: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a699a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a699c: mov ecx, esi */
  ecx = esi;
/* 8a699e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a69a4u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a69a4: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8a69a7: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8a69ab: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8a69b0u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8a69b0: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 8a69b3: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8a69b7: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8a69bcu); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8a69bc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a69bf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a69c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a69c1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a69c8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a69c9: mov esp, ebp */
  esp = ebp;
/* 8a69cb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a69cc: ret  */
  esp += 4; SPILL(); return;
}

void f_8a65c8(void) {
  LOAD_REGS();
  goto L_8a65c8;
L_8a64e5: /* 8a64e5: cmp eax, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a64e8: jge 0x8a66c1 */
  if ((sf == of)) goto L_8a66c1;
L_8a64ee: /* 8a64ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a64f0: jne 0x8a65a9 */
  if (!zf) goto L_8a65a9;
L_8a64f6: /* 8a64f6: mov ecx, dword ptr [esi + 0x204] */
  ecx = R32((uint32_t)(esi + 0x204u));
/* 8a64fc: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 8a64ff: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8a6502: xor ebx, ebx */
  ebx = 0;
L_8a6504: /* 8a6504: mov ecx, dword ptr [esi + 0x204] */
  ecx = R32((uint32_t)(esi + 0x204u));
/* 8a650a: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8a650d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a650f: cmp ebx, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a6512: jge 0x8a66b5 */
  if ((sf == of)) goto L_8a66b5;
L_8a6518: /* 8a6518: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a6519: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8a651fu); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8a651f: mov dx, word ptr [eax] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 8a6522: mov eax, dword ptr [esi + 0x210] */
  eax = R32((uint32_t)(esi + 0x210u));
/* 8a6528: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8a652b: mov ax, word ptr [eax + ecx*4 + 2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + ecx*4 + 0x2u))) & 0xffffu);
/* 8a6530: mov ecx, dword ptr [esi + 0x1e0] */
  ecx = R32((uint32_t)(esi + 0x1e0u));
/* 8a6536: mov word ptr [ebp - 0x3e], ax */
  W16((uint32_t)(ebp + 0xffffffc2u), (eax & 0xffffu));
/* 8a653a: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 8a653d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a653f: mov word ptr [ebp - 0x40], dx */
  W16((uint32_t)(ebp + 0xffffffc0u), (edx & 0xffffu));
/* 8a6543: mov dword ptr [ebp - 0x44], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x3f800000u);
/* 8a654a: jl 0x8a6578 */
  if ((sf != of)) goto L_8a6578;
L_8a654c: /* 8a654c: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8a6552: push 0x3ff00000 */
  { uint32_t v = 0x3ff00000u; esp -= 4; W32(esp, v); }
/* 8a6557: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a6559: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a655a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8a655c: push 0xae9060 */
  { uint32_t v = 0xae9060u; esp -= 4; W32(esp, v); }
/* 8a6561: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a6562: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8a6568u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8a6568: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a656b: mov word ptr [ebp - 0x3e], 0 */
  W16((uint32_t)(ebp + 0xffffffc2u), 0x0u);
/* 8a6571: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
L_8a6578: /* 8a6578: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a657a: lea edi, [esi + 0x1a0] */
  edi = (uint32_t)(esi + 0x1a0u);
/* 8a6580: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a6582: mov ecx, edi */
  ecx = edi;
/* 8a6584: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a658au); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a658a: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8a658c: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8a658f: mov dword ptr [ecx + eax*8], edx */
  W32((uint32_t)(ecx + eax*8), edx);
/* 8a6592: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8a6595: mov dword ptr [ecx + eax*8 + 4], edx */
  W32((uint32_t)(ecx + eax*8 + 0x4u), edx);
/* 8a6599: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8a659c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a659f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8a65a0: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8a65a3: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8a65a4: jmp 0x8a6504 */
  goto L_8a6504;
L_8a65a9: /* 8a65a9: jle 0x8a66b5 */
  if ((zf || sf != of)) goto L_8a66b5;
L_8a65af: /* 8a65af: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a65b2: mov ecx, dword ptr [esi + 0x204] */
  ecx = R32((uint32_t)(esi + 0x204u));
/* 8a65b8: mov eax, edi */
  eax = edi;
/* 8a65ba: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8a65bd: mov ebx, dword ptr [ecx + eax + 0xc] */
  ebx = R32((uint32_t)(ecx + eax + 0xcu));
/* 8a65c1: xor eax, eax */
  eax = 0;
/* 8a65c3: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8a65c6: jmp 0x8a65d0 */
  goto L_8a65d0;
L_8a65c8: /* 8a65c8: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 8a65cf: nop  */
L_8a65d0: /* 8a65d0: mov ecx, dword ptr [esi + 0x204] */
  ecx = R32((uint32_t)(esi + 0x204u));
/* 8a65d6: mov edx, edi */
  edx = edi;
/* 8a65d8: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8a65db: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a65dd: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a65e0: jge 0x8a66b5 */
  if ((sf == of)) goto L_8a66b5;
L_8a65e6: /* 8a65e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a65e7: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8a65edu); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8a65ed: movzx edx, word ptr [eax] */
  edx = (uint32_t)(R16((uint32_t)(eax)));
/* 8a65f0: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 8a65f3: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 8a65fa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8a6600: /* 8a6600: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8a6603: lea eax, [edi + 1] */
  eax = (uint32_t)(edi + 0x1u);
/* 8a6606: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a6608: jge 0x8a66a9 */
  if ((sf == of)) goto L_8a66a9;
L_8a660e: /* 8a660e: mov edx, dword ptr [esi + 0x210] */
  edx = R32((uint32_t)(esi + 0x210u));
/* 8a6614: mov cx, word ptr [ebp - 0x28] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffffd8u))) & 0xffffu);
/* 8a6618: lea eax, [edx + ebx*4] */
  eax = (uint32_t)(edx + ebx*4);
/* 8a661b: mov edx, dword ptr [esi + 0x1e0] */
  edx = R32((uint32_t)(esi + 0x1e0u));
/* 8a6621: mov word ptr [ebp - 0x38], cx */
  W16((uint32_t)(ebp + 0xffffffc8u), (ecx & 0xffffu));
/* 8a6625: mov cx, word ptr [eax + 2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x2u))) & 0xffffu);
/* 8a6629: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 8a662c: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8a662f: movzx eax, cx */
  eax = (uint32_t)((ecx & 0xffffu));
/* 8a6632: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8a6635: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a6637: mov word ptr [ebp - 0x36], cx */
  W16((uint32_t)(ebp + 0xffffffcau), (ecx & 0xffffu));
/* 8a663b: fmul dword ptr [0xa11f0c] */
  ST0 = ST0 * (F32((uint32_t)(0xa11f0cu)));
/* 8a6641: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8a6644: jl 0x8a6678 */
  if ((sf != of)) goto L_8a6678;
L_8a6646: /* 8a6646: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8a6649: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8a664c: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8a6652: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a6655: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8a6658: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a6659: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8a665b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a665c: push 0xae90d8 */
  { uint32_t v = 0xae90d8u; esp -= 4; W32(esp, v); }
/* 8a6661: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a6662: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8a6668u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8a6668: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a666b: mov word ptr [ebp - 0x36], 0 */
  W16((uint32_t)(ebp + 0xffffffcau), 0x0u);
/* 8a6671: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
L_8a6678: /* 8a6678: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a667a: lea edi, [esi + 0x1a0] */
  edi = (uint32_t)(esi + 0x1a0u);
/* 8a6680: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a6682: mov ecx, edi */
  ecx = edi;
/* 8a6684: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a668au); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a668a: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8a668c: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8a668f: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a6692: mov dword ptr [ecx + eax*8], edx */
  W32((uint32_t)(ecx + eax*8), edx);
/* 8a6695: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8a6698: mov dword ptr [ecx + eax*8 + 4], edx */
  W32((uint32_t)(ecx + eax*8 + 0x4u), edx);
/* 8a669c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8a669f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8a66a0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a66a1: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8a66a4: jmp 0x8a6600 */
  goto L_8a6600;
L_8a66a9: /* 8a66a9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8a66ac: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a66ad: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8a66b0: jmp 0x8a65d0 */
  goto L_8a65d0;
L_8a66b5: /* 8a66b5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a66b8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a66b9: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8a66bc: jmp 0x8a64e5 */
  goto L_8a64e5;
L_8a66c1: /* 8a66c1: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 8a66c4: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a66cau); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a66ca: mov eax, dword ptr [esi + 0xc4] */
  eax = R32((uint32_t)(esi + 0xc4u));
/* 8a66d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a66d1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a66d3: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 8a66d6: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8a66da: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8a66e0u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8a66e0: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8a66e3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a66e9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a66e9: mov eax, dword ptr [esi + 0x1fc] */
  eax = R32((uint32_t)(esi + 0x1fcu));
/* 8a66ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a66f0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a66f2: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8a66f5: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8a66f9: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8a66ffu); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8a66ff: xor edi, edi */
  edi = 0;
L_8a6701: /* 8a6701: cmp edi, dword ptr [esi + 0xac] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xacu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a6707: jge 0x8a675a */
  if ((sf == of)) goto L_8a675a;
L_8a6709: /* 8a6709: mov ecx, dword ptr [esi + 0xa8] */
  ecx = R32((uint32_t)(esi + 0xa8u));
/* 8a670f: mov al, byte ptr [ecx + edi*8 + 6] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + edi*8 + 0x6u))) & 0xffu);
/* 8a6713: mov byte ptr [ebp - 0x42], al */
  W8((uint32_t)(ebp + 0xffffffbeu), (eax & 0xffu));
/* 8a6716: mov dword ptr [ebp - 0x40], 1 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x1u);
/* 8a671d: xor eax, eax */
  eax = 0;
/* 8a671f: nop  */
L_8a6720: /* 8a6720: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a6723: jge 0x8a6734 */
  if ((sf == of)) goto L_8a6734;
L_8a6725: /* 8a6725: lea edx, [eax + edi*4] */
  edx = (uint32_t)(eax + edi*4);
/* 8a6728: mov dx, word ptr [ecx + edx*2] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + edx*2))) & 0xffffu);
/* 8a672c: mov word ptr [ebp + eax*2 - 0x48], dx */
  W16((uint32_t)(ebp + eax*2 + 0xffffffb8u), (edx & 0xffffu));
/* 8a6731: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a6732: jmp 0x8a6720 */
  goto L_8a6720;
L_8a6734: /* 8a6734: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a6736: lea ebx, [esi + 0x188] */
  ebx = (uint32_t)(esi + 0x188u);
/* 8a673c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a673e: mov ecx, ebx */
  ecx = ebx;
/* 8a6740: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a6746u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a6746: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8a6749: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8a674b: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 8a674e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a674f: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8a6752: call 0x6c11e5 */
  esp -= 4; W32(esp, 0x8a6757u); SPILL(); f_6c11e5(); if (g_unwind) return; RELOAD();
/* 8a6757: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8a6758: jmp 0x8a6701 */
  goto L_8a6701;
L_8a675a: /* 8a675a: xor edi, edi */
  edi = 0;
/* 8a675c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8a6760: /* 8a6760: cmp edi, dword ptr [esi + 0xc4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xc4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a6766: jge 0x8a67b7 */
  if ((sf == of)) goto L_8a67b7;
L_8a6768: /* 8a6768: mov edx, dword ptr [esi + 0xc0] */
  edx = R32((uint32_t)(esi + 0xc0u));
/* 8a676e: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 8a6771: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 8a6774: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8a6777: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8a677a: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 8a677d: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a677f: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 8a6782: lea ebx, [esi + 0x170] */
  ebx = (uint32_t)(esi + 0x170u);
/* 8a6788: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a678a: mov ecx, ebx */
  ecx = ebx;
/* 8a678c: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 8a678f: mov word ptr [ebp - 0x48], ax */
  W16((uint32_t)(ebp + 0xffffffb8u), (eax & 0xffffu));
/* 8a6793: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a6799u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a6799: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8a679b: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8a679e: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 8a67a1: mov cx, word ptr [ebp - 0x48] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffffb8u))) & 0xffffu);
/* 8a67a5: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8a67a8: mov word ptr [eax], cx */
  W16((uint32_t)(eax), (ecx & 0xffffu));
/* 8a67ab: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8a67ae: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8a67b1: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8a67b4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8a67b5: jmp 0x8a6760 */
  goto L_8a6760;
L_8a67b7: /* 8a67b7: xor edi, edi */
  edi = 0;
/* 8a67b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8a67c0: /* 8a67c0: cmp edi, dword ptr [esi + 0x1fc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1fcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a67c6: jge 0x8a6813 */
  if ((sf == of)) goto L_8a6813;
L_8a67c8: /* 8a67c8: mov eax, dword ptr [esi + 0x1f8] */
  eax = R32((uint32_t)(esi + 0x1f8u));
/* 8a67ce: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 8a67d1: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8a67d4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8a67d6: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8a67d9: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8a67dc: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a67de: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 8a67e1: lea ebx, [esi + 0x140] */
  ebx = (uint32_t)(esi + 0x140u);
/* 8a67e7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a67e9: mov ecx, ebx */
  ecx = ebx;
/* 8a67eb: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 8a67ee: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 8a67f1: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a67f7u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a67f7: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8a67fa: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8a67fc: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8a67ff: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8a6802: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8a6805: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8a6807: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8a680a: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8a680d: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8a6810: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8a6811: jmp 0x8a67c0 */
  goto L_8a67c0;
L_8a6813: /* 8a6813: xor edi, edi */
  edi = 0;
L_8a6815: /* 8a6815: cmp edi, dword ptr [esi + 0xb8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xb8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a681b: jge 0x8a683a */
  if ((sf == of)) goto L_8a683a;
L_8a681d: /* 8a681d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a681e: lea ecx, [esi + 0xb4] */
  ecx = (uint32_t)(esi + 0xb4u);
/* 8a6824: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8a682au); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8a682a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a682b: lea ecx, [esi + 0x1b8] */
  ecx = (uint32_t)(esi + 0x1b8u);
/* 8a6831: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8a6837u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8a6837: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8a6838: jmp 0x8a6815 */
  goto L_8a6815;
L_8a683a: /* 8a683a: xor edi, edi */
  edi = 0;
/* 8a683c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8a6840: /* 8a6840: cmp edi, dword ptr [esi + 0xa0] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xa0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a6846: jge 0x8a6865 */
  if ((sf == of)) goto L_8a6865;
L_8a6848: /* 8a6848: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a6849: lea ecx, [esi + 0x9c] */
  ecx = (uint32_t)(esi + 0x9cu);
/* 8a684f: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8a6855u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8a6855: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a6856: lea ecx, [esi + 0x1d0] */
  ecx = (uint32_t)(esi + 0x1d0u);
/* 8a685c: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8a6862u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8a6862: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8a6863: jmp 0x8a6840 */
  goto L_8a6840;
L_8a6865: /* 8a6865: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8a6868: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a686a: je 0x8a68b3 */
  if (zf) goto L_8a68b3;
L_8a686c: /* 8a686c: mov eax, dword ptr [esi + 0x1fc] */
  eax = R32((uint32_t)(esi + 0x1fcu));
/* 8a6872: mov ecx, dword ptr [esi + 0xc4] */
  ecx = R32((uint32_t)(esi + 0xc4u));
/* 8a6878: mov edx, dword ptr [esi + 0xac] */
  edx = R32((uint32_t)(esi + 0xacu));
/* 8a687e: mov edi, dword ptr [esi + 0x1bc] */
  edi = R32((uint32_t)(esi + 0x1bcu));
/* 8a6884: mov ebx, dword ptr [esi + 0x18c] */
  ebx = R32((uint32_t)(esi + 0x18cu));
/* 8a688a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a688b: mov eax, dword ptr [esi + 0x144] */
  eax = R32((uint32_t)(esi + 0x144u));
/* 8a6891: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a6892: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a6893: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a6894: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a6895: mov eax, dword ptr [esi + 0x174] */
  eax = R32((uint32_t)(esi + 0x174u));
/* 8a689b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a689c: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 8a68a1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8a68a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a68a4: push 0xae9150 */
  { uint32_t v = 0xae9150u; esp -= 4; W32(esp, v); }
/* 8a68a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a68aa: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8a68b0u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8a68b0: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a68b3: /* 8a68b3: lea ecx, [esi + 0xa8] */
  ecx = (uint32_t)(esi + 0xa8u);
/* 8a68b9: xor eax, eax */
  eax = 0;
/* 8a68bb: jmp 0x8a68c0 */
  goto L_8a68c0;
L_8a68c0: /* 8a68c0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a68c3: jge 0x8a68c8 */
  if ((sf == of)) goto L_8a68c8;
L_8a68c5: /* 8a68c5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a68c6: jmp 0x8a68c0 */
  goto L_8a68c0;
L_8a68c8: /* 8a68c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a68ca: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a68cc: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a68d2u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a68d2: lea ecx, [esi + 0xc0] */
  ecx = (uint32_t)(esi + 0xc0u);
/* 8a68d8: xor eax, eax */
  eax = 0;
/* 8a68da: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8a68e0: /* 8a68e0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a68e3: jge 0x8a68e8 */
  if ((sf == of)) goto L_8a68e8;
L_8a68e5: /* 8a68e5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a68e6: jmp 0x8a68e0 */
  goto L_8a68e0;
L_8a68e8: /* 8a68e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a68ea: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a68ec: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a68f2u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a68f2: lea ecx, [esi + 0x1f8] */
  ecx = (uint32_t)(esi + 0x1f8u);
/* 8a68f8: xor eax, eax */
  eax = 0;
/* 8a68fa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8a6900: /* 8a6900: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a6903: jge 0x8a6908 */
  if ((sf == of)) goto L_8a6908;
L_8a6905: /* 8a6905: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a6906: jmp 0x8a6900 */
  goto L_8a6900;
L_8a6908: /* 8a6908: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a690a: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a690c: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a6912u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a6912: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a6914: lea ecx, [esi + 0xb4] */
  ecx = (uint32_t)(esi + 0xb4u);
/* 8a691a: call dword ptr [0xcfa3a0] */
  esp -= 4; W32(esp, 0x8a6920u); SPILL(); f_4e264e(); if (g_unwind) return; /* Core!?Empty@?$TArray@G@@QAEXH@Z */ RELOAD();
/* 8a6920: lea ebx, [esi + 0x204] */
  ebx = (uint32_t)(esi + 0x204u);
/* 8a6926: xor edi, edi */
  edi = 0;
L_8a6928: /* 8a6928: cmp edi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a692b: jge 0x8a693f */
  if ((sf == of)) goto L_8a693f;
L_8a692d: /* 8a692d: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8a692f: mov ecx, edi */
  ecx = edi;
/* 8a6931: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8a6934: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a6936: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x8a693cu); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 8a693c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8a693d: jmp 0x8a6928 */
  goto L_8a6928;
L_8a693f: /* 8a693f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a6941: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8a6943: mov ecx, ebx */
  ecx = ebx;
/* 8a6945: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a694bu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a694b: lea ecx, [esi + 0x210] */
  ecx = (uint32_t)(esi + 0x210u);
/* 8a6951: xor eax, eax */
  eax = 0;
L_8a6953: /* 8a6953: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a6956: jge 0x8a695b */
  if ((sf == of)) goto L_8a695b;
L_8a6958: /* 8a6958: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a6959: jmp 0x8a6953 */
  goto L_8a6953;
L_8a695b: /* 8a695b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a695d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a695f: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a6965u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a6965: lea ecx, [esi + 0x2e0] */
  ecx = (uint32_t)(esi + 0x2e0u);
/* 8a696b: xor eax, eax */
  eax = 0;
/* 8a696d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8a6970: /* 8a6970: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a6973: jge 0x8a6978 */
  if ((sf == of)) goto L_8a6978;
L_8a6975: /* 8a6975: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a6976: jmp 0x8a6970 */
  goto L_8a6970;
L_8a6978: /* 8a6978: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a697a: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8a697c: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a6982u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a6982: add esi, 0x210 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x210u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8a6988: xor eax, eax */
  eax = 0;
/* 8a698a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8a6990: /* 8a6990: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a6993: jge 0x8a6998 */
  if ((sf == of)) goto L_8a6998;
L_8a6995: /* 8a6995: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a6996: jmp 0x8a6990 */
  goto L_8a6990;
L_8a6998: /* 8a6998: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a699a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a699c: mov ecx, esi */
  ecx = esi;
/* 8a699e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a69a4u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a69a4: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8a69a7: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8a69ab: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8a69b0u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8a69b0: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 8a69b3: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8a69b7: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8a69bcu); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8a69bc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a69bf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a69c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a69c1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a69c8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a69c9: mov esp, ebp */
  esp = ebp;
/* 8a69cb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a69cc: ret  */
  esp += 4; SPILL(); return;
}

void f_8a68bd(void) {
  LOAD_REGS();
L_8a68bd: /* 8a68bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8a68c0: /* 8a68c0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a68c3: jge 0x8a68c8 */
  if ((sf == of)) goto L_8a68c8;
L_8a68c5: /* 8a68c5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a68c6: jmp 0x8a68c0 */
  goto L_8a68c0;
L_8a68c8: /* 8a68c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a68ca: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a68cc: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a68d2u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a68d2: lea ecx, [esi + 0xc0] */
  ecx = (uint32_t)(esi + 0xc0u);
/* 8a68d8: xor eax, eax */
  eax = 0;
/* 8a68da: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8a68e0: /* 8a68e0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a68e3: jge 0x8a68e8 */
  if ((sf == of)) goto L_8a68e8;
L_8a68e5: /* 8a68e5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a68e6: jmp 0x8a68e0 */
  goto L_8a68e0;
L_8a68e8: /* 8a68e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a68ea: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a68ec: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a68f2u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a68f2: lea ecx, [esi + 0x1f8] */
  ecx = (uint32_t)(esi + 0x1f8u);
/* 8a68f8: xor eax, eax */
  eax = 0;
/* 8a68fa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8a6900: /* 8a6900: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a6903: jge 0x8a6908 */
  if ((sf == of)) goto L_8a6908;
L_8a6905: /* 8a6905: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a6906: jmp 0x8a6900 */
  goto L_8a6900;
L_8a6908: /* 8a6908: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a690a: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a690c: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a6912u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a6912: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a6914: lea ecx, [esi + 0xb4] */
  ecx = (uint32_t)(esi + 0xb4u);
/* 8a691a: call dword ptr [0xcfa3a0] */
  esp -= 4; W32(esp, 0x8a6920u); SPILL(); f_4e264e(); if (g_unwind) return; /* Core!?Empty@?$TArray@G@@QAEXH@Z */ RELOAD();
/* 8a6920: lea ebx, [esi + 0x204] */
  ebx = (uint32_t)(esi + 0x204u);
/* 8a6926: xor edi, edi */
  edi = 0;
L_8a6928: /* 8a6928: cmp edi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a692b: jge 0x8a693f */
  if ((sf == of)) goto L_8a693f;
L_8a692d: /* 8a692d: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8a692f: mov ecx, edi */
  ecx = edi;
/* 8a6931: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8a6934: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a6936: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x8a693cu); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 8a693c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8a693d: jmp 0x8a6928 */
  goto L_8a6928;
L_8a693f: /* 8a693f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a6941: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8a6943: mov ecx, ebx */
  ecx = ebx;
/* 8a6945: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a694bu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a694b: lea ecx, [esi + 0x210] */
  ecx = (uint32_t)(esi + 0x210u);
/* 8a6951: xor eax, eax */
  eax = 0;
L_8a6953: /* 8a6953: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a6956: jge 0x8a695b */
  if ((sf == of)) goto L_8a695b;
L_8a6958: /* 8a6958: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a6959: jmp 0x8a6953 */
  goto L_8a6953;
L_8a695b: /* 8a695b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a695d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a695f: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a6965u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a6965: lea ecx, [esi + 0x2e0] */
  ecx = (uint32_t)(esi + 0x2e0u);
/* 8a696b: xor eax, eax */
  eax = 0;
/* 8a696d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8a6970: /* 8a6970: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a6973: jge 0x8a6978 */
  if ((sf == of)) goto L_8a6978;
L_8a6975: /* 8a6975: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a6976: jmp 0x8a6970 */
  goto L_8a6970;
L_8a6978: /* 8a6978: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a697a: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8a697c: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a6982u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a6982: add esi, 0x210 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x210u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8a6988: xor eax, eax */
  eax = 0;
/* 8a698a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8a6990: /* 8a6990: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a6993: jge 0x8a6998 */
  if ((sf == of)) goto L_8a6998;
L_8a6995: /* 8a6995: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a6996: jmp 0x8a6990 */
  goto L_8a6990;
L_8a6998: /* 8a6998: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a699a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a699c: mov ecx, esi */
  ecx = esi;
/* 8a699e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a69a4u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a69a4: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8a69a7: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8a69ab: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8a69b0u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8a69b0: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 8a69b3: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8a69b7: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8a69bcu); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8a69bc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a69bf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a69c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a69c1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a69c8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a69c9: mov esp, ebp */
  esp = ebp;
/* 8a69cb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a69cc: ret  */
  esp += 4; SPILL(); return;
}

void f_8a69cd(void) {
  LOAD_REGS();
L_8a69cd: /* 8a69cd: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8a69d0: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8a69d5: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 8a69d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a69d9: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 8a69dc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a69e1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8a69e1(); return;
}

void f_8a69e1(void) {
  LOAD_REGS();
L_8a69e1: /* 8a69e1: push 0xa1aef4 */
  { uint32_t v = 0xa1aef4u; esp -= 4; W32(esp, v); }
/* 8a69e6: push 0xae9208 */
  { uint32_t v = 0xae9208u; esp -= 4; W32(esp, v); }
/* 8a69eb: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8a69f1u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8a69f1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a69f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a69f6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a69f8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a69fdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8a69fd: guest_badaddr(0x8a69fd); return;
}

void f_8a6ba0(void) {
  LOAD_REGS();
L_8a6ba0: /* 8a6ba0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a6ba1: mov ebp, esp */
  ebp = esp;
/* 8a6ba3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a6ba5: push 0x9d6248 */
  { uint32_t v = 0x9d6248u; esp -= 4; W32(esp, v); }
/* 8a6baa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a6bb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a6bb1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a6bb8: sub esp, 0x64 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a6bbb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8a6bbd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a6bbe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a6bbf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a6bc0: xor esi, esi */
  esi = 0;
/* 8a6bc2: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8a6bc5: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 8a6bc8: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x8a6bceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a6bce: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 8a6bd4: push 0xae9218 */
  { uint32_t v = 0xae9218u; esp -= 4; W32(esp, v); }
/* 8a6bd9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a6bda: mov ebx, eax */
  ebx = eax;
/* 8a6bdc: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8a6bde: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8a6be0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a6be1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a6be2: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x8a6be5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a6be5: mov eax, dword ptr [ebx + 0x134] */
  eax = R32((uint32_t)(ebx + 0x134u));
/* 8a6beb: lea ecx, [ebx + 0x134] */
  ecx = (uint32_t)(ebx + 0x134u);
/* 8a6bf1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a6bf4: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8a6bf6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a6bf6: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 8a6bf9: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a6bffu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a6bff: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
L_8a6c03: /* 8a6c03: cmp esi, dword ptr [ebx + 0x144] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x144u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a6c09: jge 0x8a6c40 */
  if ((sf == of)) goto L_8a6c40;
L_8a6c0b: /* 8a6c0b: mov edx, dword ptr [ebx + 0x140] */
  edx = R32((uint32_t)(ebx + 0x140u));
/* 8a6c11: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 8a6c14: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a6c16: lea edi, [edx + ecx*4] */
  edi = (uint32_t)(edx + ecx*4);
/* 8a6c19: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a6c1b: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 8a6c1e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a6c24u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a6c24: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8a6c27: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8a6c2a: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 8a6c2d: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8a6c2f: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8a6c31: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 8a6c34: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8a6c37: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 8a6c3a: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8a6c3d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8a6c3e: jmp 0x8a6c03 */
  goto L_8a6c03;
L_8a6c40: /* 8a6c40: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8a6c43: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8a6c46: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a6c47: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a6c48: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 8a6c4b: call dword ptr [0xcfaac0] */
  esp -= 4; W32(esp, 0x8a6c51u); SPILL(); f_4e143d(); if (g_unwind) return; /* Core!??0FBox@@QAE@PBVFVector@@H@Z */ RELOAD();
/* 8a6c51: mov esi, eax */
  esi = eax;
/* 8a6c53: lea edi, [ebx + 0x28] */
  edi = (uint32_t)(ebx + 0x28u);
/* 8a6c56: mov ecx, 7 */
  ecx = 0x7u;
/* 8a6c5b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8a6c5d: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8a6c60: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8a6c63: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a6c64: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a6c65: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8a6c68: call dword ptr [0xcfa55c] */
  esp -= 4; W32(esp, 0x8a6c6eu); SPILL(); f_4e34c2(); if (g_unwind) return; /* Core!??0FSphere@@QAE@PBVFVector@@H@Z */ RELOAD();
/* 8a6c6e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8a6c70: lea edx, [ebx + 0x44] */
  edx = (uint32_t)(ebx + 0x44u);
/* 8a6c73: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8a6c75: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8a6c78: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8a6c7b: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 8a6c7e: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8a6c81: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 8a6c84: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* 8a6c87: lea eax, [ebx + 0x28] */
  eax = (uint32_t)(ebx + 0x28u);
/* 8a6c8a: mov ecx, 7 */
  ecx = 0x7u;
/* 8a6c8f: mov esi, eax */
  esi = eax;
/* 8a6c91: lea edi, [ebp - 0x70] */
  edi = (uint32_t)(ebp + 0xffffff90u);
/* 8a6c94: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8a6c96: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 8a6c99: fadd dword ptr [ebp - 0x68] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff98u)));
/* 8a6c9c: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 8a6c9f: fadd dword ptr [ebp - 0x6c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff94u)));
/* 8a6ca2: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 8a6ca5: fadd dword ptr [ebp - 0x70] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff90u)));
/* 8a6ca8: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 8a6cab: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8a6cad: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8a6cb3: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8a6cb6: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8a6cbc: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8a6cbf: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8a6cc2: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8a6cc8: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 8a6ccb: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 8a6cce: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8a6cd1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8a6cd3: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 8a6cd6: fsub dword ptr [ebp - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8a6cd9: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 8a6cdc: fsub dword ptr [ebp - 0x44] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 8a6cdf: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 8a6ce2: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8a6ce5: fadd dword ptr [ebp - 0x68] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff98u)));
/* 8a6ce8: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8a6ceb: fadd dword ptr [ebp - 0x6c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff94u)));
/* 8a6cee: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 8a6cf1: fadd dword ptr [ebp - 0x70] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff90u)));
/* 8a6cf4: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8a6cf7: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8a6cfa: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8a6cfc: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8a6cff: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8a6d02: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8a6d05: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8a6d08: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8a6d0b: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 8a6d0e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8a6d11: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8a6d14: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 8a6d17: fsub dword ptr [ebp - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8a6d1a: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 8a6d1d: fsub dword ptr [ebp - 0x44] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 8a6d20: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 8a6d23: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 8a6d26: fadd dword ptr [ebp - 0x5c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa4u)));
/* 8a6d29: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 8a6d2c: fadd dword ptr [ebp - 0x60] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 8a6d2f: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8a6d32: fadd dword ptr [ebp - 0x64] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 8a6d35: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8a6d38: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8a6d3b: lea edx, [ebx + 0x34] */
  edx = (uint32_t)(ebx + 0x34u);
/* 8a6d3e: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8a6d41: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8a6d44: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8a6d46: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8a6d49: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8a6d4c: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8a6d4f: fmul dword ptr [0xa0973c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0973cu)));
/* 8a6d55: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 8a6d58: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8a6d5b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8a6d5f: fadd dword ptr [ebp - 0x68] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff98u)));
/* 8a6d62: fstp dword ptr [ebx + 0x30] */
  WF32((uint32_t)(ebx + 0x30u), ST0); FPOP();
/* 8a6d65: fld dword ptr [ebx + 0x50] */
  { double v = F32((uint32_t)(ebx + 0x50u)); FPUSH(v); }
/* 8a6d68: fmul dword ptr [0xa151e4] */
  ST0 = ST0 * (F32((uint32_t)(0xa151e4u)));
/* 8a6d6e: fstp dword ptr [ebx + 0x50] */
  WF32((uint32_t)(ebx + 0x50u), ST0); FPOP();
/* 8a6d71: call 0x6c9543 */
  esp -= 4; W32(esp, 0x8a6d76u); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 8a6d76: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a6d79: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a6d7a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a6d7b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a6d82: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a6d83: mov esp, ebp */
  esp = ebp;
/* 8a6d85: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a6d86: ret  */
  esp += 4; SPILL(); return;
}

void f_8a6d87(void) {
  LOAD_REGS();
L_8a6d87: /* 8a6d87: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8a6d8a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8a6d8f: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 8a6d92: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a6d93: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8a6d96: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a6d9bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8a6d9b(); return;
}

void f_8a6d9b(void) {
  LOAD_REGS();
L_8a6d9b: /* 8a6d9b: push 0xa1af28 */
  { uint32_t v = 0xa1af28u; esp -= 4; W32(esp, v); }
/* 8a6da0: push 0xae9248 */
  { uint32_t v = 0xae9248u; esp -= 4; W32(esp, v); }
/* 8a6da5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8a6dabu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8a6dab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a6dae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a6db0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a6db2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a6db7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8a6db7: guest_badaddr(0x8a6db7); return;
}

void f_8a6e50(void) {
  LOAD_REGS();
L_8a6e50: /* 8a6e50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a6e51: mov ebp, esp */
  ebp = esp;
/* 8a6e53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a6e55: push 0x9d6280 */
  { uint32_t v = 0x9d6280u; esp -= 4; W32(esp, v); }
/* 8a6e5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a6e60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a6e61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a6e68: sub esp, 0x5c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a6e6b: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 8a6e70: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8a6e72: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a6e73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a6e74: xor esi, esi */
  esi = 0;
/* 8a6e76: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a6e78: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a6e79: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8a6e7c: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 8a6e7f: jne 0x8a6e8e */
  if (!zf) goto L_8a6e8e;
L_8a6e81: /* 8a6e81: mov ecx, dword ptr [0xcfabc0] */
  ecx = R32((uint32_t)(0xcfabc0u));
/* 8a6e87: cmp dword ptr [ecx], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a6e89: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 8a6e8c: je 0x8a6e95 */
  if (zf) goto L_8a6e95;
L_8a6e8e: /* 8a6e8e: mov dword ptr [ebp - 0x20], 1 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x1u);
L_8a6e95: /* 8a6e95: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 8a6e98: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a6e9eu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a6e9e: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8a6ea1: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8a6ea5: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a6eabu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a6eab: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 8a6eae: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8a6eb2: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a6eb8u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a6eb8: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8a6ebb: mov eax, dword ptr [ebx + 0xcc] */
  eax = R32((uint32_t)(ebx + 0xccu));
/* 8a6ec1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a6ec2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a6ec4: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 8a6ec7: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8a6ecb: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8a6ed1u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8a6ed1: mov eax, dword ptr [ebx + 0xe4] */
  eax = R32((uint32_t)(ebx + 0xe4u));
/* 8a6ed7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a6ed8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a6eda: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8a6edd: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8a6ee3u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8a6ee3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a6ee5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a6ee7: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 8a6eea: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a6ef0u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a6ef0: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8a6ef3: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
/* 8a6ef6: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 8a6ef9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8a6f00: /* 8a6f00: mov eax, dword ptr [ebx + 0xe4] */
  eax = R32((uint32_t)(ebx + 0xe4u));
/* 8a6f06: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8a6f09: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8a6f0a: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a6f0c: jge 0x8a6fee */
  if ((sf == of)) goto L_8a6fee;
L_8a6f12: /* 8a6f12: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8a6f15: mov dword ptr [eax + esi*4], 1 */
  W32((uint32_t)(eax + esi*4), 0x1u);
/* 8a6f1c: mov ecx, dword ptr [ebx + 0xe0] */
  ecx = R32((uint32_t)(ebx + 0xe0u));
/* 8a6f22: movzx edx, word ptr [ecx + esi*8 + 6] */
  edx = (uint32_t)(R16((uint32_t)(ecx + esi*8 + 0x6u)));
/* 8a6f27: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8a6f2a: xor eax, eax */
  eax = 0;
/* 8a6f2c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8a6f30: /* 8a6f30: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a6f33: jge 0x8a6f53 */
  if ((sf == of)) goto L_8a6f53;
L_8a6f35: /* 8a6f35: mov edx, dword ptr [ebx + 0xe0] */
  edx = R32((uint32_t)(ebx + 0xe0u));
/* 8a6f3b: lea ecx, [eax + esi*4] */
  ecx = (uint32_t)(eax + esi*4);
/* 8a6f3e: movzx ecx, word ptr [edx + ecx*2] */
  ecx = (uint32_t)(R16((uint32_t)(edx + ecx*2)));
/* 8a6f42: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8a6f45: mov dword ptr [ebp + eax*4 - 0x68], ecx */
  W32((uint32_t)(ebp + eax*4 + 0xffffff98u), ecx);
/* 8a6f49: mov dword ptr [edx + ecx*4], 1 */
  W32((uint32_t)(edx + ecx*4), 0x1u);
/* 8a6f50: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a6f51: jmp 0x8a6f30 */
  goto L_8a6f30;
L_8a6f53: /* 8a6f53: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 8a6f56: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8a6f59: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8a6f5c: xor esi, esi */
  esi = 0;
/* 8a6f5e: mov edi, edi */
  edi = edi;
L_8a6f60: /* 8a6f60: cmp esi, dword ptr [ebx + 0xe4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xe4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a6f66: jge 0x8a6fd0 */
  if ((sf == of)) goto L_8a6fd0;
L_8a6f68: /* 8a6f68: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8a6f6b: cmp dword ptr [eax + esi*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + esi*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a6f6f: jne 0x8a6fcd */
  if (!zf) goto L_8a6fcd;
L_8a6f71: /* 8a6f71: xor edx, edx */
  edx = 0;
/* 8a6f73: xor edi, edi */
  edi = 0;
L_8a6f75: /* 8a6f75: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a6f78: jge 0x8a6faa */
  if ((sf == of)) goto L_8a6faa;
L_8a6f7a: /* 8a6f7a: xor ecx, ecx */
  ecx = 0;
/* 8a6f7c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8a6f80: /* 8a6f80: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a6f83: jge 0x8a6fa7 */
  if ((sf == of)) goto L_8a6fa7;
L_8a6f85: /* 8a6f85: mov ebx, dword ptr [ebx + 0xe0] */
  ebx = R32((uint32_t)(ebx + 0xe0u));
/* 8a6f8b: lea eax, [edi + esi*4] */
  eax = (uint32_t)(edi + esi*4);
/* 8a6f8e: movzx eax, word ptr [ebx + eax*2] */
  eax = (uint32_t)(R16((uint32_t)(ebx + eax*2)));
/* 8a6f92: cmp dword ptr [ebp + ecx*4 - 0x68], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + ecx*4 + 0xffffff98u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a6f96: jne 0x8a6f9b */
  if (!zf) goto L_8a6f9b;
L_8a6f98: /* 8a6f98: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
L_8a6f9b: /* 8a6f9b: mov ebx, dword ptr [ebp - 0x5c] */
  ebx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8a6f9e: add edx, dword ptr [ebx + eax*4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + eax*4)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8a6fa1: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8a6fa4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8a6fa5: jmp 0x8a6f80 */
  goto L_8a6f80;
L_8a6fa7: /* 8a6fa7: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8a6fa8: jmp 0x8a6f75 */
  goto L_8a6f75;
L_8a6faa: /* 8a6faa: mov ecx, dword ptr [ebx + 0xe0] */
  ecx = R32((uint32_t)(ebx + 0xe0u));
/* 8a6fb0: movzx eax, word ptr [ecx + esi*8 + 6] */
  eax = (uint32_t)(R16((uint32_t)(ecx + esi*8 + 0x6u)));
/* 8a6fb5: cmp eax, dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a6fb8: je 0x8a6fbc */
  if (zf) goto L_8a6fbc;
L_8a6fba: /* 8a6fba: xor edx, edx */
  edx = 0;
L_8a6fbc: /* 8a6fbc: cmp edx, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a6fbf: jg 0x8a6fc7 */
  if ((!zf && sf == of)) goto L_8a6fc7;
L_8a6fc1: /* 8a6fc1: cmp dword ptr [ebp - 0x14], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a6fc5: jne 0x8a6fcd */
  if (!zf) goto L_8a6fcd;
L_8a6fc7: /* 8a6fc7: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8a6fca: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
L_8a6fcd: /* 8a6fcd: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8a6fce: jmp 0x8a6f60 */
  goto L_8a6f60;
L_8a6fd0: /* 8a6fd0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a6fd2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a6fd4: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 8a6fd7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a6fddu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a6fdd: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8a6fe0: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a6fe3: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
/* 8a6fe6: inc dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8a6fe9: jmp 0x8a6f00 */
  goto L_8a6f00;
L_8a6fee: /* 8a6fee: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8a6ff1: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a6ff7u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a6ff7: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8a6ffb: xor edi, edi */
  edi = 0;
/* 8a6ffd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8a7000: /* 8a7000: cmp edi, dword ptr [ebx + 0xe4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xe4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a7006: jge 0x8a704b */
  if ((sf == of)) goto L_8a704b;
L_8a7008: /* 8a7008: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8a700b: mov ecx, dword ptr [ebx + 0xe0] */
  ecx = R32((uint32_t)(ebx + 0xe0u));
/* 8a7011: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 8a7014: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a7016: lea esi, [ecx + eax*8] */
  esi = (uint32_t)(ecx + eax*8);
/* 8a7019: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a701b: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8a701e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a7024u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a7024: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8a7027: mov cx, word ptr [esi] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 8a702a: lea eax, [edx + eax*8] */
  eax = (uint32_t)(edx + eax*8);
/* 8a702d: mov word ptr [eax], cx */
  W16((uint32_t)(eax), (ecx & 0xffffu));
/* 8a7030: mov dx, word ptr [esi + 2] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x2u))) & 0xffffu);
/* 8a7034: mov word ptr [eax + 2], dx */
  W16((uint32_t)(eax + 0x2u), (edx & 0xffffu));
/* 8a7038: mov cx, word ptr [esi + 4] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x4u))) & 0xffffu);
/* 8a703c: mov word ptr [eax + 4], cx */
  W16((uint32_t)(eax + 0x4u), (ecx & 0xffffu));
/* 8a7040: mov dx, word ptr [esi + 6] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x6u))) & 0xffffu);
/* 8a7044: mov word ptr [eax + 6], dx */
  W16((uint32_t)(eax + 0x6u), (edx & 0xffffu));
/* 8a7048: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8a7049: jmp 0x8a7000 */
  goto L_8a7000;
L_8a704b: /* 8a704b: xor esi, esi */
  esi = 0;
/* 8a704d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8a7050: /* 8a7050: cmp esi, dword ptr [ebx + 0xe4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xe4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a7056: jge 0x8a708e */
  if ((sf == of)) goto L_8a708e;
L_8a7058: /* 8a7058: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8a705b: lea edx, [esi*8] */
  edx = (uint32_t)(esi*8);
/* 8a7062: lea ecx, [edx + eax] */
  ecx = (uint32_t)(edx + eax);
/* 8a7065: mov eax, dword ptr [ebx + 0xe0] */
  eax = R32((uint32_t)(ebx + 0xe0u));
/* 8a706b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a706d: mov dx, word ptr [ecx] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 8a7070: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 8a7073: mov dx, word ptr [ecx + 2] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x2u))) & 0xffffu);
/* 8a7077: mov word ptr [eax + 2], dx */
  W16((uint32_t)(eax + 0x2u), (edx & 0xffffu));
/* 8a707b: mov dx, word ptr [ecx + 4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x4u))) & 0xffffu);
/* 8a707f: mov word ptr [eax + 4], dx */
  W16((uint32_t)(eax + 0x4u), (edx & 0xffffu));
/* 8a7083: mov cx, word ptr [ecx + 6] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x6u))) & 0xffffu);
/* 8a7087: mov word ptr [eax + 6], cx */
  W16((uint32_t)(eax + 0x6u), (ecx & 0xffffu));
/* 8a708b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8a708c: jmp 0x8a7050 */
  goto L_8a7050;
L_8a708e: /* 8a708e: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8a7091: xor eax, eax */
  eax = 0;
L_8a7093: /* 8a7093: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a7095: jge 0x8a709a */
  if ((sf == of)) goto L_8a709a;
L_8a7097: /* 8a7097: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a7098: jmp 0x8a7093 */
  goto L_8a7093;
L_8a709a: /* 8a709a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a709c: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a709e: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8a70a1: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a70a7u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a70a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a70a9: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a70ab: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 8a70ae: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a70b4u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a70b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a70b6: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a70b8: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8a70bb: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a70c1u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a70c1: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8a70c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a70c6: je 0x8a70df */
  if (zf) goto L_8a70df;
L_8a70c8: /* 8a70c8: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8a70ce: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8a70d0: push 0xae9298 */
  { uint32_t v = 0xae9298u; esp -= 4; W32(esp, v); }
/* 8a70d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a70d6: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8a70dcu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8a70dc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a70df: /* 8a70df: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8a70e2: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8a70e6: call 0x6c1730 */
  esp -= 4; W32(esp, 0x8a70ebu); SPILL(); f_6c1730(); if (g_unwind) return; RELOAD();
/* 8a70eb: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 8a70ee: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8a70f2: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8a70f7u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8a70f7: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8a70fa: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8a70fe: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8a7103u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8a7103: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 8a7106: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8a710a: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8a710fu); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8a710f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a7112: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a7113: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a7114: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a711b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a711c: mov esp, ebp */
  esp = ebp;
/* 8a711e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a711f: ret  */
  esp += 4; SPILL(); return;
}

void f_8a7120(void) {
  LOAD_REGS();
L_8a7120: /* 8a7120: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8a7123: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8a7128: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8a712b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a712c: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 8a712f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a7134u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8a7134(); return;
}

void f_8a7134(void) {
  LOAD_REGS();
L_8a7134: /* 8a7134: push 0xa1af88 */
  { uint32_t v = 0xa1af88u; esp -= 4; W32(esp, v); }
/* 8a7139: push 0xae92d4 */
  { uint32_t v = 0xae92d4u; esp -= 4; W32(esp, v); }
/* 8a713e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8a7144u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8a7144: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a7147: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a7149: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a714b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a7150u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8a7150: guest_badaddr(0x8a7150); return;
}

void f_8a7230(void) {
  LOAD_REGS();
L_8a7230: /* 8a7230: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a7231: mov ebp, esp */
  ebp = esp;
/* 8a7233: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a7235: push 0x9d62c0 */
  { uint32_t v = 0x9d62c0u; esp -= 4; W32(esp, v); }
/* 8a723a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a7240: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a7241: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a7248: sub esp, 0x70 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a724b: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 8a7250: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8a7252: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a7253: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a7254: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a7255: xor edi, edi */
  edi = 0;
/* 8a7257: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a7259: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8a725c: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8a725f: jne 0x8a726e */
  if (!zf) goto L_8a726e;
L_8a7261: /* 8a7261: mov ecx, dword ptr [0xcfabc0] */
  ecx = R32((uint32_t)(0xcfabc0u));
/* 8a7267: cmp dword ptr [ecx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a7269: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 8a726c: je 0x8a7275 */
  if (zf) goto L_8a7275;
L_8a726e: /* 8a726e: mov dword ptr [ebp - 0x28], 1 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x1u);
L_8a7275: /* 8a7275: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 8a7278: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a727eu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a727e: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8a7281: mov eax, dword ptr [ebx + 0xcc] */
  eax = R32((uint32_t)(ebx + 0xccu));
/* 8a7287: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a7288: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a728a: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 8a728d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8a7291: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8a7297u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8a7297: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 8a729a: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a72a0u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a72a0: mov eax, dword ptr [ebx + 0xfc] */
  eax = R32((uint32_t)(ebx + 0xfcu));
/* 8a72a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a72a7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a72a9: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 8a72ac: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8a72b0: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8a72b6u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8a72b6: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 8a72b9: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a72bfu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a72bf: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 8a72c2: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8a72c6: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a72ccu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a72cc: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8a72d0: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 8a72d3: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
L_8a72d6: /* 8a72d6: cmp edi, dword ptr [ebx + 0xe4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xe4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a72dc: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 8a72df: jge 0x8a73ef */
  if ((sf == of)) goto L_8a73ef;
L_8a72e5: /* 8a72e5: xor esi, esi */
  esi = 0;
L_8a72e7: /* 8a72e7: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a72ea: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 8a72ed: jge 0x8a73e9 */
  if ((sf == of)) goto L_8a73e9;
L_8a72f3: /* 8a72f3: mov edx, dword ptr [ebx + 0xe0] */
  edx = R32((uint32_t)(ebx + 0xe0u));
/* 8a72f9: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 8a72fc: lea eax, [esi + edi*4] */
  eax = (uint32_t)(esi + edi*4);
/* 8a72ff: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8a7301: movzx edx, word ptr [eax + edx] */
  edx = (uint32_t)(R16((uint32_t)(eax + edx)));
/* 8a7305: cmp dword ptr [ecx + edx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + edx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a7309: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8a730c: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8a730f: jne 0x8a73d3 */
  if (!zf) goto L_8a73d3;
L_8a7315: /* 8a7315: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a7318: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a7319: mov edi, edx */
  edi = edx;
/* 8a731b: mov dword ptr [ecx + edi*4], eax */
  W32((uint32_t)(ecx + edi*4), eax);
/* 8a731e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8a7321: mov eax, dword ptr [ebx + 0xc8] */
  eax = R32((uint32_t)(ebx + 0xc8u));
/* 8a7327: lea edi, [edi + edi*2] */
  edi = (uint32_t)(edi + edi*2);
/* 8a732a: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8a732d: movzx esi, word ptr [edi + eax] */
  esi = (uint32_t)(R16((uint32_t)(edi + eax)));
/* 8a7331: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8a7334: cmp dword ptr [eax + esi*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + esi*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a7338: jne 0x8a738b */
  if (!zf) goto L_8a738b;
L_8a733a: /* 8a733a: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8a733d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8a733e: mov dword ptr [eax + esi*4], ecx */
  W32((uint32_t)(eax + esi*4), ecx);
/* 8a7341: mov edx, dword ptr [ebx + 0xf8] */
  edx = R32((uint32_t)(ebx + 0xf8u));
/* 8a7347: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8a734a: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 8a734d: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 8a7350: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8a7352: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8a7355: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8a7358: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a735a: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 8a735d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a735f: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 8a7362: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 8a7365: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 8a7368: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a736eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a736e: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8a7371: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8a7374: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 8a7377: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8a737a: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8a737d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8a737f: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8a7382: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8a7385: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8a7388: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
L_8a738b: /* 8a738b: mov edx, dword ptr [ebx + 0xc8] */
  edx = R32((uint32_t)(ebx + 0xc8u));
/* 8a7391: mov ecx, dword ptr [edi + edx + 4] */
  ecx = R32((uint32_t)(edi + edx + 0x4u));
/* 8a7395: mov si, word ptr [eax + esi*4] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + esi*4))) & 0xffffu);
/* 8a7399: mov edi, dword ptr [edi + edx + 8] */
  edi = R32((uint32_t)(edi + edx + 0x8u));
/* 8a739d: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a739f: mov dword ptr [ebp - 0x78], ecx */
  W32((uint32_t)(ebp + 0xffffff88u), ecx);
/* 8a73a2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a73a4: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 8a73a7: dec si */
  { uint16_t a = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - 1);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 8a73a9: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a73afu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a73af: mov ecx, dword ptr [ebp - 0x78] */
  ecx = R32((uint32_t)(ebp + 0xffffff88u));
/* 8a73b2: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8a73b5: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8a73b8: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 8a73bb: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8a73be: mov word ptr [eax], si */
  W16((uint32_t)(eax), (esi & 0xffffu));
/* 8a73c1: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8a73c4: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 8a73c7: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8a73ca: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8a73cd: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 8a73d0: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
L_8a73d3: /* 8a73d3: mov dx, word ptr [ecx + edx*4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + edx*4))) & 0xffffu);
/* 8a73d7: mov ecx, dword ptr [ebx + 0xe0] */
  ecx = R32((uint32_t)(ebx + 0xe0u));
/* 8a73dd: dec dx */
  { uint16_t a = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a - 1);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 8a73df: mov word ptr [eax + ecx], dx */
  W16((uint32_t)(eax + ecx), (edx & 0xffffu));
/* 8a73e3: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8a73e4: jmp 0x8a72e7 */
  goto L_8a72e7;
L_8a73e9: /* 8a73e9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8a73ea: jmp 0x8a72d6 */
  goto L_8a72d6;
L_8a73ef: /* 8a73ef: lea ecx, [ebx + 0xc8] */
  ecx = (uint32_t)(ebx + 0xc8u);
/* 8a73f5: xor eax, eax */
  eax = 0;
L_8a73f7: /* 8a73f7: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a73fa: jge 0x8a73ff */
  if ((sf == of)) goto L_8a73ff;
L_8a73fc: /* 8a73fc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a73fd: jmp 0x8a73f7 */
  goto L_8a73f7;
L_8a73ff: /* 8a73ff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a7401: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a7403: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a7409u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a7409: xor edi, edi */
  edi = 0;
/* 8a740b: jmp 0x8a7410 */
  goto L_8a7410;
L_8a7410: /* 8a7410: cmp edi, dword ptr [ebp - 0x54] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a7413: jge 0x8a745d */
  if ((sf == of)) goto L_8a745d;
L_8a7415: /* 8a7415: lea edx, [ebx + 0xbc] */
  edx = (uint32_t)(ebx + 0xbcu);
/* 8a741b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a741d: je 0x8a7427 */
  if (zf) goto L_8a7427;
L_8a741f: /* 8a741f: lea esi, [ebx + 0xc8] */
  esi = (uint32_t)(ebx + 0xc8u);
/* 8a7425: jmp 0x8a7429 */
  goto L_8a7429;
L_8a7427: /* 8a7427: xor esi, esi */
  esi = 0;
L_8a7429: /* 8a7429: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a742b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a742d: mov ecx, esi */
  ecx = esi;
/* 8a742f: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a7435u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a7435: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8a7437: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8a743a: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8a743d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a743f: je 0x8a745a */
  if (zf) goto L_8a745a;
L_8a7441: /* 8a7441: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8a7444: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 8a7447: lea edx, [ecx + edx*4] */
  edx = (uint32_t)(ecx + edx*4);
/* 8a744a: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8a744c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8a744e: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8a7451: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8a7454: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8a7457: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
L_8a745a: /* 8a745a: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8a745b: jmp 0x8a7410 */
  goto L_8a7410;
L_8a745d: /* 8a745d: lea ecx, [ebx + 0xf8] */
  ecx = (uint32_t)(ebx + 0xf8u);
/* 8a7463: xor eax, eax */
  eax = 0;
L_8a7465: /* 8a7465: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a7468: jge 0x8a746d */
  if ((sf == of)) goto L_8a746d;
L_8a746a: /* 8a746a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a746b: jmp 0x8a7465 */
  goto L_8a7465;
L_8a746d: /* 8a746d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a746f: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a7471: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a7477u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a7477: xor edi, edi */
  edi = 0;
/* 8a7479: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8a7480: /* 8a7480: cmp edi, dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a7483: jge 0x8a74cd */
  if ((sf == of)) goto L_8a74cd;
L_8a7485: /* 8a7485: lea eax, [ebx + 0xec] */
  eax = (uint32_t)(ebx + 0xecu);
/* 8a748b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a748d: je 0x8a7497 */
  if (zf) goto L_8a7497;
L_8a748f: /* 8a748f: lea esi, [ebx + 0xf8] */
  esi = (uint32_t)(ebx + 0xf8u);
/* 8a7495: jmp 0x8a7499 */
  goto L_8a7499;
L_8a7497: /* 8a7497: xor esi, esi */
  esi = 0;
L_8a7499: /* 8a7499: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a749b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a749d: mov ecx, esi */
  ecx = esi;
/* 8a749f: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a74a5u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a74a5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8a74a7: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8a74aa: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 8a74ad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a74af: je 0x8a74ca */
  if (zf) goto L_8a74ca;
L_8a74b1: /* 8a74b1: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8a74b4: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 8a74b7: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 8a74ba: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8a74bc: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8a74be: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8a74c1: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8a74c4: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8a74c7: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_8a74ca: /* 8a74ca: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8a74cb: jmp 0x8a7480 */
  goto L_8a7480;
L_8a74cd: /* 8a74cd: xor eax, eax */
  eax = 0;
/* 8a74cf: nop  */
L_8a74d0: /* 8a74d0: cmp eax, dword ptr [ebx + 0xb4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xb4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a74d6: jge 0x8a74f4 */
  if ((sf == of)) goto L_8a74f4;
L_8a74d8: /* 8a74d8: mov edx, dword ptr [ebx + 0xb0] */
  edx = R32((uint32_t)(ebx + 0xb0u));
/* 8a74de: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8a74e1: lea ecx, [edx + eax*8 + 4] */
  ecx = (uint32_t)(edx + eax*8 + 0x4u);
/* 8a74e5: movzx edx, word ptr [ecx] */
  edx = (uint32_t)(R16((uint32_t)(ecx)));
/* 8a74e8: mov dx, word ptr [esi + edx*4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + edx*4))) & 0xffffu);
/* 8a74ec: dec dx */
  { uint16_t a = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a - 1);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 8a74ee: mov word ptr [ecx], dx */
  W16((uint32_t)(ecx), (edx & 0xffffu));
/* 8a74f1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a74f2: jmp 0x8a74d0 */
  goto L_8a74d0;
L_8a74f4: /* 8a74f4: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 8a74fa: push 0x6c1bb3 */
  { uint32_t v = 0x6c1bb3u; esp -= 4; W32(esp, v); }
/* 8a74ff: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a7501: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a7502: mov eax, dword ptr [ebx + 0xb0] */
  eax = R32((uint32_t)(ebx + 0xb0u));
/* 8a7508: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a7509: call dword ptr [0xcfaa7c] */
  esp -= 4; W32(esp, 0x8a750fu); SPILL(); f_4e1785(); if (g_unwind) return; /* Core!?appQsort@@YAXPAXHHP6AHPBX1@Z@Z */ RELOAD();
/* 8a750f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a7512: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 8a7515: xor edi, edi */
  edi = 0;
/* 8a7517: xor esi, esi */
  esi = 0;
/* 8a7519: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8a7520: /* 8a7520: cmp esi, dword ptr [ebx + 0xb4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xb4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a7526: jge 0x8a755a */
  if ((sf == of)) goto L_8a755a;
L_8a7528: /* 8a7528: mov edx, dword ptr [ebx + 0xb0] */
  edx = R32((uint32_t)(ebx + 0xb0u));
/* 8a752e: movzx eax, word ptr [edx + esi*8 + 4] */
  eax = (uint32_t)(R16((uint32_t)(edx + esi*8 + 0x4u)));
/* 8a7533: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a7535: lea edx, [edx + esi*8] */
  edx = (uint32_t)(edx + esi*8);
/* 8a7538: je 0x8a753c */
  if (zf) goto L_8a753c;
L_8a753a: /* 8a753a: xor edi, edi */
  edi = 0;
L_8a753c: /* 8a753c: mov ecx, eax */
  ecx = eax;
/* 8a753e: mov eax, dword ptr [ebx + 0x110] */
  eax = R32((uint32_t)(ebx + 0x110u));
/* 8a7544: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8a7545: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a7547: jg 0x8a7551 */
  if ((!zf && sf == of)) goto L_8a7551;
L_8a7549: /* 8a7549: cmp ecx, dword ptr [ebx + 0xfc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xfcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a754f: jl 0x8a7557 */
  if ((sf != of)) goto L_8a7557;
L_8a7551: /* 8a7551: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
L_8a7557: /* 8a7557: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8a7558: jmp 0x8a7520 */
  goto L_8a7520;
L_8a755a: /* 8a755a: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 8a7560: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8a7567: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
/* 8a756a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8a7570: /* 8a7570: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a7572: jl 0x8a75ee */
  if ((sf != of)) goto L_8a75ee;
L_8a7574: /* 8a7574: mov eax, dword ptr [ebx + 0xb0] */
  eax = R32((uint32_t)(ebx + 0xb0u));
/* 8a757a: fld dword ptr [eax + esi*8] */
  { double v = F32((uint32_t)(eax + esi*8)); FPUSH(v); }
/* 8a757d: lea edi, [ebx + 0xb0] */
  edi = (uint32_t)(ebx + 0xb0u);
/* 8a7583: fcomp dword ptr [0x9f7c0c] */
  fpu_com(ST0, F32((uint32_t)(0x9f7c0cu)));
  FPOP();
/* 8a7589: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8a758b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8a758e: jp 0x8a75eb */
  if (pf) goto L_8a75eb;
L_8a7590: /* 8a7590: cmp esi, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a7593: jle 0x8a75ad */
  if ((zf || sf != of)) goto L_8a75ad;
L_8a7595: /* 8a7595: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8a759a: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8a759f: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8a75a4: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8a75aau); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8a75aa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a75ad: /* 8a75ad: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 8a75b0: lea eax, [esi + 1] */
  eax = (uint32_t)(esi + 0x1u);
/* 8a75b3: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a75b5: jle 0x8a75cf */
  if ((zf || sf != of)) goto L_8a75cf;
L_8a75b7: /* 8a75b7: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8a75bc: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8a75c1: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8a75c6: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8a75ccu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8a75cc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a75cf: /* 8a75cf: mov eax, esi */
  eax = esi;
L_8a75d1: /* 8a75d1: lea ecx, [esi + 1] */
  ecx = (uint32_t)(esi + 0x1u);
/* 8a75d4: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a75d6: jge 0x8a75db */
  if ((sf == of)) goto L_8a75db;
L_8a75d8: /* 8a75d8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a75d9: jmp 0x8a75d1 */
  goto L_8a75d1;
L_8a75db: /* 8a75db: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a75dd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a75df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a75e0: mov ecx, edi */
  ecx = edi;
/* 8a75e2: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8a75e8u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8a75e8: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
L_8a75eb: /* 8a75eb: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 8a75ec: jmp 0x8a7570 */
  goto L_8a7570;
L_8a75ee: /* 8a75ee: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8a75f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a75f3: je 0x8a7632 */
  if (zf) goto L_8a7632;
L_8a75f5: /* 8a75f5: mov ecx, dword ptr [ebx + 0x110] */
  ecx = R32((uint32_t)(ebx + 0x110u));
/* 8a75fb: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a75fe: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 8a7603: mov esi, dword ptr [0xcfa3a4] */
  esi = R32((uint32_t)(0xcfa3a4u));
/* 8a7609: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a760a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8a760c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a760d: push 0xae92e0 */
  { uint32_t v = 0xae92e0u; esp -= 4; W32(esp, v); }
/* 8a7612: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a7613: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8a7615u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a7615: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 8a761b: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8a7621: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a7624: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a7625: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8a7627: push 0xae9378 */
  { uint32_t v = 0xae9378u; esp -= 4; W32(esp, v); }
/* 8a762c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a762d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8a762fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a762f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a7632: /* 8a7632: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 8a7638: xor edi, edi */
  edi = 0;
/* 8a763a: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 8a763d: xor edx, edx */
  edx = 0;
/* 8a763f: nop  */
L_8a7640: /* 8a7640: cmp edx, dword ptr [ebx + 0xb4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xb4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a7646: jge 0x8a76bb */
  if ((sf == of)) goto L_8a76bb;
L_8a7648: /* 8a7648: mov eax, dword ptr [ebx + 0xb0] */
  eax = R32((uint32_t)(ebx + 0xb0u));
/* 8a764e: movzx esi, word ptr [eax + edx*8 + 4] */
  esi = (uint32_t)(R16((uint32_t)(eax + edx*8 + 0x4u)));
/* 8a7653: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a7655: lea eax, [eax + edx*8] */
  eax = (uint32_t)(eax + edx*8);
/* 8a7658: je 0x8a76b5 */
  if (zf) goto L_8a76b5;
L_8a765a: /* 8a765a: mov esi, edi */
  esi = edi;
/* 8a765c: xor edi, edi */
  edi = 0;
/* 8a765e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a7660: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 8a7663: je 0x8a76a0 */
  if (zf) goto L_8a76a0;
L_8a7665: /* 8a7665: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 8a766b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8a766d: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8a7670: jnp 0x8a76a0 */
  if (!pf) goto L_8a76a0;
L_8a7672: /* 8a7672: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 8a7678: xor ecx, ecx */
  ecx = 0;
/* 8a767a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8a7680: /* 8a7680: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a7682: jge 0x8a76a0 */
  if ((sf == of)) goto L_8a76a0;
L_8a7684: /* 8a7684: mov edi, dword ptr [ebx + 0xb0] */
  edi = R32((uint32_t)(ebx + 0xb0u));
/* 8a768a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8a768c: mov eax, edx */
  eax = edx;
/* 8a768e: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8a7690: fmul dword ptr [edi + eax*8 - 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*8 + 0xfffffff8u)));
/* 8a7694: lea eax, [edi + eax*8 - 8] */
  eax = (uint32_t)(edi + eax*8 + 0xfffffff8u);
/* 8a7698: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8a769b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8a769c: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 8a769e: jmp 0x8a7680 */
  goto L_8a7680;
L_8a76a0: /* 8a76a0: mov ecx, dword ptr [ebx + 0xb0] */
  ecx = R32((uint32_t)(ebx + 0xb0u));
/* 8a76a6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8a76a8: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 8a76ae: lea eax, [ecx + edx*8] */
  eax = (uint32_t)(ecx + edx*8);
/* 8a76b1: movzx ecx, word ptr [eax + 4] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x4u)));
L_8a76b5: /* 8a76b5: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 8a76b7: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8a76b8: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8a76b9: jmp 0x8a7640 */
  goto L_8a7640;
L_8a76bb: /* 8a76bb: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 8a76be: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8a76c0: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8a76c4: call 0x6c9543 */
  esp -= 4; W32(esp, 0x8a76c9u); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 8a76c9: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 8a76cc: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8a76d0: call 0x6c39cc */
  esp -= 4; W32(esp, 0x8a76d5u); SPILL(); f_6c39cc(); if (g_unwind) return; RELOAD();
/* 8a76d5: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 8a76d8: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8a76dc: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8a76e1u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8a76e1: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 8a76e4: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8a76e8: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8a76edu); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8a76ed: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a76f0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a76f1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a76f2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a76f9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a76fa: mov esp, ebp */
  esp = ebp;
/* 8a76fc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a76fd: ret  */
  esp += 4; SPILL(); return;
}

void f_8a740d(void) {
  LOAD_REGS();
L_8a740d: /* 8a740d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8a7410: /* 8a7410: cmp edi, dword ptr [ebp - 0x54] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a7413: jge 0x8a745d */
  if ((sf == of)) goto L_8a745d;
L_8a7415: /* 8a7415: lea edx, [ebx + 0xbc] */
  edx = (uint32_t)(ebx + 0xbcu);
/* 8a741b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a741d: je 0x8a7427 */
  if (zf) goto L_8a7427;
L_8a741f: /* 8a741f: lea esi, [ebx + 0xc8] */
  esi = (uint32_t)(ebx + 0xc8u);
/* 8a7425: jmp 0x8a7429 */
  goto L_8a7429;
L_8a7427: /* 8a7427: xor esi, esi */
  esi = 0;
L_8a7429: /* 8a7429: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a742b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a742d: mov ecx, esi */
  ecx = esi;
/* 8a742f: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a7435u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a7435: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8a7437: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8a743a: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8a743d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a743f: je 0x8a745a */
  if (zf) goto L_8a745a;
L_8a7441: /* 8a7441: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8a7444: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 8a7447: lea edx, [ecx + edx*4] */
  edx = (uint32_t)(ecx + edx*4);
/* 8a744a: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8a744c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8a744e: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8a7451: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8a7454: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8a7457: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
L_8a745a: /* 8a745a: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8a745b: jmp 0x8a7410 */
  goto L_8a7410;
L_8a745d: /* 8a745d: lea ecx, [ebx + 0xf8] */
  ecx = (uint32_t)(ebx + 0xf8u);
/* 8a7463: xor eax, eax */
  eax = 0;
L_8a7465: /* 8a7465: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a7468: jge 0x8a746d */
  if ((sf == of)) goto L_8a746d;
L_8a746a: /* 8a746a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a746b: jmp 0x8a7465 */
  goto L_8a7465;
L_8a746d: /* 8a746d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a746f: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a7471: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a7477u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a7477: xor edi, edi */
  edi = 0;
/* 8a7479: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8a7480: /* 8a7480: cmp edi, dword ptr [ebp - 0x48] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a7483: jge 0x8a74cd */
  if ((sf == of)) goto L_8a74cd;
L_8a7485: /* 8a7485: lea eax, [ebx + 0xec] */
  eax = (uint32_t)(ebx + 0xecu);
/* 8a748b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a748d: je 0x8a7497 */
  if (zf) goto L_8a7497;
L_8a748f: /* 8a748f: lea esi, [ebx + 0xf8] */
  esi = (uint32_t)(ebx + 0xf8u);
/* 8a7495: jmp 0x8a7499 */
  goto L_8a7499;
L_8a7497: /* 8a7497: xor esi, esi */
  esi = 0;
L_8a7499: /* 8a7499: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a749b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a749d: mov ecx, esi */
  ecx = esi;
/* 8a749f: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a74a5u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a74a5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8a74a7: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8a74aa: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 8a74ad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a74af: je 0x8a74ca */
  if (zf) goto L_8a74ca;
L_8a74b1: /* 8a74b1: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8a74b4: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 8a74b7: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 8a74ba: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8a74bc: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8a74be: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8a74c1: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8a74c4: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8a74c7: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_8a74ca: /* 8a74ca: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8a74cb: jmp 0x8a7480 */
  goto L_8a7480;
L_8a74cd: /* 8a74cd: xor eax, eax */
  eax = 0;
/* 8a74cf: nop  */
L_8a74d0: /* 8a74d0: cmp eax, dword ptr [ebx + 0xb4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xb4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a74d6: jge 0x8a74f4 */
  if ((sf == of)) goto L_8a74f4;
L_8a74d8: /* 8a74d8: mov edx, dword ptr [ebx + 0xb0] */
  edx = R32((uint32_t)(ebx + 0xb0u));
/* 8a74de: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8a74e1: lea ecx, [edx + eax*8 + 4] */
  ecx = (uint32_t)(edx + eax*8 + 0x4u);
/* 8a74e5: movzx edx, word ptr [ecx] */
  edx = (uint32_t)(R16((uint32_t)(ecx)));
/* 8a74e8: mov dx, word ptr [esi + edx*4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + edx*4))) & 0xffffu);
/* 8a74ec: dec dx */
  { uint16_t a = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a - 1);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 8a74ee: mov word ptr [ecx], dx */
  W16((uint32_t)(ecx), (edx & 0xffffu));
/* 8a74f1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a74f2: jmp 0x8a74d0 */
  goto L_8a74d0;
L_8a74f4: /* 8a74f4: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 8a74fa: push 0x6c1bb3 */
  { uint32_t v = 0x6c1bb3u; esp -= 4; W32(esp, v); }
/* 8a74ff: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a7501: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a7502: mov eax, dword ptr [ebx + 0xb0] */
  eax = R32((uint32_t)(ebx + 0xb0u));
/* 8a7508: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a7509: call dword ptr [0xcfaa7c] */
  esp -= 4; W32(esp, 0x8a750fu); SPILL(); f_4e1785(); if (g_unwind) return; /* Core!?appQsort@@YAXPAXHHP6AHPBX1@Z@Z */ RELOAD();
/* 8a750f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a7512: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 8a7515: xor edi, edi */
  edi = 0;
/* 8a7517: xor esi, esi */
  esi = 0;
/* 8a7519: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8a7520: /* 8a7520: cmp esi, dword ptr [ebx + 0xb4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xb4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a7526: jge 0x8a755a */
  if ((sf == of)) goto L_8a755a;
L_8a7528: /* 8a7528: mov edx, dword ptr [ebx + 0xb0] */
  edx = R32((uint32_t)(ebx + 0xb0u));
/* 8a752e: movzx eax, word ptr [edx + esi*8 + 4] */
  eax = (uint32_t)(R16((uint32_t)(edx + esi*8 + 0x4u)));
/* 8a7533: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a7535: lea edx, [edx + esi*8] */
  edx = (uint32_t)(edx + esi*8);
/* 8a7538: je 0x8a753c */
  if (zf) goto L_8a753c;
L_8a753a: /* 8a753a: xor edi, edi */
  edi = 0;
L_8a753c: /* 8a753c: mov ecx, eax */
  ecx = eax;
/* 8a753e: mov eax, dword ptr [ebx + 0x110] */
  eax = R32((uint32_t)(ebx + 0x110u));
/* 8a7544: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8a7545: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a7547: jg 0x8a7551 */
  if ((!zf && sf == of)) goto L_8a7551;
L_8a7549: /* 8a7549: cmp ecx, dword ptr [ebx + 0xfc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xfcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a754f: jl 0x8a7557 */
  if ((sf != of)) goto L_8a7557;
L_8a7551: /* 8a7551: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
L_8a7557: /* 8a7557: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8a7558: jmp 0x8a7520 */
  goto L_8a7520;
L_8a755a: /* 8a755a: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 8a7560: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8a7567: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
/* 8a756a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8a7570: /* 8a7570: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a7572: jl 0x8a75ee */
  if ((sf != of)) goto L_8a75ee;
L_8a7574: /* 8a7574: mov eax, dword ptr [ebx + 0xb0] */
  eax = R32((uint32_t)(ebx + 0xb0u));
/* 8a757a: fld dword ptr [eax + esi*8] */
  { double v = F32((uint32_t)(eax + esi*8)); FPUSH(v); }
/* 8a757d: lea edi, [ebx + 0xb0] */
  edi = (uint32_t)(ebx + 0xb0u);
/* 8a7583: fcomp dword ptr [0x9f7c0c] */
  fpu_com(ST0, F32((uint32_t)(0x9f7c0cu)));
  FPOP();
/* 8a7589: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8a758b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8a758e: jp 0x8a75eb */
  if (pf) goto L_8a75eb;
L_8a7590: /* 8a7590: cmp esi, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a7593: jle 0x8a75ad */
  if ((zf || sf != of)) goto L_8a75ad;
L_8a7595: /* 8a7595: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8a759a: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8a759f: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8a75a4: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8a75aau); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8a75aa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a75ad: /* 8a75ad: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 8a75b0: lea eax, [esi + 1] */
  eax = (uint32_t)(esi + 0x1u);
/* 8a75b3: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a75b5: jle 0x8a75cf */
  if ((zf || sf != of)) goto L_8a75cf;
L_8a75b7: /* 8a75b7: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8a75bc: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8a75c1: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8a75c6: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8a75ccu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8a75cc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a75cf: /* 8a75cf: mov eax, esi */
  eax = esi;
L_8a75d1: /* 8a75d1: lea ecx, [esi + 1] */
  ecx = (uint32_t)(esi + 0x1u);
/* 8a75d4: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a75d6: jge 0x8a75db */
  if ((sf == of)) goto L_8a75db;
L_8a75d8: /* 8a75d8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a75d9: jmp 0x8a75d1 */
  goto L_8a75d1;
L_8a75db: /* 8a75db: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a75dd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a75df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a75e0: mov ecx, edi */
  ecx = edi;
/* 8a75e2: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8a75e8u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8a75e8: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
L_8a75eb: /* 8a75eb: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 8a75ec: jmp 0x8a7570 */
  goto L_8a7570;
L_8a75ee: /* 8a75ee: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8a75f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a75f3: je 0x8a7632 */
  if (zf) goto L_8a7632;
L_8a75f5: /* 8a75f5: mov ecx, dword ptr [ebx + 0x110] */
  ecx = R32((uint32_t)(ebx + 0x110u));
/* 8a75fb: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a75fe: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 8a7603: mov esi, dword ptr [0xcfa3a4] */
  esi = R32((uint32_t)(0xcfa3a4u));
/* 8a7609: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a760a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8a760c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a760d: push 0xae92e0 */
  { uint32_t v = 0xae92e0u; esp -= 4; W32(esp, v); }
/* 8a7612: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a7613: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8a7615u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a7615: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 8a761b: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8a7621: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a7624: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a7625: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8a7627: push 0xae9378 */
  { uint32_t v = 0xae9378u; esp -= 4; W32(esp, v); }
/* 8a762c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a762d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8a762fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a762f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a7632: /* 8a7632: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 8a7638: xor edi, edi */
  edi = 0;
/* 8a763a: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 8a763d: xor edx, edx */
  edx = 0;
/* 8a763f: nop  */
L_8a7640: /* 8a7640: cmp edx, dword ptr [ebx + 0xb4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xb4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a7646: jge 0x8a76bb */
  if ((sf == of)) goto L_8a76bb;
L_8a7648: /* 8a7648: mov eax, dword ptr [ebx + 0xb0] */
  eax = R32((uint32_t)(ebx + 0xb0u));
/* 8a764e: movzx esi, word ptr [eax + edx*8 + 4] */
  esi = (uint32_t)(R16((uint32_t)(eax + edx*8 + 0x4u)));
/* 8a7653: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a7655: lea eax, [eax + edx*8] */
  eax = (uint32_t)(eax + edx*8);
/* 8a7658: je 0x8a76b5 */
  if (zf) goto L_8a76b5;
L_8a765a: /* 8a765a: mov esi, edi */
  esi = edi;
/* 8a765c: xor edi, edi */
  edi = 0;
/* 8a765e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a7660: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 8a7663: je 0x8a76a0 */
  if (zf) goto L_8a76a0;
L_8a7665: /* 8a7665: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 8a766b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8a766d: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8a7670: jnp 0x8a76a0 */
  if (!pf) goto L_8a76a0;
L_8a7672: /* 8a7672: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 8a7678: xor ecx, ecx */
  ecx = 0;
/* 8a767a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8a7680: /* 8a7680: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a7682: jge 0x8a76a0 */
  if ((sf == of)) goto L_8a76a0;
L_8a7684: /* 8a7684: mov edi, dword ptr [ebx + 0xb0] */
  edi = R32((uint32_t)(ebx + 0xb0u));
/* 8a768a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8a768c: mov eax, edx */
  eax = edx;
/* 8a768e: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8a7690: fmul dword ptr [edi + eax*8 - 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + eax*8 + 0xfffffff8u)));
/* 8a7694: lea eax, [edi + eax*8 - 8] */
  eax = (uint32_t)(edi + eax*8 + 0xfffffff8u);
/* 8a7698: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8a769b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8a769c: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 8a769e: jmp 0x8a7680 */
  goto L_8a7680;
L_8a76a0: /* 8a76a0: mov ecx, dword ptr [ebx + 0xb0] */
  ecx = R32((uint32_t)(ebx + 0xb0u));
/* 8a76a6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8a76a8: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 8a76ae: lea eax, [ecx + edx*8] */
  eax = (uint32_t)(ecx + edx*8);
/* 8a76b1: movzx ecx, word ptr [eax + 4] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x4u)));
L_8a76b5: /* 8a76b5: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 8a76b7: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8a76b8: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8a76b9: jmp 0x8a7640 */
  goto L_8a7640;
L_8a76bb: /* 8a76bb: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 8a76be: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8a76c0: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8a76c4: call 0x6c9543 */
  esp -= 4; W32(esp, 0x8a76c9u); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 8a76c9: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 8a76cc: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8a76d0: call 0x6c39cc */
  esp -= 4; W32(esp, 0x8a76d5u); SPILL(); f_6c39cc(); if (g_unwind) return; RELOAD();
/* 8a76d5: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 8a76d8: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8a76dc: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8a76e1u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8a76e1: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 8a76e4: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8a76e8: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8a76edu); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8a76ed: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a76f0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a76f1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a76f2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a76f9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a76fa: mov esp, ebp */
  esp = ebp;
/* 8a76fc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a76fd: ret  */
  esp += 4; SPILL(); return;
}

void f_8a76fe(void) {
  LOAD_REGS();
L_8a76fe: /* 8a76fe: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8a7701: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8a7706: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 8a7709: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a770a: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 8a770d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a7712u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8a7712(); return;
}

void f_8a7712(void) {
  LOAD_REGS();
L_8a7712: /* 8a7712: push 0xa1afb4 */
  { uint32_t v = 0xa1afb4u; esp -= 4; W32(esp, v); }
/* 8a7717: push 0xae93b0 */
  { uint32_t v = 0xae93b0u; esp -= 4; W32(esp, v); }
/* 8a771c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8a7722u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8a7722: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a7725: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a7727: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a7729: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a772eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8a772e: guest_badaddr(0x8a772e); return;
}

void f_8a7870(void) {
  LOAD_REGS();
L_8a7870: /* 8a7870: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a7872: push 0x9d6309 */
  { uint32_t v = 0x9d6309u; esp -= 4; W32(esp, v); }
/* 8a7877: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a787d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a787e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a7885: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a7886: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a7887: mov esi, ecx */
  esi = ecx;
/* 8a7889: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 8a788d: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* 8a7890: mov dword ptr [esp + 0x10], 3 */
  W32((uint32_t)(esp + 0x10u), 0x3u);
/* 8a7898: call 0x6c9543 */
  esp -= 4; W32(esp, 0x8a789du); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 8a789d: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 8a78a0: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 8a78a5: call 0x6c9543 */
  esp -= 4; W32(esp, 0x8a78aau); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 8a78aa: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 8a78ad: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 8a78b2: call 0x6c1730 */
  esp -= 4; W32(esp, 0x8a78b7u); SPILL(); f_6c1730(); if (g_unwind) return; RELOAD();
/* 8a78b7: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 8a78ba: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 8a78bf: call 0x6c39cc */
  esp -= 4; W32(esp, 0x8a78c4u); SPILL(); f_6c39cc(); if (g_unwind) return; RELOAD();
/* 8a78c4: mov ecx, esi */
  ecx = esi;
/* 8a78c6: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 8a78ce: call 0x6cad0d */
  esp -= 4; W32(esp, 0x8a78d3u); SPILL(); f_6cad0d(); if (g_unwind) return; RELOAD();
/* 8a78d3: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8a78d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a78d8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a78df: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a78e2: ret  */
  esp += 4; SPILL(); return;
}

void f_8a7910(void) {
  LOAD_REGS();
L_8a7910: /* 8a7910: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a7913: jmp 0x6c1730 */
  SPILL(); f_6c1730(); return;
}

void f_8a7930(void) {
  LOAD_REGS();
L_8a7930: /* 8a7930: jmp 0x6cd026 */
  SPILL(); f_6cd026(); return;
}

void f_8a7950(void) {
  LOAD_REGS();
L_8a7950: /* 8a7950: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a7951: mov ebp, esp */
  ebp = esp;
/* 8a7953: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a7955: push 0x9d6338 */
  { uint32_t v = 0x9d6338u; esp -= 4; W32(esp, v); }
/* 8a795a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a7960: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a7961: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a7968: sub esp, 0x5c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a796b: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 8a7970: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8a7972: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a7973: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a7974: xor ebx, ebx */
  ebx = 0;
/* 8a7976: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a7978: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a7979: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8a797c: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8a797f: jne 0x8a798e */
  if (!zf) goto L_8a798e;
L_8a7981: /* 8a7981: mov ecx, dword ptr [0xcfabc0] */
  ecx = R32((uint32_t)(0xcfabc0u));
/* 8a7987: cmp dword ptr [ecx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a7989: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 8a798c: je 0x8a7995 */
  if (zf) goto L_8a7995;
L_8a798e: /* 8a798e: mov dword ptr [ebp - 0x34], 1 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x1u);
L_8a7995: /* 8a7995: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 8a7998: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a799eu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a799e: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8a79a1: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8a79a5: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a79abu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a79ab: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 8a79ae: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8a79b2: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a79b8u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a79b8: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8a79bb: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8a79bf: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 8a79c2: xor eax, eax */
  eax = 0;
L_8a79c4: /* 8a79c4: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a79c7: jge 0x8a79cc */
  if ((sf == of)) goto L_8a79cc;
L_8a79c9: /* 8a79c9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a79ca: jmp 0x8a79c4 */
  goto L_8a79c4;
L_8a79cc: /* 8a79cc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a79cd: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8a79cf: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a79d5u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a79d5: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 8a79d8: xor eax, eax */
  eax = 0;
/* 8a79da: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8a79e0: /* 8a79e0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a79e3: jge 0x8a79e8 */
  if ((sf == of)) goto L_8a79e8;
L_8a79e5: /* 8a79e5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a79e6: jmp 0x8a79e0 */
  goto L_8a79e0;
L_8a79e8: /* 8a79e8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a79e9: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8a79eb: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a79f1u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a79f1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a79f2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a79f4: mov ecx, esi */
  ecx = esi;
/* 8a79f6: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a79fcu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a79fc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a79fd: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 8a7a00: call dword ptr [0xcfa3a0] */
  esp -= 4; W32(esp, 0x8a7a06u); SPILL(); f_4e264e(); if (g_unwind) return; /* Core!?Empty@?$TArray@G@@QAEXH@Z */ RELOAD();
/* 8a7a06: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* 8a7a0c: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8a7a0e: lea edi, [esi + 0xc] */
  edi = (uint32_t)(esi + 0xcu);
/* 8a7a11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a7a12: mov ecx, edi */
  ecx = edi;
/* 8a7a14: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a7a1au); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a7a1a: xor eax, eax */
  eax = 0;
/* 8a7a1c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8a7a20: /* 8a7a20: cmp eax, dword ptr [esi + 0xfc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xfcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a7a26: jge 0x8a7a50 */
  if ((sf == of)) goto L_8a7a50;
L_8a7a28: /* 8a7a28: mov ecx, dword ptr [esi + 0xf8] */
  ecx = R32((uint32_t)(esi + 0xf8u));
/* 8a7a2e: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 8a7a30: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8a7a33: lea edx, [ecx + edx*4] */
  edx = (uint32_t)(ecx + edx*4);
/* 8a7a36: mov ecx, eax */
  ecx = eax;
/* 8a7a38: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8a7a3b: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a7a3d: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 8a7a3f: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8a7a41: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 8a7a44: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8a7a47: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8a7a4a: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8a7a4d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a7a4e: jmp 0x8a7a20 */
  goto L_8a7a20;
L_8a7a50: /* 8a7a50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a7a51: call 0x6c6bc7 */
  esp -= 4; W32(esp, 0x8a7a56u); SPILL(); f_6c6bc7(); if (g_unwind) return; RELOAD();
/* 8a7a56: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 8a7a59: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a7a5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a7a5d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a7a5f: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 8a7a62: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8a7a68u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8a7a68: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 8a7a6b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a7a6c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a7a6e: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 8a7a71: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8a7a77u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8a7a77: mov eax, dword ptr [esi + 0xcc] */
  eax = R32((uint32_t)(esi + 0xccu));
/* 8a7a7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a7a7e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a7a80: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8a7a83: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8a7a89u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8a7a89: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8a7a8c: xor ebx, ebx */
  ebx = 0;
/* 8a7a8e: xor ecx, ecx */
  ecx = 0;
L_8a7a90: /* 8a7a90: cmp ecx, dword ptr [esi + 0xcc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xccu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a7a96: jge 0x8a7ac1 */
  if ((sf == of)) goto L_8a7ac1;
L_8a7a98: /* 8a7a98: mov edi, dword ptr [esi + 0xc8] */
  edi = R32((uint32_t)(esi + 0xc8u));
/* 8a7a9e: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 8a7aa1: movzx eax, word ptr [edi + eax*4] */
  eax = (uint32_t)(R16((uint32_t)(edi + eax*4)));
/* 8a7aa5: inc dword ptr [edx + eax*4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edx + eax*4), r);
  }
/* 8a7aa8: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8a7aab: cmp dword ptr [edx + eax*4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a7aaf: jne 0x8a7abe */
  if (!zf) goto L_8a7abe;
L_8a7ab1: /* 8a7ab1: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8a7ab4: mov dword ptr [edx + ecx*4], 0xffffffff */
  W32((uint32_t)(edx + ecx*4), 0xffffffffu);
/* 8a7abb: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
L_8a7abe: /* 8a7abe: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8a7abf: jmp 0x8a7a90 */
  goto L_8a7a90;
L_8a7ac1: /* 8a7ac1: mov edi, dword ptr [ebp - 0x50] */
  edi = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8a7ac4: xor eax, eax */
  eax = 0;
L_8a7ac6: /* 8a7ac6: cmp eax, dword ptr [esi + 0xcc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xccu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a7acc: jge 0x8a7b13 */
  if ((sf == of)) goto L_8a7b13;
L_8a7ace: /* 8a7ace: mov edx, dword ptr [esi + 0xc8] */
  edx = R32((uint32_t)(esi + 0xc8u));
/* 8a7ad4: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8a7ad7: movzx ecx, word ptr [edx + ecx*4] */
  ecx = (uint32_t)(R16((uint32_t)(edx + ecx*4)));
/* 8a7adb: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8a7ade: cmp dword ptr [edx + ecx*4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ecx*4))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a7ae2: jle 0x8a7b10 */
  if ((zf || sf != of)) goto L_8a7b10;
L_8a7ae4: /* 8a7ae4: mov edx, dword ptr [edi + eax*4] */
  edx = R32((uint32_t)(edi + eax*4));
/* 8a7ae7: cmp edx, -1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a7aea: jne 0x8a7b00 */
  if (!zf) goto L_8a7b00;
L_8a7aec: /* 8a7aec: mov dword ptr [edi + eax*4], 0 */
  W32((uint32_t)(edi + eax*4), 0x0u);
/* 8a7af3: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 8a7af6: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8a7af7: mov dword ptr [edx + ecx*4], ebx */
  W32((uint32_t)(edx + ecx*4), ebx);
/* 8a7afa: mov edi, dword ptr [ebp - 0x50] */
  edi = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8a7afd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a7afe: jmp 0x8a7ac6 */
  goto L_8a7ac6;
L_8a7b00: /* 8a7b00: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a7b02: jne 0x8a7b10 */
  if (!zf) goto L_8a7b10;
L_8a7b04: /* 8a7b04: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 8a7b07: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 8a7b0a: mov dword ptr [edi + eax*4], ecx */
  W32((uint32_t)(edi + eax*4), ecx);
/* 8a7b0d: mov edi, dword ptr [ebp - 0x50] */
  edi = R32((uint32_t)(ebp + 0xffffffb0u));
L_8a7b10: /* 8a7b10: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a7b11: jmp 0x8a7ac6 */
  goto L_8a7ac6;
L_8a7b13: /* 8a7b13: xor edi, edi */
  edi = 0;
/* 8a7b15: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a7b16: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a7b18: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 8a7b1b: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a7b21u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a7b21: xor eax, eax */
  eax = 0;
/* 8a7b23: mov dword ptr [esi + 0x10c], ebx */
  W32((uint32_t)(esi + 0x10cu), ebx);
/* 8a7b29: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 8a7b2c: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 8a7b2f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_8a7b32: /* 8a7b32: cmp eax, dword ptr [esi + 0xcc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xccu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a7b38: jge 0x8a7d28 */
  if ((sf == of)) goto L_8a7d28;
L_8a7b3e: /* 8a7b3e: mov ecx, dword ptr [esi + 0xc8] */
  ecx = R32((uint32_t)(esi + 0xc8u));
/* 8a7b44: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8a7b47: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 8a7b4a: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8a7b4d: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 8a7b50: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a7b52: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 8a7b55: movzx ecx, word ptr [ecx] */
  ecx = (uint32_t)(R16((uint32_t)(ecx)));
/* 8a7b58: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 8a7b5b: jle 0x8a7bae */
  if ((zf || sf != of)) goto L_8a7bae;
L_8a7b5d: /* 8a7b5d: lea edi, [eax + eax*2 - 3] */
  edi = (uint32_t)(eax + eax*2 + 0xfffffffdu);
/* 8a7b61: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a7b63: shl edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8a7b65: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a7b67: mov ecx, esi */
  ecx = esi;
/* 8a7b69: or edi, 0xf0000000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xf0000000u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 8a7b6f: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a7b75u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a7b75: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8a7b77: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a7b79: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* 8a7b7c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a7b7e: mov ecx, esi */
  ecx = esi;
/* 8a7b80: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a7b86u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a7b86: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8a7b89: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 8a7b8c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8a7b8e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a7b90: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 8a7b93: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a7b95: mov ecx, esi */
  ecx = esi;
/* 8a7b97: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a7b9du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a7b9d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8a7b9f: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 8a7ba2: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 8a7ba5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a7ba8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a7ba9: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8a7bac: jmp 0x8a7b32 */
  goto L_8a7b32;
L_8a7bae: /* 8a7bae: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8a7bb1: xor edi, edi */
  edi = 0;
L_8a7bb3: /* 8a7bb3: mov edx, dword ptr [esi + 0xb0] */
  edx = R32((uint32_t)(esi + 0xb0u));
/* 8a7bb9: movzx eax, word ptr [edx + ebx*8 + 4] */
  eax = (uint32_t)(R16((uint32_t)(edx + ebx*8 + 0x4u)));
/* 8a7bbe: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a7bc0: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 8a7bc3: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 8a7bc6: jne 0x8a7bd4 */
  if (!zf) goto L_8a7bd4;
L_8a7bc8: /* 8a7bc8: cmp dword ptr [esi + 0xb4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xb4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a7bce: jle 0x8a7bd4 */
  if ((zf || sf != of)) goto L_8a7bd4;
L_8a7bd0: /* 8a7bd0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8a7bd1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8a7bd2: jmp 0x8a7bb3 */
  goto L_8a7bb3;
L_8a7bd4: /* 8a7bd4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a7bd6: jne 0x8a7bef */
  if (!zf) goto L_8a7bef;
L_8a7bd8: /* 8a7bd8: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 8a7bde: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8a7be0: push 0xae8c90 */
  { uint32_t v = 0xae8c90u; esp -= 4; W32(esp, v); }
/* 8a7be5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a7be6: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8a7becu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8a7bec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a7bef: /* 8a7bef: cmp edi, 7 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a7bf2: jle 0x8a7c15 */
  if ((zf || sf != of)) goto L_8a7c15;
L_8a7bf4: /* 8a7bf4: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 8a7bf9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8a7bfb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a7bfc: push 0xae8cd0 */
  { uint32_t v = 0xae8cd0u; esp -= 4; W32(esp, v); }
/* 8a7c01: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a7c02: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8a7c08u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8a7c08: mov edi, 7 */
  edi = 0x7u;
/* 8a7c0d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a7c10: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 8a7c13: jmp 0x8a7c1f */
  goto L_8a7c1f;
L_8a7c15: /* 8a7c15: cmp edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a7c18: mov eax, 8 */
  eax = 0x8u;
/* 8a7c1d: jge 0x8a7c21 */
  if ((sf == of)) goto L_8a7c21;
L_8a7c1f: /* 8a7c1f: mov eax, edi */
  eax = edi;
L_8a7c21: /* 8a7c21: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a7c24: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8a7c27: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8a7c28: shl eax, 0x1c */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 28;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8a7c2b: cmp dword ptr [ecx + edx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + edx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a7c2f: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8a7c32: jne 0x8a7c3f */
  if (!zf) goto L_8a7c3f;
L_8a7c34: /* 8a7c34: or eax, 0x80000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 8a7c39: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8a7c3c: inc dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
L_8a7c3f: /* 8a7c3f: xor eax, eax */
  eax = 0;
/* 8a7c41: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
L_8a7c44: /* 8a7c44: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a7c46: jge 0x8a7cb9 */
  if ((sf == of)) goto L_8a7cb9;
L_8a7c48: /* 8a7c48: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8a7c4b: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 8a7c51: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* 8a7c57: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a7c59: movzx ebx, word ptr [ecx + eax*8 + 6] */
  ebx = (uint32_t)(R16((uint32_t)(ecx + eax*8 + 0x6u)));
/* 8a7c5e: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8a7c61: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 8a7c64: cmp ebx, dword ptr [edx + 0x1e0] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x1e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a7c6a: jl 0x8a7c6e */
  if ((sf != of)) goto L_8a7c6e;
L_8a7c6c: /* 8a7c6c: xor ebx, ebx */
  ebx = 0;
L_8a7c6e: /* 8a7c6e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a7c70: jle 0x8a7c76 */
  if ((zf || sf != of)) goto L_8a7c76;
L_8a7c72: /* 8a7c72: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8a7c74: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
L_8a7c76: /* 8a7c76: fmul dword ptr [0xa14724] */
  ST0 = ST0 * (F32((uint32_t)(0xa14724u)));
/* 8a7c7c: call 0x99c958 */
  esp -= 4; W32(esp, 0x8a7c81u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8a7c81: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8a7c84: mov edi, eax */
  edi = eax;
/* 8a7c86: lea eax, [ebx + ebx*2] */
  eax = (uint32_t)(ebx + ebx*2);
/* 8a7c89: shl edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8a7c8c: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8a7c8e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a7c90: or edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 8a7c92: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a7c94: mov ecx, esi */
  ecx = esi;
/* 8a7c96: or edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 8a7c98: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a7c9eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a7c9e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8a7ca0: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8a7ca3: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* 8a7ca6: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8a7ca9: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8a7cac: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a7cad: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 8a7cb4: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8a7cb7: jmp 0x8a7c44 */
  goto L_8a7c44;
L_8a7cb9: /* 8a7cb9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a7cbb: jne 0x8a7ce1 */
  if (!zf) goto L_8a7ce1;
L_8a7cbd: /* 8a7cbd: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a7cc0: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8a7cc3: cmp dword ptr [eax + edx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a7cc7: jne 0x8a7ccc */
  if (!zf) goto L_8a7ccc;
L_8a7cc9: /* 8a7cc9: inc dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
L_8a7ccc: /* 8a7ccc: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a7cce: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a7cd0: mov ecx, esi */
  ecx = esi;
/* 8a7cd2: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a7cd8u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a7cd8: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8a7cda: mov dword ptr [ecx + eax*4], 0xffff000 */
  W32((uint32_t)(ecx + eax*4), 0xffff000u);
L_8a7ce1: /* 8a7ce1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a7ce3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a7ce5: mov ecx, esi */
  ecx = esi;
/* 8a7ce7: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 8a7cea: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a7cf0u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a7cf0: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8a7cf3: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 8a7cf6: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8a7cf8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a7cfa: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 8a7cfd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a7cff: mov ecx, esi */
  ecx = esi;
/* 8a7d01: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a7d07u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a7d07: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8a7d09: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 8a7d0c: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 8a7d0f: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8a7d12: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8a7d15: mov dword ptr [edx + eax*4], 0xffffffff */
  W32((uint32_t)(edx + eax*4), 0xffffffffu);
/* 8a7d1c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a7d1f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a7d20: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8a7d23: jmp 0x8a7b32 */
  goto L_8a7b32;
L_8a7d28: /* 8a7d28: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a7d2a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a7d2c: mov ecx, esi */
  ecx = esi;
/* 8a7d2e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a7d34u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a7d34: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8a7d36: mov dword ptr [ecx + eax*4], 0xffffffff */
  W32((uint32_t)(ecx + eax*4), 0xffffffffu);
/* 8a7d3d: xor ebx, ebx */
  ebx = 0;
/* 8a7d3f: nop  */
L_8a7d40: /* 8a7d40: cmp ebx, dword ptr [esi + 0xe4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xe4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a7d46: jge 0x8a7d71 */
  if ((sf == of)) goto L_8a7d71;
L_8a7d48: /* 8a7d48: xor edi, edi */
  edi = 0;
/* 8a7d4a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8a7d50: /* 8a7d50: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a7d53: jge 0x8a7d6e */
  if ((sf == of)) goto L_8a7d6e;
L_8a7d55: /* 8a7d55: mov eax, dword ptr [esi + 0xe0] */
  eax = R32((uint32_t)(esi + 0xe0u));
/* 8a7d5b: lea edx, [edi + ebx*4] */
  edx = (uint32_t)(edi + ebx*4);
/* 8a7d5e: lea ecx, [eax + edx*2] */
  ecx = (uint32_t)(eax + edx*2);
/* 8a7d61: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a7d62: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 8a7d65: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8a7d6bu); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8a7d6b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8a7d6c: jmp 0x8a7d50 */
  goto L_8a7d50;
L_8a7d6e: /* 8a7d6e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8a7d6f: jmp 0x8a7d40 */
  goto L_8a7d40;
L_8a7d71: /* 8a7d71: mov edx, dword ptr [esi + 0x4c] */
  edx = R32((uint32_t)(esi + 0x4cu));
/* 8a7d74: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8a7d75: mov eax, 1 */
  eax = 0x1u;
/* 8a7d7a: mov ecx, edx */
  ecx = edx;
/* 8a7d7c: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a7d7e: mov dword ptr [esi + 0x4c], edx */
  W32((uint32_t)(esi + 0x4cu), edx);
/* 8a7d81: jge 0x8a7d86 */
  if ((sf == of)) goto L_8a7d86;
L_8a7d83: /* 8a7d83: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
L_8a7d86: /* 8a7d86: mov eax, dword ptr [esi + 0xcc] */
  eax = R32((uint32_t)(esi + 0xccu));
/* 8a7d8c: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 8a7d8f: xor eax, eax */
  eax = 0;
/* 8a7d91: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8a7d94: jmp 0x8a7da0 */
  goto L_8a7da0;
L_8a7da0: /* 8a7da0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a7da3: cmp edx, dword ptr [esi + 0xe4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xe4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a7da9: jge 0x8a7e4c */
  if ((sf == of)) goto L_8a7e4c;
L_8a7daf: /* 8a7daf: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a7db2: mov edx, dword ptr [esi + 0xe0] */
  edx = R32((uint32_t)(esi + 0xe0u));
/* 8a7db8: mov edi, dword ptr [edx + ecx*8] */
  edi = R32((uint32_t)(edx + ecx*8));
/* 8a7dbb: mov ecx, dword ptr [edx + ecx*8 + 4] */
  ecx = R32((uint32_t)(edx + ecx*8 + 0x4u));
/* 8a7dbf: mov ebx, ecx */
  ebx = ecx;
/* 8a7dc1: shr ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 8a7dc4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a7dc6: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 8a7dc9: mov dword ptr [ebp - 0x3c], edi */
  W32((uint32_t)(ebp + 0xffffffc4u), edi);
/* 8a7dcc: movzx ecx, bx */
  ecx = (uint32_t)((ebx & 0xffffu));
/* 8a7dcf: je 0x8a7dd8 */
  if (zf) goto L_8a7dd8;
L_8a7dd1: /* 8a7dd1: movzx edx, word ptr [eax] */
  edx = (uint32_t)(R16((uint32_t)(eax)));
/* 8a7dd4: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a7dd6: je 0x8a7e0f */
  if (zf) goto L_8a7e0f;
L_8a7dd8: /* 8a7dd8: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8a7dda: lea edi, [esi + 0x1c] */
  edi = (uint32_t)(esi + 0x1cu);
/* 8a7ddd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a7ddf: mov ecx, edi */
  ecx = edi;
/* 8a7de1: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a7de7u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a7de7: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8a7de9: mov dx, word ptr [ebp - 0x14] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffffecu))) & 0xffffu);
/* 8a7ded: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8a7df0: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8a7df3: xor ecx, ecx */
  ecx = 0;
/* 8a7df5: mov word ptr [eax + 0x10], dx */
  W16((uint32_t)(eax + 0x10u), (edx & 0xffffu));
/* 8a7df9: mov word ptr [eax], bx */
  W16((uint32_t)(eax), (ebx & 0xffffu));
/* 8a7dfc: mov word ptr [eax + 0x12], cx */
  W16((uint32_t)(eax + 0x12u), (ecx & 0xffffu));
/* 8a7e00: mov dx, word ptr [esi + 0xcc] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0xccu))) & 0xffffu);
/* 8a7e07: mov word ptr [eax + 4], dx */
  W16((uint32_t)(eax + 0x4u), (edx & 0xffffu));
/* 8a7e0b: mov word ptr [eax + 6], cx */
  W16((uint32_t)(eax + 0x6u), (ecx & 0xffffu));
L_8a7e0f: /* 8a7e0f: inc word ptr [eax + 0x12] */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x12u)));
  uint16_t r = (uint16_t)(a + 1);
  W16((uint32_t)(eax + 0x12u), r);
  }
/* 8a7e13: xor edi, edi */
  edi = 0;
L_8a7e15: /* 8a7e15: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a7e18: jge 0x8a7e44 */
  if ((sf == of)) goto L_8a7e44;
L_8a7e1a: /* 8a7e1a: mov cx, word ptr [ebp + edi*2 - 0x3c] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + edi*2 + 0xffffffc4u))) & 0xffffu);
/* 8a7e1f: xor edx, edx */
  edx = 0;
/* 8a7e21: mov dx, word ptr [eax + 4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x4u))) & 0xffffu);
/* 8a7e25: cmp dx, cx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8a7e28: jbe 0x8a7e2c */
  if ((cf | zf)) goto L_8a7e2c;
L_8a7e2a: /* 8a7e2a: mov edx, ecx */
  edx = ecx;
L_8a7e2c: /* 8a7e2c: mov word ptr [eax + 4], dx */
  W16((uint32_t)(eax + 0x4u), (edx & 0xffffu));
/* 8a7e30: xor edx, edx */
  edx = 0;
/* 8a7e32: mov dx, word ptr [eax + 6] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x6u))) & 0xffffu);
/* 8a7e36: cmp dx, cx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 8a7e39: jb 0x8a7e3d */
  if (cf) goto L_8a7e3d;
L_8a7e3b: /* 8a7e3b: mov ecx, edx */
  ecx = edx;
L_8a7e3d: /* 8a7e3d: mov word ptr [eax + 6], cx */
  W16((uint32_t)(eax + 0x6u), (ecx & 0xffffu));
/* 8a7e41: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8a7e42: jmp 0x8a7e15 */
  goto L_8a7e15;
L_8a7e44: /* 8a7e44: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 8a7e47: jmp 0x8a7da0 */
  goto L_8a7da0;
L_8a7e4c: /* 8a7e4c: xor edi, edi */
  edi = 0;
/* 8a7e4e: mov edi, edi */
  edi = edi;
L_8a7e50: /* 8a7e50: cmp edi, dword ptr [esi + 0x20] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a7e53: jge 0x8a7eb3 */
  if ((sf == of)) goto L_8a7eb3;
L_8a7e55: /* 8a7e55: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 8a7e58: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* 8a7e5b: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8a7e5e: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a7e60: xor edx, edx */
  edx = 0;
/* 8a7e62: mov dx, word ptr [ecx + 6] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x6u))) & 0xffffu);
/* 8a7e66: sub dx, word ptr [ecx + 4] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ecx + 0x4u)));
  uint16_t r = (uint16_t)(a - b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 8a7e6a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8a7e6b: mov word ptr [ecx + 8], dx */
  W16((uint32_t)(ecx + 0x8u), (edx & 0xffffu));
/* 8a7e6f: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8a7e72: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a7e74: je 0x8a7eb0 */
  if (zf) goto L_8a7eb0;
L_8a7e76: /* 8a7e76: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 8a7e79: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 8a7e7c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a7e7d: movzx edx, word ptr [eax + ecx + 0x12] */
  edx = (uint32_t)(R16((uint32_t)(eax + ecx + 0x12u)));
/* 8a7e82: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a7e84: movzx ecx, word ptr [eax + 0x10] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x10u)));
/* 8a7e88: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a7e89: movzx ecx, word ptr [eax] */
  ecx = (uint32_t)(R16((uint32_t)(eax)));
/* 8a7e8c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a7e8d: movzx edx, word ptr [eax + 6] */
  edx = (uint32_t)(R16((uint32_t)(eax + 0x6u)));
/* 8a7e91: movzx eax, word ptr [eax + 4] */
  eax = (uint32_t)(R16((uint32_t)(eax + 0x4u)));
/* 8a7e95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a7e96: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 8a7e9c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a7e9d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8a7e9f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a7ea0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a7ea1: push 0xae8ee8 */
  { uint32_t v = 0xae8ee8u; esp -= 4; W32(esp, v); }
/* 8a7ea6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a7ea7: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8a7eadu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8a7ead: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a7eb0: /* 8a7eb0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8a7eb1: jmp 0x8a7e50 */
  goto L_8a7e50;
L_8a7eb3: /* 8a7eb3: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 8a7eb6: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8a7eba: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8a7ebfu); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8a7ebf: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8a7ec2: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8a7ec6: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8a7ecbu); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8a7ecb: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 8a7ece: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8a7ed2: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8a7ed7u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8a7ed7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a7eda: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a7edb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a7edc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a7ee3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a7ee4: mov esp, ebp */
  esp = ebp;
/* 8a7ee6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a7ee7: ret  */
  esp += 4; SPILL(); return;
}

void f_8a7d96(void) {
  LOAD_REGS();
L_8a7d96: /* 8a7d96: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 8a7d9d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8a7da0: /* 8a7da0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a7da3: cmp edx, dword ptr [esi + 0xe4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xe4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a7da9: jge 0x8a7e4c */
  if ((sf == of)) goto L_8a7e4c;
L_8a7daf: /* 8a7daf: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a7db2: mov edx, dword ptr [esi + 0xe0] */
  edx = R32((uint32_t)(esi + 0xe0u));
/* 8a7db8: mov edi, dword ptr [edx + ecx*8] */
  edi = R32((uint32_t)(edx + ecx*8));
/* 8a7dbb: mov ecx, dword ptr [edx + ecx*8 + 4] */
  ecx = R32((uint32_t)(edx + ecx*8 + 0x4u));
/* 8a7dbf: mov ebx, ecx */
  ebx = ecx;
/* 8a7dc1: shr ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 8a7dc4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a7dc6: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 8a7dc9: mov dword ptr [ebp - 0x3c], edi */
  W32((uint32_t)(ebp + 0xffffffc4u), edi);
/* 8a7dcc: movzx ecx, bx */
  ecx = (uint32_t)((ebx & 0xffffu));
/* 8a7dcf: je 0x8a7dd8 */
  if (zf) goto L_8a7dd8;
L_8a7dd1: /* 8a7dd1: movzx edx, word ptr [eax] */
  edx = (uint32_t)(R16((uint32_t)(eax)));
/* 8a7dd4: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a7dd6: je 0x8a7e0f */
  if (zf) goto L_8a7e0f;
L_8a7dd8: /* 8a7dd8: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8a7dda: lea edi, [esi + 0x1c] */
  edi = (uint32_t)(esi + 0x1cu);
/* 8a7ddd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a7ddf: mov ecx, edi */
  ecx = edi;
/* 8a7de1: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a7de7u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a7de7: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8a7de9: mov dx, word ptr [ebp - 0x14] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffffecu))) & 0xffffu);
/* 8a7ded: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8a7df0: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8a7df3: xor ecx, ecx */
  ecx = 0;
/* 8a7df5: mov word ptr [eax + 0x10], dx */
  W16((uint32_t)(eax + 0x10u), (edx & 0xffffu));
/* 8a7df9: mov word ptr [eax], bx */
  W16((uint32_t)(eax), (ebx & 0xffffu));
/* 8a7dfc: mov word ptr [eax + 0x12], cx */
  W16((uint32_t)(eax + 0x12u), (ecx & 0xffffu));
/* 8a7e00: mov dx, word ptr [esi + 0xcc] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0xccu))) & 0xffffu);
/* 8a7e07: mov word ptr [eax + 4], dx */
  W16((uint32_t)(eax + 0x4u), (edx & 0xffffu));
/* 8a7e0b: mov word ptr [eax + 6], cx */
  W16((uint32_t)(eax + 0x6u), (ecx & 0xffffu));
L_8a7e0f: /* 8a7e0f: inc word ptr [eax + 0x12] */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x12u)));
  uint16_t r = (uint16_t)(a + 1);
  W16((uint32_t)(eax + 0x12u), r);
  }
/* 8a7e13: xor edi, edi */
  edi = 0;
L_8a7e15: /* 8a7e15: cmp edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a7e18: jge 0x8a7e44 */
  if ((sf == of)) goto L_8a7e44;
L_8a7e1a: /* 8a7e1a: mov cx, word ptr [ebp + edi*2 - 0x3c] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + edi*2 + 0xffffffc4u))) & 0xffffu);
/* 8a7e1f: xor edx, edx */
  edx = 0;
/* 8a7e21: mov dx, word ptr [eax + 4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x4u))) & 0xffffu);
/* 8a7e25: cmp dx, cx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8a7e28: jbe 0x8a7e2c */
  if ((cf | zf)) goto L_8a7e2c;
L_8a7e2a: /* 8a7e2a: mov edx, ecx */
  edx = ecx;
L_8a7e2c: /* 8a7e2c: mov word ptr [eax + 4], dx */
  W16((uint32_t)(eax + 0x4u), (edx & 0xffffu));
/* 8a7e30: xor edx, edx */
  edx = 0;
/* 8a7e32: mov dx, word ptr [eax + 6] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x6u))) & 0xffffu);
/* 8a7e36: cmp dx, cx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 8a7e39: jb 0x8a7e3d */
  if (cf) goto L_8a7e3d;
L_8a7e3b: /* 8a7e3b: mov ecx, edx */
  ecx = edx;
L_8a7e3d: /* 8a7e3d: mov word ptr [eax + 6], cx */
  W16((uint32_t)(eax + 0x6u), (ecx & 0xffffu));
/* 8a7e41: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8a7e42: jmp 0x8a7e15 */
  goto L_8a7e15;
L_8a7e44: /* 8a7e44: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 8a7e47: jmp 0x8a7da0 */
  goto L_8a7da0;
L_8a7e4c: /* 8a7e4c: xor edi, edi */
  edi = 0;
/* 8a7e4e: mov edi, edi */
  edi = edi;
L_8a7e50: /* 8a7e50: cmp edi, dword ptr [esi + 0x20] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a7e53: jge 0x8a7eb3 */
  if ((sf == of)) goto L_8a7eb3;
L_8a7e55: /* 8a7e55: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 8a7e58: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* 8a7e5b: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8a7e5e: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a7e60: xor edx, edx */
  edx = 0;
/* 8a7e62: mov dx, word ptr [ecx + 6] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x6u))) & 0xffffu);
/* 8a7e66: sub dx, word ptr [ecx + 4] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ecx + 0x4u)));
  uint16_t r = (uint16_t)(a - b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 8a7e6a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8a7e6b: mov word ptr [ecx + 8], dx */
  W16((uint32_t)(ecx + 0x8u), (edx & 0xffffu));
/* 8a7e6f: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8a7e72: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a7e74: je 0x8a7eb0 */
  if (zf) goto L_8a7eb0;
L_8a7e76: /* 8a7e76: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 8a7e79: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 8a7e7c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a7e7d: movzx edx, word ptr [eax + ecx + 0x12] */
  edx = (uint32_t)(R16((uint32_t)(eax + ecx + 0x12u)));
/* 8a7e82: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a7e84: movzx ecx, word ptr [eax + 0x10] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x10u)));
/* 8a7e88: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a7e89: movzx ecx, word ptr [eax] */
  ecx = (uint32_t)(R16((uint32_t)(eax)));
/* 8a7e8c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a7e8d: movzx edx, word ptr [eax + 6] */
  edx = (uint32_t)(R16((uint32_t)(eax + 0x6u)));
/* 8a7e91: movzx eax, word ptr [eax + 4] */
  eax = (uint32_t)(R16((uint32_t)(eax + 0x4u)));
/* 8a7e95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a7e96: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 8a7e9c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a7e9d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8a7e9f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a7ea0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a7ea1: push 0xae8ee8 */
  { uint32_t v = 0xae8ee8u; esp -= 4; W32(esp, v); }
/* 8a7ea6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a7ea7: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8a7eadu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8a7ead: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a7eb0: /* 8a7eb0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8a7eb1: jmp 0x8a7e50 */
  goto L_8a7e50;
L_8a7eb3: /* 8a7eb3: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 8a7eb6: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8a7eba: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8a7ebfu); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8a7ebf: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8a7ec2: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8a7ec6: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8a7ecbu); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8a7ecb: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 8a7ece: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8a7ed2: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8a7ed7u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8a7ed7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a7eda: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a7edb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a7edc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a7ee3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a7ee4: mov esp, ebp */
  esp = ebp;
/* 8a7ee6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a7ee7: ret  */
  esp += 4; SPILL(); return;
}

void f_8a7ee8(void) {
  LOAD_REGS();
L_8a7ee8: /* 8a7ee8: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8a7eeb: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8a7ef0: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8a7ef3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a7ef4: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 8a7ef7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a7efcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8a7efc(); return;
}

void f_8a7efc(void) {
  LOAD_REGS();
L_8a7efc: /* 8a7efc: push 0xa1afdc */
  { uint32_t v = 0xa1afdcu; esp -= 4; W32(esp, v); }
/* 8a7f01: push 0xae8fcc */
  { uint32_t v = 0xae8fccu; esp -= 4; W32(esp, v); }
/* 8a7f06: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8a7f0cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8a7f0c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a7f0f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a7f11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a7f13: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a7f18u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8a7f18: guest_badaddr(0x8a7f18); return;
}

void f_8a80a0(void) {
  LOAD_REGS();
L_8a80a0: /* 8a80a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a80a1: mov ebp, esp */
  ebp = esp;
/* 8a80a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a80a5: push 0x9d6350 */
  { uint32_t v = 0x9d6350u; esp -= 4; W32(esp, v); }
/* 8a80aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a80b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a80b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a80b8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a80bb: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8a80be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a80c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a80c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a80c2: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8a80c5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a80c6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8a80c9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8a80d0: je 0x8a80db */
  if (zf) goto L_8a80db;
L_8a80d2: /* 8a80d2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a80d3: call 0x6c5e66 */
  esp -= 4; W32(esp, 0x8a80d8u); SPILL(); f_6c5e66(); if (g_unwind) return; RELOAD();
/* 8a80d8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a80db: /* 8a80db: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a80dc: call 0x6c8eef */
  esp -= 4; W32(esp, 0x8a80e1u); SPILL(); f_6c8eef(); if (g_unwind) return; RELOAD();
/* 8a80e1: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8a80e4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a80e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a80e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a80e9: call 0x6c35f3 */
  esp -= 4; W32(esp, 0x8a80eeu); SPILL(); f_6c35f3(); if (g_unwind) return; RELOAD();
/* 8a80ee: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a80f1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a80f4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a80f5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a80f6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a80fd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a80fe: mov esp, ebp */
  esp = ebp;
/* 8a8100: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a8101: ret  */
  esp += 4; SPILL(); return;
}

void f_8a8102(void) {
  LOAD_REGS();
L_8a8102: /* 8a8102: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8a8105: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8a810a: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8a810d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a810e: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8a8111: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a8116u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8a8116(); return;
}

void f_8a8116(void) {
  LOAD_REGS();
L_8a8116: /* 8a8116: push 0xa1b010 */
  { uint32_t v = 0xa1b010u; esp -= 4; W32(esp, v); }
/* 8a811b: push 0xae8fd4 */
  { uint32_t v = 0xae8fd4u; esp -= 4; W32(esp, v); }
/* 8a8120: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8a8126u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8a8126: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a8129: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a812b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a812d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a8132u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8a8132: guest_badaddr(0x8a8132); return;
}

void f_8a8170(void) {
  LOAD_REGS();
L_8a8170: /* 8a8170: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a8171: mov ebp, esp */
  ebp = esp;
/* 8a8173: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a8175: push 0x9d6360 */
  { uint32_t v = 0x9d6360u; esp -= 4; W32(esp, v); }
/* 8a817a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a8180: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a8181: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a8188: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a818b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a818c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a818d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a818e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8a8191: cmp edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a8194: mov ebx, ecx */
  ebx = ecx;
/* 8a8196: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8a8199: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 8a819c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8a81a3: jg 0x8a8443 */
  if ((!zf && sf == of)) goto L_8a8443;
L_8a81a9: /* 8a81a9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a81ab: jl 0x8a8443 */
  if ((sf != of)) goto L_8a8443;
L_8a81b1: /* 8a81b1: cmp edi, dword ptr [ebx + 0x1f0] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x1f0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a81b7: jl 0x8a81e1 */
  if ((sf != of)) goto L_8a81e1;
L_8a81b9: /* 8a81b9: push 0x11c */
  { uint32_t v = 0x11cu; esp -= 4; W32(esp, v); }
/* 8a81be: lea esi, [ebx + 0x1ec] */
  esi = (uint32_t)(ebx + 0x1ecu);
/* 8a81c4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a81c6: mov ecx, esi */
  ecx = esi;
/* 8a81c8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a81ceu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a81ce: imul eax, eax, 0x11c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x11cu);
  eax = (uint32_t)r;
  }
/* 8a81d4: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8a81d6: je 0x8a81b1 */
  if (zf) goto L_8a81b1;
L_8a81d8: /* 8a81d8: mov ecx, eax */
  ecx = eax;
/* 8a81da: call 0x6cb72b */
  esp -= 4; W32(esp, 0x8a81dfu); SPILL(); f_6cb72b(); if (g_unwind) return; RELOAD();
/* 8a81df: jmp 0x8a81b1 */
  goto L_8a81b1;
L_8a81e1: /* 8a81e1: mov eax, dword ptr [ebx + 0x1ec] */
  eax = R32((uint32_t)(ebx + 0x1ecu));
/* 8a81e7: imul edi, edi, 0x11c */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x11cu);
  edi = (uint32_t)r;
  }
/* 8a81ed: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8a81f0: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8a81f2: mov eax, dword ptr [esi + 0x134] */
  eax = R32((uint32_t)(esi + 0x134u));
/* 8a81f8: lea ecx, [esi + 0x134] */
  ecx = (uint32_t)(esi + 0x134u);
/* 8a81fe: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 8a8201: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8a8203u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a8203: mov edx, dword ptr [esi + 0x17c] */
  edx = R32((uint32_t)(esi + 0x17cu));
/* 8a8209: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 8a820f: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8a8211u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a8211: mov eax, dword ptr [esi + 0x164] */
  eax = R32((uint32_t)(esi + 0x164u));
/* 8a8217: lea ecx, [esi + 0x164] */
  ecx = (uint32_t)(esi + 0x164u);
/* 8a821d: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8a821fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a821f: mov edx, dword ptr [esi + 0x14c] */
  edx = R32((uint32_t)(esi + 0x14cu));
/* 8a8225: lea ecx, [esi + 0x14c] */
  ecx = (uint32_t)(esi + 0x14cu);
/* 8a822b: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8a822du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a822d: mov eax, dword ptr [esi + 0x194] */
  eax = R32((uint32_t)(esi + 0x194u));
/* 8a8233: lea ecx, [esi + 0x194] */
  ecx = (uint32_t)(esi + 0x194u);
/* 8a8239: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8a823bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a823b: mov edx, dword ptr [esi + 0x1ac] */
  edx = R32((uint32_t)(esi + 0x1acu));
/* 8a8241: lea ecx, [esi + 0x1ac] */
  ecx = (uint32_t)(esi + 0x1acu);
/* 8a8247: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8a8249u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a8249: mov eax, dword ptr [esi + 0x1c4] */
  eax = R32((uint32_t)(esi + 0x1c4u));
/* 8a824f: lea ecx, [esi + 0x1c4] */
  ecx = (uint32_t)(esi + 0x1c4u);
/* 8a8255: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8a8257u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a8257: mov eax, dword ptr [esi + 0x144] */
  eax = R32((uint32_t)(esi + 0x144u));
/* 8a825d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a825f: je 0x8a8443 */
  if (zf) goto L_8a8443;
L_8a8265: /* 8a8265: mov eax, dword ptr [esi + 0x18c] */
  eax = R32((uint32_t)(esi + 0x18cu));
/* 8a826b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a826d: je 0x8a8443 */
  if (zf) goto L_8a8443;
L_8a8273: /* 8a8273: mov eax, dword ptr [esi + 0x174] */
  eax = R32((uint32_t)(esi + 0x174u));
/* 8a8279: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a827b: je 0x8a8443 */
  if (zf) goto L_8a8443;
L_8a8281: /* 8a8281: mov eax, dword ptr [esi + 0x1a4] */
  eax = R32((uint32_t)(esi + 0x1a4u));
/* 8a8287: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a8289: je 0x8a8443 */
  if (zf) goto L_8a8443;
L_8a828f: /* 8a828f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a8290: call 0x6cc9f5 */
  esp -= 4; W32(esp, 0x8a8295u); SPILL(); f_6cc9f5(); if (g_unwind) return; RELOAD();
/* 8a8295: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a8298: xor edi, edi */
  edi = 0;
/* 8a829a: xor eax, eax */
  eax = 0;
/* 8a829c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8a82a0: /* 8a82a0: cmp eax, dword ptr [esi + 0x18c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x18cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a82a6: jge 0x8a82c0 */
  if ((sf == of)) goto L_8a82c0;
L_8a82a8: /* 8a82a8: mov edx, dword ptr [esi + 0x188] */
  edx = R32((uint32_t)(esi + 0x188u));
/* 8a82ae: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8a82b1: movzx ecx, byte ptr [edx + ecx*4 + 6] */
  ecx = (uint32_t)(R8((uint32_t)(edx + ecx*4 + 0x6u)));
/* 8a82b6: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a82b8: jge 0x8a82bc */
  if ((sf == of)) goto L_8a82bc;
L_8a82ba: /* 8a82ba: mov edi, ecx */
  edi = ecx;
L_8a82bc: /* 8a82bc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a82bd: jmp 0x8a82a0 */
  goto L_8a82a0;
L_8a82c0: /* 8a82c0: cmp dword ptr [ebx + 0xd0], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xd0u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a82c6: jg 0x8a82da */
  if ((!zf && sf == of)) goto L_8a82da;
L_8a82c8: /* 8a82c8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a82ca: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a82cc: lea ecx, [ebx + 0xcc] */
  ecx = (uint32_t)(ebx + 0xccu);
/* 8a82d2: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8a82d8u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8a82d8: jmp 0x8a82c0 */
  goto L_8a82c0;
L_8a82da: /* 8a82da: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8a82dd: mov eax, dword ptr [esi + 0x144] */
  eax = R32((uint32_t)(esi + 0x144u));
/* 8a82e3: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a82e5: add edi, 0xf8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xf8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8a82eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a82ec: mov ecx, edi */
  ecx = edi;
/* 8a82ee: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a82f4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a82f4: xor ecx, ecx */
  ecx = 0;
L_8a82f6: /* 8a82f6: cmp ecx, dword ptr [esi + 0x144] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x144u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a82fc: jge 0x8a8323 */
  if ((sf == of)) goto L_8a8323;
L_8a82fe: /* 8a82fe: mov edx, dword ptr [esi + 0x140] */
  edx = R32((uint32_t)(esi + 0x140u));
/* 8a8304: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 8a8306: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 8a8309: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8a830c: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8a830e: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8a8310: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8a8312: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 8a8314: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8a8317: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 8a831a: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8a831d: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 8a8320: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8a8321: jmp 0x8a82f6 */
  goto L_8a82f6;
L_8a8323: /* 8a8323: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8a8326: mov eax, dword ptr [esi + 0x174] */
  eax = R32((uint32_t)(esi + 0x174u));
/* 8a832c: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a832e: add ebx, 0xc8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8a8334: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a8335: mov ecx, ebx */
  ecx = ebx;
/* 8a8337: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a833du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a833d: xor edi, edi */
  edi = 0;
/* 8a833f: nop  */
L_8a8340: /* 8a8340: cmp edi, dword ptr [esi + 0x174] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x174u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a8346: jge 0x8a836f */
  if ((sf == of)) goto L_8a836f;
L_8a8348: /* 8a8348: mov eax, dword ptr [esi + 0x170] */
  eax = R32((uint32_t)(esi + 0x170u));
/* 8a834e: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8a8350: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 8a8353: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8a8356: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a8358: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a835a: mov dx, word ptr [eax] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 8a835d: mov word ptr [ecx], dx */
  W16((uint32_t)(ecx), (edx & 0xffffu));
/* 8a8360: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8a8363: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8a8366: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8a8369: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8a836c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8a836d: jmp 0x8a8340 */
  goto L_8a8340;
L_8a836f: /* 8a836f: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8a8372: mov eax, dword ptr [esi + 0x1a4] */
  eax = R32((uint32_t)(esi + 0x1a4u));
/* 8a8378: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a837a: add edi, 0xb0 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xb0u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8a8380: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a8381: mov ecx, edi */
  ecx = edi;
/* 8a8383: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a8389u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a8389: xor eax, eax */
  eax = 0;
/* 8a838b: jmp 0x8a8390 */
  goto L_8a8390;
L_8a8390: /* 8a8390: cmp eax, dword ptr [esi + 0x1a4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1a4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a8396: jge 0x8a83b1 */
  if ((sf == of)) goto L_8a83b1;
L_8a8398: /* 8a8398: mov ecx, dword ptr [esi + 0x1a0] */
  ecx = R32((uint32_t)(esi + 0x1a0u));
/* 8a839e: mov ebx, dword ptr [ecx + eax*8] */
  ebx = R32((uint32_t)(ecx + eax*8));
/* 8a83a1: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8a83a3: mov dword ptr [edx + eax*8], ebx */
  W32((uint32_t)(edx + eax*8), ebx);
/* 8a83a6: mov ecx, dword ptr [ecx + eax*8 + 4] */
  ecx = R32((uint32_t)(ecx + eax*8 + 0x4u));
/* 8a83aa: mov dword ptr [edx + eax*8 + 4], ecx */
  W32((uint32_t)(edx + eax*8 + 0x4u), ecx);
/* 8a83ae: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a83af: jmp 0x8a8390 */
  goto L_8a8390;
L_8a83b1: /* 8a83b1: mov eax, dword ptr [esi + 0x18c] */
  eax = R32((uint32_t)(esi + 0x18cu));
/* 8a83b7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8a83ba: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a83bc: add ecx, 0xe0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a83c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a83c3: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a83c9u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a83c9: xor ecx, ecx */
  ecx = 0;
/* 8a83cb: jmp 0x8a83d0 */
  goto L_8a83d0;
L_8a83d0: /* 8a83d0: cmp ecx, dword ptr [esi + 0x18c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x18cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a83d6: jge 0x8a841d */
  if ((sf == of)) goto L_8a841d;
L_8a83d8: /* 8a83d8: mov eax, dword ptr [esi + 0x188] */
  eax = R32((uint32_t)(esi + 0x188u));
/* 8a83de: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 8a83e1: mov di, word ptr [eax + edx*4 + 2] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + edx*4 + 0x2u))) & 0xffffu);
/* 8a83e6: mov bx, word ptr [eax + edx*4 + 4] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + edx*4 + 0x4u))) & 0xffffu);
/* 8a83eb: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 8a83ee: mov dx, word ptr [eax] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 8a83f1: movzx ax, byte ptr [eax + 6] */
  eax = (eax & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(eax + 0x6u)))) & 0xffffu);
/* 8a83f6: mov word ptr [ebp - 0x1e], ax */
  W16((uint32_t)(ebp + 0xffffffe2u), (eax & 0xffffu));
/* 8a83fa: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8a83fd: add eax, 0xe0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a8402: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8a8404: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 8a8407: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 8a840a: mov dx, word ptr [ebp - 0x1e] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffffe2u))) & 0xffffu);
/* 8a840e: mov word ptr [eax + 2], di */
  W16((uint32_t)(eax + 0x2u), (edi & 0xffffu));
/* 8a8412: mov word ptr [eax + 4], bx */
  W16((uint32_t)(eax + 0x4u), (ebx & 0xffffu));
/* 8a8416: mov word ptr [eax + 6], dx */
  W16((uint32_t)(eax + 0x6u), (edx & 0xffffu));
/* 8a841a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8a841b: jmp 0x8a83d0 */
  goto L_8a83d0;
L_8a841d: /* 8a841d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8a8420: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a8423: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a8425: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a8426: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a8427: mov dword ptr [eax + 0x110], 7 */
  W32((uint32_t)(eax + 0x110u), 0x7u);
/* 8a8431: mov dword ptr [eax + 0x114], 1 */
  W32((uint32_t)(eax + 0x114u), 0x1u);
/* 8a843b: call 0x6c50e7 */
  esp -= 4; W32(esp, 0x8a8440u); SPILL(); f_6c50e7(); if (g_unwind) return; RELOAD();
/* 8a8440: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a8443: /* 8a8443: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a8446: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a8447: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a8448: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a844f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a8450: mov esp, ebp */
  esp = ebp;
/* 8a8452: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a8453: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_8a838d(void) {
  LOAD_REGS();
L_8a838d: /* 8a838d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8a8390: /* 8a8390: cmp eax, dword ptr [esi + 0x1a4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1a4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a8396: jge 0x8a83b1 */
  if ((sf == of)) goto L_8a83b1;
L_8a8398: /* 8a8398: mov ecx, dword ptr [esi + 0x1a0] */
  ecx = R32((uint32_t)(esi + 0x1a0u));
/* 8a839e: mov ebx, dword ptr [ecx + eax*8] */
  ebx = R32((uint32_t)(ecx + eax*8));
/* 8a83a1: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8a83a3: mov dword ptr [edx + eax*8], ebx */
  W32((uint32_t)(edx + eax*8), ebx);
/* 8a83a6: mov ecx, dword ptr [ecx + eax*8 + 4] */
  ecx = R32((uint32_t)(ecx + eax*8 + 0x4u));
/* 8a83aa: mov dword ptr [edx + eax*8 + 4], ecx */
  W32((uint32_t)(edx + eax*8 + 0x4u), ecx);
/* 8a83ae: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a83af: jmp 0x8a8390 */
  goto L_8a8390;
L_8a83b1: /* 8a83b1: mov eax, dword ptr [esi + 0x18c] */
  eax = R32((uint32_t)(esi + 0x18cu));
/* 8a83b7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8a83ba: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a83bc: add ecx, 0xe0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a83c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a83c3: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a83c9u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a83c9: xor ecx, ecx */
  ecx = 0;
/* 8a83cb: jmp 0x8a83d0 */
  goto L_8a83d0;
L_8a83d0: /* 8a83d0: cmp ecx, dword ptr [esi + 0x18c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x18cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a83d6: jge 0x8a841d */
  if ((sf == of)) goto L_8a841d;
L_8a83d8: /* 8a83d8: mov eax, dword ptr [esi + 0x188] */
  eax = R32((uint32_t)(esi + 0x188u));
/* 8a83de: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 8a83e1: mov di, word ptr [eax + edx*4 + 2] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + edx*4 + 0x2u))) & 0xffffu);
/* 8a83e6: mov bx, word ptr [eax + edx*4 + 4] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + edx*4 + 0x4u))) & 0xffffu);
/* 8a83eb: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 8a83ee: mov dx, word ptr [eax] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 8a83f1: movzx ax, byte ptr [eax + 6] */
  eax = (eax & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(eax + 0x6u)))) & 0xffffu);
/* 8a83f6: mov word ptr [ebp - 0x1e], ax */
  W16((uint32_t)(ebp + 0xffffffe2u), (eax & 0xffffu));
/* 8a83fa: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8a83fd: add eax, 0xe0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a8402: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8a8404: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 8a8407: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 8a840a: mov dx, word ptr [ebp - 0x1e] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffffe2u))) & 0xffffu);
/* 8a840e: mov word ptr [eax + 2], di */
  W16((uint32_t)(eax + 0x2u), (edi & 0xffffu));
/* 8a8412: mov word ptr [eax + 4], bx */
  W16((uint32_t)(eax + 0x4u), (ebx & 0xffffu));
/* 8a8416: mov word ptr [eax + 6], dx */
  W16((uint32_t)(eax + 0x6u), (edx & 0xffffu));
/* 8a841a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8a841b: jmp 0x8a83d0 */
  goto L_8a83d0;
L_8a841d: /* 8a841d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8a8420: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a8423: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a8425: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a8426: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a8427: mov dword ptr [eax + 0x110], 7 */
  W32((uint32_t)(eax + 0x110u), 0x7u);
/* 8a8431: mov dword ptr [eax + 0x114], 1 */
  W32((uint32_t)(eax + 0x114u), 0x1u);
/* 8a843b: call 0x6c50e7 */
  esp -= 4; W32(esp, 0x8a8440u); SPILL(); f_6c50e7(); if (g_unwind) return; RELOAD();
/* 8a8440: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a8443: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a8446: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a8447: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a8448: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a844f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a8450: mov esp, ebp */
  esp = ebp;
/* 8a8452: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a8453: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_8a83cd(void) {
  LOAD_REGS();
L_8a83cd: /* 8a83cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8a83d0: /* 8a83d0: cmp ecx, dword ptr [esi + 0x18c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x18cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a83d6: jge 0x8a841d */
  if ((sf == of)) goto L_8a841d;
L_8a83d8: /* 8a83d8: mov eax, dword ptr [esi + 0x188] */
  eax = R32((uint32_t)(esi + 0x188u));
/* 8a83de: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 8a83e1: mov di, word ptr [eax + edx*4 + 2] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + edx*4 + 0x2u))) & 0xffffu);
/* 8a83e6: mov bx, word ptr [eax + edx*4 + 4] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + edx*4 + 0x4u))) & 0xffffu);
/* 8a83eb: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 8a83ee: mov dx, word ptr [eax] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 8a83f1: movzx ax, byte ptr [eax + 6] */
  eax = (eax & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(eax + 0x6u)))) & 0xffffu);
/* 8a83f6: mov word ptr [ebp - 0x1e], ax */
  W16((uint32_t)(ebp + 0xffffffe2u), (eax & 0xffffu));
/* 8a83fa: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8a83fd: add eax, 0xe0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a8402: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8a8404: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 8a8407: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 8a840a: mov dx, word ptr [ebp - 0x1e] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffffe2u))) & 0xffffu);
/* 8a840e: mov word ptr [eax + 2], di */
  W16((uint32_t)(eax + 0x2u), (edi & 0xffffu));
/* 8a8412: mov word ptr [eax + 4], bx */
  W16((uint32_t)(eax + 0x4u), (ebx & 0xffffu));
/* 8a8416: mov word ptr [eax + 6], dx */
  W16((uint32_t)(eax + 0x6u), (edx & 0xffffu));
/* 8a841a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8a841b: jmp 0x8a83d0 */
  goto L_8a83d0;
L_8a841d: /* 8a841d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8a8420: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a8423: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a8425: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a8426: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a8427: mov dword ptr [eax + 0x110], 7 */
  W32((uint32_t)(eax + 0x110u), 0x7u);
/* 8a8431: mov dword ptr [eax + 0x114], 1 */
  W32((uint32_t)(eax + 0x114u), 0x1u);
/* 8a843b: call 0x6c50e7 */
  esp -= 4; W32(esp, 0x8a8440u); SPILL(); f_6c50e7(); if (g_unwind) return; RELOAD();
/* 8a8440: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a8443: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a8446: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a8447: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a8448: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a844f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a8450: mov esp, ebp */
  esp = ebp;
/* 8a8452: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a8453: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_8a8456(void) {
  LOAD_REGS();
L_8a8456: /* 8a8456: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8a8459: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8a845e: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 8a8461: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a8462: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8a8465: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a846au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8a846a(); return;
}

void f_8a846a(void) {
  LOAD_REGS();
L_8a846a: /* 8a846a: push 0xa1b038 */
  { uint32_t v = 0xa1b038u; esp -= 4; W32(esp, v); }
/* 8a846f: push 0xae9034 */
  { uint32_t v = 0xae9034u; esp -= 4; W32(esp, v); }
/* 8a8474: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8a847au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8a847a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a847d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a847f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a8481: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a8486u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8a8486: guest_badaddr(0x8a8486); return;
}

void f_8a8560(void) {
  LOAD_REGS();
L_8a8560: /* 8a8560: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a8561: mov esi, ecx */
  esi = ecx;
/* 8a8563: call 0x6c3f6c */
  esp -= 4; W32(esp, 0x8a8568u); SPILL(); f_6c3f6c(); if (g_unwind) return; RELOAD();
/* 8a8568: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8a856d: je 0x8a857c */
  if (zf) goto L_8a857c;
L_8a856f: /* 8a856f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 8a8574: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8a8576: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8a8578: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a8579: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8a857cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8a857c: /* 8a857c: mov eax, esi */
  eax = esi;
/* 8a857e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a857f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a85a0(void) {
  LOAD_REGS();
L_8a85a0: /* 8a85a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a85a1: mov esi, ecx */
  esi = ecx;
/* 8a85a3: call 0x6cc45a */
  esp -= 4; W32(esp, 0x8a85a8u); SPILL(); f_6cc45a(); if (g_unwind) return; RELOAD();
/* 8a85a8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8a85ad: je 0x8a85bc */
  if (zf) goto L_8a85bc;
L_8a85af: /* 8a85af: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 8a85b4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8a85b6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8a85b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a85b9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8a85bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8a85bc: /* 8a85bc: mov eax, esi */
  eax = esi;
/* 8a85be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a85bf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8a85e0(void) {
  LOAD_REGS();
L_8a85e0: /* 8a85e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a85e1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 8a85e5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a85e7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a85e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a85e9: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 8a85ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a85f0: mov ebp, ecx */
  ebp = ecx;
/* 8a85f2: jge 0x8a8608 */
  if ((sf == of)) goto L_8a8608;
L_8a85f4: /* 8a85f4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 8a85f9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8a85fe: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 8a8603: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8a8605u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a8605: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a8608: /* 8a8608: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a860b: jle 0x8a8621 */
  if ((zf || sf != of)) goto L_8a8621;
L_8a860d: /* 8a860d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8a8612: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8a8617: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8a861c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8a861eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a861e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a8621: /* 8a8621: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 8a8625: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 8a8628: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a862b: jle 0x8a8641 */
  if ((zf || sf != of)) goto L_8a8641;
L_8a862d: /* 8a862d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8a8632: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8a8637: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8a863c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8a863eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a863e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a8641: /* 8a8641: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a8643: jge 0x8a8660 */
  if ((sf == of)) goto L_8a8660;
L_8a8645: /* 8a8645: lea esi, [ebx + ebx*4] */
  esi = (uint32_t)(ebx + ebx*4);
/* 8a8648: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8a864b: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 8a864d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8a8650: /* 8a8650: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 8a8653: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a8655: call 0x6c3f6c */
  esp -= 4; W32(esp, 0x8a865au); SPILL(); f_6c3f6c(); if (g_unwind) return; RELOAD();
/* 8a865a: add esi, 0x14 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8a865d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 8a865e: jne 0x8a8650 */
  if (!zf) goto L_8a8650;
L_8a8660: /* 8a8660: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 8a8664: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8a8666: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a8667: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a8668: mov ecx, ebp */
  ecx = ebp;
/* 8a866a: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8a8670u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8a8670: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a8671: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a8672: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a8673: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a8674: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8a86b0(void) {
  LOAD_REGS();
L_8a86b0: /* 8a86b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a86b1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 8a86b5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a86b7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a86b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a86b9: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 8a86bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a86c0: mov ebp, ecx */
  ebp = ecx;
/* 8a86c2: jge 0x8a86d8 */
  if ((sf == of)) goto L_8a86d8;
L_8a86c4: /* 8a86c4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 8a86c9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8a86ce: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 8a86d3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8a86d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a86d5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a86d8: /* 8a86d8: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a86db: jle 0x8a86f1 */
  if ((zf || sf != of)) goto L_8a86f1;
L_8a86dd: /* 8a86dd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8a86e2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8a86e7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8a86ec: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8a86eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a86ee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a86f1: /* 8a86f1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 8a86f5: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 8a86f8: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a86fb: jle 0x8a8711 */
  if ((zf || sf != of)) goto L_8a8711;
L_8a86fd: /* 8a86fd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8a8702: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8a8707: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8a870c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8a870eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a870e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a8711: /* 8a8711: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a8713: jge 0x8a8730 */
  if ((sf == of)) goto L_8a8730;
L_8a8715: /* 8a8715: lea esi, [ebx + ebx*2] */
  esi = (uint32_t)(ebx + ebx*2);
/* 8a8718: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8a871b: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 8a871d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8a8720: /* 8a8720: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 8a8723: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a8725: call 0x6cc45a */
  esp -= 4; W32(esp, 0x8a872au); SPILL(); f_6cc45a(); if (g_unwind) return; RELOAD();
/* 8a872a: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8a872d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 8a872e: jne 0x8a8720 */
  if (!zf) goto L_8a8720;
L_8a8730: /* 8a8730: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 8a8734: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a8736: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a8737: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a8738: mov ecx, ebp */
  ecx = ebp;
/* 8a873a: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8a8740u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8a8740: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a8741: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a8742: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a8743: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a8744: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8a8780(void) {
  LOAD_REGS();
L_8a8780: /* 8a8780: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a8781: mov ebp, esp */
  ebp = esp;
/* 8a8783: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a8785: push 0x9d6370 */
  { uint32_t v = 0x9d6370u; esp -= 4; W32(esp, v); }
/* 8a878a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a8790: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a8791: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a8798: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a879b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a879c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8a879f: cmp ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a87a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a87a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a87a4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8a87a7: mov esi, ecx */
  esi = ecx;
/* 8a87a9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8a87b0: jg 0x8a8863 */
  if ((!zf && sf == of)) goto L_8a8863;
L_8a87b6: /* 8a87b6: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a87b8: jl 0x8a8863 */
  if ((sf != of)) goto L_8a8863;
L_8a87be: /* 8a87be: mov eax, dword ptr [esi + 0x134] */
  eax = R32((uint32_t)(esi + 0x134u));
/* 8a87c4: lea ecx, [esi + 0x134] */
  ecx = (uint32_t)(esi + 0x134u);
/* 8a87ca: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8a87ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a87cc: mov edx, dword ptr [esi + 0x14c] */
  edx = R32((uint32_t)(esi + 0x14cu));
/* 8a87d2: lea ecx, [esi + 0x14c] */
  ecx = (uint32_t)(esi + 0x14cu);
/* 8a87d8: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8a87dau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a87da: mov eax, dword ptr [esi + 0x164] */
  eax = R32((uint32_t)(esi + 0x164u));
/* 8a87e0: lea ecx, [esi + 0x164] */
  ecx = (uint32_t)(esi + 0x164u);
/* 8a87e6: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8a87e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a87e8: mov edx, dword ptr [esi + 0x17c] */
  edx = R32((uint32_t)(esi + 0x17cu));
/* 8a87ee: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 8a87f4: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8a87f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a87f6: mov eax, dword ptr [esi + 0x194] */
  eax = R32((uint32_t)(esi + 0x194u));
/* 8a87fc: lea ecx, [esi + 0x194] */
  ecx = (uint32_t)(esi + 0x194u);
/* 8a8802: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8a8804u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a8804: mov edx, dword ptr [esi + 0x1ac] */
  edx = R32((uint32_t)(esi + 0x1acu));
/* 8a880a: lea ecx, [esi + 0x1ac] */
  ecx = (uint32_t)(esi + 0x1acu);
/* 8a8810: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8a8812u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a8812: mov eax, dword ptr [esi + 0x1c4] */
  eax = R32((uint32_t)(esi + 0x1c4u));
/* 8a8818: lea ecx, [esi + 0x1c4] */
  ecx = (uint32_t)(esi + 0x1c4u);
/* 8a881e: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8a8820u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a8820: lea ecx, [esi + 0x158] */
  ecx = (uint32_t)(esi + 0x158u);
/* 8a8826: xor eax, eax */
  eax = 0;
L_8a8828: /* 8a8828: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a882b: jge 0x8a8830 */
  if ((sf == of)) goto L_8a8830;
L_8a882d: /* 8a882d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a882e: jmp 0x8a8828 */
  goto L_8a8828;
L_8a8830: /* 8a8830: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a8832: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a8834: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a883au); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a883a: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8a883d: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8a8843: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8a8845: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8a8848: jp 0x8a8876 */
  if (pf) goto L_8a8876;
L_8a884a: /* 8a884a: mov eax, dword ptr [esi + 0x1f0] */
  eax = R32((uint32_t)(esi + 0x1f0u));
/* 8a8850: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8a8851: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a8853: jne 0x8a8863 */
  if (!zf) goto L_8a8863;
L_8a8855: /* 8a8855: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a8857: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a8858: lea ecx, [esi + 0x1ec] */
  ecx = (uint32_t)(esi + 0x1ecu);
/* 8a885e: call 0x6ca5f1 */
  esp -= 4; W32(esp, 0x8a8863u); SPILL(); f_6ca5f1(); if (g_unwind) return; RELOAD();
L_8a8863: /* 8a8863: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a8866: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a886d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a886e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a886f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a8870: mov esp, ebp */
  esp = ebp;
/* 8a8872: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a8873: ret 0x14 */
  esp += 24; SPILL(); return;
L_8a8876: /* 8a8876: cmp ebx, dword ptr [esi + 0x1f0] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1f0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a887c: jl 0x8a88a6 */
  if ((sf != of)) goto L_8a88a6;
L_8a887e: /* 8a887e: push 0x11c */
  { uint32_t v = 0x11cu; esp -= 4; W32(esp, v); }
/* 8a8883: lea edi, [esi + 0x1ec] */
  edi = (uint32_t)(esi + 0x1ecu);
/* 8a8889: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a888b: mov ecx, edi */
  ecx = edi;
/* 8a888d: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a8893u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a8893: imul eax, eax, 0x11c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x11cu);
  eax = (uint32_t)r;
  }
/* 8a8899: add eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8a889b: je 0x8a8876 */
  if (zf) goto L_8a8876;
L_8a889d: /* 8a889d: mov ecx, eax */
  ecx = eax;
/* 8a889f: call 0x6cb72b */
  esp -= 4; W32(esp, 0x8a88a4u); SPILL(); f_6cb72b(); if (g_unwind) return; RELOAD();
/* 8a88a4: jmp 0x8a8876 */
  goto L_8a8876;
L_8a88a6: /* 8a88a6: mov edx, dword ptr [esi + 0x1ec] */
  edx = R32((uint32_t)(esi + 0x1ecu));
/* 8a88ac: imul ebx, ebx, 0x11c */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x11cu);
  ebx = (uint32_t)r;
  }
/* 8a88b2: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8a88b4: mov edi, ebx */
  edi = ebx;
/* 8a88b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a88b7: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 8a88ba: call 0x6cc9f5 */
  esp -= 4; W32(esp, 0x8a88bfu); SPILL(); f_6cc9f5(); if (g_unwind) return; RELOAD();
/* 8a88bf: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8a88c2: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8a88c5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a88c8: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 8a88ce: mov dword ptr [edi + 0x104], ecx */
  W32((uint32_t)(edi + 0x104u), ecx);
/* 8a88d4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8a88d6: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8a88d9: jnp 0x8a8a4b */
  if (!pf) goto L_8a8a4b;
L_8a88df: /* 8a88df: mov eax, dword ptr [esi + 0x1bc] */
  eax = R32((uint32_t)(esi + 0x1bcu));
/* 8a88e5: xor ebx, ebx */
  ebx = 0;
/* 8a88e7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a88e9: je 0x8a8abb */
  if (zf) goto L_8a8abb;
L_8a88ef: /* 8a88ef: mov edi, dword ptr [esi + 0x144] */
  edi = R32((uint32_t)(esi + 0x144u));
/* 8a88f5: mov dword ptr [ebp + 0x10], edi */
  W32((uint32_t)(ebp + 0x10u), edi);
/* 8a88f8: fild dword ptr [ebp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8a88fb: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 8a88fe: fild dword ptr [esi + 0xe0] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0xe0u)); FPUSH(v); }
/* 8a8904: fst dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0);
/* 8a8907: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8a8909: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8a890b: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8a890e: jne 0x8a891a */
  if (!zf) goto L_8a891a;
L_8a8910: /* 8a8910: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8a8913: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8a8915: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 8a8918: jmp 0x8a891d */
  goto L_8a891d;
L_8a891a: /* 8a891a: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
L_8a891d: /* 8a891d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8a8920: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a8921: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x8a8927u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 8a8927: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a892a: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a892c: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8a892f: jle 0x8a8934 */
  if ((zf || sf != of)) goto L_8a8934;
L_8a8931: /* 8a8931: mov dword ptr [ebp + 0xc], edi */
  W32((uint32_t)(ebp + 0xcu), edi);
L_8a8934: /* 8a8934: xor edi, edi */
  edi = 0;
L_8a8936: /* 8a8936: cmp edi, dword ptr [esi + 0x18c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x18cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a893c: mov dword ptr [ebp + 0x10], edi */
  W32((uint32_t)(ebp + 0x10u), edi);
/* 8a893f: jge 0x8a8abb */
  if ((sf == of)) goto L_8a8abb;
L_8a8945: /* 8a8945: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a8946: lea ecx, [esi + 0x1d0] */
  ecx = (uint32_t)(esi + 0x1d0u);
/* 8a894c: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8a8952u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8a8952: movzx ecx, word ptr [eax] */
  ecx = (uint32_t)(R16((uint32_t)(eax)));
/* 8a8955: cmp ecx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a8958: jg 0x8a8a45 */
  if ((!zf && sf == of)) goto L_8a8a45;
L_8a895e: /* 8a895e: mov eax, dword ptr [esi + 0x188] */
  eax = R32((uint32_t)(esi + 0x188u));
/* 8a8964: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 8a8967: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8a896a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8a896c: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8a896f: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8a8972: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 8a8975: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8a8978: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 8a897b: mov word ptr [ebp - 0x20], bx */
  W16((uint32_t)(ebp + 0xffffffe0u), (ebx & 0xffffu));
/* 8a897f: mov word ptr [ebp - 0x22], bx */
  W16((uint32_t)(ebp + 0xffffffdeu), (ebx & 0xffffu));
/* 8a8983: mov word ptr [ebp - 0x24], bx */
  W16((uint32_t)(ebp + 0xffffffdcu), (ebx & 0xffffu));
L_8a8987: /* 8a8987: cmp ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a898a: jge 0x8a89f6 */
  if ((sf == of)) goto L_8a89f6;
L_8a898c: /* 8a898c: movzx eax, word ptr [ebp + ebx*2 - 0x30] */
  eax = (uint32_t)(R16((uint32_t)(ebp + ebx*2 + 0xffffffd0u)));
/* 8a8991: mov ecx, dword ptr [esi + 0x170] */
  ecx = R32((uint32_t)(esi + 0x170u));
/* 8a8997: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8a899a: movzx ecx, word ptr [ecx + edx*4] */
  ecx = (uint32_t)(R16((uint32_t)(ecx + edx*4)));
/* 8a899e: mov edi, edi */
  edi = edi;
L_8a89a0: /* 8a89a0: cmp ecx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a89a3: jl 0x8a89ee */
  if ((sf != of)) goto L_8a89ee;
L_8a89a5: /* 8a89a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a89a7: je 0x8a89ee */
  if (zf) goto L_8a89ee;
L_8a89a9: /* 8a89a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a89aa: lea ecx, [esi + 0x1b8] */
  ecx = (uint32_t)(esi + 0x1b8u);
/* 8a89b0: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8a89b6u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8a89b6: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 8a89b9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a89bb: jl 0x8a89c5 */
  if ((sf != of)) goto L_8a89c5;
L_8a89bd: /* 8a89bd: cmp eax, dword ptr [esi + 0x174] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x174u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a89c3: jl 0x8a89df */
  if ((sf != of)) goto L_8a89df;
L_8a89c5: /* 8a89c5: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8a89cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a89cc: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8a89ce: push 0xae8ff4 */
  { uint32_t v = 0xae8ff4u; esp -= 4; W32(esp, v); }
/* 8a89d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a89d4: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8a89dau); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8a89da: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a89dd: xor eax, eax */
  eax = 0;
L_8a89df: /* 8a89df: mov edx, dword ptr [esi + 0x170] */
  edx = R32((uint32_t)(esi + 0x170u));
/* 8a89e5: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8a89e8: movzx ecx, word ptr [edx + ecx*4] */
  ecx = (uint32_t)(R16((uint32_t)(edx + ecx*4)));
/* 8a89ec: jmp 0x8a89a0 */
  goto L_8a89a0;
L_8a89ee: /* 8a89ee: mov word ptr [ebp + ebx*2 - 0x24], ax */
  W16((uint32_t)(ebp + ebx*2 + 0xffffffdcu), (eax & 0xffffu));
/* 8a89f3: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8a89f4: jmp 0x8a8987 */
  goto L_8a8987;
L_8a89f6: /* 8a89f6: mov ax, word ptr [ebp - 0x24] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffffdcu))) & 0xffffu);
/* 8a89fa: cmp ax, word ptr [ebp - 0x22] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebp + 0xffffffdeu)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 8a89fe: je 0x8a8a43 */
  if (zf) goto L_8a8a43;
L_8a8a00: /* 8a8a00: cmp ax, word ptr [ebp - 0x20] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebp + 0xffffffe0u)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 8a8a04: je 0x8a8a43 */
  if (zf) goto L_8a8a43;
L_8a8a06: /* 8a8a06: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8a8a09: movzx bx, byte ptr [ebp - 0x2a] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(ebp + 0xffffffd6u)))) & 0xffffu);
/* 8a8a0e: add edi, 0xe0 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8a8a14: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a8a16: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a8a18: mov ecx, edi */
  ecx = edi;
/* 8a8a1a: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a8a20u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a8a20: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8a8a22: mov dx, word ptr [ebp - 0x24] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffffdcu))) & 0xffffu);
/* 8a8a26: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 8a8a29: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 8a8a2c: mov cx, word ptr [ebp - 0x22] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffffdeu))) & 0xffffu);
/* 8a8a30: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 8a8a33: mov dx, word ptr [ebp - 0x20] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffffe0u))) & 0xffffu);
/* 8a8a37: mov word ptr [eax + 2], cx */
  W16((uint32_t)(eax + 0x2u), (ecx & 0xffffu));
/* 8a8a3b: mov word ptr [eax + 4], dx */
  W16((uint32_t)(eax + 0x4u), (edx & 0xffffu));
/* 8a8a3f: mov word ptr [eax + 6], bx */
  W16((uint32_t)(eax + 0x6u), (ebx & 0xffffu));
L_8a8a43: /* 8a8a43: xor ebx, ebx */
  ebx = 0;
L_8a8a45: /* 8a8a45: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8a8a46: jmp 0x8a8936 */
  goto L_8a8936;
L_8a8a4b: /* 8a8a4b: mov eax, dword ptr [esi + 0x18c] */
  eax = R32((uint32_t)(esi + 0x18cu));
/* 8a8a51: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a8a53: lea ecx, [edi + 0xe0] */
  ecx = (uint32_t)(edi + 0xe0u);
/* 8a8a59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a8a5a: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a8a60u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a8a60: xor eax, eax */
  eax = 0;
L_8a8a62: /* 8a8a62: cmp eax, dword ptr [esi + 0x18c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x18cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a8a68: jge 0x8a8abb */
  if ((sf == of)) goto L_8a8abb;
L_8a8a6a: /* 8a8a6a: mov edx, dword ptr [esi + 0x188] */
  edx = R32((uint32_t)(esi + 0x188u));
/* 8a8a70: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8a8a73: movzx cx, byte ptr [edx + ecx*4 + 6] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(edx + ecx*4 + 0x6u)))) & 0xffffu);
/* 8a8a79: mov edx, dword ptr [edi + 0xe0] */
  edx = R32((uint32_t)(edi + 0xe0u));
/* 8a8a7f: mov word ptr [edx + eax*8 + 6], cx */
  W16((uint32_t)(edx + eax*8 + 0x6u), (ecx & 0xffffu));
/* 8a8a84: xor ecx, ecx */
  ecx = 0;
L_8a8a86: /* 8a8a86: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a8a89: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 8a8a8c: jge 0x8a8ab8 */
  if ((sf == of)) goto L_8a8ab8;
L_8a8a8e: /* 8a8a8e: mov ebx, dword ptr [esi + 0x188] */
  ebx = R32((uint32_t)(esi + 0x188u));
/* 8a8a94: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8a8a97: lea edx, [ecx + edx*2] */
  edx = (uint32_t)(ecx + edx*2);
/* 8a8a9a: mov dx, word ptr [ebx + edx*2] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + edx*2))) & 0xffffu);
/* 8a8a9e: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8a8aa1: mov ebx, ecx */
  ebx = ecx;
/* 8a8aa3: lea ecx, [edi + 0xe0] */
  ecx = (uint32_t)(edi + 0xe0u);
/* 8a8aa9: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8a8aab: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8a8aae: mov word ptr [ecx + ebx*2], dx */
  W16((uint32_t)(ecx + ebx*2), (edx & 0xffffu));
/* 8a8ab2: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8a8ab5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8a8ab6: jmp 0x8a8a86 */
  goto L_8a8a86;
L_8a8ab8: /* 8a8ab8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a8ab9: jmp 0x8a8a62 */
  goto L_8a8a62;
L_8a8abb: /* 8a8abb: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8a8abe: mov eax, dword ptr [esi + 0x174] */
  eax = R32((uint32_t)(esi + 0x174u));
/* 8a8ac4: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a8ac6: add ebx, 0xc8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8a8acc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a8acd: mov ecx, ebx */
  ecx = ebx;
/* 8a8acf: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a8ad5u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a8ad5: xor edi, edi */
  edi = 0;
L_8a8ad7: /* 8a8ad7: cmp edi, dword ptr [esi + 0x174] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x174u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a8add: jge 0x8a8b06 */
  if ((sf == of)) goto L_8a8b06;
L_8a8adf: /* 8a8adf: mov eax, dword ptr [esi + 0x170] */
  eax = R32((uint32_t)(esi + 0x170u));
/* 8a8ae5: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8a8ae7: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 8a8aea: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8a8aed: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a8aef: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a8af1: mov dx, word ptr [eax] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 8a8af4: mov word ptr [ecx], dx */
  W16((uint32_t)(ecx), (edx & 0xffffu));
/* 8a8af7: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8a8afa: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8a8afd: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8a8b00: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8a8b03: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8a8b04: jmp 0x8a8ad7 */
  goto L_8a8ad7;
L_8a8b06: /* 8a8b06: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8a8b09: mov eax, dword ptr [esi + 0x144] */
  eax = R32((uint32_t)(esi + 0x144u));
/* 8a8b0f: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a8b11: add edi, 0xf8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xf8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8a8b17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a8b18: mov ecx, edi */
  ecx = edi;
/* 8a8b1a: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a8b20u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a8b20: xor ecx, ecx */
  ecx = 0;
L_8a8b22: /* 8a8b22: cmp ecx, dword ptr [esi + 0x144] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x144u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a8b28: jge 0x8a8b4f */
  if ((sf == of)) goto L_8a8b4f;
L_8a8b2a: /* 8a8b2a: mov edx, dword ptr [esi + 0x140] */
  edx = R32((uint32_t)(esi + 0x140u));
/* 8a8b30: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 8a8b32: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 8a8b35: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8a8b38: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8a8b3a: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8a8b3c: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8a8b3e: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 8a8b40: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8a8b43: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 8a8b46: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8a8b49: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 8a8b4c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8a8b4d: jmp 0x8a8b22 */
  goto L_8a8b22;
L_8a8b4f: /* 8a8b4f: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8a8b52: mov eax, dword ptr [esi + 0x1a4] */
  eax = R32((uint32_t)(esi + 0x1a4u));
/* 8a8b58: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a8b5a: add edi, 0xb0 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xb0u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8a8b60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a8b61: mov ecx, edi */
  ecx = edi;
/* 8a8b63: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a8b69u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a8b69: xor eax, eax */
  eax = 0;
/* 8a8b6b: jmp 0x8a8b70 */
  goto L_8a8b70;
L_8a8b70: /* 8a8b70: cmp eax, dword ptr [esi + 0x1a4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1a4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a8b76: jge 0x8a8b91 */
  if ((sf == of)) goto L_8a8b91;
L_8a8b78: /* 8a8b78: mov ecx, dword ptr [esi + 0x1a0] */
  ecx = R32((uint32_t)(esi + 0x1a0u));
/* 8a8b7e: mov ebx, dword ptr [ecx + eax*8] */
  ebx = R32((uint32_t)(ecx + eax*8));
/* 8a8b81: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8a8b83: mov dword ptr [edx + eax*8], ebx */
  W32((uint32_t)(edx + eax*8), ebx);
/* 8a8b86: mov ecx, dword ptr [ecx + eax*8 + 4] */
  ecx = R32((uint32_t)(ecx + eax*8 + 0x4u));
/* 8a8b8a: mov dword ptr [edx + eax*8 + 4], ecx */
  W32((uint32_t)(edx + eax*8 + 0x4u), ecx);
/* 8a8b8e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a8b8f: jmp 0x8a8b70 */
  goto L_8a8b70;
L_8a8b91: /* 8a8b91: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8a8b94: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a8b97: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8a8b9a: mov dword ptr [ecx + 0x108], 0x3ca3d70a */
  W32((uint32_t)(ecx + 0x108u), 0x3ca3d70au);
/* 8a8ba4: jge 0x8a8bad */
  if ((sf == of)) goto L_8a8bad;
L_8a8ba6: /* 8a8ba6: mov eax, 1 */
  eax = 0x1u;
/* 8a8bab: jmp 0x8a8bb7 */
  goto L_8a8bb7;
L_8a8bad: /* 8a8bad: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a8bb0: jle 0x8a8bb7 */
  if ((zf || sf != of)) goto L_8a8bb7;
L_8a8bb2: /* 8a8bb2: mov eax, 7 */
  eax = 0x7u;
L_8a8bb7: /* 8a8bb7: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 8a8bba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a8bbb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a8bbc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a8bbd: mov dword ptr [ecx + 0x110], eax */
  W32((uint32_t)(ecx + 0x110u), eax);
/* 8a8bc3: call 0x6c50e7 */
  esp -= 4; W32(esp, 0x8a8bc8u); SPILL(); f_6c50e7(); if (g_unwind) return; RELOAD();
/* 8a8bc8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a8bcb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a8bce: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a8bcf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a8bd0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a8bd7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a8bd8: mov esp, ebp */
  esp = ebp;
/* 8a8bda: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a8bdb: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_8a8b6d(void) {
  LOAD_REGS();
L_8a8b6d: /* 8a8b6d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8a8b70: /* 8a8b70: cmp eax, dword ptr [esi + 0x1a4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1a4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a8b76: jge 0x8a8b91 */
  if ((sf == of)) goto L_8a8b91;
L_8a8b78: /* 8a8b78: mov ecx, dword ptr [esi + 0x1a0] */
  ecx = R32((uint32_t)(esi + 0x1a0u));
/* 8a8b7e: mov ebx, dword ptr [ecx + eax*8] */
  ebx = R32((uint32_t)(ecx + eax*8));
/* 8a8b81: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8a8b83: mov dword ptr [edx + eax*8], ebx */
  W32((uint32_t)(edx + eax*8), ebx);
/* 8a8b86: mov ecx, dword ptr [ecx + eax*8 + 4] */
  ecx = R32((uint32_t)(ecx + eax*8 + 0x4u));
/* 8a8b8a: mov dword ptr [edx + eax*8 + 4], ecx */
  W32((uint32_t)(edx + eax*8 + 0x4u), ecx);
/* 8a8b8e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a8b8f: jmp 0x8a8b70 */
  goto L_8a8b70;
L_8a8b91: /* 8a8b91: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8a8b94: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a8b97: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8a8b9a: mov dword ptr [ecx + 0x108], 0x3ca3d70a */
  W32((uint32_t)(ecx + 0x108u), 0x3ca3d70au);
/* 8a8ba4: jge 0x8a8bad */
  if ((sf == of)) goto L_8a8bad;
L_8a8ba6: /* 8a8ba6: mov eax, 1 */
  eax = 0x1u;
/* 8a8bab: jmp 0x8a8bb7 */
  goto L_8a8bb7;
L_8a8bad: /* 8a8bad: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a8bb0: jle 0x8a8bb7 */
  if ((zf || sf != of)) goto L_8a8bb7;
L_8a8bb2: /* 8a8bb2: mov eax, 7 */
  eax = 0x7u;
L_8a8bb7: /* 8a8bb7: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 8a8bba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a8bbb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a8bbc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a8bbd: mov dword ptr [ecx + 0x110], eax */
  W32((uint32_t)(ecx + 0x110u), eax);
/* 8a8bc3: call 0x6c50e7 */
  esp -= 4; W32(esp, 0x8a8bc8u); SPILL(); f_6c50e7(); if (g_unwind) return; RELOAD();
/* 8a8bc8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a8bcb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a8bce: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a8bcf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a8bd0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a8bd7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a8bd8: mov esp, ebp */
  esp = ebp;
/* 8a8bda: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a8bdb: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_8a8bde(void) {
  LOAD_REGS();
L_8a8bde: /* 8a8bde: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8a8be1: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8a8be6: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8a8be9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a8bea: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8a8bed: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a8bf2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8a8bf2(); return;
}

void f_8a8bf2(void) {
  LOAD_REGS();
L_8a8bf2: /* 8a8bf2: push 0xa1b080 */
  { uint32_t v = 0xa1b080u; esp -= 4; W32(esp, v); }
/* 8a8bf7: push 0xae902c */
  { uint32_t v = 0xae902cu; esp -= 4; W32(esp, v); }
/* 8a8bfc: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8a8c02u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8a8c02: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a8c05: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a8c07: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a8c09: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8a8c0eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8a8c0e: guest_badaddr(0x8a8c0e); return;
}

void f_8a8d40(void) {
  LOAD_REGS();
L_8a8d40: /* 8a8d40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a8d42: push 0x9d6393 */
  { uint32_t v = 0x9d6393u; esp -= 4; W32(esp, v); }
/* 8a8d47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a8d4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a8d4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a8d55: sub esp, 0x98 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a8d5b: mov eax, dword ptr [esp + 0xa8] */
  eax = R32((uint32_t)(esp + 0xa8u));
/* 8a8d62: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a8d63: mov esi, dword ptr [esp + 0xb0] */
  esi = R32((uint32_t)(esp + 0xb0u));
/* 8a8d6a: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a8d6c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a8d6d: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 8a8d71: je 0x8a8f80 */
  if (zf) goto L_8a8f80;
L_8a8d77: /* 8a8d77: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a8d79: jl 0x8a8f80 */
  if ((sf != of)) goto L_8a8f80;
L_8a8d7f: /* 8a8d7f: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* 8a8d82: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a8d84: jge 0x8a8f80 */
  if ((sf == of)) goto L_8a8f80;
L_8a8d8a: /* 8a8d8a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a8d8c: jl 0x8a8f80 */
  if ((sf != of)) goto L_8a8f80;
L_8a8d92: /* 8a8d92: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a8d94: jge 0x8a8f80 */
  if ((sf == of)) goto L_8a8f80;
L_8a8d9a: /* 8a8d9a: cmp dword ptr [ecx + 0x48], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x48u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a8d9d: jne 0x8a8f80 */
  if (!zf) goto L_8a8f80;
L_8a8da3: /* 8a8da3: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8a8da5: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8a8da6: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 8a8da8: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8a8daa: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a8dad: jne 0x8a8f80 */
  if (!zf) goto L_8a8f80;
L_8a8db3: /* 8a8db3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a8db4: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 8a8db8: call 0x6c373d */
  esp -= 4; W32(esp, 0x8a8dbdu); SPILL(); f_6c373d(); if (g_unwind) return; RELOAD();
/* 8a8dbd: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 8a8dc1: mov dword ptr [esp + 0xac], 0 */
  W32((uint32_t)(esp + 0xacu), 0x0u);
/* 8a8dcc: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8a8dd0: mov ecx, 0x64 */
  ecx = 0x64u;
/* 8a8dd5: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 8a8dd9: xor eax, eax */
  eax = 0;
/* 8a8ddb: mov ebx, ecx */
  ebx = ecx;
/* 8a8ddd: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8a8de0: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8a8de3: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 8a8de5: mov ecx, ebx */
  ecx = ebx;
/* 8a8de7: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 8a8de9: mov ecx, dword ptr [esp + 0xb8] */
  ecx = R32((uint32_t)(esp + 0xb8u));
/* 8a8df0: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 8a8df4: imul ecx, ecx, 0x64 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x64u);
  ecx = (uint32_t)r;
  }
/* 8a8df7: add ecx, dword ptr [edx + 0x38] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x38u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a8dfa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a8dfb: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 8a8dff: call 0x6cb217 */
  esp -= 4; W32(esp, 0x8a8e04u); SPILL(); f_6cb217(); if (g_unwind) return; RELOAD();
/* 8a8e04: mov ecx, dword ptr [esp + 0xb8] */
  ecx = R32((uint32_t)(esp + 0xb8u));
/* 8a8e0b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 8a8e0f: imul ecx, ecx, 0x64 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x64u);
  ecx = (uint32_t)r;
  }
/* 8a8e12: add ecx, dword ptr [eax + 0x38] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x38u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a8e15: call 0x6c33c3 */
  esp -= 4; W32(esp, 0x8a8e1au); SPILL(); f_6c33c3(); if (g_unwind) return; RELOAD();
/* 8a8e1a: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 8a8e1e: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 8a8e21: mov edx, dword ptr [esp + 0xb4] */
  edx = R32((uint32_t)(esp + 0xb4u));
/* 8a8e28: mov ecx, dword ptr [esp + 0xb8] */
  ecx = R32((uint32_t)(esp + 0xb8u));
/* 8a8e2f: imul edx, edx, 0x64 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x64u);
  edx = (uint32_t)r;
  }
/* 8a8e32: imul ecx, ecx, 0x64 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x64u);
  ecx = (uint32_t)r;
  }
/* 8a8e35: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8a8e37: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a8e38: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a8e3a: call 0x6cb217 */
  esp -= 4; W32(esp, 0x8a8e3fu); SPILL(); f_6cb217(); if (g_unwind) return; RELOAD();
/* 8a8e3f: mov ecx, dword ptr [esp + 0xb4] */
  ecx = R32((uint32_t)(esp + 0xb4u));
/* 8a8e46: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 8a8e4a: imul ecx, ecx, 0x64 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x64u);
  ecx = (uint32_t)r;
  }
/* 8a8e4d: add ecx, dword ptr [eax + 0x38] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x38u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a8e50: call 0x6c33c3 */
  esp -= 4; W32(esp, 0x8a8e55u); SPILL(); f_6c33c3(); if (g_unwind) return; RELOAD();
/* 8a8e55: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 8a8e59: mov esi, dword ptr [edx + 0x38] */
  esi = R32((uint32_t)(edx + 0x38u));
/* 8a8e5c: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 8a8e60: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a8e61: mov ecx, dword ptr [esp + 0xb8] */
  ecx = R32((uint32_t)(esp + 0xb8u));
/* 8a8e68: imul ecx, ecx, 0x64 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x64u);
  ecx = (uint32_t)r;
  }
/* 8a8e6b: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a8e6d: call 0x6cb217 */
  esp -= 4; W32(esp, 0x8a8e72u); SPILL(); f_6cb217(); if (g_unwind) return; RELOAD();
/* 8a8e72: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 8a8e76: call 0x6c33c3 */
  esp -= 4; W32(esp, 0x8a8e7bu); SPILL(); f_6c33c3(); if (g_unwind) return; RELOAD();
/* 8a8e7b: mov eax, dword ptr [esp + 0xb8] */
  eax = R32((uint32_t)(esp + 0xb8u));
/* 8a8e82: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 8a8e86: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 8a8e89: add eax, dword ptr [ecx + 0x44] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x44u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a8e8c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a8e8d: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 8a8e91: call 0x6ca4c5 */
  esp -= 4; W32(esp, 0x8a8e96u); SPILL(); f_6ca4c5(); if (g_unwind) return; RELOAD();
/* 8a8e96: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 8a8e9a: mov byte ptr [esp + 0xac], 1 */
  W8((uint32_t)(esp + 0xacu), 0x1u);
/* 8a8ea2: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 8a8ea6: mov ecx, 0x2c */
  ecx = 0x2cu;
/* 8a8eab: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 8a8eaf: xor eax, eax */
  eax = 0;
/* 8a8eb1: mov ebx, ecx */
  ebx = ecx;
/* 8a8eb3: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8a8eb6: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8a8eb9: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 8a8ebb: mov ecx, ebx */
  ecx = ebx;
/* 8a8ebd: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 8a8ebf: mov eax, dword ptr [esp + 0xb8] */
  eax = R32((uint32_t)(esp + 0xb8u));
/* 8a8ec6: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 8a8eca: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 8a8ecd: add eax, dword ptr [ecx + 0x44] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x44u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a8ed0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a8ed1: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 8a8ed5: call 0x6c72b1 */
  esp -= 4; W32(esp, 0x8a8edau); SPILL(); f_6c72b1(); if (g_unwind) return; RELOAD();
/* 8a8eda: mov ecx, dword ptr [esp + 0xb8] */
  ecx = R32((uint32_t)(esp + 0xb8u));
/* 8a8ee1: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 8a8ee5: imul ecx, ecx, 0x2c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x2cu);
  ecx = (uint32_t)r;
  }
/* 8a8ee8: add ecx, dword ptr [edx + 0x44] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x44u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a8eeb: call 0x6c51c3 */
  esp -= 4; W32(esp, 0x8a8ef0u); SPILL(); f_6c51c3(); if (g_unwind) return; RELOAD();
/* 8a8ef0: mov ecx, dword ptr [esp + 0xb4] */
  ecx = R32((uint32_t)(esp + 0xb4u));
/* 8a8ef7: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 8a8efb: imul ecx, ecx, 0x2c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x2cu);
  ecx = (uint32_t)r;
  }
/* 8a8efe: mov eax, dword ptr [eax + 0x44] */
  eax = R32((uint32_t)(eax + 0x44u));
/* 8a8f01: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a8f03: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a8f04: mov ecx, dword ptr [esp + 0xbc] */
  ecx = R32((uint32_t)(esp + 0xbcu));
/* 8a8f0b: imul ecx, ecx, 0x2c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x2cu);
  ecx = (uint32_t)r;
  }
/* 8a8f0e: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a8f10: call 0x6c72b1 */
  esp -= 4; W32(esp, 0x8a8f15u); SPILL(); f_6c72b1(); if (g_unwind) return; RELOAD();
/* 8a8f15: mov ecx, dword ptr [esp + 0xb4] */
  ecx = R32((uint32_t)(esp + 0xb4u));
/* 8a8f1c: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 8a8f20: imul ecx, ecx, 0x2c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x2cu);
  ecx = (uint32_t)r;
  }
/* 8a8f23: add ecx, dword ptr [edx + 0x44] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x44u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a8f26: call 0x6c51c3 */
  esp -= 4; W32(esp, 0x8a8f2bu); SPILL(); f_6c51c3(); if (g_unwind) return; RELOAD();
/* 8a8f2b: mov ecx, dword ptr [esp + 0xb4] */
  ecx = R32((uint32_t)(esp + 0xb4u));
/* 8a8f32: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 8a8f36: imul ecx, ecx, 0x2c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x2cu);
  ecx = (uint32_t)r;
  }
/* 8a8f39: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 8a8f3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a8f3e: add ecx, dword ptr [edx + 0x44] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x44u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8a8f41: call 0x6c72b1 */
  esp -= 4; W32(esp, 0x8a8f46u); SPILL(); f_6c72b1(); if (g_unwind) return; RELOAD();
/* 8a8f46: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 8a8f4a: call 0x6c51c3 */
  esp -= 4; W32(esp, 0x8a8f4fu); SPILL(); f_6c51c3(); if (g_unwind) return; RELOAD();
/* 8a8f4f: mov esi, dword ptr [esp + 0xb8] */
  esi = R32((uint32_t)(esp + 0xb8u));
/* 8a8f56: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 8a8f5a: mov byte ptr [esp + 0xac], 0 */
  W8((uint32_t)(esp + 0xacu), 0x0u);
/* 8a8f62: call 0x6cc44b */
  esp -= 4; W32(esp, 0x8a8f67u); SPILL(); f_6cc44b(); if (g_unwind) return; RELOAD();
/* 8a8f67: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 8a8f6b: mov dword ptr [esp + 0xac], 0xffffffff */
  W32((uint32_t)(esp + 0xacu), 0xffffffffu);
/* 8a8f76: call 0x6c68a7 */
  esp -= 4; W32(esp, 0x8a8f7bu); SPILL(); f_6c68a7(); if (g_unwind) return; RELOAD();
/* 8a8f7b: mov eax, esi */
  eax = esi;
/* 8a8f7d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a8f7e: jmp 0x8a8f83 */
  goto L_8a8f83;
L_8a8f80: /* 8a8f80: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_8a8f83: /* 8a8f83: mov ecx, dword ptr [esp + 0xa0] */
  ecx = R32((uint32_t)(esp + 0xa0u));
/* 8a8f8a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a8f8b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a8f8c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a8f93: add esp, 0xa4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a8f99: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8a9040(void) {
  LOAD_REGS();
L_8a9040: /* 8a9040: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a9042: push 0x9d63b9 */
  { uint32_t v = 0x9d63b9u; esp -= 4; W32(esp, v); }
/* 8a9047: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a904d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a904e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a9055: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a9056: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a9057: mov esi, ecx */
  esi = ecx;
/* 8a9059: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 8a905d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8a9060: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a9061: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a9063: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 8a906b: call 0x6c5079 */
  esp -= 4; W32(esp, 0x8a9070u); SPILL(); f_6c5079(); if (g_unwind) return; RELOAD();
/* 8a9070: mov ecx, esi */
  ecx = esi;
/* 8a9072: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 8a907a: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x8a9080u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 8a9080: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8a9084: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a9085: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a908c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a908f: ret  */
  esp += 4; SPILL(); return;
}

void f_8a90b0(void) {
  LOAD_REGS();
L_8a90b0: /* 8a90b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a90b2: push 0x9d63d9 */
  { uint32_t v = 0x9d63d9u; esp -= 4; W32(esp, v); }
/* 8a90b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a90bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a90be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a90c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a90c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a90c7: mov esi, ecx */
  esi = ecx;
/* 8a90c9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 8a90cd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8a90d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a90d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a90d3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 8a90db: call 0x6cab19 */
  esp -= 4; W32(esp, 0x8a90e0u); SPILL(); f_6cab19(); if (g_unwind) return; RELOAD();
/* 8a90e0: mov ecx, esi */
  ecx = esi;
/* 8a90e2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 8a90ea: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x8a90f0u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 8a90f0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8a90f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a90f5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a90fc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a90ff: ret  */
  esp += 4; SPILL(); return;
}

void f_8a9120(void) {
  LOAD_REGS();
L_8a9120: /* 8a9120: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8a9121: mov ebp, esp */
  ebp = esp;
/* 8a9123: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8a9125: push 0x9d6461 */
  { uint32_t v = 0x9d6461u; esp -= 4; W32(esp, v); }
/* 8a912a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8a9130: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a9131: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8a9138: sub esp, 0xc4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xc4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8a913e: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 8a9143: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8a9145: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a9146: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a9147: xor esi, esi */
  esi = 0;
/* 8a9149: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a914b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a914c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8a914f: mov dword ptr [ebp - 0x64], ecx */
  W32((uint32_t)(ebp + 0xffffff9cu), ecx);
/* 8a9152: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 8a9155: jne 0x8a916b */
  if (!zf) goto L_8a916b;
L_8a9157: /* 8a9157: mov edx, dword ptr [0xcfabc0] */
  edx = R32((uint32_t)(0xcfabc0u));
/* 8a915d: cmp dword ptr [edx], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a915f: jne 0x8a916b */
  if (!zf) goto L_8a916b;
L_8a9161: /* 8a9161: mov dword ptr [ebp - 0x34], esi */
  W32((uint32_t)(ebp + 0xffffffccu), esi);
/* 8a9164: mov edi, 1 */
  edi = 0x1u;
/* 8a9169: jmp 0x8a9173 */
  goto L_8a9173;
L_8a916b: /* 8a916b: mov edi, 1 */
  edi = 0x1u;
/* 8a9170: mov dword ptr [ebp - 0x34], edi */
  W32((uint32_t)(ebp + 0xffffffccu), edi);
L_8a9173: /* 8a9173: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8a9176: mov eax, dword ptr [ecx + 0x1ec] */
  eax = R32((uint32_t)(ecx + 0x1ecu));
/* 8a917c: imul ebx, ebx, 0x11c */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x11cu);
  ebx = (uint32_t)r;
  }
/* 8a9182: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8a9184: mov eax, dword ptr [ebx + 0xbc] */
  eax = R32((uint32_t)(ebx + 0xbcu));
/* 8a918a: lea ecx, [ebx + 0xbc] */
  ecx = (uint32_t)(ebx + 0xbcu);
/* 8a9190: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8a9192u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a9192: mov edx, dword ptr [ebx + 0xd4] */
  edx = R32((uint32_t)(ebx + 0xd4u));
/* 8a9198: lea ecx, [ebx + 0xd4] */
  ecx = (uint32_t)(ebx + 0xd4u);
/* 8a919e: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8a91a0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a91a0: mov eax, dword ptr [ebx + 0xec] */
  eax = R32((uint32_t)(ebx + 0xecu));
/* 8a91a6: lea ecx, [ebx + 0xec] */
  ecx = (uint32_t)(ebx + 0xecu);
/* 8a91ac: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8a91aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a91ae: mov edx, dword ptr [ebx + 0xa4] */
  edx = R32((uint32_t)(ebx + 0xa4u));
/* 8a91b4: lea ecx, [ebx + 0xa4] */
  ecx = (uint32_t)(ebx + 0xa4u);
/* 8a91ba: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8a91bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8a91bc: lea ecx, [ebx + 0x8c] */
  ecx = (uint32_t)(ebx + 0x8cu);
/* 8a91c2: xor eax, eax */
  eax = 0;
L_8a91c4: /* 8a91c4: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a91c7: jge 0x8a91cc */
  if ((sf == of)) goto L_8a91cc;
L_8a91c9: /* 8a91c9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a91ca: jmp 0x8a91c4 */
  goto L_8a91c4;
L_8a91cc: /* 8a91cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a91cd: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 8a91cf: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a91d5u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a91d5: lea ecx, [ebx + 0x28] */
  ecx = (uint32_t)(ebx + 0x28u);
/* 8a91d8: xor eax, eax */
  eax = 0;
/* 8a91da: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8a91e0: /* 8a91e0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a91e3: jge 0x8a91e8 */
  if ((sf == of)) goto L_8a91e8;
L_8a91e5: /* 8a91e5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a91e6: jmp 0x8a91e0 */
  goto L_8a91e0;
L_8a91e8: /* 8a91e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a91e9: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8a91eb: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a91f1u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a91f1: mov ecx, dword ptr [ebx + 0x80] */
  ecx = R32((uint32_t)(ebx + 0x80u));
/* 8a91f7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8a91f8: mov eax, ecx */
  eax = ecx;
/* 8a91fa: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a91fc: mov dword ptr [ebx + 0x80], ecx */
  W32((uint32_t)(ebx + 0x80u), ecx);
/* 8a9202: jge 0x8a920a */
  if ((sf == of)) goto L_8a920a;
L_8a9204: /* 8a9204: mov dword ptr [ebx + 0x80], edi */
  W32((uint32_t)(ebx + 0x80u), edi);
L_8a920a: /* 8a920a: mov ecx, dword ptr [ebx + 0x68] */
  ecx = R32((uint32_t)(ebx + 0x68u));
/* 8a920d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8a920e: mov eax, ecx */
  eax = ecx;
/* 8a9210: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a9212: mov dword ptr [ebx + 0x68], ecx */
  W32((uint32_t)(ebx + 0x68u), ecx);
/* 8a9215: jge 0x8a921a */
  if ((sf == of)) goto L_8a921a;
L_8a9217: /* 8a9217: mov dword ptr [ebx + 0x68], edi */
  W32((uint32_t)(ebx + 0x68u), edi);
L_8a921a: /* 8a921a: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 8a921d: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a9223u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a9223: lea eax, [ebp - 0x70] */
  eax = (uint32_t)(ebp + 0xffffff90u);
/* 8a9226: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a9227: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a9228: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8a922c: call 0x6cbb40 */
  esp -= 4; W32(esp, 0x8a9231u); SPILL(); f_6cbb40(); if (g_unwind) return; RELOAD();
/* 8a9231: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a9234: xor eax, eax */
  eax = 0;
/* 8a9236: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 8a9239: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8a9240: /* 8a9240: cmp eax, dword ptr [ebx + 0xcc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xccu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a9246: jge 0x8a92f1 */
  if ((sf == of)) goto L_8a92f1;
L_8a924c: /* 8a924c: mov edx, dword ptr [ebx + 0xc8] */
  edx = R32((uint32_t)(ebx + 0xc8u));
/* 8a9252: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8a9255: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 8a9258: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8a925b: mov dword ptr [ebp - 0x78], ecx */
  W32((uint32_t)(ebp + 0xffffff88u), ecx);
/* 8a925e: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8a9261: mov dword ptr [ebp - 0x74], edx */
  W32((uint32_t)(ebp + 0xffffff8cu), edx);
/* 8a9264: movzx ecx, word ptr [eax] */
  ecx = (uint32_t)(R16((uint32_t)(eax)));
/* 8a9267: mov edx, dword ptr [ebx + 0xf8] */
  edx = R32((uint32_t)(ebx + 0xf8u));
/* 8a926d: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 8a9270: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 8a9273: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8a9275: mov dword ptr [ebp - 0x90], edx */
  W32((uint32_t)(ebp + 0xffffff70u), edx);
/* 8a927b: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8a927e: mov dword ptr [ebp - 0x8c], edx */
  W32((uint32_t)(ebp + 0xffffff74u), edx);
/* 8a9284: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8a9287: mov dword ptr [ebp - 0x88], ecx */
  W32((uint32_t)(ebp + 0xffffff78u), ecx);
/* 8a928d: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 8a9290: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8a9293: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 8a9296: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8a9299: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8a929b: mov dword ptr [ebp - 0x84], edx */
  W32((uint32_t)(ebp + 0xffffff7cu), edx);
/* 8a92a1: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8a92a4: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 8a92a7: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8a92aa: mov dword ptr [ebp - 0x7c], ecx */
  W32((uint32_t)(ebp + 0xffffff84u), ecx);
/* 8a92ad: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 8a92b3: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8a92b9u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8a92b9: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 8a92bb: lea esi, [ebx + 0x8c] */
  esi = (uint32_t)(ebx + 0x8cu);
/* 8a92c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8a92c2: mov ecx, esi */
  ecx = esi;
/* 8a92c4: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a92cau); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a92ca: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8a92cc: mov edi, eax */
  edi = eax;
/* 8a92ce: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8a92d1: shl edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8a92d4: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8a92d6: mov ecx, 8 */
  ecx = 0x8u;
/* 8a92db: lea esi, [ebp - 0x90] */
  esi = (uint32_t)(ebp + 0xffffff70u);
/* 8a92e1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a92e2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8a92e4: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 8a92e7: mov edi, 1 */
  edi = 0x1u;
/* 8a92ec: jmp 0x8a9240 */
  goto L_8a9240;
L_8a92f1: /* 8a92f1: xor esi, esi */
  esi = 0;
/* 8a92f3: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8a92f6: mov dword ptr [ebx + 0x88], esi */
  W32((uint32_t)(ebx + 0x88u), esi);
/* 8a92fc: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a9302u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a9302: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8a9305: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8a9309: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a930fu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a930f: mov eax, dword ptr [ebx + 0xe4] */
  eax = R32((uint32_t)(ebx + 0xe4u));
/* 8a9315: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a9316: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a9318: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8a931b: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8a931f: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8a9325u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8a9325: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 8a9328: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a932eu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a932e: mov eax, dword ptr [ebx + 0xfc] */
  eax = R32((uint32_t)(ebx + 0xfcu));
/* 8a9334: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a9335: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8a9337: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 8a933a: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8a933e: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8a9344u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8a9344: cmp dword ptr [ebp + 0x14], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a9348: jne 0x8a9382 */
  if (!zf) goto L_8a9382;
L_8a934a: /* 8a934a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8a9350: /* 8a9350: cmp esi, dword ptr [ebp - 0x58] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a9353: jge 0x8a93cd */
  if ((sf == of)) goto L_8a93cd;
L_8a9355: /* 8a9355: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8a9358: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 8a935b: lea edi, [eax + edx*4] */
  edi = (uint32_t)(eax + edx*4);
/* 8a935e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a9360: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a9362: mov ecx, edi */
  ecx = edi;
/* 8a9364: mov dword ptr [ebp - 0x24], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x3f800000u);
/* 8a936b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a9371u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a9371: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8a9373: xor ecx, ecx */
  ecx = 0;
/* 8a9375: mov dword ptr [edx + eax*8], ecx */
  W32((uint32_t)(edx + eax*8), ecx);
/* 8a9378: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8a937b: mov dword ptr [edx + eax*8 + 4], ecx */
  W32((uint32_t)(edx + eax*8 + 0x4u), ecx);
/* 8a937f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8a9380: jmp 0x8a9350 */
  goto L_8a9350;
L_8a9382: /* 8a9382: xor edi, edi */
  edi = 0;
L_8a9384: /* 8a9384: cmp edi, dword ptr [ebx + 0xb4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xb4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a938a: jge 0x8a93cd */
  if ((sf == of)) goto L_8a93cd;
L_8a938c: /* 8a938c: mov edx, dword ptr [ebx + 0xb0] */
  edx = R32((uint32_t)(ebx + 0xb0u));
/* 8a9392: movzx ecx, word ptr [edx + edi*8 + 6] */
  ecx = (uint32_t)(R16((uint32_t)(edx + edi*8 + 0x6u)));
/* 8a9397: lea eax, [edx + edi*8] */
  eax = (uint32_t)(edx + edi*8);
/* 8a939a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8a939c: movzx eax, word ptr [eax + 4] */
  eax = (uint32_t)(R16((uint32_t)(eax + 0x4u)));
/* 8a93a0: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 8a93a3: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8a93a6: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8a93a9: lea esi, [ecx + eax*4] */
  esi = (uint32_t)(ecx + eax*4);
/* 8a93ac: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a93ae: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a93b0: mov ecx, esi */
  ecx = esi;
/* 8a93b2: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8a93b5: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a93bbu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a93bb: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8a93bd: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8a93c0: mov dword ptr [edx + eax*8], ecx */
  W32((uint32_t)(edx + eax*8), ecx);
/* 8a93c3: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8a93c6: mov dword ptr [edx + eax*8 + 4], ecx */
  W32((uint32_t)(edx + eax*8 + 0x4u), ecx);
/* 8a93ca: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8a93cb: jmp 0x8a9384 */
  goto L_8a9384;
L_8a93cd: /* 8a93cd: xor esi, esi */
  esi = 0;
/* 8a93cf: nop  */
L_8a93d0: /* 8a93d0: cmp esi, dword ptr [ebx + 0xe4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xe4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a93d6: jge 0x8a9442 */
  if ((sf == of)) goto L_8a9442;
L_8a93d8: /* 8a93d8: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 8a93db: xor edx, edx */
  edx = 0;
/* 8a93dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8a93e0: /* 8a93e0: cmp edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a93e3: jge 0x8a9428 */
  if ((sf == of)) goto L_8a9428;
L_8a93e5: /* 8a93e5: mov edi, dword ptr [ebx + 0xe0] */
  edi = R32((uint32_t)(ebx + 0xe0u));
/* 8a93eb: lea eax, [edx + esi*4] */
  eax = (uint32_t)(edx + esi*4);
/* 8a93ee: movzx eax, word ptr [edi + eax*2] */
  eax = (uint32_t)(R16((uint32_t)(edi + eax*2)));
/* 8a93f2: mov edi, dword ptr [ebx + 0xc8] */
  edi = R32((uint32_t)(ebx + 0xc8u));
/* 8a93f8: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8a93fb: movzx eax, word ptr [edi + eax*4] */
  eax = (uint32_t)(R16((uint32_t)(edi + eax*4)));
/* 8a93ff: mov edi, dword ptr [ebp - 0x5c] */
  edi = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8a9402: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8a9405: lea eax, [edi + eax*4] */
  eax = (uint32_t)(edi + eax*4);
/* 8a9408: cmp dword ptr [eax + 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a940c: jne 0x8a9420 */
  if (!zf) goto L_8a9420;
L_8a940e: /* 8a940e: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a9411: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8a9413: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8a9415: jne 0x8a941c */
  if (!zf) goto L_8a941c;
L_8a9417: /* 8a9417: mov ecx, eax */
  ecx = eax;
/* 8a9419: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8a941a: jmp 0x8a93e0 */
  goto L_8a93e0;
L_8a941c: /* 8a941c: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a941e: je 0x8a9425 */
  if (zf) goto L_8a9425;
L_8a9420: /* 8a9420: mov ecx, 0xfffffffe */
  ecx = 0xfffffffeu;
L_8a9425: /* 8a9425: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8a9426: jmp 0x8a93e0 */
  goto L_8a93e0;
L_8a9428: /* 8a9428: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a942a: jl 0x8a9435 */
  if ((sf != of)) goto L_8a9435;
L_8a942c: /* 8a942c: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8a942f: mov dword ptr [edx + esi*4], ecx */
  W32((uint32_t)(edx + esi*4), ecx);
/* 8a9432: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8a9433: jmp 0x8a93d0 */
  goto L_8a93d0;
L_8a9435: /* 8a9435: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8a9438: mov dword ptr [eax + esi*4], 0xffffffff */
  W32((uint32_t)(eax + esi*4), 0xffffffffu);
/* 8a943f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8a9440: jmp 0x8a93d0 */
  goto L_8a93d0;
L_8a9442: /* 8a9442: mov ecx, dword ptr [ebx + 0xe4] */
  ecx = R32((uint32_t)(ebx + 0xe4u));
/* 8a9448: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 8a944b: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8a944e: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 8a9455: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8a945bu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8a945b: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8a945f: nop  */
L_8a9460: /* 8a9460: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8a9463: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a9465: je 0x8a962e */
  if (zf) goto L_8a962e;
L_8a946b: /* 8a946b: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8a946e: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 8a9471: xor eax, eax */
  eax = 0;
L_8a9473: /* 8a9473: cmp eax, dword ptr [ebx + 0xe4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xe4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a9479: jge 0x8a9487 */
  if ((sf == of)) goto L_8a9487;
L_8a947b: /* 8a947b: cmp dword ptr [ecx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a947f: jl 0x8a9510 */
  if ((sf != of)) goto L_8a9510;
L_8a9485: /* 8a9485: mov esi, eax */
  esi = eax;
L_8a9487: /* 8a9487: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a9489: jl 0x8a962e */
  if ((sf != of)) goto L_8a962e;
L_8a948f: /* 8a948f: mov edx, dword ptr [ebx + 0xe0] */
  edx = R32((uint32_t)(ebx + 0xe0u));
/* 8a9495: movzx eax, word ptr [edx + esi*8 + 6] */
  eax = (uint32_t)(R16((uint32_t)(edx + esi*8 + 0x6u)));
/* 8a949a: mov edi, dword ptr [ecx + esi*4] */
  edi = R32((uint32_t)(ecx + esi*4));
/* 8a949d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a949f: mov dword ptr [ecx + esi*4], 0xfffffffe */
  W32((uint32_t)(ecx + esi*4), 0xfffffffeu);
/* 8a94a6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a94a8: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8a94ab: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8a94ae: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a94b4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a94b4: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8a94b7: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
/* 8a94ba: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8a94bd: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8a94c0: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8a94c1: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 8a94c4: xor esi, esi */
  esi = 0;
L_8a94c6: /* 8a94c6: cmp esi, dword ptr [ebx + 0xe4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xe4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a94cc: jge 0x8a9516 */
  if ((sf == of)) goto L_8a9516;
L_8a94ce: /* 8a94ce: mov eax, dword ptr [ecx + esi*4] */
  eax = R32((uint32_t)(ecx + esi*4));
/* 8a94d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a94d3: jl 0x8a950d */
  if ((sf != of)) goto L_8a950d;
L_8a94d5: /* 8a94d5: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a94d7: jne 0x8a950d */
  if (!zf) goto L_8a950d;
L_8a94d9: /* 8a94d9: mov edx, dword ptr [ebx + 0xe0] */
  edx = R32((uint32_t)(ebx + 0xe0u));
/* 8a94df: movzx eax, word ptr [edx + esi*8 + 6] */
  eax = (uint32_t)(R16((uint32_t)(edx + esi*8 + 0x6u)));
/* 8a94e4: cmp eax, dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a94e7: jne 0x8a950d */
  if (!zf) goto L_8a950d;
L_8a94e9: /* 8a94e9: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a94eb: mov dword ptr [ecx + esi*4], 0xfffffffe */
  W32((uint32_t)(ecx + esi*4), 0xfffffffeu);
/* 8a94f2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a94f4: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8a94f7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a94fdu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a94fd: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8a9500: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
/* 8a9503: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8a9506: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8a9509: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8a950a: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
L_8a950d: /* 8a950d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8a950e: jmp 0x8a94c6 */
  goto L_8a94c6;
L_8a9510: /* 8a9510: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a9511: jmp 0x8a9473 */
  goto L_8a9473;
L_8a9516: /* 8a9516: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a9518: jl 0x8a961c */
  if ((sf != of)) goto L_8a961c;
L_8a951e: /* 8a951e: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8a9521: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8a9524: cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a9527: jle 0x8a961c */
  if ((zf || sf != of)) goto L_8a961c;
L_8a952d: /* 8a952d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a952f: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8a9531: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8a9534: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8a953au); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8a953a: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8a953d: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8a9540: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8a9543: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8a9546: mov dword ptr [eax + ecx], edi */
  W32((uint32_t)(eax + ecx), edi);
/* 8a9549: xor esi, esi */
  esi = 0;
/* 8a954b: jmp 0x8a9550 */
  goto L_8a9550;
L_8a9550: /* 8a9550: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8a9553: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a9555: jge 0x8a95dd */
  if ((sf == of)) goto L_8a95dd;
L_8a955b: /* 8a955b: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8a955e: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 8a9561: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8a9564: mov dword ptr [ecx + eax*4], 0xfffffffd */
  W32((uint32_t)(ecx + eax*4), 0xfffffffdu);
/* 8a956b: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8a956e: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 8a9571: mov ecx, dword ptr [ebx + 0xe0] */
  ecx = R32((uint32_t)(ebx + 0xe0u));
/* 8a9577: mov dx, word ptr [ecx + eax*8] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + eax*8))) & 0xffffu);
/* 8a957b: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 8a957e: mov cx, word ptr [eax + 2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x2u))) & 0xffffu);
/* 8a9582: mov word ptr [ebp - 0x30], dx */
  W16((uint32_t)(ebp + 0xffffffd0u), (edx & 0xffffu));
/* 8a9586: mov dx, word ptr [eax + 4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x4u))) & 0xffffu);
/* 8a958a: mov ax, word ptr [eax + 6] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x6u))) & 0xffffu);
/* 8a958e: mov word ptr [ebp - 0x2e], cx */
  W16((uint32_t)(ebp + 0xffffffd2u), (ecx & 0xffffu));
/* 8a9592: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8a9595: mov word ptr [ebp - 0x2c], dx */
  W16((uint32_t)(ebp + 0xffffffd4u), (edx & 0xffffu));
/* 8a9599: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a959c: lea edi, [edx + ecx + 8] */
  edi = (uint32_t)(edx + ecx + 0x8u);
/* 8a95a0: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a95a2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a95a4: mov ecx, edi */
  ecx = edi;
/* 8a95a6: mov word ptr [ebp - 0x2a], ax */
  W16((uint32_t)(ebp + 0xffffffd6u), (eax & 0xffffu));
/* 8a95aa: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8a95b0u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8a95b0: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8a95b2: mov dx, word ptr [ebp - 0x30] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffffd0u))) & 0xffffu);
/* 8a95b6: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 8a95b9: mov cx, word ptr [ebp - 0x2e] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffffd2u))) & 0xffffu);
/* 8a95bd: mov word ptr [eax], dx */
  W16((uint32_t)(eax), (edx & 0xffffu));
/* 8a95c0: mov dx, word ptr [ebp - 0x2c] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffffd4u))) & 0xffffu);
/* 8a95c4: mov word ptr [eax + 2], cx */
  W16((uint32_t)(eax + 0x2u), (ecx & 0xffffu));
/* 8a95c8: mov cx, word ptr [ebp - 0x2a] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffffd6u))) & 0xffffu);
/* 8a95cc: mov word ptr [eax + 4], dx */
  W16((uint32_t)(eax + 0x4u), (edx & 0xffffu));
/* 8a95d0: mov word ptr [eax + 6], cx */
  W16((uint32_t)(eax + 0x6u), (ecx & 0xffffu));
/* 8a95d4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a95d7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8a95d8: jmp 0x8a9550 */
  goto L_8a9550;
L_8a95dd: /* 8a95dd: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8a95e0: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8a95e2: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8a95e5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a95e7: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 8a95ea: je 0x8a961c */
  if (zf) goto L_8a961c;
L_8a95ec: /* 8a95ec: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8a95ef: mov esi, dword ptr [eax + ecx + 8] */
  esi = R32((uint32_t)(eax + ecx + 0x8u));
/* 8a95f3: mov edx, dword ptr [eax + ecx + 0xc] */
  edx = R32((uint32_t)(eax + ecx + 0xcu));
/* 8a95f7: movzx esi, word ptr [esi + 6] */
  esi = (uint32_t)(R16((uint32_t)(esi + 0x6u)));
/* 8a95fb: mov eax, dword ptr [eax + ecx] */
  eax = R32((uint32_t)(eax + ecx));
/* 8a95fe: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8a9601: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a9602: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a9603: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a9604: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8a960a: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8a960c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a960d: push 0xae93b8 */
  { uint32_t v = 0xae93b8u; esp -= 4; W32(esp, v); }
/* 8a9612: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a9613: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8a9619u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8a9619: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a961c: /* 8a961c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a961e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a9620: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8a9623: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a9629u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a9629: jmp 0x8a9460 */
  goto L_8a9460;
L_8a962e: /* 8a962e: xor esi, esi */
  esi = 0;
/* 8a9630: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a9631: lea ecx, [ebp - 0xd0] */
  ecx = (uint32_t)(ebp + 0xffffff30u);
/* 8a9637: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 8a963a: call 0x6c8378 */
  esp -= 4; W32(esp, 0x8a963fu); SPILL(); f_6c8378(); if (g_unwind) return; RELOAD();
/* 8a963f: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8a9642: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a9643: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8a9645: lea ecx, [ebx + 0x28] */
  ecx = (uint32_t)(ebx + 0x28u);
/* 8a9648: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8a964c: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8a9652u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8a9652: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
L_8a9655: /* 8a9655: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8a9658: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8a965b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a965d: jge 0x8a9755 */
  if ((sf == of)) goto L_8a9755;
L_8a9663: /* 8a9663: mov esi, dword ptr [ebx + 0x28] */
  esi = R32((uint32_t)(ebx + 0x28u));
/* 8a9666: mov eax, dword ptr [ebx + 0x58] */
  eax = R32((uint32_t)(ebx + 0x58u));
/* 8a9669: mov edi, ecx */
  edi = ecx;
/* 8a966b: lea edi, [edi + edi*4] */
  edi = (uint32_t)(edi + edi*4);
/* 8a966e: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8a9671: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8a9673: mov word ptr [esi + 2], ax */
  W16((uint32_t)(esi + 0x2u), (eax & 0xffffu));
/* 8a9677: mov eax, dword ptr [ebx + 0x90] */
  eax = R32((uint32_t)(ebx + 0x90u));
/* 8a967d: xor ecx, ecx */
  ecx = 0;
/* 8a967f: mov word ptr [esi + 4], ax */
  W16((uint32_t)(esi + 0x4u), (eax & 0xffffu));
/* 8a9683: mov word ptr [esi + 6], cx */
  W16((uint32_t)(esi + 0x6u), (ecx & 0xffffu));
/* 8a9687: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8a968a: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 8a968d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8a9690: /* 8a9690: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8a9693: cmp edx, dword ptr [edi + eax + 0xc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + eax + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a9697: jge 0x8a96fc */
  if ((sf == of)) goto L_8a96fc;
L_8a9699: /* 8a9699: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 8a969c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8a96a0: /* 8a96a0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8a96a3: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a96a6: jge 0x8a96f5 */
  if ((sf == of)) goto L_8a96f5;
L_8a96a8: /* 8a96a8: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8a96ab: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 8a96ae: mov edx, dword ptr [edi + eax + 8] */
  edx = R32((uint32_t)(edi + eax + 0x8u));
/* 8a96b2: xor eax, eax */
  eax = 0;
/* 8a96b4: mov ax, word ptr [edx + ecx*2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx + ecx*2))) & 0xffffu);
/* 8a96b8: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 8a96bb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a96bc: lea ecx, [ebx + 0x54] */
  ecx = (uint32_t)(ebx + 0x54u);
/* 8a96bf: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8a96c2: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8a96c8u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8a96c8: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8a96cb: xor eax, eax */
  eax = 0;
/* 8a96cd: mov ax, word ptr [esi + 4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x4u))) & 0xffffu);
/* 8a96d1: cmp ax, cx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8a96d4: jbe 0x8a96d8 */
  if ((cf | zf)) goto L_8a96d8;
L_8a96d6: /* 8a96d6: mov eax, ecx */
  eax = ecx;
L_8a96d8: /* 8a96d8: mov word ptr [esi + 4], ax */
  W16((uint32_t)(esi + 0x4u), (eax & 0xffffu));
/* 8a96dc: xor eax, eax */
  eax = 0;
/* 8a96de: mov ax, word ptr [esi + 6] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x6u))) & 0xffffu);
/* 8a96e2: cmp ax, cx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 8a96e5: jae 0x8a96e9 */
  if (!cf) goto L_8a96e9;
L_8a96e7: /* 8a96e7: mov eax, ecx */
  eax = ecx;
L_8a96e9: /* 8a96e9: mov word ptr [esi + 6], ax */
  W16((uint32_t)(esi + 0x6u), (eax & 0xffffu));
/* 8a96ed: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 8a96f0: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8a96f3: jmp 0x8a96a0 */
  goto L_8a96a0;
L_8a96f5: /* 8a96f5: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 8a96f8: xor ecx, ecx */
  ecx = 0;
/* 8a96fa: jmp 0x8a9690 */
  goto L_8a9690;
L_8a96fc: /* 8a96fc: mov dx, word ptr [edi + eax + 0xc] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + eax + 0xcu))) & 0xffffu);
/* 8a9701: imul dx, dx, 3 */
  { int32_t r = (int32_t)(int16_t)((edx & 0xffffu)) * (int32_t)(int16_t)(0x3u);
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)r) & 0xffffu);
  }
/* 8a9705: mov word ptr [esi + 8], dx */
  W16((uint32_t)(esi + 0x8u), (edx & 0xffffu));
/* 8a9709: mov word ptr [esi + 0xa], cx */
  W16((uint32_t)(esi + 0xau), (ecx & 0xffffu));
/* 8a970d: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8a9710: mov dx, word ptr [edi + eax] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + eax))) & 0xffffu);
/* 8a9714: mov word ptr [esi + 0xc], dx */
  W16((uint32_t)(esi + 0xcu), (edx & 0xffffu));
/* 8a9718: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8a971b: cmp dword ptr [edi + eax + 0xc], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + eax + 0xcu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a971f: je 0x8a972b */
  if (zf) goto L_8a972b;
L_8a9721: /* 8a9721: mov eax, dword ptr [edi + eax + 8] */
  eax = R32((uint32_t)(edi + eax + 0x8u));
/* 8a9725: movzx eax, word ptr [eax + 6] */
  eax = (uint32_t)(R16((uint32_t)(eax + 0x6u)));
/* 8a9729: jmp 0x8a972d */
  goto L_8a972d;
L_8a972b: /* 8a972b: xor eax, eax */
  eax = 0;
L_8a972d: /* 8a972d: mov word ptr [esi], ax */
  W16((uint32_t)(esi), (eax & 0xffffu));
/* 8a9730: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8a9733: mov word ptr [esi + 0x10], ax */
  W16((uint32_t)(esi + 0x10u), (eax & 0xffffu));
/* 8a9737: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8a973a: mov dx, word ptr [edi + ecx + 0xc] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + ecx + 0xcu))) & 0xffffu);
/* 8a973f: mov word ptr [esi + 0x12], dx */
  W16((uint32_t)(esi + 0x12u), (edx & 0xffffu));
/* 8a9743: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8a9746: add eax, dword ptr [edi + ecx + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + ecx + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8a974a: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8a974d: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 8a9750: jmp 0x8a9655 */
  goto L_8a9655;
L_8a9755: /* 8a9755: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a9758: jg 0x8a9916 */
  if ((!zf && sf == of)) goto L_8a9916;
L_8a975e: /* 8a975e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a9760: jle 0x8a9916 */
  if ((zf || sf != of)) goto L_8a9916;
L_8a9766: /* 8a9766: mov edi, dword ptr [ebp - 0x34] */
  edi = R32((uint32_t)(ebp + 0xffffffccu));
/* 8a9769: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a976b: je 0x8a978f */
  if (zf) goto L_8a978f;
L_8a976d: /* 8a976d: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8a9770: mov ecx, dword ptr [ebx + 0xe4] */
  ecx = R32((uint32_t)(ebx + 0xe4u));
/* 8a9776: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a9777: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 8a977c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a977d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a977e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8a9780: push 0xae9438 */
  { uint32_t v = 0xae9438u; esp -= 4; W32(esp, v); }
/* 8a9785: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a9786: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8a978cu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8a978c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a978f: /* 8a978f: mov dword ptr [ebx + 0x18], 0 */
  W32((uint32_t)(ebx + 0x18u), 0x0u);
/* 8a9796: lea ecx, [ebx + 0x1c] */
  ecx = (uint32_t)(ebx + 0x1cu);
/* 8a9799: xor eax, eax */
  eax = 0;
/* 8a979b: jmp 0x8a97a0 */
  goto L_8a97a0;
L_8a97a0: /* 8a97a0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a97a3: jge 0x8a97a8 */
  if ((sf == of)) goto L_8a97a8;
L_8a97a5: /* 8a97a5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a97a6: jmp 0x8a97a0 */
  goto L_8a97a0;
L_8a97a8: /* 8a97a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a97aa: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8a97ac: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a97b2u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a97b2: lea ecx, [ebx + 0xc] */
  ecx = (uint32_t)(ebx + 0xcu);
/* 8a97b5: xor eax, eax */
  eax = 0;
L_8a97b7: /* 8a97b7: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a97ba: jge 0x8a97bf */
  if ((sf == of)) goto L_8a97bf;
L_8a97bc: /* 8a97bc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a97bd: jmp 0x8a97b7 */
  goto L_8a97b7;
L_8a97bf: /* 8a97bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a97c1: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8a97c3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a97c9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a97c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a97cb: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8a97cd: mov ecx, ebx */
  ecx = ebx;
/* 8a97cf: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a97d5u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a97d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a97d7: lea ecx, [ebx + 0x38] */
  ecx = (uint32_t)(ebx + 0x38u);
/* 8a97da: call dword ptr [0xcfa3a0] */
  esp -= 4; W32(esp, 0x8a97e0u); SPILL(); f_4e264e(); if (g_unwind) return; /* Core!?Empty@?$TArray@G@@QAEXH@Z */ RELOAD();
/* 8a97e0: cmp dword ptr [ebp + 0x14], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a97e4: jne 0x8a9954 */
  if (!zf) goto L_8a9954;
L_8a97ea: /* 8a97ea: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a97ec: je 0x8a980c */
  if (zf) goto L_8a980c;
L_8a97ee: /* 8a97ee: mov eax, dword ptr [ebx + 0xe4] */
  eax = R32((uint32_t)(ebx + 0xe4u));
/* 8a97f4: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8a97fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a97fb: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8a97fd: push 0xae94d4 */
  { uint32_t v = 0xae94d4u; esp -= 4; W32(esp, v); }
/* 8a9802: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a9803: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8a9809u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8a9809: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a980c: /* 8a980c: mov eax, dword ptr [ebx + 0xe4] */
  eax = R32((uint32_t)(ebx + 0xe4u));
/* 8a9812: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
L_8a9815: /* 8a9815: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8a9817: jl 0x8a988e */
  if ((sf != of)) goto L_8a988e;
L_8a9819: /* 8a9819: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8a981c: cmp dword ptr [ecx + esi*4], -3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + esi*4))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8a9820: jne 0x8a9888 */
  if (!zf) goto L_8a9888;
L_8a9822: /* 8a9822: cmp esi, dword ptr [ebx + 0xe4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xe4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a9828: jle 0x8a9842 */
  if ((zf || sf != of)) goto L_8a9842;
L_8a982a: /* 8a982a: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8a982f: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8a9834: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8a9839: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8a983fu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8a983f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a9842: /* 8a9842: mov eax, dword ptr [ebx + 0xe4] */
  eax = R32((uint32_t)(ebx + 0xe4u));
/* 8a9848: lea edi, [esi + 1] */
  edi = (uint32_t)(esi + 0x1u);
/* 8a984b: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a984d: jle 0x8a9867 */
  if ((zf || sf != of)) goto L_8a9867;
L_8a984f: /* 8a984f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8a9854: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8a9859: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8a985e: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8a9864u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8a9864: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a9867: /* 8a9867: mov eax, esi */
  eax = esi;
/* 8a9869: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8a9870: /* 8a9870: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a9872: jge 0x8a9877 */
  if ((sf == of)) goto L_8a9877;
L_8a9874: /* 8a9874: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a9875: jmp 0x8a9870 */
  goto L_8a9870;
L_8a9877: /* 8a9877: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8a9879: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8a987b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a987c: lea ecx, [ebx + 0xe0] */
  ecx = (uint32_t)(ebx + 0xe0u);
/* 8a9882: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8a9888u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
L_8a9888: /* 8a9888: mov edi, dword ptr [ebp - 0x34] */
  edi = R32((uint32_t)(ebp + 0xffffffccu));
/* 8a988b: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 8a988c: jmp 0x8a9815 */
  goto L_8a9815;
L_8a988e: /* 8a988e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a9890: je 0x8a98b0 */
  if (zf) goto L_8a98b0;
L_8a9892: /* 8a9892: mov eax, dword ptr [ebx + 0xe4] */
  eax = R32((uint32_t)(ebx + 0xe4u));
/* 8a9898: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8a989e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a989f: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8a98a1: push 0xae9508 */
  { uint32_t v = 0xae9508u; esp -= 4; W32(esp, v); }
/* 8a98a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a98a7: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8a98adu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8a98ad: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8a98b0: /* 8a98b0: mov eax, dword ptr [ebx + 0xe4] */
  eax = R32((uint32_t)(ebx + 0xe4u));
/* 8a98b6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a98b8: je 0x8a9954 */
  if (zf) goto L_8a9954;
L_8a98be: /* 8a98be: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a98bf: call 0x6c5e66 */
  esp -= 4; W32(esp, 0x8a98c4u); SPILL(); f_6c5e66(); if (g_unwind) return; RELOAD();
/* 8a98c4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a98c7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a98c8: call 0x6c8eef */
  esp -= 4; W32(esp, 0x8a98cdu); SPILL(); f_6c8eef(); if (g_unwind) return; RELOAD();
/* 8a98cd: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8a98d0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a98d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a98d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a98d5: call 0x6c35f3 */
  esp -= 4; W32(esp, 0x8a98dau); SPILL(); f_6c35f3(); if (g_unwind) return; RELOAD();
/* 8a98da: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a98dd: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8a98df: je 0x8a9954 */
  if (zf) goto L_8a9954;
L_8a98e1: /* 8a98e1: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 8a98e7: mov ecx, dword ptr [ebx + 0xcc] */
  ecx = R32((uint32_t)(ebx + 0xccu));
/* 8a98ed: mov edx, dword ptr [ebx + 0xfc] */
  edx = R32((uint32_t)(ebx + 0xfcu));
/* 8a98f3: mov esi, dword ptr [ebx + 0xe4] */
  esi = R32((uint32_t)(ebx + 0xe4u));
/* 8a98f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a98fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a98fb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a98fc: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8a9902: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8a9904: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8a9905: push 0xae9578 */
  { uint32_t v = 0xae9578u; esp -= 4; W32(esp, v); }
/* 8a990a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8a990b: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8a9911u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8a9911: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8a9914: jmp 0x8a9954 */
  goto L_8a9954;
L_8a9916: /* 8a9916: lea ecx, [ebx + 0x8c] */
  ecx = (uint32_t)(ebx + 0x8cu);
/* 8a991c: xor eax, eax */
  eax = 0;
/* 8a991e: mov edi, edi */
  edi = edi;
L_8a9920: /* 8a9920: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a9923: jge 0x8a9928 */
  if ((sf == of)) goto L_8a9928;
L_8a9925: /* 8a9925: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a9926: jmp 0x8a9920 */
  goto L_8a9920;
L_8a9928: /* 8a9928: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a992a: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 8a992c: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a9932u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8a9932: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a9934: lea ecx, [ebx + 0x54] */
  ecx = (uint32_t)(ebx + 0x54u);
/* 8a9937: call dword ptr [0xcfa3a0] */
  esp -= 4; W32(esp, 0x8a993du); SPILL(); f_4e264e(); if (g_unwind) return; /* Core!?Empty@?$TArray@G@@QAEXH@Z */ RELOAD();
/* 8a993d: lea ecx, [ebx + 0x28] */
  ecx = (uint32_t)(ebx + 0x28u);
/* 8a9940: xor eax, eax */
  eax = 0;
L_8a9942: /* 8a9942: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8a9945: jge 0x8a994a */
  if ((sf == of)) goto L_8a994a;
L_8a9947: /* 8a9947: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8a9948: jmp 0x8a9942 */
  goto L_8a9942;
L_8a994a: /* 8a994a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a994c: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8a994e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8a9954u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
L_8a9954: /* 8a9954: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8a9955: lea ecx, [ebp - 0xd0] */
  ecx = (uint32_t)(ebp + 0xffffff30u);
/* 8a995b: call 0x6c803f */
  esp -= 4; W32(esp, 0x8a9960u); SPILL(); f_6c803f(); if (g_unwind) return; RELOAD();
/* 8a9960: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 8a9966: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 8a996a: call 0x6c9543 */
  esp -= 4; W32(esp, 0x8a996fu); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 8a996f: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 8a9975: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 8a9979: call 0x6c9543 */
  esp -= 4; W32(esp, 0x8a997eu); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 8a997e: lea ecx, [ebp - 0xb8] */
  ecx = (uint32_t)(ebp + 0xffffff48u);
/* 8a9984: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 8a9988: call 0x6c1730 */
  esp -= 4; W32(esp, 0x8a998du); SPILL(); f_6c1730(); if (g_unwind) return; RELOAD();
/* 8a998d: lea ecx, [ebp - 0xc4] */
  ecx = (uint32_t)(ebp + 0xffffff3cu);
/* 8a9993: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 8a9997: call 0x6c39cc */
  esp -= 4; W32(esp, 0x8a999cu); SPILL(); f_6c39cc(); if (g_unwind) return; RELOAD();
/* 8a999c: lea ecx, [ebp - 0xd0] */
  ecx = (uint32_t)(ebp + 0xffffff30u);
/* 8a99a2: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8a99a6: call 0x6cad0d */
  esp -= 4; W32(esp, 0x8a99abu); SPILL(); f_6cad0d(); if (g_unwind) return; RELOAD();
/* 8a99ab: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8a99ae: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8a99b2: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8a99b7u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8a99b7: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8a99ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8a99bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a99bd: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 8a99c0: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 8a99c4: call 0x6cab19 */
  esp -= 4; W32(esp, 0x8a99c9u); SPILL(); f_6cab19(); if (g_unwind) return; RELOAD();
/* 8a99c9: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 8a99cc: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8a99d0: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x8a99d6u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 8a99d6: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8a99d9: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8a99dd: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8a99e2u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8a99e2: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8a99e5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8a99e6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8a99e8: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8a99eb: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 8a99ef: call 0x6c5079 */
  esp -= 4; W32(esp, 0x8a99f4u); SPILL(); f_6c5079(); if (g_unwind) return; RELOAD();
/* 8a99f4: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8a99f7: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8a99fb: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x8a9a01u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 8a9a01: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 8a9a04: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8a9a08: call 0x6c9543 */
  esp -= 4; W32(esp, 0x8a9a0du); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 8a9a0d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8a9a10: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8a9a11: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8a9a12: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8a9a19: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8a9a1a: mov esp, ebp */
  esp = ebp;
/* 8a9a1c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8a9a1d: ret 0x10 */
  esp += 20; SPILL(); return;
}
