#include "recomp.h"
#include "rec_mod.h"

void f_85d43d(void) {
  LOAD_REGS();
L_85d43d: /* 85d43d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_85d440: /* 85d440: cmp esi, dword ptr [eax + 0x20] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85d443: jge 0x85d471 */
  if ((sf == of)) goto L_85d471;
L_85d445: /* 85d445: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 85d448: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 85d44a: lea edx, [eax*4] */
  edx = (uint32_t)(eax*4);
/* 85d451: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 85d454: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85d455: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 85d458: mov eax, esi */
  eax = esi;
/* 85d45a: imul eax, dword ptr [ebp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x10u)));
  eax = (uint32_t)r;
  }
/* 85d45e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85d45f: add eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 85d462: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85d463: call 0x6ca83f */
  esp -= 4; W32(esp, 0x85d468u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 85d468: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 85d46b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85d46e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 85d46f: jmp 0x85d440 */
  goto L_85d440;
L_85d471: /* 85d471: mov dword ptr [edi + 0x14], 0 */
  W32((uint32_t)(edi + 0x14u), 0x0u);
/* 85d478: xor edi, edi */
  edi = 0;
L_85d47a: /* 85d47a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85d47d: cmp edi, dword ptr [ecx + 0x9c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x9cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85d483: mov dword ptr [ebp - 0x38], edi */
  W32((uint32_t)(ebp + 0xffffffc8u), edi);
/* 85d486: jge 0x85d72c */
  if ((sf == of)) goto L_85d72c;
L_85d48c: /* 85d48c: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 85d491: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 85d494: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x85d49au); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 85d49a: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85d49d: mov eax, dword ptr [edx + 0x98] */
  eax = R32((uint32_t)(edx + 0x98u));
/* 85d4a3: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 85d4a6: call 0x6cc7bb */
  esp -= 4; W32(esp, 0x85d4abu); SPILL(); f_6cc7bb(); if (g_unwind) return; RELOAD();
/* 85d4ab: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 85d4b1: mov esi, eax */
  esi = eax;
/* 85d4b3: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85d4b6: mov dword ptr [ebp - 0x34], esi */
  W32((uint32_t)(ebp + 0xffffffccu), esi);
/* 85d4b9: je 0x85d71d */
  if (zf) goto L_85d71d;
L_85d4bf: /* 85d4bf: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 85d4c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85d4c4: je 0x85d71d */
  if (zf) goto L_85d71d;
L_85d4ca: /* 85d4ca: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 85d4cc: cmp byte ptr [edx + 0x29], 0x13 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x29u))); uint8_t b = (uint8_t)(0x13u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 85d4d0: jne 0x85d4e7 */
  if (!zf) goto L_85d4e7;
L_85d4d2: /* 85d4d2: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 85d4d5: mov edi, dword ptr [eax + 0x1c] */
  edi = R32((uint32_t)(eax + 0x1cu));
/* 85d4d8: mov esi, dword ptr [eax + 0x20] */
  esi = R32((uint32_t)(eax + 0x20u));
/* 85d4db: xor ebx, ebx */
  ebx = 0;
/* 85d4dd: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 85d4de: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 85d4e1: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 85d4e2: jmp 0x85d6c2 */
  goto L_85d6c2;
L_85d4e7: /* 85d4e7: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85d4ea: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 85d4ed: fmul dword ptr [edi + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x34u)));
/* 85d4f0: add edi, 0x2c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85d4f3: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 85d4f6: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 85d4f9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85d4fb: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 85d4fe: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 85d500: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85d502: fsub dword ptr [edi + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0xcu)));
/* 85d505: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 85d508: fld dword ptr [esi + 0x30] */
  { double v = F32((uint32_t)(esi + 0x30u)); FPUSH(v); }
/* 85d50b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 85d50d: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 85d50f: fmul dword ptr [0xa130a4] */
  ST0 = ST0 * (F32((uint32_t)(0xa130a4u)));
/* 85d515: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 85d518: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 85d51b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 85d51d: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 85d523: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 85d525: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85d528: je 0x85d532 */
  if (zf) goto L_85d532;
L_85d52a: /* 85d52a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 85d52c: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_85d532: /* 85d532: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85d535: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 85d538: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x85d53eu); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 85d53e: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 85d541: fst qword ptr [ebp - 0x30] */
  WF64((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 85d544: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85d547: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 85d54a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85d54b: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 85d54e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85d54f: mov ecx, edi */
  ecx = edi;
/* 85d551: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x85d557u); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 85d557: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 85d55a: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 85d55d: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85d560: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 85d563: add edx, 0x28 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 85d566: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 85d569: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 85d56c: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 85d56f: mov dword ptr [ebp - 0x50], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x3f800000u);
/* 85d576: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 85d578: lea eax, [ebp - 0x5c] */
  eax = (uint32_t)(ebp + 0xffffffa4u);
/* 85d57b: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 85d57e: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 85d581: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 85d584: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 85d587: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 85d58a: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 85d58d: lea edi, [ebp - 0x6c] */
  edi = (uint32_t)(ebp + 0xffffff94u);
/* 85d590: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 85d592: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 85d594: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 85d596: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 85d599: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 85d59b: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 85d59e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 85d5a0: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 85d5a3: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 85d5a6: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 85d5a9: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 85d5ac: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 85d5af: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 85d5b2: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 85d5b5: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 85d5b8: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 85d5bb: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 85d5bd: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 85d5bf: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85d5c1: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85d5c3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85d5c5: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 85d5c8: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 85d5cb: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 85d5ce: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 85d5d1: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 85d5d4: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 85d5d7: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 85d5da: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 85d5dd: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 85d5df: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 85d5e1: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85d5e3: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85d5e5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85d5e7: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 85d5ea: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 85d5ed: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 85d5f0: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 85d5f3: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 85d5f6: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 85d5f9: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 85d5fc: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 85d5ff: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 85d601: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 85d603: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85d605: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85d607: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85d609: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 85d60b: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 85d60d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85d60f: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 85d612: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 85d615: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 85d618: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85d61b: add ecx, 0x74 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x74u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 85d61e: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x85d624u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 85d624: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 85d627: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 85d62a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85d62d: fdiv dword ptr [ebp - 0x2c] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 85d630: add ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 85d636: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 85d639: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x85d63fu); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 85d63f: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 85d642: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 85d645: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85d648: fdiv dword ptr [ebp - 0x1c] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 85d64b: mov eax, dword ptr [ebx + 0x1c] */
  eax = R32((uint32_t)(ebx + 0x1cu));
/* 85d64e: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
/* 85d651: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 85d654: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 85d657: call 0x99c958 */
  esp -= 4; W32(esp, 0x85d65cu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 85d65c: xor edi, edi */
  edi = 0;
/* 85d65e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85d660: jge 0x85d667 */
  if ((sf == of)) goto L_85d667;
L_85d662: /* 85d662: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 85d665: jmp 0x85d671 */
  goto L_85d671;
L_85d667: /* 85d667: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85d669: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 85d66c: jl 0x85d671 */
  if ((sf != of)) goto L_85d671;
L_85d66e: /* 85d66e: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
L_85d671: /* 85d671: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 85d674: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 85d677: call 0x99c958 */
  esp -= 4; W32(esp, 0x85d67cu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 85d67c: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85d67e: jl 0x85d688 */
  if ((sf != of)) goto L_85d688;
L_85d680: /* 85d680: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85d682: mov edi, eax */
  edi = eax;
/* 85d684: jl 0x85d688 */
  if ((sf != of)) goto L_85d688;
L_85d686: /* 85d686: mov edi, esi */
  edi = esi;
L_85d688: /* 85d688: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 85d68b: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* 85d68e: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 85d690: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
/* 85d693: call 0x99c958 */
  esp -= 4; W32(esp, 0x85d698u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 85d698: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 85d69a: jge 0x85d6a0 */
  if ((sf == of)) goto L_85d6a0;
L_85d69c: /* 85d69c: xor ebx, ebx */
  ebx = 0;
/* 85d69e: jmp 0x85d6a8 */
  goto L_85d6a8;
L_85d6a0: /* 85d6a0: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85d6a2: mov ebx, eax */
  ebx = eax;
/* 85d6a4: jl 0x85d6a8 */
  if ((sf != of)) goto L_85d6a8;
L_85d6a6: /* 85d6a6: mov ebx, esi */
  ebx = esi;
L_85d6a8: /* 85d6a8: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 85d6ab: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 85d6ad: call 0x99c958 */
  esp -= 4; W32(esp, 0x85d6b2u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 85d6b2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 85d6b4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 85d6b6: jge 0x85d6bc */
  if ((sf == of)) goto L_85d6bc;
L_85d6b8: /* 85d6b8: xor esi, esi */
  esi = 0;
/* 85d6ba: jmp 0x85d6c2 */
  goto L_85d6c2;
L_85d6bc: /* 85d6bc: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85d6be: jge 0x85d6c2 */
  if ((sf == of)) goto L_85d6c2;
L_85d6c0: /* 85d6c0: mov esi, eax */
  esi = eax;
L_85d6c2: /* 85d6c2: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 85d6c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85d6c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85d6c7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85d6c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85d6c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85d6cb: call 0x6c31b1 */
  esp -= 4; W32(esp, 0x85d6d0u); SPILL(); f_6c31b1(); if (g_unwind) return; RELOAD();
/* 85d6d0: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 85d6d3: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 85d6d6: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85d6d9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85d6da: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85d6dd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85d6de: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85d6df: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85d6e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85d6e1: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85d6e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85d6e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85d6e7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85d6e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85d6e9: call 0x6cc603 */
  esp -= 4; W32(esp, 0x85d6eeu); SPILL(); f_6cc603(); if (g_unwind) return; RELOAD();
/* 85d6ee: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 85d6f1: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 85d6f4: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85d6f7: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 85d6fa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85d6fb: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 85d6fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85d6ff: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 85d702: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85d703: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85d704: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85d705: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85d706: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85d707: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85d708: call 0x6cbd07 */
  esp -= 4; W32(esp, 0x85d70du); SPILL(); f_6cbd07(); if (g_unwind) return; RELOAD();
/* 85d70d: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85d710: mov edi, dword ptr [ebp - 0x38] */
  edi = R32((uint32_t)(ebp + 0xffffffc8u));
/* 85d713: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85d716: mov dword ptr [edx + 0x14], 1 */
  W32((uint32_t)(edx + 0x14u), 0x1u);
L_85d71d: /* 85d71d: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 85d720: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x85d726u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 85d726: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 85d727: jmp 0x85d47a */
  goto L_85d47a;
L_85d72c: /* 85d72c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 85d72f: call dword ptr [0xcfaa68] */
  esp -= 4; W32(esp, 0x85d735u); SPILL(); f_4e1253(); if (g_unwind) return; /* Core!?Unlock@FCacheItem@FMemCache@@QAEXXZ */ RELOAD();
/* 85d735: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 85d73a: mov ecx, dword ptr [0xce8360] */
  ecx = R32((uint32_t)(0xce8360u));
/* 85d740: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 85d743: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 85d745: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 85d747: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 85d74a: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 85d74c: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 85d74e: mov ecx, dword ptr [0xce835c] */
  ecx = R32((uint32_t)(0xce835cu));
/* 85d754: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 85d759: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 85d75c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 85d75d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85d75e: mov dword ptr [eax + ecx*4], edx */
  W32((uint32_t)(eax + ecx*4), edx);
/* 85d761: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 85d764: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85d765: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 85d76c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85d76d: mov esp, ebp */
  esp = ebp;
/* 85d76f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85d770: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_85d773(void) {
  LOAD_REGS();
L_85d773: /* 85d773: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 85d776: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 85d77b: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 85d77e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85d77f: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 85d782: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85d787u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_85d787(); return;
}

void f_85d787(void) {
  LOAD_REGS();
L_85d787: /* 85d787: push 0xa179d4 */
  { uint32_t v = 0xa179d4u; esp -= 4; W32(esp, v); }
/* 85d78c: push 0xae4c80 */
  { uint32_t v = 0xae4c80u; esp -= 4; W32(esp, v); }
/* 85d791: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x85d797u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 85d797: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85d79a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85d79c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85d79e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85d7a3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_85d7a3: guest_badaddr(0x85d7a3); return;
}

void f_85d960(void) {
  LOAD_REGS();
L_85d960: /* 85d960: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 85d962: push 0x9d4186 */
  { uint32_t v = 0x9d4186u; esp -= 4; W32(esp, v); }
/* 85d967: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 85d96d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85d96e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 85d975: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85d978: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85d979: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 85d97a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85d97b: mov esi, ecx */
  esi = ecx;
/* 85d97d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85d97e: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 85d981: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 85d985: mov dword ptr [esi], 0x9f80a0 */
  W32((uint32_t)(esi), 0x9f80a0u);
/* 85d98b: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x85d991u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 85d991: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* 85d994: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 85d99c: call 0x6c3e6d */
  esp -= 4; W32(esp, 0x85d9a1u); SPILL(); f_6c3e6d(); if (g_unwind) return; RELOAD();
/* 85d9a1: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 85d9a5: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 85d9a8: mov ebp, dword ptr [0xcfa1b0] */
  ebp = R32((uint32_t)(0xcfa1b0u));
/* 85d9ae: mov ebx, dword ptr [ebp + 4] */
  ebx = R32((uint32_t)(ebp + 0x4u));
/* 85d9b1: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 85d9b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85d9b6: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 85d9bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85d9bc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85d9bd: call 0x99c910 */
  esp -= 4; W32(esp, 0x85d9c2u); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 85d9c2: add eax, 0xe0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 85d9c7: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 85d9ca: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 85d9cd: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 85d9d0: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 85d9d6: adc ebx, 0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 85d9d9: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 85d9dc: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 85d9e0: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* 85d9e3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85d9e4: mov dword ptr [esi + 0x64], edx */
  W32((uint32_t)(esi + 0x64u), edx);
/* 85d9e7: mov dword ptr [esi + 0x68], 0 */
  W32((uint32_t)(esi + 0x68u), 0x0u);
/* 85d9ee: mov eax, esi */
  eax = esi;
/* 85d9f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85d9f1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85d9f2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85d9f3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 85d9fa: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85d9fd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_85da30(void) {
  LOAD_REGS();
L_85da30: /* 85da30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 85da32: push 0x9d41ba */
  { uint32_t v = 0x9d41bau; esp -= 4; W32(esp, v); }
/* 85da37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 85da3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85da3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 85da45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85da46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85da47: mov esi, ecx */
  esi = ecx;
/* 85da49: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 85da4d: mov dword ptr [esi], 0xa05cf8 */
  W32((uint32_t)(esi), 0xa05cf8u);
/* 85da53: lea ecx, [esi + 0x8c] */
  ecx = (uint32_t)(esi + 0x8cu);
/* 85da59: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 85da61: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x85da67u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 85da67: lea ecx, [esi + 0x98] */
  ecx = (uint32_t)(esi + 0x98u);
/* 85da6d: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 85da72: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x85da78u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 85da78: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 85da7c: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 85da80: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 85da84: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 85da87: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 85da8b: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 85da8e: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 85da91: mov dword ptr [esi + 0x24], 0 */
  W32((uint32_t)(esi + 0x24u), 0x0u);
/* 85da98: mov eax, esi */
  eax = esi;
/* 85da9a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85da9b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 85daa2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85daa5: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_85dad0(void) {
  LOAD_REGS();
L_85dad0: /* 85dad0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85dad1: mov esi, dword ptr [ecx + 0x1c] */
  esi = R32((uint32_t)(ecx + 0x1cu));
/* 85dad4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85dad6: mov dword ptr [ecx], 0xa17a14 */
  W32((uint32_t)(ecx), 0xa17a14u);
/* 85dadc: je 0x85daf2 */
  if (zf) goto L_85daf2;
L_85dade: /* 85dade: mov ecx, esi */
  ecx = esi;
/* 85dae0: call 0x6c5b69 */
  esp -= 4; W32(esp, 0x85dae5u); SPILL(); f_6c5b69(); if (g_unwind) return; RELOAD();
/* 85dae5: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 85daea: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 85daec: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 85daee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85daef: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x85daf2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_85daf2: /* 85daf2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85daf3: ret  */
  esp += 4; SPILL(); return;
}

void f_85db10(void) {
  LOAD_REGS();
L_85db10: /* 85db10: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 85db13: ret  */
  esp += 4; SPILL(); return;
}

void f_85db30(void) {
  LOAD_REGS();
L_85db30: /* 85db30: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 85db33: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 85db36: ret  */
  esp += 4; SPILL(); return;
}

void f_85db50(void) {
  LOAD_REGS();
L_85db50: /* 85db50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85db51: mov esi, ecx */
  esi = ecx;
/* 85db53: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 85db56: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85db58: jne 0x85db72 */
  if (!zf) goto L_85db72;
L_85db5a: /* 85db5a: push 0x118 */
  { uint32_t v = 0x118u; esp -= 4; W32(esp, v); }
/* 85db5f: push 0xae4de8 */
  { uint32_t v = 0xae4de8u; esp -= 4; W32(esp, v); }
/* 85db64: push 0xae4ddc */
  { uint32_t v = 0xae4ddcu; esp -= 4; W32(esp, v); }
/* 85db69: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x85db6fu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 85db6f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_85db72: /* 85db72: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 85db75: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 85db77: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85db78: jmp dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); SPILL(); call_ind(t); return; }
}

void f_85db90(void) {
  LOAD_REGS();
L_85db90: /* 85db90: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 85db93: ret  */
  esp += 4; SPILL(); return;
}

void f_85dbb0(void) {
  LOAD_REGS();
L_85dbb0: /* 85dbb0: mov eax, 1 */
  eax = 0x1u;
/* 85dbb5: ret  */
  esp += 4; SPILL(); return;
}

void f_85dbd0(void) {
  LOAD_REGS();
L_85dbd0: /* 85dbd0: mov eax, 1 */
  eax = 0x1u;
/* 85dbd5: ret  */
  esp += 4; SPILL(); return;
}

void f_85dbf0(void) {
  LOAD_REGS();
L_85dbf0: /* 85dbf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85dbf1: mov esi, ecx */
  esi = ecx;
/* 85dbf3: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 85dbf6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85dbf8: jne 0x85dc12 */
  if (!zf) goto L_85dc12;
L_85dbfa: /* 85dbfa: push 0x11d */
  { uint32_t v = 0x11du; esp -= 4; W32(esp, v); }
/* 85dbff: push 0xae4de8 */
  { uint32_t v = 0xae4de8u; esp -= 4; W32(esp, v); }
/* 85dc04: push 0xae4ddc */
  { uint32_t v = 0xae4ddcu; esp -= 4; W32(esp, v); }
/* 85dc09: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x85dc0fu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 85dc0f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_85dc12: /* 85dc12: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 85dc15: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 85dc17: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85dc18: jmp dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); SPILL(); call_ind(t); return; }
}

void f_85dc30(void) {
  LOAD_REGS();
L_85dc30: /* 85dc30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85dc31: mov esi, ecx */
  esi = ecx;
/* 85dc33: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 85dc36: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85dc38: jne 0x85dc52 */
  if (!zf) goto L_85dc52;
L_85dc3a: /* 85dc3a: push 0x11f */
  { uint32_t v = 0x11fu; esp -= 4; W32(esp, v); }
/* 85dc3f: push 0xae4de8 */
  { uint32_t v = 0xae4de8u; esp -= 4; W32(esp, v); }
/* 85dc44: push 0xae4ddc */
  { uint32_t v = 0xae4ddcu; esp -= 4; W32(esp, v); }
/* 85dc49: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x85dc4fu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 85dc4f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_85dc52: /* 85dc52: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 85dc55: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 85dc57: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85dc58: jmp dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); SPILL(); call_ind(t); return; }
}

void f_85dc70(void) {
  LOAD_REGS();
L_85dc70: /* 85dc70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85dc71: mov esi, ecx */
  esi = ecx;
/* 85dc73: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 85dc76: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85dc78: jne 0x85dc92 */
  if (!zf) goto L_85dc92;
L_85dc7a: /* 85dc7a: push 0x120 */
  { uint32_t v = 0x120u; esp -= 4; W32(esp, v); }
/* 85dc7f: push 0xae4de8 */
  { uint32_t v = 0xae4de8u; esp -= 4; W32(esp, v); }
/* 85dc84: push 0xae4ddc */
  { uint32_t v = 0xae4ddcu; esp -= 4; W32(esp, v); }
/* 85dc89: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x85dc8fu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 85dc8f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_85dc92: /* 85dc92: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 85dc95: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 85dc97: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85dc98: jmp dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); SPILL(); call_ind(t); return; }
}

void f_85dcb0(void) {
  LOAD_REGS();
L_85dcb0: /* 85dcb0: mov eax, ecx */
  eax = ecx;
/* 85dcb2: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 85dcb8: ret  */
  esp += 4; SPILL(); return;
}

void f_85dcd0(void) {
  LOAD_REGS();
L_85dcd0: /* 85dcd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85dcd1: mov esi, ecx */
  esi = ecx;
/* 85dcd3: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 85dcd6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85dcd8: jne 0x85dcef */
  if (!zf) goto L_85dcef;
L_85dcda: /* 85dcda: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 85dcdc: push 0xae4d84 */
  { uint32_t v = 0xae4d84u; esp -= 4; W32(esp, v); }
/* 85dce1: push 0xae4d98 */
  { uint32_t v = 0xae4d98u; esp -= 4; W32(esp, v); }
/* 85dce6: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x85dcecu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 85dcec: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_85dcef: /* 85dcef: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 85dcf2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 85dcf4: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x85dcf7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85dcf7: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 85dcfa: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 85dcfc: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 85dcff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85dd00: ret  */
  esp += 4; SPILL(); return;
}

void f_85dd20(void) {
  LOAD_REGS();
L_85dd20: /* 85dd20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 85dd24: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85dd26: mov dword ptr [ecx + 0x18], eax */
  W32((uint32_t)(ecx + 0x18u), eax);
/* 85dd29: je 0x85dd35 */
  if (zf) goto L_85dd35;
L_85dd2b: /* 85dd2b: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 85dd2e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85dd2f: mov dword ptr [ecx + 0x14], eax */
  W32((uint32_t)(ecx + 0x14u), eax);
/* 85dd32: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
L_85dd35: /* 85dd35: ret 4 */
  esp += 8; SPILL(); return;
}

void f_85dd50(void) {
  LOAD_REGS();
L_85dd50: /* 85dd50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85dd51: mov esi, ecx */
  esi = ecx;
/* 85dd53: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 85dd56: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85dd58: mov dword ptr [esi], 0xa17a14 */
  W32((uint32_t)(esi), 0xa17a14u);
/* 85dd5e: je 0x85dd67 */
  if (zf) goto L_85dd67;
L_85dd60: /* 85dd60: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 85dd62: call 0x6c3251 */
  esp -= 4; W32(esp, 0x85dd67u); SPILL(); f_6c3251(); if (g_unwind) return; RELOAD();
L_85dd67: /* 85dd67: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85dd6c: je 0x85dd7b */
  if (zf) goto L_85dd7b;
L_85dd6e: /* 85dd6e: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 85dd73: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 85dd75: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 85dd77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85dd78: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x85dd7bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_85dd7b: /* 85dd7b: mov eax, esi */
  eax = esi;
/* 85dd7d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85dd7e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_85dda0(void) {
  LOAD_REGS();
L_85dda0: /* 85dda0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85dda1: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 85dda3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85dda5: je 0x85ddc8 */
  if (zf) goto L_85ddc8;
L_85dda7: /* 85dda7: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 85ddaa: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85ddac: mov dword ptr [esi], 0xa17a14 */
  W32((uint32_t)(esi), 0xa17a14u);
/* 85ddb2: je 0x85ddbb */
  if (zf) goto L_85ddbb;
L_85ddb4: /* 85ddb4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 85ddb6: call 0x6c3251 */
  esp -= 4; W32(esp, 0x85ddbbu); SPILL(); f_6c3251(); if (g_unwind) return; RELOAD();
L_85ddbb: /* 85ddbb: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 85ddc0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 85ddc2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 85ddc4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85ddc5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x85ddc8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_85ddc8: /* 85ddc8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85ddc9: ret  */
  esp += 4; SPILL(); return;
}

void f_85dde0(void) {
  LOAD_REGS();
L_85dde0: /* 85dde0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 85dde1: mov ebp, esp */
  ebp = esp;
/* 85dde3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 85dde5: push 0x9d41d0 */
  { uint32_t v = 0x9d41d0u; esp -= 4; W32(esp, v); }
/* 85ddea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 85ddf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85ddf1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 85ddf8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85ddfb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85ddfc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85ddfd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85ddfe: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 85de01: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 85de08: xor edi, edi */
  edi = 0;
L_85de0a: /* 85de0a: mov esi, dword ptr [0xcd522c] */
  esi = R32((uint32_t)(0xcd522cu));
L_85de10: /* 85de10: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85de12: je 0x85debc */
  if (zf) goto L_85debc;
L_85de18: /* 85de18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85de1a: mov ecx, esi */
  ecx = esi;
/* 85de1c: call 0x6cb163 */
  esp -= 4; W32(esp, 0x85de21u); SPILL(); f_6cb163(); if (g_unwind) return; RELOAD();
/* 85de21: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 85de24: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 85de25: mov eax, ecx */
  eax = ecx;
/* 85de27: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 85de29: mov dword ptr [esi + 0x20], ecx */
  W32((uint32_t)(esi + 0x20u), ecx);
/* 85de2c: jg 0x85de81 */
  if ((!zf && sf == of)) goto L_85de81;
L_85de2e: /* 85de2e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85de30: je 0x85de3a */
  if (zf) goto L_85de3a;
L_85de32: /* 85de32: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 85de35: mov dword ptr [edi + 0x1c], eax */
  W32((uint32_t)(edi + 0x1cu), eax);
/* 85de38: jmp 0x85de43 */
  goto L_85de43;
L_85de3a: /* 85de3a: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 85de3d: mov dword ptr [0xcd522c], ecx */
  W32((uint32_t)(0xcd522cu), ecx);
L_85de43: /* 85de43: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 85de45: mov ecx, esi */
  ecx = esi;
/* 85de47: mov dword ptr [esi + 0x1c], 0 */
  W32((uint32_t)(esi + 0x1cu), 0x0u);
/* 85de4e: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x85de50u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85de50: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 85de53: mov ecx, dword ptr [ecx + 0x70] */
  ecx = R32((uint32_t)(ecx + 0x70u));
/* 85de56: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 85de58: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85de59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85de5a: call dword ptr [ebx + 0x7c] */
  { uint32_t t = R32((uint32_t)(ebx + 0x7cu)); esp -= 4; W32(esp, 0x85de5du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85de5d: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 85de60: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85de62: mov dword ptr [esi], 0xa17a14 */
  W32((uint32_t)(esi), 0xa17a14u);
/* 85de68: je 0x85de71 */
  if (zf) goto L_85de71;
L_85de6a: /* 85de6a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 85de6c: call 0x6c3251 */
  esp -= 4; W32(esp, 0x85de71u); SPILL(); f_6c3251(); if (g_unwind) return; RELOAD();
L_85de71: /* 85de71: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 85de77: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 85de79: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 85de7b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85de7c: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x85de7fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85de7f: mov esi, edi */
  esi = edi;
L_85de81: /* 85de81: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85de83: mov edi, esi */
  edi = esi;
/* 85de85: je 0x85de0a */
  if (zf) goto L_85de0a;
L_85de87: /* 85de87: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 85de8a: jmp 0x85de10 */
  goto L_85de10;
L_85debc: /* 85debc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 85debf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85dec0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85dec1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 85dec8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85dec9: mov esp, ebp */
  esp = ebp;
/* 85decb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85decc: ret  */
  esp += 4; SPILL(); return;
}

void f_85de8c(void) {
  LOAD_REGS();
L_85de8c: /* 85de8c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 85de8f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 85de94: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 85de97: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85de98: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 85de9b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85dea0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_85dea0(); return;
}

void f_85dea0(void) {
  LOAD_REGS();
L_85dea0: /* 85dea0: push 0xa17a40 */
  { uint32_t v = 0xa17a40u; esp -= 4; W32(esp, v); }
/* 85dea5: push 0xae4dc8 */
  { uint32_t v = 0xae4dc8u; esp -= 4; W32(esp, v); }
/* 85deaa: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x85deb0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 85deb0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85deb3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85deb5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85deb7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85debcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 85debc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 85debf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85dec0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85dec1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 85dec8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85dec9: mov esp, ebp */
  esp = ebp;
/* 85decb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85decc: ret  */
  esp += 4; SPILL(); return;
}

void f_85df10(void) {
  LOAD_REGS();
L_85df10: /* 85df10: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85df11: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 85df12: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85df13: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85df14: mov esi, ecx */
  esi = ecx;
/* 85df16: mov dword ptr [esi], 0xa17a14 */
  W32((uint32_t)(esi), 0xa17a14u);
/* 85df1c: mov ebp, dword ptr [0xcfa1b0] */
  ebp = R32((uint32_t)(0xcfa1b0u));
/* 85df22: mov ebx, dword ptr [ebp + 4] */
  ebx = R32((uint32_t)(ebp + 0x4u));
/* 85df25: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 85df28: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85df2a: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 85df2f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85df30: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85df31: call 0x99c910 */
  esp -= 4; W32(esp, 0x85df36u); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 85df36: add eax, 0xe1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 85df3b: mov ecx, 0 */
  ecx = 0x0u;
/* 85df40: adc edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 85df42: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 85df45: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 85df48: mov edi, dword ptr [0xcfa1b0] */
  edi = R32((uint32_t)(0xcfa1b0u));
/* 85df4e: adc ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 85df50: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 85df53: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 85df56: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 85df5a: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 85df5d: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 85df61: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85df62: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 85df65: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* 85df68: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 85df6b: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 85df6e: mov dword ptr [esi + 0x20], ecx */
  W32((uint32_t)(esi + 0x20u), ecx);
/* 85df71: mov eax, esi */
  eax = esi;
/* 85df73: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85df74: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85df75: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85df76: ret 8 */
  esp += 12; SPILL(); return;
}

void f_85dfa0(void) {
  LOAD_REGS();
L_85dfa0: /* 85dfa0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 85dfa1: mov ebp, esp */
  ebp = esp;
/* 85dfa3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 85dfa5: push 0x9d41e0 */
  { uint32_t v = 0x9d41e0u; esp -= 4; W32(esp, v); }
/* 85dfaa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 85dfb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85dfb1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 85dfb8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85dfbb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 85dfbe: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 85dfc0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85dfc1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85dfc2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85dfc3: xor edi, edi */
  edi = 0;
/* 85dfc5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 85dfc8: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 85dfcb: mov dword ptr [ebp - 0x14], 0x7fffffff */
  W32((uint32_t)(ebp + 0xffffffecu), 0x7fffffffu);
/* 85dfd2: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x85dfd5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85dfd5: mov esi, dword ptr [0xcd522c] */
  esi = R32((uint32_t)(0xcd522cu));
/* 85dfdb: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 85dfde: mov edi, edi */
  edi = edi;
L_85dfe0: /* 85dfe0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85dfe2: je 0x85e015 */
  if (zf) goto L_85e015;
L_85dfe4: /* 85dfe4: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 85dfe6: mov ebx, dword ptr [esi + 0x18] */
  ebx = R32((uint32_t)(esi + 0x18u));
/* 85dfe9: mov ecx, esi */
  ecx = esi;
/* 85dfeb: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x85dfeeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85dfee: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 85dff1: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85dff3: jl 0x85e009 */
  if ((sf != of)) goto L_85e009;
L_85dff5: /* 85dff5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85dff7: jne 0x85e00e */
  if (!zf) goto L_85e00e;
L_85dff9: /* 85dff9: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 85dffb: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85dffd: je 0x85e004 */
  if (zf) goto L_85e004;
L_85dfff: /* 85dfff: cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85e002: jge 0x85e009 */
  if ((sf == of)) goto L_85e009;
L_85e004: /* 85e004: mov edi, esi */
  edi = esi;
/* 85e006: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_85e009: /* 85e009: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 85e00c: jmp 0x85dfe0 */
  goto L_85dfe0;
L_85e00e: /* 85e00e: cmp ebx, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85e011: jne 0x85e009 */
  if (!zf) goto L_85e009;
L_85e013: /* 85e013: mov edi, esi */
  edi = esi;
L_85e015: /* 85e015: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85e017: jne 0x85e04c */
  if (!zf) goto L_85e04c;
L_85e019: /* 85e019: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 85e01e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 85e020: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 85e022: push 0xae4da8 */
  { uint32_t v = 0xae4da8u; esp -= 4; W32(esp, v); }
/* 85e027: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 85e029: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x85e02bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85e02b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85e02d: je 0x85e043 */
  if (zf) goto L_85e043;
L_85e02f: /* 85e02f: mov ecx, dword ptr [0xcd522c] */
  ecx = R32((uint32_t)(0xcd522cu));
/* 85e035: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 85e038: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85e039: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85e03a: mov ecx, eax */
  ecx = eax;
/* 85e03c: call 0x6c72e3 */
  esp -= 4; W32(esp, 0x85e041u); SPILL(); f_6c72e3(); if (g_unwind) return; RELOAD();
/* 85e041: jmp 0x85e045 */
  goto L_85e045;
L_85e043: /* 85e043: xor eax, eax */
  eax = 0;
L_85e045: /* 85e045: mov dword ptr [0xcd522c], eax */
  W32((uint32_t)(0xcd522cu), eax);
/* 85e04a: mov edi, eax */
  edi = eax;
L_85e04c: /* 85e04c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 85e04f: mov eax, edi */
  eax = edi;
/* 85e051: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85e052: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85e053: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 85e05a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85e05b: mov esp, ebp */
  esp = ebp;
/* 85e05d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85e05e: ret  */
  esp += 4; SPILL(); return;
}

void f_85e05f(void) {
  LOAD_REGS();
L_85e05f: /* 85e05f: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85e062: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 85e067: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 85e06a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85e06b: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 85e06e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85e073u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_85e073(); return;
}

void f_85e073(void) {
  LOAD_REGS();
L_85e073: /* 85e073: push 0xa17a6c */
  { uint32_t v = 0xa17a6cu; esp -= 4; W32(esp, v); }
/* 85e078: push 0xae4dc0 */
  { uint32_t v = 0xae4dc0u; esp -= 4; W32(esp, v); }
/* 85e07d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x85e083u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 85e083: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85e086: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85e088: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85e08a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85e08fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_85e08f: guest_badaddr(0x85e08f); return;
}

void f_85e0d0(void) {
  LOAD_REGS();
L_85e0d0: /* 85e0d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 85e0d1: mov ebp, esp */
  ebp = esp;
/* 85e0d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 85e0d5: push 0x9d41f0 */
  { uint32_t v = 0x9d41f0u; esp -= 4; W32(esp, v); }
/* 85e0da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 85e0e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85e0e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 85e0e8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85e0eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85e0ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85e0ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85e0ee: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 85e0f1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 85e0f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85e0f5: mov esi, ecx */
  esi = ecx;
/* 85e0f7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 85e0fe: call dword ptr [0xcfa29c] */
  esp -= 4; W32(esp, 0x85e104u); SPILL(); f_4e1519(); if (g_unwind) return; /* Core!?Serialize@UObject@@UAEXAAVFArchive@@@Z */ RELOAD();
/* 85e104: add esi, 0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 85e107: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85e108: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85e109: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x85e10fu); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 85e10f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 85e112: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85e115: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85e116: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85e117: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 85e11e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85e11f: mov esp, ebp */
  esp = ebp;
/* 85e121: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85e122: ret 4 */
  esp += 8; SPILL(); return;
}

void f_85e125(void) {
  LOAD_REGS();
L_85e125: /* 85e125: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 85e128: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 85e12d: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 85e130: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85e131: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 85e134: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85e139u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_85e139(); return;
}

void f_85e139(void) {
  LOAD_REGS();
L_85e139: /* 85e139: push 0xa17a90 */
  { uint32_t v = 0xa17a90u; esp -= 4; W32(esp, v); }
/* 85e13e: push 0xae4f84 */
  { uint32_t v = 0xae4f84u; esp -= 4; W32(esp, v); }
/* 85e143: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x85e149u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 85e149: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85e14c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85e14e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85e150: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85e155u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_85e155: guest_badaddr(0x85e155); return;
}

void f_85e190(void) {
  LOAD_REGS();
L_85e190: /* 85e190: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 85e194: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 85e196: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85e197: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x85e19du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 85e19d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_85e1b0(void) {
  LOAD_REGS();
L_85e1b0: /* 85e1b0: mov eax, ecx */
  eax = ecx;
/* 85e1b2: ret  */
  esp += 4; SPILL(); return;
}

void f_85e1d0(void) {
  LOAD_REGS();
L_85e1d0: /* 85e1d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 85e1d1: mov ebp, esp */
  ebp = esp;
/* 85e1d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 85e1d5: push 0x9d4200 */
  { uint32_t v = 0x9d4200u; esp -= 4; W32(esp, v); }
/* 85e1da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 85e1e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85e1e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 85e1e8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85e1eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85e1ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85e1ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85e1ee: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 85e1f1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 85e1f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85e1f5: mov esi, ecx */
  esi = ecx;
/* 85e1f7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 85e1fe: call 0x6c3d2d */
  esp -= 4; W32(esp, 0x85e203u); SPILL(); f_6c3d2d(); if (g_unwind) return; RELOAD();
/* 85e203: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 85e206: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85e207: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85e208: call 0x6c67cb */
  esp -= 4; W32(esp, 0x85e20du); SPILL(); f_6c67cb(); if (g_unwind) return; RELOAD();
/* 85e20d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 85e210: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85e213: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85e214: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85e215: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 85e21c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85e21d: mov esp, ebp */
  esp = ebp;
/* 85e21f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85e220: ret 4 */
  esp += 8; SPILL(); return;
}

void f_85e223(void) {
  LOAD_REGS();
L_85e223: /* 85e223: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 85e226: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 85e22b: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 85e22e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85e22f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 85e232: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85e237u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_85e237(); return;
}

void f_85e237(void) {
  LOAD_REGS();
L_85e237: /* 85e237: push 0xa17ad0 */
  { uint32_t v = 0xa17ad0u; esp -= 4; W32(esp, v); }
/* 85e23c: push 0xae4f8c */
  { uint32_t v = 0xae4f8cu; esp -= 4; W32(esp, v); }
/* 85e241: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x85e247u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 85e247: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85e24a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85e24c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85e24e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85e253u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_85e253: guest_badaddr(0x85e253); return;
}

void f_85e290(void) {
  LOAD_REGS();
L_85e290: /* 85e290: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 85e291: mov ebp, esp */
  ebp = esp;
/* 85e293: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 85e295: push 0x9d4210 */
  { uint32_t v = 0x9d4210u; esp -= 4; W32(esp, v); }
/* 85e29a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 85e2a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85e2a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 85e2a8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85e2ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85e2ac: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 85e2af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85e2b0: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 85e2b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85e2b4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 85e2b7: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 85e2b9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85e2ba: mov ecx, esi */
  ecx = esi;
/* 85e2bc: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 85e2c3: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x85e2c9u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 85e2c9: mov ecx, ebx */
  ecx = ebx;
/* 85e2cb: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x85e2d1u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 85e2d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85e2d3: je 0x85e325 */
  if (zf) goto L_85e325;
L_85e2d5: /* 85e2d5: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 85e2d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85e2d9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85e2da: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x85e2e0u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 85e2e0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85e2e3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85e2e6: xor eax, eax */
  eax = 0;
L_85e2e8: /* 85e2e8: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85e2eb: jge 0x85e2f0 */
  if ((sf == of)) goto L_85e2f0;
L_85e2ed: /* 85e2ed: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85e2ee: jmp 0x85e2e8 */
  goto L_85e2e8;
L_85e2f0: /* 85e2f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85e2f1: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 85e2f3: mov ecx, esi */
  ecx = esi;
/* 85e2f5: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x85e2fbu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 85e2fb: xor edi, edi */
  edi = 0;
/* 85e2fd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_85e300: /* 85e300: cmp edi, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85e303: jge 0x85e350 */
  if ((sf == of)) goto L_85e350;
L_85e305: /* 85e305: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 85e307: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 85e309: mov ecx, esi */
  ecx = esi;
/* 85e30b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x85e311u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 85e311: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 85e313: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 85e316: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 85e318: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85e319: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85e31a: call 0x6ca6d2 */
  esp -= 4; W32(esp, 0x85e31fu); SPILL(); f_6ca6d2(); if (g_unwind) return; RELOAD();
/* 85e31f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85e322: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 85e323: jmp 0x85e300 */
  goto L_85e300;
L_85e325: /* 85e325: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 85e328: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85e329: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85e32a: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x85e330u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 85e330: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85e333: xor edi, edi */
  edi = 0;
L_85e335: /* 85e335: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85e338: jge 0x85e350 */
  if ((sf == of)) goto L_85e350;
L_85e33a: /* 85e33a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 85e33c: mov ecx, edi */
  ecx = edi;
/* 85e33e: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 85e341: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 85e343: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85e344: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85e345: call 0x6ca6d2 */
  esp -= 4; W32(esp, 0x85e34au); SPILL(); f_6ca6d2(); if (g_unwind) return; RELOAD();
/* 85e34a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85e34d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 85e34e: jmp 0x85e335 */
  goto L_85e335;
L_85e350: /* 85e350: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 85e353: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85e354: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85e355: mov eax, ebx */
  eax = ebx;
/* 85e357: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 85e35e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85e35f: mov esp, ebp */
  esp = ebp;
/* 85e361: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85e362: ret  */
  esp += 4; SPILL(); return;
}

void f_85e363(void) {
  LOAD_REGS();
L_85e363: /* 85e363: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 85e366: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 85e36b: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 85e36e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85e36f: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 85e372: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85e377u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_85e377(); return;
}

void f_85e377(void) {
  LOAD_REGS();
L_85e377: /* 85e377: push 0xa17b0c */
  { uint32_t v = 0xa17b0cu; esp -= 4; W32(esp, v); }
/* 85e37c: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 85e381: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x85e387u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 85e387: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85e38a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85e38c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85e38e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85e393u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_85e393: guest_badaddr(0x85e393); return;
}

void f_85e3f0(void) {
  LOAD_REGS();
L_85e3f0: /* 85e3f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 85e3f1: mov ebp, esp */
  ebp = esp;
/* 85e3f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 85e3f5: push 0x9d4220 */
  { uint32_t v = 0x9d4220u; esp -= 4; W32(esp, v); }
/* 85e3fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 85e400: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85e401: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 85e408: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85e40b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85e40c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85e40d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85e40e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 85e411: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 85e414: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85e415: mov esi, ecx */
  esi = ecx;
/* 85e417: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 85e41e: call 0x6c3d2d */
  esp -= 4; W32(esp, 0x85e423u); SPILL(); f_6c3d2d(); if (g_unwind) return; RELOAD();
/* 85e423: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 85e426: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85e427: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85e428: call 0x6c5a5b */
  esp -= 4; W32(esp, 0x85e42du); SPILL(); f_6c5a5b(); if (g_unwind) return; RELOAD();
/* 85e42d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 85e430: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85e433: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85e434: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85e435: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 85e43c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85e43d: mov esp, ebp */
  esp = ebp;
/* 85e43f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85e440: ret 4 */
  esp += 8; SPILL(); return;
}

void f_85e443(void) {
  LOAD_REGS();
L_85e443: /* 85e443: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 85e446: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 85e44b: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 85e44e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85e44f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 85e452: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85e457u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_85e457(); return;
}

void f_85e457(void) {
  LOAD_REGS();
L_85e457: /* 85e457: push 0xa17b24 */
  { uint32_t v = 0xa17b24u; esp -= 4; W32(esp, v); }
/* 85e45c: push 0xae4f94 */
  { uint32_t v = 0xae4f94u; esp -= 4; W32(esp, v); }
/* 85e461: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x85e467u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 85e467: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85e46a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85e46c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85e46e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85e473u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_85e473: guest_badaddr(0x85e473); return;
}

void f_85e4b0(void) {
  LOAD_REGS();
L_85e4b0: /* 85e4b0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 85e4b4: mov eax, ecx */
  eax = ecx;
/* 85e4b6: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 85e4ba: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 85e4bd: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 85e4c0: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 85e4c4: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 85e4c7: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 85e4c9: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 85e4cd: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 85e4d0: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 85e4d4: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 85e4d7: mov cx, word ptr [esp + 0x18] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x18u))) & 0xffffu);
/* 85e4dc: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 85e4e0: mov dword ptr [eax], 0xa17b60 */
  W32((uint32_t)(eax), 0xa17b60u);
/* 85e4e6: mov word ptr [eax + 0x28], cx */
  W16((uint32_t)(eax + 0x28u), (ecx & 0xffffu));
/* 85e4ea: mov dword ptr [eax + 0x2c], edx */
  W32((uint32_t)(eax + 0x2cu), edx);
/* 85e4ed: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_85e500(void) {
  LOAD_REGS();
L_85e500: /* 85e500: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 85e503: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* 85e506: ret  */
  esp += 4; SPILL(); return;
}

void f_85e520(void) {
  LOAD_REGS();
L_85e520: /* 85e520: mov eax, 1 */
  eax = 0x1u;
/* 85e525: ret  */
  esp += 4; SPILL(); return;
}

void f_85e540(void) {
  LOAD_REGS();
L_85e540: /* 85e540: mov eax, 2 */
  eax = 0x2u;
/* 85e545: ret  */
  esp += 4; SPILL(); return;
}

void f_85e560(void) {
  LOAD_REGS();
L_85e560: /* 85e560: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 85e563: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 85e566: mov edx, dword ptr [eax + 0x54] */
  edx = R32((uint32_t)(eax + 0x54u));
/* 85e569: lea ecx, [ecx + ecx*4] */
  ecx = (uint32_t)(ecx + ecx*4);
/* 85e56c: movzx eax, word ptr [edx + ecx*4 + 0xe] */
  eax = (uint32_t)(R16((uint32_t)(edx + ecx*4 + 0xeu)));
/* 85e571: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 85e574: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 85e576: ret  */
  esp += 4; SPILL(); return;
}

void f_85e590(void) {
  LOAD_REGS();
L_85e590: /* 85e590: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 85e594: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 85e598: mov edx, dword ptr [ecx + 0x54] */
  edx = R32((uint32_t)(ecx + 0x54u));
/* 85e59b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85e59c: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 85e59f: cmp word ptr [edx + eax*4 + 0x10], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edx + eax*4 + 0x10u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 85e5a5: lea esi, [edx + eax*4] */
  esi = (uint32_t)(edx + eax*4);
/* 85e5a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85e5a9: jbe 0x85e5e7 */
  if ((cf | zf)) goto L_85e5e7;
L_85e5ab: /* 85e5ab: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 85e5af: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 85e5b3: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 85e5b5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85e5b7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85e5b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85e5bb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85e5bc: mov ecx, edi */
  ecx = edi;
/* 85e5be: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x85e5c1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85e5c1: movzx eax, word ptr [esi + 0xc] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0xcu)));
/* 85e5c5: movzx ecx, word ptr [esi + 0xa] */
  ecx = (uint32_t)(R16((uint32_t)(esi + 0xau)));
/* 85e5c9: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 85e5cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85e5cc: movzx eax, word ptr [esi + 0x10] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0x10u)));
/* 85e5d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85e5d1: movzx ecx, word ptr [esi + 8] */
  ecx = (uint32_t)(R16((uint32_t)(esi + 0x8u)));
/* 85e5d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85e5d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85e5d7: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 85e5da: xor eax, eax */
  eax = 0;
/* 85e5dc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85e5de: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 85e5e1: mov ecx, edi */
  ecx = edi;
/* 85e5e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85e5e4: call dword ptr [edx + 0x5c] */
  { uint32_t t = R32((uint32_t)(edx + 0x5cu)); esp -= 4; W32(esp, 0x85e5e7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_85e5e7: /* 85e5e7: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 85e5ec: mov ecx, dword ptr [0xce8418] */
  ecx = R32((uint32_t)(0xce8418u));
/* 85e5f2: inc dword ptr [eax + ecx*4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + ecx*4), r);
  }
/* 85e5f5: movzx edx, word ptr [esi + 0xe] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0xeu)));
/* 85e5f9: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 85e5fe: mov ecx, dword ptr [0xce841c] */
  ecx = R32((uint32_t)(0xce841cu));
/* 85e604: add dword ptr [eax + ecx*4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + ecx*4), r);
  }
/* 85e607: movzx edx, word ptr [esi + 0xe] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0xeu)));
/* 85e60b: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 85e610: mov ecx, dword ptr [0xce8424] */
  ecx = R32((uint32_t)(0xce8424u));
/* 85e616: mov esi, dword ptr [eax + ecx*4] */
  esi = R32((uint32_t)(eax + ecx*4));
/* 85e619: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 85e61b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85e61c: mov dword ptr [eax + ecx*4], esi */
  W32((uint32_t)(eax + ecx*4), esi);
/* 85e61f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85e620: ret  */
  esp += 4; SPILL(); return;
}

void f_85e660(void) {
  LOAD_REGS();
L_85e660: /* 85e660: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 85e664: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 85e668: mov edx, dword ptr [ecx + 0x54] */
  edx = R32((uint32_t)(ecx + 0x54u));
/* 85e66b: sub esp, 0x64 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85e66e: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 85e671: cmp word ptr [edx + eax*4 + 0x10], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edx + eax*4 + 0x10u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 85e677: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85e678: lea ebx, [edx + eax*4] */
  ebx = (uint32_t)(edx + eax*4);
/* 85e67b: jbe 0x85e844 */
  if ((cf | zf)) goto L_85e844;
L_85e681: /* 85e681: mov ecx, dword ptr [esp + 0x7c] */
  ecx = R32((uint32_t)(esp + 0x7cu));
/* 85e685: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 85e686: mov ebp, dword ptr [esp + 0x84] */
  ebp = R32((uint32_t)(esp + 0x84u));
/* 85e68d: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 85e690: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85e691: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85e692: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85e694: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85e696: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85e698: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85e699: mov ecx, ebp */
  ecx = ebp;
/* 85e69b: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x85e69eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85e69e: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 85e6a0: mov edx, dword ptr [esp + 0x7c] */
  edx = R32((uint32_t)(esp + 0x7cu));
/* 85e6a4: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 85e6a8: mov eax, dword ptr [esp + 0x78] */
  eax = R32((uint32_t)(esp + 0x78u));
/* 85e6ac: fld dword ptr [eax + 0x198] */
  { double v = F32((uint32_t)(eax + 0x198u)); FPUSH(v); }
/* 85e6b2: mov ecx, dword ptr [eax + 0x194] */
  ecx = R32((uint32_t)(eax + 0x194u));
/* 85e6b8: add edx, 0x48 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 85e6bb: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 85e6bf: fld dword ptr [eax + 0x19c] */
  { double v = F32((uint32_t)(eax + 0x19cu)); FPUSH(v); }
/* 85e6c5: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 85e6c9: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 85e6cd: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 85e6d1: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 85e6d5: mov dword ptr [esp + 0x28], 0x3f800000 */
  W32((uint32_t)(esp + 0x28u), 0x3f800000u);
/* 85e6dd: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 85e6e1: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 85e6e5: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 85e6e9: lea edi, [esp + 0x2c] */
  edi = (uint32_t)(esp + 0x2cu);
/* 85e6ed: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 85e6ef: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 85e6f1: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 85e6f3: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 85e6f6: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 85e6f8: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 85e6fb: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 85e6fd: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 85e700: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 85e703: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 85e706: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 85e709: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 85e70c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 85e70f: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 85e712: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 85e715: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 85e718: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 85e71a: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 85e71c: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85e71e: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85e720: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85e722: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 85e725: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 85e728: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 85e72b: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 85e72e: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 85e731: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 85e734: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 85e737: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 85e73a: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 85e73c: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 85e73e: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85e740: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85e742: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85e744: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 85e747: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 85e74a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 85e74d: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 85e750: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 85e753: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 85e756: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 85e759: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 85e75c: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 85e75e: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 85e760: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85e762: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85e764: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85e766: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 85e768: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 85e76a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85e76c: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 85e76f: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 85e772: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 85e775: mov ecx, dword ptr [esp + 0x84] */
  ecx = R32((uint32_t)(esp + 0x84u));
/* 85e77c: mov eax, dword ptr [esp + 0x80] */
  eax = R32((uint32_t)(esp + 0x80u));
/* 85e783: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 85e787: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 85e78b: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 85e78f: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 85e793: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 85e797: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 85e79b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85e79d: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 85e7a1: mov dword ptr [esp + 0x4c], edx */
  W32((uint32_t)(esp + 0x4cu), edx);
/* 85e7a5: mov dx, word ptr [ebx + 0xa] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + 0xau))) & 0xffffu);
/* 85e7a9: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* 85e7ad: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 85e7b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85e7b1: mov ecx, ebp */
  ecx = ebp;
/* 85e7b3: mov dword ptr [esp + 0x44], 0xa17b60 */
  W32((uint32_t)(esp + 0x44u), 0xa17b60u);
/* 85e7bb: mov word ptr [esp + 0x6c], dx */
  W16((uint32_t)(esp + 0x6cu), (edx & 0xffffu));
/* 85e7c0: mov dword ptr [esp + 0x70], 0 */
  W32((uint32_t)(esp + 0x70u), 0x0u);
/* 85e7c8: call dword ptr [eax + 0x58] */
  { uint32_t t = R32((uint32_t)(eax + 0x58u)); esp -= 4; W32(esp, 0x85e7cbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85e7cb: mov ecx, dword ptr [0xce840c] */
  ecx = R32((uint32_t)(0xce840cu));
/* 85e7d1: mov esi, eax */
  esi = eax;
/* 85e7d3: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 85e7d8: inc dword ptr [eax + ecx*4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + ecx*4), r);
  }
/* 85e7db: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 85e7e0: mov ecx, dword ptr [0xce8410] */
  ecx = R32((uint32_t)(0xce8410u));
/* 85e7e6: mov edi, dword ptr [eax + ecx*4] */
  edi = R32((uint32_t)(eax + ecx*4));
/* 85e7e9: movzx edx, word ptr [ebx + 0xe] */
  edx = (uint32_t)(R16((uint32_t)(ebx + 0xeu)));
/* 85e7ed: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85e7ef: mov dword ptr [eax + ecx*4], edi */
  W32((uint32_t)(eax + ecx*4), edi);
/* 85e7f2: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 85e7f7: mov ecx, dword ptr [0xce8414] */
  ecx = R32((uint32_t)(0xce8414u));
/* 85e7fd: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 85e800: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 85e802: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 85e804: sub eax, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 85e808: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 85e80a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 85e80c: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 85e811: mov ecx, dword ptr [0xce8424] */
  ecx = R32((uint32_t)(0xce8424u));
/* 85e817: movzx edx, word ptr [ebx + 0xe] */
  edx = (uint32_t)(R16((uint32_t)(ebx + 0xeu)));
/* 85e81b: add dword ptr [eax + ecx*4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + ecx*4), r);
  }
/* 85e81e: movzx ecx, word ptr [ebx + 0xc] */
  ecx = (uint32_t)(R16((uint32_t)(ebx + 0xcu)));
/* 85e822: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 85e825: movzx edx, word ptr [ebx + 0xa] */
  edx = (uint32_t)(R16((uint32_t)(ebx + 0xau)));
/* 85e829: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85e82a: movzx ecx, word ptr [ebx + 0x10] */
  ecx = (uint32_t)(R16((uint32_t)(ebx + 0x10u)));
/* 85e82e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85e82f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85e830: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85e831: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 85e834: xor edx, edx */
  edx = 0;
/* 85e836: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85e838: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 85e83b: mov ecx, ebp */
  ecx = ebp;
/* 85e83d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85e83e: call dword ptr [eax + 0x5c] */
  { uint32_t t = R32((uint32_t)(eax + 0x5cu)); esp -= 4; W32(esp, 0x85e841u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85e841: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85e842: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85e843: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_85e844: /* 85e844: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85e845: add esp, 0x64 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85e848: ret  */
  esp += 4; SPILL(); return;
}

void f_85e8d0(void) {
  LOAD_REGS();
L_85e8d0: /* 85e8d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 85e8d1: mov ebp, esp */
  ebp = esp;
/* 85e8d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 85e8d5: push 0x9d4230 */
  { uint32_t v = 0x9d4230u; esp -= 4; W32(esp, v); }
/* 85e8da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 85e8e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85e8e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 85e8e8: sub esp, 0x70 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85e8eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85e8ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85e8ed: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 85e8f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85e8f1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 85e8f4: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 85e8f7: push 0xcc9ad8 */
  { uint32_t v = 0xcc9ad8u; esp -= 4; W32(esp, v); }
/* 85e8fc: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 85e8ff: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 85e906: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x85e90cu); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 85e90c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85e90f: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 85e912: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 85e915: mov edx, dword ptr [eax + 0x54] */
  edx = R32((uint32_t)(eax + 0x54u));
/* 85e918: lea ecx, [ecx + ecx*4] */
  ecx = (uint32_t)(ecx + ecx*4);
/* 85e91b: lea ebx, [edx + ecx*4] */
  ebx = (uint32_t)(edx + ecx*4);
/* 85e91e: movzx ecx, word ptr [ebx + 8] */
  ecx = (uint32_t)(R16((uint32_t)(ebx + 0x8u)));
/* 85e922: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85e923: lea ecx, [eax + 0xc4] */
  ecx = (uint32_t)(eax + 0xc4u);
/* 85e929: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x85e92fu); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 85e92f: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85e932: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 85e935: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 85e938: mov ecx, dword ptr [eax + 0x64] */
  ecx = R32((uint32_t)(eax + 0x64u));
/* 85e93b: movzx eax, word ptr [ebx + 0xe] */
  eax = (uint32_t)(R16((uint32_t)(ebx + 0xeu)));
/* 85e93f: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 85e941: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 85e944: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 85e947: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85e948: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 85e94d: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x85e953u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 85e953: xor ecx, ecx */
  ecx = 0;
/* 85e955: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 85e958: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 85e95b: jmp 0x85e960 */
  goto L_85e960;
L_85e960: /* 85e960: movzx edx, word ptr [ebx + 0xe] */
  edx = (uint32_t)(R16((uint32_t)(ebx + 0xeu)));
/* 85e964: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85e966: jge 0x85eaa8 */
  if ((sf == of)) goto L_85eaa8;
L_85e96c: /* 85e96c: mov edi, dword ptr [ebp - 0x34] */
  edi = R32((uint32_t)(ebp + 0xffffffccu));
/* 85e96f: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 85e972: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 85e975: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 85e977: movzx ecx, word ptr [edi + edx*2] */
  ecx = (uint32_t)(R16((uint32_t)(edi + edx*2)));
/* 85e97b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 85e97e: lea edi, [edi + edx*2] */
  edi = (uint32_t)(edi + edx*2);
/* 85e981: movzx edx, word ptr [edi + 2] */
  edx = (uint32_t)(R16((uint32_t)(edi + 0x2u)));
/* 85e985: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 85e988: movzx ecx, word ptr [edi + 4] */
  ecx = (uint32_t)(R16((uint32_t)(edi + 0x4u)));
/* 85e98c: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 85e98f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85e992: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 85e995: movzx eax, word ptr [edi] */
  eax = (uint32_t)(R16((uint32_t)(edi)));
/* 85e998: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 85e99b: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85e99e: lea eax, [eax + edx*8] */
  eax = (uint32_t)(eax + edx*8);
/* 85e9a1: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 85e9a4: fsub dword ptr [ecx + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x14u)));
/* 85e9a7: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 85e9aa: fsub dword ptr [ecx + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x10u)));
/* 85e9ad: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 85e9af: fsub dword ptr [ecx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xcu)));
/* 85e9b2: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 85e9b5: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 85e9b8: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 85e9bb: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 85e9be: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x85e9c4u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 85e9c4: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 85e9c7: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 85e9ca: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 85e9cd: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 85e9d0: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 85e9d3: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 85e9d6: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 85e9d9: frndint  */
  ST0 = fpu_round(ST0);
/* 85e9db: fistp dword ptr [edx] */
  W32((uint32_t)(edx), (uint32_t)fpu_toint32(ST0)); FPOP();
/* 85e9dd: movzx eax, word ptr [edi + 2] */
  eax = (uint32_t)(R16((uint32_t)(edi + 0x2u)));
/* 85e9e1: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85e9e4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85e9e7: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 85e9ea: lea eax, [edx + eax*8] */
  eax = (uint32_t)(edx + eax*8);
/* 85e9ed: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 85e9f0: fsub dword ptr [ecx + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x14u)));
/* 85e9f3: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 85e9f6: fsub dword ptr [ecx + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x10u)));
/* 85e9f9: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 85e9fb: fsub dword ptr [ecx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xcu)));
/* 85e9fe: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 85ea01: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 85ea04: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 85ea07: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 85ea0a: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x85ea10u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 85ea10: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 85ea13: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 85ea16: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 85ea19: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 85ea1c: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 85ea1f: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 85ea22: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 85ea25: frndint  */
  ST0 = fpu_round(ST0);
/* 85ea27: fistp dword ptr [edx] */
  W32((uint32_t)(edx), (uint32_t)fpu_toint32(ST0)); FPOP();
/* 85ea29: movzx eax, word ptr [edi + 4] */
  eax = (uint32_t)(R16((uint32_t)(edi + 0x4u)));
/* 85ea2d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85ea30: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 85ea33: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85ea36: lea eax, [eax + edx*8] */
  eax = (uint32_t)(eax + edx*8);
/* 85ea39: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 85ea3c: fsub dword ptr [ecx + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x14u)));
/* 85ea3f: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 85ea42: fsub dword ptr [ecx + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x10u)));
/* 85ea45: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 85ea47: fsub dword ptr [ecx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xcu)));
/* 85ea4a: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 85ea4d: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 85ea50: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 85ea53: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 85ea56: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x85ea5cu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 85ea5c: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 85ea5f: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 85ea62: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 85ea65: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 85ea68: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 85ea6b: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 85ea6e: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 85ea71: frndint  */
  ST0 = fpu_round(ST0);
/* 85ea73: fistp dword ptr [edx] */
  W32((uint32_t)(edx), (uint32_t)fpu_toint32(ST0)); FPOP();
/* 85ea75: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 85ea78: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 85ea7b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85ea7d: jge 0x85ea81 */
  if ((sf == of)) goto L_85ea81;
L_85ea7f: /* 85ea7f: mov eax, ecx */
  eax = ecx;
L_85ea81: /* 85ea81: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85ea84: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85ea86: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 85ea89: jge 0x85ea8e */
  if ((sf == of)) goto L_85ea8e;
L_85ea8b: /* 85ea8b: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
L_85ea8e: /* 85ea8e: fild dword ptr [ebp - 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 85ea91: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 85ea94: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 85ea96: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 85ea99: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85ea9a: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 85ea9d: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 85eaa0: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 85eaa3: jmp 0x85e960 */
  goto L_85e960;
L_85eaa8: /* 85eaa8: movzx ecx, word ptr [ebx + 0xe] */
  ecx = (uint32_t)(R16((uint32_t)(ebx + 0xeu)));
/* 85eaac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85eaad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85eaae: call 0x6c4cf0 */
  esp -= 4; W32(esp, 0x85eab3u); SPILL(); f_6c4cf0(); if (g_unwind) return; RELOAD();
/* 85eab3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85eab6: xor ecx, ecx */
  ecx = 0;
/* 85eab8: jmp 0x85eac0 */
  goto L_85eac0;
L_85eac0: /* 85eac0: movzx edx, word ptr [ebx + 0xe] */
  edx = (uint32_t)(R16((uint32_t)(ebx + 0xeu)));
/* 85eac4: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85eac6: jge 0x85eb54 */
  if ((sf == of)) goto L_85eb54;
L_85eacc: /* 85eacc: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85eacf: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 85ead2: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 85ead5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85ead7: mov eax, ecx */
  eax = ecx;
/* 85ead9: je 0x85eb0b */
  if (zf) goto L_85eb0b;
L_85eadb: /* 85eadb: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 85eade: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 85eae0: mov di, word ptr [eax + 0xc] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0xcu))) & 0xffffu);
/* 85eae4: add di, word ptr [edx + 0x28] */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(edx + 0x28u)));
  uint16_t r = (uint16_t)(a + b);
  edi = (edi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 85eae8: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 85eaeb: sub di, word ptr [ebx + 0xa] */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebx + 0xau)));
  uint16_t r = (uint16_t)(a - b);
  edi = (edi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 85eaef: mov word ptr [esi - 2], di */
  W16((uint32_t)(esi + 0xfffffffeu), (edi & 0xffffu));
/* 85eaf3: mov dx, word ptr [eax + 8] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x8u))) & 0xffffu);
/* 85eaf7: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 85eafa: add dx, word ptr [edi + 0x28] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(edi + 0x28u)));
  uint16_t r = (uint16_t)(a + b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 85eafe: sub dx, word ptr [ebx + 0xa] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebx + 0xau)));
  uint16_t r = (uint16_t)(a - b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 85eb02: mov word ptr [esi], dx */
  W16((uint32_t)(esi), (edx & 0xffffu));
/* 85eb05: mov ax, word ptr [eax + 4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x4u))) & 0xffffu);
/* 85eb09: jmp 0x85eb39 */
  goto L_85eb39;
L_85eb0b: /* 85eb0b: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 85eb0e: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 85eb10: mov di, word ptr [eax + 4] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x4u))) & 0xffffu);
/* 85eb14: add di, word ptr [edx + 0x28] */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(edx + 0x28u)));
  uint16_t r = (uint16_t)(a + b);
  edi = (edi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 85eb18: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 85eb1b: sub di, word ptr [ebx + 0xa] */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebx + 0xau)));
  uint16_t r = (uint16_t)(a - b);
  edi = (edi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 85eb1f: mov word ptr [esi - 2], di */
  W16((uint32_t)(esi + 0xfffffffeu), (edi & 0xffffu));
/* 85eb23: mov dx, word ptr [eax + 8] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x8u))) & 0xffffu);
/* 85eb27: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 85eb2a: add dx, word ptr [edi + 0x28] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(edi + 0x28u)));
  uint16_t r = (uint16_t)(a + b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 85eb2e: sub dx, word ptr [ebx + 0xa] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebx + 0xau)));
  uint16_t r = (uint16_t)(a - b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 85eb32: mov word ptr [esi], dx */
  W16((uint32_t)(esi), (edx & 0xffffu));
/* 85eb35: mov ax, word ptr [eax + 0xc] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0xcu))) & 0xffffu);
L_85eb39: /* 85eb39: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85eb3c: add ax, word ptr [edx + 0x28] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(edx + 0x28u)));
  uint16_t r = (uint16_t)(a + b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 85eb40: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 85eb43: sub ax, word ptr [ebx + 0xa] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebx + 0xau)));
  uint16_t r = (uint16_t)(a - b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 85eb47: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 85eb4a: mov word ptr [esi - 2], ax */
  W16((uint32_t)(esi + 0xfffffffeu), (eax & 0xffffu));
/* 85eb4e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 85eb4f: jmp 0x85eac0 */
  goto L_85eac0;
L_85eb54: /* 85eb54: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 85eb57: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x85eb5du); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 85eb5d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 85eb60: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85eb61: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85eb62: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 85eb69: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85eb6a: mov esp, ebp */
  esp = ebp;
/* 85eb6c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85eb6d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_85e95d(void) {
  LOAD_REGS();
L_85e95d: /* 85e95d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_85e960: /* 85e960: movzx edx, word ptr [ebx + 0xe] */
  edx = (uint32_t)(R16((uint32_t)(ebx + 0xeu)));
/* 85e964: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85e966: jge 0x85eaa8 */
  if ((sf == of)) goto L_85eaa8;
L_85e96c: /* 85e96c: mov edi, dword ptr [ebp - 0x34] */
  edi = R32((uint32_t)(ebp + 0xffffffccu));
/* 85e96f: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 85e972: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 85e975: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 85e977: movzx ecx, word ptr [edi + edx*2] */
  ecx = (uint32_t)(R16((uint32_t)(edi + edx*2)));
/* 85e97b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 85e97e: lea edi, [edi + edx*2] */
  edi = (uint32_t)(edi + edx*2);
/* 85e981: movzx edx, word ptr [edi + 2] */
  edx = (uint32_t)(R16((uint32_t)(edi + 0x2u)));
/* 85e985: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 85e988: movzx ecx, word ptr [edi + 4] */
  ecx = (uint32_t)(R16((uint32_t)(edi + 0x4u)));
/* 85e98c: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 85e98f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85e992: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 85e995: movzx eax, word ptr [edi] */
  eax = (uint32_t)(R16((uint32_t)(edi)));
/* 85e998: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 85e99b: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85e99e: lea eax, [eax + edx*8] */
  eax = (uint32_t)(eax + edx*8);
/* 85e9a1: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 85e9a4: fsub dword ptr [ecx + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x14u)));
/* 85e9a7: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 85e9aa: fsub dword ptr [ecx + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x10u)));
/* 85e9ad: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 85e9af: fsub dword ptr [ecx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xcu)));
/* 85e9b2: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 85e9b5: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 85e9b8: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 85e9bb: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 85e9be: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x85e9c4u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 85e9c4: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 85e9c7: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 85e9ca: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 85e9cd: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 85e9d0: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 85e9d3: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 85e9d6: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 85e9d9: frndint  */
  ST0 = fpu_round(ST0);
/* 85e9db: fistp dword ptr [edx] */
  W32((uint32_t)(edx), (uint32_t)fpu_toint32(ST0)); FPOP();
/* 85e9dd: movzx eax, word ptr [edi + 2] */
  eax = (uint32_t)(R16((uint32_t)(edi + 0x2u)));
/* 85e9e1: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85e9e4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85e9e7: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 85e9ea: lea eax, [edx + eax*8] */
  eax = (uint32_t)(edx + eax*8);
/* 85e9ed: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 85e9f0: fsub dword ptr [ecx + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x14u)));
/* 85e9f3: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 85e9f6: fsub dword ptr [ecx + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x10u)));
/* 85e9f9: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 85e9fb: fsub dword ptr [ecx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xcu)));
/* 85e9fe: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 85ea01: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 85ea04: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 85ea07: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 85ea0a: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x85ea10u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 85ea10: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 85ea13: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 85ea16: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 85ea19: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 85ea1c: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 85ea1f: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 85ea22: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 85ea25: frndint  */
  ST0 = fpu_round(ST0);
/* 85ea27: fistp dword ptr [edx] */
  W32((uint32_t)(edx), (uint32_t)fpu_toint32(ST0)); FPOP();
/* 85ea29: movzx eax, word ptr [edi + 4] */
  eax = (uint32_t)(R16((uint32_t)(edi + 0x4u)));
/* 85ea2d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85ea30: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 85ea33: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85ea36: lea eax, [eax + edx*8] */
  eax = (uint32_t)(eax + edx*8);
/* 85ea39: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 85ea3c: fsub dword ptr [ecx + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x14u)));
/* 85ea3f: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 85ea42: fsub dword ptr [ecx + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x10u)));
/* 85ea45: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 85ea47: fsub dword ptr [ecx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xcu)));
/* 85ea4a: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 85ea4d: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 85ea50: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 85ea53: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 85ea56: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x85ea5cu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 85ea5c: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 85ea5f: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 85ea62: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 85ea65: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 85ea68: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 85ea6b: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 85ea6e: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 85ea71: frndint  */
  ST0 = fpu_round(ST0);
/* 85ea73: fistp dword ptr [edx] */
  W32((uint32_t)(edx), (uint32_t)fpu_toint32(ST0)); FPOP();
/* 85ea75: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 85ea78: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 85ea7b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85ea7d: jge 0x85ea81 */
  if ((sf == of)) goto L_85ea81;
L_85ea7f: /* 85ea7f: mov eax, ecx */
  eax = ecx;
L_85ea81: /* 85ea81: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85ea84: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85ea86: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 85ea89: jge 0x85ea8e */
  if ((sf == of)) goto L_85ea8e;
L_85ea8b: /* 85ea8b: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
L_85ea8e: /* 85ea8e: fild dword ptr [ebp - 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 85ea91: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 85ea94: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 85ea96: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 85ea99: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85ea9a: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 85ea9d: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 85eaa0: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 85eaa3: jmp 0x85e960 */
  goto L_85e960;
L_85eaa8: /* 85eaa8: movzx ecx, word ptr [ebx + 0xe] */
  ecx = (uint32_t)(R16((uint32_t)(ebx + 0xeu)));
/* 85eaac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85eaad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85eaae: call 0x6c4cf0 */
  esp -= 4; W32(esp, 0x85eab3u); SPILL(); f_6c4cf0(); if (g_unwind) return; RELOAD();
/* 85eab3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85eab6: xor ecx, ecx */
  ecx = 0;
/* 85eab8: jmp 0x85eac0 */
  goto L_85eac0;
L_85eac0: /* 85eac0: movzx edx, word ptr [ebx + 0xe] */
  edx = (uint32_t)(R16((uint32_t)(ebx + 0xeu)));
/* 85eac4: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85eac6: jge 0x85eb54 */
  if ((sf == of)) goto L_85eb54;
L_85eacc: /* 85eacc: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85eacf: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 85ead2: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 85ead5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85ead7: mov eax, ecx */
  eax = ecx;
/* 85ead9: je 0x85eb0b */
  if (zf) goto L_85eb0b;
L_85eadb: /* 85eadb: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 85eade: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 85eae0: mov di, word ptr [eax + 0xc] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0xcu))) & 0xffffu);
/* 85eae4: add di, word ptr [edx + 0x28] */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(edx + 0x28u)));
  uint16_t r = (uint16_t)(a + b);
  edi = (edi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 85eae8: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 85eaeb: sub di, word ptr [ebx + 0xa] */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebx + 0xau)));
  uint16_t r = (uint16_t)(a - b);
  edi = (edi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 85eaef: mov word ptr [esi - 2], di */
  W16((uint32_t)(esi + 0xfffffffeu), (edi & 0xffffu));
/* 85eaf3: mov dx, word ptr [eax + 8] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x8u))) & 0xffffu);
/* 85eaf7: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 85eafa: add dx, word ptr [edi + 0x28] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(edi + 0x28u)));
  uint16_t r = (uint16_t)(a + b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 85eafe: sub dx, word ptr [ebx + 0xa] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebx + 0xau)));
  uint16_t r = (uint16_t)(a - b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 85eb02: mov word ptr [esi], dx */
  W16((uint32_t)(esi), (edx & 0xffffu));
/* 85eb05: mov ax, word ptr [eax + 4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x4u))) & 0xffffu);
/* 85eb09: jmp 0x85eb39 */
  goto L_85eb39;
L_85eb0b: /* 85eb0b: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 85eb0e: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 85eb10: mov di, word ptr [eax + 4] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x4u))) & 0xffffu);
/* 85eb14: add di, word ptr [edx + 0x28] */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(edx + 0x28u)));
  uint16_t r = (uint16_t)(a + b);
  edi = (edi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 85eb18: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 85eb1b: sub di, word ptr [ebx + 0xa] */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebx + 0xau)));
  uint16_t r = (uint16_t)(a - b);
  edi = (edi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 85eb1f: mov word ptr [esi - 2], di */
  W16((uint32_t)(esi + 0xfffffffeu), (edi & 0xffffu));
/* 85eb23: mov dx, word ptr [eax + 8] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x8u))) & 0xffffu);
/* 85eb27: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 85eb2a: add dx, word ptr [edi + 0x28] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(edi + 0x28u)));
  uint16_t r = (uint16_t)(a + b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 85eb2e: sub dx, word ptr [ebx + 0xa] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebx + 0xau)));
  uint16_t r = (uint16_t)(a - b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 85eb32: mov word ptr [esi], dx */
  W16((uint32_t)(esi), (edx & 0xffffu));
/* 85eb35: mov ax, word ptr [eax + 0xc] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0xcu))) & 0xffffu);
L_85eb39: /* 85eb39: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85eb3c: add ax, word ptr [edx + 0x28] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(edx + 0x28u)));
  uint16_t r = (uint16_t)(a + b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 85eb40: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 85eb43: sub ax, word ptr [ebx + 0xa] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebx + 0xau)));
  uint16_t r = (uint16_t)(a - b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 85eb47: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 85eb4a: mov word ptr [esi - 2], ax */
  W16((uint32_t)(esi + 0xfffffffeu), (eax & 0xffffu));
/* 85eb4e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 85eb4f: jmp 0x85eac0 */
  goto L_85eac0;
L_85eb54: /* 85eb54: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 85eb57: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x85eb5du); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 85eb5d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 85eb60: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85eb61: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85eb62: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 85eb69: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85eb6a: mov esp, ebp */
  esp = ebp;
/* 85eb6c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85eb6d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_85eaba(void) {
  LOAD_REGS();
L_85eaba: /* 85eaba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_85eac0: /* 85eac0: movzx edx, word ptr [ebx + 0xe] */
  edx = (uint32_t)(R16((uint32_t)(ebx + 0xeu)));
/* 85eac4: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85eac6: jge 0x85eb54 */
  if ((sf == of)) goto L_85eb54;
L_85eacc: /* 85eacc: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85eacf: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 85ead2: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 85ead5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85ead7: mov eax, ecx */
  eax = ecx;
/* 85ead9: je 0x85eb0b */
  if (zf) goto L_85eb0b;
L_85eadb: /* 85eadb: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 85eade: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 85eae0: mov di, word ptr [eax + 0xc] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0xcu))) & 0xffffu);
/* 85eae4: add di, word ptr [edx + 0x28] */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(edx + 0x28u)));
  uint16_t r = (uint16_t)(a + b);
  edi = (edi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 85eae8: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 85eaeb: sub di, word ptr [ebx + 0xa] */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebx + 0xau)));
  uint16_t r = (uint16_t)(a - b);
  edi = (edi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 85eaef: mov word ptr [esi - 2], di */
  W16((uint32_t)(esi + 0xfffffffeu), (edi & 0xffffu));
/* 85eaf3: mov dx, word ptr [eax + 8] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x8u))) & 0xffffu);
/* 85eaf7: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 85eafa: add dx, word ptr [edi + 0x28] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(edi + 0x28u)));
  uint16_t r = (uint16_t)(a + b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 85eafe: sub dx, word ptr [ebx + 0xa] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebx + 0xau)));
  uint16_t r = (uint16_t)(a - b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 85eb02: mov word ptr [esi], dx */
  W16((uint32_t)(esi), (edx & 0xffffu));
/* 85eb05: mov ax, word ptr [eax + 4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x4u))) & 0xffffu);
/* 85eb09: jmp 0x85eb39 */
  goto L_85eb39;
L_85eb0b: /* 85eb0b: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 85eb0e: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 85eb10: mov di, word ptr [eax + 4] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x4u))) & 0xffffu);
/* 85eb14: add di, word ptr [edx + 0x28] */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(edx + 0x28u)));
  uint16_t r = (uint16_t)(a + b);
  edi = (edi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 85eb18: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 85eb1b: sub di, word ptr [ebx + 0xa] */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebx + 0xau)));
  uint16_t r = (uint16_t)(a - b);
  edi = (edi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 85eb1f: mov word ptr [esi - 2], di */
  W16((uint32_t)(esi + 0xfffffffeu), (edi & 0xffffu));
/* 85eb23: mov dx, word ptr [eax + 8] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x8u))) & 0xffffu);
/* 85eb27: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 85eb2a: add dx, word ptr [edi + 0x28] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(edi + 0x28u)));
  uint16_t r = (uint16_t)(a + b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 85eb2e: sub dx, word ptr [ebx + 0xa] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebx + 0xau)));
  uint16_t r = (uint16_t)(a - b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 85eb32: mov word ptr [esi], dx */
  W16((uint32_t)(esi), (edx & 0xffffu));
/* 85eb35: mov ax, word ptr [eax + 0xc] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0xcu))) & 0xffffu);
L_85eb39: /* 85eb39: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85eb3c: add ax, word ptr [edx + 0x28] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(edx + 0x28u)));
  uint16_t r = (uint16_t)(a + b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 85eb40: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 85eb43: sub ax, word ptr [ebx + 0xa] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebx + 0xau)));
  uint16_t r = (uint16_t)(a - b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 85eb47: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 85eb4a: mov word ptr [esi - 2], ax */
  W16((uint32_t)(esi + 0xfffffffeu), (eax & 0xffffu));
/* 85eb4e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 85eb4f: jmp 0x85eac0 */
  goto L_85eac0;
L_85eb54: /* 85eb54: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 85eb57: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x85eb5du); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 85eb5d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 85eb60: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85eb61: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85eb62: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 85eb69: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85eb6a: mov esp, ebp */
  esp = ebp;
/* 85eb6c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85eb6d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_85eb70(void) {
  LOAD_REGS();
L_85eb70: /* 85eb70: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 85eb73: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 85eb78: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 85eb7b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85eb7c: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 85eb7f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85eb84u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_85eb84(); return;
}

void f_85eb84(void) {
  LOAD_REGS();
L_85eb84: /* 85eb84: push 0xa17b78 */
  { uint32_t v = 0xa17b78u; esp -= 4; W32(esp, v); }
/* 85eb89: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 85eb8e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x85eb94u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 85eb94: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85eb97: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85eb99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85eb9b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85eba0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_85eba0: guest_badaddr(0x85eba0); return;
}

void f_85ec70(void) {
  LOAD_REGS();
L_85ec70: /* 85ec70: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 85ec74: sub esp, 0x144 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x144u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85ec7a: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85ec7d: jl 0x85eefa */
  if ((sf != of)) goto L_85eefa;
L_85ec83: /* 85ec83: mov ecx, dword ptr [esp + 0x148] */
  ecx = R32((uint32_t)(esp + 0x148u));
/* 85ec8a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85ec8b: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 85ec8e: lea eax, [eax + ecx - 0x10] */
  eax = (uint32_t)(eax + ecx + 0xfffffff0u);
/* 85ec92: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 85ec93: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85ec94: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* 85ec98: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85ec99: mov dword ptr [esp + 0x54], ecx */
  W32((uint32_t)(esp + 0x54u), ecx);
/* 85ec9d: xor eax, eax */
  eax = 0;
/* 85ec9f: mov ecx, 0x3e */
  ecx = 0x3eu;
/* 85eca4: lea edi, [esp + 0x5c] */
  edi = (uint32_t)(esp + 0x5cu);
/* 85eca8: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 85ecaa: lea eax, [esp + 0x54] */
  eax = (uint32_t)(esp + 0x54u);
/* 85ecae: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_85ecb2: /* 85ecb2: mov ebp, dword ptr [eax + 4] */
  ebp = R32((uint32_t)(eax + 0x4u));
/* 85ecb5: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 85ecb7: mov eax, ebp */
  eax = ebp;
/* 85ecb9: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 85ecbb: sar eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 85ecbe: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85ecbf: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85ecc2: jle 0x85ee65 */
  if ((zf || sf != of)) goto L_85ee65;
L_85ecc8: /* 85ecc8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 85ecc9: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 85eccb: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 85eccd: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 85ecd0: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 85ecd2: mov edi, eax */
  edi = eax;
/* 85ecd4: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 85ecd6: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 85ecd9: mov ebx, dword ptr [edi + 8] */
  ebx = R32((uint32_t)(edi + 0x8u));
/* 85ecdc: mov edi, dword ptr [edi + 0xc] */
  edi = R32((uint32_t)(edi + 0xcu));
/* 85ecdf: mov dword ptr [esp + 0x40], edi */
  W32((uint32_t)(esp + 0x40u), edi);
/* 85ece3: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* 85ece7: mov edi, esi */
  edi = esi;
/* 85ece9: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 85eceb: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 85eced: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 85ecf0: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 85ecf3: mov ebx, dword ptr [edi + 8] */
  ebx = R32((uint32_t)(edi + 0x8u));
/* 85ecf6: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 85ecf9: mov edi, dword ptr [edi + 0xc] */
  edi = R32((uint32_t)(edi + 0xcu));
/* 85ecfc: mov dword ptr [eax + 0xc], edi */
  W32((uint32_t)(eax + 0xcu), edi);
/* 85ecff: mov eax, esi */
  eax = esi;
/* 85ed01: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 85ed03: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 85ed07: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 85ed0a: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 85ed0e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 85ed11: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 85ed14: mov ebx, esi */
  ebx = esi;
/* 85ed16: lea edi, [ebp + 0x10] */
  edi = (uint32_t)(ebp + 0x10u);
/* 85ed19: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_85ed20: /* 85ed20: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 85ed23: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 85ed25: ja 0x85ed34 */
  if ((!cf && !zf)) goto L_85ed34;
L_85ed27: /* 85ed27: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 85ed29: fsub dword ptr [ebx] */
  ST0 = ST0 - (F32((uint32_t)(ebx)));
/* 85ed2b: call 0x99c958 */
  esp -= 4; W32(esp, 0x85ed30u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 85ed30: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 85ed32: jle 0x85ed20 */
  if ((zf || sf != of)) goto L_85ed20;
L_85ed34: /* 85ed34: sub edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 85ed37: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 85ed39: jbe 0x85ed48 */
  if ((cf | zf)) goto L_85ed48;
L_85ed3b: /* 85ed3b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 85ed3d: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 85ed3f: call 0x99c958 */
  esp -= 4; W32(esp, 0x85ed44u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 85ed44: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 85ed46: jge 0x85ed34 */
  if ((sf == of)) goto L_85ed34;
L_85ed48: /* 85ed48: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 85ed4a: ja 0x85eda5 */
  if ((!cf && !zf)) goto L_85eda5;
L_85ed4c: /* 85ed4c: mov eax, ebx */
  eax = ebx;
/* 85ed4e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 85ed50: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 85ed53: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 85ed57: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 85ed5a: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 85ed5e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 85ed61: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 85ed65: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 85ed69: mov eax, edi */
  eax = edi;
/* 85ed6b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 85ed6d: mov ecx, ebx */
  ecx = ebx;
/* 85ed6f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 85ed71: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 85ed74: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 85ed77: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 85ed7a: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 85ed7d: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 85ed80: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 85ed84: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 85ed87: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 85ed8b: mov ecx, edi */
  ecx = edi;
/* 85ed8d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 85ed8f: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 85ed93: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 85ed96: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 85ed9a: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 85ed9d: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 85eda0: jmp 0x85ed20 */
  goto L_85ed20;
L_85eda5: /* 85eda5: mov ecx, esi */
  ecx = esi;
/* 85eda7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 85eda9: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 85edac: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 85edb0: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 85edb3: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 85edb7: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 85edba: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 85edbe: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 85edc2: mov ecx, edi */
  ecx = edi;
/* 85edc4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 85edc6: mov edx, esi */
  edx = esi;
/* 85edc8: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 85edca: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 85edcd: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 85edd0: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 85edd3: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 85edd6: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 85edd9: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 85eddd: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 85ede0: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 85ede4: mov edx, edi */
  edx = edi;
/* 85ede6: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 85ede8: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 85edec: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 85edef: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 85edf3: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 85edf6: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 85edf9: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 85edfb: mov eax, ebp */
  eax = ebp;
/* 85edfd: sub edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 85ee00: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 85ee02: and edx, 0xfffffff0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 85ee05: and eax, 0xfffffff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 85ee08: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85ee0a: jl 0x85ee32 */
  if ((sf != of)) goto L_85ee32;
L_85ee0c: /* 85ee0c: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 85ee0f: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 85ee11: jae 0x85ee26 */
  if (!cf) goto L_85ee26;
L_85ee13: /* 85ee13: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 85ee17: add edi, -0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85ee1a: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 85ee1c: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 85ee1f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 85ee22: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_85ee26: /* 85ee26: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 85ee28: jbe 0x85eedf */
  if ((cf | zf)) goto L_85eedf;
L_85ee2e: /* 85ee2e: mov esi, ebx */
  esi = ebx;
/* 85ee30: jmp 0x85ee54 */
  goto L_85ee54;
L_85ee32: /* 85ee32: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 85ee34: jbe 0x85ee46 */
  if ((cf | zf)) goto L_85ee46;
L_85ee36: /* 85ee36: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 85ee3a: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 85ee3c: mov dword ptr [eax + 4], ebp */
  W32((uint32_t)(eax + 0x4u), ebp);
/* 85ee3f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 85ee42: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_85ee46: /* 85ee46: lea edx, [esi + 0x10] */
  edx = (uint32_t)(esi + 0x10u);
/* 85ee49: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 85ee4b: jae 0x85eedf */
  if (!cf) goto L_85eedf;
L_85ee51: /* 85ee51: lea ebp, [edi - 0x10] */
  ebp = (uint32_t)(edi + 0xfffffff0u);
L_85ee54: /* 85ee54: mov eax, ebp */
  eax = ebp;
/* 85ee56: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 85ee58: sar eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 85ee5b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85ee5c: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85ee5f: jg 0x85ecc8 */
  if ((!zf && sf == of)) goto L_85ecc8;
L_85ee65: /* 85ee65: cmp ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 85ee67: jbe 0x85eedf */
  if ((cf | zf)) goto L_85eedf;
L_85ee69: /* 85ee69: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_85ee70: /* 85ee70: lea ebx, [esi + 0x10] */
  ebx = (uint32_t)(esi + 0x10u);
/* 85ee73: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 85ee75: mov edi, esi */
  edi = esi;
/* 85ee77: ja 0x85ee96 */
  if ((!cf && !zf)) goto L_85ee96;
L_85ee79: /* 85ee79: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_85ee80: /* 85ee80: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 85ee82: fsub dword ptr [ebx] */
  ST0 = ST0 - (F32((uint32_t)(ebx)));
/* 85ee84: call 0x99c958 */
  esp -= 4; W32(esp, 0x85ee89u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 85ee89: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 85ee8b: jle 0x85ee8f */
  if ((zf || sf != of)) goto L_85ee8f;
L_85ee8d: /* 85ee8d: mov edi, ebx */
  edi = ebx;
L_85ee8f: /* 85ee8f: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 85ee92: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 85ee94: jbe 0x85ee80 */
  if ((cf | zf)) goto L_85ee80;
L_85ee96: /* 85ee96: mov edx, edi */
  edx = edi;
/* 85ee98: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 85ee9a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 85ee9d: mov ebx, dword ptr [edx + 8] */
  ebx = R32((uint32_t)(edx + 0x8u));
/* 85eea0: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 85eea3: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 85eea7: mov dword ptr [esp + 0x4c], ebx */
  W32((uint32_t)(esp + 0x4cu), ebx);
/* 85eeab: mov edx, ebp */
  edx = ebp;
/* 85eead: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 85eeaf: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 85eeb1: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 85eeb4: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 85eeb7: mov ebx, dword ptr [edx + 8] */
  ebx = R32((uint32_t)(edx + 0x8u));
/* 85eeba: mov dword ptr [edi + 8], ebx */
  W32((uint32_t)(edi + 0x8u), ebx);
/* 85eebd: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 85eec0: mov dword ptr [edi + 0xc], edx */
  W32((uint32_t)(edi + 0xcu), edx);
/* 85eec3: mov edx, ebp */
  edx = ebp;
/* 85eec5: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 85eec7: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 85eecb: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 85eece: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 85eed2: sub ebp, 0x10 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 85eed5: cmp ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 85eed7: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 85eeda: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 85eedd: ja 0x85ee70 */
  if ((!cf && !zf)) goto L_85ee70;
L_85eedf: /* 85eedf: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 85eee3: sub eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 85eee6: lea edx, [esp + 0x54] */
  edx = (uint32_t)(esp + 0x54u);
/* 85eeea: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 85eeec: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 85eef0: jae 0x85ecb2 */
  if (!cf) goto L_85ecb2;
L_85eef6: /* 85eef6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85eef7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85eef8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85eef9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_85eefa: /* 85eefa: add esp, 0x144 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x144u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85ef00: ret  */
  esp += 4; SPILL(); return;
}

void f_85efc0(void) {
  LOAD_REGS();
L_85efc0: /* 85efc0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 85efc1: mov ebp, esp */
  ebp = esp;
/* 85efc3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 85efc5: push 0x9d4240 */
  { uint32_t v = 0x9d4240u; esp -= 4; W32(esp, v); }
/* 85efca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 85efd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85efd1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 85efd8: sub esp, 0xc0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85efde: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85efdf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85efe0: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 85efe3: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 85efe6: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 85efe9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85efea: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 85efed: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 85eff0: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 85eff7: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 85effa: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 85effd: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 85f000: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85f003: xor eax, eax */
  eax = 0;
/* 85f005: mov ebx, ecx */
  ebx = ecx;
/* 85f007: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 85f00a: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 85f00d: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 85f00f: mov ecx, ebx */
  ecx = ebx;
/* 85f011: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 85f013: inc dword ptr [esi + 0x4c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x4cu), r);
  }
/* 85f016: xor ebx, ebx */
  ebx = 0;
L_85f018: /* 85f018: cmp ebx, dword ptr [esi + 0x2c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85f01b: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 85f01e: jge 0x85f397 */
  if ((sf == of)) goto L_85f397;
L_85f024: /* 85f024: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 85f027: lea edx, [ebx + ebx*4] */
  edx = (uint32_t)(ebx + ebx*4);
/* 85f02a: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 85f02d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85f02f: lea edi, [eax + edx*4] */
  edi = (uint32_t)(eax + edx*4);
/* 85f032: mov dword ptr [ebp - 0x50], edi */
  W32((uint32_t)(ebp + 0xffffffb0u), edi);
/* 85f035: mov dword ptr [edi + 0x10], 0 */
  W32((uint32_t)(edi + 0x10u), 0x0u);
/* 85f03c: je 0x85f35e */
  if (zf) goto L_85f35e;
L_85f042: /* 85f042: call 0x6cc7bb */
  esp -= 4; W32(esp, 0x85f047u); SPILL(); f_6cc7bb(); if (g_unwind) return; RELOAD();
/* 85f047: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85f049: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 85f04c: je 0x85f35e */
  if (zf) goto L_85f35e;
L_85f052: /* 85f052: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 85f055: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85f057: jne 0x85f35e */
  if (!zf) goto L_85f35e;
L_85f05d: /* 85f05d: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* 85f060: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85f062: jne 0x85f35e */
  if (!zf) goto L_85f35e;
L_85f068: /* 85f068: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 85f06b: mov ebx, dword ptr [ecx + 0x64] */
  ebx = R32((uint32_t)(ecx + 0x64u));
/* 85f06e: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 85f071: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* 85f074: xor eax, eax */
  eax = 0;
/* 85f076: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85f078: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 85f07b: je 0x85f085 */
  if (zf) goto L_85f085;
L_85f07d: /* 85f07d: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 85f080: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 85f083: jmp 0x85f088 */
  goto L_85f088;
L_85f085: /* 85f085: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
L_85f088: /* 85f088: mov byte ptr [ebp - 0x11], 1 */
  W8((uint32_t)(ebp + 0xffffffefu), 0x1u);
L_85f08c: /* 85f08c: mov edx, eax */
  edx = eax;
/* 85f08e: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 85f091: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 85f094: cmp edx, dword ptr [eax + 0x68] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x68u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85f097: jge 0x85f354 */
  if ((sf == of)) goto L_85f354;
L_85f09d: /* 85f09d: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 85f0a0: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 85f0a3: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 85f0a6: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 85f0a8: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 85f0ab: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 85f0ae: lea edx, [ebp - 0x68] */
  edx = (uint32_t)(ebp + 0xffffff98u);
/* 85f0b1: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 85f0b4: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 85f0b7: mov dword ptr [ebp - 0x68], ecx */
  W32((uint32_t)(ebp + 0xffffff98u), ecx);
/* 85f0ba: mov dword ptr [ebp - 0x5c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x3f800000u);
/* 85f0c1: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 85f0c4: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 85f0c7: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85f0ca: lea edi, [ebp - 0xa8] */
  edi = (uint32_t)(ebp + 0xffffff58u);
/* 85f0d0: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 85f0d2: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 85f0d4: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 85f0d6: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 85f0d9: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 85f0db: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 85f0de: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 85f0e0: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 85f0e3: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 85f0e6: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 85f0e9: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 85f0ec: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 85f0ef: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 85f0f2: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 85f0f5: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 85f0f8: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 85f0fb: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 85f0fd: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 85f0ff: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85f101: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85f103: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85f105: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 85f108: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 85f10b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 85f10e: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 85f111: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 85f114: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 85f117: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 85f11a: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 85f11d: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 85f11f: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 85f121: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85f123: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85f125: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85f127: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 85f12a: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 85f12d: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 85f130: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 85f133: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 85f136: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 85f139: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 85f13c: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 85f13f: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 85f141: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 85f143: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85f145: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85f147: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85f149: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 85f14b: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 85f14d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85f14f: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 85f152: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 85f155: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 85f158: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
/* 85f15b: fld dword ptr [ebx + 0x10] */
  { double v = F32((uint32_t)(ebx + 0x10u)); FPUSH(v); }
/* 85f15e: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 85f161: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 85f164: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 85f167: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 85f16a: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 85f16d: mov dword ptr [ebp - 0x78], eax */
  W32((uint32_t)(ebp + 0xffffff88u), eax);
/* 85f170: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 85f177: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 85f17a: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85f17d: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 85f180: lea edi, [ebp - 0x88] */
  edi = (uint32_t)(ebp + 0xffffff78u);
/* 85f186: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 85f188: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 85f18a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 85f18c: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 85f18f: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 85f191: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 85f194: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 85f196: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 85f199: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 85f19c: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 85f19f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 85f1a2: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 85f1a5: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 85f1a8: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 85f1ab: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 85f1ae: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 85f1b1: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 85f1b3: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 85f1b5: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85f1b7: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85f1b9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85f1bb: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 85f1be: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 85f1c1: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 85f1c4: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 85f1c7: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 85f1ca: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 85f1cd: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 85f1d0: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 85f1d3: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 85f1d5: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 85f1d7: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85f1d9: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85f1db: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85f1dd: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 85f1e0: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 85f1e3: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 85f1e6: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 85f1e9: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 85f1ec: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 85f1ef: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 85f1f2: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 85f1f5: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 85f1f7: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 85f1f9: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85f1fb: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 85f1fd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 85f1ff: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 85f201: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 85f203: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 85f205: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 85f208: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 85f20b: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 85f20e: mov eax, dword ptr [ebp - 0x84] */
  eax = R32((uint32_t)(ebp + 0xffffff7cu));
/* 85f214: mov edx, dword ptr [ebp - 0x88] */
  edx = R32((uint32_t)(ebp + 0xffffff78u));
/* 85f21a: mov ecx, dword ptr [ebp - 0x80] */
  ecx = R32((uint32_t)(ebp + 0xffffff80u));
/* 85f21d: mov dword ptr [ebp - 0x94], eax */
  W32((uint32_t)(ebp + 0xffffff6cu), eax);
/* 85f223: mov dword ptr [ebp - 0x98], edx */
  W32((uint32_t)(ebp + 0xffffff68u), edx);
/* 85f229: mov edx, dword ptr [ebp - 0x7c] */
  edx = R32((uint32_t)(ebp + 0xffffff84u));
/* 85f22c: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 85f22f: mov dword ptr [ebp - 0x90], ecx */
  W32((uint32_t)(ebp + 0xffffff70u), ecx);
/* 85f235: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85f236: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 85f23c: mov dword ptr [ebp - 0x8c], edx */
  W32((uint32_t)(ebp + 0xffffff74u), edx);
/* 85f242: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x85f248u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 85f248: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 85f24b: mov dl, byte ptr [ebp - 0x11] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffefu))) & 0xffu);
/* 85f24e: test byte ptr [ecx], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85f250: je 0x85f326 */
  if (zf) goto L_85f326;
L_85f256: /* 85f256: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 85f259: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 85f25b: fld dword ptr [ecx + 0x2bc] */
  { double v = F32((uint32_t)(ecx + 0x2bcu)); FPUSH(v); }
/* 85f261: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 85f264: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 85f26a: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 85f26d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85f270: mov edx, esp */
  edx = esp;
/* 85f272: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 85f274: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 85f276: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* 85f279: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 85f27c: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 85f27f: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 85f282: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 85f285: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 85f288: mov eax, dword ptr [ebp - 0xa8] */
  eax = R32((uint32_t)(ebp + 0xffffff58u));
/* 85f28e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 85f290: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85f293: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* 85f296: mov edx, esp */
  edx = esp;
/* 85f298: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 85f29a: mov eax, dword ptr [ebp - 0xa4] */
  eax = R32((uint32_t)(ebp + 0xffffff5cu));
/* 85f2a0: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 85f2a3: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 85f2a6: mov eax, dword ptr [ebp - 0xa0] */
  eax = R32((uint32_t)(ebp + 0xffffff60u));
/* 85f2ac: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 85f2af: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 85f2b2: fstp dword ptr [ebp - 0xcc] */
  WF32((uint32_t)(ebp + 0xffffff34u), ST0); FPOP();
/* 85f2b8: call 0x6c6b4a */
  esp -= 4; W32(esp, 0x85f2bdu); SPILL(); f_6c6b4a(); if (g_unwind) return; RELOAD();
/* 85f2bd: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 85f2c0: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 85f2c3: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 85f2c6: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 85f2c9: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 85f2cc: mov dword ptr [ebp - 0xac], 0 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x0u);
/* 85f2d6: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 85f2d9: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 85f2dc: fld dword ptr [ebp - 0xcc] */
  { double v = F32((uint32_t)(ebp + 0xffffff34u)); FPUSH(v); }
/* 85f2e2: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 85f2e5: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 85f2e8: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 85f2eb: mov dword ptr [ebp - 0xb8], edx */
  W32((uint32_t)(ebp + 0xffffff48u), edx);
/* 85f2f1: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 85f2f4: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 85f2f7: lea edx, [ebp - 0xb8] */
  edx = (uint32_t)(ebp + 0xffffff48u);
/* 85f2fd: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 85f300: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 85f303: mov dword ptr [ebp - 0xb0], ecx */
  W32((uint32_t)(ebp + 0xffffff50u), ecx);
/* 85f309: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85f30a: lea ecx, [ebp - 0xbc] */
  ecx = (uint32_t)(ebp + 0xffffff44u);
/* 85f310: mov dword ptr [ebp - 0xb4], eax */
  W32((uint32_t)(ebp + 0xffffff4cu), eax);
/* 85f316: call 0x6c576d */
  esp -= 4; W32(esp, 0x85f31bu); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 85f31b: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 85f31d: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 85f320: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85f321: call 0x6c8cd8 */
  esp -= 4; W32(esp, 0x85f326u); SPILL(); f_6c8cd8(); if (g_unwind) return; RELOAD();
L_85f326: /* 85f326: mov al, byte ptr [ebp - 0x11] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffefu))) & 0xffu);
/* 85f329: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 85f32c: shl al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = 1;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 85f32e: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85f331: add ebx, 0x18 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 85f334: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85f336: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 85f339: mov byte ptr [ebp - 0x11], al */
  W8((uint32_t)(ebp + 0xffffffefu), (eax & 0xffu));
/* 85f33c: jne 0x85f345 */
  if (!zf) goto L_85f345;
L_85f33e: /* 85f33e: inc dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd8u), r);
  }
/* 85f341: mov byte ptr [ebp - 0x11], 1 */
  W8((uint32_t)(ebp + 0xffffffefu), 0x1u);
L_85f345: /* 85f345: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 85f348: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 85f34b: mov edi, dword ptr [ebp - 0x50] */
  edi = R32((uint32_t)(ebp + 0xffffffb0u));
/* 85f34e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 85f34f: jmp 0x85f08c */
  goto L_85f08c;
L_85f354: /* 85f354: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85f357: mov dword ptr [edi + 0x10], 1 */
  W32((uint32_t)(edi + 0x10u), 0x1u);
L_85f35e: /* 85f35e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85f35f: jmp 0x85f018 */
  goto L_85f018;
L_85f397: /* 85f397: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 85f39a: mov edi, dword ptr [eax + 0x80] */
  edi = R32((uint32_t)(eax + 0x80u));
/* 85f3a0: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 85f3a3: xor ebx, ebx */
  ebx = 0;
L_85f3a5: /* 85f3a5: cmp ebx, dword ptr [eax + 0x68] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x68u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85f3a8: jge 0x85f429 */
  if ((sf == of)) goto L_85f429;
L_85f3aa: /* 85f3aa: mov edx, dword ptr [eax + 0x128] */
  edx = R32((uint32_t)(eax + 0x128u));
/* 85f3b0: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85f3b2: je 0x85f417 */
  if (zf) goto L_85f417;
L_85f3b4: /* 85f3b4: movzx esi, byte ptr [edi + 2] */
  esi = (uint32_t)(R8((uint32_t)(edi + 0x2u)));
/* 85f3b8: movzx eax, byte ptr [ecx + 2] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x2u)));
/* 85f3bc: imul esi, eax */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(eax);
  esi = (uint32_t)r;
  }
/* 85f3bf: mov eax, 0x80808081 */
  eax = 0x80808081u;
/* 85f3c4: imul esi */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(esi); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 85f3c6: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 85f3c8: sar edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 7;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 85f3cb: mov eax, edx */
  eax = edx;
/* 85f3cd: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 85f3d0: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 85f3d2: mov byte ptr [ecx + 2], dl */
  W8((uint32_t)(ecx + 0x2u), (edx & 0xffu));
/* 85f3d5: movzx esi, byte ptr [edi + 1] */
  esi = (uint32_t)(R8((uint32_t)(edi + 0x1u)));
/* 85f3d9: movzx edx, byte ptr [ecx + 1] */
  edx = (uint32_t)(R8((uint32_t)(ecx + 0x1u)));
/* 85f3dd: imul esi, edx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(edx);
  esi = (uint32_t)r;
  }
/* 85f3e0: mov eax, 0x80808081 */
  eax = 0x80808081u;
/* 85f3e5: imul esi */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(esi); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 85f3e7: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 85f3e9: movzx esi, byte ptr [ecx] */
  esi = (uint32_t)(R8((uint32_t)(ecx)));
/* 85f3ec: sar edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 7;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 85f3ef: mov eax, edx */
  eax = edx;
/* 85f3f1: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 85f3f4: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 85f3f6: mov byte ptr [ecx + 1], dl */
  W8((uint32_t)(ecx + 0x1u), (edx & 0xffu));
/* 85f3f9: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* 85f3fc: imul esi, edx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(edx);
  esi = (uint32_t)r;
  }
/* 85f3ff: mov eax, 0x80808081 */
  eax = 0x80808081u;
/* 85f404: imul esi */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(esi); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 85f406: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 85f408: sar edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 7;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 85f40b: mov eax, edx */
  eax = edx;
/* 85f40d: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 85f410: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 85f412: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 85f415: mov byte ptr [ecx], dl */
  W8((uint32_t)(ecx), (edx & 0xffu));
L_85f417: /* 85f417: mov dl, byte ptr [edi + 3] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3u))) & 0xffu);
/* 85f41a: mov byte ptr [ecx + 3], dl */
  W8((uint32_t)(ecx + 0x3u), (edx & 0xffu));
/* 85f41d: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85f420: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 85f423: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85f424: jmp 0x85f3a5 */
  goto L_85f3a5;
L_85f429: /* 85f429: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 85f42c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85f42d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85f42e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 85f435: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85f436: mov esp, ebp */
  esp = ebp;
/* 85f438: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85f439: ret  */
  esp += 4; SPILL(); return;
}

void f_85f364(void) {
  LOAD_REGS();
L_85f364: /* 85f364: mov ecx, dword ptr [ebp - 0xc0] */
  ecx = R32((uint32_t)(ebp + 0xffffff40u));
/* 85f36a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 85f36f: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 85f372: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85f373: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 85f376: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85f37bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_85f37b(); return;
}

void f_85f37b(void) {
  LOAD_REGS();
L_85f37b: /* 85f37b: push 0xa17bc4 */
  { uint32_t v = 0xa17bc4u; esp -= 4; W32(esp, v); }
/* 85f380: push 0xae4fe0 */
  { uint32_t v = 0xae4fe0u; esp -= 4; W32(esp, v); }
/* 85f385: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x85f38bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 85f38b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85f38e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85f390: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85f392: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85f397u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 85f397: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 85f39a: mov edi, dword ptr [eax + 0x80] */
  edi = R32((uint32_t)(eax + 0x80u));
/* 85f3a0: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 85f3a3: xor ebx, ebx */
  ebx = 0;
L_85f3a5: /* 85f3a5: cmp ebx, dword ptr [eax + 0x68] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x68u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85f3a8: jge 0x85f429 */
  if ((sf == of)) goto L_85f429;
L_85f3aa: /* 85f3aa: mov edx, dword ptr [eax + 0x128] */
  edx = R32((uint32_t)(eax + 0x128u));
/* 85f3b0: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85f3b2: je 0x85f417 */
  if (zf) goto L_85f417;
L_85f3b4: /* 85f3b4: movzx esi, byte ptr [edi + 2] */
  esi = (uint32_t)(R8((uint32_t)(edi + 0x2u)));
/* 85f3b8: movzx eax, byte ptr [ecx + 2] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x2u)));
/* 85f3bc: imul esi, eax */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(eax);
  esi = (uint32_t)r;
  }
/* 85f3bf: mov eax, 0x80808081 */
  eax = 0x80808081u;
/* 85f3c4: imul esi */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(esi); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 85f3c6: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 85f3c8: sar edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 7;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 85f3cb: mov eax, edx */
  eax = edx;
/* 85f3cd: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 85f3d0: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 85f3d2: mov byte ptr [ecx + 2], dl */
  W8((uint32_t)(ecx + 0x2u), (edx & 0xffu));
/* 85f3d5: movzx esi, byte ptr [edi + 1] */
  esi = (uint32_t)(R8((uint32_t)(edi + 0x1u)));
/* 85f3d9: movzx edx, byte ptr [ecx + 1] */
  edx = (uint32_t)(R8((uint32_t)(ecx + 0x1u)));
/* 85f3dd: imul esi, edx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(edx);
  esi = (uint32_t)r;
  }
/* 85f3e0: mov eax, 0x80808081 */
  eax = 0x80808081u;
/* 85f3e5: imul esi */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(esi); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 85f3e7: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 85f3e9: movzx esi, byte ptr [ecx] */
  esi = (uint32_t)(R8((uint32_t)(ecx)));
/* 85f3ec: sar edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 7;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 85f3ef: mov eax, edx */
  eax = edx;
/* 85f3f1: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 85f3f4: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 85f3f6: mov byte ptr [ecx + 1], dl */
  W8((uint32_t)(ecx + 0x1u), (edx & 0xffu));
/* 85f3f9: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* 85f3fc: imul esi, edx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(edx);
  esi = (uint32_t)r;
  }
/* 85f3ff: mov eax, 0x80808081 */
  eax = 0x80808081u;
/* 85f404: imul esi */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(esi); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 85f406: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 85f408: sar edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 7;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 85f40b: mov eax, edx */
  eax = edx;
/* 85f40d: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 85f410: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 85f412: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 85f415: mov byte ptr [ecx], dl */
  W8((uint32_t)(ecx), (edx & 0xffu));
L_85f417: /* 85f417: mov dl, byte ptr [edi + 3] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3u))) & 0xffu);
/* 85f41a: mov byte ptr [ecx + 3], dl */
  W8((uint32_t)(ecx + 0x3u), (edx & 0xffu));
/* 85f41d: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85f420: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 85f423: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85f424: jmp 0x85f3a5 */
  goto L_85f3a5;
L_85f429: /* 85f429: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 85f42c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85f42d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85f42e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 85f435: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85f436: mov esp, ebp */
  esp = ebp;
/* 85f438: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85f439: ret  */
  esp += 4; SPILL(); return;
}

void f_85f560(void) {
  LOAD_REGS();
L_85f560: /* 85f560: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 85f561: mov ebp, esp */
  ebp = esp;
/* 85f563: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 85f565: push 0x9d4258 */
  { uint32_t v = 0x9d4258u; esp -= 4; W32(esp, v); }
/* 85f56a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 85f570: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85f571: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 85f578: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85f57b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 85f57e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 85f580: mov edx, dword ptr [ecx + 0x54] */
  edx = R32((uint32_t)(ecx + 0x54u));
/* 85f583: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85f584: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85f585: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85f586: xor edi, edi */
  edi = 0;
/* 85f588: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85f58a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 85f58d: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 85f590: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 85f593: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 85f596: je 0x85fa1c */
  if (zf) goto L_85fa1c;
L_85f59c: /* 85f59c: mov eax, dword ptr [ecx + 0x74] */
  eax = R32((uint32_t)(ecx + 0x74u));
/* 85f59f: cmp eax, dword ptr [edx + 0x58] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85f5a2: jne 0x85f652 */
  if (!zf) goto L_85f652;
L_85f5a8: /* 85f5a8: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 85f5ab: jmp 0x85f5b0 */
  goto L_85f5b0;
L_85f5b0: /* 85f5b0: cmp edi, dword ptr [edx + 0x58] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85f5b3: jge 0x85f652 */
  if ((sf == of)) goto L_85f652;
L_85f5b9: /* 85f5b9: mov eax, dword ptr [ecx + 0x70] */
  eax = R32((uint32_t)(ecx + 0x70u));
/* 85f5bc: lea esi, [eax + edi*8] */
  esi = (uint32_t)(eax + edi*8);
/* 85f5bf: cmp dword ptr [esi + 4], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85f5c3: je 0x85f64c */
  if (zf) goto L_85f64c;
L_85f5c9: /* 85f5c9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 85f5cb: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 85f5ce: cmp dword ptr [ecx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85f5d2: jne 0x85f621 */
  if (!zf) goto L_85f621;
L_85f5d4: /* 85f5d4: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 85f5d7: mov ecx, dword ptr [edx + 0x1bc] */
  ecx = R32((uint32_t)(edx + 0x1bcu));
/* 85f5dd: lea edx, [eax + eax*8] */
  edx = (uint32_t)(eax + eax*8);
/* 85f5e0: mov eax, dword ptr [ecx + 0x1110] */
  eax = R32((uint32_t)(ecx + 0x1110u));
/* 85f5e6: mov eax, dword ptr [eax + edx*8 + 0xc] */
  eax = R32((uint32_t)(eax + edx*8 + 0xcu));
/* 85f5ea: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* 85f5f1: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 85f5f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85f5f4: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 85f5f9: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x85f5ffu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 85f5ff: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 85f601: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 85f604: mov dword ptr [ecx + edx*4], eax */
  W32((uint32_t)(ecx + edx*4), eax);
/* 85f607: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 85f609: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 85f60c: mov dword ptr [eax + edx*4], 0 */
  W32((uint32_t)(eax + edx*4), 0x0u);
/* 85f613: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 85f615: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 85f618: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 85f61b: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 85f61e: inc dword ptr [ebx + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebx + 0x10u), r);
  }
L_85f621: /* 85f621: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 85f623: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 85f626: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 85f629: mov edx, dword ptr [eax + ecx] */
  edx = R32((uint32_t)(eax + ecx));
/* 85f62c: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 85f62f: mov eax, dword ptr [ecx + eax] */
  eax = R32((uint32_t)(ecx + eax));
/* 85f632: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 85f635: mov dword ptr [eax + edx*4], ecx */
  W32((uint32_t)(eax + edx*4), ecx);
/* 85f638: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 85f63a: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 85f63d: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 85f640: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 85f643: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85f646: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 85f647: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 85f649: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
L_85f64c: /* 85f64c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 85f64d: jmp 0x85f5b0 */
  goto L_85f5b0;
L_85f652: /* 85f652: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 85f655: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 85f658: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x85f65du); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 85f65d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85f65f: jne 0x85f856 */
  if (!zf) goto L_85f856;
L_85f665: /* 85f665: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 85f668: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 85f66b: test dword ptr [edx + 0x534], 0x20000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x534u))); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85f675: je 0x85f856 */
  if (zf) goto L_85f856;
L_85f67b: /* 85f67b: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 85f67e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 85f680: mov ecx, esi */
  ecx = esi;
/* 85f682: call dword ptr [eax + 0x170] */
  { uint32_t t = R32((uint32_t)(eax + 0x170u)); esp -= 4; W32(esp, 0x85f688u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85f688: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 85f68b: xor ebx, ebx */
  ebx = 0;
L_85f68d: /* 85f68d: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 85f690: cmp ebx, dword ptr [ecx + 0x270] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x270u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85f696: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 85f699: jge 0x85f859 */
  if ((sf == of)) goto L_85f859;
L_85f69f: /* 85f69f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 85f6a2: mov edi, ecx */
  edi = ecx;
/* 85f6a4: mov edx, dword ptr [edi + 0x26c] */
  edx = R32((uint32_t)(edi + 0x26cu));
/* 85f6aa: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 85f6ac: mov esi, dword ptr [edx + ebx*4] */
  esi = R32((uint32_t)(edx + ebx*4));
/* 85f6af: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 85f6b5: fld dword ptr [edx + 0x3ac] */
  { double v = F32((uint32_t)(edx + 0x3acu)); FPUSH(v); }
/* 85f6bb: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 85f6bd: add edi, 0x26c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x26cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85f6c3: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85f6c6: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 85f6c9: call 0x6ca46b */
  esp -= 4; W32(esp, 0x85f6ceu); SPILL(); f_6ca46b(); if (g_unwind) return; RELOAD();
/* 85f6ce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85f6d0: jne 0x85f701 */
  if (!zf) goto L_85f701;
L_85f6d2: /* 85f6d2: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 85f6d4: mov esi, dword ptr [eax + ebx*4] */
  esi = R32((uint32_t)(eax + ebx*4));
/* 85f6d7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85f6d9: je 0x85f6f0 */
  if (zf) goto L_85f6f0;
L_85f6db: /* 85f6db: mov ecx, esi */
  ecx = esi;
/* 85f6dd: call 0x6c3684 */
  esp -= 4; W32(esp, 0x85f6e2u); SPILL(); f_6c3684(); if (g_unwind) return; RELOAD();
/* 85f6e2: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 85f6e8: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 85f6ea: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 85f6ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85f6ed: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x85f6f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_85f6f0: /* 85f6f0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 85f6f2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85f6f3: mov ecx, edi */
  ecx = edi;
/* 85f6f5: call 0x6c1cfd */
  esp -= 4; W32(esp, 0x85f6fau); SPILL(); f_6c1cfd(); if (g_unwind) return; RELOAD();
/* 85f6fa: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 85f6fd: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 85f6fe: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85f6ff: jmp 0x85f68d */
  goto L_85f68d;
L_85f701: /* 85f701: mov edx, dword ptr [0xcd8ad8] */
  edx = R32((uint32_t)(0xcd8ad8u));
/* 85f707: xor edi, edi */
  edi = 0;
/* 85f709: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_85f710: /* 85f710: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85f712: je 0x85f752 */
  if (zf) goto L_85f752;
L_85f714: /* 85f714: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 85f716: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 85f718: mov ebx, dword ptr [eax + 0x10] */
  ebx = R32((uint32_t)(eax + 0x10u));
/* 85f71b: cmp ebx, dword ptr [ecx + 0x18] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85f71e: jne 0x85f74d */
  if (!zf) goto L_85f74d;
L_85f720: /* 85f720: movzx ebx, byte ptr [ecx + 0x21] */
  ebx = (uint32_t)(R8((uint32_t)(ecx + 0x21u)));
/* 85f724: cmp dword ptr [eax + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85f727: jne 0x85f74d */
  if (!zf) goto L_85f74d;
L_85f729: /* 85f729: movzx ecx, byte ptr [ecx + 0x20] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0x20u)));
/* 85f72d: cmp dword ptr [eax + 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85f730: jne 0x85f74d */
  if (!zf) goto L_85f74d;
L_85f732: /* 85f732: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 85f735: cmp ecx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85f738: jne 0x85f74d */
  if (!zf) goto L_85f74d;
L_85f73a: /* 85f73a: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 85f73d: cmp ecx, dword ptr [esi + 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85f740: jne 0x85f74d */
  if (!zf) goto L_85f74d;
L_85f742: /* 85f742: cmp dword ptr [eax + 0x24], 0x186a0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x24u))); uint32_t b = (uint32_t)(0x186a0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85f749: jge 0x85f74d */
  if ((sf == of)) goto L_85f74d;
L_85f74b: /* 85f74b: mov edi, eax */
  edi = eax;
L_85f74d: /* 85f74d: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 85f750: jmp 0x85f710 */
  goto L_85f710;
L_85f752: /* 85f752: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85f754: jne 0x85f7f8 */
  if (!zf) goto L_85f7f8;
L_85f75a: /* 85f75a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 85f75c: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 85f75e: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 85f763: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x85f769u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 85f769: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85f76b: je 0x85f7c7 */
  if (zf) goto L_85f7c7;
L_85f76d: /* 85f76d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 85f76f: movzx edx, byte ptr [ecx + 0x20] */
  edx = (uint32_t)(R8((uint32_t)(ecx + 0x20u)));
/* 85f773: movzx edi, byte ptr [ecx + 0x21] */
  edi = (uint32_t)(R8((uint32_t)(ecx + 0x21u)));
/* 85f777: mov ecx, dword ptr [ecx + 0x18] */
  ecx = R32((uint32_t)(ecx + 0x18u));
/* 85f77a: mov ebx, dword ptr [esi + 0x2c] */
  ebx = R32((uint32_t)(esi + 0x2cu));
/* 85f77d: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 85f780: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 85f783: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 85f786: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85f789: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 85f78c: xor ecx, ecx */
  ecx = 0;
/* 85f78e: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85f790: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 85f797: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 85f79d: mov dword ptr [eax + 8], 0 */
  W32((uint32_t)(eax + 0x8u), 0x0u);
/* 85f7a4: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 85f7a7: mov dword ptr [eax + 0x18], edi */
  W32((uint32_t)(eax + 0x18u), edi);
/* 85f7aa: mov dword ptr [eax + 0x1c], ebx */
  W32((uint32_t)(eax + 0x1cu), ebx);
/* 85f7ad: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* 85f7b0: mov dword ptr [eax + 0x28], ecx */
  W32((uint32_t)(eax + 0x28u), ecx);
/* 85f7b3: mov dword ptr [eax + 0x20], 0x1c */
  W32((uint32_t)(eax + 0x20u), 0x1cu);
/* 85f7ba: je 0x85f7c3 */
  if (zf) goto L_85f7c3;
L_85f7bc: /* 85f7bc: mov dword ptr [eax + 0x20], 0x24 */
  W32((uint32_t)(eax + 0x20u), 0x24u);
L_85f7c3: /* 85f7c3: mov edi, eax */
  edi = eax;
/* 85f7c5: jmp 0x85f7c9 */
  goto L_85f7c9;
L_85f7c7: /* 85f7c7: xor edi, edi */
  edi = 0;
L_85f7c9: /* 85f7c9: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 85f7cb: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 85f7cd: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 85f7d2: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x85f7d8u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 85f7d8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85f7da: je 0x85f7ee */
  if (zf) goto L_85f7ee;
L_85f7dc: /* 85f7dc: mov ecx, dword ptr [0xcd8ad8] */
  ecx = R32((uint32_t)(0xcd8ad8u));
/* 85f7e2: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 85f7e4: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 85f7e7: mov dword ptr [0xcd8ad8], eax */
  W32((uint32_t)(0xcd8ad8u), eax);
/* 85f7ec: jmp 0x85f7f8 */
  goto L_85f7f8;
L_85f7ee: /* 85f7ee: mov dword ptr [0xcd8ad8], 0 */
  W32((uint32_t)(0xcd8ad8u), 0x0u);
L_85f7f8: /* 85f7f8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 85f7fa: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 85f7fc: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 85f801: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x85f807u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 85f807: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85f809: je 0x85f824 */
  if (zf) goto L_85f824;
L_85f80b: /* 85f80b: mov dword ptr [eax + 0xc], esi */
  W32((uint32_t)(eax + 0xcu), esi);
/* 85f80e: mov dword ptr [eax], 0xa16b44 */
  W32((uint32_t)(eax), 0xa16b44u);
/* 85f814: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 85f817: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 85f81a: mov esi, dword ptr [esi + 0x24] */
  esi = R32((uint32_t)(esi + 0x24u));
/* 85f81d: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 85f820: mov esi, eax */
  esi = eax;
/* 85f822: jmp 0x85f826 */
  goto L_85f826;
L_85f824: /* 85f824: xor esi, esi */
  esi = 0;
L_85f826: /* 85f826: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85f827: mov ecx, edi */
  ecx = edi;
/* 85f829: call 0x6c503d */
  esp -= 4; W32(esp, 0x85f82eu); SPILL(); f_6c503d(); if (g_unwind) return; RELOAD();
/* 85f82e: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 85f831: imul edx, dword ptr [edi + 0x20] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi + 0x20u)));
  edx = (uint32_t)r;
  }
/* 85f835: mov ebx, dword ptr [edi + 0x24] */
  ebx = R32((uint32_t)(edi + 0x24u));
/* 85f838: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 85f83b: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 85f83d: mov dword ptr [edi + 0x24], ebx */
  W32((uint32_t)(edi + 0x24u), ebx);
/* 85f840: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 85f843: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85f846: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 85f849: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 85f84b: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 85f84d: mov dword ptr [edi + 0x28], ecx */
  W32((uint32_t)(edi + 0x28u), ecx);
/* 85f850: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85f851: jmp 0x85f68d */
  goto L_85f68d;
L_85f856: /* 85f856: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
L_85f859: /* 85f859: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85f85c: mov eax, dword ptr [ecx + 0x168] */
  eax = R32((uint32_t)(ecx + 0x168u));
/* 85f862: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85f864: je 0x85f89e */
  if (zf) goto L_85f89e;
L_85f866: /* 85f866: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 85f86c: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85f86f: je 0x85f89e */
  if (zf) goto L_85f89e;
L_85f871: /* 85f871: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 85f873: mov ecx, esi */
  ecx = esi;
/* 85f875: call dword ptr [edx + 0x13c] */
  { uint32_t t = R32((uint32_t)(edx + 0x13cu)); esp -= 4; W32(esp, 0x85f87bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85f87b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85f87d: je 0x85f9e2 */
  if (zf) goto L_85f9e2;
L_85f883: /* 85f883: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 85f889: mov edx, dword ptr [ecx + 0x15220] */
  edx = R32((uint32_t)(ecx + 0x15220u));
/* 85f88f: push 0x6c8607 */
  { uint32_t v = 0x6c8607u; esp -= 4; W32(esp, v); }
/* 85f894: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85f895: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85f896: call 0x6c9a89 */
  esp -= 4; W32(esp, 0x85f89bu); SPILL(); f_6c9a89(); if (g_unwind) return; RELOAD();
/* 85f89b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_85f89e: /* 85f89e: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
L_85f8a1: /* 85f8a1: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 85f8a4: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 85f8a7: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 85f8aa: mov edx, dword ptr [eax + 0x534] */
  edx = R32((uint32_t)(eax + 0x534u));
/* 85f8b0: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 85f8b2: jns 0x85fa1c */
  if (!sf) goto L_85fa1c;
L_85f8b8: /* 85f8b8: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 85f8bb: mov eax, dword ptr [esi + 0x104] */
  eax = R32((uint32_t)(esi + 0x104u));
/* 85f8c1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85f8c3: je 0x85fa1c */
  if (zf) goto L_85fa1c;
L_85f8c9: /* 85f8c9: mov eax, dword ptr [esi + 0x124] */
  eax = R32((uint32_t)(esi + 0x124u));
/* 85f8cf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85f8d1: jne 0x85f8eb */
  if (!zf) goto L_85f8eb;
L_85f8d3: /* 85f8d3: mov eax, dword ptr [esi + 0x120] */
  eax = R32((uint32_t)(esi + 0x120u));
/* 85f8d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85f8db: jne 0x85f8eb */
  if (!zf) goto L_85f8eb;
L_85f8dd: /* 85f8dd: mov eax, dword ptr [esi + 0x12c] */
  eax = R32((uint32_t)(esi + 0x12cu));
/* 85f8e3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85f8e5: je 0x85fa1c */
  if (zf) goto L_85fa1c;
L_85f8eb: /* 85f8eb: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x85f8f1u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 85f8f1: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 85f8f4: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 85f8f6: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 85f8f9: mov ecx, edi */
  ecx = edi;
/* 85f8fb: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x85f8fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85f8fd: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 85f900: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 85f902: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 85f905: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85f906: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85f908: mov ecx, edi */
  ecx = edi;
/* 85f90a: call dword ptr [eax + 0x38] */
  { uint32_t t = R32((uint32_t)(eax + 0x38u)); esp -= 4; W32(esp, 0x85f90du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85f90d: xor ebx, ebx */
  ebx = 0;
L_85f90f: /* 85f90f: mov eax, dword ptr [esi + 0x104] */
  eax = R32((uint32_t)(esi + 0x104u));
/* 85f915: cmp ebx, dword ptr [eax + 0x5c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x5cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85f918: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 85f91b: jge 0x85fa15 */
  if ((sf == of)) goto L_85fa15;
L_85f921: /* 85f921: mov ecx, dword ptr [eax + 0x58] */
  ecx = R32((uint32_t)(eax + 0x58u));
/* 85f924: imul ebx, ebx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x78u);
  ebx = (uint32_t)r;
  }
/* 85f927: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 85f929: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 85f92c: xor esi, esi */
  esi = 0;
L_85f92e: /* 85f92e: movzx edx, byte ptr [ebx + 0x56] */
  edx = (uint32_t)(R8((uint32_t)(ebx + 0x56u)));
/* 85f932: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85f934: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 85f937: jge 0x85fa09 */
  if ((sf == of)) goto L_85fa09;
L_85f93d: /* 85f93d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 85f93f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85f940: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 85f943: call 0x6c460b */
  esp -= 4; W32(esp, 0x85f948u); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 85f948: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 85f94b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 85f94e: mov eax, dword ptr [eax + 0x104] */
  eax = R32((uint32_t)(eax + 0x104u));
/* 85f954: mov edi, dword ptr [eax + 0x68] */
  edi = R32((uint32_t)(eax + 0x68u));
/* 85f957: mov ecx, dword ptr [eax + 0x88] */
  ecx = R32((uint32_t)(eax + 0x88u));
/* 85f95d: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85f960: mov eax, dword ptr [eax + 0xe4] */
  eax = R32((uint32_t)(eax + 0xe4u));
/* 85f966: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85f967: lea edx, [esi + 1] */
  edx = (uint32_t)(esi + 0x1u);
/* 85f96a: mov esi, dword ptr [ebx + 0x18] */
  esi = R32((uint32_t)(ebx + 0x18u));
/* 85f96d: movzx ebx, byte ptr [ebx + 0x56] */
  ebx = (uint32_t)(R8((uint32_t)(ebx + 0x56u)));
/* 85f971: mov eax, edx */
  eax = edx;
/* 85f973: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 85f976: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 85f977: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0x85f977);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 85f979: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85f97c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 85f980: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 85f982: mov eax, dword ptr [edi + edx*8] */
  eax = R32((uint32_t)(edi + edx*8));
/* 85f985: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 85f988: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 85f98b: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 85f98d: mov edx, esp */
  edx = esp;
/* 85f98f: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 85f991: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 85f994: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 85f997: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 85f99a: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 85f99d: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 85f9a0: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 85f9a2: mov edi, dword ptr [edi + esi*8] */
  edi = R32((uint32_t)(edi + esi*8));
/* 85f9a5: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 85f9a8: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 85f9ab: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 85f9ad: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85f9b0: mov edx, esp */
  edx = esp;
/* 85f9b2: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 85f9b4: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 85f9b7: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 85f9ba: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 85f9bd: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 85f9c0: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 85f9c3: call 0x6cc74d */
  esp -= 4; W32(esp, 0x85f9c8u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 85f9c8: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 85f9cb: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 85f9cf: call 0x6cadcb */
  esp -= 4; W32(esp, 0x85f9d4u); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
/* 85f9d4: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 85f9d7: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 85f9da: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 85f9dd: jmp 0x85f92e */
  goto L_85f92e;
L_85f9e2: /* 85f9e2: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 85f9e5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 85f9e8: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 85f9eb: mov eax, dword ptr [edx + 0x534] */
  eax = R32((uint32_t)(edx + 0x534u));
/* 85f9f1: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 85f9f4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85f9f7: mov ecx, dword ptr [ecx + 0x168] */
  ecx = R32((uint32_t)(ecx + 0x168u));
/* 85f9fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85f9fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85f9ff: call 0x6cb9ec */
  esp -= 4; W32(esp, 0x85fa04u); SPILL(); f_6cb9ec(); if (g_unwind) return; RELOAD();
/* 85fa04: jmp 0x85f8a1 */
  goto L_85f8a1;
L_85fa09: /* 85fa09: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85fa0c: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 85fa0f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85fa10: jmp 0x85f90f */
  goto L_85f90f;
L_85fa15: /* 85fa15: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 85fa17: mov ecx, edi */
  ecx = edi;
/* 85fa19: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x85fa1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_85fa1c: /* 85fa1c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 85fa1f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85fa20: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85fa21: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 85fa28: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85fa29: mov esp, ebp */
  esp = ebp;
/* 85fa2b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85fa2c: ret  */
  esp += 4; SPILL(); return;
}

void f_85f5ad(void) {
  LOAD_REGS();
L_85f5ad: /* 85f5ad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_85f5b0: /* 85f5b0: cmp edi, dword ptr [edx + 0x58] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85f5b3: jge 0x85f652 */
  if ((sf == of)) goto L_85f652;
L_85f5b9: /* 85f5b9: mov eax, dword ptr [ecx + 0x70] */
  eax = R32((uint32_t)(ecx + 0x70u));
/* 85f5bc: lea esi, [eax + edi*8] */
  esi = (uint32_t)(eax + edi*8);
/* 85f5bf: cmp dword ptr [esi + 4], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85f5c3: je 0x85f64c */
  if (zf) goto L_85f64c;
L_85f5c9: /* 85f5c9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 85f5cb: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 85f5ce: cmp dword ptr [ecx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85f5d2: jne 0x85f621 */
  if (!zf) goto L_85f621;
L_85f5d4: /* 85f5d4: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 85f5d7: mov ecx, dword ptr [edx + 0x1bc] */
  ecx = R32((uint32_t)(edx + 0x1bcu));
/* 85f5dd: lea edx, [eax + eax*8] */
  edx = (uint32_t)(eax + eax*8);
/* 85f5e0: mov eax, dword ptr [ecx + 0x1110] */
  eax = R32((uint32_t)(ecx + 0x1110u));
/* 85f5e6: mov eax, dword ptr [eax + edx*8 + 0xc] */
  eax = R32((uint32_t)(eax + edx*8 + 0xcu));
/* 85f5ea: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* 85f5f1: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 85f5f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85f5f4: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 85f5f9: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x85f5ffu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 85f5ff: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 85f601: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 85f604: mov dword ptr [ecx + edx*4], eax */
  W32((uint32_t)(ecx + edx*4), eax);
/* 85f607: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 85f609: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 85f60c: mov dword ptr [eax + edx*4], 0 */
  W32((uint32_t)(eax + edx*4), 0x0u);
/* 85f613: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 85f615: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 85f618: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 85f61b: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 85f61e: inc dword ptr [ebx + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebx + 0x10u), r);
  }
L_85f621: /* 85f621: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 85f623: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 85f626: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 85f629: mov edx, dword ptr [eax + ecx] */
  edx = R32((uint32_t)(eax + ecx));
/* 85f62c: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 85f62f: mov eax, dword ptr [ecx + eax] */
  eax = R32((uint32_t)(ecx + eax));
/* 85f632: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 85f635: mov dword ptr [eax + edx*4], ecx */
  W32((uint32_t)(eax + edx*4), ecx);
/* 85f638: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 85f63a: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 85f63d: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 85f640: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 85f643: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85f646: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 85f647: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 85f649: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
L_85f64c: /* 85f64c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 85f64d: jmp 0x85f5b0 */
  goto L_85f5b0;
L_85f652: /* 85f652: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 85f655: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 85f658: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x85f65du); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 85f65d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85f65f: jne 0x85f856 */
  if (!zf) goto L_85f856;
L_85f665: /* 85f665: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 85f668: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 85f66b: test dword ptr [edx + 0x534], 0x20000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x534u))); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85f675: je 0x85f856 */
  if (zf) goto L_85f856;
L_85f67b: /* 85f67b: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 85f67e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 85f680: mov ecx, esi */
  ecx = esi;
/* 85f682: call dword ptr [eax + 0x170] */
  { uint32_t t = R32((uint32_t)(eax + 0x170u)); esp -= 4; W32(esp, 0x85f688u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85f688: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 85f68b: xor ebx, ebx */
  ebx = 0;
L_85f68d: /* 85f68d: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 85f690: cmp ebx, dword ptr [ecx + 0x270] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x270u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85f696: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 85f699: jge 0x85f859 */
  if ((sf == of)) goto L_85f859;
L_85f69f: /* 85f69f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 85f6a2: mov edi, ecx */
  edi = ecx;
/* 85f6a4: mov edx, dword ptr [edi + 0x26c] */
  edx = R32((uint32_t)(edi + 0x26cu));
/* 85f6aa: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 85f6ac: mov esi, dword ptr [edx + ebx*4] */
  esi = R32((uint32_t)(edx + ebx*4));
/* 85f6af: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 85f6b5: fld dword ptr [edx + 0x3ac] */
  { double v = F32((uint32_t)(edx + 0x3acu)); FPUSH(v); }
/* 85f6bb: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 85f6bd: add edi, 0x26c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x26cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85f6c3: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85f6c6: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 85f6c9: call 0x6ca46b */
  esp -= 4; W32(esp, 0x85f6ceu); SPILL(); f_6ca46b(); if (g_unwind) return; RELOAD();
/* 85f6ce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85f6d0: jne 0x85f701 */
  if (!zf) goto L_85f701;
L_85f6d2: /* 85f6d2: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 85f6d4: mov esi, dword ptr [eax + ebx*4] */
  esi = R32((uint32_t)(eax + ebx*4));
/* 85f6d7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85f6d9: je 0x85f6f0 */
  if (zf) goto L_85f6f0;
L_85f6db: /* 85f6db: mov ecx, esi */
  ecx = esi;
/* 85f6dd: call 0x6c3684 */
  esp -= 4; W32(esp, 0x85f6e2u); SPILL(); f_6c3684(); if (g_unwind) return; RELOAD();
/* 85f6e2: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 85f6e8: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 85f6ea: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 85f6ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85f6ed: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x85f6f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_85f6f0: /* 85f6f0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 85f6f2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85f6f3: mov ecx, edi */
  ecx = edi;
/* 85f6f5: call 0x6c1cfd */
  esp -= 4; W32(esp, 0x85f6fau); SPILL(); f_6c1cfd(); if (g_unwind) return; RELOAD();
/* 85f6fa: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 85f6fd: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 85f6fe: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85f6ff: jmp 0x85f68d */
  goto L_85f68d;
L_85f701: /* 85f701: mov edx, dword ptr [0xcd8ad8] */
  edx = R32((uint32_t)(0xcd8ad8u));
/* 85f707: xor edi, edi */
  edi = 0;
/* 85f709: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_85f710: /* 85f710: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85f712: je 0x85f752 */
  if (zf) goto L_85f752;
L_85f714: /* 85f714: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 85f716: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 85f718: mov ebx, dword ptr [eax + 0x10] */
  ebx = R32((uint32_t)(eax + 0x10u));
/* 85f71b: cmp ebx, dword ptr [ecx + 0x18] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85f71e: jne 0x85f74d */
  if (!zf) goto L_85f74d;
L_85f720: /* 85f720: movzx ebx, byte ptr [ecx + 0x21] */
  ebx = (uint32_t)(R8((uint32_t)(ecx + 0x21u)));
/* 85f724: cmp dword ptr [eax + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85f727: jne 0x85f74d */
  if (!zf) goto L_85f74d;
L_85f729: /* 85f729: movzx ecx, byte ptr [ecx + 0x20] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0x20u)));
/* 85f72d: cmp dword ptr [eax + 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85f730: jne 0x85f74d */
  if (!zf) goto L_85f74d;
L_85f732: /* 85f732: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 85f735: cmp ecx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85f738: jne 0x85f74d */
  if (!zf) goto L_85f74d;
L_85f73a: /* 85f73a: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 85f73d: cmp ecx, dword ptr [esi + 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85f740: jne 0x85f74d */
  if (!zf) goto L_85f74d;
L_85f742: /* 85f742: cmp dword ptr [eax + 0x24], 0x186a0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x24u))); uint32_t b = (uint32_t)(0x186a0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85f749: jge 0x85f74d */
  if ((sf == of)) goto L_85f74d;
L_85f74b: /* 85f74b: mov edi, eax */
  edi = eax;
L_85f74d: /* 85f74d: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 85f750: jmp 0x85f710 */
  goto L_85f710;
L_85f752: /* 85f752: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85f754: jne 0x85f7f8 */
  if (!zf) goto L_85f7f8;
L_85f75a: /* 85f75a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 85f75c: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 85f75e: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 85f763: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x85f769u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 85f769: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85f76b: je 0x85f7c7 */
  if (zf) goto L_85f7c7;
L_85f76d: /* 85f76d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 85f76f: movzx edx, byte ptr [ecx + 0x20] */
  edx = (uint32_t)(R8((uint32_t)(ecx + 0x20u)));
/* 85f773: movzx edi, byte ptr [ecx + 0x21] */
  edi = (uint32_t)(R8((uint32_t)(ecx + 0x21u)));
/* 85f777: mov ecx, dword ptr [ecx + 0x18] */
  ecx = R32((uint32_t)(ecx + 0x18u));
/* 85f77a: mov ebx, dword ptr [esi + 0x2c] */
  ebx = R32((uint32_t)(esi + 0x2cu));
/* 85f77d: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 85f780: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 85f783: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 85f786: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85f789: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 85f78c: xor ecx, ecx */
  ecx = 0;
/* 85f78e: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85f790: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 85f797: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 85f79d: mov dword ptr [eax + 8], 0 */
  W32((uint32_t)(eax + 0x8u), 0x0u);
/* 85f7a4: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 85f7a7: mov dword ptr [eax + 0x18], edi */
  W32((uint32_t)(eax + 0x18u), edi);
/* 85f7aa: mov dword ptr [eax + 0x1c], ebx */
  W32((uint32_t)(eax + 0x1cu), ebx);
/* 85f7ad: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* 85f7b0: mov dword ptr [eax + 0x28], ecx */
  W32((uint32_t)(eax + 0x28u), ecx);
/* 85f7b3: mov dword ptr [eax + 0x20], 0x1c */
  W32((uint32_t)(eax + 0x20u), 0x1cu);
/* 85f7ba: je 0x85f7c3 */
  if (zf) goto L_85f7c3;
L_85f7bc: /* 85f7bc: mov dword ptr [eax + 0x20], 0x24 */
  W32((uint32_t)(eax + 0x20u), 0x24u);
L_85f7c3: /* 85f7c3: mov edi, eax */
  edi = eax;
/* 85f7c5: jmp 0x85f7c9 */
  goto L_85f7c9;
L_85f7c7: /* 85f7c7: xor edi, edi */
  edi = 0;
L_85f7c9: /* 85f7c9: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 85f7cb: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 85f7cd: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 85f7d2: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x85f7d8u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 85f7d8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85f7da: je 0x85f7ee */
  if (zf) goto L_85f7ee;
L_85f7dc: /* 85f7dc: mov ecx, dword ptr [0xcd8ad8] */
  ecx = R32((uint32_t)(0xcd8ad8u));
/* 85f7e2: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 85f7e4: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 85f7e7: mov dword ptr [0xcd8ad8], eax */
  W32((uint32_t)(0xcd8ad8u), eax);
/* 85f7ec: jmp 0x85f7f8 */
  goto L_85f7f8;
L_85f7ee: /* 85f7ee: mov dword ptr [0xcd8ad8], 0 */
  W32((uint32_t)(0xcd8ad8u), 0x0u);
L_85f7f8: /* 85f7f8: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 85f7fa: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 85f7fc: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 85f801: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x85f807u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 85f807: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85f809: je 0x85f824 */
  if (zf) goto L_85f824;
L_85f80b: /* 85f80b: mov dword ptr [eax + 0xc], esi */
  W32((uint32_t)(eax + 0xcu), esi);
/* 85f80e: mov dword ptr [eax], 0xa16b44 */
  W32((uint32_t)(eax), 0xa16b44u);
/* 85f814: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 85f817: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 85f81a: mov esi, dword ptr [esi + 0x24] */
  esi = R32((uint32_t)(esi + 0x24u));
/* 85f81d: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 85f820: mov esi, eax */
  esi = eax;
/* 85f822: jmp 0x85f826 */
  goto L_85f826;
L_85f824: /* 85f824: xor esi, esi */
  esi = 0;
L_85f826: /* 85f826: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85f827: mov ecx, edi */
  ecx = edi;
/* 85f829: call 0x6c503d */
  esp -= 4; W32(esp, 0x85f82eu); SPILL(); f_6c503d(); if (g_unwind) return; RELOAD();
/* 85f82e: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 85f831: imul edx, dword ptr [edi + 0x20] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi + 0x20u)));
  edx = (uint32_t)r;
  }
/* 85f835: mov ebx, dword ptr [edi + 0x24] */
  ebx = R32((uint32_t)(edi + 0x24u));
/* 85f838: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 85f83b: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 85f83d: mov dword ptr [edi + 0x24], ebx */
  W32((uint32_t)(edi + 0x24u), ebx);
/* 85f840: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 85f843: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85f846: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 85f849: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 85f84b: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 85f84d: mov dword ptr [edi + 0x28], ecx */
  W32((uint32_t)(edi + 0x28u), ecx);
/* 85f850: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85f851: jmp 0x85f68d */
  goto L_85f68d;
L_85f856: /* 85f856: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
L_85f859: /* 85f859: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85f85c: mov eax, dword ptr [ecx + 0x168] */
  eax = R32((uint32_t)(ecx + 0x168u));
/* 85f862: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85f864: je 0x85f89e */
  if (zf) goto L_85f89e;
L_85f866: /* 85f866: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 85f86c: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85f86f: je 0x85f89e */
  if (zf) goto L_85f89e;
L_85f871: /* 85f871: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 85f873: mov ecx, esi */
  ecx = esi;
/* 85f875: call dword ptr [edx + 0x13c] */
  { uint32_t t = R32((uint32_t)(edx + 0x13cu)); esp -= 4; W32(esp, 0x85f87bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85f87b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85f87d: je 0x85f9e2 */
  if (zf) goto L_85f9e2;
L_85f883: /* 85f883: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 85f889: mov edx, dword ptr [ecx + 0x15220] */
  edx = R32((uint32_t)(ecx + 0x15220u));
/* 85f88f: push 0x6c8607 */
  { uint32_t v = 0x6c8607u; esp -= 4; W32(esp, v); }
/* 85f894: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85f895: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85f896: call 0x6c9a89 */
  esp -= 4; W32(esp, 0x85f89bu); SPILL(); f_6c9a89(); if (g_unwind) return; RELOAD();
/* 85f89b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_85f89e: /* 85f89e: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
L_85f8a1: /* 85f8a1: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 85f8a4: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 85f8a7: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 85f8aa: mov edx, dword ptr [eax + 0x534] */
  edx = R32((uint32_t)(eax + 0x534u));
/* 85f8b0: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 85f8b2: jns 0x85fa1c */
  if (!sf) goto L_85fa1c;
L_85f8b8: /* 85f8b8: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 85f8bb: mov eax, dword ptr [esi + 0x104] */
  eax = R32((uint32_t)(esi + 0x104u));
/* 85f8c1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85f8c3: je 0x85fa1c */
  if (zf) goto L_85fa1c;
L_85f8c9: /* 85f8c9: mov eax, dword ptr [esi + 0x124] */
  eax = R32((uint32_t)(esi + 0x124u));
/* 85f8cf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85f8d1: jne 0x85f8eb */
  if (!zf) goto L_85f8eb;
L_85f8d3: /* 85f8d3: mov eax, dword ptr [esi + 0x120] */
  eax = R32((uint32_t)(esi + 0x120u));
/* 85f8d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85f8db: jne 0x85f8eb */
  if (!zf) goto L_85f8eb;
L_85f8dd: /* 85f8dd: mov eax, dword ptr [esi + 0x12c] */
  eax = R32((uint32_t)(esi + 0x12cu));
/* 85f8e3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85f8e5: je 0x85fa1c */
  if (zf) goto L_85fa1c;
L_85f8eb: /* 85f8eb: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x85f8f1u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 85f8f1: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 85f8f4: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 85f8f6: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 85f8f9: mov ecx, edi */
  ecx = edi;
/* 85f8fb: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x85f8fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85f8fd: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 85f900: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 85f902: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 85f905: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85f906: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85f908: mov ecx, edi */
  ecx = edi;
/* 85f90a: call dword ptr [eax + 0x38] */
  { uint32_t t = R32((uint32_t)(eax + 0x38u)); esp -= 4; W32(esp, 0x85f90du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85f90d: xor ebx, ebx */
  ebx = 0;
L_85f90f: /* 85f90f: mov eax, dword ptr [esi + 0x104] */
  eax = R32((uint32_t)(esi + 0x104u));
/* 85f915: cmp ebx, dword ptr [eax + 0x5c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x5cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85f918: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 85f91b: jge 0x85fa15 */
  if ((sf == of)) goto L_85fa15;
L_85f921: /* 85f921: mov ecx, dword ptr [eax + 0x58] */
  ecx = R32((uint32_t)(eax + 0x58u));
/* 85f924: imul ebx, ebx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x78u);
  ebx = (uint32_t)r;
  }
/* 85f927: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 85f929: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 85f92c: xor esi, esi */
  esi = 0;
L_85f92e: /* 85f92e: movzx edx, byte ptr [ebx + 0x56] */
  edx = (uint32_t)(R8((uint32_t)(ebx + 0x56u)));
/* 85f932: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85f934: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 85f937: jge 0x85fa09 */
  if ((sf == of)) goto L_85fa09;
L_85f93d: /* 85f93d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 85f93f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85f940: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 85f943: call 0x6c460b */
  esp -= 4; W32(esp, 0x85f948u); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 85f948: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 85f94b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 85f94e: mov eax, dword ptr [eax + 0x104] */
  eax = R32((uint32_t)(eax + 0x104u));
/* 85f954: mov edi, dword ptr [eax + 0x68] */
  edi = R32((uint32_t)(eax + 0x68u));
/* 85f957: mov ecx, dword ptr [eax + 0x88] */
  ecx = R32((uint32_t)(eax + 0x88u));
/* 85f95d: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 85f960: mov eax, dword ptr [eax + 0xe4] */
  eax = R32((uint32_t)(eax + 0xe4u));
/* 85f966: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85f967: lea edx, [esi + 1] */
  edx = (uint32_t)(esi + 0x1u);
/* 85f96a: mov esi, dword ptr [ebx + 0x18] */
  esi = R32((uint32_t)(ebx + 0x18u));
/* 85f96d: movzx ebx, byte ptr [ebx + 0x56] */
  ebx = (uint32_t)(R8((uint32_t)(ebx + 0x56u)));
/* 85f971: mov eax, edx */
  eax = edx;
/* 85f973: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 85f976: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 85f977: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0x85f977);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 85f979: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85f97c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 85f980: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 85f982: mov eax, dword ptr [edi + edx*8] */
  eax = R32((uint32_t)(edi + edx*8));
/* 85f985: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 85f988: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 85f98b: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 85f98d: mov edx, esp */
  edx = esp;
/* 85f98f: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 85f991: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 85f994: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 85f997: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 85f99a: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 85f99d: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 85f9a0: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 85f9a2: mov edi, dword ptr [edi + esi*8] */
  edi = R32((uint32_t)(edi + esi*8));
/* 85f9a5: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 85f9a8: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 85f9ab: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 85f9ad: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85f9b0: mov edx, esp */
  edx = esp;
/* 85f9b2: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 85f9b4: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 85f9b7: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 85f9ba: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 85f9bd: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 85f9c0: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 85f9c3: call 0x6cc74d */
  esp -= 4; W32(esp, 0x85f9c8u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 85f9c8: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 85f9cb: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 85f9cf: call 0x6cadcb */
  esp -= 4; W32(esp, 0x85f9d4u); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
/* 85f9d4: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 85f9d7: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 85f9da: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 85f9dd: jmp 0x85f92e */
  goto L_85f92e;
L_85f9e2: /* 85f9e2: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 85f9e5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 85f9e8: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 85f9eb: mov eax, dword ptr [edx + 0x534] */
  eax = R32((uint32_t)(edx + 0x534u));
/* 85f9f1: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 85f9f4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 85f9f7: mov ecx, dword ptr [ecx + 0x168] */
  ecx = R32((uint32_t)(ecx + 0x168u));
/* 85f9fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85f9fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85f9ff: call 0x6cb9ec */
  esp -= 4; W32(esp, 0x85fa04u); SPILL(); f_6cb9ec(); if (g_unwind) return; RELOAD();
/* 85fa04: jmp 0x85f8a1 */
  goto L_85f8a1;
L_85fa09: /* 85fa09: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85fa0c: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 85fa0f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 85fa10: jmp 0x85f90f */
  goto L_85f90f;
L_85fa15: /* 85fa15: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 85fa17: mov ecx, edi */
  ecx = edi;
/* 85fa19: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x85fa1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_85fa1c: /* 85fa1c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 85fa1f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 85fa20: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 85fa21: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 85fa28: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 85fa29: mov esp, ebp */
  esp = ebp;
/* 85fa2b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 85fa2c: ret  */
  esp += 4; SPILL(); return;
}

void f_85fa2d(void) {
  LOAD_REGS();
L_85fa2d: /* 85fa2d: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 85fa30: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 85fa35: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 85fa38: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85fa39: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 85fa3c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85fa41u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_85fa41(); return;
}

void f_85fa41(void) {
  LOAD_REGS();
L_85fa41: /* 85fa41: push 0xa17c08 */
  { uint32_t v = 0xa17c08u; esp -= 4; W32(esp, v); }
/* 85fa46: push 0xae50f0 */
  { uint32_t v = 0xae50f0u; esp -= 4; W32(esp, v); }
/* 85fa4b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x85fa51u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 85fa51: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 85fa54: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85fa56: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85fa58: call 0x99caf8 */
  esp -= 4; W32(esp, 0x85fa5du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_85fa5d: guest_badaddr(0x85fa5d); return;
}

void f_85fba0(void) {
  LOAD_REGS();
L_85fba0: /* 85fba0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 85fba1: mov ebp, esp */
  ebp = esp;
/* 85fba3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 85fba5: push 0x9d42aa */
  { uint32_t v = 0x9d42aau; esp -= 4; W32(esp, v); }
/* 85fbaa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 85fbb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85fbb1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 85fbb8: sub esp, 0xe0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85fbbe: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 85fbc3: mov ecx, dword ptr [0xce8428] */
  ecx = R32((uint32_t)(0xce8428u));
/* 85fbc9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85fbca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85fbcb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85fbcc: xor ebx, ebx */
  ebx = 0;
/* 85fbce: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 85fbd1: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 85fbd4: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 85fbd7: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 85fbd9: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 85fbdb: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 85fbe1: mov eax, dword ptr [0xce8420] */
  eax = R32((uint32_t)(0xce8420u));
/* 85fbe6: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 85fbe9: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 85fbeb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 85fbed: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 85fbf0: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 85fbf2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 85fbf4: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 85fbf6: mov eax, dword ptr [esi + 0x54] */
  eax = R32((uint32_t)(esi + 0x54u));
/* 85fbf9: cmp dword ptr [eax + 0x68], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x68u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85fbfc: mov dword ptr [ebp - 0x44], esi */
  W32((uint32_t)(ebp + 0xffffffbcu), esi);
/* 85fbff: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 85fc02: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 85fc05: je 0x8617db */
  if (zf) goto L_8617db;
L_85fc0b: /* 85fc0b: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 85fc0e: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 85fc10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85fc11: mov ecx, ebx */
  ecx = ebx;
/* 85fc13: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x85fc16u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85fc16: test dword ptr [esi + 0x88], 0x40000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85fc20: je 0x85fc96 */
  if (zf) goto L_85fc96;
L_85fc22: /* 85fc22: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 85fc25: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 85fc28: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 85fc2b: test dword ptr [edx + 0x534], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x534u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85fc35: je 0x85fc96 */
  if (zf) goto L_85fc96;
L_85fc37: /* 85fc37: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85fc3a: add edi, 0xa8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xa8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85fc40: mov ecx, esp */
  ecx = esp;
/* 85fc42: mov dword ptr [ebp - 0x24], esp */
  W32((uint32_t)(ebp + 0xffffffdcu), esp);
/* 85fc45: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85fc46: call dword ptr [0xcfa268] */
  esp -= 4; W32(esp, 0x85fc4cu); SPILL(); f_4e1dac(); if (g_unwind) return; /* Core!??0FSphere@@QAE@ABV0@@Z */ RELOAD();
/* 85fc4c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 85fc4f: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 85fc52: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 85fc55: mov edi, dword ptr [ecx + 0x540] */
  edi = R32((uint32_t)(ecx + 0x540u));
/* 85fc5b: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 85fc5d: xor edx, edx */
  edx = 0;
/* 85fc5f: cmp edi, 7 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85fc62: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 85fc65: mov ecx, ebx */
  ecx = ebx;
/* 85fc67: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85fc68: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85fc6a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85fc6c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 85fc6e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 85fc70: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x85fc73u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85fc73: mov al, 0x66 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x66u) & 0xffu);
/* 85fc75: mov byte ptr [ebp - 0x20], al */
  W8((uint32_t)(ebp + 0xffffffe0u), (eax & 0xffu));
/* 85fc78: mov byte ptr [ebp - 0x1e], al */
  W8((uint32_t)(ebp + 0xffffffe2u), (eax & 0xffu));
/* 85fc7b: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 85fc7d: mov byte ptr [ebp - 0x1f], 0xff */
  W8((uint32_t)(ebp + 0xffffffe1u), 0xffu);
/* 85fc81: mov byte ptr [ebp - 0x1d], 0xff */
  W8((uint32_t)(ebp + 0xffffffe3u), 0xffu);
/* 85fc85: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85fc88: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85fc89: mov ecx, ebx */
  ecx = ebx;
/* 85fc8b: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0x85fc8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_85fc8e: /* 85fc8e: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 85fc91: jmp 0x85ff98 */
  goto L_85ff98;
L_85fc96: /* 85fc96: test byte ptr [esi + 0x86], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x86u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85fc9d: je 0x85fcad */
  if (zf) goto L_85fcad;
L_85fc9f: /* 85fc9f: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* 85fca2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85fca4: je 0x85fcad */
  if (zf) goto L_85fcad;
L_85fca6: /* 85fca6: call 0x6cadd5 */
  esp -= 4; W32(esp, 0x85fcabu); SPILL(); f_6cadd5(); if (g_unwind) return; RELOAD();
/* 85fcab: jmp 0x85fcaf */
  goto L_85fcaf;
L_85fcad: /* 85fcad: mov eax, esi */
  eax = esi;
L_85fcaf: /* 85fcaf: mov ecx, dword ptr [eax + 0x84] */
  ecx = R32((uint32_t)(eax + 0x84u));
/* 85fcb5: test ch, 0x20 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85fcb8: jne 0x85ff39 */
  if (!zf) goto L_85ff39;
L_85fcbe: /* 85fcbe: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 85fcc1: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 85fcc4: mov ecx, edi */
  ecx = edi;
/* 85fcc6: call 0x6cbd7a */
  esp -= 4; W32(esp, 0x85fccbu); SPILL(); f_6cbd7a(); if (g_unwind) return; RELOAD();
/* 85fccb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85fccd: je 0x85ff36 */
  if (zf) goto L_85ff36;
L_85fcd3: /* 85fcd3: mov ecx, edi */
  ecx = edi;
/* 85fcd5: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x85fcdau); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 85fcda: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85fcdc: jne 0x85fc8e */
  if (!zf) goto L_85fc8e;
L_85fcde: /* 85fcde: mov esi, dword ptr [esi + 0x27c] */
  esi = R32((uint32_t)(esi + 0x27cu));
/* 85fce4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85fce6: je 0x85fdb1 */
  if (zf) goto L_85fdb1;
L_85fcec: /* 85fcec: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 85fcef: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 85fcf2: mov edi, dword ptr [ecx + 0x68] */
  edi = R32((uint32_t)(ecx + 0x68u));
/* 85fcf5: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85fcf7: jne 0x85fdb1 */
  if (!zf) goto L_85fdb1;
L_85fcfd: /* 85fcfd: xor ecx, ecx */
  ecx = 0;
/* 85fcff: nop  */
L_85fd00: /* 85fd00: cmp ecx, dword ptr [esi + 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85fd03: jge 0x85fd22 */
  if ((sf == of)) goto L_85fd22;
L_85fd05: /* 85fd05: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 85fd08: lea edx, [ecx + ecx*4] */
  edx = (uint32_t)(ecx + ecx*4);
/* 85fd0b: mov ebx, dword ptr [eax + edx*4 + 8] */
  ebx = R32((uint32_t)(eax + edx*4 + 0x8u));
/* 85fd0f: lea eax, [edi + 7] */
  eax = (uint32_t)(edi + 0x7u);
/* 85fd12: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 85fd13: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 85fd16: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 85fd18: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 85fd1b: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85fd1d: jne 0x85fd2e */
  if (!zf) goto L_85fd2e;
L_85fd1f: /* 85fd1f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 85fd20: jmp 0x85fd00 */
  goto L_85fd00;
L_85fd22: /* 85fd22: mov eax, 1 */
  eax = 0x1u;
/* 85fd27: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85fd29: je 0x85fd2e */
  if (zf) goto L_85fd2e;
L_85fd2b: /* 85fd2b: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
L_85fd2e: /* 85fd2e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 85fd31: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85fd33: je 0x85fdb1 */
  if (zf) goto L_85fdb1;
L_85fd35: /* 85fd35: xor esi, esi */
  esi = 0;
/* 85fd37: mov ebx, eax */
  ebx = eax;
/* 85fd39: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_85fd40: /* 85fd40: cmp esi, dword ptr [ebx + 0x2c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 85fd43: jge 0x85fd97 */
  if ((sf == of)) goto L_85fd97;
L_85fd45: /* 85fd45: mov edx, dword ptr [ebx + 0x28] */
  edx = R32((uint32_t)(ebx + 0x28u));
/* 85fd48: lea eax, [ebx + 0x28] */
  eax = (uint32_t)(ebx + 0x28u);
/* 85fd4b: lea ecx, [esi + esi*4] */
  ecx = (uint32_t)(esi + esi*4);
/* 85fd4e: lea edi, [edx + ecx*4] */
  edi = (uint32_t)(edx + ecx*4);
/* 85fd51: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 85fd53: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85fd55: jne 0x85fd6f */
  if (!zf) goto L_85fd6f;
L_85fd57: /* 85fd57: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 85fd59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85fd5a: mov ecx, eax */
  ecx = eax;
/* 85fd5c: call 0x6c4dd1 */
  esp -= 4; W32(esp, 0x85fd61u); SPILL(); f_6c4dd1(); if (g_unwind) return; RELOAD();
/* 85fd61: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 85fd62: xor eax, eax */
  eax = 0;
/* 85fd64: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 85fd66: setge al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(((sf == of)) ? 1 : 0) & 0xffu);
/* 85fd69: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 85fd6a: and esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 85fd6c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 85fd6d: jmp 0x85fd40 */
  goto L_85fd40;
L_85fd6f: /* 85fd6f: call 0x6cc7bb */
  esp -= 4; W32(esp, 0x85fd74u); SPILL(); f_6cc7bb(); if (g_unwind) return; RELOAD();
/* 85fd74: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85fd76: je 0x85fd8a */
  if (zf) goto L_85fd8a;
L_85fd78: /* 85fd78: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* 85fd7b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85fd7d: jne 0x85fd8a */
  if (!zf) goto L_85fd8a;
L_85fd7f: /* 85fd7f: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 85fd82: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85fd84: jne 0x85fd8a */
  if (!zf) goto L_85fd8a;
L_85fd86: /* 85fd86: xor eax, eax */
  eax = 0;
/* 85fd88: jmp 0x85fd8f */
  goto L_85fd8f;
L_85fd8a: /* 85fd8a: mov eax, 1 */
  eax = 0x1u;
L_85fd8f: /* 85fd8f: cmp eax, dword ptr [edi + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85fd92: je 0x85fda0 */
  if (zf) goto L_85fda0;
L_85fd94: /* 85fd94: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 85fd95: jmp 0x85fd40 */
  goto L_85fd40;
L_85fd97: /* 85fd97: xor eax, eax */
  eax = 0;
/* 85fd99: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85fd9b: je 0x85fdb1 */
  if (zf) goto L_85fdb1;
L_85fd9d: /* 85fd9d: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
L_85fda0: /* 85fda0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 85fda3: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 85fda6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85fda7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85fda8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85fda9: call 0x6cac72 */
  esp -= 4; W32(esp, 0x85fdaeu); SPILL(); f_6cac72(); if (g_unwind) return; RELOAD();
/* 85fdae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_85fdb1: /* 85fdb1: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 85fdb4: lea eax, [esi + 0xa8] */
  eax = (uint32_t)(esi + 0xa8u);
/* 85fdba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85fdbb: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 85fdbe: call dword ptr [0xcfa268] */
  esp -= 4; W32(esp, 0x85fdc4u); SPILL(); f_4e1dac(); if (g_unwind) return; /* Core!??0FSphere@@QAE@ABV0@@Z */ RELOAD();
/* 85fdc4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 85fdc6: test byte ptr [eax + 0x80], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 85fdcd: je 0x85fde0 */
  if (zf) goto L_85fde0;
L_85fdcf: /* 85fdcf: mov ecx, dword ptr [eax + 0x84] */
  ecx = R32((uint32_t)(eax + 0x84u));
/* 85fdd5: test ch, ch */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(((ecx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 85fdd7: js 0x85fde0 */
  if (sf) goto L_85fde0;
L_85fdd9: /* 85fdd9: mov dword ptr [ebp - 0x5c], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0xbf800000u);
L_85fde0: /* 85fde0: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 85fde3: mov eax, dword ptr [eax + 0x74] */
  eax = R32((uint32_t)(eax + 0x74u));
/* 85fde6: cmp eax, dword ptr [ecx + 0x58] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85fde9: je 0x85fe7c */
  if (zf) goto L_85fe7c;
L_85fdef: /* 85fdef: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85fdf2: lea edx, [ebp - 0x68] */
  edx = (uint32_t)(ebp + 0xffffff98u);
/* 85fdf5: mov ecx, esp */
  ecx = esp;
/* 85fdf7: mov dword ptr [ebp - 0x24], esp */
  W32((uint32_t)(ebp + 0xffffffdcu), esp);
/* 85fdfa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85fdfb: call dword ptr [0xcfa268] */
  esp -= 4; W32(esp, 0x85fe01u); SPILL(); f_4e1dac(); if (g_unwind) return; /* Core!??0FSphere@@QAE@ABV0@@Z */ RELOAD();
/* 85fe01: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 85fe04: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 85fe07: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 85fe0a: mov ebx, dword ptr [ecx + 0x540] */
  ebx = R32((uint32_t)(ecx + 0x540u));
/* 85fe10: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 85fe13: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 85fe15: xor edx, edx */
  edx = 0;
/* 85fe17: cmp ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85fe1a: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 85fe1d: mov ecx, edi */
  ecx = edi;
/* 85fe1f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85fe20: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85fe22: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 85fe24: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 85fe26: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 85fe28: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x85fe2bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85fe2b: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 85fe2e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85fe2f: lea ecx, [esi + 0xb8] */
  ecx = (uint32_t)(esi + 0xb8u);
/* 85fe35: call 0x6c3044 */
  esp -= 4; W32(esp, 0x85fe3au); SPILL(); f_6c3044(); if (g_unwind) return; RELOAD();
/* 85fe3a: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 85fe3d: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 85fe40: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 85fe43: mov dword ptr [ebp - 0x78], ecx */
  W32((uint32_t)(ebp + 0xffffff88u), ecx);
/* 85fe46: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 85fe49: mov dword ptr [ebp - 0x74], edx */
  W32((uint32_t)(ebp + 0xffffff8cu), edx);
/* 85fe4c: push 0x3f000000 */
  { uint32_t v = 0x3f000000u; esp -= 4; W32(esp, v); }
/* 85fe51: lea edx, [ebp - 0x58] */
  edx = (uint32_t)(ebp + 0xffffffa8u);
/* 85fe54: mov dword ptr [ebp - 0x6c], ecx */
  W32((uint32_t)(ebp + 0xffffff94u), ecx);
/* 85fe57: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85fe58: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 85fe5b: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
/* 85fe5e: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x85fe64u); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 85fe64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85fe65: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 85fe68: call 0x6c576d */
  esp -= 4; W32(esp, 0x85fe6du); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 85fe6d: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 85fe6f: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 85fe71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85fe72: mov ecx, edi */
  ecx = edi;
/* 85fe74: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0x85fe77u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85fe77: jmp 0x85fefc */
  goto L_85fefc;
L_85fe7c: /* 85fe7c: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 85fe7f: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 85fe82: xor esi, esi */
  esi = 0;
L_85fe84: /* 85fe84: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85fe86: je 0x85fea6 */
  if (zf) goto L_85fea6;
L_85fe88: /* 85fe88: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85fe8a: je 0x85fea1 */
  if (zf) goto L_85fea1;
L_85fe8c: /* 85fe8c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 85fe8e: mov edi, dword ptr [eax + 0x34] */
  edi = R32((uint32_t)(eax + 0x34u));
/* 85fe91: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85fe93: jne 0x85fea1 */
  if (!zf) goto L_85fea1;
L_85fe95: /* 85fe95: mov edi, dword ptr [eax + 0x38] */
  edi = R32((uint32_t)(eax + 0x38u));
/* 85fe98: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85fe9a: jne 0x85fea1 */
  if (!zf) goto L_85fea1;
L_85fe9c: /* 85fe9c: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 85fe9f: jmp 0x85fe84 */
  goto L_85fe84;
L_85fea1: /* 85fea1: mov esi, 1 */
  esi = 0x1u;
L_85fea6: /* 85fea6: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85fea9: lea edx, [ebp - 0x68] */
  edx = (uint32_t)(ebp + 0xffffff98u);
/* 85feac: mov ecx, esp */
  ecx = esp;
/* 85feae: mov dword ptr [ebp - 0x24], esp */
  W32((uint32_t)(ebp + 0xffffffdcu), esp);
/* 85feb1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85feb2: call dword ptr [0xcfa268] */
  esp -= 4; W32(esp, 0x85feb8u); SPILL(); f_4e1dac(); if (g_unwind) return; /* Core!??0FSphere@@QAE@ABV0@@Z */ RELOAD();
/* 85feb8: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 85febb: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 85febe: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 85fec1: mov ebx, dword ptr [ecx + 0x540] */
  ebx = R32((uint32_t)(ecx + 0x540u));
/* 85fec7: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 85feca: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 85fecc: xor edx, edx */
  edx = 0;
/* 85fece: cmp ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85fed1: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 85fed4: mov ecx, edi */
  ecx = edi;
/* 85fed6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85fed7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85fed9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 85fedb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 85fedd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 85fede: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x85fee1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85fee1: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 85fee3: mov byte ptr [ebp - 0x20], 0 */
  W8((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 85fee7: mov byte ptr [ebp - 0x1f], 0 */
  W8((uint32_t)(ebp + 0xffffffe1u), 0x0u);
/* 85feeb: mov byte ptr [ebp - 0x1e], 0 */
  W8((uint32_t)(ebp + 0xffffffe2u), 0x0u);
/* 85feef: mov byte ptr [ebp - 0x1d], 0xff */
  W8((uint32_t)(ebp + 0xffffffe3u), 0xffu);
/* 85fef3: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85fef6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85fef7: mov ecx, edi */
  ecx = edi;
/* 85fef9: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0x85fefcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_85fefc: /* 85fefc: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 85feff: xor ebx, ebx */
  ebx = 0;
L_85ff01: /* 85ff01: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85ff03: je 0x85ff95 */
  if (zf) goto L_85ff95;
L_85ff09: /* 85ff09: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 85ff0c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85ff0e: je 0x85ff20 */
  if (zf) goto L_85ff20;
L_85ff10: /* 85ff10: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 85ff12: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* 85ff15: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85ff17: jne 0x85ff20 */
  if (!zf) goto L_85ff20;
L_85ff19: /* 85ff19: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 85ff1c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85ff1e: je 0x85ff31 */
  if (zf) goto L_85ff31;
L_85ff20: /* 85ff20: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 85ff22: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 85ff24: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 85ff29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85ff2a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 85ff2b: mov ecx, edi */
  ecx = edi;
/* 85ff2d: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x85ff30u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85ff30: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_85ff31: /* 85ff31: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 85ff34: jmp 0x85ff01 */
  goto L_85ff01;
L_85ff36: /* 85ff36: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_85ff39: /* 85ff39: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85ff3c: add edi, 0xa8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xa8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 85ff42: mov ecx, esp */
  ecx = esp;
/* 85ff44: mov dword ptr [ebp - 0x24], esp */
  W32((uint32_t)(ebp + 0xffffffdcu), esp);
/* 85ff47: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 85ff48: call dword ptr [0xcfa268] */
  esp -= 4; W32(esp, 0x85ff4eu); SPILL(); f_4e1dac(); if (g_unwind) return; /* Core!??0FSphere@@QAE@ABV0@@Z */ RELOAD();
/* 85ff4e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 85ff51: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 85ff54: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 85ff57: mov edi, dword ptr [eax + 0x540] */
  edi = R32((uint32_t)(eax + 0x540u));
/* 85ff5d: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 85ff5f: xor ecx, ecx */
  ecx = 0;
/* 85ff61: cmp edi, 7 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 85ff64: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 85ff67: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 85ff68: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85ff6a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85ff6c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 85ff6e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 85ff70: mov ecx, ebx */
  ecx = ebx;
/* 85ff72: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x85ff75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85ff75: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 85ff77: mov byte ptr [ebp - 0x20], 0xff */
  W8((uint32_t)(ebp + 0xffffffe0u), 0xffu);
/* 85ff7b: mov byte ptr [ebp - 0x1f], 0xff */
  W8((uint32_t)(ebp + 0xffffffe1u), 0xffu);
/* 85ff7f: mov byte ptr [ebp - 0x1e], 0xff */
  W8((uint32_t)(ebp + 0xffffffe2u), 0xffu);
/* 85ff83: mov byte ptr [ebp - 0x1d], 0xff */
  W8((uint32_t)(ebp + 0xffffffe3u), 0xffu);
/* 85ff87: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 85ff8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85ff8b: mov ecx, ebx */
  ecx = ebx;
/* 85ff8d: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0x85ff90u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85ff90: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 85ff93: jmp 0x85ff98 */
  goto L_85ff98;
L_85ff95: /* 85ff95: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
L_85ff98: /* 85ff98: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 85ff9b: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 85ff9e: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 85ffa1: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x85ffa6u); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 85ffa6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85ffa8: je 0x8602e6 */
  if (zf) goto L_8602e6;
L_85ffae: /* 85ffae: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 85ffb1: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 85ffb3: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 85ffb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 85ffb7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 85ffb9: mov ecx, edi */
  ecx = edi;
/* 85ffbb: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x85ffbeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 85ffbe: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 85ffc1: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 85ffc4: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x85ffcau); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 85ffca: mov edi, dword ptr [eax + 0x28] */
  edi = R32((uint32_t)(eax + 0x28u));
/* 85ffcd: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 85ffd2: mov ecx, esi */
  ecx = esi;
/* 85ffd4: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x85ffdau); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 85ffda: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 85ffdc: lea eax, [edi + 0xec] */
  eax = (uint32_t)(edi + 0xecu);
/* 85ffe2: jne 0x85ffea */
  if (!zf) goto L_85ffea;
L_85ffe4: /* 85ffe4: lea eax, [edi + 0xf4] */
  eax = (uint32_t)(edi + 0xf4u);
L_85ffea: /* 85ffea: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 85ffed: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 85ffef: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 85fff2: add edx, 0xa8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xa8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 85fff8: mov ecx, esp */
  ecx = esp;
/* 85fffa: mov dword ptr [ebp - 0x24], esp */
  W32((uint32_t)(ebp + 0xffffffdcu), esp);
/* 85fffd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 85fffe: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 860001: call dword ptr [0xcfa268] */
  esp -= 4; W32(esp, 0x860007u); SPILL(); f_4e1dac(); if (g_unwind) return; /* Core!??0FSphere@@QAE@ABV0@@Z */ RELOAD();
/* 860007: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 86000a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86000c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86000e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860010: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860012: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860014: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 860016: mov ecx, esi */
  ecx = esi;
/* 860018: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x86001bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86001b: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 86001e: test dword ptr [ecx + 0x88], 0x40000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x88u))); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860028: je 0x860042 */
  if (zf) goto L_860042;
L_86002a: /* 86002a: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86002d: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 860030: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 860033: test dword ptr [ecx + 0x534], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x534u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86003d: je 0x860042 */
  if (zf) goto L_860042;
L_86003f: /* 86003f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 860040: jmp 0x8600ac */
  goto L_8600ac;
L_860042: /* 860042: mov ax, word ptr [ebp - 0x12] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffffeeu))) & 0xffffu);
/* 860046: movzx ecx, ah */
  ecx = (uint32_t)(((eax >> 8) & 0xffu));
/* 860049: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 86004c: movzx edx, bl */
  edx = (uint32_t)((ebx & 0xffu));
/* 86004f: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 860052: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 860055: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 86005b: movzx ecx, bh */
  ecx = (uint32_t)(((ebx >> 8) & 0xffu));
/* 86005e: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 860061: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 860064: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 86006a: movzx edx, al */
  edx = (uint32_t)((eax & 0xffu));
/* 86006d: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 860070: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 860073: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 860079: push 0x3f000000 */
  { uint32_t v = 0x3f000000u; esp -= 4; W32(esp, v); }
/* 86007e: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 860081: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 860084: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 860085: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 860088: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 86008e: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 860091: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 860094: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 860097: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 86009a: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x8600a0u); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 8600a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8600a1: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8600a4: call 0x6c576d */
  esp -= 4; W32(esp, 0x8600a9u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 8600a9: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8600ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_8600ac: /* 8600ac: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8600ae: mov ecx, esi */
  ecx = esi;
/* 8600b0: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0x8600b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8600b3: test byte ptr [0xcd8a58], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xcd8a58u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8600ba: jne 0x8600e9 */
  if (!zf) goto L_8600e9;
L_8600bc: /* 8600bc: or dword ptr [0xcd8a58], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xcd8a58u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xcd8a58u), r);
  }
/* 8600c3: mov byte ptr [ebp - 0x18], 0xff */
  W8((uint32_t)(ebp + 0xffffffe8u), 0xffu);
/* 8600c7: mov byte ptr [ebp - 0x17], 0xff */
  W8((uint32_t)(ebp + 0xffffffe9u), 0xffu);
/* 8600cb: mov byte ptr [ebp - 0x16], 0xff */
  W8((uint32_t)(ebp + 0xffffffeau), 0xffu);
/* 8600cf: mov byte ptr [ebp - 0x15], 0xff */
  W8((uint32_t)(ebp + 0xffffffebu), 0xffu);
/* 8600d3: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8600d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8600d7: mov ecx, 0xcd8a40 */
  ecx = 0xcd8a40u;
/* 8600dc: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8600e0: call 0x6c7af4 */
  esp -= 4; W32(esp, 0x8600e5u); SPILL(); f_6c7af4(); if (g_unwind) return; RELOAD();
/* 8600e5: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_8600e9: /* 8600e9: mov eax, dword ptr [0xcd8a3c] */
  eax = R32((uint32_t)(0xcd8a3cu));
/* 8600ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8600f0: jne 0x8601d6 */
  if (!zf) goto L_8601d6;
L_8600f6: /* 8600f6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8600f8: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8600fb: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x860101u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 860101: push 0xb86b60 */
  { uint32_t v = 0xb86b60u; esp -= 4; W32(esp, v); }
/* 860106: mov ecx, 0xb86b60 */
  ecx = 0xb86b60u;
/* 86010b: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x860111u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 860111: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860113: jne 0x86012d */
  if (!zf) goto L_86012d;
L_860115: /* 860115: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 86011a: push 0xae5100 */
  { uint32_t v = 0xae5100u; esp -= 4; W32(esp, v); }
/* 86011f: push 0xae5144 */
  { uint32_t v = 0xae5144u; esp -= 4; W32(esp, v); }
/* 860124: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x86012au); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 86012a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86012d: /* 86012d: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x860133u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 860133: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 860139: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 86013b: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86013e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860140: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 860141: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860143: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860145: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 860146: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 860147: push 0xb86b60 */
  { uint32_t v = 0xb86b60u; esp -= 4; W32(esp, v); }
/* 86014c: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x860152u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 860152: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 860158: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86015b: push 0xcd8a3c */
  { uint32_t v = 0xcd8a3cu; esp -= 4; W32(esp, v); }
/* 860160: mov dword ptr [0xcd8a3c], eax */
  W32((uint32_t)(0xcd8a3cu), eax);
/* 860165: call 0x6c1203 */
  esp -= 4; W32(esp, 0x86016au); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 86016a: mov ebx, dword ptr [0xcd8a3c] */
  ebx = R32((uint32_t)(0xcd8a3cu));
/* 860170: mov esi, ebx */
  esi = ebx;
/* 860172: add ebx, 0x50 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 860175: mov dword ptr [ebx], 0xcd8a40 */
  W32((uint32_t)(ebx), 0xcd8a40u);
/* 86017b: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86017d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86017f: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0x860182u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 860182: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 860184: mov byte ptr [esi + 0x38], al */
  W8((uint32_t)(esi + 0x38u), (eax & 0xffu));
/* 860187: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 860189: call dword ptr [edx + 0x34] */
  { uint32_t t = R32((uint32_t)(edx + 0x34u)); esp -= 4; W32(esp, 0x86018cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86018c: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 86018e: mov byte ptr [esi + 0x39], al */
  W8((uint32_t)(esi + 0x39u), (eax & 0xffu));
/* 860191: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 860193: call dword ptr [eax + 0x38] */
  { uint32_t t = R32((uint32_t)(eax + 0x38u)); esp -= 4; W32(esp, 0x860196u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 860196: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 860198: mov byte ptr [esi + 0x3a], al */
  W8((uint32_t)(esi + 0x3au), (eax & 0xffu));
/* 86019b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86019d: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x8601a0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8601a0: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 8601a2: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 8601a5: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 8601a8: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8601aa: mov ecx, ebx */
  ecx = ebx;
/* 8601ac: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0x8601afu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8601af: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 8601b2: mov edi, dword ptr [0xcfa2b0] */
  edi = R32((uint32_t)(0xcfa2b0u));
/* 8601b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8601b9: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 8601bc: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 8601bf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8601c1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8601c1: mov edx, dword ptr [esi + 0x4c] */
  edx = R32((uint32_t)(esi + 0x4cu));
/* 8601c4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8601c7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8601c8: mov byte ptr [esi + 0x3b], al */
  W8((uint32_t)(esi + 0x3bu), (eax & 0xffu));
/* 8601cb: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8601cdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8601cd: mov byte ptr [esi + 0x3c], al */
  W8((uint32_t)(esi + 0x3cu), (eax & 0xffu));
/* 8601d0: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 8601d3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8601d6: /* 8601d6: mov eax, dword ptr [0xcd8a38] */
  eax = R32((uint32_t)(0xcd8a38u));
/* 8601db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8601dd: jne 0x860265 */
  if (!zf) goto L_860265;
L_8601e3: /* 8601e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8601e5: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8601e8: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8601eeu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8601ee: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 8601f3: mov ecx, 0xb8d850 */
  ecx = 0xb8d850u;
/* 8601f8: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x8601feu); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 8601fe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860200: jne 0x86021a */
  if (!zf) goto L_86021a;
L_860202: /* 860202: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 860207: push 0xae5168 */
  { uint32_t v = 0xae5168u; esp -= 4; W32(esp, v); }
/* 86020c: push 0xae51ac */
  { uint32_t v = 0xae51acu; esp -= 4; W32(esp, v); }
/* 860211: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x860217u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 860217: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_86021a: /* 86021a: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x860220u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 860220: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 860226: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 860228: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86022b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86022d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86022e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860230: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860232: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 860233: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 860234: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 860239: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x86023fu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 86023f: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 860245: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 860248: push 0xcd8a38 */
  { uint32_t v = 0xcd8a38u; esp -= 4; W32(esp, v); }
/* 86024d: mov dword ptr [0xcd8a38], eax */
  W32((uint32_t)(0xcd8a38u), eax);
/* 860252: call 0x6c1203 */
  esp -= 4; W32(esp, 0x860257u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 860257: mov edx, dword ptr [0xcd8a3c] */
  edx = R32((uint32_t)(0xcd8a3cu));
/* 86025d: mov eax, dword ptr [0xcd8a38] */
  eax = R32((uint32_t)(0xcd8a38u));
/* 860262: mov dword ptr [eax + 0x38], edx */
  W32((uint32_t)(eax + 0x38u), edx);
L_860265: /* 860265: mov eax, dword ptr [0xcd8a38] */
  eax = R32((uint32_t)(0xcd8a38u));
/* 86026a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86026c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86026e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860270: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860272: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 860273: mov ecx, esi */
  ecx = esi;
/* 860275: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x860278u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 860278: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86027b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 86027d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86027f: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 860282: lea ecx, [edi + 0x60] */
  ecx = (uint32_t)(edi + 0x60u);
/* 860285: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 860286: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 860289: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86028b: mov ecx, esi */
  ecx = esi;
/* 86028d: call dword ptr [edx + 0x4c] */
  { uint32_t t = R32((uint32_t)(edx + 0x4cu)); esp -= 4; W32(esp, 0x860290u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 860290: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 860292: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860294: lea eax, [edi + 0xdc] */
  eax = (uint32_t)(edi + 0xdcu);
/* 86029a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86029b: mov ecx, esi */
  ecx = esi;
/* 86029d: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0x8602a0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8602a0: mov eax, dword ptr [edi + 0xe4] */
  eax = R32((uint32_t)(edi + 0xe4u));
/* 8602a6: mov ecx, dword ptr [edi + 0x68] */
  ecx = R32((uint32_t)(edi + 0x68u));
/* 8602a9: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 8602ab: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8602ac: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8602ad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8602ae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8602b0: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8602b2: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8602b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8602b5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8602b7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8602b9: mov ecx, esi */
  ecx = esi;
/* 8602bb: call dword ptr [ebx + 0x5c] */
  { uint32_t t = R32((uint32_t)(ebx + 0x5cu)); esp -= 4; W32(esp, 0x8602beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8602be: xor eax, eax */
  eax = 0;
L_8602c0: /* 8602c0: cmp eax, dword ptr [edi + 0x58] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8602c3: jge 0x861252 */
  if ((sf == of)) goto L_861252;
L_8602c9: /* 8602c9: mov ebx, dword ptr [edi + 0x54] */
  ebx = R32((uint32_t)(edi + 0x54u));
/* 8602cc: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 8602d2: mov edx, dword ptr [0xce8424] */
  edx = R32((uint32_t)(0xce8424u));
/* 8602d8: lea esi, [eax + eax*4] */
  esi = (uint32_t)(eax + eax*4);
/* 8602db: movzx esi, word ptr [ebx + esi*4 + 0xe] */
  esi = (uint32_t)(R16((uint32_t)(ebx + esi*4 + 0xeu)));
/* 8602e0: add dword ptr [ecx + edx*4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + edx*4))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx + edx*4), r);
  }
/* 8602e3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8602e4: jmp 0x8602c0 */
  goto L_8602c0;
L_8602e6: /* 8602e6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8602e9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8602eb: mov ecx, dword ptr [ebx + 0x58] */
  ecx = R32((uint32_t)(ebx + 0x58u));
/* 8602ee: mov eax, dword ptr [edx + 0x74] */
  eax = R32((uint32_t)(edx + 0x74u));
/* 8602f1: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8602f3: mov ecx, edi */
  ecx = edi;
/* 8602f5: jne 0x860acd */
  if (!zf) goto L_860acd;
L_8602fb: /* 8602fb: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8602fd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8602ff: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x860302u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 860302: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 860309: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_860310: /* 860310: cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 860314: jge 0x861252 */
  if ((sf == of)) goto L_861252;
L_86031a: /* 86031a: xor eax, eax */
  eax = 0;
/* 86031c: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 86031f: nop  */
L_860320: /* 860320: cmp eax, dword ptr [ebx + 0x58] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 860323: jge 0x860ac5 */
  if ((sf == of)) goto L_860ac5;
L_860329: /* 860329: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 86032c: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 86032e: mov edx, dword ptr [ecx + 0x70] */
  edx = R32((uint32_t)(ecx + 0x70u));
/* 860331: lea eax, [edx + eax*8] */
  eax = (uint32_t)(edx + eax*8);
/* 860334: cmp dword ptr [eax + 4], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 860338: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 86033b: je 0x860ab6 */
  if (zf) goto L_860ab6;
L_860341: /* 860341: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 860344: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 860346: mov edx, dword ptr [edi + 0x1bc] */
  edx = R32((uint32_t)(edi + 0x1bcu));
/* 86034c: mov edx, dword ptr [edx + 0x1110] */
  edx = R32((uint32_t)(edx + 0x1110u));
/* 860352: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 860355: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 860358: lea eax, [edx + eax*8] */
  eax = (uint32_t)(edx + eax*8);
/* 86035b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86035d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86035e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 860361: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x860367u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 860367: mov esi, eax */
  esi = eax;
/* 860369: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86036b: jne 0x8603dd */
  if (!zf) goto L_8603dd;
L_86036d: /* 86036d: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 860370: mov edx, dword ptr [ecx + 0xf8] */
  edx = R32((uint32_t)(ecx + 0xf8u));
/* 860376: lea eax, [ebx + ebx*2] */
  eax = (uint32_t)(ebx + ebx*2);
/* 860379: mov esi, dword ptr [edx + eax*4] */
  esi = R32((uint32_t)(edx + eax*4));
/* 86037c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86037e: jne 0x8603dd */
  if (!zf) goto L_8603dd;
L_860380: /* 860380: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 860385: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x86038bu); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 86038b: mov ebx, eax */
  ebx = eax;
/* 86038d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86038f: je 0x8603af */
  if (zf) goto L_8603af;
L_860391: /* 860391: push 0xb86100 */
  { uint32_t v = 0xb86100u; esp -= 4; W32(esp, v); }
/* 860396: mov ecx, ebx */
  ecx = ebx;
/* 860398: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x86039eu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 86039e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8603a0: jne 0x8603d7 */
  if (!zf) goto L_8603d7;
L_8603a2: /* 8603a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8603a3: mov ecx, ebx */
  ecx = ebx;
/* 8603a5: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8603abu); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8603ab: mov esi, eax */
  esi = eax;
/* 8603ad: jmp 0x8603b4 */
  goto L_8603b4;
L_8603af: /* 8603af: mov esi, 0xae51d0 */
  esi = 0xae51d0u;
L_8603b4: /* 8603b4: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 8603b9: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8603bfu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8603bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8603c0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 8603c5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8603c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8603c8: push 0xae51dc */
  { uint32_t v = 0xae51dcu; esp -= 4; W32(esp, v); }
/* 8603cd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8603ce: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8603d4u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8603d4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8603d7: /* 8603d7: mov esi, dword ptr [ebx + 0x2c] */
  esi = R32((uint32_t)(ebx + 0x2cu));
/* 8603da: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
L_8603dd: /* 8603dd: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8603df: mov ecx, esi */
  ecx = esi;
/* 8603e1: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x8603e7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8603e7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8603e9: je 0x860442 */
  if (zf) goto L_860442;
L_8603eb: /* 8603eb: lea eax, [edi + 0x194] */
  eax = (uint32_t)(edi + 0x194u);
/* 8603f1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8603f3: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8603f6: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8603f9: mov dword ptr [ebp - 0x68], ecx */
  W32((uint32_t)(ebp + 0xffffff98u), ecx);
/* 8603fc: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 8603ff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 860400: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 860403: mov dword ptr [ebp - 0x64], edx */
  W32((uint32_t)(ebp + 0xffffff9cu), edx);
/* 860406: lea edx, [ebp - 0xdc] */
  edx = (uint32_t)(ebp + 0xffffff24u);
/* 86040c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 86040d: add ecx, 0xa8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xa8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 860413: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 860416: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 86041d: call dword ptr [0xcfa588] */
  esp -= 4; W32(esp, 0x860423u); SPILL(); f_4e420a(); if (g_unwind) return; /* Core!??GFPlane@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 860423: mov ecx, eax */
  ecx = eax;
/* 860425: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x86042bu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 86042b: fst dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0);
/* 86042e: fcomp dword ptr [0xa17000] */
  fpu_com(ST0, F32((uint32_t)(0xa17000u)));
  FPOP();
/* 860434: mov dword ptr [ebp - 0x28], 1 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x1u);
/* 86043b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 86043d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 860440: jnp 0x860449 */
  if (!pf) goto L_860449;
L_860442: /* 860442: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
L_860449: /* 860449: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 86044c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86044e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860450: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860452: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860454: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 860455: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x860458u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 860458: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86045b: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 86045e: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 860461: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 860464: mov eax, dword ptr [ecx + 0x154] */
  eax = R32((uint32_t)(ecx + 0x154u));
/* 86046a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86046c: jne 0x860482 */
  if (!zf) goto L_860482;
L_86046e: /* 86046e: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x860474u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 860474: mov ecx, dword ptr [eax + 0x5c] */
  ecx = R32((uint32_t)(eax + 0x5cu));
/* 860477: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860479: je 0x860482 */
  if (zf) goto L_860482;
L_86047b: /* 86047b: mov esi, 1 */
  esi = 0x1u;
/* 860480: jmp 0x860484 */
  goto L_860484;
L_860482: /* 860482: xor esi, esi */
  esi = 0;
L_860484: /* 860484: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 860487: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 860489: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86048b: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 86048e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86048f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860491: mov ecx, edi */
  ecx = edi;
/* 860493: call dword ptr [edx + 0x4c] */
  { uint32_t t = R32((uint32_t)(edx + 0x4cu)); esp -= 4; W32(esp, 0x860496u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 860496: mov ebx, eax */
  ebx = eax;
/* 860498: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86049a: je 0x8604dd */
  if (zf) goto L_8604dd;
L_86049c: /* 86049c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86049e: je 0x8604dd */
  if (zf) goto L_8604dd;
L_8604a0: /* 8604a0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8604a3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8604a5: mov ecx, dword ptr [edx + 0x54] */
  ecx = R32((uint32_t)(edx + 0x54u));
/* 8604a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8604aa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8604ac: call dword ptr [0xcfa884] */
  esp -= 4; W32(esp, 0x8604b2u); SPILL(); f_4e2cde(); if (g_unwind) return; /* Core!?GetPathName@UObject@@QBEPBGPAV1@PAG@Z */ RELOAD();
/* 8604b2: mov esi, eax */
  esi = eax;
/* 8604b4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8604b7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8604b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8604bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8604bd: call dword ptr [0xcfa884] */
  esp -= 4; W32(esp, 0x8604c3u); SPILL(); f_4e2cde(); if (g_unwind) return; /* Core!?GetPathName@UObject@@QBEPBGPAV1@PAG@Z */ RELOAD();
/* 8604c3: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 8604c9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8604cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8604cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8604cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8604ce: push 0xae4fe8 */
  { uint32_t v = 0xae4fe8u; esp -= 4; W32(esp, v); }
/* 8604d3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8604d4: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8604dau); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8604da: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8604dd: /* 8604dd: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8604e0: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 8604e3: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8604e6: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 8604e9: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 8604ec: lea ebx, [eax + ecx*4] */
  ebx = (uint32_t)(eax + ecx*4);
/* 8604ef: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 8604f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8604f4: jle 0x860ab6 */
  if ((zf || sf != of)) goto L_860ab6;
L_8604fa: /* 8604fa: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8604fd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8604ff: jne 0x860554 */
  if (!zf) goto L_860554;
L_860501: /* 860501: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 860504: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860506: jne 0x860ab6 */
  if (!zf) goto L_860ab6;
L_86050c: /* 86050c: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 860511: mov ecx, dword ptr [0xce8418] */
  ecx = R32((uint32_t)(0xce8418u));
/* 860517: inc dword ptr [eax + ecx*4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + ecx*4), r);
  }
/* 86051a: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 86051f: mov ecx, dword ptr [0xce841c] */
  ecx = R32((uint32_t)(0xce841cu));
/* 860525: mov esi, dword ptr [ebx + 0xc] */
  esi = R32((uint32_t)(ebx + 0xcu));
/* 860528: add dword ptr [eax + ecx*4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + ecx*4), r);
  }
/* 86052b: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 860530: mov ecx, dword ptr [0xce8424] */
  ecx = R32((uint32_t)(0xce8424u));
/* 860536: mov esi, dword ptr [ebx + 0xc] */
  esi = R32((uint32_t)(ebx + 0xcu));
/* 860539: add dword ptr [eax + ecx*4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + ecx*4), r);
  }
/* 86053c: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 86053e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860540: add edx, 0x34 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 860543: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 860544: mov ecx, edi */
  ecx = edi;
/* 860546: call dword ptr [eax + 0x54] */
  { uint32_t t = R32((uint32_t)(eax + 0x54u)); esp -= 4; W32(esp, 0x860549u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 860549: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 86054c: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 86054f: jmp 0x8606e5 */
  goto L_8606e5;
L_860554: /* 860554: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 860557: jne 0x860ab6 */
  if (!zf) goto L_860ab6;
L_86055d: /* 86055d: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 860560: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860562: je 0x860ab6 */
  if (zf) goto L_860ab6;
L_860568: /* 860568: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 86056d: mov ecx, dword ptr [0xce840c] */
  ecx = R32((uint32_t)(0xce840cu));
/* 860573: inc dword ptr [eax + ecx*4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + ecx*4), r);
  }
/* 860576: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 86057b: mov ecx, dword ptr [0xce8410] */
  ecx = R32((uint32_t)(0xce8410u));
/* 860581: mov edi, dword ptr [eax + ecx*4] */
  edi = R32((uint32_t)(eax + ecx*4));
/* 860584: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 860587: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 860589: mov dword ptr [eax + ecx*4], edi */
  W32((uint32_t)(eax + ecx*4), edi);
/* 86058c: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 860591: mov ecx, dword ptr [0xce8424] */
  ecx = R32((uint32_t)(0xce8424u));
/* 860597: mov esi, dword ptr [eax + ecx*4] */
  esi = R32((uint32_t)(eax + ecx*4));
/* 86059a: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 86059d: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 86059f: mov dword ptr [eax + ecx*4], esi */
  W32((uint32_t)(eax + ecx*4), esi);
/* 8605a2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8605a5: fld dword ptr [eax + 0x88] */
  { double v = F32((uint32_t)(eax + 0x88u)); FPUSH(v); }
/* 8605ab: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8605b1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8605b3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8605b6: jp 0x8605bf */
  if (pf) goto L_8605bf;
L_8605b8: /* 8605b8: mov ecx, 1 */
  ecx = 0x1u;
/* 8605bd: jmp 0x8605c1 */
  goto L_8605c1;
L_8605bf: /* 8605bf: xor ecx, ecx */
  ecx = 0;
L_8605c1: /* 8605c1: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8605c4: fld dword ptr [eax + 0x19c] */
  { double v = F32((uint32_t)(eax + 0x19cu)); FPUSH(v); }
/* 8605ca: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8605cd: fld dword ptr [eax + 0x198] */
  { double v = F32((uint32_t)(eax + 0x198u)); FPUSH(v); }
/* 8605d3: mov eax, dword ptr [eax + 0x194] */
  eax = R32((uint32_t)(eax + 0x194u));
/* 8605d9: add edx, 0x48 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8605dc: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 8605df: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8605e2: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 8605e5: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 8605e8: mov dword ptr [ebp - 0x78], eax */
  W32((uint32_t)(ebp + 0xffffff88u), eax);
/* 8605eb: mov dword ptr [ebp - 0x6c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x3f800000u);
/* 8605f2: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 8605f5: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8605f8: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8605fb: lea edi, [ebp - 0x58] */
  edi = (uint32_t)(ebp + 0xffffffa8u);
/* 8605fe: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 860600: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 860602: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 860604: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 860607: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 860609: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 86060c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 86060e: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 860611: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 860614: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 860617: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 86061a: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 86061d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 860620: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 860623: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 860626: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 860629: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86062b: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86062d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 86062f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 860631: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 860633: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 860636: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 860639: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 86063c: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 86063f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 860642: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 860645: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 860648: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 86064b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86064d: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 86064f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 860651: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 860653: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 860655: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 860658: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 86065b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86065e: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 860661: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 860664: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 860667: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 86066a: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 86066d: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 86066f: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 860671: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 860673: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 860675: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 860677: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 860679: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 86067b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 86067d: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 860680: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 860683: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 860686: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 860689: mov ax, word ptr [ebx + 0x10] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + 0x10u))) & 0xffffu);
/* 86068d: mov dword ptr [ebp - 0xbc], edx */
  W32((uint32_t)(ebp + 0xffffff44u), edx);
/* 860693: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 860696: mov dword ptr [ebp - 0xb8], edx */
  W32((uint32_t)(ebp + 0xffffff48u), edx);
/* 86069c: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 86069f: mov dword ptr [ebp - 0xb4], edx */
  W32((uint32_t)(ebp + 0xffffff4cu), edx);
/* 8606a5: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8606a8: mov dword ptr [ebp - 0xb0], edx */
  W32((uint32_t)(ebp + 0xffffff50u), edx);
/* 8606ae: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8606b1: mov dword ptr [ebp - 0xac], edx */
  W32((uint32_t)(ebp + 0xffffff54u), edx);
/* 8606b7: mov dword ptr [ebp - 0x94], ecx */
  W32((uint32_t)(ebp + 0xffffff6cu), ecx);
/* 8606bd: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8606c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8606c2: lea edx, [ebp - 0xc0] */
  edx = (uint32_t)(ebp + 0xffffff40u);
/* 8606c8: mov word ptr [ebp - 0x98], ax */
  W16((uint32_t)(ebp + 0xffffff68u), (eax & 0xffffu));
/* 8606cf: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8606d1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8606d2: mov dword ptr [ebp - 0xc0], 0xa17b60 */
  W32((uint32_t)(ebp + 0xffffff40u), 0xa17b60u);
/* 8606dc: call dword ptr [eax + 0x58] */
  { uint32_t t = R32((uint32_t)(eax + 0x58u)); esp -= 4; W32(esp, 0x8606dfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8606df: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 8606e2: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
L_8606e5: /* 8606e5: movzx ecx, word ptr [ebx + 0x12] */
  ecx = (uint32_t)(R16((uint32_t)(ebx + 0x12u)));
/* 8606e9: movzx edx, word ptr [ebx + 0x10] */
  edx = (uint32_t)(R16((uint32_t)(ebx + 0x10u)));
/* 8606ed: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8606ef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8606f0: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 8606f3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8606f4: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8606f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8606f8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8606f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8606fb: mov ecx, edi */
  ecx = edi;
/* 8606fd: call dword ptr [eax + 0x5c] */
  { uint32_t t = R32((uint32_t)(eax + 0x5cu)); esp -= 4; W32(esp, 0x860700u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 860700: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 860703: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 860705: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 860707: call dword ptr [edx + 0x170] */
  { uint32_t t = R32((uint32_t)(edx + 0x170u)); esp -= 4; W32(esp, 0x86070du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86070d: mov esi, eax */
  esi = eax;
/* 86070f: mov eax, dword ptr [esi + 0x264] */
  eax = R32((uint32_t)(esi + 0x264u));
/* 860715: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860717: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 86071a: je 0x8608e8 */
  if (zf) goto L_8608e8;
L_860720: /* 860720: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 860723: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 860726: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x86072bu); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 86072b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86072d: jne 0x8608e8 */
  if (!zf) goto L_8608e8;
L_860733: /* 860733: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 860736: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 860739: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 86073c: test dword ptr [eax + 0x534], 0x20000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860746: je 0x8608e8 */
  if (zf) goto L_8608e8;
L_86074c: /* 86074c: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 86074e: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 860750: mov ecx, edi */
  ecx = edi;
/* 860752: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 860755: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x860757u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 860757: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 86075e: mov edi, edi */
  edi = edi;
L_860760: /* 860760: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 860763: cmp eax, dword ptr [esi + 0x264] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x264u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 860769: jge 0x8608c5 */
  if ((sf == of)) goto L_8608c5;
L_86076f: /* 86076f: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 860772: mov ecx, dword ptr [esi + 0x260] */
  ecx = R32((uint32_t)(esi + 0x260u));
/* 860778: mov edx, eax */
  edx = eax;
/* 86077a: mov edi, dword ptr [ecx + edx*4] */
  edi = R32((uint32_t)(ecx + edx*4));
/* 86077d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 860780: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 860782: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 860788: fld dword ptr [edx + 0x3ac] */
  { double v = F32((uint32_t)(edx + 0x3acu)); FPUSH(v); }
/* 86078e: add esi, 0x260 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x260u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 860794: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 860797: mov ecx, edi */
  ecx = edi;
/* 860799: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 86079c: call 0x6ca46b */
  esp -= 4; W32(esp, 0x8607a1u); SPILL(); f_6ca46b(); if (g_unwind) return; RELOAD();
/* 8607a1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8607a3: jne 0x8607c5 */
  if (!zf) goto L_8607c5;
L_8607a5: /* 8607a5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8607a8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8607aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8607ab: mov ecx, esi */
  ecx = esi;
/* 8607ad: call 0x6cb320 */
  esp -= 4; W32(esp, 0x8607b2u); SPILL(); f_6cb320(); if (g_unwind) return; RELOAD();
/* 8607b2: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8607b5: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 8607b8: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8607bb: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8607bc: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8607bf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8607c0: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8607c3: jmp 0x860760 */
  goto L_860760;
L_8607c5: /* 8607c5: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8607c8: mov ecx, esp */
  ecx = esp;
/* 8607ca: mov dword ptr [ebp - 0x48], esp */
  W32((uint32_t)(ebp + 0xffffffb8u), esp);
/* 8607cd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8607cf: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8607d2: mov dword ptr [ebp - 0x84], 0 */
  W32((uint32_t)(ebp + 0xffffff7cu), 0x0u);
/* 8607dc: mov eax, dword ptr [ebp - 0x84] */
  eax = R32((uint32_t)(ebp + 0xffffff7cu));
/* 8607e2: mov edx, esp */
  edx = esp;
/* 8607e4: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8607e6: mov dword ptr [ebp - 0x80], 0 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x0u);
/* 8607ed: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 8607f0: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8607f3: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* 8607fa: mov eax, dword ptr [ebp - 0x7c] */
  eax = R32((uint32_t)(ebp + 0xffffff84u));
/* 8607fd: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 860800: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x860806u); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 860806: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 860809: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86080b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86080d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86080f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860811: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860813: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860815: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x860818u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 860818: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 86081b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 86081d: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 860820: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 860822: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 860823: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x860829u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 860829: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86082b: jne 0x860857 */
  if (!zf) goto L_860857;
L_86082d: /* 86082d: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 860830: mov edx, dword ptr [ecx + 0xf8] */
  edx = R32((uint32_t)(ecx + 0xf8u));
/* 860836: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 860839: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 86083c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86083e: jne 0x860857 */
  if (!zf) goto L_860857;
L_860840: /* 860840: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 860845: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x86084bu); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 86084b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86084c: call 0x6c449e */
  esp -= 4; W32(esp, 0x860851u); SPILL(); f_6c449e(); if (g_unwind) return; RELOAD();
/* 860851: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 860854: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_860857: /* 860857: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 860858: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 86085b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86085c: mov ecx, edi */
  ecx = edi;
/* 86085e: call 0x6c7adb */
  esp -= 4; W32(esp, 0x860863u); SPILL(); f_6c7adb(); if (g_unwind) return; RELOAD();
/* 860863: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 860866: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 860868: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86086a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86086c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86086e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86086f: mov ecx, esi */
  ecx = esi;
/* 860871: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x860874u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 860874: movzx ecx, word ptr [ebx + 0x12] */
  ecx = (uint32_t)(R16((uint32_t)(ebx + 0x12u)));
/* 860878: movzx edx, word ptr [ebx + 0x10] */
  edx = (uint32_t)(R16((uint32_t)(ebx + 0x10u)));
/* 86087c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 86087e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86087f: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 860882: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 860883: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 860886: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 860887: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 860888: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86088a: mov ecx, esi */
  ecx = esi;
/* 86088c: call dword ptr [eax + 0x5c] */
  { uint32_t t = R32((uint32_t)(eax + 0x5cu)); esp -= 4; W32(esp, 0x86088fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86088f: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 860894: mov ecx, dword ptr [0xce836c] */
  ecx = R32((uint32_t)(0xce836cu));
/* 86089a: inc dword ptr [eax + ecx*4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + ecx*4), r);
  }
/* 86089d: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8608a2: mov ecx, dword ptr [0xce8370] */
  ecx = R32((uint32_t)(0xce8370u));
/* 8608a8: mov esi, dword ptr [eax + ecx*4] */
  esi = R32((uint32_t)(eax + ecx*4));
/* 8608ab: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 8608ae: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 8608b1: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8608b3: mov dword ptr [eax + ecx*4], esi */
  W32((uint32_t)(eax + ecx*4), esi);
/* 8608b6: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8608b9: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8608bc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8608bd: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8608c0: jmp 0x860760 */
  goto L_860760;
L_8608c5: /* 8608c5: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8608c7: mov ecx, edi */
  ecx = edi;
/* 8608c9: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x8608ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8608cc: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 8608d2: mov edx, dword ptr [0xce8364] */
  edx = R32((uint32_t)(0xce8364u));
/* 8608d8: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 8608db: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8608dd: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8608e0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8608e2: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8608e4: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8608e6: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_8608e8: /* 8608e8: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8608eb: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8608ee: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x8608f3u); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 8608f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8608f5: jne 0x860ab6 */
  if (!zf) goto L_860ab6;
L_8608fb: /* 8608fb: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8608fe: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 860901: test dword ptr [ecx + 0x534], 0x20000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x534u))); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86090b: je 0x860ab6 */
  if (zf) goto L_860ab6;
L_860911: /* 860911: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 860913: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 860915: mov ecx, edi */
  ecx = edi;
/* 860917: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 86091a: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x86091cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86091c: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 86091f: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_860922: /* 860922: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 860925: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860927: je 0x860a94 */
  if (zf) goto L_860a94;
L_86092d: /* 86092d: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 860930: mov ecx, eax */
  ecx = eax;
/* 860932: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 860934: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 860936: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 86093c: fld dword ptr [ecx + 0x3ac] */
  { double v = F32((uint32_t)(ecx + 0x3acu)); FPUSH(v); }
/* 860942: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 860945: mov ecx, esi */
  ecx = esi;
/* 860947: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 86094a: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 86094d: call 0x6ca46b */
  esp -= 4; W32(esp, 0x860952u); SPILL(); f_6ca46b(); if (g_unwind) return; RELOAD();
/* 860952: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860954: je 0x860a86 */
  if (zf) goto L_860a86;
L_86095a: /* 86095a: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86095d: mov ecx, esp */
  ecx = esp;
/* 86095f: mov dword ptr [ebp - 0x48], esp */
  W32((uint32_t)(ebp + 0xffffffb8u), esp);
/* 860962: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860964: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 860967: mov dword ptr [ebp - 0x40], 0 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x0u);
/* 86096e: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 860971: mov edx, esp */
  edx = esp;
/* 860973: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 860975: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 86097c: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 86097f: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 860982: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 860989: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 86098c: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 86098f: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x860995u); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 860995: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 860997: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860999: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86099b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86099d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86099f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8609a1: mov ecx, edi */
  ecx = edi;
/* 8609a3: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x8609a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8609a6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8609a9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8609ab: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8609ae: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8609b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8609b1: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x8609b7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8609b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8609b9: jne 0x860a32 */
  if (!zf) goto L_860a32;
L_8609bb: /* 8609bb: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8609be: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8609c1: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8609c4: mov eax, dword ptr [edx + 0xf8] */
  eax = R32((uint32_t)(edx + 0xf8u));
/* 8609ca: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 8609cd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8609cf: jne 0x860a32 */
  if (!zf) goto L_860a32;
L_8609d1: /* 8609d1: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 8609d6: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x8609dcu); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 8609dc: mov edi, eax */
  edi = eax;
/* 8609de: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8609e0: je 0x860a00 */
  if (zf) goto L_860a00;
L_8609e2: /* 8609e2: push 0xb86100 */
  { uint32_t v = 0xb86100u; esp -= 4; W32(esp, v); }
/* 8609e7: mov ecx, edi */
  ecx = edi;
/* 8609e9: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8609efu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8609ef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8609f1: jne 0x860a29 */
  if (!zf) goto L_860a29;
L_8609f3: /* 8609f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8609f4: mov ecx, edi */
  ecx = edi;
/* 8609f6: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8609fcu); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8609fc: mov esi, eax */
  esi = eax;
/* 8609fe: jmp 0x860a05 */
  goto L_860a05;
L_860a00: /* 860a00: mov esi, 0xae51d0 */
  esi = 0xae51d0u;
L_860a05: /* 860a05: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 860a0a: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x860a10u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 860a10: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 860a16: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 860a18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 860a19: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 860a1a: push 0xae51dc */
  { uint32_t v = 0xae51dcu; esp -= 4; W32(esp, v); }
/* 860a1f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 860a20: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x860a26u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 860a26: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_860a29: /* 860a29: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 860a2c: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 860a2f: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
L_860a32: /* 860a32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 860a33: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 860a36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 860a37: mov ecx, esi */
  ecx = esi;
/* 860a39: call 0x6c7adb */
  esp -= 4; W32(esp, 0x860a3eu); SPILL(); f_6c7adb(); if (g_unwind) return; RELOAD();
/* 860a3e: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 860a40: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860a42: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860a44: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860a46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 860a47: mov ecx, edi */
  ecx = edi;
/* 860a49: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x860a4cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 860a4c: movzx ecx, word ptr [ebx + 0x12] */
  ecx = (uint32_t)(R16((uint32_t)(ebx + 0x12u)));
/* 860a50: movzx edx, word ptr [ebx + 0x10] */
  edx = (uint32_t)(R16((uint32_t)(ebx + 0x10u)));
/* 860a54: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 860a56: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 860a57: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 860a5a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 860a5b: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 860a5e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 860a5f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 860a60: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860a62: mov ecx, edi */
  ecx = edi;
/* 860a64: call dword ptr [eax + 0x5c] */
  { uint32_t t = R32((uint32_t)(eax + 0x5cu)); esp -= 4; W32(esp, 0x860a67u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 860a67: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 860a6c: mov ecx, dword ptr [0xce836c] */
  ecx = R32((uint32_t)(0xce836cu));
/* 860a72: inc dword ptr [eax + ecx*4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + ecx*4), r);
  }
/* 860a75: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 860a7a: mov ecx, dword ptr [0xce8370] */
  ecx = R32((uint32_t)(0xce8370u));
/* 860a80: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 860a83: add dword ptr [eax + ecx*4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + ecx*4), r);
  }
L_860a86: /* 860a86: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 860a89: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 860a8c: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 860a8f: jmp 0x860922 */
  goto L_860922;
L_860a94: /* 860a94: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 860a96: mov ecx, edi */
  ecx = edi;
/* 860a98: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x860a9bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 860a9b: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 860aa0: mov ecx, dword ptr [0xce8364] */
  ecx = R32((uint32_t)(0xce8364u));
/* 860aa6: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 860aa9: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 860aab: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 860aae: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 860ab0: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 860ab2: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 860ab4: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_860ab6: /* 860ab6: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 860ab9: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 860abc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 860abd: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 860ac0: jmp 0x860320 */
  goto L_860320;
L_860ac5: /* 860ac5: inc dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd4u), r);
  }
/* 860ac8: jmp 0x860310 */
  goto L_860310;
L_860acd: /* 860acd: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 860ad0: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 860ad2: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 860ad5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 860ad6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860ad8: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x860adbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 860adb: mov byte ptr [ebp - 0x2d], 0 */
  W8((uint32_t)(ebp + 0xffffffd3u), 0x0u);
/* 860adf: xor esi, esi */
  esi = 0;
L_860ae1: /* 860ae1: cmp esi, dword ptr [ebx + 0xfc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xfcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 860ae7: jge 0x860b80 */
  if ((sf == of)) goto L_860b80;
L_860aed: /* 860aed: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 860af0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 860af2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 860af4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 860af5: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x860afbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 860afb: mov ecx, eax */
  ecx = eax;
/* 860afd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860aff: jne 0x860b6f */
  if (!zf) goto L_860b6f;
L_860b01: /* 860b01: mov ecx, dword ptr [ebx + 0xf8] */
  ecx = R32((uint32_t)(ebx + 0xf8u));
/* 860b07: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 860b0a: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 860b0d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860b0f: jne 0x860b6f */
  if (!zf) goto L_860b6f;
L_860b11: /* 860b11: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 860b16: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x860b1cu); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 860b1c: mov ebx, eax */
  ebx = eax;
/* 860b1e: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860b20: je 0x860b40 */
  if (zf) goto L_860b40;
L_860b22: /* 860b22: push 0xb86100 */
  { uint32_t v = 0xb86100u; esp -= 4; W32(esp, v); }
/* 860b27: mov ecx, ebx */
  ecx = ebx;
/* 860b29: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x860b2fu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 860b2f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860b31: jne 0x860b69 */
  if (!zf) goto L_860b69;
L_860b33: /* 860b33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 860b34: mov ecx, ebx */
  ecx = ebx;
/* 860b36: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x860b3cu); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 860b3c: mov edi, eax */
  edi = eax;
/* 860b3e: jmp 0x860b45 */
  goto L_860b45;
L_860b40: /* 860b40: mov edi, 0xae51d0 */
  edi = 0xae51d0u;
L_860b45: /* 860b45: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 860b4a: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x860b50u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 860b50: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 860b56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 860b57: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 860b59: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 860b5a: push 0xae51dc */
  { uint32_t v = 0xae51dcu; esp -= 4; W32(esp, v); }
/* 860b5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 860b60: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x860b66u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 860b66: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_860b69: /* 860b69: mov ecx, dword ptr [ebx + 0x2c] */
  ecx = R32((uint32_t)(ebx + 0x2cu));
/* 860b6c: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
L_860b6f: /* 860b6f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 860b71: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x860b77u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 860b77: or byte ptr [ebp - 0x2d], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd3u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xffffffd3u), r);
  }
/* 860b7a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 860b7b: jmp 0x860ae1 */
  goto L_860ae1;
L_860b80: /* 860b80: lea eax, [ebx + 0x60] */
  eax = (uint32_t)(ebx + 0x60u);
/* 860b83: mov dword ptr [ebp - 0xc8], eax */
  W32((uint32_t)(ebp + 0xffffff38u), eax);
/* 860b89: mov eax, dword ptr [ebx + 0x128] */
  eax = R32((uint32_t)(ebx + 0x128u));
/* 860b8f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860b91: mov esi, 2 */
  esi = 0x2u;
/* 860b96: je 0x860ba3 */
  if (zf) goto L_860ba3;
L_860b98: /* 860b98: lea ecx, [ebx + 0x7c] */
  ecx = (uint32_t)(ebx + 0x7cu);
/* 860b9b: mov dword ptr [ebp - 0xc4], ecx */
  W32((uint32_t)(ebp + 0xffffff3cu), ecx);
/* 860ba1: jmp 0x860baf */
  goto L_860baf;
L_860ba3: /* 860ba3: lea edx, [ebx + 0x98] */
  edx = (uint32_t)(ebx + 0x98u);
/* 860ba9: mov dword ptr [ebp - 0xc4], edx */
  W32((uint32_t)(ebp + 0xffffff3cu), edx);
L_860baf: /* 860baf: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 860bb2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860bb4: je 0x860bc4 */
  if (zf) goto L_860bc4;
L_860bb6: /* 860bb6: add eax, 0x34 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 860bb9: mov dword ptr [ebp - 0xc0], eax */
  W32((uint32_t)(ebp + 0xffffff40u), eax);
/* 860bbf: mov esi, 3 */
  esi = 0x3u;
L_860bc4: /* 860bc4: mov dl, byte ptr [ebp - 0x2d] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffd3u))) & 0xffu);
/* 860bc7: or cl, 0xff */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a | b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 860bca: xor eax, eax */
  eax = 0;
/* 860bcc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_860bd0: /* 860bd0: cmp eax, dword ptr [ebx + 0xb8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xb8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 860bd6: jge 0x860bf4 */
  if ((sf == of)) goto L_860bf4;
L_860bd8: /* 860bd8: test dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 860bda: je 0x860bef */
  if (zf) goto L_860bef;
L_860bdc: /* 860bdc: mov edi, eax */
  edi = eax;
/* 860bde: shl edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 860be1: add edi, dword ptr [ebx + 0xb4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xb4u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 860be7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 860be8: mov dword ptr [ebp + esi*4 - 0xcc], edi */
  W32((uint32_t)(ebp + esi*4 + 0xffffff34u), edi);
L_860bef: /* 860bef: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 860bf0: shl cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint32_t c = 1;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 860bf2: jmp 0x860bd0 */
  goto L_860bd0;
L_860bf4: /* 860bf4: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 860bf7: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 860bfa: mov eax, dword ptr [ecx + 0x154] */
  eax = R32((uint32_t)(ecx + 0x154u));
/* 860c00: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860c02: jne 0x860c18 */
  if (!zf) goto L_860c18;
L_860c04: /* 860c04: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x860c0au); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 860c0a: mov ecx, dword ptr [eax + 0x5c] */
  ecx = R32((uint32_t)(eax + 0x5cu));
/* 860c0d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860c0f: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
/* 860c16: jne 0x860c1f */
  if (!zf) goto L_860c1f;
L_860c18: /* 860c18: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_860c1f: /* 860c1f: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 860c22: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 860c24: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 860c25: lea eax, [ebp - 0xc8] */
  eax = (uint32_t)(ebp + 0xffffff38u);
/* 860c2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 860c2c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860c2e: mov ecx, edi */
  ecx = edi;
/* 860c30: call dword ptr [edx + 0x4c] */
  { uint32_t t = R32((uint32_t)(edx + 0x4cu)); esp -= 4; W32(esp, 0x860c33u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 860c33: mov ebx, eax */
  ebx = eax;
/* 860c35: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860c37: je 0x860c7e */
  if (zf) goto L_860c7e;
L_860c39: /* 860c39: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 860c3c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860c3e: je 0x860c7e */
  if (zf) goto L_860c7e;
L_860c40: /* 860c40: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 860c43: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 860c45: mov ecx, dword ptr [edx + 0x54] */
  ecx = R32((uint32_t)(edx + 0x54u));
/* 860c48: mov esi, dword ptr [0xcfa884] */
  esi = R32((uint32_t)(0xcfa884u));
/* 860c4e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860c50: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860c52: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x860c54u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 860c54: mov edi, eax */
  edi = eax;
/* 860c56: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 860c59: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 860c5b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860c5d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860c5f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x860c61u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 860c61: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 860c67: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 860c69: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 860c6a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 860c6b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 860c6c: push 0xae5070 */
  { uint32_t v = 0xae5070u; esp -= 4; W32(esp, v); }
/* 860c71: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 860c72: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x860c78u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 860c78: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 860c7b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_860c7e: /* 860c7e: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 860c81: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 860c83: add ecx, 0xc0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 860c89: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860c8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 860c8c: mov ecx, edi */
  ecx = edi;
/* 860c8e: call dword ptr [eax + 0x54] */
  { uint32_t t = R32((uint32_t)(eax + 0x54u)); esp -= 4; W32(esp, 0x860c91u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 860c91: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 860c98: jmp 0x860ca0 */
  goto L_860ca0;
L_860ca0: /* 860ca0: cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 860ca4: jge 0x860df8 */
  if ((sf == of)) goto L_860df8;
L_860caa: /* 860caa: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 860cad: xor edi, edi */
  edi = 0;
/* 860caf: nop  */
L_860cb0: /* 860cb0: cmp edi, dword ptr [ebx + 0x58] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 860cb3: jge 0x860de9 */
  if ((sf == of)) goto L_860de9;
L_860cb9: /* 860cb9: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 860cbc: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 860cbe: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 860cc0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 860cc1: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0x860cc7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 860cc7: mov esi, eax */
  esi = eax;
/* 860cc9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860ccb: jne 0x860d3a */
  if (!zf) goto L_860d3a;
L_860ccd: /* 860ccd: mov edx, dword ptr [ebx + 0xf8] */
  edx = R32((uint32_t)(ebx + 0xf8u));
/* 860cd3: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 860cd6: mov esi, dword ptr [edx + ecx*4] */
  esi = R32((uint32_t)(edx + ecx*4));
/* 860cd9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860cdb: jne 0x860d3a */
  if (!zf) goto L_860d3a;
L_860cdd: /* 860cdd: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 860ce2: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x860ce8u); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 860ce8: mov ebx, eax */
  ebx = eax;
/* 860cea: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860cec: je 0x860d0c */
  if (zf) goto L_860d0c;
L_860cee: /* 860cee: push 0xb86100 */
  { uint32_t v = 0xb86100u; esp -= 4; W32(esp, v); }
/* 860cf3: mov ecx, ebx */
  ecx = ebx;
/* 860cf5: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x860cfbu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 860cfb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860cfd: jne 0x860d34 */
  if (!zf) goto L_860d34;
L_860cff: /* 860cff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 860d00: mov ecx, ebx */
  ecx = ebx;
/* 860d02: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x860d08u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 860d08: mov esi, eax */
  esi = eax;
/* 860d0a: jmp 0x860d11 */
  goto L_860d11;
L_860d0c: /* 860d0c: mov esi, 0xae51d0 */
  esi = 0xae51d0u;
L_860d11: /* 860d11: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 860d16: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x860d1cu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 860d1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 860d1d: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 860d22: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 860d24: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 860d25: push 0xae51dc */
  { uint32_t v = 0xae51dcu; esp -= 4; W32(esp, v); }
/* 860d2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 860d2b: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x860d31u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 860d31: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_860d34: /* 860d34: mov esi, dword ptr [ebx + 0x2c] */
  esi = R32((uint32_t)(ebx + 0x2cu));
/* 860d37: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
L_860d3a: /* 860d3a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 860d3c: mov ecx, esi */
  ecx = esi;
/* 860d3e: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x860d44u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 860d44: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860d46: je 0x860da1 */
  if (zf) goto L_860da1;
L_860d48: /* 860d48: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 860d4b: add eax, 0x194 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 860d50: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 860d52: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 860d55: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 860d58: mov dword ptr [ebp - 0x68], ecx */
  W32((uint32_t)(ebp + 0xffffff98u), ecx);
/* 860d5b: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 860d5e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 860d5f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 860d62: mov dword ptr [ebp - 0x64], edx */
  W32((uint32_t)(ebp + 0xffffff9cu), edx);
/* 860d65: lea edx, [ebp - 0xdc] */
  edx = (uint32_t)(ebp + 0xffffff24u);
/* 860d6b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 860d6c: add ecx, 0xa8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xa8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 860d72: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 860d75: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 860d7c: call dword ptr [0xcfa588] */
  esp -= 4; W32(esp, 0x860d82u); SPILL(); f_4e420a(); if (g_unwind) return; /* Core!??GFPlane@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 860d82: mov ecx, eax */
  ecx = eax;
/* 860d84: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x860d8au); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 860d8a: fst dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0);
/* 860d8d: fcomp dword ptr [0xa17000] */
  fpu_com(ST0, F32((uint32_t)(0xa17000u)));
  FPOP();
/* 860d93: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 860d95: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 860d98: jp 0x860da1 */
  if (pf) goto L_860da1;
L_860d9a: /* 860d9a: mov eax, 1 */
  eax = 0x1u;
/* 860d9f: jmp 0x860da3 */
  goto L_860da3;
L_860da1: /* 860da1: xor eax, eax */
  eax = 0;
L_860da3: /* 860da3: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 860da6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860da8: jne 0x860dc3 */
  if (!zf) goto L_860dc3;
L_860daa: /* 860daa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860dac: jne 0x860de3 */
  if (!zf) goto L_860de3;
L_860dae: /* 860dae: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 860db1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 860db2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 860db3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 860db4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 860db5: call 0x6caefc */
  esp -= 4; W32(esp, 0x860dbau); SPILL(); f_6caefc(); if (g_unwind) return; RELOAD();
/* 860dba: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 860dbd: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 860dbe: jmp 0x860cb0 */
  goto L_860cb0;
L_860dc3: /* 860dc3: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 860dc6: jne 0x860de3 */
  if (!zf) goto L_860de3;
L_860dc8: /* 860dc8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860dca: je 0x860de3 */
  if (zf) goto L_860de3;
L_860dcc: /* 860dcc: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 860dcf: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 860dd2: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 860dd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 860dd6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 860dd7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 860dd8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 860dd9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 860dda: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 860ddb: call 0x6ccc07 */
  esp -= 4; W32(esp, 0x860de0u); SPILL(); f_6ccc07(); if (g_unwind) return; RELOAD();
/* 860de0: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_860de3: /* 860de3: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 860de4: jmp 0x860cb0 */
  goto L_860cb0;
L_860de9: /* 860de9: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 860dec: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 860def: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 860df0: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 860df3: jmp 0x860ca0 */
  goto L_860ca0;
L_860df8: /* 860df8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 860dfb: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 860dfd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 860dff: call dword ptr [edx + 0x170] */
  { uint32_t t = R32((uint32_t)(edx + 0x170u)); esp -= 4; W32(esp, 0x860e05u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 860e05: mov esi, eax */
  esi = eax;
/* 860e07: mov eax, dword ptr [esi + 0x264] */
  eax = R32((uint32_t)(esi + 0x264u));
/* 860e0d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860e0f: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 860e12: je 0x86106c */
  if (zf) goto L_86106c;
L_860e18: /* 860e18: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 860e1b: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 860e1e: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x860e23u); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 860e23: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860e25: jne 0x86106c */
  if (!zf) goto L_86106c;
L_860e2b: /* 860e2b: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 860e2e: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 860e31: test dword ptr [ecx + 0x534], 0x20000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x534u))); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860e3b: je 0x86106c */
  if (zf) goto L_86106c;
L_860e41: /* 860e41: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 860e43: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 860e45: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 860e48: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 860e4b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860e4d: add eax, 0xc0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 860e52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 860e53: mov ecx, edi */
  ecx = edi;
/* 860e55: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0x860e58u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 860e58: xor ebx, ebx */
  ebx = 0;
L_860e5a: /* 860e5a: cmp ebx, dword ptr [esi + 0x264] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x264u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 860e60: mov edi, dword ptr [0xcfa2fc] */
  edi = R32((uint32_t)(0xcfa2fcu));
/* 860e66: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 860e69: jge 0x861051 */
  if ((sf == of)) goto L_861051;
L_860e6f: /* 860e6f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 860e72: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 860e74: mov ecx, dword ptr [esi + 0x260] */
  ecx = R32((uint32_t)(esi + 0x260u));
/* 860e7a: mov edx, dword ptr [eax + 0xb0] */
  edx = R32((uint32_t)(eax + 0xb0u));
/* 860e80: mov ecx, dword ptr [ecx + ebx*4] */
  ecx = R32((uint32_t)(ecx + ebx*4));
/* 860e83: fld dword ptr [edx + 0x3ac] */
  { double v = F32((uint32_t)(edx + 0x3acu)); FPUSH(v); }
/* 860e89: add esi, 0x260 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x260u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 860e8f: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 860e92: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 860e95: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 860e98: call 0x6ca46b */
  esp -= 4; W32(esp, 0x860e9du); SPILL(); f_6ca46b(); if (g_unwind) return; RELOAD();
/* 860e9d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860e9f: jne 0x860f14 */
  if (!zf) goto L_860f14;
L_860ea1: /* 860ea1: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 860ea3: jge 0x860eb9 */
  if ((sf == of)) goto L_860eb9;
L_860ea5: /* 860ea5: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 860eaa: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 860eaf: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 860eb4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x860eb6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 860eb6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_860eb9: /* 860eb9: cmp ebx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 860ebc: jle 0x860ed2 */
  if ((zf || sf != of)) goto L_860ed2;
L_860ebe: /* 860ebe: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 860ec3: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 860ec8: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 860ecd: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x860ecfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 860ecf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_860ed2: /* 860ed2: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 860ed5: lea edi, [ebx + 1] */
  edi = (uint32_t)(ebx + 0x1u);
/* 860ed8: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 860eda: jle 0x860ef4 */
  if ((zf || sf != of)) goto L_860ef4;
L_860edc: /* 860edc: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 860ee1: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 860ee6: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 860eeb: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x860ef1u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 860ef1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_860ef4: /* 860ef4: mov eax, ebx */
  eax = ebx;
L_860ef6: /* 860ef6: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 860ef8: jge 0x860efd */
  if ((sf == of)) goto L_860efd;
L_860efa: /* 860efa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 860efb: jmp 0x860ef6 */
  goto L_860ef6;
L_860efd: /* 860efd: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 860eff: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 860f01: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 860f02: mov ecx, esi */
  ecx = esi;
/* 860f04: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x860f0au); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 860f0a: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
L_860f0b: /* 860f0b: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 860f0e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 860f0f: jmp 0x860e5a */
  goto L_860e5a;
L_860f14: /* 860f14: xor esi, esi */
  esi = 0;
L_860f16: /* 860f16: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 860f19: cmp esi, dword ptr [eax + 0x58] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 860f1c: jge 0x860f0b */
  if ((sf == of)) goto L_860f0b;
L_860f1e: /* 860f1e: mov ebx, eax */
  ebx = eax;
/* 860f20: mov edx, dword ptr [ebx + 0x54] */
  edx = R32((uint32_t)(ebx + 0x54u));
/* 860f23: lea ecx, [esi + esi*4] */
  ecx = (uint32_t)(esi + esi*4);
/* 860f26: cmp word ptr [edx + ecx*4 + 0x10], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edx + ecx*4 + 0x10u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 860f2c: lea edi, [edx + ecx*4] */
  edi = (uint32_t)(edx + ecx*4);
/* 860f2f: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 860f32: jbe 0x861048 */
  if ((cf | zf)) goto L_861048;
L_860f38: /* 860f38: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 860f3b: mov ecx, esp */
  ecx = esp;
/* 860f3d: mov dword ptr [ebp - 0x48], esp */
  W32((uint32_t)(ebp + 0xffffffb8u), esp);
/* 860f40: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860f42: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 860f45: mov dword ptr [ebp - 0x40], 0 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x0u);
/* 860f4c: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 860f4f: mov eax, esp */
  eax = esp;
/* 860f51: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 860f53: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 860f5a: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 860f5d: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 860f60: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 860f67: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 860f6a: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 860f6d: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x860f73u); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 860f73: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 860f76: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 860f78: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860f7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860f7c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860f7e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860f80: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860f82: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x860f85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 860f85: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 860f88: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 860f8a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 860f8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 860f8d: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x860f93u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 860f93: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860f95: jne 0x861008 */
  if (!zf) goto L_861008;
L_860f97: /* 860f97: mov ecx, dword ptr [ebx + 0xf8] */
  ecx = R32((uint32_t)(ebx + 0xf8u));
/* 860f9d: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 860fa0: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 860fa3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860fa5: jne 0x861008 */
  if (!zf) goto L_861008;
L_860fa7: /* 860fa7: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 860fac: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x860fb2u); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 860fb2: mov edi, eax */
  edi = eax;
/* 860fb4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860fb6: je 0x860fd6 */
  if (zf) goto L_860fd6;
L_860fb8: /* 860fb8: push 0xb86100 */
  { uint32_t v = 0xb86100u; esp -= 4; W32(esp, v); }
/* 860fbd: mov ecx, edi */
  ecx = edi;
/* 860fbf: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x860fc5u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 860fc5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860fc7: jne 0x860fff */
  if (!zf) goto L_860fff;
L_860fc9: /* 860fc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 860fca: mov ecx, edi */
  ecx = edi;
/* 860fcc: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x860fd2u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 860fd2: mov ebx, eax */
  ebx = eax;
/* 860fd4: jmp 0x860fdb */
  goto L_860fdb;
L_860fd6: /* 860fd6: mov ebx, 0xae51d0 */
  ebx = 0xae51d0u;
L_860fdb: /* 860fdb: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 860fe0: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x860fe6u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 860fe6: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 860fec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 860fed: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 860fef: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 860ff0: push 0xae51dc */
  { uint32_t v = 0xae51dcu; esp -= 4; W32(esp, v); }
/* 860ff5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 860ff6: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x860ffcu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 860ffc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_860fff: /* 860fff: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 861002: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 861005: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
L_861008: /* 861008: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86100b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86100c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86100d: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 861010: call 0x6c7adb */
  esp -= 4; W32(esp, 0x861015u); SPILL(); f_6c7adb(); if (g_unwind) return; RELOAD();
/* 861015: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 861018: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 861019: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86101a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86101b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86101c: call 0x6caefc */
  esp -= 4; W32(esp, 0x861021u); SPILL(); f_6caefc(); if (g_unwind) return; RELOAD();
/* 861021: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 861026: mov ecx, dword ptr [0xce836c] */
  ecx = R32((uint32_t)(0xce836cu));
/* 86102c: mov ebx, dword ptr [eax + ecx*4] */
  ebx = R32((uint32_t)(eax + ecx*4));
/* 86102f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 861032: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 861033: mov dword ptr [eax + ecx*4], ebx */
  W32((uint32_t)(eax + ecx*4), ebx);
/* 861036: movzx edx, word ptr [edi + 0x10] */
  edx = (uint32_t)(R16((uint32_t)(edi + 0x10u)));
/* 86103a: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 86103f: mov ecx, dword ptr [0xce8370] */
  ecx = R32((uint32_t)(0xce8370u));
/* 861045: add dword ptr [eax + ecx*4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + ecx*4), r);
  }
L_861048: /* 861048: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86104b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 86104c: jmp 0x860f16 */
  goto L_860f16;
L_861051: /* 861051: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 861056: mov ecx, dword ptr [0xce8364] */
  ecx = R32((uint32_t)(0xce8364u));
/* 86105c: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 86105f: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 861061: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 861064: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 861066: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 861068: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86106a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_86106c: /* 86106c: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86106f: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 861072: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x861077u); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 861077: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 861079: jne 0x861252 */
  if (!zf) goto L_861252;
L_86107f: /* 86107f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 861082: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 861085: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 861088: test dword ptr [edx + 0x534], 0x20000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x534u))); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 861092: je 0x861252 */
  if (zf) goto L_861252;
L_861098: /* 861098: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 86109a: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86109d: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8610a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8610a2: add edx, 0xc0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8610a8: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8610ab: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8610ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8610ae: call dword ptr [eax + 0x54] */
  { uint32_t t = R32((uint32_t)(eax + 0x54u)); esp -= 4; W32(esp, 0x8610b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8610b1: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
L_8610b4: /* 8610b4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8610b6: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 8610b9: je 0x861237 */
  if (zf) goto L_861237;
L_8610bf: /* 8610bf: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8610c2: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8610c4: mov eax, dword ptr [edx + 0xb0] */
  eax = R32((uint32_t)(edx + 0xb0u));
/* 8610ca: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8610cc: fld dword ptr [eax + 0x3ac] */
  { double v = F32((uint32_t)(eax + 0x3acu)); FPUSH(v); }
/* 8610d2: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8610d5: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8610d8: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 8610db: call 0x6ca46b */
  esp -= 4; W32(esp, 0x8610e0u); SPILL(); f_6ca46b(); if (g_unwind) return; RELOAD();
/* 8610e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8610e2: je 0x86122f */
  if (zf) goto L_86122f;
L_8610e8: /* 8610e8: xor esi, esi */
  esi = 0;
/* 8610ea: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8610f0: /* 8610f0: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8610f3: cmp esi, dword ptr [ecx + 0x58] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8610f6: jge 0x86122f */
  if ((sf == of)) goto L_86122f;
L_8610fc: /* 8610fc: mov ebx, ecx */
  ebx = ecx;
/* 8610fe: mov eax, dword ptr [ebx + 0x54] */
  eax = R32((uint32_t)(ebx + 0x54u));
/* 861101: lea edx, [esi + esi*4] */
  edx = (uint32_t)(esi + esi*4);
/* 861104: cmp word ptr [eax + edx*4 + 0x10], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + edx*4 + 0x10u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 86110a: lea edi, [eax + edx*4] */
  edi = (uint32_t)(eax + edx*4);
/* 86110d: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 861110: jbe 0x861226 */
  if ((cf | zf)) goto L_861226;
L_861116: /* 861116: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 861119: mov ecx, esp */
  ecx = esp;
/* 86111b: mov dword ptr [ebp - 0x48], esp */
  W32((uint32_t)(ebp + 0xffffffb8u), esp);
/* 86111e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 861120: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 861123: mov dword ptr [ebp - 0x40], 0 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x0u);
/* 86112a: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 86112d: mov edx, esp */
  edx = esp;
/* 86112f: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 861131: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 861138: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 86113b: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 86113e: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 861145: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 861148: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 86114b: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x861151u); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 861151: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 861154: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 861156: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 861158: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86115a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86115c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86115e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 861160: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x861163u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 861163: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 861166: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 861168: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86116a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86116b: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x861171u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 861171: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 861173: jne 0x8611e6 */
  if (!zf) goto L_8611e6;
L_861175: /* 861175: mov ecx, dword ptr [ebx + 0xf8] */
  ecx = R32((uint32_t)(ebx + 0xf8u));
/* 86117b: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 86117e: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 861181: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 861183: jne 0x8611e6 */
  if (!zf) goto L_8611e6;
L_861185: /* 861185: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 86118a: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x861190u); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 861190: mov edi, eax */
  edi = eax;
/* 861192: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 861194: je 0x8611b4 */
  if (zf) goto L_8611b4;
L_861196: /* 861196: push 0xb86100 */
  { uint32_t v = 0xb86100u; esp -= 4; W32(esp, v); }
/* 86119b: mov ecx, edi */
  ecx = edi;
/* 86119d: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8611a3u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8611a3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8611a5: jne 0x8611dd */
  if (!zf) goto L_8611dd;
L_8611a7: /* 8611a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8611a8: mov ecx, edi */
  ecx = edi;
/* 8611aa: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8611b0u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8611b0: mov ebx, eax */
  ebx = eax;
/* 8611b2: jmp 0x8611b9 */
  goto L_8611b9;
L_8611b4: /* 8611b4: mov ebx, 0xae51d0 */
  ebx = 0xae51d0u;
L_8611b9: /* 8611b9: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 8611be: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8611c4u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8611c4: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 8611ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8611cb: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8611cd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8611ce: push 0xae51dc */
  { uint32_t v = 0xae51dcu; esp -= 4; W32(esp, v); }
/* 8611d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8611d4: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8611dau); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8611da: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8611dd: /* 8611dd: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 8611e0: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8611e3: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
L_8611e6: /* 8611e6: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8611e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8611ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8611eb: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8611ee: call 0x6c7adb */
  esp -= 4; W32(esp, 0x8611f3u); SPILL(); f_6c7adb(); if (g_unwind) return; RELOAD();
/* 8611f3: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 8611f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8611f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8611f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8611f9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8611fa: call 0x6caefc */
  esp -= 4; W32(esp, 0x8611ffu); SPILL(); f_6caefc(); if (g_unwind) return; RELOAD();
/* 8611ff: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 861204: mov ecx, dword ptr [0xce836c] */
  ecx = R32((uint32_t)(0xce836cu));
/* 86120a: mov ebx, dword ptr [eax + ecx*4] */
  ebx = R32((uint32_t)(eax + ecx*4));
/* 86120d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 861210: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 861211: mov dword ptr [eax + ecx*4], ebx */
  W32((uint32_t)(eax + ecx*4), ebx);
/* 861214: movzx edx, word ptr [edi + 0x10] */
  edx = (uint32_t)(R16((uint32_t)(edi + 0x10u)));
/* 861218: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 86121d: mov ecx, dword ptr [0xce8370] */
  ecx = R32((uint32_t)(0xce8370u));
/* 861223: add dword ptr [eax + ecx*4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + ecx*4), r);
  }
L_861226: /* 861226: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 861229: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 86122a: jmp 0x8610f0 */
  goto L_8610f0;
L_86122f: /* 86122f: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 861232: jmp 0x8610b4 */
  goto L_8610b4;
L_861237: /* 861237: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 86123c: mov ecx, dword ptr [0xce8364] */
  ecx = R32((uint32_t)(0xce8364u));
/* 861242: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 861245: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 861247: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86124a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86124c: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 86124e: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 861250: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_861252: /* 861252: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 861255: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 861258: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x86125du); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 86125d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86125f: jne 0x861528 */
  if (!zf) goto L_861528;
L_861265: /* 861265: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 861268: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 86126b: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 86126e: test dword ptr [edx + 0x534], 0x20000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x534u))); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 861278: je 0x861528 */
  if (zf) goto L_861528;
L_86127e: /* 86127e: xor ebx, ebx */
  ebx = 0;
L_861280: /* 861280: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 861283: cmp ebx, dword ptr [eax + 0x270] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x270u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 861289: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 86128c: jge 0x861528 */
  if ((sf == of)) goto L_861528;
L_861292: /* 861292: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 861295: mov edi, eax */
  edi = eax;
/* 861297: mov ecx, dword ptr [edi + 0x26c] */
  ecx = R32((uint32_t)(edi + 0x26cu));
/* 86129d: mov esi, dword ptr [ecx + ebx*4] */
  esi = R32((uint32_t)(ecx + ebx*4));
/* 8612a0: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8612a2: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 8612a8: fld dword ptr [ecx + 0x3ac] */
  { double v = F32((uint32_t)(ecx + 0x3acu)); FPUSH(v); }
/* 8612ae: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8612b0: add edi, 0x26c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x26cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8612b6: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8612b9: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8612bc: call 0x6ca46b */
  esp -= 4; W32(esp, 0x8612c1u); SPILL(); f_6ca46b(); if (g_unwind) return; RELOAD();
/* 8612c1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8612c3: jne 0x86137f */
  if (!zf) goto L_86137f;
L_8612c9: /* 8612c9: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8612cb: mov esi, dword ptr [edx + ebx*4] */
  esi = R32((uint32_t)(edx + ebx*4));
/* 8612ce: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8612d0: mov dword ptr [ebp - 0x48], esi */
  W32((uint32_t)(ebp + 0xffffffb8u), esi);
/* 8612d3: je 0x861307 */
  if (zf) goto L_861307;
L_8612d5: /* 8612d5: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 8612d8: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8612dc: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x8612e2u); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 8612e2: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* 8612e5: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8612e9: call 0x6cb555 */
  esp -= 4; W32(esp, 0x8612eeu); SPILL(); f_6cb555(); if (g_unwind) return; RELOAD();
/* 8612ee: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 8612f1: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8612f5: call 0x6cae43 */
  esp -= 4; W32(esp, 0x8612fau); SPILL(); f_6cae43(); if (g_unwind) return; RELOAD();
/* 8612fa: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 8612ff: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 861301: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 861303: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 861304: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x861307u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_861307: /* 861307: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 861309: jge 0x861323 */
  if ((sf == of)) goto L_861323;
L_86130b: /* 86130b: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 861310: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 861315: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 86131a: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x861320u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 861320: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_861323: /* 861323: cmp ebx, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 861326: jle 0x861340 */
  if ((zf || sf != of)) goto L_861340;
L_861328: /* 861328: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 86132d: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 861332: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 861337: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x86133du); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 86133d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_861340: /* 861340: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 861343: lea esi, [ebx + 1] */
  esi = (uint32_t)(ebx + 0x1u);
/* 861346: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 861348: jle 0x861362 */
  if ((zf || sf != of)) goto L_861362;
L_86134a: /* 86134a: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 86134f: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 861354: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 861359: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x86135fu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 86135f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_861362: /* 861362: mov eax, ebx */
  eax = ebx;
L_861364: /* 861364: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 861366: jge 0x86136b */
  if ((sf == of)) goto L_86136b;
L_861368: /* 861368: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 861369: jmp 0x861364 */
  goto L_861364;
L_86136b: /* 86136b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86136d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86136f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 861370: mov ecx, edi */
  ecx = edi;
/* 861372: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x861378u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 861378: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 861379: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 86137a: jmp 0x861280 */
  goto L_861280;
L_86137f: /* 86137f: mov edx, dword ptr [0xcd8ad8] */
  edx = R32((uint32_t)(0xcd8ad8u));
/* 861385: xor edi, edi */
  edi = 0;
L_861387: /* 861387: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 861389: je 0x8613c9 */
  if (zf) goto L_8613c9;
L_86138b: /* 86138b: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 86138d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86138f: mov ebx, dword ptr [eax + 0x10] */
  ebx = R32((uint32_t)(eax + 0x10u));
/* 861392: cmp ebx, dword ptr [ecx + 0x18] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 861395: jne 0x8613c4 */
  if (!zf) goto L_8613c4;
L_861397: /* 861397: movzx ebx, byte ptr [ecx + 0x21] */
  ebx = (uint32_t)(R8((uint32_t)(ecx + 0x21u)));
/* 86139b: cmp dword ptr [eax + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86139e: jne 0x8613c4 */
  if (!zf) goto L_8613c4;
L_8613a0: /* 8613a0: movzx ecx, byte ptr [ecx + 0x20] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0x20u)));
/* 8613a4: cmp dword ptr [eax + 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8613a7: jne 0x8613c4 */
  if (!zf) goto L_8613c4;
L_8613a9: /* 8613a9: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8613ac: cmp ecx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8613af: jne 0x8613c4 */
  if (!zf) goto L_8613c4;
L_8613b1: /* 8613b1: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 8613b4: cmp ecx, dword ptr [esi + 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8613b7: jne 0x8613c4 */
  if (!zf) goto L_8613c4;
L_8613b9: /* 8613b9: cmp dword ptr [eax + 0x24], 0x186a0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x24u))); uint32_t b = (uint32_t)(0x186a0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8613c0: jge 0x8613c4 */
  if ((sf == of)) goto L_8613c4;
L_8613c2: /* 8613c2: mov edi, eax */
  edi = eax;
L_8613c4: /* 8613c4: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 8613c7: jmp 0x861387 */
  goto L_861387;
L_8613c9: /* 8613c9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8613cb: jne 0x86146f */
  if (!zf) goto L_86146f;
L_8613d1: /* 8613d1: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8613d3: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 8613d5: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 8613da: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8613e0u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8613e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8613e2: je 0x86143e */
  if (zf) goto L_86143e;
L_8613e4: /* 8613e4: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8613e6: movzx edx, byte ptr [ecx + 0x20] */
  edx = (uint32_t)(R8((uint32_t)(ecx + 0x20u)));
/* 8613ea: movzx ebx, byte ptr [ecx + 0x21] */
  ebx = (uint32_t)(R8((uint32_t)(ecx + 0x21u)));
/* 8613ee: mov ecx, dword ptr [ecx + 0x18] */
  ecx = R32((uint32_t)(ecx + 0x18u));
/* 8613f1: mov edi, dword ptr [esi + 0x2c] */
  edi = R32((uint32_t)(esi + 0x2cu));
/* 8613f4: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8613f7: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 8613fa: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 8613fd: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 861400: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 861403: xor ecx, ecx */
  ecx = 0;
/* 861405: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 861407: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 86140e: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 861414: mov dword ptr [eax + 8], 0 */
  W32((uint32_t)(eax + 0x8u), 0x0u);
/* 86141b: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 86141e: mov dword ptr [eax + 0x18], ebx */
  W32((uint32_t)(eax + 0x18u), ebx);
/* 861421: mov dword ptr [eax + 0x1c], edi */
  W32((uint32_t)(eax + 0x1cu), edi);
/* 861424: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* 861427: mov dword ptr [eax + 0x28], ecx */
  W32((uint32_t)(eax + 0x28u), ecx);
/* 86142a: mov dword ptr [eax + 0x20], 0x1c */
  W32((uint32_t)(eax + 0x20u), 0x1cu);
/* 861431: je 0x86143a */
  if (zf) goto L_86143a;
L_861433: /* 861433: mov dword ptr [eax + 0x20], 0x24 */
  W32((uint32_t)(eax + 0x20u), 0x24u);
L_86143a: /* 86143a: mov edi, eax */
  edi = eax;
/* 86143c: jmp 0x861440 */
  goto L_861440;
L_86143e: /* 86143e: xor edi, edi */
  edi = 0;
L_861440: /* 861440: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 861442: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 861444: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 861449: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86144fu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86144f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 861451: je 0x861465 */
  if (zf) goto L_861465;
L_861453: /* 861453: mov ecx, dword ptr [0xcd8ad8] */
  ecx = R32((uint32_t)(0xcd8ad8u));
/* 861459: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 86145b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86145e: mov dword ptr [0xcd8ad8], eax */
  W32((uint32_t)(0xcd8ad8u), eax);
/* 861463: jmp 0x86146f */
  goto L_86146f;
L_861465: /* 861465: mov dword ptr [0xcd8ad8], 0 */
  W32((uint32_t)(0xcd8ad8u), 0x0u);
L_86146f: /* 86146f: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 861471: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 861473: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 861478: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86147eu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86147e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 861480: je 0x86149b */
  if (zf) goto L_86149b;
L_861482: /* 861482: mov dword ptr [eax + 0xc], esi */
  W32((uint32_t)(eax + 0xcu), esi);
/* 861485: mov dword ptr [eax], 0xa16b44 */
  W32((uint32_t)(eax), 0xa16b44u);
/* 86148b: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 86148e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 861491: mov esi, dword ptr [esi + 0x24] */
  esi = R32((uint32_t)(esi + 0x24u));
/* 861494: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 861497: mov esi, eax */
  esi = eax;
/* 861499: jmp 0x86149d */
  goto L_86149d;
L_86149b: /* 86149b: xor esi, esi */
  esi = 0;
L_86149d: /* 86149d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 8614a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8614a2: je 0x8614ae */
  if (zf) goto L_8614ae;
L_8614a4: /* 8614a4: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 8614a7: sub edx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 8614a9: cmp edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8614ac: jne 0x8614ee */
  if (!zf) goto L_8614ee;
L_8614ae: /* 8614ae: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8614b0: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 8614b5: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 8614ba: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8614c0u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8614c0: mov dword ptr [eax + 0x84], 0 */
  W32((uint32_t)(eax + 0x84u), 0x0u);
/* 8614ca: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 8614cd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8614cf: je 0x8614e3 */
  if (zf) goto L_8614e3;
L_8614d1: /* 8614d1: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8614d3: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8614d6: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8614d8: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 8614db: mov dword ptr [edx + 0x84], eax */
  W32((uint32_t)(edx + 0x84u), eax);
/* 8614e1: jmp 0x8614eb */
  goto L_8614eb;
L_8614e3: /* 8614e3: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 8614e9: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
L_8614eb: /* 8614eb: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
L_8614ee: /* 8614ee: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 8614f1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8614f3: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 8614f6: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8614f8: mov dword ptr [eax + ecx*4 + 4], esi */
  W32((uint32_t)(eax + ecx*4 + 0x4u), esi);
/* 8614fc: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 8614ff: mov ebx, dword ptr [edi + 0x24] */
  ebx = R32((uint32_t)(edi + 0x24u));
/* 861502: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 861505: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 861506: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 861509: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 86150c: imul edx, dword ptr [edi + 0x20] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi + 0x20u)));
  edx = (uint32_t)r;
  }
/* 861510: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 861512: mov dword ptr [edi + 0x24], ebx */
  W32((uint32_t)(edi + 0x24u), ebx);
/* 861515: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 861518: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86151b: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 86151d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 86151f: mov dword ptr [edi + 0x28], ecx */
  W32((uint32_t)(edi + 0x28u), ecx);
/* 861522: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 861523: jmp 0x861280 */
  goto L_861280;
L_861528: /* 861528: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 86152b: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 86152e: mov eax, dword ptr [ecx + 0x110] */
  eax = R32((uint32_t)(ecx + 0x110u));
/* 861534: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 861536: je 0x861608 */
  if (zf) goto L_861608;
L_86153c: /* 86153c: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86153f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 861541: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 861542: lea ecx, [ebp - 0xec] */
  ecx = (uint32_t)(ebp + 0xffffff14u);
/* 861548: call 0x6c460b */
  esp -= 4; W32(esp, 0x86154du); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 86154d: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 861550: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 861554: xor esi, esi */
  esi = 0;
L_861556: /* 861556: cmp esi, dword ptr [edi + 0x68] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x68u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 861559: jge 0x8615f7 */
  if ((sf == of)) goto L_8615f7;
L_86155f: /* 86155f: mov ecx, dword ptr [edi + 0x64] */
  ecx = R32((uint32_t)(edi + 0x64u));
/* 861562: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 861565: fld dword ptr [ecx + eax*8 + 0x14] */
  { double v = F32((uint32_t)(ecx + eax*8 + 0x14u)); FPUSH(v); }
/* 861569: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 86156c: fmul dword ptr [0xa0b294] */
  ST0 = ST0 * (F32((uint32_t)(0xa0b294u)));
/* 861572: mov byte ptr [ebp + 8], 0 */
  W8((uint32_t)(ebp + 0x8u), 0x0u);
/* 861576: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 861579: mov byte ptr [ebp + 9], 0xff */
  W8((uint32_t)(ebp + 0x9u), 0xffu);
/* 86157d: fmul dword ptr [0xa0b294] */
  ST0 = ST0 * (F32((uint32_t)(0xa0b294u)));
/* 861583: mov byte ptr [ebp + 0xa], 0xff */
  W8((uint32_t)(ebp + 0xau), 0xffu);
/* 861587: mov byte ptr [ebp + 0xb], 0xff */
  W8((uint32_t)(ebp + 0xbu), 0xffu);
/* 86158b: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86158e: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 861591: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 861592: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 861595: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 861598: fmul dword ptr [0xa0b294] */
  ST0 = ST0 * (F32((uint32_t)(0xa0b294u)));
/* 86159e: mov ecx, esp */
  ecx = esp;
/* 8615a0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8615a3: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 8615a9: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 8615ac: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8615af: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 8615b2: fld dword ptr [ebp - 0x84] */
  { double v = F32((uint32_t)(ebp + 0xffffff7cu)); FPUSH(v); }
/* 8615b8: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 8615ba: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8615bd: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8615c0: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8615c2: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8615c5: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8615c8: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8615cb: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8615ce: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8615d1: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8615d4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8615d6: mov ecx, esp */
  ecx = esp;
/* 8615d8: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8615da: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8615dd: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8615e0: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8615e3: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8615e6: lea ecx, [ebp - 0xec] */
  ecx = (uint32_t)(ebp + 0xffffff14u);
/* 8615ec: call 0x6cc74d */
  esp -= 4; W32(esp, 0x8615f1u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 8615f1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8615f2: jmp 0x861556 */
  goto L_861556;
L_8615f7: /* 8615f7: lea ecx, [ebp - 0xec] */
  ecx = (uint32_t)(ebp + 0xffffff14u);
/* 8615fd: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 861601: call 0x6cadcb */
  esp -= 4; W32(esp, 0x861606u); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
/* 861606: jmp 0x86160b */
  goto L_86160b;
L_861608: /* 861608: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
L_86160b: /* 86160b: mov eax, dword ptr [edi + 0x168] */
  eax = R32((uint32_t)(edi + 0x168u));
/* 861611: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 861613: je 0x861668 */
  if (zf) goto L_861668;
L_861615: /* 861615: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 861618: mov eax, dword ptr [ecx + 0x88] */
  eax = R32((uint32_t)(ecx + 0x88u));
/* 86161e: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 861621: je 0x861668 */
  if (zf) goto L_861668;
L_861623: /* 861623: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 861625: call dword ptr [edx + 0x13c] */
  { uint32_t t = R32((uint32_t)(edx + 0x13cu)); esp -= 4; W32(esp, 0x86162bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86162b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86162d: je 0x86164c */
  if (zf) goto L_86164c;
L_86162f: /* 86162f: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 861635: mov edx, dword ptr [ecx + 0x15220] */
  edx = R32((uint32_t)(ecx + 0x15220u));
/* 86163b: push 0x6c8607 */
  { uint32_t v = 0x6c8607u; esp -= 4; W32(esp, v); }
/* 861640: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 861641: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 861642: call 0x6c9a89 */
  esp -= 4; W32(esp, 0x861647u); SPILL(); f_6c9a89(); if (g_unwind) return; RELOAD();
/* 861647: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86164a: jmp 0x861668 */
  goto L_861668;
L_86164c: /* 86164c: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 86164f: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 861652: mov edx, dword ptr [ecx + 0x534] */
  edx = R32((uint32_t)(ecx + 0x534u));
/* 861658: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 86165b: mov ecx, dword ptr [edi + 0x168] */
  ecx = R32((uint32_t)(edi + 0x168u));
/* 861661: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 861662: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 861663: call 0x6cb9ec */
  esp -= 4; W32(esp, 0x861668u); SPILL(); f_6cb9ec(); if (g_unwind) return; RELOAD();
L_861668: /* 861668: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 86166b: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 86166e: mov eax, dword ptr [edx + 0x534] */
  eax = R32((uint32_t)(edx + 0x534u));
/* 861674: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 861676: jns 0x86179f */
  if (!sf) goto L_86179f;
L_86167c: /* 86167c: mov eax, dword ptr [edi + 0x104] */
  eax = R32((uint32_t)(edi + 0x104u));
/* 861682: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 861684: je 0x86179f */
  if (zf) goto L_86179f;
L_86168a: /* 86168a: mov eax, dword ptr [edi + 0x124] */
  eax = R32((uint32_t)(edi + 0x124u));
/* 861690: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 861692: jne 0x8616ac */
  if (!zf) goto L_8616ac;
L_861694: /* 861694: mov eax, dword ptr [edi + 0x120] */
  eax = R32((uint32_t)(edi + 0x120u));
/* 86169a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86169c: jne 0x8616ac */
  if (!zf) goto L_8616ac;
L_86169e: /* 86169e: mov eax, dword ptr [edi + 0x12c] */
  eax = R32((uint32_t)(edi + 0x12cu));
/* 8616a4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8616a6: je 0x86179f */
  if (zf) goto L_86179f;
L_8616ac: /* 8616ac: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x8616b2u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 8616b2: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 8616b5: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8616b8: xor ebx, ebx */
  ebx = 0;
L_8616ba: /* 8616ba: mov eax, dword ptr [edi + 0x104] */
  eax = R32((uint32_t)(edi + 0x104u));
/* 8616c0: cmp ebx, dword ptr [eax + 0x5c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x5cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8616c3: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 8616c6: jge 0x86179f */
  if ((sf == of)) goto L_86179f;
L_8616cc: /* 8616cc: mov ecx, dword ptr [eax + 0x58] */
  ecx = R32((uint32_t)(eax + 0x58u));
/* 8616cf: imul ebx, ebx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x78u);
  ebx = (uint32_t)r;
  }
/* 8616d2: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8616d4: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 8616d7: xor esi, esi */
  esi = 0;
L_8616d9: /* 8616d9: movzx ecx, byte ptr [ebx + 0x56] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + 0x56u)));
/* 8616dd: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8616df: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 8616e2: jge 0x861793 */
  if ((sf == of)) goto L_861793;
L_8616e8: /* 8616e8: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 8616eb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8616ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8616ee: lea ecx, [ebp - 0xec] */
  ecx = (uint32_t)(ebp + 0xffffff14u);
/* 8616f4: call 0x6c460b */
  esp -= 4; W32(esp, 0x8616f9u); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 8616f9: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8616fc: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8616ff: mov eax, dword ptr [eax + 0x104] */
  eax = R32((uint32_t)(eax + 0x104u));
/* 861705: mov edi, dword ptr [eax + 0x68] */
  edi = R32((uint32_t)(eax + 0x68u));
/* 861708: mov ecx, dword ptr [eax + 0x88] */
  ecx = R32((uint32_t)(eax + 0x88u));
/* 86170e: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 861711: mov eax, dword ptr [eax + 0xe4] */
  eax = R32((uint32_t)(eax + 0xe4u));
/* 861717: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 861718: lea edx, [esi + 1] */
  edx = (uint32_t)(esi + 0x1u);
/* 86171b: mov esi, dword ptr [ebx + 0x18] */
  esi = R32((uint32_t)(ebx + 0x18u));
/* 86171e: movzx ebx, byte ptr [ebx + 0x56] */
  ebx = (uint32_t)(R8((uint32_t)(ebx + 0x56u)));
/* 861722: mov eax, edx */
  eax = edx;
/* 861724: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 861727: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 861728: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0x861728);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 86172a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86172d: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 861731: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 861733: mov eax, dword ptr [edi + edx*8] */
  eax = R32((uint32_t)(edi + edx*8));
/* 861736: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 861739: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 86173c: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 86173e: mov edx, esp */
  edx = esp;
/* 861740: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 861742: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 861745: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 861748: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 86174b: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 86174e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 861751: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 861753: mov edi, dword ptr [edi + esi*8] */
  edi = R32((uint32_t)(edi + esi*8));
/* 861756: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 861759: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 86175c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86175e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 861761: mov edx, esp */
  edx = esp;
/* 861763: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 861765: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 861768: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 86176b: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 86176e: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 861771: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 861774: call 0x6cc74d */
  esp -= 4; W32(esp, 0x861779u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 861779: lea ecx, [ebp - 0xec] */
  ecx = (uint32_t)(ebp + 0xffffff14u);
/* 86177f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 861783: call 0x6cadcb */
  esp -= 4; W32(esp, 0x861788u); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
/* 861788: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86178b: mov ebx, dword ptr [ebp - 0x44] */
  ebx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 86178e: jmp 0x8616d9 */
  goto L_8616d9;
L_861793: /* 861793: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 861796: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 861799: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 86179a: jmp 0x8616ba */
  goto L_8616ba;
L_86179f: /* 86179f: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8617a2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8617a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8617a6: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x8617a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8617a9: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8617ae: mov ecx, dword ptr [0xce8420] */
  ecx = R32((uint32_t)(0xce8420u));
/* 8617b4: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 8617b7: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8617b9: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 8617bb: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8617be: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8617c0: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 8617c2: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 8617c8: mov eax, dword ptr [0xce8428] */
  eax = R32((uint32_t)(0xce8428u));
/* 8617cd: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 8617d0: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8617d2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8617d4: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8617d7: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8617d9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_8617db: /* 8617db: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8617de: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8617df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8617e0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8617e7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8617e8: mov esp, ebp */
  esp = ebp;
/* 8617ea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8617eb: ret  */
  esp += 4; SPILL(); return;
}

void f_860c9a(void) {
  LOAD_REGS();
L_860c9a: /* 860c9a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_860ca0: /* 860ca0: cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 860ca4: jge 0x860df8 */
  if ((sf == of)) goto L_860df8;
L_860caa: /* 860caa: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 860cad: xor edi, edi */
  edi = 0;
/* 860caf: nop  */
L_860cb0: /* 860cb0: cmp edi, dword ptr [ebx + 0x58] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 860cb3: jge 0x860de9 */
  if ((sf == of)) goto L_860de9;
L_860cb9: /* 860cb9: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 860cbc: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 860cbe: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 860cc0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 860cc1: call dword ptr [eax + 0xa8] */
  { uint32_t t = R32((uint32_t)(eax + 0xa8u)); esp -= 4; W32(esp, 0x860cc7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 860cc7: mov esi, eax */
  esi = eax;
/* 860cc9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860ccb: jne 0x860d3a */
  if (!zf) goto L_860d3a;
L_860ccd: /* 860ccd: mov edx, dword ptr [ebx + 0xf8] */
  edx = R32((uint32_t)(ebx + 0xf8u));
/* 860cd3: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 860cd6: mov esi, dword ptr [edx + ecx*4] */
  esi = R32((uint32_t)(edx + ecx*4));
/* 860cd9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860cdb: jne 0x860d3a */
  if (!zf) goto L_860d3a;
L_860cdd: /* 860cdd: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 860ce2: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x860ce8u); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 860ce8: mov ebx, eax */
  ebx = eax;
/* 860cea: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860cec: je 0x860d0c */
  if (zf) goto L_860d0c;
L_860cee: /* 860cee: push 0xb86100 */
  { uint32_t v = 0xb86100u; esp -= 4; W32(esp, v); }
/* 860cf3: mov ecx, ebx */
  ecx = ebx;
/* 860cf5: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x860cfbu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 860cfb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860cfd: jne 0x860d34 */
  if (!zf) goto L_860d34;
L_860cff: /* 860cff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 860d00: mov ecx, ebx */
  ecx = ebx;
/* 860d02: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x860d08u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 860d08: mov esi, eax */
  esi = eax;
/* 860d0a: jmp 0x860d11 */
  goto L_860d11;
L_860d0c: /* 860d0c: mov esi, 0xae51d0 */
  esi = 0xae51d0u;
L_860d11: /* 860d11: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 860d16: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x860d1cu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 860d1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 860d1d: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 860d22: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 860d24: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 860d25: push 0xae51dc */
  { uint32_t v = 0xae51dcu; esp -= 4; W32(esp, v); }
/* 860d2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 860d2b: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x860d31u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 860d31: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_860d34: /* 860d34: mov esi, dword ptr [ebx + 0x2c] */
  esi = R32((uint32_t)(ebx + 0x2cu));
/* 860d37: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
L_860d3a: /* 860d3a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 860d3c: mov ecx, esi */
  ecx = esi;
/* 860d3e: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0x860d44u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 860d44: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860d46: je 0x860da1 */
  if (zf) goto L_860da1;
L_860d48: /* 860d48: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 860d4b: add eax, 0x194 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 860d50: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 860d52: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 860d55: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 860d58: mov dword ptr [ebp - 0x68], ecx */
  W32((uint32_t)(ebp + 0xffffff98u), ecx);
/* 860d5b: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 860d5e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 860d5f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 860d62: mov dword ptr [ebp - 0x64], edx */
  W32((uint32_t)(ebp + 0xffffff9cu), edx);
/* 860d65: lea edx, [ebp - 0xdc] */
  edx = (uint32_t)(ebp + 0xffffff24u);
/* 860d6b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 860d6c: add ecx, 0xa8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xa8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 860d72: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 860d75: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 860d7c: call dword ptr [0xcfa588] */
  esp -= 4; W32(esp, 0x860d82u); SPILL(); f_4e420a(); if (g_unwind) return; /* Core!??GFPlane@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 860d82: mov ecx, eax */
  ecx = eax;
/* 860d84: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x860d8au); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 860d8a: fst dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0);
/* 860d8d: fcomp dword ptr [0xa17000] */
  fpu_com(ST0, F32((uint32_t)(0xa17000u)));
  FPOP();
/* 860d93: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 860d95: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 860d98: jp 0x860da1 */
  if (pf) goto L_860da1;
L_860d9a: /* 860d9a: mov eax, 1 */
  eax = 0x1u;
/* 860d9f: jmp 0x860da3 */
  goto L_860da3;
L_860da1: /* 860da1: xor eax, eax */
  eax = 0;
L_860da3: /* 860da3: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 860da6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860da8: jne 0x860dc3 */
  if (!zf) goto L_860dc3;
L_860daa: /* 860daa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860dac: jne 0x860de3 */
  if (!zf) goto L_860de3;
L_860dae: /* 860dae: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 860db1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 860db2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 860db3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 860db4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 860db5: call 0x6caefc */
  esp -= 4; W32(esp, 0x860dbau); SPILL(); f_6caefc(); if (g_unwind) return; RELOAD();
/* 860dba: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 860dbd: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 860dbe: jmp 0x860cb0 */
  goto L_860cb0;
L_860dc3: /* 860dc3: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 860dc6: jne 0x860de3 */
  if (!zf) goto L_860de3;
L_860dc8: /* 860dc8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860dca: je 0x860de3 */
  if (zf) goto L_860de3;
L_860dcc: /* 860dcc: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 860dcf: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 860dd2: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 860dd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 860dd6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 860dd7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 860dd8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 860dd9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 860dda: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 860ddb: call 0x6ccc07 */
  esp -= 4; W32(esp, 0x860de0u); SPILL(); f_6ccc07(); if (g_unwind) return; RELOAD();
/* 860de0: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_860de3: /* 860de3: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 860de4: jmp 0x860cb0 */
  goto L_860cb0;
L_860de9: /* 860de9: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 860dec: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 860def: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 860df0: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 860df3: jmp 0x860ca0 */
  goto L_860ca0;
L_860df8: /* 860df8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 860dfb: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 860dfd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 860dff: call dword ptr [edx + 0x170] */
  { uint32_t t = R32((uint32_t)(edx + 0x170u)); esp -= 4; W32(esp, 0x860e05u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 860e05: mov esi, eax */
  esi = eax;
/* 860e07: mov eax, dword ptr [esi + 0x264] */
  eax = R32((uint32_t)(esi + 0x264u));
/* 860e0d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860e0f: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 860e12: je 0x86106c */
  if (zf) goto L_86106c;
L_860e18: /* 860e18: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 860e1b: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 860e1e: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x860e23u); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 860e23: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860e25: jne 0x86106c */
  if (!zf) goto L_86106c;
L_860e2b: /* 860e2b: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 860e2e: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 860e31: test dword ptr [ecx + 0x534], 0x20000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x534u))); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860e3b: je 0x86106c */
  if (zf) goto L_86106c;
L_860e41: /* 860e41: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 860e43: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 860e45: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 860e48: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 860e4b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860e4d: add eax, 0xc0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 860e52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 860e53: mov ecx, edi */
  ecx = edi;
/* 860e55: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0x860e58u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 860e58: xor ebx, ebx */
  ebx = 0;
L_860e5a: /* 860e5a: cmp ebx, dword ptr [esi + 0x264] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x264u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 860e60: mov edi, dword ptr [0xcfa2fc] */
  edi = R32((uint32_t)(0xcfa2fcu));
/* 860e66: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 860e69: jge 0x861051 */
  if ((sf == of)) goto L_861051;
L_860e6f: /* 860e6f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 860e72: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 860e74: mov ecx, dword ptr [esi + 0x260] */
  ecx = R32((uint32_t)(esi + 0x260u));
/* 860e7a: mov edx, dword ptr [eax + 0xb0] */
  edx = R32((uint32_t)(eax + 0xb0u));
/* 860e80: mov ecx, dword ptr [ecx + ebx*4] */
  ecx = R32((uint32_t)(ecx + ebx*4));
/* 860e83: fld dword ptr [edx + 0x3ac] */
  { double v = F32((uint32_t)(edx + 0x3acu)); FPUSH(v); }
/* 860e89: add esi, 0x260 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x260u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 860e8f: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 860e92: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 860e95: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 860e98: call 0x6ca46b */
  esp -= 4; W32(esp, 0x860e9du); SPILL(); f_6ca46b(); if (g_unwind) return; RELOAD();
/* 860e9d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860e9f: jne 0x860f14 */
  if (!zf) goto L_860f14;
L_860ea1: /* 860ea1: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 860ea3: jge 0x860eb9 */
  if ((sf == of)) goto L_860eb9;
L_860ea5: /* 860ea5: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 860eaa: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 860eaf: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 860eb4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x860eb6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 860eb6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_860eb9: /* 860eb9: cmp ebx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 860ebc: jle 0x860ed2 */
  if ((zf || sf != of)) goto L_860ed2;
L_860ebe: /* 860ebe: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 860ec3: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 860ec8: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 860ecd: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x860ecfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 860ecf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_860ed2: /* 860ed2: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 860ed5: lea edi, [ebx + 1] */
  edi = (uint32_t)(ebx + 0x1u);
/* 860ed8: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 860eda: jle 0x860ef4 */
  if ((zf || sf != of)) goto L_860ef4;
L_860edc: /* 860edc: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 860ee1: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 860ee6: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 860eeb: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x860ef1u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 860ef1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_860ef4: /* 860ef4: mov eax, ebx */
  eax = ebx;
L_860ef6: /* 860ef6: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 860ef8: jge 0x860efd */
  if ((sf == of)) goto L_860efd;
L_860efa: /* 860efa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 860efb: jmp 0x860ef6 */
  goto L_860ef6;
L_860efd: /* 860efd: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 860eff: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 860f01: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 860f02: mov ecx, esi */
  ecx = esi;
/* 860f04: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x860f0au); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 860f0a: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
L_860f0b: /* 860f0b: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 860f0e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 860f0f: jmp 0x860e5a */
  goto L_860e5a;
L_860f14: /* 860f14: xor esi, esi */
  esi = 0;
L_860f16: /* 860f16: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 860f19: cmp esi, dword ptr [eax + 0x58] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 860f1c: jge 0x860f0b */
  if ((sf == of)) goto L_860f0b;
L_860f1e: /* 860f1e: mov ebx, eax */
  ebx = eax;
/* 860f20: mov edx, dword ptr [ebx + 0x54] */
  edx = R32((uint32_t)(ebx + 0x54u));
/* 860f23: lea ecx, [esi + esi*4] */
  ecx = (uint32_t)(esi + esi*4);
/* 860f26: cmp word ptr [edx + ecx*4 + 0x10], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edx + ecx*4 + 0x10u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 860f2c: lea edi, [edx + ecx*4] */
  edi = (uint32_t)(edx + ecx*4);
/* 860f2f: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 860f32: jbe 0x861048 */
  if ((cf | zf)) goto L_861048;
L_860f38: /* 860f38: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 860f3b: mov ecx, esp */
  ecx = esp;
/* 860f3d: mov dword ptr [ebp - 0x48], esp */
  W32((uint32_t)(ebp + 0xffffffb8u), esp);
/* 860f40: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860f42: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 860f45: mov dword ptr [ebp - 0x40], 0 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x0u);
/* 860f4c: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 860f4f: mov eax, esp */
  eax = esp;
/* 860f51: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 860f53: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 860f5a: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 860f5d: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 860f60: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 860f67: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 860f6a: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 860f6d: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x860f73u); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 860f73: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 860f76: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 860f78: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860f7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860f7c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860f7e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860f80: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 860f82: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x860f85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 860f85: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 860f88: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 860f8a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 860f8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 860f8d: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x860f93u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 860f93: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860f95: jne 0x861008 */
  if (!zf) goto L_861008;
L_860f97: /* 860f97: mov ecx, dword ptr [ebx + 0xf8] */
  ecx = R32((uint32_t)(ebx + 0xf8u));
/* 860f9d: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 860fa0: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 860fa3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860fa5: jne 0x861008 */
  if (!zf) goto L_861008;
L_860fa7: /* 860fa7: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 860fac: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x860fb2u); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 860fb2: mov edi, eax */
  edi = eax;
/* 860fb4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860fb6: je 0x860fd6 */
  if (zf) goto L_860fd6;
L_860fb8: /* 860fb8: push 0xb86100 */
  { uint32_t v = 0xb86100u; esp -= 4; W32(esp, v); }
/* 860fbd: mov ecx, edi */
  ecx = edi;
/* 860fbf: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x860fc5u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 860fc5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 860fc7: jne 0x860fff */
  if (!zf) goto L_860fff;
L_860fc9: /* 860fc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 860fca: mov ecx, edi */
  ecx = edi;
/* 860fcc: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x860fd2u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 860fd2: mov ebx, eax */
  ebx = eax;
/* 860fd4: jmp 0x860fdb */
  goto L_860fdb;
L_860fd6: /* 860fd6: mov ebx, 0xae51d0 */
  ebx = 0xae51d0u;
L_860fdb: /* 860fdb: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 860fe0: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x860fe6u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 860fe6: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 860fec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 860fed: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 860fef: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 860ff0: push 0xae51dc */
  { uint32_t v = 0xae51dcu; esp -= 4; W32(esp, v); }
/* 860ff5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 860ff6: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x860ffcu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 860ffc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_860fff: /* 860fff: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 861002: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 861005: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
L_861008: /* 861008: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 86100b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86100c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 86100d: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 861010: call 0x6c7adb */
  esp -= 4; W32(esp, 0x861015u); SPILL(); f_6c7adb(); if (g_unwind) return; RELOAD();
/* 861015: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 861018: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 861019: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 86101a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86101b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 86101c: call 0x6caefc */
  esp -= 4; W32(esp, 0x861021u); SPILL(); f_6caefc(); if (g_unwind) return; RELOAD();
/* 861021: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 861026: mov ecx, dword ptr [0xce836c] */
  ecx = R32((uint32_t)(0xce836cu));
/* 86102c: mov ebx, dword ptr [eax + ecx*4] */
  ebx = R32((uint32_t)(eax + ecx*4));
/* 86102f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 861032: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 861033: mov dword ptr [eax + ecx*4], ebx */
  W32((uint32_t)(eax + ecx*4), ebx);
/* 861036: movzx edx, word ptr [edi + 0x10] */
  edx = (uint32_t)(R16((uint32_t)(edi + 0x10u)));
/* 86103a: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 86103f: mov ecx, dword ptr [0xce8370] */
  ecx = R32((uint32_t)(0xce8370u));
/* 861045: add dword ptr [eax + ecx*4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + ecx*4), r);
  }
L_861048: /* 861048: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86104b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 86104c: jmp 0x860f16 */
  goto L_860f16;
L_861051: /* 861051: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 861056: mov ecx, dword ptr [0xce8364] */
  ecx = R32((uint32_t)(0xce8364u));
/* 86105c: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 86105f: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 861061: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 861064: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 861066: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 861068: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 86106a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_86106c: /* 86106c: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 86106f: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 861072: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x861077u); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 861077: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 861079: jne 0x861252 */
  if (!zf) goto L_861252;
L_86107f: /* 86107f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 861082: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 861085: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 861088: test dword ptr [edx + 0x534], 0x20000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x534u))); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 861092: je 0x861252 */
  if (zf) goto L_861252;
L_861098: /* 861098: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 86109a: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 86109d: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8610a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8610a2: add edx, 0xc0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8610a8: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8610ab: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8610ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8610ae: call dword ptr [eax + 0x54] */
  { uint32_t t = R32((uint32_t)(eax + 0x54u)); esp -= 4; W32(esp, 0x8610b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8610b1: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
L_8610b4: /* 8610b4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8610b6: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 8610b9: je 0x861237 */
  if (zf) goto L_861237;
L_8610bf: /* 8610bf: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8610c2: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8610c4: mov eax, dword ptr [edx + 0xb0] */
  eax = R32((uint32_t)(edx + 0xb0u));
/* 8610ca: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8610cc: fld dword ptr [eax + 0x3ac] */
  { double v = F32((uint32_t)(eax + 0x3acu)); FPUSH(v); }
/* 8610d2: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8610d5: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8610d8: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 8610db: call 0x6ca46b */
  esp -= 4; W32(esp, 0x8610e0u); SPILL(); f_6ca46b(); if (g_unwind) return; RELOAD();
/* 8610e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8610e2: je 0x86122f */
  if (zf) goto L_86122f;
L_8610e8: /* 8610e8: xor esi, esi */
  esi = 0;
/* 8610ea: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8610f0: /* 8610f0: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8610f3: cmp esi, dword ptr [ecx + 0x58] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8610f6: jge 0x86122f */
  if ((sf == of)) goto L_86122f;
L_8610fc: /* 8610fc: mov ebx, ecx */
  ebx = ecx;
/* 8610fe: mov eax, dword ptr [ebx + 0x54] */
  eax = R32((uint32_t)(ebx + 0x54u));
/* 861101: lea edx, [esi + esi*4] */
  edx = (uint32_t)(esi + esi*4);
/* 861104: cmp word ptr [eax + edx*4 + 0x10], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + edx*4 + 0x10u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 86110a: lea edi, [eax + edx*4] */
  edi = (uint32_t)(eax + edx*4);
/* 86110d: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 861110: jbe 0x861226 */
  if ((cf | zf)) goto L_861226;
L_861116: /* 861116: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 861119: mov ecx, esp */
  ecx = esp;
/* 86111b: mov dword ptr [ebp - 0x48], esp */
  W32((uint32_t)(ebp + 0xffffffb8u), esp);
/* 86111e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 861120: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 861123: mov dword ptr [ebp - 0x40], 0 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x0u);
/* 86112a: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 86112d: mov edx, esp */
  edx = esp;
/* 86112f: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 861131: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 861138: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 86113b: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 86113e: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 861145: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 861148: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 86114b: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x861151u); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 861151: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 861154: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 861156: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 861158: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86115a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86115c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 86115e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 861160: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x861163u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 861163: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 861166: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 861168: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86116a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 86116b: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x861171u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 861171: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 861173: jne 0x8611e6 */
  if (!zf) goto L_8611e6;
L_861175: /* 861175: mov ecx, dword ptr [ebx + 0xf8] */
  ecx = R32((uint32_t)(ebx + 0xf8u));
/* 86117b: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 86117e: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 861181: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 861183: jne 0x8611e6 */
  if (!zf) goto L_8611e6;
L_861185: /* 861185: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 86118a: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x861190u); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 861190: mov edi, eax */
  edi = eax;
/* 861192: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 861194: je 0x8611b4 */
  if (zf) goto L_8611b4;
L_861196: /* 861196: push 0xb86100 */
  { uint32_t v = 0xb86100u; esp -= 4; W32(esp, v); }
/* 86119b: mov ecx, edi */
  ecx = edi;
/* 86119d: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8611a3u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8611a3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8611a5: jne 0x8611dd */
  if (!zf) goto L_8611dd;
L_8611a7: /* 8611a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8611a8: mov ecx, edi */
  ecx = edi;
/* 8611aa: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8611b0u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8611b0: mov ebx, eax */
  ebx = eax;
/* 8611b2: jmp 0x8611b9 */
  goto L_8611b9;
L_8611b4: /* 8611b4: mov ebx, 0xae51d0 */
  ebx = 0xae51d0u;
L_8611b9: /* 8611b9: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 8611be: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8611c4u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8611c4: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 8611ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8611cb: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8611cd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8611ce: push 0xae51dc */
  { uint32_t v = 0xae51dcu; esp -= 4; W32(esp, v); }
/* 8611d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8611d4: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8611dau); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8611da: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8611dd: /* 8611dd: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 8611e0: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8611e3: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
L_8611e6: /* 8611e6: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8611e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8611ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8611eb: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8611ee: call 0x6c7adb */
  esp -= 4; W32(esp, 0x8611f3u); SPILL(); f_6c7adb(); if (g_unwind) return; RELOAD();
/* 8611f3: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 8611f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8611f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8611f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8611f9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8611fa: call 0x6caefc */
  esp -= 4; W32(esp, 0x8611ffu); SPILL(); f_6caefc(); if (g_unwind) return; RELOAD();
/* 8611ff: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 861204: mov ecx, dword ptr [0xce836c] */
  ecx = R32((uint32_t)(0xce836cu));
/* 86120a: mov ebx, dword ptr [eax + ecx*4] */
  ebx = R32((uint32_t)(eax + ecx*4));
/* 86120d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 861210: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 861211: mov dword ptr [eax + ecx*4], ebx */
  W32((uint32_t)(eax + ecx*4), ebx);
/* 861214: movzx edx, word ptr [edi + 0x10] */
  edx = (uint32_t)(R16((uint32_t)(edi + 0x10u)));
/* 861218: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 86121d: mov ecx, dword ptr [0xce8370] */
  ecx = R32((uint32_t)(0xce8370u));
/* 861223: add dword ptr [eax + ecx*4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + ecx*4), r);
  }
L_861226: /* 861226: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 861229: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 86122a: jmp 0x8610f0 */
  goto L_8610f0;
L_86122f: /* 86122f: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 861232: jmp 0x8610b4 */
  goto L_8610b4;
L_861237: /* 861237: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 86123c: mov ecx, dword ptr [0xce8364] */
  ecx = R32((uint32_t)(0xce8364u));
/* 861242: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 861245: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 861247: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86124a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 86124c: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 86124e: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 861250: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_861252: /* 861252: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 861255: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 861258: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x86125du); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 86125d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86125f: jne 0x861528 */
  if (!zf) goto L_861528;
L_861265: /* 861265: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 861268: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 86126b: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 86126e: test dword ptr [edx + 0x534], 0x20000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x534u))); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 861278: je 0x861528 */
  if (zf) goto L_861528;
L_86127e: /* 86127e: xor ebx, ebx */
  ebx = 0;
L_861280: /* 861280: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 861283: cmp ebx, dword ptr [eax + 0x270] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x270u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 861289: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 86128c: jge 0x861528 */
  if ((sf == of)) goto L_861528;
L_861292: /* 861292: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 861295: mov edi, eax */
  edi = eax;
/* 861297: mov ecx, dword ptr [edi + 0x26c] */
  ecx = R32((uint32_t)(edi + 0x26cu));
/* 86129d: mov esi, dword ptr [ecx + ebx*4] */
  esi = R32((uint32_t)(ecx + ebx*4));
/* 8612a0: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8612a2: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 8612a8: fld dword ptr [ecx + 0x3ac] */
  { double v = F32((uint32_t)(ecx + 0x3acu)); FPUSH(v); }
/* 8612ae: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8612b0: add edi, 0x26c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x26cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8612b6: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8612b9: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8612bc: call 0x6ca46b */
  esp -= 4; W32(esp, 0x8612c1u); SPILL(); f_6ca46b(); if (g_unwind) return; RELOAD();
/* 8612c1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8612c3: jne 0x86137f */
  if (!zf) goto L_86137f;
L_8612c9: /* 8612c9: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8612cb: mov esi, dword ptr [edx + ebx*4] */
  esi = R32((uint32_t)(edx + ebx*4));
/* 8612ce: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8612d0: mov dword ptr [ebp - 0x48], esi */
  W32((uint32_t)(ebp + 0xffffffb8u), esi);
/* 8612d3: je 0x861307 */
  if (zf) goto L_861307;
L_8612d5: /* 8612d5: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 8612d8: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8612dc: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x8612e2u); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 8612e2: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* 8612e5: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8612e9: call 0x6cb555 */
  esp -= 4; W32(esp, 0x8612eeu); SPILL(); f_6cb555(); if (g_unwind) return; RELOAD();
/* 8612ee: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 8612f1: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8612f5: call 0x6cae43 */
  esp -= 4; W32(esp, 0x8612fau); SPILL(); f_6cae43(); if (g_unwind) return; RELOAD();
/* 8612fa: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 8612ff: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 861301: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 861303: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 861304: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x861307u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_861307: /* 861307: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 861309: jge 0x861323 */
  if ((sf == of)) goto L_861323;
L_86130b: /* 86130b: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 861310: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 861315: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 86131a: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x861320u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 861320: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_861323: /* 861323: cmp ebx, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 861326: jle 0x861340 */
  if ((zf || sf != of)) goto L_861340;
L_861328: /* 861328: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 86132d: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 861332: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 861337: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x86133du); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 86133d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_861340: /* 861340: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 861343: lea esi, [ebx + 1] */
  esi = (uint32_t)(ebx + 0x1u);
/* 861346: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 861348: jle 0x861362 */
  if ((zf || sf != of)) goto L_861362;
L_86134a: /* 86134a: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 86134f: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 861354: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 861359: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x86135fu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 86135f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_861362: /* 861362: mov eax, ebx */
  eax = ebx;
L_861364: /* 861364: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 861366: jge 0x86136b */
  if ((sf == of)) goto L_86136b;
L_861368: /* 861368: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 861369: jmp 0x861364 */
  goto L_861364;
L_86136b: /* 86136b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 86136d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 86136f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 861370: mov ecx, edi */
  ecx = edi;
/* 861372: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x861378u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 861378: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 861379: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 86137a: jmp 0x861280 */
  goto L_861280;
L_86137f: /* 86137f: mov edx, dword ptr [0xcd8ad8] */
  edx = R32((uint32_t)(0xcd8ad8u));
/* 861385: xor edi, edi */
  edi = 0;
L_861387: /* 861387: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 861389: je 0x8613c9 */
  if (zf) goto L_8613c9;
L_86138b: /* 86138b: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 86138d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 86138f: mov ebx, dword ptr [eax + 0x10] */
  ebx = R32((uint32_t)(eax + 0x10u));
/* 861392: cmp ebx, dword ptr [ecx + 0x18] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 861395: jne 0x8613c4 */
  if (!zf) goto L_8613c4;
L_861397: /* 861397: movzx ebx, byte ptr [ecx + 0x21] */
  ebx = (uint32_t)(R8((uint32_t)(ecx + 0x21u)));
/* 86139b: cmp dword ptr [eax + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 86139e: jne 0x8613c4 */
  if (!zf) goto L_8613c4;
L_8613a0: /* 8613a0: movzx ecx, byte ptr [ecx + 0x20] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0x20u)));
/* 8613a4: cmp dword ptr [eax + 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8613a7: jne 0x8613c4 */
  if (!zf) goto L_8613c4;
L_8613a9: /* 8613a9: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8613ac: cmp ecx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8613af: jne 0x8613c4 */
  if (!zf) goto L_8613c4;
L_8613b1: /* 8613b1: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 8613b4: cmp ecx, dword ptr [esi + 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8613b7: jne 0x8613c4 */
  if (!zf) goto L_8613c4;
L_8613b9: /* 8613b9: cmp dword ptr [eax + 0x24], 0x186a0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x24u))); uint32_t b = (uint32_t)(0x186a0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8613c0: jge 0x8613c4 */
  if ((sf == of)) goto L_8613c4;
L_8613c2: /* 8613c2: mov edi, eax */
  edi = eax;
L_8613c4: /* 8613c4: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 8613c7: jmp 0x861387 */
  goto L_861387;
L_8613c9: /* 8613c9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8613cb: jne 0x86146f */
  if (!zf) goto L_86146f;
L_8613d1: /* 8613d1: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8613d3: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 8613d5: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 8613da: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8613e0u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8613e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8613e2: je 0x86143e */
  if (zf) goto L_86143e;
L_8613e4: /* 8613e4: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8613e6: movzx edx, byte ptr [ecx + 0x20] */
  edx = (uint32_t)(R8((uint32_t)(ecx + 0x20u)));
/* 8613ea: movzx ebx, byte ptr [ecx + 0x21] */
  ebx = (uint32_t)(R8((uint32_t)(ecx + 0x21u)));
/* 8613ee: mov ecx, dword ptr [ecx + 0x18] */
  ecx = R32((uint32_t)(ecx + 0x18u));
/* 8613f1: mov edi, dword ptr [esi + 0x2c] */
  edi = R32((uint32_t)(esi + 0x2cu));
/* 8613f4: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8613f7: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 8613fa: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 8613fd: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 861400: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 861403: xor ecx, ecx */
  ecx = 0;
/* 861405: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 861407: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 86140e: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 861414: mov dword ptr [eax + 8], 0 */
  W32((uint32_t)(eax + 0x8u), 0x0u);
/* 86141b: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 86141e: mov dword ptr [eax + 0x18], ebx */
  W32((uint32_t)(eax + 0x18u), ebx);
/* 861421: mov dword ptr [eax + 0x1c], edi */
  W32((uint32_t)(eax + 0x1cu), edi);
/* 861424: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* 861427: mov dword ptr [eax + 0x28], ecx */
  W32((uint32_t)(eax + 0x28u), ecx);
/* 86142a: mov dword ptr [eax + 0x20], 0x1c */
  W32((uint32_t)(eax + 0x20u), 0x1cu);
/* 861431: je 0x86143a */
  if (zf) goto L_86143a;
L_861433: /* 861433: mov dword ptr [eax + 0x20], 0x24 */
  W32((uint32_t)(eax + 0x20u), 0x24u);
L_86143a: /* 86143a: mov edi, eax */
  edi = eax;
/* 86143c: jmp 0x861440 */
  goto L_861440;
L_86143e: /* 86143e: xor edi, edi */
  edi = 0;
L_861440: /* 861440: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 861442: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 861444: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 861449: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86144fu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86144f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 861451: je 0x861465 */
  if (zf) goto L_861465;
L_861453: /* 861453: mov ecx, dword ptr [0xcd8ad8] */
  ecx = R32((uint32_t)(0xcd8ad8u));
/* 861459: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 86145b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 86145e: mov dword ptr [0xcd8ad8], eax */
  W32((uint32_t)(0xcd8ad8u), eax);
/* 861463: jmp 0x86146f */
  goto L_86146f;
L_861465: /* 861465: mov dword ptr [0xcd8ad8], 0 */
  W32((uint32_t)(0xcd8ad8u), 0x0u);
L_86146f: /* 86146f: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 861471: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 861473: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 861478: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x86147eu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 86147e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 861480: je 0x86149b */
  if (zf) goto L_86149b;
L_861482: /* 861482: mov dword ptr [eax + 0xc], esi */
  W32((uint32_t)(eax + 0xcu), esi);
/* 861485: mov dword ptr [eax], 0xa16b44 */
  W32((uint32_t)(eax), 0xa16b44u);
/* 86148b: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 86148e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 861491: mov esi, dword ptr [esi + 0x24] */
  esi = R32((uint32_t)(esi + 0x24u));
/* 861494: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 861497: mov esi, eax */
  esi = eax;
/* 861499: jmp 0x86149d */
  goto L_86149d;
L_86149b: /* 86149b: xor esi, esi */
  esi = 0;
L_86149d: /* 86149d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 8614a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8614a2: je 0x8614ae */
  if (zf) goto L_8614ae;
L_8614a4: /* 8614a4: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 8614a7: sub edx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 8614a9: cmp edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8614ac: jne 0x8614ee */
  if (!zf) goto L_8614ee;
L_8614ae: /* 8614ae: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8614b0: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 8614b5: mov ecx, 0xcc9ad8 */
  ecx = 0xcc9ad8u;
/* 8614ba: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8614c0u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8614c0: mov dword ptr [eax + 0x84], 0 */
  W32((uint32_t)(eax + 0x84u), 0x0u);
/* 8614ca: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 8614cd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8614cf: je 0x8614e3 */
  if (zf) goto L_8614e3;
L_8614d1: /* 8614d1: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8614d3: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8614d6: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8614d8: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 8614db: mov dword ptr [edx + 0x84], eax */
  W32((uint32_t)(edx + 0x84u), eax);
/* 8614e1: jmp 0x8614eb */
  goto L_8614eb;
L_8614e3: /* 8614e3: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 8614e9: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
L_8614eb: /* 8614eb: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
L_8614ee: /* 8614ee: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 8614f1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8614f3: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 8614f6: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8614f8: mov dword ptr [eax + ecx*4 + 4], esi */
  W32((uint32_t)(eax + ecx*4 + 0x4u), esi);
/* 8614fc: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 8614ff: mov ebx, dword ptr [edi + 0x24] */
  ebx = R32((uint32_t)(edi + 0x24u));
/* 861502: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 861505: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 861506: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 861509: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 86150c: imul edx, dword ptr [edi + 0x20] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi + 0x20u)));
  edx = (uint32_t)r;
  }
/* 861510: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 861512: mov dword ptr [edi + 0x24], ebx */
  W32((uint32_t)(edi + 0x24u), ebx);
/* 861515: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 861518: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 86151b: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 86151d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 86151f: mov dword ptr [edi + 0x28], ecx */
  W32((uint32_t)(edi + 0x28u), ecx);
/* 861522: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 861523: jmp 0x861280 */
  goto L_861280;
L_861528: /* 861528: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 86152b: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 86152e: mov eax, dword ptr [ecx + 0x110] */
  eax = R32((uint32_t)(ecx + 0x110u));
/* 861534: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 861536: je 0x861608 */
  if (zf) goto L_861608;
L_86153c: /* 86153c: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 86153f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 861541: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 861542: lea ecx, [ebp - 0xec] */
  ecx = (uint32_t)(ebp + 0xffffff14u);
/* 861548: call 0x6c460b */
  esp -= 4; W32(esp, 0x86154du); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 86154d: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 861550: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 861554: xor esi, esi */
  esi = 0;
L_861556: /* 861556: cmp esi, dword ptr [edi + 0x68] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x68u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 861559: jge 0x8615f7 */
  if ((sf == of)) goto L_8615f7;
L_86155f: /* 86155f: mov ecx, dword ptr [edi + 0x64] */
  ecx = R32((uint32_t)(edi + 0x64u));
/* 861562: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 861565: fld dword ptr [ecx + eax*8 + 0x14] */
  { double v = F32((uint32_t)(ecx + eax*8 + 0x14u)); FPUSH(v); }
/* 861569: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 86156c: fmul dword ptr [0xa0b294] */
  ST0 = ST0 * (F32((uint32_t)(0xa0b294u)));
/* 861572: mov byte ptr [ebp + 8], 0 */
  W8((uint32_t)(ebp + 0x8u), 0x0u);
/* 861576: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 861579: mov byte ptr [ebp + 9], 0xff */
  W8((uint32_t)(ebp + 0x9u), 0xffu);
/* 86157d: fmul dword ptr [0xa0b294] */
  ST0 = ST0 * (F32((uint32_t)(0xa0b294u)));
/* 861583: mov byte ptr [ebp + 0xa], 0xff */
  W8((uint32_t)(ebp + 0xau), 0xffu);
/* 861587: mov byte ptr [ebp + 0xb], 0xff */
  W8((uint32_t)(ebp + 0xbu), 0xffu);
/* 86158b: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 86158e: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 861591: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 861592: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 861595: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 861598: fmul dword ptr [0xa0b294] */
  ST0 = ST0 * (F32((uint32_t)(0xa0b294u)));
/* 86159e: mov ecx, esp */
  ecx = esp;
/* 8615a0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8615a3: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 8615a9: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 8615ac: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8615af: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 8615b2: fld dword ptr [ebp - 0x84] */
  { double v = F32((uint32_t)(ebp + 0xffffff7cu)); FPUSH(v); }
/* 8615b8: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 8615ba: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8615bd: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8615c0: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8615c2: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8615c5: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8615c8: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8615cb: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8615ce: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8615d1: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8615d4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8615d6: mov ecx, esp */
  ecx = esp;
/* 8615d8: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8615da: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8615dd: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8615e0: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8615e3: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8615e6: lea ecx, [ebp - 0xec] */
  ecx = (uint32_t)(ebp + 0xffffff14u);
/* 8615ec: call 0x6cc74d */
  esp -= 4; W32(esp, 0x8615f1u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 8615f1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8615f2: jmp 0x861556 */
  goto L_861556;
L_8615f7: /* 8615f7: lea ecx, [ebp - 0xec] */
  ecx = (uint32_t)(ebp + 0xffffff14u);
/* 8615fd: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 861601: call 0x6cadcb */
  esp -= 4; W32(esp, 0x861606u); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
/* 861606: jmp 0x86160b */
  goto L_86160b;
L_861608: /* 861608: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
L_86160b: /* 86160b: mov eax, dword ptr [edi + 0x168] */
  eax = R32((uint32_t)(edi + 0x168u));
/* 861611: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 861613: je 0x861668 */
  if (zf) goto L_861668;
L_861615: /* 861615: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 861618: mov eax, dword ptr [ecx + 0x88] */
  eax = R32((uint32_t)(ecx + 0x88u));
/* 86161e: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 861621: je 0x861668 */
  if (zf) goto L_861668;
L_861623: /* 861623: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 861625: call dword ptr [edx + 0x13c] */
  { uint32_t t = R32((uint32_t)(edx + 0x13cu)); esp -= 4; W32(esp, 0x86162bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 86162b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86162d: je 0x86164c */
  if (zf) goto L_86164c;
L_86162f: /* 86162f: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 861635: mov edx, dword ptr [ecx + 0x15220] */
  edx = R32((uint32_t)(ecx + 0x15220u));
/* 86163b: push 0x6c8607 */
  { uint32_t v = 0x6c8607u; esp -= 4; W32(esp, v); }
/* 861640: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 861641: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 861642: call 0x6c9a89 */
  esp -= 4; W32(esp, 0x861647u); SPILL(); f_6c9a89(); if (g_unwind) return; RELOAD();
/* 861647: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 86164a: jmp 0x861668 */
  goto L_861668;
L_86164c: /* 86164c: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 86164f: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 861652: mov edx, dword ptr [ecx + 0x534] */
  edx = R32((uint32_t)(ecx + 0x534u));
/* 861658: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 86165b: mov ecx, dword ptr [edi + 0x168] */
  ecx = R32((uint32_t)(edi + 0x168u));
/* 861661: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 861662: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 861663: call 0x6cb9ec */
  esp -= 4; W32(esp, 0x861668u); SPILL(); f_6cb9ec(); if (g_unwind) return; RELOAD();
L_861668: /* 861668: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 86166b: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 86166e: mov eax, dword ptr [edx + 0x534] */
  eax = R32((uint32_t)(edx + 0x534u));
/* 861674: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 861676: jns 0x86179f */
  if (!sf) goto L_86179f;
L_86167c: /* 86167c: mov eax, dword ptr [edi + 0x104] */
  eax = R32((uint32_t)(edi + 0x104u));
/* 861682: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 861684: je 0x86179f */
  if (zf) goto L_86179f;
L_86168a: /* 86168a: mov eax, dword ptr [edi + 0x124] */
  eax = R32((uint32_t)(edi + 0x124u));
/* 861690: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 861692: jne 0x8616ac */
  if (!zf) goto L_8616ac;
L_861694: /* 861694: mov eax, dword ptr [edi + 0x120] */
  eax = R32((uint32_t)(edi + 0x120u));
/* 86169a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 86169c: jne 0x8616ac */
  if (!zf) goto L_8616ac;
L_86169e: /* 86169e: mov eax, dword ptr [edi + 0x12c] */
  eax = R32((uint32_t)(edi + 0x12cu));
/* 8616a4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8616a6: je 0x86179f */
  if (zf) goto L_86179f;
L_8616ac: /* 8616ac: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x8616b2u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 8616b2: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 8616b5: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8616b8: xor ebx, ebx */
  ebx = 0;
L_8616ba: /* 8616ba: mov eax, dword ptr [edi + 0x104] */
  eax = R32((uint32_t)(edi + 0x104u));
/* 8616c0: cmp ebx, dword ptr [eax + 0x5c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x5cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8616c3: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 8616c6: jge 0x86179f */
  if ((sf == of)) goto L_86179f;
L_8616cc: /* 8616cc: mov ecx, dword ptr [eax + 0x58] */
  ecx = R32((uint32_t)(eax + 0x58u));
/* 8616cf: imul ebx, ebx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x78u);
  ebx = (uint32_t)r;
  }
/* 8616d2: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8616d4: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* 8616d7: xor esi, esi */
  esi = 0;
L_8616d9: /* 8616d9: movzx ecx, byte ptr [ebx + 0x56] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + 0x56u)));
/* 8616dd: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8616df: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 8616e2: jge 0x861793 */
  if ((sf == of)) goto L_861793;
L_8616e8: /* 8616e8: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 8616eb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8616ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8616ee: lea ecx, [ebp - 0xec] */
  ecx = (uint32_t)(ebp + 0xffffff14u);
/* 8616f4: call 0x6c460b */
  esp -= 4; W32(esp, 0x8616f9u); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 8616f9: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8616fc: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8616ff: mov eax, dword ptr [eax + 0x104] */
  eax = R32((uint32_t)(eax + 0x104u));
/* 861705: mov edi, dword ptr [eax + 0x68] */
  edi = R32((uint32_t)(eax + 0x68u));
/* 861708: mov ecx, dword ptr [eax + 0x88] */
  ecx = R32((uint32_t)(eax + 0x88u));
/* 86170e: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 861711: mov eax, dword ptr [eax + 0xe4] */
  eax = R32((uint32_t)(eax + 0xe4u));
/* 861717: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 861718: lea edx, [esi + 1] */
  edx = (uint32_t)(esi + 0x1u);
/* 86171b: mov esi, dword ptr [ebx + 0x18] */
  esi = R32((uint32_t)(ebx + 0x18u));
/* 86171e: movzx ebx, byte ptr [ebx + 0x56] */
  ebx = (uint32_t)(R8((uint32_t)(ebx + 0x56u)));
/* 861722: mov eax, edx */
  eax = edx;
/* 861724: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 861727: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 861728: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0x861728);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 86172a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 86172d: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 861731: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 861733: mov eax, dword ptr [edi + edx*8] */
  eax = R32((uint32_t)(edi + edx*8));
/* 861736: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 861739: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* 86173c: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 86173e: mov edx, esp */
  edx = esp;
/* 861740: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 861742: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 861745: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 861748: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 86174b: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 86174e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 861751: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 861753: mov edi, dword ptr [edi + esi*8] */
  edi = R32((uint32_t)(edi + esi*8));
/* 861756: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 861759: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 86175c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 86175e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 861761: mov edx, esp */
  edx = esp;
/* 861763: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 861765: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 861768: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 86176b: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 86176e: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 861771: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 861774: call 0x6cc74d */
  esp -= 4; W32(esp, 0x861779u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 861779: lea ecx, [ebp - 0xec] */
  ecx = (uint32_t)(ebp + 0xffffff14u);
/* 86177f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 861783: call 0x6cadcb */
  esp -= 4; W32(esp, 0x861788u); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
/* 861788: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 86178b: mov ebx, dword ptr [ebp - 0x44] */
  ebx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 86178e: jmp 0x8616d9 */
  goto L_8616d9;
L_861793: /* 861793: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 861796: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 861799: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 86179a: jmp 0x8616ba */
  goto L_8616ba;
L_86179f: /* 86179f: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8617a2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8617a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8617a6: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x8617a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8617a9: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8617ae: mov ecx, dword ptr [0xce8420] */
  ecx = R32((uint32_t)(0xce8420u));
/* 8617b4: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 8617b7: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8617b9: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 8617bb: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8617be: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8617c0: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 8617c2: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 8617c8: mov eax, dword ptr [0xce8428] */
  eax = R32((uint32_t)(0xce8428u));
/* 8617cd: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 8617d0: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8617d2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8617d4: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8617d7: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8617d9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8617db: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8617de: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8617df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8617e0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8617e7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8617e8: mov esp, ebp */
  esp = ebp;
/* 8617ea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8617eb: ret  */
  esp += 4; SPILL(); return;
}
