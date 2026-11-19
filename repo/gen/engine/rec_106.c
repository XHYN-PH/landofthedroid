#include "recomp.h"
#include "rec_mod.h"

void f_8cea0a(void) {
  LOAD_REGS();
L_8cea0a: /* 8cea0a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8cea10: /* 8cea10: cmp edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8cea13: jae 0x8ceaa7 */
  if (!cf) goto L_8ceaa7;
L_8cea19: /* 8cea19: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8cea1c: mov eax, edi */
  eax = edi;
/* 8cea1e: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 8cea21: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cea23: mov ecx, dword ptr [eax + 0x354] */
  ecx = R32((uint32_t)(eax + 0x354u));
/* 8cea29: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cea2b: je 0x8ceaa7 */
  if (zf) goto L_8ceaa7;
L_8cea2d: /* 8cea2d: mov ecx, dword ptr [eax + 0x350] */
  ecx = R32((uint32_t)(eax + 0x350u));
/* 8cea33: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cea35: je 0x8ceaa7 */
  if (zf) goto L_8ceaa7;
L_8cea37: /* 8cea37: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cea39: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cea3a: mov ecx, esi */
  ecx = esi;
/* 8cea3c: call 0x6c290a */
  esp -= 4; W32(esp, 0x8cea41u); SPILL(); f_6c290a(); if (g_unwind) return; RELOAD();
/* 8cea41: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cea43: jne 0x8ceaa1 */
  if (!zf) goto L_8ceaa1;
L_8cea45: /* 8cea45: lea ebx, [edi + 1] */
  ebx = (uint32_t)(edi + 0x1u);
L_8cea48: /* 8cea48: cmp ebx, 0x20 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8cea4b: jae 0x8cea8e */
  if (!cf) goto L_8cea8e;
L_8cea4d: /* 8cea4d: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 8cea50: mov edx, ebx */
  edx = ebx;
/* 8cea52: imul edx, edx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x78u);
  edx = (uint32_t)r;
  }
/* 8cea55: mov ecx, dword ptr [eax + edx + 0x354] */
  ecx = R32((uint32_t)(eax + edx + 0x354u));
/* 8cea5c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cea5e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cea60: je 0x8cea8e */
  if (zf) goto L_8cea8e;
L_8cea62: /* 8cea62: mov eax, dword ptr [eax + 0x350] */
  eax = R32((uint32_t)(eax + 0x350u));
/* 8cea68: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cea6a: je 0x8cea8e */
  if (zf) goto L_8cea8e;
L_8cea6c: /* 8cea6c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8cea6e: mov ecx, eax */
  ecx = eax;
/* 8cea70: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x8cea76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cea76: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cea78: jne 0x8cea8b */
  if (!zf) goto L_8cea8b;
L_8cea7a: /* 8cea7a: push 0xff */
  { uint32_t v = 0xffu; esp -= 4; W32(esp, v); }
/* 8cea7f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cea80: mov ecx, esi */
  ecx = esi;
/* 8cea82: call 0x6c290a */
  esp -= 4; W32(esp, 0x8cea87u); SPILL(); f_6c290a(); if (g_unwind) return; RELOAD();
/* 8cea87: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cea89: jne 0x8ceaa1 */
  if (!zf) goto L_8ceaa1;
L_8cea8b: /* 8cea8b: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8cea8c: jmp 0x8cea48 */
  goto L_8cea48;
L_8cea8e: /* 8cea8e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8cea90: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cea92: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 8cea95: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8cea9bu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8cea9b: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8cea9e: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
L_8ceaa1: /* 8ceaa1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8ceaa2: jmp 0x8cea10 */
  goto L_8cea10;
L_8ceaa7: /* 8ceaa7: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8ceaaa: mov eax, dword ptr [edx + 0xb4] */
  eax = R32((uint32_t)(edx + 0xb4u));
/* 8ceab0: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 8ceab3: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 8ceab6: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ceab8: je 0x8ceace */
  if (zf) goto L_8ceace;
L_8ceaba: /* 8ceaba: mov edx, ecx */
  edx = ecx;
/* 8ceabc: mov ecx, dword ptr [edx + 0x38] */
  ecx = R32((uint32_t)(edx + 0x38u));
/* 8ceabf: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8ceac1: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x8ceac7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ceac7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8ceac9: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8ceacc: jmp 0x8cead5 */
  goto L_8cead5;
L_8ceace: /* 8ceace: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
L_8cead5: /* 8cead5: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 8ceadb: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8ceade: jne 0x8ceb08 */
  if (!zf) goto L_8ceb08;
L_8ceae0: /* 8ceae0: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 8ceae3: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 8ceae9: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 8ceaec: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 8ceaef: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ceaf1: je 0x8ceaff */
  if (zf) goto L_8ceaff;
L_8ceaf3: /* 8ceaf3: mov edx, ecx */
  edx = ecx;
/* 8ceaf5: mov eax, dword ptr [edx + 0x38] */
  eax = R32((uint32_t)(edx + 0x38u));
/* 8ceaf8: mov ecx, dword ptr [eax + 0x60] */
  ecx = R32((uint32_t)(eax + 0x60u));
/* 8ceafb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ceafd: jne 0x8ceb08 */
  if (!zf) goto L_8ceb08;
L_8ceaff: /* 8ceaff: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 8ceb06: jmp 0x8ceb0f */
  goto L_8ceb0f;
L_8ceb08: /* 8ceb08: mov dword ptr [ebp - 0x34], 1 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x1u);
L_8ceb0f: /* 8ceb0f: lea edi, [esi + 0x28] */
  edi = (uint32_t)(esi + 0x28u);
/* 8ceb12: xor ebx, ebx */
  ebx = 0;
L_8ceb14: /* 8ceb14: cmp ebx, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ceb17: jge 0x8ceb2d */
  if ((sf == of)) goto L_8ceb2d;
L_8ceb19: /* 8ceb19: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8ceb1b: lea ecx, [ebx + ebx*8] */
  ecx = (uint32_t)(ebx + ebx*8);
/* 8ceb1e: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 8ceb21: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 8ceb24: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x8ceb2au); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 8ceb2a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8ceb2b: jmp 0x8ceb14 */
  goto L_8ceb14;
L_8ceb2d: /* 8ceb2d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ceb2f: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 8ceb31: mov ecx, edi */
  ecx = edi;
/* 8ceb33: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8ceb39u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8ceb39: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 8ceb3c: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8ceb42u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8ceb42: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8ceb46: xor edi, edi */
  edi = 0;
/* 8ceb48: jmp 0x8ceb50 */
  goto L_8ceb50;
L_8ceb50: /* 8ceb50: cmp edi, dword ptr [ebp - 0x60] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ceb53: jge 0x8ced45 */
  if ((sf == of)) goto L_8ced45;
L_8ceb59: /* 8ceb59: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8ceb5c: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 8ceb5f: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8ceb62: imul ecx, ecx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x78u);
  ecx = (uint32_t)r;
  }
/* 8ceb65: mov ebx, dword ptr [ecx + edx + 0x350] */
  ebx = R32((uint32_t)(ecx + edx + 0x350u));
/* 8ceb6c: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ceb6e: je 0x8ceb85 */
  if (zf) goto L_8ceb85;
L_8ceb70: /* 8ceb70: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 8ceb75: mov ecx, ebx */
  ecx = ebx;
/* 8ceb77: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8ceb7du); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8ceb7d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ceb7f: je 0x8ceb85 */
  if (zf) goto L_8ceb85;
L_8ceb81: /* 8ceb81: mov ecx, ebx */
  ecx = ebx;
/* 8ceb83: jmp 0x8ceb87 */
  goto L_8ceb87;
L_8ceb85: /* 8ceb85: xor ecx, ecx */
  ecx = 0;
L_8ceb87: /* 8ceb87: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 8ceb8a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ceb8c: jne 0x8cecc2 */
  if (!zf) goto L_8cecc2;
L_8ceb92: /* 8ceb92: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ceb94: je 0x8cecc2 */
  if (zf) goto L_8cecc2;
L_8ceb9a: /* 8ceb9a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8ceb9c: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0x8ceba2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ceba2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ceba4: jne 0x8cecc2 */
  if (!zf) goto L_8cecc2;
L_8cebaa: /* 8cebaa: mov ecx, dword ptr [0xcfa278] */
  ecx = R32((uint32_t)(0xcfa278u));
/* 8cebb0: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8cebb3: jne 0x8cecc2 */
  if (!zf) goto L_8cecc2;
L_8cebb9: /* 8cebb9: mov edx, dword ptr [0xcfab30] */
  edx = R32((uint32_t)(0xcfab30u));
/* 8cebbf: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8cebc2: jne 0x8cecc2 */
  if (!zf) goto L_8cecc2;
L_8cebc8: /* 8cebc8: cmp edi, dword ptr [ebp - 0x60] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cebcb: jge 0x8cec2a */
  if ((sf == of)) goto L_8cec2a;
L_8cebcd: /* 8cebcd: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8cebd0: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 8cebd3: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8cebd6: imul ecx, ecx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x78u);
  ecx = (uint32_t)r;
  }
/* 8cebd9: mov ebx, dword ptr [ecx + edx + 0x350] */
  ebx = R32((uint32_t)(ecx + edx + 0x350u));
/* 8cebe0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cebe2: je 0x8cec29 */
  if (zf) goto L_8cec29;
L_8cebe4: /* 8cebe4: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 8cebe9: mov ecx, ebx */
  ecx = ebx;
/* 8cebeb: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8cebf1u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8cebf1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cebf3: je 0x8cec29 */
  if (zf) goto L_8cec29;
L_8cebf5: /* 8cebf5: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8cebf7: mov ecx, ebx */
  ecx = ebx;
/* 8cebf9: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0x8cebffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cebff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cec01: jne 0x8cec29 */
  if (!zf) goto L_8cec29;
L_8cec03: /* 8cec03: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8cec06: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8cec08: lea ebx, [ecx + edi*4] */
  ebx = (uint32_t)(ecx + edi*4);
/* 8cec0b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cec0d: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 8cec10: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8cec16u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8cec16: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8cec18: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8cec1b: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 8cec1e: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8cec21: cmp edx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cec24: jge 0x8cec2a */
  if ((sf == of)) goto L_8cec2a;
L_8cec26: /* 8cec26: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8cec27: jmp 0x8cebc8 */
  goto L_8cebc8;
L_8cec29: /* 8cec29: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
L_8cec2a: /* 8cec2a: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 8cec2d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cec2f: je 0x8ced3f */
  if (zf) goto L_8ced3f;
L_8cec35: /* 8cec35: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 8cec37: lea ebx, [esi + 0x28] */
  ebx = (uint32_t)(esi + 0x28u);
/* 8cec3a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cec3c: mov ecx, ebx */
  ecx = ebx;
/* 8cec3e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8cec44u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8cec44: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8cec46: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 8cec49: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8cec4c: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cec4e: je 0x8cec70 */
  if (zf) goto L_8cec70;
L_8cec50: /* 8cec50: lea ecx, [ebx + 8] */
  ecx = (uint32_t)(ebx + 0x8u);
/* 8cec53: mov dword ptr [ebx + 4], 0xffffffff */
  W32((uint32_t)(ebx + 0x4u), 0xffffffffu);
/* 8cec5a: call dword ptr [0xcfa28c] */
  esp -= 4; W32(esp, 0x8cec60u); SPILL(); f_4e3dcd(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@XZ */ RELOAD();
/* 8cec60: xor eax, eax */
  eax = 0;
/* 8cec62: mov dword ptr [ebx + 0x14], eax */
  W32((uint32_t)(ebx + 0x14u), eax);
/* 8cec65: mov dword ptr [ebx + 0x18], eax */
  W32((uint32_t)(ebx + 0x18u), eax);
/* 8cec68: mov dword ptr [ebx + 0x1c], eax */
  W32((uint32_t)(ebx + 0x1cu), eax);
/* 8cec6b: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
/* 8cec6e: jmp 0x8cec72 */
  goto L_8cec72;
L_8cec70: /* 8cec70: xor ebx, ebx */
  ebx = 0;
L_8cec72: /* 8cec72: cmp dword ptr [ebp - 0x54], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cec76: jle 0x8cec9e */
  if ((zf || sf != of)) goto L_8cec9e;
L_8cec78: /* 8cec78: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8cec7b: mov eax, dword ptr [edx + 0xb4] */
  eax = R32((uint32_t)(edx + 0xb4u));
/* 8cec81: mov eax, dword ptr [eax + 0x40] */
  eax = R32((uint32_t)(eax + 0x40u));
/* 8cec84: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 8cec87: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8cec89: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x8cec8fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cec8f: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8cec92: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cec94: je 0x8cec9e */
  if (zf) goto L_8cec9e;
L_8cec96: /* 8cec96: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cec98: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 8cec9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cec9c: jmp 0x8ceca4 */
  goto L_8ceca4;
L_8cec9e: /* 8cec9e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ceca0: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 8ceca3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_8ceca4: /* 8ceca4: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8ceca7: call 0x6c9309 */
  esp -= 4; W32(esp, 0x8cecacu); SPILL(); f_6c9309(); if (g_unwind) return; RELOAD();
/* 8cecac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cecae: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8cecb0: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 8cecb3: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 8cecb6: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8cecbcu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8cecbc: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8cecbd: jmp 0x8ceb50 */
  goto L_8ceb50;
L_8cecc2: /* 8cecc2: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8cecc5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8cecc7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cecc9: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 8ceccc: lea ebx, [edx + edi*4] */
  ebx = (uint32_t)(edx + edi*4);
/* 8ceccf: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8cecd5u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8cecd5: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8cecd7: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8cecda: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 8cecdc: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 8cecdf: lea ebx, [esi + 0x28] */
  ebx = (uint32_t)(esi + 0x28u);
/* 8cece2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cece4: mov ecx, ebx */
  ecx = ebx;
/* 8cece6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8cececu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8cecec: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8cecee: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 8cecf1: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8cecf4: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cecf6: je 0x8ced18 */
  if (zf) goto L_8ced18;
L_8cecf8: /* 8cecf8: lea ecx, [ebx + 8] */
  ecx = (uint32_t)(ebx + 0x8u);
/* 8cecfb: mov dword ptr [ebx + 4], 0xffffffff */
  W32((uint32_t)(ebx + 0x4u), 0xffffffffu);
/* 8ced02: call dword ptr [0xcfa28c] */
  esp -= 4; W32(esp, 0x8ced08u); SPILL(); f_4e3dcd(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@XZ */ RELOAD();
/* 8ced08: xor eax, eax */
  eax = 0;
/* 8ced0a: mov dword ptr [ebx + 0x14], eax */
  W32((uint32_t)(ebx + 0x14u), eax);
/* 8ced0d: mov dword ptr [ebx + 0x18], eax */
  W32((uint32_t)(ebx + 0x18u), eax);
/* 8ced10: mov dword ptr [ebx + 0x1c], eax */
  W32((uint32_t)(ebx + 0x1cu), eax);
/* 8ced13: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
/* 8ced16: jmp 0x8ced1a */
  goto L_8ced1a;
L_8ced18: /* 8ced18: xor ebx, ebx */
  ebx = 0;
L_8ced1a: /* 8ced1a: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8ced1d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 8ced1f: lea edx, [ebp - 0x58] */
  edx = (uint32_t)(ebp + 0xffffffa8u);
/* 8ced22: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ced23: call 0x6c9309 */
  esp -= 4; W32(esp, 0x8ced28u); SPILL(); f_6c9309(); if (g_unwind) return; RELOAD();
/* 8ced28: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ced2a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8ced2c: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 8ced2f: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 8ced32: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8ced38u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8ced38: mov dword ptr [ebp - 0x34], 1 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x1u);
L_8ced3f: /* 8ced3f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8ced40: jmp 0x8ceb50 */
  goto L_8ceb50;
L_8ced45: /* 8ced45: xor ebx, ebx */
  ebx = 0;
L_8ced47: /* 8ced47: cmp ebx, dword ptr [esi + 0x2c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ced4a: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 8ced4d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ced4f: jge 0x8cf10c */
  if ((sf == of)) goto L_8cf10c;
L_8ced55: /* 8ced55: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8ced58: lea edi, [ebx + ebx*8] */
  edi = (uint32_t)(ebx + ebx*8);
/* 8ced5b: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8ced5e: lea ecx, [edi + eax + 8] */
  ecx = (uint32_t)(edi + eax + 0x8u);
/* 8ced62: call dword ptr [0xcfa3a0] */
  esp -= 4; W32(esp, 0x8ced68u); SPILL(); f_4e264e(); if (g_unwind) return; /* Core!?Empty@?$TArray@G@@QAEXH@Z */ RELOAD();
/* 8ced68: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8ced6b: xor ecx, ecx */
  ecx = 0;
/* 8ced6d: mov dword ptr [edi + edx + 0x14], ecx */
  W32((uint32_t)(edi + edx + 0x14u), ecx);
L_8ced71: /* 8ced71: cmp ecx, dword ptr [esi + 0x64] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x64u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ced74: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8ced77: jge 0x8cf02c */
  if ((sf == of)) goto L_8cf02c;
L_8ced7d: /* 8ced7d: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
L_8ced84: /* 8ced84: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8ced87: cmp eax, dword ptr [esi + 0x60] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ced8a: jge 0x8cf026 */
  if ((sf == of)) goto L_8cf026;
L_8ced90: /* 8ced90: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 8ced93: mov edx, dword ptr [esi + 0x6c] */
  edx = R32((uint32_t)(esi + 0x6cu));
/* 8ced96: mov edi, dword ptr [esi + 0x68] */
  edi = R32((uint32_t)(esi + 0x68u));
/* 8ced99: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8ced9c: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8ced9e: mov ecx, dword ptr [eax + 0x128c] */
  ecx = R32((uint32_t)(eax + 0x128cu));
/* 8ceda4: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 8ceda7: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8ceda9: mov edi, dword ptr [eax + 0x131c] */
  edi = R32((uint32_t)(eax + 0x131cu));
/* 8cedaf: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cedb1: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 8cedb4: mov edx, ecx */
  edx = ecx;
/* 8cedb6: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 8cedb9: mov ebx, 1 */
  ebx = 0x1u;
/* 8cedbe: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 8cedc0: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8cedc3: test dword ptr [edi + edx*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + edx*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cedc6: je 0x8cf014 */
  if (zf) goto L_8cf014;
L_8cedcc: /* 8cedcc: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 8cedcf: movzx edx, word ptr [esi + 0x90] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0x90u)));
/* 8cedd6: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cedd9: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cedda: mov edi, ecx */
  edi = ecx;
/* 8ceddc: imul edi, dword ptr [ebp - 0x14] */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  edi = (uint32_t)r;
  }
/* 8cede0: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8cede2: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8cede4: lea ebx, [edi + 1] */
  ebx = (uint32_t)(edi + 0x1u);
/* 8cede7: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8cedea: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ceded: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8cedee: imul ebx, ecx */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(ecx);
  ebx = (uint32_t)r;
  }
/* 8cedf1: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8cedf3: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cedf6: lea ecx, [ebx + edx + 1] */
  ecx = (uint32_t)(ebx + edx + 0x1u);
/* 8cedfa: mov ebx, dword ptr [esi + 0x68] */
  ebx = R32((uint32_t)(esi + 0x68u));
/* 8cedfd: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8cee00: mov ecx, dword ptr [eax + 0x128c] */
  ecx = R32((uint32_t)(eax + 0x128cu));
/* 8cee06: imul ecx, dword ptr [ebp - 0x30] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  ecx = (uint32_t)r;
  }
/* 8cee0a: mov eax, dword ptr [eax + 0x1328] */
  eax = R32((uint32_t)(eax + 0x1328u));
/* 8cee10: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cee12: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cee14: mov edx, ecx */
  edx = ecx;
/* 8cee16: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 8cee19: mov ebx, 1 */
  ebx = 0x1u;
/* 8cee1e: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 8cee20: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8cee23: test dword ptr [eax + edx*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cee26: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8cee29: je 0x8cef1d */
  if (zf) goto L_8cef1d;
L_8cee2f: /* 8cee2f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cee31: je 0x8cee4b */
  if (zf) goto L_8cee4b;
L_8cee33: /* 8cee33: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cee36: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cee39: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cee3b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cee3d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cee3e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cee3f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cee40: mov ecx, esi */
  ecx = esi;
/* 8cee42: call 0x6cc1df */
  esp -= 4; W32(esp, 0x8cee47u); SPILL(); f_6cc1df(); if (g_unwind) return; RELOAD();
/* 8cee47: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cee49: je 0x8cee9d */
  if (zf) goto L_8cee9d;
L_8cee4b: /* 8cee4b: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8cee4e: mov dword ptr [ebp - 0x30], edi */
  W32((uint32_t)(ebp + 0xffffffd0u), edi);
/* 8cee51: lea edi, [ebx + ebx*8] */
  edi = (uint32_t)(ebx + ebx*8);
/* 8cee54: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 8cee57: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8cee5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cee5b: lea ecx, [edi + ecx + 8] */
  ecx = (uint32_t)(edi + ecx + 0x8u);
/* 8cee5f: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cee65u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cee65: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cee68: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8cee69: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8cee6c: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8cee6f: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 8cee72: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cee73: lea ecx, [edi + eax + 8] */
  ecx = (uint32_t)(edi + eax + 0x8u);
/* 8cee77: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cee7du); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cee7d: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cee80: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8cee83: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 8cee86: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 8cee89: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cee8a: lea ecx, [edi + eax + 8] */
  ecx = (uint32_t)(edi + eax + 0x8u);
/* 8cee8e: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cee94u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cee94: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8cee97: lea eax, [edi + ecx + 0x14] */
  eax = (uint32_t)(edi + ecx + 0x14u);
/* 8cee9b: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
L_8cee9d: /* 8cee9d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cee9f: je 0x8ceebd */
  if (zf) goto L_8ceebd;
L_8ceea1: /* 8ceea1: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ceea4: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8ceea7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8ceea9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8ceeab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ceeac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ceead: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ceeae: mov ecx, esi */
  ecx = esi;
/* 8ceeb0: call 0x6cc1df */
  esp -= 4; W32(esp, 0x8ceeb5u); SPILL(); f_6cc1df(); if (g_unwind) return; RELOAD();
/* 8ceeb5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ceeb7: je 0x8cf017 */
  if (zf) goto L_8cf017;
L_8ceebd: /* 8ceebd: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8ceec0: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8ceec3: lea edi, [ebx + ebx*8] */
  edi = (uint32_t)(ebx + ebx*8);
/* 8ceec6: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8ceec9: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8ceeca: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8ceecd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ceece: lea ecx, [edi + edx + 8] */
  ecx = (uint32_t)(edi + edx + 0x8u);
/* 8ceed2: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8ceed5: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8ceedbu); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8ceedb: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8ceede: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8ceee1: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8ceee4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ceee5: lea ecx, [edi + edx + 8] */
  ecx = (uint32_t)(edi + edx + 0x8u);
/* 8ceee9: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8ceeec: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8ceef2u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8ceef2: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8ceef5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ceef8: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 8ceefb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ceefc: lea ecx, [edi + edx + 8] */
  ecx = (uint32_t)(edi + edx + 0x8u);
/* 8cef00: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8cef03: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cef09u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cef09: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8cef0c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cef0f: lea edi, [edi + eax + 0x14] */
  edi = (uint32_t)(edi + eax + 0x14u);
/* 8cef13: inc dword ptr [edi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edi), r);
  }
/* 8cef15: inc dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 8cef18: jmp 0x8ced84 */
  goto L_8ced84;
L_8cef1d: /* 8cef1d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cef1f: je 0x8cef39 */
  if (zf) goto L_8cef39;
L_8cef21: /* 8cef21: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cef24: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cef27: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cef29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cef2b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cef2c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cef2d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cef2e: mov ecx, esi */
  ecx = esi;
/* 8cef30: call 0x6cc1df */
  esp -= 4; W32(esp, 0x8cef35u); SPILL(); f_6cc1df(); if (g_unwind) return; RELOAD();
/* 8cef35: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cef37: je 0x8cef97 */
  if (zf) goto L_8cef97;
L_8cef39: /* 8cef39: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8cef3c: lea eax, [ebx + ebx*8] */
  eax = (uint32_t)(ebx + ebx*8);
/* 8cef3f: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8cef42: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cef45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cef46: lea ecx, [eax + edx + 8] */
  ecx = (uint32_t)(eax + edx + 0x8u);
/* 8cef4a: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 8cef4d: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8cef50: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cef56u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cef56: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cef59: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8cef5c: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8cef5f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8cef60: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8cef63: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 8cef66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cef67: lea ecx, [edx + ecx + 8] */
  ecx = (uint32_t)(edx + ecx + 0x8u);
/* 8cef6b: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cef71u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cef71: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cef74: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8cef77: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8cef7a: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8cef7d: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cef80: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cef81: lea ecx, [eax + edx + 8] */
  ecx = (uint32_t)(eax + edx + 0x8u);
/* 8cef85: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cef8bu); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cef8b: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8cef8e: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8cef91: lea eax, [edx + ecx + 0x14] */
  eax = (uint32_t)(edx + ecx + 0x14u);
/* 8cef95: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
L_8cef97: /* 8cef97: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cef99: je 0x8cefb3 */
  if (zf) goto L_8cefb3;
L_8cef9b: /* 8cef9b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cef9e: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cefa1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cefa3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cefa5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cefa6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cefa7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cefa8: mov ecx, esi */
  ecx = esi;
/* 8cefaa: call 0x6cc1df */
  esp -= 4; W32(esp, 0x8cefafu); SPILL(); f_6cc1df(); if (g_unwind) return; RELOAD();
/* 8cefaf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cefb1: je 0x8cf017 */
  if (zf) goto L_8cf017;
L_8cefb3: /* 8cefb3: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8cefb6: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 8cefb9: lea edi, [ebx + ebx*8] */
  edi = (uint32_t)(ebx + ebx*8);
/* 8cefbc: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cefbf: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8cefc2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cefc3: lea ecx, [edi + eax + 8] */
  ecx = (uint32_t)(edi + eax + 0x8u);
/* 8cefc7: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cefcdu); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cefcd: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cefd0: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8cefd3: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cefd6: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 8cefd9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cefda: lea ecx, [edi + eax + 8] */
  ecx = (uint32_t)(edi + eax + 0x8u);
/* 8cefde: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cefe4u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cefe4: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cefe7: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8cefea: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cefed: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 8ceff0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ceff1: lea ecx, [edi + eax + 8] */
  ecx = (uint32_t)(edi + eax + 0x8u);
/* 8ceff5: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8ceffbu); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8ceffb: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8ceffe: mov eax, dword ptr [edi + ecx + 0x14] */
  eax = R32((uint32_t)(edi + ecx + 0x14u));
/* 8cf002: lea edi, [edi + ecx + 0x14] */
  edi = (uint32_t)(edi + ecx + 0x14u);
/* 8cf006: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cf009: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8cf00a: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 8cf00c: inc dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 8cf00f: jmp 0x8ced84 */
  goto L_8ced84;
L_8cf014: /* 8cf014: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
L_8cf017: /* 8cf017: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cf01a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cf01d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8cf01e: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8cf021: jmp 0x8ced84 */
  goto L_8ced84;
L_8cf026: /* 8cf026: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cf027: jmp 0x8ced71 */
  goto L_8ced71;
L_8cf02c: /* 8cf02c: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8cf02f: lea edi, [ebx + ebx*8] */
  edi = (uint32_t)(ebx + ebx*8);
/* 8cf032: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8cf035: mov ecx, dword ptr [edi + edx + 0xc] */
  ecx = R32((uint32_t)(edi + edx + 0xcu));
/* 8cf039: lea eax, [edi + edx] */
  eax = (uint32_t)(edi + edx);
/* 8cf03c: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 8cf03f: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8cf042: mov edx, dword ptr [eax + edi + 0x18] */
  edx = R32((uint32_t)(eax + edi + 0x18u));
/* 8cf046: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cf048: xor ecx, ecx */
  ecx = 0;
/* 8cf04a: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8cf04c: je 0x8cf0fa */
  if (zf) goto L_8cf0fa;
L_8cf052: /* 8cf052: mov dword ptr [eax + 0x1c], 0x7fffffff */
  W32((uint32_t)(eax + 0x1cu), 0x7fffffffu);
/* 8cf059: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8cf05c: mov dword ptr [edi + edx + 0x20], ecx */
  W32((uint32_t)(edi + edx + 0x20u), ecx);
/* 8cf060: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
L_8cf063: /* 8cf063: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8cf066: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cf069: mov edx, dword ptr [eax + edi + 0x18] */
  edx = R32((uint32_t)(eax + edi + 0x18u));
/* 8cf06d: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cf06f: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cf071: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8cf074: jge 0x8cf106 */
  if ((sf == of)) goto L_8cf106;
L_8cf07a: /* 8cf07a: mov edx, ecx */
  edx = ecx;
/* 8cf07c: mov ecx, eax */
  ecx = eax;
/* 8cf07e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cf07f: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cf082: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8cf088u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8cf088: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 8cf08b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cf08e: cmp eax, dword ptr [ecx + 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8cf091: jae 0x8cf0b2 */
  if (!cf) goto L_8cf0b2;
L_8cf093: /* 8cf093: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8cf096: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cf099: lea eax, [edi + edx] */
  eax = (uint32_t)(edi + edx);
/* 8cf09c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cf09d: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 8cf0a0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8cf0a3: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8cf0a9u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8cf0a9: movzx edx, word ptr [eax] */
  edx = (uint32_t)(R16((uint32_t)(eax)));
/* 8cf0ac: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cf0af: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
L_8cf0b2: /* 8cf0b2: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8cf0b5: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cf0b8: lea eax, [edi + ecx] */
  eax = (uint32_t)(edi + ecx);
/* 8cf0bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cf0bc: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 8cf0bf: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8cf0c2: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8cf0c8u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8cf0c8: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 8cf0cb: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cf0ce: cmp eax, dword ptr [ecx + 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8cf0d1: jbe 0x8cf0f2 */
  if ((cf | zf)) goto L_8cf0f2;
L_8cf0d3: /* 8cf0d3: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8cf0d6: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cf0d9: lea eax, [edi + edx] */
  eax = (uint32_t)(edi + edx);
/* 8cf0dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cf0dd: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 8cf0e0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8cf0e3: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8cf0e9u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8cf0e9: movzx edx, word ptr [eax] */
  edx = (uint32_t)(R16((uint32_t)(eax)));
/* 8cf0ec: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cf0ef: mov dword ptr [eax + 0x20], edx */
  W32((uint32_t)(eax + 0x20u), edx);
L_8cf0f2: /* 8cf0f2: inc dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 8cf0f5: jmp 0x8cf063 */
  goto L_8cf063;
L_8cf0fa: /* 8cf0fa: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cf0fc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cf0fd: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 8cf100: call 0x6cab8c */
  esp -= 4; W32(esp, 0x8cf105u); SPILL(); f_6cab8c(); if (g_unwind) return; RELOAD();
/* 8cf105: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
L_8cf106: /* 8cf106: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8cf107: jmp 0x8ced47 */
  goto L_8ced47;
L_8cf10c: /* 8cf10c: lea ecx, [esi + 0x98] */
  ecx = (uint32_t)(esi + 0x98u);
/* 8cf112: call dword ptr [0xcfa3a0] */
  esp -= 4; W32(esp, 0x8cf118u); SPILL(); f_4e264e(); if (g_unwind) return; /* Core!?Empty@?$TArray@G@@QAEXH@Z */ RELOAD();
/* 8cf118: mov dword ptr [esi + 0xb0], 0 */
  W32((uint32_t)(esi + 0xb0u), 0x0u);
/* 8cf122: xor ecx, ecx */
  ecx = 0;
L_8cf124: /* 8cf124: cmp ecx, dword ptr [esi + 0x64] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x64u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cf127: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8cf12a: jge 0x8cf2b3 */
  if ((sf == of)) goto L_8cf2b3;
L_8cf130: /* 8cf130: xor ebx, ebx */
  ebx = 0;
L_8cf132: /* 8cf132: cmp ebx, dword ptr [esi + 0x60] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cf135: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 8cf138: jge 0x8cf2ad */
  if ((sf == of)) goto L_8cf2ad;
L_8cf13e: /* 8cf13e: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 8cf141: mov edx, dword ptr [esi + 0x6c] */
  edx = R32((uint32_t)(esi + 0x6cu));
/* 8cf144: mov edi, dword ptr [esi + 0x68] */
  edi = R32((uint32_t)(esi + 0x68u));
/* 8cf147: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cf149: mov ecx, dword ptr [eax + 0x128c] */
  ecx = R32((uint32_t)(eax + 0x128cu));
/* 8cf14f: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 8cf152: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cf154: mov edi, dword ptr [eax + 0x131c] */
  edi = R32((uint32_t)(eax + 0x131cu));
/* 8cf15a: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cf15c: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8cf15f: mov edx, ecx */
  edx = ecx;
/* 8cf161: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 8cf164: mov ebx, 1 */
  ebx = 0x1u;
/* 8cf169: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 8cf16b: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8cf16e: test dword ptr [edi + edx*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + edx*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cf171: je 0x8cf2a1 */
  if (zf) goto L_8cf2a1;
L_8cf177: /* 8cf177: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 8cf17a: movzx edx, word ptr [esi + 0x90] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0x90u)));
/* 8cf181: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8cf184: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cf185: mov edi, ecx */
  edi = ecx;
/* 8cf187: imul edi, dword ptr [ebp - 0x14] */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  edi = (uint32_t)r;
  }
/* 8cf18b: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8cf18d: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8cf18f: lea ebx, [edi + 1] */
  ebx = (uint32_t)(edi + 0x1u);
/* 8cf192: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8cf195: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cf198: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8cf199: imul ebx, ecx */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(ecx);
  ebx = (uint32_t)r;
  }
/* 8cf19c: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8cf19e: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8cf1a1: lea ecx, [ebx + edx + 1] */
  ecx = (uint32_t)(ebx + edx + 0x1u);
/* 8cf1a5: mov ebx, dword ptr [esi + 0x68] */
  ebx = R32((uint32_t)(esi + 0x68u));
/* 8cf1a8: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8cf1ab: mov ecx, dword ptr [eax + 0x128c] */
  ecx = R32((uint32_t)(eax + 0x128cu));
/* 8cf1b1: imul ecx, dword ptr [ebp - 0x24] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  ecx = (uint32_t)r;
  }
/* 8cf1b5: mov eax, dword ptr [eax + 0x1328] */
  eax = R32((uint32_t)(eax + 0x1328u));
/* 8cf1bb: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cf1bd: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cf1bf: mov edx, ecx */
  edx = ecx;
/* 8cf1c1: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 8cf1c4: mov ebx, 1 */
  ebx = 0x1u;
/* 8cf1c9: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 8cf1cb: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8cf1ce: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 8cf1d1: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 8cf1d4: test ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cf1d6: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cf1d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cf1da: je 0x8cf234 */
  if (zf) goto L_8cf234;
L_8cf1dc: /* 8cf1dc: lea edi, [esi + 0x98] */
  edi = (uint32_t)(esi + 0x98u);
/* 8cf1e2: mov ecx, edi */
  ecx = edi;
/* 8cf1e4: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf1eau); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf1ea: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cf1ed: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cf1f0: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 8cf1f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cf1f2: mov ecx, edi */
  ecx = edi;
/* 8cf1f4: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 8cf1f7: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf1fdu); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf1fd: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cf200: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cf203: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cf204: mov ecx, edi */
  ecx = edi;
/* 8cf206: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8cf209: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf20fu); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf20f: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cf212: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cf213: mov ecx, edi */
  ecx = edi;
/* 8cf215: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 8cf218: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf21eu); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf21e: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cf221: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cf224: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cf225: mov ecx, edi */
  ecx = edi;
/* 8cf227: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8cf22a: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf230u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf230: mov ecx, edi */
  ecx = edi;
/* 8cf232: jmp 0x8cf28a */
  goto L_8cf28a;
L_8cf234: /* 8cf234: lea ebx, [esi + 0x98] */
  ebx = (uint32_t)(esi + 0x98u);
/* 8cf23a: mov ecx, ebx */
  ecx = ebx;
/* 8cf23c: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf242u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf242: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cf245: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cf248: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8cf249: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cf24a: mov ecx, ebx */
  ecx = ebx;
/* 8cf24c: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8cf24f: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf255u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf255: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cf258: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cf25b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cf25c: mov ecx, ebx */
  ecx = ebx;
/* 8cf25e: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8cf261: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf267u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf267: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cf26a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cf26b: mov ecx, ebx */
  ecx = ebx;
/* 8cf26d: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 8cf270: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf276u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf276: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cf279: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cf27c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cf27d: mov ecx, ebx */
  ecx = ebx;
/* 8cf27f: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8cf282: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf288u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf288: mov ecx, ebx */
  ecx = ebx;
L_8cf28a: /* 8cf28a: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cf28d: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 8cf290: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cf291: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8cf294: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf29au); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf29a: add dword ptr [esi + 0xb0], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xb0u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi + 0xb0u), r);
  }
L_8cf2a1: /* 8cf2a1: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8cf2a4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cf2a7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8cf2a8: jmp 0x8cf132 */
  goto L_8cf132;
L_8cf2ad: /* 8cf2ad: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cf2ae: jmp 0x8cf124 */
  goto L_8cf124;
L_8cf2b3: /* 8cf2b3: mov eax, dword ptr [esi + 0x9c] */
  eax = R32((uint32_t)(esi + 0x9cu));
/* 8cf2b9: xor edi, edi */
  edi = 0;
/* 8cf2bb: mov dword ptr [esi + 0xb4], eax */
  W32((uint32_t)(esi + 0xb4u), eax);
/* 8cf2c1: mov dword ptr [esi + 0xb8], 0x7fffffff */
  W32((uint32_t)(esi + 0xb8u), 0x7fffffffu);
/* 8cf2cb: mov dword ptr [esi + 0xbc], edi */
  W32((uint32_t)(esi + 0xbcu), edi);
L_8cf2d1: /* 8cf2d1: cmp edi, dword ptr [esi + 0xb4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xb4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cf2d7: jge 0x8cf32e */
  if ((sf == of)) goto L_8cf32e;
L_8cf2d9: /* 8cf2d9: lea ebx, [esi + 0x98] */
  ebx = (uint32_t)(esi + 0x98u);
/* 8cf2df: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cf2e0: mov ecx, ebx */
  ecx = ebx;
/* 8cf2e2: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8cf2e8u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8cf2e8: movzx ecx, word ptr [eax] */
  ecx = (uint32_t)(R16((uint32_t)(eax)));
/* 8cf2eb: cmp ecx, dword ptr [esi + 0xb8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xb8u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8cf2f1: jae 0x8cf305 */
  if (!cf) goto L_8cf305;
L_8cf2f3: /* 8cf2f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cf2f4: mov ecx, ebx */
  ecx = ebx;
/* 8cf2f6: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8cf2fcu); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8cf2fc: movzx edx, word ptr [eax] */
  edx = (uint32_t)(R16((uint32_t)(eax)));
/* 8cf2ff: mov dword ptr [esi + 0xb8], edx */
  W32((uint32_t)(esi + 0xb8u), edx);
L_8cf305: /* 8cf305: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cf306: mov ecx, ebx */
  ecx = ebx;
/* 8cf308: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8cf30eu); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8cf30e: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 8cf311: cmp eax, dword ptr [esi + 0xbc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xbcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8cf317: jbe 0x8cf32b */
  if ((cf | zf)) goto L_8cf32b;
L_8cf319: /* 8cf319: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cf31a: mov ecx, ebx */
  ecx = ebx;
/* 8cf31c: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8cf322u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8cf322: movzx ecx, word ptr [eax] */
  ecx = (uint32_t)(R16((uint32_t)(eax)));
/* 8cf325: mov dword ptr [esi + 0xbc], ecx */
  W32((uint32_t)(esi + 0xbcu), ecx);
L_8cf32b: /* 8cf32b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8cf32c: jmp 0x8cf2d1 */
  goto L_8cf2d1;
L_8cf32e: /* 8cf32e: mov eax, dword ptr [esi + 0xac] */
  eax = R32((uint32_t)(esi + 0xacu));
/* 8cf334: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 8cf337: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8cf338: mov dword ptr [esi + 0xac], eax */
  W32((uint32_t)(esi + 0xacu), eax);
/* 8cf33e: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 8cf341: mov edi, dword ptr [eax + 0x128c] */
  edi = R32((uint32_t)(eax + 0x128cu));
/* 8cf347: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8cf34a: mov ebx, edi */
  ebx = edi;
/* 8cf34c: imul ebx, ecx */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(ecx);
  ebx = (uint32_t)r;
  }
/* 8cf34f: lea ecx, [ebx + edx] */
  ecx = (uint32_t)(ebx + edx);
/* 8cf352: mov edx, dword ptr [eax + 0x1280] */
  edx = R32((uint32_t)(eax + 0x1280u));
/* 8cf358: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 8cf35b: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 8cf35e: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8cf360: mov dword ptr [ebp - 0x4c], ebx */
  W32((uint32_t)(ebp + 0xffffffb4u), ebx);
/* 8cf363: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 8cf366: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8cf369: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 8cf36c: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* 8cf36f: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 8cf372: add eax, dword ptr [esi + 0x6c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x6cu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cf375: mov ebx, dword ptr [esi + 0x68] */
  ebx = R32((uint32_t)(esi + 0x68u));
/* 8cf378: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* 8cf37b: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cf37d: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8cf380: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 8cf383: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 8cf385: mov dword ptr [ebp - 0x40], edi */
  W32((uint32_t)(ebp + 0xffffffc0u), edi);
/* 8cf388: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 8cf38b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8cf38e: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 8cf391: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 8cf394: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cf396: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8cf399: lea edx, [edx + ecx*4] */
  edx = (uint32_t)(edx + ecx*4);
/* 8cf39c: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8cf39e: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8cf3a1: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8cf3a4: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8cf3a7: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 8cf3aa: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8cf3ad: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8cf3b0: fsub dword ptr [ebp - 0x44] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 8cf3b3: mov dword ptr [ebp - 0x3c], edi */
  W32((uint32_t)(ebp + 0xffffffc4u), edi);
/* 8cf3b6: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8cf3b9: push 0x40000000 */
  { uint32_t v = 0x40000000u; esp -= 4; W32(esp, v); }
/* 8cf3be: fsub dword ptr [ebp - 0x48] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 8cf3c1: lea eax, [ebp - 0x90] */
  eax = (uint32_t)(ebp + 0xffffff70u);
/* 8cf3c7: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8cf3ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cf3cb: fsub dword ptr [ebp - 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 8cf3ce: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8cf3d1: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 8cf3d4: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 8cf3d7: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 8cf3da: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8cf3dd: fsub dword ptr [ebp - 0x44] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 8cf3e0: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8cf3e3: fsub dword ptr [ebp - 0x48] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 8cf3e6: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 8cf3e9: fsub dword ptr [ebp - 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 8cf3ec: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8cf3ef: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8cf3f2: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8cf3f5: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x8cf3fbu); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 8cf3fb: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8cf3fe: push 0x40000000 */
  { uint32_t v = 0x40000000u; esp -= 4; W32(esp, v); }
/* 8cf403: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 8cf406: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 8cf40c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cf40d: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 8cf410: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8cf413: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 8cf416: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 8cf419: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8cf41c: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 8cf41f: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 8cf421: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 8cf427: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x8cf42du); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 8cf42d: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8cf430: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 8cf433: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cf436: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8cf439: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 8cf43c: fld dword ptr [ebp - 0x84] */
  { double v = F32((uint32_t)(ebp + 0xffffff7cu)); FPUSH(v); }
/* 8cf442: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 8cf444: lea eax, [esi + 0x70] */
  eax = (uint32_t)(esi + 0x70u);
/* 8cf447: mov edx, eax */
  edx = eax;
/* 8cf449: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8cf44c: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8cf44f: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8cf451: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8cf454: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8cf457: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8cf45a: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8cf45d: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8cf460: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 8cf463: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8cf466: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 8cf468: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 8cf46b: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 8cf46e: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8cf471: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 8cf474: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8cf476: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8cf478: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8cf47a: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8cf47c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8cf47e: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8cf480: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8cf482: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8cf484: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8cf487: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8cf489: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8cf48b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8cf48d: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x8cf493u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 8cf493: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 8cf496: fst qword ptr [ebp - 0x28] */
  WF64((uint32_t)(ebp + 0xffffffd8u), ST0);
/* 8cf499: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cf49c: fstp dword ptr [esi + 0x7c] */
  WF32((uint32_t)(esi + 0x7cu), ST0); FPOP();
/* 8cf49f: add eax, 0x1274 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1274u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cf4a4: xor ecx, ecx */
  ecx = 0;
L_8cf4a6: /* 8cf4a6: cmp ecx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cf4a9: jge 0x8cf4be */
  if ((sf == of)) goto L_8cf4be;
L_8cf4ab: /* 8cf4ab: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8cf4ad: cmp dword ptr [edx + ecx*4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ecx*4))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8cf4b0: je 0x8cf4b5 */
  if (zf) goto L_8cf4b5;
L_8cf4b2: /* 8cf4b2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cf4b3: jmp 0x8cf4a6 */
  goto L_8cf4a6;
L_8cf4b5: /* 8cf4b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cf4b6: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8cf4b9: call 0x6cc4be */
  esp -= 4; W32(esp, 0x8cf4beu); SPILL(); f_6cc4be(); if (g_unwind) return; RELOAD();
L_8cf4be: /* 8cf4be: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 8cf4c1: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8cf4c5: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8cf4cau); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8cf4ca: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 8cf4cd: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8cf4d1: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8cf4d6u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8cf4d6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8cf4d9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cf4da: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cf4db: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8cf4e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cf4e3: mov esp, ebp */
  esp = ebp;
/* 8cf4e5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8cf4e6: ret  */
  esp += 4; SPILL(); return;
}

void f_8ceb4a(void) {
  LOAD_REGS();
L_8ceb4a: /* 8ceb4a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8ceb50: /* 8ceb50: cmp edi, dword ptr [ebp - 0x60] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ceb53: jge 0x8ced45 */
  if ((sf == of)) goto L_8ced45;
L_8ceb59: /* 8ceb59: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8ceb5c: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 8ceb5f: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8ceb62: imul ecx, ecx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x78u);
  ecx = (uint32_t)r;
  }
/* 8ceb65: mov ebx, dword ptr [ecx + edx + 0x350] */
  ebx = R32((uint32_t)(ecx + edx + 0x350u));
/* 8ceb6c: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ceb6e: je 0x8ceb85 */
  if (zf) goto L_8ceb85;
L_8ceb70: /* 8ceb70: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 8ceb75: mov ecx, ebx */
  ecx = ebx;
/* 8ceb77: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8ceb7du); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8ceb7d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ceb7f: je 0x8ceb85 */
  if (zf) goto L_8ceb85;
L_8ceb81: /* 8ceb81: mov ecx, ebx */
  ecx = ebx;
/* 8ceb83: jmp 0x8ceb87 */
  goto L_8ceb87;
L_8ceb85: /* 8ceb85: xor ecx, ecx */
  ecx = 0;
L_8ceb87: /* 8ceb87: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 8ceb8a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ceb8c: jne 0x8cecc2 */
  if (!zf) goto L_8cecc2;
L_8ceb92: /* 8ceb92: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ceb94: je 0x8cecc2 */
  if (zf) goto L_8cecc2;
L_8ceb9a: /* 8ceb9a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8ceb9c: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0x8ceba2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ceba2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ceba4: jne 0x8cecc2 */
  if (!zf) goto L_8cecc2;
L_8cebaa: /* 8cebaa: mov ecx, dword ptr [0xcfa278] */
  ecx = R32((uint32_t)(0xcfa278u));
/* 8cebb0: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8cebb3: jne 0x8cecc2 */
  if (!zf) goto L_8cecc2;
L_8cebb9: /* 8cebb9: mov edx, dword ptr [0xcfab30] */
  edx = R32((uint32_t)(0xcfab30u));
/* 8cebbf: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8cebc2: jne 0x8cecc2 */
  if (!zf) goto L_8cecc2;
L_8cebc8: /* 8cebc8: cmp edi, dword ptr [ebp - 0x60] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cebcb: jge 0x8cec2a */
  if ((sf == of)) goto L_8cec2a;
L_8cebcd: /* 8cebcd: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8cebd0: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 8cebd3: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8cebd6: imul ecx, ecx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x78u);
  ecx = (uint32_t)r;
  }
/* 8cebd9: mov ebx, dword ptr [ecx + edx + 0x350] */
  ebx = R32((uint32_t)(ecx + edx + 0x350u));
/* 8cebe0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cebe2: je 0x8cec29 */
  if (zf) goto L_8cec29;
L_8cebe4: /* 8cebe4: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 8cebe9: mov ecx, ebx */
  ecx = ebx;
/* 8cebeb: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8cebf1u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8cebf1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cebf3: je 0x8cec29 */
  if (zf) goto L_8cec29;
L_8cebf5: /* 8cebf5: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8cebf7: mov ecx, ebx */
  ecx = ebx;
/* 8cebf9: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0x8cebffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cebff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cec01: jne 0x8cec29 */
  if (!zf) goto L_8cec29;
L_8cec03: /* 8cec03: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8cec06: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8cec08: lea ebx, [ecx + edi*4] */
  ebx = (uint32_t)(ecx + edi*4);
/* 8cec0b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cec0d: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 8cec10: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8cec16u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8cec16: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8cec18: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8cec1b: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 8cec1e: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8cec21: cmp edx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cec24: jge 0x8cec2a */
  if ((sf == of)) goto L_8cec2a;
L_8cec26: /* 8cec26: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8cec27: jmp 0x8cebc8 */
  goto L_8cebc8;
L_8cec29: /* 8cec29: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
L_8cec2a: /* 8cec2a: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 8cec2d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cec2f: je 0x8ced3f */
  if (zf) goto L_8ced3f;
L_8cec35: /* 8cec35: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 8cec37: lea ebx, [esi + 0x28] */
  ebx = (uint32_t)(esi + 0x28u);
/* 8cec3a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cec3c: mov ecx, ebx */
  ecx = ebx;
/* 8cec3e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8cec44u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8cec44: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8cec46: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 8cec49: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8cec4c: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cec4e: je 0x8cec70 */
  if (zf) goto L_8cec70;
L_8cec50: /* 8cec50: lea ecx, [ebx + 8] */
  ecx = (uint32_t)(ebx + 0x8u);
/* 8cec53: mov dword ptr [ebx + 4], 0xffffffff */
  W32((uint32_t)(ebx + 0x4u), 0xffffffffu);
/* 8cec5a: call dword ptr [0xcfa28c] */
  esp -= 4; W32(esp, 0x8cec60u); SPILL(); f_4e3dcd(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@XZ */ RELOAD();
/* 8cec60: xor eax, eax */
  eax = 0;
/* 8cec62: mov dword ptr [ebx + 0x14], eax */
  W32((uint32_t)(ebx + 0x14u), eax);
/* 8cec65: mov dword ptr [ebx + 0x18], eax */
  W32((uint32_t)(ebx + 0x18u), eax);
/* 8cec68: mov dword ptr [ebx + 0x1c], eax */
  W32((uint32_t)(ebx + 0x1cu), eax);
/* 8cec6b: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
/* 8cec6e: jmp 0x8cec72 */
  goto L_8cec72;
L_8cec70: /* 8cec70: xor ebx, ebx */
  ebx = 0;
L_8cec72: /* 8cec72: cmp dword ptr [ebp - 0x54], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cec76: jle 0x8cec9e */
  if ((zf || sf != of)) goto L_8cec9e;
L_8cec78: /* 8cec78: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8cec7b: mov eax, dword ptr [edx + 0xb4] */
  eax = R32((uint32_t)(edx + 0xb4u));
/* 8cec81: mov eax, dword ptr [eax + 0x40] */
  eax = R32((uint32_t)(eax + 0x40u));
/* 8cec84: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 8cec87: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8cec89: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x8cec8fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cec8f: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8cec92: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cec94: je 0x8cec9e */
  if (zf) goto L_8cec9e;
L_8cec96: /* 8cec96: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cec98: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 8cec9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cec9c: jmp 0x8ceca4 */
  goto L_8ceca4;
L_8cec9e: /* 8cec9e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ceca0: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 8ceca3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_8ceca4: /* 8ceca4: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8ceca7: call 0x6c9309 */
  esp -= 4; W32(esp, 0x8cecacu); SPILL(); f_6c9309(); if (g_unwind) return; RELOAD();
/* 8cecac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cecae: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8cecb0: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 8cecb3: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 8cecb6: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8cecbcu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8cecbc: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8cecbd: jmp 0x8ceb50 */
  goto L_8ceb50;
L_8cecc2: /* 8cecc2: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8cecc5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8cecc7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cecc9: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 8ceccc: lea ebx, [edx + edi*4] */
  ebx = (uint32_t)(edx + edi*4);
/* 8ceccf: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8cecd5u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8cecd5: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8cecd7: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8cecda: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 8cecdc: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 8cecdf: lea ebx, [esi + 0x28] */
  ebx = (uint32_t)(esi + 0x28u);
/* 8cece2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cece4: mov ecx, ebx */
  ecx = ebx;
/* 8cece6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8cececu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8cecec: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8cecee: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 8cecf1: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8cecf4: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cecf6: je 0x8ced18 */
  if (zf) goto L_8ced18;
L_8cecf8: /* 8cecf8: lea ecx, [ebx + 8] */
  ecx = (uint32_t)(ebx + 0x8u);
/* 8cecfb: mov dword ptr [ebx + 4], 0xffffffff */
  W32((uint32_t)(ebx + 0x4u), 0xffffffffu);
/* 8ced02: call dword ptr [0xcfa28c] */
  esp -= 4; W32(esp, 0x8ced08u); SPILL(); f_4e3dcd(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@XZ */ RELOAD();
/* 8ced08: xor eax, eax */
  eax = 0;
/* 8ced0a: mov dword ptr [ebx + 0x14], eax */
  W32((uint32_t)(ebx + 0x14u), eax);
/* 8ced0d: mov dword ptr [ebx + 0x18], eax */
  W32((uint32_t)(ebx + 0x18u), eax);
/* 8ced10: mov dword ptr [ebx + 0x1c], eax */
  W32((uint32_t)(ebx + 0x1cu), eax);
/* 8ced13: mov dword ptr [ebx + 0x20], eax */
  W32((uint32_t)(ebx + 0x20u), eax);
/* 8ced16: jmp 0x8ced1a */
  goto L_8ced1a;
L_8ced18: /* 8ced18: xor ebx, ebx */
  ebx = 0;
L_8ced1a: /* 8ced1a: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8ced1d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 8ced1f: lea edx, [ebp - 0x58] */
  edx = (uint32_t)(ebp + 0xffffffa8u);
/* 8ced22: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ced23: call 0x6c9309 */
  esp -= 4; W32(esp, 0x8ced28u); SPILL(); f_6c9309(); if (g_unwind) return; RELOAD();
/* 8ced28: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ced2a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8ced2c: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 8ced2f: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 8ced32: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8ced38u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8ced38: mov dword ptr [ebp - 0x34], 1 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x1u);
L_8ced3f: /* 8ced3f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8ced40: jmp 0x8ceb50 */
  goto L_8ceb50;
L_8ced45: /* 8ced45: xor ebx, ebx */
  ebx = 0;
L_8ced47: /* 8ced47: cmp ebx, dword ptr [esi + 0x2c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ced4a: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 8ced4d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ced4f: jge 0x8cf10c */
  if ((sf == of)) goto L_8cf10c;
L_8ced55: /* 8ced55: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8ced58: lea edi, [ebx + ebx*8] */
  edi = (uint32_t)(ebx + ebx*8);
/* 8ced5b: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8ced5e: lea ecx, [edi + eax + 8] */
  ecx = (uint32_t)(edi + eax + 0x8u);
/* 8ced62: call dword ptr [0xcfa3a0] */
  esp -= 4; W32(esp, 0x8ced68u); SPILL(); f_4e264e(); if (g_unwind) return; /* Core!?Empty@?$TArray@G@@QAEXH@Z */ RELOAD();
/* 8ced68: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8ced6b: xor ecx, ecx */
  ecx = 0;
/* 8ced6d: mov dword ptr [edi + edx + 0x14], ecx */
  W32((uint32_t)(edi + edx + 0x14u), ecx);
L_8ced71: /* 8ced71: cmp ecx, dword ptr [esi + 0x64] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x64u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ced74: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8ced77: jge 0x8cf02c */
  if ((sf == of)) goto L_8cf02c;
L_8ced7d: /* 8ced7d: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
L_8ced84: /* 8ced84: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8ced87: cmp eax, dword ptr [esi + 0x60] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ced8a: jge 0x8cf026 */
  if ((sf == of)) goto L_8cf026;
L_8ced90: /* 8ced90: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 8ced93: mov edx, dword ptr [esi + 0x6c] */
  edx = R32((uint32_t)(esi + 0x6cu));
/* 8ced96: mov edi, dword ptr [esi + 0x68] */
  edi = R32((uint32_t)(esi + 0x68u));
/* 8ced99: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8ced9c: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8ced9e: mov ecx, dword ptr [eax + 0x128c] */
  ecx = R32((uint32_t)(eax + 0x128cu));
/* 8ceda4: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 8ceda7: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8ceda9: mov edi, dword ptr [eax + 0x131c] */
  edi = R32((uint32_t)(eax + 0x131cu));
/* 8cedaf: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cedb1: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 8cedb4: mov edx, ecx */
  edx = ecx;
/* 8cedb6: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 8cedb9: mov ebx, 1 */
  ebx = 0x1u;
/* 8cedbe: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 8cedc0: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8cedc3: test dword ptr [edi + edx*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + edx*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cedc6: je 0x8cf014 */
  if (zf) goto L_8cf014;
L_8cedcc: /* 8cedcc: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 8cedcf: movzx edx, word ptr [esi + 0x90] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0x90u)));
/* 8cedd6: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cedd9: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cedda: mov edi, ecx */
  edi = ecx;
/* 8ceddc: imul edi, dword ptr [ebp - 0x14] */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  edi = (uint32_t)r;
  }
/* 8cede0: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8cede2: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8cede4: lea ebx, [edi + 1] */
  ebx = (uint32_t)(edi + 0x1u);
/* 8cede7: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8cedea: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ceded: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8cedee: imul ebx, ecx */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(ecx);
  ebx = (uint32_t)r;
  }
/* 8cedf1: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8cedf3: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cedf6: lea ecx, [ebx + edx + 1] */
  ecx = (uint32_t)(ebx + edx + 0x1u);
/* 8cedfa: mov ebx, dword ptr [esi + 0x68] */
  ebx = R32((uint32_t)(esi + 0x68u));
/* 8cedfd: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8cee00: mov ecx, dword ptr [eax + 0x128c] */
  ecx = R32((uint32_t)(eax + 0x128cu));
/* 8cee06: imul ecx, dword ptr [ebp - 0x30] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  ecx = (uint32_t)r;
  }
/* 8cee0a: mov eax, dword ptr [eax + 0x1328] */
  eax = R32((uint32_t)(eax + 0x1328u));
/* 8cee10: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cee12: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cee14: mov edx, ecx */
  edx = ecx;
/* 8cee16: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 8cee19: mov ebx, 1 */
  ebx = 0x1u;
/* 8cee1e: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 8cee20: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8cee23: test dword ptr [eax + edx*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cee26: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8cee29: je 0x8cef1d */
  if (zf) goto L_8cef1d;
L_8cee2f: /* 8cee2f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cee31: je 0x8cee4b */
  if (zf) goto L_8cee4b;
L_8cee33: /* 8cee33: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cee36: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cee39: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cee3b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cee3d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cee3e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cee3f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cee40: mov ecx, esi */
  ecx = esi;
/* 8cee42: call 0x6cc1df */
  esp -= 4; W32(esp, 0x8cee47u); SPILL(); f_6cc1df(); if (g_unwind) return; RELOAD();
/* 8cee47: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cee49: je 0x8cee9d */
  if (zf) goto L_8cee9d;
L_8cee4b: /* 8cee4b: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8cee4e: mov dword ptr [ebp - 0x30], edi */
  W32((uint32_t)(ebp + 0xffffffd0u), edi);
/* 8cee51: lea edi, [ebx + ebx*8] */
  edi = (uint32_t)(ebx + ebx*8);
/* 8cee54: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 8cee57: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8cee5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cee5b: lea ecx, [edi + ecx + 8] */
  ecx = (uint32_t)(edi + ecx + 0x8u);
/* 8cee5f: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cee65u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cee65: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cee68: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8cee69: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8cee6c: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8cee6f: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 8cee72: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cee73: lea ecx, [edi + eax + 8] */
  ecx = (uint32_t)(edi + eax + 0x8u);
/* 8cee77: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cee7du); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cee7d: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cee80: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8cee83: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 8cee86: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 8cee89: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cee8a: lea ecx, [edi + eax + 8] */
  ecx = (uint32_t)(edi + eax + 0x8u);
/* 8cee8e: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cee94u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cee94: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8cee97: lea eax, [edi + ecx + 0x14] */
  eax = (uint32_t)(edi + ecx + 0x14u);
/* 8cee9b: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
L_8cee9d: /* 8cee9d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cee9f: je 0x8ceebd */
  if (zf) goto L_8ceebd;
L_8ceea1: /* 8ceea1: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ceea4: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8ceea7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8ceea9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8ceeab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ceeac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ceead: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ceeae: mov ecx, esi */
  ecx = esi;
/* 8ceeb0: call 0x6cc1df */
  esp -= 4; W32(esp, 0x8ceeb5u); SPILL(); f_6cc1df(); if (g_unwind) return; RELOAD();
/* 8ceeb5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ceeb7: je 0x8cf017 */
  if (zf) goto L_8cf017;
L_8ceebd: /* 8ceebd: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8ceec0: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8ceec3: lea edi, [ebx + ebx*8] */
  edi = (uint32_t)(ebx + ebx*8);
/* 8ceec6: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8ceec9: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8ceeca: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8ceecd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ceece: lea ecx, [edi + edx + 8] */
  ecx = (uint32_t)(edi + edx + 0x8u);
/* 8ceed2: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8ceed5: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8ceedbu); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8ceedb: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8ceede: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8ceee1: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8ceee4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ceee5: lea ecx, [edi + edx + 8] */
  ecx = (uint32_t)(edi + edx + 0x8u);
/* 8ceee9: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8ceeec: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8ceef2u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8ceef2: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8ceef5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ceef8: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 8ceefb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ceefc: lea ecx, [edi + edx + 8] */
  ecx = (uint32_t)(edi + edx + 0x8u);
/* 8cef00: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8cef03: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cef09u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cef09: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8cef0c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cef0f: lea edi, [edi + eax + 0x14] */
  edi = (uint32_t)(edi + eax + 0x14u);
/* 8cef13: inc dword ptr [edi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edi), r);
  }
/* 8cef15: inc dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 8cef18: jmp 0x8ced84 */
  goto L_8ced84;
L_8cef1d: /* 8cef1d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cef1f: je 0x8cef39 */
  if (zf) goto L_8cef39;
L_8cef21: /* 8cef21: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cef24: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cef27: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cef29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cef2b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cef2c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cef2d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cef2e: mov ecx, esi */
  ecx = esi;
/* 8cef30: call 0x6cc1df */
  esp -= 4; W32(esp, 0x8cef35u); SPILL(); f_6cc1df(); if (g_unwind) return; RELOAD();
/* 8cef35: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cef37: je 0x8cef97 */
  if (zf) goto L_8cef97;
L_8cef39: /* 8cef39: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8cef3c: lea eax, [ebx + ebx*8] */
  eax = (uint32_t)(ebx + ebx*8);
/* 8cef3f: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8cef42: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cef45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cef46: lea ecx, [eax + edx + 8] */
  ecx = (uint32_t)(eax + edx + 0x8u);
/* 8cef4a: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 8cef4d: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8cef50: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cef56u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cef56: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cef59: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8cef5c: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8cef5f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8cef60: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8cef63: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 8cef66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cef67: lea ecx, [edx + ecx + 8] */
  ecx = (uint32_t)(edx + ecx + 0x8u);
/* 8cef6b: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cef71u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cef71: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cef74: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8cef77: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8cef7a: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8cef7d: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cef80: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cef81: lea ecx, [eax + edx + 8] */
  ecx = (uint32_t)(eax + edx + 0x8u);
/* 8cef85: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cef8bu); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cef8b: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8cef8e: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8cef91: lea eax, [edx + ecx + 0x14] */
  eax = (uint32_t)(edx + ecx + 0x14u);
/* 8cef95: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
L_8cef97: /* 8cef97: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cef99: je 0x8cefb3 */
  if (zf) goto L_8cefb3;
L_8cef9b: /* 8cef9b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cef9e: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cefa1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cefa3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cefa5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cefa6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cefa7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cefa8: mov ecx, esi */
  ecx = esi;
/* 8cefaa: call 0x6cc1df */
  esp -= 4; W32(esp, 0x8cefafu); SPILL(); f_6cc1df(); if (g_unwind) return; RELOAD();
/* 8cefaf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cefb1: je 0x8cf017 */
  if (zf) goto L_8cf017;
L_8cefb3: /* 8cefb3: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8cefb6: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 8cefb9: lea edi, [ebx + ebx*8] */
  edi = (uint32_t)(ebx + ebx*8);
/* 8cefbc: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cefbf: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8cefc2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cefc3: lea ecx, [edi + eax + 8] */
  ecx = (uint32_t)(edi + eax + 0x8u);
/* 8cefc7: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cefcdu); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cefcd: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cefd0: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8cefd3: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cefd6: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 8cefd9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cefda: lea ecx, [edi + eax + 8] */
  ecx = (uint32_t)(edi + eax + 0x8u);
/* 8cefde: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cefe4u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cefe4: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cefe7: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8cefea: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cefed: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 8ceff0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ceff1: lea ecx, [edi + eax + 8] */
  ecx = (uint32_t)(edi + eax + 0x8u);
/* 8ceff5: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8ceffbu); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8ceffb: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8ceffe: mov eax, dword ptr [edi + ecx + 0x14] */
  eax = R32((uint32_t)(edi + ecx + 0x14u));
/* 8cf002: lea edi, [edi + ecx + 0x14] */
  edi = (uint32_t)(edi + ecx + 0x14u);
/* 8cf006: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cf009: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8cf00a: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 8cf00c: inc dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 8cf00f: jmp 0x8ced84 */
  goto L_8ced84;
L_8cf014: /* 8cf014: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
L_8cf017: /* 8cf017: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cf01a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cf01d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8cf01e: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8cf021: jmp 0x8ced84 */
  goto L_8ced84;
L_8cf026: /* 8cf026: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cf027: jmp 0x8ced71 */
  goto L_8ced71;
L_8cf02c: /* 8cf02c: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8cf02f: lea edi, [ebx + ebx*8] */
  edi = (uint32_t)(ebx + ebx*8);
/* 8cf032: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8cf035: mov ecx, dword ptr [edi + edx + 0xc] */
  ecx = R32((uint32_t)(edi + edx + 0xcu));
/* 8cf039: lea eax, [edi + edx] */
  eax = (uint32_t)(edi + edx);
/* 8cf03c: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 8cf03f: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8cf042: mov edx, dword ptr [eax + edi + 0x18] */
  edx = R32((uint32_t)(eax + edi + 0x18u));
/* 8cf046: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cf048: xor ecx, ecx */
  ecx = 0;
/* 8cf04a: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8cf04c: je 0x8cf0fa */
  if (zf) goto L_8cf0fa;
L_8cf052: /* 8cf052: mov dword ptr [eax + 0x1c], 0x7fffffff */
  W32((uint32_t)(eax + 0x1cu), 0x7fffffffu);
/* 8cf059: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8cf05c: mov dword ptr [edi + edx + 0x20], ecx */
  W32((uint32_t)(edi + edx + 0x20u), ecx);
/* 8cf060: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
L_8cf063: /* 8cf063: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 8cf066: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cf069: mov edx, dword ptr [eax + edi + 0x18] */
  edx = R32((uint32_t)(eax + edi + 0x18u));
/* 8cf06d: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cf06f: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cf071: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8cf074: jge 0x8cf106 */
  if ((sf == of)) goto L_8cf106;
L_8cf07a: /* 8cf07a: mov edx, ecx */
  edx = ecx;
/* 8cf07c: mov ecx, eax */
  ecx = eax;
/* 8cf07e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cf07f: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cf082: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8cf088u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8cf088: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 8cf08b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cf08e: cmp eax, dword ptr [ecx + 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8cf091: jae 0x8cf0b2 */
  if (!cf) goto L_8cf0b2;
L_8cf093: /* 8cf093: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8cf096: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cf099: lea eax, [edi + edx] */
  eax = (uint32_t)(edi + edx);
/* 8cf09c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cf09d: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 8cf0a0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8cf0a3: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8cf0a9u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8cf0a9: movzx edx, word ptr [eax] */
  edx = (uint32_t)(R16((uint32_t)(eax)));
/* 8cf0ac: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cf0af: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
L_8cf0b2: /* 8cf0b2: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8cf0b5: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cf0b8: lea eax, [edi + ecx] */
  eax = (uint32_t)(edi + ecx);
/* 8cf0bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cf0bc: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 8cf0bf: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8cf0c2: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8cf0c8u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8cf0c8: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 8cf0cb: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cf0ce: cmp eax, dword ptr [ecx + 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8cf0d1: jbe 0x8cf0f2 */
  if ((cf | zf)) goto L_8cf0f2;
L_8cf0d3: /* 8cf0d3: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8cf0d6: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cf0d9: lea eax, [edi + edx] */
  eax = (uint32_t)(edi + edx);
/* 8cf0dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cf0dd: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 8cf0e0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8cf0e3: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8cf0e9u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8cf0e9: movzx edx, word ptr [eax] */
  edx = (uint32_t)(R16((uint32_t)(eax)));
/* 8cf0ec: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cf0ef: mov dword ptr [eax + 0x20], edx */
  W32((uint32_t)(eax + 0x20u), edx);
L_8cf0f2: /* 8cf0f2: inc dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 8cf0f5: jmp 0x8cf063 */
  goto L_8cf063;
L_8cf0fa: /* 8cf0fa: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cf0fc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cf0fd: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 8cf100: call 0x6cab8c */
  esp -= 4; W32(esp, 0x8cf105u); SPILL(); f_6cab8c(); if (g_unwind) return; RELOAD();
/* 8cf105: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
L_8cf106: /* 8cf106: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8cf107: jmp 0x8ced47 */
  goto L_8ced47;
L_8cf10c: /* 8cf10c: lea ecx, [esi + 0x98] */
  ecx = (uint32_t)(esi + 0x98u);
/* 8cf112: call dword ptr [0xcfa3a0] */
  esp -= 4; W32(esp, 0x8cf118u); SPILL(); f_4e264e(); if (g_unwind) return; /* Core!?Empty@?$TArray@G@@QAEXH@Z */ RELOAD();
/* 8cf118: mov dword ptr [esi + 0xb0], 0 */
  W32((uint32_t)(esi + 0xb0u), 0x0u);
/* 8cf122: xor ecx, ecx */
  ecx = 0;
L_8cf124: /* 8cf124: cmp ecx, dword ptr [esi + 0x64] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x64u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cf127: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8cf12a: jge 0x8cf2b3 */
  if ((sf == of)) goto L_8cf2b3;
L_8cf130: /* 8cf130: xor ebx, ebx */
  ebx = 0;
L_8cf132: /* 8cf132: cmp ebx, dword ptr [esi + 0x60] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cf135: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 8cf138: jge 0x8cf2ad */
  if ((sf == of)) goto L_8cf2ad;
L_8cf13e: /* 8cf13e: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 8cf141: mov edx, dword ptr [esi + 0x6c] */
  edx = R32((uint32_t)(esi + 0x6cu));
/* 8cf144: mov edi, dword ptr [esi + 0x68] */
  edi = R32((uint32_t)(esi + 0x68u));
/* 8cf147: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cf149: mov ecx, dword ptr [eax + 0x128c] */
  ecx = R32((uint32_t)(eax + 0x128cu));
/* 8cf14f: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 8cf152: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cf154: mov edi, dword ptr [eax + 0x131c] */
  edi = R32((uint32_t)(eax + 0x131cu));
/* 8cf15a: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cf15c: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8cf15f: mov edx, ecx */
  edx = ecx;
/* 8cf161: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 8cf164: mov ebx, 1 */
  ebx = 0x1u;
/* 8cf169: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 8cf16b: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8cf16e: test dword ptr [edi + edx*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + edx*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cf171: je 0x8cf2a1 */
  if (zf) goto L_8cf2a1;
L_8cf177: /* 8cf177: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 8cf17a: movzx edx, word ptr [esi + 0x90] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0x90u)));
/* 8cf181: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8cf184: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cf185: mov edi, ecx */
  edi = ecx;
/* 8cf187: imul edi, dword ptr [ebp - 0x14] */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  edi = (uint32_t)r;
  }
/* 8cf18b: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8cf18d: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8cf18f: lea ebx, [edi + 1] */
  ebx = (uint32_t)(edi + 0x1u);
/* 8cf192: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8cf195: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cf198: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8cf199: imul ebx, ecx */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(ecx);
  ebx = (uint32_t)r;
  }
/* 8cf19c: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8cf19e: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8cf1a1: lea ecx, [ebx + edx + 1] */
  ecx = (uint32_t)(ebx + edx + 0x1u);
/* 8cf1a5: mov ebx, dword ptr [esi + 0x68] */
  ebx = R32((uint32_t)(esi + 0x68u));
/* 8cf1a8: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8cf1ab: mov ecx, dword ptr [eax + 0x128c] */
  ecx = R32((uint32_t)(eax + 0x128cu));
/* 8cf1b1: imul ecx, dword ptr [ebp - 0x24] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  ecx = (uint32_t)r;
  }
/* 8cf1b5: mov eax, dword ptr [eax + 0x1328] */
  eax = R32((uint32_t)(eax + 0x1328u));
/* 8cf1bb: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cf1bd: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cf1bf: mov edx, ecx */
  edx = ecx;
/* 8cf1c1: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 8cf1c4: mov ebx, 1 */
  ebx = 0x1u;
/* 8cf1c9: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 8cf1cb: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8cf1ce: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 8cf1d1: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 8cf1d4: test ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cf1d6: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cf1d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cf1da: je 0x8cf234 */
  if (zf) goto L_8cf234;
L_8cf1dc: /* 8cf1dc: lea edi, [esi + 0x98] */
  edi = (uint32_t)(esi + 0x98u);
/* 8cf1e2: mov ecx, edi */
  ecx = edi;
/* 8cf1e4: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf1eau); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf1ea: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cf1ed: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cf1f0: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 8cf1f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cf1f2: mov ecx, edi */
  ecx = edi;
/* 8cf1f4: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 8cf1f7: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf1fdu); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf1fd: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cf200: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cf203: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cf204: mov ecx, edi */
  ecx = edi;
/* 8cf206: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8cf209: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf20fu); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf20f: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cf212: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cf213: mov ecx, edi */
  ecx = edi;
/* 8cf215: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 8cf218: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf21eu); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf21e: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cf221: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cf224: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cf225: mov ecx, edi */
  ecx = edi;
/* 8cf227: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8cf22a: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf230u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf230: mov ecx, edi */
  ecx = edi;
/* 8cf232: jmp 0x8cf28a */
  goto L_8cf28a;
L_8cf234: /* 8cf234: lea ebx, [esi + 0x98] */
  ebx = (uint32_t)(esi + 0x98u);
/* 8cf23a: mov ecx, ebx */
  ecx = ebx;
/* 8cf23c: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf242u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf242: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cf245: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cf248: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8cf249: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cf24a: mov ecx, ebx */
  ecx = ebx;
/* 8cf24c: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8cf24f: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf255u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf255: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cf258: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cf25b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cf25c: mov ecx, ebx */
  ecx = ebx;
/* 8cf25e: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8cf261: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf267u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf267: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cf26a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cf26b: mov ecx, ebx */
  ecx = ebx;
/* 8cf26d: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 8cf270: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf276u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf276: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cf279: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8cf27c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cf27d: mov ecx, ebx */
  ecx = ebx;
/* 8cf27f: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8cf282: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf288u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf288: mov ecx, ebx */
  ecx = ebx;
L_8cf28a: /* 8cf28a: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cf28d: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 8cf290: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cf291: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8cf294: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8cf29au); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8cf29a: add dword ptr [esi + 0xb0], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xb0u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi + 0xb0u), r);
  }
L_8cf2a1: /* 8cf2a1: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8cf2a4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cf2a7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8cf2a8: jmp 0x8cf132 */
  goto L_8cf132;
L_8cf2ad: /* 8cf2ad: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cf2ae: jmp 0x8cf124 */
  goto L_8cf124;
L_8cf2b3: /* 8cf2b3: mov eax, dword ptr [esi + 0x9c] */
  eax = R32((uint32_t)(esi + 0x9cu));
/* 8cf2b9: xor edi, edi */
  edi = 0;
/* 8cf2bb: mov dword ptr [esi + 0xb4], eax */
  W32((uint32_t)(esi + 0xb4u), eax);
/* 8cf2c1: mov dword ptr [esi + 0xb8], 0x7fffffff */
  W32((uint32_t)(esi + 0xb8u), 0x7fffffffu);
/* 8cf2cb: mov dword ptr [esi + 0xbc], edi */
  W32((uint32_t)(esi + 0xbcu), edi);
L_8cf2d1: /* 8cf2d1: cmp edi, dword ptr [esi + 0xb4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xb4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cf2d7: jge 0x8cf32e */
  if ((sf == of)) goto L_8cf32e;
L_8cf2d9: /* 8cf2d9: lea ebx, [esi + 0x98] */
  ebx = (uint32_t)(esi + 0x98u);
/* 8cf2df: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cf2e0: mov ecx, ebx */
  ecx = ebx;
/* 8cf2e2: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8cf2e8u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8cf2e8: movzx ecx, word ptr [eax] */
  ecx = (uint32_t)(R16((uint32_t)(eax)));
/* 8cf2eb: cmp ecx, dword ptr [esi + 0xb8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xb8u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8cf2f1: jae 0x8cf305 */
  if (!cf) goto L_8cf305;
L_8cf2f3: /* 8cf2f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cf2f4: mov ecx, ebx */
  ecx = ebx;
/* 8cf2f6: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8cf2fcu); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8cf2fc: movzx edx, word ptr [eax] */
  edx = (uint32_t)(R16((uint32_t)(eax)));
/* 8cf2ff: mov dword ptr [esi + 0xb8], edx */
  W32((uint32_t)(esi + 0xb8u), edx);
L_8cf305: /* 8cf305: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cf306: mov ecx, ebx */
  ecx = ebx;
/* 8cf308: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8cf30eu); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8cf30e: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 8cf311: cmp eax, dword ptr [esi + 0xbc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xbcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8cf317: jbe 0x8cf32b */
  if ((cf | zf)) goto L_8cf32b;
L_8cf319: /* 8cf319: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cf31a: mov ecx, ebx */
  ecx = ebx;
/* 8cf31c: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8cf322u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8cf322: movzx ecx, word ptr [eax] */
  ecx = (uint32_t)(R16((uint32_t)(eax)));
/* 8cf325: mov dword ptr [esi + 0xbc], ecx */
  W32((uint32_t)(esi + 0xbcu), ecx);
L_8cf32b: /* 8cf32b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8cf32c: jmp 0x8cf2d1 */
  goto L_8cf2d1;
L_8cf32e: /* 8cf32e: mov eax, dword ptr [esi + 0xac] */
  eax = R32((uint32_t)(esi + 0xacu));
/* 8cf334: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 8cf337: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8cf338: mov dword ptr [esi + 0xac], eax */
  W32((uint32_t)(esi + 0xacu), eax);
/* 8cf33e: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 8cf341: mov edi, dword ptr [eax + 0x128c] */
  edi = R32((uint32_t)(eax + 0x128cu));
/* 8cf347: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8cf34a: mov ebx, edi */
  ebx = edi;
/* 8cf34c: imul ebx, ecx */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(ecx);
  ebx = (uint32_t)r;
  }
/* 8cf34f: lea ecx, [ebx + edx] */
  ecx = (uint32_t)(ebx + edx);
/* 8cf352: mov edx, dword ptr [eax + 0x1280] */
  edx = R32((uint32_t)(eax + 0x1280u));
/* 8cf358: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 8cf35b: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 8cf35e: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8cf360: mov dword ptr [ebp - 0x4c], ebx */
  W32((uint32_t)(ebp + 0xffffffb4u), ebx);
/* 8cf363: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 8cf366: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8cf369: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 8cf36c: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* 8cf36f: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 8cf372: add eax, dword ptr [esi + 0x6c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x6cu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cf375: mov ebx, dword ptr [esi + 0x68] */
  ebx = R32((uint32_t)(esi + 0x68u));
/* 8cf378: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* 8cf37b: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cf37d: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8cf380: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 8cf383: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 8cf385: mov dword ptr [ebp - 0x40], edi */
  W32((uint32_t)(ebp + 0xffffffc0u), edi);
/* 8cf388: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 8cf38b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8cf38e: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 8cf391: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 8cf394: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cf396: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8cf399: lea edx, [edx + ecx*4] */
  edx = (uint32_t)(edx + ecx*4);
/* 8cf39c: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8cf39e: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8cf3a1: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8cf3a4: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8cf3a7: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 8cf3aa: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8cf3ad: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8cf3b0: fsub dword ptr [ebp - 0x44] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 8cf3b3: mov dword ptr [ebp - 0x3c], edi */
  W32((uint32_t)(ebp + 0xffffffc4u), edi);
/* 8cf3b6: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8cf3b9: push 0x40000000 */
  { uint32_t v = 0x40000000u; esp -= 4; W32(esp, v); }
/* 8cf3be: fsub dword ptr [ebp - 0x48] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 8cf3c1: lea eax, [ebp - 0x90] */
  eax = (uint32_t)(ebp + 0xffffff70u);
/* 8cf3c7: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8cf3ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cf3cb: fsub dword ptr [ebp - 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 8cf3ce: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8cf3d1: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 8cf3d4: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 8cf3d7: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 8cf3da: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8cf3dd: fsub dword ptr [ebp - 0x44] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 8cf3e0: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8cf3e3: fsub dword ptr [ebp - 0x48] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 8cf3e6: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 8cf3e9: fsub dword ptr [ebp - 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 8cf3ec: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8cf3ef: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8cf3f2: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8cf3f5: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x8cf3fbu); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 8cf3fb: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8cf3fe: push 0x40000000 */
  { uint32_t v = 0x40000000u; esp -= 4; W32(esp, v); }
/* 8cf403: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 8cf406: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 8cf40c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cf40d: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 8cf410: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8cf413: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 8cf416: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 8cf419: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8cf41c: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 8cf41f: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 8cf421: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 8cf427: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x8cf42du); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 8cf42d: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8cf430: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 8cf433: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cf436: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8cf439: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 8cf43c: fld dword ptr [ebp - 0x84] */
  { double v = F32((uint32_t)(ebp + 0xffffff7cu)); FPUSH(v); }
/* 8cf442: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 8cf444: lea eax, [esi + 0x70] */
  eax = (uint32_t)(esi + 0x70u);
/* 8cf447: mov edx, eax */
  edx = eax;
/* 8cf449: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8cf44c: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8cf44f: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8cf451: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8cf454: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8cf457: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8cf45a: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8cf45d: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8cf460: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 8cf463: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8cf466: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 8cf468: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 8cf46b: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 8cf46e: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8cf471: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 8cf474: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8cf476: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8cf478: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8cf47a: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8cf47c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8cf47e: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8cf480: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8cf482: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8cf484: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8cf487: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8cf489: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8cf48b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8cf48d: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x8cf493u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 8cf493: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 8cf496: fst qword ptr [ebp - 0x28] */
  WF64((uint32_t)(ebp + 0xffffffd8u), ST0);
/* 8cf499: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cf49c: fstp dword ptr [esi + 0x7c] */
  WF32((uint32_t)(esi + 0x7cu), ST0); FPOP();
/* 8cf49f: add eax, 0x1274 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1274u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cf4a4: xor ecx, ecx */
  ecx = 0;
L_8cf4a6: /* 8cf4a6: cmp ecx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cf4a9: jge 0x8cf4be */
  if ((sf == of)) goto L_8cf4be;
L_8cf4ab: /* 8cf4ab: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8cf4ad: cmp dword ptr [edx + ecx*4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ecx*4))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8cf4b0: je 0x8cf4b5 */
  if (zf) goto L_8cf4b5;
L_8cf4b2: /* 8cf4b2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8cf4b3: jmp 0x8cf4a6 */
  goto L_8cf4a6;
L_8cf4b5: /* 8cf4b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cf4b6: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8cf4b9: call 0x6cc4be */
  esp -= 4; W32(esp, 0x8cf4beu); SPILL(); f_6cc4be(); if (g_unwind) return; RELOAD();
L_8cf4be: /* 8cf4be: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 8cf4c1: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8cf4c5: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8cf4cau); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8cf4ca: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 8cf4cd: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8cf4d1: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8cf4d6u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8cf4d6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8cf4d9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cf4da: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cf4db: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8cf4e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cf4e3: mov esp, ebp */
  esp = ebp;
/* 8cf4e5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8cf4e6: ret  */
  esp += 4; SPILL(); return;
}

void f_8cf4e7(void) {
  LOAD_REGS();
L_8cf4e7: /* 8cf4e7: mov eax, dword ptr [ebp - 0x78] */
  eax = R32((uint32_t)(ebp + 0xffffff88u));
/* 8cf4ea: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8cf4ef: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 8cf4f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cf4f3: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 8cf4f6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8cf4fbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8cf4fb(); return;
}

void f_8cf4fb(void) {
  LOAD_REGS();
L_8cf4fb: /* 8cf4fb: push 0xa1c768 */
  { uint32_t v = 0xa1c768u; esp -= 4; W32(esp, v); }
/* 8cf500: push 0xaec894 */
  { uint32_t v = 0xaec894u; esp -= 4; W32(esp, v); }
/* 8cf505: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8cf50bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8cf50b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cf50e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cf510: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cf512: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8cf517u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8cf517: guest_badaddr(0x8cf517); return;
}

void f_8cf880(void) {
  LOAD_REGS();
L_8cf880: /* 8cf880: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8cf881: mov ebp, esp */
  ebp = esp;
/* 8cf883: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8cf885: push 0x9d7dd0 */
  { uint32_t v = 0x9d7dd0u; esp -= 4; W32(esp, v); }
/* 8cf88a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8cf890: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cf891: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8cf898: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cf89b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cf89c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cf89d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cf89e: xor esi, esi */
  esi = 0;
/* 8cf8a0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8cf8a3: mov edi, ecx */
  edi = ecx;
/* 8cf8a5: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
L_8cf8a8: /* 8cf8a8: cmp esi, dword ptr [edi + 0x1278] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1278u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cf8ae: jge 0x8cf92c */
  if ((sf == of)) goto L_8cf92c;
L_8cf8b0: /* 8cf8b0: mov eax, dword ptr [edi + 0x1274] */
  eax = R32((uint32_t)(edi + 0x1274u));
/* 8cf8b6: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 8cf8b9: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 8cf8bc: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cf8bf: jg 0x8cf8f9 */
  if ((!zf && sf == of)) goto L_8cf8f9;
L_8cf8c1: /* 8cf8c1: mov edx, dword ptr [ecx + 0x6c] */
  edx = R32((uint32_t)(ecx + 0x6cu));
/* 8cf8c4: cmp edx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cf8c7: jg 0x8cf8f9 */
  if ((!zf && sf == of)) goto L_8cf8f9;
L_8cf8c9: /* 8cf8c9: mov ebx, dword ptr [ecx + 0x60] */
  ebx = R32((uint32_t)(ecx + 0x60u));
/* 8cf8cc: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8cf8ce: cmp ebx, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cf8d1: jl 0x8cf8f9 */
  if ((sf != of)) goto L_8cf8f9;
L_8cf8d3: /* 8cf8d3: mov eax, dword ptr [ecx + 0x64] */
  eax = R32((uint32_t)(ecx + 0x64u));
/* 8cf8d6: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cf8d8: cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cf8db: jl 0x8cf8f9 */
  if ((sf != of)) goto L_8cf8f9;
L_8cf8dd: /* 8cf8dd: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 8cf8e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cf8e2: je 0x8cf8eb */
  if (zf) goto L_8cf8eb;
L_8cf8e4: /* 8cf8e4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cf8e6: call 0x6c8b7a */
  esp -= 4; W32(esp, 0x8cf8ebu); SPILL(); f_6c8b7a(); if (g_unwind) return; RELOAD();
L_8cf8eb: /* 8cf8eb: mov ecx, dword ptr [edi + 0x1274] */
  ecx = R32((uint32_t)(edi + 0x1274u));
/* 8cf8f1: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 8cf8f4: call 0x6cabf0 */
  esp -= 4; W32(esp, 0x8cf8f9u); SPILL(); f_6cabf0(); if (g_unwind) return; RELOAD();
L_8cf8f9: /* 8cf8f9: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8cf8fa: jmp 0x8cf8a8 */
  goto L_8cf8a8;
L_8cf92c: /* 8cf92c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8cf92f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cf930: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cf931: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8cf938: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cf939: mov esp, ebp */
  esp = ebp;
/* 8cf93b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8cf93c: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_8cf8fc(void) {
  LOAD_REGS();
L_8cf8fc: /* 8cf8fc: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cf8ff: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8cf904: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8cf907: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cf908: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8cf90b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8cf910u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8cf910(); return;
}

void f_8cf910(void) {
  LOAD_REGS();
L_8cf910: /* 8cf910: push 0xa1c7bc */
  { uint32_t v = 0xa1c7bcu; esp -= 4; W32(esp, v); }
/* 8cf915: push 0xaecb88 */
  { uint32_t v = 0xaecb88u; esp -= 4; W32(esp, v); }
/* 8cf91a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8cf920u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8cf920: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cf923: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cf925: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cf927: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8cf92cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8cf92c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8cf92f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cf930: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cf931: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8cf938: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cf939: mov esp, ebp */
  esp = ebp;
/* 8cf93b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8cf93c: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_8cf970(void) {
  LOAD_REGS();
L_8cf970: /* 8cf970: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8cf971: mov ebp, esp */
  ebp = esp;
/* 8cf973: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8cf975: push 0x9d7de0 */
  { uint32_t v = 0x9d7de0u; esp -= 4; W32(esp, v); }
/* 8cf97a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8cf980: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cf981: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8cf988: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cf98b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cf98c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cf98d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8cf990: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cf991: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8cf994: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8cf997: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8cf999: xor ebx, ebx */
  ebx = 0;
/* 8cf99b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cf99c: mov ecx, esi */
  ecx = esi;
/* 8cf99e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8cf9a1: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8cf9a7u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8cf9a7: mov ecx, edi */
  ecx = edi;
/* 8cf9a9: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8cf9afu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8cf9af: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8cf9b1: je 0x8cfa14 */
  if (zf) goto L_8cfa14;
L_8cf9b3: /* 8cf9b3: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8cf9b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cf9b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cf9b8: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8cf9beu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8cf9be: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cf9c1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cf9c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cf9c5: mov ecx, esi */
  ecx = esi;
/* 8cf9c7: call 0x6c93e5 */
  esp -= 4; W32(esp, 0x8cf9ccu); SPILL(); f_6c93e5(); if (g_unwind) return; RELOAD();
/* 8cf9cc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8cf9d0: /* 8cf9d0: cmp ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cf9d3: jge 0x8cfa53 */
  if ((sf == of)) goto L_8cfa53;
L_8cf9d5: /* 8cf9d5: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8cf9d7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cf9d9: mov ecx, esi */
  ecx = esi;
/* 8cf9db: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8cf9e1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8cf9e1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8cf9e3: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8cf9e6: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8cf9e8: mov esi, eax */
  esi = eax;
/* 8cf9ea: je 0x8cf9f7 */
  if (zf) goto L_8cf9f7;
L_8cf9ec: /* 8cf9ec: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8cf9ef: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8cf9f5u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8cf9f5: jmp 0x8cf9f9 */
  goto L_8cf9f9;
L_8cf9f7: /* 8cf9f7: xor esi, esi */
  esi = 0;
L_8cf9f9: /* 8cf9f9: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8cf9fb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cf9fc: mov ecx, edi */
  ecx = edi;
/* 8cf9fe: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8cfa01u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cfa01: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8cfa04: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cfa05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cfa06: call 0x6c90c5 */
  esp -= 4; W32(esp, 0x8cfa0bu); SPILL(); f_6c90c5(); if (g_unwind) return; RELOAD();
/* 8cfa0b: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8cfa0e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cfa11: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8cfa12: jmp 0x8cf9d0 */
  goto L_8cf9d0;
L_8cfa14: /* 8cfa14: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 8cfa17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cfa18: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cfa19: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8cfa1fu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8cfa1f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8cfa22: /* 8cfa22: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8cfa25: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cfa27: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 8cfa2a: jge 0x8cfa53 */
  if ((sf == of)) goto L_8cfa53;
L_8cfa2c: /* 8cfa2c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8cfa2f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8cfa31: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8cfa33: mov esi, ebx */
  esi = ebx;
/* 8cfa35: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8cfa38: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8cfa3a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cfa3b: mov ecx, edi */
  ecx = edi;
/* 8cfa3d: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8cfa40u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cfa40: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8cfa43: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cfa44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cfa45: call 0x6c90c5 */
  esp -= 4; W32(esp, 0x8cfa4au); SPILL(); f_6c90c5(); if (g_unwind) return; RELOAD();
/* 8cfa4a: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8cfa4d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cfa50: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8cfa51: jmp 0x8cfa22 */
  goto L_8cfa22;
L_8cfa53: /* 8cfa53: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8cfa56: mov eax, edi */
  eax = edi;
/* 8cfa58: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cfa59: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cfa5a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8cfa61: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cfa62: mov esp, ebp */
  esp = ebp;
/* 8cfa64: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8cfa65: ret  */
  esp += 4; SPILL(); return;
}

void f_8cfa66(void) {
  LOAD_REGS();
L_8cfa66: /* 8cfa66: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cfa69: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8cfa6e: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 8cfa71: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cfa72: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8cfa75: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8cfa7au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8cfa7a(); return;
}

void f_8cfa7a(void) {
  LOAD_REGS();
L_8cfa7a: /* 8cfa7a: push 0xa1c804 */
  { uint32_t v = 0xa1c804u; esp -= 4; W32(esp, v); }
/* 8cfa7f: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8cfa84: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8cfa8au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8cfa8a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cfa8d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cfa8f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cfa91: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8cfa96u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8cfa96: guest_badaddr(0x8cfa96); return;
}

void f_8cfaf0(void) {
  LOAD_REGS();
L_8cfaf0: /* 8cfaf0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8cfaf1: mov ebp, esp */
  ebp = esp;
/* 8cfaf3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8cfaf5: push 0x9d7df0 */
  { uint32_t v = 0x9d7df0u; esp -= 4; W32(esp, v); }
/* 8cfafa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8cfb00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cfb01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8cfb08: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cfb0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cfb0c: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 8cfb0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cfb10: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8cfb13: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cfb14: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8cfb17: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8cfb19: xor edi, edi */
  edi = 0;
/* 8cfb1b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cfb1c: mov ecx, ebx */
  ecx = ebx;
/* 8cfb1e: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8cfb21: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8cfb27u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8cfb27: mov ecx, esi */
  ecx = esi;
/* 8cfb29: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8cfb2fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8cfb2f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8cfb31: je 0x8cfbb7 */
  if (zf) goto L_8cfbb7;
L_8cfb37: /* 8cfb37: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 8cfb3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cfb3b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cfb3c: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8cfb42u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8cfb42: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cfb45: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cfb48: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cfb49: mov ecx, ebx */
  ecx = ebx;
/* 8cfb4b: call 0x6c5c95 */
  esp -= 4; W32(esp, 0x8cfb50u); SPILL(); f_6c5c95(); if (g_unwind) return; RELOAD();
/* 8cfb50: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 8cfb53: mov edi, dword ptr [0xcfa1b8] */
  edi = R32((uint32_t)(0xcfa1b8u));
/* 8cfb59: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8cfb60: /* 8cfb60: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8cfb63: cmp edx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cfb66: jge 0x8cfbfb */
  if ((sf == of)) goto L_8cfbfb;
L_8cfb6c: /* 8cfb6c: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8cfb6e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8cfb70: mov ecx, ebx */
  ecx = ebx;
/* 8cfb72: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8cfb78u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8cfb78: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8cfb7a: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8cfb7d: lea esi, [ecx + eax*4] */
  esi = (uint32_t)(ecx + eax*4);
/* 8cfb80: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cfb82: je 0x8cfb8e */
  if (zf) goto L_8cfb8e;
L_8cfb84: /* 8cfb84: mov ecx, esi */
  ecx = esi;
/* 8cfb86: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8cfb8cu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8cfb8c: jmp 0x8cfb90 */
  goto L_8cfb90;
L_8cfb8e: /* 8cfb8e: xor esi, esi */
  esi = 0;
L_8cfb90: /* 8cfb90: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8cfb93: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cfb94: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cfb95: call 0x6c90bb */
  esp -= 4; W32(esp, 0x8cfb9au); SPILL(); f_6c90bb(); if (g_unwind) return; RELOAD();
/* 8cfb9a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cfb9d: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 8cfba0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cfba1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cfba2: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8cfba4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cfba4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8cfba6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cfba9: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8cfbac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cfbad: mov ecx, eax */
  ecx = eax;
/* 8cfbaf: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8cfbb2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cfbb2: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 8cfbb5: jmp 0x8cfb60 */
  goto L_8cfb60;
L_8cfbb7: /* 8cfbb7: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
/* 8cfbba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cfbbb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cfbbc: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8cfbc2u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8cfbc2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8cfbc5: /* 8cfbc5: cmp edi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cfbc8: jge 0x8cfbfb */
  if ((sf == of)) goto L_8cfbfb;
L_8cfbca: /* 8cfbca: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8cfbcc: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8cfbcf: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* 8cfbd2: lea esi, [ecx + eax*4] */
  esi = (uint32_t)(ecx + eax*4);
/* 8cfbd5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cfbd6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cfbd7: call 0x6c90bb */
  esp -= 4; W32(esp, 0x8cfbdcu); SPILL(); f_6c90bb(); if (g_unwind) return; RELOAD();
/* 8cfbdc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cfbdf: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 8cfbe2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cfbe3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cfbe4: call dword ptr [0xcfa1b8] */
  esp -= 4; W32(esp, 0x8cfbeau); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* 8cfbea: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8cfbec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cfbef: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8cfbf2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cfbf3: mov ecx, eax */
  ecx = eax;
/* 8cfbf5: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8cfbf8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cfbf8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8cfbf9: jmp 0x8cfbc5 */
  goto L_8cfbc5;
L_8cfbfb: /* 8cfbfb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8cfbfe: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8cfc01: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cfc02: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cfc03: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8cfc0a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cfc0b: mov esp, ebp */
  esp = ebp;
/* 8cfc0d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8cfc0e: ret  */
  esp += 4; SPILL(); return;
}

void f_8cfc0f(void) {
  LOAD_REGS();
L_8cfc0f: /* 8cfc0f: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cfc12: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8cfc17: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 8cfc1a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cfc1b: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8cfc1e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8cfc23u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8cfc23(); return;
}

void f_8cfc23(void) {
  LOAD_REGS();
L_8cfc23: /* 8cfc23: push 0xa1c81c */
  { uint32_t v = 0xa1c81cu; esp -= 4; W32(esp, v); }
/* 8cfc28: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8cfc2d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8cfc33u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8cfc33: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cfc36: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cfc38: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cfc3a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8cfc3fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8cfc3f: guest_badaddr(0x8cfc3f); return;
}

void f_8cfca0(void) {
  LOAD_REGS();
L_8cfca0: /* 8cfca0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8cfca2: push 0x9d7e3b */
  { uint32_t v = 0x9d7e3bu; esp -= 4; W32(esp, v); }
/* 8cfca7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8cfcad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cfcae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8cfcb5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cfcb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cfcb9: mov esi, ecx */
  esi = ecx;
/* 8cfcbb: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 8cfcbf: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x8cfcc5u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 8cfcc5: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 8cfcc8: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 8cfcd0: mov dword ptr [esi], 0xa05fc8 */
  W32((uint32_t)(esi), 0xa05fc8u);
/* 8cfcd6: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8cfcdcu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8cfcdc: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 8cfcdf: mov byte ptr [esp + 0x14], 1 */
  W8((uint32_t)(esp + 0x14u), 0x1u);
/* 8cfce4: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8cfceau); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8cfcea: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 8cfcee: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 8cfcf1: mov byte ptr [esp + 0x14], 2 */
  W8((uint32_t)(esp + 0x14u), 0x2u);
/* 8cfcf6: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 8cfcf9: call dword ptr [0xcfa370] */
  esp -= 4; W32(esp, 0x8cfcffu); SPILL(); f_4e205e(); if (g_unwind) return; /* Core!??0FBox@@QAE@XZ */ RELOAD();
/* 8cfcff: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 8cfd03: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 8cfd07: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 8cfd0b: mov dword ptr [esi + 0x60], ecx */
  W32((uint32_t)(esi + 0x60u), ecx);
/* 8cfd0e: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 8cfd12: mov dword ptr [esi + 0x6c], ecx */
  W32((uint32_t)(esi + 0x6cu), ecx);
/* 8cfd15: lea ecx, [esi + 0x80] */
  ecx = (uint32_t)(esi + 0x80u);
/* 8cfd1b: mov dword ptr [esi + 0x64], edx */
  W32((uint32_t)(esi + 0x64u), edx);
/* 8cfd1e: mov dword ptr [esi + 0x68], eax */
  W32((uint32_t)(esi + 0x68u), eax);
/* 8cfd21: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8cfd27u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8cfd27: lea ecx, [esi + 0x94] */
  ecx = (uint32_t)(esi + 0x94u);
/* 8cfd2d: mov byte ptr [esp + 0x14], 3 */
  W8((uint32_t)(esp + 0x14u), 0x3u);
/* 8cfd32: mov dword ptr [esi + 0x8c], 0xffffffff */
  W32((uint32_t)(esi + 0x8cu), 0xffffffffu);
/* 8cfd3c: call 0x6c89b3 */
  esp -= 4; W32(esp, 0x8cfd41u); SPILL(); f_6c89b3(); if (g_unwind) return; RELOAD();
/* 8cfd41: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 8cfd45: mov eax, esi */
  eax = esi;
/* 8cfd47: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cfd48: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8cfd4f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cfd52: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_8cfd90(void) {
  LOAD_REGS();
L_8cfd90: /* 8cfd90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8cfd91: mov ebp, esp */
  ebp = esp;
/* 8cfd93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8cfd95: push 0x9d7e68 */
  { uint32_t v = 0x9d7e68u; esp -= 4; W32(esp, v); }
/* 8cfd9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8cfda0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cfda1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8cfda8: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cfdab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cfdac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cfdad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cfdae: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8cfdb1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8cfdb4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cfdb5: mov esi, ecx */
  esi = ecx;
/* 8cfdb7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8cfdbe: call dword ptr [0xcfa29c] */
  esp -= 4; W32(esp, 0x8cfdc4u); SPILL(); f_4e1519(); if (g_unwind) return; /* Core!?Serialize@UObject@@UAEXAAVFArchive@@@Z */ RELOAD();
/* 8cfdc4: mov ecx, edi */
  ecx = edi;
/* 8cfdc6: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8cfdccu); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8cfdcc: cmp eax, 0x5e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5eu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cfdcf: jge 0x8cfdfd */
  if ((sf == of)) goto L_8cfdfd;
L_8cfdd1: /* 8cfdd1: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8cfdd4: call dword ptr [0xcfa370] */
  esp -= 4; W32(esp, 0x8cfddau); SPILL(); f_4e205e(); if (g_unwind) return; /* Core!??0FBox@@QAE@XZ */ RELOAD();
/* 8cfdda: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8cfddd: call dword ptr [0xcfaac8] */
  esp -= 4; W32(esp, 0x8cfde3u); SPILL(); f_4e2b35(); if (g_unwind) return; /* Core!??0FSphere@@QAE@XZ */ RELOAD();
/* 8cfde3: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 8cfde6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cfde7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cfde8: call 0x6cc3f1 */
  esp -= 4; W32(esp, 0x8cfdedu); SPILL(); f_6cc3f1(); if (g_unwind) return; RELOAD();
/* 8cfded: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cfdf0: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8cfdf3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cfdf4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cfdf5: call 0x6cb186 */
  esp -= 4; W32(esp, 0x8cfdfau); SPILL(); f_6cb186(); if (g_unwind) return; RELOAD();
/* 8cfdfa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8cfdfd: /* 8cfdfd: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8cfdff: lea eax, [esi + 0x40] */
  eax = (uint32_t)(esi + 0x40u);
/* 8cfe02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cfe03: mov ecx, edi */
  ecx = edi;
/* 8cfe05: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8cfe08u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cfe08: mov ebx, dword ptr [0xcfa280] */
  ebx = R32((uint32_t)(0xcfa280u));
/* 8cfe0e: lea ecx, [esi + 0x60] */
  ecx = (uint32_t)(esi + 0x60u);
/* 8cfe11: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cfe12: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cfe13: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8cfe15u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cfe15: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cfe18: lea edx, [esi + 0x64] */
  edx = (uint32_t)(esi + 0x64u);
/* 8cfe1b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cfe1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cfe1d: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8cfe1fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cfe1f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cfe22: lea ecx, [esi + 0x68] */
  ecx = (uint32_t)(esi + 0x68u);
/* 8cfe25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cfe26: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cfe27: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8cfe29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cfe29: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cfe2c: lea edx, [esi + 0x6c] */
  edx = (uint32_t)(esi + 0x6cu);
/* 8cfe2f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cfe30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cfe31: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8cfe33u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cfe33: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cfe36: mov ecx, edi */
  ecx = edi;
/* 8cfe38: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8cfe3eu); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8cfe3e: cmp eax, 0x75 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x75u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cfe41: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 8cfe44: jge 0x8cfe96 */
  if ((sf == of)) goto L_8cfe96;
L_8cfe46: /* 8cfe46: call dword ptr [0xcfa644] */
  esp -= 4; W32(esp, 0x8cfe4cu); SPILL(); f_4e303a(); if (g_unwind) return; /* Core!?Init@FBox@@QAEXXZ */ RELOAD();
/* 8cfe4c: mov ebx, dword ptr [0xcfa1b4] */
  ebx = R32((uint32_t)(0xcfa1b4u));
/* 8cfe52: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* 8cfe59: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8cfe60: /* 8cfe60: cmp dword ptr [ebp + 8], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cfe64: jge 0x8cfea2 */
  if ((sf == of)) goto L_8cfea2;
L_8cfe66: /* 8cfe66: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 8cfe69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cfe6a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cfe6b: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8cfe6du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cfe6d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cfe70: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8cfe73: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cfe74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cfe75: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8cfe77u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cfe77: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cfe7a: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 8cfe7d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cfe7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cfe7f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8cfe81u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cfe81: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cfe84: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 8cfe87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cfe88: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 8cfe8b: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x8cfe91u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 8cfe91: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 8cfe94: jmp 0x8cfe60 */
  goto L_8cfe60;
L_8cfe96: /* 8cfe96: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cfe97: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cfe98: call 0x6cc3f1 */
  esp -= 4; W32(esp, 0x8cfe9du); SPILL(); f_6cc3f1(); if (g_unwind) return; RELOAD();
/* 8cfe9d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cfea0: jmp 0x8cfea8 */
  goto L_8cfea8;
L_8cfea2: /* 8cfea2: mov ebx, dword ptr [0xcfa280] */
  ebx = R32((uint32_t)(0xcfa280u));
L_8cfea8: /* 8cfea8: lea edx, [esi + 0x34] */
  edx = (uint32_t)(esi + 0x34u);
/* 8cfeab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cfeac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cfead: call 0x6c20ef */
  esp -= 4; W32(esp, 0x8cfeb2u); SPILL(); f_6c20ef(); if (g_unwind) return; RELOAD();
/* 8cfeb2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cfeb5: mov ecx, edi */
  ecx = edi;
/* 8cfeb7: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8cfebdu); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8cfebd: cmp eax, 0x59 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x59u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cfec0: jge 0x8cfed4 */
  if ((sf == of)) goto L_8cfed4;
L_8cfec2: /* 8cfec2: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8cfec4: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 8cfec7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cfec8: mov ecx, edi */
  ecx = edi;
/* 8cfeca: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* 8cfed1: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x8cfed4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8cfed4: /* 8cfed4: mov ecx, edi */
  ecx = edi;
/* 8cfed6: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8cfedcu); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8cfedc: cmp eax, 0x75 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x75u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cfedf: jge 0x8cff06 */
  if ((sf == of)) goto L_8cff06;
L_8cfee1: /* 8cfee1: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 8cfee4: call 0x6c1604 */
  esp -= 4; W32(esp, 0x8cfee9u); SPILL(); f_6c1604(); if (g_unwind) return; RELOAD();
/* 8cfee9: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 8cfeec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cfeed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cfeee: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8cfef2: call 0x6c2775 */
  esp -= 4; W32(esp, 0x8cfef7u); SPILL(); f_6c2775(); if (g_unwind) return; RELOAD();
/* 8cfef7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cfefa: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8cfefd: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8cff01: call 0x6c678f */
  esp -= 4; W32(esp, 0x8cff06u); SPILL(); f_6c678f(); if (g_unwind) return; RELOAD();
L_8cff06: /* 8cff06: mov ecx, edi */
  ecx = edi;
/* 8cff08: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8cff0eu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8cff0e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cff10: je 0x8cff1c */
  if (zf) goto L_8cff1c;
L_8cff12: /* 8cff12: mov dword ptr [esi + 0x8c], 0xffffffff */
  W32((uint32_t)(esi + 0x8cu), 0xffffffffu);
L_8cff1c: /* 8cff1c: mov ecx, edi */
  ecx = edi;
/* 8cff1e: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8cff24u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8cff24: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cff26: jne 0x8cffac */
  if (!zf) goto L_8cffac;
L_8cff2c: /* 8cff2c: mov ecx, edi */
  ecx = edi;
/* 8cff2e: call dword ptr [0xcfa404] */
  esp -= 4; W32(esp, 0x8cff34u); SPILL(); f_4e423c(); if (g_unwind) return; /* Core!?IsSaving@FArchive@@QAEHXZ */ RELOAD();
/* 8cff34: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cff36: jne 0x8cffac */
  if (!zf) goto L_8cffac;
L_8cff38: /* 8cff38: lea eax, [esi + 0x94] */
  eax = (uint32_t)(esi + 0x94u);
/* 8cff3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cff3f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cff40: call 0x6c5dd0 */
  esp -= 4; W32(esp, 0x8cff45u); SPILL(); f_6c5dd0(); if (g_unwind) return; RELOAD();
/* 8cff45: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cff48: lea ecx, [esi + 0xb0] */
  ecx = (uint32_t)(esi + 0xb0u);
/* 8cff4e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cff4f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cff50: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8cff52u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cff52: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cff55: lea edx, [esi + 0xb4] */
  edx = (uint32_t)(esi + 0xb4u);
/* 8cff5b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cff5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cff5d: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8cff5fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cff5f: mov edi, dword ptr [0xcfa27c] */
  edi = R32((uint32_t)(0xcfa27cu));
/* 8cff65: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cff68: lea ecx, [esi + 0xb8] */
  ecx = (uint32_t)(esi + 0xb8u);
/* 8cff6e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cff6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cff70: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8cff72u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cff72: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cff75: lea edx, [esi + 0xbc] */
  edx = (uint32_t)(esi + 0xbcu);
/* 8cff7b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cff7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cff7d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8cff7fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cff7f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cff82: lea ecx, [esi + 0x80] */
  ecx = (uint32_t)(esi + 0x80u);
/* 8cff88: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cff89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cff8a: call 0x6c7162 */
  esp -= 4; W32(esp, 0x8cff8fu); SPILL(); f_6c7162(); if (g_unwind) return; RELOAD();
/* 8cff8f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cff92: lea edx, [esi + 0x28] */
  edx = (uint32_t)(esi + 0x28u);
/* 8cff95: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cff96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cff97: call 0x6ca9c5 */
  esp -= 4; W32(esp, 0x8cff9cu); SPILL(); f_6ca9c5(); if (g_unwind) return; RELOAD();
/* 8cff9c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cff9f: add esi, 0x8c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8cffa5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cffa6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cffa7: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8cffa9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8cffa9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8cffac: /* 8cffac: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8cffaf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cffb0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cffb1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8cffb8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cffb9: mov esp, ebp */
  esp = ebp;
/* 8cffbb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8cffbc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8cffbf(void) {
  LOAD_REGS();
L_8cffbf: /* 8cffbf: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cffc2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8cffc7: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8cffca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cffcb: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8cffce: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8cffd3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8cffd3(); return;
}

void f_8cffd3(void) {
  LOAD_REGS();
L_8cffd3: /* 8cffd3: push 0xa1c834 */
  { uint32_t v = 0xa1c834u; esp -= 4; W32(esp, v); }
/* 8cffd8: push 0xaec86c */
  { uint32_t v = 0xaec86cu; esp -= 4; W32(esp, v); }
/* 8cffdd: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8cffe3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8cffe3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cffe6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cffe8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8cffea: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8cffefu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8cffef: guest_badaddr(0x8cffef); return;
}

void f_8d0090(void) {
  LOAD_REGS();
L_8d0090: /* 8d0090: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d0091: mov ebp, esp */
  ebp = esp;
/* 8d0093: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d0095: push 0x9d7e96 */
  { uint32_t v = 0x9d7e96u; esp -= 4; W32(esp, v); }
/* 8d009a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d00a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d00a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d00a8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d00ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d00ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d00ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d00ae: xor edi, edi */
  edi = 0;
/* 8d00b0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d00b3: mov ebx, ecx */
  ebx = ecx;
/* 8d00b5: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8d00b8: call dword ptr [0xcfa22c] */
  esp -= 4; W32(esp, 0x8d00beu); SPILL(); f_4e2a9a(); if (g_unwind) return; /* Core!?Destroy@UObject@@UAEXXZ */ RELOAD();
/* 8d00be: mov edi, edi */
  edi = edi;
L_8d00c0: /* 8d00c0: cmp edi, dword ptr [ebx + 0x84] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x84u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d00c6: jge 0x8d0167 */
  if ((sf == of)) goto L_8d0167;
L_8d00cc: /* 8d00cc: mov eax, dword ptr [ebx + 0x80] */
  eax = R32((uint32_t)(ebx + 0x80u));
/* 8d00d2: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 8d00d5: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 8d00d7: dec dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 8d00da: jne 0x8d00f1 */
  if (!zf) goto L_8d00f1;
L_8d00dc: /* 8d00dc: mov ecx, esi */
  ecx = esi;
/* 8d00de: call 0x6c75d1 */
  esp -= 4; W32(esp, 0x8d00e3u); SPILL(); f_6c75d1(); if (g_unwind) return; RELOAD();
/* 8d00e3: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 8d00e9: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8d00eb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d00ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d00ee: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x8d00f1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8d00f1: /* 8d00f1: mov ecx, dword ptr [ebx + 0x80] */
  ecx = R32((uint32_t)(ebx + 0x80u));
/* 8d00f7: mov esi, dword ptr [ecx + edi*4] */
  esi = R32((uint32_t)(ecx + edi*4));
/* 8d00fa: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d00fc: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 8d00ff: je 0x8d0134 */
  if (zf) goto L_8d0134;
L_8d0101: /* 8d0101: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 8d0104: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8d0108: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x8d010eu); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 8d010e: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* 8d0111: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8d0115: call 0x6cb555 */
  esp -= 4; W32(esp, 0x8d011au); SPILL(); f_6cb555(); if (g_unwind) return; RELOAD();
/* 8d011a: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 8d011d: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8d0121: call 0x6cae43 */
  esp -= 4; W32(esp, 0x8d0126u); SPILL(); f_6cae43(); if (g_unwind) return; RELOAD();
/* 8d0126: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 8d012c: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8d012e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d0130: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d0131: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x8d0134u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8d0134: /* 8d0134: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8d0135: jmp 0x8d00c0 */
  goto L_8d00c0;
L_8d0167: /* 8d0167: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d016a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d016b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d016c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d0173: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d0174: mov esp, ebp */
  esp = ebp;
/* 8d0176: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d0177: ret  */
  esp += 4; SPILL(); return;
}

void f_8d0137(void) {
  LOAD_REGS();
L_8d0137: /* 8d0137: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d013a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d013f: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8d0142: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d0143: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8d0146: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d014bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d014b(); return;
}

void f_8d014b(void) {
  LOAD_REGS();
L_8d014b: /* 8d014b: push 0xa1c874 */
  { uint32_t v = 0xa1c874u; esp -= 4; W32(esp, v); }
/* 8d0150: push 0xaec87c */
  { uint32_t v = 0xaec87cu; esp -= 4; W32(esp, v); }
/* 8d0155: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d015bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d015b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d015e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d0160: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d0162: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d0167u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8d0167: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d016a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d016b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d016c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d0173: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d0174: mov esp, ebp */
  esp = ebp;
/* 8d0176: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d0177: ret  */
  esp += 4; SPILL(); return;
}

void f_8d01c0(void) {
  LOAD_REGS();
L_8d01c0: /* 8d01c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d01c1: mov ebp, esp */
  ebp = esp;
/* 8d01c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d01c5: push 0x9d7eb0 */
  { uint32_t v = 0x9d7eb0u; esp -= 4; W32(esp, v); }
/* 8d01ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d01d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d01d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d01d8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d01db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d01dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d01dd: mov esi, ecx */
  esi = ecx;
/* 8d01df: mov eax, dword ptr [esi + 0x340] */
  eax = R32((uint32_t)(esi + 0x340u));
/* 8d01e5: xor ecx, ecx */
  ecx = 0;
/* 8d01e7: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d01e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d01ea: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d01ed: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 8d01f0: je 0x8d0314 */
  if (zf) goto L_8d0314;
L_8d01f6: /* 8d01f6: cmp dword ptr [esi + 0x128c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x128cu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d01fc: jne 0x8d020d */
  if (!zf) goto L_8d020d;
L_8d01fe: /* 8d01fe: cmp dword ptr [esi + 0x1290], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1290u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d0204: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
/* 8d020b: je 0x8d0210 */
  if (zf) goto L_8d0210;
L_8d020d: /* 8d020d: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
L_8d0210: /* 8d0210: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 8d0213: mov dword ptr [esi + 0x128c], ecx */
  W32((uint32_t)(esi + 0x128cu), ecx);
/* 8d0219: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 8d021f: cmp ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d0222: mov edx, dword ptr [eax + 0x44] */
  edx = R32((uint32_t)(eax + 0x44u));
/* 8d0225: mov dword ptr [esi + 0x1290], edx */
  W32((uint32_t)(esi + 0x1290u), edx);
/* 8d022b: jge 0x8d0234 */
  if ((sf == of)) goto L_8d0234;
L_8d022d: /* 8d022d: mov edi, 2 */
  edi = 0x2u;
/* 8d0232: jmp 0x8d0240 */
  goto L_8d0240;
L_8d0234: /* 8d0234: cmp ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d0237: mov edi, ecx */
  edi = ecx;
/* 8d0239: jl 0x8d0240 */
  if ((sf != of)) goto L_8d0240;
L_8d023b: /* 8d023b: mov edi, 0x40 */
  edi = 0x40u;
L_8d0240: /* 8d0240: mov ebx, dword ptr [esi + 0x128c] */
  ebx = R32((uint32_t)(esi + 0x128cu));
/* 8d0246: mov eax, ebx */
  eax = ebx;
/* 8d0248: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8d0249: idiv edi */
  { int32_t d = (int32_t)edi; if (!d) d = (int32_t)guest_divzero(0x8d0249);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8d024b: cmp ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d024e: mov dword ptr [esi + 0x1294], eax */
  W32((uint32_t)(esi + 0x1294u), eax);
/* 8d0254: jge 0x8d025d */
  if ((sf == of)) goto L_8d025d;
L_8d0256: /* 8d0256: mov ecx, 2 */
  ecx = 0x2u;
/* 8d025b: jmp 0x8d0267 */
  goto L_8d0267;
L_8d025d: /* 8d025d: cmp ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d0260: jl 0x8d0267 */
  if ((sf != of)) goto L_8d0267;
L_8d0262: /* 8d0262: mov ecx, 0x40 */
  ecx = 0x40u;
L_8d0267: /* 8d0267: mov edi, dword ptr [esi + 0x1290] */
  edi = R32((uint32_t)(esi + 0x1290u));
/* 8d026d: mov eax, edi */
  eax = edi;
/* 8d026f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8d0270: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x8d0270);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8d0272: mov dword ptr [esi + 0x1298], eax */
  W32((uint32_t)(esi + 0x1298u), eax);
/* 8d0278: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d027b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d027d: je 0x8d032c */
  if (zf) goto L_8d032c;
L_8d0283: /* 8d0283: mov eax, edi */
  eax = edi;
/* 8d0285: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* 8d0288: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8d0289: and edx, 0x1f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8d028c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d028e: mov edi, eax */
  edi = eax;
/* 8d0290: mov eax, dword ptr [esi + 0x1320] */
  eax = R32((uint32_t)(esi + 0x1320u));
/* 8d0296: sar edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 8d0299: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d029b: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8d029e: jge 0x8d02d6 */
  if ((sf == of)) goto L_8d02d6;
L_8d02a0: /* 8d02a0: mov ebx, edi */
  ebx = edi;
/* 8d02a2: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 8d02a4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8d02a6: lea ecx, [esi + 0x131c] */
  ecx = (uint32_t)(esi + 0x131cu);
/* 8d02ac: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d02ad: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8d02b3u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8d02b3: mov ecx, dword ptr [esi + 0x131c] */
  ecx = R32((uint32_t)(esi + 0x131cu));
/* 8d02b9: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d02bc: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* 8d02c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d02c4: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 8d02c7: push 0xff */
  { uint32_t v = 0xffu; esp -= 4; W32(esp, v); }
/* 8d02cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d02cd: call dword ptr [0xcfa53c] */
  esp -= 4; W32(esp, 0x8d02d3u); SPILL(); f_4e150a(); if (g_unwind) return; /* Core!?appMemset@@YAXPAXHH@Z */ RELOAD();
/* 8d02d3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8d02d6: /* 8d02d6: mov eax, dword ptr [esi + 0x132c] */
  eax = R32((uint32_t)(esi + 0x132cu));
/* 8d02dc: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d02de: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8d02e1: jge 0x8d032c */
  if ((sf == of)) goto L_8d032c;
L_8d02e3: /* 8d02e3: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 8d02e5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8d02e7: lea ebx, [esi + 0x1328] */
  ebx = (uint32_t)(esi + 0x1328u);
/* 8d02ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d02ee: mov ecx, ebx */
  ecx = ebx;
/* 8d02f0: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8d02f6u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8d02f6: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8d02f8: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d02fb: lea ecx, [edi*4] */
  ecx = (uint32_t)(edi*4);
/* 8d0302: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d0303: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 8d0306: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d0308: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d0309: call dword ptr [0xcfa53c] */
  esp -= 4; W32(esp, 0x8d030fu); SPILL(); f_4e150a(); if (g_unwind) return; /* Core!?appMemset@@YAXPAXHH@Z */ RELOAD();
/* 8d030f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d0312: jmp 0x8d032c */
  goto L_8d032c;
L_8d0314: /* 8d0314: mov dword ptr [esi + 0x1290], ecx */
  W32((uint32_t)(esi + 0x1290u), ecx);
/* 8d031a: mov dword ptr [esi + 0x128c], ecx */
  W32((uint32_t)(esi + 0x128cu), ecx);
/* 8d0320: mov dword ptr [esi + 0x1298], ecx */
  W32((uint32_t)(esi + 0x1298u), ecx);
/* 8d0326: mov dword ptr [esi + 0x1294], ecx */
  W32((uint32_t)(esi + 0x1294u), ecx);
L_8d032c: /* 8d032c: mov edx, dword ptr [esi + 0x1298] */
  edx = R32((uint32_t)(esi + 0x1298u));
/* 8d0332: imul edx, dword ptr [esi + 0x1294] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x1294u)));
  edx = (uint32_t)r;
  }
/* 8d0339: mov eax, dword ptr [esi + 0x1278] */
  eax = R32((uint32_t)(esi + 0x1278u));
/* 8d033f: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d0341: je 0x8d0509 */
  if (zf) goto L_8d0509;
L_8d0347: /* 8d0347: mov eax, dword ptr [esi + 0x1290] */
  eax = R32((uint32_t)(esi + 0x1290u));
/* 8d034d: imul eax, dword ptr [esi + 0x128c] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x128cu)));
  eax = (uint32_t)r;
  }
/* 8d0354: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8d0355: and edx, 0x1f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8d0358: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d035a: mov edi, eax */
  edi = eax;
/* 8d035c: mov eax, dword ptr [esi + 0x1320] */
  eax = R32((uint32_t)(esi + 0x1320u));
/* 8d0362: sar edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 8d0365: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d0367: je 0x8d039f */
  if (zf) goto L_8d039f;
L_8d0369: /* 8d0369: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d036b: lea ebx, [esi + 0x131c] */
  ebx = (uint32_t)(esi + 0x131cu);
/* 8d0371: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8d0373: mov ecx, ebx */
  ecx = ebx;
/* 8d0375: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8d037bu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8d037b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8d037d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d037e: mov ecx, ebx */
  ecx = ebx;
/* 8d0380: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8d0386u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8d0386: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8d0388: lea eax, [edi*4] */
  eax = (uint32_t)(edi*4);
/* 8d038f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d0390: push 0xff */
  { uint32_t v = 0xffu; esp -= 4; W32(esp, v); }
/* 8d0395: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d0396: call dword ptr [0xcfa53c] */
  esp -= 4; W32(esp, 0x8d039cu); SPILL(); f_4e150a(); if (g_unwind) return; /* Core!?appMemset@@YAXPAXHH@Z */ RELOAD();
/* 8d039c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8d039f: /* 8d039f: cmp dword ptr [esi + 0x132c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x132cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d03a5: je 0x8d03da */
  if (zf) goto L_8d03da;
L_8d03a7: /* 8d03a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d03a9: lea ebx, [esi + 0x1328] */
  ebx = (uint32_t)(esi + 0x1328u);
/* 8d03af: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8d03b1: mov ecx, ebx */
  ecx = ebx;
/* 8d03b3: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8d03b9u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8d03b9: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8d03bb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d03bc: mov ecx, ebx */
  ecx = ebx;
/* 8d03be: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8d03c4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8d03c4: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8d03c6: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
/* 8d03cd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d03ce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d03d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d03d1: call dword ptr [0xcfa53c] */
  esp -= 4; W32(esp, 0x8d03d7u); SPILL(); f_4e150a(); if (g_unwind) return; /* Core!?appMemset@@YAXPAXHH@Z */ RELOAD();
/* 8d03d7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8d03da: /* 8d03da: lea ecx, [esi + 0x1274] */
  ecx = (uint32_t)(esi + 0x1274u);
/* 8d03e0: xor eax, eax */
  eax = 0;
L_8d03e2: /* 8d03e2: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d03e5: jge 0x8d03ea */
  if ((sf == of)) goto L_8d03ea;
L_8d03e7: /* 8d03e7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d03e8: jmp 0x8d03e2 */
  goto L_8d03e2;
L_8d03ea: /* 8d03ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d03ec: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8d03ee: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8d03f4u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8d03f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d03f6: lea ecx, [esi + 0x134c] */
  ecx = (uint32_t)(esi + 0x134cu);
/* 8d03fc: call 0x6c119a */
  esp -= 4; W32(esp, 0x8d0401u); SPILL(); f_6c119a(); if (g_unwind) return; RELOAD();
/* 8d0401: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d0403: lea ecx, [esi + 0x1340] */
  ecx = (uint32_t)(esi + 0x1340u);
/* 8d0409: call 0x6c5c95 */
  esp -= 4; W32(esp, 0x8d040eu); SPILL(); f_6c5c95(); if (g_unwind) return; RELOAD();
/* 8d040e: xor edi, edi */
  edi = 0;
L_8d0410: /* 8d0410: cmp edi, dword ptr [esi + 0x1298] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1298u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d0416: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 8d0419: jge 0x8d0509 */
  if ((sf == of)) goto L_8d0509;
L_8d041f: /* 8d041f: xor ebx, ebx */
  ebx = 0;
L_8d0421: /* 8d0421: cmp ebx, dword ptr [esi + 0x1294] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1294u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d0427: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 8d042a: jge 0x8d04d3 */
  if ((sf == of)) goto L_8d04d3;
L_8d0430: /* 8d0430: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d0432: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 8d0435: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8d043bu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8d043b: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 8d0441: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d0443: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d0446: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d0448: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d044a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d044b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d044d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d044f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d0450: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d0451: push 0xce85b0 */
  { uint32_t v = 0xce85b0u; esp -= 4; W32(esp, v); }
/* 8d0456: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x8d045cu); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 8d045c: mov ecx, eax */
  ecx = eax;
/* 8d045e: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d0461: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d0463: je 0x8d04a9 */
  if (zf) goto L_8d04a9;
L_8d0465: /* 8d0465: mov edx, dword ptr [esi + 0x1298] */
  edx = R32((uint32_t)(esi + 0x1298u));
/* 8d046b: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 8d046c: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d046e: mov edx, dword ptr [esi + 0x33c] */
  edx = R32((uint32_t)(esi + 0x33cu));
/* 8d0474: mov eax, edx */
  eax = edx;
/* 8d0476: jl 0x8d047b */
  if ((sf != of)) goto L_8d047b;
L_8d0478: /* 8d0478: lea eax, [edx - 1] */
  eax = (uint32_t)(edx + 0xffffffffu);
L_8d047b: /* 8d047b: mov edi, dword ptr [esi + 0x1294] */
  edi = R32((uint32_t)(esi + 0x1294u));
/* 8d0481: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d0484: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 8d0485: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d0487: mov edi, edx */
  edi = edx;
/* 8d0489: jl 0x8d048e */
  if ((sf != of)) goto L_8d048e;
L_8d048b: /* 8d048b: lea edi, [edx - 1] */
  edi = (uint32_t)(edx + 0xffffffffu);
L_8d048e: /* 8d048e: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d0491: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d0492: mov eax, edx */
  eax = edx;
/* 8d0494: imul edx, ebx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebx);
  edx = (uint32_t)r;
  }
/* 8d0497: imul eax, dword ptr [ebp - 0x18] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  eax = (uint32_t)r;
  }
/* 8d049b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d049c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d049d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d049e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d049f: call 0x6c9971 */
  esp -= 4; W32(esp, 0x8d04a4u); SPILL(); f_6c9971(); if (g_unwind) return; RELOAD();
/* 8d04a4: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8d04a7: jmp 0x8d04b0 */
  goto L_8d04b0;
L_8d04a9: /* 8d04a9: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_8d04b0: /* 8d04b0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8d04b2: lea edi, [esi + 0x1274] */
  edi = (uint32_t)(esi + 0x1274u);
/* 8d04b8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d04ba: mov ecx, edi */
  ecx = edi;
/* 8d04bc: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8d04c2u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8d04c2: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8d04c4: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d04c7: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d04ca: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 8d04cd: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8d04ce: jmp 0x8d0421 */
  goto L_8d0421;
L_8d04d3: /* 8d04d3: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8d04d4: jmp 0x8d0410 */
  goto L_8d0410;
L_8d0509: /* 8d0509: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d050c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d050d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d050e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d0515: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d0516: mov esp, ebp */
  esp = ebp;
/* 8d0518: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d0519: ret  */
  esp += 4; SPILL(); return;
}

void f_8d04d9(void) {
  LOAD_REGS();
L_8d04d9: /* 8d04d9: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d04dc: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d04e1: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8d04e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d04e5: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8d04e8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d04edu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d04ed(); return;
}

void f_8d04ed(void) {
  LOAD_REGS();
L_8d04ed: /* 8d04ed: push 0xa1c8b0 */
  { uint32_t v = 0xa1c8b0u; esp -= 4; W32(esp, v); }
/* 8d04f2: push 0xaecb68 */
  { uint32_t v = 0xaecb68u; esp -= 4; W32(esp, v); }
/* 8d04f7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d04fdu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d04fd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d0500: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d0502: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d0504: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d0509u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8d0509: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d050c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d050d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d050e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d0515: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d0516: mov esp, ebp */
  esp = ebp;
/* 8d0518: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d0519: ret  */
  esp += 4; SPILL(); return;
}

void f_8d0600(void) {
  LOAD_REGS();
L_8d0600: /* 8d0600: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d0601: mov ebp, esp */
  ebp = esp;
/* 8d0603: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d0605: push 0x9d7ec0 */
  { uint32_t v = 0x9d7ec0u; esp -= 4; W32(esp, v); }
/* 8d060a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d0610: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d0611: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d0618: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d061b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d061c: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 8d061f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d0621: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d0622: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d0623: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d0626: mov edi, ecx */
  edi = ecx;
/* 8d0628: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8d062f: jne 0x8d0637 */
  if (!zf) goto L_8d0637;
L_8d0631: /* 8d0631: mov ebx, dword ptr [edi + 0x128c] */
  ebx = R32((uint32_t)(edi + 0x128cu));
L_8d0637: /* 8d0637: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 8d063a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d063c: jne 0x8d0644 */
  if (!zf) goto L_8d0644;
L_8d063e: /* 8d063e: mov esi, dword ptr [edi + 0x1290] */
  esi = R32((uint32_t)(edi + 0x1290u));
L_8d0644: /* 8d0644: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 8d0649: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d064c: jne 0x8d0655 */
  if (!zf) goto L_8d0655;
L_8d064e: /* 8d064e: mov ecx, edi */
  ecx = edi;
/* 8d0650: call 0x6c9377 */
  esp -= 4; W32(esp, 0x8d0655u); SPILL(); f_6c9377(); if (g_unwind) return; RELOAD();
L_8d0655: /* 8d0655: mov ecx, edi */
  ecx = edi;
/* 8d0657: call 0x6c8ee5 */
  esp -= 4; W32(esp, 0x8d065cu); SPILL(); f_6c8ee5(); if (g_unwind) return; RELOAD();
/* 8d065c: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8d065f: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8d0662: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8d0665: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d0666: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d0667: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d0668: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d0669: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d066a: mov ecx, edi */
  ecx = edi;
/* 8d066c: call 0x6ca173 */
  esp -= 4; W32(esp, 0x8d0671u); SPILL(); f_6ca173(); if (g_unwind) return; RELOAD();
/* 8d0671: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 8d0674: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 8d0677: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8d067a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d067b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d067c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d067d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d067e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d067f: mov ecx, edi */
  ecx = edi;
/* 8d0681: call 0x6c7f7c */
  esp -= 4; W32(esp, 0x8d0686u); SPILL(); f_6c7f7c(); if (g_unwind) return; RELOAD();
/* 8d0686: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 8d068c: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d068f: jne 0x8d0698 */
  if (!zf) goto L_8d0698;
L_8d0691: /* 8d0691: mov ecx, edi */
  ecx = edi;
/* 8d0693: call 0x6ca08d */
  esp -= 4; W32(esp, 0x8d0698u); SPILL(); f_6ca08d(); if (g_unwind) return; RELOAD();
L_8d0698: /* 8d0698: xor ebx, ebx */
  ebx = 0;
/* 8d069a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8d06a0: /* 8d06a0: cmp ebx, 0x20 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8d06a3: jae 0x8d0705 */
  if (!cf) goto L_8d0705;
L_8d06a5: /* 8d06a5: mov edx, ebx */
  edx = ebx;
/* 8d06a7: imul edx, edx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x78u);
  edx = (uint32_t)r;
  }
/* 8d06aa: mov ecx, dword ptr [edx + edi + 0x3c4] */
  ecx = R32((uint32_t)(edx + edi + 0x3c4u));
/* 8d06b1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d06b3: lea esi, [edx + edi + 0x3c4] */
  esi = (uint32_t)(edx + edi + 0x3c4u);
/* 8d06ba: je 0x8d06d2 */
  if (zf) goto L_8d06d2;
L_8d06bc: /* 8d06bc: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d06be: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 8d06c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d06c1: call dword ptr [eax + 0xc4] */
  { uint32_t t = R32((uint32_t)(eax + 0xc4u)); esp -= 4; W32(esp, 0x8d06c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d06c7: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8d06c9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d06cb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d06cd: call 0x6cc383 */
  esp -= 4; W32(esp, 0x8d06d2u); SPILL(); f_6cc383(); if (g_unwind) return; RELOAD();
L_8d06d2: /* 8d06d2: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8d06d3: jmp 0x8d06a0 */
  goto L_8d06a0;
L_8d0705: /* 8d0705: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d0708: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d0709: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d070a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d0711: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d0712: mov esp, ebp */
  esp = ebp;
/* 8d0714: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d0715: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_8d06d5(void) {
  LOAD_REGS();
L_8d06d5: /* 8d06d5: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d06d8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d06dd: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8d06e0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d06e1: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8d06e4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d06e9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d06e9(); return;
}

void f_8d06e9(void) {
  LOAD_REGS();
L_8d06e9: /* 8d06e9: push 0xa1c8f0 */
  { uint32_t v = 0xa1c8f0u; esp -= 4; W32(esp, v); }
/* 8d06ee: push 0xaecb78 */
  { uint32_t v = 0xaecb78u; esp -= 4; W32(esp, v); }
/* 8d06f3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d06f9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d06f9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d06fc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d06fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d0700: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d0705u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8d0705: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d0708: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d0709: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d070a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d0711: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d0712: mov esp, ebp */
  esp = ebp;
/* 8d0714: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d0715: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_8d0770(void) {
  LOAD_REGS();
L_8d0770: /* 8d0770: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d0771: mov ebp, esp */
  ebp = esp;
/* 8d0773: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d0775: push 0x9d7ed0 */
  { uint32_t v = 0x9d7ed0u; esp -= 4; W32(esp, v); }
/* 8d077a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d0780: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d0781: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d0788: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d078b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d078c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d078d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d078e: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 8d0791: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d0794: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d0795: mov esi, ecx */
  esi = ecx;
/* 8d0797: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8d079e: call 0x6c60be */
  esp -= 4; W32(esp, 0x8d07a3u); SPILL(); f_6c60be(); if (g_unwind) return; RELOAD();
/* 8d07a3: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8d07a6: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 8d07ac: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8d07af: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8d07b2: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 8d07b8: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8d07bb: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8d07be: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 8d07c4: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8d07c7: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8d07ca: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 8d07d0: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8d07d3: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8d07d9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d07db: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d07de: je 0x8d07e7 */
  if (zf) goto L_8d07e7;
L_8d07e0: /* 8d07e0: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
L_8d07e7: /* 8d07e7: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8d07ea: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8d07f0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d07f2: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d07f5: je 0x8d07fe */
  if (zf) goto L_8d07fe;
L_8d07f7: /* 8d07f7: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
L_8d07fe: /* 8d07fe: fild dword ptr [esi + 0x128c] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x128cu)); FPUSH(v); }
/* 8d0804: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8d0807: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8d0809: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d080b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8d080e: jnp 0x8d0815 */
  if (!pf) goto L_8d0815;
L_8d0810: /* 8d0810: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8d0813: jmp 0x8d0817 */
  goto L_8d0817;
L_8d0815: /* 8d0815: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8d0817: /* 8d0817: fild dword ptr [esi + 0x1290] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x1290u)); FPUSH(v); }
/* 8d081d: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8d0820: fcom dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
/* 8d0823: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d0825: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8d0828: jnp 0x8d082f */
  if (!pf) goto L_8d082f;
L_8d082a: /* 8d082a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d082c: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
L_8d082f: /* 8d082f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d0831: call 0x99c958 */
  esp -= 4; W32(esp, 0x8d0836u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8d0836: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8d0839: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d083a: call 0x99c958 */
  esp -= 4; W32(esp, 0x8d083fu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8d083f: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8d0842: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d0843: call 0x99c958 */
  esp -= 4; W32(esp, 0x8d0848u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8d0848: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8d084b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d084c: call 0x99c958 */
  esp -= 4; W32(esp, 0x8d0851u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8d0851: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d0852: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d0854: mov ecx, esi */
  ecx = esi;
/* 8d0856: call 0x6ca63c */
  esp -= 4; W32(esp, 0x8d085bu); SPILL(); f_6ca63c(); if (g_unwind) return; RELOAD();
/* 8d085b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d085e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d085f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d0860: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d0867: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d0868: mov esp, ebp */
  esp = ebp;
/* 8d086a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d086b: ret  */
  esp += 4; SPILL(); return;
}

void f_8d086c(void) {
  LOAD_REGS();
L_8d086c: /* 8d086c: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d086f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d0874: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 8d0877: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d0878: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8d087b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d0880u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d0880(); return;
}

void f_8d0880(void) {
  LOAD_REGS();
L_8d0880: /* 8d0880: push 0xa1c928 */
  { uint32_t v = 0xa1c928u; esp -= 4; W32(esp, v); }
/* 8d0885: push 0xaecbe8 */
  { uint32_t v = 0xaecbe8u; esp -= 4; W32(esp, v); }
/* 8d088a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d0890u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d0890: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d0893: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d0895: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d0897: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d089cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8d089c: guest_badaddr(0x8d089c); return;
}

void f_8d08f0(void) {
  LOAD_REGS();
L_8d08f0: /* 8d08f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d08f1: mov ebp, esp */
  ebp = esp;
/* 8d08f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d08f5: push 0x9d7ee0 */
  { uint32_t v = 0x9d7ee0u; esp -= 4; W32(esp, v); }
/* 8d08fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d0900: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d0901: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d0908: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d090b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d090c: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 8d090f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d0910: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8d0913: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d0914: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d0917: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 8d0919: xor edi, edi */
  edi = 0;
/* 8d091b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d091c: mov ecx, ebx */
  ecx = ebx;
/* 8d091e: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8d0921: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8d0927u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8d0927: mov ecx, esi */
  ecx = esi;
/* 8d0929: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8d092fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8d092f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d0931: je 0x8d0996 */
  if (zf) goto L_8d0996;
L_8d0933: /* 8d0933: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8d0936: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d0937: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d0938: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8d093eu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8d093e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d0941: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d0944: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d0945: mov ecx, ebx */
  ecx = ebx;
/* 8d0947: call 0x6c119a */
  esp -= 4; W32(esp, 0x8d094cu); SPILL(); f_6c119a(); if (g_unwind) return; RELOAD();
/* 8d094c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8d0950: /* 8d0950: cmp edi, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d0953: jge 0x8d09d3 */
  if ((sf == of)) goto L_8d09d3;
L_8d0955: /* 8d0955: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 8d0957: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d0959: mov ecx, ebx */
  ecx = ebx;
/* 8d095b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8d0961u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8d0961: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 8d0964: add eax, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8d0966: je 0x8d0973 */
  if (zf) goto L_8d0973;
L_8d0968: /* 8d0968: mov ecx, eax */
  ecx = eax;
/* 8d096a: call 0x6cbf82 */
  esp -= 4; W32(esp, 0x8d096fu); SPILL(); f_6cbf82(); if (g_unwind) return; RELOAD();
/* 8d096f: mov esi, eax */
  esi = eax;
/* 8d0971: jmp 0x8d0975 */
  goto L_8d0975;
L_8d0973: /* 8d0973: xor esi, esi */
  esi = 0;
L_8d0975: /* 8d0975: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8d0978: lea edx, [esi + 4] */
  edx = (uint32_t)(esi + 0x4u);
/* 8d097b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d097c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d097d: call 0x6c4548 */
  esp -= 4; W32(esp, 0x8d0982u); SPILL(); f_6c4548(); if (g_unwind) return; RELOAD();
/* 8d0982: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d0985: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8d0988: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d0989: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d098a: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x8d0990u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 8d0990: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d0993: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8d0994: jmp 0x8d0950 */
  goto L_8d0950;
L_8d0996: /* 8d0996: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
/* 8d0999: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d099a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d099b: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8d09a1u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8d09a1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8d09a4: /* 8d09a4: cmp edi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d09a7: jge 0x8d09d3 */
  if ((sf == of)) goto L_8d09d3;
L_8d09a9: /* 8d09a9: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8d09ab: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8d09ae: mov esi, edi */
  esi = edi;
/* 8d09b0: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 8d09b3: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8d09b5: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8d09b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d09b9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d09ba: call 0x6c4548 */
  esp -= 4; W32(esp, 0x8d09bfu); SPILL(); f_6c4548(); if (g_unwind) return; RELOAD();
/* 8d09bf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d09c2: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8d09c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d09c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d09c7: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x8d09cdu); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 8d09cd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d09d0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8d09d1: jmp 0x8d09a4 */
  goto L_8d09a4;
L_8d09d3: /* 8d09d3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d09d6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8d09d9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d09da: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d09db: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d09e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d09e3: mov esp, ebp */
  esp = ebp;
/* 8d09e5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d09e6: ret  */
  esp += 4; SPILL(); return;
}

void f_8d09e7(void) {
  LOAD_REGS();
L_8d09e7: /* 8d09e7: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d09ea: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d09ef: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 8d09f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d09f3: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8d09f6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d09fbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d09fb(); return;
}

void f_8d09fb(void) {
  LOAD_REGS();
L_8d09fb: /* 8d09fb: push 0xa1c98c */
  { uint32_t v = 0xa1c98cu; esp -= 4; W32(esp, v); }
/* 8d0a00: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8d0a05: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d0a0bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d0a0b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d0a0e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d0a10: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d0a12: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d0a17u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8d0a17: guest_badaddr(0x8d0a17); return;
}

void f_8d0a70(void) {
  LOAD_REGS();
L_8d0a70: /* 8d0a70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d0a71: mov esi, ecx */
  esi = ecx;
/* 8d0a73: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8d0a79u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8d0a79: mov eax, esi */
  eax = esi;
/* 8d0a7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d0a7c: ret  */
  esp += 4; SPILL(); return;
}

void f_8d0a90(void) {
  LOAD_REGS();
L_8d0a90: /* 8d0a90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d0a91: mov ebp, esp */
  ebp = esp;
/* 8d0a93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d0a95: push 0x9d7ef0 */
  { uint32_t v = 0x9d7ef0u; esp -= 4; W32(esp, v); }
/* 8d0a9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d0aa0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d0aa1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d0aa8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d0aab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d0aac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d0aad: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8d0ab0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d0ab1: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8d0ab4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d0ab7: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 8d0ab9: xor ebx, ebx */
  ebx = 0;
/* 8d0abb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d0abc: mov ecx, edi */
  ecx = edi;
/* 8d0abe: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8d0ac1: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8d0ac7u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8d0ac7: mov ecx, esi */
  ecx = esi;
/* 8d0ac9: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8d0acfu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8d0acf: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d0ad1: je 0x8d0b6e */
  if (zf) goto L_8d0b6e;
L_8d0ad7: /* 8d0ad7: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 8d0ada: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d0adb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d0adc: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8d0ae2u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8d0ae2: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d0ae5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d0ae8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d0ae9: mov ecx, edi */
  ecx = edi;
/* 8d0aeb: call 0x6c8c6f */
  esp -= 4; W32(esp, 0x8d0af0u); SPILL(); f_6c8c6f(); if (g_unwind) return; RELOAD();
/* 8d0af0: mov edi, dword ptr [0xcfa1b4] */
  edi = R32((uint32_t)(0xcfa1b4u));
/* 8d0af6: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 8d0af9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8d0b00: /* 8d0b00: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d0b03: cmp edx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d0b06: jge 0x8d0bd6 */
  if ((sf == of)) goto L_8d0bd6;
L_8d0b0c: /* 8d0b0c: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8d0b0f: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 8d0b11: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d0b13: mov ecx, esi */
  ecx = esi;
/* 8d0b15: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8d0b1bu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8d0b1b: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 8d0b1e: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8d0b20: mov ebx, eax */
  ebx = eax;
/* 8d0b22: je 0x8d0b2e */
  if (zf) goto L_8d0b2e;
L_8d0b24: /* 8d0b24: mov ecx, ebx */
  ecx = ebx;
/* 8d0b26: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8d0b2cu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8d0b2c: jmp 0x8d0b30 */
  goto L_8d0b30;
L_8d0b2e: /* 8d0b2e: xor ebx, ebx */
  ebx = 0;
L_8d0b30: /* 8d0b30: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8d0b33: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d0b34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d0b35: lea esi, [ebx + 0xc] */
  esi = (uint32_t)(ebx + 0xcu);
/* 8d0b38: call 0x6c265d */
  esp -= 4; W32(esp, 0x8d0b3du); SPILL(); f_6c265d(); if (g_unwind) return; RELOAD();
/* 8d0b3d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d0b40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d0b41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d0b42: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8d0b44u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d0b44: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d0b47: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8d0b4a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d0b4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d0b4c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8d0b4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d0b4e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d0b51: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8d0b54: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d0b55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d0b56: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8d0b58u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d0b58: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d0b5b: add ebx, 0x18 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8d0b5e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d0b5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d0b60: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8d0b62u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d0b62: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d0b65: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d0b68: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d0b69: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8d0b6c: jmp 0x8d0b00 */
  goto L_8d0b00;
L_8d0b6e: /* 8d0b6e: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 8d0b71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d0b72: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d0b73: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8d0b79u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8d0b79: mov ebx, dword ptr [0xcfa1b4] */
  ebx = R32((uint32_t)(0xcfa1b4u));
/* 8d0b7f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d0b82: xor esi, esi */
  esi = 0;
/* 8d0b84: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
L_8d0b87: /* 8d0b87: cmp esi, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d0b8a: jge 0x8d0bd6 */
  if ((sf == of)) goto L_8d0bd6;
L_8d0b8c: /* 8d0b8c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8d0b8e: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 8d0b91: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8d0b93: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8d0b96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d0b97: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d0b98: lea edi, [esi + 0xc] */
  edi = (uint32_t)(esi + 0xcu);
/* 8d0b9b: call 0x6c265d */
  esp -= 4; W32(esp, 0x8d0ba0u); SPILL(); f_6c265d(); if (g_unwind) return; RELOAD();
/* 8d0ba0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d0ba3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d0ba4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d0ba5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8d0ba7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d0ba7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d0baa: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 8d0bad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d0bae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d0baf: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8d0bb1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d0bb1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d0bb4: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8d0bb7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d0bb8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d0bb9: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8d0bbbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d0bbb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d0bbe: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8d0bc1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d0bc2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d0bc3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8d0bc5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d0bc5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d0bc8: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8d0bcb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d0bce: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d0bcf: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8d0bd2: mov esi, eax */
  esi = eax;
/* 8d0bd4: jmp 0x8d0b87 */
  goto L_8d0b87;
L_8d0bd6: /* 8d0bd6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d0bd9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8d0bdc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d0bdd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d0bde: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d0be5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d0be6: mov esp, ebp */
  esp = ebp;
/* 8d0be8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d0be9: ret  */
  esp += 4; SPILL(); return;
}

void f_8d0bea(void) {
  LOAD_REGS();
L_8d0bea: /* 8d0bea: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d0bed: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d0bf2: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 8d0bf5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d0bf6: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8d0bf9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d0bfeu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d0bfe(); return;
}

void f_8d0bfe(void) {
  LOAD_REGS();
L_8d0bfe: /* 8d0bfe: push 0xa1c9a4 */
  { uint32_t v = 0xa1c9a4u; esp -= 4; W32(esp, v); }
/* 8d0c03: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8d0c08: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d0c0eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d0c0e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d0c11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d0c13: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d0c15: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d0c1au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8d0c1a: guest_badaddr(0x8d0c1a); return;
}

void f_8d0c90(void) {
  LOAD_REGS();
L_8d0c90: /* 8d0c90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d0c91: mov ebp, esp */
  ebp = esp;
/* 8d0c93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d0c95: push 0x9d7f00 */
  { uint32_t v = 0x9d7f00u; esp -= 4; W32(esp, v); }
/* 8d0c9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d0ca0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d0ca1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d0ca8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d0cab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d0cac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d0cad: mov esi, ecx */
  esi = ecx;
/* 8d0caf: mov eax, dword ptr [esi + 0x1264] */
  eax = R32((uint32_t)(esi + 0x1264u));
/* 8d0cb5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d0cb7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d0cb8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d0cbb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8d0cc2: je 0x8d0cdf */
  if (zf) goto L_8d0cdf;
L_8d0cc4: /* 8d0cc4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d0cc6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d0cc8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d0cca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d0ccc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d0cce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d0cd0: call 0x6ca63c */
  esp -= 4; W32(esp, 0x8d0cd5u); SPILL(); f_6ca63c(); if (g_unwind) return; RELOAD();
/* 8d0cd5: mov dword ptr [esi + 0x1264], 0 */
  W32((uint32_t)(esi + 0x1264u), 0x0u);
L_8d0cdf: /* 8d0cdf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d0ce2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d0ce3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d0ce4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d0ceb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d0cec: mov esp, ebp */
  esp = ebp;
/* 8d0cee: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d0cef: ret  */
  esp += 4; SPILL(); return;
}

void f_8d0cf0(void) {
  LOAD_REGS();
L_8d0cf0: /* 8d0cf0: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d0cf3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d0cf8: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8d0cfb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d0cfc: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8d0cff: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d0d04u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d0d04(); return;
}

void f_8d0d04(void) {
  LOAD_REGS();
L_8d0d04: /* 8d0d04: push 0xa1c9c0 */
  { uint32_t v = 0xa1c9c0u; esp -= 4; W32(esp, v); }
/* 8d0d09: push 0xaecb60 */
  { uint32_t v = 0xaecb60u; esp -= 4; W32(esp, v); }
/* 8d0d0e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d0d14u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d0d14: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d0d17: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d0d19: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d0d1b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d0d20u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8d0d20: guest_badaddr(0x8d0d20); return;
}

void f_8d0d60(void) {
  LOAD_REGS();
L_8d0d60: /* 8d0d60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d0d61: mov ebp, esp */
  ebp = esp;
/* 8d0d63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d0d65: push 0x9d7f10 */
  { uint32_t v = 0x9d7f10u; esp -= 4; W32(esp, v); }
/* 8d0d6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d0d70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d0d71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d0d78: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d0d7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d0d7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d0d7d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d0d7e: mov edi, ecx */
  edi = ecx;
/* 8d0d80: mov eax, dword ptr [edi + 0x1310] */
  eax = R32((uint32_t)(edi + 0x1310u));
/* 8d0d86: xor ebx, ebx */
  ebx = 0;
/* 8d0d88: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d0d8a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d0d8d: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8d0d90: je 0x8d0e17 */
  if (zf) goto L_8d0e17;
L_8d0d96: /* 8d0d96: cmp ebx, dword ptr [edi + 0x1310] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1310u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d0d9c: jge 0x8d0e10 */
  if ((sf == of)) goto L_8d0e10;
L_8d0d9e: /* 8d0d9e: mov ecx, dword ptr [edi + 0x130c] */
  ecx = R32((uint32_t)(edi + 0x130cu));
/* 8d0da4: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8d0da7: lea eax, [ebx + ebx*4] */
  eax = (uint32_t)(ebx + ebx*4);
/* 8d0daa: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8d0dad: fadd dword ptr [ecx + eax + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + eax + 0x10u)));
/* 8d0db1: lea ecx, [ecx + eax + 0x10] */
  ecx = (uint32_t)(ecx + eax + 0x10u);
/* 8d0db5: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 8d0db7: mov edx, dword ptr [edi + 0x130c] */
  edx = R32((uint32_t)(edi + 0x130cu));
/* 8d0dbd: fild dword ptr [edx + eax + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + eax + 0x8u)); FPUSH(v); }
/* 8d0dc1: lea esi, [edx + eax] */
  esi = (uint32_t)(edx + eax);
/* 8d0dc4: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 8d0dc7: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 8d0dca: fmul dword ptr [0xa0b294] */
  ST0 = ST0 * (F32((uint32_t)(0xa0b294u)));
/* 8d0dd0: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8d0dd2: call 0x99c958 */
  esp -= 4; W32(esp, 0x8d0dd7u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8d0dd7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8d0dd9: jge 0x8d0ddf */
  if ((sf == of)) goto L_8d0ddf;
L_8d0ddb: /* 8d0ddb: xor eax, eax */
  eax = 0;
/* 8d0ddd: jmp 0x8d0deb */
  goto L_8d0deb;
L_8d0ddf: /* 8d0ddf: cmp eax, 0xffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d0de4: jl 0x8d0deb */
  if ((sf != of)) goto L_8d0deb;
L_8d0de6: /* 8d0de6: mov eax, 0xffff */
  eax = 0xffffu;
L_8d0deb: /* 8d0deb: mov ecx, dword ptr [edi + 0x340] */
  ecx = R32((uint32_t)(edi + 0x340u));
/* 8d0df1: cmp byte ptr [ecx + 0x38], 0xa */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x38u))); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8d0df5: jne 0x8d0e0d */
  if (!zf) goto L_8d0e0d;
L_8d0df7: /* 8d0df7: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* 8d0dfa: imul edx, dword ptr [esi + 4] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x4u)));
  edx = (uint32_t)r;
  }
/* 8d0dfe: mov ecx, dword ptr [ecx + 0xac] */
  ecx = R32((uint32_t)(ecx + 0xacu));
/* 8d0e04: add edx, dword ptr [esi] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8d0e06: mov ecx, dword ptr [ecx + 0x1c] */
  ecx = R32((uint32_t)(ecx + 0x1cu));
/* 8d0e09: mov word ptr [ecx + edx*2], ax */
  W16((uint32_t)(ecx + edx*2), (eax & 0xffffu));
L_8d0e0d: /* 8d0e0d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8d0e0e: jmp 0x8d0d96 */
  goto L_8d0d96;
L_8d0e10: /* 8d0e10: mov ecx, edi */
  ecx = edi;
/* 8d0e12: call 0x6c6339 */
  esp -= 4; W32(esp, 0x8d0e17u); SPILL(); f_6c6339(); if (g_unwind) return; RELOAD();
L_8d0e17: /* 8d0e17: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d0e1a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d0e1b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d0e1c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d0e23: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d0e24: mov esp, ebp */
  esp = ebp;
/* 8d0e26: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d0e27: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8d0e2a(void) {
  LOAD_REGS();
L_8d0e2a: /* 8d0e2a: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d0e2d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d0e32: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8d0e35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d0e36: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8d0e39: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d0e3eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d0e3e(); return;
}

void f_8d0e3e(void) {
  LOAD_REGS();
L_8d0e3e: /* 8d0e3e: push 0xa1ca18 */
  { uint32_t v = 0xa1ca18u; esp -= 4; W32(esp, v); }
/* 8d0e43: push 0xaecbd0 */
  { uint32_t v = 0xaecbd0u; esp -= 4; W32(esp, v); }
/* 8d0e48: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d0e4eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d0e4e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d0e51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d0e53: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d0e55: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d0e5au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8d0e5a: guest_badaddr(0x8d0e5a); return;
}

void f_8d0ea0(void) {
  LOAD_REGS();
L_8d0ea0: /* 8d0ea0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d0ea1: mov ebp, esp */
  ebp = esp;
/* 8d0ea3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d0ea5: push 0x9d7f20 */
  { uint32_t v = 0x9d7f20u; esp -= 4; W32(esp, v); }
/* 8d0eaa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d0eb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d0eb1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d0eb8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d0ebb: mov eax, dword ptr [ecx + 0x1310] */
  eax = R32((uint32_t)(ecx + 0x1310u));
/* 8d0ec1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d0ec2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d0ec3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d0ec4: xor edi, edi */
  edi = 0;
/* 8d0ec6: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d0ec8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d0ecb: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8d0ece: je 0x8d0f20 */
  if (zf) goto L_8d0f20;
L_8d0ed0: /* 8d0ed0: xor esi, esi */
  esi = 0;
L_8d0ed2: /* 8d0ed2: cmp esi, dword ptr [ecx + 0x1310] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x1310u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d0ed8: jge 0x8d0f1b */
  if ((sf == of)) goto L_8d0f1b;
L_8d0eda: /* 8d0eda: mov edx, dword ptr [ecx + 0x130c] */
  edx = R32((uint32_t)(ecx + 0x130cu));
/* 8d0ee0: lea eax, [esi + esi*4] */
  eax = (uint32_t)(esi + esi*4);
/* 8d0ee3: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8d0ee6: mov dword ptr [edx + eax + 0x10], edi */
  W32((uint32_t)(edx + eax + 0x10u), edi);
/* 8d0eea: mov edx, dword ptr [ecx + 0x340] */
  edx = R32((uint32_t)(ecx + 0x340u));
/* 8d0ef0: cmp byte ptr [edx + 0x38], 0xa */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x38u))); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8d0ef4: jne 0x8d0f18 */
  if (!zf) goto L_8d0f18;
L_8d0ef6: /* 8d0ef6: mov ebx, dword ptr [ecx + 0x130c] */
  ebx = R32((uint32_t)(ecx + 0x130cu));
/* 8d0efc: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d0efe: mov ebx, dword ptr [edx + 0x40] */
  ebx = R32((uint32_t)(edx + 0x40u));
/* 8d0f01: imul ebx, dword ptr [eax + 4] */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(R32((uint32_t)(eax + 0x4u)));
  ebx = (uint32_t)r;
  }
/* 8d0f05: mov edx, dword ptr [edx + 0xac] */
  edx = R32((uint32_t)(edx + 0xacu));
/* 8d0f0b: add ebx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8d0f0d: mov edx, dword ptr [edx + 0x1c] */
  edx = R32((uint32_t)(edx + 0x1cu));
/* 8d0f10: mov ax, word ptr [eax + 8] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x8u))) & 0xffffu);
/* 8d0f14: mov word ptr [edx + ebx*2], ax */
  W16((uint32_t)(edx + ebx*2), (eax & 0xffffu));
L_8d0f18: /* 8d0f18: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8d0f19: jmp 0x8d0ed2 */
  goto L_8d0ed2;
L_8d0f1b: /* 8d0f1b: call 0x6c6339 */
  esp -= 4; W32(esp, 0x8d0f20u); SPILL(); f_6c6339(); if (g_unwind) return; RELOAD();
L_8d0f20: /* 8d0f20: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d0f23: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d0f24: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d0f25: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d0f2c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d0f2d: mov esp, ebp */
  esp = ebp;
/* 8d0f2f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d0f30: ret  */
  esp += 4; SPILL(); return;
}

void f_8d0f31(void) {
  LOAD_REGS();
L_8d0f31: /* 8d0f31: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d0f34: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d0f39: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8d0f3c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d0f3d: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8d0f40: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d0f45u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d0f45(); return;
}

void f_8d0f45(void) {
  LOAD_REGS();
L_8d0f45: /* 8d0f45: push 0xa1ca58 */
  { uint32_t v = 0xa1ca58u; esp -= 4; W32(esp, v); }
/* 8d0f4a: push 0xaecbd8 */
  { uint32_t v = 0xaecbd8u; esp -= 4; W32(esp, v); }
/* 8d0f4f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d0f55u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d0f55: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d0f58: xor edi, edi */
  edi = 0;
/* 8d0f5a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d0f5b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d0f5c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d0f61u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8d0f61: guest_badaddr(0x8d0f61); return;
}

void f_8d0fb0(void) {
  LOAD_REGS();
L_8d0fb0: /* 8d0fb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d0fb1: mov ebp, esp */
  ebp = esp;
/* 8d0fb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d0fb5: push 0x9d7f51 */
  { uint32_t v = 0x9d7f51u; esp -= 4; W32(esp, v); }
/* 8d0fba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d0fc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d0fc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d0fc8: sub esp, 0xf8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xf8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d0fce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d0fcf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d0fd0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d0fd1: mov eax, ecx */
  eax = ecx;
/* 8d0fd3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8d0fd6: mov ecx, dword ptr [eax + 0x340] */
  ecx = R32((uint32_t)(eax + 0x340u));
/* 8d0fdc: xor edi, edi */
  edi = 0;
/* 8d0fde: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d0fe0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d0fe3: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8d0fe6: je 0x8d28b1 */
  if (zf) goto L_8d28b1;
L_8d0fec: /* 8d0fec: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* 8d0ff2: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8d0ff8u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8d0ff8: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 8d0ffe: cmp dword ptr [ecx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d1000: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8d1004: je 0x8d1019 */
  if (zf) goto L_8d1019;
L_8d1006: /* 8d1006: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d1009: test dword ptr [edx + 0x88], 0x18000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x88u))); uint32_t b = (uint32_t)(0x18000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d1013: jne 0x8d28a2 */
  if (!zf) goto L_8d28a2;
L_8d1019: /* 8d1019: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d101c: call 0x6c3e5e */
  esp -= 4; W32(esp, 0x8d1021u); SPILL(); f_6c3e5e(); if (g_unwind) return; RELOAD();
/* 8d1021: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d1024: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d1026: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8d1028u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d1028: mov eax, dword ptr [0xcfa350] */
  eax = R32((uint32_t)(0xcfa350u));
/* 8d102d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d1030: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d1032: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d1033: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d1034: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x8d1037u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d1037: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8d103a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8d103d: cmp dword ptr [ecx + 0x15c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x15cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d1043: je 0x8d1060 */
  if (zf) goto L_8d1060;
L_8d1045: /* 8d1045: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d1048: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8d104a: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 8d104d: mov dword ptr [ebp - 0x64], 0x9f71ac */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x9f71acu);
/* 8d1054: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 8d1057: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d1058: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8d105b: call 0x6c76fd */
  esp -= 4; W32(esp, 0x8d1060u); SPILL(); f_6c76fd(); if (g_unwind) return; RELOAD();
L_8d1060: /* 8d1060: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8d1063: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8d1066: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 8d1069: cmp dword ptr [eax + 0x540], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x540u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d1070: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d1073: jne 0x8d12b1 */
  if (!zf) goto L_8d12b1;
L_8d1079: /* 8d1079: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8d107c: mov ebx, dword ptr [0xcfa54c] */
  ebx = R32((uint32_t)(0xcfa54cu));
L_8d1082: /* 8d1082: cmp edi, dword ptr [eax + 0x1278] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1278u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d1088: jge 0x8d2609 */
  if ((sf == of)) goto L_8d2609;
L_8d108e: /* 8d108e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d1090: mov edx, dword ptr [eax + 0x1274] */
  edx = R32((uint32_t)(eax + 0x1274u));
/* 8d1096: mov esi, dword ptr [edx + edi*4] */
  esi = R32((uint32_t)(edx + edi*4));
/* 8d1099: je 0x8d10b2 */
  if (zf) goto L_8d10b2;
L_8d109b: /* 8d109b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d109d: lea edx, [esi + 0x44] */
  edx = (uint32_t)(esi + 0x44u);
/* 8d10a0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d10a1: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x8d10a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d10a4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d10a6: je 0x8d12a5 */
  if (zf) goto L_8d12a5;
L_8d10ac: /* 8d10ac: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d10af: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
L_8d10b2: /* 8d10b2: mov edx, dword ptr [esi + 0xb0] */
  edx = R32((uint32_t)(esi + 0xb0u));
/* 8d10b8: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d10ba: je 0x8d12ab */
  if (zf) goto L_8d12ab;
L_8d10c0: /* 8d10c0: mov ecx, dword ptr [esi + 0x8c] */
  ecx = R32((uint32_t)(esi + 0x8cu));
/* 8d10c6: mov edx, dword ptr [eax + 0x134c] */
  edx = R32((uint32_t)(eax + 0x134cu));
/* 8d10cc: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 8d10cf: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d10d1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d10d3: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8d10d6: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d10d9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d10db: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 8d10de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d10df: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d10e1: call dword ptr [edx + 0x4c] */
  { uint32_t t = R32((uint32_t)(edx + 0x4cu)); esp -= 4; W32(esp, 0x8d10e4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d10e4: mov eax, dword ptr [0xce85a4] */
  eax = R32((uint32_t)(0xce85a4u));
/* 8d10e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d10eb: jne 0x8d115d */
  if (!zf) goto L_8d115d;
L_8d10ed: /* 8d10ed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d10ef: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 8d10f2: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8d10f8u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8d10f8: push 0xb88fb0 */
  { uint32_t v = 0xb88fb0u; esp -= 4; W32(esp, v); }
/* 8d10fd: mov ecx, 0xb88fb0 */
  ecx = 0xb88fb0u;
/* 8d1102: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x8d1108u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 8d1108: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d110a: jne 0x8d1124 */
  if (!zf) goto L_8d1124;
L_8d110c: /* 8d110c: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 8d1111: push 0xaecd68 */
  { uint32_t v = 0xaecd68u; esp -= 4; W32(esp, v); }
/* 8d1116: push 0xaecdac */
  { uint32_t v = 0xaecdacu; esp -= 4; W32(esp, v); }
/* 8d111b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8d1121u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8d1121: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8d1124: /* 8d1124: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x8d112au); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 8d112a: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 8d1130: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d1132: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8d1135: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1137: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d1138: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d113a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d113c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d113d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d113e: push 0xb88fb0 */
  { uint32_t v = 0xb88fb0u; esp -= 4; W32(esp, v); }
/* 8d1143: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8d1145u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d1145: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 8d114b: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d114e: push 0xce85a4 */
  { uint32_t v = 0xce85a4u; esp -= 4; W32(esp, v); }
/* 8d1153: mov dword ptr [0xce85a4], eax */
  W32((uint32_t)(0xce85a4u), eax);
/* 8d1158: call 0x6c1203 */
  esp -= 4; W32(esp, 0x8d115du); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
L_8d115d: /* 8d115d: mov eax, dword ptr [0xce85a0] */
  eax = R32((uint32_t)(0xce85a0u));
/* 8d1162: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d1164: jne 0x8d11f7 */
  if (!zf) goto L_8d11f7;
L_8d116a: /* 8d116a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d116c: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 8d1172: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8d1178u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8d1178: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 8d117d: mov ecx, 0xb88020 */
  ecx = 0xb88020u;
/* 8d1182: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x8d1188u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 8d1188: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d118a: jne 0x8d11a4 */
  if (!zf) goto L_8d11a4;
L_8d118c: /* 8d118c: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 8d1191: push 0xaecdd0 */
  { uint32_t v = 0xaecdd0u; esp -= 4; W32(esp, v); }
/* 8d1196: push 0xaece14 */
  { uint32_t v = 0xaece14u; esp -= 4; W32(esp, v); }
/* 8d119b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8d11a1u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8d11a1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8d11a4: /* 8d11a4: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x8d11aau); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 8d11aa: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 8d11b0: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8d11b2: mov edx, dword ptr [ebp - 0x9c] */
  edx = R32((uint32_t)(ebp + 0xffffff64u));
/* 8d11b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d11ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d11bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d11bd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d11bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d11c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d11c1: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 8d11c6: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8d11c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d11c8: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 8d11ce: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d11d1: push 0xce85a0 */
  { uint32_t v = 0xce85a0u; esp -= 4; W32(esp, v); }
/* 8d11d6: mov dword ptr [0xce85a0], eax */
  W32((uint32_t)(0xce85a0u), eax);
/* 8d11db: call 0x6c1203 */
  esp -= 4; W32(esp, 0x8d11e0u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 8d11e0: mov eax, dword ptr [0xce85a0] */
  eax = R32((uint32_t)(0xce85a0u));
/* 8d11e5: mov ecx, dword ptr [0xce85a4] */
  ecx = R32((uint32_t)(0xce85a4u));
/* 8d11eb: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* 8d11ee: mov eax, dword ptr [0xce85a0] */
  eax = R32((uint32_t)(0xce85a0u));
/* 8d11f3: or dword ptr [eax + 0x5c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x5cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x5cu), r);
  }
L_8d11f7: /* 8d11f7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d11fa: mov eax, dword ptr [edx + 0xb4] */
  eax = R32((uint32_t)(edx + 0xb4u));
/* 8d1200: mov eax, dword ptr [eax + 0x40] */
  eax = R32((uint32_t)(eax + 0x40u));
/* 8d1203: mov ecx, dword ptr [eax + 0x104] */
  ecx = R32((uint32_t)(eax + 0x104u));
/* 8d1209: mov edx, dword ptr [0xce85a4] */
  edx = R32((uint32_t)(0xce85a4u));
/* 8d120f: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d1212: mov dword ptr [edx + 0x38], ecx */
  W32((uint32_t)(edx + 0x38u), ecx);
/* 8d1215: mov ecx, esp */
  ecx = esp;
/* 8d1217: mov dword ptr [ebp - 0x40], esp */
  W32((uint32_t)(ebp + 0xffffffc0u), esp);
/* 8d121a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d121c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d121f: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 8d1226: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8d1229: mov eax, esp */
  eax = esp;
/* 8d122b: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8d122d: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 8d1234: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8d1237: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8d123a: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 8d1241: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8d1244: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8d1247: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x8d124du); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 8d124d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d1250: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d1252: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1254: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1256: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1258: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d125a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d125c: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x8d125fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d125f: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d1262: mov eax, dword ptr [0xce85a0] */
  eax = R32((uint32_t)(0xce85a0u));
/* 8d1267: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d1269: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d126b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d126d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d126f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d1270: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x8d1273u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d1273: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d1276: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d1278: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d127a: lea eax, [esi + 0x94] */
  eax = (uint32_t)(esi + 0x94u);
/* 8d1280: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d1281: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0x8d1284u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d1284: mov eax, dword ptr [esi + 0xbc] */
  eax = R32((uint32_t)(esi + 0xbcu));
/* 8d128a: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d128d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d128f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d1290: mov eax, dword ptr [esi + 0xb8] */
  eax = R32((uint32_t)(esi + 0xb8u));
/* 8d1296: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d1297: mov eax, dword ptr [esi + 0xb0] */
  eax = R32((uint32_t)(esi + 0xb0u));
/* 8d129d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d129e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d12a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d12a2: call dword ptr [edx + 0x5c] */
  { uint32_t t = R32((uint32_t)(edx + 0x5cu)); esp -= 4; W32(esp, 0x8d12a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8d12a5: /* 8d12a5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d12a8: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
L_8d12ab: /* 8d12ab: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8d12ac: jmp 0x8d1082 */
  goto L_8d1082;
L_8d12b1: /* 8d12b1: cmp dword ptr [eax + 0x1370], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1370u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d12b7: je 0x8d13d5 */
  if (zf) goto L_8d13d5;
L_8d12bd: /* 8d12bd: mov ecx, dword ptr [ecx + 0x70] */
  ecx = R32((uint32_t)(ecx + 0x70u));
/* 8d12c0: cmp dword ptr [ecx + 0x68], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x68u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d12c3: je 0x8d13d5 */
  if (zf) goto L_8d13d5;
L_8d12c9: /* 8d12c9: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8d12cc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8d12d0: /* 8d12d0: cmp edi, dword ptr [eax + 0x1278] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1278u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d12d6: jge 0x8d2609 */
  if ((sf == of)) goto L_8d2609;
L_8d12dc: /* 8d12dc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d12de: mov edx, dword ptr [eax + 0x1274] */
  edx = R32((uint32_t)(eax + 0x1274u));
/* 8d12e4: mov esi, dword ptr [edx + edi*4] */
  esi = R32((uint32_t)(edx + edi*4));
/* 8d12e7: je 0x8d1300 */
  if (zf) goto L_8d1300;
L_8d12e9: /* 8d12e9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d12eb: lea edx, [esi + 0x44] */
  edx = (uint32_t)(esi + 0x44u);
/* 8d12ee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d12ef: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x8d12f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d12f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d12f4: je 0x8d13c9 */
  if (zf) goto L_8d13c9;
L_8d12fa: /* 8d12fa: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d12fd: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
L_8d1300: /* 8d1300: mov edx, dword ptr [esi + 0xb0] */
  edx = R32((uint32_t)(esi + 0xb0u));
/* 8d1306: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d1308: je 0x8d13cf */
  if (zf) goto L_8d13cf;
L_8d130e: /* 8d130e: mov ecx, dword ptr [esi + 0x8c] */
  ecx = R32((uint32_t)(esi + 0x8cu));
/* 8d1314: mov edx, dword ptr [eax + 0x134c] */
  edx = R32((uint32_t)(eax + 0x134cu));
/* 8d131a: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 8d131d: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d131f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d1321: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8d1324: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d1327: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d1329: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 8d132c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d132d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d132f: call dword ptr [edx + 0x4c] */
  { uint32_t t = R32((uint32_t)(edx + 0x4cu)); esp -= 4; W32(esp, 0x8d1332u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d1332: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d1335: mov ecx, esp */
  ecx = esp;
/* 8d1337: mov dword ptr [ebp - 0x40], esp */
  W32((uint32_t)(ebp + 0xffffffc0u), esp);
/* 8d133a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d133c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d133f: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 8d1346: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8d1349: mov edx, esp */
  edx = esp;
/* 8d134b: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8d134d: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 8d1354: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8d1357: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8d135a: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 8d1361: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8d1364: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8d1367: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x8d136du); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 8d136d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d1370: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d1372: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1374: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1376: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1378: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d137a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d137c: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x8d137fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d137f: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d1382: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d1385: mov edx, dword ptr [edx + 0x1370] */
  edx = R32((uint32_t)(edx + 0x1370u));
/* 8d138b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d138d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d138f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1391: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1393: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d1394: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x8d1397u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d1397: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d139a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d139c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d139e: lea edx, [esi + 0x94] */
  edx = (uint32_t)(esi + 0x94u);
/* 8d13a4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d13a5: call dword ptr [eax + 0x54] */
  { uint32_t t = R32((uint32_t)(eax + 0x54u)); esp -= 4; W32(esp, 0x8d13a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d13a8: mov edx, dword ptr [esi + 0xbc] */
  edx = R32((uint32_t)(esi + 0xbcu));
/* 8d13ae: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d13b1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d13b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d13b4: mov edx, dword ptr [esi + 0xb8] */
  edx = R32((uint32_t)(esi + 0xb8u));
/* 8d13ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d13bb: mov edx, dword ptr [esi + 0xb0] */
  edx = R32((uint32_t)(esi + 0xb0u));
/* 8d13c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d13c2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d13c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d13c6: call dword ptr [eax + 0x5c] */
  { uint32_t t = R32((uint32_t)(eax + 0x5cu)); esp -= 4; W32(esp, 0x8d13c9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8d13c9: /* 8d13c9: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d13cc: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
L_8d13cf: /* 8d13cf: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8d13d0: jmp 0x8d12d0 */
  goto L_8d12d0;
L_8d13d5: /* 8d13d5: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 8d13da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d13db: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8d13de: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x8d13e4u); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 8d13e4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d13e7: mov eax, dword ptr [ecx + 0x1278] */
  eax = R32((uint32_t)(ecx + 0x1278u));
/* 8d13ed: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 8d13f3: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8d13f5: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 8d13fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d13fd: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8d1403u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8d1403: xor edi, edi */
  edi = 0;
/* 8d1405: xor esi, esi */
  esi = 0;
/* 8d1407: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 8d140a: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 8d140d: mov dword ptr [ebp - 0x4c], esi */
  W32((uint32_t)(ebp + 0xffffffb4u), esi);
L_8d1410: /* 8d1410: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d1413: cmp edi, dword ptr [eax + 0x1278] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1278u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d1419: jge 0x8d1470 */
  if ((sf == of)) goto L_8d1470;
L_8d141b: /* 8d141b: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8d141e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d1420: mov eax, dword ptr [eax + 0x1274] */
  eax = R32((uint32_t)(eax + 0x1274u));
/* 8d1426: mov ebx, dword ptr [eax + edi*4] */
  ebx = R32((uint32_t)(eax + edi*4));
/* 8d1429: je 0x8d1438 */
  if (zf) goto L_8d1438;
L_8d142b: /* 8d142b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d142d: lea eax, [ebx + 0x44] */
  eax = (uint32_t)(ebx + 0x44u);
/* 8d1430: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d1431: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x8d1434u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d1434: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d1436: je 0x8d146d */
  if (zf) goto L_8d146d;
L_8d1438: /* 8d1438: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d143b: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8d143e: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* 8d1441: mov ecx, dword ptr [0xce83a8] */
  ecx = R32((uint32_t)(0xce83a8u));
/* 8d1447: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d1448: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8d144b: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8d1450: inc dword ptr [eax + ecx*4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + ecx*4), r);
  }
/* 8d1453: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 8d1459: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d145c: je 0x8d1467 */
  if (zf) goto L_8d1467;
L_8d145e: /* 8d145e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1460: mov ecx, ebx */
  ecx = ebx;
/* 8d1462: call 0x6c8b7a */
  esp -= 4; W32(esp, 0x8d1467u); SPILL(); f_6c8b7a(); if (g_unwind) return; RELOAD();
L_8d1467: /* 8d1467: add esi, dword ptr [ebx + 0x2c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x2cu)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8d146a: mov dword ptr [ebp - 0x4c], esi */
  W32((uint32_t)(ebp + 0xffffffb4u), esi);
L_8d146d: /* 8d146d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8d146e: jmp 0x8d1410 */
  goto L_8d1410;
L_8d1470: /* 8d1470: mov eax, dword ptr [eax + 0x1278] */
  eax = R32((uint32_t)(eax + 0x1278u));
/* 8d1476: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 8d147c: lea edi, [eax*4] */
  edi = (uint32_t)(eax*4);
/* 8d1483: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8d1485: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d1486: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8d148cu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8d148c: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 8d148f: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 8d1492: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d1495: mov edi, dword ptr [ebp - 0x38] */
  edi = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8d1498: xor eax, eax */
  eax = 0;
/* 8d149a: mov ebx, ecx */
  ebx = ecx;
/* 8d149c: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8d149f: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8d14a2: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 8d14a4: mov ecx, ebx */
  ecx = ebx;
/* 8d14a6: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 8d14a8: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d14ab: xor eax, eax */
  eax = 0;
/* 8d14ad: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
L_8d14b0: /* 8d14b0: cmp eax, dword ptr [ebp + 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d14b3: jge 0x8d1725 */
  if ((sf == of)) goto L_8d1725;
L_8d14b9: /* 8d14b9: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 8d14bc: mov esi, dword ptr [ecx + eax*4] */
  esi = R32((uint32_t)(ecx + eax*4));
/* 8d14bf: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d14c2: mov dword ptr [ebp - 0x40], esi */
  W32((uint32_t)(ebp + 0xffffffc0u), esi);
/* 8d14c5: jne 0x8d14e2 */
  if (!zf) goto L_8d14e2;
L_8d14c7: /* 8d14c7: push 0xc3b */
  { uint32_t v = 0xc3bu; esp -= 4; W32(esp, v); }
/* 8d14cc: push 0xaecc68 */
  { uint32_t v = 0xaecc68u; esp -= 4; W32(esp, v); }
/* 8d14d1: push 0xaecc78 */
  { uint32_t v = 0xaecc78u; esp -= 4; W32(esp, v); }
/* 8d14d6: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8d14dcu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8d14dc: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d14df: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8d14e2: /* 8d14e2: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8d14e4: add edi, 0x12dc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x12dcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8d14ea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d14eb: lea edx, [ebp - 0x70] */
  edx = (uint32_t)(ebp + 0xffffff90u);
/* 8d14ee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d14ef: add ecx, 0x418 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x418u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d14f5: call dword ptr [0xcfa890] */
  esp -= 4; W32(esp, 0x8d14fbu); SPILL(); f_4e3ea9(); if (g_unwind) return; /* Core!?TransformBy@FBox@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8d14fb: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 8d14fe: mov edi, dword ptr [0xcfa3dc] */
  edi = R32((uint32_t)(0xcfa3dcu));
/* 8d1504: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d1505: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8d1507u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d1507: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8d150a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d150d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d150e: mov dword ptr [ebp - 0x9c], eax */
  W32((uint32_t)(ebp + 0xffffff64u), eax);
/* 8d1514: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8d1516u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d1516: mov edx, dword ptr [ebp - 0x6c] */
  edx = R32((uint32_t)(ebp + 0xffffff94u));
/* 8d1519: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d151c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d151d: mov dword ptr [ebp - 0xb8], eax */
  W32((uint32_t)(ebp + 0xffffff48u), eax);
/* 8d1523: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8d1525u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d1525: mov ebx, eax */
  ebx = eax;
/* 8d1527: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 8d152a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d152d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d152e: mov dword ptr [ebp - 0x3c], ebx */
  W32((uint32_t)(ebp + 0xffffffc4u), ebx);
/* 8d1531: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8d1533u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d1533: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d1536: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 8d153c: mov dword ptr [ebp - 0xbc], eax */
  W32((uint32_t)(ebp + 0xffffff44u), eax);
/* 8d1542: mov eax, dword ptr [ebp - 0x9c] */
  eax = R32((uint32_t)(ebp + 0xffffff64u));
/* 8d1548: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8d1549: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x8d1549);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8d154b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d154e: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 8d1551: mov eax, dword ptr [ebp - 0xb8] */
  eax = R32((uint32_t)(ebp + 0xffffff48u));
/* 8d1557: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8d1558: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x8d1558);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8d155a: mov dword ptr [ebp - 0x78], eax */
  W32((uint32_t)(ebp + 0xffffff88u), eax);
/* 8d155d: mov eax, ebx */
  eax = ebx;
/* 8d155f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8d1560: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x8d1560);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8d1562: mov ebx, eax */
  ebx = eax;
/* 8d1564: mov eax, dword ptr [ebp - 0xbc] */
  eax = R32((uint32_t)(ebp + 0xffffff44u));
/* 8d156a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8d156b: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x8d156b);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8d156d: mov dword ptr [ebp - 0xd0], eax */
  W32((uint32_t)(ebp + 0xffffff30u), eax);
L_8d1573: /* 8d1573: cmp ebx, dword ptr [ebp - 0xd0] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff30u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d1579: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 8d157c: jg 0x8d1716 */
  if ((!zf && sf == of)) goto L_8d1716;
L_8d1582: /* 8d1582: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8d1584: jl 0x8d1710 */
  if ((sf != of)) goto L_8d1710;
L_8d158a: /* 8d158a: cmp ebx, dword ptr [edi + 0x1298] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1298u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d1590: jge 0x8d1710 */
  if ((sf == of)) goto L_8d1710;
L_8d1596: /* 8d1596: mov eax, dword ptr [ebp - 0x74] */
  eax = R32((uint32_t)(ebp + 0xffffff8cu));
/* 8d1599: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8d159c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8d15a0: /* 8d15a0: cmp eax, dword ptr [ebp - 0x78] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff88u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d15a3: jg 0x8d1710 */
  if ((!zf && sf == of)) goto L_8d1710;
L_8d15a9: /* 8d15a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8d15ab: jl 0x8d1701 */
  if ((sf != of)) goto L_8d1701;
L_8d15b1: /* 8d15b1: mov eax, dword ptr [edi + 0x1294] */
  eax = R32((uint32_t)(edi + 0x1294u));
/* 8d15b7: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d15ba: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d15bc: jge 0x8d1701 */
  if ((sf == of)) goto L_8d1701;
L_8d15c2: /* 8d15c2: imul eax, dword ptr [ebp - 0x24] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  eax = (uint32_t)r;
  }
/* 8d15c6: mov edx, ecx */
  edx = ecx;
/* 8d15c8: mov ecx, dword ptr [edi + 0x1274] */
  ecx = R32((uint32_t)(edi + 0x1274u));
/* 8d15ce: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d15d0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8d15d2: mov ebx, eax */
  ebx = eax;
/* 8d15d4: mov edi, dword ptr [ecx + ebx*4] */
  edi = R32((uint32_t)(ecx + ebx*4));
/* 8d15d7: add edx, 0x418 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x418u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8d15dd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d15de: lea ecx, [edi + 0x44] */
  ecx = (uint32_t)(edi + 0x44u);
/* 8d15e1: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 8d15e4: call dword ptr [0xcfa88c] */
  esp -= 4; W32(esp, 0x8d15eau); SPILL(); f_4e21d5(); if (g_unwind) return; /* Core!?Intersect@FBox@@QBE_NABV1@@Z */ RELOAD();
/* 8d15ea: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d15ec: je 0x8d16fe */
  if (zf) goto L_8d16fe;
L_8d15f2: /* 8d15f2: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 8d15f8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8d15fa: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 8d15fc: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8d1602u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8d1602: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d1604: je 0x8d16f6 */
  if (zf) goto L_8d16f6;
L_8d160a: /* 8d160a: mov ecx, dword ptr [edi + 0x64] */
  ecx = R32((uint32_t)(edi + 0x64u));
/* 8d160d: lea esi, [ecx - 1] */
  esi = (uint32_t)(ecx + 0xffffffffu);
/* 8d1610: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d1613: mov edx, dword ptr [ecx + 0x33c] */
  edx = R32((uint32_t)(ecx + 0x33cu));
/* 8d1619: mov ecx, dword ptr [ebp - 0xbc] */
  ecx = R32((uint32_t)(ebp + 0xffffff44u));
/* 8d161f: mov ebx, edx */
  ebx = edx;
/* 8d1621: imul ebx, dword ptr [ebp - 0x24] */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  ebx = (uint32_t)r;
  }
/* 8d1625: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 8d1627: mov dword ptr [ebp - 0xb4], esi */
  W32((uint32_t)(ebp + 0xffffff4cu), esi);
/* 8d162d: jns 0x8d163b */
  if (!sf) goto L_8d163b;
L_8d162f: /* 8d162f: mov dword ptr [ebp - 0xb0], 0 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x0u);
/* 8d1639: jmp 0x8d164b */
  goto L_8d164b;
L_8d163b: /* 8d163b: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d163d: mov dword ptr [ebp - 0xb0], ecx */
  W32((uint32_t)(ebp + 0xffffff50u), ecx);
/* 8d1643: jl 0x8d164b */
  if ((sf != of)) goto L_8d164b;
L_8d1645: /* 8d1645: mov dword ptr [ebp - 0xb0], esi */
  W32((uint32_t)(ebp + 0xffffff50u), esi);
L_8d164b: /* 8d164b: imul edx, dword ptr [ebp - 0x1c] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  edx = (uint32_t)r;
  }
/* 8d164f: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 8d1652: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8d1653: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 8d1656: mov ecx, dword ptr [ebp - 0xb8] */
  ecx = R32((uint32_t)(ebp + 0xffffff48u));
/* 8d165c: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 8d165e: jns 0x8d166c */
  if (!sf) goto L_8d166c;
L_8d1660: /* 8d1660: mov dword ptr [ebp - 0xac], 0 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x0u);
/* 8d166a: jmp 0x8d1685 */
  goto L_8d1685;
L_8d166c: /* 8d166c: mov esi, dword ptr [ebp - 0x34] */
  esi = R32((uint32_t)(ebp + 0xffffffccu));
/* 8d166f: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d1671: mov dword ptr [ebp - 0xac], ecx */
  W32((uint32_t)(ebp + 0xffffff54u), ecx);
/* 8d1677: jl 0x8d167f */
  if ((sf != of)) goto L_8d167f;
L_8d1679: /* 8d1679: mov dword ptr [ebp - 0xac], esi */
  W32((uint32_t)(ebp + 0xffffff54u), esi);
L_8d167f: /* 8d167f: mov esi, dword ptr [ebp - 0xb4] */
  esi = R32((uint32_t)(ebp + 0xffffff4cu));
L_8d1685: /* 8d1685: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8d1688: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 8d168a: jns 0x8d1690 */
  if (!sf) goto L_8d1690;
L_8d168c: /* 8d168c: xor ebx, ebx */
  ebx = 0;
/* 8d168e: jmp 0x8d1698 */
  goto L_8d1698;
L_8d1690: /* 8d1690: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d1692: mov ebx, ecx */
  ebx = ecx;
/* 8d1694: jl 0x8d1698 */
  if ((sf != of)) goto L_8d1698;
L_8d1696: /* 8d1696: mov ebx, esi */
  ebx = esi;
L_8d1698: /* 8d1698: mov ecx, dword ptr [ebp - 0x9c] */
  ecx = R32((uint32_t)(ebp + 0xffffff64u));
/* 8d169e: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 8d16a0: jns 0x8d16a6 */
  if (!sf) goto L_8d16a6;
L_8d16a2: /* 8d16a2: xor edx, edx */
  edx = 0;
/* 8d16a4: jmp 0x8d16af */
  goto L_8d16af;
L_8d16a6: /* 8d16a6: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8d16a9: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d16ab: jge 0x8d16af */
  if ((sf == of)) goto L_8d16af;
L_8d16ad: /* 8d16ad: mov edx, ecx */
  edx = ecx;
L_8d16af: /* 8d16af: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d16b2: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8d16b5: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 8d16b8: mov esi, dword ptr [ebp - 0x40] */
  esi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8d16bb: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 8d16be: mov edx, dword ptr [ebp - 0xac] */
  edx = R32((uint32_t)(ebp + 0xffffff54u));
/* 8d16c4: mov dword ptr [eax + 0x18], edx */
  W32((uint32_t)(eax + 0x18u), edx);
/* 8d16c7: mov edx, dword ptr [ebp - 0xb0] */
  edx = R32((uint32_t)(ebp + 0xffffff50u));
/* 8d16cd: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 8d16d0: xor ecx, ecx */
  ecx = 0;
/* 8d16d2: mov dword ptr [eax + 0x14], ebx */
  W32((uint32_t)(eax + 0x14u), ebx);
/* 8d16d5: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d16d8: mov dword ptr [eax], 0xa1c048 */
  W32((uint32_t)(eax), 0xa1c048u);
/* 8d16de: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 8d16e1: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 8d16e4: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 8d16e7: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 8d16ea: mov dword ptr [eax + 0x24], 0xffff */
  W32((uint32_t)(eax + 0x24u), 0xffffu);
/* 8d16f1: mov dword ptr [eax + 0x28], ecx */
  W32((uint32_t)(eax + 0x28u), ecx);
/* 8d16f4: jmp 0x8d16f8 */
  goto L_8d16f8;
L_8d16f6: /* 8d16f6: xor eax, eax */
  eax = 0;
L_8d16f8: /* 8d16f8: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8d16fb: mov dword ptr [ecx + ebx*4], eax */
  W32((uint32_t)(ecx + ebx*4), eax);
L_8d16fe: /* 8d16fe: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
L_8d1701: /* 8d1701: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d1704: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d1707: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d1708: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8d170b: jmp 0x8d15a0 */
  goto L_8d15a0;
L_8d1710: /* 8d1710: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8d1711: jmp 0x8d1573 */
  goto L_8d1573;
L_8d1716: /* 8d1716: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8d1719: mov esi, dword ptr [ebp - 0x4c] */
  esi = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8d171c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d171d: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 8d1720: jmp 0x8d14b0 */
  goto L_8d14b0;
L_8d1725: /* 8d1725: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 8d172b: imul esi, esi, 0x34 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x34u);
  esi = (uint32_t)r;
  }
/* 8d172e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8d1730: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d1731: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8d1737u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8d1737: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8d173a: xor eax, eax */
  eax = 0;
/* 8d173c: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
L_8d173f: /* 8d173f: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d1742: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d1744: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8d1747: jge 0x8d191b */
  if ((sf == of)) goto L_8d191b;
L_8d174d: /* 8d174d: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 8d1750: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d1753: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 8d1756: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d1759: mov ecx, dword ptr [eax + 0x1274] */
  ecx = R32((uint32_t)(eax + 0x1274u));
/* 8d175f: mov esi, dword ptr [ecx + edx*4] */
  esi = R32((uint32_t)(ecx + edx*4));
/* 8d1762: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8d1765: fld dword ptr [esi + 0x70] */
  { double v = F32((uint32_t)(esi + 0x70u)); FPUSH(v); }
/* 8d1768: fsub dword ptr [eax + 0x194] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x194u)));
/* 8d176e: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d1771: fld dword ptr [esi + 0x74] */
  { double v = F32((uint32_t)(esi + 0x74u)); FPUSH(v); }
/* 8d1774: mov dword ptr [ebp - 0x34], esi */
  W32((uint32_t)(ebp + 0xffffffccu), esi);
/* 8d1777: fsub dword ptr [eax + 0x198] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x198u)));
/* 8d177d: fld dword ptr [esi + 0x78] */
  { double v = F32((uint32_t)(esi + 0x78u)); FPUSH(v); }
/* 8d1780: fsub dword ptr [eax + 0x19c] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x19cu)));
/* 8d1786: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8d1788: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8d178a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8d178c: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8d178e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8d1790: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 8d1792: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 8d1794: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8d1796: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8d1799: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d179b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d179d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d179f: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x8d17a5u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 8d17a5: fst qword ptr [ebp - 0x44] */
  WF64((uint32_t)(ebp + 0xffffffbcu), ST0);
/* 8d17a8: lea edx, [ebp - 0x104] */
  edx = (uint32_t)(ebp + 0xfffffefcu);
/* 8d17ae: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8d17b1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d17b4: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 8d17b7: mov ecx, 0x20 */
  ecx = 0x20u;
/* 8d17bc: mov edi, dword ptr [ebp - 0x40] */
  edi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8d17bf: xor eax, eax */
  eax = 0;
/* 8d17c1: mov ebx, ecx */
  ebx = ecx;
/* 8d17c3: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8d17c6: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8d17c9: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 8d17cb: mov ecx, ebx */
  ecx = ebx;
/* 8d17cd: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 8d17cf: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 8d17d2: xor ebx, ebx */
  ebx = 0;
/* 8d17d4: xor edi, edi */
  edi = 0;
L_8d17d6: /* 8d17d6: cmp edi, dword ptr [ebp + 0x18] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d17d9: jge 0x8d186b */
  if ((sf == of)) goto L_8d186b;
L_8d17df: /* 8d17df: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 8d17e2: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* 8d17e5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d17e7: jne 0x8d17f0 */
  if (!zf) goto L_8d17f0;
L_8d17e9: /* 8d17e9: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 8d17ec: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d17ee: je 0x8d1865 */
  if (zf) goto L_8d1865;
L_8d17f0: /* 8d17f0: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 8d17f3: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 8d17f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d17f7: lea edx, [ebp - 0x70] */
  edx = (uint32_t)(ebp + 0xffffff90u);
/* 8d17fa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d17fb: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 8d17fe: call dword ptr [0xcfa60c] */
  esp -= 4; W32(esp, 0x8d1804u); SPILL(); f_4e3332(); if (g_unwind) return; /* Core!?ExpandBy@FBox@@QBE?AV1@M@Z */ RELOAD();
/* 8d1804: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 8d1807: mov ecx, dword ptr [edx + edi*4] */
  ecx = R32((uint32_t)(edx + edi*4));
/* 8d180a: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 8d180d: fcomp dword ptr [ebp - 0x70] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffff90u)));
  FPOP();
/* 8d1810: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d1812: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d1815: jne 0x8d1865 */
  if (!zf) goto L_8d1865;
L_8d1817: /* 8d1817: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 8d181a: fcomp dword ptr [ebp - 0x64] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffff9cu)));
  FPOP();
/* 8d181d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d181f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8d1822: jp 0x8d1865 */
  if (pf) goto L_8d1865;
L_8d1824: /* 8d1824: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 8d1827: fcomp dword ptr [ebp - 0x6c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffff94u)));
  FPOP();
/* 8d182a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d182c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d182f: jne 0x8d1865 */
  if (!zf) goto L_8d1865;
L_8d1831: /* 8d1831: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 8d1834: fcomp dword ptr [ebp - 0x60] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffa0u)));
  FPOP();
/* 8d1837: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d1839: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8d183c: jp 0x8d1865 */
  if (pf) goto L_8d1865;
L_8d183e: /* 8d183e: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 8d1841: fcomp dword ptr [ebp - 0x68] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffff98u)));
  FPOP();
/* 8d1844: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d1846: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d1849: jne 0x8d1865 */
  if (!zf) goto L_8d1865;
L_8d184b: /* 8d184b: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 8d184e: fcomp dword ptr [ebp - 0x5c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffa4u)));
  FPOP();
/* 8d1851: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d1853: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8d1856: jp 0x8d1865 */
  if (pf) goto L_8d1865;
L_8d1858: /* 8d1858: mov dword ptr [ebp + ebx*4 - 0x104], ecx */
  W32((uint32_t)(ebp + ebx*4 + 0xfffffefcu), ecx);
/* 8d185f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8d1860: cmp ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8d1863: ja 0x8d186b */
  if ((!cf && !zf)) goto L_8d186b;
L_8d1865: /* 8d1865: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8d1866: jmp 0x8d17d6 */
  goto L_8d17d6;
L_8d186b: /* 8d186b: xor edi, edi */
  edi = 0;
/* 8d186d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8d1870: /* 8d1870: cmp edi, dword ptr [esi + 0x2c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d1873: jge 0x8d1912 */
  if ((sf == of)) goto L_8d1912;
L_8d1879: /* 8d1879: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d187b: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d187e: je 0x8d18a1 */
  if (zf) goto L_8d18a1;
L_8d1880: /* 8d1880: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8d1883: lea eax, [edi + edi*8] */
  eax = (uint32_t)(edi + edi*8);
/* 8d1886: mov eax, dword ptr [ecx + eax*4 + 4] */
  eax = R32((uint32_t)(ecx + eax*4 + 0x4u));
/* 8d188a: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 8d188d: mov eax, dword ptr [ebx + 0x1340] */
  eax = R32((uint32_t)(ebx + 0x1340u));
/* 8d1893: cmp dword ptr [eax + edx*4 + 0xc], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4 + 0xcu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d1898: mov dword ptr [ebp - 0x20], 1 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x1u);
/* 8d189f: jne 0x8d18a4 */
  if (!zf) goto L_8d18a4;
L_8d18a1: /* 8d18a1: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
L_8d18a4: /* 8d18a4: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8d18a7: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d18aa: mov eax, ecx */
  eax = ecx;
/* 8d18ac: imul eax, eax, 0x34 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x34u);
  eax = (uint32_t)r;
  }
/* 8d18af: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d18b1: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8d18b4: mov esi, dword ptr [ebx + 0x1340] */
  esi = R32((uint32_t)(ebx + 0x1340u));
/* 8d18ba: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8d18bb: mov dword ptr [ebp - 0x4c], ecx */
  W32((uint32_t)(ebp + 0xffffffb4u), ecx);
/* 8d18be: lea ecx, [edi + edi*8] */
  ecx = (uint32_t)(edi + edi*8);
/* 8d18c1: lea edx, [edx + ecx*4] */
  edx = (uint32_t)(edx + ecx*4);
/* 8d18c4: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8d18c7: lea ecx, [ecx + ecx*4] */
  ecx = (uint32_t)(ecx + ecx*4);
/* 8d18ca: mov esi, dword ptr [esi + ecx*4 + 4] */
  esi = R32((uint32_t)(esi + ecx*4 + 0x4u));
/* 8d18ce: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8d18d1: mov ecx, dword ptr [ecx + 0x8c] */
  ecx = R32((uint32_t)(ecx + 0x8cu));
/* 8d18d7: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 8d18da: add ecx, dword ptr [ebx + 0x134c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x134cu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d18e0: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d18e3: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8d18e6: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8d18e9: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 8d18ec: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 8d18ee: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 8d18f1: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 8d18f4: xor ecx, ecx */
  ecx = 0;
L_8d18f6: /* 8d18f6: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d18f9: jge 0x8d1909 */
  if ((sf == of)) goto L_8d1909;
L_8d18fb: /* 8d18fb: mov edx, dword ptr [ebp + ecx*4 - 0x104] */
  edx = R32((uint32_t)(ebp + ecx*4 + 0xfffffefcu));
/* 8d1902: mov dword ptr [eax + ecx*4 + 0x14], edx */
  W32((uint32_t)(eax + ecx*4 + 0x14u), edx);
/* 8d1906: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8d1907: jmp 0x8d18f6 */
  goto L_8d18f6;
L_8d1909: /* 8d1909: mov esi, dword ptr [ebp - 0x34] */
  esi = R32((uint32_t)(ebp + 0xffffffccu));
/* 8d190c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8d190d: jmp 0x8d1870 */
  goto L_8d1870;
L_8d1912: /* 8d1912: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d1915: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d1916: jmp 0x8d173f */
  goto L_8d173f;
L_8d191b: /* 8d191b: mov esi, dword ptr [ebp - 0x4c] */
  esi = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8d191e: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d1921: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d1922: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d1923: call 0x6c53b7 */
  esp -= 4; W32(esp, 0x8d1928u); SPILL(); f_6c53b7(); if (g_unwind) return; RELOAD();
/* 8d1928: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d192b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8d192d: lea ecx, [esi*4] */
  ecx = (uint32_t)(esi*4);
/* 8d1934: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d1935: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 8d193b: mov dword ptr [ebp - 0x98], 0xa1c018 */
  W32((uint32_t)(ebp + 0xffffff68u), 0xa1c018u);
/* 8d1945: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8d194bu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8d194b: mov dword ptr [ebp - 0x94], eax */
  W32((uint32_t)(ebp + 0xffffff6cu), eax);
/* 8d1951: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 8d1958: jmp 0x8d1960 */
  goto L_8d1960;
L_8d1960: /* 8d1960: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8d1963: cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d1966: jge 0x8d1e6b */
  if ((sf == of)) goto L_8d1e6b;
L_8d196c: /* 8d196c: mov esi, dword ptr [0xcfa1b0] */
  esi = R32((uint32_t)(0xcfa1b0u));
/* 8d1972: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 8d1975: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 8d1977: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1979: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 8d197e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d197f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d1980: call 0x99c910 */
  esp -= 4; W32(esp, 0x8d1985u); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 8d1985: add eax, 0xe2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe2u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 8d198a: mov ecx, 0 */
  ecx = 0x0u;
/* 8d198f: adc edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 8d1991: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 8d1994: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 8d1996: mov esi, dword ptr [0xcfa1b0] */
  esi = R32((uint32_t)(0xcfa1b0u));
/* 8d199c: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d199f: adc ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 8d19a1: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 8d19a4: mov dword ptr [ebp - 0x8c], eax */
  W32((uint32_t)(ebp + 0xffffff74u), eax);
/* 8d19aa: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d19ad: imul eax, eax, 0x34 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x34u);
  eax = (uint32_t)r;
  }
/* 8d19b0: mov dword ptr [ebp - 0x90], ecx */
  W32((uint32_t)(ebp + 0xffffff70u), ecx);
/* 8d19b6: mov dword ptr [ebp - 0x80], ecx */
  W32((uint32_t)(ebp + 0xffffff80u), ecx);
/* 8d19b9: mov dword ptr [ebp - 0x7c], ecx */
  W32((uint32_t)(ebp + 0xffffff84u), ecx);
/* 8d19bc: mov ecx, dword ptr [ebp - 0x94] */
  ecx = R32((uint32_t)(ebp + 0xffffff6cu));
/* 8d19c2: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d19c4: mov dword ptr [ebp - 0x88], edx */
  W32((uint32_t)(ebp + 0xffffff78u), edx);
/* 8d19ca: mov dword ptr [ebp - 0x84], 0x7fffffff */
  W32((uint32_t)(ebp + 0xffffff7cu), 0x7fffffffu);
/* 8d19d4: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 8d19d6: inc dword ptr [ebp - 0x90] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff70u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffff70u), r);
  }
/* 8d19dc: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8d19df: mov ecx, dword ptr [edx + 0x1c] */
  ecx = R32((uint32_t)(edx + 0x1cu));
/* 8d19e2: cmp dword ptr [ebp - 0x84], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff7cu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d19e8: jle 0x8d19f0 */
  if ((zf || sf != of)) goto L_8d19f0;
L_8d19ea: /* 8d19ea: mov dword ptr [ebp - 0x84], ecx */
  W32((uint32_t)(ebp + 0xffffff7cu), ecx);
L_8d19f0: /* 8d19f0: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 8d19f3: mov ecx, dword ptr [ecx + 0x20] */
  ecx = R32((uint32_t)(ecx + 0x20u));
/* 8d19f6: cmp dword ptr [ebp - 0x80], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff80u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d19f9: jge 0x8d19fe */
  if ((sf == of)) goto L_8d19fe;
L_8d19fb: /* 8d19fb: mov dword ptr [ebp - 0x80], ecx */
  W32((uint32_t)(ebp + 0xffffff80u), ecx);
L_8d19fe: /* 8d19fe: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8d1a01: mov eax, dword ptr [edx + 0x14] */
  eax = R32((uint32_t)(edx + 0x14u));
/* 8d1a04: add dword ptr [ebp - 0x7c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff84u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffff84u), r);
  }
/* 8d1a07: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d1a0a: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 8d1a10: mov edx, dword ptr [eax + 0x40] */
  edx = R32((uint32_t)(eax + 0x40u));
/* 8d1a13: mov ecx, dword ptr [edx + 0x38] */
  ecx = R32((uint32_t)(edx + 0x38u));
/* 8d1a16: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d1a18: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x8d1a1eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d1a1e: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 8d1a21: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d1a23: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d1a26: je 0x8d1aec */
  if (zf) goto L_8d1aec;
L_8d1a2c: /* 8d1a2c: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d1a2f: lea ecx, [esi + 1] */
  ecx = (uint32_t)(esi + 0x1u);
L_8d1a32: /* 8d1a32: cmp ecx, dword ptr [ebp - 0x4c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d1a35: jge 0x8d1aec */
  if ((sf == of)) goto L_8d1aec;
L_8d1a3b: /* 8d1a3b: mov edx, ecx */
  edx = ecx;
/* 8d1a3d: imul edx, edx, 0x34 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x34u);
  edx = (uint32_t)r;
  }
/* 8d1a40: lea eax, [edx + edi] */
  eax = (uint32_t)(edx + edi);
/* 8d1a43: mov edx, esi */
  edx = esi;
/* 8d1a45: imul edx, edx, 0x34 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x34u);
  edx = (uint32_t)r;
  }
/* 8d1a48: mov ebx, dword ptr [edx + edi] */
  ebx = R32((uint32_t)(edx + edi));
/* 8d1a4b: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8d1a4d: cmp ebx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d1a4f: jne 0x8d1aec */
  if (!zf) goto L_8d1aec;
L_8d1a55: /* 8d1a55: mov ebx, dword ptr [edx + 0xc] */
  ebx = R32((uint32_t)(edx + 0xcu));
/* 8d1a58: cmp ebx, dword ptr [eax + 0xc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d1a5b: jne 0x8d1aec */
  if (!zf) goto L_8d1aec;
L_8d1a61: /* 8d1a61: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8d1a64: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8d1a67: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 8d1a6a: cmp edx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d1a6d: jne 0x8d1aec */
  if (!zf) goto L_8d1aec;
L_8d1a6f: /* 8d1a6f: xor eax, eax */
  eax = 0;
L_8d1a71: /* 8d1a71: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d1a74: jge 0x8d1a91 */
  if ((sf == of)) goto L_8d1a91;
L_8d1a76: /* 8d1a76: mov ebx, esi */
  ebx = esi;
/* 8d1a78: imul ebx, ebx, 0xd */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0xdu);
  ebx = (uint32_t)r;
  }
/* 8d1a7b: mov edx, ecx */
  edx = ecx;
/* 8d1a7d: imul edx, edx, 0xd */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0xdu);
  edx = (uint32_t)r;
  }
/* 8d1a80: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8d1a82: mov ebx, dword ptr [edi + ebx*4 + 0x14] */
  ebx = R32((uint32_t)(edi + ebx*4 + 0x14u));
/* 8d1a86: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8d1a88: cmp ebx, dword ptr [edi + edx*4 + 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + edx*4 + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d1a8c: jne 0x8d1aec */
  if (!zf) goto L_8d1aec;
L_8d1a8e: /* 8d1a8e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d1a8f: jmp 0x8d1a71 */
  goto L_8d1a71;
L_8d1a91: /* 8d1a91: mov esi, dword ptr [ebp - 0x90] */
  esi = R32((uint32_t)(ebp + 0xffffff70u));
/* 8d1a97: mov edx, dword ptr [ebp - 0x94] */
  edx = R32((uint32_t)(ebp + 0xffffff6cu));
/* 8d1a9d: mov eax, ecx */
  eax = ecx;
/* 8d1a9f: imul eax, eax, 0x34 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x34u);
  eax = (uint32_t)r;
  }
/* 8d1aa2: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d1aa4: mov dword ptr [edx + esi*4], eax */
  W32((uint32_t)(edx + esi*4), eax);
/* 8d1aa7: mov ebx, dword ptr [ebp - 0x90] */
  ebx = R32((uint32_t)(ebp + 0xffffff70u));
/* 8d1aad: mov esi, dword ptr [ebp - 0x84] */
  esi = R32((uint32_t)(ebp + 0xffffff7cu));
/* 8d1ab3: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8d1ab4: mov dword ptr [ebp - 0x90], ebx */
  W32((uint32_t)(ebp + 0xffffff70u), ebx);
/* 8d1aba: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8d1abd: mov edx, dword ptr [edx + 0x1c] */
  edx = R32((uint32_t)(edx + 0x1cu));
/* 8d1ac0: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d1ac2: jle 0x8d1aca */
  if ((zf || sf != of)) goto L_8d1aca;
L_8d1ac4: /* 8d1ac4: mov dword ptr [ebp - 0x84], edx */
  W32((uint32_t)(ebp + 0xffffff7cu), edx);
L_8d1aca: /* 8d1aca: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8d1acd: mov edx, dword ptr [edx + 0x20] */
  edx = R32((uint32_t)(edx + 0x20u));
/* 8d1ad0: cmp dword ptr [ebp - 0x80], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff80u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d1ad3: jge 0x8d1ad8 */
  if ((sf == of)) goto L_8d1ad8;
L_8d1ad5: /* 8d1ad5: mov dword ptr [ebp - 0x80], edx */
  W32((uint32_t)(ebp + 0xffffff80u), edx);
L_8d1ad8: /* 8d1ad8: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8d1adb: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 8d1ade: add dword ptr [ebp - 0x7c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff84u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffff84u), r);
  }
/* 8d1ae1: mov esi, ecx */
  esi = ecx;
/* 8d1ae3: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 8d1ae6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8d1ae7: jmp 0x8d1a32 */
  goto L_8d1a32;
L_8d1aec: /* 8d1aec: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d1aef: imul eax, eax, 0x34 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x34u);
  eax = (uint32_t)r;
  }
/* 8d1af2: mov ecx, dword ptr [eax + edi + 8] */
  ecx = R32((uint32_t)(eax + edi + 0x8u));
/* 8d1af6: lea esi, [eax + edi] */
  esi = (uint32_t)(eax + edi);
/* 8d1af9: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8d1afc: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 8d1aff: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d1b02: mov ecx, dword ptr [eax + 0x1340] */
  ecx = R32((uint32_t)(eax + 0x1340u));
/* 8d1b08: lea ebx, [ecx + edx*4] */
  ebx = (uint32_t)(ecx + edx*4);
/* 8d1b0b: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 8d1b0e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d1b11: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 8d1b14: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d1b16: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d1b18: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 8d1b1b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d1b1c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1b1e: call dword ptr [eax + 0x4c] */
  { uint32_t t = R32((uint32_t)(eax + 0x4cu)); esp -= 4; W32(esp, 0x8d1b21u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d1b21: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d1b24: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d1b26: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1b28: lea edx, [ebp - 0x98] */
  edx = (uint32_t)(ebp + 0xffffff68u);
/* 8d1b2e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d1b2f: call dword ptr [eax + 0x58] */
  { uint32_t t = R32((uint32_t)(eax + 0x58u)); esp -= 4; W32(esp, 0x8d1b32u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d1b32: mov dword ptr [ebp - 0x78], eax */
  W32((uint32_t)(ebp + 0xffffff88u), eax);
/* 8d1b35: mov eax, dword ptr [0xce859c] */
  eax = R32((uint32_t)(0xce859cu));
/* 8d1b3a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d1b3c: jne 0x8d1bb6 */
  if (!zf) goto L_8d1bb6;
L_8d1b3e: /* 8d1b3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d1b3f: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8d1b42: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8d1b48u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8d1b48: push 0xce9540 */
  { uint32_t v = 0xce9540u; esp -= 4; W32(esp, v); }
/* 8d1b4d: mov ecx, 0xce9540 */
  ecx = 0xce9540u;
/* 8d1b52: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x8d1b58u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 8d1b58: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d1b5a: jne 0x8d1b74 */
  if (!zf) goto L_8d1b74;
L_8d1b5c: /* 8d1b5c: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 8d1b61: push 0xaece40 */
  { uint32_t v = 0xaece40u; esp -= 4; W32(esp, v); }
/* 8d1b66: push 0xaece84 */
  { uint32_t v = 0xaece84u; esp -= 4; W32(esp, v); }
/* 8d1b6b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8d1b71u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8d1b71: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8d1b74: /* 8d1b74: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x8d1b7au); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 8d1b7a: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 8d1b80: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d1b82: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8d1b85: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1b87: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d1b88: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1b8a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1b8c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d1b8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d1b8e: push 0xce9540 */
  { uint32_t v = 0xce9540u; esp -= 4; W32(esp, v); }
/* 8d1b93: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x8d1b99u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 8d1b99: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 8d1b9f: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d1ba2: push 0xce859c */
  { uint32_t v = 0xce859cu; esp -= 4; W32(esp, v); }
/* 8d1ba7: mov dword ptr [0xce859c], eax */
  W32((uint32_t)(0xce859cu), eax);
/* 8d1bac: call 0x6c1203 */
  esp -= 4; W32(esp, 0x8d1bb1u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 8d1bb1: mov eax, dword ptr [0xce859c] */
  eax = R32((uint32_t)(0xce859cu));
L_8d1bb6: /* 8d1bb6: and dword ptr [eax + 0x30], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x30u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x30u), r);
  }
/* 8d1bba: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8d1bbc: mov eax, dword ptr [0xce859c] */
  eax = R32((uint32_t)(0xce859cu));
/* 8d1bc1: xor edx, edx */
  edx = 0;
/* 8d1bc3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d1bc5: mov ecx, dword ptr [eax + 0x48] */
  ecx = R32((uint32_t)(eax + 0x48u));
/* 8d1bc8: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 8d1bcb: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 8d1bcd: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8d1bd0: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 8d1bd2: mov dword ptr [eax + 0x48], ecx */
  W32((uint32_t)(eax + 0x48u), ecx);
/* 8d1bd5: mov al, byte ptr [ebx + 0xc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0xcu))) & 0xffu);
/* 8d1bd8: mov ecx, dword ptr [0xce859c] */
  ecx = R32((uint32_t)(0xce859cu));
/* 8d1bde: mov byte ptr [ecx + 0x44], al */
  W8((uint32_t)(ecx + 0x44u), (eax & 0xffu));
/* 8d1be1: mov ecx, dword ptr [0xce859c] */
  ecx = R32((uint32_t)(0xce859cu));
/* 8d1be7: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* 8d1bea: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 8d1bed: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d1bef: jge 0x8d1c01 */
  if ((sf == of)) goto L_8d1c01;
L_8d1bf1: /* 8d1bf1: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 8d1bf3: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8d1bf5: add ecx, 0x38 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d1bf8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d1bf9: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8d1bffu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8d1bff: jmp 0x8d1c0f */
  goto L_8d1c0f;
L_8d1c01: /* 8d1c01: jle 0x8d1c0f */
  if ((zf || sf != of)) goto L_8d1c0f;
L_8d1c03: /* 8d1c03: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 8d1c05: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d1c06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d1c07: add ecx, 0x38 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d1c0a: call 0x6cc239 */
  esp -= 4; W32(esp, 0x8d1c0fu); SPILL(); f_6cc239(); if (g_unwind) return; RELOAD();
L_8d1c0f: /* 8d1c0f: xor eax, eax */
  eax = 0;
L_8d1c11: /* 8d1c11: cmp eax, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d1c14: jge 0x8d1cbb */
  if ((sf == of)) goto L_8d1cbb;
L_8d1c1a: /* 8d1c1a: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8d1c1c: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 8d1c1f: mov esi, dword ptr [0xce859c] */
  esi = R32((uint32_t)(0xce859cu));
/* 8d1c25: imul edx, edx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x78u);
  edx = (uint32_t)r;
  }
/* 8d1c28: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d1c2b: mov edx, dword ptr [edx + edi + 0x350] */
  edx = R32((uint32_t)(edx + edi + 0x350u));
/* 8d1c32: mov esi, dword ptr [esi + 0x38] */
  esi = R32((uint32_t)(esi + 0x38u));
/* 8d1c35: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 8d1c38: shl ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8d1c3b: mov dword ptr [ecx + esi], edx */
  W32((uint32_t)(ecx + esi), edx);
/* 8d1c3e: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 8d1c41: sub edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  edx = r;
  }
/* 8d1c44: je 0x8d1c6d */
  if (zf) goto L_8d1c6d;
L_8d1c46: /* 8d1c46: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 8d1c47: je 0x8d1c60 */
  if (zf) goto L_8d1c60;
L_8d1c49: /* 8d1c49: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 8d1c4a: jne 0x8d1c8c */
  if (!zf) goto L_8d1c8c;
L_8d1c4c: /* 8d1c4c: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8d1c4e: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 8d1c51: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d1c54: imul edx, edx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x78u);
  edx = (uint32_t)r;
  }
/* 8d1c57: mov edx, dword ptr [edx + edi + 0x354] */
  edx = R32((uint32_t)(edx + edi + 0x354u));
/* 8d1c5e: jmp 0x8d1c7f */
  goto L_8d1c7f;
L_8d1c60: /* 8d1c60: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d1c62: jne 0x8d1c69 */
  if (!zf) goto L_8d1c69;
L_8d1c64: /* 8d1c64: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* 8d1c67: jmp 0x8d1c7f */
  goto L_8d1c7f;
L_8d1c69: /* 8d1c69: xor edx, edx */
  edx = 0;
/* 8d1c6b: jmp 0x8d1c7f */
  goto L_8d1c7f;
L_8d1c6d: /* 8d1c6d: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8d1c6f: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 8d1c72: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d1c75: imul edx, edx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x78u);
  edx = (uint32_t)r;
  }
/* 8d1c78: mov edx, dword ptr [edx + edi + 0x3c4] */
  edx = R32((uint32_t)(edx + edi + 0x3c4u));
L_8d1c7f: /* 8d1c7f: mov esi, dword ptr [0xce859c] */
  esi = R32((uint32_t)(0xce859cu));
/* 8d1c85: mov esi, dword ptr [esi + 0x38] */
  esi = R32((uint32_t)(esi + 0x38u));
/* 8d1c88: mov dword ptr [esi + ecx + 4], edx */
  W32((uint32_t)(esi + ecx + 0x4u), edx);
L_8d1c8c: /* 8d1c8c: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8d1c8e: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 8d1c91: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d1c94: imul edx, edx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x78u);
  edx = (uint32_t)r;
  }
/* 8d1c97: lea esi, [edx + esi + 0x37c] */
  esi = (uint32_t)(edx + esi + 0x37cu);
/* 8d1c9e: mov edx, dword ptr [0xce859c] */
  edx = R32((uint32_t)(0xce859cu));
/* 8d1ca4: mov edx, dword ptr [edx + 0x38] */
  edx = R32((uint32_t)(edx + 0x38u));
/* 8d1ca7: lea edi, [edx + ecx + 8] */
  edi = (uint32_t)(edx + ecx + 0x8u);
/* 8d1cab: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8d1cb0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8d1cb2: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d1cb5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d1cb6: jmp 0x8d1c11 */
  goto L_8d1c11;
L_8d1cbb: /* 8d1cbb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8d1cbe: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8d1cc1: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 8d1cc4: mov eax, dword ptr [edx + 0x540] */
  eax = R32((uint32_t)(edx + 0x540u));
/* 8d1cca: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d1ccd: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d1cd0: mov dword ptr [ebp - 0x74], esp */
  W32((uint32_t)(ebp + 0xffffff8cu), esp);
/* 8d1cd3: mov ecx, esp */
  ecx = esp;
/* 8d1cd5: jne 0x8d1d26 */
  if (!zf) goto L_8d1d26;
L_8d1cd7: /* 8d1cd7: push 0xbf800000 */
  { uint32_t v = 0xbf800000u; esp -= 4; W32(esp, v); }
/* 8d1cdc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d1cdf: mov dword ptr [ebp - 0xe0], 0 */
  W32((uint32_t)(ebp + 0xffffff20u), 0x0u);
/* 8d1ce9: mov edx, dword ptr [ebp - 0xe0] */
  edx = R32((uint32_t)(ebp + 0xffffff20u));
/* 8d1cef: mov eax, esp */
  eax = esp;
/* 8d1cf1: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8d1cf3: mov dword ptr [ebp - 0xdc], 0 */
  W32((uint32_t)(ebp + 0xffffff24u), 0x0u);
/* 8d1cfd: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 8d1d03: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8d1d06: mov dword ptr [ebp - 0xd8], 0 */
  W32((uint32_t)(ebp + 0xffffff28u), 0x0u);
/* 8d1d10: mov edx, dword ptr [ebp - 0xd8] */
  edx = R32((uint32_t)(ebp + 0xffffff28u));
/* 8d1d16: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8d1d19: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x8d1d1fu); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 8d1d1f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d1d21: jmp 0x8d1dd1 */
  goto L_8d1dd1;
L_8d1d26: /* 8d1d26: cmp eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d1d29: jne 0x8d1d99 */
  if (!zf) goto L_8d1d99;
L_8d1d2b: /* 8d1d2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1d2d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d1d30: mov dword ptr [ebp - 0xcc], 0 */
  W32((uint32_t)(ebp + 0xffffff34u), 0x0u);
/* 8d1d3a: mov eax, dword ptr [ebp - 0xcc] */
  eax = R32((uint32_t)(ebp + 0xffffff34u));
/* 8d1d40: mov edx, esp */
  edx = esp;
/* 8d1d42: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8d1d44: mov dword ptr [ebp - 0xc8], 0 */
  W32((uint32_t)(ebp + 0xffffff38u), 0x0u);
/* 8d1d4e: mov eax, dword ptr [ebp - 0xc8] */
  eax = R32((uint32_t)(ebp + 0xffffff38u));
/* 8d1d54: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8d1d57: mov dword ptr [ebp - 0xc4], 0 */
  W32((uint32_t)(ebp + 0xffffff3cu), 0x0u);
/* 8d1d61: mov eax, dword ptr [ebp - 0xc4] */
  eax = R32((uint32_t)(ebp + 0xffffff3cu));
/* 8d1d67: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8d1d6a: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x8d1d70u); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 8d1d70: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d1d73: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d1d75: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1d77: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1d79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1d7b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1d7d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1d7f: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x8d1d82u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d1d82: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d1d85: mov edx, dword ptr [0xce859c] */
  edx = R32((uint32_t)(0xce859cu));
/* 8d1d8b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d1d8d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1d8f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1d91: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1d93: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d1d94: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x8d1d97u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d1d97: jmp 0x8d1df5 */
  goto L_8d1df5;
L_8d1d99: /* 8d1d99: push 0xbf800000 */
  { uint32_t v = 0xbf800000u; esp -= 4; W32(esp, v); }
/* 8d1d9e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d1da1: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 8d1da8: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 8d1dab: mov eax, esp */
  eax = esp;
/* 8d1dad: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8d1daf: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 8d1db6: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8d1db9: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8d1dbc: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 8d1dc3: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8d1dc6: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8d1dc9: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x8d1dcfu); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 8d1dcf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
L_8d1dd1: /* 8d1dd1: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d1dd4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d1dd6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1dd8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d1dda: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d1ddc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d1dde: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x8d1de1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d1de1: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d1de4: mov eax, dword ptr [0xce859c] */
  eax = R32((uint32_t)(0xce859cu));
/* 8d1de9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d1deb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1ded: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1def: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1df1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d1df2: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x8d1df5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8d1df5: /* 8d1df5: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d1df8: xor esi, esi */
  esi = 0;
/* 8d1dfa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8d1e00: /* 8d1e00: cmp esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d1e03: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d1e06: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d1e08: jge 0x8d1e22 */
  if ((sf == of)) goto L_8d1e22;
L_8d1e0a: /* 8d1e0a: mov eax, ebx */
  eax = ebx;
/* 8d1e0c: imul eax, eax, 0xd */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xdu);
  eax = (uint32_t)r;
  }
/* 8d1e0f: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d1e11: mov eax, dword ptr [edi + eax*4 + 0x14] */
  eax = R32((uint32_t)(edi + eax*4 + 0x14u));
/* 8d1e15: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 8d1e1a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d1e1b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d1e1c: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x8d1e1fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d1e1f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8d1e20: jmp 0x8d1e00 */
  goto L_8d1e00;
L_8d1e22: /* 8d1e22: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 8d1e25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d1e26: mov eax, dword ptr [ebp - 0x84] */
  eax = R32((uint32_t)(ebp + 0xffffff7cu));
/* 8d1e2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d1e2d: mov eax, dword ptr [ebp - 0x7c] */
  eax = R32((uint32_t)(ebp + 0xffffff84u));
/* 8d1e30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d1e31: mov eax, dword ptr [ebp - 0x78] */
  eax = R32((uint32_t)(ebp + 0xffffff88u));
/* 8d1e34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d1e35: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1e37: call dword ptr [edx + 0x5c] */
  { uint32_t t = R32((uint32_t)(edx + 0x5cu)); esp -= 4; W32(esp, 0x8d1e3au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d1e3a: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8d1e3f: mov ecx, dword ptr [0xce83ac] */
  ecx = R32((uint32_t)(0xce83acu));
/* 8d1e45: mov esi, dword ptr [eax + ecx*4] */
  esi = R32((uint32_t)(eax + ecx*4));
/* 8d1e48: mov edx, dword ptr [ebp - 0x7c] */
  edx = R32((uint32_t)(ebp + 0xffffff84u));
/* 8d1e4b: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8d1e4d: mov dword ptr [eax + ecx*4], esi */
  W32((uint32_t)(eax + ecx*4), esi);
/* 8d1e50: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8d1e55: mov ecx, dword ptr [0xce83b0] */
  ecx = R32((uint32_t)(0xce83b0u));
/* 8d1e5b: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 8d1e5e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8d1e5f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8d1e60: mov dword ptr [eax + ecx*4], edx */
  W32((uint32_t)(eax + ecx*4), edx);
/* 8d1e63: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 8d1e66: jmp 0x8d1960 */
  goto L_8d1960;
L_8d1e6b: /* 8d1e6b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8d1e6e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8d1e71: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x8d1e76u); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 8d1e76: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d1e78: jne 0x8d2329 */
  if (!zf) goto L_8d2329;
L_8d1e7e: /* 8d1e7e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8d1e81: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8d1e84: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 8d1e87: test dword ptr [eax + 0x534], 0x20000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d1e91: je 0x8d2329 */
  if (zf) goto L_8d2329;
L_8d1e97: /* 8d1e97: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8d1e9b: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
L_8d1ea2: /* 8d1ea2: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d1ea5: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d1ea8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d1eaa: jge 0x8d2329 */
  if ((sf == of)) goto L_8d2329;
L_8d1eb0: /* 8d1eb0: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8d1eb3: mov ecx, dword ptr [edx + eax*4] */
  ecx = R32((uint32_t)(edx + eax*4));
/* 8d1eb6: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d1eb9: mov eax, dword ptr [edx + 0x1274] */
  eax = R32((uint32_t)(edx + 0x1274u));
/* 8d1ebf: mov ebx, dword ptr [eax + ecx*4] */
  ebx = R32((uint32_t)(eax + ecx*4));
/* 8d1ec2: mov eax, dword ptr [ebx + 0x84] */
  eax = R32((uint32_t)(ebx + 0x84u));
/* 8d1ec8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d1eca: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 8d1ecd: je 0x8d21af */
  if (zf) goto L_8d21af;
L_8d1ed3: /* 8d1ed3: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8d1ed5: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d1ed8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d1eda: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 8d1edd: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8d1edfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d1edf: xor esi, esi */
  esi = 0;
/* 8d1ee1: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
L_8d1ee4: /* 8d1ee4: cmp esi, dword ptr [ebx + 0x84] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x84u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d1eea: jge 0x8d218c */
  if ((sf == of)) goto L_8d218c;
L_8d1ef0: /* 8d1ef0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d1ef3: mov eax, dword ptr [ebx + 0x80] */
  eax = R32((uint32_t)(ebx + 0x80u));
/* 8d1ef9: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 8d1eff: mov edi, dword ptr [eax + esi*4] */
  edi = R32((uint32_t)(eax + esi*4));
/* 8d1f02: fld dword ptr [edx + 0x3ac] */
  { double v = F32((uint32_t)(edx + 0x3acu)); FPUSH(v); }
/* 8d1f08: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8d1f0a: add ebx, 0x80 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8d1f10: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d1f13: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8d1f16: call 0x6ca46b */
  esp -= 4; W32(esp, 0x8d1f1bu); SPILL(); f_6ca46b(); if (g_unwind) return; RELOAD();
/* 8d1f1b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d1f1d: jne 0x8d1fdb */
  if (!zf) goto L_8d1fdb;
L_8d1f23: /* 8d1f23: mov dword ptr [ebp - 0x40], edi */
  W32((uint32_t)(ebp + 0xffffffc0u), edi);
/* 8d1f26: lea ecx, [edi + 0x20] */
  ecx = (uint32_t)(edi + 0x20u);
/* 8d1f29: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8d1f2d: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x8d1f33u); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 8d1f33: lea ecx, [edi + 0x14] */
  ecx = (uint32_t)(edi + 0x14u);
/* 8d1f36: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8d1f3a: call 0x6cb555 */
  esp -= 4; W32(esp, 0x8d1f3fu); SPILL(); f_6cb555(); if (g_unwind) return; RELOAD();
/* 8d1f3f: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 8d1f42: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8d1f46: call 0x6cae43 */
  esp -= 4; W32(esp, 0x8d1f4bu); SPILL(); f_6cae43(); if (g_unwind) return; RELOAD();
/* 8d1f4b: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 8d1f50: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8d1f52: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d1f54: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d1f55: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8d1f58u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d1f58: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8d1f5a: jge 0x8d1f74 */
  if ((sf == of)) goto L_8d1f74;
L_8d1f5c: /* 8d1f5c: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 8d1f61: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8d1f66: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 8d1f6b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8d1f71u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8d1f71: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8d1f74: /* 8d1f74: cmp esi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d1f77: jle 0x8d1f91 */
  if ((zf || sf != of)) goto L_8d1f91;
L_8d1f79: /* 8d1f79: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8d1f7e: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8d1f83: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8d1f88: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8d1f8eu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8d1f8e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8d1f91: /* 8d1f91: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d1f94: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 8d1f97: lea esi, [edi + 1] */
  esi = (uint32_t)(edi + 0x1u);
/* 8d1f9a: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d1f9c: jle 0x8d1fb6 */
  if ((zf || sf != of)) goto L_8d1fb6;
L_8d1f9e: /* 8d1f9e: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8d1fa3: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8d1fa8: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8d1fad: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8d1fb3u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8d1fb3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8d1fb6: /* 8d1fb6: mov eax, edi */
  eax = edi;
L_8d1fb8: /* 8d1fb8: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d1fba: jge 0x8d1fbf */
  if ((sf == of)) goto L_8d1fbf;
L_8d1fbc: /* 8d1fbc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d1fbd: jmp 0x8d1fb8 */
  goto L_8d1fb8;
L_8d1fbf: /* 8d1fbf: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8d1fc1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d1fc3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d1fc4: mov ecx, ebx */
  ecx = ebx;
/* 8d1fc6: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8d1fccu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8d1fcc: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d1fcf: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 8d1fd0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8d1fd1: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 8d1fd4: mov esi, edi */
  esi = edi;
/* 8d1fd6: jmp 0x8d1ee4 */
  goto L_8d1ee4;
L_8d1fdb: /* 8d1fdb: mov edx, dword ptr [0xcd8ad8] */
  edx = R32((uint32_t)(0xcd8ad8u));
/* 8d1fe1: xor esi, esi */
  esi = 0;
L_8d1fe3: /* 8d1fe3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d1fe5: je 0x8d2025 */
  if (zf) goto L_8d2025;
L_8d1fe7: /* 8d1fe7: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8d1fe9: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8d1feb: mov ebx, dword ptr [eax + 0x10] */
  ebx = R32((uint32_t)(eax + 0x10u));
/* 8d1fee: cmp ebx, dword ptr [ecx + 0x18] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d1ff1: jne 0x8d2020 */
  if (!zf) goto L_8d2020;
L_8d1ff3: /* 8d1ff3: movzx ebx, byte ptr [ecx + 0x21] */
  ebx = (uint32_t)(R8((uint32_t)(ecx + 0x21u)));
/* 8d1ff7: cmp dword ptr [eax + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d1ffa: jne 0x8d2020 */
  if (!zf) goto L_8d2020;
L_8d1ffc: /* 8d1ffc: movzx ecx, byte ptr [ecx + 0x20] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0x20u)));
/* 8d2000: cmp dword ptr [eax + 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d2003: jne 0x8d2020 */
  if (!zf) goto L_8d2020;
L_8d2005: /* 8d2005: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8d2008: cmp ecx, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d200b: jne 0x8d2020 */
  if (!zf) goto L_8d2020;
L_8d200d: /* 8d200d: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 8d2010: cmp ecx, dword ptr [edi + 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d2013: jne 0x8d2020 */
  if (!zf) goto L_8d2020;
L_8d2015: /* 8d2015: cmp dword ptr [eax + 0x24], 0x186a0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x24u))); uint32_t b = (uint32_t)(0x186a0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d201c: jge 0x8d2020 */
  if ((sf == of)) goto L_8d2020;
L_8d201e: /* 8d201e: mov esi, eax */
  esi = eax;
L_8d2020: /* 8d2020: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 8d2023: jmp 0x8d1fe3 */
  goto L_8d1fe3;
L_8d2025: /* 8d2025: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d2027: jne 0x8d20cb */
  if (!zf) goto L_8d20cb;
L_8d202d: /* 8d202d: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8d202f: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 8d2031: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 8d2036: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8d203cu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8d203c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d203e: je 0x8d209a */
  if (zf) goto L_8d209a;
L_8d2040: /* 8d2040: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8d2042: movzx edx, byte ptr [ecx + 0x20] */
  edx = (uint32_t)(R8((uint32_t)(ecx + 0x20u)));
/* 8d2046: movzx ebx, byte ptr [ecx + 0x21] */
  ebx = (uint32_t)(R8((uint32_t)(ecx + 0x21u)));
/* 8d204a: mov ecx, dword ptr [ecx + 0x18] */
  ecx = R32((uint32_t)(ecx + 0x18u));
/* 8d204d: mov esi, dword ptr [edi + 0x2c] */
  esi = R32((uint32_t)(edi + 0x2cu));
/* 8d2050: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 8d2053: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 8d2056: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 8d2059: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8d205c: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 8d205f: xor ecx, ecx */
  ecx = 0;
/* 8d2061: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d2063: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 8d206a: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 8d2070: mov dword ptr [eax + 8], 0 */
  W32((uint32_t)(eax + 0x8u), 0x0u);
/* 8d2077: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 8d207a: mov dword ptr [eax + 0x18], ebx */
  W32((uint32_t)(eax + 0x18u), ebx);
/* 8d207d: mov dword ptr [eax + 0x1c], esi */
  W32((uint32_t)(eax + 0x1cu), esi);
/* 8d2080: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* 8d2083: mov dword ptr [eax + 0x28], ecx */
  W32((uint32_t)(eax + 0x28u), ecx);
/* 8d2086: mov dword ptr [eax + 0x20], 0x1c */
  W32((uint32_t)(eax + 0x20u), 0x1cu);
/* 8d208d: je 0x8d2096 */
  if (zf) goto L_8d2096;
L_8d208f: /* 8d208f: mov dword ptr [eax + 0x20], 0x24 */
  W32((uint32_t)(eax + 0x20u), 0x24u);
L_8d2096: /* 8d2096: mov esi, eax */
  esi = eax;
/* 8d2098: jmp 0x8d209c */
  goto L_8d209c;
L_8d209a: /* 8d209a: xor esi, esi */
  esi = 0;
L_8d209c: /* 8d209c: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8d209e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8d20a0: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 8d20a5: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8d20abu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8d20ab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d20ad: je 0x8d20c1 */
  if (zf) goto L_8d20c1;
L_8d20af: /* 8d20af: mov ecx, dword ptr [0xcd8ad8] */
  ecx = R32((uint32_t)(0xcd8ad8u));
/* 8d20b5: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 8d20b7: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8d20ba: mov dword ptr [0xcd8ad8], eax */
  W32((uint32_t)(0xcd8ad8u), eax);
/* 8d20bf: jmp 0x8d20cb */
  goto L_8d20cb;
L_8d20c1: /* 8d20c1: mov dword ptr [0xcd8ad8], 0 */
  W32((uint32_t)(0xcd8ad8u), 0x0u);
L_8d20cb: /* 8d20cb: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8d20cd: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8d20cf: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 8d20d4: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8d20dau); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8d20da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d20dc: je 0x8d20f7 */
  if (zf) goto L_8d20f7;
L_8d20de: /* 8d20de: mov dword ptr [eax + 0xc], edi */
  W32((uint32_t)(eax + 0xcu), edi);
/* 8d20e1: mov dword ptr [eax], 0xa16b44 */
  W32((uint32_t)(eax), 0xa16b44u);
/* 8d20e7: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 8d20ea: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8d20ed: mov edi, dword ptr [edi + 0x24] */
  edi = R32((uint32_t)(edi + 0x24u));
/* 8d20f0: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 8d20f3: mov edi, eax */
  edi = eax;
/* 8d20f5: jmp 0x8d20f9 */
  goto L_8d20f9;
L_8d20f7: /* 8d20f7: xor edi, edi */
  edi = 0;
L_8d20f9: /* 8d20f9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8d20fc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d20fe: je 0x8d210a */
  if (zf) goto L_8d210a;
L_8d2100: /* 8d2100: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 8d2103: sub edx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 8d2105: cmp edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d2108: jne 0x8d214a */
  if (!zf) goto L_8d214a;
L_8d210a: /* 8d210a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8d210c: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 8d2111: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 8d2116: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8d211cu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8d211c: mov dword ptr [eax + 0x84], 0 */
  W32((uint32_t)(eax + 0x84u), 0x0u);
/* 8d2126: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8d2129: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d212b: je 0x8d213f */
  if (zf) goto L_8d213f;
L_8d212d: /* 8d212d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8d212f: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d2132: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8d2134: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 8d2137: mov dword ptr [edx + 0x84], eax */
  W32((uint32_t)(edx + 0x84u), eax);
/* 8d213d: jmp 0x8d2147 */
  goto L_8d2147;
L_8d213f: /* 8d213f: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 8d2145: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_8d2147: /* 8d2147: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
L_8d214a: /* 8d214a: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8d214d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8d214f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8d2152: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8d2154: mov dword ptr [eax + ecx*4 + 4], edi */
  W32((uint32_t)(eax + ecx*4 + 0x4u), edi);
/* 8d2158: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 8d215b: mov ebx, dword ptr [esi + 0x24] */
  ebx = R32((uint32_t)(esi + 0x24u));
/* 8d215e: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8d2161: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d2162: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 8d2165: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 8d2168: imul edx, dword ptr [esi + 0x20] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x20u)));
  edx = (uint32_t)r;
  }
/* 8d216c: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8d216e: mov dword ptr [esi + 0x24], ebx */
  W32((uint32_t)(esi + 0x24u), ebx);
/* 8d2171: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 8d2174: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d2177: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d217a: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8d217c: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d217e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8d217f: mov dword ptr [esi + 0x28], ecx */
  W32((uint32_t)(esi + 0x28u), ecx);
/* 8d2182: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 8d2185: mov esi, edi */
  esi = edi;
/* 8d2187: jmp 0x8d1ee4 */
  goto L_8d1ee4;
L_8d218c: /* 8d218c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d218f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d2191: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x8d2194u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d2194: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8d2199: mov ecx, dword ptr [0xce8364] */
  ecx = R32((uint32_t)(0xce8364u));
/* 8d219f: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 8d21a2: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8d21a4: mov esi, dword ptr [ebp - 0x3c] */
  esi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8d21a7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d21a9: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8d21ab: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8d21ad: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_8d21af: /* 8d21af: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8d21b2: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d21b5: mov ecx, dword ptr [edx + eax*4] */
  ecx = R32((uint32_t)(edx + eax*4));
/* 8d21b8: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8d21bb: cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ecx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d21bf: je 0x8d22eb */
  if (zf) goto L_8d22eb;
L_8d21c5: /* 8d21c5: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8d21c7: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d21ca: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 8d21cd: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d21cf: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8d21d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d21d1: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8d21d4: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d21d7: mov eax, dword ptr [ecx + edx*4] */
  eax = R32((uint32_t)(ecx + edx*4));
/* 8d21da: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8d21dd: mov esi, dword ptr [ecx + eax*4] */
  esi = R32((uint32_t)(ecx + eax*4));
L_8d21e0: /* 8d21e0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d21e2: je 0x8d22c7 */
  if (zf) goto L_8d22c7;
L_8d21e8: /* 8d21e8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d21eb: mov ecx, esp */
  ecx = esp;
/* 8d21ed: mov dword ptr [ebp - 0x3c], esp */
  W32((uint32_t)(ebp + 0xffffffc4u), esp);
/* 8d21f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d21f2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d21f5: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 8d21fc: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 8d21ff: mov edx, esp */
  edx = esp;
/* 8d2201: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8d2203: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 8d220a: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8d220d: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8d2210: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 8d2217: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8d221a: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8d221d: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x8d2223u); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 8d2223: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d2226: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d2228: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d222a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d222c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d222e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d2230: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d2232: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x8d2235u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d2235: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8d2238: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8d223b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d223d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d223e: call 0x6c7adb */
  esp -= 4; W32(esp, 0x8d2243u); SPILL(); f_6c7adb(); if (g_unwind) return; RELOAD();
/* 8d2243: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d2246: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d2248: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d224a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d224c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d224e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d224f: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x8d2252u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d2252: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d2255: mov ecx, dword ptr [eax + 0x8c] */
  ecx = R32((uint32_t)(eax + 0x8cu));
/* 8d225b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d225e: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 8d2261: add ecx, dword ptr [edx + 0x134c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x134cu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d2267: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d2269: mov dword ptr [ebp - 0x78], ecx */
  W32((uint32_t)(ebp + 0xffffff88u), ecx);
/* 8d226c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d226f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d2271: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 8d2274: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d2275: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d2277: call dword ptr [eax + 0x4c] */
  { uint32_t t = R32((uint32_t)(eax + 0x4cu)); esp -= 4; W32(esp, 0x8d227au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d227a: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d227d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d227f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d2281: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d2282: call dword ptr [eax + 0x58] */
  { uint32_t t = R32((uint32_t)(eax + 0x58u)); esp -= 4; W32(esp, 0x8d2285u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d2285: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 8d2288: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d228a: je 0x8d22bf */
  if (zf) goto L_8d22bf;
L_8d228c: /* 8d228c: mov ebx, dword ptr [esi + 0x28] */
  ebx = R32((uint32_t)(esi + 0x28u));
/* 8d228f: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d2292: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 8d2294: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d2295: mov ebx, dword ptr [esi + 0x24] */
  ebx = R32((uint32_t)(esi + 0x24u));
/* 8d2298: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d2299: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d229a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d229b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d229d: call dword ptr [edi + 0x5c] */
  { uint32_t t = R32((uint32_t)(edi + 0x5cu)); esp -= 4; W32(esp, 0x8d22a0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d22a0: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8d22a5: mov ecx, dword ptr [0xce836c] */
  ecx = R32((uint32_t)(0xce836cu));
/* 8d22ab: inc dword ptr [eax + ecx*4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + ecx*4), r);
  }
/* 8d22ae: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8d22b3: mov ecx, dword ptr [0xce8370] */
  ecx = R32((uint32_t)(0xce8370u));
/* 8d22b9: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 8d22bc: add dword ptr [eax + ecx*4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + ecx*4), r);
  }
L_8d22bf: /* 8d22bf: mov esi, dword ptr [esi + 0xc] */
  esi = R32((uint32_t)(esi + 0xcu));
/* 8d22c2: jmp 0x8d21e0 */
  goto L_8d21e0;
L_8d22c7: /* 8d22c7: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d22ca: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d22cc: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x8d22cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d22cf: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 8d22d5: mov edx, dword ptr [0xce8364] */
  edx = R32((uint32_t)(0xce8364u));
/* 8d22db: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 8d22de: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8d22e0: mov esi, dword ptr [ebp - 0x40] */
  esi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8d22e3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d22e5: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8d22e7: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8d22e9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_8d22eb: /* 8d22eb: inc dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
/* 8d22ee: jmp 0x8d1ea2 */
  goto L_8d1ea2;
L_8d2329: /* 8d2329: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 8d232f: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d2332: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8d2339: je 0x8d2600 */
  if (zf) goto L_8d2600;
L_8d233f: /* 8d233f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d2342: mov ecx, dword ptr [eax + 0x1318] */
  ecx = R32((uint32_t)(eax + 0x1318u));
/* 8d2348: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d234a: je 0x8d2600 */
  if (zf) goto L_8d2600;
L_8d2350: /* 8d2350: mov eax, dword ptr [0xce8598] */
  eax = R32((uint32_t)(0xce8598u));
/* 8d2355: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d2357: jne 0x8d23cd */
  if (!zf) goto L_8d23cd;
L_8d2359: /* 8d2359: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d235b: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8d235e: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8d2364u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8d2364: push 0xb88fb0 */
  { uint32_t v = 0xb88fb0u; esp -= 4; W32(esp, v); }
/* 8d2369: mov ecx, 0xb88fb0 */
  ecx = 0xb88fb0u;
/* 8d236e: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x8d2374u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 8d2374: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d2376: jne 0x8d2390 */
  if (!zf) goto L_8d2390;
L_8d2378: /* 8d2378: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 8d237d: push 0xaecd68 */
  { uint32_t v = 0xaecd68u; esp -= 4; W32(esp, v); }
/* 8d2382: push 0xaecdac */
  { uint32_t v = 0xaecdacu; esp -= 4; W32(esp, v); }
/* 8d2387: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8d238du); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8d238d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8d2390: /* 8d2390: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x8d2396u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 8d2396: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 8d239c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d239e: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8d23a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d23a3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d23a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d23a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d23a8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d23a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d23aa: push 0xb88fb0 */
  { uint32_t v = 0xb88fb0u; esp -= 4; W32(esp, v); }
/* 8d23af: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x8d23b5u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 8d23b5: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 8d23bb: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d23be: push 0xce8598 */
  { uint32_t v = 0xce8598u; esp -= 4; W32(esp, v); }
/* 8d23c3: mov dword ptr [0xce8598], eax */
  W32((uint32_t)(0xce8598u), eax);
/* 8d23c8: call 0x6c1203 */
  esp -= 4; W32(esp, 0x8d23cdu); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
L_8d23cd: /* 8d23cd: mov eax, dword ptr [0xce8594] */
  eax = R32((uint32_t)(0xce8594u));
/* 8d23d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d23d4: jne 0x8d2465 */
  if (!zf) goto L_8d2465;
L_8d23da: /* 8d23da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d23dc: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8d23df: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8d23e5u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8d23e5: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 8d23ea: mov ecx, 0xb88020 */
  ecx = 0xb88020u;
/* 8d23ef: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x8d23f5u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 8d23f5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d23f7: jne 0x8d2411 */
  if (!zf) goto L_8d2411;
L_8d23f9: /* 8d23f9: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 8d23fe: push 0xaecdd0 */
  { uint32_t v = 0xaecdd0u; esp -= 4; W32(esp, v); }
/* 8d2403: push 0xaece14 */
  { uint32_t v = 0xaece14u; esp -= 4; W32(esp, v); }
/* 8d2408: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8d240eu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8d240e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8d2411: /* 8d2411: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x8d2417u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 8d2417: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 8d241d: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8d241f: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8d2422: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d2424: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d2425: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d2427: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d2429: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d242a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d242b: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 8d2430: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x8d2436u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 8d2436: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 8d243c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d243f: push 0xce8594 */
  { uint32_t v = 0xce8594u; esp -= 4; W32(esp, v); }
/* 8d2444: mov dword ptr [0xce8594], eax */
  W32((uint32_t)(0xce8594u), eax);
/* 8d2449: call 0x6c1203 */
  esp -= 4; W32(esp, 0x8d244eu); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 8d244e: mov eax, dword ptr [0xce8594] */
  eax = R32((uint32_t)(0xce8594u));
/* 8d2453: mov ecx, dword ptr [0xce8598] */
  ecx = R32((uint32_t)(0xce8598u));
/* 8d2459: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* 8d245c: mov eax, dword ptr [0xce8594] */
  eax = R32((uint32_t)(0xce8594u));
/* 8d2461: or dword ptr [eax + 0x5c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x5cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x5cu), r);
  }
L_8d2465: /* 8d2465: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d2468: mov eax, dword ptr [edx + 0xb4] */
  eax = R32((uint32_t)(edx + 0xb4u));
/* 8d246e: mov eax, dword ptr [eax + 0x40] */
  eax = R32((uint32_t)(eax + 0x40u));
/* 8d2471: mov ecx, dword ptr [eax + 0x104] */
  ecx = R32((uint32_t)(eax + 0x104u));
/* 8d2477: mov edx, dword ptr [0xce8598] */
  edx = R32((uint32_t)(0xce8598u));
/* 8d247d: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d2480: mov dword ptr [edx + 0x38], ecx */
  W32((uint32_t)(edx + 0x38u), ecx);
/* 8d2483: mov ecx, esp */
  ecx = esp;
/* 8d2485: mov dword ptr [ebp - 0x40], esp */
  W32((uint32_t)(ebp + 0xffffffc0u), esp);
/* 8d2488: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d248a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d248d: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 8d2494: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 8d2497: mov eax, esp */
  eax = esp;
/* 8d2499: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8d249b: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 8d24a2: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8d24a5: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8d24a8: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 8d24af: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8d24b2: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8d24b5: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x8d24bbu); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 8d24bb: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d24be: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d24c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d24c2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d24c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d24c6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d24c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d24ca: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x8d24cdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d24cd: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d24d0: mov eax, dword ptr [0xce8594] */
  eax = R32((uint32_t)(0xce8594u));
/* 8d24d5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d24d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d24d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d24db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d24dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d24de: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x8d24e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d24e1: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d24e4: xor eax, eax */
  eax = 0;
L_8d24e6: /* 8d24e6: cmp eax, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d24e9: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 8d24ec: jge 0x8d2600 */
  if ((sf == of)) goto L_8d2600;
L_8d24f2: /* 8d24f2: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8d24f5: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 8d24f8: mov eax, dword ptr [edi + 0x1274] */
  eax = R32((uint32_t)(edi + 0x1274u));
/* 8d24fe: mov esi, dword ptr [eax + edx*4] */
  esi = R32((uint32_t)(eax + edx*4));
/* 8d2501: mov ecx, dword ptr [esi + 0x8c] */
  ecx = R32((uint32_t)(esi + 0x8cu));
/* 8d2507: mov eax, dword ptr [edi + 0x134c] */
  eax = R32((uint32_t)(edi + 0x134cu));
/* 8d250d: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 8d2510: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d2512: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d2514: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 8d2517: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d251a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d251c: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 8d251f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d2520: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d2522: mov dword ptr [ebp - 0x3c], esi */
  W32((uint32_t)(ebp + 0xffffffc4u), esi);
/* 8d2525: call dword ptr [edx + 0x4c] */
  { uint32_t t = R32((uint32_t)(edx + 0x4cu)); esp -= 4; W32(esp, 0x8d2528u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d2528: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d252b: xor eax, eax */
  eax = 0;
/* 8d252d: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
L_8d2530: /* 8d2530: cmp eax, dword ptr [esi + 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d2533: jge 0x8d25f7 */
  if ((sf == of)) goto L_8d25f7;
L_8d2539: /* 8d2539: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8d253c: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 8d253f: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 8d2542: mov ecx, dword ptr [edi + 0x1340] */
  ecx = R32((uint32_t)(edi + 0x1340u));
/* 8d2548: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8d254b: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 8d254e: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8d2551: xor esi, esi */
  esi = 0;
/* 8d2553: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 8d2556: xor eax, eax */
  eax = 0;
L_8d2558: /* 8d2558: cmp eax, dword ptr [edx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d255b: jge 0x8d2574 */
  if ((sf == of)) goto L_8d2574;
L_8d255d: /* 8d255d: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8d255f: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 8d2562: mov ebx, 1 */
  ebx = 0x1u;
/* 8d2567: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 8d2569: test dword ptr [edi + 0x1318], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x1318u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d256f: jne 0x8d2578 */
  if (!zf) goto L_8d2578;
L_8d2571: /* 8d2571: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d2572: jmp 0x8d2558 */
  goto L_8d2558;
L_8d2574: /* 8d2574: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d2576: je 0x8d25e8 */
  if (zf) goto L_8d25e8;
L_8d2578: /* 8d2578: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d257b: mov ebx, dword ptr [0xcfa1b0] */
  ebx = R32((uint32_t)(0xcfa1b0u));
/* 8d2581: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d2583: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 8d2586: mov dword ptr [ebp - 0x64], 0xa1c030 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0xa1c030u);
/* 8d258d: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 8d2590: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 8d2592: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 8d2597: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d2598: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d2599: call 0x99c910 */
  esp -= 4; W32(esp, 0x8d259eu); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 8d259e: add eax, 0xe2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe2u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 8d25a3: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 8d25a6: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 8d25a9: mov dword ptr [ebx], edi */
  W32((uint32_t)(ebx), edi);
/* 8d25ab: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 8d25b1: adc esi, 0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  esi = r;
  }
/* 8d25b4: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 8d25b7: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d25ba: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 8d25bd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d25bf: lea eax, [ebp - 0x64] */
  eax = (uint32_t)(ebp + 0xffffff9cu);
/* 8d25c2: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 8d25c5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d25c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d25c8: call dword ptr [edx + 0x58] */
  { uint32_t t = R32((uint32_t)(edx + 0x58u)); esp -= 4; W32(esp, 0x8d25cbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d25cb: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d25ce: mov edi, dword ptr [edx + 0x20] */
  edi = R32((uint32_t)(edx + 0x20u));
/* 8d25d1: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d25d4: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 8d25d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d25d7: mov edi, dword ptr [edx + 0x1c] */
  edi = R32((uint32_t)(edx + 0x1cu));
/* 8d25da: mov edx, dword ptr [edx + 0x14] */
  edx = R32((uint32_t)(edx + 0x14u));
/* 8d25dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d25de: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d25df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d25e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d25e2: call dword ptr [esi + 0x5c] */
  { uint32_t t = R32((uint32_t)(esi + 0x5cu)); esp -= 4; W32(esp, 0x8d25e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d25e5: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
L_8d25e8: /* 8d25e8: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8d25eb: mov esi, dword ptr [ebp - 0x3c] */
  esi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8d25ee: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d25ef: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 8d25f2: jmp 0x8d2530 */
  goto L_8d2530;
L_8d25f7: /* 8d25f7: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 8d25fa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d25fb: jmp 0x8d24e6 */
  goto L_8d24e6;
L_8d2600: /* 8d2600: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8d2603: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x8d2609u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
L_8d2609: /* 8d2609: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8d260c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8d260f: mov eax, dword ptr [ecx + 0x15c] */
  eax = R32((uint32_t)(ecx + 0x15cu));
/* 8d2615: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d2617: je 0x8d2620 */
  if (zf) goto L_8d2620;
L_8d2619: /* 8d2619: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d261b: call 0x6c1ab9 */
  esp -= 4; W32(esp, 0x8d2620u); SPILL(); f_6c1ab9(); if (g_unwind) return; RELOAD();
L_8d2620: /* 8d2620: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d2623: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d2625: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x8d2628u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d2628: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 8d262d: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d2630: je 0x8d28a2 */
  if (zf) goto L_8d28a2;
L_8d2636: /* 8d2636: cmp dword ptr [0xb19030], 0x1c */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb19030u))); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d263d: jne 0x8d28a2 */
  if (!zf) goto L_8d28a2;
L_8d2643: /* 8d2643: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d2646: cmp dword ptr [0xb19070], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb19070u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d264c: mov ecx, dword ptr [0xb19048] */
  ecx = R32((uint32_t)(0xb19048u));
/* 8d2652: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 8d2659: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 8d2660: jne 0x8d26ca */
  if (!zf) goto L_8d26ca;
L_8d2662: /* 8d2662: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 8d2665: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d2667: je 0x8d26ca */
  if (zf) goto L_8d26ca;
L_8d2669: /* 8d2669: fld dword ptr [0xb19024] */
  { double v = F32((uint32_t)(0xb19024u)); FPUSH(v); }
/* 8d266f: mov ecx, dword ptr [0xb1901c] */
  ecx = R32((uint32_t)(0xb1901cu));
/* 8d2675: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8d267b: mov edx, ecx */
  edx = ecx;
/* 8d267d: fld dword ptr [0xb19020] */
  { double v = F32((uint32_t)(0xb19020u)); FPUSH(v); }
/* 8d2683: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 8d2686: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 8d2689: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8d268c: mov dword ptr [ebp - 0x60], ecx */
  W32((uint32_t)(ebp + 0xffffffa0u), ecx);
/* 8d268f: mov byte ptr [ebp - 0x18], 0 */
  W8((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 8d2693: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 8d2696: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8d2699: mov byte ptr [ebp - 0x17], 0 */
  W8((uint32_t)(ebp + 0xffffffe9u), 0x0u);
/* 8d269d: mov byte ptr [ebp - 0x16], 0xff */
  W8((uint32_t)(ebp + 0xffffffeau), 0xffu);
/* 8d26a1: mov byte ptr [ebp - 0x15], 0xff */
  W8((uint32_t)(ebp + 0xffffffebu), 0xffu);
/* 8d26a5: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d26a8: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 8d26ab: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8d26ae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d26af: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8d26b2: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 8d26b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d26b6: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 8d26b9: call 0x8c4450 */
  esp -= 4; W32(esp, 0x8d26beu); SPILL(); f_8c4450(); if (g_unwind) return; RELOAD();
/* 8d26be: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d26c1: mov ecx, dword ptr [0xb19048] */
  ecx = R32((uint32_t)(0xb19048u));
/* 8d26c7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8d26ca: /* 8d26ca: mov eax, dword ptr [ecx + 0x28] */
  eax = R32((uint32_t)(ecx + 0x28u));
/* 8d26cd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d26cf: je 0x8d27b5 */
  if (zf) goto L_8d27b5;
L_8d26d5: /* 8d26d5: xor ebx, ebx */
  ebx = 0;
/* 8d26d7: jmp 0x8d26e0 */
  goto L_8d26e0;
L_8d26e0: /* 8d26e0: cmp ebx, dword ptr [edi + 0x1310] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1310u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d26e6: jge 0x8d27b5 */
  if ((sf == of)) goto L_8d27b5;
L_8d26ec: /* 8d26ec: mov edx, dword ptr [edi + 0x130c] */
  edx = R32((uint32_t)(edi + 0x130cu));
/* 8d26f2: lea ecx, [ebx + ebx*4] */
  ecx = (uint32_t)(ebx + ebx*4);
/* 8d26f5: mov eax, dword ptr [edx + ecx*4 + 0xc] */
  eax = R32((uint32_t)(edx + ecx*4 + 0xcu));
/* 8d26f9: lea esi, [edx + ecx*4] */
  esi = (uint32_t)(edx + ecx*4);
/* 8d26fc: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8d26ff: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8d2702: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 8d2708: call 0x99c958 */
  esp -= 4; W32(esp, 0x8d270du); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8d270d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8d270f: mov byte ptr [ebp - 0x18], al */
  W8((uint32_t)(ebp + 0xffffffe8u), (eax & 0xffu));
/* 8d2712: mov byte ptr [ebp - 0x17], al */
  W8((uint32_t)(ebp + 0xffffffe9u), (eax & 0xffu));
/* 8d2715: mov byte ptr [ebp - 0x16], al */
  W8((uint32_t)(ebp + 0xffffffeau), (eax & 0xffu));
/* 8d2718: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8d271b: imul eax, dword ptr [edi + 0x128c] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi + 0x128cu)));
  eax = (uint32_t)r;
  }
/* 8d2722: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d2724: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8d2727: mov eax, dword ptr [edi + 0x1280] */
  eax = R32((uint32_t)(edi + 0x1280u));
/* 8d272d: lea edx, [eax + edx*4] */
  edx = (uint32_t)(eax + edx*4);
/* 8d2730: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8d2732: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8d2735: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8d2738: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8d273b: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8d273e: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 8d2741: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 8d2744: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8d2747: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8d274a: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8d274d: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8d2753: mov byte ptr [ebp - 0x15], 0xff */
  W8((uint32_t)(ebp + 0xffffffebu), 0xffu);
/* 8d2757: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d275a: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8d275d: fcomp dword ptr [ebp - 0x48] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffb8u)));
  FPOP();
/* 8d2760: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d2762: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8d2765: jp 0x8d2793 */
  if (pf) goto L_8d2793;
L_8d2767: /* 8d2767: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8d276a: fcomp dword ptr [ebp - 0x44] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffbcu)));
  FPOP();
/* 8d276d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d276f: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8d2772: jp 0x8d2793 */
  if (pf) goto L_8d2793;
L_8d2774: /* 8d2774: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8d2777: fmul dword ptr [0xa154b0] */
  ST0 = ST0 * (F32((uint32_t)(0xa154b0u)));
/* 8d277d: call 0x99c958 */
  esp -= 4; W32(esp, 0x8d2782u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8d2782: mov byte ptr [ebp - 0x38], al */
  W8((uint32_t)(ebp + 0xffffffc8u), (eax & 0xffu));
/* 8d2785: mov byte ptr [ebp - 0x37], al */
  W8((uint32_t)(ebp + 0xffffffc9u), (eax & 0xffu));
/* 8d2788: mov byte ptr [ebp - 0x36], 0xff */
  W8((uint32_t)(ebp + 0xffffffcau), 0xffu);
/* 8d278c: mov byte ptr [ebp - 0x35], 0xff */
  W8((uint32_t)(ebp + 0xffffffcbu), 0xffu);
/* 8d2790: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
L_8d2793: /* 8d2793: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8d2796: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d2797: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8d279a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d279b: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8d279e: call 0x8c4450 */
  esp -= 4; W32(esp, 0x8d27a3u); SPILL(); f_8c4450(); if (g_unwind) return; RELOAD();
/* 8d27a3: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d27a6: mov ecx, dword ptr [0xb19048] */
  ecx = R32((uint32_t)(0xb19048u));
/* 8d27ac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d27af: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8d27b0: jmp 0x8d26e0 */
  goto L_8d26e0;
L_8d27b5: /* 8d27b5: cmp dword ptr [0xb19070], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb19070u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d27bb: jne 0x8d28a2 */
  if (!zf) goto L_8d28a2;
L_8d27c1: /* 8d27c1: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 8d27c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d27c6: je 0x8d28c4 */
  if (zf) goto L_8d28c4;
L_8d27cc: /* 8d27cc: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 8d27cf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d27d1: je 0x8d281d */
  if (zf) goto L_8d281d;
L_8d27d3: /* 8d27d3: mov eax, dword ptr [0xb18ffc] */
  eax = R32((uint32_t)(0xb18ffcu));
/* 8d27d8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d27da: mov byte ptr [ebp - 0x18], 0 */
  W8((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 8d27de: mov byte ptr [ebp - 0x17], 0xff */
  W8((uint32_t)(ebp + 0xffffffe9u), 0xffu);
/* 8d27e2: mov byte ptr [ebp - 0x16], 0xff */
  W8((uint32_t)(ebp + 0xffffffeau), 0xffu);
/* 8d27e6: mov byte ptr [ebp - 0x15], 0xff */
  W8((uint32_t)(ebp + 0xffffffebu), 0xffu);
/* 8d27ea: je 0x8d27f1 */
  if (zf) goto L_8d27f1;
L_8d27ec: /* 8d27ec: mov ecx, dword ptr [ecx + 0x54] */
  ecx = R32((uint32_t)(ecx + 0x54u));
/* 8d27ef: jmp 0x8d27f7 */
  goto L_8d27f7;
L_8d27f1: /* 8d27f1: mov ecx, dword ptr [0xb19074] */
  ecx = R32((uint32_t)(0xb19074u));
L_8d27f7: /* 8d27f7: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d27fa: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8d27fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d27fe: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8d2801: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8d2804: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d2805: add edx, 0xc0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8d280b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d280c: call 0x8cc260 */
  esp -= 4; W32(esp, 0x8d2811u); SPILL(); f_8cc260(); if (g_unwind) return; RELOAD();
/* 8d2811: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d2814: mov ecx, dword ptr [0xb19048] */
  ecx = R32((uint32_t)(0xb19048u));
/* 8d281a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8d281d: /* 8d281d: mov eax, dword ptr [0xb18ffc] */
  eax = R32((uint32_t)(0xb18ffcu));
/* 8d2822: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d2824: mov bl, 0xa0 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xa0u) & 0xffu);
/* 8d2826: mov byte ptr [ebp - 0x18], 0 */
  W8((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 8d282a: mov byte ptr [ebp - 0x17], bl */
  W8((uint32_t)(ebp + 0xffffffe9u), (ebx & 0xffu));
/* 8d282d: mov byte ptr [ebp - 0x16], bl */
  W8((uint32_t)(ebp + 0xffffffeau), (ebx & 0xffu));
/* 8d2830: mov byte ptr [ebp - 0x15], 0xff */
  W8((uint32_t)(ebp + 0xffffffebu), 0xffu);
/* 8d2834: je 0x8d283b */
  if (zf) goto L_8d283b;
L_8d2836: /* 8d2836: mov ecx, dword ptr [ecx + 0x58] */
  ecx = R32((uint32_t)(ecx + 0x58u));
/* 8d2839: jmp 0x8d2841 */
  goto L_8d2841;
L_8d283b: /* 8d283b: mov ecx, dword ptr [0xb19078] */
  ecx = R32((uint32_t)(0xb19078u));
L_8d2841: /* 8d2841: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d2844: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8d2847: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d2848: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8d284b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8d284e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d284f: add edx, 0xc0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8d2855: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d2856: call 0x8cc260 */
  esp -= 4; W32(esp, 0x8d285bu); SPILL(); f_8cc260(); if (g_unwind) return; RELOAD();
/* 8d285b: mov ecx, dword ptr [0xb19048] */
  ecx = R32((uint32_t)(0xb19048u));
/* 8d2861: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8d2864: /* 8d2864: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 8d2867: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d2869: je 0x8d28a2 */
  if (zf) goto L_8d28a2;
L_8d286b: /* 8d286b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d286d: lea eax, [ebp - 0x70] */
  eax = (uint32_t)(ebp + 0xffffff90u);
/* 8d2870: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d2871: mov byte ptr [ebp - 0x18], 0 */
  W8((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 8d2875: mov byte ptr [ebp - 0x17], bl */
  W8((uint32_t)(ebp + 0xffffffe9u), (ebx & 0xffu));
/* 8d2878: mov byte ptr [ebp - 0x16], bl */
  W8((uint32_t)(ebp + 0xffffffeau), (ebx & 0xffu));
/* 8d287b: mov byte ptr [ebp - 0x15], 0xff */
  W8((uint32_t)(ebp + 0xffffffebu), 0xffu);
/* 8d287f: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x8d2882u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d2882: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d2885: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8d2888: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d2889: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d288c: mov esi, eax */
  esi = eax;
/* 8d288e: mov ecx, 7 */
  ecx = 0x7u;
/* 8d2893: mov edi, esp */
  edi = esp;
/* 8d2895: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8d2897: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d289a: call 0x8c66b0 */
  esp -= 4; W32(esp, 0x8d289fu); SPILL(); f_8c66b0(); if (g_unwind) return; RELOAD();
/* 8d289f: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8d28a2: /* 8d28a2: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* 8d28a8: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8d28ac: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x8d28b1u); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
L_8d28b1: /* 8d28b1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d28b4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d28b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d28b6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d28bd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d28be: mov esp, ebp */
  esp = ebp;
/* 8d28c0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d28c1: ret 0x1c */
  esp += 32; SPILL(); return;
L_8d28c4: /* 8d28c4: mov bl, 0xa0 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xa0u) & 0xffu);
/* 8d28c6: jmp 0x8d2864 */
  goto L_8d2864;
}

void f_8d195a(void) {
  LOAD_REGS();
L_8d195a: /* 8d195a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8d1960: /* 8d1960: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8d1963: cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d1966: jge 0x8d1e6b */
  if ((sf == of)) goto L_8d1e6b;
L_8d196c: /* 8d196c: mov esi, dword ptr [0xcfa1b0] */
  esi = R32((uint32_t)(0xcfa1b0u));
/* 8d1972: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 8d1975: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 8d1977: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1979: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 8d197e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d197f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d1980: call 0x99c910 */
  esp -= 4; W32(esp, 0x8d1985u); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 8d1985: add eax, 0xe2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe2u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 8d198a: mov ecx, 0 */
  ecx = 0x0u;
/* 8d198f: adc edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 8d1991: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 8d1994: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 8d1996: mov esi, dword ptr [0xcfa1b0] */
  esi = R32((uint32_t)(0xcfa1b0u));
/* 8d199c: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d199f: adc ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 8d19a1: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 8d19a4: mov dword ptr [ebp - 0x8c], eax */
  W32((uint32_t)(ebp + 0xffffff74u), eax);
/* 8d19aa: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d19ad: imul eax, eax, 0x34 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x34u);
  eax = (uint32_t)r;
  }
/* 8d19b0: mov dword ptr [ebp - 0x90], ecx */
  W32((uint32_t)(ebp + 0xffffff70u), ecx);
/* 8d19b6: mov dword ptr [ebp - 0x80], ecx */
  W32((uint32_t)(ebp + 0xffffff80u), ecx);
/* 8d19b9: mov dword ptr [ebp - 0x7c], ecx */
  W32((uint32_t)(ebp + 0xffffff84u), ecx);
/* 8d19bc: mov ecx, dword ptr [ebp - 0x94] */
  ecx = R32((uint32_t)(ebp + 0xffffff6cu));
/* 8d19c2: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d19c4: mov dword ptr [ebp - 0x88], edx */
  W32((uint32_t)(ebp + 0xffffff78u), edx);
/* 8d19ca: mov dword ptr [ebp - 0x84], 0x7fffffff */
  W32((uint32_t)(ebp + 0xffffff7cu), 0x7fffffffu);
/* 8d19d4: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 8d19d6: inc dword ptr [ebp - 0x90] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff70u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffff70u), r);
  }
/* 8d19dc: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8d19df: mov ecx, dword ptr [edx + 0x1c] */
  ecx = R32((uint32_t)(edx + 0x1cu));
/* 8d19e2: cmp dword ptr [ebp - 0x84], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff7cu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d19e8: jle 0x8d19f0 */
  if ((zf || sf != of)) goto L_8d19f0;
L_8d19ea: /* 8d19ea: mov dword ptr [ebp - 0x84], ecx */
  W32((uint32_t)(ebp + 0xffffff7cu), ecx);
L_8d19f0: /* 8d19f0: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 8d19f3: mov ecx, dword ptr [ecx + 0x20] */
  ecx = R32((uint32_t)(ecx + 0x20u));
/* 8d19f6: cmp dword ptr [ebp - 0x80], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff80u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d19f9: jge 0x8d19fe */
  if ((sf == of)) goto L_8d19fe;
L_8d19fb: /* 8d19fb: mov dword ptr [ebp - 0x80], ecx */
  W32((uint32_t)(ebp + 0xffffff80u), ecx);
L_8d19fe: /* 8d19fe: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8d1a01: mov eax, dword ptr [edx + 0x14] */
  eax = R32((uint32_t)(edx + 0x14u));
/* 8d1a04: add dword ptr [ebp - 0x7c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff84u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffff84u), r);
  }
/* 8d1a07: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d1a0a: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 8d1a10: mov edx, dword ptr [eax + 0x40] */
  edx = R32((uint32_t)(eax + 0x40u));
/* 8d1a13: mov ecx, dword ptr [edx + 0x38] */
  ecx = R32((uint32_t)(edx + 0x38u));
/* 8d1a16: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d1a18: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x8d1a1eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d1a1e: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 8d1a21: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d1a23: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d1a26: je 0x8d1aec */
  if (zf) goto L_8d1aec;
L_8d1a2c: /* 8d1a2c: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d1a2f: lea ecx, [esi + 1] */
  ecx = (uint32_t)(esi + 0x1u);
L_8d1a32: /* 8d1a32: cmp ecx, dword ptr [ebp - 0x4c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d1a35: jge 0x8d1aec */
  if ((sf == of)) goto L_8d1aec;
L_8d1a3b: /* 8d1a3b: mov edx, ecx */
  edx = ecx;
/* 8d1a3d: imul edx, edx, 0x34 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x34u);
  edx = (uint32_t)r;
  }
/* 8d1a40: lea eax, [edx + edi] */
  eax = (uint32_t)(edx + edi);
/* 8d1a43: mov edx, esi */
  edx = esi;
/* 8d1a45: imul edx, edx, 0x34 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x34u);
  edx = (uint32_t)r;
  }
/* 8d1a48: mov ebx, dword ptr [edx + edi] */
  ebx = R32((uint32_t)(edx + edi));
/* 8d1a4b: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8d1a4d: cmp ebx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d1a4f: jne 0x8d1aec */
  if (!zf) goto L_8d1aec;
L_8d1a55: /* 8d1a55: mov ebx, dword ptr [edx + 0xc] */
  ebx = R32((uint32_t)(edx + 0xcu));
/* 8d1a58: cmp ebx, dword ptr [eax + 0xc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d1a5b: jne 0x8d1aec */
  if (!zf) goto L_8d1aec;
L_8d1a61: /* 8d1a61: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8d1a64: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8d1a67: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 8d1a6a: cmp edx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d1a6d: jne 0x8d1aec */
  if (!zf) goto L_8d1aec;
L_8d1a6f: /* 8d1a6f: xor eax, eax */
  eax = 0;
L_8d1a71: /* 8d1a71: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d1a74: jge 0x8d1a91 */
  if ((sf == of)) goto L_8d1a91;
L_8d1a76: /* 8d1a76: mov ebx, esi */
  ebx = esi;
/* 8d1a78: imul ebx, ebx, 0xd */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0xdu);
  ebx = (uint32_t)r;
  }
/* 8d1a7b: mov edx, ecx */
  edx = ecx;
/* 8d1a7d: imul edx, edx, 0xd */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0xdu);
  edx = (uint32_t)r;
  }
/* 8d1a80: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8d1a82: mov ebx, dword ptr [edi + ebx*4 + 0x14] */
  ebx = R32((uint32_t)(edi + ebx*4 + 0x14u));
/* 8d1a86: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8d1a88: cmp ebx, dword ptr [edi + edx*4 + 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + edx*4 + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d1a8c: jne 0x8d1aec */
  if (!zf) goto L_8d1aec;
L_8d1a8e: /* 8d1a8e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d1a8f: jmp 0x8d1a71 */
  goto L_8d1a71;
L_8d1a91: /* 8d1a91: mov esi, dword ptr [ebp - 0x90] */
  esi = R32((uint32_t)(ebp + 0xffffff70u));
/* 8d1a97: mov edx, dword ptr [ebp - 0x94] */
  edx = R32((uint32_t)(ebp + 0xffffff6cu));
/* 8d1a9d: mov eax, ecx */
  eax = ecx;
/* 8d1a9f: imul eax, eax, 0x34 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x34u);
  eax = (uint32_t)r;
  }
/* 8d1aa2: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d1aa4: mov dword ptr [edx + esi*4], eax */
  W32((uint32_t)(edx + esi*4), eax);
/* 8d1aa7: mov ebx, dword ptr [ebp - 0x90] */
  ebx = R32((uint32_t)(ebp + 0xffffff70u));
/* 8d1aad: mov esi, dword ptr [ebp - 0x84] */
  esi = R32((uint32_t)(ebp + 0xffffff7cu));
/* 8d1ab3: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8d1ab4: mov dword ptr [ebp - 0x90], ebx */
  W32((uint32_t)(ebp + 0xffffff70u), ebx);
/* 8d1aba: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8d1abd: mov edx, dword ptr [edx + 0x1c] */
  edx = R32((uint32_t)(edx + 0x1cu));
/* 8d1ac0: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d1ac2: jle 0x8d1aca */
  if ((zf || sf != of)) goto L_8d1aca;
L_8d1ac4: /* 8d1ac4: mov dword ptr [ebp - 0x84], edx */
  W32((uint32_t)(ebp + 0xffffff7cu), edx);
L_8d1aca: /* 8d1aca: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8d1acd: mov edx, dword ptr [edx + 0x20] */
  edx = R32((uint32_t)(edx + 0x20u));
/* 8d1ad0: cmp dword ptr [ebp - 0x80], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff80u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d1ad3: jge 0x8d1ad8 */
  if ((sf == of)) goto L_8d1ad8;
L_8d1ad5: /* 8d1ad5: mov dword ptr [ebp - 0x80], edx */
  W32((uint32_t)(ebp + 0xffffff80u), edx);
L_8d1ad8: /* 8d1ad8: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8d1adb: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 8d1ade: add dword ptr [ebp - 0x7c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff84u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffff84u), r);
  }
/* 8d1ae1: mov esi, ecx */
  esi = ecx;
/* 8d1ae3: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 8d1ae6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8d1ae7: jmp 0x8d1a32 */
  goto L_8d1a32;
L_8d1aec: /* 8d1aec: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d1aef: imul eax, eax, 0x34 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x34u);
  eax = (uint32_t)r;
  }
/* 8d1af2: mov ecx, dword ptr [eax + edi + 8] */
  ecx = R32((uint32_t)(eax + edi + 0x8u));
/* 8d1af6: lea esi, [eax + edi] */
  esi = (uint32_t)(eax + edi);
/* 8d1af9: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8d1afc: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 8d1aff: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d1b02: mov ecx, dword ptr [eax + 0x1340] */
  ecx = R32((uint32_t)(eax + 0x1340u));
/* 8d1b08: lea ebx, [ecx + edx*4] */
  ebx = (uint32_t)(ecx + edx*4);
/* 8d1b0b: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 8d1b0e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d1b11: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 8d1b14: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d1b16: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d1b18: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 8d1b1b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d1b1c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1b1e: call dword ptr [eax + 0x4c] */
  { uint32_t t = R32((uint32_t)(eax + 0x4cu)); esp -= 4; W32(esp, 0x8d1b21u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d1b21: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d1b24: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d1b26: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1b28: lea edx, [ebp - 0x98] */
  edx = (uint32_t)(ebp + 0xffffff68u);
/* 8d1b2e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d1b2f: call dword ptr [eax + 0x58] */
  { uint32_t t = R32((uint32_t)(eax + 0x58u)); esp -= 4; W32(esp, 0x8d1b32u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d1b32: mov dword ptr [ebp - 0x78], eax */
  W32((uint32_t)(ebp + 0xffffff88u), eax);
/* 8d1b35: mov eax, dword ptr [0xce859c] */
  eax = R32((uint32_t)(0xce859cu));
/* 8d1b3a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d1b3c: jne 0x8d1bb6 */
  if (!zf) goto L_8d1bb6;
L_8d1b3e: /* 8d1b3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d1b3f: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8d1b42: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8d1b48u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8d1b48: push 0xce9540 */
  { uint32_t v = 0xce9540u; esp -= 4; W32(esp, v); }
/* 8d1b4d: mov ecx, 0xce9540 */
  ecx = 0xce9540u;
/* 8d1b52: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x8d1b58u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 8d1b58: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d1b5a: jne 0x8d1b74 */
  if (!zf) goto L_8d1b74;
L_8d1b5c: /* 8d1b5c: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 8d1b61: push 0xaece40 */
  { uint32_t v = 0xaece40u; esp -= 4; W32(esp, v); }
/* 8d1b66: push 0xaece84 */
  { uint32_t v = 0xaece84u; esp -= 4; W32(esp, v); }
/* 8d1b6b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8d1b71u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8d1b71: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8d1b74: /* 8d1b74: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x8d1b7au); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 8d1b7a: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 8d1b80: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d1b82: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8d1b85: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1b87: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d1b88: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1b8a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1b8c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d1b8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d1b8e: push 0xce9540 */
  { uint32_t v = 0xce9540u; esp -= 4; W32(esp, v); }
/* 8d1b93: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x8d1b99u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 8d1b99: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 8d1b9f: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d1ba2: push 0xce859c */
  { uint32_t v = 0xce859cu; esp -= 4; W32(esp, v); }
/* 8d1ba7: mov dword ptr [0xce859c], eax */
  W32((uint32_t)(0xce859cu), eax);
/* 8d1bac: call 0x6c1203 */
  esp -= 4; W32(esp, 0x8d1bb1u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 8d1bb1: mov eax, dword ptr [0xce859c] */
  eax = R32((uint32_t)(0xce859cu));
L_8d1bb6: /* 8d1bb6: and dword ptr [eax + 0x30], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x30u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x30u), r);
  }
/* 8d1bba: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8d1bbc: mov eax, dword ptr [0xce859c] */
  eax = R32((uint32_t)(0xce859cu));
/* 8d1bc1: xor edx, edx */
  edx = 0;
/* 8d1bc3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d1bc5: mov ecx, dword ptr [eax + 0x48] */
  ecx = R32((uint32_t)(eax + 0x48u));
/* 8d1bc8: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 8d1bcb: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 8d1bcd: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8d1bd0: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 8d1bd2: mov dword ptr [eax + 0x48], ecx */
  W32((uint32_t)(eax + 0x48u), ecx);
/* 8d1bd5: mov al, byte ptr [ebx + 0xc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0xcu))) & 0xffu);
/* 8d1bd8: mov ecx, dword ptr [0xce859c] */
  ecx = R32((uint32_t)(0xce859cu));
/* 8d1bde: mov byte ptr [ecx + 0x44], al */
  W8((uint32_t)(ecx + 0x44u), (eax & 0xffu));
/* 8d1be1: mov ecx, dword ptr [0xce859c] */
  ecx = R32((uint32_t)(0xce859cu));
/* 8d1be7: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* 8d1bea: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 8d1bed: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d1bef: jge 0x8d1c01 */
  if ((sf == of)) goto L_8d1c01;
L_8d1bf1: /* 8d1bf1: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 8d1bf3: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8d1bf5: add ecx, 0x38 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d1bf8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d1bf9: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8d1bffu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8d1bff: jmp 0x8d1c0f */
  goto L_8d1c0f;
L_8d1c01: /* 8d1c01: jle 0x8d1c0f */
  if ((zf || sf != of)) goto L_8d1c0f;
L_8d1c03: /* 8d1c03: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 8d1c05: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d1c06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d1c07: add ecx, 0x38 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d1c0a: call 0x6cc239 */
  esp -= 4; W32(esp, 0x8d1c0fu); SPILL(); f_6cc239(); if (g_unwind) return; RELOAD();
L_8d1c0f: /* 8d1c0f: xor eax, eax */
  eax = 0;
L_8d1c11: /* 8d1c11: cmp eax, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d1c14: jge 0x8d1cbb */
  if ((sf == of)) goto L_8d1cbb;
L_8d1c1a: /* 8d1c1a: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8d1c1c: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 8d1c1f: mov esi, dword ptr [0xce859c] */
  esi = R32((uint32_t)(0xce859cu));
/* 8d1c25: imul edx, edx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x78u);
  edx = (uint32_t)r;
  }
/* 8d1c28: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d1c2b: mov edx, dword ptr [edx + edi + 0x350] */
  edx = R32((uint32_t)(edx + edi + 0x350u));
/* 8d1c32: mov esi, dword ptr [esi + 0x38] */
  esi = R32((uint32_t)(esi + 0x38u));
/* 8d1c35: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 8d1c38: shl ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8d1c3b: mov dword ptr [ecx + esi], edx */
  W32((uint32_t)(ecx + esi), edx);
/* 8d1c3e: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 8d1c41: sub edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  edx = r;
  }
/* 8d1c44: je 0x8d1c6d */
  if (zf) goto L_8d1c6d;
L_8d1c46: /* 8d1c46: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 8d1c47: je 0x8d1c60 */
  if (zf) goto L_8d1c60;
L_8d1c49: /* 8d1c49: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 8d1c4a: jne 0x8d1c8c */
  if (!zf) goto L_8d1c8c;
L_8d1c4c: /* 8d1c4c: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8d1c4e: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 8d1c51: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d1c54: imul edx, edx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x78u);
  edx = (uint32_t)r;
  }
/* 8d1c57: mov edx, dword ptr [edx + edi + 0x354] */
  edx = R32((uint32_t)(edx + edi + 0x354u));
/* 8d1c5e: jmp 0x8d1c7f */
  goto L_8d1c7f;
L_8d1c60: /* 8d1c60: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d1c62: jne 0x8d1c69 */
  if (!zf) goto L_8d1c69;
L_8d1c64: /* 8d1c64: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* 8d1c67: jmp 0x8d1c7f */
  goto L_8d1c7f;
L_8d1c69: /* 8d1c69: xor edx, edx */
  edx = 0;
/* 8d1c6b: jmp 0x8d1c7f */
  goto L_8d1c7f;
L_8d1c6d: /* 8d1c6d: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8d1c6f: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 8d1c72: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d1c75: imul edx, edx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x78u);
  edx = (uint32_t)r;
  }
/* 8d1c78: mov edx, dword ptr [edx + edi + 0x3c4] */
  edx = R32((uint32_t)(edx + edi + 0x3c4u));
L_8d1c7f: /* 8d1c7f: mov esi, dword ptr [0xce859c] */
  esi = R32((uint32_t)(0xce859cu));
/* 8d1c85: mov esi, dword ptr [esi + 0x38] */
  esi = R32((uint32_t)(esi + 0x38u));
/* 8d1c88: mov dword ptr [esi + ecx + 4], edx */
  W32((uint32_t)(esi + ecx + 0x4u), edx);
L_8d1c8c: /* 8d1c8c: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8d1c8e: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 8d1c91: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d1c94: imul edx, edx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x78u);
  edx = (uint32_t)r;
  }
/* 8d1c97: lea esi, [edx + esi + 0x37c] */
  esi = (uint32_t)(edx + esi + 0x37cu);
/* 8d1c9e: mov edx, dword ptr [0xce859c] */
  edx = R32((uint32_t)(0xce859cu));
/* 8d1ca4: mov edx, dword ptr [edx + 0x38] */
  edx = R32((uint32_t)(edx + 0x38u));
/* 8d1ca7: lea edi, [edx + ecx + 8] */
  edi = (uint32_t)(edx + ecx + 0x8u);
/* 8d1cab: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8d1cb0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8d1cb2: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d1cb5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d1cb6: jmp 0x8d1c11 */
  goto L_8d1c11;
L_8d1cbb: /* 8d1cbb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8d1cbe: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8d1cc1: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 8d1cc4: mov eax, dword ptr [edx + 0x540] */
  eax = R32((uint32_t)(edx + 0x540u));
/* 8d1cca: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d1ccd: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d1cd0: mov dword ptr [ebp - 0x74], esp */
  W32((uint32_t)(ebp + 0xffffff8cu), esp);
/* 8d1cd3: mov ecx, esp */
  ecx = esp;
/* 8d1cd5: jne 0x8d1d26 */
  if (!zf) goto L_8d1d26;
L_8d1cd7: /* 8d1cd7: push 0xbf800000 */
  { uint32_t v = 0xbf800000u; esp -= 4; W32(esp, v); }
/* 8d1cdc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d1cdf: mov dword ptr [ebp - 0xe0], 0 */
  W32((uint32_t)(ebp + 0xffffff20u), 0x0u);
/* 8d1ce9: mov edx, dword ptr [ebp - 0xe0] */
  edx = R32((uint32_t)(ebp + 0xffffff20u));
/* 8d1cef: mov eax, esp */
  eax = esp;
/* 8d1cf1: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8d1cf3: mov dword ptr [ebp - 0xdc], 0 */
  W32((uint32_t)(ebp + 0xffffff24u), 0x0u);
/* 8d1cfd: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 8d1d03: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8d1d06: mov dword ptr [ebp - 0xd8], 0 */
  W32((uint32_t)(ebp + 0xffffff28u), 0x0u);
/* 8d1d10: mov edx, dword ptr [ebp - 0xd8] */
  edx = R32((uint32_t)(ebp + 0xffffff28u));
/* 8d1d16: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8d1d19: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x8d1d1fu); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 8d1d1f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d1d21: jmp 0x8d1dd1 */
  goto L_8d1dd1;
L_8d1d26: /* 8d1d26: cmp eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d1d29: jne 0x8d1d99 */
  if (!zf) goto L_8d1d99;
L_8d1d2b: /* 8d1d2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1d2d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d1d30: mov dword ptr [ebp - 0xcc], 0 */
  W32((uint32_t)(ebp + 0xffffff34u), 0x0u);
/* 8d1d3a: mov eax, dword ptr [ebp - 0xcc] */
  eax = R32((uint32_t)(ebp + 0xffffff34u));
/* 8d1d40: mov edx, esp */
  edx = esp;
/* 8d1d42: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8d1d44: mov dword ptr [ebp - 0xc8], 0 */
  W32((uint32_t)(ebp + 0xffffff38u), 0x0u);
/* 8d1d4e: mov eax, dword ptr [ebp - 0xc8] */
  eax = R32((uint32_t)(ebp + 0xffffff38u));
/* 8d1d54: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8d1d57: mov dword ptr [ebp - 0xc4], 0 */
  W32((uint32_t)(ebp + 0xffffff3cu), 0x0u);
/* 8d1d61: mov eax, dword ptr [ebp - 0xc4] */
  eax = R32((uint32_t)(ebp + 0xffffff3cu));
/* 8d1d67: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8d1d6a: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x8d1d70u); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 8d1d70: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d1d73: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d1d75: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1d77: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1d79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1d7b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1d7d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1d7f: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x8d1d82u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d1d82: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d1d85: mov edx, dword ptr [0xce859c] */
  edx = R32((uint32_t)(0xce859cu));
/* 8d1d8b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d1d8d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1d8f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1d91: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1d93: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d1d94: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x8d1d97u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d1d97: jmp 0x8d1df5 */
  goto L_8d1df5;
L_8d1d99: /* 8d1d99: push 0xbf800000 */
  { uint32_t v = 0xbf800000u; esp -= 4; W32(esp, v); }
/* 8d1d9e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d1da1: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 8d1da8: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 8d1dab: mov eax, esp */
  eax = esp;
/* 8d1dad: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8d1daf: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 8d1db6: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8d1db9: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8d1dbc: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 8d1dc3: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8d1dc6: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8d1dc9: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x8d1dcfu); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 8d1dcf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
L_8d1dd1: /* 8d1dd1: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d1dd4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d1dd6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1dd8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d1dda: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d1ddc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d1dde: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x8d1de1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d1de1: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d1de4: mov eax, dword ptr [0xce859c] */
  eax = R32((uint32_t)(0xce859cu));
/* 8d1de9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d1deb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1ded: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1def: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1df1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d1df2: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x8d1df5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8d1df5: /* 8d1df5: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d1df8: xor esi, esi */
  esi = 0;
/* 8d1dfa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8d1e00: /* 8d1e00: cmp esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d1e03: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d1e06: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d1e08: jge 0x8d1e22 */
  if ((sf == of)) goto L_8d1e22;
L_8d1e0a: /* 8d1e0a: mov eax, ebx */
  eax = ebx;
/* 8d1e0c: imul eax, eax, 0xd */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xdu);
  eax = (uint32_t)r;
  }
/* 8d1e0f: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d1e11: mov eax, dword ptr [edi + eax*4 + 0x14] */
  eax = R32((uint32_t)(edi + eax*4 + 0x14u));
/* 8d1e15: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 8d1e1a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d1e1b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d1e1c: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x8d1e1fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d1e1f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8d1e20: jmp 0x8d1e00 */
  goto L_8d1e00;
L_8d1e22: /* 8d1e22: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 8d1e25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d1e26: mov eax, dword ptr [ebp - 0x84] */
  eax = R32((uint32_t)(ebp + 0xffffff7cu));
/* 8d1e2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d1e2d: mov eax, dword ptr [ebp - 0x7c] */
  eax = R32((uint32_t)(ebp + 0xffffff84u));
/* 8d1e30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d1e31: mov eax, dword ptr [ebp - 0x78] */
  eax = R32((uint32_t)(ebp + 0xffffff88u));
/* 8d1e34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d1e35: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d1e37: call dword ptr [edx + 0x5c] */
  { uint32_t t = R32((uint32_t)(edx + 0x5cu)); esp -= 4; W32(esp, 0x8d1e3au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d1e3a: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8d1e3f: mov ecx, dword ptr [0xce83ac] */
  ecx = R32((uint32_t)(0xce83acu));
/* 8d1e45: mov esi, dword ptr [eax + ecx*4] */
  esi = R32((uint32_t)(eax + ecx*4));
/* 8d1e48: mov edx, dword ptr [ebp - 0x7c] */
  edx = R32((uint32_t)(ebp + 0xffffff84u));
/* 8d1e4b: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8d1e4d: mov dword ptr [eax + ecx*4], esi */
  W32((uint32_t)(eax + ecx*4), esi);
/* 8d1e50: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8d1e55: mov ecx, dword ptr [0xce83b0] */
  ecx = R32((uint32_t)(0xce83b0u));
/* 8d1e5b: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 8d1e5e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8d1e5f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8d1e60: mov dword ptr [eax + ecx*4], edx */
  W32((uint32_t)(eax + ecx*4), edx);
/* 8d1e63: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 8d1e66: jmp 0x8d1960 */
  goto L_8d1960;
L_8d1e6b: /* 8d1e6b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8d1e6e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8d1e71: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x8d1e76u); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 8d1e76: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d1e78: jne 0x8d2329 */
  if (!zf) goto L_8d2329;
L_8d1e7e: /* 8d1e7e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8d1e81: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8d1e84: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 8d1e87: test dword ptr [eax + 0x534], 0x20000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d1e91: je 0x8d2329 */
  if (zf) goto L_8d2329;
L_8d1e97: /* 8d1e97: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8d1e9b: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
L_8d1ea2: /* 8d1ea2: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d1ea5: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d1ea8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d1eaa: jge 0x8d2329 */
  if ((sf == of)) goto L_8d2329;
L_8d1eb0: /* 8d1eb0: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8d1eb3: mov ecx, dword ptr [edx + eax*4] */
  ecx = R32((uint32_t)(edx + eax*4));
/* 8d1eb6: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d1eb9: mov eax, dword ptr [edx + 0x1274] */
  eax = R32((uint32_t)(edx + 0x1274u));
/* 8d1ebf: mov ebx, dword ptr [eax + ecx*4] */
  ebx = R32((uint32_t)(eax + ecx*4));
/* 8d1ec2: mov eax, dword ptr [ebx + 0x84] */
  eax = R32((uint32_t)(ebx + 0x84u));
/* 8d1ec8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d1eca: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 8d1ecd: je 0x8d21af */
  if (zf) goto L_8d21af;
L_8d1ed3: /* 8d1ed3: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8d1ed5: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d1ed8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d1eda: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 8d1edd: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8d1edfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d1edf: xor esi, esi */
  esi = 0;
/* 8d1ee1: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
L_8d1ee4: /* 8d1ee4: cmp esi, dword ptr [ebx + 0x84] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x84u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d1eea: jge 0x8d218c */
  if ((sf == of)) goto L_8d218c;
L_8d1ef0: /* 8d1ef0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d1ef3: mov eax, dword ptr [ebx + 0x80] */
  eax = R32((uint32_t)(ebx + 0x80u));
/* 8d1ef9: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 8d1eff: mov edi, dword ptr [eax + esi*4] */
  edi = R32((uint32_t)(eax + esi*4));
/* 8d1f02: fld dword ptr [edx + 0x3ac] */
  { double v = F32((uint32_t)(edx + 0x3acu)); FPUSH(v); }
/* 8d1f08: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8d1f0a: add ebx, 0x80 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8d1f10: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d1f13: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8d1f16: call 0x6ca46b */
  esp -= 4; W32(esp, 0x8d1f1bu); SPILL(); f_6ca46b(); if (g_unwind) return; RELOAD();
/* 8d1f1b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d1f1d: jne 0x8d1fdb */
  if (!zf) goto L_8d1fdb;
L_8d1f23: /* 8d1f23: mov dword ptr [ebp - 0x40], edi */
  W32((uint32_t)(ebp + 0xffffffc0u), edi);
/* 8d1f26: lea ecx, [edi + 0x20] */
  ecx = (uint32_t)(edi + 0x20u);
/* 8d1f29: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8d1f2d: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x8d1f33u); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 8d1f33: lea ecx, [edi + 0x14] */
  ecx = (uint32_t)(edi + 0x14u);
/* 8d1f36: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8d1f3a: call 0x6cb555 */
  esp -= 4; W32(esp, 0x8d1f3fu); SPILL(); f_6cb555(); if (g_unwind) return; RELOAD();
/* 8d1f3f: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 8d1f42: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8d1f46: call 0x6cae43 */
  esp -= 4; W32(esp, 0x8d1f4bu); SPILL(); f_6cae43(); if (g_unwind) return; RELOAD();
/* 8d1f4b: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 8d1f50: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8d1f52: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d1f54: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d1f55: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8d1f58u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d1f58: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8d1f5a: jge 0x8d1f74 */
  if ((sf == of)) goto L_8d1f74;
L_8d1f5c: /* 8d1f5c: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 8d1f61: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8d1f66: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 8d1f6b: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8d1f71u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8d1f71: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8d1f74: /* 8d1f74: cmp esi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d1f77: jle 0x8d1f91 */
  if ((zf || sf != of)) goto L_8d1f91;
L_8d1f79: /* 8d1f79: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 8d1f7e: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8d1f83: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 8d1f88: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8d1f8eu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8d1f8e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8d1f91: /* 8d1f91: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d1f94: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 8d1f97: lea esi, [edi + 1] */
  esi = (uint32_t)(edi + 0x1u);
/* 8d1f9a: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d1f9c: jle 0x8d1fb6 */
  if ((zf || sf != of)) goto L_8d1fb6;
L_8d1f9e: /* 8d1f9e: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 8d1fa3: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 8d1fa8: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 8d1fad: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8d1fb3u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8d1fb3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8d1fb6: /* 8d1fb6: mov eax, edi */
  eax = edi;
L_8d1fb8: /* 8d1fb8: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d1fba: jge 0x8d1fbf */
  if ((sf == of)) goto L_8d1fbf;
L_8d1fbc: /* 8d1fbc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d1fbd: jmp 0x8d1fb8 */
  goto L_8d1fb8;
L_8d1fbf: /* 8d1fbf: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8d1fc1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d1fc3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d1fc4: mov ecx, ebx */
  ecx = ebx;
/* 8d1fc6: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x8d1fccu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 8d1fcc: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d1fcf: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 8d1fd0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8d1fd1: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 8d1fd4: mov esi, edi */
  esi = edi;
/* 8d1fd6: jmp 0x8d1ee4 */
  goto L_8d1ee4;
L_8d1fdb: /* 8d1fdb: mov edx, dword ptr [0xcd8ad8] */
  edx = R32((uint32_t)(0xcd8ad8u));
/* 8d1fe1: xor esi, esi */
  esi = 0;
L_8d1fe3: /* 8d1fe3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d1fe5: je 0x8d2025 */
  if (zf) goto L_8d2025;
L_8d1fe7: /* 8d1fe7: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8d1fe9: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8d1feb: mov ebx, dword ptr [eax + 0x10] */
  ebx = R32((uint32_t)(eax + 0x10u));
/* 8d1fee: cmp ebx, dword ptr [ecx + 0x18] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d1ff1: jne 0x8d2020 */
  if (!zf) goto L_8d2020;
L_8d1ff3: /* 8d1ff3: movzx ebx, byte ptr [ecx + 0x21] */
  ebx = (uint32_t)(R8((uint32_t)(ecx + 0x21u)));
/* 8d1ff7: cmp dword ptr [eax + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d1ffa: jne 0x8d2020 */
  if (!zf) goto L_8d2020;
L_8d1ffc: /* 8d1ffc: movzx ecx, byte ptr [ecx + 0x20] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0x20u)));
/* 8d2000: cmp dword ptr [eax + 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d2003: jne 0x8d2020 */
  if (!zf) goto L_8d2020;
L_8d2005: /* 8d2005: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8d2008: cmp ecx, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d200b: jne 0x8d2020 */
  if (!zf) goto L_8d2020;
L_8d200d: /* 8d200d: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 8d2010: cmp ecx, dword ptr [edi + 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d2013: jne 0x8d2020 */
  if (!zf) goto L_8d2020;
L_8d2015: /* 8d2015: cmp dword ptr [eax + 0x24], 0x186a0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x24u))); uint32_t b = (uint32_t)(0x186a0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d201c: jge 0x8d2020 */
  if ((sf == of)) goto L_8d2020;
L_8d201e: /* 8d201e: mov esi, eax */
  esi = eax;
L_8d2020: /* 8d2020: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 8d2023: jmp 0x8d1fe3 */
  goto L_8d1fe3;
L_8d2025: /* 8d2025: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d2027: jne 0x8d20cb */
  if (!zf) goto L_8d20cb;
L_8d202d: /* 8d202d: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8d202f: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 8d2031: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 8d2036: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8d203cu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8d203c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d203e: je 0x8d209a */
  if (zf) goto L_8d209a;
L_8d2040: /* 8d2040: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8d2042: movzx edx, byte ptr [ecx + 0x20] */
  edx = (uint32_t)(R8((uint32_t)(ecx + 0x20u)));
/* 8d2046: movzx ebx, byte ptr [ecx + 0x21] */
  ebx = (uint32_t)(R8((uint32_t)(ecx + 0x21u)));
/* 8d204a: mov ecx, dword ptr [ecx + 0x18] */
  ecx = R32((uint32_t)(ecx + 0x18u));
/* 8d204d: mov esi, dword ptr [edi + 0x2c] */
  esi = R32((uint32_t)(edi + 0x2cu));
/* 8d2050: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 8d2053: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 8d2056: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 8d2059: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8d205c: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 8d205f: xor ecx, ecx */
  ecx = 0;
/* 8d2061: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d2063: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 8d206a: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 8d2070: mov dword ptr [eax + 8], 0 */
  W32((uint32_t)(eax + 0x8u), 0x0u);
/* 8d2077: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 8d207a: mov dword ptr [eax + 0x18], ebx */
  W32((uint32_t)(eax + 0x18u), ebx);
/* 8d207d: mov dword ptr [eax + 0x1c], esi */
  W32((uint32_t)(eax + 0x1cu), esi);
/* 8d2080: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* 8d2083: mov dword ptr [eax + 0x28], ecx */
  W32((uint32_t)(eax + 0x28u), ecx);
/* 8d2086: mov dword ptr [eax + 0x20], 0x1c */
  W32((uint32_t)(eax + 0x20u), 0x1cu);
/* 8d208d: je 0x8d2096 */
  if (zf) goto L_8d2096;
L_8d208f: /* 8d208f: mov dword ptr [eax + 0x20], 0x24 */
  W32((uint32_t)(eax + 0x20u), 0x24u);
L_8d2096: /* 8d2096: mov esi, eax */
  esi = eax;
/* 8d2098: jmp 0x8d209c */
  goto L_8d209c;
L_8d209a: /* 8d209a: xor esi, esi */
  esi = 0;
L_8d209c: /* 8d209c: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8d209e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8d20a0: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 8d20a5: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8d20abu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8d20ab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d20ad: je 0x8d20c1 */
  if (zf) goto L_8d20c1;
L_8d20af: /* 8d20af: mov ecx, dword ptr [0xcd8ad8] */
  ecx = R32((uint32_t)(0xcd8ad8u));
/* 8d20b5: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 8d20b7: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8d20ba: mov dword ptr [0xcd8ad8], eax */
  W32((uint32_t)(0xcd8ad8u), eax);
/* 8d20bf: jmp 0x8d20cb */
  goto L_8d20cb;
L_8d20c1: /* 8d20c1: mov dword ptr [0xcd8ad8], 0 */
  W32((uint32_t)(0xcd8ad8u), 0x0u);
L_8d20cb: /* 8d20cb: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8d20cd: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8d20cf: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 8d20d4: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8d20dau); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8d20da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d20dc: je 0x8d20f7 */
  if (zf) goto L_8d20f7;
L_8d20de: /* 8d20de: mov dword ptr [eax + 0xc], edi */
  W32((uint32_t)(eax + 0xcu), edi);
/* 8d20e1: mov dword ptr [eax], 0xa16b44 */
  W32((uint32_t)(eax), 0xa16b44u);
/* 8d20e7: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 8d20ea: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8d20ed: mov edi, dword ptr [edi + 0x24] */
  edi = R32((uint32_t)(edi + 0x24u));
/* 8d20f0: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 8d20f3: mov edi, eax */
  edi = eax;
/* 8d20f5: jmp 0x8d20f9 */
  goto L_8d20f9;
L_8d20f7: /* 8d20f7: xor edi, edi */
  edi = 0;
L_8d20f9: /* 8d20f9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8d20fc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d20fe: je 0x8d210a */
  if (zf) goto L_8d210a;
L_8d2100: /* 8d2100: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 8d2103: sub edx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 8d2105: cmp edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d2108: jne 0x8d214a */
  if (!zf) goto L_8d214a;
L_8d210a: /* 8d210a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8d210c: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 8d2111: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 8d2116: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8d211cu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8d211c: mov dword ptr [eax + 0x84], 0 */
  W32((uint32_t)(eax + 0x84u), 0x0u);
/* 8d2126: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8d2129: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d212b: je 0x8d213f */
  if (zf) goto L_8d213f;
L_8d212d: /* 8d212d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8d212f: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d2132: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8d2134: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 8d2137: mov dword ptr [edx + 0x84], eax */
  W32((uint32_t)(edx + 0x84u), eax);
/* 8d213d: jmp 0x8d2147 */
  goto L_8d2147;
L_8d213f: /* 8d213f: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 8d2145: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_8d2147: /* 8d2147: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
L_8d214a: /* 8d214a: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8d214d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8d214f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8d2152: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8d2154: mov dword ptr [eax + ecx*4 + 4], edi */
  W32((uint32_t)(eax + ecx*4 + 0x4u), edi);
/* 8d2158: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 8d215b: mov ebx, dword ptr [esi + 0x24] */
  ebx = R32((uint32_t)(esi + 0x24u));
/* 8d215e: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8d2161: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d2162: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 8d2165: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 8d2168: imul edx, dword ptr [esi + 0x20] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x20u)));
  edx = (uint32_t)r;
  }
/* 8d216c: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8d216e: mov dword ptr [esi + 0x24], ebx */
  W32((uint32_t)(esi + 0x24u), ebx);
/* 8d2171: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 8d2174: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d2177: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d217a: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8d217c: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d217e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8d217f: mov dword ptr [esi + 0x28], ecx */
  W32((uint32_t)(esi + 0x28u), ecx);
/* 8d2182: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 8d2185: mov esi, edi */
  esi = edi;
/* 8d2187: jmp 0x8d1ee4 */
  goto L_8d1ee4;
L_8d218c: /* 8d218c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d218f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d2191: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x8d2194u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d2194: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8d2199: mov ecx, dword ptr [0xce8364] */
  ecx = R32((uint32_t)(0xce8364u));
/* 8d219f: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 8d21a2: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8d21a4: mov esi, dword ptr [ebp - 0x3c] */
  esi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8d21a7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d21a9: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8d21ab: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8d21ad: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_8d21af: /* 8d21af: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8d21b2: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d21b5: mov ecx, dword ptr [edx + eax*4] */
  ecx = R32((uint32_t)(edx + eax*4));
/* 8d21b8: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8d21bb: cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ecx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d21bf: je 0x8d22eb */
  if (zf) goto L_8d22eb;
L_8d21c5: /* 8d21c5: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8d21c7: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d21ca: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 8d21cd: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d21cf: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8d21d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d21d1: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8d21d4: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d21d7: mov eax, dword ptr [ecx + edx*4] */
  eax = R32((uint32_t)(ecx + edx*4));
/* 8d21da: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8d21dd: mov esi, dword ptr [ecx + eax*4] */
  esi = R32((uint32_t)(ecx + eax*4));
L_8d21e0: /* 8d21e0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d21e2: je 0x8d22c7 */
  if (zf) goto L_8d22c7;
L_8d21e8: /* 8d21e8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d21eb: mov ecx, esp */
  ecx = esp;
/* 8d21ed: mov dword ptr [ebp - 0x3c], esp */
  W32((uint32_t)(ebp + 0xffffffc4u), esp);
/* 8d21f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d21f2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d21f5: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 8d21fc: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 8d21ff: mov edx, esp */
  edx = esp;
/* 8d2201: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8d2203: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 8d220a: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8d220d: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8d2210: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 8d2217: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8d221a: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8d221d: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x8d2223u); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 8d2223: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d2226: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d2228: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d222a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d222c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d222e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d2230: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d2232: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x8d2235u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d2235: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8d2238: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8d223b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d223d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d223e: call 0x6c7adb */
  esp -= 4; W32(esp, 0x8d2243u); SPILL(); f_6c7adb(); if (g_unwind) return; RELOAD();
/* 8d2243: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d2246: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d2248: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d224a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d224c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d224e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d224f: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x8d2252u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d2252: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d2255: mov ecx, dword ptr [eax + 0x8c] */
  ecx = R32((uint32_t)(eax + 0x8cu));
/* 8d225b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d225e: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 8d2261: add ecx, dword ptr [edx + 0x134c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x134cu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d2267: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d2269: mov dword ptr [ebp - 0x78], ecx */
  W32((uint32_t)(ebp + 0xffffff88u), ecx);
/* 8d226c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d226f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d2271: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 8d2274: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d2275: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d2277: call dword ptr [eax + 0x4c] */
  { uint32_t t = R32((uint32_t)(eax + 0x4cu)); esp -= 4; W32(esp, 0x8d227au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d227a: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d227d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d227f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d2281: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d2282: call dword ptr [eax + 0x58] */
  { uint32_t t = R32((uint32_t)(eax + 0x58u)); esp -= 4; W32(esp, 0x8d2285u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d2285: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 8d2288: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d228a: je 0x8d22bf */
  if (zf) goto L_8d22bf;
L_8d228c: /* 8d228c: mov ebx, dword ptr [esi + 0x28] */
  ebx = R32((uint32_t)(esi + 0x28u));
/* 8d228f: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d2292: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 8d2294: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d2295: mov ebx, dword ptr [esi + 0x24] */
  ebx = R32((uint32_t)(esi + 0x24u));
/* 8d2298: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d2299: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d229a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d229b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d229d: call dword ptr [edi + 0x5c] */
  { uint32_t t = R32((uint32_t)(edi + 0x5cu)); esp -= 4; W32(esp, 0x8d22a0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d22a0: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8d22a5: mov ecx, dword ptr [0xce836c] */
  ecx = R32((uint32_t)(0xce836cu));
/* 8d22ab: inc dword ptr [eax + ecx*4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + ecx*4), r);
  }
/* 8d22ae: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8d22b3: mov ecx, dword ptr [0xce8370] */
  ecx = R32((uint32_t)(0xce8370u));
/* 8d22b9: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 8d22bc: add dword ptr [eax + ecx*4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + ecx*4), r);
  }
L_8d22bf: /* 8d22bf: mov esi, dword ptr [esi + 0xc] */
  esi = R32((uint32_t)(esi + 0xcu));
/* 8d22c2: jmp 0x8d21e0 */
  goto L_8d21e0;
L_8d22c7: /* 8d22c7: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d22ca: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d22cc: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x8d22cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d22cf: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 8d22d5: mov edx, dword ptr [0xce8364] */
  edx = R32((uint32_t)(0xce8364u));
/* 8d22db: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 8d22de: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8d22e0: mov esi, dword ptr [ebp - 0x40] */
  esi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8d22e3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d22e5: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8d22e7: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8d22e9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_8d22eb: /* 8d22eb: inc dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
/* 8d22ee: jmp 0x8d1ea2 */
  goto L_8d1ea2;
L_8d2329: /* 8d2329: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 8d232f: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d2332: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8d2339: je 0x8d2600 */
  if (zf) goto L_8d2600;
L_8d233f: /* 8d233f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d2342: mov ecx, dword ptr [eax + 0x1318] */
  ecx = R32((uint32_t)(eax + 0x1318u));
/* 8d2348: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d234a: je 0x8d2600 */
  if (zf) goto L_8d2600;
L_8d2350: /* 8d2350: mov eax, dword ptr [0xce8598] */
  eax = R32((uint32_t)(0xce8598u));
/* 8d2355: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d2357: jne 0x8d23cd */
  if (!zf) goto L_8d23cd;
L_8d2359: /* 8d2359: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d235b: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8d235e: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8d2364u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8d2364: push 0xb88fb0 */
  { uint32_t v = 0xb88fb0u; esp -= 4; W32(esp, v); }
/* 8d2369: mov ecx, 0xb88fb0 */
  ecx = 0xb88fb0u;
/* 8d236e: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x8d2374u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 8d2374: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d2376: jne 0x8d2390 */
  if (!zf) goto L_8d2390;
L_8d2378: /* 8d2378: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 8d237d: push 0xaecd68 */
  { uint32_t v = 0xaecd68u; esp -= 4; W32(esp, v); }
/* 8d2382: push 0xaecdac */
  { uint32_t v = 0xaecdacu; esp -= 4; W32(esp, v); }
/* 8d2387: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8d238du); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8d238d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8d2390: /* 8d2390: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x8d2396u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 8d2396: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 8d239c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d239e: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8d23a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d23a3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d23a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d23a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d23a8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d23a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d23aa: push 0xb88fb0 */
  { uint32_t v = 0xb88fb0u; esp -= 4; W32(esp, v); }
/* 8d23af: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x8d23b5u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 8d23b5: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 8d23bb: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d23be: push 0xce8598 */
  { uint32_t v = 0xce8598u; esp -= 4; W32(esp, v); }
/* 8d23c3: mov dword ptr [0xce8598], eax */
  W32((uint32_t)(0xce8598u), eax);
/* 8d23c8: call 0x6c1203 */
  esp -= 4; W32(esp, 0x8d23cdu); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
L_8d23cd: /* 8d23cd: mov eax, dword ptr [0xce8594] */
  eax = R32((uint32_t)(0xce8594u));
/* 8d23d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d23d4: jne 0x8d2465 */
  if (!zf) goto L_8d2465;
L_8d23da: /* 8d23da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d23dc: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8d23df: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8d23e5u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8d23e5: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 8d23ea: mov ecx, 0xb88020 */
  ecx = 0xb88020u;
/* 8d23ef: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x8d23f5u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 8d23f5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d23f7: jne 0x8d2411 */
  if (!zf) goto L_8d2411;
L_8d23f9: /* 8d23f9: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 8d23fe: push 0xaecdd0 */
  { uint32_t v = 0xaecdd0u; esp -= 4; W32(esp, v); }
/* 8d2403: push 0xaece14 */
  { uint32_t v = 0xaece14u; esp -= 4; W32(esp, v); }
/* 8d2408: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8d240eu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8d240e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8d2411: /* 8d2411: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x8d2417u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 8d2417: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 8d241d: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8d241f: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8d2422: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d2424: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d2425: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d2427: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d2429: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d242a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d242b: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 8d2430: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x8d2436u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 8d2436: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 8d243c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d243f: push 0xce8594 */
  { uint32_t v = 0xce8594u; esp -= 4; W32(esp, v); }
/* 8d2444: mov dword ptr [0xce8594], eax */
  W32((uint32_t)(0xce8594u), eax);
/* 8d2449: call 0x6c1203 */
  esp -= 4; W32(esp, 0x8d244eu); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 8d244e: mov eax, dword ptr [0xce8594] */
  eax = R32((uint32_t)(0xce8594u));
/* 8d2453: mov ecx, dword ptr [0xce8598] */
  ecx = R32((uint32_t)(0xce8598u));
/* 8d2459: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* 8d245c: mov eax, dword ptr [0xce8594] */
  eax = R32((uint32_t)(0xce8594u));
/* 8d2461: or dword ptr [eax + 0x5c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x5cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x5cu), r);
  }
L_8d2465: /* 8d2465: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d2468: mov eax, dword ptr [edx + 0xb4] */
  eax = R32((uint32_t)(edx + 0xb4u));
/* 8d246e: mov eax, dword ptr [eax + 0x40] */
  eax = R32((uint32_t)(eax + 0x40u));
/* 8d2471: mov ecx, dword ptr [eax + 0x104] */
  ecx = R32((uint32_t)(eax + 0x104u));
/* 8d2477: mov edx, dword ptr [0xce8598] */
  edx = R32((uint32_t)(0xce8598u));
/* 8d247d: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d2480: mov dword ptr [edx + 0x38], ecx */
  W32((uint32_t)(edx + 0x38u), ecx);
/* 8d2483: mov ecx, esp */
  ecx = esp;
/* 8d2485: mov dword ptr [ebp - 0x40], esp */
  W32((uint32_t)(ebp + 0xffffffc0u), esp);
/* 8d2488: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d248a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d248d: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 8d2494: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 8d2497: mov eax, esp */
  eax = esp;
/* 8d2499: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8d249b: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 8d24a2: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8d24a5: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8d24a8: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 8d24af: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8d24b2: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8d24b5: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x8d24bbu); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 8d24bb: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d24be: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d24c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d24c2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d24c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d24c6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d24c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d24ca: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x8d24cdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d24cd: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d24d0: mov eax, dword ptr [0xce8594] */
  eax = R32((uint32_t)(0xce8594u));
/* 8d24d5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d24d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d24d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d24db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d24dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d24de: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x8d24e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d24e1: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d24e4: xor eax, eax */
  eax = 0;
L_8d24e6: /* 8d24e6: cmp eax, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d24e9: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 8d24ec: jge 0x8d2600 */
  if ((sf == of)) goto L_8d2600;
L_8d24f2: /* 8d24f2: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8d24f5: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 8d24f8: mov eax, dword ptr [edi + 0x1274] */
  eax = R32((uint32_t)(edi + 0x1274u));
/* 8d24fe: mov esi, dword ptr [eax + edx*4] */
  esi = R32((uint32_t)(eax + edx*4));
/* 8d2501: mov ecx, dword ptr [esi + 0x8c] */
  ecx = R32((uint32_t)(esi + 0x8cu));
/* 8d2507: mov eax, dword ptr [edi + 0x134c] */
  eax = R32((uint32_t)(edi + 0x134cu));
/* 8d250d: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 8d2510: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d2512: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d2514: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 8d2517: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d251a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d251c: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 8d251f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d2520: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d2522: mov dword ptr [ebp - 0x3c], esi */
  W32((uint32_t)(ebp + 0xffffffc4u), esi);
/* 8d2525: call dword ptr [edx + 0x4c] */
  { uint32_t t = R32((uint32_t)(edx + 0x4cu)); esp -= 4; W32(esp, 0x8d2528u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d2528: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d252b: xor eax, eax */
  eax = 0;
/* 8d252d: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
L_8d2530: /* 8d2530: cmp eax, dword ptr [esi + 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d2533: jge 0x8d25f7 */
  if ((sf == of)) goto L_8d25f7;
L_8d2539: /* 8d2539: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8d253c: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 8d253f: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 8d2542: mov ecx, dword ptr [edi + 0x1340] */
  ecx = R32((uint32_t)(edi + 0x1340u));
/* 8d2548: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8d254b: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 8d254e: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8d2551: xor esi, esi */
  esi = 0;
/* 8d2553: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 8d2556: xor eax, eax */
  eax = 0;
L_8d2558: /* 8d2558: cmp eax, dword ptr [edx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d255b: jge 0x8d2574 */
  if ((sf == of)) goto L_8d2574;
L_8d255d: /* 8d255d: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8d255f: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 8d2562: mov ebx, 1 */
  ebx = 0x1u;
/* 8d2567: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 8d2569: test dword ptr [edi + 0x1318], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x1318u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d256f: jne 0x8d2578 */
  if (!zf) goto L_8d2578;
L_8d2571: /* 8d2571: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d2572: jmp 0x8d2558 */
  goto L_8d2558;
L_8d2574: /* 8d2574: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d2576: je 0x8d25e8 */
  if (zf) goto L_8d25e8;
L_8d2578: /* 8d2578: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d257b: mov ebx, dword ptr [0xcfa1b0] */
  ebx = R32((uint32_t)(0xcfa1b0u));
/* 8d2581: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d2583: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 8d2586: mov dword ptr [ebp - 0x64], 0xa1c030 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0xa1c030u);
/* 8d258d: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 8d2590: mov edi, dword ptr [ebx] */
  edi = R32((uint32_t)(ebx));
/* 8d2592: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 8d2597: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d2598: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d2599: call 0x99c910 */
  esp -= 4; W32(esp, 0x8d259eu); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 8d259e: add eax, 0xe2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe2u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 8d25a3: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 8d25a6: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 8d25a9: mov dword ptr [ebx], edi */
  W32((uint32_t)(ebx), edi);
/* 8d25ab: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 8d25b1: adc esi, 0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  esi = r;
  }
/* 8d25b4: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 8d25b7: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d25ba: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 8d25bd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d25bf: lea eax, [ebp - 0x64] */
  eax = (uint32_t)(ebp + 0xffffff9cu);
/* 8d25c2: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 8d25c5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d25c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d25c8: call dword ptr [edx + 0x58] */
  { uint32_t t = R32((uint32_t)(edx + 0x58u)); esp -= 4; W32(esp, 0x8d25cbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d25cb: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d25ce: mov edi, dword ptr [edx + 0x20] */
  edi = R32((uint32_t)(edx + 0x20u));
/* 8d25d1: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d25d4: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 8d25d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d25d7: mov edi, dword ptr [edx + 0x1c] */
  edi = R32((uint32_t)(edx + 0x1cu));
/* 8d25da: mov edx, dword ptr [edx + 0x14] */
  edx = R32((uint32_t)(edx + 0x14u));
/* 8d25dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d25de: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d25df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d25e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d25e2: call dword ptr [esi + 0x5c] */
  { uint32_t t = R32((uint32_t)(esi + 0x5cu)); esp -= 4; W32(esp, 0x8d25e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d25e5: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
L_8d25e8: /* 8d25e8: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8d25eb: mov esi, dword ptr [ebp - 0x3c] */
  esi = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8d25ee: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d25ef: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 8d25f2: jmp 0x8d2530 */
  goto L_8d2530;
L_8d25f7: /* 8d25f7: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 8d25fa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d25fb: jmp 0x8d24e6 */
  goto L_8d24e6;
L_8d2600: /* 8d2600: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8d2603: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x8d2609u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 8d2609: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8d260c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8d260f: mov eax, dword ptr [ecx + 0x15c] */
  eax = R32((uint32_t)(ecx + 0x15cu));
/* 8d2615: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d2617: je 0x8d2620 */
  if (zf) goto L_8d2620;
L_8d2619: /* 8d2619: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d261b: call 0x6c1ab9 */
  esp -= 4; W32(esp, 0x8d2620u); SPILL(); f_6c1ab9(); if (g_unwind) return; RELOAD();
L_8d2620: /* 8d2620: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d2623: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d2625: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x8d2628u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d2628: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 8d262d: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d2630: je 0x8d28a2 */
  if (zf) goto L_8d28a2;
L_8d2636: /* 8d2636: cmp dword ptr [0xb19030], 0x1c */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb19030u))); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d263d: jne 0x8d28a2 */
  if (!zf) goto L_8d28a2;
L_8d2643: /* 8d2643: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d2646: cmp dword ptr [0xb19070], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb19070u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d264c: mov ecx, dword ptr [0xb19048] */
  ecx = R32((uint32_t)(0xb19048u));
/* 8d2652: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 8d2659: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 8d2660: jne 0x8d26ca */
  if (!zf) goto L_8d26ca;
L_8d2662: /* 8d2662: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 8d2665: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d2667: je 0x8d26ca */
  if (zf) goto L_8d26ca;
L_8d2669: /* 8d2669: fld dword ptr [0xb19024] */
  { double v = F32((uint32_t)(0xb19024u)); FPUSH(v); }
/* 8d266f: mov ecx, dword ptr [0xb1901c] */
  ecx = R32((uint32_t)(0xb1901cu));
/* 8d2675: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8d267b: mov edx, ecx */
  edx = ecx;
/* 8d267d: fld dword ptr [0xb19020] */
  { double v = F32((uint32_t)(0xb19020u)); FPUSH(v); }
/* 8d2683: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 8d2686: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 8d2689: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8d268c: mov dword ptr [ebp - 0x60], ecx */
  W32((uint32_t)(ebp + 0xffffffa0u), ecx);
/* 8d268f: mov byte ptr [ebp - 0x18], 0 */
  W8((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 8d2693: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 8d2696: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8d2699: mov byte ptr [ebp - 0x17], 0 */
  W8((uint32_t)(ebp + 0xffffffe9u), 0x0u);
/* 8d269d: mov byte ptr [ebp - 0x16], 0xff */
  W8((uint32_t)(ebp + 0xffffffeau), 0xffu);
/* 8d26a1: mov byte ptr [ebp - 0x15], 0xff */
  W8((uint32_t)(ebp + 0xffffffebu), 0xffu);
/* 8d26a5: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d26a8: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 8d26ab: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8d26ae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d26af: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8d26b2: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 8d26b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d26b6: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 8d26b9: call 0x8c4450 */
  esp -= 4; W32(esp, 0x8d26beu); SPILL(); f_8c4450(); if (g_unwind) return; RELOAD();
/* 8d26be: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d26c1: mov ecx, dword ptr [0xb19048] */
  ecx = R32((uint32_t)(0xb19048u));
/* 8d26c7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8d26ca: /* 8d26ca: mov eax, dword ptr [ecx + 0x28] */
  eax = R32((uint32_t)(ecx + 0x28u));
/* 8d26cd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d26cf: je 0x8d27b5 */
  if (zf) goto L_8d27b5;
L_8d26d5: /* 8d26d5: xor ebx, ebx */
  ebx = 0;
/* 8d26d7: jmp 0x8d26e0 */
  goto L_8d26e0;
L_8d26e0: /* 8d26e0: cmp ebx, dword ptr [edi + 0x1310] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1310u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d26e6: jge 0x8d27b5 */
  if ((sf == of)) goto L_8d27b5;
L_8d26ec: /* 8d26ec: mov edx, dword ptr [edi + 0x130c] */
  edx = R32((uint32_t)(edi + 0x130cu));
/* 8d26f2: lea ecx, [ebx + ebx*4] */
  ecx = (uint32_t)(ebx + ebx*4);
/* 8d26f5: mov eax, dword ptr [edx + ecx*4 + 0xc] */
  eax = R32((uint32_t)(edx + ecx*4 + 0xcu));
/* 8d26f9: lea esi, [edx + ecx*4] */
  esi = (uint32_t)(edx + ecx*4);
/* 8d26fc: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8d26ff: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8d2702: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 8d2708: call 0x99c958 */
  esp -= 4; W32(esp, 0x8d270du); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8d270d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8d270f: mov byte ptr [ebp - 0x18], al */
  W8((uint32_t)(ebp + 0xffffffe8u), (eax & 0xffu));
/* 8d2712: mov byte ptr [ebp - 0x17], al */
  W8((uint32_t)(ebp + 0xffffffe9u), (eax & 0xffu));
/* 8d2715: mov byte ptr [ebp - 0x16], al */
  W8((uint32_t)(ebp + 0xffffffeau), (eax & 0xffu));
/* 8d2718: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8d271b: imul eax, dword ptr [edi + 0x128c] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi + 0x128cu)));
  eax = (uint32_t)r;
  }
/* 8d2722: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d2724: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8d2727: mov eax, dword ptr [edi + 0x1280] */
  eax = R32((uint32_t)(edi + 0x1280u));
/* 8d272d: lea edx, [eax + edx*4] */
  edx = (uint32_t)(eax + edx*4);
/* 8d2730: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8d2732: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8d2735: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8d2738: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8d273b: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8d273e: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 8d2741: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 8d2744: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8d2747: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8d274a: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8d274d: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8d2753: mov byte ptr [ebp - 0x15], 0xff */
  W8((uint32_t)(ebp + 0xffffffebu), 0xffu);
/* 8d2757: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d275a: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8d275d: fcomp dword ptr [ebp - 0x48] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffb8u)));
  FPOP();
/* 8d2760: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d2762: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8d2765: jp 0x8d2793 */
  if (pf) goto L_8d2793;
L_8d2767: /* 8d2767: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8d276a: fcomp dword ptr [ebp - 0x44] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffbcu)));
  FPOP();
/* 8d276d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d276f: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8d2772: jp 0x8d2793 */
  if (pf) goto L_8d2793;
L_8d2774: /* 8d2774: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8d2777: fmul dword ptr [0xa154b0] */
  ST0 = ST0 * (F32((uint32_t)(0xa154b0u)));
/* 8d277d: call 0x99c958 */
  esp -= 4; W32(esp, 0x8d2782u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8d2782: mov byte ptr [ebp - 0x38], al */
  W8((uint32_t)(ebp + 0xffffffc8u), (eax & 0xffu));
/* 8d2785: mov byte ptr [ebp - 0x37], al */
  W8((uint32_t)(ebp + 0xffffffc9u), (eax & 0xffu));
/* 8d2788: mov byte ptr [ebp - 0x36], 0xff */
  W8((uint32_t)(ebp + 0xffffffcau), 0xffu);
/* 8d278c: mov byte ptr [ebp - 0x35], 0xff */
  W8((uint32_t)(ebp + 0xffffffcbu), 0xffu);
/* 8d2790: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
L_8d2793: /* 8d2793: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8d2796: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d2797: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8d279a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d279b: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8d279e: call 0x8c4450 */
  esp -= 4; W32(esp, 0x8d27a3u); SPILL(); f_8c4450(); if (g_unwind) return; RELOAD();
/* 8d27a3: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d27a6: mov ecx, dword ptr [0xb19048] */
  ecx = R32((uint32_t)(0xb19048u));
/* 8d27ac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d27af: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8d27b0: jmp 0x8d26e0 */
  goto L_8d26e0;
L_8d27b5: /* 8d27b5: cmp dword ptr [0xb19070], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb19070u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d27bb: jne 0x8d28a2 */
  if (!zf) goto L_8d28a2;
L_8d27c1: /* 8d27c1: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 8d27c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d27c6: je 0x8d28c4 */
  if (zf) goto L_8d28c4;
L_8d27cc: /* 8d27cc: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 8d27cf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d27d1: je 0x8d281d */
  if (zf) goto L_8d281d;
L_8d27d3: /* 8d27d3: mov eax, dword ptr [0xb18ffc] */
  eax = R32((uint32_t)(0xb18ffcu));
/* 8d27d8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d27da: mov byte ptr [ebp - 0x18], 0 */
  W8((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 8d27de: mov byte ptr [ebp - 0x17], 0xff */
  W8((uint32_t)(ebp + 0xffffffe9u), 0xffu);
/* 8d27e2: mov byte ptr [ebp - 0x16], 0xff */
  W8((uint32_t)(ebp + 0xffffffeau), 0xffu);
/* 8d27e6: mov byte ptr [ebp - 0x15], 0xff */
  W8((uint32_t)(ebp + 0xffffffebu), 0xffu);
/* 8d27ea: je 0x8d27f1 */
  if (zf) goto L_8d27f1;
L_8d27ec: /* 8d27ec: mov ecx, dword ptr [ecx + 0x54] */
  ecx = R32((uint32_t)(ecx + 0x54u));
/* 8d27ef: jmp 0x8d27f7 */
  goto L_8d27f7;
L_8d27f1: /* 8d27f1: mov ecx, dword ptr [0xb19074] */
  ecx = R32((uint32_t)(0xb19074u));
L_8d27f7: /* 8d27f7: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d27fa: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8d27fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d27fe: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8d2801: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8d2804: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d2805: add edx, 0xc0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8d280b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d280c: call 0x8cc260 */
  esp -= 4; W32(esp, 0x8d2811u); SPILL(); f_8cc260(); if (g_unwind) return; RELOAD();
/* 8d2811: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d2814: mov ecx, dword ptr [0xb19048] */
  ecx = R32((uint32_t)(0xb19048u));
/* 8d281a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8d281d: /* 8d281d: mov eax, dword ptr [0xb18ffc] */
  eax = R32((uint32_t)(0xb18ffcu));
/* 8d2822: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d2824: mov bl, 0xa0 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xa0u) & 0xffu);
/* 8d2826: mov byte ptr [ebp - 0x18], 0 */
  W8((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 8d282a: mov byte ptr [ebp - 0x17], bl */
  W8((uint32_t)(ebp + 0xffffffe9u), (ebx & 0xffu));
/* 8d282d: mov byte ptr [ebp - 0x16], bl */
  W8((uint32_t)(ebp + 0xffffffeau), (ebx & 0xffu));
/* 8d2830: mov byte ptr [ebp - 0x15], 0xff */
  W8((uint32_t)(ebp + 0xffffffebu), 0xffu);
/* 8d2834: je 0x8d283b */
  if (zf) goto L_8d283b;
L_8d2836: /* 8d2836: mov ecx, dword ptr [ecx + 0x58] */
  ecx = R32((uint32_t)(ecx + 0x58u));
/* 8d2839: jmp 0x8d2841 */
  goto L_8d2841;
L_8d283b: /* 8d283b: mov ecx, dword ptr [0xb19078] */
  ecx = R32((uint32_t)(0xb19078u));
L_8d2841: /* 8d2841: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d2844: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8d2847: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d2848: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8d284b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8d284e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d284f: add edx, 0xc0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8d2855: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d2856: call 0x8cc260 */
  esp -= 4; W32(esp, 0x8d285bu); SPILL(); f_8cc260(); if (g_unwind) return; RELOAD();
/* 8d285b: mov ecx, dword ptr [0xb19048] */
  ecx = R32((uint32_t)(0xb19048u));
/* 8d2861: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8d2864: /* 8d2864: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 8d2867: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d2869: je 0x8d28a2 */
  if (zf) goto L_8d28a2;
L_8d286b: /* 8d286b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d286d: lea eax, [ebp - 0x70] */
  eax = (uint32_t)(ebp + 0xffffff90u);
/* 8d2870: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d2871: mov byte ptr [ebp - 0x18], 0 */
  W8((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 8d2875: mov byte ptr [ebp - 0x17], bl */
  W8((uint32_t)(ebp + 0xffffffe9u), (ebx & 0xffu));
/* 8d2878: mov byte ptr [ebp - 0x16], bl */
  W8((uint32_t)(ebp + 0xffffffeau), (ebx & 0xffu));
/* 8d287b: mov byte ptr [ebp - 0x15], 0xff */
  W8((uint32_t)(ebp + 0xffffffebu), 0xffu);
/* 8d287f: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x8d2882u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d2882: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d2885: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8d2888: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d2889: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d288c: mov esi, eax */
  esi = eax;
/* 8d288e: mov ecx, 7 */
  ecx = 0x7u;
/* 8d2893: mov edi, esp */
  edi = esp;
/* 8d2895: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8d2897: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d289a: call 0x8c66b0 */
  esp -= 4; W32(esp, 0x8d289fu); SPILL(); f_8c66b0(); if (g_unwind) return; RELOAD();
/* 8d289f: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8d28a2: /* 8d28a2: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* 8d28a8: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8d28ac: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x8d28b1u); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 8d28b1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d28b4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d28b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d28b6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d28bd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d28be: mov esp, ebp */
  esp = ebp;
/* 8d28c0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d28c1: ret 0x1c */
  esp += 32; SPILL(); return;
L_8d28c4: /* 8d28c4: mov bl, 0xa0 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xa0u) & 0xffu);
/* 8d28c6: jmp 0x8d2864 */
  goto L_8d2864;
}
