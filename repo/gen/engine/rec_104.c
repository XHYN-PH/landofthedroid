#include "recomp.h"
#include "rec_mod.h"

void f_8c6057(void) {
  LOAD_REGS();
L_8c6057: /* 8c6057: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8c605a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8c605f: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8c6062: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c6063: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 8c6066: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8c606bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8c606b(); return;
}

void f_8c606b(void) {
  LOAD_REGS();
L_8c606b: /* 8c606b: push 0xa1bf20 */
  { uint32_t v = 0xa1bf20u; esp -= 4; W32(esp, v); }
/* 8c6070: push 0xaecbb8 */
  { uint32_t v = 0xaecbb8u; esp -= 4; W32(esp, v); }
/* 8c6075: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8c607bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8c607b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c607e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c6080: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c6082: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8c6087u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8c6087: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8c608a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c608b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c608c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8c6093: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c6094: mov esp, ebp */
  esp = ebp;
/* 8c6096: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c6097: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8c61f0(void) {
  LOAD_REGS();
L_8c61f0: /* 8c61f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8c61f1: mov ebp, esp */
  ebp = esp;
/* 8c61f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8c61f5: push 0x9d7b90 */
  { uint32_t v = 0x9d7b90u; esp -= 4; W32(esp, v); }
/* 8c61fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8c6200: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c6201: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8c6208: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c620b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c620c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c620d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c620e: mov edi, ecx */
  edi = ecx;
/* 8c6210: mov eax, dword ptr [edi + 0x1290] */
  eax = R32((uint32_t)(edi + 0x1290u));
/* 8c6216: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8c6219: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 8c621b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8c621e: mov eax, dword ptr [edi + 0x128c] */
  eax = R32((uint32_t)(edi + 0x128cu));
/* 8c6224: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8c6227: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8c622a: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 8c622c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8c622f: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8c6232: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8c6235: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 8c6238: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c6239: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8c623c: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8c623f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c6240: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8c6243: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 8c6246: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8c6249: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8c6250: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8c6253: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 8c625a: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 8c6261: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8c6264: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8c6267: call dword ptr [0xcfa530] */
  esp -= 4; W32(esp, 0x8c626du); SPILL(); f_4e310c(); if (g_unwind) return; /* Core!??0FBox@@QAE@ABVFVector@@0@Z */ RELOAD();
/* 8c626d: xor esi, esi */
  esi = 0;
/* 8c626f: nop  */
L_8c6270: /* 8c6270: cmp esi, dword ptr [edi + 0x1310] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1310u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c6276: jge 0x8c62a7 */
  if ((sf == of)) goto L_8c62a7;
L_8c6278: /* 8c6278: mov eax, dword ptr [edi + 0x130c] */
  eax = R32((uint32_t)(edi + 0x130cu));
/* 8c627e: lea edx, [esi + esi*4] */
  edx = (uint32_t)(esi + esi*4);
/* 8c6281: fild dword ptr [eax + edx*4 + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + edx*4 + 0x4u)); FPUSH(v); }
/* 8c6285: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 8c6288: fild dword ptr [eax] */
  { double v = (double)(int32_t)R32((uint32_t)(eax)); FPUSH(v); }
/* 8c628a: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8c628d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c628e: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 8c6291: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8c6294: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 8c629b: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8c629e: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x8c62a4u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 8c62a4: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8c62a5: jmp 0x8c6270 */
  goto L_8c6270;
L_8c62a7: /* 8c62a7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8c62aa: mov ecx, 7 */
  ecx = 0x7u;
/* 8c62af: lea esi, [ebp - 0x58] */
  esi = (uint32_t)(ebp + 0xffffffa8u);
/* 8c62b2: mov edi, eax */
  edi = eax;
/* 8c62b4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c62b6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8c62b9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c62ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c62bb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8c62c2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c62c3: mov esp, ebp */
  esp = ebp;
/* 8c62c5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c62c6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8c62c9(void) {
  LOAD_REGS();
L_8c62c9: /* 8c62c9: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8c62cc: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8c62d1: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 8c62d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c62d5: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8c62d8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8c62ddu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8c62dd(); return;
}

void f_8c62dd(void) {
  LOAD_REGS();
L_8c62dd: /* 8c62dd: push 0xa1bf60 */
  { uint32_t v = 0xa1bf60u; esp -= 4; W32(esp, v); }
/* 8c62e2: push 0xaecbe0 */
  { uint32_t v = 0xaecbe0u; esp -= 4; W32(esp, v); }
/* 8c62e7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8c62edu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8c62ed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c62f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c62f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c62f4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8c62f9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8c62f9: guest_badaddr(0x8c62f9); return;
}

void f_8c6350(void) {
  LOAD_REGS();
L_8c6350: /* 8c6350: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8c6351: mov ebp, esp */
  ebp = esp;
/* 8c6353: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8c6355: push 0x9d7bab */
  { uint32_t v = 0x9d7babu; esp -= 4; W32(esp, v); }
/* 8c635a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8c6360: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c6361: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8c6368: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c636b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8c636e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c636f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c6370: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c6371: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8c6374: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c6376: mov edi, ecx */
  edi = ecx;
/* 8c6378: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c6379: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 8c637f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8c6386: call 0x6c460b */
  esp -= 4; W32(esp, 0x8c638bu); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 8c638b: lea esi, [edi + 0x12dc] */
  esi = (uint32_t)(edi + 0x12dcu);
/* 8c6391: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c6392: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8c6395: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c6396: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 8c6399: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8c639d: call dword ptr [0xcfa364] */
  esp -= 4; W32(esp, 0x8c63a3u); SPILL(); f_4e1af5(); if (g_unwind) return; /* Core!?TransformPointBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8c63a3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8c63a5: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 8c63a8: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8c63ab: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 8c63ae: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8c63b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c63b2: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 8c63b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c63b6: lea ecx, [ebp + 0x18] */
  ecx = (uint32_t)(ebp + 0x18u);
/* 8c63b9: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 8c63bc: call dword ptr [0xcfa364] */
  esp -= 4; W32(esp, 0x8c63c2u); SPILL(); f_4e1af5(); if (g_unwind) return; /* Core!?TransformPointBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8c63c2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8c63c4: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 8c63c7: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8c63ca: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 8c63cd: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8c63d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c63d2: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 8c63d5: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 8c63d8: call dword ptr [0xcfa260] */
  esp -= 4; W32(esp, 0x8c63deu); SPILL(); f_4e2ffe(); if (g_unwind) return; /* Core!??0FBox@@QAE@H@Z */ RELOAD();
/* 8c63de: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8c63e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c63e2: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 8c63e5: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x8c63ebu); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 8c63eb: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 8c63ee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c63ef: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 8c63f2: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x8c63f8u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 8c63f8: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 8c63fb: fsub dword ptr [ebp - 0x64] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 8c63fe: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8c6404: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c6406: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8c6409: jnp 0x8c64d0 */
  if (!pf) goto L_8c64d0;
L_8c640f: /* 8c640f: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 8c6412: call 0x99c958 */
  esp -= 4; W32(esp, 0x8c6417u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8c6417: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 8c641a: mov esi, eax */
  esi = eax;
/* 8c641c: call 0x99c958 */
  esp -= 4; W32(esp, 0x8c6421u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8c6421: imul eax, dword ptr [edi + 0x128c] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi + 0x128cu)));
  eax = (uint32_t)r;
  }
/* 8c6428: mov ecx, dword ptr [edi + 0x1280] */
  ecx = R32((uint32_t)(edi + 0x1280u));
/* 8c642e: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c6430: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8c6433: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 8c6436: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 8c6438: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8c643b: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 8c643e: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8c6441: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
L_8c6444: /* 8c6444: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 8c6447: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8c6448: call 0x99c958 */
  esp -= 4; W32(esp, 0x8c644du); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8c644d: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c644f: jg 0x8c6594 */
  if ((!zf && sf == of)) goto L_8c6594;
L_8c6455: /* 8c6455: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 8c6458: call 0x99c958 */
  esp -= 4; W32(esp, 0x8c645du); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8c645d: imul eax, dword ptr [edi + 0x128c] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi + 0x128cu)));
  eax = (uint32_t)r;
  }
/* 8c6464: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c6466: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8c6469: mov eax, dword ptr [edi + 0x1280] */
  eax = R32((uint32_t)(edi + 0x1280u));
/* 8c646f: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 8c6472: mov ecx, eax */
  ecx = eax;
/* 8c6474: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8c6476: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 8c6479: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8c647c: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8c647f: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 8c6482: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 8c6485: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c6486: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8c6488: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 8c648b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c648e: mov ecx, esp */
  ecx = esp;
/* 8c6490: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8c6492: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8c6495: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8c6498: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8c649b: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8c649e: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8c64a1: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8c64a4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c64a7: mov ecx, esp */
  ecx = esp;
/* 8c64a9: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8c64ab: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8c64ae: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8c64b1: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 8c64b7: call 0x6cc74d */
  esp -= 4; W32(esp, 0x8c64bcu); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 8c64bc: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8c64bf: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8c64c2: mov ebx, dword ptr [ebp - 0x30] */
  ebx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8c64c5: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8c64c8: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8c64cb: jmp 0x8c6444 */
  goto L_8c6444;
L_8c64d0: /* 8c64d0: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 8c64d3: call 0x99c958 */
  esp -= 4; W32(esp, 0x8c64d8u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8c64d8: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 8c64db: mov esi, dword ptr [edi + 0x128c] */
  esi = R32((uint32_t)(edi + 0x128cu));
/* 8c64e1: mov ebx, eax */
  ebx = eax;
/* 8c64e3: imul esi, ebx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(ebx);
  esi = (uint32_t)r;
  }
/* 8c64e6: call 0x99c958 */
  esp -= 4; W32(esp, 0x8c64ebu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8c64eb: mov ecx, dword ptr [edi + 0x1280] */
  ecx = R32((uint32_t)(edi + 0x1280u));
/* 8c64f1: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8c64f3: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 8c64f6: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 8c64f9: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8c64fb: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8c64fe: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8c6501: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8c6504: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8c6507: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
L_8c650a: /* 8c650a: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 8c650d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8c650e: call 0x99c958 */
  esp -= 4; W32(esp, 0x8c6513u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8c6513: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c6515: jg 0x8c6594 */
  if ((!zf && sf == of)) goto L_8c6594;
L_8c6517: /* 8c6517: mov esi, dword ptr [edi + 0x128c] */
  esi = R32((uint32_t)(edi + 0x128cu));
/* 8c651d: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 8c6520: imul esi, ebx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(ebx);
  esi = (uint32_t)r;
  }
/* 8c6523: call 0x99c958 */
  esp -= 4; W32(esp, 0x8c6528u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8c6528: mov ecx, dword ptr [edi + 0x1280] */
  ecx = R32((uint32_t)(edi + 0x1280u));
/* 8c652e: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8c6530: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 8c6533: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8c6536: mov edx, eax */
  edx = eax;
/* 8c6538: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 8c653a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8c653d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8c6540: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 8c6543: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 8c6546: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c6547: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8c6549: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 8c654c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c654f: mov edx, esp */
  edx = esp;
/* 8c6551: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8c6553: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8c6556: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8c6559: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8c655c: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8c655f: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8c6562: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8c6565: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c6568: mov ecx, esp */
  ecx = esp;
/* 8c656a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8c656c: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8c656f: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8c6572: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8c6575: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 8c657b: call 0x6cc74d */
  esp -= 4; W32(esp, 0x8c6580u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 8c6580: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8c6583: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8c6586: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 8c6589: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8c658c: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8c658f: jmp 0x8c650a */
  goto L_8c650a;
L_8c6594: /* 8c6594: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c6596: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 8c659c: call 0x6c6f6e */
  esp -= 4; W32(esp, 0x8c65a1u); SPILL(); f_6c6f6e(); if (g_unwind) return; RELOAD();
/* 8c65a1: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 8c65a7: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8c65ab: call 0x6cadcb */
  esp -= 4; W32(esp, 0x8c65b0u); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
/* 8c65b0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8c65b3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c65b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c65b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8c65bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c65bd: mov esp, ebp */
  esp = ebp;
/* 8c65bf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c65c0: ret  */
  esp += 4; SPILL(); return;
}

void f_8c65c1(void) {
  LOAD_REGS();
L_8c65c1: /* 8c65c1: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8c65c4: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8c65c9: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8c65cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c65cd: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8c65d0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8c65d5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8c65d5(); return;
}

void f_8c65d5(void) {
  LOAD_REGS();
L_8c65d5: /* 8c65d5: push 0xa1bfc0 */
  { uint32_t v = 0xa1bfc0u; esp -= 4; W32(esp, v); }
/* 8c65da: push 0xaecc1c */
  { uint32_t v = 0xaecc1cu; esp -= 4; W32(esp, v); }
/* 8c65df: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8c65e5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8c65e5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c65e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c65ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c65ec: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8c65f1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8c65f1: guest_badaddr(0x8c65f1); return;
}

void f_8c66b0(void) {
  LOAD_REGS();
L_8c66b0: /* 8c66b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8c66b1: mov ebp, esp */
  ebp = esp;
/* 8c66b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8c66b5: push 0x9d7bc0 */
  { uint32_t v = 0x9d7bc0u; esp -= 4; W32(esp, v); }
/* 8c66ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8c66c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c66c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8c66c8: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c66cb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8c66ce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c66cf: mov ebx, dword ptr [ebp + 0x24] */
  ebx = R32((uint32_t)(ebp + 0x24u));
/* 8c66d2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c66d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c66d4: mov esi, ecx */
  esi = ecx;
/* 8c66d6: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8c66d9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8c66dc: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8c66df: mov edi, edx */
  edi = edx;
/* 8c66e1: mov edx, eax */
  edx = eax;
/* 8c66e3: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8c66e6: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8c66e9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c66ea: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8c66ed: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8c66f0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c66f3: mov ecx, esp */
  ecx = esp;
/* 8c66f5: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8c66f7: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8c66fa: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 8c66fd: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 8c6704: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8c6707: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8c670a: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8c670d: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8c6710: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c6713: mov eax, esp */
  eax = esp;
/* 8c6715: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8c6717: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 8c671e: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8c6721: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8c6724: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8c6727: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c6728: mov ecx, esi */
  ecx = esi;
/* 8c672a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8c6731: call 0x8c6350 */
  esp -= 4; W32(esp, 0x8c6736u); SPILL(); f_8c6350(); if (g_unwind) return; RELOAD();
/* 8c6736: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 8c6739: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 8c673c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8c673f: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c6742: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 8c6745: mov edx, eax */
  edx = eax;
/* 8c6747: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8c674a: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 8c674d: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8c6750: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c6751: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c6754: mov eax, esp */
  eax = esp;
/* 8c6756: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8c6758: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8c675b: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8c675e: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 8c6765: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8c6768: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8c676b: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8c676e: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8c6771: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c6774: mov edx, esp */
  edx = esp;
/* 8c6776: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8c6778: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8c677b: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 8c6782: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8c6785: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c6786: mov ecx, esi */
  ecx = esi;
/* 8c6788: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8c678b: call 0x8c6350 */
  esp -= 4; W32(esp, 0x8c6790u); SPILL(); f_8c6350(); if (g_unwind) return; RELOAD();
/* 8c6790: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 8c6793: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8c6796: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c6799: mov eax, ecx */
  eax = ecx;
/* 8c679b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c679c: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 8c679f: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8c67a2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c67a5: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 8c67a8: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 8c67af: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8c67b2: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8c67b5: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 8c67bc: mov edx, esp */
  edx = esp;
/* 8c67be: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8c67c1: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8c67c3: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8c67c6: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8c67c9: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8c67cc: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8c67cf: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8c67d2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c67d5: mov ecx, esp */
  ecx = esp;
/* 8c67d7: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8c67d9: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8c67dc: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8c67df: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8c67e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c67e3: mov ecx, esi */
  ecx = esi;
/* 8c67e5: call 0x8c6350 */
  esp -= 4; W32(esp, 0x8c67eau); SPILL(); f_8c6350(); if (g_unwind) return; RELOAD();
/* 8c67ea: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8c67ed: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8c67f0: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 8c67f3: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c67f6: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8c67f9: mov eax, ecx */
  eax = ecx;
/* 8c67fb: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 8c67fe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c67ff: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8c6802: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8c6805: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c6808: mov ecx, esp */
  ecx = esp;
/* 8c680a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8c680c: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8c680f: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8c6812: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 8c6819: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8c681c: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8c681f: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8c6822: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8c6825: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c6828: mov eax, esp */
  eax = esp;
/* 8c682a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8c682c: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 8c6833: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8c6836: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8c6839: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8c683c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c683d: mov ecx, esi */
  ecx = esi;
/* 8c683f: call 0x8c6350 */
  esp -= 4; W32(esp, 0x8c6844u); SPILL(); f_8c6350(); if (g_unwind) return; RELOAD();
/* 8c6844: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8c6847: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c684a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c684b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c684c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8c6853: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c6854: mov esp, ebp */
  esp = ebp;
/* 8c6856: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c6857: ret  */
  esp += 4; SPILL(); return;
}

void f_8c6858(void) {
  LOAD_REGS();
L_8c6858: /* 8c6858: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8c685b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8c6860: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8c6863: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c6864: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8c6867: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8c686cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8c686c(); return;
}

void f_8c686c(void) {
  LOAD_REGS();
L_8c686c: /* 8c686c: push 0xa1bfec */
  { uint32_t v = 0xa1bfecu; esp -= 4; W32(esp, v); }
/* 8c6871: push 0xaecc24 */
  { uint32_t v = 0xaecc24u; esp -= 4; W32(esp, v); }
/* 8c6876: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8c687cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8c687c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c687f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c6881: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c6883: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8c6888u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8c6888: guest_badaddr(0x8c6888); return;
}

void f_8c6910(void) {
  LOAD_REGS();
L_8c6910: /* 8c6910: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8c6913: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8c6917: mov edx, dword ptr [ecx + 0x1340] */
  edx = R32((uint32_t)(ecx + 0x1340u));
/* 8c691d: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8c6920: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 8c6923: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8c6940(void) {
  LOAD_REGS();
L_8c6940: /* 8c6940: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8c6944: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c6945: mov esi, ecx */
  esi = ecx;
/* 8c6947: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* 8c694e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8c6950: mov dword ptr [esi], 0xa1c018 */
  W32((uint32_t)(esi), 0xa1c018u);
/* 8c6956: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c6957: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 8c695d: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8c6963u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8c6963: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 8c6966: mov eax, esi */
  eax = esi;
/* 8c6968: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c6969: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8c6980(void) {
  LOAD_REGS();
L_8c6980: /* 8c6980: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 8c6983: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 8c6986: ret  */
  esp += 4; SPILL(); return;
}

void f_8c69a0(void) {
  LOAD_REGS();
L_8c69a0: /* 8c69a0: mov eax, 1 */
  eax = 0x1u;
/* 8c69a5: ret  */
  esp += 4; SPILL(); return;
}

void f_8c69c0(void) {
  LOAD_REGS();
L_8c69c0: /* 8c69c0: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 8c69c3: xor eax, eax */
  eax = 0;
/* 8c69c5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c69c7: jle 0x8c69df */
  if ((zf || sf != of)) goto L_8c69df;
L_8c69c9: /* 8c69c9: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 8c69cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c69cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8c69d0: /* 8c69d0: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 8c69d2: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 8c69d5: add eax, dword ptr [esi + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c69d8: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8c69db: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 8c69dc: jne 0x8c69d0 */
  if (!zf) goto L_8c69d0;
L_8c69de: /* 8c69de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_8c69df: /* 8c69df: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c69e1: ret  */
  esp += 4; SPILL(); return;
}

void f_8c6a00(void) {
  LOAD_REGS();
L_8c6a00: /* 8c6a00: mov eax, 2 */
  eax = 0x2u;
/* 8c6a05: ret  */
  esp += 4; SPILL(); return;
}

void f_8c6a20(void) {
  LOAD_REGS();
L_8c6a20: /* 8c6a20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c6a21: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8c6a22: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 8c6a26: mov ebx, ecx */
  ebx = ecx;
/* 8c6a28: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 8c6a2b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c6a2c: xor esi, esi */
  esi = 0;
/* 8c6a2e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c6a30: jle 0x8c6a63 */
  if ((zf || sf != of)) goto L_8c6a63;
L_8c6a32: /* 8c6a32: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_8c6a33: /* 8c6a33: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 8c6a36: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 8c6a39: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 8c6a3c: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8c6a3f: lea edi, [ecx + ecx] */
  edi = (uint32_t)(ecx + ecx);
/* 8c6a42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c6a43: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c6a45: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 8c6a48: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8c6a4eu); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8c6a4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c6a4f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8c6a50: call 0x6ca83f */
  esp -= 4; W32(esp, 0x8c6a55u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 8c6a55: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 8c6a58: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c6a5b: add ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8c6a5d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8c6a5e: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c6a60: jl 0x8c6a33 */
  if ((sf != of)) goto L_8c6a33;
L_8c6a62: /* 8c6a62: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_8c6a63: /* 8c6a63: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c6a64: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c6a65: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c6a66: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8c6a90(void) {
  LOAD_REGS();
L_8c6a90: /* 8c6a90: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 8c6a93: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8c6a96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c6a97: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 8c6a9b: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
/* 8c6a9e: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 8c6aa1: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 8c6aa4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8c6aa5: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8c6aa8: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 8c6aab: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 8c6aae: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c6ab0: jg 0x8c6ab4 */
  if ((!zf && sf == of)) goto L_8c6ab4;
L_8c6ab2: /* 8c6ab2: mov eax, edx */
  eax = edx;
L_8c6ab4: /* 8c6ab4: mov dword ptr [ecx + 0x14], eax */
  W32((uint32_t)(ecx + 0x14u), eax);
/* 8c6ab7: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 8c6aba: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* 8c6abd: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 8c6ac0: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c6ac2: jl 0x8c6ac6 */
  if ((sf != of)) goto L_8c6ac6;
L_8c6ac4: /* 8c6ac4: mov eax, edx */
  eax = edx;
L_8c6ac6: /* 8c6ac6: mov dword ptr [ecx + 0x18], eax */
  W32((uint32_t)(ecx + 0x18u), eax);
/* 8c6ac9: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 8c6acc: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 8c6acf: add dword ptr [ecx + 0x1c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x1cu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx + 0x1cu), r);
  }
/* 8c6ad2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c6ad3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8c6b00(void) {
  LOAD_REGS();
L_8c6b00: /* 8c6b00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8c6b04: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c6b05: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8c6b06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c6b07: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c6b08: mov esi, ecx */
  esi = ecx;
/* 8c6b0a: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 8c6b0d: mov dword ptr [esi], 0xa1c030 */
  W32((uint32_t)(esi), 0xa1c030u);
/* 8c6b13: mov ebp, dword ptr [0xcfa1b0] */
  ebp = R32((uint32_t)(0xcfa1b0u));
/* 8c6b19: mov ebx, dword ptr [ebp + 4] */
  ebx = R32((uint32_t)(ebp + 0x4u));
/* 8c6b1c: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 8c6b1f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c6b21: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 8c6b26: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c6b27: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c6b28: call 0x99c910 */
  esp -= 4; W32(esp, 0x8c6b2du); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 8c6b2d: add eax, 0xe2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe2u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 8c6b32: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 8c6b35: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 8c6b38: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 8c6b3b: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 8c6b41: adc ebx, 0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 8c6b44: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8c6b47: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c6b48: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 8c6b4b: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 8c6b4e: mov eax, esi */
  eax = esi;
/* 8c6b50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c6b51: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c6b52: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c6b53: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8c6b80(void) {
  LOAD_REGS();
L_8c6b80: /* 8c6b80: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 8c6b83: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 8c6b86: ret  */
  esp += 4; SPILL(); return;
}

void f_8c6ba0(void) {
  LOAD_REGS();
L_8c6ba0: /* 8c6ba0: mov eax, 1 */
  eax = 0x1u;
/* 8c6ba5: ret  */
  esp += 4; SPILL(); return;
}

void f_8c6bc0(void) {
  LOAD_REGS();
L_8c6bc0: /* 8c6bc0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8c6bc3: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 8c6bc6: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8c6bc8: ret  */
  esp += 4; SPILL(); return;
}

void f_8c6be0(void) {
  LOAD_REGS();
L_8c6be0: /* 8c6be0: mov eax, 2 */
  eax = 0x2u;
/* 8c6be5: ret  */
  esp += 4; SPILL(); return;
}

void f_8c6c00(void) {
  LOAD_REGS();
L_8c6c00: /* 8c6c00: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8c6c03: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* 8c6c06: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8c6c08: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c6c09: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c6c0b: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 8c6c0e: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8c6c14u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8c6c14: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8c6c18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c6c19: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c6c1a: call 0x6ca83f */
  esp -= 4; W32(esp, 0x8c6c1fu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 8c6c1f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c6c22: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8c6c40(void) {
  LOAD_REGS();
L_8c6c40: /* 8c6c40: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8c6c44: mov eax, ecx */
  eax = ecx;
/* 8c6c46: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8c6c4a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8c6c4d: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 8c6c51: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 8c6c54: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 8c6c58: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8c6c5b: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8c6c5f: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 8c6c62: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 8c6c66: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 8c6c69: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 8c6c6d: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 8c6c70: xor ecx, ecx */
  ecx = 0;
/* 8c6c72: mov dword ptr [eax], 0xa1c048 */
  W32((uint32_t)(eax), 0xa1c048u);
/* 8c6c78: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 8c6c7b: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 8c6c7e: mov dword ptr [eax + 0x24], 0xffff */
  W32((uint32_t)(eax + 0x24u), 0xffffu);
/* 8c6c85: mov dword ptr [eax + 0x28], ecx */
  W32((uint32_t)(eax + 0x28u), ecx);
/* 8c6c88: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_8c6cb0(void) {
  LOAD_REGS();
L_8c6cb0: /* 8c6cb0: xor eax, eax */
  eax = 0;
/* 8c6cb2: xor edx, edx */
  edx = 0;
/* 8c6cb4: ret  */
  esp += 4; SPILL(); return;
}

void f_8c6cd0(void) {
  LOAD_REGS();
L_8c6cd0: /* 8c6cd0: mov eax, 1 */
  eax = 0x1u;
/* 8c6cd5: ret  */
  esp += 4; SPILL(); return;
}

void f_8c6cf0(void) {
  LOAD_REGS();
L_8c6cf0: /* 8c6cf0: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 8c6cf3: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 8c6cf6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c6cf7: sub eax, dword ptr [ecx + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c6cfa: mov esi, dword ptr [ecx + 0x10] */
  esi = R32((uint32_t)(ecx + 0x10u));
/* 8c6cfd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8c6cfe: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 8c6d00: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8c6d01: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 8c6d04: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8c6d07: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8c6d0a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c6d0b: ret  */
  esp += 4; SPILL(); return;
}

void f_8c6d20(void) {
  LOAD_REGS();
L_8c6d20: /* 8c6d20: mov eax, 2 */
  eax = 0x2u;
/* 8c6d25: ret  */
  esp += 4; SPILL(); return;
}

void f_8c6d40(void) {
  LOAD_REGS();
L_8c6d40: /* 8c6d40: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8c6d44: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 8c6d4a: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8c6d4d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c6d4f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c6d50: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c6d51: jle 0x8c6d6a */
  if ((zf || sf != of)) goto L_8c6d6a;
L_8c6d53: /* 8c6d53: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
L_8c6d57: /* 8c6d57: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8c6d59: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 8c6d5b: mov edi, dword ptr [edi + edx*4] */
  edi = R32((uint32_t)(edi + edx*4));
/* 8c6d5e: cmp edi, dword ptr [esi] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8c6d60: je 0x8c6d71 */
  if (zf) goto L_8c6d71;
L_8c6d62: /* 8c6d62: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8c6d63: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8c6d65: cmp edx, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c6d68: jl 0x8c6d57 */
  if ((sf != of)) goto L_8c6d57;
L_8c6d6a: /* 8c6d6a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c6d6b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c6d6c: xor eax, eax */
  eax = 0;
/* 8c6d6e: ret 8 */
  esp += 12; SPILL(); return;
L_8c6d71: /* 8c6d71: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c6d72: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c6d73: mov eax, 1 */
  eax = 0x1u;
/* 8c6d78: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8c6d90(void) {
  LOAD_REGS();
L_8c6d90: /* 8c6d90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c6d91: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8c6d93: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8c6d95: mov esi, ecx */
  esi = ecx;
/* 8c6d97: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8c6d9du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8c6d9d: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8c6da1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8c6da3: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 8c6da5: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 8c6da8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c6da9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8c6dc0(void) {
  LOAD_REGS();
L_8c6dc0: /* 8c6dc0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8c6dc4: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8c6dc6: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 8c6dca: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* 8c6dcc: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c6dcf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c6dd0: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 8c6dd4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c6dd5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c6dd7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c6dd8: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 8c6ddc: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8c6ddf: mov esi, 1 */
  esi = 0x1u;
/* 8c6de4: jp 0x8c6e07 */
  if (pf) goto L_8c6e07;
L_8c6de6: /* 8c6de6: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 8c6de8: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8c6dee: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c6df0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8c6df3: jnp 0x8c701b */
  if (!pf) goto L_8c701b;
L_8c6df9: /* 8c6df9: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 8c6dfb: xor esi, esi */
  esi = 0;
/* 8c6dfd: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 8c6dff: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 8c6e01: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 8c6e05: jmp 0x8c6e3d */
  goto L_8c6e3d;
L_8c6e07: /* 8c6e07: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8c6e09: fcomp dword ptr [edx + 0xc] */
  fpu_com(ST0, F32((uint32_t)(edx + 0xcu)));
  FPOP();
/* 8c6e0c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c6e0e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c6e11: jne 0x8c6e35 */
  if (!zf) goto L_8c6e35;
L_8c6e13: /* 8c6e13: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 8c6e15: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8c6e1b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c6e1d: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c6e20: je 0x8c701b */
  if (zf) goto L_8c701b;
L_8c6e26: /* 8c6e26: fld dword ptr [edx + 0xc] */
  { double v = F32((uint32_t)(edx + 0xcu)); FPUSH(v); }
/* 8c6e29: xor esi, esi */
  esi = 0;
/* 8c6e2b: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 8c6e2d: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 8c6e2f: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 8c6e33: jmp 0x8c6e3d */
  goto L_8c6e3d;
L_8c6e35: /* 8c6e35: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
L_8c6e3d: /* 8c6e3d: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 8c6e40: fcomp dword ptr [edx + 4] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x4u)));
  FPOP();
/* 8c6e43: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c6e45: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8c6e48: jp 0x8c6e6f */
  if (pf) goto L_8c6e6f;
L_8c6e4a: /* 8c6e4a: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 8c6e4d: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8c6e53: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c6e55: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8c6e58: jnp 0x8c701b */
  if (!pf) goto L_8c701b;
L_8c6e5e: /* 8c6e5e: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 8c6e61: xor esi, esi */
  esi = 0;
/* 8c6e63: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 8c6e66: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 8c6e69: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 8c6e6d: jmp 0x8c6ea9 */
  goto L_8c6ea9;
L_8c6e6f: /* 8c6e6f: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 8c6e72: fcomp dword ptr [edx + 0x10] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x10u)));
  FPOP();
/* 8c6e75: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c6e77: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c6e7a: jne 0x8c6ea1 */
  if (!zf) goto L_8c6ea1;
L_8c6e7c: /* 8c6e7c: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 8c6e7f: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8c6e85: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c6e87: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c6e8a: je 0x8c701b */
  if (zf) goto L_8c701b;
L_8c6e90: /* 8c6e90: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 8c6e93: xor esi, esi */
  esi = 0;
/* 8c6e95: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 8c6e98: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 8c6e9b: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 8c6e9f: jmp 0x8c6ea9 */
  goto L_8c6ea9;
L_8c6ea1: /* 8c6ea1: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
L_8c6ea9: /* 8c6ea9: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 8c6eac: fcomp dword ptr [edx + 8] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x8u)));
  FPOP();
/* 8c6eaf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c6eb1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8c6eb4: jp 0x8c6fd8 */
  if (pf) goto L_8c6fd8;
L_8c6eba: /* 8c6eba: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 8c6ebd: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8c6ec3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c6ec5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8c6ec8: jnp 0x8c701b */
  if (!pf) goto L_8c701b;
L_8c6ece: /* 8c6ece: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
L_8c6ed1: /* 8c6ed1: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 8c6ed4: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
L_8c6ed7: /* 8c6ed7: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8c6edb: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8c6edd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c6edf: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c6ee2: jne 0x8c6eea */
  if (!zf) goto L_8c6eea;
L_8c6ee4: /* 8c6ee4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8c6ee6: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
L_8c6eea: /* 8c6eea: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 8c6eee: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8c6ef0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c6ef2: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c6ef5: jne 0x8c6efd */
  if (!zf) goto L_8c6efd;
L_8c6ef7: /* 8c6ef7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8c6ef9: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
L_8c6efd: /* 8c6efd: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8c6f03: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c6f05: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c6f08: jne 0x8c7019 */
  if (!zf) goto L_8c7019;
L_8c6f0e: /* 8c6f0e: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 8c6f14: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c6f16: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8c6f19: jp 0x8c7019 */
  if (pf) goto L_8c7019;
L_8c6f1f: /* 8c6f1f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8c6f21: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 8c6f23: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8c6f25: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 8c6f28: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8c6f2a: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 8c6f2d: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 8c6f31: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 8c6f33: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 8c6f37: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 8c6f3a: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 8c6f3e: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8c6f42: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 8c6f45: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 8c6f49: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 8c6f4b: fsub dword ptr [0xa0973c] */
  ST0 = ST0 - (F32((uint32_t)(0xa0973cu)));
/* 8c6f51: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 8c6f55: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c6f57: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8c6f5a: jp 0x8c701b */
  if (pf) goto L_8c701b;
L_8c6f60: /* 8c6f60: fld dword ptr [edx + 0xc] */
  { double v = F32((uint32_t)(edx + 0xcu)); FPUSH(v); }
/* 8c6f63: fadd dword ptr [0xa0973c] */
  ST0 = ST0 + (F32((uint32_t)(0xa0973cu)));
/* 8c6f69: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 8c6f6d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c6f6f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c6f72: jne 0x8c701b */
  if (!zf) goto L_8c701b;
L_8c6f78: /* 8c6f78: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 8c6f7b: fsub dword ptr [0xa0973c] */
  ST0 = ST0 - (F32((uint32_t)(0xa0973cu)));
/* 8c6f81: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 8c6f85: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c6f87: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8c6f8a: jp 0x8c701b */
  if (pf) goto L_8c701b;
L_8c6f90: /* 8c6f90: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 8c6f93: fadd dword ptr [0xa0973c] */
  ST0 = ST0 + (F32((uint32_t)(0xa0973cu)));
/* 8c6f99: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* 8c6f9d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c6f9f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c6fa2: jne 0x8c701b */
  if (!zf) goto L_8c701b;
L_8c6fa4: /* 8c6fa4: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 8c6fa7: fsub dword ptr [0xa0973c] */
  ST0 = ST0 - (F32((uint32_t)(0xa0973cu)));
/* 8c6fad: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 8c6fb1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c6fb3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8c6fb6: jp 0x8c701b */
  if (pf) goto L_8c701b;
L_8c6fb8: /* 8c6fb8: fld dword ptr [edx + 0x14] */
  { double v = F32((uint32_t)(edx + 0x14u)); FPUSH(v); }
/* 8c6fbb: fadd dword ptr [0xa0973c] */
  ST0 = ST0 + (F32((uint32_t)(0xa0973cu)));
/* 8c6fc1: fcomp dword ptr [esp + 0x14] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x14u)));
  FPOP();
/* 8c6fc5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c6fc7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c6fca: jne 0x8c701b */
  if (!zf) goto L_8c701b;
L_8c6fcc: /* 8c6fcc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c6fcd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c6fce: mov eax, 1 */
  eax = 0x1u;
/* 8c6fd3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c6fd4: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c6fd7: ret  */
  esp += 4; SPILL(); return;
L_8c6fd8: /* 8c6fd8: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 8c6fdb: fcomp dword ptr [edx + 0x14] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x14u)));
  FPOP();
/* 8c6fde: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c6fe0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c6fe3: jne 0x8c6ffd */
  if (!zf) goto L_8c6ffd;
L_8c6fe5: /* 8c6fe5: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 8c6fe8: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8c6fee: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c6ff0: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c6ff3: je 0x8c701b */
  if (zf) goto L_8c701b;
L_8c6ff5: /* 8c6ff5: fld dword ptr [edx + 0x14] */
  { double v = F32((uint32_t)(edx + 0x14u)); FPUSH(v); }
/* 8c6ff8: jmp 0x8c6ed1 */
  goto L_8c6ed1;
L_8c6ffd: /* 8c6ffd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c6fff: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 8c7005: je 0x8c6ed7 */
  if (zf) goto L_8c6ed7;
L_8c700b: /* 8c700b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c700c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8c700e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c700f: mov eax, 1 */
  eax = 0x1u;
/* 8c7014: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c7015: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c7018: ret  */
  esp += 4; SPILL(); return;
L_8c7019: /* 8c7019: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8c701b: /* 8c701b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c701c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c701d: xor eax, eax */
  eax = 0;
/* 8c701f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c7020: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c7023: ret  */
  esp += 4; SPILL(); return;
}

void f_8c70d0(void) {
  LOAD_REGS();
L_8c70d0: /* 8c70d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c70d1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 8c70d5: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 8c70da: mov ecx, esi */
  ecx = esi;
/* 8c70dc: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x8c70e2u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 8c70e2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c70e4: jne 0x8c70fe */
  if (!zf) goto L_8c70fe;
L_8c70e6: /* 8c70e6: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 8c70eb: push 0xaeccc0 */
  { uint32_t v = 0xaeccc0u; esp -= 4; W32(esp, v); }
/* 8c70f0: push 0xaecd04 */
  { uint32_t v = 0xaecd04u; esp -= 4; W32(esp, v); }
/* 8c70f5: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8c70fbu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8c70fb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8c70fe: /* 8c70fe: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 8c7102: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8c7105: jne 0x8c710d */
  if (!zf) goto L_8c710d;
L_8c7107: /* 8c7107: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x8c710du); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
L_8c710d: /* 8c710d: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 8c7113: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8c7115: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 8c7119: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c711b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c711c: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 8c7120: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c7122: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c7123: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c7124: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c7125: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c7126: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x8c712cu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 8c712c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c712f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c7130: ret  */
  esp += 4; SPILL(); return;
}

void f_8c7160(void) {
  LOAD_REGS();
L_8c7160: /* 8c7160: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c7161: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 8c7165: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c7167: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c7168: je 0x8c7188 */
  if (zf) goto L_8c7188;
L_8c716a: /* 8c716a: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 8c716f: mov ecx, esi */
  ecx = esi;
/* 8c7171: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8c7177u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8c7177: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c7179: jne 0x8c71b0 */
  if (!zf) goto L_8c71b0;
L_8c717b: /* 8c717b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c717c: mov ecx, esi */
  ecx = esi;
/* 8c717e: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8c7184u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8c7184: mov edi, eax */
  edi = eax;
/* 8c7186: jmp 0x8c718d */
  goto L_8c718d;
L_8c7188: /* 8c7188: mov edi, 0xaecd28 */
  edi = 0xaecd28u;
L_8c718d: /* 8c718d: mov ecx, 0xce9ec8 */
  ecx = 0xce9ec8u;
/* 8c7192: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8c7198u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8c7198: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c7199: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 8c719e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8c71a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c71a1: push 0xaecd34 */
  { uint32_t v = 0xaecd34u; esp -= 4; W32(esp, v); }
/* 8c71a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c71a7: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8c71adu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8c71ad: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8c71b0: /* 8c71b0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c71b1: mov eax, esi */
  eax = esi;
/* 8c71b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c71b4: ret  */
  esp += 4; SPILL(); return;
}

void f_8c71e0(void) {
  LOAD_REGS();
L_8c71e0: /* 8c71e0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8c71e4: sub esp, 0x1e4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1e4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c71ea: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c71ed: jl 0x8c74ff */
  if ((sf != of)) goto L_8c74ff;
L_8c71f3: /* 8c71f3: mov ecx, dword ptr [esp + 0x1e8] */
  ecx = R32((uint32_t)(esp + 0x1e8u));
/* 8c71fa: imul eax, eax, 0x34 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x34u);
  eax = (uint32_t)r;
  }
/* 8c71fd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c71fe: lea eax, [eax + ecx - 0x34] */
  eax = (uint32_t)(eax + ecx + 0xffffffccu);
/* 8c7202: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8c7203: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c7204: mov dword ptr [esp + 0xf4], eax */
  W32((uint32_t)(esp + 0xf4u), eax);
/* 8c720b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c720c: mov dword ptr [esp + 0xf4], ecx */
  W32((uint32_t)(esp + 0xf4u), ecx);
/* 8c7213: xor eax, eax */
  eax = 0;
/* 8c7215: mov ecx, 0x3e */
  ecx = 0x3eu;
/* 8c721a: lea edi, [esp + 0xfc] */
  edi = (uint32_t)(esp + 0xfcu);
/* 8c7221: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 8c7223: lea eax, [esp + 0xf4] */
  eax = (uint32_t)(esp + 0xf4u);
/* 8c722a: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8c722e: mov edi, edi */
  edi = edi;
L_8c7230: /* 8c7230: mov ebp, dword ptr [eax + 4] */
  ebp = R32((uint32_t)(eax + 0x4u));
/* 8c7233: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8c7235: mov ecx, ebp */
  ecx = ebp;
/* 8c7237: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8c7239: mov eax, 0x4ec4ec4f */
  eax = 0x4ec4ec4fu;
/* 8c723e: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 8c7240: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8c7243: mov ecx, edx */
  ecx = edx;
/* 8c7245: shr ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8c7248: lea eax, [edx + ecx + 1] */
  eax = (uint32_t)(edx + ecx + 0x1u);
/* 8c724c: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c724f: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 8c7253: jle 0x8c743d */
  if ((zf || sf != of)) goto L_8c743d;
L_8c7259: /* 8c7259: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8c7260: /* 8c7260: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8c7261: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c7263: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8c7265: imul eax, eax, 0x34 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x34u);
  eax = (uint32_t)r;
  }
/* 8c7268: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c726a: mov ecx, 0xd */
  ecx = 0xdu;
/* 8c726f: mov esi, eax */
  esi = eax;
/* 8c7271: lea edi, [esp + 0x24] */
  edi = (uint32_t)(esp + 0x24u);
/* 8c7275: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c7277: mov ecx, 0xd */
  ecx = 0xdu;
/* 8c727c: mov esi, ebx */
  esi = ebx;
/* 8c727e: mov edi, eax */
  edi = eax;
/* 8c7280: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c7282: lea esi, [esp + 0x24] */
  esi = (uint32_t)(esp + 0x24u);
/* 8c7286: mov edi, ebx */
  edi = ebx;
/* 8c7288: mov edx, ebx */
  edx = ebx;
/* 8c728a: add ebp, 0x34 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
L_8c728d: /* 8c728d: mov ecx, 0xd */
  ecx = 0xdu;
/* 8c7292: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_8c7294: /* 8c7294: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 8c7298: add edx, 0x34 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8c729b: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c729d: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 8c72a1: ja 0x8c72f0 */
  if ((!cf && !zf)) goto L_8c72f0;
L_8c72a3: /* 8c72a3: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 8c72a6: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 8c72a9: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c72ab: ja 0x8c72f0 */
  if ((!cf && !zf)) goto L_8c72f0;
L_8c72ad: /* 8c72ad: jb 0x8c7294 */
  if (cf) goto L_8c7294;
L_8c72af: /* 8c72af: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8c72b1: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8c72b3: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8c72b5: je 0x8c72bb */
  if (zf) goto L_8c72bb;
L_8c72b7: /* 8c72b7: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c72b9: jmp 0x8c72ea */
  goto L_8c72ea;
L_8c72bb: /* 8c72bb: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8c72be: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 8c72c1: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8c72c3: je 0x8c72c9 */
  if (zf) goto L_8c72c9;
L_8c72c5: /* 8c72c5: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c72c7: jmp 0x8c72ea */
  goto L_8c72ea;
L_8c72c9: /* 8c72c9: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 8c72cc: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 8c72cf: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 8c72d2: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 8c72d5: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c72d7: jg 0x8c72f0 */
  if ((!zf && sf == of)) goto L_8c72f0;
L_8c72d9: /* 8c72d9: jl 0x8c7294 */
  if ((sf != of)) goto L_8c7294;
L_8c72db: /* 8c72db: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 8c72de: fsub dword ptr [ebx + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x10u)));
/* 8c72e1: call 0x99c958 */
  esp -= 4; W32(esp, 0x8c72e6u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8c72e6: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
L_8c72ea: /* 8c72ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c72ec: jle 0x8c7294 */
  if ((zf || sf != of)) goto L_8c7294;
L_8c72ee: /* 8c72ee: mov edi, edi */
  edi = edi;
L_8c72f0: /* 8c72f0: sub ebp, 0x34 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 8c72f3: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c72f5: jbe 0x8c7343 */
  if ((cf | zf)) goto L_8c7343;
L_8c72f7: /* 8c72f7: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8c72fa: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 8c72fd: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c72ff: ja 0x8c72f0 */
  if ((!cf && !zf)) goto L_8c72f0;
L_8c7301: /* 8c7301: jb 0x8c7343 */
  if (cf) goto L_8c7343;
L_8c7303: /* 8c7303: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 8c7306: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8c7308: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8c730a: je 0x8c7310 */
  if (zf) goto L_8c7310;
L_8c730c: /* 8c730c: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c730e: jmp 0x8c733f */
  goto L_8c733f;
L_8c7310: /* 8c7310: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 8c7313: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 8c7316: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8c7318: je 0x8c731e */
  if (zf) goto L_8c731e;
L_8c731a: /* 8c731a: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c731c: jmp 0x8c733f */
  goto L_8c733f;
L_8c731e: /* 8c731e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8c7321: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 8c7324: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 8c7327: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 8c732a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c732c: jg 0x8c72f0 */
  if ((!zf && sf == of)) goto L_8c72f0;
L_8c732e: /* 8c732e: jl 0x8c7343 */
  if ((sf != of)) goto L_8c7343;
L_8c7330: /* 8c7330: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8c7333: fsub dword ptr [ebx + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x10u)));
/* 8c7336: call 0x99c958 */
  esp -= 4; W32(esp, 0x8c733bu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8c733b: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
L_8c733f: /* 8c733f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c7341: jge 0x8c72f0 */
  if ((sf == of)) goto L_8c72f0;
L_8c7343: /* 8c7343: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c7345: mov ecx, 0xd */
  ecx = 0xdu;
/* 8c734a: ja 0x8c7370 */
  if ((!cf && !zf)) goto L_8c7370;
L_8c734c: /* 8c734c: mov esi, edx */
  esi = edx;
/* 8c734e: lea edi, [esp + 0xc0] */
  edi = (uint32_t)(esp + 0xc0u);
/* 8c7355: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c7357: mov ecx, 0xd */
  ecx = 0xdu;
/* 8c735c: mov esi, ebp */
  esi = ebp;
/* 8c735e: mov edi, edx */
  edi = edx;
/* 8c7360: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c7362: lea esi, [esp + 0xc0] */
  esi = (uint32_t)(esp + 0xc0u);
/* 8c7369: mov edi, ebp */
  edi = ebp;
/* 8c736b: jmp 0x8c728d */
  goto L_8c728d;
L_8c7370: /* 8c7370: mov esi, ebx */
  esi = ebx;
/* 8c7372: lea edi, [esp + 0x58] */
  edi = (uint32_t)(esp + 0x58u);
/* 8c7376: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c7378: mov ecx, 0xd */
  ecx = 0xdu;
/* 8c737d: mov esi, ebp */
  esi = ebp;
/* 8c737f: mov edi, ebx */
  edi = ebx;
/* 8c7381: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c7383: mov ecx, 0xd */
  ecx = 0xdu;
/* 8c7388: lea esi, [esp + 0x58] */
  esi = (uint32_t)(esp + 0x58u);
/* 8c738c: mov edi, ebp */
  edi = ebp;
/* 8c738e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c7390: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 8c7394: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 8c7398: mov ecx, ebp */
  ecx = ebp;
/* 8c739a: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8c739c: sub ecx, 0x34 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8c739f: mov eax, 0x4ec4ec4f */
  eax = 0x4ec4ec4fu;
/* 8c73a4: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 8c73a6: mov ecx, edx */
  ecx = edx;
/* 8c73a8: sar ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 8c73ab: mov edx, ecx */
  edx = ecx;
/* 8c73ad: shr edx, 0x1f */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8c73b0: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8c73b2: mov edx, esi */
  edx = esi;
/* 8c73b4: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 8c73b6: mov eax, 0x4ec4ec4f */
  eax = 0x4ec4ec4fu;
/* 8c73bb: imul edx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(edx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 8c73bd: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8c73c0: mov eax, edx */
  eax = edx;
/* 8c73c2: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8c73c5: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8c73c7: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c73c9: jl 0x8c73f1 */
  if ((sf != of)) goto L_8c73f1;
L_8c73cb: /* 8c73cb: lea ecx, [ebx + 0x34] */
  ecx = (uint32_t)(ebx + 0x34u);
/* 8c73ce: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8c73d0: jae 0x8c73e5 */
  if (!cf) goto L_8c73e5;
L_8c73d2: /* 8c73d2: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8c73d6: add ebp, -0x34 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffffffccu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8c73d9: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 8c73db: mov dword ptr [eax + 4], ebp */
  W32((uint32_t)(eax + 0x4u), ebp);
/* 8c73de: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c73e1: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_8c73e5: /* 8c73e5: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c73e7: jbe 0x8c74e1 */
  if ((cf | zf)) goto L_8c74e1;
L_8c73ed: /* 8c73ed: mov ebx, edi */
  ebx = edi;
/* 8c73ef: jmp 0x8c7419 */
  goto L_8c7419;
L_8c73f1: /* 8c73f1: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c73f3: jbe 0x8c7405 */
  if ((cf | zf)) goto L_8c7405;
L_8c73f5: /* 8c73f5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8c73f9: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 8c73fb: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 8c73fe: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c7401: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_8c7405: /* 8c7405: lea edx, [ebx + 0x34] */
  edx = (uint32_t)(ebx + 0x34u);
/* 8c7408: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8c740a: jae 0x8c74e1 */
  if (!cf) goto L_8c74e1;
L_8c7410: /* 8c7410: add ebp, -0x34 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffffffccu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8c7413: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 8c7417: mov esi, ebp */
  esi = ebp;
L_8c7419: /* 8c7419: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 8c741d: mov ecx, esi */
  ecx = esi;
/* 8c741f: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8c7421: mov eax, 0x4ec4ec4f */
  eax = 0x4ec4ec4fu;
/* 8c7426: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 8c7428: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8c742b: mov eax, edx */
  eax = edx;
/* 8c742d: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8c7430: lea eax, [edx + eax + 1] */
  eax = (uint32_t)(edx + eax + 0x1u);
/* 8c7434: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c7437: jg 0x8c7260 */
  if ((!zf && sf == of)) goto L_8c7260;
L_8c743d: /* 8c743d: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c743f: jbe 0x8c74e1 */
  if ((cf | zf)) goto L_8c74e1;
L_8c7445: /* 8c7445: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 8c7449: lea esi, [ebx + 0x34] */
  esi = (uint32_t)(ebx + 0x34u);
/* 8c744c: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c744e: mov ebp, ebx */
  ebp = ebx;
/* 8c7450: ja 0x8c74a7 */
  if ((!cf && !zf)) goto L_8c74a7;
L_8c7452: /* 8c7452: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 8c7455: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8c7458: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c745a: ja 0x8c749e */
  if ((!cf && !zf)) goto L_8c749e;
L_8c745c: /* 8c745c: jb 0x8c74a0 */
  if (cf) goto L_8c74a0;
L_8c745e: /* 8c745e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8c7460: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 8c7463: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8c7465: je 0x8c746b */
  if (zf) goto L_8c746b;
L_8c7467: /* 8c7467: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c7469: jmp 0x8c749a */
  goto L_8c749a;
L_8c746b: /* 8c746b: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8c746e: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 8c7471: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8c7473: je 0x8c7479 */
  if (zf) goto L_8c7479;
L_8c7475: /* 8c7475: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c7477: jmp 0x8c749a */
  goto L_8c749a;
L_8c7479: /* 8c7479: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8c747c: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8c747f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8c7482: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 8c7485: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c7487: jg 0x8c749e */
  if ((!zf && sf == of)) goto L_8c749e;
L_8c7489: /* 8c7489: jl 0x8c74a0 */
  if ((sf != of)) goto L_8c74a0;
L_8c748b: /* 8c748b: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 8c748e: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 8c7491: call 0x99c958 */
  esp -= 4; W32(esp, 0x8c7496u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8c7496: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
L_8c749a: /* 8c749a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c749c: jle 0x8c74a0 */
  if ((zf || sf != of)) goto L_8c74a0;
L_8c749e: /* 8c749e: mov ebp, esi */
  ebp = esi;
L_8c74a0: /* 8c74a0: add esi, 0x34 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8c74a3: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c74a5: jbe 0x8c7452 */
  if ((cf | zf)) goto L_8c7452;
L_8c74a7: /* 8c74a7: mov ecx, 0xd */
  ecx = 0xdu;
/* 8c74ac: mov esi, ebp */
  esi = ebp;
/* 8c74ae: lea edi, [esp + 0x8c] */
  edi = (uint32_t)(esp + 0x8cu);
/* 8c74b5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c74b7: mov esi, edx */
  esi = edx;
/* 8c74b9: mov ecx, 0xd */
  ecx = 0xdu;
/* 8c74be: mov edi, ebp */
  edi = ebp;
/* 8c74c0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c74c2: mov edi, edx */
  edi = edx;
/* 8c74c4: sub edx, 0x34 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 8c74c7: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c74c9: mov ecx, 0xd */
  ecx = 0xdu;
/* 8c74ce: lea esi, [esp + 0x8c] */
  esi = (uint32_t)(esp + 0x8cu);
/* 8c74d5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c74d7: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 8c74db: ja 0x8c7445 */
  if ((!cf && !zf)) goto L_8c7445;
L_8c74e1: /* 8c74e1: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8c74e5: sub eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c74e8: lea edx, [esp + 0xf4] */
  edx = (uint32_t)(esp + 0xf4u);
/* 8c74ef: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8c74f1: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8c74f5: jae 0x8c7230 */
  if (!cf) goto L_8c7230;
L_8c74fb: /* 8c74fb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c74fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c74fd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c74fe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_8c74ff: /* 8c74ff: add esp, 0x1e4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1e4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c7505: ret  */
  esp += 4; SPILL(); return;
}

void f_8c75e0(void) {
  LOAD_REGS();
L_8c75e0: /* 8c75e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c75e1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 8c75e5: push 0xce9540 */
  { uint32_t v = 0xce9540u; esp -= 4; W32(esp, v); }
/* 8c75ea: mov ecx, esi */
  ecx = esi;
/* 8c75ec: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x8c75f2u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 8c75f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c75f4: jne 0x8c760e */
  if (!zf) goto L_8c760e;
L_8c75f6: /* 8c75f6: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 8c75fb: push 0xaece40 */
  { uint32_t v = 0xaece40u; esp -= 4; W32(esp, v); }
/* 8c7600: push 0xaece84 */
  { uint32_t v = 0xaece84u; esp -= 4; W32(esp, v); }
/* 8c7605: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8c760bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8c760b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8c760e: /* 8c760e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 8c7612: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8c7615: jne 0x8c761d */
  if (!zf) goto L_8c761d;
L_8c7617: /* 8c7617: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x8c761du); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
L_8c761d: /* 8c761d: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 8c7623: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8c7625: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 8c7629: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c762b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c762c: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 8c7630: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c7632: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c7633: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c7634: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c7635: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c7636: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x8c763cu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 8c763c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c763f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c7640: ret  */
  esp += 4; SPILL(); return;
}

void f_8c7670(void) {
  LOAD_REGS();
L_8c7670: /* 8c7670: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8c7674: sub esp, 0x104 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c767a: cmp ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c767d: jl 0x8c77e8 */
  if ((sf != of)) goto L_8c77e8;
L_8c7683: /* 8c7683: mov eax, dword ptr [esp + 0x108] */
  eax = R32((uint32_t)(esp + 0x108u));
/* 8c768a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c768b: mov ebx, dword ptr [0xaec860] */
  ebx = R32((uint32_t)(0xaec860u));
/* 8c7691: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8c7692: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 8c7696: lea eax, [eax + ecx*4 - 4] */
  eax = (uint32_t)(eax + ecx*4 + 0xfffffffcu);
/* 8c769a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c769b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c769c: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 8c76a0: mov ecx, 0x3e */
  ecx = 0x3eu;
/* 8c76a5: xor eax, eax */
  eax = 0;
/* 8c76a7: lea edi, [esp + 0x1c] */
  edi = (uint32_t)(esp + 0x1cu);
/* 8c76ab: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 8c76ad: lea edi, [esp + 0x14] */
  edi = (uint32_t)(esp + 0x14u);
/* 8c76b1: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
L_8c76b5: /* 8c76b5: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 8c76b8: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8c76ba: mov eax, esi */
  eax = esi;
/* 8c76bc: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c76be: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8c76c1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8c76c2: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c76c5: jle 0x8c7788 */
  if ((zf || sf != of)) goto L_8c7788;
L_8c76cb: /* 8c76cb: jmp 0x8c76d0 */
  goto L_8c76d0;
L_8c76d0: /* 8c76d0: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 8c76d2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8c76d3: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c76d5: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8c76d7: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 8c76da: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8c76dd: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 8c76df: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8c76e1: mov edx, ecx */
  edx = ecx;
/* 8c76e3: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
L_8c76e6: /* 8c76e6: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8c76e9: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c76eb: ja 0x8c76f8 */
  if ((!cf && !zf)) goto L_8c76f8;
L_8c76ed: /* 8c76ed: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 8c76ef: sub edi, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 8c76f1: imul edi, ebx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ebx);
  edi = (uint32_t)r;
  }
/* 8c76f4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c76f6: jle 0x8c76e6 */
  if ((zf || sf != of)) goto L_8c76e6;
L_8c76f8: /* 8c76f8: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c76fb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c76fd: jbe 0x8c770a */
  if ((cf | zf)) goto L_8c770a;
L_8c76ff: /* 8c76ff: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 8c7701: sub edi, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 8c7703: imul edi, ebx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ebx);
  edi = (uint32_t)r;
  }
/* 8c7706: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c7708: jge 0x8c76f8 */
  if ((sf == of)) goto L_8c76f8;
L_8c770a: /* 8c770a: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c770c: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 8c770e: ja 0x8c7718 */
  if ((!cf && !zf)) goto L_8c7718;
L_8c7710: /* 8c7710: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 8c7712: mov dword ptr [edx], ebp */
  W32((uint32_t)(edx), ebp);
/* 8c7714: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 8c7716: jmp 0x8c76e6 */
  goto L_8c76e6;
L_8c7718: /* 8c7718: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 8c771a: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 8c771c: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 8c771e: mov edi, eax */
  edi = eax;
/* 8c7720: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 8c7722: mov ebp, esi */
  ebp = esi;
/* 8c7724: sub edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 8c7727: sub ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 8c7729: and edi, 0xfffffffc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 8c772c: and ebp, 0xfffffffc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8c772f: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c7731: jl 0x8c7759 */
  if ((sf != of)) goto L_8c7759;
L_8c7733: /* 8c7733: lea edi, [ecx + 4] */
  edi = (uint32_t)(ecx + 0x4u);
/* 8c7736: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8c7738: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 8c773c: jae 0x8c774d */
  if (!cf) goto L_8c774d;
L_8c773e: /* 8c773e: add eax, -4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c7741: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 8c7743: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 8c7746: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8c7749: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
L_8c774d: /* 8c774d: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c774f: jbe 0x8c77d1 */
  if ((cf | zf)) goto L_8c77d1;
L_8c7755: /* 8c7755: mov ecx, edx */
  ecx = edx;
/* 8c7757: jmp 0x8c7777 */
  goto L_8c7777;
L_8c7759: /* 8c7759: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c775b: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 8c775f: jbe 0x8c776d */
  if ((cf | zf)) goto L_8c776d;
L_8c7761: /* 8c7761: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 8c7763: mov dword ptr [edi + 4], esi */
  W32((uint32_t)(edi + 0x4u), esi);
/* 8c7766: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8c7769: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
L_8c776d: /* 8c776d: lea edx, [ecx + 4] */
  edx = (uint32_t)(ecx + 0x4u);
/* 8c7770: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8c7772: jae 0x8c77d1 */
  if (!cf) goto L_8c77d1;
L_8c7774: /* 8c7774: lea esi, [eax - 4] */
  esi = (uint32_t)(eax + 0xfffffffcu);
L_8c7777: /* 8c7777: mov eax, esi */
  eax = esi;
/* 8c7779: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c777b: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8c777e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8c777f: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c7782: jg 0x8c76d0 */
  if ((!zf && sf == of)) goto L_8c76d0;
L_8c7788: /* 8c7788: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c778a: jbe 0x8c77d1 */
  if ((cf | zf)) goto L_8c77d1;
L_8c778c: /* 8c778c: lea edi, [ecx + 4] */
  edi = (uint32_t)(ecx + 0x4u);
/* 8c778f: nop  */
L_8c7790: /* 8c7790: mov eax, edi */
  eax = edi;
/* 8c7792: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c7794: mov edx, ecx */
  edx = ecx;
/* 8c7796: ja 0x8c77be */
  if ((!cf && !zf)) goto L_8c77be;
L_8c7798: /* 8c7798: jmp 0x8c77a0 */
  goto L_8c77a0;
L_8c77a0: /* 8c77a0: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8c77a2: sub ebx, dword ptr [edx] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edx)));
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 8c77a4: imul ebx, dword ptr [0xaec860] */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(R32((uint32_t)(0xaec860u)));
  ebx = (uint32_t)r;
  }
/* 8c77ab: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c77ad: jle 0x8c77b1 */
  if ((zf || sf != of)) goto L_8c77b1;
L_8c77af: /* 8c77af: mov edx, eax */
  edx = eax;
L_8c77b1: /* 8c77b1: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c77b4: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c77b6: jbe 0x8c77a0 */
  if ((cf | zf)) goto L_8c77a0;
L_8c77b8: /* 8c77b8: mov ebx, dword ptr [0xaec860] */
  ebx = R32((uint32_t)(0xaec860u));
L_8c77be: /* 8c77be: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 8c77c0: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8c77c2: mov dword ptr [edx], ebp */
  W32((uint32_t)(edx), ebp);
/* 8c77c4: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 8c77c6: sub esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8c77c9: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c77cb: ja 0x8c7790 */
  if ((!cf && !zf)) goto L_8c7790;
L_8c77cd: /* 8c77cd: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
L_8c77d1: /* 8c77d1: sub edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 8c77d4: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 8c77d8: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8c77da: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 8c77de: jae 0x8c76b5 */
  if (!cf) goto L_8c76b5;
L_8c77e4: /* 8c77e4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c77e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c77e6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c77e7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_8c77e8: /* 8c77e8: add esp, 0x104 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c77ee: ret  */
  esp += 4; SPILL(); return;
}

void f_8c76cd(void) {
  LOAD_REGS();
  goto L_8c76cd;
L_8c76b5: /* 8c76b5: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 8c76b8: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8c76ba: mov eax, esi */
  eax = esi;
/* 8c76bc: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c76be: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8c76c1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8c76c2: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c76c5: jle 0x8c7788 */
  if ((zf || sf != of)) goto L_8c7788;
L_8c76cb: /* 8c76cb: jmp 0x8c76d0 */
  goto L_8c76d0;
L_8c76cd: /* 8c76cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8c76d0: /* 8c76d0: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 8c76d2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8c76d3: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c76d5: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8c76d7: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 8c76da: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8c76dd: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 8c76df: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8c76e1: mov edx, ecx */
  edx = ecx;
/* 8c76e3: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
L_8c76e6: /* 8c76e6: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8c76e9: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c76eb: ja 0x8c76f8 */
  if ((!cf && !zf)) goto L_8c76f8;
L_8c76ed: /* 8c76ed: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 8c76ef: sub edi, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 8c76f1: imul edi, ebx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ebx);
  edi = (uint32_t)r;
  }
/* 8c76f4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c76f6: jle 0x8c76e6 */
  if ((zf || sf != of)) goto L_8c76e6;
L_8c76f8: /* 8c76f8: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c76fb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c76fd: jbe 0x8c770a */
  if ((cf | zf)) goto L_8c770a;
L_8c76ff: /* 8c76ff: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 8c7701: sub edi, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 8c7703: imul edi, ebx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ebx);
  edi = (uint32_t)r;
  }
/* 8c7706: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c7708: jge 0x8c76f8 */
  if ((sf == of)) goto L_8c76f8;
L_8c770a: /* 8c770a: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c770c: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 8c770e: ja 0x8c7718 */
  if ((!cf && !zf)) goto L_8c7718;
L_8c7710: /* 8c7710: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 8c7712: mov dword ptr [edx], ebp */
  W32((uint32_t)(edx), ebp);
/* 8c7714: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 8c7716: jmp 0x8c76e6 */
  goto L_8c76e6;
L_8c7718: /* 8c7718: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 8c771a: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 8c771c: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 8c771e: mov edi, eax */
  edi = eax;
/* 8c7720: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 8c7722: mov ebp, esi */
  ebp = esi;
/* 8c7724: sub edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 8c7727: sub ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 8c7729: and edi, 0xfffffffc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 8c772c: and ebp, 0xfffffffc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8c772f: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c7731: jl 0x8c7759 */
  if ((sf != of)) goto L_8c7759;
L_8c7733: /* 8c7733: lea edi, [ecx + 4] */
  edi = (uint32_t)(ecx + 0x4u);
/* 8c7736: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8c7738: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 8c773c: jae 0x8c774d */
  if (!cf) goto L_8c774d;
L_8c773e: /* 8c773e: add eax, -4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c7741: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 8c7743: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 8c7746: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8c7749: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
L_8c774d: /* 8c774d: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c774f: jbe 0x8c77d1 */
  if ((cf | zf)) goto L_8c77d1;
L_8c7755: /* 8c7755: mov ecx, edx */
  ecx = edx;
/* 8c7757: jmp 0x8c7777 */
  goto L_8c7777;
L_8c7759: /* 8c7759: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c775b: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 8c775f: jbe 0x8c776d */
  if ((cf | zf)) goto L_8c776d;
L_8c7761: /* 8c7761: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 8c7763: mov dword ptr [edi + 4], esi */
  W32((uint32_t)(edi + 0x4u), esi);
/* 8c7766: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8c7769: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
L_8c776d: /* 8c776d: lea edx, [ecx + 4] */
  edx = (uint32_t)(ecx + 0x4u);
/* 8c7770: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8c7772: jae 0x8c77d1 */
  if (!cf) goto L_8c77d1;
L_8c7774: /* 8c7774: lea esi, [eax - 4] */
  esi = (uint32_t)(eax + 0xfffffffcu);
L_8c7777: /* 8c7777: mov eax, esi */
  eax = esi;
/* 8c7779: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c777b: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8c777e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8c777f: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c7782: jg 0x8c76d0 */
  if ((!zf && sf == of)) goto L_8c76d0;
L_8c7788: /* 8c7788: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c778a: jbe 0x8c77d1 */
  if ((cf | zf)) goto L_8c77d1;
L_8c778c: /* 8c778c: lea edi, [ecx + 4] */
  edi = (uint32_t)(ecx + 0x4u);
/* 8c778f: nop  */
L_8c7790: /* 8c7790: mov eax, edi */
  eax = edi;
/* 8c7792: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c7794: mov edx, ecx */
  edx = ecx;
/* 8c7796: ja 0x8c77be */
  if ((!cf && !zf)) goto L_8c77be;
L_8c7798: /* 8c7798: jmp 0x8c77a0 */
  goto L_8c77a0;
L_8c77a0: /* 8c77a0: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8c77a2: sub ebx, dword ptr [edx] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edx)));
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 8c77a4: imul ebx, dword ptr [0xaec860] */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(R32((uint32_t)(0xaec860u)));
  ebx = (uint32_t)r;
  }
/* 8c77ab: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c77ad: jle 0x8c77b1 */
  if ((zf || sf != of)) goto L_8c77b1;
L_8c77af: /* 8c77af: mov edx, eax */
  edx = eax;
L_8c77b1: /* 8c77b1: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c77b4: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c77b6: jbe 0x8c77a0 */
  if ((cf | zf)) goto L_8c77a0;
L_8c77b8: /* 8c77b8: mov ebx, dword ptr [0xaec860] */
  ebx = R32((uint32_t)(0xaec860u));
L_8c77be: /* 8c77be: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 8c77c0: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8c77c2: mov dword ptr [edx], ebp */
  W32((uint32_t)(edx), ebp);
/* 8c77c4: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 8c77c6: sub esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8c77c9: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c77cb: ja 0x8c7790 */
  if ((!cf && !zf)) goto L_8c7790;
L_8c77cd: /* 8c77cd: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
L_8c77d1: /* 8c77d1: sub edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 8c77d4: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 8c77d8: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8c77da: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 8c77de: jae 0x8c76b5 */
  if (!cf) goto L_8c76b5;
L_8c77e4: /* 8c77e4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c77e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c77e6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c77e7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c77e8: add esp, 0x104 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c77ee: ret  */
  esp += 4; SPILL(); return;
}

void f_8c779a(void) {
  LOAD_REGS();
  goto L_8c779a;
L_8c76b5: /* 8c76b5: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 8c76b8: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8c76ba: mov eax, esi */
  eax = esi;
/* 8c76bc: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c76be: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8c76c1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8c76c2: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c76c5: jle 0x8c7788 */
  if ((zf || sf != of)) goto L_8c7788;
L_8c76cb: /* 8c76cb: jmp 0x8c76d0 */
  goto L_8c76d0;
L_8c76d0: /* 8c76d0: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 8c76d2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8c76d3: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c76d5: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8c76d7: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 8c76da: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8c76dd: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 8c76df: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8c76e1: mov edx, ecx */
  edx = ecx;
/* 8c76e3: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
L_8c76e6: /* 8c76e6: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8c76e9: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c76eb: ja 0x8c76f8 */
  if ((!cf && !zf)) goto L_8c76f8;
L_8c76ed: /* 8c76ed: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 8c76ef: sub edi, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 8c76f1: imul edi, ebx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ebx);
  edi = (uint32_t)r;
  }
/* 8c76f4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c76f6: jle 0x8c76e6 */
  if ((zf || sf != of)) goto L_8c76e6;
L_8c76f8: /* 8c76f8: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c76fb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c76fd: jbe 0x8c770a */
  if ((cf | zf)) goto L_8c770a;
L_8c76ff: /* 8c76ff: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 8c7701: sub edi, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 8c7703: imul edi, ebx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ebx);
  edi = (uint32_t)r;
  }
/* 8c7706: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c7708: jge 0x8c76f8 */
  if ((sf == of)) goto L_8c76f8;
L_8c770a: /* 8c770a: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c770c: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 8c770e: ja 0x8c7718 */
  if ((!cf && !zf)) goto L_8c7718;
L_8c7710: /* 8c7710: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 8c7712: mov dword ptr [edx], ebp */
  W32((uint32_t)(edx), ebp);
/* 8c7714: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 8c7716: jmp 0x8c76e6 */
  goto L_8c76e6;
L_8c7718: /* 8c7718: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 8c771a: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 8c771c: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 8c771e: mov edi, eax */
  edi = eax;
/* 8c7720: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 8c7722: mov ebp, esi */
  ebp = esi;
/* 8c7724: sub edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 8c7727: sub ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 8c7729: and edi, 0xfffffffc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 8c772c: and ebp, 0xfffffffc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8c772f: cmp edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c7731: jl 0x8c7759 */
  if ((sf != of)) goto L_8c7759;
L_8c7733: /* 8c7733: lea edi, [ecx + 4] */
  edi = (uint32_t)(ecx + 0x4u);
/* 8c7736: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8c7738: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 8c773c: jae 0x8c774d */
  if (!cf) goto L_8c774d;
L_8c773e: /* 8c773e: add eax, -4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c7741: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 8c7743: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 8c7746: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8c7749: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
L_8c774d: /* 8c774d: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c774f: jbe 0x8c77d1 */
  if ((cf | zf)) goto L_8c77d1;
L_8c7755: /* 8c7755: mov ecx, edx */
  ecx = edx;
/* 8c7757: jmp 0x8c7777 */
  goto L_8c7777;
L_8c7759: /* 8c7759: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c775b: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 8c775f: jbe 0x8c776d */
  if ((cf | zf)) goto L_8c776d;
L_8c7761: /* 8c7761: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 8c7763: mov dword ptr [edi + 4], esi */
  W32((uint32_t)(edi + 0x4u), esi);
/* 8c7766: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8c7769: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
L_8c776d: /* 8c776d: lea edx, [ecx + 4] */
  edx = (uint32_t)(ecx + 0x4u);
/* 8c7770: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8c7772: jae 0x8c77d1 */
  if (!cf) goto L_8c77d1;
L_8c7774: /* 8c7774: lea esi, [eax - 4] */
  esi = (uint32_t)(eax + 0xfffffffcu);
L_8c7777: /* 8c7777: mov eax, esi */
  eax = esi;
/* 8c7779: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c777b: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8c777e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8c777f: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c7782: jg 0x8c76d0 */
  if ((!zf && sf == of)) goto L_8c76d0;
L_8c7788: /* 8c7788: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c778a: jbe 0x8c77d1 */
  if ((cf | zf)) goto L_8c77d1;
L_8c778c: /* 8c778c: lea edi, [ecx + 4] */
  edi = (uint32_t)(ecx + 0x4u);
/* 8c778f: nop  */
L_8c7790: /* 8c7790: mov eax, edi */
  eax = edi;
/* 8c7792: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c7794: mov edx, ecx */
  edx = ecx;
/* 8c7796: ja 0x8c77be */
  if ((!cf && !zf)) goto L_8c77be;
L_8c7798: /* 8c7798: jmp 0x8c77a0 */
  goto L_8c77a0;
L_8c779a: /* 8c779a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8c77a0: /* 8c77a0: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8c77a2: sub ebx, dword ptr [edx] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edx)));
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 8c77a4: imul ebx, dword ptr [0xaec860] */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(R32((uint32_t)(0xaec860u)));
  ebx = (uint32_t)r;
  }
/* 8c77ab: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c77ad: jle 0x8c77b1 */
  if ((zf || sf != of)) goto L_8c77b1;
L_8c77af: /* 8c77af: mov edx, eax */
  edx = eax;
L_8c77b1: /* 8c77b1: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c77b4: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c77b6: jbe 0x8c77a0 */
  if ((cf | zf)) goto L_8c77a0;
L_8c77b8: /* 8c77b8: mov ebx, dword ptr [0xaec860] */
  ebx = R32((uint32_t)(0xaec860u));
L_8c77be: /* 8c77be: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 8c77c0: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8c77c2: mov dword ptr [edx], ebp */
  W32((uint32_t)(edx), ebp);
/* 8c77c4: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 8c77c6: sub esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8c77c9: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c77cb: ja 0x8c7790 */
  if ((!cf && !zf)) goto L_8c7790;
L_8c77cd: /* 8c77cd: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
L_8c77d1: /* 8c77d1: sub edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 8c77d4: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 8c77d8: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8c77da: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 8c77de: jae 0x8c76b5 */
  if (!cf) goto L_8c76b5;
L_8c77e4: /* 8c77e4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c77e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c77e6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c77e7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c77e8: add esp, 0x104 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c77ee: ret  */
  esp += 4; SPILL(); return;
}

void f_8c7850(void) {
  LOAD_REGS();
L_8c7850: /* 8c7850: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8c7854: sub esp, 0x1f4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1f4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c785a: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c785d: jl 0x8c7aba */
  if ((sf != of)) goto L_8c7aba;
L_8c7863: /* 8c7863: mov ecx, dword ptr [esp + 0x1f8] */
  ecx = R32((uint32_t)(esp + 0x1f8u));
/* 8c786a: imul eax, eax, 0x38 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x38u);
  eax = (uint32_t)r;
  }
/* 8c786d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c786e: lea eax, [eax + ecx - 0x38] */
  eax = (uint32_t)(eax + ecx + 0xffffffc8u);
/* 8c7872: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8c7873: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c7874: mov dword ptr [esp + 0x104], eax */
  W32((uint32_t)(esp + 0x104u), eax);
/* 8c787b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c787c: mov dword ptr [esp + 0x104], ecx */
  W32((uint32_t)(esp + 0x104u), ecx);
/* 8c7883: xor eax, eax */
  eax = 0;
/* 8c7885: mov ecx, 0x3e */
  ecx = 0x3eu;
/* 8c788a: lea edi, [esp + 0x10c] */
  edi = (uint32_t)(esp + 0x10cu);
/* 8c7891: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 8c7893: lea eax, [esp + 0x104] */
  eax = (uint32_t)(esp + 0x104u);
/* 8c789a: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8c789e: mov edi, edi */
  edi = edi;
L_8c78a0: /* 8c78a0: mov ebp, dword ptr [eax + 4] */
  ebp = R32((uint32_t)(eax + 0x4u));
/* 8c78a3: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8c78a5: mov ecx, ebp */
  ecx = ebp;
/* 8c78a7: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8c78a9: mov eax, 0x92492493 */
  eax = 0x92492493u;
/* 8c78ae: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 8c78b0: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8c78b2: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8c78b5: mov ecx, edx */
  ecx = edx;
/* 8c78b7: shr ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8c78ba: lea eax, [edx + ecx + 1] */
  eax = (uint32_t)(edx + ecx + 0x1u);
/* 8c78be: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c78c1: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 8c78c5: jle 0x8c7a3f */
  if ((zf || sf != of)) goto L_8c7a3f;
L_8c78cb: /* 8c78cb: jmp 0x8c78d0 */
  goto L_8c78d0;
L_8c78d0: /* 8c78d0: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8c78d1: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c78d3: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8c78d5: imul eax, eax, 0x38 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x38u);
  eax = (uint32_t)r;
  }
/* 8c78d8: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c78da: mov esi, eax */
  esi = eax;
/* 8c78dc: mov ecx, 0xe */
  ecx = 0xeu;
/* 8c78e1: lea edi, [esp + 0x24] */
  edi = (uint32_t)(esp + 0x24u);
/* 8c78e5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c78e7: mov edi, eax */
  edi = eax;
/* 8c78e9: mov ecx, 0xe */
  ecx = 0xeu;
/* 8c78ee: mov esi, ebx */
  esi = ebx;
/* 8c78f0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c78f2: lea esi, [esp + 0x24] */
  esi = (uint32_t)(esp + 0x24u);
/* 8c78f6: mov edi, ebx */
  edi = ebx;
/* 8c78f8: mov eax, ebx */
  eax = ebx;
/* 8c78fa: add ebp, 0x38 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
L_8c78fd: /* 8c78fd: mov ecx, 0xe */
  ecx = 0xeu;
/* 8c7902: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_8c7904: /* 8c7904: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 8c7908: add eax, 0x38 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c790b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c790d: ja 0x8c7920 */
  if ((!cf && !zf)) goto L_8c7920;
L_8c790f: /* 8c790f: mov edx, dword ptr [eax + 0x34] */
  edx = R32((uint32_t)(eax + 0x34u));
/* 8c7912: sub edx, dword ptr [ebx + 0x34] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 8c7915: imul edx, dword ptr [0xaeccb4] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(0xaeccb4u)));
  edx = (uint32_t)r;
  }
/* 8c791c: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c791e: jle 0x8c7904 */
  if ((zf || sf != of)) goto L_8c7904;
L_8c7920: /* 8c7920: sub ebp, 0x38 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 8c7923: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c7925: jbe 0x8c7938 */
  if ((cf | zf)) goto L_8c7938;
L_8c7927: /* 8c7927: mov ecx, dword ptr [ebp + 0x34] */
  ecx = R32((uint32_t)(ebp + 0x34u));
/* 8c792a: sub ecx, dword ptr [ebx + 0x34] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8c792d: imul ecx, dword ptr [0xaeccb4] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(0xaeccb4u)));
  ecx = (uint32_t)r;
  }
/* 8c7934: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c7936: jge 0x8c7920 */
  if ((sf == of)) goto L_8c7920;
L_8c7938: /* 8c7938: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c793a: mov ecx, 0xe */
  ecx = 0xeu;
/* 8c793f: ja 0x8c7962 */
  if ((!cf && !zf)) goto L_8c7962;
L_8c7941: /* 8c7941: mov esi, eax */
  esi = eax;
/* 8c7943: lea edi, [esp + 0xcc] */
  edi = (uint32_t)(esp + 0xccu);
/* 8c794a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c794c: mov ecx, 0xe */
  ecx = 0xeu;
/* 8c7951: mov esi, ebp */
  esi = ebp;
/* 8c7953: mov edi, eax */
  edi = eax;
/* 8c7955: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c7957: lea esi, [esp + 0xcc] */
  esi = (uint32_t)(esp + 0xccu);
/* 8c795e: mov edi, ebp */
  edi = ebp;
/* 8c7960: jmp 0x8c78fd */
  goto L_8c78fd;
L_8c7962: /* 8c7962: mov esi, ebx */
  esi = ebx;
/* 8c7964: lea edi, [esp + 0x5c] */
  edi = (uint32_t)(esp + 0x5cu);
/* 8c7968: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c796a: mov ecx, 0xe */
  ecx = 0xeu;
/* 8c796f: mov esi, ebp */
  esi = ebp;
/* 8c7971: mov edi, ebx */
  edi = ebx;
/* 8c7973: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c7975: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 8c7979: mov ecx, 0xe */
  ecx = 0xeu;
/* 8c797e: lea esi, [esp + 0x5c] */
  esi = (uint32_t)(esp + 0x5cu);
/* 8c7982: mov edi, ebp */
  edi = ebp;
/* 8c7984: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c7986: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 8c798a: mov esi, ebp */
  esi = ebp;
/* 8c798c: sub esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8c798e: sub esi, 0x38 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8c7991: mov eax, 0x92492493 */
  eax = 0x92492493u;
/* 8c7996: imul esi */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(esi); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 8c7998: mov ecx, edx */
  ecx = edx;
/* 8c799a: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8c799c: sar ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 8c799f: mov edx, ecx */
  edx = ecx;
/* 8c79a1: shr edx, 0x1f */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8c79a4: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8c79a6: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 8c79aa: mov esi, edi */
  esi = edi;
/* 8c79ac: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8c79ae: mov eax, 0x92492493 */
  eax = 0x92492493u;
/* 8c79b3: imul esi */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(esi); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 8c79b5: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8c79b7: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8c79ba: mov eax, edx */
  eax = edx;
/* 8c79bc: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8c79bf: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8c79c1: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c79c3: jl 0x8c79ed */
  if ((sf != of)) goto L_8c79ed;
L_8c79c5: /* 8c79c5: lea ecx, [ebx + 0x38] */
  ecx = (uint32_t)(ebx + 0x38u);
/* 8c79c8: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8c79ca: jae 0x8c79df */
  if (!cf) goto L_8c79df;
L_8c79cc: /* 8c79cc: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8c79d0: add ebp, -0x38 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffffffc8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8c79d3: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 8c79d5: mov dword ptr [eax + 4], ebp */
  W32((uint32_t)(eax + 0x4u), ebp);
/* 8c79d8: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c79db: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_8c79df: /* 8c79df: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 8c79e3: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c79e5: jbe 0x8c7a9c */
  if ((cf | zf)) goto L_8c7a9c;
L_8c79eb: /* 8c79eb: jmp 0x8c7a19 */
  goto L_8c7a19;
L_8c79ed: /* 8c79ed: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 8c79f1: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c79f3: jbe 0x8c7a05 */
  if ((cf | zf)) goto L_8c7a05;
L_8c79f5: /* 8c79f5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8c79f9: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8c79fb: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 8c79fe: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c7a01: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_8c7a05: /* 8c7a05: lea edx, [ebx + 0x38] */
  edx = (uint32_t)(ebx + 0x38u);
/* 8c7a08: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8c7a0a: jae 0x8c7a9c */
  if (!cf) goto L_8c7a9c;
L_8c7a10: /* 8c7a10: add ebp, -0x38 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffffffc8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8c7a13: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 8c7a17: mov edi, ebp */
  edi = ebp;
L_8c7a19: /* 8c7a19: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 8c7a1d: mov ecx, edi */
  ecx = edi;
/* 8c7a1f: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8c7a21: mov eax, 0x92492493 */
  eax = 0x92492493u;
/* 8c7a26: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 8c7a28: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8c7a2a: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8c7a2d: mov eax, edx */
  eax = edx;
/* 8c7a2f: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8c7a32: lea eax, [edx + eax + 1] */
  eax = (uint32_t)(edx + eax + 0x1u);
/* 8c7a36: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c7a39: jg 0x8c78d0 */
  if ((!zf && sf == of)) goto L_8c78d0;
L_8c7a3f: /* 8c7a3f: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c7a41: jbe 0x8c7a9c */
  if ((cf | zf)) goto L_8c7a9c;
L_8c7a43: /* 8c7a43: lea eax, [ebx + 0x38] */
  eax = (uint32_t)(ebx + 0x38u);
/* 8c7a46: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c7a48: mov edx, ebx */
  edx = ebx;
/* 8c7a4a: ja 0x8c7a6a */
  if ((!cf && !zf)) goto L_8c7a6a;
L_8c7a4c: /* 8c7a4c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8c7a50: /* 8c7a50: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* 8c7a53: sub ecx, dword ptr [edx + 0x34] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8c7a56: imul ecx, dword ptr [0xaeccb4] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(0xaeccb4u)));
  ecx = (uint32_t)r;
  }
/* 8c7a5d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c7a5f: jle 0x8c7a63 */
  if ((zf || sf != of)) goto L_8c7a63;
L_8c7a61: /* 8c7a61: mov edx, eax */
  edx = eax;
L_8c7a63: /* 8c7a63: add eax, 0x38 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c7a66: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c7a68: jbe 0x8c7a50 */
  if ((cf | zf)) goto L_8c7a50;
L_8c7a6a: /* 8c7a6a: mov ecx, 0xe */
  ecx = 0xeu;
/* 8c7a6f: mov esi, edx */
  esi = edx;
/* 8c7a71: lea edi, [esp + 0x94] */
  edi = (uint32_t)(esp + 0x94u);
/* 8c7a78: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c7a7a: mov esi, ebp */
  esi = ebp;
/* 8c7a7c: mov ecx, 0xe */
  ecx = 0xeu;
/* 8c7a81: mov edi, edx */
  edi = edx;
/* 8c7a83: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c7a85: mov edi, ebp */
  edi = ebp;
/* 8c7a87: sub ebp, 0x38 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 8c7a8a: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c7a8c: mov ecx, 0xe */
  ecx = 0xeu;
/* 8c7a91: lea esi, [esp + 0x94] */
  esi = (uint32_t)(esp + 0x94u);
/* 8c7a98: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c7a9a: ja 0x8c7a43 */
  if ((!cf && !zf)) goto L_8c7a43;
L_8c7a9c: /* 8c7a9c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8c7aa0: sub eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c7aa3: lea edx, [esp + 0x104] */
  edx = (uint32_t)(esp + 0x104u);
/* 8c7aaa: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8c7aac: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8c7ab0: jae 0x8c78a0 */
  if (!cf) goto L_8c78a0;
L_8c7ab6: /* 8c7ab6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c7ab7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c7ab8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c7ab9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_8c7aba: /* 8c7aba: add esp, 0x1f4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1f4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c7ac0: ret  */
  esp += 4; SPILL(); return;
}

void f_8c78cd(void) {
  LOAD_REGS();
  goto L_8c78cd;
L_8c78a0: /* 8c78a0: mov ebp, dword ptr [eax + 4] */
  ebp = R32((uint32_t)(eax + 0x4u));
/* 8c78a3: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8c78a5: mov ecx, ebp */
  ecx = ebp;
/* 8c78a7: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8c78a9: mov eax, 0x92492493 */
  eax = 0x92492493u;
/* 8c78ae: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 8c78b0: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8c78b2: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8c78b5: mov ecx, edx */
  ecx = edx;
/* 8c78b7: shr ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8c78ba: lea eax, [edx + ecx + 1] */
  eax = (uint32_t)(edx + ecx + 0x1u);
/* 8c78be: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c78c1: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 8c78c5: jle 0x8c7a3f */
  if ((zf || sf != of)) goto L_8c7a3f;
L_8c78cb: /* 8c78cb: jmp 0x8c78d0 */
  goto L_8c78d0;
L_8c78cd: /* 8c78cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8c78d0: /* 8c78d0: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8c78d1: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c78d3: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8c78d5: imul eax, eax, 0x38 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x38u);
  eax = (uint32_t)r;
  }
/* 8c78d8: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c78da: mov esi, eax */
  esi = eax;
/* 8c78dc: mov ecx, 0xe */
  ecx = 0xeu;
/* 8c78e1: lea edi, [esp + 0x24] */
  edi = (uint32_t)(esp + 0x24u);
/* 8c78e5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c78e7: mov edi, eax */
  edi = eax;
/* 8c78e9: mov ecx, 0xe */
  ecx = 0xeu;
/* 8c78ee: mov esi, ebx */
  esi = ebx;
/* 8c78f0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c78f2: lea esi, [esp + 0x24] */
  esi = (uint32_t)(esp + 0x24u);
/* 8c78f6: mov edi, ebx */
  edi = ebx;
/* 8c78f8: mov eax, ebx */
  eax = ebx;
/* 8c78fa: add ebp, 0x38 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
L_8c78fd: /* 8c78fd: mov ecx, 0xe */
  ecx = 0xeu;
/* 8c7902: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_8c7904: /* 8c7904: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 8c7908: add eax, 0x38 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c790b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c790d: ja 0x8c7920 */
  if ((!cf && !zf)) goto L_8c7920;
L_8c790f: /* 8c790f: mov edx, dword ptr [eax + 0x34] */
  edx = R32((uint32_t)(eax + 0x34u));
/* 8c7912: sub edx, dword ptr [ebx + 0x34] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 8c7915: imul edx, dword ptr [0xaeccb4] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(0xaeccb4u)));
  edx = (uint32_t)r;
  }
/* 8c791c: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c791e: jle 0x8c7904 */
  if ((zf || sf != of)) goto L_8c7904;
L_8c7920: /* 8c7920: sub ebp, 0x38 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 8c7923: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c7925: jbe 0x8c7938 */
  if ((cf | zf)) goto L_8c7938;
L_8c7927: /* 8c7927: mov ecx, dword ptr [ebp + 0x34] */
  ecx = R32((uint32_t)(ebp + 0x34u));
/* 8c792a: sub ecx, dword ptr [ebx + 0x34] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8c792d: imul ecx, dword ptr [0xaeccb4] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(0xaeccb4u)));
  ecx = (uint32_t)r;
  }
/* 8c7934: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c7936: jge 0x8c7920 */
  if ((sf == of)) goto L_8c7920;
L_8c7938: /* 8c7938: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c793a: mov ecx, 0xe */
  ecx = 0xeu;
/* 8c793f: ja 0x8c7962 */
  if ((!cf && !zf)) goto L_8c7962;
L_8c7941: /* 8c7941: mov esi, eax */
  esi = eax;
/* 8c7943: lea edi, [esp + 0xcc] */
  edi = (uint32_t)(esp + 0xccu);
/* 8c794a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c794c: mov ecx, 0xe */
  ecx = 0xeu;
/* 8c7951: mov esi, ebp */
  esi = ebp;
/* 8c7953: mov edi, eax */
  edi = eax;
/* 8c7955: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c7957: lea esi, [esp + 0xcc] */
  esi = (uint32_t)(esp + 0xccu);
/* 8c795e: mov edi, ebp */
  edi = ebp;
/* 8c7960: jmp 0x8c78fd */
  goto L_8c78fd;
L_8c7962: /* 8c7962: mov esi, ebx */
  esi = ebx;
/* 8c7964: lea edi, [esp + 0x5c] */
  edi = (uint32_t)(esp + 0x5cu);
/* 8c7968: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c796a: mov ecx, 0xe */
  ecx = 0xeu;
/* 8c796f: mov esi, ebp */
  esi = ebp;
/* 8c7971: mov edi, ebx */
  edi = ebx;
/* 8c7973: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c7975: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 8c7979: mov ecx, 0xe */
  ecx = 0xeu;
/* 8c797e: lea esi, [esp + 0x5c] */
  esi = (uint32_t)(esp + 0x5cu);
/* 8c7982: mov edi, ebp */
  edi = ebp;
/* 8c7984: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c7986: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 8c798a: mov esi, ebp */
  esi = ebp;
/* 8c798c: sub esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8c798e: sub esi, 0x38 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8c7991: mov eax, 0x92492493 */
  eax = 0x92492493u;
/* 8c7996: imul esi */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(esi); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 8c7998: mov ecx, edx */
  ecx = edx;
/* 8c799a: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8c799c: sar ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 8c799f: mov edx, ecx */
  edx = ecx;
/* 8c79a1: shr edx, 0x1f */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8c79a4: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8c79a6: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 8c79aa: mov esi, edi */
  esi = edi;
/* 8c79ac: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8c79ae: mov eax, 0x92492493 */
  eax = 0x92492493u;
/* 8c79b3: imul esi */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(esi); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 8c79b5: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8c79b7: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8c79ba: mov eax, edx */
  eax = edx;
/* 8c79bc: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8c79bf: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8c79c1: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c79c3: jl 0x8c79ed */
  if ((sf != of)) goto L_8c79ed;
L_8c79c5: /* 8c79c5: lea ecx, [ebx + 0x38] */
  ecx = (uint32_t)(ebx + 0x38u);
/* 8c79c8: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8c79ca: jae 0x8c79df */
  if (!cf) goto L_8c79df;
L_8c79cc: /* 8c79cc: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8c79d0: add ebp, -0x38 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffffffc8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8c79d3: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 8c79d5: mov dword ptr [eax + 4], ebp */
  W32((uint32_t)(eax + 0x4u), ebp);
/* 8c79d8: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c79db: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_8c79df: /* 8c79df: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 8c79e3: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c79e5: jbe 0x8c7a9c */
  if ((cf | zf)) goto L_8c7a9c;
L_8c79eb: /* 8c79eb: jmp 0x8c7a19 */
  goto L_8c7a19;
L_8c79ed: /* 8c79ed: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 8c79f1: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c79f3: jbe 0x8c7a05 */
  if ((cf | zf)) goto L_8c7a05;
L_8c79f5: /* 8c79f5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8c79f9: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8c79fb: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 8c79fe: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c7a01: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_8c7a05: /* 8c7a05: lea edx, [ebx + 0x38] */
  edx = (uint32_t)(ebx + 0x38u);
/* 8c7a08: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8c7a0a: jae 0x8c7a9c */
  if (!cf) goto L_8c7a9c;
L_8c7a10: /* 8c7a10: add ebp, -0x38 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffffffc8u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8c7a13: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 8c7a17: mov edi, ebp */
  edi = ebp;
L_8c7a19: /* 8c7a19: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 8c7a1d: mov ecx, edi */
  ecx = edi;
/* 8c7a1f: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8c7a21: mov eax, 0x92492493 */
  eax = 0x92492493u;
/* 8c7a26: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 8c7a28: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8c7a2a: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8c7a2d: mov eax, edx */
  eax = edx;
/* 8c7a2f: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8c7a32: lea eax, [edx + eax + 1] */
  eax = (uint32_t)(edx + eax + 0x1u);
/* 8c7a36: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c7a39: jg 0x8c78d0 */
  if ((!zf && sf == of)) goto L_8c78d0;
L_8c7a3f: /* 8c7a3f: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c7a41: jbe 0x8c7a9c */
  if ((cf | zf)) goto L_8c7a9c;
L_8c7a43: /* 8c7a43: lea eax, [ebx + 0x38] */
  eax = (uint32_t)(ebx + 0x38u);
/* 8c7a46: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c7a48: mov edx, ebx */
  edx = ebx;
/* 8c7a4a: ja 0x8c7a6a */
  if ((!cf && !zf)) goto L_8c7a6a;
L_8c7a4c: /* 8c7a4c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8c7a50: /* 8c7a50: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* 8c7a53: sub ecx, dword ptr [edx + 0x34] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8c7a56: imul ecx, dword ptr [0xaeccb4] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(0xaeccb4u)));
  ecx = (uint32_t)r;
  }
/* 8c7a5d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c7a5f: jle 0x8c7a63 */
  if ((zf || sf != of)) goto L_8c7a63;
L_8c7a61: /* 8c7a61: mov edx, eax */
  edx = eax;
L_8c7a63: /* 8c7a63: add eax, 0x38 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c7a66: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c7a68: jbe 0x8c7a50 */
  if ((cf | zf)) goto L_8c7a50;
L_8c7a6a: /* 8c7a6a: mov ecx, 0xe */
  ecx = 0xeu;
/* 8c7a6f: mov esi, edx */
  esi = edx;
/* 8c7a71: lea edi, [esp + 0x94] */
  edi = (uint32_t)(esp + 0x94u);
/* 8c7a78: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c7a7a: mov esi, ebp */
  esi = ebp;
/* 8c7a7c: mov ecx, 0xe */
  ecx = 0xeu;
/* 8c7a81: mov edi, edx */
  edi = edx;
/* 8c7a83: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c7a85: mov edi, ebp */
  edi = ebp;
/* 8c7a87: sub ebp, 0x38 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 8c7a8a: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c7a8c: mov ecx, 0xe */
  ecx = 0xeu;
/* 8c7a91: lea esi, [esp + 0x94] */
  esi = (uint32_t)(esp + 0x94u);
/* 8c7a98: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c7a9a: ja 0x8c7a43 */
  if ((!cf && !zf)) goto L_8c7a43;
L_8c7a9c: /* 8c7a9c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8c7aa0: sub eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c7aa3: lea edx, [esp + 0x104] */
  edx = (uint32_t)(esp + 0x104u);
/* 8c7aaa: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8c7aac: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8c7ab0: jae 0x8c78a0 */
  if (!cf) goto L_8c78a0;
L_8c7ab6: /* 8c7ab6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c7ab7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c7ab8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c7ab9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c7aba: add esp, 0x1f4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1f4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c7ac0: ret  */
  esp += 4; SPILL(); return;
}

void f_8c7b70(void) {
  LOAD_REGS();
L_8c7b70: /* 8c7b70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8c7b71: mov ebp, esp */
  ebp = esp;
/* 8c7b73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8c7b75: push 0x9d7bd0 */
  { uint32_t v = 0x9d7bd0u; esp -= 4; W32(esp, v); }
/* 8c7b7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8c7b80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c7b81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8c7b88: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c7b8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c7b8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c7b8d: mov esi, ecx */
  esi = ecx;
/* 8c7b8f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8c7b92: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 8c7b95: imul ecx, ecx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x78u);
  ecx = (uint32_t)r;
  }
/* 8c7b98: mov ecx, dword ptr [ecx + eax + 0x354] */
  ecx = R32((uint32_t)(ecx + eax + 0x354u));
/* 8c7b9f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c7ba0: mov edi, dword ptr [0xcfa3dc] */
  edi = R32((uint32_t)(0xcfa3dcu));
/* 8c7ba6: fild dword ptr [ecx + 0x40] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x40u)); FPUSH(v); }
/* 8c7ba9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8c7bac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c7bad: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8c7bb4: fidiv dword ptr [eax + 0x128c] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(eax + 0x128cu)));
/* 8c7bba: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 8c7bbd: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 8c7bc0: fild dword ptr [esi + 0x68] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x68u)); FPUSH(v); }
/* 8c7bc3: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 8c7bc6: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8c7bc9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8c7bcbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c7bcb: mov ebx, dword ptr [esi + 0x68] */
  ebx = R32((uint32_t)(esi + 0x68u));
/* 8c7bce: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 8c7bd1: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8c7bd3: mov ebx, dword ptr [0xcfa598] */
  ebx = R32((uint32_t)(0xcfa598u));
/* 8c7bd9: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8c7bdc: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8c7bdf: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c7be2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c7be3: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8c7be6: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 8c7be9: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8c7bec: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8c7beeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c7bee: fild dword ptr [esi + 0x6c] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x6cu)); FPUSH(v); }
/* 8c7bf1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c7bf4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c7bf5: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8c7bf8: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 8c7bfb: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8c7bfe: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8c7c00u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c7c00: mov edi, dword ptr [esi + 0x6c] */
  edi = R32((uint32_t)(esi + 0x6cu));
/* 8c7c03: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8c7c06: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* 8c7c09: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c7c0b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8c7c0e: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8c7c11: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c7c14: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c7c15: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 8c7c18: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8c7c1b: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8c7c1du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c7c1d: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8c7c20: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c7c23: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
L_8c7c26: /* 8c7c26: cmp ebx, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c7c29: jg 0x8c7c65 */
  if ((!zf && sf == of)) goto L_8c7c65;
L_8c7c2b: /* 8c7c2b: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8c7c2e: mov edi, edi */
  edi = edi;
L_8c7c30: /* 8c7c30: cmp edi, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c7c33: jg 0x8c7c62 */
  if ((!zf && sf == of)) goto L_8c7c62;
L_8c7c35: /* 8c7c35: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8c7c38: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c7c39: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8c7c3c: push -2 */
  { uint32_t v = 0xfffffffeu; esp -= 4; W32(esp, v); }
/* 8c7c3e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c7c3f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c7c40: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8c7c45u); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8c7c45: cmp al, byte ptr [ebp + 0xc] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebp + 0xcu)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8c7c48: je 0x8c7c5f */
  if (zf) goto L_8c7c5f;
L_8c7c4a: /* 8c7c4a: xor eax, eax */
  eax = 0;
/* 8c7c4c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8c7c4f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8c7c56: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c7c57: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c7c58: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c7c59: mov esp, ebp */
  esp = ebp;
/* 8c7c5b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c7c5c: ret 8 */
  esp += 12; SPILL(); return;
L_8c7c5f: /* 8c7c5f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8c7c60: jmp 0x8c7c30 */
  goto L_8c7c30;
L_8c7c62: /* 8c7c62: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8c7c63: jmp 0x8c7c26 */
  goto L_8c7c26;
L_8c7c65: /* 8c7c65: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8c7c68: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c7c69: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c7c6a: mov eax, 1 */
  eax = 0x1u;
/* 8c7c6f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8c7c76: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c7c77: mov esp, ebp */
  esp = ebp;
/* 8c7c79: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c7c7a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8c7c7d(void) {
  LOAD_REGS();
L_8c7c7d: /* 8c7c7d: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8c7c80: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8c7c85: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8c7c88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c7c89: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 8c7c8c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8c7c91u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8c7c91(); return;
}

void f_8c7c91(void) {
  LOAD_REGS();
L_8c7c91: /* 8c7c91: push 0xa1c060 */
  { uint32_t v = 0xa1c060u; esp -= 4; W32(esp, v); }
/* 8c7c96: push 0xaec884 */
  { uint32_t v = 0xaec884u; esp -= 4; W32(esp, v); }
/* 8c7c9b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8c7ca1u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8c7ca1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c7ca4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c7ca6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c7ca8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8c7cadu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8c7cad: guest_badaddr(0x8c7cad); return;
}

void f_8c7d00(void) {
  LOAD_REGS();
L_8c7d00: /* 8c7d00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8c7d01: mov ebp, esp */
  ebp = esp;
/* 8c7d03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8c7d05: push 0x9d7be0 */
  { uint32_t v = 0x9d7be0u; esp -= 4; W32(esp, v); }
/* 8c7d0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8c7d10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c7d11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8c7d18: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c7d1b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8c7d1e: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 8c7d21: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c7d22: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c7d23: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c7d24: mov edi, ecx */
  edi = ecx;
/* 8c7d26: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* 8c7d29: mov esi, dword ptr [eax + ecx + 0x354] */
  esi = R32((uint32_t)(eax + ecx + 0x354u));
/* 8c7d30: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c7d32: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8c7d35: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8c7d3c: jne 0x8c7d56 */
  if (!zf) goto L_8c7d56;
L_8c7d3e: /* 8c7d3e: push 0xa9 */
  { uint32_t v = 0xa9u; esp -= 4; W32(esp, v); }
/* 8c7d43: push 0xaed0b0 */
  { uint32_t v = 0xaed0b0u; esp -= 4; W32(esp, v); }
/* 8c7d48: push 0xaed0a4 */
  { uint32_t v = 0xaed0a4u; esp -= 4; W32(esp, v); }
/* 8c7d4d: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8c7d53u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8c7d53: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8c7d56: /* 8c7d56: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8c7d59: cmp edx, dword ptr [esi + 0x44] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x44u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8c7d5c: je 0x8c7d76 */
  if (zf) goto L_8c7d76;
L_8c7d5e: /* 8c7d5e: push 0xaa */
  { uint32_t v = 0xaau; esp -= 4; W32(esp, v); }
/* 8c7d63: push 0xaed0b0 */
  { uint32_t v = 0xaed0b0u; esp -= 4; W32(esp, v); }
/* 8c7d68: push 0xaed078 */
  { uint32_t v = 0xaed078u; esp -= 4; W32(esp, v); }
/* 8c7d6d: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8c7d73u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8c7d73: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8c7d76: /* 8c7d76: fild dword ptr [esi + 0x40] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x40u)); FPUSH(v); }
/* 8c7d79: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* 8c7d7c: fild dword ptr [ecx + 0x128c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x128cu)); FPUSH(v); }
/* 8c7d82: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8c7d84: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8c7d86: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c7d88: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8c7d8b: jp 0x8c7eaf */
  if (pf) goto L_8c7eaf;
L_8c7d91: /* 8c7d91: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8c7d94: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8c7d96: mov ebx, dword ptr [edi + 0x68] */
  ebx = R32((uint32_t)(edi + 0x68u));
/* 8c7d99: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8c7d9b: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 8c7d9e: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8c7da0: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 8c7da3: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c7da5: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8c7da8: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 8c7dab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c7dac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c7dae: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8c7db1: push -2 */
  { uint32_t v = 0xfffffffeu; esp -= 4; W32(esp, v); }
/* 8c7db3: je 0x8c7e41 */
  if (zf) goto L_8c7e41;
L_8c7db9: /* 8c7db9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c7dbb: je 0x8c7e12 */
  if (zf) goto L_8c7e12;
L_8c7dbd: /* 8c7dbd: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8c7dc0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8c7dc1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c7dc2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c7dc3: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8c7dc8u); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8c7dc8: cmp al, byte ptr [ebp + 0x1c] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebp + 0x1cu)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8c7dcb: jne 0x8c7dfd */
  if (!zf) goto L_8c7dfd;
L_8c7dcd: /* 8c7dcd: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8c7dd0: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* 8c7dd3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c7dd4: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8c7dd5: push -2 */
  { uint32_t v = 0xfffffffeu; esp -= 4; W32(esp, v); }
/* 8c7dd7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8c7dd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c7dd9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c7dda: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8c7ddfu); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8c7ddf: cmp al, byte ptr [ebp + 0x1c] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebp + 0x1cu)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8c7de2: jne 0x8c7dfd */
  if (!zf) goto L_8c7dfd;
L_8c7de4: /* 8c7de4: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8c7de7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c7de8: push -2 */
  { uint32_t v = 0xfffffffeu; esp -= 4; W32(esp, v); }
/* 8c7dea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_8c7deb: /* 8c7deb: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* 8c7dee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c7def: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8c7df4u); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8c7df4: cmp al, byte ptr [ebp + 0x1c] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebp + 0x1cu)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8c7df7: je 0x8c8072 */
  if (zf) goto L_8c8072;
L_8c7dfd: /* 8c7dfd: xor eax, eax */
  eax = 0;
/* 8c7dff: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8c7e02: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8c7e09: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c7e0a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c7e0b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c7e0c: mov esp, ebp */
  esp = ebp;
/* 8c7e0e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c7e0f: ret 0x18 */
  esp += 28; SPILL(); return;
L_8c7e12: /* 8c7e12: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8c7e15: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c7e16: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c7e17: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8c7e1cu); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8c7e1c: cmp al, byte ptr [ebp + 0x1c] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebp + 0x1cu)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8c7e1f: jne 0x8c7dfd */
  if (!zf) goto L_8c7dfd;
L_8c7e21: /* 8c7e21: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8c7e24: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* 8c7e27: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c7e28: push -2 */
  { uint32_t v = 0xfffffffeu; esp -= 4; W32(esp, v); }
/* 8c7e2a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8c7e2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c7e2c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c7e2d: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8c7e32u); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8c7e32: cmp al, byte ptr [ebp + 0x1c] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebp + 0x1cu)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8c7e35: jne 0x8c7dfd */
  if (!zf) goto L_8c7dfd;
L_8c7e37: /* 8c7e37: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8c7e3a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c7e3b: push -2 */
  { uint32_t v = 0xfffffffeu; esp -= 4; W32(esp, v); }
/* 8c7e3d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c7e3e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8c7e3f: jmp 0x8c7deb */
  goto L_8c7deb;
L_8c7e41: /* 8c7e41: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c7e43: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8c7e46: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c7e47: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c7e48: je 0x8c7e77 */
  if (zf) goto L_8c7e77;
L_8c7e4a: /* 8c7e4a: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8c7e4fu); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8c7e4f: cmp al, byte ptr [ebp + 0x1c] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebp + 0x1cu)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8c7e52: jne 0x8c7dfd */
  if (!zf) goto L_8c7dfd;
L_8c7e54: /* 8c7e54: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8c7e57: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* 8c7e5a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c7e5b: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8c7e5c: push -2 */
  { uint32_t v = 0xfffffffeu; esp -= 4; W32(esp, v); }
/* 8c7e5e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8c7e5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c7e60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c7e61: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8c7e66u); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8c7e66: cmp al, byte ptr [ebp + 0x1c] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebp + 0x1cu)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8c7e69: jne 0x8c7dfd */
  if (!zf) goto L_8c7dfd;
L_8c7e6b: /* 8c7e6b: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8c7e6e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c7e6f: push -2 */
  { uint32_t v = 0xfffffffeu; esp -= 4; W32(esp, v); }
/* 8c7e71: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c7e72: jmp 0x8c7deb */
  goto L_8c7deb;
L_8c7e77: /* 8c7e77: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8c7e7cu); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8c7e7c: cmp al, byte ptr [ebp + 0x1c] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebp + 0x1cu)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8c7e7f: jne 0x8c7dfd */
  if (!zf) goto L_8c7dfd;
L_8c7e85: /* 8c7e85: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8c7e88: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* 8c7e8b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c7e8c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8c7e8d: push -2 */
  { uint32_t v = 0xfffffffeu; esp -= 4; W32(esp, v); }
/* 8c7e8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c7e90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c7e91: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 8c7e94: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8c7e99u); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8c7e99: cmp al, byte ptr [ebp + 0x1c] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebp + 0x1cu)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8c7e9c: jne 0x8c7dfd */
  if (!zf) goto L_8c7dfd;
L_8c7ea2: /* 8c7ea2: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8c7ea5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c7ea6: push -2 */
  { uint32_t v = 0xfffffffeu; esp -= 4; W32(esp, v); }
/* 8c7ea8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c7ea9: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8c7eaa: jmp 0x8c7deb */
  goto L_8c7deb;
L_8c7eaf: /* 8c7eaf: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8c7eb1: mov ecx, dword ptr [edi + 0x68] */
  ecx = R32((uint32_t)(edi + 0x68u));
/* 8c7eb4: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 8c7eb6: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 8c7eb9: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8c7ebb: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8c7ebe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c7ebf: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 8c7ec2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8c7ec4: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8c7ec7: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 8c7eca: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8c7ecd: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x8c7ed3u); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 8c7ed3: mov edx, dword ptr [edi + 0x68] */
  edx = R32((uint32_t)(edi + 0x68u));
/* 8c7ed6: mov ebx, eax */
  ebx = eax;
/* 8c7ed8: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8c7edb: lea ecx, [edx + eax + 1] */
  ecx = (uint32_t)(edx + eax + 0x1u);
/* 8c7edf: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 8c7ee2: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8c7ee5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c7ee8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c7ee9: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 8c7eec: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8c7eef: call dword ptr [0xcfa598] */
  esp -= 4; W32(esp, 0x8c7ef5u); SPILL(); f_4e301c(); if (g_unwind) return; /* Core!?appCeil@@YAHM@Z */ RELOAD();
/* 8c7ef5: mov edx, dword ptr [edi + 0x6c] */
  edx = R32((uint32_t)(edi + 0x6cu));
/* 8c7ef8: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8c7efb: add edx, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8c7efe: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 8c7f01: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8c7f04: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c7f07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c7f08: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 8c7f0b: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8c7f0e: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x8c7f14u); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 8c7f14: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8c7f17: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8c7f1a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8c7f1d: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c7f1f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c7f22: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c7f24: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 8c7f27: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 8c7f2a: je 0x8c7fd4 */
  if (zf) goto L_8c7fd4;
L_8c7f30: /* 8c7f30: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c7f32: je 0x8c7f82 */
  if (zf) goto L_8c7f82;
L_8c7f34: /* 8c7f34: xor ecx, ecx */
  ecx = 0;
L_8c7f36: /* 8c7f36: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c7f38: mov dword ptr [ebp + 0x18], ecx */
  W32((uint32_t)(ebp + 0x18u), ecx);
/* 8c7f3b: jg 0x8c8072 */
  if ((!zf && sf == of)) goto L_8c8072;
L_8c7f41: /* 8c7f41: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
L_8c7f44: /* 8c7f44: mov edx, eax */
  edx = eax;
/* 8c7f46: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 8c7f48: cmp dword ptr [ebp + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c7f4b: jl 0x8c7f7f */
  if ((sf != of)) goto L_8c7f7f;
L_8c7f4d: /* 8c7f4d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8c7f50: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8c7f53: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 8c7f56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c7f57: push -2 */
  { uint32_t v = 0xfffffffeu; esp -= 4; W32(esp, v); }
/* 8c7f59: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c7f5b: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* 8c7f5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c7f5f: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8c7f61: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c7f62: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8c7f67u); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8c7f67: cmp al, byte ptr [ebp + 0x1c] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebp + 0x1cu)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8c7f6a: jne 0x8c7dfd */
  if (!zf) goto L_8c7dfd;
L_8c7f70: /* 8c7f70: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8c7f73: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8c7f76: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8c7f77: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 8c7f7a: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8c7f7d: jmp 0x8c7f44 */
  goto L_8c7f44;
L_8c7f7f: /* 8c7f7f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8c7f80: jmp 0x8c7f36 */
  goto L_8c7f36;
L_8c7f82: /* 8c7f82: xor ecx, ecx */
  ecx = 0;
L_8c7f84: /* 8c7f84: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c7f86: mov dword ptr [ebp + 0x18], ecx */
  W32((uint32_t)(ebp + 0x18u), ecx);
/* 8c7f89: jg 0x8c8072 */
  if ((!zf && sf == of)) goto L_8c8072;
L_8c7f8f: /* 8c7f8f: mov dword ptr [ebp + 0x14], 0 */
  W32((uint32_t)(ebp + 0x14u), 0x0u);
L_8c7f96: /* 8c7f96: mov edx, eax */
  edx = eax;
/* 8c7f98: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 8c7f9a: cmp dword ptr [ebp + 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c7f9d: jg 0x8c7fd1 */
  if ((!zf && sf == of)) goto L_8c7fd1;
L_8c7f9f: /* 8c7f9f: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8c7fa2: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8c7fa5: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 8c7fa8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c7fa9: push -2 */
  { uint32_t v = 0xfffffffeu; esp -= 4; W32(esp, v); }
/* 8c7fab: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c7fad: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* 8c7fb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c7fb1: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8c7fb3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c7fb4: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8c7fb9u); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8c7fb9: cmp al, byte ptr [ebp + 0x1c] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebp + 0x1cu)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8c7fbc: jne 0x8c7dfd */
  if (!zf) goto L_8c7dfd;
L_8c7fc2: /* 8c7fc2: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8c7fc5: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8c7fc8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8c7fc9: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 8c7fcc: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8c7fcf: jmp 0x8c7f96 */
  goto L_8c7f96;
L_8c7fd1: /* 8c7fd1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8c7fd2: jmp 0x8c7f84 */
  goto L_8c7f84;
L_8c7fd4: /* 8c7fd4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c7fd6: je 0x8c802b */
  if (zf) goto L_8c802b;
L_8c7fd8: /* 8c7fd8: xor ecx, ecx */
  ecx = 0;
L_8c7fda: /* 8c7fda: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c7fdc: mov dword ptr [ebp + 0x18], ecx */
  W32((uint32_t)(ebp + 0x18u), ecx);
/* 8c7fdf: jg 0x8c8072 */
  if ((!zf && sf == of)) goto L_8c8072;
L_8c7fe5: /* 8c7fe5: mov dword ptr [ebp + 0x14], 0 */
  W32((uint32_t)(ebp + 0x14u), 0x0u);
/* 8c7fec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8c7ff0: /* 8c7ff0: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 8c7ff3: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c7ff5: jg 0x8c8028 */
  if ((!zf && sf == of)) goto L_8c8028;
L_8c7ff7: /* 8c7ff7: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8c7ffa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c7ffb: mov eax, edx */
  eax = edx;
/* 8c7ffd: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 8c8000: push -2 */
  { uint32_t v = 0xfffffffeu; esp -= 4; W32(esp, v); }
/* 8c8002: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c8004: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* 8c8007: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c8008: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8c800a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c800b: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8c8010u); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8c8010: cmp al, byte ptr [ebp + 0x1c] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebp + 0x1cu)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8c8013: jne 0x8c7dfd */
  if (!zf) goto L_8c7dfd;
L_8c8019: /* 8c8019: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8c801c: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8c801f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8c8020: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 8c8023: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8c8026: jmp 0x8c7ff0 */
  goto L_8c7ff0;
L_8c8028: /* 8c8028: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8c8029: jmp 0x8c7fda */
  goto L_8c7fda;
L_8c802b: /* 8c802b: xor ecx, ecx */
  ecx = 0;
L_8c802d: /* 8c802d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c802f: mov dword ptr [ebp + 0x18], ecx */
  W32((uint32_t)(ebp + 0x18u), ecx);
/* 8c8032: jg 0x8c8072 */
  if ((!zf && sf == of)) goto L_8c8072;
L_8c8034: /* 8c8034: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
L_8c8037: /* 8c8037: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 8c803a: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c803c: jl 0x8c806f */
  if ((sf != of)) goto L_8c806f;
L_8c803e: /* 8c803e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8c8041: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c8042: mov eax, edx */
  eax = edx;
/* 8c8044: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 8c8047: push -2 */
  { uint32_t v = 0xfffffffeu; esp -= 4; W32(esp, v); }
/* 8c8049: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c804b: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* 8c804e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c804f: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8c8051: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c8052: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8c8057u); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8c8057: cmp al, byte ptr [ebp + 0x1c] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebp + 0x1cu)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8c805a: jne 0x8c7dfd */
  if (!zf) goto L_8c7dfd;
L_8c8060: /* 8c8060: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8c8063: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8c8066: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8c8067: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 8c806a: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8c806d: jmp 0x8c8037 */
  goto L_8c8037;
L_8c806f: /* 8c806f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8c8070: jmp 0x8c802d */
  goto L_8c802d;
L_8c8072: /* 8c8072: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8c8075: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c8076: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c8077: mov eax, 1 */
  eax = 0x1u;
/* 8c807c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8c8083: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c8084: mov esp, ebp */
  esp = ebp;
/* 8c8086: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c8087: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_8c808a(void) {
  LOAD_REGS();
L_8c808a: /* 8c808a: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8c808d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8c8092: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 8c8095: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c8096: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8c8099: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8c809eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8c809e(); return;
}

void f_8c809e(void) {
  LOAD_REGS();
L_8c809e: /* 8c809e: push 0xa1c0a4 */
  { uint32_t v = 0xa1c0a4u; esp -= 4; W32(esp, v); }
/* 8c80a3: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8c80a8: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8c80aeu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8c80ae: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c80b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c80b3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c80b5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8c80bau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8c80ba: guest_badaddr(0x8c80ba); return;
}

void f_8c81b0(void) {
  LOAD_REGS();
L_8c81b0: /* 8c81b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8c81b1: mov ebp, esp */
  ebp = esp;
/* 8c81b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8c81b5: push 0x9d7bf0 */
  { uint32_t v = 0x9d7bf0u; esp -= 4; W32(esp, v); }
/* 8c81ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8c81c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c81c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8c81c8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c81cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c81cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c81cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c81ce: mov esi, ecx */
  esi = ecx;
/* 8c81d0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8c81d3: mov edi, dword ptr [esi + 0x28] */
  edi = R32((uint32_t)(esi + 0x28u));
/* 8c81d6: lea eax, [ecx + ecx*8] */
  eax = (uint32_t)(ecx + ecx*8);
/* 8c81d9: lea eax, [edi + eax*4] */
  eax = (uint32_t)(edi + eax*4);
/* 8c81dc: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 8c81df: mov edi, dword ptr [esi + 0x40] */
  edi = R32((uint32_t)(esi + 0x40u));
/* 8c81e2: mov edi, dword ptr [edi + 0x1340] */
  edi = R32((uint32_t)(edi + 0x1340u));
/* 8c81e8: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8c81eb: lea edi, [edi + eax*4] */
  edi = (uint32_t)(edi + eax*4);
/* 8c81ee: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 8c81f1: xor edx, edx */
  edx = 0;
/* 8c81f3: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8c81f6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8c81f9: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 8c81fc: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 8c81ff: jne 0x8c82eb */
  if (!zf) goto L_8c82eb;
L_8c8205: /* 8c8205: xor ebx, ebx */
  ebx = 0;
L_8c8207: /* 8c8207: cmp ebx, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c820a: jge 0x8c8232 */
  if ((sf == of)) goto L_8c8232;
L_8c820c: /* 8c820c: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8c820f: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 8c8212: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8c8215: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c8217: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c8218: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8c821b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c821c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8c821e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c821f: mov eax, dword ptr [edx + ebx*4] */
  eax = R32((uint32_t)(edx + ebx*4));
/* 8c8222: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c8223: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c8224: mov ecx, esi */
  ecx = esi;
/* 8c8226: call 0x6c346d */
  esp -= 4; W32(esp, 0x8c822bu); SPILL(); f_6c346d(); if (g_unwind) return; RELOAD();
/* 8c822b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c822d: je 0x8c823f */
  if (zf) goto L_8c823f;
L_8c822f: /* 8c822f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8c8230: jmp 0x8c8207 */
  goto L_8c8207;
L_8c8232: /* 8c8232: mov eax, 1 */
  eax = 0x1u;
/* 8c8237: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c8239: jne 0x8c83e6 */
  if (!zf) goto L_8c83e6;
L_8c823f: /* 8c823f: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8c8242: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 8c8245: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8c8246: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c8248: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 8c824b: jge 0x8c82d3 */
  if ((sf == of)) goto L_8c82d3;
L_8c8251: /* 8c8251: xor ebx, ebx */
  ebx = 0;
L_8c8253: /* 8c8253: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8c8256: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8c8259: lea edi, [edi + edi*8] */
  edi = (uint32_t)(edi + edi*8);
/* 8c825c: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8c825f: mov eax, dword ptr [edi + edx + 4] */
  eax = R32((uint32_t)(edi + edx + 0x4u));
/* 8c8263: mov edx, dword ptr [ecx + 0x1340] */
  edx = R32((uint32_t)(ecx + 0x1340u));
/* 8c8269: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8c826c: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 8c826f: cmp ebx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c8272: jge 0x8c823f */
  if ((sf == of)) goto L_8c823f;
L_8c8274: /* 8c8274: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8c8276: mov edx, dword ptr [eax + ebx*4] */
  edx = R32((uint32_t)(eax + ebx*4));
/* 8c8279: imul edx, edx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x78u);
  edx = (uint32_t)r;
  }
/* 8c827c: mov ecx, dword ptr [edx + ecx + 0x350] */
  ecx = R32((uint32_t)(edx + ecx + 0x350u));
/* 8c8283: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8c8285: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0x8c828bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c828b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c828d: jne 0x8c82cd */
  if (!zf) goto L_8c82cd;
L_8c828f: /* 8c828f: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8c8292: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 8c8295: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8c8298: push 0xff */
  { uint32_t v = 0xffu; esp -= 4; W32(esp, v); }
/* 8c829d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c829e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8c82a1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c82a2: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 8c82a5: mov edi, dword ptr [edi + edx + 4] */
  edi = R32((uint32_t)(edi + edx + 0x4u));
/* 8c82a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c82aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c82ab: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8c82ae: mov edx, dword ptr [ecx + 0x1340] */
  edx = R32((uint32_t)(ecx + 0x1340u));
/* 8c82b4: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* 8c82b7: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 8c82ba: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* 8c82bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c82be: mov ecx, esi */
  ecx = esi;
/* 8c82c0: call 0x6c346d */
  esp -= 4; W32(esp, 0x8c82c5u); SPILL(); f_6c346d(); if (g_unwind) return; RELOAD();
/* 8c82c5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c82c7: jne 0x8c83e6 */
  if (!zf) goto L_8c83e6;
L_8c82cd: /* 8c82cd: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8c82d0: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8c82d1: jmp 0x8c8253 */
  goto L_8c8253;
L_8c82d3: /* 8c82d3: mov eax, 1 */
  eax = 0x1u;
/* 8c82d8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8c82db: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8c82e2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c82e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c82e4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c82e5: mov esp, ebp */
  esp = ebp;
/* 8c82e7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c82e8: ret 0x14 */
  esp += 24; SPILL(); return;
L_8c82eb: /* 8c82eb: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8c82ed: je 0x8c82d3 */
  if (zf) goto L_8c82d3;
L_8c82ef: /* 8c82ef: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 8c82f2: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8c82f5: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8c82f8: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c82fa: mov ebx, dword ptr [esi + 0x6c] */
  ebx = R32((uint32_t)(esi + 0x6cu));
/* 8c82fd: mov byte ptr [ebp + 8], 0 */
  W8((uint32_t)(ebp + 0x8u), 0x0u);
/* 8c8301: mov byte ptr [ebp + 9], 0 */
  W8((uint32_t)(ebp + 0x9u), 0x0u);
/* 8c8305: mov byte ptr [ebp + 0xa], 0 */
  W8((uint32_t)(ebp + 0xau), 0x0u);
/* 8c8309: mov byte ptr [ebp + 0xb], 0xff */
  W8((uint32_t)(ebp + 0xbu), 0xffu);
/* 8c830d: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8c8310: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8c8312: mov dword ptr [ebp + 0x10], edx */
  W32((uint32_t)(ebp + 0x10u), edx);
L_8c8315: /* 8c8315: cmp edx, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c8318: jge 0x8c83e6 */
  if ((sf == of)) goto L_8c83e6;
L_8c831e: /* 8c831e: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 8c8320: mov edx, dword ptr [edi + edx*4] */
  edx = R32((uint32_t)(edi + edx*4));
/* 8c8323: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8c8326: imul edx, edx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x78u);
  edx = (uint32_t)r;
  }
/* 8c8329: mov edi, dword ptr [edx + ecx + 0x3c4] */
  edi = R32((uint32_t)(edx + ecx + 0x3c4u));
/* 8c8330: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c8331: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c8332: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c8333: lea eax, [ebp + 0x18] */
  eax = (uint32_t)(ebp + 0x18u);
/* 8c8336: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c8337: call 0x6c16e5 */
  esp -= 4; W32(esp, 0x8c833cu); SPILL(); f_6c16e5(); if (g_unwind) return; RELOAD();
/* 8c833c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8c833f: cmp dword ptr [eax], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8c8341: jne 0x8c82d3 */
  if (!zf) goto L_8c82d3;
L_8c8343: /* 8c8343: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8c8346: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8c8349: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c834a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c834b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8c834c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c834d: lea edx, [ebp + 0x14] */
  edx = (uint32_t)(ebp + 0x14u);
/* 8c8350: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c8351: call 0x6c16e5 */
  esp -= 4; W32(esp, 0x8c8356u); SPILL(); f_6c16e5(); if (g_unwind) return; RELOAD();
/* 8c8356: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8c8359: cmp dword ptr [eax], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8c835b: jne 0x8c82d3 */
  if (!zf) goto L_8c82d3;
L_8c8361: /* 8c8361: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8c8364: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c8365: lea eax, [ebx + 1] */
  eax = (uint32_t)(ebx + 0x1u);
/* 8c8368: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c8369: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8c836c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8c836d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c836e: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 8c8371: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c8372: call 0x6c16e5 */
  esp -= 4; W32(esp, 0x8c8377u); SPILL(); f_6c16e5(); if (g_unwind) return; RELOAD();
/* 8c8377: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8c837a: cmp dword ptr [eax], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8c837c: jne 0x8c82d3 */
  if (!zf) goto L_8c82d3;
L_8c8382: /* 8c8382: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8c8385: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8c8388: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c8389: lea eax, [ebx + 1] */
  eax = (uint32_t)(ebx + 0x1u);
/* 8c838c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c838d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c838e: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 8c8391: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c8392: call 0x6c16e5 */
  esp -= 4; W32(esp, 0x8c8397u); SPILL(); f_6c16e5(); if (g_unwind) return; RELOAD();
/* 8c8397: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8c839a: cmp dword ptr [eax], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8c839c: jne 0x8c82d3 */
  if (!zf) goto L_8c82d3;
L_8c83a2: /* 8c83a2: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8c83a5: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8c83a8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8c83a9: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 8c83ac: mov edx, eax */
  edx = eax;
/* 8c83ae: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8c83b1: jmp 0x8c8315 */
  goto L_8c8315;
L_8c83e6: /* 8c83e6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8c83e9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c83ea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c83eb: xor eax, eax */
  eax = 0;
/* 8c83ed: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8c83f4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c83f5: mov esp, ebp */
  esp = ebp;
/* 8c83f7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c83f8: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_8c83b6(void) {
  LOAD_REGS();
L_8c83b6: /* 8c83b6: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8c83b9: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8c83be: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 8c83c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c83c2: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8c83c5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8c83cau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8c83ca(); return;
}

void f_8c83ca(void) {
  LOAD_REGS();
L_8c83ca: /* 8c83ca: push 0xa1c0f0 */
  { uint32_t v = 0xa1c0f0u; esp -= 4; W32(esp, v); }
/* 8c83cf: push 0xaec88c */
  { uint32_t v = 0xaec88cu; esp -= 4; W32(esp, v); }
/* 8c83d4: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8c83dau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8c83da: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c83dd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c83df: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c83e1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8c83e6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8c83e6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8c83e9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c83ea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c83eb: xor eax, eax */
  eax = 0;
/* 8c83ed: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8c83f4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c83f5: mov esp, ebp */
  esp = ebp;
/* 8c83f7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c83f8: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_8c84a0(void) {
  LOAD_REGS();
L_8c84a0: /* 8c84a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8c84a4: sub esp, 0x94 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c84aa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c84ac: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c84ad: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8c84ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c84af: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c84b0: mov esi, ecx */
  esi = ecx;
/* 8c84b2: jne 0x8c84ea */
  if (!zf) goto L_8c84ea;
L_8c84b4: /* 8c84b4: mov edi, dword ptr [esi + 0x38] */
  edi = R32((uint32_t)(esi + 0x38u));
/* 8c84b7: xor ecx, ecx */
  ecx = 0;
/* 8c84b9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c84bb: jle 0x8c87d6 */
  if ((zf || sf != of)) goto L_8c87d6;
L_8c84c1: /* 8c84c1: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
L_8c84c4: /* 8c84c4: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8c84c6: mov eax, dword ptr [eax + 0x80] */
  eax = R32((uint32_t)(eax + 0x80u));
/* 8c84cc: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c84cf: jne 0x8c84ea */
  if (!zf) goto L_8c84ea;
L_8c84d1: /* 8c84d1: test al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c84d3: jne 0x8c84ea */
  if (!zf) goto L_8c84ea;
L_8c84d5: /* 8c84d5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8c84d6: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8c84d9: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c84db: jl 0x8c84c4 */
  if ((sf != of)) goto L_8c84c4;
L_8c84dd: /* 8c84dd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c84de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c84df: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c84e0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c84e1: add esp, 0x94 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c84e7: ret 4 */
  esp += 8; SPILL(); return;
L_8c84ea: /* 8c84ea: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8c84ed: mov eax, dword ptr [ecx + 0xc0] */
  eax = R32((uint32_t)(ecx + 0xc0u));
/* 8c84f3: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 8c84f9: push 0x3f000000 */
  { uint32_t v = 0x3f000000u; esp -= 4; W32(esp, v); }
/* 8c84fe: lea edx, [esp + 0x30] */
  edx = (uint32_t)(esp + 0x30u);
/* 8c8502: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c8503: mov edx, dword ptr [ecx + 0x4a0] */
  edx = R32((uint32_t)(ecx + 0x4a0u));
/* 8c8509: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c850a: xor edx, edx */
  edx = 0;
/* 8c850c: mov dl, byte ptr [eax + 0x374] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x374u))) & 0xffu);
/* 8c8512: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 8c8516: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c8517: xor ecx, ecx */
  ecx = 0;
/* 8c8519: mov cl, byte ptr [eax + 0x376] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x376u))) & 0xffu);
/* 8c851f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c8520: xor edx, edx */
  edx = 0;
/* 8c8522: mov dl, byte ptr [eax + 0x375] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x375u))) & 0xffu);
/* 8c8528: lea eax, [esp + 0x64] */
  eax = (uint32_t)(esp + 0x64u);
/* 8c852c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c852d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c852e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c852f: call 0x6c3954 */
  esp -= 4; W32(esp, 0x8c8534u); SPILL(); f_6c3954(); if (g_unwind) return; RELOAD();
/* 8c8534: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c8537: mov ecx, eax */
  ecx = eax;
/* 8c8539: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x8c853fu); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 8c853f: mov ecx, eax */
  ecx = eax;
/* 8c8541: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x8c8547u); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 8c8547: mov ebp, dword ptr [esi + 0x64] */
  ebp = R32((uint32_t)(esi + 0x64u));
/* 8c854a: mov ecx, dword ptr [esi + 0x60] */
  ecx = R32((uint32_t)(esi + 0x60u));
/* 8c854d: mov edi, dword ptr [esi + 0x8c] */
  edi = R32((uint32_t)(esi + 0x8cu));
/* 8c8553: movzx eax, word ptr [esi + 0x90] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0x90u)));
/* 8c855a: imul edi, edi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x1cu);
  edi = (uint32_t)r;
  }
/* 8c855d: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8c8560: mov ebx, dword ptr [edx + 0x134c] */
  ebx = R32((uint32_t)(edx + 0x134cu));
/* 8c8566: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 8c8567: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8c8568: imul ebp, ecx */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(ecx);
  ebp = (uint32_t)r;
  }
/* 8c856b: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8c856d: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8c856f: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c8571: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 8c8575: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* 8c8579: jge 0x8c8630 */
  if ((sf == of)) goto L_8c8630;
L_8c857f: /* 8c857f: lea ebx, [eax + eax*8] */
  ebx = (uint32_t)(eax + eax*8);
/* 8c8582: mov ecx, ebp */
  ecx = ebp;
/* 8c8584: shl ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 8c8587: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8c8589: mov byte ptr [esp + 0x13], 0xff */
  W8((uint32_t)(esp + 0x13u), 0xffu);
/* 8c858e: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 8c8592: jmp 0x8c85a0 */
  goto L_8c85a0;
L_8c85a0: /* 8c85a0: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 8c85a4: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 8c85aa: call 0x99c958 */
  esp -= 4; W32(esp, 0x8c85afu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8c85af: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c85b4: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 8c85b8: jle 0x8c85c2 */
  if ((zf || sf != of)) goto L_8c85c2;
L_8c85ba: /* 8c85ba: mov dword ptr [esp + 0x14], 0xff */
  W32((uint32_t)(esp + 0x14u), 0xffu);
L_8c85c2: /* 8c85c2: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 8c85c6: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 8c85cc: call 0x99c958 */
  esp -= 4; W32(esp, 0x8c85d1u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8c85d1: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c85d6: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 8c85da: jle 0x8c85e4 */
  if ((zf || sf != of)) goto L_8c85e4;
L_8c85dc: /* 8c85dc: mov dword ptr [esp + 0x18], 0xff */
  W32((uint32_t)(esp + 0x18u), 0xffu);
L_8c85e4: /* 8c85e4: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 8c85e8: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 8c85ee: call 0x99c958 */
  esp -= 4; W32(esp, 0x8c85f3u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8c85f3: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c85f8: jle 0x8c85ff */
  if ((zf || sf != of)) goto L_8c85ff;
L_8c85fa: /* 8c85fa: mov eax, 0xff */
  eax = 0xffu;
L_8c85ff: /* 8c85ff: mov cl, byte ptr [esp + 0x14] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x14u))) & 0xffu);
/* 8c8603: mov dl, byte ptr [esp + 0x18] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x18u))) & 0xffu);
/* 8c8607: mov byte ptr [esp + 0x12], al */
  W8((uint32_t)(esp + 0x12u), (eax & 0xffu));
/* 8c860b: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 8c860e: mov byte ptr [esp + 0x10], cl */
  W8((uint32_t)(esp + 0x10u), (ecx & 0xffu));
/* 8c8612: mov byte ptr [esp + 0x11], dl */
  W8((uint32_t)(esp + 0x11u), (edx & 0xffu));
/* 8c8616: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8c861a: mov dword ptr [eax + ebx + 0x18], ecx */
  W32((uint32_t)(eax + ebx + 0x18u), ecx);
/* 8c861e: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 8c8622: add ebx, 0x24 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8c8625: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 8c8626: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 8c862a: jne 0x8c85a0 */
  if (!zf) goto L_8c85a0;
L_8c8630: /* 8c8630: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 8c8633: xor eax, eax */
  eax = 0;
/* 8c8635: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c8637: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 8c863b: jle 0x8c8760 */
  if ((zf || sf != of)) goto L_8c8760;
L_8c8641: /* 8c8641: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
L_8c8645: /* 8c8645: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 8c8648: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 8c864c: mov ecx, dword ptr [eax + edx] */
  ecx = R32((uint32_t)(eax + edx));
/* 8c864f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c8651: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c8652: lea ecx, [esp + 0x64] */
  ecx = (uint32_t)(esp + 0x64u);
/* 8c8656: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 8c865a: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 8c8662: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 8c8664: call 0x6c51f5 */
  esp -= 4; W32(esp, 0x8c8669u); SPILL(); f_6c51f5(); if (g_unwind) return; RELOAD();
/* 8c8669: movzx eax, word ptr [esi + 0x90] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0x90u)));
/* 8c8670: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c8672: jge 0x8c8741 */
  if ((sf == of)) goto L_8c8741;
L_8c8678: /* 8c8678: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 8c867c: lea ebp, [eax + eax*8] */
  ebp = (uint32_t)(eax + eax*8);
/* 8c867f: shl ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 8c8682: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8c8684: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 8c8688: jmp 0x8c8690 */
  goto L_8c8690;
L_8c8690: /* 8c8690: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 8c8694: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8c8697: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8c869b: test byte ptr [ecx + eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c869e: je 0x8c871f */
  if (zf) goto L_8c871f;
L_8c86a0: /* 8c86a0: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 8c86a3: lea edi, [edx + ebp] */
  edi = (uint32_t)(edx + ebp);
/* 8c86a6: push 0x3f000000 */
  { uint32_t v = 0x3f000000u; esp -= 4; W32(esp, v); }
/* 8c86ab: lea eax, [esp + 0x54] */
  eax = (uint32_t)(esp + 0x54u);
/* 8c86af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c86b0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c86b3: lea ecx, [edi + 0xc] */
  ecx = (uint32_t)(edi + 0xcu);
/* 8c86b6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8c86b8: mov edx, esp */
  edx = esp;
/* 8c86ba: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8c86bc: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8c86bf: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8c86c2: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8c86c5: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8c86c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c86cb: mov edx, edi */
  edx = edi;
/* 8c86cd: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8c86cf: mov eax, esp */
  eax = esp;
/* 8c86d1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8c86d3: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8c86d6: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8c86d9: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8c86dc: lea ecx, [esp + 0x80] */
  ecx = (uint32_t)(esp + 0x80u);
/* 8c86e3: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8c86e6: call 0x6c6b4a */
  esp -= 4; W32(esp, 0x8c86ebu); SPILL(); f_6c6b4a(); if (g_unwind) return; RELOAD();
/* 8c86eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c86ec: lea eax, [esp + 0x4c] */
  eax = (uint32_t)(esp + 0x4cu);
/* 8c86f0: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8c86f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c86f4: lea ecx, [esp + 0x78] */
  ecx = (uint32_t)(esp + 0x78u);
/* 8c86f8: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x8c86feu); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 8c86fe: mov ecx, eax */
  ecx = eax;
/* 8c8700: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x8c8706u); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 8c8706: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c8707: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 8c870b: call 0x6c576d */
  esp -= 4; W32(esp, 0x8c8710u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 8c8710: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8c8712: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c8713: lea ecx, [edi + 0x18] */
  ecx = (uint32_t)(edi + 0x18u);
/* 8c8716: call 0x6c8cd8 */
  esp -= 4; W32(esp, 0x8c871bu); SPILL(); f_6c8cd8(); if (g_unwind) return; RELOAD();
/* 8c871b: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
L_8c871f: /* 8c871f: shl bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = 1;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8c8721: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c8723: jne 0x8c872b */
  if (!zf) goto L_8c872b;
L_8c8725: /* 8c8725: inc dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x10u), r);
  }
/* 8c8729: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_8c872b: /* 8c872b: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 8c872f: add ebp, 0x24 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8c8732: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 8c8733: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 8c8737: jne 0x8c8690 */
  if (!zf) goto L_8c8690;
L_8c873d: /* 8c873d: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
L_8c8741: /* 8c8741: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 8c8745: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 8c8749: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 8c874c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8c874d: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8c8750: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c8752: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 8c8756: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 8c875a: jl 0x8c8645 */
  if ((sf != of)) goto L_8c8645;
L_8c8760: /* 8c8760: inc dword ptr [edi + 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x18u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edi + 0x18u), r);
  }
/* 8c8763: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* 8c8766: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c8768: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 8c8770: jl 0x8c87d6 */
  if ((sf != of)) goto L_8c87d6;
L_8c8772: /* 8c8772: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
L_8c8775: /* 8c8775: xor ecx, ecx */
  ecx = 0;
/* 8c8777: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c8779: jl 0x8c87c6 */
  if ((sf != of)) goto L_8c87c6;
L_8c877b: /* 8c877b: jmp 0x8c8780 */
  goto L_8c8780;
L_8c8780: /* 8c8780: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8c8783: lea ebx, [eax + 1] */
  ebx = (uint32_t)(eax + 0x1u);
/* 8c8786: imul ebx, dword ptr [esp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x10u)));
  ebx = (uint32_t)r;
  }
/* 8c878b: movzx eax, word ptr [esi + 0x90] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0x90u)));
/* 8c8792: mov ebp, ecx */
  ebp = ecx;
/* 8c8794: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8c8796: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 8c8799: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c879b: mov ebp, dword ptr [esi + 0x6c] */
  ebp = R32((uint32_t)(esi + 0x6cu));
/* 8c879e: add ebp, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8c87a2: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 8c87a5: imul ebp, dword ptr [edx + 0x128c] */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(R32((uint32_t)(edx + 0x128cu)));
  ebp = (uint32_t)r;
  }
/* 8c87ac: add ebp, dword ptr [esi + 0x68] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x68u)));
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8c87af: mov eax, dword ptr [ebx + eax*4 + 0x18] */
  eax = R32((uint32_t)(ebx + eax*4 + 0x18u));
/* 8c87b3: mov edx, dword ptr [edx + 0x1358] */
  edx = R32((uint32_t)(edx + 0x1358u));
/* 8c87b9: add ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8c87bb: mov dword ptr [edx + ebp*4], eax */
  W32((uint32_t)(edx + ebp*4), eax);
/* 8c87be: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 8c87c1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8c87c2: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c87c4: jle 0x8c8780 */
  if ((zf || sf != of)) goto L_8c8780;
L_8c87c6: /* 8c87c6: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8c87ca: mov edx, dword ptr [esi + 0x64] */
  edx = R32((uint32_t)(esi + 0x64u));
/* 8c87cd: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8c87ce: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c87d0: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 8c87d4: jle 0x8c8775 */
  if ((zf || sf != of)) goto L_8c8775;
L_8c87d6: /* 8c87d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c87d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c87d8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c87d9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c87da: add esp, 0x94 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c87e0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8c8594(void) {
  LOAD_REGS();
L_8c8594: /* 8c8594: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 8c859b: jmp 0x8c85a0 */
  goto L_8c85a0;
L_8c85a0: /* 8c85a0: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 8c85a4: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 8c85aa: call 0x99c958 */
  esp -= 4; W32(esp, 0x8c85afu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8c85af: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c85b4: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 8c85b8: jle 0x8c85c2 */
  if ((zf || sf != of)) goto L_8c85c2;
L_8c85ba: /* 8c85ba: mov dword ptr [esp + 0x14], 0xff */
  W32((uint32_t)(esp + 0x14u), 0xffu);
L_8c85c2: /* 8c85c2: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 8c85c6: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 8c85cc: call 0x99c958 */
  esp -= 4; W32(esp, 0x8c85d1u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8c85d1: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c85d6: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 8c85da: jle 0x8c85e4 */
  if ((zf || sf != of)) goto L_8c85e4;
L_8c85dc: /* 8c85dc: mov dword ptr [esp + 0x18], 0xff */
  W32((uint32_t)(esp + 0x18u), 0xffu);
L_8c85e4: /* 8c85e4: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 8c85e8: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 8c85ee: call 0x99c958 */
  esp -= 4; W32(esp, 0x8c85f3u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8c85f3: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c85f8: jle 0x8c85ff */
  if ((zf || sf != of)) goto L_8c85ff;
L_8c85fa: /* 8c85fa: mov eax, 0xff */
  eax = 0xffu;
L_8c85ff: /* 8c85ff: mov cl, byte ptr [esp + 0x14] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x14u))) & 0xffu);
/* 8c8603: mov dl, byte ptr [esp + 0x18] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x18u))) & 0xffu);
/* 8c8607: mov byte ptr [esp + 0x12], al */
  W8((uint32_t)(esp + 0x12u), (eax & 0xffu));
/* 8c860b: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 8c860e: mov byte ptr [esp + 0x10], cl */
  W8((uint32_t)(esp + 0x10u), (ecx & 0xffu));
/* 8c8612: mov byte ptr [esp + 0x11], dl */
  W8((uint32_t)(esp + 0x11u), (edx & 0xffu));
/* 8c8616: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8c861a: mov dword ptr [eax + ebx + 0x18], ecx */
  W32((uint32_t)(eax + ebx + 0x18u), ecx);
/* 8c861e: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 8c8622: add ebx, 0x24 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8c8625: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 8c8626: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 8c862a: jne 0x8c85a0 */
  if (!zf) goto L_8c85a0;
L_8c8630: /* 8c8630: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 8c8633: xor eax, eax */
  eax = 0;
/* 8c8635: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c8637: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 8c863b: jle 0x8c8760 */
  if ((zf || sf != of)) goto L_8c8760;
L_8c8641: /* 8c8641: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
L_8c8645: /* 8c8645: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 8c8648: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 8c864c: mov ecx, dword ptr [eax + edx] */
  ecx = R32((uint32_t)(eax + edx));
/* 8c864f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c8651: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c8652: lea ecx, [esp + 0x64] */
  ecx = (uint32_t)(esp + 0x64u);
/* 8c8656: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 8c865a: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 8c8662: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 8c8664: call 0x6c51f5 */
  esp -= 4; W32(esp, 0x8c8669u); SPILL(); f_6c51f5(); if (g_unwind) return; RELOAD();
/* 8c8669: movzx eax, word ptr [esi + 0x90] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0x90u)));
/* 8c8670: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c8672: jge 0x8c8741 */
  if ((sf == of)) goto L_8c8741;
L_8c8678: /* 8c8678: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 8c867c: lea ebp, [eax + eax*8] */
  ebp = (uint32_t)(eax + eax*8);
/* 8c867f: shl ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 8c8682: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8c8684: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 8c8688: jmp 0x8c8690 */
  goto L_8c8690;
L_8c8690: /* 8c8690: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 8c8694: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8c8697: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8c869b: test byte ptr [ecx + eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c869e: je 0x8c871f */
  if (zf) goto L_8c871f;
L_8c86a0: /* 8c86a0: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 8c86a3: lea edi, [edx + ebp] */
  edi = (uint32_t)(edx + ebp);
/* 8c86a6: push 0x3f000000 */
  { uint32_t v = 0x3f000000u; esp -= 4; W32(esp, v); }
/* 8c86ab: lea eax, [esp + 0x54] */
  eax = (uint32_t)(esp + 0x54u);
/* 8c86af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c86b0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c86b3: lea ecx, [edi + 0xc] */
  ecx = (uint32_t)(edi + 0xcu);
/* 8c86b6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8c86b8: mov edx, esp */
  edx = esp;
/* 8c86ba: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8c86bc: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8c86bf: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8c86c2: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8c86c5: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8c86c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c86cb: mov edx, edi */
  edx = edi;
/* 8c86cd: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8c86cf: mov eax, esp */
  eax = esp;
/* 8c86d1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8c86d3: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8c86d6: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8c86d9: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8c86dc: lea ecx, [esp + 0x80] */
  ecx = (uint32_t)(esp + 0x80u);
/* 8c86e3: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8c86e6: call 0x6c6b4a */
  esp -= 4; W32(esp, 0x8c86ebu); SPILL(); f_6c6b4a(); if (g_unwind) return; RELOAD();
/* 8c86eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c86ec: lea eax, [esp + 0x4c] */
  eax = (uint32_t)(esp + 0x4cu);
/* 8c86f0: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8c86f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c86f4: lea ecx, [esp + 0x78] */
  ecx = (uint32_t)(esp + 0x78u);
/* 8c86f8: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x8c86feu); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 8c86fe: mov ecx, eax */
  ecx = eax;
/* 8c8700: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x8c8706u); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 8c8706: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c8707: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 8c870b: call 0x6c576d */
  esp -= 4; W32(esp, 0x8c8710u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 8c8710: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8c8712: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c8713: lea ecx, [edi + 0x18] */
  ecx = (uint32_t)(edi + 0x18u);
/* 8c8716: call 0x6c8cd8 */
  esp -= 4; W32(esp, 0x8c871bu); SPILL(); f_6c8cd8(); if (g_unwind) return; RELOAD();
/* 8c871b: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
L_8c871f: /* 8c871f: shl bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = 1;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8c8721: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c8723: jne 0x8c872b */
  if (!zf) goto L_8c872b;
L_8c8725: /* 8c8725: inc dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x10u), r);
  }
/* 8c8729: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_8c872b: /* 8c872b: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 8c872f: add ebp, 0x24 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8c8732: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 8c8733: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 8c8737: jne 0x8c8690 */
  if (!zf) goto L_8c8690;
L_8c873d: /* 8c873d: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
L_8c8741: /* 8c8741: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 8c8745: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 8c8749: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 8c874c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8c874d: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8c8750: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c8752: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 8c8756: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 8c875a: jl 0x8c8645 */
  if ((sf != of)) goto L_8c8645;
L_8c8760: /* 8c8760: inc dword ptr [edi + 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x18u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edi + 0x18u), r);
  }
/* 8c8763: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* 8c8766: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c8768: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 8c8770: jl 0x8c87d6 */
  if ((sf != of)) goto L_8c87d6;
L_8c8772: /* 8c8772: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
L_8c8775: /* 8c8775: xor ecx, ecx */
  ecx = 0;
/* 8c8777: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c8779: jl 0x8c87c6 */
  if ((sf != of)) goto L_8c87c6;
L_8c877b: /* 8c877b: jmp 0x8c8780 */
  goto L_8c8780;
L_8c8780: /* 8c8780: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8c8783: lea ebx, [eax + 1] */
  ebx = (uint32_t)(eax + 0x1u);
/* 8c8786: imul ebx, dword ptr [esp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x10u)));
  ebx = (uint32_t)r;
  }
/* 8c878b: movzx eax, word ptr [esi + 0x90] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0x90u)));
/* 8c8792: mov ebp, ecx */
  ebp = ecx;
/* 8c8794: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8c8796: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 8c8799: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c879b: mov ebp, dword ptr [esi + 0x6c] */
  ebp = R32((uint32_t)(esi + 0x6cu));
/* 8c879e: add ebp, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8c87a2: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 8c87a5: imul ebp, dword ptr [edx + 0x128c] */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(R32((uint32_t)(edx + 0x128cu)));
  ebp = (uint32_t)r;
  }
/* 8c87ac: add ebp, dword ptr [esi + 0x68] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x68u)));
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8c87af: mov eax, dword ptr [ebx + eax*4 + 0x18] */
  eax = R32((uint32_t)(ebx + eax*4 + 0x18u));
/* 8c87b3: mov edx, dword ptr [edx + 0x1358] */
  edx = R32((uint32_t)(edx + 0x1358u));
/* 8c87b9: add ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8c87bb: mov dword ptr [edx + ebp*4], eax */
  W32((uint32_t)(edx + ebp*4), eax);
/* 8c87be: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 8c87c1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8c87c2: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c87c4: jle 0x8c8780 */
  if ((zf || sf != of)) goto L_8c8780;
L_8c87c6: /* 8c87c6: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8c87ca: mov edx, dword ptr [esi + 0x64] */
  edx = R32((uint32_t)(esi + 0x64u));
/* 8c87cd: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8c87ce: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c87d0: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 8c87d4: jle 0x8c8775 */
  if ((zf || sf != of)) goto L_8c8775;
L_8c87d6: /* 8c87d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c87d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c87d8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c87d9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c87da: add esp, 0x94 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c87e0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8c859d(void) {
  LOAD_REGS();
L_8c859d: /* 8c859d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8c85a0: /* 8c85a0: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 8c85a4: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 8c85aa: call 0x99c958 */
  esp -= 4; W32(esp, 0x8c85afu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8c85af: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c85b4: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 8c85b8: jle 0x8c85c2 */
  if ((zf || sf != of)) goto L_8c85c2;
L_8c85ba: /* 8c85ba: mov dword ptr [esp + 0x14], 0xff */
  W32((uint32_t)(esp + 0x14u), 0xffu);
L_8c85c2: /* 8c85c2: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 8c85c6: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 8c85cc: call 0x99c958 */
  esp -= 4; W32(esp, 0x8c85d1u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8c85d1: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c85d6: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 8c85da: jle 0x8c85e4 */
  if ((zf || sf != of)) goto L_8c85e4;
L_8c85dc: /* 8c85dc: mov dword ptr [esp + 0x18], 0xff */
  W32((uint32_t)(esp + 0x18u), 0xffu);
L_8c85e4: /* 8c85e4: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 8c85e8: fmul dword ptr [0x9f7c10] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c10u)));
/* 8c85ee: call 0x99c958 */
  esp -= 4; W32(esp, 0x8c85f3u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8c85f3: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c85f8: jle 0x8c85ff */
  if ((zf || sf != of)) goto L_8c85ff;
L_8c85fa: /* 8c85fa: mov eax, 0xff */
  eax = 0xffu;
L_8c85ff: /* 8c85ff: mov cl, byte ptr [esp + 0x14] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x14u))) & 0xffu);
/* 8c8603: mov dl, byte ptr [esp + 0x18] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x18u))) & 0xffu);
/* 8c8607: mov byte ptr [esp + 0x12], al */
  W8((uint32_t)(esp + 0x12u), (eax & 0xffu));
/* 8c860b: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 8c860e: mov byte ptr [esp + 0x10], cl */
  W8((uint32_t)(esp + 0x10u), (ecx & 0xffu));
/* 8c8612: mov byte ptr [esp + 0x11], dl */
  W8((uint32_t)(esp + 0x11u), (edx & 0xffu));
/* 8c8616: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8c861a: mov dword ptr [eax + ebx + 0x18], ecx */
  W32((uint32_t)(eax + ebx + 0x18u), ecx);
/* 8c861e: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 8c8622: add ebx, 0x24 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8c8625: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 8c8626: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 8c862a: jne 0x8c85a0 */
  if (!zf) goto L_8c85a0;
L_8c8630: /* 8c8630: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 8c8633: xor eax, eax */
  eax = 0;
/* 8c8635: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c8637: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 8c863b: jle 0x8c8760 */
  if ((zf || sf != of)) goto L_8c8760;
L_8c8641: /* 8c8641: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
L_8c8645: /* 8c8645: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 8c8648: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 8c864c: mov ecx, dword ptr [eax + edx] */
  ecx = R32((uint32_t)(eax + edx));
/* 8c864f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c8651: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c8652: lea ecx, [esp + 0x64] */
  ecx = (uint32_t)(esp + 0x64u);
/* 8c8656: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 8c865a: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 8c8662: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 8c8664: call 0x6c51f5 */
  esp -= 4; W32(esp, 0x8c8669u); SPILL(); f_6c51f5(); if (g_unwind) return; RELOAD();
/* 8c8669: movzx eax, word ptr [esi + 0x90] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0x90u)));
/* 8c8670: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c8672: jge 0x8c8741 */
  if ((sf == of)) goto L_8c8741;
L_8c8678: /* 8c8678: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 8c867c: lea ebp, [eax + eax*8] */
  ebp = (uint32_t)(eax + eax*8);
/* 8c867f: shl ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 8c8682: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8c8684: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 8c8688: jmp 0x8c8690 */
  goto L_8c8690;
L_8c8690: /* 8c8690: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 8c8694: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8c8697: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8c869b: test byte ptr [ecx + eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c869e: je 0x8c871f */
  if (zf) goto L_8c871f;
L_8c86a0: /* 8c86a0: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 8c86a3: lea edi, [edx + ebp] */
  edi = (uint32_t)(edx + ebp);
/* 8c86a6: push 0x3f000000 */
  { uint32_t v = 0x3f000000u; esp -= 4; W32(esp, v); }
/* 8c86ab: lea eax, [esp + 0x54] */
  eax = (uint32_t)(esp + 0x54u);
/* 8c86af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c86b0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c86b3: lea ecx, [edi + 0xc] */
  ecx = (uint32_t)(edi + 0xcu);
/* 8c86b6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8c86b8: mov edx, esp */
  edx = esp;
/* 8c86ba: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8c86bc: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8c86bf: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8c86c2: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8c86c5: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8c86c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c86cb: mov edx, edi */
  edx = edi;
/* 8c86cd: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8c86cf: mov eax, esp */
  eax = esp;
/* 8c86d1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8c86d3: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8c86d6: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8c86d9: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8c86dc: lea ecx, [esp + 0x80] */
  ecx = (uint32_t)(esp + 0x80u);
/* 8c86e3: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8c86e6: call 0x6c6b4a */
  esp -= 4; W32(esp, 0x8c86ebu); SPILL(); f_6c6b4a(); if (g_unwind) return; RELOAD();
/* 8c86eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c86ec: lea eax, [esp + 0x4c] */
  eax = (uint32_t)(esp + 0x4cu);
/* 8c86f0: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8c86f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c86f4: lea ecx, [esp + 0x78] */
  ecx = (uint32_t)(esp + 0x78u);
/* 8c86f8: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x8c86feu); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 8c86fe: mov ecx, eax */
  ecx = eax;
/* 8c8700: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x8c8706u); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 8c8706: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c8707: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 8c870b: call 0x6c576d */
  esp -= 4; W32(esp, 0x8c8710u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 8c8710: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8c8712: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c8713: lea ecx, [edi + 0x18] */
  ecx = (uint32_t)(edi + 0x18u);
/* 8c8716: call 0x6c8cd8 */
  esp -= 4; W32(esp, 0x8c871bu); SPILL(); f_6c8cd8(); if (g_unwind) return; RELOAD();
/* 8c871b: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
L_8c871f: /* 8c871f: shl bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = 1;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8c8721: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c8723: jne 0x8c872b */
  if (!zf) goto L_8c872b;
L_8c8725: /* 8c8725: inc dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x10u), r);
  }
/* 8c8729: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_8c872b: /* 8c872b: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 8c872f: add ebp, 0x24 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8c8732: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 8c8733: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 8c8737: jne 0x8c8690 */
  if (!zf) goto L_8c8690;
L_8c873d: /* 8c873d: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
L_8c8741: /* 8c8741: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 8c8745: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 8c8749: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 8c874c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8c874d: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8c8750: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c8752: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 8c8756: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 8c875a: jl 0x8c8645 */
  if ((sf != of)) goto L_8c8645;
L_8c8760: /* 8c8760: inc dword ptr [edi + 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x18u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edi + 0x18u), r);
  }
/* 8c8763: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* 8c8766: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c8768: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 8c8770: jl 0x8c87d6 */
  if ((sf != of)) goto L_8c87d6;
L_8c8772: /* 8c8772: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
L_8c8775: /* 8c8775: xor ecx, ecx */
  ecx = 0;
/* 8c8777: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c8779: jl 0x8c87c6 */
  if ((sf != of)) goto L_8c87c6;
L_8c877b: /* 8c877b: jmp 0x8c8780 */
  goto L_8c8780;
L_8c8780: /* 8c8780: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8c8783: lea ebx, [eax + 1] */
  ebx = (uint32_t)(eax + 0x1u);
/* 8c8786: imul ebx, dword ptr [esp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x10u)));
  ebx = (uint32_t)r;
  }
/* 8c878b: movzx eax, word ptr [esi + 0x90] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0x90u)));
/* 8c8792: mov ebp, ecx */
  ebp = ecx;
/* 8c8794: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8c8796: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 8c8799: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c879b: mov ebp, dword ptr [esi + 0x6c] */
  ebp = R32((uint32_t)(esi + 0x6cu));
/* 8c879e: add ebp, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8c87a2: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 8c87a5: imul ebp, dword ptr [edx + 0x128c] */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(R32((uint32_t)(edx + 0x128cu)));
  ebp = (uint32_t)r;
  }
/* 8c87ac: add ebp, dword ptr [esi + 0x68] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x68u)));
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8c87af: mov eax, dword ptr [ebx + eax*4 + 0x18] */
  eax = R32((uint32_t)(ebx + eax*4 + 0x18u));
/* 8c87b3: mov edx, dword ptr [edx + 0x1358] */
  edx = R32((uint32_t)(edx + 0x1358u));
/* 8c87b9: add ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8c87bb: mov dword ptr [edx + ebp*4], eax */
  W32((uint32_t)(edx + ebp*4), eax);
/* 8c87be: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 8c87c1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8c87c2: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c87c4: jle 0x8c8780 */
  if ((zf || sf != of)) goto L_8c8780;
L_8c87c6: /* 8c87c6: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8c87ca: mov edx, dword ptr [esi + 0x64] */
  edx = R32((uint32_t)(esi + 0x64u));
/* 8c87cd: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8c87ce: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c87d0: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 8c87d4: jle 0x8c8775 */
  if ((zf || sf != of)) goto L_8c8775;
L_8c87d6: /* 8c87d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c87d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c87d8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c87d9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c87da: add esp, 0x94 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c87e0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8c868a(void) {
  LOAD_REGS();
  goto L_8c868a;
L_8c8645: /* 8c8645: mov edx, dword ptr [esi + 0x34] */
  edx = R32((uint32_t)(esi + 0x34u));
/* 8c8648: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 8c864c: mov ecx, dword ptr [eax + edx] */
  ecx = R32((uint32_t)(eax + edx));
/* 8c864f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c8651: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c8652: lea ecx, [esp + 0x64] */
  ecx = (uint32_t)(esp + 0x64u);
/* 8c8656: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 8c865a: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 8c8662: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 8c8664: call 0x6c51f5 */
  esp -= 4; W32(esp, 0x8c8669u); SPILL(); f_6c51f5(); if (g_unwind) return; RELOAD();
/* 8c8669: movzx eax, word ptr [esi + 0x90] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0x90u)));
/* 8c8670: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c8672: jge 0x8c8741 */
  if ((sf == of)) goto L_8c8741;
L_8c8678: /* 8c8678: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 8c867c: lea ebp, [eax + eax*8] */
  ebp = (uint32_t)(eax + eax*8);
/* 8c867f: shl ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 8c8682: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8c8684: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 8c8688: jmp 0x8c8690 */
  goto L_8c8690;
L_8c868a: /* 8c868a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8c8690: /* 8c8690: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 8c8694: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8c8697: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8c869b: test byte ptr [ecx + eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c869e: je 0x8c871f */
  if (zf) goto L_8c871f;
L_8c86a0: /* 8c86a0: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 8c86a3: lea edi, [edx + ebp] */
  edi = (uint32_t)(edx + ebp);
/* 8c86a6: push 0x3f000000 */
  { uint32_t v = 0x3f000000u; esp -= 4; W32(esp, v); }
/* 8c86ab: lea eax, [esp + 0x54] */
  eax = (uint32_t)(esp + 0x54u);
/* 8c86af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c86b0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c86b3: lea ecx, [edi + 0xc] */
  ecx = (uint32_t)(edi + 0xcu);
/* 8c86b6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8c86b8: mov edx, esp */
  edx = esp;
/* 8c86ba: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8c86bc: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8c86bf: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8c86c2: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8c86c5: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8c86c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c86cb: mov edx, edi */
  edx = edi;
/* 8c86cd: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8c86cf: mov eax, esp */
  eax = esp;
/* 8c86d1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8c86d3: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8c86d6: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8c86d9: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8c86dc: lea ecx, [esp + 0x80] */
  ecx = (uint32_t)(esp + 0x80u);
/* 8c86e3: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8c86e6: call 0x6c6b4a */
  esp -= 4; W32(esp, 0x8c86ebu); SPILL(); f_6c6b4a(); if (g_unwind) return; RELOAD();
/* 8c86eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c86ec: lea eax, [esp + 0x4c] */
  eax = (uint32_t)(esp + 0x4cu);
/* 8c86f0: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8c86f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c86f4: lea ecx, [esp + 0x78] */
  ecx = (uint32_t)(esp + 0x78u);
/* 8c86f8: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x8c86feu); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 8c86fe: mov ecx, eax */
  ecx = eax;
/* 8c8700: call dword ptr [0xcfa3e0] */
  esp -= 4; W32(esp, 0x8c8706u); SPILL(); f_4e319d(); if (g_unwind) return; /* Core!??DFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 8c8706: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c8707: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 8c870b: call 0x6c576d */
  esp -= 4; W32(esp, 0x8c8710u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 8c8710: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8c8712: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c8713: lea ecx, [edi + 0x18] */
  ecx = (uint32_t)(edi + 0x18u);
/* 8c8716: call 0x6c8cd8 */
  esp -= 4; W32(esp, 0x8c871bu); SPILL(); f_6c8cd8(); if (g_unwind) return; RELOAD();
/* 8c871b: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
L_8c871f: /* 8c871f: shl bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = 1;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8c8721: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c8723: jne 0x8c872b */
  if (!zf) goto L_8c872b;
L_8c8725: /* 8c8725: inc dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x10u), r);
  }
/* 8c8729: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_8c872b: /* 8c872b: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 8c872f: add ebp, 0x24 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8c8732: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 8c8733: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 8c8737: jne 0x8c8690 */
  if (!zf) goto L_8c8690;
L_8c873d: /* 8c873d: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
L_8c8741: /* 8c8741: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 8c8745: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 8c8749: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 8c874c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8c874d: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8c8750: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c8752: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 8c8756: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 8c875a: jl 0x8c8645 */
  if ((sf != of)) goto L_8c8645;
L_8c8760: /* 8c8760: inc dword ptr [edi + 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x18u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edi + 0x18u), r);
  }
/* 8c8763: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* 8c8766: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c8768: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 8c8770: jl 0x8c87d6 */
  if ((sf != of)) goto L_8c87d6;
L_8c8772: /* 8c8772: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
L_8c8775: /* 8c8775: xor ecx, ecx */
  ecx = 0;
/* 8c8777: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c8779: jl 0x8c87c6 */
  if ((sf != of)) goto L_8c87c6;
L_8c877b: /* 8c877b: jmp 0x8c8780 */
  goto L_8c8780;
L_8c8780: /* 8c8780: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8c8783: lea ebx, [eax + 1] */
  ebx = (uint32_t)(eax + 0x1u);
/* 8c8786: imul ebx, dword ptr [esp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x10u)));
  ebx = (uint32_t)r;
  }
/* 8c878b: movzx eax, word ptr [esi + 0x90] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0x90u)));
/* 8c8792: mov ebp, ecx */
  ebp = ecx;
/* 8c8794: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8c8796: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 8c8799: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c879b: mov ebp, dword ptr [esi + 0x6c] */
  ebp = R32((uint32_t)(esi + 0x6cu));
/* 8c879e: add ebp, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8c87a2: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 8c87a5: imul ebp, dword ptr [edx + 0x128c] */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(R32((uint32_t)(edx + 0x128cu)));
  ebp = (uint32_t)r;
  }
/* 8c87ac: add ebp, dword ptr [esi + 0x68] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x68u)));
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8c87af: mov eax, dword ptr [ebx + eax*4 + 0x18] */
  eax = R32((uint32_t)(ebx + eax*4 + 0x18u));
/* 8c87b3: mov edx, dword ptr [edx + 0x1358] */
  edx = R32((uint32_t)(edx + 0x1358u));
/* 8c87b9: add ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8c87bb: mov dword ptr [edx + ebp*4], eax */
  W32((uint32_t)(edx + ebp*4), eax);
/* 8c87be: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 8c87c1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8c87c2: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c87c4: jle 0x8c8780 */
  if ((zf || sf != of)) goto L_8c8780;
L_8c87c6: /* 8c87c6: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8c87ca: mov edx, dword ptr [esi + 0x64] */
  edx = R32((uint32_t)(esi + 0x64u));
/* 8c87cd: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8c87ce: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c87d0: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 8c87d4: jle 0x8c8775 */
  if ((zf || sf != of)) goto L_8c8775;
L_8c87d6: /* 8c87d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c87d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c87d8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c87d9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c87da: add esp, 0x94 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c87e0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8c877d(void) {
  LOAD_REGS();
  goto L_8c877d;
L_8c8775: /* 8c8775: xor ecx, ecx */
  ecx = 0;
/* 8c8777: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c8779: jl 0x8c87c6 */
  if ((sf != of)) goto L_8c87c6;
L_8c877b: /* 8c877b: jmp 0x8c8780 */
  goto L_8c8780;
L_8c877d: /* 8c877d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8c8780: /* 8c8780: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8c8783: lea ebx, [eax + 1] */
  ebx = (uint32_t)(eax + 0x1u);
/* 8c8786: imul ebx, dword ptr [esp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x10u)));
  ebx = (uint32_t)r;
  }
/* 8c878b: movzx eax, word ptr [esi + 0x90] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0x90u)));
/* 8c8792: mov ebp, ecx */
  ebp = ecx;
/* 8c8794: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8c8796: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 8c8799: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c879b: mov ebp, dword ptr [esi + 0x6c] */
  ebp = R32((uint32_t)(esi + 0x6cu));
/* 8c879e: add ebp, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8c87a2: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 8c87a5: imul ebp, dword ptr [edx + 0x128c] */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(R32((uint32_t)(edx + 0x128cu)));
  ebp = (uint32_t)r;
  }
/* 8c87ac: add ebp, dword ptr [esi + 0x68] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x68u)));
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8c87af: mov eax, dword ptr [ebx + eax*4 + 0x18] */
  eax = R32((uint32_t)(ebx + eax*4 + 0x18u));
/* 8c87b3: mov edx, dword ptr [edx + 0x1358] */
  edx = R32((uint32_t)(edx + 0x1358u));
/* 8c87b9: add ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8c87bb: mov dword ptr [edx + ebp*4], eax */
  W32((uint32_t)(edx + ebp*4), eax);
/* 8c87be: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 8c87c1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8c87c2: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c87c4: jle 0x8c8780 */
  if ((zf || sf != of)) goto L_8c8780;
L_8c87c6: /* 8c87c6: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8c87ca: mov edx, dword ptr [esi + 0x64] */
  edx = R32((uint32_t)(esi + 0x64u));
/* 8c87cd: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8c87ce: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c87d0: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 8c87d4: jle 0x8c8775 */
  if ((zf || sf != of)) goto L_8c8775;
L_8c87d6: /* 8c87d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c87d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c87d8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c87d9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c87da: add esp, 0x94 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c87e0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8c88d0(void) {
  LOAD_REGS();
L_8c88d0: /* 8c88d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8c88d1: mov ebp, esp */
  ebp = esp;
/* 8c88d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8c88d5: push 0x9d7c00 */
  { uint32_t v = 0x9d7c00u; esp -= 4; W32(esp, v); }
/* 8c88da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8c88e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c88e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8c88e8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c88eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c88ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c88ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c88ee: mov ebx, ecx */
  ebx = ecx;
/* 8c88f0: xor edi, edi */
  edi = 0;
/* 8c88f2: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8c88f5: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8c88f8: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
L_8c88fb: /* 8c88fb: cmp edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8c88fe: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 8c8901: jae 0x8c89ee */
  if (!cf) goto L_8c89ee;
L_8c8907: /* 8c8907: mov eax, edi */
  eax = edi;
/* 8c8909: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 8c890c: mov ecx, dword ptr [eax + ebx + 0x350] */
  ecx = R32((uint32_t)(eax + ebx + 0x350u));
/* 8c8913: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c8915: lea esi, [eax + ebx] */
  esi = (uint32_t)(eax + ebx);
/* 8c8918: je 0x8c89ee */
  if (zf) goto L_8c89ee;
L_8c891e: /* 8c891e: mov eax, dword ptr [esi + 0x354] */
  eax = R32((uint32_t)(esi + 0x354u));
/* 8c8924: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c8926: je 0x8c89ee */
  if (zf) goto L_8c89ee;
L_8c892c: /* 8c892c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8c892e: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0x8c8934u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c8934: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c8936: jne 0x8c89ee */
  if (!zf) goto L_8c89ee;
L_8c893c: /* 8c893c: mov ecx, dword ptr [esi + 0x350] */
  ecx = R32((uint32_t)(esi + 0x350u));
/* 8c8942: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c8944: je 0x8c89ee */
  if (zf) goto L_8c89ee;
L_8c894a: /* 8c894a: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 8c894f: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8c8955u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8c8955: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c8957: je 0x8c89ee */
  if (zf) goto L_8c89ee;
L_8c895d: /* 8c895d: mov eax, dword ptr [esi + 0x3c4] */
  eax = R32((uint32_t)(esi + 0x3c4u));
/* 8c8963: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c8965: je 0x8c8983 */
  if (zf) goto L_8c8983;
L_8c8967: /* 8c8967: mov ecx, dword ptr [esi + 0x354] */
  ecx = R32((uint32_t)(esi + 0x354u));
/* 8c896d: mov edx, dword ptr [eax + 0x40] */
  edx = R32((uint32_t)(eax + 0x40u));
/* 8c8970: cmp edx, dword ptr [ecx + 0x40] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8c8973: jne 0x8c8983 */
  if (!zf) goto L_8c8983;
L_8c8975: /* 8c8975: mov edx, dword ptr [eax + 0x44] */
  edx = R32((uint32_t)(eax + 0x44u));
/* 8c8978: cmp edx, dword ptr [ecx + 0x44] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x44u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8c897b: jne 0x8c8983 */
  if (!zf) goto L_8c8983;
L_8c897d: /* 8c897d: cmp byte ptr [eax + 0x38], 5 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x38u))); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8c8981: je 0x8c89e8 */
  if (zf) goto L_8c89e8;
L_8c8983: /* 8c8983: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8c8985: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c8986: mov ecx, esp */
  ecx = esp;
/* 8c8988: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c898b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c898d: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8c8993u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8c8993: mov eax, dword ptr [ebx + 0xb0] */
  eax = R32((uint32_t)(ebx + 0xb0u));
/* 8c8999: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c899a: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 8c899f: call 0x6c9953 */
  esp -= 4; W32(esp, 0x8c89a4u); SPILL(); f_6c9953(); if (g_unwind) return; RELOAD();
/* 8c89a4: mov dword ptr [esi + 0x3c4], eax */
  W32((uint32_t)(esi + 0x3c4u), eax);
/* 8c89aa: mov byte ptr [eax + 0x38], 5 */
  W8((uint32_t)(eax + 0x38u), 0x5u);
/* 8c89ae: mov eax, dword ptr [esi + 0x354] */
  eax = R32((uint32_t)(esi + 0x354u));
/* 8c89b4: mov edi, dword ptr [eax + 0x44] */
  edi = R32((uint32_t)(eax + 0x44u));
/* 8c89b7: mov ecx, dword ptr [esi + 0x3c4] */
  ecx = R32((uint32_t)(esi + 0x3c4u));
/* 8c89bd: mov eax, dword ptr [eax + 0x40] */
  eax = R32((uint32_t)(eax + 0x40u));
/* 8c89c0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8c89c2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c89c5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c89c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c89c7: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x8c89cdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c89cd: mov ecx, dword ptr [esi + 0x3c4] */
  ecx = R32((uint32_t)(esi + 0x3c4u));
/* 8c89d3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8c89d5: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x8c89d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c89d8: mov eax, dword ptr [esi + 0x3c4] */
  eax = R32((uint32_t)(esi + 0x3c4u));
/* 8c89de: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8c89e1: mov byte ptr [eax + 0x80], 0 */
  W8((uint32_t)(eax + 0x80u), 0x0u);
L_8c89e8: /* 8c89e8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8c89e9: jmp 0x8c88fb */
  goto L_8c88fb;
L_8c89ee: /* 8c89ee: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c89f0: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 8c89f3: je 0x8c8aef */
  if (zf) goto L_8c8aef;
L_8c89f9: /* 8c89f9: mov ecx, dword ptr [ebx + 0x3c4] */
  ecx = R32((uint32_t)(ebx + 0x3c4u));
/* 8c89ff: mov eax, dword ptr [ecx + 0xac] */
  eax = R32((uint32_t)(ecx + 0xacu));
/* 8c8a05: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 8c8a08: lea ecx, [eax + 0x10] */
  ecx = (uint32_t)(eax + 0x10u);
/* 8c8a0b: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8c8a0du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c8a0d: mov ecx, dword ptr [ebx + 0x3c4] */
  ecx = R32((uint32_t)(ebx + 0x3c4u));
/* 8c8a13: mov al, 0xff */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
/* 8c8a15: mov byte ptr [ebp - 0x14], al */
  W8((uint32_t)(ebp + 0xffffffecu), (eax & 0xffu));
/* 8c8a18: mov byte ptr [ebp - 0x13], al */
  W8((uint32_t)(ebp + 0xffffffedu), (eax & 0xffu));
/* 8c8a1b: mov byte ptr [ebp - 0x12], al */
  W8((uint32_t)(ebp + 0xffffffeeu), (eax & 0xffu));
/* 8c8a1e: mov byte ptr [ebp - 0x11], al */
  W8((uint32_t)(ebp + 0xffffffefu), (eax & 0xffu));
/* 8c8a21: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8c8a24: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8c8a26: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c8a27: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0x8c8a2du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c8a2d: mov ebx, 1 */
  ebx = 0x1u;
L_8c8a32: /* 8c8a32: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c8a34: jge 0x8c8a9d */
  if ((sf == of)) goto L_8c8a9d;
L_8c8a36: /* 8c8a36: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8c8a39: mov eax, ebx */
  eax = ebx;
/* 8c8a3b: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 8c8a3e: mov edx, dword ptr [eax + ecx + 0x3c4] */
  edx = R32((uint32_t)(eax + ecx + 0x3c4u));
/* 8c8a45: lea esi, [eax + ecx] */
  esi = (uint32_t)(eax + ecx);
/* 8c8a48: mov eax, dword ptr [edx + 0xac] */
  eax = R32((uint32_t)(edx + 0xacu));
/* 8c8a4e: lea ecx, [eax + 0x10] */
  ecx = (uint32_t)(eax + 0x10u);
/* 8c8a51: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8c8a53: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8c8a55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c8a55: mov ecx, dword ptr [esi + 0x3c4] */
  ecx = R32((uint32_t)(esi + 0x3c4u));
/* 8c8a5b: mov eax, dword ptr [esi + 0x354] */
  eax = R32((uint32_t)(esi + 0x354u));
/* 8c8a61: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8c8a63: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8c8a65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c8a66: call dword ptr [edx + 0xc4] */
  { uint32_t t = R32((uint32_t)(edx + 0xc4u)); esp -= 4; W32(esp, 0x8c8a6cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c8a6c: xor edi, edi */
  edi = 0;
/* 8c8a6e: mov edi, edi */
  edi = edi;
L_8c8a70: /* 8c8a70: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c8a72: jge 0x8c8a97 */
  if ((sf == of)) goto L_8c8a97;
L_8c8a74: /* 8c8a74: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8c8a77: mov ecx, edi */
  ecx = edi;
/* 8c8a79: imul ecx, ecx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x78u);
  ecx = (uint32_t)r;
  }
/* 8c8a7c: mov ecx, dword ptr [ecx + edx + 0x3c4] */
  ecx = R32((uint32_t)(ecx + edx + 0x3c4u));
/* 8c8a83: mov edx, dword ptr [esi + 0x354] */
  edx = R32((uint32_t)(esi + 0x354u));
/* 8c8a89: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8c8a8b: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 8c8a8d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c8a8e: call dword ptr [eax + 0xc4] */
  { uint32_t t = R32((uint32_t)(eax + 0xc4u)); esp -= 4; W32(esp, 0x8c8a94u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c8a94: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8c8a95: jmp 0x8c8a70 */
  goto L_8c8a70;
L_8c8a97: /* 8c8a97: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8c8a9a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8c8a9b: jmp 0x8c8a32 */
  goto L_8c8a32;
L_8c8a9d: /* 8c8a9d: xor esi, esi */
  esi = 0;
/* 8c8a9f: nop  */
L_8c8aa0: /* 8c8aa0: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c8aa2: jge 0x8c8aef */
  if ((sf == of)) goto L_8c8aef;
L_8c8aa4: /* 8c8aa4: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8c8aa7: mov eax, esi */
  eax = esi;
/* 8c8aa9: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 8c8aac: mov ecx, dword ptr [eax + ecx + 0x3c4] */
  ecx = R32((uint32_t)(eax + ecx + 0x3c4u));
/* 8c8ab3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8c8ab5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8c8ab7: call 0x6cc383 */
  esp -= 4; W32(esp, 0x8c8abcu); SPILL(); f_6cc383(); if (g_unwind) return; RELOAD();
/* 8c8abc: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8c8abd: jmp 0x8c8aa0 */
  goto L_8c8aa0;
L_8c8aef: /* 8c8aef: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8c8af2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c8af3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c8af4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8c8afb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c8afc: mov esp, ebp */
  esp = ebp;
/* 8c8afe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c8aff: ret  */
  esp += 4; SPILL(); return;
}

void f_8c8abf(void) {
  LOAD_REGS();
L_8c8abf: /* 8c8abf: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8c8ac2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8c8ac7: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 8c8aca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c8acb: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8c8ace: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8c8ad3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8c8ad3(); return;
}

void f_8c8ad3(void) {
  LOAD_REGS();
L_8c8ad3: /* 8c8ad3: push 0xa1c158 */
  { uint32_t v = 0xa1c158u; esp -= 4; W32(esp, v); }
/* 8c8ad8: push 0xaec9d4 */
  { uint32_t v = 0xaec9d4u; esp -= 4; W32(esp, v); }
/* 8c8add: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8c8ae3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8c8ae3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c8ae6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c8ae8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c8aea: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8c8aefu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8c8aef: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8c8af2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c8af3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c8af4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8c8afb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c8afc: mov esp, ebp */
  esp = ebp;
/* 8c8afe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c8aff: ret  */
  esp += 4; SPILL(); return;
}

void f_8c8b90(void) {
  LOAD_REGS();
L_8c8b90: /* 8c8b90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c8b91: mov esi, ecx */
  esi = ecx;
/* 8c8b93: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8c8b99u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8c8b99: mov eax, esi */
  eax = esi;
/* 8c8b9b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c8b9c: ret  */
  esp += 4; SPILL(); return;
}

void f_8c8bb0(void) {
  LOAD_REGS();
L_8c8bb0: /* 8c8bb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8c8bb1: mov ebp, esp */
  ebp = esp;
/* 8c8bb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8c8bb5: push 0x9d7c10 */
  { uint32_t v = 0x9d7c10u; esp -= 4; W32(esp, v); }
/* 8c8bba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8c8bc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c8bc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8c8bc8: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c8bcb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c8bcc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c8bcd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c8bce: xor eax, eax */
  eax = 0;
/* 8c8bd0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8c8bd3: mov esi, ecx */
  esi = ecx;
/* 8c8bd5: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
L_8c8bd8: /* 8c8bd8: cmp eax, dword ptr [esi + 0x1344] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1344u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c8bde: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8c8be1: jge 0x8c8e0e */
  if ((sf == of)) goto L_8c8e0e;
L_8c8be7: /* 8c8be7: mov ecx, dword ptr [esi + 0x1340] */
  ecx = R32((uint32_t)(esi + 0x1340u));
/* 8c8bed: lea edi, [eax + eax*4] */
  edi = (uint32_t)(eax + eax*4);
/* 8c8bf0: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8c8bf3: cmp dword ptr [edi + ecx + 0xc], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + ecx + 0xcu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8c8bf8: jne 0x8c8dd8 */
  if (!zf) goto L_8c8dd8;
L_8c8bfe: /* 8c8bfe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c8c00: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8c8c03: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8c8c09u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8c8c09: mov ebx, dword ptr [esi + 0xb0] */
  ebx = R32((uint32_t)(esi + 0xb0u));
/* 8c8c0f: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 8c8c14: mov ecx, 0xce9ec8 */
  ecx = 0xce9ec8u;
/* 8c8c19: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8c8c1c: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x8c8c22u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 8c8c22: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c8c24: jne 0x8c8c3e */
  if (!zf) goto L_8c8c3e;
L_8c8c26: /* 8c8c26: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 8c8c2b: push 0xaeccc0 */
  { uint32_t v = 0xaeccc0u; esp -= 4; W32(esp, v); }
/* 8c8c30: push 0xaecd04 */
  { uint32_t v = 0xaecd04u; esp -= 4; W32(esp, v); }
/* 8c8c35: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8c8c3bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8c8c3b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8c8c3e: /* 8c8c3e: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8c8c41: jne 0x8c8c4c */
  if (!zf) goto L_8c8c4c;
L_8c8c43: /* 8c8c43: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x8c8c49u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 8c8c49: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_8c8c4c: /* 8c8c4c: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 8c8c52: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8c8c54: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8c8c57: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8c8c5a: mov ebx, dword ptr [esi + 0x1340] */
  ebx = R32((uint32_t)(esi + 0x1340u));
/* 8c8c60: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c8c62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c8c63: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c8c65: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8c8c67: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c8c68: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c8c69: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 8c8c6e: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8c8c70: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x8c8c76u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 8c8c76: mov dword ptr [ebx + 0x10], eax */
  W32((uint32_t)(ebx + 0x10u), eax);
/* 8c8c79: mov eax, dword ptr [esi + 0x1340] */
  eax = R32((uint32_t)(esi + 0x1340u));
/* 8c8c7f: mov ecx, dword ptr [edi + eax + 0x10] */
  ecx = R32((uint32_t)(edi + eax + 0x10u));
/* 8c8c83: mov byte ptr [ecx + 0x38], 5 */
  W8((uint32_t)(ecx + 0x38u), 0x5u);
/* 8c8c87: mov edx, dword ptr [esi + 0x1340] */
  edx = R32((uint32_t)(esi + 0x1340u));
/* 8c8c8d: mov ecx, dword ptr [edi + edx + 0x10] */
  ecx = R32((uint32_t)(edi + edx + 0x10u));
/* 8c8c91: lea eax, [edi + edx] */
  eax = (uint32_t)(edi + edx);
/* 8c8c94: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8c8c96: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8c8c98: imul edx, edx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x78u);
  edx = (uint32_t)r;
  }
/* 8c8c9b: mov eax, dword ptr [edx + esi + 0x354] */
  eax = R32((uint32_t)(edx + esi + 0x354u));
/* 8c8ca2: mov ebx, dword ptr [eax + 0x44] */
  ebx = R32((uint32_t)(eax + 0x44u));
/* 8c8ca5: mov eax, dword ptr [eax + 0x40] */
  eax = R32((uint32_t)(eax + 0x40u));
/* 8c8ca8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8c8caa: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c8cad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c8cae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c8caf: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x8c8cb5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c8cb5: mov ecx, dword ptr [esi + 0x1340] */
  ecx = R32((uint32_t)(esi + 0x1340u));
/* 8c8cbb: mov ecx, dword ptr [edi + ecx + 0x10] */
  ecx = R32((uint32_t)(edi + ecx + 0x10u));
/* 8c8cbf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8c8cc1: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x8c8cc4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c8cc4: mov eax, dword ptr [esi + 0x1340] */
  eax = R32((uint32_t)(esi + 0x1340u));
/* 8c8cca: mov ecx, dword ptr [edi + eax + 0x10] */
  ecx = R32((uint32_t)(edi + eax + 0x10u));
/* 8c8cce: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8c8cd0: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8c8cd4: mov byte ptr [ebp - 0x13], 0 */
  W8((uint32_t)(ebp + 0xffffffedu), 0x0u);
/* 8c8cd8: mov byte ptr [ebp - 0x12], 0 */
  W8((uint32_t)(ebp + 0xffffffeeu), 0x0u);
/* 8c8cdc: mov byte ptr [ebp - 0x11], 0 */
  W8((uint32_t)(ebp + 0xffffffefu), 0x0u);
/* 8c8ce0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8c8ce3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c8ce4: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x8c8ceau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c8cea: mov ecx, dword ptr [esi + 0x1340] */
  ecx = R32((uint32_t)(esi + 0x1340u));
/* 8c8cf0: mov edx, dword ptr [edi + ecx + 0x10] */
  edx = R32((uint32_t)(edi + ecx + 0x10u));
/* 8c8cf4: mov byte ptr [edx + 0x80], 0 */
  W8((uint32_t)(edx + 0x80u), 0x0u);
/* 8c8cfb: mov eax, dword ptr [esi + 0x1340] */
  eax = R32((uint32_t)(esi + 0x1340u));
/* 8c8d01: mov ecx, dword ptr [eax + edi + 4] */
  ecx = R32((uint32_t)(eax + edi + 0x4u));
/* 8c8d05: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c8d07: lea edx, [ecx - 1] */
  edx = (uint32_t)(ecx + 0xffffffffu);
/* 8c8d0a: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c8d0d: ja 0x8c8daa */
  if ((!cf && !zf)) goto L_8c8daa;
L_8c8d13: /* 8c8d13: jmp dword ptr [edx*4 + 0x8c8e20] */
  switch (R32((uint32_t)(edx*4 + 0x8c8e20u))) {
    case 0x8c8d1au: goto L_8c8d1a;
    case 0x8c8d37u: goto L_8c8d37;
    case 0x8c8d5du: goto L_8c8d5d;
    case 0x8c8d83u: goto L_8c8d83;
    default: guest_badjump(0x8c8d13, R32((uint32_t)(edx*4 + 0x8c8e20u))); return;
  }
L_8c8d1a: /* 8c8d1a: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 8c8d1d: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8c8d1f: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 8c8d22: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8c8d24: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 8c8d27: mov eax, dword ptr [eax + esi + 0x3c4] */
  eax = R32((uint32_t)(eax + esi + 0x3c4u));
/* 8c8d2e: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 8c8d30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c8d31: call dword ptr [edx + 0xc4] */
  { uint32_t t = R32((uint32_t)(edx + 0xc4u)); esp -= 4; W32(esp, 0x8c8d37u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8c8d37: /* 8c8d37: mov ecx, dword ptr [esi + 0x1340] */
  ecx = R32((uint32_t)(esi + 0x1340u));
/* 8c8d3d: lea eax, [edi + ecx] */
  eax = (uint32_t)(edi + ecx);
/* 8c8d40: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 8c8d43: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8c8d45: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8c8d48: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8c8d4a: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 8c8d4d: mov eax, dword ptr [eax + esi + 0x3c4] */
  eax = R32((uint32_t)(eax + esi + 0x3c4u));
/* 8c8d54: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8c8d56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c8d57: call dword ptr [edx + 0xc4] */
  { uint32_t t = R32((uint32_t)(edx + 0xc4u)); esp -= 4; W32(esp, 0x8c8d5du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8c8d5d: /* 8c8d5d: mov ecx, dword ptr [esi + 0x1340] */
  ecx = R32((uint32_t)(esi + 0x1340u));
/* 8c8d63: lea eax, [edi + ecx] */
  eax = (uint32_t)(edi + ecx);
/* 8c8d66: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 8c8d69: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8c8d6b: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 8c8d6e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8c8d70: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 8c8d73: mov eax, dword ptr [eax + esi + 0x3c4] */
  eax = R32((uint32_t)(eax + esi + 0x3c4u));
/* 8c8d7a: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 8c8d7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c8d7d: call dword ptr [edx + 0xc4] */
  { uint32_t t = R32((uint32_t)(edx + 0xc4u)); esp -= 4; W32(esp, 0x8c8d83u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8c8d83: /* 8c8d83: mov ecx, dword ptr [esi + 0x1340] */
  ecx = R32((uint32_t)(esi + 0x1340u));
/* 8c8d89: lea eax, [edi + ecx] */
  eax = (uint32_t)(edi + ecx);
/* 8c8d8c: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 8c8d8f: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8c8d91: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8c8d93: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8c8d95: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 8c8d98: mov eax, dword ptr [eax + esi + 0x3c4] */
  eax = R32((uint32_t)(eax + esi + 0x3c4u));
/* 8c8d9f: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c8da1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c8da2: call dword ptr [edx + 0xc4] */
  { uint32_t t = R32((uint32_t)(edx + 0xc4u)); esp -= 4; W32(esp, 0x8c8da8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c8da8: jmp 0x8c8dc2 */
  goto L_8c8dc2;
L_8c8daa: /* 8c8daa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c8dab: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 8c8db1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8c8db3: push 0xaec9e8 */
  { uint32_t v = 0xaec9e8u; esp -= 4; W32(esp, v); }
/* 8c8db8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c8db9: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8c8dbfu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8c8dbf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8c8dc2: /* 8c8dc2: mov eax, dword ptr [esi + 0x1340] */
  eax = R32((uint32_t)(esi + 0x1340u));
/* 8c8dc8: mov ecx, dword ptr [edi + eax + 0x10] */
  ecx = R32((uint32_t)(edi + eax + 0x10u));
/* 8c8dcc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8c8dce: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8c8dd0: call 0x6cc383 */
  esp -= 4; W32(esp, 0x8c8dd5u); SPILL(); f_6cc383(); if (g_unwind) return; RELOAD();
/* 8c8dd5: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_8c8dd8: /* 8c8dd8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8c8dd9: jmp 0x8c8bd8 */
  goto L_8c8bd8;
L_8c8e0e: /* 8c8e0e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8c8e11: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c8e12: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c8e13: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8c8e1a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c8e1b: mov esp, ebp */
  esp = ebp;
/* 8c8e1d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c8e1e: ret  */
  esp += 4; SPILL(); return;
}

void f_8c8dde(void) {
  LOAD_REGS();
L_8c8dde: /* 8c8dde: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8c8de1: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8c8de6: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 8c8de9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c8dea: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 8c8ded: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8c8df2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8c8df2(); return;
}

void f_8c8df2(void) {
  LOAD_REGS();
L_8c8df2: /* 8c8df2: push 0xa1c1b0 */
  { uint32_t v = 0xa1c1b0u; esp -= 4; W32(esp, v); }
/* 8c8df7: push 0xaeca4c */
  { uint32_t v = 0xaeca4cu; esp -= 4; W32(esp, v); }
/* 8c8dfc: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8c8e02u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8c8e02: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c8e05: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c8e07: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c8e09: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8c8e0eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8c8e0e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8c8e11: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c8e12: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c8e13: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8c8e1a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c8e1b: mov esp, ebp */
  esp = ebp;
/* 8c8e1d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c8e1e: ret  */
  esp += 4; SPILL(); return;
}

void f_8c8ef0(void) {
  LOAD_REGS();
L_8c8ef0: /* 8c8ef0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8c8ef1: mov ebp, esp */
  ebp = esp;
/* 8c8ef3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8c8ef5: push 0x9d7c29 */
  { uint32_t v = 0x9d7c29u; esp -= 4; W32(esp, v); }
/* 8c8efa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8c8f00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c8f01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8c8f08: sub esp, 0xb0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xb0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c8f0e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c8f0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c8f10: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c8f11: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8c8f14: mov edi, ecx */
  edi = ecx;
/* 8c8f16: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8c8f1d: call 0x6cb45b */
  esp -= 4; W32(esp, 0x8c8f22u); SPILL(); f_6cb45b(); if (g_unwind) return; RELOAD();
/* 8c8f22: mov eax, dword ptr [edi + 0x1290] */
  eax = R32((uint32_t)(edi + 0x1290u));
/* 8c8f28: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8c8f29: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c8f2b: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8c8f2d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8c8f30: mov eax, dword ptr [edi + 0x128c] */
  eax = R32((uint32_t)(edi + 0x128cu));
/* 8c8f36: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8c8f39: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8c8f3a: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c8f3c: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8c8f3e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8c8f41: lea eax, [edi + 0x12ac] */
  eax = (uint32_t)(edi + 0x12acu);
/* 8c8f47: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8c8f4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c8f4b: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 8c8f4e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c8f4f: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8c8f52: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8c8f55: mov dword ptr [ebp - 0x20], 0x46fffe00 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x46fffe00u);
/* 8c8f5c: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8c8f5f: call dword ptr [0xcfa364] */
  esp -= 4; W32(esp, 0x8c8f65u); SPILL(); f_4e1af5(); if (g_unwind) return; /* Core!?TransformPointBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8c8f65: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8c8f68: fld dword ptr [edi + 0x178] */
  { double v = F32((uint32_t)(edi + 0x178u)); FPUSH(v); }
/* 8c8f6e: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 8c8f71: fld dword ptr [edi + 0x174] */
  { double v = F32((uint32_t)(edi + 0x174u)); FPUSH(v); }
/* 8c8f77: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 8c8f7a: fld dword ptr [edi + 0x170] */
  { double v = F32((uint32_t)(edi + 0x170u)); FPUSH(v); }
/* 8c8f80: fsub dword ptr [ebp - 0x34] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffccu)));
/* 8c8f83: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8c8f86: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8c8f89: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8c8f8c: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8c8f92u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8c8f92: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 8c8f95: fcomp dword ptr [0xa07fe4] */
  fpu_com(ST0, F32((uint32_t)(0xa07fe4u)));
  FPOP();
/* 8c8f9b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c8f9d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c8fa0: jne 0x8c9000 */
  if (!zf) goto L_8c9000;
L_8c8fa2: /* 8c8fa2: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8c8fa8: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8c8faa: mov esi, dword ptr [0xcfa3a4] */
  esi = R32((uint32_t)(0xcfa3a4u));
/* 8c8fb0: push 0xaeca74 */
  { uint32_t v = 0xaeca74u; esp -= 4; W32(esp, v); }
/* 8c8fb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c8fb6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8c8fb8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c8fb8: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8c8fbb: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 8c8fc1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8c8fc3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c8fc6: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c8fc9: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 8c8fcd: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8c8fd0: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 8c8fd4: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8c8fd7: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8c8fda: push 0xaecab0 */
  { uint32_t v = 0xaecab0u; esp -= 4; W32(esp, v); }
/* 8c8fdf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c8fe0: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8c8fe2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c8fe2: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 8c8fe5: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8c8fe8: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8c8feb: mov dword ptr [edi + 0x170], eax */
  W32((uint32_t)(edi + 0x170u), eax);
/* 8c8ff1: mov dword ptr [edi + 0x174], ecx */
  W32((uint32_t)(edi + 0x174u), ecx);
/* 8c8ff7: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c8ffa: mov dword ptr [edi + 0x178], edx */
  W32((uint32_t)(edi + 0x178u), edx);
L_8c9000: /* 8c9000: mov eax, dword ptr [edi + 0x137c] */
  eax = R32((uint32_t)(edi + 0x137cu));
/* 8c9006: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c9008: je 0x8c90f9 */
  if (zf) goto L_8c90f9;
L_8c900e: /* 8c900e: mov ecx, edi */
  ecx = edi;
/* 8c9010: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8c9016u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8c9016: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c9017: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8c901a: push 0xaecb04 */
  { uint32_t v = 0xaecb04u; esp -= 4; W32(esp, v); }
/* 8c901f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c9020: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8c9026u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8c9026: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c9029: mov ecx, eax */
  ecx = eax;
/* 8c902b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8c902f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8c9035u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8c9035: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8c9037: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c9038: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8c903b: call dword ptr [0xcfa33c] */
  esp -= 4; W32(esp, 0x8c9041u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 8c9041: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8c9044: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8c9048: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8c904eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8c904e: mov ecx, dword ptr [edi + 0xb0] */
  ecx = R32((uint32_t)(edi + 0xb0u));
/* 8c9054: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x8c905au); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 8c905a: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 8c9060: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8c9062: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8c9065: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c9067: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c9068: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c906a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c906c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c906d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c906e: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 8c9073: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x8c9079u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 8c9079: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c907c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c907d: call 0x6c7531 */
  esp -= 4; W32(esp, 0x8c9082u); SPILL(); f_6c7531(); if (g_unwind) return; RELOAD();
/* 8c9082: mov dword ptr [edi + 0x340], eax */
  W32((uint32_t)(edi + 0x340u), eax);
/* 8c9088: mov byte ptr [eax + 0x38], 0xa */
  W8((uint32_t)(eax + 0x38u), 0xau);
/* 8c908c: mov eax, dword ptr [edi + 0x1290] */
  eax = R32((uint32_t)(edi + 0x1290u));
/* 8c9092: mov ecx, dword ptr [edi + 0x340] */
  ecx = R32((uint32_t)(edi + 0x340u));
/* 8c9098: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8c909a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c909d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c909e: mov eax, dword ptr [edi + 0x128c] */
  eax = R32((uint32_t)(edi + 0x128cu));
/* 8c90a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c90a5: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x8c90abu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c90ab: mov ecx, dword ptr [edi + 0x340] */
  ecx = R32((uint32_t)(edi + 0x340u));
/* 8c90b1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8c90b3: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x8c90b6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c90b6: mov eax, dword ptr [edi + 0x340] */
  eax = R32((uint32_t)(edi + 0x340u));
/* 8c90bc: mov eax, dword ptr [eax + 0xac] */
  eax = R32((uint32_t)(eax + 0xacu));
/* 8c90c2: mov ebx, dword ptr [eax + 0x1c] */
  ebx = R32((uint32_t)(eax + 0x1cu));
/* 8c90c5: lea esi, [edi + 0x1378] */
  esi = (uint32_t)(edi + 0x1378u);
/* 8c90cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c90cd: mov ecx, esi */
  ecx = esi;
/* 8c90cf: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8c90d5u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8c90d5: mov ecx, dword ptr [edi + 0x128c] */
  ecx = R32((uint32_t)(edi + 0x128cu));
/* 8c90db: imul ecx, dword ptr [edi + 0x1290] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(edi + 0x1290u)));
  ecx = (uint32_t)r;
  }
/* 8c90e2: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8c90e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c90e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c90e6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c90e7: call 0x6ca83f */
  esp -= 4; W32(esp, 0x8c90ecu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 8c90ec: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c90ef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c90f1: mov ecx, esi */
  ecx = esi;
/* 8c90f3: call dword ptr [0xcfa3a0] */
  esp -= 4; W32(esp, 0x8c90f9u); SPILL(); f_4e264e(); if (g_unwind) return; /* Core!?Empty@?$TArray@G@@QAEXH@Z */ RELOAD();
L_8c90f9: /* 8c90f9: mov eax, dword ptr [edi + 0x128c] */
  eax = R32((uint32_t)(edi + 0x128cu));
/* 8c90ff: imul eax, dword ptr [edi + 0x1290] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi + 0x1290u)));
  eax = (uint32_t)r;
  }
/* 8c9106: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8c9107: and edx, 0x1f */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8c910a: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c910c: mov esi, eax */
  esi = eax;
/* 8c910e: mov eax, dword ptr [edi + 0x1320] */
  eax = R32((uint32_t)(edi + 0x1320u));
/* 8c9114: sar esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 8c9117: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8c9119: je 0x8c9151 */
  if (zf) goto L_8c9151;
L_8c911b: /* 8c911b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c911d: lea ebx, [edi + 0x131c] */
  ebx = (uint32_t)(edi + 0x131cu);
/* 8c9123: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8c9125: mov ecx, ebx */
  ecx = ebx;
/* 8c9127: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8c912du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8c912d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8c912f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c9130: mov ecx, ebx */
  ecx = ebx;
/* 8c9132: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8c9138u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8c9138: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8c913a: lea edx, [esi*4] */
  edx = (uint32_t)(esi*4);
/* 8c9141: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c9142: push 0xff */
  { uint32_t v = 0xffu; esp -= 4; W32(esp, v); }
/* 8c9147: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c9148: call dword ptr [0xcfa53c] */
  esp -= 4; W32(esp, 0x8c914eu); SPILL(); f_4e150a(); if (g_unwind) return; /* Core!?appMemset@@YAXPAXHH@Z */ RELOAD();
/* 8c914e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8c9151: /* 8c9151: cmp dword ptr [edi + 0x132c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x132cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8c9157: je 0x8c918c */
  if (zf) goto L_8c918c;
L_8c9159: /* 8c9159: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c915b: lea ebx, [edi + 0x1328] */
  ebx = (uint32_t)(edi + 0x1328u);
/* 8c9161: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8c9163: mov ecx, ebx */
  ecx = ebx;
/* 8c9165: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8c916bu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8c916b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8c916d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c916e: mov ecx, ebx */
  ecx = ebx;
/* 8c9170: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8c9176u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8c9176: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8c9178: lea ecx, [esi*4] */
  ecx = (uint32_t)(esi*4);
/* 8c917f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c9180: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c9182: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c9183: call dword ptr [0xcfa53c] */
  esp -= 4; W32(esp, 0x8c9189u); SPILL(); f_4e150a(); if (g_unwind) return; /* Core!?appMemset@@YAXPAXHH@Z */ RELOAD();
/* 8c9189: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8c918c: /* 8c918c: mov dword ptr [edi + 0x1264], 1 */
  W32((uint32_t)(edi + 0x1264u), 0x1u);
/* 8c9196: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 8c919b: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8c919e: jne 0x8c93d6 */
  if (!zf) goto L_8c93d6;
L_8c91a4: /* 8c91a4: mov eax, dword ptr [edi + 0x1338] */
  eax = R32((uint32_t)(edi + 0x1338u));
/* 8c91aa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c91ac: je 0x8c91e2 */
  if (zf) goto L_8c91e2;
L_8c91ae: /* 8c91ae: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 8c91b4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8c91b6: push 0xaecb1c */
  { uint32_t v = 0xaecb1cu; esp -= 4; W32(esp, v); }
/* 8c91bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c91bc: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8c91c2u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8c91c2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c91c5: lea ecx, [edi + 0x1334] */
  ecx = (uint32_t)(edi + 0x1334u);
/* 8c91cb: xor eax, eax */
  eax = 0;
/* 8c91cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8c91d0: /* 8c91d0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c91d3: jge 0x8c91d8 */
  if ((sf == of)) goto L_8c91d8;
L_8c91d5: /* 8c91d5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8c91d6: jmp 0x8c91d0 */
  goto L_8c91d0;
L_8c91d8: /* 8c91d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c91da: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8c91dc: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8c91e2u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
L_8c91e2: /* 8c91e2: mov eax, dword ptr [edi + 0x1290] */
  eax = R32((uint32_t)(edi + 0x1290u));
/* 8c91e8: imul eax, dword ptr [edi + 0x128c] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edi + 0x128cu)));
  eax = (uint32_t)r;
  }
/* 8c91ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c91f0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8c91f2: lea ecx, [edi + 0x1334] */
  ecx = (uint32_t)(edi + 0x1334u);
/* 8c91f8: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8c91feu); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8c91fe: xor edx, edx */
  edx = 0;
L_8c9200: /* 8c9200: cmp edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8c9203: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8c9206: jae 0x8c9227 */
  if (!cf) goto L_8c9227;
L_8c9208: /* 8c9208: mov eax, edx */
  eax = edx;
/* 8c920a: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 8c920d: mov ecx, dword ptr [eax + edi + 0x350] */
  ecx = R32((uint32_t)(eax + edi + 0x350u));
/* 8c9214: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c9216: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c9218: je 0x8c9227 */
  if (zf) goto L_8c9227;
L_8c921a: /* 8c921a: mov ecx, dword ptr [eax + 0x354] */
  ecx = R32((uint32_t)(eax + 0x354u));
/* 8c9220: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c9222: je 0x8c9227 */
  if (zf) goto L_8c9227;
L_8c9224: /* 8c9224: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8c9225: jmp 0x8c9200 */
  goto L_8c9200;
L_8c9227: /* 8c9227: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 8c922e: mov edi, edi */
  edi = edi;
L_8c9230: /* 8c9230: mov ecx, dword ptr [edi + 0x1290] */
  ecx = R32((uint32_t)(edi + 0x1290u));
/* 8c9236: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8c9239: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8c923a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c923c: jge 0x8c93d6 */
  if ((sf == of)) goto L_8c93d6;
L_8c9242: /* 8c9242: xor ebx, ebx */
  ebx = 0;
L_8c9244: /* 8c9244: mov eax, dword ptr [edi + 0x128c] */
  eax = R32((uint32_t)(edi + 0x128cu));
/* 8c924a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8c924b: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c924d: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 8c9250: jge 0x8c939e */
  if ((sf == of)) goto L_8c939e;
L_8c9256: /* 8c9256: mov byte ptr [ebp - 0x5c], 1 */
  W8((uint32_t)(ebp + 0xffffffa4u), 0x1u);
/* 8c925a: mov byte ptr [ebp - 0x7c], 1 */
  W8((uint32_t)(ebp + 0xffffff84u), 0x1u);
/* 8c925e: mov byte ptr [ebp - 0x9c], 1 */
  W8((uint32_t)(ebp + 0xffffff64u), 0x1u);
/* 8c9265: mov byte ptr [ebp - 0xbc], 1 */
  W8((uint32_t)(ebp + 0xffffff44u), 0x1u);
/* 8c926c: mov esi, 1 */
  esi = 0x1u;
L_8c9271: /* 8c9271: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c9273: jge 0x8c933a */
  if ((sf == of)) goto L_8c933a;
L_8c9279: /* 8c9279: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8c927c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c927e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c927f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c9280: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c9281: mov ecx, edi */
  ecx = edi;
/* 8c9283: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8c9288u); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8c9288: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8c928b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c928d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c928e: mov byte ptr [ebp + esi - 0xbc], al */
  W8((uint32_t)(ebp + esi + 0xffffff44u), (eax & 0xffu));
/* 8c9295: lea eax, [ebx + 1] */
  eax = (uint32_t)(ebx + 0x1u);
/* 8c9298: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c9299: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c929a: mov ecx, edi */
  ecx = edi;
/* 8c929c: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8c92a1u); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8c92a1: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8c92a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c92a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c92a7: mov byte ptr [ebp + esi - 0x9c], al */
  W8((uint32_t)(ebp + esi + 0xffffff64u), (eax & 0xffu));
/* 8c92ae: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8c92b1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8c92b2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c92b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c92b4: mov ecx, edi */
  ecx = edi;
/* 8c92b6: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8c92bbu); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8c92bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c92bd: mov byte ptr [ebp + esi - 0x7c], al */
  W8((uint32_t)(ebp + esi + 0xffffff84u), (eax & 0xffu));
/* 8c92c1: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8c92c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c92c5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c92c6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8c92c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c92c8: mov ecx, edi */
  ecx = edi;
/* 8c92ca: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8c92cfu); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8c92cf: mov byte ptr [ebp + esi - 0x5c], al */
  W8((uint32_t)(ebp + esi + 0xffffffa4u), (eax & 0xffu));
/* 8c92d3: xor ecx, ecx */
  ecx = 0;
L_8c92d5: /* 8c92d5: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c92d7: jge 0x8c932e */
  if ((sf == of)) goto L_8c932e;
L_8c92d9: /* 8c92d9: mov bl, byte ptr [ebp + esi - 0xbc] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + esi + 0xffffff44u))) & 0xffu);
/* 8c92e0: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 8c92e2: sub al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8c92e4: imul byte ptr [ebp + ecx - 0xbc] */
  { int32_t r = (int32_t)(int8_t)eax * (int32_t)(int8_t)(R8((uint32_t)(ebp + ecx + 0xffffff44u)));
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  cf = of = (r != (int8_t)r); }
/* 8c92eb: mov byte ptr [ebp + ecx - 0xbc], al */
  W8((uint32_t)(ebp + ecx + 0xffffff44u), (eax & 0xffu));
/* 8c92f2: mov dl, byte ptr [ebp + esi - 0x9c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + esi + 0xffffff64u))) & 0xffu);
/* 8c92f9: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 8c92fb: sub al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8c92fd: imul byte ptr [ebp + ecx - 0x9c] */
  { int32_t r = (int32_t)(int8_t)eax * (int32_t)(int8_t)(R8((uint32_t)(ebp + ecx + 0xffffff64u)));
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  cf = of = (r != (int8_t)r); }
/* 8c9304: mov byte ptr [ebp + ecx - 0x9c], al */
  W8((uint32_t)(ebp + ecx + 0xffffff64u), (eax & 0xffu));
/* 8c930b: mov bl, byte ptr [ebp + esi - 0x7c] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + esi + 0xffffff84u))) & 0xffu);
/* 8c930f: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 8c9311: sub al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8c9313: imul byte ptr [ebp + ecx - 0x7c] */
  { int32_t r = (int32_t)(int8_t)eax * (int32_t)(int8_t)(R8((uint32_t)(ebp + ecx + 0xffffff84u)));
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  cf = of = (r != (int8_t)r); }
/* 8c9317: mov byte ptr [ebp + ecx - 0x7c], al */
  W8((uint32_t)(ebp + ecx + 0xffffff84u), (eax & 0xffu));
/* 8c931b: mov dl, byte ptr [ebp + esi - 0x5c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + esi + 0xffffffa4u))) & 0xffu);
/* 8c931f: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 8c9321: sub al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8c9323: imul byte ptr [ebp + ecx - 0x5c] */
  { int32_t r = (int32_t)(int8_t)eax * (int32_t)(int8_t)(R8((uint32_t)(ebp + ecx + 0xffffffa4u)));
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  cf = of = (r != (int8_t)r); }
/* 8c9327: mov byte ptr [ebp + ecx - 0x5c], al */
  W8((uint32_t)(ebp + ecx + 0xffffffa4u), (eax & 0xffu));
/* 8c932b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8c932c: jmp 0x8c92d5 */
  goto L_8c92d5;
L_8c932e: /* 8c932e: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8c9331: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8c9334: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8c9335: jmp 0x8c9271 */
  goto L_8c9271;
L_8c933a: /* 8c933a: xor ecx, ecx */
  ecx = 0;
/* 8c933c: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8c933f: xor esi, esi */
  esi = 0;
L_8c9341: /* 8c9341: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c9343: jge 0x8c9380 */
  if ((sf == of)) goto L_8c9380;
L_8c9345: /* 8c9345: movzx edx, byte ptr [ebp + ecx - 0x7c] */
  edx = (uint32_t)(R8((uint32_t)(ebp + ecx + 0xffffff84u)));
/* 8c934a: movzx eax, byte ptr [ebp + ecx - 0x5c] */
  eax = (uint32_t)(R8((uint32_t)(ebp + ecx + 0xffffffa4u)));
/* 8c934f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c9351: movzx edx, byte ptr [ebp + ecx - 0x9c] */
  edx = (uint32_t)(R8((uint32_t)(ebp + ecx + 0xffffff64u)));
/* 8c9359: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c935b: movzx edx, byte ptr [ebp + ecx - 0xbc] */
  edx = (uint32_t)(R8((uint32_t)(ebp + ecx + 0xffffff44u)));
/* 8c9363: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c9365: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c9367: jle 0x8c937a */
  if ((zf || sf != of)) goto L_8c937a;
L_8c9369: /* 8c9369: mov edx, ecx */
  edx = ecx;
/* 8c936b: imul edx, edx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x78u);
  edx = (uint32_t)r;
  }
/* 8c936e: mov edx, dword ptr [edx + edi + 0x350] */
  edx = R32((uint32_t)(edx + edi + 0x350u));
/* 8c9375: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8c9378: mov esi, eax */
  esi = eax;
L_8c937a: /* 8c937a: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8c937d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8c937e: jmp 0x8c9341 */
  goto L_8c9341;
L_8c9380: /* 8c9380: mov eax, dword ptr [edi + 0x128c] */
  eax = R32((uint32_t)(edi + 0x128cu));
/* 8c9386: imul eax, dword ptr [ebp - 0x18] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  eax = (uint32_t)r;
  }
/* 8c938a: mov ecx, dword ptr [edi + 0x1334] */
  ecx = R32((uint32_t)(edi + 0x1334u));
/* 8c9390: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8c9393: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c9395: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
/* 8c9398: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8c9399: jmp 0x8c9244 */
  goto L_8c9244;
L_8c939e: /* 8c939e: inc dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8c93a1: jmp 0x8c9230 */
  goto L_8c9230;
L_8c93d6: /* 8c93d6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8c93d9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c93da: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c93db: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8c93e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c93e3: mov esp, ebp */
  esp = ebp;
/* 8c93e5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c93e6: ret  */
  esp += 4; SPILL(); return;
}

void f_8c93a6(void) {
  LOAD_REGS();
L_8c93a6: /* 8c93a6: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8c93a9: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8c93ae: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 8c93b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c93b2: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 8c93b5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8c93bau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8c93ba(); return;
}

void f_8c93ba(void) {
  LOAD_REGS();
L_8c93ba: /* 8c93ba: push 0xa1c204 */
  { uint32_t v = 0xa1c204u; esp -= 4; W32(esp, v); }
/* 8c93bf: push 0xaecb58 */
  { uint32_t v = 0xaecb58u; esp -= 4; W32(esp, v); }
/* 8c93c4: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8c93cau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8c93ca: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c93cd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c93cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c93d1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8c93d6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8c93d6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8c93d9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c93da: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c93db: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8c93e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c93e3: mov esp, ebp */
  esp = ebp;
/* 8c93e5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c93e6: ret  */
  esp += 4; SPILL(); return;
}

void f_8c9530(void) {
  LOAD_REGS();
L_8c9530: /* 8c9530: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8c9531: mov ebp, esp */
  ebp = esp;
/* 8c9533: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8c9535: push 0x9d7c40 */
  { uint32_t v = 0x9d7c40u; esp -= 4; W32(esp, v); }
/* 8c953a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8c9540: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c9541: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8c9548: sub esp, 0xac */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c954e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c954f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c9550: mov esi, ecx */
  esi = ecx;
/* 8c9552: mov eax, dword ptr [esi + 0x340] */
  eax = R32((uint32_t)(esi + 0x340u));
/* 8c9558: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c955a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c955b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8c955e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8c9565: je 0x8c9a2b */
  if (zf) goto L_8c9a2b;
L_8c956b: /* 8c956b: mov eax, dword ptr [esi + 0x1290] */
  eax = R32((uint32_t)(esi + 0x1290u));
/* 8c9571: imul eax, dword ptr [esi + 0x128c] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x128cu)));
  eax = (uint32_t)r;
  }
/* 8c9578: mov ecx, dword ptr [esi + 0x1284] */
  ecx = R32((uint32_t)(esi + 0x1284u));
/* 8c957e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c9580: jge 0x8c9593 */
  if ((sf == of)) goto L_8c9593;
L_8c9582: /* 8c9582: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c9584: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8c9586: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c9587: lea ecx, [esi + 0x1280] */
  ecx = (uint32_t)(esi + 0x1280u);
/* 8c958d: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8c9593u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
L_8c9593: /* 8c9593: mov eax, dword ptr [esi + 0x1290] */
  eax = R32((uint32_t)(esi + 0x1290u));
/* 8c9599: imul eax, dword ptr [esi + 0x128c] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x128cu)));
  eax = (uint32_t)r;
  }
/* 8c95a0: mov ecx, dword ptr [esi + 0x12a4] */
  ecx = R32((uint32_t)(esi + 0x12a4u));
/* 8c95a6: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c95a8: jge 0x8c95bb */
  if ((sf == of)) goto L_8c95bb;
L_8c95aa: /* 8c95aa: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c95ac: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 8c95ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c95af: lea ecx, [esi + 0x12a0] */
  ecx = (uint32_t)(esi + 0x12a0u);
/* 8c95b5: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8c95bbu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
L_8c95bb: /* 8c95bb: mov ecx, dword ptr [esi + 0x1290] */
  ecx = R32((uint32_t)(esi + 0x1290u));
/* 8c95c1: imul ecx, dword ptr [esi + 0x128c] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x128cu)));
  ecx = (uint32_t)r;
  }
/* 8c95c8: mov eax, dword ptr [esi + 0x135c] */
  eax = R32((uint32_t)(esi + 0x135cu));
/* 8c95ce: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c95d0: jge 0x8c9633 */
  if ((sf == of)) goto L_8c9633;
L_8c95d2: /* 8c95d2: lea ecx, [esi + 0x1358] */
  ecx = (uint32_t)(esi + 0x1358u);
/* 8c95d8: xor eax, eax */
  eax = 0;
/* 8c95da: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8c95e0: /* 8c95e0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c95e3: jge 0x8c95e8 */
  if ((sf == of)) goto L_8c95e8;
L_8c95e5: /* 8c95e5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8c95e6: jmp 0x8c95e0 */
  goto L_8c95e0;
L_8c95e8: /* 8c95e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c95ea: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8c95ec: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8c95f2u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8c95f2: mov eax, dword ptr [esi + 0x1290] */
  eax = R32((uint32_t)(esi + 0x1290u));
/* 8c95f8: imul eax, dword ptr [esi + 0x128c] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x128cu)));
  eax = (uint32_t)r;
  }
/* 8c95ff: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8c9601: lea edi, [esi + 0x1358] */
  edi = (uint32_t)(esi + 0x1358u);
/* 8c9607: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c9608: mov ecx, edi */
  ecx = edi;
/* 8c960a: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8c9610u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8c9610: xor eax, eax */
  eax = 0;
/* 8c9612: mov cl, 0xff */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
L_8c9614: /* 8c9614: cmp eax, dword ptr [esi + 0x135c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x135cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c961a: jge 0x8c9633 */
  if ((sf == of)) goto L_8c9633;
L_8c961c: /* 8c961c: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8c961e: mov byte ptr [ebp - 0x14], cl */
  W8((uint32_t)(ebp + 0xffffffecu), (ecx & 0xffu));
/* 8c9621: mov byte ptr [ebp - 0x13], cl */
  W8((uint32_t)(ebp + 0xffffffedu), (ecx & 0xffu));
/* 8c9624: mov byte ptr [ebp - 0x12], cl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ecx & 0xffu));
/* 8c9627: mov byte ptr [ebp - 0x11], cl */
  W8((uint32_t)(ebp + 0xffffffefu), (ecx & 0xffu));
/* 8c962a: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8c962d: mov dword ptr [edx + eax*4], ebx */
  W32((uint32_t)(edx + eax*4), ebx);
/* 8c9630: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8c9631: jmp 0x8c9614 */
  goto L_8c9614;
L_8c9633: /* 8c9633: mov eax, dword ptr [esi + 0x340] */
  eax = R32((uint32_t)(esi + 0x340u));
/* 8c9639: mov eax, dword ptr [eax + 0xac] */
  eax = R32((uint32_t)(eax + 0xacu));
/* 8c963f: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 8c9642: lea ecx, [eax + 0x10] */
  ecx = (uint32_t)(eax + 0x10u);
/* 8c9645: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8c9647u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c9647: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
L_8c964a: /* 8c964a: cmp ebx, dword ptr [ebp + 0x18] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c964d: mov dword ptr [ebp + 0x10], ebx */
  W32((uint32_t)(ebp + 0x10u), ebx);
/* 8c9650: jge 0x8c99c4 */
  if ((sf == of)) goto L_8c99c4;
L_8c9656: /* 8c9656: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
L_8c9659: /* 8c9659: cmp edi, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c965c: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 8c965f: jge 0x8c99be */
  if ((sf == of)) goto L_8c99be;
L_8c9665: /* 8c9665: mov eax, dword ptr [esi + 0x340] */
  eax = R32((uint32_t)(esi + 0x340u));
/* 8c966b: mov cl, byte ptr [eax + 0x38] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x38u))) & 0xffu);
/* 8c966e: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c9670: je 0x8c9692 */
  if (zf) goto L_8c9692;
L_8c9672: /* 8c9672: cmp cl, 0xa */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8c9675: je 0x8c967b */
  if (zf) goto L_8c967b;
L_8c9677: /* 8c9677: xor eax, eax */
  eax = 0;
/* 8c9679: jmp 0x8c96a9 */
  goto L_8c96a9;
L_8c967b: /* 8c967b: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 8c967e: mov edx, dword ptr [eax + 0xac] */
  edx = R32((uint32_t)(eax + 0xacu));
/* 8c9684: imul ecx, ebx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(ebx);
  ecx = (uint32_t)r;
  }
/* 8c9687: mov eax, dword ptr [edx + 0x1c] */
  eax = R32((uint32_t)(edx + 0x1cu));
/* 8c968a: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8c968c: mov ax, word ptr [eax + ecx*2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + ecx*2))) & 0xffffu);
/* 8c9690: jmp 0x8c96a9 */
  goto L_8c96a9;
L_8c9692: /* 8c9692: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 8c9695: mov edx, dword ptr [eax + 0xac] */
  edx = R32((uint32_t)(eax + 0xacu));
/* 8c969b: imul ecx, ebx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(ebx);
  ecx = (uint32_t)r;
  }
/* 8c969e: add ecx, dword ptr [edx + 0x1c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x1cu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8c96a1: movzx ax, byte ptr [ecx + edi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(ecx + edi)))) & 0xffffu);
/* 8c96a6: shl eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
L_8c96a9: /* 8c96a9: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8c96ac: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 8c96af: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8c96b2: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8c96b5: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8c96b8: fild dword ptr [ebp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8c96bb: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 8c96be: lea ecx, [esi + 0x12ac] */
  ecx = (uint32_t)(esi + 0x12acu);
/* 8c96c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c96c5: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8c96c8: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8c96cb: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8c96ce: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 8c96d1: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 8c96d4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c96d5: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8c96d8: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8c96db: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8c96de: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 8c96e1: call dword ptr [0xcfa364] */
  esp -= 4; W32(esp, 0x8c96e7u); SPILL(); f_4e1af5(); if (g_unwind) return; /* Core!?TransformPointBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8c96e7: mov eax, dword ptr [esi + 0x128c] */
  eax = R32((uint32_t)(esi + 0x128cu));
/* 8c96ed: mov ecx, dword ptr [esi + 0x1280] */
  ecx = R32((uint32_t)(esi + 0x1280u));
/* 8c96f3: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* 8c96f6: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c96f8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c96fa: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8c96fd: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 8c9700: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8c9703: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8c9705: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8c9708: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8c970b: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8c970e: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8c9711: jle 0x8c99b8 */
  if ((zf || sf != of)) goto L_8c99b8;
L_8c9717: /* 8c9717: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c9719: jle 0x8c99b8 */
  if ((zf || sf != of)) goto L_8c99b8;
L_8c971f: /* 8c971f: mov eax, dword ptr [esi + 0x128c] */
  eax = R32((uint32_t)(esi + 0x128cu));
/* 8c9725: lea ecx, [ebx - 1] */
  ecx = (uint32_t)(ebx + 0xffffffffu);
/* 8c9728: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8c972b: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 8c972e: imul eax, dword ptr [ebp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x10u)));
  eax = (uint32_t)r;
  }
/* 8c9732: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8c9734: lea ecx, [edi - 1] */
  ecx = (uint32_t)(edi + 0xffffffffu);
/* 8c9737: mov edx, ecx */
  edx = ecx;
/* 8c9739: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8c973c: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 8c973f: mov edi, dword ptr [esi + 0x1328] */
  edi = R32((uint32_t)(esi + 0x1328u));
/* 8c9745: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  cf = ((int32_t)(int32_t)a >> (c - 1)) & 1;
  of = 0;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edx = r;
  }
/* 8c9748: mov ebx, 1 */
  ebx = 0x1u;
/* 8c974d: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 8c974f: mov ecx, dword ptr [edi + edx*4] */
  ecx = R32((uint32_t)(edi + edx*4));
/* 8c9752: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8c9755: mov edi, dword ptr [esi + 0x12a0] */
  edi = R32((uint32_t)(esi + 0x12a0u));
/* 8c975b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c975e: test ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c9760: lea ecx, [edx - 1] */
  ecx = (uint32_t)(edx + 0xffffffffu);
/* 8c9763: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 8c9766: lea ebx, [edi + ecx*8] */
  ebx = (uint32_t)(edi + ecx*8);
/* 8c9769: mov ecx, dword ptr [esi + 0x1280] */
  ecx = R32((uint32_t)(esi + 0x1280u));
/* 8c976f: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8c9772: lea edx, [edx + edx*2] */
  edx = (uint32_t)(edx + edx*2);
/* 8c9775: lea edx, [ecx + edx*4] */
  edx = (uint32_t)(ecx + edx*4);
/* 8c9778: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8c977b: mov edx, esp */
  edx = esp;
/* 8c977d: je 0x8c988f */
  if (zf) goto L_8c988f;
L_8c9783: /* 8c9783: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c9785: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8c9788: lea ecx, [ecx + eax*4 - 0xc] */
  ecx = (uint32_t)(ecx + eax*4 + 0xfffffff4u);
/* 8c978c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8c978e: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8c9790: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8c9793: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8c9796: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8c9799: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8c979c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8c979f: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8c97a1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c97a4: mov eax, esp */
  eax = esp;
/* 8c97a6: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8c97a8: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8c97ab: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8c97ae: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8c97b1: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8c97b4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8c97b7: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c97ba: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8c97bc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c97bf: mov ecx, esp */
  ecx = esp;
/* 8c97c1: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8c97c3: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8c97c6: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8c97c9: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8c97cc: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8c97cf: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 8c97d5: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x8c97dbu); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 8c97db: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 8c97de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c97df: mov ecx, eax */
  ecx = eax;
/* 8c97e1: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x8c97e7u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8c97e7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8c97e9: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 8c97eb: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8c97ee: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 8c97f1: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8c97f4: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8c97f7: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 8c97fa: mov eax, dword ptr [esi + 0x128c] */
  eax = R32((uint32_t)(esi + 0x128cu));
/* 8c9800: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 8c9803: imul eax, dword ptr [ebp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x10u)));
  eax = (uint32_t)r;
  }
/* 8c9807: mov ebx, dword ptr [esi + 0x12a0] */
  ebx = R32((uint32_t)(esi + 0x12a0u));
/* 8c980d: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c980f: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8c9811: lea edx, [ecx + ecx*2 - 3] */
  edx = (uint32_t)(ecx + ecx*2 + 0xfffffffdu);
/* 8c9815: lea edx, [ebx + edx*8] */
  edx = (uint32_t)(ebx + edx*8);
/* 8c9818: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8c981b: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8c981e: mov edx, dword ptr [esi + 0x1280] */
  edx = R32((uint32_t)(esi + 0x1280u));
/* 8c9824: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 8c9827: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8c982a: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8c982c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c982f: mov edx, esp */
  edx = esp;
/* 8c9831: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 8c9833: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 8c9836: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8c9839: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 8c983c: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8c983f: mov eax, dword ptr [esi + 0x1280] */
  eax = R32((uint32_t)(esi + 0x1280u));
/* 8c9845: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 8c9848: lea edx, [eax + ecx*4] */
  edx = (uint32_t)(eax + ecx*4);
/* 8c984b: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8c984d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c9850: mov eax, esp */
  eax = esp;
/* 8c9852: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8c9854: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8c9857: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8c985a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8c985d: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8c9860: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8c9863: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c9866: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8c9868: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c986b: mov ecx, esp */
  ecx = esp;
/* 8c986d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8c986f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8c9872: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8c9875: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8c9878: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8c987b: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* 8c9881: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x8c9887u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 8c9887: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 8c988a: jmp 0x8c9996 */
  goto L_8c9996;
L_8c988f: /* 8c988f: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c9891: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8c9894: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8c9897: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8c9899: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8c989b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8c989e: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8c98a1: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8c98a4: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8c98a7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8c98aa: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8c98ac: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c98af: mov eax, esp */
  eax = esp;
/* 8c98b1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8c98b3: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8c98b6: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8c98b9: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8c98bc: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8c98bf: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8c98c2: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c98c5: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8c98c7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c98ca: mov ecx, esp */
  ecx = esp;
/* 8c98cc: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8c98ce: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8c98d1: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8c98d4: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8c98d7: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8c98da: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 8c98e0: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x8c98e6u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 8c98e6: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8c98e9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c98ea: mov ecx, eax */
  ecx = eax;
/* 8c98ec: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x8c98f2u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8c98f2: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8c98f4: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 8c98f6: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8c98f9: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 8c98fc: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8c98ff: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8c9902: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 8c9905: mov eax, dword ptr [esi + 0x128c] */
  eax = R32((uint32_t)(esi + 0x128cu));
/* 8c990b: mov ebx, dword ptr [esi + 0x12a0] */
  ebx = R32((uint32_t)(esi + 0x12a0u));
/* 8c9911: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 8c9914: imul eax, dword ptr [ebp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x10u)));
  eax = (uint32_t)r;
  }
/* 8c9918: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c991a: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8c991c: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8c991f: lea edx, [ecx + ecx*2 - 3] */
  edx = (uint32_t)(ecx + ecx*2 + 0xfffffffdu);
/* 8c9923: lea edx, [ebx + edx*8] */
  edx = (uint32_t)(ebx + edx*8);
/* 8c9926: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8c9929: mov edx, dword ptr [esi + 0x1280] */
  edx = R32((uint32_t)(esi + 0x1280u));
/* 8c992f: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 8c9932: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8c9935: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c9938: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8c993a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c993d: mov edx, esp */
  edx = esp;
/* 8c993f: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 8c9941: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 8c9944: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8c9947: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 8c994a: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8c994d: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8c9950: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8c9952: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c9955: mov edx, esp */
  edx = esp;
/* 8c9957: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 8c9959: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 8c995c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8c995f: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 8c9962: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8c9965: mov eax, dword ptr [esi + 0x1280] */
  eax = R32((uint32_t)(esi + 0x1280u));
/* 8c996b: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 8c996e: lea edx, [eax + ecx*4 - 0xc] */
  edx = (uint32_t)(eax + ecx*4 + 0xfffffff4u);
/* 8c9972: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8c9974: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c9977: mov eax, esp */
  eax = esp;
/* 8c9979: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8c997b: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8c997e: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8c9981: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8c9984: lea ecx, [ebp - 0xb8] */
  ecx = (uint32_t)(ebp + 0xffffff48u);
/* 8c998a: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8c998d: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x8c9993u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 8c9993: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
L_8c9996: /* 8c9996: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c9997: mov ecx, eax */
  ecx = eax;
/* 8c9999: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x8c999fu); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8c999f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8c99a1: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8c99a4: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 8c99a7: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8c99aa: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8c99ac: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8c99af: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8c99b2: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8c99b5: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_8c99b8: /* 8c99b8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8c99b9: jmp 0x8c9659 */
  goto L_8c9659;
L_8c99be: /* 8c99be: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8c99bf: jmp 0x8c964a */
  goto L_8c964a;
L_8c99c4: /* 8c99c4: xor ebx, ebx */
  ebx = 0;
/* 8c99c6: xor edi, edi */
  edi = 0;
L_8c99c8: /* 8c99c8: cmp edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c99cb: jge 0x8c9a2b */
  if ((sf == of)) goto L_8c9a2b;
L_8c99cd: /* 8c99cd: mov ecx, edi */
  ecx = edi;
/* 8c99cf: imul ecx, ecx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x78u);
  ecx = (uint32_t)r;
  }
/* 8c99d2: lea eax, [ecx + esi] */
  eax = (uint32_t)(ecx + esi);
/* 8c99d5: mov ecx, dword ptr [eax + 0x350] */
  ecx = R32((uint32_t)(eax + 0x350u));
/* 8c99db: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c99dd: je 0x8c9a2b */
  if (zf) goto L_8c9a2b;
L_8c99df: /* 8c99df: mov eax, dword ptr [eax + 0x354] */
  eax = R32((uint32_t)(eax + 0x354u));
/* 8c99e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c99e7: je 0x8c9a2b */
  if (zf) goto L_8c9a2b;
L_8c99e9: /* 8c99e9: mov eax, dword ptr [eax + 0xac] */
  eax = R32((uint32_t)(eax + 0xacu));
/* 8c99ef: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 8c99f2: lea ecx, [eax + 0x10] */
  ecx = (uint32_t)(eax + 0x10u);
/* 8c99f5: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8c99f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c99f7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8c99f8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8c99f9: jmp 0x8c99c8 */
  goto L_8c99c8;
L_8c9a2b: /* 8c9a2b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8c9a2e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c9a2f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c9a30: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8c9a37: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c9a38: mov esp, ebp */
  esp = ebp;
/* 8c9a3a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c9a3b: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_8c99fb(void) {
  LOAD_REGS();
L_8c99fb: /* 8c99fb: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8c99fe: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8c9a03: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8c9a06: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c9a07: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8c9a0a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8c9a0fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8c9a0f(); return;
}

void f_8c9a0f(void) {
  LOAD_REGS();
L_8c9a0f: /* 8c9a0f: push 0xa1c23c */
  { uint32_t v = 0xa1c23cu; esp -= 4; W32(esp, v); }
/* 8c9a14: push 0xaecb80 */
  { uint32_t v = 0xaecb80u; esp -= 4; W32(esp, v); }
/* 8c9a19: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8c9a1fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8c9a1f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c9a22: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c9a24: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c9a26: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8c9a2bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8c9a2b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8c9a2e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c9a2f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c9a30: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8c9a37: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c9a38: mov esp, ebp */
  esp = ebp;
/* 8c9a3a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c9a3b: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_8c9b90(void) {
  LOAD_REGS();
L_8c9b90: /* 8c9b90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8c9b91: mov ebp, esp */
  ebp = esp;
/* 8c9b93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8c9b95: push 0x9d7c50 */
  { uint32_t v = 0x9d7c50u; esp -= 4; W32(esp, v); }
/* 8c9b9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8c9ba0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c9ba1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8c9ba8: sub esp, 0xec */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xecu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c9bae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c9baf: mov edx, ecx */
  edx = ecx;
/* 8c9bb1: mov ecx, dword ptr [edx + 0x80] */
  ecx = R32((uint32_t)(edx + 0x80u));
/* 8c9bb7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c9bb8: xor eax, eax */
  eax = 0;
/* 8c9bba: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c9bbd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c9bbe: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8c9bc1: mov dword ptr [ebp - 0x70], edx */
  W32((uint32_t)(ebp + 0xffffff90u), edx);
/* 8c9bc4: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 8c9bc7: je 0x8c9bde */
  if (zf) goto L_8c9bde;
L_8c9bc9: /* 8c9bc9: xor eax, eax */
  eax = 0;
/* 8c9bcb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8c9bce: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8c9bd5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c9bd6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c9bd7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c9bd8: mov esp, ebp */
  esp = ebp;
/* 8c9bda: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c9bdb: ret 0x38 */
  esp += 60; SPILL(); return;
L_8c9bde: /* 8c9bde: cmp dword ptr [ebp + 0x3c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x3cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8c9be1: jne 0x8c9c0c */
  if (!zf) goto L_8c9c0c;
L_8c9be3: /* 8c9be3: mov ecx, dword ptr [edx + 0x128c] */
  ecx = R32((uint32_t)(edx + 0x128cu));
/* 8c9be9: imul ecx, dword ptr [ebp + 0xc] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xcu)));
  ecx = (uint32_t)r;
  }
/* 8c9bed: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8c9bf0: mov edi, dword ptr [edx + 0x131c] */
  edi = R32((uint32_t)(edx + 0x131cu));
/* 8c9bf6: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8c9bf8: mov esi, ecx */
  esi = ecx;
/* 8c9bfa: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 8c9bfd: mov ebx, 1 */
  ebx = 0x1u;
/* 8c9c02: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 8c9c04: sar esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 8c9c07: test dword ptr [edi + esi*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + esi*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c9c0a: je 0x8c9bc9 */
  if (zf) goto L_8c9bc9;
L_8c9c0c: /* 8c9c0c: mov dword ptr [ebp - 0xa4], eax */
  W32((uint32_t)(ebp + 0xffffff5cu), eax);
/* 8c9c12: mov eax, dword ptr [edx + 0x1260] */
  eax = R32((uint32_t)(edx + 0x1260u));
/* 8c9c18: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 8c9c1b: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8c9c1e: mov dword ptr [ebp - 0x40], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0xbf800000u);
/* 8c9c25: jne 0x8c9c2e */
  if (!zf) goto L_8c9c2e;
L_8c9c27: /* 8c9c27: mov dword ptr [ebp - 0x40], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x3f800000u);
L_8c9c2e: /* 8c9c2e: mov eax, dword ptr [edx + 0x128c] */
  eax = R32((uint32_t)(edx + 0x128cu));
/* 8c9c34: fld dword ptr [ebp + 0x34] */
  { double v = F32((uint32_t)(ebp + 0x34u)); FPUSH(v); }
/* 8c9c37: imul eax, dword ptr [ebp + 0xc] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xcu)));
  eax = (uint32_t)r;
  }
/* 8c9c3b: fmul dword ptr [ebp - 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 8c9c3e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8c9c41: mov edi, dword ptr [edx + 0x1328] */
  edi = R32((uint32_t)(edx + 0x1328u));
/* 8c9c47: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c9c49: mov ecx, eax */
  ecx = eax;
/* 8c9c4b: mov esi, eax */
  esi = eax;
/* 8c9c4d: sar esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 8c9c50: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 8c9c53: mov ebx, 1 */
  ebx = 0x1u;
/* 8c9c58: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 8c9c5a: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8c9c5d: mov dword ptr [ebp + 0x3c], ebx */
  W32((uint32_t)(ebp + 0x3cu), ebx);
/* 8c9c60: mov ebx, dword ptr [edi + esi*4] */
  ebx = R32((uint32_t)(edi + esi*4));
/* 8c9c63: mov esi, dword ptr [ebp + 0x3c] */
  esi = R32((uint32_t)(ebp + 0x3cu));
/* 8c9c66: and ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8c9c68: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8c9c6b: neg ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ebx = r;
  }
/* 8c9c6d: sbb ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ebx = r;
  }
/* 8c9c6f: neg ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(0 - a);
  ebx = r;
  }
/* 8c9c71: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8c9c72: imul ecx, dword ptr [edx + 0x128c] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(edx + 0x128cu)));
  ecx = (uint32_t)r;
  }
/* 8c9c79: mov edx, dword ptr [edx + 0x1280] */
  edx = R32((uint32_t)(edx + 0x1280u));
/* 8c9c7f: lea ecx, [ecx + esi + 1] */
  ecx = (uint32_t)(ecx + esi + 0x1u);
/* 8c9c83: lea esi, [eax + eax*2] */
  esi = (uint32_t)(eax + eax*2);
/* 8c9c86: lea esi, [edx + esi*4] */
  esi = (uint32_t)(edx + esi*4);
/* 8c9c89: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 8c9c8b: lea eax, [eax + eax*2 + 3] */
  eax = (uint32_t)(eax + eax*2 + 0x3u);
/* 8c9c8f: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 8c9c92: mov dword ptr [ebp - 0x54], edi */
  W32((uint32_t)(ebp + 0xffffffacu), edi);
/* 8c9c95: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 8c9c98: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 8c9c9b: mov dword ptr [ebp - 0x4c], esi */
  W32((uint32_t)(ebp + 0xffffffb4u), esi);
/* 8c9c9e: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 8c9ca0: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 8c9ca3: mov dword ptr [ebp - 0x6c], esi */
  W32((uint32_t)(ebp + 0xffffff94u), esi);
/* 8c9ca6: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 8c9ca9: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 8c9cab: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8c9cae: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 8c9cb1: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 8c9cb4: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 8c9cb7: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 8c9cba: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 8c9cbd: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 8c9cbf: mov dword ptr [ebp - 0x68], esi */
  W32((uint32_t)(ebp + 0xffffff98u), esi);
/* 8c9cc2: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 8c9cc4: mov dword ptr [ebp - 0x7c], esi */
  W32((uint32_t)(ebp + 0xffffff84u), esi);
/* 8c9cc7: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 8c9cca: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 8c9ccd: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8c9cd0: lea ecx, [ecx + ecx*2 - 3] */
  ecx = (uint32_t)(ecx + ecx*2 + 0xfffffffdu);
/* 8c9cd4: lea edx, [edx + ecx*4] */
  edx = (uint32_t)(edx + ecx*4);
/* 8c9cd7: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 8c9cda: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8c9cdc: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 8c9cdf: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8c9ce2: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8c9ce5: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 8c9ce7: mov dword ptr [ebp - 0x98], edx */
  W32((uint32_t)(ebp + 0xffffff68u), edx);
/* 8c9ced: mov dword ptr [ebp - 0x50], edi */
  W32((uint32_t)(ebp + 0xffffffb0u), edi);
/* 8c9cf0: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 8c9cf3: mov dword ptr [ebp - 0x78], esi */
  W32((uint32_t)(ebp + 0xffffff88u), esi);
/* 8c9cf6: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 8c9cfc: mov dword ptr [ebp - 0xa0], eax */
  W32((uint32_t)(ebp + 0xffffff60u), eax);
/* 8c9d02: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 8c9d04: mov dword ptr [ebp - 0x9c], ecx */
  W32((uint32_t)(ebp + 0xffffff64u), ecx);
/* 8c9d0a: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 8c9d10: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8c9d12: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 8c9d15: fsub dword ptr [ebp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x28u)));
/* 8c9d18: fst dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0);
/* 8c9d1e: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 8c9d21: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 8c9d24: fsub dword ptr [ebp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x24u)));
/* 8c9d27: fst dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0);
/* 8c9d2d: fstp dword ptr [ebp + 0x3c] */
  WF32((uint32_t)(ebp + 0x3cu), ST0); FPOP();
/* 8c9d30: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8c9d33: fsub dword ptr [ebp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x20u)));
/* 8c9d36: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c9d38: fst dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0);
/* 8c9d3e: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8c9d41: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 8c9d44: je 0x8c9d69 */
  if (zf) goto L_8c9d69;
L_8c9d46: /* 8c9d46: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c9d48: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 8c9d4b: je 0x8c9d5e */
  if (zf) goto L_8c9d5e;
L_8c9d4d: /* 8c9d4d: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 8c9d50: lea edx, [ebp - 0xa0] */
  edx = (uint32_t)(ebp + 0xffffff60u);
/* 8c9d56: lea esi, [ebp - 0x88] */
  esi = (uint32_t)(ebp + 0xffffff78u);
/* 8c9d5c: jmp 0x8c9d87 */
  goto L_8c9d87;
L_8c9d5e: /* 8c9d5e: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 8c9d64: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* 8c9d67: jmp 0x8c9d84 */
  goto L_8c9d84;
L_8c9d69: /* 8c9d69: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c9d6b: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 8c9d6e: je 0x8c9d7b */
  if (zf) goto L_8c9d7b;
L_8c9d70: /* 8c9d70: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 8c9d73: lea edx, [ebp - 0x7c] */
  edx = (uint32_t)(ebp + 0xffffff84u);
/* 8c9d76: lea esi, [ebp - 0x20] */
  esi = (uint32_t)(ebp + 0xffffffe0u);
/* 8c9d79: jmp 0x8c9d87 */
  goto L_8c9d87;
L_8c9d7b: /* 8c9d7b: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 8c9d7e: lea esi, [ebp - 0xc8] */
  esi = (uint32_t)(ebp + 0xffffff38u);
L_8c9d84: /* 8c9d84: lea edx, [ebp - 0x6c] */
  edx = (uint32_t)(ebp + 0xffffff94u);
L_8c9d87: /* 8c9d87: call 0x8c43b0 */
  esp -= 4; W32(esp, 0x8c9d8cu); SPILL(); f_8c43b0(); if (g_unwind) return; RELOAD();
/* 8c9d8c: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 8c9d8f: mov ecx, eax */
  ecx = eax;
/* 8c9d91: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8c9d93: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 8c9d96: fmul dword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 8c9d99: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8c9d9c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8c9d9f: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 8c9da2: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8c9da5: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 8c9da8: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 8c9dab: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8c9dad: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8c9db0: fmul dword ptr [ebp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x3cu)));
/* 8c9db3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8c9db5: fcomp dword ptr [0xa1ba98] */
  fpu_com(ST0, F32((uint32_t)(0xa1ba98u)));
  FPOP();
/* 8c9dbb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c9dbd: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8c9dc0: jp 0x8ca20e */
  if (pf) goto L_8ca20e;
L_8c9dc6: /* 8c9dc6: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 8c9dc9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8c9dcb: fmul dword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 8c9dce: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8c9dd1: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 8c9dd4: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8c9dd7: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 8c9dda: mov dword ptr [ebp - 0xb4], edx */
  W32((uint32_t)(ebp + 0xffffff4cu), edx);
/* 8c9de0: lea edx, [ebp - 0xb4] */
  edx = (uint32_t)(ebp + 0xffffff4cu);
/* 8c9de6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c9de7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8c9de9: mov dword ptr [ebp - 0xb0], eax */
  W32((uint32_t)(ebp + 0xffffff50u), eax);
/* 8c9def: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8c9df2: lea eax, [ebp + 0x20] */
  eax = (uint32_t)(ebp + 0x20u);
/* 8c9df5: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 8c9df8: mov dword ptr [ebp - 0xac], ecx */
  W32((uint32_t)(ebp + 0xffffff54u), ecx);
/* 8c9dfe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c9dff: lea ecx, [ebp + 0x14] */
  ecx = (uint32_t)(ebp + 0x14u);
/* 8c9e02: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8c9e04: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c9e05: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 8c9e08: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c9e09: fstp dword ptr [ebp - 0xa8] */
  WF32((uint32_t)(ebp + 0xffffff58u), ST0); FPOP();
/* 8c9e0f: call 0x6c8fbc */
  esp -= 4; W32(esp, 0x8c9e14u); SPILL(); f_6c8fbc(); if (g_unwind) return; RELOAD();
/* 8c9e14: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 8c9e17: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 8c9e1a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c9e1d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c9e1f: je 0x8c9e89 */
  if (zf) goto L_8c9e89;
L_8c9e21: /* 8c9e21: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8c9e24: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 8c9e27: fsub dword ptr [ebp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x28u)));
/* 8c9e2a: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8c9e2d: fsub dword ptr [ebp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x24u)));
/* 8c9e30: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8c9e33: fsub dword ptr [ebp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x20u)));
/* 8c9e36: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8c9e39: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8c9e3c: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8c9e3f: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 8c9e42: fsub dword ptr [ebp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x28u)));
/* 8c9e45: fld dword ptr [edi + 0xc] */
  { double v = F32((uint32_t)(edi + 0xcu)); FPUSH(v); }
/* 8c9e48: fsub dword ptr [ebp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x24u)));
/* 8c9e4b: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 8c9e4e: fsub dword ptr [ebp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x20u)));
/* 8c9e51: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 8c9e57: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 8c9e5d: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 8c9e60: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8c9e66u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8c9e66: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 8c9e6c: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 8c9e6f: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8c9e75u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8c9e75: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8c9e78: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8c9e7b: fcomp dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
  FPOP();
/* 8c9e7e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c9e80: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8c9e83: jp 0x8ca211 */
  if (pf) goto L_8ca211;
L_8c9e89: /* 8c9e89: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8c9e8c: fsub dword ptr [ebp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x28u)));
/* 8c9e8f: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8c9e92: fsub dword ptr [ebp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x24u)));
/* 8c9e95: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8c9e98: fsub dword ptr [ebp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x20u)));
/* 8c9e9b: fmul dword ptr [ebp - 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 8c9e9e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8c9ea0: fmul dword ptr [ebp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x3cu)));
/* 8c9ea3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8c9ea5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8c9ea7: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 8c9eaa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8c9eac: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 8c9eaf: fmul dword ptr [ebp - 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 8c9eb2: fld dword ptr [ebp + 0x3c] */
  { double v = F32((uint32_t)(ebp + 0x3cu)); FPUSH(v); }
/* 8c9eb5: fmul dword ptr [ebp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x3cu)));
/* 8c9eb8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8c9eba: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 8c9ebd: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 8c9ec0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8c9ec2: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 8c9ec4: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8c9eca: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c9ecc: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c9ecf: jne 0x8ca20a */
  if (!zf) goto L_8ca20a;
L_8c9ed5: /* 8c9ed5: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 8c9edb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c9edd: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8c9ee0: jp 0x8ca211 */
  if (pf) goto L_8ca211;
L_8c9ee6: /* 8c9ee6: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c9ee8: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 8c9eee: jne 0x8c9ef3 */
  if (!zf) goto L_8c9ef3;
L_8c9ef0: /* 8c9ef0: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
L_8c9ef3: /* 8c9ef3: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8c9ef6: fmul dword ptr [ebp - 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 8c9ef9: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 8c9efc: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8c9eff: fmul dword ptr [ebp - 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 8c9f02: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8c9f05: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8c9f08: fmul dword ptr [ebp - 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 8c9f0b: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8c9f0e: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 8c9f11: fsub dword ptr [ebp - 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 8c9f14: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 8c9f17: fsub dword ptr [ebp - 0x50] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 8c9f1a: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 8c9f1d: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 8c9f20: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8c9f23: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8c9f25: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8c9f27: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 8c9f2a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8c9f2c: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8c9f2f: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8c9f31: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 8c9f34: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8c9f36: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 8c9f39: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8c9f3b: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 8c9f3e: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 8c9f41: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8c9f43: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 8c9f46: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8c9f48: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 8c9f4b: fmul dword ptr [ebp - 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 8c9f4e: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8c9f51: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 8c9f54: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8c9f56: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8c9f58: fmul dword ptr [ebp - 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffacu)));
/* 8c9f5b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8c9f5d: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8c9f60: fmul dword ptr [ebp - 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 8c9f63: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8c9f66: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8c9f69: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8c9f6b: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8c9f6d: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8c9f70: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 8c9f72: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8c9f74: fcomp dword ptr [ebp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x2cu)));
  FPOP();
/* 8c9f77: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c9f79: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8c9f7c: jp 0x8ca211 */
  if (pf) goto L_8ca211;
L_8c9f82: /* 8c9f82: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 8c9f85: fsub dword ptr [ebp - 0x64] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 8c9f88: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 8c9f8b: fsub dword ptr [ebp - 0x68] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff98u)));
/* 8c9f8e: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8c9f90: fsub dword ptr [ebp - 0x6c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff94u)));
/* 8c9f93: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8c9f96: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8c9f98: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8c9f9a: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 8c9f9d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8c9f9f: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 8c9fa2: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8c9fa4: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 8c9fa7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8c9fa9: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 8c9fac: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8c9fae: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8c9fb1: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 8c9fb4: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8c9fb6: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 8c9fb9: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8c9fbb: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 8c9fbe: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8c9fc1: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8c9fc4: fmul dword ptr [ebp - 0x64] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 8c9fc7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8c9fc9: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8c9fcb: fmul dword ptr [ebp - 0x6c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff94u)));
/* 8c9fce: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8c9fd0: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8c9fd3: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8c9fd6: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8c9fd9: fmul dword ptr [ebp - 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 8c9fdc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8c9fde: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8c9fe0: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8c9fe3: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 8c9fe5: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8c9fe7: fcomp dword ptr [ebp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x2cu)));
  FPOP();
/* 8c9fea: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c9fec: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8c9fef: jp 0x8ca211 */
  if (pf) goto L_8ca211;
L_8c9ff5: /* 8c9ff5: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 8c9ff8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8c9ffa: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 8c9ffd: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8ca000: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 8ca003: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 8ca006: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 8ca009: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 8ca00c: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 8ca00e: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8ca011: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ca013: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8ca015: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 8ca018: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ca01a: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 8ca01d: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8ca01f: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 8ca022: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8ca025: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 8ca028: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ca02a: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 8ca02d: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8ca030: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ca032: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8ca035: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 8ca038: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ca03a: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 8ca03d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ca03f: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8ca042: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8ca045: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8ca048: fmul dword ptr [ebp - 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 8ca04b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ca04d: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8ca050: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8ca052: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ca054: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8ca057: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8ca05a: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ca05d: fmul dword ptr [ebp - 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 8ca060: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ca062: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8ca064: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8ca067: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 8ca069: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ca06b: fcomp dword ptr [ebp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x2cu)));
  FPOP();
/* 8ca06e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ca070: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ca073: jp 0x8ca211 */
  if (pf) goto L_8ca211;
L_8ca079: /* 8ca079: fld dword ptr [ebp - 0x8c] */
  { double v = F32((uint32_t)(ebp + 0xffffff74u)); FPUSH(v); }
/* 8ca07f: mov ecx, dword ptr [ebp - 0x90] */
  ecx = R32((uint32_t)(ebp + 0xffffff70u));
/* 8ca085: fld dword ptr [ebp - 0x94] */
  { double v = F32((uint32_t)(ebp + 0xffffff6cu)); FPUSH(v); }
/* 8ca08b: mov dword ptr [ebp - 0x88], ecx */
  W32((uint32_t)(ebp + 0xffffff78u), ecx);
/* 8ca091: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 8ca097: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 8ca09d: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 8ca0a0: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8ca0a6u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8ca0a6: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8ca0a9: fld dword ptr [ebp - 0x8c] */
  { double v = F32((uint32_t)(ebp + 0xffffff74u)); FPUSH(v); }
/* 8ca0af: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8ca0b2: fld dword ptr [ebp - 0x94] */
  { double v = F32((uint32_t)(ebp + 0xffffff6cu)); FPUSH(v); }
/* 8ca0b8: fst dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0);
/* 8ca0bb: lea esi, [edi + 8] */
  esi = (uint32_t)(edi + 0x8u);
/* 8ca0be: mov edx, esi */
  edx = esi;
/* 8ca0c0: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8ca0c2: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8ca0c5: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8ca0c7: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ca0ca: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8ca0cd: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8ca0d0: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8ca0d3: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8ca0d6: lea eax, [edi + 0x14] */
  eax = (uint32_t)(edi + 0x14u);
/* 8ca0d9: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8ca0db: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8ca0de: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8ca0e1: mov edx, dword ptr [ebp - 0x90] */
  edx = R32((uint32_t)(ebp + 0xffffff70u));
/* 8ca0e7: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8ca0ea: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8ca0ed: fsub dword ptr [ebp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x28u)));
/* 8ca0f0: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 8ca0f3: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8ca0f6: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 8ca0f9: fsub dword ptr [ebp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x24u)));
/* 8ca0fc: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8ca0fe: fsub dword ptr [ebp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x20u)));
/* 8ca101: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 8ca104: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ca106: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8ca108: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ca10a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ca10c: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8ca10e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ca110: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8ca113: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 8ca116: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8ca118: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8ca11a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ca11c: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 8ca11e: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 8ca120: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ca122: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 8ca124: fstp dword ptr [edi + 0x24] */
  WF32((uint32_t)(edi + 0x24u), ST0); FPOP();
/* 8ca127: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ca129: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ca12b: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x8ca131u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 8ca131: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 8ca134: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 8ca139: fld dword ptr [0x9f7194] */
  { double v = F32((uint32_t)(0x9f7194u)); FPUSH(v); }
/* 8ca13f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ca141: fdiv dword ptr [ebp + 0x10] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x10u)));
/* 8ca144: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ca145: fsubr dword ptr [edi + 0x24] */
  ST0 = (F32((uint32_t)(edi + 0x24u))) - ST0;
/* 8ca148: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8ca14b: call 0x6c44ee */
  esp -= 4; W32(esp, 0x8ca150u); SPILL(); f_6c44ee(); if (g_unwind) return; RELOAD();
/* 8ca150: fst dword ptr [edi + 0x24] */
  WF32((uint32_t)(edi + 0x24u), ST0);
/* 8ca153: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ca156: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8ca159: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ca15b: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 8ca15e: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8ca161: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ca163: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8ca166: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8ca169: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ca16b: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8ca16e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ca170: fld dword ptr [ebp + 0x28] */
  { double v = F32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 8ca173: fadd dword ptr [ebp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x10u)));
/* 8ca176: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 8ca179: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8ca17c: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8ca17f: fadd dword ptr [ebp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x20u)));
/* 8ca182: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8ca185: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8ca188: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 8ca18a: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
/* 8ca18d: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8ca190: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ca193: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8ca196: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8ca199: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ca19c: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 8ca19f: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 8ca1a2: mov esi, dword ptr [ebp - 0x70] */
  esi = R32((uint32_t)(ebp + 0xffffff90u));
/* 8ca1a5: je 0x8ca1bb */
  if (zf) goto L_8ca1bb;
L_8ca1a7: /* 8ca1a7: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8ca1aa: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8ca1ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ca1ae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ca1af: mov ecx, esi */
  ecx = esi;
/* 8ca1b1: call 0x6c1046 */
  esp -= 4; W32(esp, 0x8ca1b6u); SPILL(); f_6c1046(); if (g_unwind) return; RELOAD();
/* 8ca1b6: mov dword ptr [edi + 0x2c], eax */
  W32((uint32_t)(edi + 0x2cu), eax);
/* 8ca1b9: jmp 0x8ca1c2 */
  goto L_8ca1c2;
L_8ca1bb: /* 8ca1bb: mov dword ptr [edi + 0x2c], 0 */
  W32((uint32_t)(edi + 0x2cu), 0x0u);
L_8ca1c2: /* 8ca1c2: mov dword ptr [edi + 4], esi */
  W32((uint32_t)(edi + 0x4u), esi);
/* 8ca1c5: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 8ca1c8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ca1ca: je 0x8ca1fe */
  if (zf) goto L_8ca1fe;
L_8ca1cc: /* 8ca1cc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8ca1ce: lea eax, [ebp - 0xf8] */
  eax = (uint32_t)(ebp + 0xffffff08u);
/* 8ca1d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ca1d5: call dword ptr [edx + 0xb4] */
  { uint32_t t = R32((uint32_t)(edx + 0xb4u)); esp -= 4; W32(esp, 0x8ca1dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ca1db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ca1dc: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 8ca1e2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ca1e3: lea esi, [edi + 0x14] */
  esi = (uint32_t)(edi + 0x14u);
/* 8ca1e6: mov ecx, esi */
  ecx = esi;
/* 8ca1e8: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x8ca1eeu); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8ca1ee: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8ca1f0: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 8ca1f2: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8ca1f5: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 8ca1f8: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8ca1fb: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
L_8ca1fe: /* 8ca1fe: mov dword ptr [ebp - 0xa4], 1 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x1u);
/* 8ca208: jmp 0x8ca211 */
  goto L_8ca211;
L_8ca20a: /* 8ca20a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ca20c: jmp 0x8ca211 */
  goto L_8ca211;
L_8ca20e: /* 8ca20e: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
L_8ca211: /* 8ca211: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ca213: je 0x8ca240 */
  if (zf) goto L_8ca240;
L_8ca215: /* 8ca215: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 8ca218: test byte ptr [eax + 0x1260], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1260u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ca21f: lea eax, [ebp - 0xa0] */
  eax = (uint32_t)(ebp + 0xffffff60u);
/* 8ca225: je 0x8ca232 */
  if (zf) goto L_8ca232;
L_8ca227: /* 8ca227: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 8ca22a: lea esi, [ebp - 0xc8] */
  esi = (uint32_t)(ebp + 0xffffff38u);
/* 8ca230: jmp 0x8ca266 */
  goto L_8ca266;
L_8ca232: /* 8ca232: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 8ca235: lea edx, [ebp - 0x6c] */
  edx = (uint32_t)(ebp + 0xffffff94u);
/* 8ca238: lea esi, [ebp - 0x88] */
  esi = (uint32_t)(ebp + 0xffffff78u);
/* 8ca23e: jmp 0x8ca269 */
  goto L_8ca269;
L_8ca240: /* 8ca240: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 8ca243: test byte ptr [ecx + 0x1260], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x1260u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ca24a: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 8ca24d: je 0x8ca25d */
  if (zf) goto L_8ca25d;
L_8ca24f: /* 8ca24f: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 8ca252: lea edx, [ebp - 0xa0] */
  edx = (uint32_t)(ebp + 0xffffff60u);
/* 8ca258: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* 8ca25b: jmp 0x8ca269 */
  goto L_8ca269;
L_8ca25d: /* 8ca25d: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 8ca263: lea esi, [ebp - 0x20] */
  esi = (uint32_t)(ebp + 0xffffffe0u);
L_8ca266: /* 8ca266: lea edx, [ebp - 0x7c] */
  edx = (uint32_t)(ebp + 0xffffff84u);
L_8ca269: /* 8ca269: call 0x8c43b0 */
  esp -= 4; W32(esp, 0x8ca26eu); SPILL(); f_8c43b0(); if (g_unwind) return; RELOAD();
/* 8ca26e: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 8ca271: mov ecx, eax */
  ecx = eax;
/* 8ca273: mov edx, ecx */
  edx = ecx;
/* 8ca275: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8ca277: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 8ca27a: fmul dword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 8ca27d: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8ca280: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8ca283: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 8ca286: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8ca289: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 8ca28c: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 8ca28f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ca291: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8ca294: fmul dword ptr [ebp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x3cu)));
/* 8ca297: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ca299: fcomp dword ptr [0xa1ba98] */
  fpu_com(ST0, F32((uint32_t)(0xa1ba98u)));
  FPOP();
/* 8ca29f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ca2a1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ca2a4: jp 0x8ca72e */
  if (pf) goto L_8ca72e;
L_8ca2aa: /* 8ca2aa: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8ca2ad: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8ca2af: fmul dword ptr [ebp - 0x74] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff8cu)));
/* 8ca2b2: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8ca2b5: fld dword ptr [ebp - 0x7c] */
  { double v = F32((uint32_t)(ebp + 0xffffff84u)); FPUSH(v); }
/* 8ca2b8: mov dword ptr [ebp - 0xb4], eax */
  W32((uint32_t)(ebp + 0xffffff4cu), eax);
/* 8ca2be: fmul dword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 8ca2c1: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 8ca2c4: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* 8ca2ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ca2cb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ca2cd: mov dword ptr [ebp - 0xb0], edx */
  W32((uint32_t)(ebp + 0xffffff50u), edx);
/* 8ca2d3: fld dword ptr [ebp - 0x78] */
  { double v = F32((uint32_t)(ebp + 0xffffff88u)); FPUSH(v); }
/* 8ca2d6: lea edx, [ebp + 0x20] */
  edx = (uint32_t)(ebp + 0x20u);
/* 8ca2d9: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 8ca2dc: mov dword ptr [ebp - 0xac], eax */
  W32((uint32_t)(ebp + 0xffffff54u), eax);
/* 8ca2e2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ca2e3: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 8ca2e6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ca2e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ca2e9: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8ca2ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ca2ed: fstp dword ptr [ebp - 0xa8] */
  WF32((uint32_t)(ebp + 0xffffff58u), ST0); FPOP();
/* 8ca2f3: call 0x6c8fbc */
  esp -= 4; W32(esp, 0x8ca2f8u); SPILL(); f_6c8fbc(); if (g_unwind) return; RELOAD();
/* 8ca2f8: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 8ca2fb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ca2fe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ca300: je 0x8ca36a */
  if (zf) goto L_8ca36a;
L_8ca302: /* 8ca302: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ca305: lea ecx, [ebp + 0x14] */
  ecx = (uint32_t)(ebp + 0x14u);
/* 8ca308: fsub dword ptr [ebp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x28u)));
/* 8ca30b: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8ca30e: fsub dword ptr [ebp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x24u)));
/* 8ca311: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8ca314: fsub dword ptr [ebp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x20u)));
/* 8ca317: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 8ca31a: fstp dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0); FPOP();
/* 8ca31d: fstp dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0); FPOP();
/* 8ca320: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 8ca323: fsub dword ptr [ebp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x28u)));
/* 8ca326: fld dword ptr [edi + 0xc] */
  { double v = F32((uint32_t)(edi + 0xcu)); FPUSH(v); }
/* 8ca329: fsub dword ptr [ebp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x24u)));
/* 8ca32c: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 8ca32f: fsub dword ptr [ebp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x20u)));
/* 8ca332: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 8ca338: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 8ca33e: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 8ca341: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8ca347u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8ca347: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 8ca34d: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 8ca350: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8ca356u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8ca356: fstp dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0); FPOP();
/* 8ca359: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8ca35c: fcomp dword ptr [ebp + 0x1c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x1cu)));
  FPOP();
/* 8ca35f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ca361: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ca364: jp 0x8ca72e */
  if (pf) goto L_8ca72e;
L_8ca36a: /* 8ca36a: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ca36d: fsub dword ptr [ebp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x28u)));
/* 8ca370: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8ca373: fsub dword ptr [ebp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x24u)));
/* 8ca376: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8ca379: fsub dword ptr [ebp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x20u)));
/* 8ca37c: fmul dword ptr [ebp - 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 8ca37f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ca381: fmul dword ptr [ebp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x3cu)));
/* 8ca384: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ca386: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ca388: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 8ca38b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ca38d: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 8ca390: fmul dword ptr [ebp - 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 8ca393: fld dword ptr [ebp + 0x3c] */
  { double v = F32((uint32_t)(ebp + 0x3cu)); FPUSH(v); }
/* 8ca396: fmul dword ptr [ebp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x3cu)));
/* 8ca399: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ca39b: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 8ca39e: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 8ca3a1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ca3a3: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 8ca3a5: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8ca3ab: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ca3ad: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ca3b0: jne 0x8ca72c */
  if (!zf) goto L_8ca72c;
L_8ca3b6: /* 8ca3b6: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 8ca3bc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ca3be: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ca3c1: jp 0x8ca72e */
  if (pf) goto L_8ca72e;
L_8ca3c7: /* 8ca3c7: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ca3c9: je 0x8ca3d9 */
  if (zf) goto L_8ca3d9;
L_8ca3cb: /* 8ca3cb: lea esi, [ebp - 0xa0] */
  esi = (uint32_t)(ebp + 0xffffff60u);
/* 8ca3d1: lea edx, [ebp - 0x6c] */
  edx = (uint32_t)(ebp + 0xffffff94u);
/* 8ca3d4: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 8ca3d7: jmp 0x8ca3e5 */
  goto L_8ca3e5;
L_8ca3d9: /* 8ca3d9: lea esi, [ebp - 0x54] */
  esi = (uint32_t)(ebp + 0xffffffacu);
/* 8ca3dc: lea edx, [ebp - 0x7c] */
  edx = (uint32_t)(ebp + 0xffffff84u);
/* 8ca3df: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
L_8ca3e5: /* 8ca3e5: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8ca3e8: mov eax, esi */
  eax = esi;
/* 8ca3ea: fmul dword ptr [ebp - 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 8ca3ed: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8ca3ef: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 8ca3f2: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 8ca3f5: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 8ca3f8: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8ca3fb: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8ca3fe: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 8ca401: fmul dword ptr [ebp - 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 8ca404: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8ca407: fstp dword ptr [ebp + 0x3c] */
  WF32((uint32_t)(ebp + 0x3cu), ST0); FPOP();
/* 8ca40a: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8ca40d: fmul dword ptr [ebp - 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 8ca410: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 8ca413: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 8ca416: fsub dword ptr [esi + 8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x8u)));
/* 8ca419: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 8ca41c: fsub dword ptr [esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4u)));
/* 8ca41f: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 8ca421: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 8ca423: fld dword ptr [ebp + 0x3c] */
  { double v = F32((uint32_t)(ebp + 0x3cu)); FPUSH(v); }
/* 8ca426: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ca428: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8ca42a: fmul dword ptr [ebp - 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 8ca42d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ca42f: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8ca432: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8ca434: fmul dword ptr [ebp - 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 8ca437: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ca439: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 8ca43c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ca43e: fstp dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0); FPOP();
/* 8ca441: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 8ca444: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ca446: fmul dword ptr [ebp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x3cu)));
/* 8ca449: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ca44b: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8ca44e: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 8ca451: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8ca454: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8ca457: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ca459: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8ca45c: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8ca45e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ca460: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8ca463: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 8ca466: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ca469: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8ca46c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ca46e: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8ca470: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8ca473: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 8ca475: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ca477: fcomp dword ptr [ebp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x2cu)));
  FPOP();
/* 8ca47a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ca47c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ca47f: jp 0x8ca72e */
  if (pf) goto L_8ca72e;
L_8ca485: /* 8ca485: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 8ca488: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8ca48a: fsub dword ptr [edx + 8] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x8u)));
/* 8ca48d: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8ca490: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 8ca493: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8ca496: fsub dword ptr [edx + 4] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x4u)));
/* 8ca499: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8ca49c: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8ca49e: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 8ca4a0: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8ca4a3: fld dword ptr [ebp + 0x3c] */
  { double v = F32((uint32_t)(ebp + 0x3cu)); FPUSH(v); }
/* 8ca4a6: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8ca4a9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ca4ab: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8ca4ad: fmul dword ptr [ebp - 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 8ca4b0: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ca4b2: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8ca4b5: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8ca4b7: fmul dword ptr [ebp - 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 8ca4ba: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ca4bc: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 8ca4bf: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ca4c1: fstp dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0); FPOP();
/* 8ca4c4: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 8ca4c7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ca4c9: fmul dword ptr [ebp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x3cu)));
/* 8ca4cc: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ca4ce: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8ca4d1: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 8ca4d4: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8ca4d7: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8ca4da: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ca4dc: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8ca4df: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8ca4e1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ca4e3: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8ca4e6: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 8ca4e9: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ca4ec: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8ca4ef: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ca4f1: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8ca4f3: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8ca4f6: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 8ca4f8: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ca4fa: fcomp dword ptr [ebp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x2cu)));
  FPOP();
/* 8ca4fd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ca4ff: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ca502: jp 0x8ca72e */
  if (pf) goto L_8ca72e;
L_8ca508: /* 8ca508: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8ca50b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8ca50d: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 8ca510: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8ca513: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8ca516: mov dword ptr [ebp - 0x5c], edx */
  W32((uint32_t)(ebp + 0xffffffa4u), edx);
/* 8ca519: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 8ca51c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8ca51e: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 8ca520: fld dword ptr [ebp + 0x3c] */
  { double v = F32((uint32_t)(ebp + 0x3cu)); FPUSH(v); }
/* 8ca523: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ca525: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8ca527: fmul dword ptr [ebp - 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 8ca52a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ca52c: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8ca52f: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8ca531: fmul dword ptr [ebp - 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 8ca534: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 8ca537: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 8ca53a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ca53c: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 8ca53f: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 8ca542: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ca544: fstp dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0); FPOP();
/* 8ca547: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 8ca54a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ca54c: fmul dword ptr [ebp + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x3cu)));
/* 8ca54f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ca551: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 8ca554: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 8ca557: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 8ca55a: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8ca55d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ca55f: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 8ca562: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8ca564: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ca566: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8ca569: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 8ca56c: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ca56f: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8ca572: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ca574: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8ca576: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8ca579: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 8ca57b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ca57d: fcomp dword ptr [ebp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x2cu)));
  FPOP();
/* 8ca580: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ca582: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ca585: jp 0x8ca72e */
  if (pf) goto L_8ca72e;
L_8ca58b: /* 8ca58b: fld dword ptr [ebp - 0x8c] */
  { double v = F32((uint32_t)(ebp + 0xffffff74u)); FPUSH(v); }
/* 8ca591: mov ecx, dword ptr [ebp - 0x90] */
  ecx = R32((uint32_t)(ebp + 0xffffff70u));
/* 8ca597: fld dword ptr [ebp - 0x94] */
  { double v = F32((uint32_t)(ebp + 0xffffff6cu)); FPUSH(v); }
/* 8ca59d: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* 8ca5a0: fstp dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0); FPOP();
/* 8ca5a3: lea ecx, [ebp + 0x14] */
  ecx = (uint32_t)(ebp + 0x14u);
/* 8ca5a6: fstp dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0); FPOP();
/* 8ca5a9: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x8ca5afu); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 8ca5af: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8ca5b2: fld dword ptr [ebp - 0x8c] */
  { double v = F32((uint32_t)(ebp + 0xffffff74u)); FPUSH(v); }
/* 8ca5b8: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8ca5bb: fld dword ptr [ebp - 0x94] */
  { double v = F32((uint32_t)(ebp + 0xffffff6cu)); FPUSH(v); }
/* 8ca5c1: fst dword ptr [ebp + 0x30] */
  WF32((uint32_t)(ebp + 0x30u), ST0);
/* 8ca5c4: lea esi, [edi + 8] */
  esi = (uint32_t)(edi + 0x8u);
/* 8ca5c7: mov edx, esi */
  edx = esi;
/* 8ca5c9: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8ca5cb: fstp dword ptr [ebp + 0x34] */
  WF32((uint32_t)(ebp + 0x34u), ST0); FPOP();
/* 8ca5ce: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8ca5d0: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ca5d3: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8ca5d6: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8ca5d9: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8ca5dc: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8ca5df: lea ebx, [edi + 0x14] */
  ebx = (uint32_t)(edi + 0x14u);
/* 8ca5e2: mov ecx, ebx */
  ecx = ebx;
/* 8ca5e4: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8ca5e6: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8ca5e9: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8ca5ec: mov eax, dword ptr [ebp - 0x90] */
  eax = R32((uint32_t)(ebp + 0xffffff70u));
/* 8ca5f2: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8ca5f5: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8ca5f8: fsub dword ptr [ebp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x28u)));
/* 8ca5fb: mov dword ptr [ebp + 0x2c], eax */
  W32((uint32_t)(ebp + 0x2cu), eax);
/* 8ca5fe: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8ca601: lea ecx, [ebp + 0x2c] */
  ecx = (uint32_t)(ebp + 0x2cu);
/* 8ca604: fsub dword ptr [ebp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x24u)));
/* 8ca607: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8ca609: fsub dword ptr [ebp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x20u)));
/* 8ca60c: fmul dword ptr [ebp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x2cu)));
/* 8ca60f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ca611: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8ca613: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ca615: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ca617: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8ca619: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ca61b: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 8ca61e: fmul dword ptr [ebp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x2cu)));
/* 8ca621: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8ca623: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8ca625: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ca627: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 8ca629: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 8ca62b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ca62d: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 8ca62f: fstp dword ptr [edi + 0x24] */
  WF32((uint32_t)(edi + 0x24u), ST0); FPOP();
/* 8ca632: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ca634: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ca636: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x8ca63cu); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 8ca63c: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 8ca63f: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 8ca644: fld dword ptr [0x9f7194] */
  { double v = F32((uint32_t)(0x9f7194u)); FPUSH(v); }
/* 8ca64a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ca64c: fdiv dword ptr [ebp + 0x10] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x10u)));
/* 8ca64f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ca650: fsubr dword ptr [edi + 0x24] */
  ST0 = (F32((uint32_t)(edi + 0x24u))) - ST0;
/* 8ca653: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8ca656: call 0x6c44ee */
  esp -= 4; W32(esp, 0x8ca65bu); SPILL(); f_6c44ee(); if (g_unwind) return; RELOAD();
/* 8ca65b: fst dword ptr [edi + 0x24] */
  WF32((uint32_t)(edi + 0x24u), ST0);
/* 8ca65e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ca661: fld dword ptr [ebp + 0x34] */
  { double v = F32((uint32_t)(ebp + 0x34u)); FPUSH(v); }
/* 8ca664: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ca666: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 8ca669: fld dword ptr [ebp + 0x30] */
  { double v = F32((uint32_t)(ebp + 0x30u)); FPUSH(v); }
/* 8ca66c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ca66e: fstp dword ptr [ebp + 0x3c] */
  WF32((uint32_t)(ebp + 0x3cu), ST0); FPOP();
/* 8ca671: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 8ca674: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ca676: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 8ca67c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ca67e: fld dword ptr [ebp + 0x28] */
  { double v = F32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 8ca681: fadd dword ptr [ebp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x10u)));
/* 8ca684: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 8ca687: fadd dword ptr [ebp + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x3cu)));
/* 8ca68a: fld dword ptr [ebp - 0x88] */
  { double v = F32((uint32_t)(ebp + 0xffffff78u)); FPUSH(v); }
/* 8ca690: fadd dword ptr [ebp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x20u)));
/* 8ca693: fstp dword ptr [ebp + 0x20] */
  WF32((uint32_t)(ebp + 0x20u), ST0); FPOP();
/* 8ca696: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 8ca699: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 8ca69b: fstp dword ptr [ebp + 0x24] */
  WF32((uint32_t)(ebp + 0x24u), ST0); FPOP();
/* 8ca69e: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 8ca6a1: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 8ca6a4: fstp dword ptr [ebp + 0x28] */
  WF32((uint32_t)(ebp + 0x28u), ST0); FPOP();
/* 8ca6a7: mov eax, dword ptr [ebp + 0x28] */
  eax = R32((uint32_t)(ebp + 0x28u));
/* 8ca6aa: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 8ca6ad: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
/* 8ca6b0: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ca6b3: mov esi, dword ptr [ebp - 0x70] */
  esi = R32((uint32_t)(ebp + 0xffffff90u));
/* 8ca6b6: je 0x8ca6cc */
  if (zf) goto L_8ca6cc;
L_8ca6b8: /* 8ca6b8: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8ca6bb: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8ca6be: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ca6bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ca6c0: mov ecx, esi */
  ecx = esi;
/* 8ca6c2: call 0x6c1046 */
  esp -= 4; W32(esp, 0x8ca6c7u); SPILL(); f_6c1046(); if (g_unwind) return; RELOAD();
/* 8ca6c7: mov dword ptr [edi + 0x2c], eax */
  W32((uint32_t)(edi + 0x2cu), eax);
/* 8ca6ca: jmp 0x8ca6d3 */
  goto L_8ca6d3;
L_8ca6cc: /* 8ca6cc: mov dword ptr [edi + 0x2c], 0 */
  W32((uint32_t)(edi + 0x2cu), 0x0u);
L_8ca6d3: /* 8ca6d3: mov dword ptr [edi + 4], esi */
  W32((uint32_t)(edi + 0x4u), esi);
/* 8ca6d6: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 8ca6d9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ca6db: je 0x8ca709 */
  if (zf) goto L_8ca709;
L_8ca6dd: /* 8ca6dd: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8ca6df: lea edx, [ebp - 0xf8] */
  edx = (uint32_t)(ebp + 0xffffff08u);
/* 8ca6e5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ca6e6: call dword ptr [eax + 0xb4] */
  { uint32_t t = R32((uint32_t)(eax + 0xb4u)); esp -= 4; W32(esp, 0x8ca6ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ca6ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ca6ed: lea eax, [ebp + 0x20] */
  eax = (uint32_t)(ebp + 0x20u);
/* 8ca6f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ca6f1: mov ecx, ebx */
  ecx = ebx;
/* 8ca6f3: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x8ca6f9u); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8ca6f9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8ca6fb: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 8ca6fd: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8ca700: mov dword ptr [ebx + 4], edx */
  W32((uint32_t)(ebx + 0x4u), edx);
/* 8ca703: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8ca706: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
L_8ca709: /* 8ca709: mov dword ptr [ebp - 0xa4], 1 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x1u);
/* 8ca713: mov eax, dword ptr [ebp - 0xa4] */
  eax = R32((uint32_t)(ebp + 0xffffff5cu));
/* 8ca719: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ca71c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ca723: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ca724: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ca725: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ca726: mov esp, ebp */
  esp = ebp;
/* 8ca728: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ca729: ret 0x38 */
  esp += 60; SPILL(); return;
L_8ca72c: /* 8ca72c: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8ca72e: /* 8ca72e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ca731: mov eax, dword ptr [ebp - 0xa4] */
  eax = R32((uint32_t)(ebp + 0xffffff5cu));
/* 8ca737: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ca738: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ca739: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ca740: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ca741: mov esp, ebp */
  esp = ebp;
/* 8ca743: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ca744: ret 0x38 */
  esp += 60; SPILL(); return;
}

void f_8ca747(void) {
  LOAD_REGS();
L_8ca747: /* 8ca747: mov ecx, dword ptr [ebp - 0xbc] */
  ecx = R32((uint32_t)(ebp + 0xffffff44u));
/* 8ca74d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8ca752: lea edx, [ebp - 0xb8] */
  edx = (uint32_t)(ebp + 0xffffff48u);
/* 8ca758: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ca759: mov dword ptr [ebp - 0xb8], ecx */
  W32((uint32_t)(ebp + 0xffffff48u), ecx);
/* 8ca75f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ca764u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8ca764(); return;
}

void f_8ca764(void) {
  LOAD_REGS();
L_8ca764: /* 8ca764: push 0xa1c288 */
  { uint32_t v = 0xa1c288u; esp -= 4; W32(esp, v); }
/* 8ca769: push 0xaecb90 */
  { uint32_t v = 0xaecb90u; esp -= 4; W32(esp, v); }
/* 8ca76e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8ca774u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8ca774: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ca777: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ca779: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ca77b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ca780u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8ca780: guest_badaddr(0x8ca780); return;
}

void f_8caa90(void) {
  LOAD_REGS();
L_8caa90: /* 8caa90: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 8caa94: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8caa95: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8caa96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8caa97: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 8caa9b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8caa9c: idiv dword ptr [edi + 0x33c] */
  { int32_t d = (int32_t)R32((uint32_t)(edi + 0x33cu)); if (!d) d = (int32_t)guest_divzero(0x8caa9c);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8caaa2: mov ebx, dword ptr [0xcfa3dc] */
  ebx = R32((uint32_t)(0xcfa3dcu));
/* 8caaa8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8caaa9: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 8caaad: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8caab1: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8caab4: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8caab6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8caab6: mov esi, eax */
  esi = eax;
/* 8caab8: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 8caabc: imul esi, dword ptr [edi + 0x1294] */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(R32((uint32_t)(edi + 0x1294u)));
  esi = (uint32_t)r;
  }
/* 8caac3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8caac4: idiv dword ptr [edi + 0x33c] */
  { int32_t d = (int32_t)R32((uint32_t)(edi + 0x33cu)); if (!d) d = (int32_t)guest_divzero(0x8caac4);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8caaca: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 8caace: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8caad2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8caad5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8caad7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8caad7: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 8caadb: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8caadd: mov al, byte ptr [esi + ebx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + ebx))) & 0xffu);
/* 8caae0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8caae3: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8caae5: jne 0x8cab1a */
  if (!zf) goto L_8cab1a;
L_8caae7: /* 8caae7: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 8caaeb: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 8caaef: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 8caaf3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8caaf4: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 8caaf8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8caaf9: mov ecx, dword ptr [edi + 0x1274] */
  ecx = R32((uint32_t)(edi + 0x1274u));
/* 8caaff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cab00: mov edx, dword ptr [ecx + esi*4] */
  edx = R32((uint32_t)(ecx + esi*4));
/* 8cab03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cab04: add edx, 0x44 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cab07: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cab08: call 0x6c9d63 */
  esp -= 4; W32(esp, 0x8cab0du); SPILL(); f_6c9d63(); if (g_unwind) return; RELOAD();
/* 8cab0d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cab10: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cab12: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 8cab15: inc al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8cab17: mov byte ptr [esi + ebx], al */
  W8((uint32_t)(esi + ebx), (eax & 0xffu));
L_8cab1a: /* 8cab1a: mov cl, byte ptr [esi + ebx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + ebx))) & 0xffu);
/* 8cab1d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cab1e: xor eax, eax */
  eax = 0;
/* 8cab20: cmp cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8cab23: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cab24: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 8cab27: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cab28: ret  */
  esp += 4; SPILL(); return;
}

void f_8cab60(void) {
  LOAD_REGS();
L_8cab60: /* 8cab60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8cab61: mov ebp, esp */
  ebp = esp;
/* 8cab63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8cab65: push 0x9d7c60 */
  { uint32_t v = 0x9d7c60u; esp -= 4; W32(esp, v); }
/* 8cab6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8cab70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cab71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8cab78: sub esp, 0x98 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cab7e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cab7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cab80: mov eax, ecx */
  eax = ecx;
/* 8cab82: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8cab85: mov ecx, dword ptr [eax + 0x340] */
  ecx = R32((uint32_t)(eax + 0x340u));
/* 8cab8b: xor esi, esi */
  esi = 0;
/* 8cab8d: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8cab8f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cab90: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8cab93: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 8cab96: je 0x8cb32d */
  if (zf) goto L_8cb32d;
L_8cab9c: /* 8cab9c: cmp dword ptr [eax + 0x1284], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1284u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8caba2: je 0x8cb32d */
  if (zf) goto L_8cb32d;
L_8caba8: /* 8caba8: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8cabad: mov ecx, dword ptr [0xce83a4] */
  ecx = R32((uint32_t)(0xce83a4u));
/* 8cabb3: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 8cabb6: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8cabb8: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 8cabba: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cabbd: add edx, 0x12dc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x12dcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cabc3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cabc4: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 8cabc7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cabc8: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 8cabcb: call dword ptr [0xcfa364] */
  esp -= 4; W32(esp, 0x8cabd1u); SPILL(); f_4e1af5(); if (g_unwind) return; /* Core!?TransformPointBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8cabd1: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cabd4: add ecx, 0x12dc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x12dcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8cabda: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cabdb: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* 8cabde: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cabdf: lea ecx, [ebp + 0x18] */
  ecx = (uint32_t)(ebp + 0x18u);
/* 8cabe2: call dword ptr [0xcfa364] */
  esp -= 4; W32(esp, 0x8cabe8u); SPILL(); f_4e1af5(); if (g_unwind) return; /* Core!?TransformPointBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8cabe8: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cabeb: add eax, 0x12dc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x12dcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cabf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cabf1: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 8cabf7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cabf8: lea ecx, [ebp + 0x24] */
  ecx = (uint32_t)(ebp + 0x24u);
/* 8cabfb: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x8cac01u); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8cac01: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8cac04: fsub dword ptr [ebp - 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 8cac07: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 8cac0a: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8cac0d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cac0e: fsub dword ptr [ebp - 0x40] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 8cac11: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 8cac14: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8cac17: fsub dword ptr [ebp - 0x44] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 8cac1a: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 8cac1d: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 8cac20: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 8cac23: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x8cac29u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8cac29: fld dword ptr [ebp - 0x84] */
  { double v = F32((uint32_t)(ebp + 0xffffff7cu)); FPUSH(v); }
/* 8cac2f: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8cac35: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8cac37: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8cac3a: jne 0x8cac47 */
  if (!zf) goto L_8cac47;
L_8cac3c: /* 8cac3c: mov eax, dword ptr [ebp - 0x84] */
  eax = R32((uint32_t)(ebp + 0xffffff7cu));
/* 8cac42: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8cac45: jmp 0x8cac52 */
  goto L_8cac52;
L_8cac47: /* 8cac47: fld dword ptr [ebp - 0x84] */
  { double v = F32((uint32_t)(ebp + 0xffffff7cu)); FPUSH(v); }
/* 8cac4d: fchs  */
  ST0 = -ST0;
/* 8cac4f: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
L_8cac52: /* 8cac52: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 8cac58: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cac59: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 8cac5f: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x8cac65u); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 8cac65: lea edx, [ebp - 0x60] */
  edx = (uint32_t)(ebp + 0xffffffa0u);
/* 8cac68: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cac69: lea ecx, [ebp + 0x24] */
  ecx = (uint32_t)(ebp + 0x24u);
/* 8cac6c: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 8cac73: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 8cac7a: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 8cac81: call dword ptr [0xcfa5e0] */
  esp -= 4; W32(esp, 0x8cac87u); SPILL(); f_4e2e87(); if (g_unwind) return; /* Core!??8FVector@@QBEHABV0@@Z */ RELOAD();
/* 8cac87: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8cac89: je 0x8cad48 */
  if (zf) goto L_8cad48;
L_8cac8f: /* 8cac8f: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cac92: mov eax, dword ptr [ecx + 0x1298] */
  eax = R32((uint32_t)(ecx + 0x1298u));
/* 8cac98: imul eax, dword ptr [ecx + 0x1294] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ecx + 0x1294u)));
  eax = (uint32_t)r;
  }
/* 8cac9f: mov ecx, dword ptr [0xcfa538] */
  ecx = R32((uint32_t)(0xcfa538u));
/* 8caca5: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8caca7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8caca8: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8cacaeu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8cacae: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 8cacb1: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cacb4: mov ecx, dword ptr [eax + 0x1298] */
  ecx = R32((uint32_t)(eax + 0x1298u));
/* 8cacba: imul ecx, dword ptr [eax + 0x1294] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(eax + 0x1294u)));
  ecx = (uint32_t)r;
  }
/* 8cacc1: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8cacc4: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cacc7: mov edi, dword ptr [ebp - 0x50] */
  edi = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8cacca: xor eax, eax */
  eax = 0;
/* 8caccc: mov ebx, ecx */
  ebx = ecx;
/* 8cacce: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8cacd1: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8cacd4: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 8cacd6: mov ecx, ebx */
  ecx = ebx;
/* 8cacd8: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 8cacda: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8cacdd: fsub dword ptr [ebp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x20u)));
/* 8cace0: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8cace3: fsub dword ptr [ebp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x1cu)));
/* 8cace6: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 8cace9: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8cacec: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* 8cacef: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 8cacf2: mov edx, dword ptr [ebp - 0x6c] */
  edx = R32((uint32_t)(ebp + 0xffffff94u));
/* 8cacf5: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 8cacf8: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 8cacfb: mov eax, dword ptr [ebp - 0x68] */
  eax = R32((uint32_t)(ebp + 0xffffff98u));
/* 8cacfe: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 8cad01: fst dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0);
/* 8cad04: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8cad07: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 8cad0d: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 8cad10: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8cad16: fdiv dword ptr [ebp - 0x1c] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8cad19: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8cad1f: fdiv dword ptr [ebp - 0x6c] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffff94u)));
/* 8cad22: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 8cad25: mov edx, dword ptr [ebp - 0x6c] */
  edx = R32((uint32_t)(ebp + 0xffffff94u));
/* 8cad28: mov dword ptr [ebp - 0xa0], edx */
  W32((uint32_t)(ebp + 0xffffff60u), edx);
/* 8cad2e: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 8cad31: mov eax, dword ptr [ebp - 0x68] */
  eax = R32((uint32_t)(ebp + 0xffffff98u));
/* 8cad34: mov dword ptr [ebp - 0x9c], eax */
  W32((uint32_t)(ebp + 0xffffff64u), eax);
/* 8cad3a: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 8cad3d: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8cad40: mov dword ptr [ebp - 0x98], ecx */
  W32((uint32_t)(ebp + 0xffffff68u), ecx);
/* 8cad46: jmp 0x8cad4b */
  goto L_8cad4b;
L_8cad48: /* 8cad48: mov dword ptr [ebp - 0x50], esi */
  W32((uint32_t)(ebp + 0xffffffb0u), esi);
L_8cad4b: /* 8cad4b: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 8cad4e: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 8cad51: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 8cad54: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 8cad57: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 8cad5a: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 8cad5d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8cad5f: fld dword ptr [ebp - 0x78] */
  { double v = F32((uint32_t)(ebp + 0xffffff88u)); FPUSH(v); }
/* 8cad62: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 8cad65: fst dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0);
/* 8cad68: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8cad6b: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8cad6d: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 8cad70: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8cad72: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 8cad75: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8cad77: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8cad7a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8cad7c: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8cad7f: fsub dword ptr [ebp - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8cad82: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8cad85: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8cad87: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8cad8a: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 8cad8d: fadd dword ptr [ebp - 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 8cad90: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8cad93: fadd dword ptr [ebp - 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffccu)));
/* 8cad96: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8cad99: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8cad9c: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8cad9f: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8cada2: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8cada5: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8cadab: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8cadad: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8cadb0: jp 0x8cadc2 */
  if (pf) goto L_8cadc2;
L_8cadb2: /* 8cadb2: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8cadb5: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8cadbb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8cadbd: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8cadc0: jnp 0x8cae0e */
  if (!pf) goto L_8cae0e;
L_8cadc2: /* 8cadc2: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 8cadc5: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8cadcb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8cadcd: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8cadd0: jp 0x8cade2 */
  if (pf) goto L_8cade2;
L_8cadd2: /* 8cadd2: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8cadd5: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8caddb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8caddd: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8cade0: jnp 0x8cae0e */
  if (!pf) goto L_8cae0e;
L_8cade2: /* 8cade2: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cade5: mov edx, dword ptr [ecx + 0x128c] */
  edx = R32((uint32_t)(ecx + 0x128cu));
/* 8cadeb: sub edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 8cadee: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8cadf1: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8cadf4: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8cadf7: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8cadf9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8cadfb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8cadfe: jne 0x8cae51 */
  if (!zf) goto L_8cae51;
L_8cae00: /* 8cae00: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8cae03: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8cae05: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8cae07: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8cae09: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8cae0c: jne 0x8cae53 */
  if (!zf) goto L_8cae53;
L_8cae0e: /* 8cae0e: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 8cae14: mov edx, dword ptr [0xce83a4] */
  edx = R32((uint32_t)(0xce83a4u));
/* 8cae1a: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 8cae1d: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8cae1f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8cae21: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8cae24: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8cae26: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8cae28: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 8cae2e: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x8cae34u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 8cae34: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8cae37: xor eax, eax */
  eax = 0;
/* 8cae39: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cae3b: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 8cae3e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8cae41: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8cae48: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cae49: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cae4a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cae4b: mov esp, ebp */
  esp = ebp;
/* 8cae4d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8cae4e: ret 0x30 */
  esp += 52; SPILL(); return;
L_8cae51: /* 8cae51: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8cae53: /* 8cae53: mov eax, dword ptr [ecx + 0x1290] */
  eax = R32((uint32_t)(ecx + 0x1290u));
/* 8cae59: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8cae5c: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8cae5f: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8cae62: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 8cae65: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8cae67: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8cae69: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8cae6c: jne 0x8cae7e */
  if (!zf) goto L_8cae7e;
L_8cae6e: /* 8cae6e: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8cae71: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8cae73: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8cae75: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8cae77: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8cae7a: je 0x8cae0e */
  if (zf) goto L_8cae0e;
L_8cae7c: /* 8cae7c: jmp 0x8cae80 */
  goto L_8cae80;
L_8cae7e: /* 8cae7e: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8cae80: /* 8cae80: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8cae83: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 8cae86: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8cae89: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cae8c: mov eax, dword ptr [edx + 0x128c] */
  eax = R32((uint32_t)(edx + 0x128cu));
/* 8cae92: lea edi, [eax - 2] */
  edi = (uint32_t)(eax + 0xfffffffeu);
/* 8cae95: call 0x99c958 */
  esp -= 4; W32(esp, 0x8cae9au); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8cae9a: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cae9c: jge 0x8caea2 */
  if ((sf == of)) goto L_8caea2;
L_8cae9e: /* 8cae9e: xor ebx, ebx */
  ebx = 0;
/* 8caea0: jmp 0x8caeaa */
  goto L_8caeaa;
L_8caea2: /* 8caea2: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8caea4: mov ebx, eax */
  ebx = eax;
/* 8caea6: jl 0x8caeaa */
  if ((sf != of)) goto L_8caeaa;
L_8caea8: /* 8caea8: mov ebx, edi */
  ebx = edi;
L_8caeaa: /* 8caeaa: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8caead: call 0x99c958 */
  esp -= 4; W32(esp, 0x8caeb2u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8caeb2: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8caeb4: jge 0x8caeba */
  if ((sf == of)) goto L_8caeba;
L_8caeb6: /* 8caeb6: xor edi, edi */
  edi = 0;
/* 8caeb8: jmp 0x8caec0 */
  goto L_8caec0;
L_8caeba: /* 8caeba: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8caebc: jge 0x8caec0 */
  if ((sf == of)) goto L_8caec0;
L_8caebe: /* 8caebe: mov edi, eax */
  edi = eax;
L_8caec0: /* 8caec0: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8caec2: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 8caec5: jne 0x8cb154 */
  if (!zf) goto L_8cb154;
L_8caecb: /* 8caecb: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8caece: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 8caed1: mov eax, dword ptr [eax + 0x1290] */
  eax = R32((uint32_t)(eax + 0x1290u));
/* 8caed7: lea esi, [eax - 2] */
  esi = (uint32_t)(eax + 0xfffffffeu);
/* 8caeda: call 0x99c958 */
  esp -= 4; W32(esp, 0x8caedfu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8caedf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8caee1: jge 0x8caee7 */
  if ((sf == of)) goto L_8caee7;
L_8caee3: /* 8caee3: xor edi, edi */
  edi = 0;
/* 8caee5: jmp 0x8caeef */
  goto L_8caeef;
L_8caee7: /* 8caee7: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8caee9: mov edi, eax */
  edi = eax;
/* 8caeeb: jl 0x8caeef */
  if ((sf != of)) goto L_8caeef;
L_8caeed: /* 8caeed: mov edi, esi */
  edi = esi;
L_8caeef: /* 8caeef: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8caef2: call 0x99c958 */
  esp -= 4; W32(esp, 0x8caef7u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8caef7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8caef9: jge 0x8caeff */
  if ((sf == of)) goto L_8caeff;
L_8caefb: /* 8caefb: xor esi, esi */
  esi = 0;
/* 8caefd: jmp 0x8caf05 */
  goto L_8caf05;
L_8caeff: /* 8caeff: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8caf01: jge 0x8caf05 */
  if ((sf == of)) goto L_8caf05;
L_8caf03: /* 8caf03: mov esi, eax */
  esi = eax;
L_8caf05: /* 8caf05: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8caf07: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* 8caf0a: jne 0x8cafb4 */
  if (!zf) goto L_8cafb4;
L_8caf10: /* 8caf10: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8caf13: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8caf15: je 0x8caf40 */
  if (zf) goto L_8caf40;
L_8caf17: /* 8caf17: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8caf18: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8caf19: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 8caf1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8caf20: lea edx, [ebp - 0x60] */
  edx = (uint32_t)(ebp + 0xffffffa0u);
/* 8caf23: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8caf24: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8caf27: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 8caf2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8caf2b: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8caf2e: lea ecx, [ebp + 0x18] */
  ecx = (uint32_t)(ebp + 0x18u);
/* 8caf31: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8caf32: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8caf33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8caf34: call 0x6c128a */
  esp -= 4; W32(esp, 0x8caf39u); SPILL(); f_6c128a(); if (g_unwind) return; RELOAD();
/* 8caf39: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8caf3c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8caf3e: je 0x8cafa8 */
  if (zf) goto L_8cafa8;
L_8caf40: /* 8caf40: mov ecx, dword ptr [ebp + 0x34] */
  ecx = R32((uint32_t)(ebp + 0x34u));
/* 8caf43: mov edx, dword ptr [ebp + 0x30] */
  edx = R32((uint32_t)(ebp + 0x30u));
/* 8caf46: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8caf47: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 8caf4a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8caf4b: mov edx, dword ptr [ebp + 0x28] */
  edx = R32((uint32_t)(ebp + 0x28u));
/* 8caf4e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8caf51: mov eax, esp */
  eax = esp;
/* 8caf53: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8caf55: mov ecx, dword ptr [ebp + 0x2c] */
  ecx = R32((uint32_t)(ebp + 0x2cu));
/* 8caf58: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8caf5b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8caf5e: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 8caf61: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 8caf64: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8caf67: mov edx, esp */
  edx = esp;
/* 8caf69: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8caf6b: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 8caf6e: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8caf71: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8caf74: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8caf77: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8caf7a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8caf7d: mov ecx, esp */
  ecx = esp;
/* 8caf7f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8caf81: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 8caf84: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8caf87: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8caf8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8caf8b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8caf8c: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8caf8f: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8caf92: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8caf93: call 0x6c1ed3 */
  esp -= 4; W32(esp, 0x8caf98u); SPILL(); f_6c1ed3(); if (g_unwind) return; RELOAD();
/* 8caf98: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8caf9a: je 0x8cafa8 */
  if (zf) goto L_8cafa8;
L_8caf9c: /* 8caf9c: mov dword ptr [ebp - 0x28], 1 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x1u);
/* 8cafa3: jmp 0x8cae0e */
  goto L_8cae0e;
L_8cafa8: /* 8cafa8: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 8cafaf: jmp 0x8cae0e */
  goto L_8cae0e;
L_8cafb4: /* 8cafb4: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8cafb7: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8cafba: fsub dword ptr [ebp - 0x44] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 8cafbd: xor eax, eax */
  eax = 0;
/* 8cafbf: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8cafc2: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cafc4: fsub dword ptr [ebp - 0x40] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 8cafc7: setle al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(((zf || sf != of)) ? 1 : 0) & 0xffu);
/* 8cafca: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 8cafd1: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 8cafd3: mov esi, edi */
  esi = edi;
/* 8cafd5: lea eax, [eax + eax - 1] */
  eax = (uint32_t)(eax + eax + 0xffffffffu);
/* 8cafd9: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 8cafdc: fst dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0);
/* 8cafdf: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 8cafe2: fsubr dword ptr [ebp - 0x38] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffc8u))) - ST0;
/* 8cafe5: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
L_8cafe8: /* 8cafe8: mov ecx, esi */
  ecx = esi;
/* 8cafea: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 8cafed: imul eax, dword ptr [ebp - 0x2c] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  eax = (uint32_t)r;
  }
/* 8caff1: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8caff3: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 8caff6: jg 0x8cae0e */
  if ((!zf && sf == of)) goto L_8cae0e;
L_8caffc: /* 8caffc: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8cafff: lea edx, [esi + 1] */
  edx = (uint32_t)(esi + 0x1u);
/* 8cb002: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8cb005: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 8cb008: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8cb00b: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8cb00e: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 8cb011: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8cb014: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8cb017: fcom dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
/* 8cb01a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8cb01c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8cb01f: jne 0x8cb02d */
  if (!zf) goto L_8cb02d;
L_8cb021: /* 8cb021: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8cb024: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cb027: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8cb02a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_8cb02d: /* 8cb02d: fsub dword ptr [ebp - 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 8cb030: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cb033: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8cb036: mov eax, dword ptr [ecx + 0x128c] */
  eax = R32((uint32_t)(ecx + 0x128cu));
/* 8cb03c: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 8cb03f: lea ebx, [eax - 2] */
  ebx = (uint32_t)(eax + 0xfffffffeu);
/* 8cb042: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8cb045: call 0x99c958 */
  esp -= 4; W32(esp, 0x8cb04au); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8cb04a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8cb04c: jge 0x8cb052 */
  if ((sf == of)) goto L_8cb052;
L_8cb04e: /* 8cb04e: xor edi, edi */
  edi = 0;
/* 8cb050: jmp 0x8cb05a */
  goto L_8cb05a;
L_8cb052: /* 8cb052: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cb054: mov edi, eax */
  edi = eax;
/* 8cb056: jl 0x8cb05a */
  if ((sf != of)) goto L_8cb05a;
L_8cb058: /* 8cb058: mov edi, ebx */
  edi = ebx;
L_8cb05a: /* 8cb05a: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8cb05d: call 0x99c958 */
  esp -= 4; W32(esp, 0x8cb062u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8cb062: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8cb064: jge 0x8cb06f */
  if ((sf == of)) goto L_8cb06f;
L_8cb066: /* 8cb066: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8cb06d: jmp 0x8cb079 */
  goto L_8cb079;
L_8cb06f: /* 8cb06f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cb071: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8cb074: jl 0x8cb079 */
  if ((sf != of)) goto L_8cb079;
L_8cb076: /* 8cb076: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
L_8cb079: /* 8cb079: mov ebx, dword ptr [ebp - 0x50] */
  ebx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8cb07c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8cb080: /* 8cb080: cmp edi, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cb083: jg 0x8cb126 */
  if ((!zf && sf == of)) goto L_8cb126;
L_8cb089: /* 8cb089: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cb08b: je 0x8cb0b3 */
  if (zf) goto L_8cb0b3;
L_8cb08d: /* 8cb08d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cb08e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cb08f: lea edx, [ebp - 0xa0] */
  edx = (uint32_t)(ebp + 0xffffff60u);
/* 8cb095: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cb096: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 8cb099: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cb09a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cb09d: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 8cb0a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cb0a1: lea edx, [ebp + 0x18] */
  edx = (uint32_t)(ebp + 0x18u);
/* 8cb0a4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cb0a5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cb0a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cb0a7: call 0x6c128a */
  esp -= 4; W32(esp, 0x8cb0acu); SPILL(); f_6c128a(); if (g_unwind) return; RELOAD();
/* 8cb0ac: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cb0af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cb0b1: je 0x8cb120 */
  if (zf) goto L_8cb120;
L_8cb0b3: /* 8cb0b3: mov ecx, dword ptr [ebp + 0x34] */
  ecx = R32((uint32_t)(ebp + 0x34u));
/* 8cb0b6: mov edx, dword ptr [ebp + 0x30] */
  edx = R32((uint32_t)(ebp + 0x30u));
/* 8cb0b9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cb0ba: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 8cb0bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cb0be: mov edx, dword ptr [ebp + 0x28] */
  edx = R32((uint32_t)(ebp + 0x28u));
/* 8cb0c1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cb0c4: mov eax, esp */
  eax = esp;
/* 8cb0c6: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8cb0c8: mov ecx, dword ptr [ebp + 0x2c] */
  ecx = R32((uint32_t)(ebp + 0x2cu));
/* 8cb0cb: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8cb0ce: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8cb0d1: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 8cb0d4: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 8cb0d7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cb0da: mov edx, esp */
  edx = esp;
/* 8cb0dc: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8cb0de: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 8cb0e1: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8cb0e4: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8cb0e7: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8cb0ea: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8cb0ed: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cb0f0: mov ecx, esp */
  ecx = esp;
/* 8cb0f2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8cb0f4: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 8cb0f7: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8cb0fa: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8cb0fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cb0fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cb0ff: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8cb102: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cb105: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cb106: call 0x6c1ed3 */
  esp -= 4; W32(esp, 0x8cb10bu); SPILL(); f_6c1ed3(); if (g_unwind) return; RELOAD();
/* 8cb10b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cb10d: je 0x8cb120 */
  if (zf) goto L_8cb120;
L_8cb10f: /* 8cb10f: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8cb112: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cb114: jne 0x8cb119 */
  if (!zf) goto L_8cb119;
L_8cb116: /* 8cb116: mov dword ptr [ebp - 0x54], esi */
  W32((uint32_t)(ebp + 0xffffffacu), esi);
L_8cb119: /* 8cb119: mov dword ptr [ebp - 0x28], 1 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x1u);
L_8cb120: /* 8cb120: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8cb121: jmp 0x8cb080 */
  goto L_8cb080;
L_8cb126: /* 8cb126: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8cb129: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cb12b: je 0x8cb14a */
  if (zf) goto L_8cb14a;
L_8cb12d: /* 8cb12d: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 8cb130: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 8cb132: jns 0x8cb136 */
  if (!sf) goto L_8cb136;
L_8cb134: /* 8cb134: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_8cb136: /* 8cb136: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8cb139: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8cb13c: fcomp dword ptr [ebp - 0x24] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffdcu)));
  FPOP();
/* 8cb13f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8cb141: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8cb144: je 0x8cae0e */
  if (zf) goto L_8cae0e;
L_8cb14a: /* 8cb14a: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8cb14d: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8cb14f: jmp 0x8cafe8 */
  goto L_8cafe8;
L_8cb154: /* 8cb154: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8cb157: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8cb15a: fsub dword ptr [ebp - 0x40] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 8cb15d: xor eax, eax */
  eax = 0;
/* 8cb15f: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8cb162: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cb164: fsub dword ptr [ebp - 0x44] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 8cb167: setle al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(((zf || sf != of)) ? 1 : 0) & 0xffu);
/* 8cb16a: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 8cb171: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 8cb173: mov esi, ebx */
  esi = ebx;
/* 8cb175: lea eax, [eax + eax - 1] */
  eax = (uint32_t)(eax + eax + 0xffffffffu);
/* 8cb179: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8cb17c: fst dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0);
/* 8cb17f: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 8cb182: fsubr dword ptr [ebp - 0x34] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffccu))) - ST0;
/* 8cb185: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
L_8cb188: /* 8cb188: mov ecx, esi */
  ecx = esi;
/* 8cb18a: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 8cb18d: imul eax, dword ptr [ebp - 0x2c] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  eax = (uint32_t)r;
  }
/* 8cb191: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cb193: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 8cb196: jg 0x8cae0e */
  if ((!zf && sf == of)) goto L_8cae0e;
L_8cb19c: /* 8cb19c: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8cb19f: lea edx, [esi + 1] */
  edx = (uint32_t)(esi + 0x1u);
/* 8cb1a2: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8cb1a5: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 8cb1a8: fadd dword ptr [ebp - 0x48] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 8cb1ab: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8cb1ae: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 8cb1b1: fadd dword ptr [ebp - 0x48] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 8cb1b4: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8cb1b7: fcom dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
/* 8cb1ba: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8cb1bc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8cb1bf: jne 0x8cb1cd */
  if (!zf) goto L_8cb1cd;
L_8cb1c1: /* 8cb1c1: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8cb1c4: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8cb1c7: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8cb1ca: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_8cb1cd: /* 8cb1cd: fsub dword ptr [ebp - 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 8cb1d0: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cb1d3: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8cb1d6: mov eax, dword ptr [ecx + 0x1290] */
  eax = R32((uint32_t)(ecx + 0x1290u));
/* 8cb1dc: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 8cb1df: lea ebx, [eax - 2] */
  ebx = (uint32_t)(eax + 0xfffffffeu);
/* 8cb1e2: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8cb1e5: call 0x99c958 */
  esp -= 4; W32(esp, 0x8cb1eau); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8cb1ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8cb1ec: jge 0x8cb1f2 */
  if ((sf == of)) goto L_8cb1f2;
L_8cb1ee: /* 8cb1ee: xor edi, edi */
  edi = 0;
/* 8cb1f0: jmp 0x8cb1fa */
  goto L_8cb1fa;
L_8cb1f2: /* 8cb1f2: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cb1f4: mov edi, eax */
  edi = eax;
/* 8cb1f6: jl 0x8cb1fa */
  if ((sf != of)) goto L_8cb1fa;
L_8cb1f8: /* 8cb1f8: mov edi, ebx */
  edi = ebx;
L_8cb1fa: /* 8cb1fa: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8cb1fd: call 0x99c958 */
  esp -= 4; W32(esp, 0x8cb202u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8cb202: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8cb204: jge 0x8cb20f */
  if ((sf == of)) goto L_8cb20f;
L_8cb206: /* 8cb206: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8cb20d: jmp 0x8cb219 */
  goto L_8cb219;
L_8cb20f: /* 8cb20f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cb211: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8cb214: jl 0x8cb219 */
  if ((sf != of)) goto L_8cb219;
L_8cb216: /* 8cb216: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
L_8cb219: /* 8cb219: mov ebx, dword ptr [ebp - 0x50] */
  ebx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8cb21c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8cb220: /* 8cb220: cmp edi, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8cb223: jg 0x8cb2c6 */
  if ((!zf && sf == of)) goto L_8cb2c6;
L_8cb229: /* 8cb229: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cb22b: je 0x8cb253 */
  if (zf) goto L_8cb253;
L_8cb22d: /* 8cb22d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cb22e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cb22f: lea edx, [ebp - 0xa0] */
  edx = (uint32_t)(ebp + 0xffffff60u);
/* 8cb235: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cb236: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 8cb239: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cb23a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cb23d: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 8cb240: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cb241: lea edx, [ebp + 0x18] */
  edx = (uint32_t)(ebp + 0x18u);
/* 8cb244: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cb245: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8cb246: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cb247: call 0x6c128a */
  esp -= 4; W32(esp, 0x8cb24cu); SPILL(); f_6c128a(); if (g_unwind) return; RELOAD();
/* 8cb24c: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8cb24f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cb251: je 0x8cb2c0 */
  if (zf) goto L_8cb2c0;
L_8cb253: /* 8cb253: mov ecx, dword ptr [ebp + 0x34] */
  ecx = R32((uint32_t)(ebp + 0x34u));
/* 8cb256: mov edx, dword ptr [ebp + 0x30] */
  edx = R32((uint32_t)(ebp + 0x30u));
/* 8cb259: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8cb25a: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 8cb25d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8cb25e: mov edx, dword ptr [ebp + 0x28] */
  edx = R32((uint32_t)(ebp + 0x28u));
/* 8cb261: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cb264: mov eax, esp */
  eax = esp;
/* 8cb266: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8cb268: mov ecx, dword ptr [ebp + 0x2c] */
  ecx = R32((uint32_t)(ebp + 0x2cu));
/* 8cb26b: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8cb26e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8cb271: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 8cb274: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 8cb277: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cb27a: mov edx, esp */
  edx = esp;
/* 8cb27c: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8cb27e: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 8cb281: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8cb284: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8cb287: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8cb28a: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8cb28d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8cb290: mov ecx, esp */
  ecx = esp;
/* 8cb292: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8cb294: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 8cb297: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8cb29a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8cb29d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8cb29e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8cb29f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8cb2a2: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8cb2a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8cb2a6: call 0x6c1ed3 */
  esp -= 4; W32(esp, 0x8cb2abu); SPILL(); f_6c1ed3(); if (g_unwind) return; RELOAD();
/* 8cb2ab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cb2ad: je 0x8cb2c0 */
  if (zf) goto L_8cb2c0;
L_8cb2af: /* 8cb2af: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8cb2b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cb2b4: jne 0x8cb2b9 */
  if (!zf) goto L_8cb2b9;
L_8cb2b6: /* 8cb2b6: mov dword ptr [ebp - 0x54], esi */
  W32((uint32_t)(ebp + 0xffffffacu), esi);
L_8cb2b9: /* 8cb2b9: mov dword ptr [ebp - 0x28], 1 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x1u);
L_8cb2c0: /* 8cb2c0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8cb2c1: jmp 0x8cb220 */
  goto L_8cb220;
L_8cb2c6: /* 8cb2c6: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8cb2c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8cb2cb: je 0x8cb2ea */
  if (zf) goto L_8cb2ea;
L_8cb2cd: /* 8cb2cd: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 8cb2d0: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 8cb2d2: jns 0x8cb2d6 */
  if (!sf) goto L_8cb2d6;
L_8cb2d4: /* 8cb2d4: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_8cb2d6: /* 8cb2d6: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8cb2d9: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8cb2dc: fcomp dword ptr [ebp - 0x24] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffdcu)));
  FPOP();
/* 8cb2df: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8cb2e1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8cb2e4: je 0x8cae0e */
  if (zf) goto L_8cae0e;
L_8cb2ea: /* 8cb2ea: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8cb2ed: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8cb2ef: jmp 0x8cb188 */
  goto L_8cb188;
L_8cb32d: /* 8cb32d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8cb330: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8cb331: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8cb332: mov eax, 1 */
  eax = 0x1u;
/* 8cb337: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8cb33e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8cb33f: mov esp, ebp */
  esp = ebp;
/* 8cb341: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8cb342: ret 0x30 */
  esp += 52; SPILL(); return;
}
