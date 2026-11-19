#include "recomp.h"
#include "rec_mod.h"

void f_6db2a0(void) {
  LOAD_REGS();
L_6db2a0: /* 6db2a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6db2a1: movzx eax, byte ptr [ecx + 3] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x3u)));
/* 6db2a5: movzx edx, byte ptr [ecx] */
  edx = (uint32_t)(R8((uint32_t)(ecx)));
/* 6db2a8: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 6db2ac: movzx eax, byte ptr [ecx + 1] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x1u)));
/* 6db2b0: fild dword ptr [esp] */
  { double v = (double)(int32_t)R32((uint32_t)(esp)); FPUSH(v); }
/* 6db2b4: movzx ecx, byte ptr [ecx + 2] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0x2u)));
/* 6db2b8: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 6db2be: mov dword ptr [esp], edx */
  W32((uint32_t)(esp), edx);
/* 6db2c2: fild dword ptr [esp] */
  { double v = (double)(int32_t)R32((uint32_t)(esp)); FPUSH(v); }
/* 6db2c6: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 6db2ca: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6db2ce: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 6db2d4: fild dword ptr [esp] */
  { double v = (double)(int32_t)R32((uint32_t)(esp)); FPUSH(v); }
/* 6db2d8: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 6db2dc: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 6db2e2: fild dword ptr [esp] */
  { double v = (double)(int32_t)R32((uint32_t)(esp)); FPUSH(v); }
/* 6db2e6: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 6db2ec: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 6db2ee: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 6db2f1: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 6db2f4: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 6db2f7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6db2f8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6db320(void) {
  LOAD_REGS();
L_6db320: /* 6db320: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6db321: movzx eax, byte ptr [ecx] */
  eax = (uint32_t)(R8((uint32_t)(ecx)));
/* 6db324: movzx edx, byte ptr [ecx + 1] */
  edx = (uint32_t)(R8((uint32_t)(ecx + 0x1u)));
/* 6db328: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 6db32c: movzx eax, byte ptr [ecx + 2] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x2u)));
/* 6db330: fild dword ptr [esp] */
  { double v = (double)(int32_t)R32((uint32_t)(esp)); FPUSH(v); }
/* 6db334: mov dword ptr [esp], edx */
  W32((uint32_t)(esp), edx);
/* 6db338: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 6db33e: fild dword ptr [esp] */
  { double v = (double)(int32_t)R32((uint32_t)(esp)); FPUSH(v); }
/* 6db342: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 6db346: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6db34a: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 6db350: fild dword ptr [esp] */
  { double v = (double)(int32_t)R32((uint32_t)(esp)); FPUSH(v); }
/* 6db354: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 6db35a: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 6db35c: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 6db35f: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 6db362: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6db363: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6db390(void) {
  LOAD_REGS();
L_6db390: /* 6db390: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6db392: ret  */
  esp += 4; SPILL(); return;
}

void f_6db3b0(void) {
  LOAD_REGS();
L_6db3b0: /* 6db3b0: mov eax, ecx */
  eax = ecx;
/* 6db3b2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6db3b6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6db3b8: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 6db3ba: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6db3d0(void) {
  LOAD_REGS();
L_6db3d0: /* 6db3d0: mov eax, 0xcd5230 */
  eax = 0xcd5230u;
/* 6db3d5: ret  */
  esp += 4; SPILL(); return;
}

void f_6db3f0(void) {
  LOAD_REGS();
L_6db3f0: /* 6db3f0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6db3f5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6db3f7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6db3fb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6db3ff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6db401: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6db403: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6db404: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6db408: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6db40a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6db40b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6db40c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6db40d: push 0xcd5230 */
  { uint32_t v = 0xcd5230u; esp -= 4; W32(esp, v); }
/* 6db412: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6db418u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6db418: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6db41b: ret  */
  esp += 4; SPILL(); return;
}

void f_6db430(void) {
  LOAD_REGS();
L_6db430: /* 6db430: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6db434: ret  */
  esp += 4; SPILL(); return;
}

void f_6db450(void) {
  LOAD_REGS();
L_6db450: /* 6db450: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6db452: push 0x9c0049 */
  { uint32_t v = 0x9c0049u; esp -= 4; W32(esp, v); }
/* 6db457: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6db45d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6db45e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6db465: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6db466: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6db467: mov esi, ecx */
  esi = ecx;
/* 6db469: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6db46d: mov dword ptr [esi], 0x9f4100 */
  W32((uint32_t)(esi), 0x9f4100u);
/* 6db473: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6db47b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6db481u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6db481: mov ecx, esi */
  ecx = esi;
/* 6db483: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6db48b: call dword ptr [0xcfa254] */
  esp -= 4; W32(esp, 0x6db491u); SPILL(); f_4e2e55(); if (g_unwind) return; /* Core!??1UObject@@UAE@XZ */ RELOAD();
/* 6db491: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6db495: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6db496: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6db49d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6db4a0: ret  */
  esp += 4; SPILL(); return;
}

void f_6db4d0(void) {
  LOAD_REGS();
L_6db4d0: /* 6db4d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6db4d1: mov esi, ecx */
  esi = ecx;
/* 6db4d3: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x6db4d9u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 6db4d9: mov dword ptr [esi], 0x9f4100 */
  W32((uint32_t)(esi), 0x9f4100u);
/* 6db4df: mov eax, esi */
  eax = esi;
/* 6db4e1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6db4e2: ret  */
  esp += 4; SPILL(); return;
}

void f_6db500(void) {
  LOAD_REGS();
L_6db500: /* 6db500: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6db501: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6db502: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6db506: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6db507: mov esi, ecx */
  esi = ecx;
/* 6db509: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x6db50fu); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 6db50f: mov dword ptr [esi], 0x9f4100 */
  W32((uint32_t)(esi), 0x9f4100u);
/* 6db515: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6db518: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6db51b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6db51c: mov eax, esi */
  eax = esi;
/* 6db51e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6db51f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6db540(void) {
  LOAD_REGS();
L_6db540: /* 6db540: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6db541: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6db542: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6db546: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6db547: mov esi, ecx */
  esi = ecx;
/* 6db549: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6db54fu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6db54f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6db552: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6db555: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6db556: mov eax, esi */
  eax = esi;
/* 6db558: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6db559: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6db570(void) {
  LOAD_REGS();
L_6db570: /* 6db570: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6db571: mov esi, ecx */
  esi = ecx;
/* 6db573: call 0x6c7473 */
  esp -= 4; W32(esp, 0x6db578u); SPILL(); f_6c7473(); if (g_unwind) return; RELOAD();
/* 6db578: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6db57d: je 0x6db58b */
  if (zf) goto L_6db58b;
L_6db57f: /* 6db57f: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 6db581: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6db582: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6db588u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6db588: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6db58b: /* 6db58b: mov eax, esi */
  eax = esi;
/* 6db58d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6db58e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6db5b0(void) {
  LOAD_REGS();
L_6db5b0: /* 6db5b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6db5b1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6db5b5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6db5b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6db5b9: mov esi, ecx */
  esi = ecx;
/* 6db5bb: je 0x6db5ed */
  if (zf) goto L_6db5ed;
L_6db5bd: /* 6db5bd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6db5c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6db5c1: push 0x6c7473 */
  { uint32_t v = 0x6c7473u; esp -= 4; W32(esp, v); }
/* 6db5c6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6db5c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6db5ca: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 6db5cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6db5cd: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6db5d2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6db5d2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6db5d5: je 0x6db5e5 */
  if (zf) goto L_6db5e5;
L_6db5d7: /* 6db5d7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6db5dd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6db5df: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6db5e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6db5e2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6db5e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6db5e5: /* 6db5e5: mov eax, edi */
  eax = edi;
/* 6db5e7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6db5e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6db5e9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6db5ea: ret 4 */
  esp += 8; SPILL(); return;
L_6db5ed: /* 6db5ed: mov ecx, esi */
  ecx = esi;
/* 6db5ef: call 0x6c7473 */
  esp -= 4; W32(esp, 0x6db5f4u); SPILL(); f_6c7473(); if (g_unwind) return; RELOAD();
/* 6db5f4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6db5f7: je 0x6db605 */
  if (zf) goto L_6db605;
L_6db5f9: /* 6db5f9: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 6db5fb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6db5fc: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6db602u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6db602: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6db605: /* 6db605: mov eax, esi */
  eax = esi;
/* 6db607: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6db608: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6db609: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6db630(void) {
  LOAD_REGS();
L_6db630: /* 6db630: mov eax, 0xcd5760 */
  eax = 0xcd5760u;
/* 6db635: ret  */
  esp += 4; SPILL(); return;
}

void f_6db650(void) {
  LOAD_REGS();
L_6db650: /* 6db650: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6db655: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6db657: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6db65b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6db65f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6db661: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6db663: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6db664: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6db668: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6db66a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6db66b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6db66c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6db66d: push 0xcd5760 */
  { uint32_t v = 0xcd5760u; esp -= 4; W32(esp, v); }
/* 6db672: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6db678u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6db678: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6db67b: ret  */
  esp += 4; SPILL(); return;
}

void f_6db690(void) {
  LOAD_REGS();
L_6db690: /* 6db690: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6db694: ret  */
  esp += 4; SPILL(); return;
}

void f_6db6b0(void) {
  LOAD_REGS();
L_6db6b0: /* 6db6b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6db6b2: push 0x9c0068 */
  { uint32_t v = 0x9c0068u; esp -= 4; W32(esp, v); }
/* 6db6b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6db6bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6db6be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6db6c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6db6c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6db6c7: mov esi, ecx */
  esi = ecx;
/* 6db6c9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6db6cd: mov dword ptr [esi], 0x9f4180 */
  W32((uint32_t)(esi), 0x9f4180u);
/* 6db6d3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6db6db: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6db6e1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6db6e1: mov ecx, esi */
  ecx = esi;
/* 6db6e3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6db6eb: call 0x6c7473 */
  esp -= 4; W32(esp, 0x6db6f0u); SPILL(); f_6c7473(); if (g_unwind) return; RELOAD();
/* 6db6f0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6db6f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6db6f5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6db6fc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6db6ff: ret  */
  esp += 4; SPILL(); return;
}

void f_6db720(void) {
  LOAD_REGS();
L_6db720: /* 6db720: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6db721: mov esi, ecx */
  esi = ecx;
/* 6db723: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x6db729u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 6db729: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6db72d: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 6db731: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6db735: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 6db738: mov dword ptr [esi], 0x9f4180 */
  W32((uint32_t)(esi), 0x9f4180u);
/* 6db73e: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 6db741: mov dword ptr [esi + 0x34], edx */
  W32((uint32_t)(esi + 0x34u), edx);
/* 6db744: mov eax, esi */
  eax = esi;
/* 6db746: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6db747: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_6db760(void) {
  LOAD_REGS();
L_6db760: /* 6db760: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6db764: cmp dword ptr [ecx + 0x30], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x30u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 6db767: mov dword ptr [ecx + 0x30], eax */
  W32((uint32_t)(ecx + 0x30u), eax);
/* 6db76a: je 0x6db76f */
  if (zf) goto L_6db76f;
L_6db76c: /* 6db76c: inc dword ptr [ecx + 0x28] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x28u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx + 0x28u), r);
  }
L_6db76f: /* 6db76f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6db790(void) {
  LOAD_REGS();
L_6db790: /* 6db790: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6db791: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6db792: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6db796: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6db797: mov esi, ecx */
  esi = ecx;
/* 6db799: call 0x6c3d2d */
  esp -= 4; W32(esp, 0x6db79eu); SPILL(); f_6c3d2d(); if (g_unwind) return; RELOAD();
/* 6db79e: mov ecx, edi */
  ecx = edi;
/* 6db7a0: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x6db7a6u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 6db7a6: cmp eax, 0x4b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4bu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 6db7a9: jl 0x6db7d3 */
  if ((sf != of)) goto L_6db7d3;
L_6db7ab: /* 6db7ab: lea eax, [esi + 0x34] */
  eax = (uint32_t)(esi + 0x34u);
/* 6db7ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6db7af: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* 6db7b2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6db7b3: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 6db7b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6db7b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6db7b8: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x6db7beu); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 6db7be: mov esi, dword ptr [0xcfa27c] */
  esi = R32((uint32_t)(0xcfa27cu));
/* 6db7c4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6db7c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6db7c8: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6db7cau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6db7ca: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6db7cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6db7ce: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6db7d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6db7d0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6db7d3: /* 6db7d3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6db7d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6db7d5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6db800(void) {
  LOAD_REGS();
L_6db800: /* 6db800: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6db801: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6db802: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6db806: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6db807: mov esi, ecx */
  esi = ecx;
/* 6db809: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x6db80fu); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 6db80f: mov dword ptr [esi], 0x9f4100 */
  W32((uint32_t)(esi), 0x9f4100u);
/* 6db815: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6db818: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6db81b: mov dword ptr [esi], 0x9f4180 */
  W32((uint32_t)(esi), 0x9f4180u);
/* 6db821: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6db824: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6db827: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 6db82a: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 6db82d: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 6db830: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 6db833: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6db834: mov eax, esi */
  eax = esi;
/* 6db836: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6db837: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6db850(void) {
  LOAD_REGS();
L_6db850: /* 6db850: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6db851: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6db852: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6db856: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6db857: mov esi, ecx */
  esi = ecx;
/* 6db859: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6db85fu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6db85f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6db862: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6db865: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6db868: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6db86b: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 6db86e: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 6db871: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 6db874: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 6db877: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6db878: mov eax, esi */
  eax = esi;
/* 6db87a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6db87b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6db890(void) {
  LOAD_REGS();
L_6db890: /* 6db890: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6db891: mov esi, ecx */
  esi = ecx;
/* 6db893: call 0x6c9d18 */
  esp -= 4; W32(esp, 0x6db898u); SPILL(); f_6c9d18(); if (g_unwind) return; RELOAD();
/* 6db898: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6db89d: je 0x6db8ab */
  if (zf) goto L_6db8ab;
L_6db89f: /* 6db89f: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 6db8a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6db8a2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6db8a8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6db8a8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6db8ab: /* 6db8ab: mov eax, esi */
  eax = esi;
/* 6db8ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6db8ae: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6db8d0(void) {
  LOAD_REGS();
L_6db8d0: /* 6db8d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6db8d1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6db8d5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6db8d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6db8d9: mov esi, ecx */
  esi = ecx;
/* 6db8db: je 0x6db90d */
  if (zf) goto L_6db90d;
L_6db8dd: /* 6db8dd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6db8e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6db8e1: push 0x6c9d18 */
  { uint32_t v = 0x6c9d18u; esp -= 4; W32(esp, v); }
/* 6db8e6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6db8e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6db8ea: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 6db8ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6db8ed: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6db8f2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6db8f2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6db8f5: je 0x6db905 */
  if (zf) goto L_6db905;
L_6db8f7: /* 6db8f7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6db8fd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6db8ff: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6db901: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6db902: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6db905u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6db905: /* 6db905: mov eax, edi */
  eax = edi;
/* 6db907: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6db908: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6db909: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6db90a: ret 4 */
  esp += 8; SPILL(); return;
L_6db90d: /* 6db90d: mov ecx, esi */
  ecx = esi;
/* 6db90f: call 0x6c9d18 */
  esp -= 4; W32(esp, 0x6db914u); SPILL(); f_6c9d18(); if (g_unwind) return; RELOAD();
/* 6db914: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6db917: je 0x6db925 */
  if (zf) goto L_6db925;
L_6db919: /* 6db919: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 6db91b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6db91c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6db922u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6db922: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6db925: /* 6db925: mov eax, esi */
  eax = esi;
/* 6db927: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6db928: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6db929: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6db950(void) {
  LOAD_REGS();
L_6db950: /* 6db950: mov eax, ecx */
  eax = ecx;
/* 6db952: ret  */
  esp += 4; SPILL(); return;
}

void f_6db970(void) {
  LOAD_REGS();
L_6db970: /* 6db970: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 6db974: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6db975: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6db976: mov esi, dword ptr [0xcfa1b4] */
  esi = R32((uint32_t)(0xcfa1b4u));
/* 6db97c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6db97d: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 6db981: lea eax, [edi + 8] */
  eax = (uint32_t)(edi + 0x8u);
/* 6db984: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6db985: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 6db988: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6db989: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6db98a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6db98b: lea ebx, [edi + 0xc] */
  ebx = (uint32_t)(edi + 0xcu);
/* 6db98e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6db990u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6db990: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6db993: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6db994: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6db996u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6db996: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6db999: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6db99a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6db99cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6db99c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6db99f: lea ecx, [edi + 0x28] */
  ecx = (uint32_t)(edi + 0x28u);
/* 6db9a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6db9a3: lea edx, [edi + 0x24] */
  edx = (uint32_t)(edi + 0x24u);
/* 6db9a6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6db9a7: lea ecx, [edi + 0x20] */
  ecx = (uint32_t)(edi + 0x20u);
/* 6db9aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6db9ab: lea edx, [edi + 0x1c] */
  edx = (uint32_t)(edi + 0x1cu);
/* 6db9ae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6db9af: add edi, 0x18 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 6db9b2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6db9b3: lea ecx, [ebx + 8] */
  ecx = (uint32_t)(ebx + 0x8u);
/* 6db9b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6db9b7: lea edx, [ebx + 4] */
  edx = (uint32_t)(ebx + 0x4u);
/* 6db9ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6db9bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6db9bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6db9bd: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6db9bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6db9bf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6db9c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6db9c3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6db9c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6db9c5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6db9c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6db9c9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6db9cbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6db9cb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6db9ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6db9cf: call dword ptr [0xcfa27c] */
  esp -= 4; W32(esp, 0x6db9d5u); SPILL(); f_4e4165(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAK@Z */ RELOAD();
/* 6db9d5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6db9d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6db9d9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6db9dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6db9db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6db9de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6db9df: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6db9e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6db9e1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6db9e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6db9e5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6db9e7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6db9e7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6db9ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6db9eb: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6db9edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6db9ed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6db9f0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6db9f1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6db9f2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6db9f3: ret  */
  esp += 4; SPILL(); return;
}

void f_6dba30(void) {
  LOAD_REGS();
L_6dba30: /* 6dba30: mov eax, 0xcd7150 */
  eax = 0xcd7150u;
/* 6dba35: ret  */
  esp += 4; SPILL(); return;
}

void f_6dba50(void) {
  LOAD_REGS();
L_6dba50: /* 6dba50: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6dba55: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6dba57: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6dba5b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6dba5f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dba61: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dba63: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dba64: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6dba68: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dba6a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6dba6b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dba6c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dba6d: push 0xcd7150 */
  { uint32_t v = 0xcd7150u; esp -= 4; W32(esp, v); }
/* 6dba72: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6dba78u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6dba78: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dba7b: ret  */
  esp += 4; SPILL(); return;
}

void f_6dba90(void) {
  LOAD_REGS();
L_6dba90: /* 6dba90: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6dba94: ret  */
  esp += 4; SPILL(); return;
}

void f_6dbab0(void) {
  LOAD_REGS();
L_6dbab0: /* 6dbab0: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* 6dbab3: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 6dbab6: ret  */
  esp += 4; SPILL(); return;
}

void f_6dbad0(void) {
  LOAD_REGS();
L_6dbad0: /* 6dbad0: mov eax, 0xcd5c90 */
  eax = 0xcd5c90u;
/* 6dbad5: ret  */
  esp += 4; SPILL(); return;
}

void f_6dbaf0(void) {
  LOAD_REGS();
L_6dbaf0: /* 6dbaf0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6dbaf5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6dbaf7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6dbafb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6dbaff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dbb01: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dbb03: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dbb04: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6dbb08: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dbb0a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6dbb0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dbb0c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dbb0d: push 0xcd5c90 */
  { uint32_t v = 0xcd5c90u; esp -= 4; W32(esp, v); }
/* 6dbb12: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6dbb18u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6dbb18: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dbb1b: ret  */
  esp += 4; SPILL(); return;
}

void f_6dbb30(void) {
  LOAD_REGS();
L_6dbb30: /* 6dbb30: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6dbb34: ret  */
  esp += 4; SPILL(); return;
}

void f_6dbb50(void) {
  LOAD_REGS();
L_6dbb50: /* 6dbb50: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* 6dbb53: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 6dbb56: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 6dbb59: ret  */
  esp += 4; SPILL(); return;
}

void f_6dbb70(void) {
  LOAD_REGS();
L_6dbb70: /* 6dbb70: mov eax, ecx */
  eax = ecx;
/* 6dbb72: ret  */
  esp += 4; SPILL(); return;
}

void f_6dbb90(void) {
  LOAD_REGS();
L_6dbb90: /* 6dbb90: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6dbb94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dbb95: mov esi, dword ptr [0xcfa1b8] */
  esi = R32((uint32_t)(0xcfa1b8u));
/* 6dbb9b: lea ecx, [eax + 3] */
  ecx = (uint32_t)(eax + 0x3u);
/* 6dbb9e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dbb9f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dbba0: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
/* 6dbba3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6dbba4: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6dbba7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dbba8: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 6dbbac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dbbad: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6dbbafu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dbbaf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dbbb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dbbb3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6dbbb5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dbbb5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dbbb8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dbbb9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6dbbbbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dbbbb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dbbbe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dbbbf: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6dbbc1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dbbc1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dbbc4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dbbc5: ret  */
  esp += 4; SPILL(); return;
}

void f_6dbbe0(void) {
  LOAD_REGS();
L_6dbbe0: /* 6dbbe0: mov eax, 0xcd61c0 */
  eax = 0xcd61c0u;
/* 6dbbe5: ret  */
  esp += 4; SPILL(); return;
}

void f_6dbc00(void) {
  LOAD_REGS();
L_6dbc00: /* 6dbc00: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6dbc05: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6dbc07: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6dbc0b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6dbc0f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dbc11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dbc13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dbc14: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6dbc18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dbc1a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6dbc1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dbc1c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dbc1d: push 0xcd61c0 */
  { uint32_t v = 0xcd61c0u; esp -= 4; W32(esp, v); }
/* 6dbc22: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6dbc28u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6dbc28: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dbc2b: ret  */
  esp += 4; SPILL(); return;
}

void f_6dbc40(void) {
  LOAD_REGS();
L_6dbc40: /* 6dbc40: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6dbc44: ret  */
  esp += 4; SPILL(); return;
}

void f_6dbc60(void) {
  LOAD_REGS();
L_6dbc60: /* 6dbc60: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* 6dbc63: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 6dbc66: ret  */
  esp += 4; SPILL(); return;
}

void f_6dbc80(void) {
  LOAD_REGS();
L_6dbc80: /* 6dbc80: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6dbc84: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 6dbc88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dbc89: mov esi, dword ptr [0xcfa1b4] */
  esi = R32((uint32_t)(0xcfa1b4u));
/* 6dbc8f: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 6dbc92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dbc93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dbc94: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6dbc95: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6dbc97u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dbc97: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dbc9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dbc9b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6dbc9du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dbc9d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dbca0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dbca1: ret  */
  esp += 4; SPILL(); return;
}

void f_6dbcc0(void) {
  LOAD_REGS();
L_6dbcc0: /* 6dbcc0: mov eax, 0xcd66f0 */
  eax = 0xcd66f0u;
/* 6dbcc5: ret  */
  esp += 4; SPILL(); return;
}

void f_6dbce0(void) {
  LOAD_REGS();
L_6dbce0: /* 6dbce0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6dbce5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6dbce7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6dbceb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6dbcef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dbcf1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dbcf3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dbcf4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6dbcf8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dbcfa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6dbcfb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dbcfc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dbcfd: push 0xcd66f0 */
  { uint32_t v = 0xcd66f0u; esp -= 4; W32(esp, v); }
/* 6dbd02: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6dbd08u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6dbd08: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dbd0b: ret  */
  esp += 4; SPILL(); return;
}

void f_6dbd20(void) {
  LOAD_REGS();
L_6dbd20: /* 6dbd20: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6dbd24: ret  */
  esp += 4; SPILL(); return;
}

void f_6dbd40(void) {
  LOAD_REGS();
L_6dbd40: /* 6dbd40: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* 6dbd43: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 6dbd46: ret  */
  esp += 4; SPILL(); return;
}

void f_6dbd60(void) {
  LOAD_REGS();
L_6dbd60: /* 6dbd60: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 6dbd64: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6dbd65: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dbd66: mov esi, dword ptr [0xcfa1b4] */
  esi = R32((uint32_t)(0xcfa1b4u));
/* 6dbd6c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dbd6d: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 6dbd71: lea eax, [edi + 8] */
  eax = (uint32_t)(edi + 0x8u);
/* 6dbd74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dbd75: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 6dbd78: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dbd79: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dbd7a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6dbd7b: lea ebx, [edi + 0xc] */
  ebx = (uint32_t)(edi + 0xcu);
/* 6dbd7e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6dbd80u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dbd80: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dbd83: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dbd84: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6dbd86u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dbd86: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dbd89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dbd8a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6dbd8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dbd8c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dbd8f: lea ecx, [edi + 0x24] */
  ecx = (uint32_t)(edi + 0x24u);
/* 6dbd92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dbd93: lea edx, [edi + 0x20] */
  edx = (uint32_t)(edi + 0x20u);
/* 6dbd96: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6dbd97: lea ecx, [edi + 0x1c] */
  ecx = (uint32_t)(edi + 0x1cu);
/* 6dbd9a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dbd9b: add edi, 0x18 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 6dbd9e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dbd9f: lea edx, [ebx + 8] */
  edx = (uint32_t)(ebx + 0x8u);
/* 6dbda2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6dbda3: lea ecx, [ebx + 4] */
  ecx = (uint32_t)(ebx + 0x4u);
/* 6dbda6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dbda7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6dbda8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dbda9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6dbdabu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dbdab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dbdae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dbdaf: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6dbdb1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dbdb1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dbdb4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dbdb5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6dbdb7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dbdb7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dbdba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dbdbb: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6dbdbdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dbdbd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dbdc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dbdc1: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6dbdc3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dbdc3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dbdc6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dbdc7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6dbdc9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dbdc9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dbdcc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dbdcd: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6dbdcfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dbdcf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dbdd2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dbdd3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dbdd4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6dbdd5: ret  */
  esp += 4; SPILL(); return;
}

void f_6dbe00(void) {
  LOAD_REGS();
L_6dbe00: /* 6dbe00: mov eax, 0xcd6c20 */
  eax = 0xcd6c20u;
/* 6dbe05: ret  */
  esp += 4; SPILL(); return;
}

void f_6dbe20(void) {
  LOAD_REGS();
L_6dbe20: /* 6dbe20: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6dbe25: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6dbe27: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6dbe2b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6dbe2f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dbe31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dbe33: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dbe34: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6dbe38: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dbe3a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6dbe3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dbe3c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dbe3d: push 0xcd6c20 */
  { uint32_t v = 0xcd6c20u; esp -= 4; W32(esp, v); }
/* 6dbe42: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6dbe48u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6dbe48: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dbe4b: ret  */
  esp += 4; SPILL(); return;
}

void f_6dbe60(void) {
  LOAD_REGS();
L_6dbe60: /* 6dbe60: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6dbe64: ret  */
  esp += 4; SPILL(); return;
}

void f_6dbe80(void) {
  LOAD_REGS();
L_6dbe80: /* 6dbe80: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* 6dbe83: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 6dbe86: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 6dbe89: ret  */
  esp += 4; SPILL(); return;
}

void f_6dbea0(void) {
  LOAD_REGS();
L_6dbea0: /* 6dbea0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 6dbea4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6dbea5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dbea6: mov esi, dword ptr [0xcfa1b4] */
  esi = R32((uint32_t)(0xcfa1b4u));
/* 6dbeac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dbead: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 6dbeb1: lea eax, [edi + 8] */
  eax = (uint32_t)(edi + 0x8u);
/* 6dbeb4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dbeb5: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 6dbeb8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dbeb9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dbeba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6dbebb: lea ebx, [edi + 0xc] */
  ebx = (uint32_t)(edi + 0xcu);
/* 6dbebe: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6dbec0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dbec0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dbec3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dbec4: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6dbec6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dbec6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dbec9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dbeca: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6dbeccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dbecc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dbecf: lea ecx, [edi + 0x3c] */
  ecx = (uint32_t)(edi + 0x3cu);
/* 6dbed2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dbed3: lea edx, [edi + 0x38] */
  edx = (uint32_t)(edi + 0x38u);
/* 6dbed6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6dbed7: lea ecx, [edi + 0x34] */
  ecx = (uint32_t)(edi + 0x34u);
/* 6dbeda: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dbedb: lea edx, [edi + 0x30] */
  edx = (uint32_t)(edi + 0x30u);
/* 6dbede: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6dbedf: lea ecx, [edi + 0x2c] */
  ecx = (uint32_t)(edi + 0x2cu);
/* 6dbee2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dbee3: lea edx, [edi + 0x28] */
  edx = (uint32_t)(edi + 0x28u);
/* 6dbee6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6dbee7: lea ecx, [edi + 0x24] */
  ecx = (uint32_t)(edi + 0x24u);
/* 6dbeea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dbeeb: lea edx, [edi + 0x20] */
  edx = (uint32_t)(edi + 0x20u);
/* 6dbeee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6dbeef: lea ecx, [edi + 0x1c] */
  ecx = (uint32_t)(edi + 0x1cu);
/* 6dbef2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dbef3: add edi, 0x18 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 6dbef6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dbef7: lea edx, [ebx + 8] */
  edx = (uint32_t)(ebx + 0x8u);
/* 6dbefa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6dbefb: lea ecx, [ebx + 4] */
  ecx = (uint32_t)(ebx + 0x4u);
/* 6dbefe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dbeff: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6dbf00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dbf01: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6dbf03u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dbf03: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dbf06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dbf07: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6dbf09u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dbf09: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dbf0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dbf0d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6dbf0fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dbf0f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dbf12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dbf13: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6dbf15u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dbf15: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dbf18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dbf19: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6dbf1bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dbf1b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dbf1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dbf1f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6dbf21u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dbf21: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dbf24: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dbf25: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6dbf27u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dbf27: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dbf2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dbf2b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6dbf2du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dbf2d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dbf30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dbf31: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6dbf33u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dbf33: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dbf36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dbf37: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6dbf39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dbf39: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dbf3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dbf3d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6dbf3fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dbf3f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dbf42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dbf43: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6dbf45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dbf45: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dbf48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dbf49: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6dbf4bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dbf4b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dbf4e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dbf4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dbf50: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6dbf51: ret  */
  esp += 4; SPILL(); return;
}

void f_6dbf90(void) {
  LOAD_REGS();
L_6dbf90: /* 6dbf90: mov eax, 0xcd7bb0 */
  eax = 0xcd7bb0u;
/* 6dbf95: ret  */
  esp += 4; SPILL(); return;
}

void f_6dbfb0(void) {
  LOAD_REGS();
L_6dbfb0: /* 6dbfb0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6dbfb5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6dbfb7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6dbfbb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6dbfbf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dbfc1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dbfc3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dbfc4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6dbfc8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dbfca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6dbfcb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dbfcc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dbfcd: push 0xcd7bb0 */
  { uint32_t v = 0xcd7bb0u; esp -= 4; W32(esp, v); }
/* 6dbfd2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6dbfd8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6dbfd8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dbfdb: ret  */
  esp += 4; SPILL(); return;
}

void f_6dbff0(void) {
  LOAD_REGS();
L_6dbff0: /* 6dbff0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6dbff4: ret  */
  esp += 4; SPILL(); return;
}

void f_6dc010(void) {
  LOAD_REGS();
L_6dc010: /* 6dc010: mov eax, 0xcd7680 */
  eax = 0xcd7680u;
/* 6dc015: ret  */
  esp += 4; SPILL(); return;
}

void f_6dc030(void) {
  LOAD_REGS();
L_6dc030: /* 6dc030: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6dc035: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6dc037: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6dc03b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6dc03f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dc041: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dc043: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dc044: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6dc048: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dc04a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6dc04b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dc04c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dc04d: push 0xcd7680 */
  { uint32_t v = 0xcd7680u; esp -= 4; W32(esp, v); }
/* 6dc052: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6dc058u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6dc058: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dc05b: ret  */
  esp += 4; SPILL(); return;
}

void f_6dc070(void) {
  LOAD_REGS();
L_6dc070: /* 6dc070: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6dc074: ret  */
  esp += 4; SPILL(); return;
}

void f_6dc090(void) {
  LOAD_REGS();
L_6dc090: /* 6dc090: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6dc092: push 0x9c0094 */
  { uint32_t v = 0x9c0094u; esp -= 4; W32(esp, v); }
/* 6dc097: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6dc09d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dc09e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6dc0a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dc0a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dc0a7: mov esi, ecx */
  esi = ecx;
/* 6dc0a9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6dc0ad: mov dword ptr [esi], 0x9f4208 */
  W32((uint32_t)(esi), 0x9f4208u);
/* 6dc0b3: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 6dc0bb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6dc0c1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6dc0c1: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 6dc0c4: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 6dc0c9: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x6dc0cfu); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 6dc0cf: mov ecx, esi */
  ecx = esi;
/* 6dc0d1: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6dc0d9: call 0x6c7473 */
  esp -= 4; W32(esp, 0x6dc0deu); SPILL(); f_6c7473(); if (g_unwind) return; RELOAD();
/* 6dc0de: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6dc0e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dc0e3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6dc0ea: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dc0ed: ret  */
  esp += 4; SPILL(); return;
}

void f_6dc110(void) {
  LOAD_REGS();
L_6dc110: /* 6dc110: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6dc112: push 0x9c00b8 */
  { uint32_t v = 0x9c00b8u; esp -= 4; W32(esp, v); }
/* 6dc117: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6dc11d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dc11e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6dc125: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dc126: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dc127: mov esi, ecx */
  esi = ecx;
/* 6dc129: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6dc12d: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x6dc133u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 6dc133: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 6dc136: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6dc13e: mov dword ptr [esi], 0x9f4208 */
  W32((uint32_t)(esi), 0x9f4208u);
/* 6dc144: call dword ptr [0xcfa28c] */
  esp -= 4; W32(esp, 0x6dc14au); SPILL(); f_4e3dcd(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@XZ */ RELOAD();
/* 6dc14a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6dc14e: mov eax, esi */
  eax = esi;
/* 6dc150: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dc151: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6dc158: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dc15b: ret  */
  esp += 4; SPILL(); return;
}

void f_6dc180(void) {
  LOAD_REGS();
L_6dc180: /* 6dc180: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6dc182: push 0x9c00d8 */
  { uint32_t v = 0x9c00d8u; esp -= 4; W32(esp, v); }
/* 6dc187: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6dc18d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dc18e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6dc195: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dc196: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dc197: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dc198: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 6dc19c: mov esi, ecx */
  esi = ecx;
/* 6dc19e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dc19f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 6dc1a3: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x6dc1a9u); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 6dc1a9: mov dword ptr [esi], 0x9f4100 */
  W32((uint32_t)(esi), 0x9f4100u);
/* 6dc1af: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6dc1b2: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6dc1b5: add edi, 0x2c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 6dc1b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dc1b9: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 6dc1bc: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 6dc1c4: mov dword ptr [esi], 0x9f4208 */
  W32((uint32_t)(esi), 0x9f4208u);
/* 6dc1ca: call dword ptr [0xcfa290] */
  esp -= 4; W32(esp, 0x6dc1d0u); SPILL(); f_4e447b(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@ABV0@@Z */ RELOAD();
/* 6dc1d0: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 6dc1d4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dc1d5: mov eax, esi */
  eax = esi;
/* 6dc1d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dc1d8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6dc1df: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dc1e2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dc210(void) {
  LOAD_REGS();
L_6dc210: /* 6dc210: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dc211: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dc212: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6dc216: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dc217: mov esi, ecx */
  esi = ecx;
/* 6dc219: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6dc21fu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6dc21f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6dc222: add edi, 0x2c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 6dc225: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dc226: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 6dc229: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6dc22c: call dword ptr [0xcfa294] */
  esp -= 4; W32(esp, 0x6dc232u); SPILL(); f_4e2676(); if (g_unwind) return; /* Core!??4?$TArray@G@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6dc232: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dc233: mov eax, esi */
  eax = esi;
/* 6dc235: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dc236: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dc250(void) {
  LOAD_REGS();
L_6dc250: /* 6dc250: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dc251: mov esi, ecx */
  esi = ecx;
/* 6dc253: call 0x6c6938 */
  esp -= 4; W32(esp, 0x6dc258u); SPILL(); f_6c6938(); if (g_unwind) return; RELOAD();
/* 6dc258: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6dc25d: je 0x6dc26b */
  if (zf) goto L_6dc26b;
L_6dc25f: /* 6dc25f: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 6dc261: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dc262: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6dc268u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6dc268: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6dc26b: /* 6dc26b: mov eax, esi */
  eax = esi;
/* 6dc26d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dc26e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dc290(void) {
  LOAD_REGS();
L_6dc290: /* 6dc290: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6dc291: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6dc295: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6dc298: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dc299: mov esi, ecx */
  esi = ecx;
/* 6dc29b: je 0x6dc2cd */
  if (zf) goto L_6dc2cd;
L_6dc29d: /* 6dc29d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6dc2a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dc2a1: push 0x6c6938 */
  { uint32_t v = 0x6c6938u; esp -= 4; W32(esp, v); }
/* 6dc2a6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6dc2a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dc2aa: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 6dc2ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dc2ad: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6dc2b2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6dc2b2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6dc2b5: je 0x6dc2c5 */
  if (zf) goto L_6dc2c5;
L_6dc2b7: /* 6dc2b7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6dc2bd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6dc2bf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6dc2c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dc2c2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6dc2c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6dc2c5: /* 6dc2c5: mov eax, edi */
  eax = edi;
/* 6dc2c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dc2c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dc2c9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6dc2ca: ret 4 */
  esp += 8; SPILL(); return;
L_6dc2cd: /* 6dc2cd: mov ecx, esi */
  ecx = esi;
/* 6dc2cf: call 0x6c6938 */
  esp -= 4; W32(esp, 0x6dc2d4u); SPILL(); f_6c6938(); if (g_unwind) return; RELOAD();
/* 6dc2d4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6dc2d7: je 0x6dc2e5 */
  if (zf) goto L_6dc2e5;
L_6dc2d9: /* 6dc2d9: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 6dc2db: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dc2dc: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6dc2e2u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6dc2e2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6dc2e5: /* 6dc2e5: mov eax, esi */
  eax = esi;
/* 6dc2e7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dc2e8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6dc2e9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dc310(void) {
  LOAD_REGS();
L_6dc310: /* 6dc310: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dc330(void) {
  LOAD_REGS();
L_6dc330: /* 6dc330: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dc350(void) {
  LOAD_REGS();
L_6dc350: /* 6dc350: xor eax, eax */
  eax = 0;
/* 6dc352: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6dc370(void) {
  LOAD_REGS();
L_6dc370: /* 6dc370: mov eax, 1 */
  eax = 0x1u;
/* 6dc375: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dc390(void) {
  LOAD_REGS();
L_6dc390: /* 6dc390: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dc3b0(void) {
  LOAD_REGS();
L_6dc3b0: /* 6dc3b0: ret  */
  esp += 4; SPILL(); return;
}

void f_6dc3d0(void) {
  LOAD_REGS();
L_6dc3d0: /* 6dc3d0: mov eax, ecx */
  eax = ecx;
/* 6dc3d2: mov dword ptr [eax], 0x9f4288 */
  W32((uint32_t)(eax), 0x9f4288u);
/* 6dc3d8: ret  */
  esp += 4; SPILL(); return;
}

void f_6dc3f0(void) {
  LOAD_REGS();
L_6dc3f0: /* 6dc3f0: mov eax, ecx */
  eax = ecx;
/* 6dc3f2: mov dword ptr [eax], 0x9f4288 */
  W32((uint32_t)(eax), 0x9f4288u);
/* 6dc3f8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dc410(void) {
  LOAD_REGS();
L_6dc410: /* 6dc410: mov eax, ecx */
  eax = ecx;
/* 6dc412: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dc430(void) {
  LOAD_REGS();
L_6dc430: /* 6dc430: mov eax, 0xb7dd58 */
  eax = 0xb7dd58u;
/* 6dc435: ret  */
  esp += 4; SPILL(); return;
}

void f_6dc450(void) {
  LOAD_REGS();
L_6dc450: /* 6dc450: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6dc455: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6dc457: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6dc45b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6dc45f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dc461: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dc463: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dc464: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6dc468: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dc46a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6dc46b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dc46c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dc46d: push 0xb7dd58 */
  { uint32_t v = 0xb7dd58u; esp -= 4; W32(esp, v); }
/* 6dc472: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6dc478u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6dc478: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dc47b: ret  */
  esp += 4; SPILL(); return;
}

void f_6dc490(void) {
  LOAD_REGS();
L_6dc490: /* 6dc490: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6dc494: ret  */
  esp += 4; SPILL(); return;
}

void f_6dc4b0(void) {
  LOAD_REGS();
L_6dc4b0: /* 6dc4b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6dc4b2: push 0x9c00f9 */
  { uint32_t v = 0x9c00f9u; esp -= 4; W32(esp, v); }
/* 6dc4b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6dc4bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dc4be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6dc4c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dc4c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dc4c7: mov esi, ecx */
  esi = ecx;
/* 6dc4c9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6dc4cd: mov dword ptr [esi], 0x9f4320 */
  W32((uint32_t)(esi), 0x9f4320u);
/* 6dc4d3: mov dword ptr [esi + 0x28], 0x9f4318 */
  W32((uint32_t)(esi + 0x28u), 0x9f4318u);
/* 6dc4da: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6dc4e2: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6dc4e8u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6dc4e8: mov ecx, esi */
  ecx = esi;
/* 6dc4ea: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6dc4f2: call dword ptr [0xcfa2a0] */
  esp -= 4; W32(esp, 0x6dc4f8u); SPILL(); f_4e152d(); if (g_unwind) return; /* Core!??1USubsystem@@UAE@XZ */ RELOAD();
/* 6dc4f8: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6dc4fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dc4fd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6dc504: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dc507: ret  */
  esp += 4; SPILL(); return;
}

void f_6dc530(void) {
  LOAD_REGS();
L_6dc530: /* 6dc530: xor eax, eax */
  eax = 0;
/* 6dc532: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6dc550(void) {
  LOAD_REGS();
L_6dc550: /* 6dc550: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dc551: mov esi, ecx */
  esi = ecx;
/* 6dc553: call dword ptr [0xcfa2a4] */
  esp -= 4; W32(esp, 0x6dc559u); SPILL(); f_4e22e3(); if (g_unwind) return; /* Core!??0USubsystem@@IAE@XZ */ RELOAD();
/* 6dc559: mov dword ptr [esi], 0x9f4320 */
  W32((uint32_t)(esi), 0x9f4320u);
/* 6dc55f: mov dword ptr [esi + 0x28], 0x9f4318 */
  W32((uint32_t)(esi + 0x28u), 0x9f4318u);
/* 6dc566: mov eax, esi */
  eax = esi;
/* 6dc568: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dc569: ret  */
  esp += 4; SPILL(); return;
}

void f_6dc580(void) {
  LOAD_REGS();
L_6dc580: /* 6dc580: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6dc581: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6dc582: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 6dc586: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dc587: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dc588: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6dc589: mov ebx, ecx */
  ebx = ecx;
/* 6dc58b: call dword ptr [0xcfa2a8] */
  esp -= 4; W32(esp, 0x6dc591u); SPILL(); f_4e3887(); if (g_unwind) return; /* Core!??0USubsystem@@QAE@ABV0@@Z */ RELOAD();
/* 6dc591: mov dword ptr [ebx], 0x9f4320 */
  W32((uint32_t)(ebx), 0x9f4320u);
/* 6dc597: mov dword ptr [ebx + 0x28], 0x9f4318 */
  W32((uint32_t)(ebx + 0x28u), 0x9f4318u);
/* 6dc59e: mov al, byte ptr [ebp + 0x2c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x2cu))) & 0xffu);
/* 6dc5a1: mov byte ptr [ebx + 0x2c], al */
  W8((uint32_t)(ebx + 0x2cu), (eax & 0xffu));
/* 6dc5a4: mov ecx, dword ptr [ebp + 0x30] */
  ecx = R32((uint32_t)(ebp + 0x30u));
/* 6dc5a7: mov dword ptr [ebx + 0x30], ecx */
  W32((uint32_t)(ebx + 0x30u), ecx);
/* 6dc5aa: mov edx, dword ptr [ebp + 0x34] */
  edx = R32((uint32_t)(ebp + 0x34u));
/* 6dc5ad: mov dword ptr [ebx + 0x34], edx */
  W32((uint32_t)(ebx + 0x34u), edx);
/* 6dc5b0: mov eax, dword ptr [ebp + 0x38] */
  eax = R32((uint32_t)(ebp + 0x38u));
/* 6dc5b3: mov dword ptr [ebx + 0x38], eax */
  W32((uint32_t)(ebx + 0x38u), eax);
/* 6dc5b6: mov ecx, dword ptr [ebp + 0x3c] */
  ecx = R32((uint32_t)(ebp + 0x3cu));
/* 6dc5b9: mov dword ptr [ebx + 0x3c], ecx */
  W32((uint32_t)(ebx + 0x3cu), ecx);
/* 6dc5bc: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* 6dc5bf: mov dword ptr [ebx + 0x40], edx */
  W32((uint32_t)(ebx + 0x40u), edx);
/* 6dc5c2: mov eax, dword ptr [ebp + 0x44] */
  eax = R32((uint32_t)(ebp + 0x44u));
/* 6dc5c5: mov dword ptr [ebx + 0x44], eax */
  W32((uint32_t)(ebx + 0x44u), eax);
/* 6dc5c8: mov ecx, dword ptr [ebp + 0x48] */
  ecx = R32((uint32_t)(ebp + 0x48u));
/* 6dc5cb: mov dword ptr [ebx + 0x48], ecx */
  W32((uint32_t)(ebx + 0x48u), ecx);
/* 6dc5ce: mov edx, dword ptr [ebp + 0x4c] */
  edx = R32((uint32_t)(ebp + 0x4cu));
/* 6dc5d1: mov dword ptr [ebx + 0x4c], edx */
  W32((uint32_t)(ebx + 0x4cu), edx);
/* 6dc5d4: mov eax, dword ptr [ebp + 0x50] */
  eax = R32((uint32_t)(ebp + 0x50u));
/* 6dc5d7: mov dword ptr [ebx + 0x50], eax */
  W32((uint32_t)(ebx + 0x50u), eax);
/* 6dc5da: mov ecx, dword ptr [ebp + 0x54] */
  ecx = R32((uint32_t)(ebp + 0x54u));
/* 6dc5dd: mov dword ptr [ebx + 0x54], ecx */
  W32((uint32_t)(ebx + 0x54u), ecx);
/* 6dc5e0: mov edx, dword ptr [ebp + 0x58] */
  edx = R32((uint32_t)(ebp + 0x58u));
/* 6dc5e3: mov dword ptr [ebx + 0x58], edx */
  W32((uint32_t)(ebx + 0x58u), edx);
/* 6dc5e6: mov eax, dword ptr [ebp + 0x5c] */
  eax = R32((uint32_t)(ebp + 0x5cu));
/* 6dc5e9: mov dword ptr [ebx + 0x5c], eax */
  W32((uint32_t)(ebx + 0x5cu), eax);
/* 6dc5ec: mov ecx, dword ptr [ebp + 0x60] */
  ecx = R32((uint32_t)(ebp + 0x60u));
/* 6dc5ef: mov dword ptr [ebx + 0x60], ecx */
  W32((uint32_t)(ebx + 0x60u), ecx);
/* 6dc5f2: mov edx, dword ptr [ebp + 0x64] */
  edx = R32((uint32_t)(ebp + 0x64u));
/* 6dc5f5: mov dword ptr [ebx + 0x64], edx */
  W32((uint32_t)(ebx + 0x64u), edx);
/* 6dc5f8: mov eax, dword ptr [ebp + 0x68] */
  eax = R32((uint32_t)(ebp + 0x68u));
/* 6dc5fb: mov dword ptr [ebx + 0x68], eax */
  W32((uint32_t)(ebx + 0x68u), eax);
/* 6dc5fe: mov ecx, dword ptr [ebp + 0x6c] */
  ecx = R32((uint32_t)(ebp + 0x6cu));
/* 6dc601: mov dword ptr [ebx + 0x6c], ecx */
  W32((uint32_t)(ebx + 0x6cu), ecx);
/* 6dc604: lea esi, [ebp + 0x70] */
  esi = (uint32_t)(ebp + 0x70u);
/* 6dc607: lea edi, [ebx + 0x70] */
  edi = (uint32_t)(ebx + 0x70u);
/* 6dc60a: mov ecx, 8 */
  ecx = 0x8u;
/* 6dc60f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6dc611: lea esi, [ebp + 0x90] */
  esi = (uint32_t)(ebp + 0x90u);
/* 6dc617: lea edi, [ebx + 0x90] */
  edi = (uint32_t)(ebx + 0x90u);
/* 6dc61d: mov ecx, 8 */
  ecx = 0x8u;
/* 6dc622: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6dc624: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dc625: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dc626: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6dc627: mov eax, ebx */
  eax = ebx;
/* 6dc629: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6dc62a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dc660(void) {
  LOAD_REGS();
L_6dc660: /* 6dc660: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dc661: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dc662: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6dc666: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dc667: mov esi, ecx */
  esi = ecx;
/* 6dc669: call dword ptr [0xcfa2ac] */
  esp -= 4; W32(esp, 0x6dc66fu); SPILL(); f_4e3409(); if (g_unwind) return; /* Core!??4USubsystem@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6dc66f: mov al, byte ptr [edi + 0x2c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x2cu))) & 0xffu);
/* 6dc672: mov byte ptr [esi + 0x2c], al */
  W8((uint32_t)(esi + 0x2cu), (eax & 0xffu));
/* 6dc675: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 6dc678: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 6dc67b: mov edx, dword ptr [edi + 0x34] */
  edx = R32((uint32_t)(edi + 0x34u));
/* 6dc67e: mov dword ptr [esi + 0x34], edx */
  W32((uint32_t)(esi + 0x34u), edx);
/* 6dc681: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 6dc684: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 6dc687: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 6dc68a: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 6dc68d: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 6dc690: mov dword ptr [esi + 0x40], edx */
  W32((uint32_t)(esi + 0x40u), edx);
/* 6dc693: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* 6dc696: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 6dc699: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 6dc69c: mov dword ptr [esi + 0x48], ecx */
  W32((uint32_t)(esi + 0x48u), ecx);
/* 6dc69f: mov edx, dword ptr [edi + 0x4c] */
  edx = R32((uint32_t)(edi + 0x4cu));
/* 6dc6a2: mov dword ptr [esi + 0x4c], edx */
  W32((uint32_t)(esi + 0x4cu), edx);
/* 6dc6a5: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 6dc6a8: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 6dc6ab: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* 6dc6ae: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* 6dc6b1: mov edx, dword ptr [edi + 0x58] */
  edx = R32((uint32_t)(edi + 0x58u));
/* 6dc6b4: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
/* 6dc6b7: mov eax, dword ptr [edi + 0x5c] */
  eax = R32((uint32_t)(edi + 0x5cu));
/* 6dc6ba: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* 6dc6bd: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 6dc6c0: mov dword ptr [esi + 0x60], ecx */
  W32((uint32_t)(esi + 0x60u), ecx);
/* 6dc6c3: mov edx, dword ptr [edi + 0x64] */
  edx = R32((uint32_t)(edi + 0x64u));
/* 6dc6c6: mov dword ptr [esi + 0x64], edx */
  W32((uint32_t)(esi + 0x64u), edx);
/* 6dc6c9: mov eax, dword ptr [edi + 0x68] */
  eax = R32((uint32_t)(edi + 0x68u));
/* 6dc6cc: mov dword ptr [esi + 0x68], eax */
  W32((uint32_t)(esi + 0x68u), eax);
/* 6dc6cf: mov ecx, dword ptr [edi + 0x6c] */
  ecx = R32((uint32_t)(edi + 0x6cu));
/* 6dc6d2: mov dword ptr [esi + 0x6c], ecx */
  W32((uint32_t)(esi + 0x6cu), ecx);
/* 6dc6d5: mov edx, dword ptr [edi + 0x70] */
  edx = R32((uint32_t)(edi + 0x70u));
/* 6dc6d8: mov dword ptr [esi + 0x70], edx */
  W32((uint32_t)(esi + 0x70u), edx);
/* 6dc6db: mov eax, dword ptr [edi + 0x74] */
  eax = R32((uint32_t)(edi + 0x74u));
/* 6dc6de: mov dword ptr [esi + 0x74], eax */
  W32((uint32_t)(esi + 0x74u), eax);
/* 6dc6e1: mov ecx, dword ptr [edi + 0x78] */
  ecx = R32((uint32_t)(edi + 0x78u));
/* 6dc6e4: mov dword ptr [esi + 0x78], ecx */
  W32((uint32_t)(esi + 0x78u), ecx);
/* 6dc6e7: mov edx, dword ptr [edi + 0x7c] */
  edx = R32((uint32_t)(edi + 0x7cu));
/* 6dc6ea: mov dword ptr [esi + 0x7c], edx */
  W32((uint32_t)(esi + 0x7cu), edx);
/* 6dc6ed: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* 6dc6f3: mov dword ptr [esi + 0x80], eax */
  W32((uint32_t)(esi + 0x80u), eax);
/* 6dc6f9: mov ecx, dword ptr [edi + 0x84] */
  ecx = R32((uint32_t)(edi + 0x84u));
/* 6dc6ff: mov dword ptr [esi + 0x84], ecx */
  W32((uint32_t)(esi + 0x84u), ecx);
/* 6dc705: mov edx, dword ptr [edi + 0x88] */
  edx = R32((uint32_t)(edi + 0x88u));
/* 6dc70b: mov dword ptr [esi + 0x88], edx */
  W32((uint32_t)(esi + 0x88u), edx);
/* 6dc711: mov eax, dword ptr [edi + 0x8c] */
  eax = R32((uint32_t)(edi + 0x8cu));
/* 6dc717: mov dword ptr [esi + 0x8c], eax */
  W32((uint32_t)(esi + 0x8cu), eax);
/* 6dc71d: mov ecx, dword ptr [edi + 0x90] */
  ecx = R32((uint32_t)(edi + 0x90u));
/* 6dc723: mov dword ptr [esi + 0x90], ecx */
  W32((uint32_t)(esi + 0x90u), ecx);
/* 6dc729: mov edx, dword ptr [edi + 0x94] */
  edx = R32((uint32_t)(edi + 0x94u));
/* 6dc72f: mov dword ptr [esi + 0x94], edx */
  W32((uint32_t)(esi + 0x94u), edx);
/* 6dc735: mov eax, dword ptr [edi + 0x98] */
  eax = R32((uint32_t)(edi + 0x98u));
/* 6dc73b: mov dword ptr [esi + 0x98], eax */
  W32((uint32_t)(esi + 0x98u), eax);
/* 6dc741: mov ecx, dword ptr [edi + 0x9c] */
  ecx = R32((uint32_t)(edi + 0x9cu));
/* 6dc747: mov dword ptr [esi + 0x9c], ecx */
  W32((uint32_t)(esi + 0x9cu), ecx);
/* 6dc74d: mov edx, dword ptr [edi + 0xa0] */
  edx = R32((uint32_t)(edi + 0xa0u));
/* 6dc753: mov dword ptr [esi + 0xa0], edx */
  W32((uint32_t)(esi + 0xa0u), edx);
/* 6dc759: mov eax, dword ptr [edi + 0xa4] */
  eax = R32((uint32_t)(edi + 0xa4u));
/* 6dc75f: mov dword ptr [esi + 0xa4], eax */
  W32((uint32_t)(esi + 0xa4u), eax);
/* 6dc765: mov ecx, dword ptr [edi + 0xa8] */
  ecx = R32((uint32_t)(edi + 0xa8u));
/* 6dc76b: mov dword ptr [esi + 0xa8], ecx */
  W32((uint32_t)(esi + 0xa8u), ecx);
/* 6dc771: mov edx, dword ptr [edi + 0xac] */
  edx = R32((uint32_t)(edi + 0xacu));
/* 6dc777: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dc778: mov dword ptr [esi + 0xac], edx */
  W32((uint32_t)(esi + 0xacu), edx);
/* 6dc77e: mov eax, esi */
  eax = esi;
/* 6dc780: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dc781: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dc7e0(void) {
  LOAD_REGS();
L_6dc7e0: /* 6dc7e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dc7e1: mov esi, ecx */
  esi = ecx;
/* 6dc7e3: call 0x6c8dc3 */
  esp -= 4; W32(esp, 0x6dc7e8u); SPILL(); f_6c8dc3(); if (g_unwind) return; RELOAD();
/* 6dc7e8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6dc7ed: je 0x6dc7fe */
  if (zf) goto L_6dc7fe;
L_6dc7ef: /* 6dc7ef: push 0xb0 */
  { uint32_t v = 0xb0u; esp -= 4; W32(esp, v); }
/* 6dc7f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dc7f5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6dc7fbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6dc7fb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6dc7fe: /* 6dc7fe: mov eax, esi */
  eax = esi;
/* 6dc800: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dc801: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dc820(void) {
  LOAD_REGS();
L_6dc820: /* 6dc820: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6dc821: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6dc825: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6dc828: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dc829: mov esi, ecx */
  esi = ecx;
/* 6dc82b: je 0x6dc860 */
  if (zf) goto L_6dc860;
L_6dc82d: /* 6dc82d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6dc830: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dc831: push 0x6c8dc3 */
  { uint32_t v = 0x6c8dc3u; esp -= 4; W32(esp, v); }
/* 6dc836: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6dc839: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dc83a: push 0xb0 */
  { uint32_t v = 0xb0u; esp -= 4; W32(esp, v); }
/* 6dc83f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dc840: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6dc845u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6dc845: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6dc848: je 0x6dc858 */
  if (zf) goto L_6dc858;
L_6dc84a: /* 6dc84a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6dc850: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6dc852: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6dc854: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dc855: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6dc858u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6dc858: /* 6dc858: mov eax, edi */
  eax = edi;
/* 6dc85a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dc85b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dc85c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6dc85d: ret 4 */
  esp += 8; SPILL(); return;
L_6dc860: /* 6dc860: mov ecx, esi */
  ecx = esi;
/* 6dc862: call 0x6c8dc3 */
  esp -= 4; W32(esp, 0x6dc867u); SPILL(); f_6c8dc3(); if (g_unwind) return; RELOAD();
/* 6dc867: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6dc86a: je 0x6dc87b */
  if (zf) goto L_6dc87b;
L_6dc86c: /* 6dc86c: push 0xb0 */
  { uint32_t v = 0xb0u; esp -= 4; W32(esp, v); }
/* 6dc871: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dc872: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6dc878u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6dc878: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6dc87b: /* 6dc87b: mov eax, esi */
  eax = esi;
/* 6dc87d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dc87e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6dc87f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dc8b0(void) {
  LOAD_REGS();
L_6dc8b0: /* 6dc8b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dc8b1: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 6dc8b5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6dc8b6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 6dc8b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dc8b8: mov eax, ecx */
  eax = ecx;
/* 6dc8ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dc8bb: mov edi, eax */
  edi = eax;
/* 6dc8bd: lea esi, [eax + 0xc] */
  esi = (uint32_t)(eax + 0xcu);
/* 6dc8c0: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 6dc8c2: mov dword ptr [esp + 0x10], 0x20 */
  W32((uint32_t)(esp + 0x10u), 0x20u);
/* 6dc8ca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_6dc8d0: /* 6dc8d0: mov ebx, edx */
  ebx = edx;
/* 6dc8d2: mov ebp, dword ptr [ebx] */
  ebp = R32((uint32_t)(ebx));
/* 6dc8d4: lea ecx, [edi + edx] */
  ecx = (uint32_t)(edi + edx);
/* 6dc8d7: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 6dc8d9: mov ebp, dword ptr [ebx + 4] */
  ebp = R32((uint32_t)(ebx + 0x4u));
/* 6dc8dc: mov dword ptr [ecx + 4], ebp */
  W32((uint32_t)(ecx + 0x4u), ebp);
/* 6dc8df: mov ebx, dword ptr [ebx + 8] */
  ebx = R32((uint32_t)(ebx + 0x8u));
/* 6dc8e2: mov dword ptr [ecx + 8], ebx */
  W32((uint32_t)(ecx + 0x8u), ebx);
/* 6dc8e5: mov ecx, dword ptr [edx + 0xc] */
  ecx = R32((uint32_t)(edx + 0xcu));
/* 6dc8e8: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 6dc8ea: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 6dc8ee: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 6dc8f1: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 6dc8f4: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 6dc8f5: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 6dc8f9: jne 0x6dc8d0 */
  if (!zf) goto L_6dc8d0;
L_6dc8fb: /* 6dc8fb: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 6dc8ff: mov ecx, dword ptr [edx + 0x200] */
  ecx = R32((uint32_t)(edx + 0x200u));
/* 6dc905: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dc906: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dc907: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 6dc908: mov dword ptr [eax + 0x200], ecx */
  W32((uint32_t)(eax + 0x200u), ecx);
/* 6dc90e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6dc90f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6dc910: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dc940(void) {
  LOAD_REGS();
L_6dc940: /* 6dc940: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dc941: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 6dc945: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dc946: mov eax, ecx */
  eax = ecx;
/* 6dc948: mov ecx, 0x81 */
  ecx = 0x81u;
/* 6dc94d: mov edi, eax */
  edi = eax;
/* 6dc94f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6dc951: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dc952: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dc953: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dc970(void) {
  LOAD_REGS();
L_6dc970: /* 6dc970: mov eax, ecx */
  eax = ecx;
/* 6dc972: ret  */
  esp += 4; SPILL(); return;
}

void f_6dc990(void) {
  LOAD_REGS();
L_6dc990: /* 6dc990: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 6dc994: mov eax, ecx */
  eax = ecx;
/* 6dc996: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 6dc998: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 6dc99c: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 6dc99f: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 6dc9a3: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 6dc9a6: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 6dc9aa: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 6dc9ad: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_6dc9c0(void) {
  LOAD_REGS();
L_6dc9c0: /* 6dc9c0: mov eax, ecx */
  eax = ecx;
/* 6dc9c2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6dc9c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dc9c7: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 6dc9c9: mov edx, eax */
  edx = eax;
/* 6dc9cb: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 6dc9cd: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 6dc9d0: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 6dc9d3: mov esi, dword ptr [ecx + 8] */
  esi = R32((uint32_t)(ecx + 0x8u));
/* 6dc9d6: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 6dc9d9: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 6dc9dc: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 6dc9df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dc9e0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dca00(void) {
  LOAD_REGS();
L_6dca00: /* 6dca00: mov eax, ecx */
  eax = ecx;
/* 6dca02: mov dword ptr [eax], 0x9f43e4 */
  W32((uint32_t)(eax), 0x9f43e4u);
/* 6dca08: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dca20(void) {
  LOAD_REGS();
L_6dca20: /* 6dca20: mov eax, ecx */
  eax = ecx;
/* 6dca22: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dca40(void) {
  LOAD_REGS();
L_6dca40: /* 6dca40: mov eax, ecx */
  eax = ecx;
/* 6dca42: ret  */
  esp += 4; SPILL(); return;
}

void f_6dca60(void) {
  LOAD_REGS();
L_6dca60: /* 6dca60: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 6dca64: mov eax, ecx */
  eax = ecx;
/* 6dca66: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 6dca68: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 6dca6c: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 6dca6f: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 6dca73: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 6dca76: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 6dca7a: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 6dca7e: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 6dca81: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 6dca85: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 6dca88: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 6dca8b: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_6dcaa0(void) {
  LOAD_REGS();
L_6dcaa0: /* 6dcaa0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dcaa1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 6dcaa5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dcaa6: mov eax, ecx */
  eax = ecx;
/* 6dcaa8: mov ecx, 6 */
  ecx = 0x6u;
/* 6dcaad: mov edi, eax */
  edi = eax;
/* 6dcaaf: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6dcab1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dcab2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dcab3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dcad0(void) {
  LOAD_REGS();
L_6dcad0: /* 6dcad0: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 6dcad3: jmp dword ptr [0xcfa288] */
  SPILL(); f_4e2ecd(); return; /* Core!??1?$TArray@G@@QAE@XZ */
}

void f_6dcaf0(void) {
  LOAD_REGS();
L_6dcaf0: /* 6dcaf0: mov eax, ecx */
  eax = ecx;
/* 6dcaf2: mov dword ptr [eax], 0x9f43f0 */
  W32((uint32_t)(eax), 0x9f43f0u);
/* 6dcaf8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dcb10(void) {
  LOAD_REGS();
L_6dcb10: /* 6dcb10: mov eax, ecx */
  eax = ecx;
/* 6dcb12: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dcb30(void) {
  LOAD_REGS();
L_6dcb30: /* 6dcb30: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dcb50(void) {
  LOAD_REGS();
L_6dcb50: /* 6dcb50: mov eax, ecx */
  eax = ecx;
/* 6dcb52: mov dword ptr [eax], 0x9f4408 */
  W32((uint32_t)(eax), 0x9f4408u);
/* 6dcb58: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dcb70(void) {
  LOAD_REGS();
L_6dcb70: /* 6dcb70: mov eax, ecx */
  eax = ecx;
/* 6dcb72: ret  */
  esp += 4; SPILL(); return;
}

void f_6dcb90(void) {
  LOAD_REGS();
L_6dcb90: /* 6dcb90: xor eax, eax */
  eax = 0;
/* 6dcb92: ret  */
  esp += 4; SPILL(); return;
}

void f_6dcbb0(void) {
  LOAD_REGS();
L_6dcbb0: /* 6dcbb0: xor eax, eax */
  eax = 0;
/* 6dcbb2: ret  */
  esp += 4; SPILL(); return;
}

void f_6dcbd0(void) {
  LOAD_REGS();
L_6dcbd0: /* 6dcbd0: xor eax, eax */
  eax = 0;
/* 6dcbd2: ret  */
  esp += 4; SPILL(); return;
}

void f_6dcbf0(void) {
  LOAD_REGS();
L_6dcbf0: /* 6dcbf0: xor eax, eax */
  eax = 0;
/* 6dcbf2: ret  */
  esp += 4; SPILL(); return;
}

void f_6dcc10(void) {
  LOAD_REGS();
L_6dcc10: /* 6dcc10: mov eax, 1 */
  eax = 0x1u;
/* 6dcc15: ret  */
  esp += 4; SPILL(); return;
}

void f_6dcc30(void) {
  LOAD_REGS();
L_6dcc30: /* 6dcc30: mov eax, ecx */
  eax = ecx;
/* 6dcc32: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dcc50(void) {
  LOAD_REGS();
L_6dcc50: /* 6dcc50: mov eax, 0xb86100 */
  eax = 0xb86100u;
/* 6dcc55: ret  */
  esp += 4; SPILL(); return;
}

void f_6dcc70(void) {
  LOAD_REGS();
L_6dcc70: /* 6dcc70: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6dcc75: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6dcc77: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6dcc7b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6dcc7f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dcc81: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dcc83: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dcc84: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6dcc88: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dcc8a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6dcc8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dcc8c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dcc8d: push 0xb86100 */
  { uint32_t v = 0xb86100u; esp -= 4; W32(esp, v); }
/* 6dcc92: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6dcc98u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6dcc98: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dcc9b: ret  */
  esp += 4; SPILL(); return;
}

void f_6dccb0(void) {
  LOAD_REGS();
L_6dccb0: /* 6dccb0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6dccb4: ret  */
  esp += 4; SPILL(); return;
}

void f_6dccd0(void) {
  LOAD_REGS();
L_6dccd0: /* 6dccd0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6dccd4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 6dccd8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6dccda: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6dccdb: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x6dccdeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dccde: ret  */
  esp += 4; SPILL(); return;
}

void f_6dccf0(void) {
  LOAD_REGS();
L_6dccf0: /* 6dccf0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6dccf2: push 0x9c0119 */
  { uint32_t v = 0x9c0119u; esp -= 4; W32(esp, v); }
/* 6dccf7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6dccfd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dccfe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6dcd05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dcd06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dcd07: mov esi, ecx */
  esi = ecx;
/* 6dcd09: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6dcd0d: mov dword ptr [esi], 0x9f4450 */
  W32((uint32_t)(esi), 0x9f4450u);
/* 6dcd13: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6dcd1b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6dcd21u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6dcd21: mov ecx, esi */
  ecx = esi;
/* 6dcd23: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6dcd2b: call dword ptr [0xcfa254] */
  esp -= 4; W32(esp, 0x6dcd31u); SPILL(); f_4e2e55(); if (g_unwind) return; /* Core!??1UObject@@UAE@XZ */ RELOAD();
/* 6dcd31: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6dcd35: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dcd36: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6dcd3d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dcd40: ret  */
  esp += 4; SPILL(); return;
}

void f_6dcd70(void) {
  LOAD_REGS();
L_6dcd70: /* 6dcd70: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 6dcd73: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 6dcd75: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6dcd78: ret  */
  esp += 4; SPILL(); return;
}

void f_6dcd90(void) {
  LOAD_REGS();
L_6dcd90: /* 6dcd90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6dcd94: lea edx, [eax + eax] */
  edx = (uint32_t)(eax + eax);
/* 6dcd97: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 6dcd9a: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6dcd9c: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6dcd9f: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6dcda1: mov dword ptr [ecx + 0x30], eax */
  W32((uint32_t)(ecx + 0x30u), eax);
/* 6dcda4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dcdc0(void) {
  LOAD_REGS();
L_6dcdc0: /* 6dcdc0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dcde0(void) {
  LOAD_REGS();
L_6dcde0: /* 6dcde0: xor eax, eax */
  eax = 0;
/* 6dcde2: ret  */
  esp += 4; SPILL(); return;
}

void f_6dce00(void) {
  LOAD_REGS();
L_6dce00: /* 6dce00: xor eax, eax */
  eax = 0;
/* 6dce02: ret  */
  esp += 4; SPILL(); return;
}

void f_6dce20(void) {
  LOAD_REGS();
L_6dce20: /* 6dce20: xor eax, eax */
  eax = 0;
/* 6dce22: ret  */
  esp += 4; SPILL(); return;
}

void f_6dce40(void) {
  LOAD_REGS();
L_6dce40: /* 6dce40: xor eax, eax */
  eax = 0;
/* 6dce42: ret  */
  esp += 4; SPILL(); return;
}

void f_6dce60(void) {
  LOAD_REGS();
L_6dce60: /* 6dce60: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 6dce62: ret  */
  esp += 4; SPILL(); return;
}

void f_6dce80(void) {
  LOAD_REGS();
L_6dce80: /* 6dce80: xor eax, eax */
  eax = 0;
/* 6dce82: ret  */
  esp += 4; SPILL(); return;
}

void f_6dcea0(void) {
  LOAD_REGS();
L_6dcea0: /* 6dcea0: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 6dcea3: xor eax, eax */
  eax = 0;
/* 6dcea5: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6dcea7: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 6dceaa: ret  */
  esp += 4; SPILL(); return;
}

void f_6dcec0(void) {
  LOAD_REGS();
L_6dcec0: /* 6dcec0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dcec1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dcec2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6dcec6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dcec7: mov esi, ecx */
  esi = ecx;
/* 6dcec9: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x6dcecfu); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 6dcecf: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 6dced2: mov dword ptr [esi], 0x9f4450 */
  W32((uint32_t)(esi), 0x9f4450u);
/* 6dced8: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6dcedb: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6dcede: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6dcee1: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6dcee4: xor edx, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6dcee7: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 6dceea: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6dceed: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6dceef: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 6dcef2: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 6dcef5: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6dcef7: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6dcefa: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6dcefc: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 6dceff: mov dl, byte ptr [edi + 0x34] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x34u))) & 0xffu);
/* 6dcf02: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dcf03: mov byte ptr [esi + 0x34], dl */
  W8((uint32_t)(esi + 0x34u), (edx & 0xffu));
/* 6dcf06: mov eax, esi */
  eax = esi;
/* 6dcf08: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dcf09: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dcf30(void) {
  LOAD_REGS();
L_6dcf30: /* 6dcf30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dcf31: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dcf32: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6dcf36: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dcf37: mov esi, ecx */
  esi = ecx;
/* 6dcf39: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6dcf3fu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6dcf3f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6dcf42: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 6dcf45: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6dcf48: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6dcf4b: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6dcf4e: xor edx, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6dcf51: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 6dcf54: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6dcf57: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6dcf59: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 6dcf5c: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 6dcf5f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6dcf61: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6dcf64: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6dcf66: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 6dcf69: mov dl, byte ptr [edi + 0x34] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x34u))) & 0xffu);
/* 6dcf6c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dcf6d: mov byte ptr [esi + 0x34], dl */
  W8((uint32_t)(esi + 0x34u), (edx & 0xffu));
/* 6dcf70: mov eax, esi */
  eax = esi;
/* 6dcf72: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dcf73: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dcfa0(void) {
  LOAD_REGS();
L_6dcfa0: /* 6dcfa0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dcfa1: mov esi, ecx */
  esi = ecx;
/* 6dcfa3: call 0x6c9f16 */
  esp -= 4; W32(esp, 0x6dcfa8u); SPILL(); f_6c9f16(); if (g_unwind) return; RELOAD();
/* 6dcfa8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6dcfad: je 0x6dcfbb */
  if (zf) goto L_6dcfbb;
L_6dcfaf: /* 6dcfaf: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 6dcfb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dcfb2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6dcfb8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6dcfb8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6dcfbb: /* 6dcfbb: mov eax, esi */
  eax = esi;
/* 6dcfbd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dcfbe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dcfe0(void) {
  LOAD_REGS();
L_6dcfe0: /* 6dcfe0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6dcfe1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6dcfe5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6dcfe8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dcfe9: mov esi, ecx */
  esi = ecx;
/* 6dcfeb: je 0x6dd01d */
  if (zf) goto L_6dd01d;
L_6dcfed: /* 6dcfed: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6dcff0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dcff1: push 0x6c9f16 */
  { uint32_t v = 0x6c9f16u; esp -= 4; W32(esp, v); }
/* 6dcff6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6dcff9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dcffa: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 6dcffc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dcffd: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6dd002u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6dd002: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6dd005: je 0x6dd015 */
  if (zf) goto L_6dd015;
L_6dd007: /* 6dd007: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6dd00d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6dd00f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6dd011: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dd012: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6dd015u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6dd015: /* 6dd015: mov eax, edi */
  eax = edi;
/* 6dd017: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dd018: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dd019: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6dd01a: ret 4 */
  esp += 8; SPILL(); return;
L_6dd01d: /* 6dd01d: mov ecx, esi */
  ecx = esi;
/* 6dd01f: call 0x6c9f16 */
  esp -= 4; W32(esp, 0x6dd024u); SPILL(); f_6c9f16(); if (g_unwind) return; RELOAD();
/* 6dd024: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6dd027: je 0x6dd035 */
  if (zf) goto L_6dd035;
L_6dd029: /* 6dd029: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 6dd02b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dd02c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6dd032u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6dd032: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6dd035: /* 6dd035: mov eax, esi */
  eax = esi;
/* 6dd037: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dd038: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6dd039: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dd060(void) {
  LOAD_REGS();
L_6dd060: /* 6dd060: mov eax, 0xb87090 */
  eax = 0xb87090u;
/* 6dd065: ret  */
  esp += 4; SPILL(); return;
}

void f_6dd080(void) {
  LOAD_REGS();
L_6dd080: /* 6dd080: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6dd085: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6dd087: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6dd08b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6dd08f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dd091: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dd093: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dd094: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6dd098: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dd09a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6dd09b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dd09c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dd09d: push 0xb87090 */
  { uint32_t v = 0xb87090u; esp -= 4; W32(esp, v); }
/* 6dd0a2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6dd0a8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6dd0a8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dd0ab: ret  */
  esp += 4; SPILL(); return;
}

void f_6dd0c0(void) {
  LOAD_REGS();
L_6dd0c0: /* 6dd0c0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6dd0c4: ret  */
  esp += 4; SPILL(); return;
}

void f_6dd0e0(void) {
  LOAD_REGS();
L_6dd0e0: /* 6dd0e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6dd0e2: push 0x9c0138 */
  { uint32_t v = 0x9c0138u; esp -= 4; W32(esp, v); }
/* 6dd0e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6dd0ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dd0ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6dd0f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dd0f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dd0f7: mov esi, ecx */
  esi = ecx;
/* 6dd0f9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6dd0fd: mov dword ptr [esi], 0x9f4508 */
  W32((uint32_t)(esi), 0x9f4508u);
/* 6dd103: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6dd10b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6dd111u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6dd111: mov ecx, esi */
  ecx = esi;
/* 6dd113: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6dd11b: call 0x6c9f16 */
  esp -= 4; W32(esp, 0x6dd120u); SPILL(); f_6c9f16(); if (g_unwind) return; RELOAD();
/* 6dd120: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6dd124: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dd125: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6dd12c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dd12f: ret  */
  esp += 4; SPILL(); return;
}

void f_6dd150(void) {
  LOAD_REGS();
L_6dd150: /* 6dd150: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dd151: mov esi, ecx */
  esi = ecx;
/* 6dd153: call 0x6cc2a7 */
  esp -= 4; W32(esp, 0x6dd158u); SPILL(); f_6cc2a7(); if (g_unwind) return; RELOAD();
/* 6dd158: mov dword ptr [esi], 0x9f4508 */
  W32((uint32_t)(esi), 0x9f4508u);
/* 6dd15e: mov eax, esi */
  eax = esi;
/* 6dd160: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dd161: ret  */
  esp += 4; SPILL(); return;
}

void f_6dd180(void) {
  LOAD_REGS();
L_6dd180: /* 6dd180: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dd181: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dd182: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6dd186: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dd187: mov esi, ecx */
  esi = ecx;
/* 6dd189: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x6dd18fu); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 6dd18f: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 6dd192: mov dword ptr [esi], 0x9f4450 */
  W32((uint32_t)(esi), 0x9f4450u);
/* 6dd198: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6dd19b: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6dd19e: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6dd1a1: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6dd1a4: xor edx, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6dd1a7: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 6dd1aa: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6dd1ad: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6dd1af: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 6dd1b2: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 6dd1b5: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6dd1b7: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6dd1ba: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6dd1bc: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 6dd1bf: mov dl, byte ptr [edi + 0x34] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x34u))) & 0xffu);
/* 6dd1c2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dd1c3: mov byte ptr [esi + 0x34], dl */
  W8((uint32_t)(esi + 0x34u), (edx & 0xffu));
/* 6dd1c6: mov dword ptr [esi], 0x9f4508 */
  W32((uint32_t)(esi), 0x9f4508u);
/* 6dd1cc: mov eax, esi */
  eax = esi;
/* 6dd1ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dd1cf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dd200(void) {
  LOAD_REGS();
L_6dd200: /* 6dd200: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dd201: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dd202: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6dd206: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dd207: mov esi, ecx */
  esi = ecx;
/* 6dd209: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6dd20fu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6dd20f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6dd212: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 6dd215: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6dd218: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6dd21b: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6dd21e: xor edx, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6dd221: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 6dd224: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6dd227: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6dd229: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 6dd22c: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 6dd22f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6dd231: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6dd234: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6dd236: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 6dd239: mov dl, byte ptr [edi + 0x34] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x34u))) & 0xffu);
/* 6dd23c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dd23d: mov byte ptr [esi + 0x34], dl */
  W8((uint32_t)(esi + 0x34u), (edx & 0xffu));
/* 6dd240: mov eax, esi */
  eax = esi;
/* 6dd242: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dd243: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dd270(void) {
  LOAD_REGS();
L_6dd270: /* 6dd270: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dd271: mov esi, ecx */
  esi = ecx;
/* 6dd273: call 0x6caf88 */
  esp -= 4; W32(esp, 0x6dd278u); SPILL(); f_6caf88(); if (g_unwind) return; RELOAD();
/* 6dd278: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6dd27d: je 0x6dd28b */
  if (zf) goto L_6dd28b;
L_6dd27f: /* 6dd27f: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 6dd281: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dd282: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6dd288u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6dd288: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6dd28b: /* 6dd28b: mov eax, esi */
  eax = esi;
/* 6dd28d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dd28e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dd2b0(void) {
  LOAD_REGS();
L_6dd2b0: /* 6dd2b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6dd2b1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6dd2b5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6dd2b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dd2b9: mov esi, ecx */
  esi = ecx;
/* 6dd2bb: je 0x6dd2ed */
  if (zf) goto L_6dd2ed;
L_6dd2bd: /* 6dd2bd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6dd2c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dd2c1: push 0x6caf88 */
  { uint32_t v = 0x6caf88u; esp -= 4; W32(esp, v); }
/* 6dd2c6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6dd2c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dd2ca: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 6dd2cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dd2cd: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6dd2d2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6dd2d2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6dd2d5: je 0x6dd2e5 */
  if (zf) goto L_6dd2e5;
L_6dd2d7: /* 6dd2d7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6dd2dd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6dd2df: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6dd2e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dd2e2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6dd2e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6dd2e5: /* 6dd2e5: mov eax, edi */
  eax = edi;
/* 6dd2e7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dd2e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dd2e9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6dd2ea: ret 4 */
  esp += 8; SPILL(); return;
L_6dd2ed: /* 6dd2ed: mov ecx, esi */
  ecx = esi;
/* 6dd2ef: call 0x6caf88 */
  esp -= 4; W32(esp, 0x6dd2f4u); SPILL(); f_6caf88(); if (g_unwind) return; RELOAD();
/* 6dd2f4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6dd2f7: je 0x6dd305 */
  if (zf) goto L_6dd305;
L_6dd2f9: /* 6dd2f9: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 6dd2fb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dd2fc: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6dd302u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6dd302: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6dd305: /* 6dd305: mov eax, esi */
  eax = esi;
/* 6dd307: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dd308: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6dd309: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dd330(void) {
  LOAD_REGS();
L_6dd330: /* 6dd330: mov eax, 0xb86630 */
  eax = 0xb86630u;
/* 6dd335: ret  */
  esp += 4; SPILL(); return;
}

void f_6dd350(void) {
  LOAD_REGS();
L_6dd350: /* 6dd350: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6dd355: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6dd357: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6dd35b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6dd35f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dd361: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dd363: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dd364: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6dd368: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dd36a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6dd36b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dd36c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dd36d: push 0xb86630 */
  { uint32_t v = 0xb86630u; esp -= 4; W32(esp, v); }
/* 6dd372: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6dd378u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6dd378: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dd37b: ret  */
  esp += 4; SPILL(); return;
}

void f_6dd390(void) {
  LOAD_REGS();
L_6dd390: /* 6dd390: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6dd394: ret  */
  esp += 4; SPILL(); return;
}

void f_6dd3b0(void) {
  LOAD_REGS();
L_6dd3b0: /* 6dd3b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6dd3b2: push 0x9c0158 */
  { uint32_t v = 0x9c0158u; esp -= 4; W32(esp, v); }
/* 6dd3b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6dd3bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dd3be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6dd3c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dd3c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dd3c7: mov esi, ecx */
  esi = ecx;
/* 6dd3c9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6dd3cd: mov dword ptr [esi], 0x9f45c0 */
  W32((uint32_t)(esi), 0x9f45c0u);
/* 6dd3d3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6dd3db: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6dd3e1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6dd3e1: mov ecx, esi */
  ecx = esi;
/* 6dd3e3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6dd3eb: call 0x6caf88 */
  esp -= 4; W32(esp, 0x6dd3f0u); SPILL(); f_6caf88(); if (g_unwind) return; RELOAD();
/* 6dd3f0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6dd3f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dd3f5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6dd3fc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dd3ff: ret  */
  esp += 4; SPILL(); return;
}

void f_6dd420(void) {
  LOAD_REGS();
L_6dd420: /* 6dd420: mov eax, ecx */
  eax = ecx;
/* 6dd422: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_6dd440(void) {
  LOAD_REGS();
L_6dd440: /* 6dd440: mov eax, dword ptr [ecx + 0x40] */
  eax = R32((uint32_t)(ecx + 0x40u));
/* 6dd443: ret  */
  esp += 4; SPILL(); return;
}

void f_6dd460(void) {
  LOAD_REGS();
L_6dd460: /* 6dd460: mov eax, dword ptr [ecx + 0x44] */
  eax = R32((uint32_t)(ecx + 0x44u));
/* 6dd463: ret  */
  esp += 4; SPILL(); return;
}

void f_6dd480(void) {
  LOAD_REGS();
L_6dd480: /* 6dd480: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dd481: mov esi, ecx */
  esi = ecx;
/* 6dd483: call 0x6cc2a7 */
  esp -= 4; W32(esp, 0x6dd488u); SPILL(); f_6cc2a7(); if (g_unwind) return; RELOAD();
/* 6dd488: mov dword ptr [esi], 0x9f45c0 */
  W32((uint32_t)(esi), 0x9f45c0u);
/* 6dd48e: mov eax, esi */
  eax = esi;
/* 6dd490: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dd491: ret  */
  esp += 4; SPILL(); return;
}

void f_6dd4b0(void) {
  LOAD_REGS();
L_6dd4b0: /* 6dd4b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dd4b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dd4b2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6dd4b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dd4b7: mov esi, ecx */
  esi = ecx;
/* 6dd4b9: call 0x6c7595 */
  esp -= 4; W32(esp, 0x6dd4beu); SPILL(); f_6c7595(); if (g_unwind) return; RELOAD();
/* 6dd4be: mov dword ptr [esi], 0x9f45c0 */
  W32((uint32_t)(esi), 0x9f45c0u);
/* 6dd4c4: mov al, byte ptr [edi + 0x38] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x38u))) & 0xffu);
/* 6dd4c7: mov byte ptr [esi + 0x38], al */
  W8((uint32_t)(esi + 0x38u), (eax & 0xffu));
/* 6dd4ca: mov cl, byte ptr [edi + 0x39] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x39u))) & 0xffu);
/* 6dd4cd: mov byte ptr [esi + 0x39], cl */
  W8((uint32_t)(esi + 0x39u), (ecx & 0xffu));
/* 6dd4d0: mov dl, byte ptr [edi + 0x3a] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3au))) & 0xffu);
/* 6dd4d3: mov byte ptr [esi + 0x3a], dl */
  W8((uint32_t)(esi + 0x3au), (edx & 0xffu));
/* 6dd4d6: mov al, byte ptr [edi + 0x3b] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3bu))) & 0xffu);
/* 6dd4d9: mov byte ptr [esi + 0x3b], al */
  W8((uint32_t)(esi + 0x3bu), (eax & 0xffu));
/* 6dd4dc: mov cl, byte ptr [edi + 0x3c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3cu))) & 0xffu);
/* 6dd4df: mov byte ptr [esi + 0x3c], cl */
  W8((uint32_t)(esi + 0x3cu), (ecx & 0xffu));
/* 6dd4e2: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 6dd4e5: mov dword ptr [esi + 0x40], edx */
  W32((uint32_t)(esi + 0x40u), edx);
/* 6dd4e8: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* 6dd4eb: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 6dd4ee: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 6dd4f1: mov dword ptr [esi + 0x48], ecx */
  W32((uint32_t)(esi + 0x48u), ecx);
/* 6dd4f4: mov edx, dword ptr [edi + 0x4c] */
  edx = R32((uint32_t)(edi + 0x4cu));
/* 6dd4f7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dd4f8: mov dword ptr [esi + 0x4c], edx */
  W32((uint32_t)(esi + 0x4cu), edx);
/* 6dd4fb: mov eax, esi */
  eax = esi;
/* 6dd4fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dd4fe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dd530(void) {
  LOAD_REGS();
L_6dd530: /* 6dd530: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dd531: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dd532: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6dd536: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dd537: mov esi, ecx */
  esi = ecx;
/* 6dd539: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6dd53fu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6dd53f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6dd542: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 6dd545: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6dd548: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6dd54b: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6dd54e: xor edx, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6dd551: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 6dd554: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6dd557: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6dd559: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 6dd55c: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 6dd55f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6dd561: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6dd564: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6dd566: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 6dd569: mov dl, byte ptr [edi + 0x34] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x34u))) & 0xffu);
/* 6dd56c: mov byte ptr [esi + 0x34], dl */
  W8((uint32_t)(esi + 0x34u), (edx & 0xffu));
/* 6dd56f: mov al, byte ptr [edi + 0x38] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x38u))) & 0xffu);
/* 6dd572: mov byte ptr [esi + 0x38], al */
  W8((uint32_t)(esi + 0x38u), (eax & 0xffu));
/* 6dd575: mov cl, byte ptr [edi + 0x39] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x39u))) & 0xffu);
/* 6dd578: mov byte ptr [esi + 0x39], cl */
  W8((uint32_t)(esi + 0x39u), (ecx & 0xffu));
/* 6dd57b: mov dl, byte ptr [edi + 0x3a] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3au))) & 0xffu);
/* 6dd57e: mov byte ptr [esi + 0x3a], dl */
  W8((uint32_t)(esi + 0x3au), (edx & 0xffu));
/* 6dd581: mov al, byte ptr [edi + 0x3b] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3bu))) & 0xffu);
/* 6dd584: mov byte ptr [esi + 0x3b], al */
  W8((uint32_t)(esi + 0x3bu), (eax & 0xffu));
/* 6dd587: mov cl, byte ptr [edi + 0x3c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3cu))) & 0xffu);
/* 6dd58a: mov byte ptr [esi + 0x3c], cl */
  W8((uint32_t)(esi + 0x3cu), (ecx & 0xffu));
/* 6dd58d: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 6dd590: mov dword ptr [esi + 0x40], edx */
  W32((uint32_t)(esi + 0x40u), edx);
/* 6dd593: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* 6dd596: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 6dd599: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 6dd59c: mov dword ptr [esi + 0x48], ecx */
  W32((uint32_t)(esi + 0x48u), ecx);
/* 6dd59f: mov edx, dword ptr [edi + 0x4c] */
  edx = R32((uint32_t)(edi + 0x4cu));
/* 6dd5a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dd5a3: mov dword ptr [esi + 0x4c], edx */
  W32((uint32_t)(esi + 0x4cu), edx);
/* 6dd5a6: mov eax, esi */
  eax = esi;
/* 6dd5a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dd5a9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dd5d0(void) {
  LOAD_REGS();
L_6dd5d0: /* 6dd5d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dd5d1: mov esi, ecx */
  esi = ecx;
/* 6dd5d3: call 0x6c1023 */
  esp -= 4; W32(esp, 0x6dd5d8u); SPILL(); f_6c1023(); if (g_unwind) return; RELOAD();
/* 6dd5d8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6dd5dd: je 0x6dd5eb */
  if (zf) goto L_6dd5eb;
L_6dd5df: /* 6dd5df: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* 6dd5e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dd5e2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6dd5e8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6dd5e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6dd5eb: /* 6dd5eb: mov eax, esi */
  eax = esi;
/* 6dd5ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dd5ee: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dd610(void) {
  LOAD_REGS();
L_6dd610: /* 6dd610: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6dd611: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6dd615: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6dd618: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dd619: mov esi, ecx */
  esi = ecx;
/* 6dd61b: je 0x6dd64d */
  if (zf) goto L_6dd64d;
L_6dd61d: /* 6dd61d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6dd620: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dd621: push 0x6c1023 */
  { uint32_t v = 0x6c1023u; esp -= 4; W32(esp, v); }
/* 6dd626: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6dd629: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dd62a: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* 6dd62c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dd62d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6dd632u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6dd632: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6dd635: je 0x6dd645 */
  if (zf) goto L_6dd645;
L_6dd637: /* 6dd637: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6dd63d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6dd63f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6dd641: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dd642: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6dd645u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6dd645: /* 6dd645: mov eax, edi */
  eax = edi;
/* 6dd647: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dd648: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dd649: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6dd64a: ret 4 */
  esp += 8; SPILL(); return;
L_6dd64d: /* 6dd64d: mov ecx, esi */
  ecx = esi;
/* 6dd64f: call 0x6c1023 */
  esp -= 4; W32(esp, 0x6dd654u); SPILL(); f_6c1023(); if (g_unwind) return; RELOAD();
/* 6dd654: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6dd657: je 0x6dd665 */
  if (zf) goto L_6dd665;
L_6dd659: /* 6dd659: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* 6dd65b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dd65c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6dd662u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6dd662: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6dd665: /* 6dd665: mov eax, esi */
  eax = esi;
/* 6dd667: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dd668: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6dd669: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dd690(void) {
  LOAD_REGS();
L_6dd690: /* 6dd690: mov eax, 0xb86b60 */
  eax = 0xb86b60u;
/* 6dd695: ret  */
  esp += 4; SPILL(); return;
}

void f_6dd6b0(void) {
  LOAD_REGS();
L_6dd6b0: /* 6dd6b0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6dd6b5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6dd6b7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6dd6bb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6dd6bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dd6c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dd6c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dd6c4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6dd6c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dd6ca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6dd6cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dd6cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dd6cd: push 0xb86b60 */
  { uint32_t v = 0xb86b60u; esp -= 4; W32(esp, v); }
/* 6dd6d2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6dd6d8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6dd6d8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dd6db: ret  */
  esp += 4; SPILL(); return;
}

void f_6dd6f0(void) {
  LOAD_REGS();
L_6dd6f0: /* 6dd6f0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6dd6f4: ret  */
  esp += 4; SPILL(); return;
}

void f_6dd710(void) {
  LOAD_REGS();
L_6dd710: /* 6dd710: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6dd712: push 0x9c0178 */
  { uint32_t v = 0x9c0178u; esp -= 4; W32(esp, v); }
/* 6dd717: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6dd71d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dd71e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6dd725: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dd726: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dd727: mov esi, ecx */
  esi = ecx;
/* 6dd729: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6dd72d: mov dword ptr [esi], 0x9f4680 */
  W32((uint32_t)(esi), 0x9f4680u);
/* 6dd733: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6dd73b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6dd741u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6dd741: mov ecx, esi */
  ecx = esi;
/* 6dd743: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6dd74b: call 0x6c1023 */
  esp -= 4; W32(esp, 0x6dd750u); SPILL(); f_6c1023(); if (g_unwind) return; RELOAD();
/* 6dd750: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6dd754: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dd755: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6dd75c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dd75f: ret  */
  esp += 4; SPILL(); return;
}

void f_6dd780(void) {
  LOAD_REGS();
L_6dd780: /* 6dd780: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dd781: mov esi, ecx */
  esi = ecx;
/* 6dd783: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6dd787: mov dword ptr [esi + 0x50], ecx */
  W32((uint32_t)(esi + 0x50u), ecx);
/* 6dd78a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6dd78c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dd78d: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0x6dd790u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dd790: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* 6dd793: mov byte ptr [esi + 0x38], al */
  W8((uint32_t)(esi + 0x38u), (eax & 0xffu));
/* 6dd796: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6dd798: call dword ptr [edx + 0x34] */
  { uint32_t t = R32((uint32_t)(edx + 0x34u)); esp -= 4; W32(esp, 0x6dd79bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dd79b: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* 6dd79e: mov byte ptr [esi + 0x39], al */
  W8((uint32_t)(esi + 0x39u), (eax & 0xffu));
/* 6dd7a1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6dd7a3: call dword ptr [eax + 0x38] */
  { uint32_t t = R32((uint32_t)(eax + 0x38u)); esp -= 4; W32(esp, 0x6dd7a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dd7a6: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* 6dd7a9: mov byte ptr [esi + 0x3a], al */
  W8((uint32_t)(esi + 0x3au), (eax & 0xffu));
/* 6dd7ac: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6dd7ae: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x6dd7b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dd7b1: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* 6dd7b4: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 6dd7b7: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 6dd7ba: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6dd7bc: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0x6dd7bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dd7bf: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 6dd7c2: mov edi, dword ptr [0xcfa2b0] */
  edi = R32((uint32_t)(0xcfa2b0u));
/* 6dd7c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dd7c9: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 6dd7cc: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 6dd7cf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x6dd7d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dd7d1: mov edx, dword ptr [esi + 0x4c] */
  edx = R32((uint32_t)(esi + 0x4cu));
/* 6dd7d4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6dd7d5: mov byte ptr [esi + 0x3b], al */
  W8((uint32_t)(esi + 0x3bu), (eax & 0xffu));
/* 6dd7d8: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x6dd7dau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dd7da: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dd7dd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dd7de: mov byte ptr [esi + 0x3c], al */
  W8((uint32_t)(esi + 0x3cu), (eax & 0xffu));
/* 6dd7e1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dd7e2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dd810(void) {
  LOAD_REGS();
L_6dd810: /* 6dd810: mov eax, dword ptr [ecx + 0x50] */
  eax = R32((uint32_t)(ecx + 0x50u));
/* 6dd813: ret  */
  esp += 4; SPILL(); return;
}

void f_6dd830(void) {
  LOAD_REGS();
L_6dd830: /* 6dd830: mov eax, ecx */
  eax = ecx;
/* 6dd832: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_6dd850(void) {
  LOAD_REGS();
L_6dd850: /* 6dd850: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dd851: mov esi, ecx */
  esi = ecx;
/* 6dd853: call 0x6cc2a7 */
  esp -= 4; W32(esp, 0x6dd858u); SPILL(); f_6cc2a7(); if (g_unwind) return; RELOAD();
/* 6dd858: mov dword ptr [esi], 0x9f4680 */
  W32((uint32_t)(esi), 0x9f4680u);
/* 6dd85e: mov eax, esi */
  eax = esi;
/* 6dd860: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dd861: ret  */
  esp += 4; SPILL(); return;
}

void f_6dd880(void) {
  LOAD_REGS();
L_6dd880: /* 6dd880: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dd881: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dd882: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6dd886: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dd887: mov esi, ecx */
  esi = ecx;
/* 6dd889: call 0x6c5b4b */
  esp -= 4; W32(esp, 0x6dd88eu); SPILL(); f_6c5b4b(); if (g_unwind) return; RELOAD();
/* 6dd88e: mov dword ptr [esi], 0x9f4680 */
  W32((uint32_t)(esi), 0x9f4680u);
/* 6dd894: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 6dd897: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 6dd89a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dd89b: mov eax, esi */
  eax = esi;
/* 6dd89d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dd89e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dd8c0(void) {
  LOAD_REGS();
L_6dd8c0: /* 6dd8c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dd8c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dd8c2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6dd8c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dd8c7: mov esi, ecx */
  esi = ecx;
/* 6dd8c9: call 0x6caa33 */
  esp -= 4; W32(esp, 0x6dd8ceu); SPILL(); f_6caa33(); if (g_unwind) return; RELOAD();
/* 6dd8ce: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 6dd8d1: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 6dd8d4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dd8d5: mov eax, esi */
  eax = esi;
/* 6dd8d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dd8d8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dd8f0(void) {
  LOAD_REGS();
L_6dd8f0: /* 6dd8f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dd8f1: mov esi, ecx */
  esi = ecx;
/* 6dd8f3: call 0x6c84e5 */
  esp -= 4; W32(esp, 0x6dd8f8u); SPILL(); f_6c84e5(); if (g_unwind) return; RELOAD();
/* 6dd8f8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6dd8fd: je 0x6dd90b */
  if (zf) goto L_6dd90b;
L_6dd8ff: /* 6dd8ff: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 6dd901: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dd902: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6dd908u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6dd908: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6dd90b: /* 6dd90b: mov eax, esi */
  eax = esi;
/* 6dd90d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dd90e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dd930(void) {
  LOAD_REGS();
L_6dd930: /* 6dd930: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6dd931: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6dd935: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6dd938: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dd939: mov esi, ecx */
  esi = ecx;
/* 6dd93b: je 0x6dd96d */
  if (zf) goto L_6dd96d;
L_6dd93d: /* 6dd93d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6dd940: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dd941: push 0x6c84e5 */
  { uint32_t v = 0x6c84e5u; esp -= 4; W32(esp, v); }
/* 6dd946: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6dd949: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dd94a: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 6dd94c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dd94d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6dd952u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6dd952: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6dd955: je 0x6dd965 */
  if (zf) goto L_6dd965;
L_6dd957: /* 6dd957: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6dd95d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6dd95f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6dd961: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dd962: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6dd965u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6dd965: /* 6dd965: mov eax, edi */
  eax = edi;
/* 6dd967: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dd968: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dd969: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6dd96a: ret 4 */
  esp += 8; SPILL(); return;
L_6dd96d: /* 6dd96d: mov ecx, esi */
  ecx = esi;
/* 6dd96f: call 0x6c84e5 */
  esp -= 4; W32(esp, 0x6dd974u); SPILL(); f_6c84e5(); if (g_unwind) return; RELOAD();
/* 6dd974: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6dd977: je 0x6dd985 */
  if (zf) goto L_6dd985;
L_6dd979: /* 6dd979: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* 6dd97b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dd97c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6dd982u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6dd982: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6dd985: /* 6dd985: mov eax, esi */
  eax = esi;
/* 6dd987: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dd988: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6dd989: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dd9b0(void) {
  LOAD_REGS();
L_6dd9b0: /* 6dd9b0: mov eax, 0xb875c0 */
  eax = 0xb875c0u;
/* 6dd9b5: ret  */
  esp += 4; SPILL(); return;
}

void f_6dd9d0(void) {
  LOAD_REGS();
L_6dd9d0: /* 6dd9d0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6dd9d5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6dd9d7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6dd9db: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6dd9df: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dd9e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dd9e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dd9e4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6dd9e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dd9ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6dd9eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dd9ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dd9ed: push 0xb875c0 */
  { uint32_t v = 0xb875c0u; esp -= 4; W32(esp, v); }
/* 6dd9f2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6dd9f8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6dd9f8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dd9fb: ret  */
  esp += 4; SPILL(); return;
}

void f_6dda10(void) {
  LOAD_REGS();
L_6dda10: /* 6dda10: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6dda14: ret  */
  esp += 4; SPILL(); return;
}

void f_6dda30(void) {
  LOAD_REGS();
L_6dda30: /* 6dda30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6dda32: push 0x9c0198 */
  { uint32_t v = 0x9c0198u; esp -= 4; W32(esp, v); }
/* 6dda37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6dda3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dda3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6dda45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dda46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dda47: mov esi, ecx */
  esi = ecx;
/* 6dda49: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6dda4d: mov dword ptr [esi], 0x9f4740 */
  W32((uint32_t)(esi), 0x9f4740u);
/* 6dda53: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6dda5b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x6dda61u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 6dda61: mov ecx, esi */
  ecx = esi;
/* 6dda63: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6dda6b: call 0x6caf88 */
  esp -= 4; W32(esp, 0x6dda70u); SPILL(); f_6caf88(); if (g_unwind) return; RELOAD();
/* 6dda70: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6dda74: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dda75: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6dda7c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dda7f: ret  */
  esp += 4; SPILL(); return;
}

void f_6ddaa0(void) {
  LOAD_REGS();
L_6ddaa0: /* 6ddaa0: mov ecx, dword ptr [ecx + 0x38] */
  ecx = R32((uint32_t)(ecx + 0x38u));
/* 6ddaa3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6ddaa5: je 0x6ddaac */
  if (zf) goto L_6ddaac;
L_6ddaa7: /* 6ddaa7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ddaa9: jmp dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); SPILL(); call_ind(t); return; }
L_6ddaac: /* 6ddaac: xor eax, eax */
  eax = 0;
/* 6ddaae: ret  */
  esp += 4; SPILL(); return;
}

void f_6ddac0(void) {
  LOAD_REGS();
L_6ddac0: /* 6ddac0: mov ecx, dword ptr [ecx + 0x38] */
  ecx = R32((uint32_t)(ecx + 0x38u));
/* 6ddac3: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6ddac5: je 0x6ddacc */
  if (zf) goto L_6ddacc;
L_6ddac7: /* 6ddac7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ddac9: jmp dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); SPILL(); call_ind(t); return; }
L_6ddacc: /* 6ddacc: xor eax, eax */
  eax = 0;
/* 6ddace: ret  */
  esp += 4; SPILL(); return;
}

void f_6ddae0(void) {
  LOAD_REGS();
L_6ddae0: /* 6ddae0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ddae1: mov esi, ecx */
  esi = ecx;
/* 6ddae3: call 0x6cc2a7 */
  esp -= 4; W32(esp, 0x6ddae8u); SPILL(); f_6cc2a7(); if (g_unwind) return; RELOAD();
/* 6ddae8: mov dword ptr [esi], 0x9f4740 */
  W32((uint32_t)(esi), 0x9f4740u);
/* 6ddaee: mov eax, esi */
  eax = esi;
/* 6ddaf0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ddaf1: ret  */
  esp += 4; SPILL(); return;
}

void f_6ddb10(void) {
  LOAD_REGS();
L_6ddb10: /* 6ddb10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ddb11: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ddb12: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6ddb16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ddb17: mov esi, ecx */
  esi = ecx;
/* 6ddb19: call 0x6c7595 */
  esp -= 4; W32(esp, 0x6ddb1eu); SPILL(); f_6c7595(); if (g_unwind) return; RELOAD();
/* 6ddb1e: mov dword ptr [esi], 0x9f4740 */
  W32((uint32_t)(esi), 0x9f4740u);
/* 6ddb24: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 6ddb27: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 6ddb2a: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 6ddb2d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ddb2e: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 6ddb31: mov eax, esi */
  eax = esi;
/* 6ddb33: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ddb34: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ddb50(void) {
  LOAD_REGS();
L_6ddb50: /* 6ddb50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ddb51: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ddb52: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6ddb56: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ddb57: mov esi, ecx */
  esi = ecx;
/* 6ddb59: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x6ddb5fu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6ddb5f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 6ddb62: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 6ddb65: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 6ddb68: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 6ddb6b: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 6ddb6e: xor edx, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 6ddb71: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 6ddb74: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6ddb77: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 6ddb79: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 6ddb7c: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 6ddb7f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6ddb81: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 6ddb84: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 6ddb86: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 6ddb89: mov dl, byte ptr [edi + 0x34] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x34u))) & 0xffu);
/* 6ddb8c: mov byte ptr [esi + 0x34], dl */
  W8((uint32_t)(esi + 0x34u), (edx & 0xffu));
/* 6ddb8f: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 6ddb92: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 6ddb95: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 6ddb98: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ddb99: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 6ddb9c: mov eax, esi */
  eax = esi;
/* 6ddb9e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ddb9f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ddbd0(void) {
  LOAD_REGS();
L_6ddbd0: /* 6ddbd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ddbd1: mov esi, ecx */
  esi = ecx;
/* 6ddbd3: call 0x6caa8d */
  esp -= 4; W32(esp, 0x6ddbd8u); SPILL(); f_6caa8d(); if (g_unwind) return; RELOAD();
/* 6ddbd8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ddbdd: je 0x6ddbeb */
  if (zf) goto L_6ddbeb;
L_6ddbdf: /* 6ddbdf: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 6ddbe1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ddbe2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ddbe8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ddbe8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ddbeb: /* 6ddbeb: mov eax, esi */
  eax = esi;
/* 6ddbed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ddbee: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ddc10(void) {
  LOAD_REGS();
L_6ddc10: /* 6ddc10: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6ddc11: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 6ddc15: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ddc18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ddc19: mov esi, ecx */
  esi = ecx;
/* 6ddc1b: je 0x6ddc4d */
  if (zf) goto L_6ddc4d;
L_6ddc1d: /* 6ddc1d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 6ddc20: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ddc21: push 0x6caa8d */
  { uint32_t v = 0x6caa8du; esp -= 4; W32(esp, v); }
/* 6ddc26: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 6ddc29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ddc2a: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 6ddc2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ddc2d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x6ddc32u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 6ddc32: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ddc35: je 0x6ddc45 */
  if (zf) goto L_6ddc45;
L_6ddc37: /* 6ddc37: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 6ddc3d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 6ddc3f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6ddc41: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6ddc42: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x6ddc45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6ddc45: /* 6ddc45: mov eax, edi */
  eax = edi;
/* 6ddc47: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6ddc48: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ddc49: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ddc4a: ret 4 */
  esp += 8; SPILL(); return;
L_6ddc4d: /* 6ddc4d: mov ecx, esi */
  ecx = esi;
/* 6ddc4f: call 0x6caa8d */
  esp -= 4; W32(esp, 0x6ddc54u); SPILL(); f_6caa8d(); if (g_unwind) return; RELOAD();
/* 6ddc54: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6ddc57: je 0x6ddc65 */
  if (zf) goto L_6ddc65;
L_6ddc59: /* 6ddc59: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 6ddc5b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ddc5c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x6ddc62u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 6ddc62: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6ddc65: /* 6ddc65: mov eax, esi */
  eax = esi;
/* 6ddc67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ddc68: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6ddc69: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ddc90(void) {
  LOAD_REGS();
L_6ddc90: /* 6ddc90: mov eax, 0xcea3f8 */
  eax = 0xcea3f8u;
/* 6ddc95: ret  */
  esp += 4; SPILL(); return;
}

void f_6ddcb0(void) {
  LOAD_REGS();
L_6ddcb0: /* 6ddcb0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6ddcb5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6ddcb7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6ddcbb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6ddcbf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ddcc1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ddcc3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ddcc4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6ddcc8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ddcca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6ddccb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ddccc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ddccd: push 0xcea3f8 */
  { uint32_t v = 0xcea3f8u; esp -= 4; W32(esp, v); }
/* 6ddcd2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6ddcd8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6ddcd8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ddcdb: ret  */
  esp += 4; SPILL(); return;
}

void f_6ddcf0(void) {
  LOAD_REGS();
L_6ddcf0: /* 6ddcf0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6ddcf4: ret  */
  esp += 4; SPILL(); return;
}

void f_6ddd10(void) {
  LOAD_REGS();
L_6ddd10: /* 6ddd10: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ddd14: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6ddd16: je 0x6ddd1d */
  if (zf) goto L_6ddd1d;
L_6ddd18: /* 6ddd18: jmp 0x6c39c2 */
  SPILL(); f_6c39c2(); return;
L_6ddd1d: /* 6ddd1d: ret  */
  esp += 4; SPILL(); return;
}

void f_6ddd30(void) {
  LOAD_REGS();
L_6ddd30: /* 6ddd30: mov dl, byte ptr [esp + 4] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x4u))) & 0xffu);
/* 6ddd34: mov eax, ecx */
  eax = ecx;
/* 6ddd36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ddd37: mov cl, dl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
/* 6ddd39: mov esi, 1 */
  esi = 0x1u;
/* 6ddd3e: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  cf = (c <= 32) ? (((uint32_t)a >> (32 - c)) & 1) : 0;
  of = ((r >> 31) & 1) ^ (((uint32_t)a >> (32 - c)) & 1);
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  esi = r;
  }
  }
/* 6ddd40: mov cl, byte ptr [esp + 0xc] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0xcu))) & 0xffu);
/* 6ddd44: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 6ddd4a: mov byte ptr [eax + 0xc], dl */
  W8((uint32_t)(eax + 0xcu), (edx & 0xffu));
/* 6ddd4d: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 6ddd50: mov esi, 1 */
  esi = 0x1u;
/* 6ddd55: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 6ddd57: mov byte ptr [eax + 0xd], cl */
  W8((uint32_t)(eax + 0xdu), (ecx & 0xffu));
/* 6ddd5a: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 6ddd5d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ddd5e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6ddd80(void) {
  LOAD_REGS();
L_6ddd80: /* 6ddd80: mov eax, ecx */
  eax = ecx;
/* 6ddd82: ret  */
  esp += 4; SPILL(); return;
}

void f_6ddda0(void) {
  LOAD_REGS();
L_6ddda0: /* 6ddda0: mov eax, ecx */
  eax = ecx;
/* 6ddda2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ddda6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ddda7: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 6ddda9: mov edx, eax */
  edx = eax;
/* 6dddab: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 6dddad: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 6dddb0: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 6dddb3: mov esi, dword ptr [ecx + 8] */
  esi = R32((uint32_t)(ecx + 0x8u));
/* 6dddb6: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 6dddb9: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 6dddbc: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 6dddbf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dddc0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ddde0(void) {
  LOAD_REGS();
L_6ddde0: /* 6ddde0: mov eax, ecx */
  eax = ecx;
/* 6ddde2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ddde6: mov dword ptr [eax], 0x9f401c */
  W32((uint32_t)(eax), 0x9f401cu);
/* 6dddec: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6dddef: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6dddf2: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 6dddf5: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 6dddf8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dde10(void) {
  LOAD_REGS();
L_6dde10: /* 6dde10: mov eax, ecx */
  eax = ecx;
/* 6dde12: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6dde16: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 6dde19: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 6dde1c: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 6dde1f: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 6dde22: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dde40(void) {
  LOAD_REGS();
L_6dde40: /* 6dde40: mov eax, ecx */
  eax = ecx;
/* 6dde42: mov dword ptr [eax], 0x9f47f8 */
  W32((uint32_t)(eax), 0x9f47f8u);
/* 6dde48: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dde60(void) {
  LOAD_REGS();
L_6dde60: /* 6dde60: mov eax, ecx */
  eax = ecx;
/* 6dde62: ret  */
  esp += 4; SPILL(); return;
}

void f_6dde80(void) {
  LOAD_REGS();
L_6dde80: /* 6dde80: mov eax, ecx */
  eax = ecx;
/* 6dde82: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ddea0(void) {
  LOAD_REGS();
L_6ddea0: /* 6ddea0: mov eax, 0xce9ec8 */
  eax = 0xce9ec8u;
/* 6ddea5: ret  */
  esp += 4; SPILL(); return;
}

void f_6ddec0(void) {
  LOAD_REGS();
L_6ddec0: /* 6ddec0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6ddec5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6ddec7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6ddecb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6ddecf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dded1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dded3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dded4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6dded8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6ddeda: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6ddedb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ddedc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ddedd: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 6ddee2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6ddee8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6ddee8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ddeeb: ret  */
  esp += 4; SPILL(); return;
}

void f_6ddf00(void) {
  LOAD_REGS();
L_6ddf00: /* 6ddf00: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6ddf04: ret  */
  esp += 4; SPILL(); return;
}

void f_6ddf20(void) {
  LOAD_REGS();
L_6ddf20: /* 6ddf20: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ddf24: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 6ddf28: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6ddf2a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6ddf2b: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x6ddf2eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6ddf2e: ret  */
  esp += 4; SPILL(); return;
}

void f_6ddf40(void) {
  LOAD_REGS();
L_6ddf40: /* 6ddf40: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ddf44: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6ddf46: je 0x6ddf4d */
  if (zf) goto L_6ddf4d;
L_6ddf48: /* 6ddf48: jmp 0x6c7e19 */
  SPILL(); f_6c7e19(); return;
L_6ddf4d: /* 6ddf4d: ret  */
  esp += 4; SPILL(); return;
}

void f_6ddf60(void) {
  LOAD_REGS();
L_6ddf60: /* 6ddf60: mov ecx, dword ptr [ecx + 0x50] */
  ecx = R32((uint32_t)(ecx + 0x50u));
/* 6ddf63: jmp dword ptr [0xcfa2b4] */
  SPILL(); f_4e39ae(); return; /* Core!?GetIndex@UObject@@QBEKXZ */
}

void f_6ddf80(void) {
  LOAD_REGS();
L_6ddf80: /* 6ddf80: mov eax, dword ptr [ecx + 0xb0] */
  eax = R32((uint32_t)(ecx + 0xb0u));
/* 6ddf86: ret  */
  esp += 4; SPILL(); return;
}

void f_6ddfa0(void) {
  LOAD_REGS();
L_6ddfa0: /* 6ddfa0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ddfa1: movzx eax, byte ptr [ecx + 0x38] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x38u)));
/* 6ddfa5: cmp eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 6ddfa8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ddfa9: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 6ddfb1: ja 0x6de0c6 */
  if ((!cf && !zf)) goto L_6de0c6;
L_6ddfb7: /* 6ddfb7: jmp dword ptr [eax*4 + 0x6de0e0] */
  switch (R32((uint32_t)(eax*4 + 0x6de0e0u))) {
    case 0x6ddfbeu: goto L_6ddfbe;
    case 0x6ddfd6u: goto L_6ddfd6;
    case 0x6ddfeeu: goto L_6ddfee;
    case 0x6de006u: goto L_6de006;
    case 0x6de01eu: goto L_6de01e;
    case 0x6de036u: goto L_6de036;
    case 0x6de04eu: goto L_6de04e;
    case 0x6de066u: goto L_6de066;
    case 0x6de07eu: goto L_6de07e;
    case 0x6de096u: goto L_6de096;
    case 0x6de0aeu: goto L_6de0ae;
    case 0x6de0c6u: goto L_6de0c6;
    default: guest_badjump(0x6ddfb7, R32((uint32_t)(eax*4 + 0x6de0e0u))); return;
  }
L_6ddfbe: /* 6ddfbe: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 6ddfc2: push 0xac3988 */
  { uint32_t v = 0xac3988u; esp -= 4; W32(esp, v); }
/* 6ddfc7: mov ecx, esi */
  ecx = esi;
/* 6ddfc9: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x6ddfcfu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 6ddfcf: mov eax, esi */
  eax = esi;
/* 6ddfd1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ddfd2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6ddfd3: ret 4 */
  esp += 8; SPILL(); return;
L_6ddfd6: /* 6ddfd6: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 6ddfda: push 0xac3978 */
  { uint32_t v = 0xac3978u; esp -= 4; W32(esp, v); }
/* 6ddfdf: mov ecx, esi */
  ecx = esi;
/* 6ddfe1: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x6ddfe7u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 6ddfe7: mov eax, esi */
  eax = esi;
/* 6ddfe9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ddfea: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6ddfeb: ret 4 */
  esp += 8; SPILL(); return;
L_6ddfee: /* 6ddfee: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 6ddff2: push 0xac3968 */
  { uint32_t v = 0xac3968u; esp -= 4; W32(esp, v); }
/* 6ddff7: mov ecx, esi */
  ecx = esi;
/* 6ddff9: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x6ddfffu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 6ddfff: mov eax, esi */
  eax = esi;
/* 6de001: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6de002: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6de003: ret 4 */
  esp += 8; SPILL(); return;
L_6de006: /* 6de006: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 6de00a: push 0xac395c */
  { uint32_t v = 0xac395cu; esp -= 4; W32(esp, v); }
/* 6de00f: mov ecx, esi */
  ecx = esi;
/* 6de011: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x6de017u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 6de017: mov eax, esi */
  eax = esi;
/* 6de019: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6de01a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6de01b: ret 4 */
  esp += 8; SPILL(); return;
L_6de01e: /* 6de01e: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 6de022: push 0xac3950 */
  { uint32_t v = 0xac3950u; esp -= 4; W32(esp, v); }
/* 6de027: mov ecx, esi */
  ecx = esi;
/* 6de029: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x6de02fu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 6de02f: mov eax, esi */
  eax = esi;
/* 6de031: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6de032: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6de033: ret 4 */
  esp += 8; SPILL(); return;
L_6de036: /* 6de036: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 6de03a: push 0xac3940 */
  { uint32_t v = 0xac3940u; esp -= 4; W32(esp, v); }
/* 6de03f: mov ecx, esi */
  ecx = esi;
/* 6de041: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x6de047u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 6de047: mov eax, esi */
  eax = esi;
/* 6de049: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6de04a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6de04b: ret 4 */
  esp += 8; SPILL(); return;
L_6de04e: /* 6de04e: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 6de052: push 0xac3934 */
  { uint32_t v = 0xac3934u; esp -= 4; W32(esp, v); }
/* 6de057: mov ecx, esi */
  ecx = esi;
/* 6de059: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x6de05fu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 6de05f: mov eax, esi */
  eax = esi;
/* 6de061: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6de062: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6de063: ret 4 */
  esp += 8; SPILL(); return;
L_6de066: /* 6de066: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 6de06a: push 0xac3928 */
  { uint32_t v = 0xac3928u; esp -= 4; W32(esp, v); }
/* 6de06f: mov ecx, esi */
  ecx = esi;
/* 6de071: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x6de077u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 6de077: mov eax, esi */
  eax = esi;
/* 6de079: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6de07a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6de07b: ret 4 */
  esp += 8; SPILL(); return;
L_6de07e: /* 6de07e: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 6de082: push 0xac391c */
  { uint32_t v = 0xac391cu; esp -= 4; W32(esp, v); }
/* 6de087: mov ecx, esi */
  ecx = esi;
/* 6de089: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x6de08fu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 6de08f: mov eax, esi */
  eax = esi;
/* 6de091: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6de092: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6de093: ret 4 */
  esp += 8; SPILL(); return;
L_6de096: /* 6de096: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 6de09a: push 0xac3904 */
  { uint32_t v = 0xac3904u; esp -= 4; W32(esp, v); }
/* 6de09f: mov ecx, esi */
  ecx = esi;
/* 6de0a1: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x6de0a7u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 6de0a7: mov eax, esi */
  eax = esi;
/* 6de0a9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6de0aa: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6de0ab: ret 4 */
  esp += 8; SPILL(); return;
L_6de0ae: /* 6de0ae: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 6de0b2: push 0xac38fc */
  { uint32_t v = 0xac38fcu; esp -= 4; W32(esp, v); }
/* 6de0b7: mov ecx, esi */
  ecx = esi;
/* 6de0b9: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x6de0bfu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 6de0bf: mov eax, esi */
  eax = esi;
/* 6de0c1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6de0c2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6de0c3: ret 4 */
  esp += 8; SPILL(); return;
L_6de0c6: /* 6de0c6: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 6de0ca: push 0xac38f8 */
  { uint32_t v = 0xac38f8u; esp -= 4; W32(esp, v); }
/* 6de0cf: mov ecx, esi */
  ecx = esi;
/* 6de0d1: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x6de0d7u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 6de0d7: mov eax, esi */
  eax = esi;
/* 6de0d9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6de0da: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6de0db: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6de170(void) {
  LOAD_REGS();
L_6de170: /* 6de170: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_6de190(void) {
  LOAD_REGS();
L_6de190: /* 6de190: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_6de1b0(void) {
  LOAD_REGS();
L_6de1b0: /* 6de1b0: mov eax, dword ptr [ecx + 0xbc] */
  eax = R32((uint32_t)(ecx + 0xbcu));
/* 6de1b6: ret  */
  esp += 4; SPILL(); return;
}

void f_6de1d0(void) {
  LOAD_REGS();
L_6de1d0: /* 6de1d0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 6de1d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6de1d5: mov esi, ecx */
  esi = ecx;
/* 6de1d7: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 6de1db: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 6de1dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6de1de: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6de1df: mov ecx, esi */
  ecx = esi;
/* 6de1e1: call dword ptr [eax + 0xbc] */
  { uint32_t t = R32((uint32_t)(eax + 0xbcu)); esp -= 4; W32(esp, 0x6de1e7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6de1e7: mov eax, dword ptr [esi + 0x98] */
  eax = R32((uint32_t)(esi + 0x98u));
/* 6de1ed: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6de1ef: jne 0x6de1f3 */
  if (!zf) goto L_6de1f3;
L_6de1f1: /* 6de1f1: mov eax, esi */
  eax = esi;
L_6de1f3: /* 6de1f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6de1f4: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_6de210(void) {
  LOAD_REGS();
L_6de210: /* 6de210: mov eax, dword ptr [ecx + 0x7c] */
  eax = R32((uint32_t)(ecx + 0x7cu));
/* 6de213: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 6de215: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6de218: ret  */
  esp += 4; SPILL(); return;
}

void f_6de230(void) {
  LOAD_REGS();
L_6de230: /* 6de230: test byte ptr [ecx + 0x7c], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x7cu))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6de234: jne 0x6de239 */
  if (!zf) goto L_6de239;
L_6de236: /* 6de236: xor eax, eax */
  eax = 0;
/* 6de238: ret  */
  esp += 4; SPILL(); return;
L_6de239: /* 6de239: mov eax, 1 */
  eax = 0x1u;
/* 6de23e: ret  */
  esp += 4; SPILL(); return;
}

void f_6de250(void) {
  LOAD_REGS();
L_6de250: /* 6de250: fld qword ptr [ecx + 0xc0] */
  { double v = F64((uint32_t)(ecx + 0xc0u)); FPUSH(v); }
/* 6de256: ret  */
  esp += 4; SPILL(); return;
}

void f_6de270(void) {
  LOAD_REGS();
L_6de270: /* 6de270: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6de274: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 6de278: mov dword ptr [ecx + 0xc0], eax */
  W32((uint32_t)(ecx + 0xc0u), eax);
/* 6de27e: mov dword ptr [ecx + 0xc4], edx */
  W32((uint32_t)(ecx + 0xc4u), edx);
/* 6de284: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6de2a0(void) {
  LOAD_REGS();
L_6de2a0: /* 6de2a0: mov eax, 0xcea928 */
  eax = 0xcea928u;
/* 6de2a5: ret  */
  esp += 4; SPILL(); return;
}

void f_6de2c0(void) {
  LOAD_REGS();
L_6de2c0: /* 6de2c0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6de2c5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6de2c7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6de2cb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6de2cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6de2d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6de2d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6de2d4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6de2d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6de2da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6de2db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6de2dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6de2dd: push 0xcea928 */
  { uint32_t v = 0xcea928u; esp -= 4; W32(esp, v); }
/* 6de2e2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6de2e8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6de2e8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6de2eb: ret  */
  esp += 4; SPILL(); return;
}

void f_6de300(void) {
  LOAD_REGS();
L_6de300: /* 6de300: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6de304: ret  */
  esp += 4; SPILL(); return;
}

void f_6de320(void) {
  LOAD_REGS();
L_6de320: /* 6de320: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6de324: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6de326: je 0x6de32d */
  if (zf) goto L_6de32d;
L_6de328: /* 6de328: jmp 0x6c3a3a */
  SPILL(); f_6c3a3a(); return;
L_6de32d: /* 6de32d: ret  */
  esp += 4; SPILL(); return;
}

void f_6de340(void) {
  LOAD_REGS();
L_6de340: /* 6de340: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6de341: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 6de345: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6de346: mov eax, ecx */
  eax = ecx;
/* 6de348: mov ecx, 5 */
  ecx = 0x5u;
/* 6de34d: mov edi, eax */
  edi = eax;
/* 6de34f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6de351: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6de352: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6de353: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6de370(void) {
  LOAD_REGS();
L_6de370: /* 6de370: mov eax, 0xb814c0 */
  eax = 0xb814c0u;
/* 6de375: ret  */
  esp += 4; SPILL(); return;
}

void f_6de390(void) {
  LOAD_REGS();
L_6de390: /* 6de390: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6de395: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6de397: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6de39b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6de39f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6de3a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6de3a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6de3a4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6de3a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6de3aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6de3ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6de3ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6de3ad: push 0xb814c0 */
  { uint32_t v = 0xb814c0u; esp -= 4; W32(esp, v); }
/* 6de3b2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6de3b8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6de3b8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6de3bb: ret  */
  esp += 4; SPILL(); return;
}

void f_6de3d0(void) {
  LOAD_REGS();
L_6de3d0: /* 6de3d0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6de3d4: ret  */
  esp += 4; SPILL(); return;
}

void f_6de3f0(void) {
  LOAD_REGS();
L_6de3f0: /* 6de3f0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6de3f4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6de3f6: je 0x6de3fd */
  if (zf) goto L_6de3fd;
L_6de3f8: /* 6de3f8: jmp 0x6c6f9b */
  SPILL(); f_6c6f9b(); return;
L_6de3fd: /* 6de3fd: ret  */
  esp += 4; SPILL(); return;
}

void f_6de410(void) {
  LOAD_REGS();
L_6de410: /* 6de410: mov eax, ecx */
  eax = ecx;
/* 6de412: ret  */
  esp += 4; SPILL(); return;
}

void f_6de430(void) {
  LOAD_REGS();
L_6de430: /* 6de430: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6de431: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 6de435: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6de436: mov eax, ecx */
  eax = ecx;
/* 6de438: mov ecx, 9 */
  ecx = 0x9u;
/* 6de43d: mov edi, eax */
  edi = eax;
/* 6de43f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6de441: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6de442: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6de443: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6de460(void) {
  LOAD_REGS();
L_6de460: /* 6de460: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6de463: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6de464: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 6de468: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6de469: mov esi, dword ptr [0xcfa1b4] */
  esi = R32((uint32_t)(0xcfa1b4u));
/* 6de46f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6de470: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 6de474: lea eax, [edi + 0x24] */
  eax = (uint32_t)(edi + 0x24u);
/* 6de477: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6de478: lea ecx, [edi + 0x20] */
  ecx = (uint32_t)(edi + 0x20u);
/* 6de47b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6de47c: lea edx, [edi + 0x1c] */
  edx = (uint32_t)(edi + 0x1cu);
/* 6de47f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6de480: lea eax, [edi + 0x18] */
  eax = (uint32_t)(edi + 0x18u);
/* 6de483: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6de484: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 6de487: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6de488: lea edx, [edi + 4] */
  edx = (uint32_t)(edi + 0x4u);
/* 6de48b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6de48c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6de48d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6de48e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6de490u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6de490: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6de493: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6de494: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6de496u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6de496: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6de499: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6de49a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6de49cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6de49c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6de49f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6de4a0: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6de4a2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6de4a2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6de4a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6de4a6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6de4a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6de4a8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6de4ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6de4ac: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6de4aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6de4ae: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6de4b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6de4b2: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6de4b4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6de4b4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6de4b7: mov ecx, ebx */
  ecx = ebx;
/* 6de4b9: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x6de4bfu); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 6de4bf: cmp eax, 0x6d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6du);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 6de4c2: jl 0x6de54d */
  if ((sf != of)) goto L_6de54d;
L_6de4c8: /* 6de4c8: mov ecx, ebx */
  ecx = ebx;
/* 6de4ca: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x6de4d0u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 6de4d0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6de4d2: je 0x6de515 */
  if (zf) goto L_6de515;
L_6de4d4: /* 6de4d4: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 6de4d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6de4d9: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 6de4dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6de4de: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 6de4e2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6de4e3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6de4e4: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6de4e6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6de4e6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6de4e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6de4ea: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6de4ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6de4ec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6de4ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6de4f0: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6de4f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6de4f2: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 6de4f6: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 6de4fa: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 6de4fe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6de501: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 6de504: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 6de506: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 6de509: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 6de50c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6de50d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6de50e: mov eax, ebx */
  eax = ebx;
/* 6de510: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6de511: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6de514: ret  */
  esp += 4; SPILL(); return;
L_6de515: /* 6de515: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 6de518: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 6de51a: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 6de51d: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 6de520: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 6de524: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 6de528: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6de529: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 6de52d: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 6de531: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 6de535: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6de536: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 6de53a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6de53b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6de53c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6de53eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6de53e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6de541: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6de542: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6de544u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6de544: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6de547: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6de548: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6de54au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6de54a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_6de54d: /* 6de54d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6de54e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6de54f: mov eax, ebx */
  eax = ebx;
/* 6de551: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6de552: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6de555: ret  */
  esp += 4; SPILL(); return;
}

void f_6de5a0(void) {
  LOAD_REGS();
L_6de5a0: /* 6de5a0: mov eax, ecx */
  eax = ecx;
/* 6de5a2: ret  */
  esp += 4; SPILL(); return;
}

void f_6de5c0(void) {
  LOAD_REGS();
L_6de5c0: /* 6de5c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6de5c1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 6de5c5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6de5c6: mov eax, ecx */
  eax = ecx;
/* 6de5c8: mov ecx, 0xa */
  ecx = 0xau;
/* 6de5cd: mov edi, eax */
  edi = eax;
/* 6de5cf: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6de5d1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6de5d2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6de5d3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6de5f0(void) {
  LOAD_REGS();
L_6de5f0: /* 6de5f0: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 6de5f3: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 6de5f6: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 6de5f9: ret  */
  esp += 4; SPILL(); return;
}

void f_6de610(void) {
  LOAD_REGS();
L_6de610: /* 6de610: mov eax, 0x28 */
  eax = 0x28u;
/* 6de615: ret  */
  esp += 4; SPILL(); return;
}

void f_6de630(void) {
  LOAD_REGS();
L_6de630: /* 6de630: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6de634: mov ecx, 1 */
  ecx = 0x1u;
/* 6de639: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 6de63b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 6de63e: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 6de641: mov ecx, 2 */
  ecx = 0x2u;
/* 6de646: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 6de64d: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 6de650: mov dword ptr [eax + 0x14], 4 */
  W32((uint32_t)(eax + 0x14u), 0x4u);
/* 6de657: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 6de65a: mov dword ptr [eax + 0x1c], 5 */
  W32((uint32_t)(eax + 0x1cu), 0x5u);
/* 6de661: mov eax, 4 */
  eax = 0x4u;
/* 6de666: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6de680(void) {
  LOAD_REGS();
L_6de680: /* 6de680: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 6de683: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 6de686: ret  */
  esp += 4; SPILL(); return;
}

void f_6de6a0(void) {
  LOAD_REGS();
L_6de6a0: /* 6de6a0: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 6de6a3: ret  */
  esp += 4; SPILL(); return;
}

void f_6de6c0(void) {
  LOAD_REGS();
L_6de6c0: /* 6de6c0: mov eax, ecx */
  eax = ecx;
/* 6de6c2: mov dword ptr [eax], 0x9f43e4 */
  W32((uint32_t)(eax), 0x9f43e4u);
/* 6de6c8: ret  */
  esp += 4; SPILL(); return;
}

void f_6de6e0(void) {
  LOAD_REGS();
L_6de6e0: /* 6de6e0: xor eax, eax */
  eax = 0;
/* 6de6e2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6de700(void) {
  LOAD_REGS();
L_6de700: /* 6de700: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6de720(void) {
  LOAD_REGS();
L_6de720: /* 6de720: xor eax, eax */
  eax = 0;
/* 6de722: ret  */
  esp += 4; SPILL(); return;
}

void f_6de740(void) {
  LOAD_REGS();
L_6de740: /* 6de740: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 6de743: ret  */
  esp += 4; SPILL(); return;
}

void f_6de760(void) {
  LOAD_REGS();
L_6de760: /* 6de760: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 6de763: ret  */
  esp += 4; SPILL(); return;
}

void f_6de780(void) {
  LOAD_REGS();
L_6de780: /* 6de780: xor eax, eax */
  eax = 0;
/* 6de782: ret  */
  esp += 4; SPILL(); return;
}

void f_6de7a0(void) {
  LOAD_REGS();
L_6de7a0: /* 6de7a0: mov eax, 1 */
  eax = 0x1u;
/* 6de7a5: ret  */
  esp += 4; SPILL(); return;
}

void f_6de7c0(void) {
  LOAD_REGS();
L_6de7c0: /* 6de7c0: mov eax, 5 */
  eax = 0x5u;
/* 6de7c5: ret  */
  esp += 4; SPILL(); return;
}

void f_6de7e0(void) {
  LOAD_REGS();
L_6de7e0: /* 6de7e0: mov eax, 1 */
  eax = 0x1u;
/* 6de7e5: ret  */
  esp += 4; SPILL(); return;
}

void f_6de800(void) {
  LOAD_REGS();
L_6de800: /* 6de800: mov eax, 1 */
  eax = 0x1u;
/* 6de805: ret  */
  esp += 4; SPILL(); return;
}

void f_6de820(void) {
  LOAD_REGS();
L_6de820: /* 6de820: xor eax, eax */
  eax = 0;
/* 6de822: xor edx, edx */
  edx = 0;
/* 6de824: ret  */
  esp += 4; SPILL(); return;
}

void f_6de840(void) {
  LOAD_REGS();
L_6de840: /* 6de840: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 6de843: ret  */
  esp += 4; SPILL(); return;
}

void f_6de860(void) {
  LOAD_REGS();
L_6de860: /* 6de860: mov eax, ecx */
  eax = ecx;
/* 6de862: mov dword ptr [eax], 0x9f4408 */
  W32((uint32_t)(eax), 0x9f4408u);
/* 6de868: ret  */
  esp += 4; SPILL(); return;
}

void f_6de880(void) {
  LOAD_REGS();
L_6de880: /* 6de880: xor eax, eax */
  eax = 0;
/* 6de882: ret  */
  esp += 4; SPILL(); return;
}

void f_6de8a0(void) {
  LOAD_REGS();
L_6de8a0: /* 6de8a0: mov eax, dword ptr [ecx + 0x38] */
  eax = R32((uint32_t)(ecx + 0x38u));
/* 6de8a3: ret  */
  esp += 4; SPILL(); return;
}

void f_6de8c0(void) {
  LOAD_REGS();
L_6de8c0: /* 6de8c0: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* 6de8c3: ret  */
  esp += 4; SPILL(); return;
}

void f_6de8e0(void) {
  LOAD_REGS();
L_6de8e0: /* 6de8e0: mov eax, 2 */
  eax = 0x2u;
/* 6de8e5: ret  */
  esp += 4; SPILL(); return;
}

void f_6de900(void) {
  LOAD_REGS();
L_6de900: /* 6de900: movzx eax, byte ptr [ecx + 0x34] */
  eax = (uint32_t)(R8((uint32_t)(ecx + 0x34u)));
/* 6de904: ret  */
  esp += 4; SPILL(); return;
}

void f_6de920(void) {
  LOAD_REGS();
L_6de920: /* 6de920: xor eax, eax */
  eax = 0;
/* 6de922: ret  */
  esp += 4; SPILL(); return;
}

void f_6de940(void) {
  LOAD_REGS();
L_6de940: /* 6de940: xor eax, eax */
  eax = 0;
/* 6de942: ret  */
  esp += 4; SPILL(); return;
}

void f_6de960(void) {
  LOAD_REGS();
L_6de960: /* 6de960: mov eax, dword ptr [ecx + 0x40] */
  eax = R32((uint32_t)(ecx + 0x40u));
/* 6de963: mov edx, dword ptr [ecx + 0x44] */
  edx = R32((uint32_t)(ecx + 0x44u));
/* 6de966: ret  */
  esp += 4; SPILL(); return;
}

void f_6de980(void) {
  LOAD_REGS();
L_6de980: /* 6de980: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* 6de983: ret  */
  esp += 4; SPILL(); return;
}

void f_6de9a0(void) {
  LOAD_REGS();
L_6de9a0: /* 6de9a0: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 6de9a3: ret  */
  esp += 4; SPILL(); return;
}

void f_6de9c0(void) {
  LOAD_REGS();
L_6de9c0: /* 6de9c0: mov eax, 0x200 */
  eax = 0x200u;
/* 6de9c5: ret  */
  esp += 4; SPILL(); return;
}

void f_6de9e0(void) {
  LOAD_REGS();
L_6de9e0: /* 6de9e0: mov eax, 0x200 */
  eax = 0x200u;
/* 6de9e5: ret  */
  esp += 4; SPILL(); return;
}

void f_6dea00(void) {
  LOAD_REGS();
L_6dea00: /* 6dea00: xor eax, eax */
  eax = 0;
/* 6dea02: ret  */
  esp += 4; SPILL(); return;
}

void f_6dea20(void) {
  LOAD_REGS();
L_6dea20: /* 6dea20: mov eax, 1 */
  eax = 0x1u;
/* 6dea25: ret  */
  esp += 4; SPILL(); return;
}

void f_6dea40(void) {
  LOAD_REGS();
L_6dea40: /* 6dea40: mov eax, 5 */
  eax = 0x5u;
/* 6dea45: ret  */
  esp += 4; SPILL(); return;
}

void f_6dea60(void) {
  LOAD_REGS();
L_6dea60: /* 6dea60: xor eax, eax */
  eax = 0;
/* 6dea62: ret  */
  esp += 4; SPILL(); return;
}

void f_6dea80(void) {
  LOAD_REGS();
L_6dea80: /* 6dea80: xor eax, eax */
  eax = 0;
/* 6dea82: ret  */
  esp += 4; SPILL(); return;
}

void f_6deaa0(void) {
  LOAD_REGS();
L_6deaa0: /* 6deaa0: mov eax, dword ptr [ecx + 0x60] */
  eax = R32((uint32_t)(ecx + 0x60u));
/* 6deaa3: mov edx, dword ptr [ecx + 0x64] */
  edx = R32((uint32_t)(ecx + 0x64u));
/* 6deaa6: ret  */
  esp += 4; SPILL(); return;
}

void f_6deac0(void) {
  LOAD_REGS();
L_6deac0: /* 6deac0: mov eax, dword ptr [ecx + 0x68] */
  eax = R32((uint32_t)(ecx + 0x68u));
/* 6deac3: ret  */
  esp += 4; SPILL(); return;
}

void f_6deae0(void) {
  LOAD_REGS();
L_6deae0: /* 6deae0: mov eax, ecx */
  eax = ecx;
/* 6deae2: mov dword ptr [eax], 0x9f4848 */
  W32((uint32_t)(eax), 0x9f4848u);
/* 6deae8: ret  */
  esp += 4; SPILL(); return;
}

void f_6deb00(void) {
  LOAD_REGS();
L_6deb00: /* 6deb00: mov eax, ecx */
  eax = ecx;
/* 6deb02: ret  */
  esp += 4; SPILL(); return;
}

void f_6deb20(void) {
  LOAD_REGS();
L_6deb20: /* 6deb20: mov eax, ecx */
  eax = ecx;
/* 6deb22: mov dword ptr [eax], 0x9f4848 */
  W32((uint32_t)(eax), 0x9f4848u);
/* 6deb28: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6deb40(void) {
  LOAD_REGS();
L_6deb40: /* 6deb40: mov eax, ecx */
  eax = ecx;
/* 6deb42: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6deb60(void) {
  LOAD_REGS();
L_6deb60: /* 6deb60: mov eax, 0xb91be8 */
  eax = 0xb91be8u;
/* 6deb65: ret  */
  esp += 4; SPILL(); return;
}

void f_6deb80(void) {
  LOAD_REGS();
L_6deb80: /* 6deb80: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6deb85: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6deb87: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6deb8b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6deb8f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6deb91: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6deb93: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6deb94: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6deb98: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6deb9a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6deb9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6deb9c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6deb9d: push 0xb91be8 */
  { uint32_t v = 0xb91be8u; esp -= 4; W32(esp, v); }
/* 6deba2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6deba8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6deba8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6debab: ret  */
  esp += 4; SPILL(); return;
}

void f_6debc0(void) {
  LOAD_REGS();
L_6debc0: /* 6debc0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6debc4: ret  */
  esp += 4; SPILL(); return;
}

void f_6debe0(void) {
  LOAD_REGS();
L_6debe0: /* 6debe0: mov eax, ecx */
  eax = ecx;
/* 6debe2: ret  */
  esp += 4; SPILL(); return;
}

void f_6dec00(void) {
  LOAD_REGS();
L_6dec00: /* 6dec00: mov eax, ecx */
  eax = ecx;
/* 6dec02: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6dec06: mov dword ptr [eax + 0x40], ecx */
  W32((uint32_t)(eax + 0x40u), ecx);
/* 6dec09: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dec20(void) {
  LOAD_REGS();
L_6dec20: /* 6dec20: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6dec24: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 6dec28: lea ecx, [eax + 0x40] */
  ecx = (uint32_t)(eax + 0x40u);
/* 6dec2b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dec2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dec2d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6dec2e: call 0x6c67da */
  esp -= 4; W32(esp, 0x6dec33u); SPILL(); f_6c67da(); if (g_unwind) return; RELOAD();
/* 6dec33: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dec36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dec37: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x6dec3du); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 6dec3d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dec40: ret  */
  esp += 4; SPILL(); return;
}

void f_6dec60(void) {
  LOAD_REGS();
L_6dec60: /* 6dec60: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_6dec80(void) {
  LOAD_REGS();
L_6dec80: /* 6dec80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dec81: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 6dec85: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dec86: mov eax, ecx */
  eax = ecx;
/* 6dec88: mov ecx, 0x11 */
  ecx = 0x11u;
/* 6dec8d: mov edi, eax */
  edi = eax;
/* 6dec8f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6dec91: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dec92: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dec93: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6decb0(void) {
  LOAD_REGS();
L_6decb0: /* 6decb0: mov eax, ecx */
  eax = ecx;
/* 6decb2: ret  */
  esp += 4; SPILL(); return;
}

void f_6decd0(void) {
  LOAD_REGS();
L_6decd0: /* 6decd0: mov eax, ecx */
  eax = ecx;
/* 6decd2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6decd6: mov edx, ecx */
  edx = ecx;
/* 6decd8: mov dword ptr [eax + 0x40], ecx */
  W32((uint32_t)(eax + 0x40u), ecx);
/* 6decdb: mov dword ptr [eax + 0x44], edx */
  W32((uint32_t)(eax + 0x44u), edx);
/* 6decde: mov dword ptr [eax + 0x48], ecx */
  W32((uint32_t)(eax + 0x48u), ecx);
/* 6dece1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6ded00(void) {
  LOAD_REGS();
L_6ded00: /* 6ded00: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 6ded04: mov eax, ecx */
  eax = ecx;
/* 6ded06: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6ded0a: mov dword ptr [eax + 0x40], ecx */
  W32((uint32_t)(eax + 0x40u), ecx);
/* 6ded0d: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 6ded11: mov dword ptr [eax + 0x44], edx */
  W32((uint32_t)(eax + 0x44u), edx);
/* 6ded14: mov dword ptr [eax + 0x48], ecx */
  W32((uint32_t)(eax + 0x48u), ecx);
/* 6ded17: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_6ded30(void) {
  LOAD_REGS();
L_6ded30: /* 6ded30: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6ded34: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6ded35: lea ecx, [eax + 0x48] */
  ecx = (uint32_t)(eax + 0x48u);
/* 6ded38: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ded39: lea edx, [eax + 0x44] */
  edx = (uint32_t)(eax + 0x44u);
/* 6ded3c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6ded3d: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6ded41: lea ecx, [eax + 0x40] */
  ecx = (uint32_t)(eax + 0x40u);
/* 6ded44: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6ded45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ded46: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6ded47: call 0x6c67da */
  esp -= 4; W32(esp, 0x6ded4cu); SPILL(); f_6c67da(); if (g_unwind) return; RELOAD();
/* 6ded4c: mov esi, dword ptr [0xcfa1b4] */
  esi = R32((uint32_t)(0xcfa1b4u));
/* 6ded52: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ded55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ded56: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6ded58u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6ded58: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ded5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ded5c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6ded5eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6ded5e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ded61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6ded62: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6ded64u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6ded64: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6ded67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6ded68: ret  */
  esp += 4; SPILL(); return;
}

void f_6ded80(void) {
  LOAD_REGS();
L_6ded80: /* 6ded80: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_6deda0(void) {
  LOAD_REGS();
L_6deda0: /* 6deda0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6deda1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 6deda5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6deda6: mov eax, ecx */
  eax = ecx;
/* 6deda8: mov ecx, 0x13 */
  ecx = 0x13u;
/* 6dedad: mov edi, eax */
  edi = eax;
/* 6dedaf: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6dedb1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dedb2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dedb3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dedd0(void) {
  LOAD_REGS();
L_6dedd0: /* 6dedd0: mov eax, ecx */
  eax = ecx;
/* 6dedd2: ret  */
  esp += 4; SPILL(); return;
}

void f_6dedf0(void) {
  LOAD_REGS();
L_6dedf0: /* 6dedf0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 6dedf4: mov eax, ecx */
  eax = ecx;
/* 6dedf6: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6dedfa: mov dword ptr [eax + 0x40], ecx */
  W32((uint32_t)(eax + 0x40u), ecx);
/* 6dedfd: mov dword ptr [eax + 0x44], edx */
  W32((uint32_t)(eax + 0x44u), edx);
/* 6dee00: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6dee20(void) {
  LOAD_REGS();
L_6dee20: /* 6dee20: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6dee24: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dee25: lea ecx, [eax + 0x44] */
  ecx = (uint32_t)(eax + 0x44u);
/* 6dee28: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dee29: lea edx, [eax + 0x40] */
  edx = (uint32_t)(eax + 0x40u);
/* 6dee2c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6dee2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dee2e: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 6dee32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dee33: call 0x6c67da */
  esp -= 4; W32(esp, 0x6dee38u); SPILL(); f_6c67da(); if (g_unwind) return; RELOAD();
/* 6dee38: mov esi, dword ptr [0xcfa1b4] */
  esi = R32((uint32_t)(0xcfa1b4u));
/* 6dee3e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dee41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dee42: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6dee44u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dee44: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dee47: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dee48: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6dee4au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dee4a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dee4d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dee4e: ret  */
  esp += 4; SPILL(); return;
}

void f_6dee60(void) {
  LOAD_REGS();
L_6dee60: /* 6dee60: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_6dee80(void) {
  LOAD_REGS();
L_6dee80: /* 6dee80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dee81: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 6dee85: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dee86: mov eax, ecx */
  eax = ecx;
/* 6dee88: mov ecx, 0x12 */
  ecx = 0x12u;
/* 6dee8d: mov edi, eax */
  edi = eax;
/* 6dee8f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6dee91: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dee92: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dee93: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6deeb0(void) {
  LOAD_REGS();
L_6deeb0: /* 6deeb0: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* 6deeb3: mov eax, dword ptr [ecx + 0x28] */
  eax = R32((uint32_t)(ecx + 0x28u));
/* 6deeb6: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6deeb8: add eax, dword ptr [ecx + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6deebb: add eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 6deebe: ret  */
  esp += 4; SPILL(); return;
}

void f_6deed0(void) {
  LOAD_REGS();
L_6deed0: /* 6deed0: mov eax, 0xb1e3a8 */
  eax = 0xb1e3a8u;
/* 6deed5: ret  */
  esp += 4; SPILL(); return;
}

void f_6deef0(void) {
  LOAD_REGS();
L_6deef0: /* 6deef0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6deef5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6deef7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6deefb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6deeff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6def01: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6def03: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6def04: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6def08: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6def0a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6def0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6def0c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6def0d: push 0xb1e3a8 */
  { uint32_t v = 0xb1e3a8u; esp -= 4; W32(esp, v); }
/* 6def12: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6def18u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6def18: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6def1b: ret  */
  esp += 4; SPILL(); return;
}

void f_6def30(void) {
  LOAD_REGS();
L_6def30: /* 6def30: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6def34: ret  */
  esp += 4; SPILL(); return;
}

void f_6def50(void) {
  LOAD_REGS();
L_6def50: /* 6def50: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6def54: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6def56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6def57: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 6def5b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6def5c: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x6def5fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6def5f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 6def61: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 6def64: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6def65: mov ecx, eax */
  ecx = eax;
/* 6def67: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x6def6au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6def6a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6def6b: ret  */
  esp += 4; SPILL(); return;
}

void f_6def80(void) {
  LOAD_REGS();
L_6def80: /* 6def80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6def81: mov esi, ecx */
  esi = ecx;
/* 6def83: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x6def89u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 6def89: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 6def8c: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x6def92u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 6def92: mov eax, esi */
  eax = esi;
/* 6def94: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6def95: ret  */
  esp += 4; SPILL(); return;
}

void f_6defb0(void) {
  LOAD_REGS();
L_6defb0: /* 6defb0: mov eax, ecx */
  eax = ecx;
/* 6defb2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6defb6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 6defb8: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 6defba: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 6defbd: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 6defc0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6defe0(void) {
  LOAD_REGS();
L_6defe0: /* 6defe0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6defe4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6defe5: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 6defe8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6defe9: lea edx, [eax + 8] */
  edx = (uint32_t)(eax + 0x8u);
/* 6defec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6defed: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6deff1: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 6deff4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6deff5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6deff6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6deff7: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x6deffdu); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 6deffd: mov esi, dword ptr [0xcfa1b4] */
  esi = R32((uint32_t)(0xcfa1b4u));
/* 6df003: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6df006: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df007: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6df009u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6df009: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6df00c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df00d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6df00fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6df00f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6df012: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df013: call dword ptr [0xcfa1b8] */
  esp -= 4; W32(esp, 0x6df019u); SPILL(); f_4e40e8(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAE@Z */ RELOAD();
/* 6df019: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6df01c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6df01d: ret  */
  esp += 4; SPILL(); return;
}

void f_6df030(void) {
  LOAD_REGS();
L_6df030: /* 6df030: mov eax, ecx */
  eax = ecx;
/* 6df032: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6df036: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6df037: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 6df039: mov edx, eax */
  edx = eax;
/* 6df03b: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 6df03d: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 6df040: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 6df043: mov esi, dword ptr [ecx + 8] */
  esi = R32((uint32_t)(ecx + 0x8u));
/* 6df046: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 6df049: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 6df04c: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 6df04f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6df050: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6df070(void) {
  LOAD_REGS();
L_6df070: /* 6df070: mov eax, dword ptr [0xb7e3a0] */
  eax = R32((uint32_t)(0xb7e3a0u));
/* 6df075: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6df076: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6df077: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df079: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df07b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df07d: mov esi, ecx */
  esi = ecx;
/* 6df07f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6df081: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df082: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6df088u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6df088: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df089: mov ecx, esi */
  ecx = esi;
/* 6df08b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6df08eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6df08e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6df08f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6df090: ret  */
  esp += 4; SPILL(); return;
}

void f_6df0b0(void) {
  LOAD_REGS();
L_6df0b0: /* 6df0b0: mov eax, dword ptr [0xb7e39c] */
  eax = R32((uint32_t)(0xb7e39cu));
/* 6df0b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6df0b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6df0b7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df0b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df0bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df0bd: mov esi, ecx */
  esi = ecx;
/* 6df0bf: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6df0c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df0c2: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6df0c8u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6df0c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df0c9: mov ecx, esi */
  ecx = esi;
/* 6df0cb: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6df0ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6df0ce: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6df0cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6df0d0: ret  */
  esp += 4; SPILL(); return;
}

void f_6df0f0(void) {
  LOAD_REGS();
L_6df0f0: /* 6df0f0: mov eax, dword ptr [0xb7e558] */
  eax = R32((uint32_t)(0xb7e558u));
/* 6df0f5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6df0f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6df0f7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df0f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df0fb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df0fd: mov esi, ecx */
  esi = ecx;
/* 6df0ff: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6df101: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df102: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6df108u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6df108: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df109: mov ecx, esi */
  ecx = esi;
/* 6df10b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6df10eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6df10e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6df10f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6df110: ret  */
  esp += 4; SPILL(); return;
}

void f_6df130(void) {
  LOAD_REGS();
L_6df130: /* 6df130: mov eax, dword ptr [0xb7e550] */
  eax = R32((uint32_t)(0xb7e550u));
/* 6df135: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6df136: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6df137: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df139: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df13b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df13d: mov esi, ecx */
  esi = ecx;
/* 6df13f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6df141: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df142: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6df148u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6df148: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df149: mov ecx, esi */
  ecx = esi;
/* 6df14b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6df14eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6df14e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6df14f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6df150: ret  */
  esp += 4; SPILL(); return;
}

void f_6df170(void) {
  LOAD_REGS();
L_6df170: /* 6df170: mov eax, dword ptr [0xb7e3f4] */
  eax = R32((uint32_t)(0xb7e3f4u));
/* 6df175: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6df176: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6df177: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df179: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df17b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df17d: mov esi, ecx */
  esi = ecx;
/* 6df17f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6df181: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df182: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6df188u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6df188: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df189: mov ecx, esi */
  ecx = esi;
/* 6df18b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6df18eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6df18e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6df18f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6df190: ret  */
  esp += 4; SPILL(); return;
}

void f_6df1b0(void) {
  LOAD_REGS();
L_6df1b0: /* 6df1b0: mov eax, dword ptr [0xb7e3b8] */
  eax = R32((uint32_t)(0xb7e3b8u));
/* 6df1b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6df1b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6df1b7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df1b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df1bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df1bd: mov esi, ecx */
  esi = ecx;
/* 6df1bf: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6df1c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df1c2: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6df1c8u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6df1c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df1c9: mov ecx, esi */
  ecx = esi;
/* 6df1cb: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6df1ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6df1ce: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6df1cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6df1d0: ret  */
  esp += 4; SPILL(); return;
}

void f_6df1f0(void) {
  LOAD_REGS();
L_6df1f0: /* 6df1f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6df1f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6df1f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6df1f3: mov esi, ecx */
  esi = ecx;
/* 6df1f5: mov ecx, esp */
  ecx = esp;
/* 6df1f7: push 0x165 */
  { uint32_t v = 0x165u; esp -= 4; W32(esp, v); }
/* 6df1fc: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6df202u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6df202: mov ecx, esi */
  ecx = esi;
/* 6df204: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6df20au); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6df20a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6df20c: je 0x6df22a */
  if (zf) goto L_6df22a;
L_6df20e: /* 6df20e: mov eax, dword ptr [0xb7e344] */
  eax = R32((uint32_t)(0xb7e344u));
/* 6df213: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6df215: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df217: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df219: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df21b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df21c: mov ecx, esi */
  ecx = esi;
/* 6df21e: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6df224u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6df224: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df225: mov ecx, esi */
  ecx = esi;
/* 6df227: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6df22au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6df22a: /* 6df22a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6df22b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6df22c: ret  */
  esp += 4; SPILL(); return;
}

void f_6df240(void) {
  LOAD_REGS();
L_6df240: /* 6df240: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6df243: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 6df247: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 6df24b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6df24c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6df24d: mov esi, ecx */
  esi = ecx;
/* 6df24f: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 6df253: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6df255: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df257: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 6df25b: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 6df25f: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 6df263: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 6df267: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 6df26b: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 6df26f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6df270: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 6df274: mov eax, dword ptr [0xb7e3ec] */
  eax = R32((uint32_t)(0xb7e3ecu));
/* 6df279: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df27b: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 6df27f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df280: mov ecx, esi */
  ecx = esi;
/* 6df282: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6df288u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6df288: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df289: mov ecx, esi */
  ecx = esi;
/* 6df28b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6df28eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6df28e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6df28f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6df290: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6df293: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_6df2c0(void) {
  LOAD_REGS();
L_6df2c0: /* 6df2c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6df2c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6df2c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6df2c3: mov esi, ecx */
  esi = ecx;
/* 6df2c5: mov ecx, esp */
  ecx = esp;
/* 6df2c7: push 0x163 */
  { uint32_t v = 0x163u; esp -= 4; W32(esp, v); }
/* 6df2cc: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6df2d2u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6df2d2: mov ecx, esi */
  ecx = esi;
/* 6df2d4: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6df2dau); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6df2da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6df2dc: je 0x6df2fa */
  if (zf) goto L_6df2fa;
L_6df2de: /* 6df2de: mov eax, dword ptr [0xb7e33c] */
  eax = R32((uint32_t)(0xb7e33cu));
/* 6df2e3: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6df2e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df2e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df2e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df2eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df2ec: mov ecx, esi */
  ecx = esi;
/* 6df2ee: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6df2f4u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6df2f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df2f5: mov ecx, esi */
  ecx = esi;
/* 6df2f7: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6df2fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6df2fa: /* 6df2fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6df2fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6df2fc: ret  */
  esp += 4; SPILL(); return;
}

void f_6df310(void) {
  LOAD_REGS();
L_6df310: /* 6df310: mov edx, dword ptr [0xb7e4b0] */
  edx = R32((uint32_t)(0xb7e4b0u));
/* 6df316: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6df31a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6df31b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6df31c: mov esi, ecx */
  esi = ecx;
/* 6df31e: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6df320: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df322: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 6df326: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6df327: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df329: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6df32a: mov ecx, esi */
  ecx = esi;
/* 6df32c: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 6df330: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6df336u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6df336: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df337: mov ecx, esi */
  ecx = esi;
/* 6df339: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6df33cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6df33c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6df33d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6df33e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6df360(void) {
  LOAD_REGS();
L_6df360: /* 6df360: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6df361: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6df362: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6df363: mov esi, ecx */
  esi = ecx;
/* 6df365: mov ecx, esp */
  ecx = esp;
/* 6df367: push 0x164 */
  { uint32_t v = 0x164u; esp -= 4; W32(esp, v); }
/* 6df36c: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6df372u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6df372: mov ecx, esi */
  ecx = esi;
/* 6df374: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6df37au); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6df37a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6df37c: je 0x6df39a */
  if (zf) goto L_6df39a;
L_6df37e: /* 6df37e: mov eax, dword ptr [0xb7e340] */
  eax = R32((uint32_t)(0xb7e340u));
/* 6df383: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6df385: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df387: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df389: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df38b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df38c: mov ecx, esi */
  ecx = esi;
/* 6df38e: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6df394u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6df394: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df395: mov ecx, esi */
  ecx = esi;
/* 6df397: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6df39au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6df39a: /* 6df39a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6df39b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6df39c: ret  */
  esp += 4; SPILL(); return;
}

void f_6df3b0(void) {
  LOAD_REGS();
L_6df3b0: /* 6df3b0: mov edx, dword ptr [0xb7e374] */
  edx = R32((uint32_t)(0xb7e374u));
/* 6df3b6: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6df3ba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6df3bb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6df3bc: mov esi, ecx */
  esi = ecx;
/* 6df3be: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6df3c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df3c2: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 6df3c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6df3c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df3c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6df3ca: mov ecx, esi */
  ecx = esi;
/* 6df3cc: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 6df3d0: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6df3d6u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6df3d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df3d7: mov ecx, esi */
  ecx = esi;
/* 6df3d9: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6df3dcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6df3dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6df3dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6df3de: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6df400(void) {
  LOAD_REGS();
L_6df400: /* 6df400: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6df403: mov edx, dword ptr [0xb7e370] */
  edx = R32((uint32_t)(0xb7e370u));
/* 6df409: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6df40d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6df40e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6df40f: mov esi, ecx */
  esi = ecx;
/* 6df411: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6df413: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df415: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 6df419: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6df41a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df41c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6df41d: mov ecx, esi */
  ecx = esi;
/* 6df41f: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 6df427: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 6df42b: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6df431u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6df431: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df432: mov ecx, esi */
  ecx = esi;
/* 6df434: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6df437u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6df437: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6df43b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6df43c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6df43d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6df440: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6df470(void) {
  LOAD_REGS();
L_6df470: /* 6df470: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6df473: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 6df477: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 6df47b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6df47c: mov esi, ecx */
  esi = ecx;
/* 6df47e: mov cl, byte ptr [esp + 0x28] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x28u))) & 0xffu);
/* 6df482: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6df483: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6df485: mov byte ptr [esp + 0xc], cl */
  W8((uint32_t)(esp + 0xcu), (ecx & 0xffu));
/* 6df489: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 6df48d: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 6df491: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df493: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 6df497: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 6df49b: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 6df49f: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 6df4a3: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 6df4a7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6df4a8: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 6df4ac: mov edx, dword ptr [0xb7e3e4] */
  edx = R32((uint32_t)(0xb7e3e4u));
/* 6df4b2: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 6df4b6: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 6df4ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df4bc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6df4bd: mov ecx, esi */
  ecx = esi;
/* 6df4bf: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 6df4c3: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6df4c9u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6df4c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df4ca: mov ecx, esi */
  ecx = esi;
/* 6df4cc: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6df4cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6df4cf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6df4d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6df4d1: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6df4d4: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_6df500(void) {
  LOAD_REGS();
L_6df500: /* 6df500: mov eax, dword ptr [0xb7e49c] */
  eax = R32((uint32_t)(0xb7e49cu));
/* 6df505: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6df506: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6df507: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df509: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df50b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df50d: mov esi, ecx */
  esi = ecx;
/* 6df50f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6df511: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df512: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6df518u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6df518: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df519: mov ecx, esi */
  ecx = esi;
/* 6df51b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6df51eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6df51e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6df51f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6df520: ret  */
  esp += 4; SPILL(); return;
}

void f_6df540(void) {
  LOAD_REGS();
L_6df540: /* 6df540: mov edx, dword ptr [0xb7e394] */
  edx = R32((uint32_t)(0xb7e394u));
/* 6df546: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6df54a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6df54b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6df54c: mov esi, ecx */
  esi = ecx;
/* 6df54e: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6df550: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df552: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 6df556: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6df557: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df559: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6df55a: mov ecx, esi */
  ecx = esi;
/* 6df55c: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 6df560: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6df566u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6df566: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df567: mov ecx, esi */
  ecx = esi;
/* 6df569: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6df56cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6df56c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6df56d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6df56e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6df590(void) {
  LOAD_REGS();
L_6df590: /* 6df590: mov edx, dword ptr [0xb7e3cc] */
  edx = R32((uint32_t)(0xb7e3ccu));
/* 6df596: mov al, byte ptr [esp + 4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x4u))) & 0xffu);
/* 6df59a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6df59b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6df59c: mov esi, ecx */
  esi = ecx;
/* 6df59e: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6df5a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df5a2: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 6df5a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6df5a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df5a9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6df5aa: mov ecx, esi */
  ecx = esi;
/* 6df5ac: mov byte ptr [esp + 0x1c], al */
  W8((uint32_t)(esp + 0x1cu), (eax & 0xffu));
/* 6df5b0: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6df5b6u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6df5b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df5b7: mov ecx, esi */
  ecx = esi;
/* 6df5b9: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6df5bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6df5bc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6df5bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6df5be: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6df5e0(void) {
  LOAD_REGS();
L_6df5e0: /* 6df5e0: mov edx, dword ptr [0xb7e488] */
  edx = R32((uint32_t)(0xb7e488u));
/* 6df5e6: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6df5ea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6df5eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6df5ec: mov esi, ecx */
  esi = ecx;
/* 6df5ee: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6df5f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df5f2: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 6df5f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6df5f7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df5f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6df5fa: mov ecx, esi */
  ecx = esi;
/* 6df5fc: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 6df600: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6df606u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6df606: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df607: mov ecx, esi */
  ecx = esi;
/* 6df609: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6df60cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6df60c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6df60d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6df60e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6df630(void) {
  LOAD_REGS();
L_6df630: /* 6df630: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6df631: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6df632: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6df633: mov esi, ecx */
  esi = ecx;
/* 6df635: mov ecx, esp */
  ecx = esp;
/* 6df637: push 0x145 */
  { uint32_t v = 0x145u; esp -= 4; W32(esp, v); }
/* 6df63c: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6df642u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6df642: mov ecx, esi */
  ecx = esi;
/* 6df644: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6df64au); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6df64a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6df64c: je 0x6df66a */
  if (zf) goto L_6df66a;
L_6df64e: /* 6df64e: mov eax, dword ptr [0xb7e2dc] */
  eax = R32((uint32_t)(0xb7e2dcu));
/* 6df653: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6df655: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df657: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df659: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df65b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df65c: mov ecx, esi */
  ecx = esi;
/* 6df65e: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6df664u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6df664: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df665: mov ecx, esi */
  ecx = esi;
/* 6df667: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6df66au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6df66a: /* 6df66a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6df66b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6df66c: ret  */
  esp += 4; SPILL(); return;
}

void f_6df680(void) {
  LOAD_REGS();
L_6df680: /* 6df680: mov eax, dword ptr [0xb7e418] */
  eax = R32((uint32_t)(0xb7e418u));
/* 6df685: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6df686: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6df687: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df689: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df68b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df68d: mov esi, ecx */
  esi = ecx;
/* 6df68f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6df691: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df692: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6df698u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6df698: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df699: mov ecx, esi */
  ecx = esi;
/* 6df69b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6df69eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6df69e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6df69f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6df6a0: ret  */
  esp += 4; SPILL(); return;
}

void f_6df6c0(void) {
  LOAD_REGS();
L_6df6c0: /* 6df6c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6df6c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6df6c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6df6c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6df6c4: mov esi, ecx */
  esi = ecx;
/* 6df6c6: mov ecx, esp */
  ecx = esp;
/* 6df6c8: push 0x148 */
  { uint32_t v = 0x148u; esp -= 4; W32(esp, v); }
/* 6df6cd: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6df6d3u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6df6d3: mov ecx, esi */
  ecx = esi;
/* 6df6d5: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6df6dbu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6df6db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6df6dd: je 0x6df707 */
  if (zf) goto L_6df707;
L_6df6df: /* 6df6df: mov edx, dword ptr [0xb7e2e4] */
  edx = R32((uint32_t)(0xb7e2e4u));
/* 6df6e5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 6df6e9: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6df6eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df6ed: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 6df6f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6df6f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df6f4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6df6f5: mov ecx, esi */
  ecx = esi;
/* 6df6f7: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 6df6fb: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6df701u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6df701: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df702: mov ecx, esi */
  ecx = esi;
/* 6df704: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6df707u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6df707: /* 6df707: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6df708: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6df709: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6df70a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6df730(void) {
  LOAD_REGS();
L_6df730: /* 6df730: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6df733: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6df734: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6df735: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6df736: mov esi, ecx */
  esi = ecx;
/* 6df738: mov ecx, esp */
  ecx = esp;
/* 6df73a: push 0x147 */
  { uint32_t v = 0x147u; esp -= 4; W32(esp, v); }
/* 6df73f: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 6df747: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6df74du); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6df74d: mov ecx, esi */
  ecx = esi;
/* 6df74f: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6df755u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6df755: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6df757: je 0x6df781 */
  if (zf) goto L_6df781;
L_6df759: /* 6df759: mov edx, dword ptr [0xb7e2e0] */
  edx = R32((uint32_t)(0xb7e2e0u));
/* 6df75f: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 6df763: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6df765: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df767: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 6df76b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6df76c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df76e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6df76f: mov ecx, esi */
  ecx = esi;
/* 6df771: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 6df775: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6df77bu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6df77b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df77c: mov ecx, esi */
  ecx = esi;
/* 6df77e: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6df781u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6df781: /* 6df781: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6df785: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6df786: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6df787: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6df78a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6df7b0(void) {
  LOAD_REGS();
L_6df7b0: /* 6df7b0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6df7b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6df7b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6df7b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6df7b6: mov esi, ecx */
  esi = ecx;
/* 6df7b8: mov ecx, esp */
  ecx = esp;
/* 6df7ba: push 0x15a */
  { uint32_t v = 0x15au; esp -= 4; W32(esp, v); }
/* 6df7bf: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 6df7c7: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6df7cdu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6df7cd: mov ecx, esi */
  ecx = esi;
/* 6df7cf: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6df7d5u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6df7d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6df7d7: je 0x6df801 */
  if (zf) goto L_6df801;
L_6df7d9: /* 6df7d9: mov edx, dword ptr [0xb7e31c] */
  edx = R32((uint32_t)(0xb7e31cu));
/* 6df7df: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 6df7e3: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6df7e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df7e7: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 6df7eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6df7ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df7ee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6df7ef: mov ecx, esi */
  ecx = esi;
/* 6df7f1: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 6df7f5: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6df7fbu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6df7fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df7fc: mov ecx, esi */
  ecx = esi;
/* 6df7fe: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6df801u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6df801: /* 6df801: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6df805: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6df806: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6df807: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6df80a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6df830(void) {
  LOAD_REGS();
L_6df830: /* 6df830: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6df831: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6df832: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6df833: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6df834: mov esi, ecx */
  esi = ecx;
/* 6df836: mov ecx, esp */
  ecx = esp;
/* 6df838: push 0x140 */
  { uint32_t v = 0x140u; esp -= 4; W32(esp, v); }
/* 6df83d: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6df843u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6df843: mov ecx, esi */
  ecx = esi;
/* 6df845: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6df84bu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6df84b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6df84d: je 0x6df877 */
  if (zf) goto L_6df877;
L_6df84f: /* 6df84f: mov edx, dword ptr [0xb7e2c8] */
  edx = R32((uint32_t)(0xb7e2c8u));
/* 6df855: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 6df859: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6df85b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df85d: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 6df861: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6df862: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df864: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6df865: mov ecx, esi */
  ecx = esi;
/* 6df867: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 6df86b: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6df871u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6df871: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df872: mov ecx, esi */
  ecx = esi;
/* 6df874: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6df877u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6df877: /* 6df877: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6df878: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6df879: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6df87a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6df8a0(void) {
  LOAD_REGS();
L_6df8a0: /* 6df8a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6df8a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6df8a2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6df8a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6df8a4: mov esi, ecx */
  esi = ecx;
/* 6df8a6: mov ecx, esp */
  ecx = esp;
/* 6df8a8: push 0x13f */
  { uint32_t v = 0x13fu; esp -= 4; W32(esp, v); }
/* 6df8ad: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6df8b3u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6df8b3: mov ecx, esi */
  ecx = esi;
/* 6df8b5: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6df8bbu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6df8bb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6df8bd: je 0x6df8e7 */
  if (zf) goto L_6df8e7;
L_6df8bf: /* 6df8bf: mov edx, dword ptr [0xb7e2c4] */
  edx = R32((uint32_t)(0xb7e2c4u));
/* 6df8c5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 6df8c9: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6df8cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df8cd: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 6df8d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6df8d2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df8d4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6df8d5: mov ecx, esi */
  ecx = esi;
/* 6df8d7: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 6df8db: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6df8e1u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6df8e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df8e2: mov ecx, esi */
  ecx = esi;
/* 6df8e4: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6df8e7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6df8e7: /* 6df8e7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6df8e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6df8e9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6df8ea: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6df910(void) {
  LOAD_REGS();
L_6df910: /* 6df910: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6df911: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6df912: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6df913: mov esi, ecx */
  esi = ecx;
/* 6df915: mov ecx, esp */
  ecx = esp;
/* 6df917: push 0x13e */
  { uint32_t v = 0x13eu; esp -= 4; W32(esp, v); }
/* 6df91c: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6df922u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6df922: mov ecx, esi */
  ecx = esi;
/* 6df924: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6df92au); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6df92a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6df92c: je 0x6df94a */
  if (zf) goto L_6df94a;
L_6df92e: /* 6df92e: mov eax, dword ptr [0xb7e2c0] */
  eax = R32((uint32_t)(0xb7e2c0u));
/* 6df933: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6df935: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df937: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df939: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df93b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df93c: mov ecx, esi */
  ecx = esi;
/* 6df93e: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6df944u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6df944: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df945: mov ecx, esi */
  ecx = esi;
/* 6df947: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6df94au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6df94a: /* 6df94a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6df94b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6df94c: ret  */
  esp += 4; SPILL(); return;
}

void f_6df960(void) {
  LOAD_REGS();
L_6df960: /* 6df960: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6df961: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6df962: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6df963: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6df964: mov esi, ecx */
  esi = ecx;
/* 6df966: mov ecx, esp */
  ecx = esp;
/* 6df968: push 0x13b */
  { uint32_t v = 0x13bu; esp -= 4; W32(esp, v); }
/* 6df96d: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6df973u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6df973: mov ecx, esi */
  ecx = esi;
/* 6df975: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6df97bu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6df97b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6df97d: je 0x6df9a7 */
  if (zf) goto L_6df9a7;
L_6df97f: /* 6df97f: mov edx, dword ptr [0xb7e2bc] */
  edx = R32((uint32_t)(0xb7e2bcu));
/* 6df985: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 6df989: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6df98b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df98d: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 6df991: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6df992: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df994: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6df995: mov ecx, esi */
  ecx = esi;
/* 6df997: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 6df99b: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6df9a1u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6df9a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6df9a2: mov ecx, esi */
  ecx = esi;
/* 6df9a4: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6df9a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6df9a7: /* 6df9a7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6df9a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6df9a9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6df9aa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6df9d0(void) {
  LOAD_REGS();
L_6df9d0: /* 6df9d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6df9d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6df9d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6df9d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6df9d4: mov esi, ecx */
  esi = ecx;
/* 6df9d6: mov ecx, esp */
  ecx = esp;
/* 6df9d8: push 0x13a */
  { uint32_t v = 0x13au; esp -= 4; W32(esp, v); }
/* 6df9dd: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6df9e3u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6df9e3: mov ecx, esi */
  ecx = esi;
/* 6df9e5: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6df9ebu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6df9eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6df9ed: je 0x6dfa17 */
  if (zf) goto L_6dfa17;
L_6df9ef: /* 6df9ef: mov edx, dword ptr [0xb7e2b8] */
  edx = R32((uint32_t)(0xb7e2b8u));
/* 6df9f5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 6df9f9: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6df9fb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6df9fd: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 6dfa01: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dfa02: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dfa04: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6dfa05: mov ecx, esi */
  ecx = esi;
/* 6dfa07: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 6dfa0b: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6dfa11u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6dfa11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dfa12: mov ecx, esi */
  ecx = esi;
/* 6dfa14: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6dfa17u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6dfa17: /* 6dfa17: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dfa18: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dfa19: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6dfa1a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dfa40(void) {
  LOAD_REGS();
L_6dfa40: /* 6dfa40: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dfa41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dfa42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dfa43: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dfa44: mov esi, ecx */
  esi = ecx;
/* 6dfa46: mov ecx, esp */
  ecx = esp;
/* 6dfa48: push 0x14b */
  { uint32_t v = 0x14bu; esp -= 4; W32(esp, v); }
/* 6dfa4d: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6dfa53u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6dfa53: mov ecx, esi */
  ecx = esi;
/* 6dfa55: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6dfa5bu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6dfa5b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6dfa5d: je 0x6dfa87 */
  if (zf) goto L_6dfa87;
L_6dfa5f: /* 6dfa5f: mov edx, dword ptr [0xb7e2ec] */
  edx = R32((uint32_t)(0xb7e2ecu));
/* 6dfa65: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 6dfa69: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6dfa6b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dfa6d: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 6dfa71: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dfa72: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dfa74: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6dfa75: mov ecx, esi */
  ecx = esi;
/* 6dfa77: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 6dfa7b: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6dfa81u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6dfa81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dfa82: mov ecx, esi */
  ecx = esi;
/* 6dfa84: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6dfa87u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6dfa87: /* 6dfa87: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dfa88: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dfa89: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6dfa8a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dfab0(void) {
  LOAD_REGS();
L_6dfab0: /* 6dfab0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dfab1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dfab2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dfab3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dfab4: mov esi, ecx */
  esi = ecx;
/* 6dfab6: mov ecx, esp */
  ecx = esp;
/* 6dfab8: push 0x139 */
  { uint32_t v = 0x139u; esp -= 4; W32(esp, v); }
/* 6dfabd: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6dfac3u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6dfac3: mov ecx, esi */
  ecx = esi;
/* 6dfac5: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6dfacbu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6dfacb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6dfacd: je 0x6dfaf7 */
  if (zf) goto L_6dfaf7;
L_6dfacf: /* 6dfacf: mov edx, dword ptr [0xb7e2b4] */
  edx = R32((uint32_t)(0xb7e2b4u));
/* 6dfad5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 6dfad9: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6dfadb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dfadd: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 6dfae1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dfae2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dfae4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6dfae5: mov ecx, esi */
  ecx = esi;
/* 6dfae7: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 6dfaeb: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6dfaf1u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6dfaf1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dfaf2: mov ecx, esi */
  ecx = esi;
/* 6dfaf4: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6dfaf7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6dfaf7: /* 6dfaf7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dfaf8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dfaf9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6dfafa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dfb20(void) {
  LOAD_REGS();
L_6dfb20: /* 6dfb20: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dfb21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dfb22: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dfb23: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dfb24: mov esi, ecx */
  esi = ecx;
/* 6dfb26: mov ecx, esp */
  ecx = esp;
/* 6dfb28: push 0x138 */
  { uint32_t v = 0x138u; esp -= 4; W32(esp, v); }
/* 6dfb2d: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6dfb33u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6dfb33: mov ecx, esi */
  ecx = esi;
/* 6dfb35: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6dfb3bu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6dfb3b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6dfb3d: je 0x6dfb67 */
  if (zf) goto L_6dfb67;
L_6dfb3f: /* 6dfb3f: mov edx, dword ptr [0xb7e2b0] */
  edx = R32((uint32_t)(0xb7e2b0u));
/* 6dfb45: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 6dfb49: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6dfb4b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dfb4d: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 6dfb51: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dfb52: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dfb54: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6dfb55: mov ecx, esi */
  ecx = esi;
/* 6dfb57: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 6dfb5b: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6dfb61u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6dfb61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dfb62: mov ecx, esi */
  ecx = esi;
/* 6dfb64: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6dfb67u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6dfb67: /* 6dfb67: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dfb68: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dfb69: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6dfb6a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dfb90(void) {
  LOAD_REGS();
L_6dfb90: /* 6dfb90: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dfb91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dfb92: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dfb93: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dfb94: mov esi, ecx */
  esi = ecx;
/* 6dfb96: mov ecx, esp */
  ecx = esp;
/* 6dfb98: push 0x143 */
  { uint32_t v = 0x143u; esp -= 4; W32(esp, v); }
/* 6dfb9d: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6dfba3u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6dfba3: mov ecx, esi */
  ecx = esi;
/* 6dfba5: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6dfbabu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6dfbab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6dfbad: je 0x6dfbd7 */
  if (zf) goto L_6dfbd7;
L_6dfbaf: /* 6dfbaf: mov edx, dword ptr [0xb7e2d4] */
  edx = R32((uint32_t)(0xb7e2d4u));
/* 6dfbb5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 6dfbb9: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6dfbbb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dfbbd: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 6dfbc1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dfbc2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dfbc4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6dfbc5: mov ecx, esi */
  ecx = esi;
/* 6dfbc7: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 6dfbcb: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6dfbd1u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6dfbd1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dfbd2: mov ecx, esi */
  ecx = esi;
/* 6dfbd4: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6dfbd7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6dfbd7: /* 6dfbd7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dfbd8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dfbd9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6dfbda: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dfc00(void) {
  LOAD_REGS();
L_6dfc00: /* 6dfc00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dfc01: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dfc02: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dfc03: mov esi, ecx */
  esi = ecx;
/* 6dfc05: mov ecx, esp */
  ecx = esp;
/* 6dfc07: push 0x136 */
  { uint32_t v = 0x136u; esp -= 4; W32(esp, v); }
/* 6dfc0c: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6dfc12u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6dfc12: mov ecx, esi */
  ecx = esi;
/* 6dfc14: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6dfc1au); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6dfc1a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6dfc1c: je 0x6dfc3a */
  if (zf) goto L_6dfc3a;
L_6dfc1e: /* 6dfc1e: mov eax, dword ptr [0xb7e2a8] */
  eax = R32((uint32_t)(0xb7e2a8u));
/* 6dfc23: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6dfc25: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dfc27: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dfc29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dfc2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dfc2c: mov ecx, esi */
  ecx = esi;
/* 6dfc2e: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6dfc34u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6dfc34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dfc35: mov ecx, esi */
  ecx = esi;
/* 6dfc37: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6dfc3au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6dfc3a: /* 6dfc3a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dfc3b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dfc3c: ret  */
  esp += 4; SPILL(); return;
}

void f_6dfc50(void) {
  LOAD_REGS();
L_6dfc50: /* 6dfc50: mov edx, dword ptr [0xb7e54c] */
  edx = R32((uint32_t)(0xb7e54cu));
/* 6dfc56: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6dfc5a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dfc5b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dfc5c: mov esi, ecx */
  esi = ecx;
/* 6dfc5e: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6dfc60: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dfc62: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 6dfc66: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dfc67: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dfc69: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6dfc6a: mov ecx, esi */
  ecx = esi;
/* 6dfc6c: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 6dfc70: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6dfc76u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6dfc76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dfc77: mov ecx, esi */
  ecx = esi;
/* 6dfc79: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6dfc7cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dfc7c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dfc7d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dfc7e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dfca0(void) {
  LOAD_REGS();
L_6dfca0: /* 6dfca0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dfca1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dfca2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dfca3: mov esi, ecx */
  esi = ecx;
/* 6dfca5: mov ecx, esp */
  ecx = esp;
/* 6dfca7: push 0x134 */
  { uint32_t v = 0x134u; esp -= 4; W32(esp, v); }
/* 6dfcac: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6dfcb2u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6dfcb2: mov ecx, esi */
  ecx = esi;
/* 6dfcb4: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6dfcbau); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6dfcba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6dfcbc: je 0x6dfcda */
  if (zf) goto L_6dfcda;
L_6dfcbe: /* 6dfcbe: mov eax, dword ptr [0xb7e2a0] */
  eax = R32((uint32_t)(0xb7e2a0u));
/* 6dfcc3: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6dfcc5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dfcc7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dfcc9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dfccb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dfccc: mov ecx, esi */
  ecx = esi;
/* 6dfcce: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6dfcd4u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6dfcd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dfcd5: mov ecx, esi */
  ecx = esi;
/* 6dfcd7: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6dfcdau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6dfcda: /* 6dfcda: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dfcdb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dfcdc: ret  */
  esp += 4; SPILL(); return;
}

void f_6dfcf0(void) {
  LOAD_REGS();
L_6dfcf0: /* 6dfcf0: mov eax, dword ptr [0xb7e390] */
  eax = R32((uint32_t)(0xb7e390u));
/* 6dfcf5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dfcf6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dfcf7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dfcf9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dfcfb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dfcfd: mov esi, ecx */
  esi = ecx;
/* 6dfcff: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6dfd01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dfd02: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6dfd08u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6dfd08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dfd09: mov ecx, esi */
  ecx = esi;
/* 6dfd0b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6dfd0eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dfd0e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dfd0f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dfd10: ret  */
  esp += 4; SPILL(); return;
}

void f_6dfd30(void) {
  LOAD_REGS();
L_6dfd30: /* 6dfd30: mov eax, dword ptr [0xb7e38c] */
  eax = R32((uint32_t)(0xb7e38cu));
/* 6dfd35: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dfd36: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dfd37: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dfd39: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dfd3b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dfd3d: mov esi, ecx */
  esi = ecx;
/* 6dfd3f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6dfd41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dfd42: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6dfd48u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6dfd48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dfd49: mov ecx, esi */
  ecx = esi;
/* 6dfd4b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6dfd4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6dfd4e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dfd4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dfd50: ret  */
  esp += 4; SPILL(); return;
}

void f_6dfd70(void) {
  LOAD_REGS();
L_6dfd70: /* 6dfd70: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6dfd73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dfd74: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dfd75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dfd76: mov esi, ecx */
  esi = ecx;
/* 6dfd78: mov ecx, esp */
  ecx = esp;
/* 6dfd7a: push 0x133 */
  { uint32_t v = 0x133u; esp -= 4; W32(esp, v); }
/* 6dfd7f: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6dfd85u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6dfd85: mov ecx, esi */
  ecx = esi;
/* 6dfd87: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6dfd8du); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6dfd8d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6dfd8f: je 0x6dfdc0 */
  if (zf) goto L_6dfdc0;
L_6dfd91: /* 6dfd91: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 6dfd95: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 6dfd99: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6dfd9b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dfd9d: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 6dfda1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6dfda2: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 6dfda6: mov eax, dword ptr [0xb7e29c] */
  eax = R32((uint32_t)(0xb7e29cu));
/* 6dfdab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dfdad: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 6dfdb1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dfdb2: mov ecx, esi */
  ecx = esi;
/* 6dfdb4: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6dfdbau); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6dfdba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dfdbb: mov ecx, esi */
  ecx = esi;
/* 6dfdbd: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6dfdc0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6dfdc0: /* 6dfdc0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dfdc1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dfdc2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dfdc5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6dfdf0(void) {
  LOAD_REGS();
L_6dfdf0: /* 6dfdf0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6dfdf3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dfdf4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dfdf5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dfdf6: mov esi, ecx */
  esi = ecx;
/* 6dfdf8: mov ecx, esp */
  ecx = esp;
/* 6dfdfa: push 0x132 */
  { uint32_t v = 0x132u; esp -= 4; W32(esp, v); }
/* 6dfdff: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6dfe05u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6dfe05: mov ecx, esi */
  ecx = esi;
/* 6dfe07: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6dfe0du); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6dfe0d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6dfe0f: je 0x6dfe40 */
  if (zf) goto L_6dfe40;
L_6dfe11: /* 6dfe11: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 6dfe15: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 6dfe19: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6dfe1b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dfe1d: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 6dfe21: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6dfe22: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 6dfe26: mov eax, dword ptr [0xb7e298] */
  eax = R32((uint32_t)(0xb7e298u));
/* 6dfe2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dfe2d: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 6dfe31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dfe32: mov ecx, esi */
  ecx = esi;
/* 6dfe34: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6dfe3au); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6dfe3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dfe3b: mov ecx, esi */
  ecx = esi;
/* 6dfe3d: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6dfe40u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6dfe40: /* 6dfe40: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dfe41: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dfe42: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6dfe45: ret 8 */
  esp += 12; SPILL(); return;
}

void f_6dfe70(void) {
  LOAD_REGS();
L_6dfe70: /* 6dfe70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dfe71: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dfe72: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dfe73: mov esi, ecx */
  esi = ecx;
/* 6dfe75: mov ecx, esp */
  ecx = esp;
/* 6dfe77: push 0x162 */
  { uint32_t v = 0x162u; esp -= 4; W32(esp, v); }
/* 6dfe7c: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6dfe82u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6dfe82: mov ecx, esi */
  ecx = esi;
/* 6dfe84: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6dfe8au); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6dfe8a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6dfe8c: je 0x6dfeaa */
  if (zf) goto L_6dfeaa;
L_6dfe8e: /* 6dfe8e: mov eax, dword ptr [0xb7e338] */
  eax = R32((uint32_t)(0xb7e338u));
/* 6dfe93: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6dfe95: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dfe97: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dfe99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dfe9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dfe9c: mov ecx, esi */
  ecx = esi;
/* 6dfe9e: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6dfea4u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6dfea4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dfea5: mov ecx, esi */
  ecx = esi;
/* 6dfea7: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6dfeaau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6dfeaa: /* 6dfeaa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dfeab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dfeac: ret  */
  esp += 4; SPILL(); return;
}

void f_6dfec0(void) {
  LOAD_REGS();
L_6dfec0: /* 6dfec0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dfec1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dfec2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dfec3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dfec4: mov esi, ecx */
  esi = ecx;
/* 6dfec6: mov ecx, esp */
  ecx = esp;
/* 6dfec8: push 0x150 */
  { uint32_t v = 0x150u; esp -= 4; W32(esp, v); }
/* 6dfecd: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6dfed3u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6dfed3: mov ecx, esi */
  ecx = esi;
/* 6dfed5: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6dfedbu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6dfedb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6dfedd: je 0x6dff07 */
  if (zf) goto L_6dff07;
L_6dfedf: /* 6dfedf: mov edx, dword ptr [0xb7e2fc] */
  edx = R32((uint32_t)(0xb7e2fcu));
/* 6dfee5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 6dfee9: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6dfeeb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dfeed: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 6dfef1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dfef2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dfef4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6dfef5: mov ecx, esi */
  ecx = esi;
/* 6dfef7: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 6dfefb: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6dff01u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6dff01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dff02: mov ecx, esi */
  ecx = esi;
/* 6dff04: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6dff07u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6dff07: /* 6dff07: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dff08: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dff09: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6dff0a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dff30(void) {
  LOAD_REGS();
L_6dff30: /* 6dff30: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dff31: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dff32: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dff33: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dff34: mov esi, ecx */
  esi = ecx;
/* 6dff36: mov ecx, esp */
  ecx = esp;
/* 6dff38: push 0x12f */
  { uint32_t v = 0x12fu; esp -= 4; W32(esp, v); }
/* 6dff3d: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6dff43u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6dff43: mov ecx, esi */
  ecx = esi;
/* 6dff45: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6dff4bu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6dff4b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6dff4d: je 0x6dff77 */
  if (zf) goto L_6dff77;
L_6dff4f: /* 6dff4f: mov edx, dword ptr [0xb7e294] */
  edx = R32((uint32_t)(0xb7e294u));
/* 6dff55: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 6dff59: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6dff5b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dff5d: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 6dff61: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dff62: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dff64: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6dff65: mov ecx, esi */
  ecx = esi;
/* 6dff67: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 6dff6b: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6dff71u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6dff71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dff72: mov ecx, esi */
  ecx = esi;
/* 6dff74: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6dff77u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6dff77: /* 6dff77: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dff78: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dff79: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6dff7a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6dffa0(void) {
  LOAD_REGS();
L_6dffa0: /* 6dffa0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dffa1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6dffa2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6dffa3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dffa4: mov esi, ecx */
  esi = ecx;
/* 6dffa6: mov ecx, esp */
  ecx = esp;
/* 6dffa8: push 0x12e */
  { uint32_t v = 0x12eu; esp -= 4; W32(esp, v); }
/* 6dffad: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6dffb3u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6dffb3: mov ecx, esi */
  ecx = esi;
/* 6dffb5: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6dffbbu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6dffbb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6dffbd: je 0x6dffe7 */
  if (zf) goto L_6dffe7;
L_6dffbf: /* 6dffbf: mov edx, dword ptr [0xb7e290] */
  edx = R32((uint32_t)(0xb7e290u));
/* 6dffc5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 6dffc9: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6dffcb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dffcd: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 6dffd1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6dffd2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6dffd4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6dffd5: mov ecx, esi */
  ecx = esi;
/* 6dffd7: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 6dffdb: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6dffe1u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6dffe1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6dffe2: mov ecx, esi */
  ecx = esi;
/* 6dffe4: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6dffe7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6dffe7: /* 6dffe7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6dffe8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6dffe9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6dffea: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e0010(void) {
  LOAD_REGS();
L_6e0010: /* 6e0010: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e0011: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e0012: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e0013: mov esi, ecx */
  esi = ecx;
/* 6e0015: mov ecx, esp */
  ecx = esp;
/* 6e0017: push 0x12d */
  { uint32_t v = 0x12du; esp -= 4; W32(esp, v); }
/* 6e001c: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6e0022u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6e0022: mov ecx, esi */
  ecx = esi;
/* 6e0024: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6e002au); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6e002a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6e002c: je 0x6e004a */
  if (zf) goto L_6e004a;
L_6e002e: /* 6e002e: mov eax, dword ptr [0xb7e28c] */
  eax = R32((uint32_t)(0xb7e28cu));
/* 6e0033: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e0035: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e0037: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e0039: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e003b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e003c: mov ecx, esi */
  ecx = esi;
/* 6e003e: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e0044u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e0044: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e0045: mov ecx, esi */
  ecx = esi;
/* 6e0047: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e004au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6e004a: /* 6e004a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e004b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e004c: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0045(void) {
  LOAD_REGS();
L_6e0045: /* 6e0045: mov ecx, esi */
  ecx = esi;
/* 6e0047: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e004au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e004a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e004b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e004c: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0060(void) {
  LOAD_REGS();
L_6e0060: /* 6e0060: mov eax, dword ptr [0xb7e4d4] */
  eax = R32((uint32_t)(0xb7e4d4u));
/* 6e0065: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e0066: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e0067: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e0069: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e006b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e006d: mov esi, ecx */
  esi = ecx;
/* 6e006f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e0071: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e0072: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e0078u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e0078: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e0079: mov ecx, esi */
  ecx = esi;
/* 6e007b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e007eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e007e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e007f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e0080: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0065(void) {
  LOAD_REGS();
L_6e0065: /* 6e0065: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e0066: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e0067: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e0069: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e006b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e006d: mov esi, ecx */
  esi = ecx;
/* 6e006f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e0071: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e0072: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e0078u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e0078: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e0079: mov ecx, esi */
  ecx = esi;
/* 6e007b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e007eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e007e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e007f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e0080: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0067(void) {
  LOAD_REGS();
L_6e0067: /* 6e0067: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e0069: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e006b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e006d: mov esi, ecx */
  esi = ecx;
/* 6e006f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e0071: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e0072: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e0078u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e0078: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e0079: mov ecx, esi */
  ecx = esi;
/* 6e007b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e007eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e007e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e007f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e0080: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0069(void) {
  LOAD_REGS();
L_6e0069: /* 6e0069: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e006b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e006d: mov esi, ecx */
  esi = ecx;
/* 6e006f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e0071: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e0072: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e0078u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e0078: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e0079: mov ecx, esi */
  ecx = esi;
/* 6e007b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e007eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e007e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e007f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e0080: ret  */
  esp += 4; SPILL(); return;
}

void f_6e006b(void) {
  LOAD_REGS();
L_6e006b: /* 6e006b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e006d: mov esi, ecx */
  esi = ecx;
/* 6e006f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e0071: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e0072: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e0078u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e0078: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e0079: mov ecx, esi */
  ecx = esi;
/* 6e007b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e007eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e007e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e007f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e0080: ret  */
  esp += 4; SPILL(); return;
}

void f_6e006f(void) {
  LOAD_REGS();
L_6e006f: /* 6e006f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e0071: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e0072: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e0078u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e0078: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e0079: mov ecx, esi */
  ecx = esi;
/* 6e007b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e007eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e007e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e007f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e0080: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0072(void) {
  LOAD_REGS();
L_6e0072: /* 6e0072: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e0078u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e0078: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e0079: mov ecx, esi */
  ecx = esi;
/* 6e007b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e007eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e007e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e007f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e0080: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0078(void) {
  LOAD_REGS();
L_6e0078: /* 6e0078: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e0079: mov ecx, esi */
  ecx = esi;
/* 6e007b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e007eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e007e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e007f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e0080: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0079(void) {
  LOAD_REGS();
L_6e0079: /* 6e0079: mov ecx, esi */
  ecx = esi;
/* 6e007b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e007eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e007e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e007f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e0080: ret  */
  esp += 4; SPILL(); return;
}

void f_6e00a0(void) {
  LOAD_REGS();
L_6e00a0: /* 6e00a0: mov eax, dword ptr [0xb7e4d0] */
  eax = R32((uint32_t)(0xb7e4d0u));
/* 6e00a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e00a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e00a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e00a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e00ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e00ad: mov esi, ecx */
  esi = ecx;
/* 6e00af: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e00b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e00b2: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e00b8u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e00b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e00b9: mov ecx, esi */
  ecx = esi;
/* 6e00bb: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e00beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e00be: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e00bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e00c0: ret  */
  esp += 4; SPILL(); return;
}

void f_6e00e0(void) {
  LOAD_REGS();
L_6e00e0: /* 6e00e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e00e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e00e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e00e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e00e4: mov esi, ecx */
  esi = ecx;
/* 6e00e6: mov ecx, esp */
  ecx = esp;
/* 6e00e8: push 0x144 */
  { uint32_t v = 0x144u; esp -= 4; W32(esp, v); }
/* 6e00ed: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6e00f3u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6e00f3: mov ecx, esi */
  ecx = esi;
/* 6e00f5: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6e00fbu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6e00fb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6e00fd: je 0x6e0127 */
  if (zf) goto L_6e0127;
L_6e00ff: /* 6e00ff: mov edx, dword ptr [0xb7e2d8] */
  edx = R32((uint32_t)(0xb7e2d8u));
/* 6e0105: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 6e0109: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e010b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e010d: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 6e0111: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e0112: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e0114: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e0115: mov ecx, esi */
  ecx = esi;
/* 6e0117: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 6e011b: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e0121u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e0121: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e0122: mov ecx, esi */
  ecx = esi;
/* 6e0124: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e0127u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6e0127: /* 6e0127: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e0128: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e0129: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6e012a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e0150(void) {
  LOAD_REGS();
L_6e0150: /* 6e0150: mov eax, 0xb5bf68 */
  eax = 0xb5bf68u;
/* 6e0155: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0170(void) {
  LOAD_REGS();
L_6e0170: /* 6e0170: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e0175: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e0177: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e017b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e017f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e0181: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e0183: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e0184: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e0188: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e018a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e018b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e018c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e018d: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 6e0192: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e0198u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e0198: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e019b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e01b0(void) {
  LOAD_REGS();
L_6e01b0: /* 6e01b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e01b4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e01d0(void) {
  LOAD_REGS();
L_6e01d0: /* 6e01d0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 6e01d4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 6e01d8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 6e01da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e01db: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x6e01deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e01de: ret  */
  esp += 4; SPILL(); return;
}

void f_6e01f0(void) {
  LOAD_REGS();
L_6e01f0: /* 6e01f0: xor eax, eax */
  eax = 0;
/* 6e01f2: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0210(void) {
  LOAD_REGS();
L_6e0210: /* 6e0210: xor eax, eax */
  eax = 0;
/* 6e0212: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0230(void) {
  LOAD_REGS();
L_6e0230: /* 6e0230: test dword ptr [ecx + 0x88], 0x18000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x88u))); uint32_t b = (uint32_t)(0x18000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6e023a: jne 0x6e023f */
  if (!zf) goto L_6e023f;
L_6e023c: /* 6e023c: xor eax, eax */
  eax = 0;
/* 6e023e: ret  */
  esp += 4; SPILL(); return;
L_6e023f: /* 6e023f: mov eax, 1 */
  eax = 0x1u;
/* 6e0244: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0260(void) {
  LOAD_REGS();
L_6e0260: /* 6e0260: fld dword ptr [ecx + 0x30] */
  { double v = F32((uint32_t)(ecx + 0x30u)); FPUSH(v); }
/* 6e0263: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 6e0269: fmul dword ptr [0x9f489c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f489cu)));
/* 6e026f: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0280(void) {
  LOAD_REGS();
L_6e0280: /* 6e0280: ret  */
  esp += 4; SPILL(); return;
}

void f_6e02a0(void) {
  LOAD_REGS();
L_6e02a0: /* 6e02a0: ret  */
  esp += 4; SPILL(); return;
}

void f_6e02c0(void) {
  LOAD_REGS();
L_6e02c0: /* 6e02c0: ret  */
  esp += 4; SPILL(); return;
}

void f_6e02e0(void) {
  LOAD_REGS();
L_6e02e0: /* 6e02e0: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0300(void) {
  LOAD_REGS();
L_6e0300: /* 6e0300: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0320(void) {
  LOAD_REGS();
L_6e0320: /* 6e0320: xor eax, eax */
  eax = 0;
/* 6e0322: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0340(void) {
  LOAD_REGS();
L_6e0340: /* 6e0340: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6e0343: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e0344: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 6e0348: lea eax, [ecx + 0x170] */
  eax = (uint32_t)(ecx + 0x170u);
/* 6e034e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e034f: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 6e0355: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e0356: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e0357: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 6e035b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e035c: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 6e0362: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 6e0365: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x6e036bu); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 6e036b: mov ecx, eax */
  ecx = eax;
/* 6e036d: call dword ptr [0xcfa2cc] */
  esp -= 4; W32(esp, 0x6e0373u); SPILL(); f_4e398b(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFVector@@@Z */ RELOAD();
/* 6e0373: mov eax, esi */
  eax = esi;
/* 6e0375: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e0376: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e0379: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e0390(void) {
  LOAD_REGS();
L_6e0390: /* 6e0390: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6e0393: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e0394: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 6e0398: lea eax, [ecx + 0x17c] */
  eax = (uint32_t)(ecx + 0x17cu);
/* 6e039e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e039f: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 6e03a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e03a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e03a7: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 6e03ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e03ac: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 6e03b2: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 6e03b5: call dword ptr [0xcfa2d4] */
  esp -= 4; W32(esp, 0x6e03bbu); SPILL(); f_4e4179(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFVector@@@Z */ RELOAD();
/* 6e03bb: mov ecx, eax */
  ecx = eax;
/* 6e03bd: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x6e03c3u); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 6e03c3: mov eax, esi */
  eax = esi;
/* 6e03c5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e03c6: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e03c9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e03e0(void) {
  LOAD_REGS();
L_6e03e0: /* 6e03e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6e03e2: push 0x9c01c8 */
  { uint32_t v = 0x9c01c8u; esp -= 4; W32(esp, v); }
/* 6e03e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6e03ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e03ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6e03f5: sub esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6e03f8: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 6e0400: mov edx, dword ptr [ecx + 0x184] */
  edx = R32((uint32_t)(ecx + 0x184u));
/* 6e0406: mov eax, dword ptr [0xcfa1c4] */
  eax = R32((uint32_t)(0xcfa1c4u));
/* 6e040b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 6e040c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e040d: mov esi, edx */
  esi = edx;
/* 6e040f: sar esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 6e0412: and esi, 0x3fff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 6e0418: fld dword ptr [eax + esi*4 + 0x8c] */
  { double v = F32((uint32_t)(eax + esi*4 + 0x8cu)); FPUSH(v); }
/* 6e041f: mov esi, dword ptr [ecx + 0x17c] */
  esi = R32((uint32_t)(ecx + 0x17cu));
/* 6e0425: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e0426: mov edi, esi */
  edi = esi;
/* 6e0428: sar edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 6e042b: and edi, 0x3fff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 6e0431: fld dword ptr [eax + edi*4 + 0x8c] */
  { double v = F32((uint32_t)(eax + edi*4 + 0x8cu)); FPUSH(v); }
/* 6e0438: mov edi, dword ptr [ecx + 0x180] */
  edi = R32((uint32_t)(ecx + 0x180u));
/* 6e043e: mov ebx, edi */
  ebx = edi;
/* 6e0440: add edx, 0x4000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 6e0446: sar edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 6e0449: sar ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* 6e044c: and edx, 0x3fff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 6e0452: add esi, 0x4000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 6e0458: and ebx, 0x3fff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 6e045e: fld dword ptr [eax + ebx*4 + 0x8c] */
  { double v = F32((uint32_t)(eax + ebx*4 + 0x8cu)); FPUSH(v); }
/* 6e0465: sar esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 6e0468: fld dword ptr [eax + edx*4 + 0x8c] */
  { double v = F32((uint32_t)(eax + edx*4 + 0x8cu)); FPUSH(v); }
/* 6e046f: add edi, 0x4000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 6e0475: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 6e0479: and esi, 0x3fff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 6e047f: fld dword ptr [eax + esi*4 + 0x8c] */
  { double v = F32((uint32_t)(eax + esi*4 + 0x8cu)); FPUSH(v); }
/* 6e0486: sar edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 6e0489: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 6e048d: and edi, 0x3fff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 6e0493: fld dword ptr [eax + edi*4 + 0x8c] */
  { double v = F32((uint32_t)(eax + edi*4 + 0x8cu)); FPUSH(v); }
/* 6e049a: mov eax, dword ptr [ecx + 0x174] */
  eax = R32((uint32_t)(ecx + 0x174u));
/* 6e04a0: fld dword ptr [ecx + 0x170] */
  { double v = F32((uint32_t)(ecx + 0x170u)); FPUSH(v); }
/* 6e04a6: mov edx, dword ptr [ecx + 0x178] */
  edx = R32((uint32_t)(ecx + 0x178u));
/* 6e04ac: fld dword ptr [ecx + 0x294] */
  { double v = F32((uint32_t)(ecx + 0x294u)); FPUSH(v); }
/* 6e04b2: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 6e04b6: fld dword ptr [ecx + 0x288] */
  { double v = F32((uint32_t)(ecx + 0x288u)); FPUSH(v); }
/* 6e04bc: mov eax, dword ptr [ecx + 0x298] */
  eax = R32((uint32_t)(ecx + 0x298u));
/* 6e04c2: fmul dword ptr [ecx + 0x284] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x284u)));
/* 6e04c8: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 6e04cc: mov edx, dword ptr [ecx + 0x29c] */
  edx = R32((uint32_t)(ecx + 0x29cu));
/* 6e04d2: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 6e04d6: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 6e04da: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 6e04de: fld dword ptr [ecx + 0x28c] */
  { double v = F32((uint32_t)(ecx + 0x28cu)); FPUSH(v); }
/* 6e04e4: mov dword ptr [esp + 0x44], 0 */
  W32((uint32_t)(esp + 0x44u), 0x0u);
/* 6e04ec: fmul dword ptr [ecx + 0x284] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x284u)));
/* 6e04f2: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 6e04f6: fld dword ptr [ecx + 0x290] */
  { double v = F32((uint32_t)(ecx + 0x290u)); FPUSH(v); }
/* 6e04fc: fmul dword ptr [ecx + 0x284] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x284u)));
/* 6e0502: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 6e0506: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 6e050a: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 6e050c: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 6e0510: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 6e0514: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 6e0518: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 6e051c: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 6e051e: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 6e0522: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 6e0526: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 6e0528: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 6e052c: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 6e0530: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 6e0532: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 6e0536: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 6e0538: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 6e053a: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 6e053c: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 6e0540: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 6e0544: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 6e0548: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 6e054a: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 6e054e: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 6e0552: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 6e0554: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 6e0556: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 6e0558: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 6e055c: mov dword ptr [esp + 0x54], 0 */
  W32((uint32_t)(esp + 0x54u), 0x0u);
/* 6e0564: mov dword ptr [esp + 0x64], 0 */
  W32((uint32_t)(esp + 0x64u), 0x0u);
/* 6e056c: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 6e0570: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 6e0574: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 6e0578: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 6e057c: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 6e057e: fchs  */
  ST0 = -ST0;
/* 6e0580: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 6e0584: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 6e0588: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 6e058a: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 6e058c: fmul st(7) */
  ST0 = ST0 * STI(7);
/* 6e058e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 6e0590: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 6e0594: fchs  */
  ST0 = -ST0;
/* 6e0596: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 6e059a: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 6e059c: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 6e059e: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 6e05a2: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 6e05a4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 6e05a6: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 6e05aa: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 6e05ae: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 6e05b2: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 6e05b6: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 6e05ba: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 6e05be: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 6e05c2: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 6e05c4: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 6e05c8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 6e05ca: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 6e05ce: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 6e05d2: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 6e05d6: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 6e05da: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 6e05de: fst dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0);
/* 6e05e2: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 6e05e6: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 6e05ea: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 6e05ec: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 6e05ee: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 6e05f2: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 6e05f6: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 6e05f8: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 6e05fc: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 6e05fe: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 6e0602: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 6e0604: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 6e0608: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 6e060a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 6e060c: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 6e0610: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 6e0612: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 6e0614: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 6e0616: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 6e0618: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 6e061c: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 6e061e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 6e0620: fstp dword ptr [esp + 0x68] */
  WF32((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 6e0624: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 6e0626: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 6e062a: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 6e062e: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 6e0630: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 6e0634: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 6e0636: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 6e0638: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 6e063c: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 6e0640: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 6e0642: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 6e0644: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 6e0646: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 6e064a: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 6e064c: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 6e064e: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 6e0650: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 6e0652: mov ebx, dword ptr [esp + 0x88] */
  ebx = R32((uint32_t)(esp + 0x88u));
/* 6e0659: mov ecx, 0x10 */
  ecx = 0x10u;
/* 6e065e: lea esi, [esp + 0x38] */
  esi = (uint32_t)(esp + 0x38u);
/* 6e0662: fsubr dword ptr [esp + 0x30] */
  ST0 = (F32((uint32_t)(esp + 0x30u))) - ST0;
/* 6e0666: mov edi, ebx */
  edi = ebx;
/* 6e0668: mov dword ptr [esp + 0x74], 0x3f800000 */
  W32((uint32_t)(esp + 0x74u), 0x3f800000u);
/* 6e0670: fstp dword ptr [esp + 0x6c] */
  WF32((uint32_t)(esp + 0x6cu), ST0); FPOP();
/* 6e0674: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 6e0676: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 6e0678: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 6e067c: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 6e0680: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 6e0684: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 6e0688: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 6e068a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 6e068c: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 6e0690: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 6e0694: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 6e0696: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 6e0698: fsubr dword ptr [esp + 0x34] */
  ST0 = (F32((uint32_t)(esp + 0x34u))) - ST0;
/* 6e069c: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 6e06a0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 6e06a2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 6e06a4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 6e06a6: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 6e06aa: mov dword ptr [esp + 0x34], 1 */
  W32((uint32_t)(esp + 0x34u), 0x1u);
/* 6e06b2: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x6e06b8u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 6e06b8: mov ecx, dword ptr [esp + 0x78] */
  ecx = R32((uint32_t)(esp + 0x78u));
/* 6e06bc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e06bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e06be: mov eax, ebx */
  eax = ebx;
/* 6e06c0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 6e06c1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6e06c8: add esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e06cb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e0790(void) {
  LOAD_REGS();
L_6e0790: /* 6e0790: fld dword ptr [ecx + 0x2d8] */
  { double v = F32((uint32_t)(ecx + 0x2d8u)); FPUSH(v); }
/* 6e0796: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6e079a: fld dword ptr [ecx + 0x2d4] */
  { double v = F32((uint32_t)(ecx + 0x2d4u)); FPUSH(v); }
/* 6e07a0: mov ecx, dword ptr [ecx + 0x2d4] */
  ecx = R32((uint32_t)(ecx + 0x2d4u));
/* 6e07a6: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 6e07a9: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 6e07ab: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 6e07ae: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e07d0(void) {
  LOAD_REGS();
L_6e07d0: /* 6e07d0: mov eax, dword ptr [ecx + 0x80] */
  eax = R32((uint32_t)(ecx + 0x80u));
/* 6e07d6: shr eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 6e07d9: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 6e07dc: ret  */
  esp += 4; SPILL(); return;
}

void f_6e07f0(void) {
  LOAD_REGS();
L_6e07f0: /* 6e07f0: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0810(void) {
  LOAD_REGS();
L_6e0810: /* 6e0810: mov edx, dword ptr [ecx + 0x120] */
  edx = R32((uint32_t)(ecx + 0x120u));
/* 6e0816: xor eax, eax */
  eax = 0;
/* 6e0818: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 6e081a: setg al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* 6e081d: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0830(void) {
  LOAD_REGS();
L_6e0830: /* 6e0830: xor eax, eax */
  eax = 0;
/* 6e0832: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e0850(void) {
  LOAD_REGS();
L_6e0850: /* 6e0850: mov eax, ecx */
  eax = ecx;
/* 6e0852: test byte ptr [eax + 0x86], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x86u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 6e0859: je 0x6e0867 */
  if (zf) goto L_6e0867;
L_6e085b: /* 6e085b: mov ecx, dword ptr [eax + 0x5c] */
  ecx = R32((uint32_t)(eax + 0x5cu));
/* 6e085e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6e0860: je 0x6e0867 */
  if (zf) goto L_6e0867;
L_6e0862: /* 6e0862: jmp 0x6cadd5 */
  SPILL(); f_6cadd5(); return;
L_6e0867: /* 6e0867: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0880(void) {
  LOAD_REGS();
L_6e0880: /* 6e0880: xor eax, eax */
  eax = 0;
/* 6e0882: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e08a0(void) {
  LOAD_REGS();
L_6e08a0: /* 6e08a0: ret  */
  esp += 4; SPILL(); return;
}

void f_6e08c0(void) {
  LOAD_REGS();
L_6e08c0: /* 6e08c0: ret  */
  esp += 4; SPILL(); return;
}

void f_6e08e0(void) {
  LOAD_REGS();
L_6e08e0: /* 6e08e0: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0900(void) {
  LOAD_REGS();
L_6e0900: /* 6e0900: xor eax, eax */
  eax = 0;
/* 6e0902: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0920(void) {
  LOAD_REGS();
L_6e0920: /* 6e0920: xor eax, eax */
  eax = 0;
/* 6e0922: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0940(void) {
  LOAD_REGS();
L_6e0940: /* 6e0940: xor eax, eax */
  eax = 0;
/* 6e0942: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0960(void) {
  LOAD_REGS();
L_6e0960: /* 6e0960: xor eax, eax */
  eax = 0;
/* 6e0962: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0980(void) {
  LOAD_REGS();
L_6e0980: /* 6e0980: xor eax, eax */
  eax = 0;
/* 6e0982: ret  */
  esp += 4; SPILL(); return;
}

void f_6e09a0(void) {
  LOAD_REGS();
L_6e09a0: /* 6e09a0: xor eax, eax */
  eax = 0;
/* 6e09a2: ret  */
  esp += 4; SPILL(); return;
}

void f_6e09c0(void) {
  LOAD_REGS();
L_6e09c0: /* 6e09c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e09c1: mov esi, ecx */
  esi = ecx;
/* 6e09c3: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x6e09c9u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 6e09c9: mov eax, esi */
  eax = esi;
/* 6e09cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e09cc: ret  */
  esp += 4; SPILL(); return;
}

void f_6e09e0(void) {
  LOAD_REGS();
L_6e09e0: /* 6e09e0: mov eax, ecx */
  eax = ecx;
/* 6e09e2: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0a00(void) {
  LOAD_REGS();
L_6e0a00: /* 6e0a00: mov eax, ecx */
  eax = ecx;
/* 6e0a02: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0a20(void) {
  LOAD_REGS();
L_6e0a20: /* 6e0a20: mov eax, ecx */
  eax = ecx;
/* 6e0a22: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0a40(void) {
  LOAD_REGS();
L_6e0a40: /* 6e0a40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e0a41: mov esi, ecx */
  esi = ecx;
/* 6e0a43: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 6e0a46: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x6e0a4cu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 6e0a4c: mov eax, esi */
  eax = esi;
/* 6e0a4e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e0a4f: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0a60(void) {
  LOAD_REGS();
L_6e0a60: /* 6e0a60: mov eax, ecx */
  eax = ecx;
/* 6e0a62: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0a80(void) {
  LOAD_REGS();
L_6e0a80: /* 6e0a80: mov eax, ecx */
  eax = ecx;
/* 6e0a82: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0aa0(void) {
  LOAD_REGS();
L_6e0aa0: /* 6e0aa0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e0aa1: mov esi, ecx */
  esi = ecx;
/* 6e0aa3: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x6e0aa9u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 6e0aa9: mov eax, esi */
  eax = esi;
/* 6e0aab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e0aac: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0ac0(void) {
  LOAD_REGS();
L_6e0ac0: /* 6e0ac0: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_6e0ae0(void) {
  LOAD_REGS();
L_6e0ae0: /* 6e0ae0: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_6e0b00(void) {
  LOAD_REGS();
L_6e0b00: /* 6e0b00: jmp dword ptr [0xcfa1bc] */
  SPILL(); f_4e3a1c(); return; /* Core!??1FMatrix@@QAE@XZ */
}

void f_6e0b20(void) {
  LOAD_REGS();
L_6e0b20: /* 6e0b20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e0b21: mov esi, ecx */
  esi = ecx;
/* 6e0b23: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 6e0b26: call dword ptr [0xcfa2d8] */
  esp -= 4; W32(esp, 0x6e0b2cu); SPILL(); f_4e36de(); if (g_unwind) return; /* Core!??0FQuat@@QAE@XZ */ RELOAD();
/* 6e0b2c: mov eax, esi */
  eax = esi;
/* 6e0b2e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e0b2f: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0b40(void) {
  LOAD_REGS();
L_6e0b40: /* 6e0b40: mov eax, 0xcecf50 */
  eax = 0xcecf50u;
/* 6e0b45: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0b60(void) {
  LOAD_REGS();
L_6e0b60: /* 6e0b60: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e0b65: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e0b67: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e0b6b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e0b6f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e0b71: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e0b73: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e0b74: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e0b78: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e0b7a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e0b7b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e0b7c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e0b7d: push 0xcecf50 */
  { uint32_t v = 0xcecf50u; esp -= 4; W32(esp, v); }
/* 6e0b82: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e0b88u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e0b88: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e0b8b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0ba0(void) {
  LOAD_REGS();
L_6e0ba0: /* 6e0ba0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e0ba4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0bc0(void) {
  LOAD_REGS();
L_6e0bc0: /* 6e0bc0: mov eax, 0xb63188 */
  eax = 0xb63188u;
/* 6e0bc5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0be0(void) {
  LOAD_REGS();
L_6e0be0: /* 6e0be0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e0be5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e0be7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e0beb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e0bef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e0bf1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e0bf3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e0bf4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e0bf8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e0bfa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e0bfb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e0bfc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e0bfd: push 0xb63188 */
  { uint32_t v = 0xb63188u; esp -= 4; W32(esp, v); }
/* 6e0c02: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e0c08u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e0c08: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e0c0b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0c20(void) {
  LOAD_REGS();
L_6e0c20: /* 6e0c20: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e0c24: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0c40(void) {
  LOAD_REGS();
L_6e0c40: /* 6e0c40: mov eax, 0xceca20 */
  eax = 0xceca20u;
/* 6e0c45: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0c60(void) {
  LOAD_REGS();
L_6e0c60: /* 6e0c60: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e0c65: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e0c67: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e0c6b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e0c6f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e0c71: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e0c73: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e0c74: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e0c78: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e0c7a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e0c7b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e0c7c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e0c7d: push 0xceca20 */
  { uint32_t v = 0xceca20u; esp -= 4; W32(esp, v); }
/* 6e0c82: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e0c88u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e0c88: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e0c8b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0ca0(void) {
  LOAD_REGS();
L_6e0ca0: /* 6e0ca0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e0ca4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0cc0(void) {
  LOAD_REGS();
L_6e0cc0: /* 6e0cc0: mov eax, 0xcdf328 */
  eax = 0xcdf328u;
/* 6e0cc5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0ce0(void) {
  LOAD_REGS();
L_6e0ce0: /* 6e0ce0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e0ce5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e0ce7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e0ceb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e0cef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e0cf1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e0cf3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e0cf4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e0cf8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e0cfa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e0cfb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e0cfc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e0cfd: push 0xcdf328 */
  { uint32_t v = 0xcdf328u; esp -= 4; W32(esp, v); }
/* 6e0d02: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e0d08u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e0d08: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e0d0b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0d20(void) {
  LOAD_REGS();
L_6e0d20: /* 6e0d20: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e0d24: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0d40(void) {
  LOAD_REGS();
L_6e0d40: /* 6e0d40: mov eax, 0xb6d258 */
  eax = 0xb6d258u;
/* 6e0d45: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0d60(void) {
  LOAD_REGS();
L_6e0d60: /* 6e0d60: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e0d65: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e0d67: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e0d6b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e0d6f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e0d71: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e0d73: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e0d74: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e0d78: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e0d7a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e0d7b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e0d7c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e0d7d: push 0xb6d258 */
  { uint32_t v = 0xb6d258u; esp -= 4; W32(esp, v); }
/* 6e0d82: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e0d88u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e0d88: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e0d8b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0da0(void) {
  LOAD_REGS();
L_6e0da0: /* 6e0da0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e0da4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0dc0(void) {
  LOAD_REGS();
L_6e0dc0: /* 6e0dc0: mov eax, 0xb61268 */
  eax = 0xb61268u;
/* 6e0dc5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0de0(void) {
  LOAD_REGS();
L_6e0de0: /* 6e0de0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e0de5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e0de7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e0deb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e0def: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e0df1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e0df3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e0df4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e0df8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e0dfa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e0dfb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e0dfc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e0dfd: push 0xb61268 */
  { uint32_t v = 0xb61268u; esp -= 4; W32(esp, v); }
/* 6e0e02: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e0e08u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e0e08: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e0e0b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0e20(void) {
  LOAD_REGS();
L_6e0e20: /* 6e0e20: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e0e24: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0e40(void) {
  LOAD_REGS();
L_6e0e40: /* 6e0e40: mov eax, 0xb5cef8 */
  eax = 0xb5cef8u;
/* 6e0e45: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0e60(void) {
  LOAD_REGS();
L_6e0e60: /* 6e0e60: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e0e65: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e0e67: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e0e6b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e0e6f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e0e71: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e0e73: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e0e74: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e0e78: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e0e7a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e0e7b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e0e7c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e0e7d: push 0xb5cef8 */
  { uint32_t v = 0xb5cef8u; esp -= 4; W32(esp, v); }
/* 6e0e82: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e0e88u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e0e88: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e0e8b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0ea0(void) {
  LOAD_REGS();
L_6e0ea0: /* 6e0ea0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e0ea4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0ec0(void) {
  LOAD_REGS();
L_6e0ec0: /* 6e0ec0: mov eax, 0xb5c9c8 */
  eax = 0xb5c9c8u;
/* 6e0ec5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0ee0(void) {
  LOAD_REGS();
L_6e0ee0: /* 6e0ee0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e0ee5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e0ee7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e0eeb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e0eef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e0ef1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e0ef3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e0ef4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e0ef8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e0efa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e0efb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e0efc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e0efd: push 0xb5c9c8 */
  { uint32_t v = 0xb5c9c8u; esp -= 4; W32(esp, v); }
/* 6e0f02: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e0f08u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e0f08: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e0f0b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0f20(void) {
  LOAD_REGS();
L_6e0f20: /* 6e0f20: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e0f24: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0f40(void) {
  LOAD_REGS();
L_6e0f40: /* 6e0f40: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e0f44: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 6e0f48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e0f49: mov esi, dword ptr [0xcfa2dc] */
  esi = R32((uint32_t)(0xcfa2dcu));
/* 6e0f4f: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 6e0f52: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e0f53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e0f54: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e0f55: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6e0f57u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e0f57: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e0f5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e0f5b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x6e0f5du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e0f5d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e0f60: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e0f61: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0f80(void) {
  LOAD_REGS();
L_6e0f80: /* 6e0f80: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6e0f82: push 0x9c01e9 */
  { uint32_t v = 0x9c01e9u; esp -= 4; W32(esp, v); }
/* 6e0f87: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6e0f8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e0f8e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6e0f95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e0f96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e0f97: mov esi, ecx */
  esi = ecx;
/* 6e0f99: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6e0f9d: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x6e0fa3u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 6e0fa3: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 6e0fa6: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6e0fae: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x6e0fb4u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 6e0fb4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6e0fb8: mov eax, esi */
  eax = esi;
/* 6e0fba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e0fbb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6e0fc2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e0fc5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e0ff0(void) {
  LOAD_REGS();
L_6e0ff0: /* 6e0ff0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6e0ff2: push 0x9c0209 */
  { uint32_t v = 0x9c0209u; esp -= 4; W32(esp, v); }
/* 6e0ff7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6e0ffd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e0ffe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6e1005: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e1006: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e1007: mov esi, ecx */
  esi = ecx;
/* 6e1009: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6e100d: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 6e1010: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6e1018: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x6e101eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 6e101e: mov ecx, esi */
  ecx = esi;
/* 6e1020: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6e1028: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x6e102eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 6e102e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6e1032: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e1033: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6e103a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e103d: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1060(void) {
  LOAD_REGS();
L_6e1060: /* 6e1060: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6e1062: push 0x9c0229 */
  { uint32_t v = 0x9c0229u; esp -= 4; W32(esp, v); }
/* 6e1067: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6e106d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e106e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6e1075: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e1076: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e1077: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e1078: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 6e107c: mov esi, ecx */
  esi = ecx;
/* 6e107e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e107f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 6e1083: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x6e1089u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 6e1089: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 6e108c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e108d: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 6e1090: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 6e1098: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x6e109eu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 6e109e: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 6e10a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e10a3: mov eax, esi */
  eax = esi;
/* 6e10a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e10a6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6e10ad: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e10b0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e10e0(void) {
  LOAD_REGS();
L_6e10e0: /* 6e10e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e10e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e10e2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 6e10e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e10e7: mov esi, ecx */
  esi = ecx;
/* 6e10e9: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x6e10efu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6e10ef: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 6e10f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e10f3: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 6e10f6: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x6e10fcu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 6e10fc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e10fd: mov eax, esi */
  eax = esi;
/* 6e10ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e1100: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e1120(void) {
  LOAD_REGS();
L_6e1120: /* 6e1120: mov eax, 0xb66a98 */
  eax = 0xb66a98u;
/* 6e1125: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1140(void) {
  LOAD_REGS();
L_6e1140: /* 6e1140: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e1145: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e1147: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e114b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e114f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1151: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1153: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e1154: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e1158: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e115a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e115b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e115c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e115d: push 0xb66a98 */
  { uint32_t v = 0xb66a98u; esp -= 4; W32(esp, v); }
/* 6e1162: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e1168u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e1168: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e116b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1180(void) {
  LOAD_REGS();
L_6e1180: /* 6e1180: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e1184: ret  */
  esp += 4; SPILL(); return;
}

void f_6e11a0(void) {
  LOAD_REGS();
L_6e11a0: /* 6e11a0: mov eax, 0xce1088 */
  eax = 0xce1088u;
/* 6e11a5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e11c0(void) {
  LOAD_REGS();
L_6e11c0: /* 6e11c0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e11c5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e11c7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e11cb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e11cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e11d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e11d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e11d4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e11d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e11da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e11db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e11dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e11dd: push 0xce1088 */
  { uint32_t v = 0xce1088u; esp -= 4; W32(esp, v); }
/* 6e11e2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e11e8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e11e8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e11eb: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1200(void) {
  LOAD_REGS();
L_6e1200: /* 6e1200: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e1204: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1220(void) {
  LOAD_REGS();
L_6e1220: /* 6e1220: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e1221: mov esi, ecx */
  esi = ecx;
/* 6e1223: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 6e1226: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x6e122cu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 6e122c: mov eax, esi */
  eax = esi;
/* 6e122e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e122f: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1240(void) {
  LOAD_REGS();
L_6e1240: /* 6e1240: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 6e1243: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_6e1260(void) {
  LOAD_REGS();
L_6e1260: /* 6e1260: mov eax, dword ptr [0xb7e35c] */
  eax = R32((uint32_t)(0xb7e35cu));
/* 6e1265: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e1266: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e1267: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1269: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e126b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e126d: mov esi, ecx */
  esi = ecx;
/* 6e126f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e1271: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e1272: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e1278u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e1278: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e1279: mov ecx, esi */
  ecx = esi;
/* 6e127b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e127eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e127e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e127f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e1280: ret  */
  esp += 4; SPILL(); return;
}

void f_6e12a0(void) {
  LOAD_REGS();
L_6e12a0: /* 6e12a0: mov eax, dword ptr [0xb7e358] */
  eax = R32((uint32_t)(0xb7e358u));
/* 6e12a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e12a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e12a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e12a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e12ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e12ad: mov esi, ecx */
  esi = ecx;
/* 6e12af: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e12b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e12b2: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e12b8u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e12b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e12b9: mov ecx, esi */
  ecx = esi;
/* 6e12bb: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e12beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e12be: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e12bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e12c0: ret  */
  esp += 4; SPILL(); return;
}

void f_6e12e0(void) {
  LOAD_REGS();
L_6e12e0: /* 6e12e0: mov eax, 0xcda028 */
  eax = 0xcda028u;
/* 6e12e5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1300(void) {
  LOAD_REGS();
L_6e1300: /* 6e1300: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e1305: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e1307: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e130b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e130f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1311: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1313: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e1314: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e1318: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e131a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e131b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e131c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e131d: push 0xcda028 */
  { uint32_t v = 0xcda028u; esp -= 4; W32(esp, v); }
/* 6e1322: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e1328u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e1328: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e132b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1340(void) {
  LOAD_REGS();
L_6e1340: /* 6e1340: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e1344: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1360(void) {
  LOAD_REGS();
L_6e1360: /* 6e1360: mov eax, 0xb66fc8 */
  eax = 0xb66fc8u;
/* 6e1365: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1380(void) {
  LOAD_REGS();
L_6e1380: /* 6e1380: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e1385: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e1387: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e138b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e138f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1391: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1393: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e1394: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e1398: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e139a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e139b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e139c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e139d: push 0xb66fc8 */
  { uint32_t v = 0xb66fc8u; esp -= 4; W32(esp, v); }
/* 6e13a2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e13a8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e13a8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e13ab: ret  */
  esp += 4; SPILL(); return;
}

void f_6e13c0(void) {
  LOAD_REGS();
L_6e13c0: /* 6e13c0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e13c4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e13e0(void) {
  LOAD_REGS();
L_6e13e0: /* 6e13e0: mov eax, 0xb70638 */
  eax = 0xb70638u;
/* 6e13e5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1400(void) {
  LOAD_REGS();
L_6e1400: /* 6e1400: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e1405: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e1407: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e140b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e140f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1411: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1413: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e1414: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e1418: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e141a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e141b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e141c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e141d: push 0xb70638 */
  { uint32_t v = 0xb70638u; esp -= 4; W32(esp, v); }
/* 6e1422: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e1428u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e1428: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e142b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1440(void) {
  LOAD_REGS();
L_6e1440: /* 6e1440: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e1444: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1460(void) {
  LOAD_REGS();
L_6e1460: /* 6e1460: mov eax, 0xb67f58 */
  eax = 0xb67f58u;
/* 6e1465: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1480(void) {
  LOAD_REGS();
L_6e1480: /* 6e1480: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e1485: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e1487: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e148b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e148f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1491: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1493: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e1494: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e1498: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e149a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e149b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e149c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e149d: push 0xb67f58 */
  { uint32_t v = 0xb67f58u; esp -= 4; W32(esp, v); }
/* 6e14a2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e14a8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e14a8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e14ab: ret  */
  esp += 4; SPILL(); return;
}

void f_6e14c0(void) {
  LOAD_REGS();
L_6e14c0: /* 6e14c0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e14c4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e14e0(void) {
  LOAD_REGS();
L_6e14e0: /* 6e14e0: mov eax, dword ptr [0xb7e4e8] */
  eax = R32((uint32_t)(0xb7e4e8u));
/* 6e14e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e14e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e14e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e14e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e14eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e14ed: mov esi, ecx */
  esi = ecx;
/* 6e14ef: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e14f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e14f2: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e14f8u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e14f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e14f9: mov ecx, esi */
  ecx = esi;
/* 6e14fb: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e14feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e14fe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e14ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e1500: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1520(void) {
  LOAD_REGS();
L_6e1520: /* 6e1520: mov eax, dword ptr [0xb7e4e4] */
  eax = R32((uint32_t)(0xb7e4e4u));
/* 6e1525: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e1526: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e1527: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1529: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e152b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e152d: mov esi, ecx */
  esi = ecx;
/* 6e152f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e1531: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e1532: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e1538u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e1538: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e1539: mov ecx, esi */
  ecx = esi;
/* 6e153b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e153eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e153e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e153f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e1540: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1560(void) {
  LOAD_REGS();
L_6e1560: /* 6e1560: mov eax, 0xb674f8 */
  eax = 0xb674f8u;
/* 6e1565: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1580(void) {
  LOAD_REGS();
L_6e1580: /* 6e1580: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e1585: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e1587: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e158b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e158f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1591: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1593: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e1594: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e1598: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e159a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e159b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e159c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e159d: push 0xb674f8 */
  { uint32_t v = 0xb674f8u; esp -= 4; W32(esp, v); }
/* 6e15a2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e15a8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e15a8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e15ab: ret  */
  esp += 4; SPILL(); return;
}

void f_6e15c0(void) {
  LOAD_REGS();
L_6e15c0: /* 6e15c0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e15c4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e15e0(void) {
  LOAD_REGS();
L_6e15e0: /* 6e15e0: mov eax, 0xb6f178 */
  eax = 0xb6f178u;
/* 6e15e5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1600(void) {
  LOAD_REGS();
L_6e1600: /* 6e1600: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e1605: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e1607: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e160b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e160f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1611: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1613: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e1614: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e1618: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e161a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e161b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e161c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e161d: push 0xb6f178 */
  { uint32_t v = 0xb6f178u; esp -= 4; W32(esp, v); }
/* 6e1622: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e1628u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e1628: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e162b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1640(void) {
  LOAD_REGS();
L_6e1640: /* 6e1640: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e1644: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1660(void) {
  LOAD_REGS();
L_6e1660: /* 6e1660: mov eax, 0xb6ae08 */
  eax = 0xb6ae08u;
/* 6e1665: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1680(void) {
  LOAD_REGS();
L_6e1680: /* 6e1680: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e1685: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e1687: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e168b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e168f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1691: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1693: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e1694: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e1698: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e169a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e169b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e169c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e169d: push 0xb6ae08 */
  { uint32_t v = 0xb6ae08u; esp -= 4; W32(esp, v); }
/* 6e16a2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e16a8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e16a8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e16ab: ret  */
  esp += 4; SPILL(); return;
}

void f_6e16c0(void) {
  LOAD_REGS();
L_6e16c0: /* 6e16c0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e16c4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e16e0(void) {
  LOAD_REGS();
L_6e16e0: /* 6e16e0: mov eax, 0xb67a28 */
  eax = 0xb67a28u;
/* 6e16e5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1700(void) {
  LOAD_REGS();
L_6e1700: /* 6e1700: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e1705: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e1707: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e170b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e170f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1711: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1713: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e1714: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e1718: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e171a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e171b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e171c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e171d: push 0xb67a28 */
  { uint32_t v = 0xb67a28u; esp -= 4; W32(esp, v); }
/* 6e1722: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e1728u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e1728: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e172b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1740(void) {
  LOAD_REGS();
L_6e1740: /* 6e1740: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e1744: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1760(void) {
  LOAD_REGS();
L_6e1760: /* 6e1760: mov eax, 0xb65b08 */
  eax = 0xb65b08u;
/* 6e1765: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1780(void) {
  LOAD_REGS();
L_6e1780: /* 6e1780: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e1785: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e1787: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e178b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e178f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1791: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1793: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e1794: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e1798: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e179a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e179b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e179c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e179d: push 0xb65b08 */
  { uint32_t v = 0xb65b08u; esp -= 4; W32(esp, v); }
/* 6e17a2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e17a8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e17a8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e17ab: ret  */
  esp += 4; SPILL(); return;
}

void f_6e17c0(void) {
  LOAD_REGS();
L_6e17c0: /* 6e17c0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e17c4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e17e0(void) {
  LOAD_REGS();
L_6e17e0: /* 6e17e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e17e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e17e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e17e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e17e4: mov esi, ecx */
  esi = ecx;
/* 6e17e6: mov ecx, esp */
  ecx = esp;
/* 6e17e8: push 0x142 */
  { uint32_t v = 0x142u; esp -= 4; W32(esp, v); }
/* 6e17ed: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6e17f3u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6e17f3: mov ecx, esi */
  ecx = esi;
/* 6e17f5: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6e17fbu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6e17fb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6e17fd: je 0x6e1827 */
  if (zf) goto L_6e1827;
L_6e17ff: /* 6e17ff: mov edx, dword ptr [0xb7e2d0] */
  edx = R32((uint32_t)(0xb7e2d0u));
/* 6e1805: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 6e1809: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e180b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e180d: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 6e1811: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e1812: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1814: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e1815: mov ecx, esi */
  ecx = esi;
/* 6e1817: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 6e181b: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e1821u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e1821: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e1822: mov ecx, esi */
  ecx = esi;
/* 6e1824: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e1827u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6e1827: /* 6e1827: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e1828: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e1829: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6e182a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e1850(void) {
  LOAD_REGS();
L_6e1850: /* 6e1850: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e1851: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e1852: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e1853: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e1854: mov esi, ecx */
  esi = ecx;
/* 6e1856: mov ecx, esp */
  ecx = esp;
/* 6e1858: push 0x141 */
  { uint32_t v = 0x141u; esp -= 4; W32(esp, v); }
/* 6e185d: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6e1863u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6e1863: mov ecx, esi */
  ecx = esi;
/* 6e1865: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6e186bu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6e186b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6e186d: je 0x6e1897 */
  if (zf) goto L_6e1897;
L_6e186f: /* 6e186f: mov edx, dword ptr [0xb7e2cc] */
  edx = R32((uint32_t)(0xb7e2ccu));
/* 6e1875: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 6e1879: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e187b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e187d: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 6e1881: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e1882: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1884: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e1885: mov ecx, esi */
  ecx = esi;
/* 6e1887: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 6e188b: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e1891u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e1891: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e1892: mov ecx, esi */
  ecx = esi;
/* 6e1894: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e1897u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6e1897: /* 6e1897: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e1898: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e1899: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6e189a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e18c0(void) {
  LOAD_REGS();
L_6e18c0: /* 6e18c0: mov eax, 0xb5ee18 */
  eax = 0xb5ee18u;
/* 6e18c5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e18e0(void) {
  LOAD_REGS();
L_6e18e0: /* 6e18e0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e18e5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e18e7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e18eb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e18ef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e18f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e18f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e18f4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e18f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e18fa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e18fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e18fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e18fd: push 0xb5ee18 */
  { uint32_t v = 0xb5ee18u; esp -= 4; W32(esp, v); }
/* 6e1902: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e1908u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e1908: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e190b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1920(void) {
  LOAD_REGS();
L_6e1920: /* 6e1920: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e1924: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1940(void) {
  LOAD_REGS();
L_6e1940: /* 6e1940: mov eax, dword ptr [0xb7e3a8] */
  eax = R32((uint32_t)(0xb7e3a8u));
/* 6e1945: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e1946: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e1947: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1949: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e194b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e194d: mov esi, ecx */
  esi = ecx;
/* 6e194f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e1951: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e1952: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e1958u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e1958: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e1959: mov ecx, esi */
  ecx = esi;
/* 6e195b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e195eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e195e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e195f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e1960: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1980(void) {
  LOAD_REGS();
L_6e1980: /* 6e1980: mov eax, dword ptr [0xb7e368] */
  eax = R32((uint32_t)(0xb7e368u));
/* 6e1985: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e1986: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e1987: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1989: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e198b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e198d: mov esi, ecx */
  esi = ecx;
/* 6e198f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e1991: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e1992: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e1998u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e1998: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e1999: mov ecx, esi */
  ecx = esi;
/* 6e199b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e199eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e199e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e199f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e19a0: ret  */
  esp += 4; SPILL(); return;
}

void f_6e19c0(void) {
  LOAD_REGS();
L_6e19c0: /* 6e19c0: mov eax, 0xb621f8 */
  eax = 0xb621f8u;
/* 6e19c5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e19e0(void) {
  LOAD_REGS();
L_6e19e0: /* 6e19e0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e19e5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e19e7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e19eb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e19ef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e19f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e19f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e19f4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e19f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e19fa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e19fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e19fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e19fd: push 0xb621f8 */
  { uint32_t v = 0xb621f8u; esp -= 4; W32(esp, v); }
/* 6e1a02: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e1a08u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e1a08: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e1a0b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1a20(void) {
  LOAD_REGS();
L_6e1a20: /* 6e1a20: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e1a24: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1a40(void) {
  LOAD_REGS();
L_6e1a40: /* 6e1a40: mov eax, 0xb5f348 */
  eax = 0xb5f348u;
/* 6e1a45: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1a60(void) {
  LOAD_REGS();
L_6e1a60: /* 6e1a60: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e1a65: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e1a67: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e1a6b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e1a6f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1a71: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1a73: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e1a74: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e1a78: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1a7a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e1a7b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e1a7c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e1a7d: push 0xb5f348 */
  { uint32_t v = 0xb5f348u; esp -= 4; W32(esp, v); }
/* 6e1a82: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e1a88u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e1a88: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e1a8b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1aa0(void) {
  LOAD_REGS();
L_6e1aa0: /* 6e1aa0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e1aa4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1ac0(void) {
  LOAD_REGS();
L_6e1ac0: /* 6e1ac0: mov eax, dword ptr [0xb7e4cc] */
  eax = R32((uint32_t)(0xb7e4ccu));
/* 6e1ac5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e1ac6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e1ac7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1ac9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1acb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1acd: mov esi, ecx */
  esi = ecx;
/* 6e1acf: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e1ad1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e1ad2: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e1ad8u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e1ad8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e1ad9: mov ecx, esi */
  ecx = esi;
/* 6e1adb: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e1adeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e1ade: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e1adf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e1ae0: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1b00(void) {
  LOAD_REGS();
L_6e1b00: /* 6e1b00: mov eax, dword ptr [0xb7e4c8] */
  eax = R32((uint32_t)(0xb7e4c8u));
/* 6e1b05: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e1b06: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e1b07: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1b09: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1b0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1b0d: mov esi, ecx */
  esi = ecx;
/* 6e1b0f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e1b11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e1b12: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e1b18u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e1b18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e1b19: mov ecx, esi */
  ecx = esi;
/* 6e1b1b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e1b1eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e1b1e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e1b1f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e1b20: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1b40(void) {
  LOAD_REGS();
L_6e1b40: /* 6e1b40: mov eax, 0xb5de88 */
  eax = 0xb5de88u;
/* 6e1b45: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1b60(void) {
  LOAD_REGS();
L_6e1b60: /* 6e1b60: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e1b65: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e1b67: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e1b6b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e1b6f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1b71: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1b73: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e1b74: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e1b78: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1b7a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e1b7b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e1b7c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e1b7d: push 0xb5de88 */
  { uint32_t v = 0xb5de88u; esp -= 4; W32(esp, v); }
/* 6e1b82: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e1b88u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e1b88: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e1b8b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1ba0(void) {
  LOAD_REGS();
L_6e1ba0: /* 6e1ba0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e1ba4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1bc0(void) {
  LOAD_REGS();
L_6e1bc0: /* 6e1bc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e1bc1: mov esi, ecx */
  esi = ecx;
/* 6e1bc3: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x6e1bc9u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 6e1bc9: mov eax, esi */
  eax = esi;
/* 6e1bcb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e1bcc: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1be0(void) {
  LOAD_REGS();
L_6e1be0: /* 6e1be0: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_6e1c00(void) {
  LOAD_REGS();
L_6e1c00: /* 6e1c00: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 6e1c03: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 6e1c07: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 6e1c0b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e1c0c: mov esi, ecx */
  esi = ecx;
/* 6e1c0e: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 6e1c12: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e1c13: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e1c15: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 6e1c19: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 6e1c1d: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 6e1c21: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 6e1c25: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1c27: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 6e1c2b: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 6e1c2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e1c30: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 6e1c34: mov ecx, dword ptr [0xb7e3f8] */
  ecx = R32((uint32_t)(0xb7e3f8u));
/* 6e1c3a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1c3c: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 6e1c40: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 6e1c44: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e1c45: mov ecx, esi */
  ecx = esi;
/* 6e1c47: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 6e1c4b: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e1c51u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e1c51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e1c52: mov ecx, esi */
  ecx = esi;
/* 6e1c54: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e1c57u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e1c57: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e1c58: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e1c59: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e1c5c: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_6e1c80(void) {
  LOAD_REGS();
L_6e1c80: /* 6e1c80: mov edx, dword ptr [0xb7e37c] */
  edx = R32((uint32_t)(0xb7e37cu));
/* 6e1c86: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6e1c8a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e1c8b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e1c8c: mov esi, ecx */
  esi = ecx;
/* 6e1c8e: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e1c90: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1c92: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 6e1c96: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e1c97: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1c99: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e1c9a: mov ecx, esi */
  ecx = esi;
/* 6e1c9c: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 6e1ca0: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e1ca6u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e1ca6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e1ca7: mov ecx, esi */
  ecx = esi;
/* 6e1ca9: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e1cacu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e1cac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e1cad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e1cae: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e1cd0(void) {
  LOAD_REGS();
L_6e1cd0: /* 6e1cd0: mov edx, dword ptr [0xb7e3e0] */
  edx = R32((uint32_t)(0xb7e3e0u));
/* 6e1cd6: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6e1cda: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e1cdb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e1cdc: mov esi, ecx */
  esi = ecx;
/* 6e1cde: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e1ce0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1ce2: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 6e1ce6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e1ce7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1ce9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e1cea: mov ecx, esi */
  ecx = esi;
/* 6e1cec: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 6e1cf0: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e1cf6u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e1cf6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e1cf7: mov ecx, esi */
  ecx = esi;
/* 6e1cf9: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e1cfcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e1cfc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e1cfd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e1cfe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e1d20(void) {
  LOAD_REGS();
L_6e1d20: /* 6e1d20: mov eax, dword ptr [0xb7e3c0] */
  eax = R32((uint32_t)(0xb7e3c0u));
/* 6e1d25: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e1d26: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e1d27: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1d29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1d2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1d2d: mov esi, ecx */
  esi = ecx;
/* 6e1d2f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e1d31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e1d32: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e1d38u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e1d38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e1d39: mov ecx, esi */
  ecx = esi;
/* 6e1d3b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e1d3eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e1d3e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e1d3f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e1d40: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1d60(void) {
  LOAD_REGS();
L_6e1d60: /* 6e1d60: mov eax, dword ptr [0xb7e3d8] */
  eax = R32((uint32_t)(0xb7e3d8u));
/* 6e1d65: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e1d66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e1d67: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1d69: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1d6b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1d6d: mov esi, ecx */
  esi = ecx;
/* 6e1d6f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e1d71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e1d72: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e1d78u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e1d78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e1d79: mov ecx, esi */
  ecx = esi;
/* 6e1d7b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e1d7eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e1d7e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e1d7f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e1d80: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1da0(void) {
  LOAD_REGS();
L_6e1da0: /* 6e1da0: mov eax, 0xb5e3b8 */
  eax = 0xb5e3b8u;
/* 6e1da5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1dc0(void) {
  LOAD_REGS();
L_6e1dc0: /* 6e1dc0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e1dc5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e1dc7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e1dcb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e1dcf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1dd1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1dd3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e1dd4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e1dd8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e1dda: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e1ddb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e1ddc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e1ddd: push 0xb5e3b8 */
  { uint32_t v = 0xb5e3b8u; esp -= 4; W32(esp, v); }
/* 6e1de2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e1de8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e1de8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e1deb: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1e00(void) {
  LOAD_REGS();
L_6e1e00: /* 6e1e00: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e1e04: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1e20(void) {
  LOAD_REGS();
L_6e1e20: /* 6e1e20: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6e1e22: push 0x9c024c */
  { uint32_t v = 0x9c024cu; esp -= 4; W32(esp, v); }
/* 6e1e27: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6e1e2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e1e2e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6e1e35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e1e36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e1e37: mov esi, ecx */
  esi = ecx;
/* 6e1e39: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 6e1e3c: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6e1e40: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x6e1e46u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 6e1e46: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 6e1e49: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6e1e51: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x6e1e57u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 6e1e57: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6e1e5b: mov eax, esi */
  eax = esi;
/* 6e1e5d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e1e5e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6e1e65: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e1e68: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1e90(void) {
  LOAD_REGS();
L_6e1e90: /* 6e1e90: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 6e1e93: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_6e1eb0(void) {
  LOAD_REGS();
L_6e1eb0: /* 6e1eb0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6e1eb2: push 0x9c0275 */
  { uint32_t v = 0x9c0275u; esp -= 4; W32(esp, v); }
/* 6e1eb7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6e1ebd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e1ebe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6e1ec5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e1ec6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e1ec7: mov esi, ecx */
  esi = ecx;
/* 6e1ec9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6e1ecd: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x6e1ed3u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 6e1ed3: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 6e1ed6: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6e1ede: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x6e1ee4u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 6e1ee4: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 6e1ee7: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 6e1eec: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x6e1ef2u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 6e1ef2: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6e1ef6: mov eax, esi */
  eax = esi;
/* 6e1ef8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e1ef9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6e1f00: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e1f03: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1f30(void) {
  LOAD_REGS();
L_6e1f30: /* 6e1f30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6e1f32: push 0x9c02a5 */
  { uint32_t v = 0x9c02a5u; esp -= 4; W32(esp, v); }
/* 6e1f37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6e1f3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e1f3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6e1f45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e1f46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e1f47: mov esi, ecx */
  esi = ecx;
/* 6e1f49: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6e1f4d: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 6e1f50: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 6e1f58: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x6e1f5eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 6e1f5e: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 6e1f61: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 6e1f66: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x6e1f6cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 6e1f6c: mov ecx, esi */
  ecx = esi;
/* 6e1f6e: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6e1f76: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x6e1f7cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 6e1f7c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6e1f80: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e1f81: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6e1f88: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e1f8b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e1fb0(void) {
  LOAD_REGS();
L_6e1fb0: /* 6e1fb0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6e1fb2: push 0x9c02e1 */
  { uint32_t v = 0x9c02e1u; esp -= 4; W32(esp, v); }
/* 6e1fb7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6e1fbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e1fbe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6e1fc5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e1fc6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e1fc7: mov esi, ecx */
  esi = ecx;
/* 6e1fc9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6e1fcd: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x6e1fd3u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 6e1fd3: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 6e1fd6: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6e1fde: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x6e1fe4u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 6e1fe4: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 6e1fe7: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 6e1fec: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x6e1ff2u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 6e1ff2: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 6e1ff5: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 6e1ffa: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x6e2000u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 6e2000: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6e2004: mov eax, esi */
  eax = esi;
/* 6e2006: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e2007: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6e200e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e2011: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2040(void) {
  LOAD_REGS();
L_6e2040: /* 6e2040: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6e2042: push 0x9c0321 */
  { uint32_t v = 0x9c0321u; esp -= 4; W32(esp, v); }
/* 6e2047: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6e204d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e204e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6e2055: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e2056: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e2057: mov esi, ecx */
  esi = ecx;
/* 6e2059: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6e205d: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 6e2060: mov dword ptr [esp + 0x10], 2 */
  W32((uint32_t)(esp + 0x10u), 0x2u);
/* 6e2068: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x6e206eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 6e206e: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 6e2071: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 6e2076: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x6e207cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 6e207c: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 6e207f: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 6e2084: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x6e208au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 6e208a: mov ecx, esi */
  ecx = esi;
/* 6e208c: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6e2094: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x6e209au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 6e209a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6e209e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e209f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6e20a6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e20a9: ret  */
  esp += 4; SPILL(); return;
}

void f_6e20d0(void) {
  LOAD_REGS();
L_6e20d0: /* 6e20d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e20d1: mov esi, ecx */
  esi = ecx;
/* 6e20d3: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x6e20d9u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 6e20d9: mov eax, esi */
  eax = esi;
/* 6e20db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e20dc: ret  */
  esp += 4; SPILL(); return;
}

void f_6e20f0(void) {
  LOAD_REGS();
L_6e20f0: /* 6e20f0: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_6e2110(void) {
  LOAD_REGS();
L_6e2110: /* 6e2110: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6e2112: push 0x9c0349 */
  { uint32_t v = 0x9c0349u; esp -= 4; W32(esp, v); }
/* 6e2117: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6e211d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e211e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6e2125: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e2126: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e2127: mov esi, ecx */
  esi = ecx;
/* 6e2129: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6e212d: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x6e2133u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 6e2133: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 6e2136: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6e213e: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x6e2144u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 6e2144: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6e2148: mov eax, esi */
  eax = esi;
/* 6e214a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e214b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6e2152: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e2155: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2180(void) {
  LOAD_REGS();
L_6e2180: /* 6e2180: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6e2182: push 0x9c0369 */
  { uint32_t v = 0x9c0369u; esp -= 4; W32(esp, v); }
/* 6e2187: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6e218d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e218e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6e2195: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e2196: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e2197: mov esi, ecx */
  esi = ecx;
/* 6e2199: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6e219d: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 6e21a0: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6e21a8: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x6e21aeu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 6e21ae: mov ecx, esi */
  ecx = esi;
/* 6e21b0: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 6e21b8: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x6e21beu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 6e21be: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6e21c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e21c3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6e21ca: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e21cd: ret  */
  esp += 4; SPILL(); return;
}

void f_6e21f0(void) {
  LOAD_REGS();
L_6e21f0: /* 6e21f0: mov eax, 0xb08948 */
  eax = 0xb08948u;
/* 6e21f5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2210(void) {
  LOAD_REGS();
L_6e2210: /* 6e2210: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e2215: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e2217: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e221b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e221f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2221: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2223: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e2224: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e2228: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e222a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e222b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e222c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e222d: push 0xb08948 */
  { uint32_t v = 0xb08948u; esp -= 4; W32(esp, v); }
/* 6e2232: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e2238u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e2238: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e223b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2250(void) {
  LOAD_REGS();
L_6e2250: /* 6e2250: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e2254: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2270(void) {
  LOAD_REGS();
L_6e2270: /* 6e2270: mov eax, 0xb08308 */
  eax = 0xb08308u;
/* 6e2275: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2290(void) {
  LOAD_REGS();
L_6e2290: /* 6e2290: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e2295: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e2297: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e229b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e229f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e22a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e22a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e22a4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e22a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e22aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e22ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e22ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e22ad: push 0xb08308 */
  { uint32_t v = 0xb08308u; esp -= 4; W32(esp, v); }
/* 6e22b2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e22b8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e22b8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e22bb: ret  */
  esp += 4; SPILL(); return;
}

void f_6e22d0(void) {
  LOAD_REGS();
L_6e22d0: /* 6e22d0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e22d4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e22f0(void) {
  LOAD_REGS();
L_6e22f0: /* 6e22f0: mov eax, 0xce7998 */
  eax = 0xce7998u;
/* 6e22f5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2310(void) {
  LOAD_REGS();
L_6e2310: /* 6e2310: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e2315: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e2317: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e231b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e231f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2321: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2323: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e2324: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e2328: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e232a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e232b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e232c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e232d: push 0xce7998 */
  { uint32_t v = 0xce7998u; esp -= 4; W32(esp, v); }
/* 6e2332: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e2338u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e2338: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e233b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2350(void) {
  LOAD_REGS();
L_6e2350: /* 6e2350: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e2354: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2370(void) {
  LOAD_REGS();
L_6e2370: /* 6e2370: mov eax, 0xcdbf48 */
  eax = 0xcdbf48u;
/* 6e2375: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2390(void) {
  LOAD_REGS();
L_6e2390: /* 6e2390: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e2395: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e2397: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e239b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e239f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e23a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e23a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e23a4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e23a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e23aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e23ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e23ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e23ad: push 0xcdbf48 */
  { uint32_t v = 0xcdbf48u; esp -= 4; W32(esp, v); }
/* 6e23b2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e23b8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e23b8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e23bb: ret  */
  esp += 4; SPILL(); return;
}

void f_6e23d0(void) {
  LOAD_REGS();
L_6e23d0: /* 6e23d0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e23d4: ret  */
  esp += 4; SPILL(); return;
}

void f_6e23f0(void) {
  LOAD_REGS();
L_6e23f0: /* 6e23f0: mov edx, dword ptr [0xb7e444] */
  edx = R32((uint32_t)(0xb7e444u));
/* 6e23f6: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6e23fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e23fb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e23fc: mov esi, ecx */
  esi = ecx;
/* 6e23fe: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e2400: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2402: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 6e2406: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e2407: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2409: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e240a: mov ecx, esi */
  ecx = esi;
/* 6e240c: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 6e2410: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e2416u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e2416: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e2417: mov ecx, esi */
  ecx = esi;
/* 6e2419: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e241cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e241c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e241d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e241e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e2440(void) {
  LOAD_REGS();
L_6e2440: /* 6e2440: mov eax, dword ptr [0xb7e440] */
  eax = R32((uint32_t)(0xb7e440u));
/* 6e2445: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e2446: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e2447: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2449: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e244b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e244d: mov esi, ecx */
  esi = ecx;
/* 6e244f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e2451: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e2452: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e2458u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e2458: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e2459: mov ecx, esi */
  ecx = esi;
/* 6e245b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e245eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e245e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e245f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e2460: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2480(void) {
  LOAD_REGS();
L_6e2480: /* 6e2480: mov eax, dword ptr [0xb7e43c] */
  eax = R32((uint32_t)(0xb7e43cu));
/* 6e2485: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e2486: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e2487: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2489: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e248b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e248d: mov esi, ecx */
  esi = ecx;
/* 6e248f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e2491: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e2492: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e2498u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e2498: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e2499: mov ecx, esi */
  ecx = esi;
/* 6e249b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e249eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e249e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e249f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e24a0: ret  */
  esp += 4; SPILL(); return;
}

void f_6e24c0(void) {
  LOAD_REGS();
L_6e24c0: /* 6e24c0: mov eax, dword ptr [0xb7e438] */
  eax = R32((uint32_t)(0xb7e438u));
/* 6e24c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e24c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e24c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e24c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e24cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e24cd: mov esi, ecx */
  esi = ecx;
/* 6e24cf: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e24d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e24d2: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e24d8u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e24d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e24d9: mov ecx, esi */
  ecx = esi;
/* 6e24db: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e24deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e24de: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e24df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e24e0: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2500(void) {
  LOAD_REGS();
L_6e2500: /* 6e2500: mov eax, dword ptr [0xb7e454] */
  eax = R32((uint32_t)(0xb7e454u));
/* 6e2505: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e2506: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e2507: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2509: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e250b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e250d: mov esi, ecx */
  esi = ecx;
/* 6e250f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e2511: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e2512: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e2518u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e2518: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e2519: mov ecx, esi */
  ecx = esi;
/* 6e251b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e251eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e251e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e251f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e2520: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2540(void) {
  LOAD_REGS();
L_6e2540: /* 6e2540: mov eax, dword ptr [0xb7e428] */
  eax = R32((uint32_t)(0xb7e428u));
/* 6e2545: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e2546: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e2547: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2549: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e254b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e254d: mov esi, ecx */
  esi = ecx;
/* 6e254f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e2551: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e2552: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e2558u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e2558: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e2559: mov ecx, esi */
  ecx = esi;
/* 6e255b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e255eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e255e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e255f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e2560: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2580(void) {
  LOAD_REGS();
L_6e2580: /* 6e2580: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e2581: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e2582: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e2583: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e2584: mov esi, ecx */
  esi = ecx;
/* 6e2586: mov ecx, esp */
  ecx = esp;
/* 6e2588: push 0x14a */
  { uint32_t v = 0x14au; esp -= 4; W32(esp, v); }
/* 6e258d: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6e2593u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6e2593: mov ecx, esi */
  ecx = esi;
/* 6e2595: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6e259bu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6e259b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6e259d: je 0x6e25c7 */
  if (zf) goto L_6e25c7;
L_6e259f: /* 6e259f: mov edx, dword ptr [0xb7e2e8] */
  edx = R32((uint32_t)(0xb7e2e8u));
/* 6e25a5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 6e25a9: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e25ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e25ad: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 6e25b1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e25b2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e25b4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e25b5: mov ecx, esi */
  ecx = esi;
/* 6e25b7: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 6e25bb: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e25c1u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e25c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e25c2: mov ecx, esi */
  ecx = esi;
/* 6e25c4: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e25c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6e25c7: /* 6e25c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e25c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e25c9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6e25ca: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e25f0(void) {
  LOAD_REGS();
L_6e25f0: /* 6e25f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e25f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e25f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e25f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e25f4: mov esi, ecx */
  esi = ecx;
/* 6e25f6: mov ecx, esp */
  ecx = esp;
/* 6e25f8: push 0x157 */
  { uint32_t v = 0x157u; esp -= 4; W32(esp, v); }
/* 6e25fd: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x6e2603u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 6e2603: mov ecx, esi */
  ecx = esi;
/* 6e2605: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x6e260bu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 6e260b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 6e260d: je 0x6e2637 */
  if (zf) goto L_6e2637;
L_6e260f: /* 6e260f: mov edx, dword ptr [0xb7e314] */
  edx = R32((uint32_t)(0xb7e314u));
/* 6e2615: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 6e2619: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e261b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e261d: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 6e2621: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e2622: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2624: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e2625: mov ecx, esi */
  ecx = esi;
/* 6e2627: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 6e262b: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e2631u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e2631: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e2632: mov ecx, esi */
  ecx = esi;
/* 6e2634: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e2637u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_6e2637: /* 6e2637: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e2638: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e2639: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 6e263a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e2660(void) {
  LOAD_REGS();
L_6e2660: /* 6e2660: mov edx, dword ptr [0xb7e40c] */
  edx = R32((uint32_t)(0xb7e40cu));
/* 6e2666: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6e266a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e266b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e266c: mov esi, ecx */
  esi = ecx;
/* 6e266e: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e2670: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2672: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 6e2676: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e2677: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2679: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e267a: mov ecx, esi */
  ecx = esi;
/* 6e267c: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 6e2680: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e2686u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e2686: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e2687: mov ecx, esi */
  ecx = esi;
/* 6e2689: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e268cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e268c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e268d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e268e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e26b0(void) {
  LOAD_REGS();
L_6e26b0: /* 6e26b0: mov edx, dword ptr [0xb7e3d0] */
  edx = R32((uint32_t)(0xb7e3d0u));
/* 6e26b6: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6e26ba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e26bb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e26bc: mov esi, ecx */
  esi = ecx;
/* 6e26be: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e26c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e26c2: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 6e26c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e26c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e26c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e26ca: mov ecx, esi */
  ecx = esi;
/* 6e26cc: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 6e26d0: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e26d6u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e26d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e26d7: mov ecx, esi */
  ecx = esi;
/* 6e26d9: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e26dcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e26dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e26dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e26de: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e2700(void) {
  LOAD_REGS();
L_6e2700: /* 6e2700: mov edx, dword ptr [0xb7e498] */
  edx = R32((uint32_t)(0xb7e498u));
/* 6e2706: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6e270a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e270b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e270c: mov esi, ecx */
  esi = ecx;
/* 6e270e: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e2710: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2712: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 6e2716: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e2717: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2719: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e271a: mov ecx, esi */
  ecx = esi;
/* 6e271c: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 6e2720: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e2726u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e2726: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e2727: mov ecx, esi */
  ecx = esi;
/* 6e2729: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e272cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e272c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e272d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e272e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e2750(void) {
  LOAD_REGS();
L_6e2750: /* 6e2750: mov edx, dword ptr [0xb7e4ec] */
  edx = R32((uint32_t)(0xb7e4ecu));
/* 6e2756: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6e275a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e275b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e275c: mov esi, ecx */
  esi = ecx;
/* 6e275e: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e2760: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2762: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 6e2766: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e2767: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2769: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e276a: mov ecx, esi */
  ecx = esi;
/* 6e276c: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 6e2770: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e2776u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e2776: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e2777: mov ecx, esi */
  ecx = esi;
/* 6e2779: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e277cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e277c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e277d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e277e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e27a0(void) {
  LOAD_REGS();
L_6e27a0: /* 6e27a0: mov eax, 0xcc74c0 */
  eax = 0xcc74c0u;
/* 6e27a5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e27c0(void) {
  LOAD_REGS();
L_6e27c0: /* 6e27c0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e27c5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e27c7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e27cb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e27cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e27d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e27d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e27d4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e27d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e27da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e27db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e27dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e27dd: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 6e27e2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e27e8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e27e8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e27eb: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2800(void) {
  LOAD_REGS();
L_6e2800: /* 6e2800: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e2804: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2820(void) {
  LOAD_REGS();
L_6e2820: /* 6e2820: mov eax, 1 */
  eax = 0x1u;
/* 6e2825: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2840(void) {
  LOAD_REGS();
L_6e2840: /* 6e2840: mov eax, ecx */
  eax = ecx;
/* 6e2842: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2860(void) {
  LOAD_REGS();
L_6e2860: /* 6e2860: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e2861: mov esi, ecx */
  esi = ecx;
/* 6e2863: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x6e2869u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 6e2869: mov eax, esi */
  eax = esi;
/* 6e286b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e286c: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2880(void) {
  LOAD_REGS();
L_6e2880: /* 6e2880: mov eax, ecx */
  eax = ecx;
/* 6e2882: ret  */
  esp += 4; SPILL(); return;
}

void f_6e28a0(void) {
  LOAD_REGS();
L_6e28a0: /* 6e28a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 6e28a2: push 0x9c0389 */
  { uint32_t v = 0x9c0389u; esp -= 4; W32(esp, v); }
/* 6e28a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 6e28ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e28ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 6e28b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e28b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e28b7: mov esi, ecx */
  esi = ecx;
/* 6e28b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 6e28bd: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x6e28c3u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 6e28c3: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 6e28c6: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 6e28ce: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x6e28d4u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 6e28d4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 6e28d8: mov eax, esi */
  eax = esi;
/* 6e28da: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e28db: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 6e28e2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e28e5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2910(void) {
  LOAD_REGS();
L_6e2910: /* 6e2910: jmp dword ptr [0xcfa2e0] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_6e2930(void) {
  LOAD_REGS();
L_6e2930: /* 6e2930: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e2931: mov esi, ecx */
  esi = ecx;
/* 6e2933: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 6e2936: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x6e293cu); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 6e293c: mov eax, esi */
  eax = esi;
/* 6e293e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e293f: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2950(void) {
  LOAD_REGS();
L_6e2950: /* 6e2950: mov eax, dword ptr [0xb7e534] */
  eax = R32((uint32_t)(0xb7e534u));
/* 6e2955: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e2956: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e2957: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2959: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e295b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e295d: mov esi, ecx */
  esi = ecx;
/* 6e295f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e2961: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e2962: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e2968u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e2968: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e2969: mov ecx, esi */
  ecx = esi;
/* 6e296b: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e296eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e296e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e296f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e2970: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2990(void) {
  LOAD_REGS();
L_6e2990: /* 6e2990: mov edx, dword ptr [0xb7e538] */
  edx = R32((uint32_t)(0xb7e538u));
/* 6e2996: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 6e299a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e299b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e299c: mov esi, ecx */
  esi = ecx;
/* 6e299e: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e29a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e29a2: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 6e29a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e29a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e29a9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e29aa: mov ecx, esi */
  ecx = esi;
/* 6e29ac: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 6e29b0: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e29b6u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e29b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e29b7: mov ecx, esi */
  ecx = esi;
/* 6e29b9: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e29bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e29bc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e29bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e29be: ret 4 */
  esp += 8; SPILL(); return;
}

void f_6e29e0(void) {
  LOAD_REGS();
L_6e29e0: /* 6e29e0: mov eax, dword ptr [0xb7e4e0] */
  eax = R32((uint32_t)(0xb7e4e0u));
/* 6e29e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 6e29e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 6e29e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e29e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e29eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e29ed: mov esi, ecx */
  esi = ecx;
/* 6e29ef: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 6e29f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e29f2: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x6e29f8u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 6e29f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e29f9: mov ecx, esi */
  ecx = esi;
/* 6e29fb: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x6e29feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 6e29fe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 6e29ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 6e2a00: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2a20(void) {
  LOAD_REGS();
L_6e2a20: /* 6e2a20: mov eax, 0xcd93a0 */
  eax = 0xcd93a0u;
/* 6e2a25: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2a40(void) {
  LOAD_REGS();
L_6e2a40: /* 6e2a40: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e2a45: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e2a47: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e2a4b: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e2a4f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2a51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2a53: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e2a54: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e2a58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2a5a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e2a5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e2a5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e2a5d: push 0xcd93a0 */
  { uint32_t v = 0xcd93a0u; esp -= 4; W32(esp, v); }
/* 6e2a62: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e2a68u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e2a68: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e2a6b: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2a80(void) {
  LOAD_REGS();
L_6e2a80: /* 6e2a80: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 6e2a84: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2aa0(void) {
  LOAD_REGS();
L_6e2aa0: /* 6e2aa0: mov eax, 0xb6b338 */
  eax = 0xb6b338u;
/* 6e2aa5: ret  */
  esp += 4; SPILL(); return;
}

void f_6e2ac0(void) {
  LOAD_REGS();
L_6e2ac0: /* 6e2ac0: mov eax, dword ptr [0xcfa1e8] */
  eax = R32((uint32_t)(0xcfa1e8u));
/* 6e2ac5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 6e2ac7: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 6e2acb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 6e2acf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2ad1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2ad3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e2ad4: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 6e2ad8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 6e2ada: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 6e2adb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 6e2adc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 6e2add: push 0xb6b338 */
  { uint32_t v = 0xb6b338u; esp -= 4; W32(esp, v); }
/* 6e2ae2: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x6e2ae8u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 6e2ae8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 6e2aeb: ret  */
  esp += 4; SPILL(); return;
}
