#include "recomp.h"
#include "rec_mod.h"

void f_8d22f3(void) {
  LOAD_REGS();
L_8d22f3: /* 8d22f3: mov eax, dword ptr [ebp - 0x74] */
  eax = R32((uint32_t)(ebp + 0xffffff8cu));
/* 8d22f6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d22fb: lea ecx, [ebp - 0xd4] */
  ecx = (uint32_t)(ebp + 0xffffff2cu);
/* 8d2301: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d2302: mov dword ptr [ebp - 0xd4], eax */
  W32((uint32_t)(ebp + 0xffffff2cu), eax);
/* 8d2308: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d230du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d230d(); return;
}

void f_8d230d(void) {
  LOAD_REGS();
L_8d230d: /* 8d230d: push 0xa1cac8 */
  { uint32_t v = 0xa1cac8u; esp -= 4; W32(esp, v); }
/* 8d2312: push 0xaecc94 */
  { uint32_t v = 0xaecc94u; esp -= 4; W32(esp, v); }
/* 8d2317: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d231du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d231d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d2320: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d2322: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d2324: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d2329u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8d2329: mov edx, dword ptr [0xcfa504] */
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

void f_8d26d9(void) {
  LOAD_REGS();
L_8d26d9: /* 8d26d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
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

void f_8d28c8(void) {
  LOAD_REGS();
L_8d28c8: /* 8d28c8: mov edx, dword ptr [ebp - 0xe4] */
  edx = R32((uint32_t)(ebp + 0xffffff1cu));
/* 8d28ce: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d28d3: lea eax, [ebp - 0xc0] */
  eax = (uint32_t)(ebp + 0xffffff40u);
/* 8d28d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d28da: mov dword ptr [ebp - 0xc0], edx */
  W32((uint32_t)(ebp + 0xffffff40u), edx);
/* 8d28e0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d28e5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d28e5(); return;
}

void f_8d28e5(void) {
  LOAD_REGS();
L_8d28e5: /* 8d28e5: push 0xa1ca94 */
  { uint32_t v = 0xa1ca94u; esp -= 4; W32(esp, v); }
/* 8d28ea: push 0xaecc9c */
  { uint32_t v = 0xaecc9cu; esp -= 4; W32(esp, v); }
/* 8d28ef: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d28f5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d28f5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d28f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d28fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d28fc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d2901u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8d2901: guest_badaddr(0x8d2901); return;
}

void f_8d2f70(void) {
  LOAD_REGS();
L_8d2f70: /* 8d2f70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d2f71: mov ebp, esp */
  ebp = esp;
/* 8d2f73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d2f75: push 0x9d7fcd */
  { uint32_t v = 0x9d7fcdu; esp -= 4; W32(esp, v); }
/* 8d2f7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d2f80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d2f81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d2f88: sub esp, 0x39c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x39cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d2f8e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d2f8f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d2f90: mov ebx, ecx */
  ebx = ecx;
/* 8d2f92: mov eax, dword ptr [ebx + 0x340] */
  eax = R32((uint32_t)(ebx + 0x340u));
/* 8d2f98: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d2f99: xor edi, edi */
  edi = 0;
/* 8d2f9b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d2f9d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d2fa0: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 8d2fa3: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8d2fa6: je 0x8d3b43 */
  if (zf) goto L_8d3b43;
L_8d2fac: /* 8d2fac: cmp dword ptr [ebx + 0x1254], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x1254u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d2fb2: je 0x8d3b43 */
  if (zf) goto L_8d3b43;
L_8d2fb8: /* 8d2fb8: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 8d2fbd: cmp dword ptr [eax], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d2fbf: je 0x8d2fd1 */
  if (zf) goto L_8d2fd1;
L_8d2fc1: /* 8d2fc1: test dword ptr [ebx + 0x88], 0x18000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x88u))); uint32_t b = (uint32_t)(0x18000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d2fcb: jne 0x8d3b43 */
  if (!zf) goto L_8d3b43;
L_8d2fd1: /* 8d2fd1: mov ecx, ebx */
  ecx = ebx;
/* 8d2fd3: call 0x6c3e5e */
  esp -= 4; W32(esp, 0x8d2fd8u); SPILL(); f_6c3e5e(); if (g_unwind) return; RELOAD();
/* 8d2fd8: mov dword ptr [ebp - 0x38], edi */
  W32((uint32_t)(ebp + 0xffffffc8u), edi);
/* 8d2fdb: mov dword ptr [ebp - 0x3c], edi */
  W32((uint32_t)(ebp + 0xffffffc4u), edi);
/* 8d2fde: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
L_8d2fe5: /* 8d2fe5: cmp edi, dword ptr [ebx + 0x1254] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x1254u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d2feb: jge 0x8d305b */
  if ((sf == of)) goto L_8d305b;
L_8d2fed: /* 8d2fed: mov ecx, dword ptr [ebx + 0x1250] */
  ecx = R32((uint32_t)(ebx + 0x1250u));
/* 8d2ff3: mov esi, edi */
  esi = edi;
/* 8d2ff5: imul esi, esi, 0x5c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x5cu);
  esi = (uint32_t)r;
  }
/* 8d2ff8: lea eax, [ecx + esi + 0x10] */
  eax = (uint32_t)(ecx + esi + 0x10u);
/* 8d2ffc: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8d2ffe: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d3000: je 0x8d3058 */
  if (zf) goto L_8d3058;
L_8d3002: /* 8d3002: lea edx, [ebp - 0x5c] */
  edx = (uint32_t)(ebp + 0xffffffa4u);
/* 8d3005: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d3006: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d3009: call dword ptr [0xcfa348] */
  esp -= 4; W32(esp, 0x8d300fu); SPILL(); f_4e1703(); if (g_unwind) return; /* Core!?GetExtent@FBox@@QBE?AVFVector@@XZ */ RELOAD();
/* 8d300f: mov eax, dword ptr [ebx + 0x1250] */
  eax = R32((uint32_t)(ebx + 0x1250u));
/* 8d3015: lea ecx, [ebp - 0x148] */
  ecx = (uint32_t)(ebp + 0xfffffeb8u);
/* 8d301b: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d301d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d301e: lea ecx, [eax + 0x14] */
  ecx = (uint32_t)(eax + 0x14u);
/* 8d3021: call dword ptr [0xcfac5c] */
  esp -= 4; W32(esp, 0x8d3027u); SPILL(); f_4e2595(); if (g_unwind) return; /* Core!?GetMax@FRangeVector@@QBE?AVFVector@@XZ */ RELOAD();
/* 8d3027: mov ecx, eax */
  ecx = eax;
/* 8d3029: call dword ptr [0xcfaad8] */
  esp -= 4; W32(esp, 0x8d302fu); SPILL(); f_4e231f(); if (g_unwind) return; /* Core!?GetMax@FVector@@QBEMXZ */ RELOAD();
/* 8d302f: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8d3032: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 8d3035: call dword ptr [0xcfaad8] */
  esp -= 4; W32(esp, 0x8d303bu); SPILL(); f_4e231f(); if (g_unwind) return; /* Core!?GetMax@FVector@@QBEMXZ */ RELOAD();
/* 8d303b: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8d303e: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8d3041: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 8d3044: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8d3047: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8d3049: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d304b: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d304e: je 0x8d3056 */
  if (zf) goto L_8d3056;
L_8d3050: /* 8d3050: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8d3053: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8d3054: jmp 0x8d2fe5 */
  goto L_8d2fe5;
L_8d3056: /* 8d3056: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8d3058: /* 8d3058: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8d3059: jmp 0x8d2fe5 */
  goto L_8d2fe5;
L_8d305b: /* 8d305b: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 8d3061: mov eax, dword ptr [ebx + 0x1278] */
  eax = R32((uint32_t)(ebx + 0x1278u));
/* 8d3067: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8d3069: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d306b: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8d306e: push 0xac38c4 */
  { uint32_t v = 0xac38c4u; esp -= 4; W32(esp, v); }
/* 8d3073: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8d3076: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d3077: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8d3079u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d3079: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8d307c: mov eax, dword ptr [ebx + 0x1278] */
  eax = R32((uint32_t)(ebx + 0x1278u));
/* 8d3082: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
L_8d3085: /* 8d3085: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8d3087: jl 0x8d30f3 */
  if ((sf != of)) goto L_8d30f3;
L_8d3089: /* 8d3089: mov ecx, dword ptr [ebx + 0x1268] */
  ecx = R32((uint32_t)(ebx + 0x1268u));
/* 8d308f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d3091: mov edx, esi */
  edx = esi;
/* 8d3093: imul edx, edx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1cu);
  edx = (uint32_t)r;
  }
/* 8d3096: fld dword ptr [eax + edx + 0xc] */
  { double v = F32((uint32_t)(eax + edx + 0xcu)); FPUSH(v); }
/* 8d309a: fsub dword ptr [edi + 0x194] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x194u)));
/* 8d30a0: fld dword ptr [eax + edx + 0x10] */
  { double v = F32((uint32_t)(eax + edx + 0x10u)); FPUSH(v); }
/* 8d30a4: fsub dword ptr [edi + 0x198] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x198u)));
/* 8d30aa: fld dword ptr [eax + edx + 0x14] */
  { double v = F32((uint32_t)(eax + edx + 0x14u)); FPUSH(v); }
/* 8d30ae: fsub dword ptr [edi + 0x19c] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x19cu)));
/* 8d30b4: lea eax, [eax + edx + 0xc] */
  eax = (uint32_t)(eax + edx + 0xcu);
/* 8d30b8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8d30ba: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d30bd: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8d30bf: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8d30c1: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8d30c3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8d30c5: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 8d30c7: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 8d30c9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8d30cb: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8d30ce: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d30d0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d30d2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d30d4: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x8d30dau); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 8d30da: fst qword ptr [ebp - 0x44] */
  WF64((uint32_t)(ebp + 0xffffffbcu), ST0);
/* 8d30dd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d30e0: call 0x99c958 */
  esp -= 4; W32(esp, 0x8d30e5u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8d30e5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d30e8: shl eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8d30eb: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d30ed: mov dword ptr [ecx + esi*4], eax */
  W32((uint32_t)(ecx + esi*4), eax);
/* 8d30f0: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 8d30f1: jmp 0x8d3085 */
  goto L_8d3085;
L_8d30f3: /* 8d30f3: mov edx, dword ptr [ebx + 0x1250] */
  edx = R32((uint32_t)(ebx + 0x1250u));
/* 8d30f9: mov al, byte ptr [edx + 0x48] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x48u))) & 0xffu);
/* 8d30fc: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d30fe: je 0x8d3124 */
  if (zf) goto L_8d3124;
L_8d3100: /* 8d3100: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d3103: xor ecx, ecx */
  ecx = 0;
/* 8d3105: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8d3107: mov eax, dword ptr [ebx + 0x1278] */
  eax = R32((uint32_t)(ebx + 0x1278u));
/* 8d310d: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 8d3110: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d3111: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d3112: lea ecx, [ecx + ecx - 1] */
  ecx = (uint32_t)(ecx + ecx + 0xffffffffu);
/* 8d3116: mov dword ptr [0xaec860], ecx */
  W32((uint32_t)(0xaec860u), ecx);
/* 8d311c: call 0x6c4e8f */
  esp -= 4; W32(esp, 0x8d3121u); SPILL(); f_6c4e8f(); if (g_unwind) return; RELOAD();
/* 8d3121: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8d3124: /* 8d3124: mov eax, dword ptr [ebx + 0x1278] */
  eax = R32((uint32_t)(ebx + 0x1278u));
/* 8d312a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d312d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8d312e: xor edx, edx */
  edx = 0;
L_8d3130: /* 8d3130: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d3132: jl 0x8d313c */
  if ((sf != of)) goto L_8d313c;
L_8d3134: /* 8d3134: mov word ptr [ecx + eax*4 + 2], dx */
  W16((uint32_t)(ecx + eax*4 + 0x2u), (edx & 0xffffu));
/* 8d3139: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8d313a: jmp 0x8d3130 */
  goto L_8d3130;
L_8d313c: /* 8d313c: mov eax, dword ptr [ebx + 0x1278] */
  eax = R32((uint32_t)(ebx + 0x1278u));
L_8d3142: /* 8d3142: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8d3143: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8d3146: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8d3148: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d314b: jl 0x8d3b0e */
  if ((sf != of)) goto L_8d3b0e;
L_8d3151: /* 8d3151: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8d3154: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 8d3157: mov eax, dword ptr [ebx + 0x1274] */
  eax = R32((uint32_t)(ebx + 0x1274u));
/* 8d315d: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 8d3160: lea esi, [eax + 0x44] */
  esi = (uint32_t)(eax + 0x44u);
/* 8d3163: mov ecx, 7 */
  ecx = 0x7u;
/* 8d3168: lea edi, [ebp - 0x164] */
  edi = (uint32_t)(ebp + 0xfffffe9cu);
/* 8d316e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8d3170: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8d3173: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d3174: lea edx, [ebp - 0x1e8] */
  edx = (uint32_t)(ebp + 0xfffffe18u);
/* 8d317a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d317b: lea ecx, [ebp - 0x164] */
  ecx = (uint32_t)(ebp + 0xfffffe9cu);
/* 8d3181: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 8d3184: call dword ptr [0xcfa60c] */
  esp -= 4; W32(esp, 0x8d318au); SPILL(); f_4e3332(); if (g_unwind) return; /* Core!?ExpandBy@FBox@@QBE?AV1@M@Z */ RELOAD();
/* 8d318a: mov esi, eax */
  esi = eax;
/* 8d318c: mov ecx, 7 */
  ecx = 0x7u;
/* 8d3191: lea edi, [ebp - 0x164] */
  edi = (uint32_t)(ebp + 0xfffffe9cu);
/* 8d3197: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8d3199: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8d319c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d319e: lea edx, [ebp - 0x164] */
  edx = (uint32_t)(ebp + 0xfffffe9cu);
/* 8d31a4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d31a5: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x8d31a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d31a8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d31aa: je 0x8d3b06 */
  if (zf) goto L_8d3b06;
L_8d31b0: /* 8d31b0: xor esi, esi */
  esi = 0;
/* 8d31b2: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 8d31b5: jmp 0x8d31c0 */
  goto L_8d31c0;
L_8d31c0: /* 8d31c0: cmp esi, dword ptr [ebx + 0x1254] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x1254u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d31c6: jge 0x8d3b06 */
  if ((sf == of)) goto L_8d3b06;
L_8d31cc: /* 8d31cc: mov ecx, dword ptr [ebx + 0x1250] */
  ecx = R32((uint32_t)(ebx + 0x1250u));
/* 8d31d2: imul esi, esi, 0x5c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x5cu);
  esi = (uint32_t)r;
  }
/* 8d31d5: mov eax, dword ptr [esi + ecx + 0x10] */
  eax = R32((uint32_t)(esi + ecx + 0x10u));
/* 8d31d9: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8d31db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d31dd: mov dword ptr [ebp - 0xa4], esi */
  W32((uint32_t)(ebp + 0xffffff5cu), esi);
/* 8d31e3: je 0x8d3af5 */
  if (zf) goto L_8d3af5;
L_8d31e9: /* 8d31e9: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 8d31ec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d31ee: je 0x8d3af5 */
  if (zf) goto L_8d3af5;
L_8d31f4: /* 8d31f4: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d31f7: je 0x8d3af5 */
  if (zf) goto L_8d3af5;
L_8d31fd: /* 8d31fd: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d3200: mov edx, dword ptr [ecx + 0x1268] */
  edx = R32((uint32_t)(ecx + 0x1268u));
/* 8d3206: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d3209: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8d320c: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 8d320f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d3212: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 8d3215: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8d3218: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 8d321b: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d321d: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8d3220: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d3222: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 8d3225: je 0x8d3af5 */
  if (zf) goto L_8d3af5;
L_8d322b: /* 8d322b: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 8d322e: lea eax, [ecx + 0xc] */
  eax = (uint32_t)(ecx + 0xcu);
/* 8d3231: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 8d3233: mov dword ptr [ebp - 0xa0], edi */
  W32((uint32_t)(ebp + 0xffffff60u), edi);
/* 8d3239: fld dword ptr [ebp - 0xa0] */
  { double v = F32((uint32_t)(ebp + 0xffffff60u)); FPUSH(v); }
/* 8d323f: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 8d3242: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8d3245: mov dword ptr [ebp - 0x98], eax */
  W32((uint32_t)(ebp + 0xffffff68u), eax);
/* 8d324b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8d324e: fsub dword ptr [eax + 0x194] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x194u)));
/* 8d3254: mov dword ptr [ebp - 0x9c], edi */
  W32((uint32_t)(ebp + 0xffffff64u), edi);
/* 8d325a: fld dword ptr [ebp - 0x9c] */
  { double v = F32((uint32_t)(ebp + 0xffffff64u)); FPUSH(v); }
/* 8d3260: fsub dword ptr [eax + 0x198] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x198u)));
/* 8d3266: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 8d326c: fsub dword ptr [eax + 0x19c] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x19cu)));
/* 8d3272: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8d3274: fadd dword ptr [esi + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x30u)));
/* 8d3277: fadd dword ptr [ebp - 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffccu)));
/* 8d327a: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 8d327c: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 8d327e: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8d3280: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8d3282: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8d3284: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 8d3286: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 8d3288: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8d328a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8d328c: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8d328e: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8d3290: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d3292: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 8d3294: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d3296: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 8d3298: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8d329b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d329d: jnp 0x8d3af5 */
  if (!pf) goto L_8d3af5;
L_8d32a3: /* 8d32a3: fld dword ptr [esi + 0x30] */
  { double v = F32((uint32_t)(esi + 0x30u)); FPUSH(v); }
/* 8d32a6: mov dword ptr [ebp - 0x4c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x3f800000u);
/* 8d32ad: fsub dword ptr [esi + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x2cu)));
/* 8d32b0: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8d32b6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d32b8: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8d32bb: jnp 0x8d32c8 */
  if (!pf) goto L_8d32c8;
L_8d32bd: /* 8d32bd: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8d32c3: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 8d32c5: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
L_8d32c8: /* 8d32c8: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 8d32ca: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d32cc: xor ebx, ebx */
  ebx = 0;
/* 8d32ce: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 8d32d1: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
L_8d32d4: /* 8d32d4: cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d32d7: jge 0x8d339e */
  if ((sf == of)) goto L_8d339e;
L_8d32dd: /* 8d32dd: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8d32e0: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8d32e2: fsub dword ptr [eax + 0x194] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x194u)));
/* 8d32e8: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d32eb: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 8d32ee: fsub dword ptr [eax + 0x198] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x198u)));
/* 8d32f4: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 8d32f7: fsub dword ptr [eax + 0x19c] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x19cu)));
/* 8d32fd: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8d32ff: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8d3301: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8d3303: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8d3305: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8d3307: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 8d3309: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 8d330b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8d330d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8d3310: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d3312: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d3314: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d3316: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x8d331cu); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 8d331c: fst qword ptr [ebp - 0x44] */
  WF64((uint32_t)(ebp + 0xffffffbcu), ST0);
/* 8d331f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d3322: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 8d3325: fst dword ptr [edi + 0x28] */
  WF32((uint32_t)(edi + 0x28u), ST0);
/* 8d3328: fcomp dword ptr [esi + 0x30] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x30u)));
  FPOP();
/* 8d332b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d332d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d3330: jne 0x8d3348 */
  if (!zf) goto L_8d3348;
L_8d3332: /* 8d3332: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d3335: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8d3338: mov dword ptr [edi + 0x24], 0xbf800000 */
  W32((uint32_t)(edi + 0x24u), 0xbf800000u);
/* 8d333f: add edi, 0x38 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8d3342: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d3343: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8d3346: jmp 0x8d32d4 */
  goto L_8d32d4;
L_8d3348: /* 8d3348: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8d334e: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8d3351: fcomp dword ptr [esi + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x2cu)));
  FPOP();
/* 8d3354: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d3356: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d3359: jne 0x8d336c */
  if (!zf) goto L_8d336c;
L_8d335b: /* 8d335b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d335d: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8d3360: fsub dword ptr [esi + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x2cu)));
/* 8d3363: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 8d3366: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
L_8d336c: /* 8d336c: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8d336f: call 0x99c958 */
  esp -= 4; W32(esp, 0x8d3374u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8d3374: fstp dword ptr [edi + 0x24] */
  WF32((uint32_t)(edi + 0x24u), ST0); FPOP();
/* 8d3377: mov ecx, dword ptr [edi + 0x34] */
  ecx = R32((uint32_t)(edi + 0x34u));
/* 8d337a: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8d337d: shl eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8d3380: and ecx, 0xffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8d3386: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 8d3388: mov dword ptr [edi + 0x34], eax */
  W32((uint32_t)(edi + 0x34u), eax);
/* 8d338b: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d338e: add edi, 0x38 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8d3391: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8d3392: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d3393: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 8d3396: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8d3399: jmp 0x8d32d4 */
  goto L_8d32d4;
L_8d339e: /* 8d339e: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8d33a1: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d33a3: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d33a5: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
/* 8d33a8: je 0x8d3af5 */
  if (zf) goto L_8d3af5;
L_8d33ae: /* 8d33ae: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d33b1: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d33b4: imul edx, edx, 0x5c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x5cu);
  edx = (uint32_t)r;
  }
/* 8d33b7: mov ecx, dword ptr [eax + 0x1250] */
  ecx = R32((uint32_t)(eax + 0x1250u));
/* 8d33bd: mov eax, dword ptr [ecx + edx + 0x50] */
  eax = R32((uint32_t)(ecx + edx + 0x50u));
/* 8d33c1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d33c3: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8d33c6: je 0x8d347f */
  if (zf) goto L_8d347f;
L_8d33cc: /* 8d33cc: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8d33cf: xor ebx, ebx */
  ebx = 0;
/* 8d33d1: xor edi, edi */
  edi = 0;
L_8d33d3: /* 8d33d3: cmp edi, dword ptr [ecx + 0x38] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d33d6: jge 0x8d3466 */
  if ((sf == of)) goto L_8d3466;
L_8d33dc: /* 8d33dc: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 8d33df: mov edx, edi */
  edx = edi;
/* 8d33e1: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8d33e4: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d33e6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8d33e8: cmp byte ptr [edx + 0x29], 0x13 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x29u))); uint8_t b = (uint8_t)(0x13u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8d33ec: jne 0x8d3460 */
  if (!zf) goto L_8d3460;
L_8d33ee: /* 8d33ee: mov eax, edx */
  eax = edx;
/* 8d33f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d33f1: lea ecx, [ebp - 0x1cc] */
  ecx = (uint32_t)(ebp + 0xfffffe34u);
/* 8d33f7: call 0x6c51f5 */
  esp -= 4; W32(esp, 0x8d33fcu); SPILL(); f_6c51f5(); if (g_unwind) return; RELOAD();
/* 8d33fc: mov dword ptr [ebp - 0x80], 0x3f126e98 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x3f126e98u);
/* 8d3403: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 8d3406: mov dword ptr [ebp - 0x88], 0x3f126e98 */
  W32((uint32_t)(ebp + 0xffffff78u), 0x3f126e98u);
/* 8d3410: mov ecx, dword ptr [ebp - 0x88] */
  ecx = R32((uint32_t)(ebp + 0xffffff78u));
/* 8d3416: mov dword ptr [ebp - 0x1c4], ecx */
  W32((uint32_t)(ebp + 0xfffffe3cu), ecx);
/* 8d341c: mov dword ptr [ebp - 0x1bc], eax */
  W32((uint32_t)(ebp + 0xfffffe44u), eax);
/* 8d3422: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 8d3427: lea eax, [ebp - 0x1cc] */
  eax = (uint32_t)(ebp + 0xfffffe34u);
/* 8d342d: mov dword ptr [ebp - 0x84], 0x3f126e98 */
  W32((uint32_t)(ebp + 0xffffff7cu), 0x3f126e98u);
/* 8d3437: mov edx, dword ptr [ebp - 0x84] */
  edx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 8d343d: mov dword ptr [ebp - 0x7c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x3f800000u);
/* 8d3444: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* 8d3447: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d3448: mov dword ptr [ebp - 0x1c0], edx */
  W32((uint32_t)(ebp + 0xfffffe40u), edx);
/* 8d344e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8d3450: mov dword ptr [ebp - 0x1b8], ecx */
  W32((uint32_t)(ebp + 0xfffffe48u), ecx);
/* 8d3456: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d3457: mov ecx, esi */
  ecx = esi;
/* 8d3459: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x8d345cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d345c: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8d345f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_8d3460: /* 8d3460: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8d3461: jmp 0x8d33d3 */
  goto L_8d33d3;
L_8d3466: /* 8d3466: mov edi, ebx */
  edi = ebx;
L_8d3468: /* 8d3468: cmp edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d346b: jge 0x8d347f */
  if ((sf == of)) goto L_8d347f;
L_8d346d: /* 8d346d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8d346f: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 8d3474: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d3476: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d3477: mov ecx, esi */
  ecx = esi;
/* 8d3479: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x8d347cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d347c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8d347d: jmp 0x8d3468 */
  goto L_8d3468;
L_8d347f: /* 8d347f: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d3482: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d3485: imul edi, edi, 0x5c */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x5cu);
  edi = (uint32_t)r;
  }
/* 8d3488: mov ecx, dword ptr [eax + 0x1250] */
  ecx = R32((uint32_t)(eax + 0x1250u));
/* 8d348e: mov eax, dword ptr [ecx + edi + 0x50] */
  eax = R32((uint32_t)(ecx + edi + 0x50u));
/* 8d3492: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d3494: je 0x8d34ac */
  if (zf) goto L_8d34ac;
L_8d3496: /* 8d3496: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8d3499: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8d349c: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x8d34a1u); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 8d34a1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d34a3: jne 0x8d34ac */
  if (!zf) goto L_8d34ac;
L_8d34a5: /* 8d34a5: mov ebx, 1 */
  ebx = 0x1u;
/* 8d34aa: jmp 0x8d34ae */
  goto L_8d34ae;
L_8d34ac: /* 8d34ac: xor ebx, ebx */
  ebx = 0;
L_8d34ae: /* 8d34ae: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d34b1: mov ecx, esp */
  ecx = esp;
/* 8d34b3: mov dword ptr [ebp - 0x40], esp */
  W32((uint32_t)(ebp + 0xffffffc0u), esp);
/* 8d34b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d34b8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d34bb: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 8d34c2: mov edx, dword ptr [ebp - 0x6c] */
  edx = R32((uint32_t)(ebp + 0xffffff94u));
/* 8d34c5: mov eax, esp */
  eax = esp;
/* 8d34c7: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8d34c9: mov dword ptr [ebp - 0x68], 0 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x0u);
/* 8d34d0: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 8d34d3: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8d34d6: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 8d34dd: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8d34e0: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8d34e3: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x8d34e9u); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 8d34e9: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8d34ec: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8d34ef: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 8d34f2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8d34f4: xor edx, edx */
  edx = 0;
/* 8d34f6: cmp dword ptr [ecx + 0x540], 7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x540u))); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d34fd: mov ecx, esi */
  ecx = esi;
/* 8d34ff: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 8d3502: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d3503: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d3505: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d3507: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d3509: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d350a: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x8d350du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d350d: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d3510: mov ecx, dword ptr [eax + 0x1250] */
  ecx = R32((uint32_t)(eax + 0x1250u));
/* 8d3516: mov ebx, dword ptr [ecx + edi + 0x10] */
  ebx = R32((uint32_t)(ecx + edi + 0x10u));
/* 8d351a: lea edx, [ebx + 0x60] */
  edx = (uint32_t)(ebx + 0x60u);
/* 8d351d: xor eax, eax */
  eax = 0;
/* 8d351f: mov dword ptr [ebp - 0x188], edx */
  W32((uint32_t)(ebp + 0xfffffe78u), edx);
/* 8d3525: mov ecx, 8 */
  ecx = 0x8u;
/* 8d352a: lea edi, [ebp - 0x184] */
  edi = (uint32_t)(ebp + 0xfffffe7cu);
/* 8d3530: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 8d3532: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d3533: mov ecx, ebx */
  ecx = ebx;
/* 8d3535: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 8d3538: mov esi, 1 */
  esi = 0x1u;
/* 8d353d: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8d3543u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8d3543: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d3544: lea ecx, [ebp - 0x148] */
  ecx = (uint32_t)(ebp + 0xfffffeb8u);
/* 8d354a: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8d3550u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8d3550: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8d3554: xor eax, eax */
  eax = 0;
L_8d3556: /* 8d3556: cmp eax, dword ptr [ebx + 0xb8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xb8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d355c: jge 0x8d3576 */
  if ((sf == of)) goto L_8d3576;
L_8d355e: /* 8d355e: mov edi, dword ptr [ebx + 0xb4] */
  edi = R32((uint32_t)(ebx + 0xb4u));
/* 8d3564: mov ecx, eax */
  ecx = eax;
/* 8d3566: shl ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8d3569: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d356b: mov dword ptr [ebp + esi*4 - 0x188], ecx */
  W32((uint32_t)(ebp + esi*4 + 0xfffffe78u), ecx);
/* 8d3572: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8d3573: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d3574: jmp 0x8d3556 */
  goto L_8d3556;
L_8d3576: /* 8d3576: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8d3579: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8d357b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d357c: lea eax, [ebp - 0x188] */
  eax = (uint32_t)(ebp + 0xfffffe78u);
/* 8d3582: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d3583: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d3585: mov ecx, edi */
  ecx = edi;
/* 8d3587: call dword ptr [edx + 0x4c] */
  { uint32_t t = R32((uint32_t)(edx + 0x4cu)); esp -= 4; W32(esp, 0x8d358au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d358a: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8d358c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d358e: lea eax, [ebx + 0xc0] */
  eax = (uint32_t)(ebx + 0xc0u);
/* 8d3594: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d3595: mov ecx, edi */
  ecx = edi;
/* 8d3597: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0x8d359au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d359a: xor eax, eax */
  eax = 0;
L_8d359c: /* 8d359c: cmp eax, dword ptr [ebx + 0x58] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d359f: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8d35a2: jge 0x8d3ae5 */
  if ((sf == of)) goto L_8d3ae5;
L_8d35a8: /* 8d35a8: mov edx, dword ptr [ebx + 0x54] */
  edx = R32((uint32_t)(ebx + 0x54u));
/* 8d35ab: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 8d35ae: lea esi, [edx + ecx*4] */
  esi = (uint32_t)(edx + ecx*4);
/* 8d35b1: mov ecx, 5 */
  ecx = 0x5u;
/* 8d35b6: lea edi, [ebp - 0xb8] */
  edi = (uint32_t)(ebp + 0xffffff48u);
/* 8d35bc: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8d35be: mov ecx, dword ptr [ebx + 0xf8] */
  ecx = R32((uint32_t)(ebx + 0xf8u));
/* 8d35c4: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8d35c7: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 8d35ca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d35cc: jne 0x8d35fa */
  if (!zf) goto L_8d35fa;
L_8d35ce: /* 8d35ce: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8d35d1: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8d35d4: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 8d35d7: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 8d35dd: mov esi, dword ptr [eax + 0x13c] */
  esi = R32((uint32_t)(eax + 0x13cu));
/* 8d35e3: mov ecx, dword ptr [edx + 0x4a8] */
  ecx = R32((uint32_t)(edx + 0x4a8u));
/* 8d35e9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d35eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d35ec: mov eax, dword ptr [eax + 0x138] */
  eax = R32((uint32_t)(eax + 0x138u));
/* 8d35f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d35f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d35f4: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x8d35fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8d35fa: /* 8d35fa: cmp word ptr [ebp - 0xa8], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xffffff58u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 8d3602: mov esi, eax */
  esi = eax;
/* 8d3604: je 0x8d3ad9 */
  if (zf) goto L_8d3ad9;
L_8d360a: /* 8d360a: mov eax, dword ptr [0xce85ac] */
  eax = R32((uint32_t)(0xce85acu));
/* 8d360f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d3611: jne 0x8d368b */
  if (!zf) goto L_8d368b;
L_8d3617: /* 8d3617: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d3619: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 8d361c: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8d3622u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8d3622: push 0xb87af0 */
  { uint32_t v = 0xb87af0u; esp -= 4; W32(esp, v); }
/* 8d3627: mov ecx, 0xb87af0 */
  ecx = 0xb87af0u;
/* 8d362c: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x8d3632u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 8d3632: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d3634: jne 0x8d364e */
  if (!zf) goto L_8d364e;
L_8d3636: /* 8d3636: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 8d363b: push 0xaeceb0 */
  { uint32_t v = 0xaeceb0u; esp -= 4; W32(esp, v); }
/* 8d3640: push 0xaecef4 */
  { uint32_t v = 0xaecef4u; esp -= 4; W32(esp, v); }
/* 8d3645: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8d364bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8d364b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8d364e: /* 8d364e: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x8d3654u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 8d3654: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 8d365a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d365c: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 8d365f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d3661: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d3662: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d3664: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d3666: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d3667: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d3668: push 0xb87af0 */
  { uint32_t v = 0xb87af0u; esp -= 4; W32(esp, v); }
/* 8d366d: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x8d3673u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 8d3673: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 8d3679: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d367c: push 0xce85ac */
  { uint32_t v = 0xce85acu; esp -= 4; W32(esp, v); }
/* 8d3681: mov dword ptr [0xce85ac], eax */
  W32((uint32_t)(0xce85acu), eax);
/* 8d3686: call 0x6c1203 */
  esp -= 4; W32(esp, 0x8d368bu); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
L_8d368b: /* 8d368b: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8d368e: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8d3691: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x8d3696u); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 8d3696: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d3698: je 0x8d3738 */
  if (zf) goto L_8d3738;
L_8d369e: /* 8d369e: mov eax, dword ptr [0xce85a8] */
  eax = R32((uint32_t)(0xce85a8u));
/* 8d36a3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d36a5: jne 0x8d3728 */
  if (!zf) goto L_8d3728;
L_8d36ab: /* 8d36ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d36ad: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 8d36b0: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8d36b6u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8d36b6: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 8d36bb: mov ecx, 0xb88020 */
  ecx = 0xb88020u;
/* 8d36c0: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x8d36c6u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 8d36c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d36c8: jne 0x8d36e2 */
  if (!zf) goto L_8d36e2;
L_8d36ca: /* 8d36ca: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 8d36cf: push 0xaecdd0 */
  { uint32_t v = 0xaecdd0u; esp -= 4; W32(esp, v); }
/* 8d36d4: push 0xaece14 */
  { uint32_t v = 0xaece14u; esp -= 4; W32(esp, v); }
/* 8d36d9: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8d36dfu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8d36df: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8d36e2: /* 8d36e2: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x8d36e8u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 8d36e8: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 8d36ee: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d36f0: mov ecx, dword ptr [ebp - 0x78] */
  ecx = R32((uint32_t)(ebp + 0xffffff88u));
/* 8d36f3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d36f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d36f6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d36f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d36fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d36fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d36fc: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 8d3701: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x8d3707u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 8d3707: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 8d370d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d3710: push 0xce85a8 */
  { uint32_t v = 0xce85a8u; esp -= 4; W32(esp, v); }
/* 8d3715: mov dword ptr [0xce85a8], eax */
  W32((uint32_t)(0xce85a8u), eax);
/* 8d371a: call 0x6c1203 */
  esp -= 4; W32(esp, 0x8d371fu); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 8d371f: mov eax, dword ptr [0xce85a8] */
  eax = R32((uint32_t)(0xce85a8u));
/* 8d3724: or dword ptr [eax + 0x5c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x5cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x5cu), r);
  }
L_8d3728: /* 8d3728: mov edx, dword ptr [0xce85ac] */
  edx = R32((uint32_t)(0xce85acu));
/* 8d372e: mov eax, dword ptr [0xce85a8] */
  eax = R32((uint32_t)(0xce85a8u));
/* 8d3733: mov dword ptr [edx + 0x38], eax */
  W32((uint32_t)(edx + 0x38u), eax);
/* 8d3736: jmp 0x8d3741 */
  goto L_8d3741;
L_8d3738: /* 8d3738: mov ecx, dword ptr [0xce85ac] */
  ecx = R32((uint32_t)(0xce85acu));
/* 8d373e: mov dword ptr [ecx + 0x38], esi */
  W32((uint32_t)(ecx + 0x38u), esi);
L_8d3741: /* 8d3741: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d3744: mov eax, dword ptr [0xce85ac] */
  eax = R32((uint32_t)(0xce85acu));
/* 8d3749: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d374b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d374d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d374f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d3751: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d3752: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x8d3755u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d3755: movzx ecx, word ptr [ebp - 0xa8] */
  ecx = (uint32_t)(R16((uint32_t)(ebp + 0xffffff58u)));
/* 8d375c: imul ecx, dword ptr [ebp - 0x48] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  ecx = (uint32_t)r;
  }
/* 8d3760: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8d3763: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d3766: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8d3769: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8d376b: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 8d376e: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8d3771: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d3774: mov ecx, dword ptr [eax + 0x1268] */
  ecx = R32((uint32_t)(eax + 0x1268u));
/* 8d377a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d377d: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 8d3780: mov ecx, dword ptr [ecx + edx*4] */
  ecx = R32((uint32_t)(ecx + edx*4));
/* 8d3783: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 8d3786: mov edx, dword ptr [ebp - 0xa4] */
  edx = R32((uint32_t)(ebp + 0xffffff5cu));
/* 8d378c: mov ebx, dword ptr [ecx + eax] */
  ebx = R32((uint32_t)(ecx + eax));
/* 8d378f: lea esi, [ecx + eax] */
  esi = (uint32_t)(ecx + eax);
/* 8d3792: mov al, byte ptr [edx + 0x48] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x48u))) & 0xffu);
/* 8d3795: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d3797: je 0x8d37b7 */
  if (zf) goto L_8d37b7;
L_8d3799: /* 8d3799: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 8d379c: xor ecx, ecx */
  ecx = 0;
/* 8d379e: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8d37a0: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 8d37a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d37a4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d37a5: lea ecx, [ecx + ecx - 1] */
  ecx = (uint32_t)(ecx + ecx + 0xffffffffu);
/* 8d37a9: mov dword ptr [0xaeccb4], ecx */
  W32((uint32_t)(0xaeccb4u), ecx);
/* 8d37af: call 0x6c3bb1 */
  esp -= 4; W32(esp, 0x8d37b4u); SPILL(); f_6c3bb1(); if (g_unwind) return; RELOAD();
/* 8d37b4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8d37b7: /* 8d37b7: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 8d37be: mov edi, edi */
  edi = edi;
L_8d37c0: /* 8d37c0: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d37c3: cmp edx, dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d37c6: jge 0x8d3ad9 */
  if ((sf == of)) goto L_8d3ad9;
L_8d37cc: /* 8d37cc: fld dword ptr [ebx + 0x24] */
  { double v = F32((uint32_t)(ebx + 0x24u)); FPUSH(v); }
/* 8d37cf: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8d37d5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d37d7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8d37da: jnp 0x8d3aca */
  if (!pf) goto L_8d3aca;
L_8d37e0: /* 8d37e0: mov eax, ebx */
  eax = ebx;
/* 8d37e2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8d37e4: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8d37e7: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8d37ea: mov dword ptr [ebp - 0x94], ecx */
  W32((uint32_t)(ebp + 0xffffff6cu), ecx);
/* 8d37f0: mov dword ptr [ebp - 0x90], edx */
  W32((uint32_t)(ebp + 0xffffff70u), edx);
/* 8d37f6: mov dword ptr [ebp - 0x8c], eax */
  W32((uint32_t)(ebp + 0xffffff74u), eax);
/* 8d37fc: mov dword ptr [ebp - 0xf8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff08u), 0x3f800000u);
/* 8d3806: mov dword ptr [ebp - 0xf4], 0 */
  W32((uint32_t)(ebp + 0xffffff0cu), 0x0u);
/* 8d3810: mov dword ptr [ebp - 0xf0], 0 */
  W32((uint32_t)(ebp + 0xffffff10u), 0x0u);
/* 8d381a: mov dword ptr [ebp - 0xec], 0 */
  W32((uint32_t)(ebp + 0xffffff14u), 0x0u);
/* 8d3824: mov dword ptr [ebp - 0xe8], 0 */
  W32((uint32_t)(ebp + 0xffffff18u), 0x0u);
/* 8d382e: mov dword ptr [ebp - 0xe4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff1cu), 0x3f800000u);
/* 8d3838: mov dword ptr [ebp - 0xe0], 0 */
  W32((uint32_t)(ebp + 0xffffff20u), 0x0u);
/* 8d3842: mov dword ptr [ebp - 0xdc], 0 */
  W32((uint32_t)(ebp + 0xffffff24u), 0x0u);
/* 8d384c: mov dword ptr [ebp - 0xd8], 0 */
  W32((uint32_t)(ebp + 0xffffff28u), 0x0u);
/* 8d3856: mov dword ptr [ebp - 0xd4], 0 */
  W32((uint32_t)(ebp + 0xffffff2cu), 0x0u);
/* 8d3860: mov dword ptr [ebp - 0xd0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff30u), 0x3f800000u);
/* 8d386a: mov dword ptr [ebp - 0xcc], 0 */
  W32((uint32_t)(ebp + 0xffffff34u), 0x0u);
/* 8d3874: mov dword ptr [ebp - 0xc8], ecx */
  W32((uint32_t)(ebp + 0xffffff38u), ecx);
/* 8d387a: mov dword ptr [ebp - 0xc4], edx */
  W32((uint32_t)(ebp + 0xffffff3cu), edx);
/* 8d3880: mov dword ptr [ebp - 0xc0], eax */
  W32((uint32_t)(ebp + 0xffffff40u), eax);
/* 8d3886: mov dword ptr [ebp - 0xbc], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff44u), 0x3f800000u);
/* 8d3890: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8d3895: lea esi, [ebp - 0xf8] */
  esi = (uint32_t)(ebp + 0xffffff08u);
/* 8d389b: lea edi, [ebp - 0x328] */
  edi = (uint32_t)(ebp + 0xfffffcd8u);
/* 8d38a1: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8d38a3: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8d38a8: lea esi, [ebp - 0xf8] */
  esi = (uint32_t)(ebp + 0xffffff08u);
/* 8d38ae: lea edi, [ebp - 0x228] */
  edi = (uint32_t)(ebp + 0xfffffdd8u);
/* 8d38b4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8d38b6: lea ecx, [ebx + 0xc] */
  ecx = (uint32_t)(ebx + 0xcu);
/* 8d38b9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d38bb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d38be: mov edx, esp */
  edx = esp;
/* 8d38c0: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8d38c2: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8d38c5: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8d38c8: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8d38cb: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8d38ce: lea ecx, [ebp - 0x2a8] */
  ecx = (uint32_t)(ebp + 0xfffffd58u);
/* 8d38d4: call 0x6c9160 */
  esp -= 4; W32(esp, 0x8d38d9u); SPILL(); f_6c9160(); if (g_unwind) return; RELOAD();
/* 8d38d9: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8d38de: mov esi, eax */
  esi = eax;
/* 8d38e0: lea edi, [ebp - 0x268] */
  edi = (uint32_t)(ebp + 0xfffffd98u);
/* 8d38e6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8d38e8: lea edx, [ebx + 0x18] */
  edx = (uint32_t)(ebx + 0x18u);
/* 8d38eb: mov esi, eax */
  esi = eax;
/* 8d38ed: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8d38ef: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8d38f4: lea edi, [ebp - 0x3a8] */
  edi = (uint32_t)(ebp + 0xfffffc58u);
/* 8d38fa: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8d38fc: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8d38ff: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8d3902: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 8d3905: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 8d3908: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 8d390b: mov dword ptr [ebp - 0x138], eax */
  W32((uint32_t)(ebp + 0xfffffec8u), eax);
/* 8d3911: mov dword ptr [ebp - 0x134], 0 */
  W32((uint32_t)(ebp + 0xfffffeccu), 0x0u);
/* 8d391b: mov dword ptr [ebp - 0x130], 0 */
  W32((uint32_t)(ebp + 0xfffffed0u), 0x0u);
/* 8d3925: mov dword ptr [ebp - 0x12c], 0 */
  W32((uint32_t)(ebp + 0xfffffed4u), 0x0u);
/* 8d392f: mov dword ptr [ebp - 0x128], 0 */
  W32((uint32_t)(ebp + 0xfffffed8u), 0x0u);
/* 8d3939: mov dword ptr [ebp - 0x124], ecx */
  W32((uint32_t)(ebp + 0xfffffedcu), ecx);
/* 8d393f: mov dword ptr [ebp - 0x120], 0 */
  W32((uint32_t)(ebp + 0xfffffee0u), 0x0u);
/* 8d3949: mov dword ptr [ebp - 0x11c], 0 */
  W32((uint32_t)(ebp + 0xfffffee4u), 0x0u);
/* 8d3953: mov dword ptr [ebp - 0x118], 0 */
  W32((uint32_t)(ebp + 0xfffffee8u), 0x0u);
/* 8d395d: mov dword ptr [ebp - 0x114], 0 */
  W32((uint32_t)(ebp + 0xfffffeecu), 0x0u);
/* 8d3967: mov dword ptr [ebp - 0x110], edx */
  W32((uint32_t)(ebp + 0xfffffef0u), edx);
/* 8d396d: mov dword ptr [ebp - 0x10c], 0 */
  W32((uint32_t)(ebp + 0xfffffef4u), 0x0u);
/* 8d3977: mov dword ptr [ebp - 0x108], 0 */
  W32((uint32_t)(ebp + 0xfffffef8u), 0x0u);
/* 8d3981: mov dword ptr [ebp - 0x104], 0 */
  W32((uint32_t)(ebp + 0xfffffefcu), 0x0u);
/* 8d398b: mov dword ptr [ebp - 0x100], 0 */
  W32((uint32_t)(ebp + 0xffffff00u), 0x0u);
/* 8d3995: mov dword ptr [ebp - 0xfc], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff04u), 0x3f800000u);
/* 8d399f: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8d39a3: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d39a6: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8d39ab: mov edi, esp */
  edi = esp;
/* 8d39ad: lea esi, [ebp - 0x3a8] */
  esi = (uint32_t)(ebp + 0xfffffc58u);
/* 8d39b3: lea eax, [ebp - 0x2e8] */
  eax = (uint32_t)(ebp + 0xfffffd18u);
/* 8d39b9: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8d39bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d39bc: lea ecx, [ebp - 0x138] */
  ecx = (uint32_t)(ebp + 0xfffffec8u);
/* 8d39c2: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x8d39c8u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 8d39c8: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d39cb: mov edi, esp */
  edi = esp;
/* 8d39cd: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8d39d2: lea esi, [ebp - 0x228] */
  esi = (uint32_t)(ebp + 0xfffffdd8u);
/* 8d39d8: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8d39da: lea ecx, [ebp - 0x368] */
  ecx = (uint32_t)(ebp + 0xfffffc98u);
/* 8d39e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d39e1: mov ecx, eax */
  ecx = eax;
/* 8d39e3: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 8d39e7: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x8d39edu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 8d39ed: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8d39f0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8d39f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d39f3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d39f5: mov ecx, esi */
  ecx = esi;
/* 8d39f7: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 8d39fb: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x8d39feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d39fe: lea ecx, [ebp - 0x368] */
  ecx = (uint32_t)(ebp + 0xfffffc98u);
/* 8d3a04: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 8d3a08: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8d3a0eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8d3a0e: lea ecx, [ebp - 0x2e8] */
  ecx = (uint32_t)(ebp + 0xfffffd18u);
/* 8d3a14: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8d3a18: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8d3a1eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8d3a1e: lea ecx, [ebp - 0x138] */
  ecx = (uint32_t)(ebp + 0xfffffec8u);
/* 8d3a24: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8d3a28: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8d3a2eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8d3a2e: lea ecx, [ebp - 0x268] */
  ecx = (uint32_t)(ebp + 0xfffffd98u);
/* 8d3a34: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8d3a38: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8d3a3eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8d3a3e: lea ecx, [ebp - 0x2a8] */
  ecx = (uint32_t)(ebp + 0xfffffd58u);
/* 8d3a44: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8d3a48: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8d3a4eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8d3a4e: lea ecx, [ebp - 0x328] */
  ecx = (uint32_t)(ebp + 0xfffffcd8u);
/* 8d3a54: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8d3a58: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8d3a5eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8d3a5e: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 8d3a64: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8d3a68: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8d3a6eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8d3a6e: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 8d3a71: mov ecx, eax */
  ecx = eax;
/* 8d3a73: shr ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8d3a76: mov dword ptr [ebp - 0x60], ecx */
  W32((uint32_t)(ebp + 0xffffffa0u), ecx);
/* 8d3a79: fild dword ptr [ebp - 0x60] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 8d3a7c: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8d3a7f: fmul dword ptr [ebx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x24u)));
/* 8d3a82: call 0x99c958 */
  esp -= 4; W32(esp, 0x8d3a87u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8d3a87: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8d3a89: mov byte ptr [ebp - 0x19], al */
  W8((uint32_t)(ebp + 0xffffffe7u), (eax & 0xffu));
/* 8d3a8c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d3a8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d3a90: mov ecx, esi */
  ecx = esi;
/* 8d3a92: call dword ptr [edx + 0x34] */
  { uint32_t t = R32((uint32_t)(edx + 0x34u)); esp -= 4; W32(esp, 0x8d3a95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d3a95: movzx eax, word ptr [ebp - 0xac] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff54u)));
/* 8d3a9c: movzx ecx, word ptr [ebp - 0xae] */
  ecx = (uint32_t)(R16((uint32_t)(ebp + 0xffffff52u)));
/* 8d3aa3: mov edi, dword ptr [ebp - 0xb4] */
  edi = R32((uint32_t)(ebp + 0xffffff4cu));
/* 8d3aa9: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8d3aab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d3aac: movzx eax, word ptr [ebp - 0xa8] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff58u)));
/* 8d3ab3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d3ab4: movzx ecx, word ptr [ebp - 0xb0] */
  ecx = (uint32_t)(R16((uint32_t)(ebp + 0xffffff50u)));
/* 8d3abb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d3abc: xor eax, eax */
  eax = 0;
/* 8d3abe: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d3ac0: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 8d3ac3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d3ac4: mov ecx, esi */
  ecx = esi;
/* 8d3ac6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d3ac7: call dword ptr [edx + 0x5c] */
  { uint32_t t = R32((uint32_t)(edx + 0x5cu)); esp -= 4; W32(esp, 0x8d3acau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8d3aca: /* 8d3aca: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d3acd: add ebx, 0x38 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8d3ad0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d3ad1: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8d3ad4: jmp 0x8d37c0 */
  goto L_8d37c0;
L_8d3ad9: /* 8d3ad9: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8d3adc: mov ebx, dword ptr [ebp - 0x40] */
  ebx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8d3adf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d3ae0: jmp 0x8d359c */
  goto L_8d359c;
L_8d3ae5: /* 8d3ae5: lea ecx, [ebp - 0x148] */
  ecx = (uint32_t)(ebp + 0xfffffeb8u);
/* 8d3aeb: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8d3aef: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8d3af5u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_8d3af5: /* 8d3af5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d3af8: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d3afb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d3afc: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8d3aff: mov esi, eax */
  esi = eax;
/* 8d3b01: jmp 0x8d31c0 */
  goto L_8d31c0;
L_8d3b06: /* 8d3b06: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8d3b09: jmp 0x8d3142 */
  goto L_8d3142;
L_8d3b0e: /* 8d3b0e: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 8d3b14: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8d3b16: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d3b18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d3b19: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8d3b1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d3b1c: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8d3b21: mov ecx, dword ptr [0xce83b8] */
  ecx = R32((uint32_t)(0xce83b8u));
/* 8d3b27: mov edi, dword ptr [eax + ecx*4] */
  edi = R32((uint32_t)(eax + ecx*4));
/* 8d3b2a: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8d3b2d: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8d3b2f: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8d3b32: mov dword ptr [eax + ecx*4], edi */
  W32((uint32_t)(eax + ecx*4), edi);
/* 8d3b35: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8d3b3a: mov ecx, dword ptr [0xce83bc] */
  ecx = R32((uint32_t)(0xce83bcu));
/* 8d3b40: add dword ptr [eax + ecx*4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + ecx*4), r);
  }
L_8d3b43: /* 8d3b43: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d3b46: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d3b47: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d3b48: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d3b4f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d3b50: mov esp, ebp */
  esp = ebp;
/* 8d3b52: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d3b53: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_8d31b7(void) {
  LOAD_REGS();
  goto L_8d31b7;
L_8d3142: /* 8d3142: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8d3143: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8d3146: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8d3148: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d314b: jl 0x8d3b0e */
  if ((sf != of)) goto L_8d3b0e;
L_8d3151: /* 8d3151: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8d3154: mov edx, dword ptr [eax + ecx*4] */
  edx = R32((uint32_t)(eax + ecx*4));
/* 8d3157: mov eax, dword ptr [ebx + 0x1274] */
  eax = R32((uint32_t)(ebx + 0x1274u));
/* 8d315d: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 8d3160: lea esi, [eax + 0x44] */
  esi = (uint32_t)(eax + 0x44u);
/* 8d3163: mov ecx, 7 */
  ecx = 0x7u;
/* 8d3168: lea edi, [ebp - 0x164] */
  edi = (uint32_t)(ebp + 0xfffffe9cu);
/* 8d316e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8d3170: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8d3173: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d3174: lea edx, [ebp - 0x1e8] */
  edx = (uint32_t)(ebp + 0xfffffe18u);
/* 8d317a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d317b: lea ecx, [ebp - 0x164] */
  ecx = (uint32_t)(ebp + 0xfffffe9cu);
/* 8d3181: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 8d3184: call dword ptr [0xcfa60c] */
  esp -= 4; W32(esp, 0x8d318au); SPILL(); f_4e3332(); if (g_unwind) return; /* Core!?ExpandBy@FBox@@QBE?AV1@M@Z */ RELOAD();
/* 8d318a: mov esi, eax */
  esi = eax;
/* 8d318c: mov ecx, 7 */
  ecx = 0x7u;
/* 8d3191: lea edi, [ebp - 0x164] */
  edi = (uint32_t)(ebp + 0xfffffe9cu);
/* 8d3197: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8d3199: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8d319c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d319e: lea edx, [ebp - 0x164] */
  edx = (uint32_t)(ebp + 0xfffffe9cu);
/* 8d31a4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d31a5: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x8d31a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d31a8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d31aa: je 0x8d3b06 */
  if (zf) goto L_8d3b06;
L_8d31b0: /* 8d31b0: xor esi, esi */
  esi = 0;
/* 8d31b2: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 8d31b5: jmp 0x8d31c0 */
  goto L_8d31c0;
L_8d31b7: /* 8d31b7: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 8d31be: mov edi, edi */
  edi = edi;
L_8d31c0: /* 8d31c0: cmp esi, dword ptr [ebx + 0x1254] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x1254u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d31c6: jge 0x8d3b06 */
  if ((sf == of)) goto L_8d3b06;
L_8d31cc: /* 8d31cc: mov ecx, dword ptr [ebx + 0x1250] */
  ecx = R32((uint32_t)(ebx + 0x1250u));
/* 8d31d2: imul esi, esi, 0x5c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x5cu);
  esi = (uint32_t)r;
  }
/* 8d31d5: mov eax, dword ptr [esi + ecx + 0x10] */
  eax = R32((uint32_t)(esi + ecx + 0x10u));
/* 8d31d9: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8d31db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d31dd: mov dword ptr [ebp - 0xa4], esi */
  W32((uint32_t)(ebp + 0xffffff5cu), esi);
/* 8d31e3: je 0x8d3af5 */
  if (zf) goto L_8d3af5;
L_8d31e9: /* 8d31e9: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 8d31ec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d31ee: je 0x8d3af5 */
  if (zf) goto L_8d3af5;
L_8d31f4: /* 8d31f4: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d31f7: je 0x8d3af5 */
  if (zf) goto L_8d3af5;
L_8d31fd: /* 8d31fd: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d3200: mov edx, dword ptr [ecx + 0x1268] */
  edx = R32((uint32_t)(ecx + 0x1268u));
/* 8d3206: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d3209: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8d320c: mov ecx, dword ptr [ecx + edi*4] */
  ecx = R32((uint32_t)(ecx + edi*4));
/* 8d320f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d3212: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 8d3215: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8d3218: mov edx, dword ptr [edx + eax*4] */
  edx = R32((uint32_t)(edx + eax*4));
/* 8d321b: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d321d: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8d3220: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d3222: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 8d3225: je 0x8d3af5 */
  if (zf) goto L_8d3af5;
L_8d322b: /* 8d322b: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 8d322e: lea eax, [ecx + 0xc] */
  eax = (uint32_t)(ecx + 0xcu);
/* 8d3231: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 8d3233: mov dword ptr [ebp - 0xa0], edi */
  W32((uint32_t)(ebp + 0xffffff60u), edi);
/* 8d3239: fld dword ptr [ebp - 0xa0] */
  { double v = F32((uint32_t)(ebp + 0xffffff60u)); FPUSH(v); }
/* 8d323f: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 8d3242: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8d3245: mov dword ptr [ebp - 0x98], eax */
  W32((uint32_t)(ebp + 0xffffff68u), eax);
/* 8d324b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8d324e: fsub dword ptr [eax + 0x194] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x194u)));
/* 8d3254: mov dword ptr [ebp - 0x9c], edi */
  W32((uint32_t)(ebp + 0xffffff64u), edi);
/* 8d325a: fld dword ptr [ebp - 0x9c] */
  { double v = F32((uint32_t)(ebp + 0xffffff64u)); FPUSH(v); }
/* 8d3260: fsub dword ptr [eax + 0x198] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x198u)));
/* 8d3266: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 8d326c: fsub dword ptr [eax + 0x19c] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x19cu)));
/* 8d3272: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8d3274: fadd dword ptr [esi + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x30u)));
/* 8d3277: fadd dword ptr [ebp - 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffccu)));
/* 8d327a: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 8d327c: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 8d327e: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8d3280: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8d3282: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8d3284: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 8d3286: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 8d3288: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8d328a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8d328c: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8d328e: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8d3290: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d3292: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 8d3294: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d3296: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 8d3298: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8d329b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d329d: jnp 0x8d3af5 */
  if (!pf) goto L_8d3af5;
L_8d32a3: /* 8d32a3: fld dword ptr [esi + 0x30] */
  { double v = F32((uint32_t)(esi + 0x30u)); FPUSH(v); }
/* 8d32a6: mov dword ptr [ebp - 0x4c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x3f800000u);
/* 8d32ad: fsub dword ptr [esi + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x2cu)));
/* 8d32b0: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8d32b6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d32b8: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8d32bb: jnp 0x8d32c8 */
  if (!pf) goto L_8d32c8;
L_8d32bd: /* 8d32bd: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8d32c3: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 8d32c5: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
L_8d32c8: /* 8d32c8: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 8d32ca: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d32cc: xor ebx, ebx */
  ebx = 0;
/* 8d32ce: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 8d32d1: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
L_8d32d4: /* 8d32d4: cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d32d7: jge 0x8d339e */
  if ((sf == of)) goto L_8d339e;
L_8d32dd: /* 8d32dd: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8d32e0: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8d32e2: fsub dword ptr [eax + 0x194] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x194u)));
/* 8d32e8: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d32eb: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 8d32ee: fsub dword ptr [eax + 0x198] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x198u)));
/* 8d32f4: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 8d32f7: fsub dword ptr [eax + 0x19c] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x19cu)));
/* 8d32fd: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8d32ff: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8d3301: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8d3303: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8d3305: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8d3307: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 8d3309: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 8d330b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8d330d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8d3310: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d3312: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d3314: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d3316: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x8d331cu); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 8d331c: fst qword ptr [ebp - 0x44] */
  WF64((uint32_t)(ebp + 0xffffffbcu), ST0);
/* 8d331f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d3322: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 8d3325: fst dword ptr [edi + 0x28] */
  WF32((uint32_t)(edi + 0x28u), ST0);
/* 8d3328: fcomp dword ptr [esi + 0x30] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x30u)));
  FPOP();
/* 8d332b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d332d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d3330: jne 0x8d3348 */
  if (!zf) goto L_8d3348;
L_8d3332: /* 8d3332: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d3335: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8d3338: mov dword ptr [edi + 0x24], 0xbf800000 */
  W32((uint32_t)(edi + 0x24u), 0xbf800000u);
/* 8d333f: add edi, 0x38 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8d3342: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d3343: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8d3346: jmp 0x8d32d4 */
  goto L_8d32d4;
L_8d3348: /* 8d3348: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8d334e: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8d3351: fcomp dword ptr [esi + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x2cu)));
  FPOP();
/* 8d3354: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d3356: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d3359: jne 0x8d336c */
  if (!zf) goto L_8d336c;
L_8d335b: /* 8d335b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d335d: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8d3360: fsub dword ptr [esi + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x2cu)));
/* 8d3363: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 8d3366: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
L_8d336c: /* 8d336c: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8d336f: call 0x99c958 */
  esp -= 4; W32(esp, 0x8d3374u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8d3374: fstp dword ptr [edi + 0x24] */
  WF32((uint32_t)(edi + 0x24u), ST0); FPOP();
/* 8d3377: mov ecx, dword ptr [edi + 0x34] */
  ecx = R32((uint32_t)(edi + 0x34u));
/* 8d337a: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8d337d: shl eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8d3380: and ecx, 0xffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8d3386: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 8d3388: mov dword ptr [edi + 0x34], eax */
  W32((uint32_t)(edi + 0x34u), eax);
/* 8d338b: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d338e: add edi, 0x38 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8d3391: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8d3392: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d3393: mov dword ptr [ebp - 0x48], ebx */
  W32((uint32_t)(ebp + 0xffffffb8u), ebx);
/* 8d3396: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8d3399: jmp 0x8d32d4 */
  goto L_8d32d4;
L_8d339e: /* 8d339e: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8d33a1: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d33a3: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d33a5: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
/* 8d33a8: je 0x8d3af5 */
  if (zf) goto L_8d3af5;
L_8d33ae: /* 8d33ae: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d33b1: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d33b4: imul edx, edx, 0x5c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x5cu);
  edx = (uint32_t)r;
  }
/* 8d33b7: mov ecx, dword ptr [eax + 0x1250] */
  ecx = R32((uint32_t)(eax + 0x1250u));
/* 8d33bd: mov eax, dword ptr [ecx + edx + 0x50] */
  eax = R32((uint32_t)(ecx + edx + 0x50u));
/* 8d33c1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d33c3: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8d33c6: je 0x8d347f */
  if (zf) goto L_8d347f;
L_8d33cc: /* 8d33cc: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8d33cf: xor ebx, ebx */
  ebx = 0;
/* 8d33d1: xor edi, edi */
  edi = 0;
L_8d33d3: /* 8d33d3: cmp edi, dword ptr [ecx + 0x38] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d33d6: jge 0x8d3466 */
  if ((sf == of)) goto L_8d3466;
L_8d33dc: /* 8d33dc: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 8d33df: mov edx, edi */
  edx = edi;
/* 8d33e1: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8d33e4: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d33e6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8d33e8: cmp byte ptr [edx + 0x29], 0x13 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x29u))); uint8_t b = (uint8_t)(0x13u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8d33ec: jne 0x8d3460 */
  if (!zf) goto L_8d3460;
L_8d33ee: /* 8d33ee: mov eax, edx */
  eax = edx;
/* 8d33f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d33f1: lea ecx, [ebp - 0x1cc] */
  ecx = (uint32_t)(ebp + 0xfffffe34u);
/* 8d33f7: call 0x6c51f5 */
  esp -= 4; W32(esp, 0x8d33fcu); SPILL(); f_6c51f5(); if (g_unwind) return; RELOAD();
/* 8d33fc: mov dword ptr [ebp - 0x80], 0x3f126e98 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x3f126e98u);
/* 8d3403: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 8d3406: mov dword ptr [ebp - 0x88], 0x3f126e98 */
  W32((uint32_t)(ebp + 0xffffff78u), 0x3f126e98u);
/* 8d3410: mov ecx, dword ptr [ebp - 0x88] */
  ecx = R32((uint32_t)(ebp + 0xffffff78u));
/* 8d3416: mov dword ptr [ebp - 0x1c4], ecx */
  W32((uint32_t)(ebp + 0xfffffe3cu), ecx);
/* 8d341c: mov dword ptr [ebp - 0x1bc], eax */
  W32((uint32_t)(ebp + 0xfffffe44u), eax);
/* 8d3422: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 8d3427: lea eax, [ebp - 0x1cc] */
  eax = (uint32_t)(ebp + 0xfffffe34u);
/* 8d342d: mov dword ptr [ebp - 0x84], 0x3f126e98 */
  W32((uint32_t)(ebp + 0xffffff7cu), 0x3f126e98u);
/* 8d3437: mov edx, dword ptr [ebp - 0x84] */
  edx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 8d343d: mov dword ptr [ebp - 0x7c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x3f800000u);
/* 8d3444: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* 8d3447: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d3448: mov dword ptr [ebp - 0x1c0], edx */
  W32((uint32_t)(ebp + 0xfffffe40u), edx);
/* 8d344e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8d3450: mov dword ptr [ebp - 0x1b8], ecx */
  W32((uint32_t)(ebp + 0xfffffe48u), ecx);
/* 8d3456: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d3457: mov ecx, esi */
  ecx = esi;
/* 8d3459: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x8d345cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d345c: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8d345f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_8d3460: /* 8d3460: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8d3461: jmp 0x8d33d3 */
  goto L_8d33d3;
L_8d3466: /* 8d3466: mov edi, ebx */
  edi = ebx;
L_8d3468: /* 8d3468: cmp edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d346b: jge 0x8d347f */
  if ((sf == of)) goto L_8d347f;
L_8d346d: /* 8d346d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8d346f: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 8d3474: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d3476: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d3477: mov ecx, esi */
  ecx = esi;
/* 8d3479: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x8d347cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d347c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8d347d: jmp 0x8d3468 */
  goto L_8d3468;
L_8d347f: /* 8d347f: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d3482: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d3485: imul edi, edi, 0x5c */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x5cu);
  edi = (uint32_t)r;
  }
/* 8d3488: mov ecx, dword ptr [eax + 0x1250] */
  ecx = R32((uint32_t)(eax + 0x1250u));
/* 8d348e: mov eax, dword ptr [ecx + edi + 0x50] */
  eax = R32((uint32_t)(ecx + edi + 0x50u));
/* 8d3492: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d3494: je 0x8d34ac */
  if (zf) goto L_8d34ac;
L_8d3496: /* 8d3496: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8d3499: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8d349c: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x8d34a1u); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 8d34a1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d34a3: jne 0x8d34ac */
  if (!zf) goto L_8d34ac;
L_8d34a5: /* 8d34a5: mov ebx, 1 */
  ebx = 0x1u;
/* 8d34aa: jmp 0x8d34ae */
  goto L_8d34ae;
L_8d34ac: /* 8d34ac: xor ebx, ebx */
  ebx = 0;
L_8d34ae: /* 8d34ae: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d34b1: mov ecx, esp */
  ecx = esp;
/* 8d34b3: mov dword ptr [ebp - 0x40], esp */
  W32((uint32_t)(ebp + 0xffffffc0u), esp);
/* 8d34b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d34b8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d34bb: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 8d34c2: mov edx, dword ptr [ebp - 0x6c] */
  edx = R32((uint32_t)(ebp + 0xffffff94u));
/* 8d34c5: mov eax, esp */
  eax = esp;
/* 8d34c7: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8d34c9: mov dword ptr [ebp - 0x68], 0 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x0u);
/* 8d34d0: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 8d34d3: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8d34d6: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 8d34dd: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8d34e0: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8d34e3: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x8d34e9u); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 8d34e9: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8d34ec: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8d34ef: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 8d34f2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8d34f4: xor edx, edx */
  edx = 0;
/* 8d34f6: cmp dword ptr [ecx + 0x540], 7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x540u))); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d34fd: mov ecx, esi */
  ecx = esi;
/* 8d34ff: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 8d3502: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d3503: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d3505: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d3507: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d3509: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d350a: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x8d350du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d350d: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d3510: mov ecx, dword ptr [eax + 0x1250] */
  ecx = R32((uint32_t)(eax + 0x1250u));
/* 8d3516: mov ebx, dword ptr [ecx + edi + 0x10] */
  ebx = R32((uint32_t)(ecx + edi + 0x10u));
/* 8d351a: lea edx, [ebx + 0x60] */
  edx = (uint32_t)(ebx + 0x60u);
/* 8d351d: xor eax, eax */
  eax = 0;
/* 8d351f: mov dword ptr [ebp - 0x188], edx */
  W32((uint32_t)(ebp + 0xfffffe78u), edx);
/* 8d3525: mov ecx, 8 */
  ecx = 0x8u;
/* 8d352a: lea edi, [ebp - 0x184] */
  edi = (uint32_t)(ebp + 0xfffffe7cu);
/* 8d3530: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 8d3532: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d3533: mov ecx, ebx */
  ecx = ebx;
/* 8d3535: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 8d3538: mov esi, 1 */
  esi = 0x1u;
/* 8d353d: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8d3543u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8d3543: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d3544: lea ecx, [ebp - 0x148] */
  ecx = (uint32_t)(ebp + 0xfffffeb8u);
/* 8d354a: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8d3550u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8d3550: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8d3554: xor eax, eax */
  eax = 0;
L_8d3556: /* 8d3556: cmp eax, dword ptr [ebx + 0xb8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xb8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d355c: jge 0x8d3576 */
  if ((sf == of)) goto L_8d3576;
L_8d355e: /* 8d355e: mov edi, dword ptr [ebx + 0xb4] */
  edi = R32((uint32_t)(ebx + 0xb4u));
/* 8d3564: mov ecx, eax */
  ecx = eax;
/* 8d3566: shl ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8d3569: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d356b: mov dword ptr [ebp + esi*4 - 0x188], ecx */
  W32((uint32_t)(ebp + esi*4 + 0xfffffe78u), ecx);
/* 8d3572: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8d3573: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d3574: jmp 0x8d3556 */
  goto L_8d3556;
L_8d3576: /* 8d3576: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8d3579: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8d357b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d357c: lea eax, [ebp - 0x188] */
  eax = (uint32_t)(ebp + 0xfffffe78u);
/* 8d3582: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d3583: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d3585: mov ecx, edi */
  ecx = edi;
/* 8d3587: call dword ptr [edx + 0x4c] */
  { uint32_t t = R32((uint32_t)(edx + 0x4cu)); esp -= 4; W32(esp, 0x8d358au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d358a: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8d358c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d358e: lea eax, [ebx + 0xc0] */
  eax = (uint32_t)(ebx + 0xc0u);
/* 8d3594: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d3595: mov ecx, edi */
  ecx = edi;
/* 8d3597: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0x8d359au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d359a: xor eax, eax */
  eax = 0;
L_8d359c: /* 8d359c: cmp eax, dword ptr [ebx + 0x58] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x58u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d359f: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8d35a2: jge 0x8d3ae5 */
  if ((sf == of)) goto L_8d3ae5;
L_8d35a8: /* 8d35a8: mov edx, dword ptr [ebx + 0x54] */
  edx = R32((uint32_t)(ebx + 0x54u));
/* 8d35ab: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 8d35ae: lea esi, [edx + ecx*4] */
  esi = (uint32_t)(edx + ecx*4);
/* 8d35b1: mov ecx, 5 */
  ecx = 0x5u;
/* 8d35b6: lea edi, [ebp - 0xb8] */
  edi = (uint32_t)(ebp + 0xffffff48u);
/* 8d35bc: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8d35be: mov ecx, dword ptr [ebx + 0xf8] */
  ecx = R32((uint32_t)(ebx + 0xf8u));
/* 8d35c4: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8d35c7: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 8d35ca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d35cc: jne 0x8d35fa */
  if (!zf) goto L_8d35fa;
L_8d35ce: /* 8d35ce: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8d35d1: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8d35d4: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 8d35d7: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 8d35dd: mov esi, dword ptr [eax + 0x13c] */
  esi = R32((uint32_t)(eax + 0x13cu));
/* 8d35e3: mov ecx, dword ptr [edx + 0x4a8] */
  ecx = R32((uint32_t)(edx + 0x4a8u));
/* 8d35e9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d35eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d35ec: mov eax, dword ptr [eax + 0x138] */
  eax = R32((uint32_t)(eax + 0x138u));
/* 8d35f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d35f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d35f4: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x8d35fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8d35fa: /* 8d35fa: cmp word ptr [ebp - 0xa8], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xffffff58u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 8d3602: mov esi, eax */
  esi = eax;
/* 8d3604: je 0x8d3ad9 */
  if (zf) goto L_8d3ad9;
L_8d360a: /* 8d360a: mov eax, dword ptr [0xce85ac] */
  eax = R32((uint32_t)(0xce85acu));
/* 8d360f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d3611: jne 0x8d368b */
  if (!zf) goto L_8d368b;
L_8d3617: /* 8d3617: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d3619: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 8d361c: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8d3622u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8d3622: push 0xb87af0 */
  { uint32_t v = 0xb87af0u; esp -= 4; W32(esp, v); }
/* 8d3627: mov ecx, 0xb87af0 */
  ecx = 0xb87af0u;
/* 8d362c: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x8d3632u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 8d3632: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d3634: jne 0x8d364e */
  if (!zf) goto L_8d364e;
L_8d3636: /* 8d3636: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 8d363b: push 0xaeceb0 */
  { uint32_t v = 0xaeceb0u; esp -= 4; W32(esp, v); }
/* 8d3640: push 0xaecef4 */
  { uint32_t v = 0xaecef4u; esp -= 4; W32(esp, v); }
/* 8d3645: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8d364bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8d364b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8d364e: /* 8d364e: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x8d3654u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 8d3654: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 8d365a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d365c: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 8d365f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d3661: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d3662: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d3664: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d3666: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d3667: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d3668: push 0xb87af0 */
  { uint32_t v = 0xb87af0u; esp -= 4; W32(esp, v); }
/* 8d366d: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x8d3673u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 8d3673: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 8d3679: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d367c: push 0xce85ac */
  { uint32_t v = 0xce85acu; esp -= 4; W32(esp, v); }
/* 8d3681: mov dword ptr [0xce85ac], eax */
  W32((uint32_t)(0xce85acu), eax);
/* 8d3686: call 0x6c1203 */
  esp -= 4; W32(esp, 0x8d368bu); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
L_8d368b: /* 8d368b: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8d368e: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8d3691: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x8d3696u); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 8d3696: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d3698: je 0x8d3738 */
  if (zf) goto L_8d3738;
L_8d369e: /* 8d369e: mov eax, dword ptr [0xce85a8] */
  eax = R32((uint32_t)(0xce85a8u));
/* 8d36a3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d36a5: jne 0x8d3728 */
  if (!zf) goto L_8d3728;
L_8d36ab: /* 8d36ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d36ad: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 8d36b0: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8d36b6u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8d36b6: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 8d36bb: mov ecx, 0xb88020 */
  ecx = 0xb88020u;
/* 8d36c0: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x8d36c6u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 8d36c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d36c8: jne 0x8d36e2 */
  if (!zf) goto L_8d36e2;
L_8d36ca: /* 8d36ca: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 8d36cf: push 0xaecdd0 */
  { uint32_t v = 0xaecdd0u; esp -= 4; W32(esp, v); }
/* 8d36d4: push 0xaece14 */
  { uint32_t v = 0xaece14u; esp -= 4; W32(esp, v); }
/* 8d36d9: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8d36dfu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8d36df: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8d36e2: /* 8d36e2: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x8d36e8u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 8d36e8: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 8d36ee: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d36f0: mov ecx, dword ptr [ebp - 0x78] */
  ecx = R32((uint32_t)(ebp + 0xffffff88u));
/* 8d36f3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d36f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d36f6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d36f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d36fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d36fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d36fc: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 8d3701: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x8d3707u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 8d3707: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 8d370d: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d3710: push 0xce85a8 */
  { uint32_t v = 0xce85a8u; esp -= 4; W32(esp, v); }
/* 8d3715: mov dword ptr [0xce85a8], eax */
  W32((uint32_t)(0xce85a8u), eax);
/* 8d371a: call 0x6c1203 */
  esp -= 4; W32(esp, 0x8d371fu); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 8d371f: mov eax, dword ptr [0xce85a8] */
  eax = R32((uint32_t)(0xce85a8u));
/* 8d3724: or dword ptr [eax + 0x5c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x5cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x5cu), r);
  }
L_8d3728: /* 8d3728: mov edx, dword ptr [0xce85ac] */
  edx = R32((uint32_t)(0xce85acu));
/* 8d372e: mov eax, dword ptr [0xce85a8] */
  eax = R32((uint32_t)(0xce85a8u));
/* 8d3733: mov dword ptr [edx + 0x38], eax */
  W32((uint32_t)(edx + 0x38u), eax);
/* 8d3736: jmp 0x8d3741 */
  goto L_8d3741;
L_8d3738: /* 8d3738: mov ecx, dword ptr [0xce85ac] */
  ecx = R32((uint32_t)(0xce85acu));
/* 8d373e: mov dword ptr [ecx + 0x38], esi */
  W32((uint32_t)(ecx + 0x38u), esi);
L_8d3741: /* 8d3741: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d3744: mov eax, dword ptr [0xce85ac] */
  eax = R32((uint32_t)(0xce85acu));
/* 8d3749: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d374b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d374d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d374f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d3751: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d3752: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x8d3755u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d3755: movzx ecx, word ptr [ebp - 0xa8] */
  ecx = (uint32_t)(R16((uint32_t)(ebp + 0xffffff58u)));
/* 8d375c: imul ecx, dword ptr [ebp - 0x48] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffb8u)));
  ecx = (uint32_t)r;
  }
/* 8d3760: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8d3763: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d3766: mov esi, dword ptr [ebp - 0x28] */
  esi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8d3769: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8d376b: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 8d376e: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8d3771: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d3774: mov ecx, dword ptr [eax + 0x1268] */
  ecx = R32((uint32_t)(eax + 0x1268u));
/* 8d377a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d377d: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 8d3780: mov ecx, dword ptr [ecx + edx*4] */
  ecx = R32((uint32_t)(ecx + edx*4));
/* 8d3783: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 8d3786: mov edx, dword ptr [ebp - 0xa4] */
  edx = R32((uint32_t)(ebp + 0xffffff5cu));
/* 8d378c: mov ebx, dword ptr [ecx + eax] */
  ebx = R32((uint32_t)(ecx + eax));
/* 8d378f: lea esi, [ecx + eax] */
  esi = (uint32_t)(ecx + eax);
/* 8d3792: mov al, byte ptr [edx + 0x48] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x48u))) & 0xffu);
/* 8d3795: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d3797: je 0x8d37b7 */
  if (zf) goto L_8d37b7;
L_8d3799: /* 8d3799: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 8d379c: xor ecx, ecx */
  ecx = 0;
/* 8d379e: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8d37a0: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 8d37a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d37a4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d37a5: lea ecx, [ecx + ecx - 1] */
  ecx = (uint32_t)(ecx + ecx + 0xffffffffu);
/* 8d37a9: mov dword ptr [0xaeccb4], ecx */
  W32((uint32_t)(0xaeccb4u), ecx);
/* 8d37af: call 0x6c3bb1 */
  esp -= 4; W32(esp, 0x8d37b4u); SPILL(); f_6c3bb1(); if (g_unwind) return; RELOAD();
/* 8d37b4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8d37b7: /* 8d37b7: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 8d37be: mov edi, edi */
  edi = edi;
L_8d37c0: /* 8d37c0: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d37c3: cmp edx, dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d37c6: jge 0x8d3ad9 */
  if ((sf == of)) goto L_8d3ad9;
L_8d37cc: /* 8d37cc: fld dword ptr [ebx + 0x24] */
  { double v = F32((uint32_t)(ebx + 0x24u)); FPUSH(v); }
/* 8d37cf: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8d37d5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d37d7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8d37da: jnp 0x8d3aca */
  if (!pf) goto L_8d3aca;
L_8d37e0: /* 8d37e0: mov eax, ebx */
  eax = ebx;
/* 8d37e2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8d37e4: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8d37e7: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8d37ea: mov dword ptr [ebp - 0x94], ecx */
  W32((uint32_t)(ebp + 0xffffff6cu), ecx);
/* 8d37f0: mov dword ptr [ebp - 0x90], edx */
  W32((uint32_t)(ebp + 0xffffff70u), edx);
/* 8d37f6: mov dword ptr [ebp - 0x8c], eax */
  W32((uint32_t)(ebp + 0xffffff74u), eax);
/* 8d37fc: mov dword ptr [ebp - 0xf8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff08u), 0x3f800000u);
/* 8d3806: mov dword ptr [ebp - 0xf4], 0 */
  W32((uint32_t)(ebp + 0xffffff0cu), 0x0u);
/* 8d3810: mov dword ptr [ebp - 0xf0], 0 */
  W32((uint32_t)(ebp + 0xffffff10u), 0x0u);
/* 8d381a: mov dword ptr [ebp - 0xec], 0 */
  W32((uint32_t)(ebp + 0xffffff14u), 0x0u);
/* 8d3824: mov dword ptr [ebp - 0xe8], 0 */
  W32((uint32_t)(ebp + 0xffffff18u), 0x0u);
/* 8d382e: mov dword ptr [ebp - 0xe4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff1cu), 0x3f800000u);
/* 8d3838: mov dword ptr [ebp - 0xe0], 0 */
  W32((uint32_t)(ebp + 0xffffff20u), 0x0u);
/* 8d3842: mov dword ptr [ebp - 0xdc], 0 */
  W32((uint32_t)(ebp + 0xffffff24u), 0x0u);
/* 8d384c: mov dword ptr [ebp - 0xd8], 0 */
  W32((uint32_t)(ebp + 0xffffff28u), 0x0u);
/* 8d3856: mov dword ptr [ebp - 0xd4], 0 */
  W32((uint32_t)(ebp + 0xffffff2cu), 0x0u);
/* 8d3860: mov dword ptr [ebp - 0xd0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff30u), 0x3f800000u);
/* 8d386a: mov dword ptr [ebp - 0xcc], 0 */
  W32((uint32_t)(ebp + 0xffffff34u), 0x0u);
/* 8d3874: mov dword ptr [ebp - 0xc8], ecx */
  W32((uint32_t)(ebp + 0xffffff38u), ecx);
/* 8d387a: mov dword ptr [ebp - 0xc4], edx */
  W32((uint32_t)(ebp + 0xffffff3cu), edx);
/* 8d3880: mov dword ptr [ebp - 0xc0], eax */
  W32((uint32_t)(ebp + 0xffffff40u), eax);
/* 8d3886: mov dword ptr [ebp - 0xbc], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff44u), 0x3f800000u);
/* 8d3890: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8d3895: lea esi, [ebp - 0xf8] */
  esi = (uint32_t)(ebp + 0xffffff08u);
/* 8d389b: lea edi, [ebp - 0x328] */
  edi = (uint32_t)(ebp + 0xfffffcd8u);
/* 8d38a1: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8d38a3: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8d38a8: lea esi, [ebp - 0xf8] */
  esi = (uint32_t)(ebp + 0xffffff08u);
/* 8d38ae: lea edi, [ebp - 0x228] */
  edi = (uint32_t)(ebp + 0xfffffdd8u);
/* 8d38b4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8d38b6: lea ecx, [ebx + 0xc] */
  ecx = (uint32_t)(ebx + 0xcu);
/* 8d38b9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d38bb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d38be: mov edx, esp */
  edx = esp;
/* 8d38c0: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8d38c2: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8d38c5: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8d38c8: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8d38cb: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8d38ce: lea ecx, [ebp - 0x2a8] */
  ecx = (uint32_t)(ebp + 0xfffffd58u);
/* 8d38d4: call 0x6c9160 */
  esp -= 4; W32(esp, 0x8d38d9u); SPILL(); f_6c9160(); if (g_unwind) return; RELOAD();
/* 8d38d9: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8d38de: mov esi, eax */
  esi = eax;
/* 8d38e0: lea edi, [ebp - 0x268] */
  edi = (uint32_t)(ebp + 0xfffffd98u);
/* 8d38e6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8d38e8: lea edx, [ebx + 0x18] */
  edx = (uint32_t)(ebx + 0x18u);
/* 8d38eb: mov esi, eax */
  esi = eax;
/* 8d38ed: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8d38ef: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8d38f4: lea edi, [ebp - 0x3a8] */
  edi = (uint32_t)(ebp + 0xfffffc58u);
/* 8d38fa: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8d38fc: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8d38ff: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8d3902: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 8d3905: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 8d3908: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 8d390b: mov dword ptr [ebp - 0x138], eax */
  W32((uint32_t)(ebp + 0xfffffec8u), eax);
/* 8d3911: mov dword ptr [ebp - 0x134], 0 */
  W32((uint32_t)(ebp + 0xfffffeccu), 0x0u);
/* 8d391b: mov dword ptr [ebp - 0x130], 0 */
  W32((uint32_t)(ebp + 0xfffffed0u), 0x0u);
/* 8d3925: mov dword ptr [ebp - 0x12c], 0 */
  W32((uint32_t)(ebp + 0xfffffed4u), 0x0u);
/* 8d392f: mov dword ptr [ebp - 0x128], 0 */
  W32((uint32_t)(ebp + 0xfffffed8u), 0x0u);
/* 8d3939: mov dword ptr [ebp - 0x124], ecx */
  W32((uint32_t)(ebp + 0xfffffedcu), ecx);
/* 8d393f: mov dword ptr [ebp - 0x120], 0 */
  W32((uint32_t)(ebp + 0xfffffee0u), 0x0u);
/* 8d3949: mov dword ptr [ebp - 0x11c], 0 */
  W32((uint32_t)(ebp + 0xfffffee4u), 0x0u);
/* 8d3953: mov dword ptr [ebp - 0x118], 0 */
  W32((uint32_t)(ebp + 0xfffffee8u), 0x0u);
/* 8d395d: mov dword ptr [ebp - 0x114], 0 */
  W32((uint32_t)(ebp + 0xfffffeecu), 0x0u);
/* 8d3967: mov dword ptr [ebp - 0x110], edx */
  W32((uint32_t)(ebp + 0xfffffef0u), edx);
/* 8d396d: mov dword ptr [ebp - 0x10c], 0 */
  W32((uint32_t)(ebp + 0xfffffef4u), 0x0u);
/* 8d3977: mov dword ptr [ebp - 0x108], 0 */
  W32((uint32_t)(ebp + 0xfffffef8u), 0x0u);
/* 8d3981: mov dword ptr [ebp - 0x104], 0 */
  W32((uint32_t)(ebp + 0xfffffefcu), 0x0u);
/* 8d398b: mov dword ptr [ebp - 0x100], 0 */
  W32((uint32_t)(ebp + 0xffffff00u), 0x0u);
/* 8d3995: mov dword ptr [ebp - 0xfc], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff04u), 0x3f800000u);
/* 8d399f: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8d39a3: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d39a6: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8d39ab: mov edi, esp */
  edi = esp;
/* 8d39ad: lea esi, [ebp - 0x3a8] */
  esi = (uint32_t)(ebp + 0xfffffc58u);
/* 8d39b3: lea eax, [ebp - 0x2e8] */
  eax = (uint32_t)(ebp + 0xfffffd18u);
/* 8d39b9: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8d39bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d39bc: lea ecx, [ebp - 0x138] */
  ecx = (uint32_t)(ebp + 0xfffffec8u);
/* 8d39c2: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x8d39c8u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 8d39c8: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d39cb: mov edi, esp */
  edi = esp;
/* 8d39cd: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8d39d2: lea esi, [ebp - 0x228] */
  esi = (uint32_t)(ebp + 0xfffffdd8u);
/* 8d39d8: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8d39da: lea ecx, [ebp - 0x368] */
  ecx = (uint32_t)(ebp + 0xfffffc98u);
/* 8d39e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d39e1: mov ecx, eax */
  ecx = eax;
/* 8d39e3: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 8d39e7: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x8d39edu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 8d39ed: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8d39f0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8d39f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d39f3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d39f5: mov ecx, esi */
  ecx = esi;
/* 8d39f7: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 8d39fb: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x8d39feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d39fe: lea ecx, [ebp - 0x368] */
  ecx = (uint32_t)(ebp + 0xfffffc98u);
/* 8d3a04: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 8d3a08: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8d3a0eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8d3a0e: lea ecx, [ebp - 0x2e8] */
  ecx = (uint32_t)(ebp + 0xfffffd18u);
/* 8d3a14: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8d3a18: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8d3a1eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8d3a1e: lea ecx, [ebp - 0x138] */
  ecx = (uint32_t)(ebp + 0xfffffec8u);
/* 8d3a24: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8d3a28: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8d3a2eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8d3a2e: lea ecx, [ebp - 0x268] */
  ecx = (uint32_t)(ebp + 0xfffffd98u);
/* 8d3a34: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8d3a38: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8d3a3eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8d3a3e: lea ecx, [ebp - 0x2a8] */
  ecx = (uint32_t)(ebp + 0xfffffd58u);
/* 8d3a44: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8d3a48: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8d3a4eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8d3a4e: lea ecx, [ebp - 0x328] */
  ecx = (uint32_t)(ebp + 0xfffffcd8u);
/* 8d3a54: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8d3a58: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8d3a5eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8d3a5e: lea ecx, [ebp - 0xf8] */
  ecx = (uint32_t)(ebp + 0xffffff08u);
/* 8d3a64: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8d3a68: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8d3a6eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8d3a6e: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 8d3a71: mov ecx, eax */
  ecx = eax;
/* 8d3a73: shr ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8d3a76: mov dword ptr [ebp - 0x60], ecx */
  W32((uint32_t)(ebp + 0xffffffa0u), ecx);
/* 8d3a79: fild dword ptr [ebp - 0x60] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 8d3a7c: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8d3a7f: fmul dword ptr [ebx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x24u)));
/* 8d3a82: call 0x99c958 */
  esp -= 4; W32(esp, 0x8d3a87u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8d3a87: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8d3a89: mov byte ptr [ebp - 0x19], al */
  W8((uint32_t)(ebp + 0xffffffe7u), (eax & 0xffu));
/* 8d3a8c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d3a8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d3a90: mov ecx, esi */
  ecx = esi;
/* 8d3a92: call dword ptr [edx + 0x34] */
  { uint32_t t = R32((uint32_t)(edx + 0x34u)); esp -= 4; W32(esp, 0x8d3a95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d3a95: movzx eax, word ptr [ebp - 0xac] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff54u)));
/* 8d3a9c: movzx ecx, word ptr [ebp - 0xae] */
  ecx = (uint32_t)(R16((uint32_t)(ebp + 0xffffff52u)));
/* 8d3aa3: mov edi, dword ptr [ebp - 0xb4] */
  edi = R32((uint32_t)(ebp + 0xffffff4cu));
/* 8d3aa9: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8d3aab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d3aac: movzx eax, word ptr [ebp - 0xa8] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff58u)));
/* 8d3ab3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d3ab4: movzx ecx, word ptr [ebp - 0xb0] */
  ecx = (uint32_t)(R16((uint32_t)(ebp + 0xffffff50u)));
/* 8d3abb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d3abc: xor eax, eax */
  eax = 0;
/* 8d3abe: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d3ac0: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 8d3ac3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d3ac4: mov ecx, esi */
  ecx = esi;
/* 8d3ac6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d3ac7: call dword ptr [edx + 0x5c] */
  { uint32_t t = R32((uint32_t)(edx + 0x5cu)); esp -= 4; W32(esp, 0x8d3acau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8d3aca: /* 8d3aca: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d3acd: add ebx, 0x38 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8d3ad0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d3ad1: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8d3ad4: jmp 0x8d37c0 */
  goto L_8d37c0;
L_8d3ad9: /* 8d3ad9: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8d3adc: mov ebx, dword ptr [ebp - 0x40] */
  ebx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8d3adf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d3ae0: jmp 0x8d359c */
  goto L_8d359c;
L_8d3ae5: /* 8d3ae5: lea ecx, [ebp - 0x148] */
  ecx = (uint32_t)(ebp + 0xfffffeb8u);
/* 8d3aeb: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8d3aef: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8d3af5u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_8d3af5: /* 8d3af5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d3af8: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d3afb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d3afc: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8d3aff: mov esi, eax */
  esi = eax;
/* 8d3b01: jmp 0x8d31c0 */
  goto L_8d31c0;
L_8d3b06: /* 8d3b06: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8d3b09: jmp 0x8d3142 */
  goto L_8d3142;
L_8d3b0e: /* 8d3b0e: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 8d3b14: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8d3b16: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d3b18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d3b19: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8d3b1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d3b1c: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8d3b21: mov ecx, dword ptr [0xce83b8] */
  ecx = R32((uint32_t)(0xce83b8u));
/* 8d3b27: mov edi, dword ptr [eax + ecx*4] */
  edi = R32((uint32_t)(eax + ecx*4));
/* 8d3b2a: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8d3b2d: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8d3b2f: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8d3b32: mov dword ptr [eax + ecx*4], edi */
  W32((uint32_t)(eax + ecx*4), edi);
/* 8d3b35: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 8d3b3a: mov ecx, dword ptr [0xce83bc] */
  ecx = R32((uint32_t)(0xce83bcu));
/* 8d3b40: add dword ptr [eax + ecx*4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx*4))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax + ecx*4), r);
  }
/* 8d3b43: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d3b46: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d3b47: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d3b48: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d3b4f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d3b50: mov esp, ebp */
  esp = ebp;
/* 8d3b52: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d3b53: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_8d3b56(void) {
  LOAD_REGS();
L_8d3b56: /* 8d3b56: mov eax, dword ptr [ebp - 0x13c] */
  eax = R32((uint32_t)(ebp + 0xfffffec4u));
/* 8d3b5c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d3b61: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 8d3b64: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d3b65: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 8d3b68: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d3b6du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d3b6d(); return;
}

void f_8d3b6d(void) {
  LOAD_REGS();
L_8d3b6d: /* 8d3b6d: push 0xa1cb28 */
  { uint32_t v = 0xa1cb28u; esp -= 4; W32(esp, v); }
/* 8d3b72: push 0xaeccb8 */
  { uint32_t v = 0xaeccb8u; esp -= 4; W32(esp, v); }
/* 8d3b77: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d3b7du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d3b7d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d3b80: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d3b82: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d3b84: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d3b89u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8d3b89: guest_badaddr(0x8d3b89); return;
}

void f_8d3ea0(void) {
  LOAD_REGS();
L_8d3ea0: /* 8d3ea0: jmp 0x6c6744 */
  SPILL(); f_6c6744(); return;
}

void f_8d3ec0(void) {
  LOAD_REGS();
L_8d3ec0: /* 8d3ec0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d3ec1: mov ebp, esp */
  ebp = esp;
/* 8d3ec3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d3ec5: push 0x9d801c */
  { uint32_t v = 0x9d801cu; esp -= 4; W32(esp, v); }
/* 8d3eca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d3ed0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d3ed1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d3ed8: sub esp, 0x74 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x74u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d3edb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d3edc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d3edd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d3ede: mov esi, ecx */
  esi = ecx;
/* 8d3ee0: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8d3ee3: xor edi, edi */
  edi = 0;
/* 8d3ee5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d3ee8: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 8d3eeb: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8d3eee: call 0x6c3e5e */
  esp -= 4; W32(esp, 0x8d3ef3u); SPILL(); f_6c3e5e(); if (g_unwind) return; RELOAD();
L_8d3ef3: /* 8d3ef3: cmp edi, dword ptr [esi + 0x84] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x84u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d3ef9: jge 0x8d3f5c */
  if ((sf == of)) goto L_8d3f5c;
L_8d3efb: /* 8d3efb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8d3efe: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 8d3f04: mov edx, dword ptr [esi + 0x80] */
  edx = R32((uint32_t)(esi + 0x80u));
/* 8d3f0a: fld dword ptr [ecx + 0x3ac] */
  { double v = F32((uint32_t)(ecx + 0x3acu)); FPUSH(v); }
/* 8d3f10: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 8d3f13: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8d3f15: lea ebx, [esi + 0x80] */
  ebx = (uint32_t)(esi + 0x80u);
/* 8d3f1b: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d3f1e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8d3f21: call 0x6ca46b */
  esp -= 4; W32(esp, 0x8d3f26u); SPILL(); f_6ca46b(); if (g_unwind) return; RELOAD();
/* 8d3f26: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d3f28: jne 0x8d3f59 */
  if (!zf) goto L_8d3f59;
L_8d3f2a: /* 8d3f2a: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8d3f2c: mov eax, dword ptr [ecx + edi*4] */
  eax = R32((uint32_t)(ecx + edi*4));
/* 8d3f2f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d3f31: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 8d3f34: je 0x8d3f4e */
  if (zf) goto L_8d3f4e;
L_8d3f36: /* 8d3f36: mov ecx, eax */
  ecx = eax;
/* 8d3f38: call 0x6c3684 */
  esp -= 4; W32(esp, 0x8d3f3du); SPILL(); f_6c3684(); if (g_unwind) return; RELOAD();
/* 8d3f3d: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 8d3f43: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8d3f45: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8d3f48: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d3f4a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d3f4b: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x8d3f4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8d3f4e: /* 8d3f4e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d3f50: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d3f51: mov ecx, ebx */
  ecx = ebx;
/* 8d3f53: call 0x6c1cfd */
  esp -= 4; W32(esp, 0x8d3f58u); SPILL(); f_6c1cfd(); if (g_unwind) return; RELOAD();
/* 8d3f58: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
L_8d3f59: /* 8d3f59: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8d3f5a: jmp 0x8d3ef3 */
  goto L_8d3ef3;
L_8d3f5c: /* 8d3f5c: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 8d3f61: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8d3f63: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d3f65: push 0xaec89c */
  { uint32_t v = 0xaec89cu; esp -= 4; W32(esp, v); }
/* 8d3f6a: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 8d3f6c: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8d3f6eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d3f6e: mov edi, eax */
  edi = eax;
/* 8d3f70: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d3f72: mov dword ptr [ebp - 0x3c], edi */
  W32((uint32_t)(ebp + 0xffffffc4u), edi);
/* 8d3f75: je 0x8d3fa0 */
  if (zf) goto L_8d3fa0;
L_8d3f77: /* 8d3f77: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 8d3f7a: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8d3f80u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8d3f80: lea ecx, [edi + 0x14] */
  ecx = (uint32_t)(edi + 0x14u);
/* 8d3f83: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8d3f87: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8d3f8du); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8d3f8d: lea ecx, [edi + 0x20] */
  ecx = (uint32_t)(edi + 0x20u);
/* 8d3f90: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8d3f94: call dword ptr [0xcfa28c] */
  esp -= 4; W32(esp, 0x8d3f9au); SPILL(); f_4e3dcd(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@XZ */ RELOAD();
/* 8d3f9a: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8d3f9e: jmp 0x8d3fa2 */
  goto L_8d3fa2;
L_8d3fa0: /* 8d3fa0: xor edi, edi */
  edi = 0;
L_8d3fa2: /* 8d3fa2: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 8d3fa5: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8d3fa7: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 8d3faa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d3fab: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d3fb1: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 8d3fb4: call dword ptr [0xcfa7dc] */
  esp -= 4; W32(esp, 0x8d3fbau); SPILL(); f_4e30a8(); if (g_unwind) return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */ RELOAD();
/* 8d3fba: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8d3fbc: fild dword ptr [ecx + 0x348] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x348u)); FPUSH(v); }
/* 8d3fc2: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 8d3fc5: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 8d3fc8: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8d3fcb: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 8d3fd1: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
L_8d3fd4: /* 8d3fd4: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 8d3fd7: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d3fda: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d3fdb: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d3fdd: jg 0x8d4148 */
  if ((!zf && sf == of)) goto L_8d4148;
L_8d3fe3: /* 8d3fe3: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
L_8d3fe6: /* 8d3fe6: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8d3fe9: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d3fec: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8d3fed: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d3fef: jg 0x8d4140 */
  if ((!zf && sf == of)) goto L_8d4140;
L_8d3ff5: /* 8d3ff5: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8d3ff7: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8d3ffa: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d3ffc: mov ecx, edi */
  ecx = edi;
/* 8d3ffe: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8d4004u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8d4004: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8d400a: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8d400c: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d400f: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8d4012: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d4014: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8d4017: mov edi, eax */
  edi = eax;
/* 8d4019: mov eax, dword ptr [esi + 0x6c] */
  eax = R32((uint32_t)(esi + 0x6cu));
/* 8d401c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d401e: imul eax, dword ptr [ecx + 0x128c] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ecx + 0x128cu)));
  eax = (uint32_t)r;
  }
/* 8d4025: add eax, dword ptr [esi + 0x68] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x68u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d4028: add eax, dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d402b: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8d402e: mov eax, dword ptr [ecx + 0x1280] */
  eax = R32((uint32_t)(ecx + 0x1280u));
/* 8d4034: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8d4037: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d4039: mov edx, edi */
  edx = edi;
/* 8d403b: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8d403d: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8d4040: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8d4043: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8d4046: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8d4049: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8d404c: test byte ptr [edx + 0x15c], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x15cu))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4053: jne 0x8d40b7 */
  if (!zf) goto L_8d40b7;
L_8d4055: /* 8d4055: mov eax, dword ptr [esi + 0x6c] */
  eax = R32((uint32_t)(esi + 0x6cu));
/* 8d4058: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d405a: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 8d405d: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d4060: mov ecx, dword ptr [esi + 0x68] */
  ecx = R32((uint32_t)(esi + 0x68u));
/* 8d4063: fchs  */
  ST0 = -ST0;
/* 8d4065: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8d4068: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d406a: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 8d406d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d406e: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d4071: fchs  */
  ST0 = -ST0;
/* 8d4073: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8d4076: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d4078: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 8d407b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d407c: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8d407f: fchs  */
  ST0 = -ST0;
/* 8d4081: lea edx, [ebp - 0x74] */
  edx = (uint32_t)(ebp + 0xffffff8cu);
/* 8d4084: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 8d4087: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d4088: call 0x6c1677 */
  esp -= 4; W32(esp, 0x8d408du); SPILL(); f_6c1677(); if (g_unwind) return; RELOAD();
/* 8d408d: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8d4090: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 8d4093: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8d4096: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 8d4099: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8d409b: fld dword ptr [ebp - 0x80] */
  { double v = F32((uint32_t)(ebp + 0xffffff80u)); FPUSH(v); }
/* 8d409e: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8d40a0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8d40a2: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8d40a8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d40aa: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d40ad: je 0x8d40b7 */
  if (zf) goto L_8d40b7;
L_8d40af: /* 8d40af: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d40b1: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_8d40b7: /* 8d40b7: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8d40ba: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8d40c0: test byte ptr [eax + 0x15c], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x15cu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d40c7: je 0x8d412a */
  if (zf) goto L_8d412a;
L_8d40c9: /* 8d40c9: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8d40cb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d40cd: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8d40cf: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d40d4: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 8d40d6: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 8d40d9: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 8d40dc: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 8d40df: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 8d40e2: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8d40e4: fmul dword ptr [ebp - 0x50] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 8d40e7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8d40e9: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 8d40ec: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8d40ee: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8d40f0: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 8d40f3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8d40f5: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 8d40f8: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 8d40fe: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8d4104: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d4106: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8d4109: jp 0x8d4115 */
  if (pf) goto L_8d4115;
L_8d410b: /* 8d410b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d410d: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 8d4113: jmp 0x8d412a */
  goto L_8d412a;
L_8d4115: /* 8d4115: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 8d411b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d411d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8d4120: jnp 0x8d412a */
  if (!pf) goto L_8d412a;
L_8d4122: /* 8d4122: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d4124: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_8d412a: /* 8d412a: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d412d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8d412f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d4130: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8d4133: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 8d4136: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d4139: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d413b: jmp 0x8d3fe6 */
  goto L_8d3fe6;
L_8d4140: /* 8d4140: inc dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 8d4143: jmp 0x8d3fd4 */
  goto L_8d3fd4;
L_8d4148: /* 8d4148: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
L_8d414b: /* 8d414b: mov ecx, eax */
  ecx = eax;
/* 8d414d: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8d4150: cmp ecx, dword ptr [ebp + 0x1c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4153: jg 0x8d45fa */
  if ((!zf && sf == of)) goto L_8d45fa;
L_8d4159: /* 8d4159: mov edi, ebx */
  edi = ebx;
L_8d415b: /* 8d415b: cmp edi, dword ptr [ebp + 0x18] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d415e: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 8d4161: jg 0x8d45ee */
  if ((!zf && sf == of)) goto L_8d45ee;
L_8d4167: /* 8d4167: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d416a: mov edx, dword ptr [eax + 0x6c] */
  edx = R32((uint32_t)(eax + 0x6cu));
/* 8d416d: mov esi, dword ptr [eax + 0x40] */
  esi = R32((uint32_t)(eax + 0x40u));
/* 8d4170: mov ebx, dword ptr [eax + 0x68] */
  ebx = R32((uint32_t)(eax + 0x68u));
/* 8d4173: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d4176: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8d4178: mov ecx, dword ptr [esi + 0x128c] */
  ecx = R32((uint32_t)(esi + 0x128cu));
/* 8d417e: mov eax, edx */
  eax = edx;
/* 8d4180: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 8d4183: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d4185: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d4187: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8d418a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8d418b: imul edx, ecx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ecx);
  edx = (uint32_t)r;
  }
/* 8d418e: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8d4190: lea ecx, [edx + edi + 1] */
  ecx = (uint32_t)(edx + edi + 0x1u);
/* 8d4194: mov edx, dword ptr [esi + 0x1280] */
  edx = R32((uint32_t)(esi + 0x1280u));
/* 8d419a: lea edi, [eax + eax*2] */
  edi = (uint32_t)(eax + eax*2);
/* 8d419d: lea edi, [edx + edi*4] */
  edi = (uint32_t)(edx + edi*4);
/* 8d41a0: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 8d41a2: lea eax, [eax + eax*2 + 3] */
  eax = (uint32_t)(eax + eax*2 + 0x3u);
/* 8d41a6: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 8d41a9: mov dword ptr [ebp - 0x5c], ebx */
  W32((uint32_t)(ebp + 0xffffffa4u), ebx);
/* 8d41ac: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 8d41af: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 8d41b2: mov dword ptr [ebp - 0x54], edi */
  W32((uint32_t)(ebp + 0xffffffacu), edi);
/* 8d41b5: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 8d41b7: mov dword ptr [ebp - 0x68], edi */
  W32((uint32_t)(ebp + 0xffffff98u), edi);
/* 8d41ba: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 8d41bd: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8d41c0: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 8d41c3: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 8d41c6: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 8d41c9: mov dword ptr [ebp - 0x64], edi */
  W32((uint32_t)(ebp + 0xffffff9cu), edi);
/* 8d41cc: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 8d41ce: lea ecx, [ecx + ecx*2 - 3] */
  ecx = (uint32_t)(ecx + ecx*2 + 0xfffffffdu);
/* 8d41d2: lea edx, [edx + ecx*4] */
  edx = (uint32_t)(edx + ecx*4);
/* 8d41d5: mov dword ptr [ebp - 0x74], edi */
  W32((uint32_t)(ebp + 0xffffff8cu), edi);
/* 8d41d8: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 8d41db: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8d41de: mov dword ptr [ebp - 0x6c], eax */
  W32((uint32_t)(ebp + 0xffffff94u), eax);
/* 8d41e1: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8d41e3: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8d41e6: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8d41e9: mov dword ptr [ebp - 0x7c], ecx */
  W32((uint32_t)(ebp + 0xffffff84u), ecx);
/* 8d41ec: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8d41ef: mov dword ptr [ebp - 0x78], edx */
  W32((uint32_t)(ebp + 0xffffff88u), edx);
/* 8d41f2: add ecx, 0x358 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x358u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d41f8: lea edx, [ebp - 0x5c] */
  edx = (uint32_t)(ebp + 0xffffffa4u);
/* 8d41fb: mov dword ptr [ebp - 0x58], ebx */
  W32((uint32_t)(ebp + 0xffffffa8u), ebx);
/* 8d41fe: mov dword ptr [ebp - 0x70], edi */
  W32((uint32_t)(ebp + 0xffffff90u), edi);
/* 8d4201: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 8d4204: call 0x8c3e30 */
  esp -= 4; W32(esp, 0x8d4209u); SPILL(); f_8c3e30(); if (g_unwind) return; RELOAD();
/* 8d4209: mov ebx, eax */
  ebx = eax;
/* 8d420b: lea edx, [ebp - 0x68] */
  edx = (uint32_t)(ebp + 0xffffff98u);
/* 8d420e: mov dword ptr [ebp - 0x3c], ebx */
  W32((uint32_t)(ebp + 0xffffffc4u), ebx);
/* 8d4211: call 0x8c3e30 */
  esp -= 4; W32(esp, 0x8d4216u); SPILL(); f_8c3e30(); if (g_unwind) return; RELOAD();
/* 8d4216: lea edx, [ebp - 0x74] */
  edx = (uint32_t)(ebp + 0xffffff8cu);
/* 8d4219: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 8d421c: call 0x8c3e30 */
  esp -= 4; W32(esp, 0x8d4221u); SPILL(); f_8c3e30(); if (g_unwind) return; RELOAD();
/* 8d4221: lea edx, [ebp - 0x80] */
  edx = (uint32_t)(ebp + 0xffffff80u);
/* 8d4224: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8d4227: call 0x8c3e30 */
  esp -= 4; W32(esp, 0x8d422cu); SPILL(); f_8c3e30(); if (g_unwind) return; RELOAD();
/* 8d422c: mov ecx, dword ptr [esi + 0x128c] */
  ecx = R32((uint32_t)(esi + 0x128cu));
/* 8d4232: imul ecx, dword ptr [ebp - 0x24] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  ecx = (uint32_t)r;
  }
/* 8d4236: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8d4239: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d423c: mov edi, dword ptr [eax + 0x68] */
  edi = R32((uint32_t)(eax + 0x68u));
/* 8d423f: mov eax, dword ptr [esi + 0x1328] */
  eax = R32((uint32_t)(esi + 0x1328u));
/* 8d4245: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d4247: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8d424a: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d424c: mov edx, ecx */
  edx = ecx;
/* 8d424e: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 8d4251: mov esi, 1 */
  esi = 0x1u;
/* 8d4256: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 8d4258: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8d425b: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 8d425e: mov esi, dword ptr [eax + edx*4] */
  esi = R32((uint32_t)(eax + edx*4));
/* 8d4261: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8d4264: and esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 8d4266: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  esi = r;
  }
/* 8d4268: sbb esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  esi = r;
  }
/* 8d426a: xor ecx, ecx */
  ecx = 0;
/* 8d426c: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  zf = (r) == 0;
  esi = r;
  }
/* 8d426e: je 0x8d4354 */
  if (zf) goto L_8d4354;
L_8d4274: /* 8d4274: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4277: jge 0x8d4299 */
  if ((sf == of)) goto L_8d4299;
L_8d4279: /* 8d4279: mov edx, 1 */
  edx = 0x1u;
/* 8d427e: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 8d4280: test ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4282: je 0x8d4296 */
  if (zf) goto L_8d4296;
L_8d4284: /* 8d4284: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8d4287: test eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4289: je 0x8d4296 */
  if (zf) goto L_8d4296;
L_8d428b: /* 8d428b: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 8d428e: test eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4290: jne 0x8d4422 */
  if (!zf) goto L_8d4422;
L_8d4296: /* 8d4296: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8d4297: jmp 0x8d4274 */
  goto L_8d4274;
L_8d4299: /* 8d4299: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 8d429c: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8d429f: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 8d42a2: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d42a5: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8d42a7: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8d42a9: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d42ac: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8d42af: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 8d42b2: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8d42b5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d42b8: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8d42ba: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d42bc: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 8d42bf: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d42c2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d42c3: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8d42c6: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 8d42c9: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8d42cfu); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8d42cf: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d42d2: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 8d42d5: test byte ptr [ecx + 0x1260], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x1260u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d42dc: je 0x8d4319 */
  if (zf) goto L_8d4319;
L_8d42de: /* 8d42de: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8d42e1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d42e4: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 8d42e7: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8d42e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d42e9: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d42ec: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 8d42ef: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8d42f5u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8d42f5: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d42f8: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8d42f9: imul ecx, dword ptr [ebp - 0x18] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  ecx = (uint32_t)r;
  }
/* 8d42fd: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8d42ff: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_8d4301: /* 8d4301: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 8d4304: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d4307: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 8d430a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d430b: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d430e: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8d4314u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8d4314: jmp 0x8d4425 */
  goto L_8d4425;
L_8d4319: /* 8d4319: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d431c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d431d: imul eax, dword ptr [ebp - 0x18] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  eax = (uint32_t)r;
  }
/* 8d4321: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 8d4324: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d4325: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d4328: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8d432a: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d432c: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d432f: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 8d4332: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8d4338u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8d4338: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8d433b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d433e: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 8d4341: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8d4342: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d4343: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d4346: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 8d4349: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8d434fu); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8d434f: jmp 0x8d4425 */
  goto L_8d4425;
L_8d4354: /* 8d4354: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4357: jge 0x8d4379 */
  if ((sf == of)) goto L_8d4379;
L_8d4359: /* 8d4359: mov edx, 1 */
  edx = 0x1u;
/* 8d435e: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 8d4360: test ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4362: je 0x8d4376 */
  if (zf) goto L_8d4376;
L_8d4364: /* 8d4364: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8d4367: test eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4369: je 0x8d4376 */
  if (zf) goto L_8d4376;
L_8d436b: /* 8d436b: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8d436e: test eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4370: jne 0x8d4422 */
  if (!zf) goto L_8d4422;
L_8d4376: /* 8d4376: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8d4377: jmp 0x8d4354 */
  goto L_8d4354;
L_8d4379: /* 8d4379: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 8d437c: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8d437f: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 8d4382: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d4385: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8d4387: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8d4389: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d438c: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8d438f: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 8d4392: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8d4395: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d4398: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8d439a: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 8d439d: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d439f: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d43a2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d43a3: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 8d43a6: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8d43acu); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8d43ac: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d43af: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 8d43b2: test byte ptr [ecx + 0x1260], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x1260u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d43b9: je 0x8d43e7 */
  if (zf) goto L_8d43e7;
L_8d43bb: /* 8d43bb: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d43be: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d43c1: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8d43c2: imul edx, dword ptr [ebp - 0x18] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  edx = (uint32_t)r;
  }
/* 8d43c6: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 8d43c8: lea eax, [edx + edi] */
  eax = (uint32_t)(edx + edi);
/* 8d43cb: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8d43ce: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d43cf: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 8d43d2: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 8d43d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d43d6: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d43d9: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8d43dfu); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8d43df: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d43e2: jmp 0x8d4301 */
  goto L_8d4301;
L_8d43e7: /* 8d43e7: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d43ea: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d43eb: imul eax, dword ptr [ebp - 0x18] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  eax = (uint32_t)r;
  }
/* 8d43ef: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 8d43f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d43f3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d43f6: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8d43f8: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d43fa: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d43fd: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8d4400: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 8d4403: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8d4409u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8d4409: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d440c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d440f: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 8d4412: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8d4413: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d4414: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d4417: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 8d441a: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8d4420u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8d4420: jmp 0x8d4425 */
  goto L_8d4425;
L_8d4422: /* 8d4422: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
L_8d4425: /* 8d4425: xor ecx, ecx */
  ecx = 0;
/* 8d4427: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4429: je 0x8d4513 */
  if (zf) goto L_8d4513;
L_8d442f: /* 8d442f: nop  */
L_8d4430: /* 8d4430: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4433: jge 0x8d4456 */
  if ((sf == of)) goto L_8d4456;
L_8d4435: /* 8d4435: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8d4438: mov eax, 1 */
  eax = 0x1u;
/* 8d443d: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 8d443f: test eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4441: je 0x8d4453 */
  if (zf) goto L_8d4453;
L_8d4443: /* 8d4443: test dword ptr [ebp - 0x30], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4446: je 0x8d4453 */
  if (zf) goto L_8d4453;
L_8d4448: /* 8d4448: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8d444b: test edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d444d: jne 0x8d45e5 */
  if (!zf) goto L_8d45e5;
L_8d4453: /* 8d4453: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8d4454: jmp 0x8d4430 */
  goto L_8d4430;
L_8d4456: /* 8d4456: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 8d4459: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 8d445c: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d445f: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8d4461: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8d4463: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d4466: lea ecx, [esi + 1] */
  ecx = (uint32_t)(esi + 0x1u);
/* 8d4469: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 8d446c: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8d446e: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8d4471: lea eax, [ecx + edi] */
  eax = (uint32_t)(ecx + edi);
/* 8d4474: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d4477: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 8d447a: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d447d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d447e: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8d4481: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 8d4484: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8d448au); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8d448a: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d448d: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 8d4490: test byte ptr [ecx + 0x1260], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x1260u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4497: je 0x8d44d6 */
  if (zf) goto L_8d44d6;
L_8d4499: /* 8d4499: imul esi, dword ptr [ebp - 0x18] */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  esi = (uint32_t)r;
  }
/* 8d449d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d44a0: sub esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8d44a2: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 8d44a5: lea edx, [esi + edi + 1] */
  edx = (uint32_t)(esi + edi + 0x1u);
/* 8d44a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d44aa: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d44ad: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 8d44b0: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8d44b6u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8d44b6: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d44b9: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8d44ba: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 8d44bd: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d44c0: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 8d44c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d44c4: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d44c7: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8d44cdu); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8d44cd: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d44d0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8d44d1: jmp 0x8d415b */
  goto L_8d415b;
L_8d44d6: /* 8d44d6: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d44d9: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 8d44dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d44dd: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d44e0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d44e1: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d44e4: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 8d44e7: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8d44edu); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8d44ed: imul esi, dword ptr [ebp - 0x18] */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  esi = (uint32_t)r;
  }
/* 8d44f1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d44f4: sub esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8d44f6: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 8d44f9: lea edx, [esi + edi + 1] */
  edx = (uint32_t)(esi + edi + 0x1u);
/* 8d44fd: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d4500: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d4501: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 8d4504: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8d450au); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8d450a: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d450d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8d450e: jmp 0x8d415b */
  goto L_8d415b;
L_8d4513: /* 8d4513: cmp ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4516: jge 0x8d4539 */
  if ((sf == of)) goto L_8d4539;
L_8d4518: /* 8d4518: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8d451b: mov eax, 1 */
  eax = 0x1u;
/* 8d4520: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 8d4522: test eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4524: je 0x8d4536 */
  if (zf) goto L_8d4536;
L_8d4526: /* 8d4526: test dword ptr [ebp - 0x30], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4529: je 0x8d4536 */
  if (zf) goto L_8d4536;
L_8d452b: /* 8d452b: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8d452e: test edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4530: jne 0x8d45e5 */
  if (!zf) goto L_8d45e5;
L_8d4536: /* 8d4536: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8d4537: jmp 0x8d4513 */
  goto L_8d4513;
L_8d4539: /* 8d4539: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 8d453c: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 8d453f: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d4542: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8d4544: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8d4546: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d4549: mov ecx, esi */
  ecx = esi;
/* 8d454b: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 8d454e: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8d4550: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8d4553: lea eax, [ecx + edi] */
  eax = (uint32_t)(ecx + edi);
/* 8d4556: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d4559: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 8d455c: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d455f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d4560: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8d4563: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 8d4566: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 8d4569: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8d456fu); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8d456f: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d4572: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 8d4575: test byte ptr [ecx + 0x1260], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x1260u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d457c: je 0x8d45b6 */
  if (zf) goto L_8d45b6;
L_8d457e: /* 8d457e: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8d4581: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d4584: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 8d4587: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8d4588: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d4589: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 8d458c: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8d4592u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8d4592: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8d4593: imul esi, dword ptr [ebp - 0x18] */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  esi = (uint32_t)r;
  }
/* 8d4597: sub esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8d4599: lea ecx, [esi + edi + 1] */
  ecx = (uint32_t)(esi + edi + 0x1u);
/* 8d459d: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 8d45a0: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
/* 8d45a3: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d45a6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d45a7: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8d45adu); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8d45ad: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d45b0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8d45b1: jmp 0x8d415b */
  goto L_8d415b;
L_8d45b6: /* 8d45b6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8d45b7: imul esi, dword ptr [ebp - 0x18] */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  esi = (uint32_t)r;
  }
/* 8d45bb: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8d45be: sub esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8d45c0: lea eax, [esi + edi + 1] */
  eax = (uint32_t)(esi + edi + 0x1u);
/* 8d45c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d45c5: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d45c8: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 8d45cb: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8d45d1u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8d45d1: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8d45d4: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d45d7: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 8d45da: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8d45db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d45dc: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 8d45df: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8d45e5u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
L_8d45e5: /* 8d45e5: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d45e8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8d45e9: jmp 0x8d415b */
  goto L_8d415b;
L_8d45ee: /* 8d45ee: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d45f1: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d45f4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d45f5: jmp 0x8d414b */
  goto L_8d414b;
L_8d45fa: /* 8d45fa: mov ecx, dword ptr [edi + 0x24] */
  ecx = R32((uint32_t)(edi + 0x24u));
/* 8d45fd: xor eax, eax */
  eax = 0;
/* 8d45ff: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d4601: je 0x8d463f */
  if (zf) goto L_8d463f;
L_8d4603: /* 8d4603: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 8d4606: mov dword ptr [edi + 0x2c], eax */
  W32((uint32_t)(edi + 0x2cu), eax);
/* 8d4609: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8d460c: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8d460f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8d4610: add esi, 0x80 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8d4616: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8d4618: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8d461b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d461d: mov ecx, esi */
  ecx = esi;
/* 8d461f: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 8d4621: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8d4627u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8d4627: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8d4629: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* 8d462c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d462f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d4636: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d4637: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d4638: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d4639: mov esp, ebp */
  esp = ebp;
/* 8d463b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d463c: ret 0x18 */
  esp += 28; SPILL(); return;
L_8d463f: /* 8d463f: mov dword ptr [ebp + 0x18], edi */
  W32((uint32_t)(ebp + 0x18u), edi);
/* 8d4642: lea ecx, [edi + 0x20] */
  ecx = (uint32_t)(edi + 0x20u);
/* 8d4645: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8d4649: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x8d464fu); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 8d464f: lea ecx, [edi + 0x14] */
  ecx = (uint32_t)(edi + 0x14u);
/* 8d4652: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8d4656: call 0x6cb555 */
  esp -= 4; W32(esp, 0x8d465bu); SPILL(); f_6cb555(); if (g_unwind) return; RELOAD();
/* 8d465b: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 8d465e: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8d4662: call 0x6cae43 */
  esp -= 4; W32(esp, 0x8d4667u); SPILL(); f_6cae43(); if (g_unwind) return; RELOAD();
/* 8d4667: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 8d466d: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8d466f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d4671: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d4672: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x8d4675u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d4675: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d4678: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d4679: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d467a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d4681: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d4682: mov esp, ebp */
  esp = ebp;
/* 8d4684: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d4685: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_8d4688(void) {
  LOAD_REGS();
L_8d4688: /* 8d4688: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8d468b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d4690: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 8d4693: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d4694: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 8d4697: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d469cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d469c(); return;
}

void f_8d469c(void) {
  LOAD_REGS();
L_8d469c: /* 8d469c: push 0xa1cb78 */
  { uint32_t v = 0xa1cb78u; esp -= 4; W32(esp, v); }
/* 8d46a1: push 0xaec8d8 */
  { uint32_t v = 0xaec8d8u; esp -= 4; W32(esp, v); }
/* 8d46a6: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d46acu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d46ac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d46af: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d46b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d46b3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d46b8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8d46b8: guest_badaddr(0x8d46b8); return;
}

void f_8d48c0(void) {
  LOAD_REGS();
L_8d48c0: /* 8d48c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d48c1: mov ebp, esp */
  ebp = esp;
/* 8d48c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d48c5: push 0x9d805b */
  { uint32_t v = 0x9d805bu; esp -= 4; W32(esp, v); }
/* 8d48ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d48d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d48d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d48d8: sub esp, 0xfc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d48de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d48df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d48e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d48e1: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8d48e4: mov ecx, dword ptr [ecx + 0x54] */
  ecx = R32((uint32_t)(ecx + 0x54u));
/* 8d48e7: xor edi, edi */
  edi = 0;
/* 8d48e9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d48ec: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8d48ef: call 0x6c3e5e */
  esp -= 4; W32(esp, 0x8d48f4u); SPILL(); f_6c3e5e(); if (g_unwind) return; RELOAD();
/* 8d48f4: mov eax, dword ptr [0xb19088] */
  eax = R32((uint32_t)(0xb19088u));
/* 8d48f9: test byte ptr [eax + 0x10], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x10u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d48fd: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8d4900: je 0x8d4912 */
  if (zf) goto L_8d4912;
L_8d4902: /* 8d4902: test dword ptr [ebx + 0x88], 0x18000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x88u))); uint32_t b = (uint32_t)(0x18000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d490c: jne 0x8d511a */
  if (!zf) goto L_8d511a;
L_8d4912: /* 8d4912: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 8d4918: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8d491a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d491c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d491e: push 0xaec950 */
  { uint32_t v = 0xaec950u; esp -= 4; W32(esp, v); }
/* 8d4923: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8d4926u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d4926: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 8d4929: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8d492fu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8d492f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8d4933: jmp 0x8d4940 */
  goto L_8d4940;
L_8d4940: /* 8d4940: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 8d4946: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4949: jge 0x8d49d8 */
  if ((sf == of)) goto L_8d49d8;
L_8d494f: /* 8d494f: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 8d4952: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 8d4955: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4957: je 0x8d49d2 */
  if (zf) goto L_8d49d2;
L_8d4959: /* 8d4959: cmp byte ptr [esi + 0x28], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x28u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8d495d: jne 0x8d49d2 */
  if (!zf) goto L_8d49d2;
L_8d495f: /* 8d495f: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 8d4965: test al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4967: je 0x8d49d2 */
  if (zf) goto L_8d49d2;
L_8d4969: /* 8d4969: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d496c: je 0x8d49d2 */
  if (zf) goto L_8d49d2;
L_8d496e: /* 8d496e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d4971: mov edx, dword ptr [ecx + 0x54] */
  edx = R32((uint32_t)(ecx + 0x54u));
/* 8d4974: mov al, byte ptr [esi + 0xc8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xc8u))) & 0xffu);
/* 8d497a: cmp al, byte ptr [edx + 0xc8] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edx + 0xc8u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8d4980: je 0x8d499b */
  if (zf) goto L_8d499b;
L_8d4982: /* 8d4982: mov ecx, dword ptr [esi + 0xc0] */
  ecx = R32((uint32_t)(esi + 0xc0u));
/* 8d4988: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d498a: je 0x8d49d2 */
  if (zf) goto L_8d49d2;
L_8d498c: /* 8d498c: push 0xb5f348 */
  { uint32_t v = 0xb5f348u; esp -= 4; W32(esp, v); }
/* 8d4991: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8d4997u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8d4997: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4999: je 0x8d49d2 */
  if (zf) goto L_8d49d2;
L_8d499b: /* 8d499b: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d499e: mov edx, dword ptr [ecx + 0x54] */
  edx = R32((uint32_t)(ecx + 0x54u));
/* 8d49a1: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 8d49a7: mov ecx, dword ptr [edx + 0x80] */
  ecx = R32((uint32_t)(edx + 0x80u));
/* 8d49ad: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 8d49af: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d49b2: jne 0x8d49d2 */
  if (!zf) goto L_8d49d2;
L_8d49b4: /* 8d49b4: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d49b7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d49b9: je 0x8d49bf */
  if (zf) goto L_8d49bf;
L_8d49bb: /* 8d49bb: test al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d49bd: je 0x8d49d2 */
  if (zf) goto L_8d49d2;
L_8d49bf: /* 8d49bf: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8d49c1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d49c3: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 8d49c6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8d49ccu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8d49cc: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 8d49cf: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
L_8d49d2: /* 8d49d2: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8d49d3: jmp 0x8d4940 */
  goto L_8d4940;
L_8d49d8: /* 8d49d8: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d49db: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* 8d49de: mov eax, dword ptr [ecx + 0x1284] */
  eax = R32((uint32_t)(ecx + 0x1284u));
/* 8d49e4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8d49e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d49e7: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 8d49ed: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x8d49f3u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 8d49f3: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d49f6: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8d49fa: xor esi, esi */
  esi = 0;
/* 8d49fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8d4a00: /* 8d4a00: mov eax, dword ptr [ebx + 0x54] */
  eax = R32((uint32_t)(ebx + 0x54u));
/* 8d4a03: cmp esi, dword ptr [eax + 0x1284] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1284u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4a09: jge 0x8d4a6d */
  if ((sf == of)) goto L_8d4a6d;
L_8d4a0b: /* 8d4a0b: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 8d4a11: mov edx, dword ptr [ebp - 0x88] */
  edx = R32((uint32_t)(ebp + 0xffffff78u));
/* 8d4a17: mov eax, dword ptr [eax + 0x1280] */
  eax = R32((uint32_t)(eax + 0x1280u));
/* 8d4a1d: lea edi, [edx + esi*4] */
  edi = (uint32_t)(edx + esi*4);
/* 8d4a20: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d4a23: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 8d4a26: lea edx, [eax + edx*4] */
  edx = (uint32_t)(eax + edx*4);
/* 8d4a29: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 8d4a2b: mov eax, esp */
  eax = esp;
/* 8d4a2d: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 8d4a2f: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 8d4a32: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8d4a35: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 8d4a38: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d4a39: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 8d4a3f: mov ecx, dword ptr [ecx + 0x8c] */
  ecx = R32((uint32_t)(ecx + 0x8cu));
/* 8d4a45: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8d4a48: lea eax, [ebp - 0xc8] */
  eax = (uint32_t)(ebp + 0xffffff38u);
/* 8d4a4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d4a4f: call 0x6c9192 */
  esp -= 4; W32(esp, 0x8d4a54u); SPILL(); f_6c9192(); if (g_unwind) return; RELOAD();
/* 8d4a54: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d4a57: mov al, byte ptr [eax + 8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x8u))) & 0xffu);
/* 8d4a5a: mov edx, dword ptr [ebx + 0x54] */
  edx = R32((uint32_t)(ebx + 0x54u));
/* 8d4a5d: sub al, byte ptr [edx + 0xc8] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edx + 0xc8u)));
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8d4a63: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8d4a65: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 8d4a67: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d4a68: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 8d4a6a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8d4a6b: jmp 0x8d4a00 */
  goto L_8d4a00;
L_8d4a6d: /* 8d4a6d: xor esi, esi */
  esi = 0;
/* 8d4a6f: mov dword ptr [ebp - 0x3c], esi */
  W32((uint32_t)(ebp + 0xffffffc4u), esi);
L_8d4a72: /* 8d4a72: mov eax, dword ptr [ebx + 0x54] */
  eax = R32((uint32_t)(ebx + 0x54u));
/* 8d4a75: mov ecx, dword ptr [eax + 0x1278] */
  ecx = R32((uint32_t)(eax + 0x1278u));
/* 8d4a7b: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4a7d: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 8d4a83: jge 0x8d50f8 */
  if ((sf == of)) goto L_8d50f8;
L_8d4a89: /* 8d4a89: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8d4a8b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8d4a8d: push 0xaec978 */
  { uint32_t v = 0xaec978u; esp -= 4; W32(esp, v); }
/* 8d4a92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d4a93: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d4a94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d4a95: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x8d4a98u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d4a98: mov eax, dword ptr [ebx + 0x54] */
  eax = R32((uint32_t)(ebx + 0x54u));
/* 8d4a9b: mov ecx, dword ptr [eax + 0x1274] */
  ecx = R32((uint32_t)(eax + 0x1274u));
/* 8d4aa1: mov edi, dword ptr [ecx + esi*4] */
  edi = R32((uint32_t)(ecx + esi*4));
/* 8d4aa4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d4aa7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d4aa9: lea ecx, [edi + 0x44] */
  ecx = (uint32_t)(edi + 0x44u);
/* 8d4aac: mov dword ptr [ebp - 0x38], edi */
  W32((uint32_t)(ebp + 0xffffffc8u), edi);
/* 8d4aaf: call dword ptr [0xcfa894] */
  esp -= 4; W32(esp, 0x8d4ab5u); SPILL(); f_4e44f8(); if (g_unwind) return; /* Core!?GetExtrema@FBox@@QAEAAVFVector@@H@Z */ RELOAD();
/* 8d4ab5: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 8d4ab7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d4ab8: lea ecx, [ebp - 0xbc] */
  ecx = (uint32_t)(ebp + 0xffffff44u);
/* 8d4abe: call dword ptr [0xcfa55c] */
  esp -= 4; W32(esp, 0x8d4ac4u); SPILL(); f_4e34c2(); if (g_unwind) return; /* Core!??0FSphere@@QAE@PBVFVector@@H@Z */ RELOAD();
/* 8d4ac4: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8d4ac7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4ac9: jne 0x8d4af5 */
  if (!zf) goto L_8d4af5;
L_8d4acb: /* 8d4acb: lea ebx, [edi + 0x34] */
  ebx = (uint32_t)(edi + 0x34u);
/* 8d4ace: xor esi, esi */
  esi = 0;
L_8d4ad0: /* 8d4ad0: cmp esi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4ad3: jge 0x8d4ae9 */
  if ((sf == of)) goto L_8d4ae9;
L_8d4ad5: /* 8d4ad5: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8d4ad7: mov eax, esi */
  eax = esi;
/* 8d4ad9: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8d4adc: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d4ade: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 8d4ae1: call 0x6c3e13 */
  esp -= 4; W32(esp, 0x8d4ae6u); SPILL(); f_6c3e13(); if (g_unwind) return; RELOAD();
/* 8d4ae6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8d4ae7: jmp 0x8d4ad0 */
  goto L_8d4ad0;
L_8d4ae9: /* 8d4ae9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d4aeb: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8d4aed: mov ecx, ebx */
  ecx = ebx;
/* 8d4aef: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8d4af5u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
L_8d4af5: /* 8d4af5: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8d4af8: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8d4afeu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8d4afe: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8d4b02: xor esi, esi */
  esi = 0;
L_8d4b04: /* 8d4b04: cmp esi, dword ptr [ebp - 0x6c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff94u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4b07: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 8d4b0a: jge 0x8d4c30 */
  if ((sf == of)) goto L_8d4c30;
L_8d4b10: /* 8d4b10: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 8d4b13: mov ebx, dword ptr [edx + esi*4] */
  ebx = R32((uint32_t)(edx + esi*4));
/* 8d4b16: cmp byte ptr [ebx + 0x29], 0x13 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x29u))); uint8_t b = (uint8_t)(0x13u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8d4b1a: je 0x8d4b8b */
  if (zf) goto L_8d4b8b;
L_8d4b1c: /* 8d4b1c: fld dword ptr [ebx + 0x178] */
  { double v = F32((uint32_t)(ebx + 0x178u)); FPUSH(v); }
/* 8d4b22: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8d4b24: fsub dword ptr [ebp - 0xb4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff4cu)));
/* 8d4b2a: mov ecx, ebx */
  ecx = ebx;
/* 8d4b2c: fld dword ptr [ebx + 0x174] */
  { double v = F32((uint32_t)(ebx + 0x174u)); FPUSH(v); }
/* 8d4b32: fsub dword ptr [ebp - 0xb8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff48u)));
/* 8d4b38: fld dword ptr [ebx + 0x170] */
  { double v = F32((uint32_t)(ebx + 0x170u)); FPUSH(v); }
/* 8d4b3e: fsub dword ptr [ebp - 0xbc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff44u)));
/* 8d4b44: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 8d4b4a: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 8d4b50: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 8d4b56: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x8d4b5cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d4b5c: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 8d4b5f: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 8d4b65: fadd dword ptr [ebp - 0xb0] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff50u)));
/* 8d4b6b: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 8d4b6e: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8d4b74u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8d4b74: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8d4b77: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8d4b7a: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 8d4b7d: fcomp dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
  FPOP();
/* 8d4b80: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d4b82: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4b85: jne 0x8d4c2a */
  if (!zf) goto L_8d4c2a;
L_8d4b8b: /* 8d4b8b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8d4b8e: xor esi, esi */
  esi = 0;
/* 8d4b90: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4b92: je 0x8d4bb2 */
  if (zf) goto L_8d4bb2;
L_8d4b94: /* 8d4b94: xor ecx, ecx */
  ecx = 0;
L_8d4b96: /* 8d4b96: cmp ecx, dword ptr [edi + 0x38] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4b99: jge 0x8d4bae */
  if ((sf == of)) goto L_8d4bae;
L_8d4b9b: /* 8d4b9b: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 8d4b9e: mov edx, ecx */
  edx = ecx;
/* 8d4ba0: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8d4ba3: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d4ba5: cmp dword ptr [eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d4ba7: jne 0x8d4bab */
  if (!zf) goto L_8d4bab;
L_8d4ba9: /* 8d4ba9: mov esi, eax */
  esi = eax;
L_8d4bab: /* 8d4bab: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8d4bac: jmp 0x8d4b96 */
  goto L_8d4b96;
L_8d4bae: /* 8d4bae: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4bb0: jne 0x8d4bdb */
  if (!zf) goto L_8d4bdb;
L_8d4bb2: /* 8d4bb2: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8d4bb4: lea esi, [edi + 0x34] */
  esi = (uint32_t)(edi + 0x34u);
/* 8d4bb7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d4bb9: mov ecx, esi */
  ecx = esi;
/* 8d4bbb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8d4bc1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8d4bc1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8d4bc3: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8d4bc6: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8d4bc8: mov esi, eax */
  esi = eax;
/* 8d4bca: je 0x8d4bd9 */
  if (zf) goto L_8d4bd9;
L_8d4bcc: /* 8d4bcc: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8d4bcf: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 8d4bd1: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8d4bd7u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8d4bd7: jmp 0x8d4bdb */
  goto L_8d4bdb;
L_8d4bd9: /* 8d4bd9: xor esi, esi */
  esi = 0;
L_8d4bdb: /* 8d4bdb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d4bdd: lea ebx, [esi + 4] */
  ebx = (uint32_t)(esi + 0x4u);
/* 8d4be0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d4be2: mov ecx, ebx */
  ecx = ebx;
/* 8d4be4: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8d4beau); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8d4bea: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 8d4bed: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 8d4bf0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d4bf1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8d4bf2: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 8d4bf5: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d4bf8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8d4bf9: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8d4bfc: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d4bfe: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8d4c01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d4c02: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d4c04: mov ecx, ebx */
  ecx = ebx;
/* 8d4c06: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8d4c0cu); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8d4c0c: mov ebx, dword ptr [edi + 0x34] */
  ebx = R32((uint32_t)(edi + 0x34u));
/* 8d4c0f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8d4c11: sub esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8d4c13: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d4c15: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8d4c18: sar esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 8d4c1b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8d4c21u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8d4c21: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8d4c24: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
/* 8d4c27: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
L_8d4c2a: /* 8d4c2a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8d4c2b: jmp 0x8d4b04 */
  goto L_8d4b04;
L_8d4c30: /* 8d4c30: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8d4c33: xor eax, eax */
  eax = 0;
/* 8d4c35: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d4c37: je 0x8d50d2 */
  if (zf) goto L_8d50d2;
L_8d4c3d: /* 8d4c3d: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8d4c40: mov byte ptr [ebp + 0xb], 1 */
  W8((uint32_t)(ebp + 0xbu), 0x1u);
L_8d4c44: /* 8d4c44: cmp eax, dword ptr [edi + 0x64] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x64u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4c47: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 8d4c4a: jg 0x8d5084 */
  if ((!zf && sf == of)) goto L_8d5084;
L_8d4c50: /* 8d4c50: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 8d4c57: jmp 0x8d4c60 */
  goto L_8d4c60;
L_8d4c60: /* 8d4c60: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d4c63: cmp ecx, dword ptr [edi + 0x60] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4c66: jg 0x8d507e */
  if ((!zf && sf == of)) goto L_8d507e;
L_8d4c6c: /* 8d4c6c: mov edx, dword ptr [edi + 0x6c] */
  edx = R32((uint32_t)(edi + 0x6cu));
/* 8d4c6f: lea ecx, [edx + eax - 1] */
  ecx = (uint32_t)(edx + eax + 0xffffffffu);
/* 8d4c73: xor edx, edx */
  edx = 0;
/* 8d4c75: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8d4c77: setle dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((zf || sf != of)) ? 1 : 0) & 0xffu);
/* 8d4c7a: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 8d4c7b: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8d4c7d: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
L_8d4c80: /* 8d4c80: mov ecx, dword ptr [edi + 0x6c] */
  ecx = R32((uint32_t)(edi + 0x6cu));
/* 8d4c83: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d4c86: lea ecx, [ecx + eax + 1] */
  ecx = (uint32_t)(ecx + eax + 0x1u);
/* 8d4c8a: mov eax, dword ptr [edx + 0x54] */
  eax = R32((uint32_t)(edx + 0x54u));
/* 8d4c8d: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8d4c90: mov eax, dword ptr [eax + 0x1290] */
  eax = R32((uint32_t)(eax + 0x1290u));
/* 8d4c96: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8d4c97: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4c99: jle 0x8d4c9d */
  if ((zf || sf != of)) goto L_8d4c9d;
L_8d4c9b: /* 8d4c9b: mov eax, ecx */
  eax = ecx;
L_8d4c9d: /* 8d4c9d: cmp dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4ca0: jg 0x8d4cf6 */
  if ((!zf && sf == of)) goto L_8d4cf6;
L_8d4ca2: /* 8d4ca2: mov eax, dword ptr [edi + 0x68] */
  eax = R32((uint32_t)(edi + 0x68u));
/* 8d4ca5: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d4ca8: lea ebx, [eax + ecx] */
  ebx = (uint32_t)(eax + ecx);
/* 8d4cab: xor edx, edx */
  edx = 0;
/* 8d4cad: lea eax, [ebx - 1] */
  eax = (uint32_t)(ebx + 0xffffffffu);
/* 8d4cb0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8d4cb2: setle dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((zf || sf != of)) ? 1 : 0) & 0xffu);
/* 8d4cb5: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 8d4cb6: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8d4cb8: mov esi, edx */
  esi = edx;
/* 8d4cba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8d4cc0: /* 8d4cc0: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d4cc3: mov eax, dword ptr [eax + 0x128c] */
  eax = R32((uint32_t)(eax + 0x128cu));
/* 8d4cc9: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 8d4ccc: lea edx, [eax - 1] */
  edx = (uint32_t)(eax + 0xffffffffu);
/* 8d4ccf: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4cd1: jg 0x8d4cd5 */
  if ((!zf && sf == of)) goto L_8d4cd5;
L_8d4cd3: /* 8d4cd3: mov ecx, edx */
  ecx = edx;
L_8d4cd5: /* 8d4cd5: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4cd7: jg 0x8d4cee */
  if ((!zf && sf == of)) goto L_8d4cee;
L_8d4cd9: /* 8d4cd9: imul eax, dword ptr [ebp - 0x14] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  eax = (uint32_t)r;
  }
/* 8d4cdd: mov ecx, dword ptr [ebp - 0x88] */
  ecx = R32((uint32_t)(ebp + 0xffffff78u));
/* 8d4ce3: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d4ce5: cmp dword ptr [ecx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d4ce9: jne 0x8d4d00 */
  if (!zf) goto L_8d4d00;
L_8d4ceb: /* 8d4ceb: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8d4cec: jmp 0x8d4cc0 */
  goto L_8d4cc0;
L_8d4cee: /* 8d4cee: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 8d4cf1: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 8d4cf4: jmp 0x8d4c80 */
  goto L_8d4c80;
L_8d4cf6: /* 8d4cf6: xor eax, eax */
  eax = 0;
/* 8d4cf8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4cfa: je 0x8d5060 */
  if (zf) goto L_8d5060;
L_8d4d00: /* 8d4d00: mov edx, dword ptr [edi + 0x68] */
  edx = R32((uint32_t)(edi + 0x68u));
/* 8d4d03: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d4d06: lea ecx, [edx + eax] */
  ecx = (uint32_t)(edx + eax);
/* 8d4d09: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4d0b: je 0x8d4df8 */
  if (zf) goto L_8d4df8;
L_8d4d11: /* 8d4d11: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 8d4d14: mov esi, dword ptr [ebp - 0x34] */
  esi = R32((uint32_t)(ebp + 0xffffffccu));
/* 8d4d17: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8d4d19: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4d1b: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 8d4d1e: je 0x8d4df8 */
  if (zf) goto L_8d4df8;
L_8d4d24: /* 8d4d24: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d4d27: mov eax, dword ptr [eax + 0x54] */
  eax = R32((uint32_t)(eax + 0x54u));
/* 8d4d2a: mov ebx, dword ptr [eax + 0x128c] */
  ebx = R32((uint32_t)(eax + 0x128cu));
/* 8d4d30: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 8d4d31: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d4d33: je 0x8d4df8 */
  if (zf) goto L_8d4df8;
L_8d4d39: /* 8d4d39: mov ecx, dword ptr [eax + 0x1290] */
  ecx = R32((uint32_t)(eax + 0x1290u));
/* 8d4d3f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8d4d40: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d4d42: je 0x8d4df8 */
  if (zf) goto L_8d4df8;
L_8d4d48: /* 8d4d48: mov ecx, dword ptr [eax + 0x128c] */
  ecx = R32((uint32_t)(eax + 0x128cu));
/* 8d4d4e: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d4d51: imul ecx, esi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(esi);
  ecx = (uint32_t)r;
  }
/* 8d4d54: mov edi, dword ptr [eax + 0x131c] */
  edi = R32((uint32_t)(eax + 0x131cu));
/* 8d4d5a: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d4d5c: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d4d5e: mov esi, ecx */
  esi = ecx;
/* 8d4d60: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 8d4d63: mov ebx, 1 */
  ebx = 0x1u;
/* 8d4d68: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 8d4d6a: sar esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 8d4d6d: test dword ptr [edi + esi*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + esi*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4d70: jne 0x8d4df5 */
  if (!zf) goto L_8d4df5;
L_8d4d76: /* 8d4d76: mov ecx, dword ptr [eax + 0x128c] */
  ecx = R32((uint32_t)(eax + 0x128cu));
/* 8d4d7c: imul ecx, dword ptr [ebp - 0x14] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  ecx = (uint32_t)r;
  }
/* 8d4d80: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d4d83: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d4d85: lea ecx, [ecx + esi - 1] */
  ecx = (uint32_t)(ecx + esi + 0xffffffffu);
/* 8d4d89: mov esi, ecx */
  esi = ecx;
/* 8d4d8b: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 8d4d8e: mov ebx, 1 */
  ebx = 0x1u;
/* 8d4d93: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 8d4d95: sar esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 8d4d98: test dword ptr [edi + esi*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + esi*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4d9b: jne 0x8d4df5 */
  if (!zf) goto L_8d4df5;
L_8d4d9d: /* 8d4d9d: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d4da0: mov ecx, dword ptr [eax + 0x128c] */
  ecx = R32((uint32_t)(eax + 0x128cu));
/* 8d4da6: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d4da9: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 8d4daa: imul ecx, esi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(esi);
  ecx = (uint32_t)r;
  }
/* 8d4dad: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d4daf: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d4db1: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 8d4db4: mov esi, ecx */
  esi = ecx;
/* 8d4db6: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 8d4db9: mov ebx, 1 */
  ebx = 0x1u;
/* 8d4dbe: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 8d4dc0: sar esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 8d4dc3: test dword ptr [edi + esi*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + esi*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4dc6: jne 0x8d4df5 */
  if (!zf) goto L_8d4df5;
L_8d4dc8: /* 8d4dc8: mov ecx, dword ptr [eax + 0x128c] */
  ecx = R32((uint32_t)(eax + 0x128cu));
/* 8d4dce: imul ecx, dword ptr [ebp - 0x20] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  ecx = (uint32_t)r;
  }
/* 8d4dd2: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d4dd4: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d4dd7: lea ecx, [ecx + edx - 1] */
  ecx = (uint32_t)(ecx + edx + 0xffffffffu);
/* 8d4ddb: mov edx, ecx */
  edx = ecx;
/* 8d4ddd: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 8d4de0: mov esi, 1 */
  esi = 0x1u;
/* 8d4de5: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 8d4de7: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8d4dea: mov eax, edi */
  eax = edi;
/* 8d4dec: test dword ptr [eax + edx*4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4def: je 0x8d505d */
  if (zf) goto L_8d505d;
L_8d4df5: /* 8d4df5: mov edi, dword ptr [ebp - 0x38] */
  edi = R32((uint32_t)(ebp + 0xffffffc8u));
L_8d4df8: /* 8d4df8: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 8d4dfb: movzx eax, word ptr [edi + 0x90] */
  eax = (uint32_t)(R16((uint32_t)(edi + 0x90u)));
/* 8d4e02: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d4e05: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8d4e06: imul ecx, dword ptr [ebp - 0x34] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  ecx = (uint32_t)r;
  }
/* 8d4e0a: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8d4e0c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d4e0f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d4e11: mov edx, dword ptr [ecx + 0x54] */
  edx = R32((uint32_t)(ecx + 0x54u));
/* 8d4e14: mov ecx, dword ptr [edi + 0x8c] */
  ecx = R32((uint32_t)(edi + 0x8cu));
/* 8d4e1a: mov esi, dword ptr [edx + 0x134c] */
  esi = R32((uint32_t)(edx + 0x134cu));
/* 8d4e20: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 8d4e23: mov esi, dword ptr [ecx + esi + 4] */
  esi = R32((uint32_t)(ecx + esi + 0x4u));
/* 8d4e27: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 8d4e2a: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8d4e2d: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8d4e2f: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 8d4e31: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 8d4e34: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 8d4e37: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 8d4e3a: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 8d4e3d: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 8d4e40: mov edx, dword ptr [edx + 0x134c] */
  edx = R32((uint32_t)(edx + 0x134cu));
/* 8d4e46: mov ecx, dword ptr [ecx + edx + 4] */
  ecx = R32((uint32_t)(ecx + edx + 0x4u));
/* 8d4e4a: lea edx, [ecx + eax + 0xc] */
  edx = (uint32_t)(ecx + eax + 0xcu);
/* 8d4e4e: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8d4e50: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8d4e53: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8d4e56: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 8d4e59: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 8d4e5c: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 8d4e5f: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 8d4e62: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 8d4e65: xor ebx, ebx */
  ebx = 0;
/* 8d4e67: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8d4e6a: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8d4e6d: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 8d4e70: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8d4e73: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 8d4e76: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 8d4e79: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8d4e7c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8d4e80: /* 8d4e80: cmp ebx, dword ptr [ebp - 0x50] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4e83: jge 0x8d5060 */
  if ((sf == of)) goto L_8d5060;
L_8d4e89: /* 8d4e89: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 8d4e8c: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* 8d4e8f: mov edx, dword ptr [edi + 0x34] */
  edx = R32((uint32_t)(edi + 0x34u));
/* 8d4e92: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8d4e95: mov esi, dword ptr [ecx + edx] */
  esi = R32((uint32_t)(ecx + edx));
/* 8d4e98: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8d4e9a: mov ecx, esi */
  ecx = esi;
/* 8d4e9c: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x8d4ea2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d4ea2: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 8d4ea5: mov al, byte ptr [esi + 0x29] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x29u))) & 0xffu);
/* 8d4ea8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8d4eaa: cmp al, 0x13 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x13u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8d4eac: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8d4eae: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8d4eb1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d4eb3: jne 0x8d4f0b */
  if (!zf) goto L_8d4f0b;
L_8d4eb5: /* 8d4eb5: lea ecx, [ebp - 0xd8] */
  ecx = (uint32_t)(ebp + 0xffffff28u);
/* 8d4ebb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d4ebc: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 8d4ec2: call dword ptr [0xcfa7dc] */
  esp -= 4; W32(esp, 0x8d4ec8u); SPILL(); f_4e30a8(); if (g_unwind) return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */ RELOAD();
/* 8d4ec8: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8d4ecb: fmul dword ptr [0xa1188c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1188cu)));
/* 8d4ed1: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8d4ed4: fmul dword ptr [0xa1188c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1188cu)));
/* 8d4eda: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8d4edd: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8d4edf: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 8d4ee2: fmul dword ptr [0xa1188c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1188cu)));
/* 8d4ee8: fstp dword ptr [ebp - 0xc8] */
  WF32((uint32_t)(ebp + 0xffffff38u), ST0); FPOP();
/* 8d4eee: fsubr dword ptr [ebp - 0x28] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffd8u))) - ST0;
/* 8d4ef1: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8d4ef4: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8d4ef7: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8d4efa: fsub dword ptr [ebp - 0xc8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff38u)));
/* 8d4f00: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 8d4f03: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 8d4f06: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 8d4f09: jmp 0x8d4f11 */
  goto L_8d4f11;
L_8d4f0b: /* 8d4f0b: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
L_8d4f11: /* 8d4f11: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8d4f13: mov dword ptr [ebp - 0xa0], edx */
  W32((uint32_t)(ebp + 0xffffff60u), edx);
/* 8d4f19: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8d4f1c: mov dword ptr [ebp - 0x9c], ecx */
  W32((uint32_t)(ebp + 0xffffff64u), ecx);
/* 8d4f22: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8d4f25: mov dword ptr [ebp - 0x98], edx */
  W32((uint32_t)(ebp + 0xffffff68u), edx);
/* 8d4f2b: mov dword ptr [ebp - 0xdc], 0 */
  W32((uint32_t)(ebp + 0xffffff24u), 0x0u);
/* 8d4f35: cmp byte ptr [esi + 0x29], 0x13 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x29u))); uint8_t b = (uint8_t)(0x13u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8d4f39: je 0x8d4fcc */
  if (zf) goto L_8d4fcc;
L_8d4f3f: /* 8d4f3f: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 8d4f45: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 8d4f4b: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 8d4f4e: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 8d4f54: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 8d4f57: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 8d4f5d: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 8d4f60: fstp dword ptr [ebp - 0xac] */
  WF32((uint32_t)(ebp + 0xffffff54u), ST0); FPOP();
/* 8d4f66: fstp dword ptr [ebp - 0xa8] */
  WF32((uint32_t)(ebp + 0xffffff58u), ST0); FPOP();
/* 8d4f6c: fstp dword ptr [ebp - 0xa4] */
  WF32((uint32_t)(ebp + 0xffffff5cu), ST0); FPOP();
/* 8d4f72: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8d4f78u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8d4f78: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 8d4f7b: fcomp dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
  FPOP();
/* 8d4f7e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d4f80: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8d4f83: jp 0x8d5057 */
  if (pf) goto L_8d5057;
L_8d4f89: /* 8d4f89: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 8d4f8f: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 8d4f92: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 8d4f98: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 8d4f9b: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 8d4fa1: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 8d4fa4: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 8d4fa7: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8d4fa9: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8d4fac: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8d4fae: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8d4fb0: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8d4fb2: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 8d4fb5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8d4fb7: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 8d4fbd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d4fbf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d4fc1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4fc4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d4fc6: jne 0x8d5057 */
  if (!zf) goto L_8d5057;
L_8d4fcc: /* 8d4fcc: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d4fcf: mov eax, dword ptr [eax + 0x54] */
  eax = R32((uint32_t)(eax + 0x54u));
/* 8d4fd2: mov ecx, dword ptr [eax + 0x84] */
  ecx = R32((uint32_t)(eax + 0x84u));
/* 8d4fd8: test ch, ch */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(((ecx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 8d4fda: jns 0x8d5038 */
  if (!sf) goto L_8d5038;
L_8d4fdc: /* 8d4fdc: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 8d4fe2: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 8d4fe8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d4fea: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d4fed: mov eax, esp */
  eax = esp;
/* 8d4fef: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 8d4ff6: mov esi, dword ptr [ebp - 0x60] */
  esi = R32((uint32_t)(ebp + 0xffffffa0u));
/* 8d4ff9: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 8d4ffb: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 8d5002: mov esi, dword ptr [ebp - 0x5c] */
  esi = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8d5005: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 8d5008: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 8d500f: mov esi, dword ptr [ebp - 0x58] */
  esi = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8d5012: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 8d5015: push 0x197 */
  { uint32_t v = 0x197u; esp -= 4; W32(esp, v); }
/* 8d501a: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 8d501d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d501e: lea eax, [ebp - 0xa0] */
  eax = (uint32_t)(ebp + 0xffffff60u);
/* 8d5024: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d5025: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d5027: lea eax, [ebp - 0x108] */
  eax = (uint32_t)(ebp + 0xfffffef8u);
/* 8d502d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d502e: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x8d5034u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d5034: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d5036: je 0x8d5057 */
  if (zf) goto L_8d5057;
L_8d5038: /* 8d5038: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8d503b: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* 8d503e: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 8d5041: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8d5044: mov ecx, dword ptr [edx + eax + 4] */
  ecx = R32((uint32_t)(edx + eax + 0x4u));
/* 8d5048: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d504b: lea eax, [ecx + edx] */
  eax = (uint32_t)(ecx + edx);
/* 8d504e: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 8d5050: mov cl, byte ptr [ebp + 0xb] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xbu))) & 0xffu);
/* 8d5053: or dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8d5055: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
L_8d5057: /* 8d5057: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8d5058: jmp 0x8d4e80 */
  goto L_8d4e80;
L_8d505d: /* 8d505d: mov edi, dword ptr [ebp - 0x38] */
  edi = R32((uint32_t)(ebp + 0xffffffc8u));
L_8d5060: /* 8d5060: mov al, byte ptr [ebp + 0xb] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xbu))) & 0xffu);
/* 8d5063: shl al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = 1;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8d5065: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d5067: mov byte ptr [ebp + 0xb], al */
  W8((uint32_t)(ebp + 0xbu), (eax & 0xffu));
/* 8d506a: jne 0x8d5073 */
  if (!zf) goto L_8d5073;
L_8d506c: /* 8d506c: inc dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
/* 8d506f: mov byte ptr [ebp + 0xb], 1 */
  W8((uint32_t)(ebp + 0xbu), 0x1u);
L_8d5073: /* 8d5073: inc dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 8d5076: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 8d5079: jmp 0x8d4c60 */
  goto L_8d4c60;
L_8d507e: /* 8d507e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d507f: jmp 0x8d4c44 */
  goto L_8d4c44;
L_8d5084: /* 8d5084: xor esi, esi */
  esi = 0;
L_8d5086: /* 8d5086: cmp esi, dword ptr [edi + 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d5089: jge 0x8d50d2 */
  if ((sf == of)) goto L_8d50d2;
L_8d508b: /* 8d508b: xor ecx, ecx */
  ecx = 0;
/* 8d508d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8d5090: /* 8d5090: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 8d5093: mov edx, esi */
  edx = esi;
/* 8d5095: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8d5098: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d509a: cmp ecx, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d509d: jge 0x8d50ab */
  if ((sf == of)) goto L_8d50ab;
L_8d509f: /* 8d509f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8d50a2: cmp byte ptr [ecx + edx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + edx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8d50a6: jne 0x8d50cf */
  if (!zf) goto L_8d50cf;
L_8d50a8: /* 8d50a8: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8d50a9: jmp 0x8d5090 */
  goto L_8d5090;
L_8d50ab: /* 8d50ab: mov ecx, dword ptr [edi + 0x34] */
  ecx = R32((uint32_t)(edi + 0x34u));
/* 8d50ae: lea ebx, [edi + 0x34] */
  ebx = (uint32_t)(edi + 0x34u);
/* 8d50b1: mov eax, esi */
  eax = esi;
/* 8d50b3: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8d50b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d50b8: lea ecx, [eax + ecx + 4] */
  ecx = (uint32_t)(eax + ecx + 0x4u);
/* 8d50bc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d50be: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8d50c4u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8d50c4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d50c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d50c7: mov ecx, ebx */
  ecx = ebx;
/* 8d50c9: call 0x6c16b8 */
  esp -= 4; W32(esp, 0x8d50ceu); SPILL(); f_6c16b8(); if (g_unwind) return; RELOAD();
/* 8d50ce: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_8d50cf: /* 8d50cf: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8d50d0: jmp 0x8d5086 */
  goto L_8d5086;
L_8d50d2: /* 8d50d2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d50d4: mov ecx, edi */
  ecx = edi;
/* 8d50d6: call 0x6c8b7a */
  esp -= 4; W32(esp, 0x8d50dbu); SPILL(); f_6c8b7a(); if (g_unwind) return; RELOAD();
/* 8d50db: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8d50de: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8d50e2: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8d50e7u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8d50e7: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8d50ea: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d50ed: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d50ee: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 8d50f1: mov esi, eax */
  esi = eax;
/* 8d50f3: jmp 0x8d4a72 */
  goto L_8d4a72;
L_8d50f8: /* 8d50f8: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8d50fa: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d50fc: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0x8d50ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d50ff: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 8d5105: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8d5109: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8d510eu); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8d510e: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 8d5111: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8d5115: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x8d511au); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
L_8d511a: /* 8d511a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d511d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d511e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d511f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d5126: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d5127: mov esp, ebp */
  esp = ebp;
/* 8d5129: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d512a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8d4935(void) {
  LOAD_REGS();
L_8d4935: /* 8d4935: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 8d493c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8d4940: /* 8d4940: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 8d4946: cmp edi, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4949: jge 0x8d49d8 */
  if ((sf == of)) goto L_8d49d8;
L_8d494f: /* 8d494f: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 8d4952: mov esi, dword ptr [eax + edi*4] */
  esi = R32((uint32_t)(eax + edi*4));
/* 8d4955: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4957: je 0x8d49d2 */
  if (zf) goto L_8d49d2;
L_8d4959: /* 8d4959: cmp byte ptr [esi + 0x28], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x28u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8d495d: jne 0x8d49d2 */
  if (!zf) goto L_8d49d2;
L_8d495f: /* 8d495f: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 8d4965: test al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4967: je 0x8d49d2 */
  if (zf) goto L_8d49d2;
L_8d4969: /* 8d4969: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d496c: je 0x8d49d2 */
  if (zf) goto L_8d49d2;
L_8d496e: /* 8d496e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d4971: mov edx, dword ptr [ecx + 0x54] */
  edx = R32((uint32_t)(ecx + 0x54u));
/* 8d4974: mov al, byte ptr [esi + 0xc8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xc8u))) & 0xffu);
/* 8d497a: cmp al, byte ptr [edx + 0xc8] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edx + 0xc8u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8d4980: je 0x8d499b */
  if (zf) goto L_8d499b;
L_8d4982: /* 8d4982: mov ecx, dword ptr [esi + 0xc0] */
  ecx = R32((uint32_t)(esi + 0xc0u));
/* 8d4988: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d498a: je 0x8d49d2 */
  if (zf) goto L_8d49d2;
L_8d498c: /* 8d498c: push 0xb5f348 */
  { uint32_t v = 0xb5f348u; esp -= 4; W32(esp, v); }
/* 8d4991: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8d4997u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8d4997: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4999: je 0x8d49d2 */
  if (zf) goto L_8d49d2;
L_8d499b: /* 8d499b: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d499e: mov edx, dword ptr [ecx + 0x54] */
  edx = R32((uint32_t)(ecx + 0x54u));
/* 8d49a1: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 8d49a7: mov ecx, dword ptr [edx + 0x80] */
  ecx = R32((uint32_t)(edx + 0x80u));
/* 8d49ad: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 8d49af: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d49b2: jne 0x8d49d2 */
  if (!zf) goto L_8d49d2;
L_8d49b4: /* 8d49b4: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d49b7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d49b9: je 0x8d49bf */
  if (zf) goto L_8d49bf;
L_8d49bb: /* 8d49bb: test al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d49bd: je 0x8d49d2 */
  if (zf) goto L_8d49d2;
L_8d49bf: /* 8d49bf: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8d49c1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d49c3: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 8d49c6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8d49ccu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8d49cc: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 8d49cf: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
L_8d49d2: /* 8d49d2: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8d49d3: jmp 0x8d4940 */
  goto L_8d4940;
L_8d49d8: /* 8d49d8: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d49db: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* 8d49de: mov eax, dword ptr [ecx + 0x1284] */
  eax = R32((uint32_t)(ecx + 0x1284u));
/* 8d49e4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8d49e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d49e7: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 8d49ed: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x8d49f3u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 8d49f3: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d49f6: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8d49fa: xor esi, esi */
  esi = 0;
/* 8d49fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8d4a00: /* 8d4a00: mov eax, dword ptr [ebx + 0x54] */
  eax = R32((uint32_t)(ebx + 0x54u));
/* 8d4a03: cmp esi, dword ptr [eax + 0x1284] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1284u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4a09: jge 0x8d4a6d */
  if ((sf == of)) goto L_8d4a6d;
L_8d4a0b: /* 8d4a0b: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 8d4a11: mov edx, dword ptr [ebp - 0x88] */
  edx = R32((uint32_t)(ebp + 0xffffff78u));
/* 8d4a17: mov eax, dword ptr [eax + 0x1280] */
  eax = R32((uint32_t)(eax + 0x1280u));
/* 8d4a1d: lea edi, [edx + esi*4] */
  edi = (uint32_t)(edx + esi*4);
/* 8d4a20: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d4a23: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 8d4a26: lea edx, [eax + edx*4] */
  edx = (uint32_t)(eax + edx*4);
/* 8d4a29: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 8d4a2b: mov eax, esp */
  eax = esp;
/* 8d4a2d: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 8d4a2f: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 8d4a32: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8d4a35: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 8d4a38: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d4a39: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 8d4a3f: mov ecx, dword ptr [ecx + 0x8c] */
  ecx = R32((uint32_t)(ecx + 0x8cu));
/* 8d4a45: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8d4a48: lea eax, [ebp - 0xc8] */
  eax = (uint32_t)(ebp + 0xffffff38u);
/* 8d4a4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d4a4f: call 0x6c9192 */
  esp -= 4; W32(esp, 0x8d4a54u); SPILL(); f_6c9192(); if (g_unwind) return; RELOAD();
/* 8d4a54: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d4a57: mov al, byte ptr [eax + 8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x8u))) & 0xffu);
/* 8d4a5a: mov edx, dword ptr [ebx + 0x54] */
  edx = R32((uint32_t)(ebx + 0x54u));
/* 8d4a5d: sub al, byte ptr [edx + 0xc8] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edx + 0xc8u)));
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8d4a63: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8d4a65: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 8d4a67: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d4a68: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 8d4a6a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8d4a6b: jmp 0x8d4a00 */
  goto L_8d4a00;
L_8d4a6d: /* 8d4a6d: xor esi, esi */
  esi = 0;
/* 8d4a6f: mov dword ptr [ebp - 0x3c], esi */
  W32((uint32_t)(ebp + 0xffffffc4u), esi);
L_8d4a72: /* 8d4a72: mov eax, dword ptr [ebx + 0x54] */
  eax = R32((uint32_t)(ebx + 0x54u));
/* 8d4a75: mov ecx, dword ptr [eax + 0x1278] */
  ecx = R32((uint32_t)(eax + 0x1278u));
/* 8d4a7b: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4a7d: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 8d4a83: jge 0x8d50f8 */
  if ((sf == of)) goto L_8d50f8;
L_8d4a89: /* 8d4a89: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8d4a8b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8d4a8d: push 0xaec978 */
  { uint32_t v = 0xaec978u; esp -= 4; W32(esp, v); }
/* 8d4a92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d4a93: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d4a94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d4a95: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x8d4a98u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d4a98: mov eax, dword ptr [ebx + 0x54] */
  eax = R32((uint32_t)(ebx + 0x54u));
/* 8d4a9b: mov ecx, dword ptr [eax + 0x1274] */
  ecx = R32((uint32_t)(eax + 0x1274u));
/* 8d4aa1: mov edi, dword ptr [ecx + esi*4] */
  edi = R32((uint32_t)(ecx + esi*4));
/* 8d4aa4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d4aa7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d4aa9: lea ecx, [edi + 0x44] */
  ecx = (uint32_t)(edi + 0x44u);
/* 8d4aac: mov dword ptr [ebp - 0x38], edi */
  W32((uint32_t)(ebp + 0xffffffc8u), edi);
/* 8d4aaf: call dword ptr [0xcfa894] */
  esp -= 4; W32(esp, 0x8d4ab5u); SPILL(); f_4e44f8(); if (g_unwind) return; /* Core!?GetExtrema@FBox@@QAEAAVFVector@@H@Z */ RELOAD();
/* 8d4ab5: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 8d4ab7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d4ab8: lea ecx, [ebp - 0xbc] */
  ecx = (uint32_t)(ebp + 0xffffff44u);
/* 8d4abe: call dword ptr [0xcfa55c] */
  esp -= 4; W32(esp, 0x8d4ac4u); SPILL(); f_4e34c2(); if (g_unwind) return; /* Core!??0FSphere@@QAE@PBVFVector@@H@Z */ RELOAD();
/* 8d4ac4: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8d4ac7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4ac9: jne 0x8d4af5 */
  if (!zf) goto L_8d4af5;
L_8d4acb: /* 8d4acb: lea ebx, [edi + 0x34] */
  ebx = (uint32_t)(edi + 0x34u);
/* 8d4ace: xor esi, esi */
  esi = 0;
L_8d4ad0: /* 8d4ad0: cmp esi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4ad3: jge 0x8d4ae9 */
  if ((sf == of)) goto L_8d4ae9;
L_8d4ad5: /* 8d4ad5: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8d4ad7: mov eax, esi */
  eax = esi;
/* 8d4ad9: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8d4adc: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d4ade: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 8d4ae1: call 0x6c3e13 */
  esp -= 4; W32(esp, 0x8d4ae6u); SPILL(); f_6c3e13(); if (g_unwind) return; RELOAD();
/* 8d4ae6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8d4ae7: jmp 0x8d4ad0 */
  goto L_8d4ad0;
L_8d4ae9: /* 8d4ae9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d4aeb: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8d4aed: mov ecx, ebx */
  ecx = ebx;
/* 8d4aef: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8d4af5u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
L_8d4af5: /* 8d4af5: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8d4af8: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8d4afeu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8d4afe: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8d4b02: xor esi, esi */
  esi = 0;
L_8d4b04: /* 8d4b04: cmp esi, dword ptr [ebp - 0x6c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff94u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4b07: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 8d4b0a: jge 0x8d4c30 */
  if ((sf == of)) goto L_8d4c30;
L_8d4b10: /* 8d4b10: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 8d4b13: mov ebx, dword ptr [edx + esi*4] */
  ebx = R32((uint32_t)(edx + esi*4));
/* 8d4b16: cmp byte ptr [ebx + 0x29], 0x13 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x29u))); uint8_t b = (uint8_t)(0x13u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8d4b1a: je 0x8d4b8b */
  if (zf) goto L_8d4b8b;
L_8d4b1c: /* 8d4b1c: fld dword ptr [ebx + 0x178] */
  { double v = F32((uint32_t)(ebx + 0x178u)); FPUSH(v); }
/* 8d4b22: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8d4b24: fsub dword ptr [ebp - 0xb4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff4cu)));
/* 8d4b2a: mov ecx, ebx */
  ecx = ebx;
/* 8d4b2c: fld dword ptr [ebx + 0x174] */
  { double v = F32((uint32_t)(ebx + 0x174u)); FPUSH(v); }
/* 8d4b32: fsub dword ptr [ebp - 0xb8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff48u)));
/* 8d4b38: fld dword ptr [ebx + 0x170] */
  { double v = F32((uint32_t)(ebx + 0x170u)); FPUSH(v); }
/* 8d4b3e: fsub dword ptr [ebp - 0xbc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff44u)));
/* 8d4b44: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 8d4b4a: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 8d4b50: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 8d4b56: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x8d4b5cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d4b5c: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 8d4b5f: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 8d4b65: fadd dword ptr [ebp - 0xb0] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff50u)));
/* 8d4b6b: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 8d4b6e: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8d4b74u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8d4b74: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8d4b77: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8d4b7a: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 8d4b7d: fcomp dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
  FPOP();
/* 8d4b80: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d4b82: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4b85: jne 0x8d4c2a */
  if (!zf) goto L_8d4c2a;
L_8d4b8b: /* 8d4b8b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8d4b8e: xor esi, esi */
  esi = 0;
/* 8d4b90: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4b92: je 0x8d4bb2 */
  if (zf) goto L_8d4bb2;
L_8d4b94: /* 8d4b94: xor ecx, ecx */
  ecx = 0;
L_8d4b96: /* 8d4b96: cmp ecx, dword ptr [edi + 0x38] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4b99: jge 0x8d4bae */
  if ((sf == of)) goto L_8d4bae;
L_8d4b9b: /* 8d4b9b: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 8d4b9e: mov edx, ecx */
  edx = ecx;
/* 8d4ba0: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8d4ba3: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d4ba5: cmp dword ptr [eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d4ba7: jne 0x8d4bab */
  if (!zf) goto L_8d4bab;
L_8d4ba9: /* 8d4ba9: mov esi, eax */
  esi = eax;
L_8d4bab: /* 8d4bab: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8d4bac: jmp 0x8d4b96 */
  goto L_8d4b96;
L_8d4bae: /* 8d4bae: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4bb0: jne 0x8d4bdb */
  if (!zf) goto L_8d4bdb;
L_8d4bb2: /* 8d4bb2: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8d4bb4: lea esi, [edi + 0x34] */
  esi = (uint32_t)(edi + 0x34u);
/* 8d4bb7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d4bb9: mov ecx, esi */
  ecx = esi;
/* 8d4bbb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8d4bc1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8d4bc1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8d4bc3: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8d4bc6: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8d4bc8: mov esi, eax */
  esi = eax;
/* 8d4bca: je 0x8d4bd9 */
  if (zf) goto L_8d4bd9;
L_8d4bcc: /* 8d4bcc: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8d4bcf: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 8d4bd1: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8d4bd7u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8d4bd7: jmp 0x8d4bdb */
  goto L_8d4bdb;
L_8d4bd9: /* 8d4bd9: xor esi, esi */
  esi = 0;
L_8d4bdb: /* 8d4bdb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d4bdd: lea ebx, [esi + 4] */
  ebx = (uint32_t)(esi + 0x4u);
/* 8d4be0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d4be2: mov ecx, ebx */
  ecx = ebx;
/* 8d4be4: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8d4beau); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8d4bea: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 8d4bed: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 8d4bf0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d4bf1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8d4bf2: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 8d4bf5: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d4bf8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8d4bf9: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8d4bfc: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d4bfe: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8d4c01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d4c02: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d4c04: mov ecx, ebx */
  ecx = ebx;
/* 8d4c06: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8d4c0cu); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8d4c0c: mov ebx, dword ptr [edi + 0x34] */
  ebx = R32((uint32_t)(edi + 0x34u));
/* 8d4c0f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8d4c11: sub esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8d4c13: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d4c15: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8d4c18: sar esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 8d4c1b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8d4c21u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8d4c21: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8d4c24: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
/* 8d4c27: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
L_8d4c2a: /* 8d4c2a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8d4c2b: jmp 0x8d4b04 */
  goto L_8d4b04;
L_8d4c30: /* 8d4c30: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8d4c33: xor eax, eax */
  eax = 0;
/* 8d4c35: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d4c37: je 0x8d50d2 */
  if (zf) goto L_8d50d2;
L_8d4c3d: /* 8d4c3d: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8d4c40: mov byte ptr [ebp + 0xb], 1 */
  W8((uint32_t)(ebp + 0xbu), 0x1u);
L_8d4c44: /* 8d4c44: cmp eax, dword ptr [edi + 0x64] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x64u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4c47: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 8d4c4a: jg 0x8d5084 */
  if ((!zf && sf == of)) goto L_8d5084;
L_8d4c50: /* 8d4c50: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 8d4c57: jmp 0x8d4c60 */
  goto L_8d4c60;
L_8d4c60: /* 8d4c60: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d4c63: cmp ecx, dword ptr [edi + 0x60] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4c66: jg 0x8d507e */
  if ((!zf && sf == of)) goto L_8d507e;
L_8d4c6c: /* 8d4c6c: mov edx, dword ptr [edi + 0x6c] */
  edx = R32((uint32_t)(edi + 0x6cu));
/* 8d4c6f: lea ecx, [edx + eax - 1] */
  ecx = (uint32_t)(edx + eax + 0xffffffffu);
/* 8d4c73: xor edx, edx */
  edx = 0;
/* 8d4c75: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8d4c77: setle dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((zf || sf != of)) ? 1 : 0) & 0xffu);
/* 8d4c7a: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 8d4c7b: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8d4c7d: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
L_8d4c80: /* 8d4c80: mov ecx, dword ptr [edi + 0x6c] */
  ecx = R32((uint32_t)(edi + 0x6cu));
/* 8d4c83: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d4c86: lea ecx, [ecx + eax + 1] */
  ecx = (uint32_t)(ecx + eax + 0x1u);
/* 8d4c8a: mov eax, dword ptr [edx + 0x54] */
  eax = R32((uint32_t)(edx + 0x54u));
/* 8d4c8d: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8d4c90: mov eax, dword ptr [eax + 0x1290] */
  eax = R32((uint32_t)(eax + 0x1290u));
/* 8d4c96: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8d4c97: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4c99: jle 0x8d4c9d */
  if ((zf || sf != of)) goto L_8d4c9d;
L_8d4c9b: /* 8d4c9b: mov eax, ecx */
  eax = ecx;
L_8d4c9d: /* 8d4c9d: cmp dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4ca0: jg 0x8d4cf6 */
  if ((!zf && sf == of)) goto L_8d4cf6;
L_8d4ca2: /* 8d4ca2: mov eax, dword ptr [edi + 0x68] */
  eax = R32((uint32_t)(edi + 0x68u));
/* 8d4ca5: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d4ca8: lea ebx, [eax + ecx] */
  ebx = (uint32_t)(eax + ecx);
/* 8d4cab: xor edx, edx */
  edx = 0;
/* 8d4cad: lea eax, [ebx - 1] */
  eax = (uint32_t)(ebx + 0xffffffffu);
/* 8d4cb0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8d4cb2: setle dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((zf || sf != of)) ? 1 : 0) & 0xffu);
/* 8d4cb5: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 8d4cb6: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8d4cb8: mov esi, edx */
  esi = edx;
/* 8d4cba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8d4cc0: /* 8d4cc0: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d4cc3: mov eax, dword ptr [eax + 0x128c] */
  eax = R32((uint32_t)(eax + 0x128cu));
/* 8d4cc9: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 8d4ccc: lea edx, [eax - 1] */
  edx = (uint32_t)(eax + 0xffffffffu);
/* 8d4ccf: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4cd1: jg 0x8d4cd5 */
  if ((!zf && sf == of)) goto L_8d4cd5;
L_8d4cd3: /* 8d4cd3: mov ecx, edx */
  ecx = edx;
L_8d4cd5: /* 8d4cd5: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4cd7: jg 0x8d4cee */
  if ((!zf && sf == of)) goto L_8d4cee;
L_8d4cd9: /* 8d4cd9: imul eax, dword ptr [ebp - 0x14] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  eax = (uint32_t)r;
  }
/* 8d4cdd: mov ecx, dword ptr [ebp - 0x88] */
  ecx = R32((uint32_t)(ebp + 0xffffff78u));
/* 8d4ce3: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d4ce5: cmp dword ptr [ecx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d4ce9: jne 0x8d4d00 */
  if (!zf) goto L_8d4d00;
L_8d4ceb: /* 8d4ceb: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8d4cec: jmp 0x8d4cc0 */
  goto L_8d4cc0;
L_8d4cee: /* 8d4cee: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 8d4cf1: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 8d4cf4: jmp 0x8d4c80 */
  goto L_8d4c80;
L_8d4cf6: /* 8d4cf6: xor eax, eax */
  eax = 0;
/* 8d4cf8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4cfa: je 0x8d5060 */
  if (zf) goto L_8d5060;
L_8d4d00: /* 8d4d00: mov edx, dword ptr [edi + 0x68] */
  edx = R32((uint32_t)(edi + 0x68u));
/* 8d4d03: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d4d06: lea ecx, [edx + eax] */
  ecx = (uint32_t)(edx + eax);
/* 8d4d09: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4d0b: je 0x8d4df8 */
  if (zf) goto L_8d4df8;
L_8d4d11: /* 8d4d11: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 8d4d14: mov esi, dword ptr [ebp - 0x34] */
  esi = R32((uint32_t)(ebp + 0xffffffccu));
/* 8d4d17: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8d4d19: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4d1b: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 8d4d1e: je 0x8d4df8 */
  if (zf) goto L_8d4df8;
L_8d4d24: /* 8d4d24: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d4d27: mov eax, dword ptr [eax + 0x54] */
  eax = R32((uint32_t)(eax + 0x54u));
/* 8d4d2a: mov ebx, dword ptr [eax + 0x128c] */
  ebx = R32((uint32_t)(eax + 0x128cu));
/* 8d4d30: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 8d4d31: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d4d33: je 0x8d4df8 */
  if (zf) goto L_8d4df8;
L_8d4d39: /* 8d4d39: mov ecx, dword ptr [eax + 0x1290] */
  ecx = R32((uint32_t)(eax + 0x1290u));
/* 8d4d3f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8d4d40: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d4d42: je 0x8d4df8 */
  if (zf) goto L_8d4df8;
L_8d4d48: /* 8d4d48: mov ecx, dword ptr [eax + 0x128c] */
  ecx = R32((uint32_t)(eax + 0x128cu));
/* 8d4d4e: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d4d51: imul ecx, esi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(esi);
  ecx = (uint32_t)r;
  }
/* 8d4d54: mov edi, dword ptr [eax + 0x131c] */
  edi = R32((uint32_t)(eax + 0x131cu));
/* 8d4d5a: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d4d5c: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d4d5e: mov esi, ecx */
  esi = ecx;
/* 8d4d60: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 8d4d63: mov ebx, 1 */
  ebx = 0x1u;
/* 8d4d68: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 8d4d6a: sar esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 8d4d6d: test dword ptr [edi + esi*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + esi*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4d70: jne 0x8d4df5 */
  if (!zf) goto L_8d4df5;
L_8d4d76: /* 8d4d76: mov ecx, dword ptr [eax + 0x128c] */
  ecx = R32((uint32_t)(eax + 0x128cu));
/* 8d4d7c: imul ecx, dword ptr [ebp - 0x14] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  ecx = (uint32_t)r;
  }
/* 8d4d80: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d4d83: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d4d85: lea ecx, [ecx + esi - 1] */
  ecx = (uint32_t)(ecx + esi + 0xffffffffu);
/* 8d4d89: mov esi, ecx */
  esi = ecx;
/* 8d4d8b: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 8d4d8e: mov ebx, 1 */
  ebx = 0x1u;
/* 8d4d93: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 8d4d95: sar esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 8d4d98: test dword ptr [edi + esi*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + esi*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4d9b: jne 0x8d4df5 */
  if (!zf) goto L_8d4df5;
L_8d4d9d: /* 8d4d9d: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d4da0: mov ecx, dword ptr [eax + 0x128c] */
  ecx = R32((uint32_t)(eax + 0x128cu));
/* 8d4da6: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d4da9: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 8d4daa: imul ecx, esi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(esi);
  ecx = (uint32_t)r;
  }
/* 8d4dad: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d4daf: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d4db1: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 8d4db4: mov esi, ecx */
  esi = ecx;
/* 8d4db6: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 8d4db9: mov ebx, 1 */
  ebx = 0x1u;
/* 8d4dbe: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 8d4dc0: sar esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 8d4dc3: test dword ptr [edi + esi*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + esi*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4dc6: jne 0x8d4df5 */
  if (!zf) goto L_8d4df5;
L_8d4dc8: /* 8d4dc8: mov ecx, dword ptr [eax + 0x128c] */
  ecx = R32((uint32_t)(eax + 0x128cu));
/* 8d4dce: imul ecx, dword ptr [ebp - 0x20] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  ecx = (uint32_t)r;
  }
/* 8d4dd2: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d4dd4: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d4dd7: lea ecx, [ecx + edx - 1] */
  ecx = (uint32_t)(ecx + edx + 0xffffffffu);
/* 8d4ddb: mov edx, ecx */
  edx = ecx;
/* 8d4ddd: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 8d4de0: mov esi, 1 */
  esi = 0x1u;
/* 8d4de5: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 8d4de7: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8d4dea: mov eax, edi */
  eax = edi;
/* 8d4dec: test dword ptr [eax + edx*4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4def: je 0x8d505d */
  if (zf) goto L_8d505d;
L_8d4df5: /* 8d4df5: mov edi, dword ptr [ebp - 0x38] */
  edi = R32((uint32_t)(ebp + 0xffffffc8u));
L_8d4df8: /* 8d4df8: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 8d4dfb: movzx eax, word ptr [edi + 0x90] */
  eax = (uint32_t)(R16((uint32_t)(edi + 0x90u)));
/* 8d4e02: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d4e05: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8d4e06: imul ecx, dword ptr [ebp - 0x34] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  ecx = (uint32_t)r;
  }
/* 8d4e0a: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8d4e0c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d4e0f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d4e11: mov edx, dword ptr [ecx + 0x54] */
  edx = R32((uint32_t)(ecx + 0x54u));
/* 8d4e14: mov ecx, dword ptr [edi + 0x8c] */
  ecx = R32((uint32_t)(edi + 0x8cu));
/* 8d4e1a: mov esi, dword ptr [edx + 0x134c] */
  esi = R32((uint32_t)(edx + 0x134cu));
/* 8d4e20: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 8d4e23: mov esi, dword ptr [ecx + esi + 4] */
  esi = R32((uint32_t)(ecx + esi + 0x4u));
/* 8d4e27: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 8d4e2a: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8d4e2d: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8d4e2f: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 8d4e31: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 8d4e34: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 8d4e37: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 8d4e3a: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 8d4e3d: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 8d4e40: mov edx, dword ptr [edx + 0x134c] */
  edx = R32((uint32_t)(edx + 0x134cu));
/* 8d4e46: mov ecx, dword ptr [ecx + edx + 4] */
  ecx = R32((uint32_t)(ecx + edx + 0x4u));
/* 8d4e4a: lea edx, [ecx + eax + 0xc] */
  edx = (uint32_t)(ecx + eax + 0xcu);
/* 8d4e4e: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8d4e50: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8d4e53: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8d4e56: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 8d4e59: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 8d4e5c: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 8d4e5f: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 8d4e62: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 8d4e65: xor ebx, ebx */
  ebx = 0;
/* 8d4e67: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8d4e6a: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8d4e6d: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 8d4e70: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8d4e73: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 8d4e76: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 8d4e79: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8d4e7c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8d4e80: /* 8d4e80: cmp ebx, dword ptr [ebp - 0x50] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4e83: jge 0x8d5060 */
  if ((sf == of)) goto L_8d5060;
L_8d4e89: /* 8d4e89: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 8d4e8c: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* 8d4e8f: mov edx, dword ptr [edi + 0x34] */
  edx = R32((uint32_t)(edi + 0x34u));
/* 8d4e92: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8d4e95: mov esi, dword ptr [ecx + edx] */
  esi = R32((uint32_t)(ecx + edx));
/* 8d4e98: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8d4e9a: mov ecx, esi */
  ecx = esi;
/* 8d4e9c: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x8d4ea2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d4ea2: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 8d4ea5: mov al, byte ptr [esi + 0x29] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x29u))) & 0xffu);
/* 8d4ea8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8d4eaa: cmp al, 0x13 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x13u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8d4eac: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8d4eae: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8d4eb1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d4eb3: jne 0x8d4f0b */
  if (!zf) goto L_8d4f0b;
L_8d4eb5: /* 8d4eb5: lea ecx, [ebp - 0xd8] */
  ecx = (uint32_t)(ebp + 0xffffff28u);
/* 8d4ebb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d4ebc: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 8d4ec2: call dword ptr [0xcfa7dc] */
  esp -= 4; W32(esp, 0x8d4ec8u); SPILL(); f_4e30a8(); if (g_unwind) return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */ RELOAD();
/* 8d4ec8: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8d4ecb: fmul dword ptr [0xa1188c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1188cu)));
/* 8d4ed1: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8d4ed4: fmul dword ptr [0xa1188c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1188cu)));
/* 8d4eda: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8d4edd: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8d4edf: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 8d4ee2: fmul dword ptr [0xa1188c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1188cu)));
/* 8d4ee8: fstp dword ptr [ebp - 0xc8] */
  WF32((uint32_t)(ebp + 0xffffff38u), ST0); FPOP();
/* 8d4eee: fsubr dword ptr [ebp - 0x28] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffd8u))) - ST0;
/* 8d4ef1: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8d4ef4: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8d4ef7: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8d4efa: fsub dword ptr [ebp - 0xc8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff38u)));
/* 8d4f00: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 8d4f03: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 8d4f06: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 8d4f09: jmp 0x8d4f11 */
  goto L_8d4f11;
L_8d4f0b: /* 8d4f0b: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
L_8d4f11: /* 8d4f11: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8d4f13: mov dword ptr [ebp - 0xa0], edx */
  W32((uint32_t)(ebp + 0xffffff60u), edx);
/* 8d4f19: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8d4f1c: mov dword ptr [ebp - 0x9c], ecx */
  W32((uint32_t)(ebp + 0xffffff64u), ecx);
/* 8d4f22: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8d4f25: mov dword ptr [ebp - 0x98], edx */
  W32((uint32_t)(ebp + 0xffffff68u), edx);
/* 8d4f2b: mov dword ptr [ebp - 0xdc], 0 */
  W32((uint32_t)(ebp + 0xffffff24u), 0x0u);
/* 8d4f35: cmp byte ptr [esi + 0x29], 0x13 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x29u))); uint8_t b = (uint8_t)(0x13u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8d4f39: je 0x8d4fcc */
  if (zf) goto L_8d4fcc;
L_8d4f3f: /* 8d4f3f: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 8d4f45: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 8d4f4b: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 8d4f4e: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 8d4f54: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 8d4f57: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 8d4f5d: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 8d4f60: fstp dword ptr [ebp - 0xac] */
  WF32((uint32_t)(ebp + 0xffffff54u), ST0); FPOP();
/* 8d4f66: fstp dword ptr [ebp - 0xa8] */
  WF32((uint32_t)(ebp + 0xffffff58u), ST0); FPOP();
/* 8d4f6c: fstp dword ptr [ebp - 0xa4] */
  WF32((uint32_t)(ebp + 0xffffff5cu), ST0); FPOP();
/* 8d4f72: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8d4f78u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8d4f78: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 8d4f7b: fcomp dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
  FPOP();
/* 8d4f7e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d4f80: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8d4f83: jp 0x8d5057 */
  if (pf) goto L_8d5057;
L_8d4f89: /* 8d4f89: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 8d4f8f: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 8d4f92: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 8d4f98: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 8d4f9b: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 8d4fa1: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 8d4fa4: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 8d4fa7: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8d4fa9: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8d4fac: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8d4fae: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8d4fb0: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8d4fb2: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 8d4fb5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8d4fb7: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 8d4fbd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d4fbf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d4fc1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4fc4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d4fc6: jne 0x8d5057 */
  if (!zf) goto L_8d5057;
L_8d4fcc: /* 8d4fcc: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d4fcf: mov eax, dword ptr [eax + 0x54] */
  eax = R32((uint32_t)(eax + 0x54u));
/* 8d4fd2: mov ecx, dword ptr [eax + 0x84] */
  ecx = R32((uint32_t)(eax + 0x84u));
/* 8d4fd8: test ch, ch */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(((ecx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 8d4fda: jns 0x8d5038 */
  if (!sf) goto L_8d5038;
L_8d4fdc: /* 8d4fdc: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 8d4fe2: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 8d4fe8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d4fea: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d4fed: mov eax, esp */
  eax = esp;
/* 8d4fef: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 8d4ff6: mov esi, dword ptr [ebp - 0x60] */
  esi = R32((uint32_t)(ebp + 0xffffffa0u));
/* 8d4ff9: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 8d4ffb: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 8d5002: mov esi, dword ptr [ebp - 0x5c] */
  esi = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8d5005: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 8d5008: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 8d500f: mov esi, dword ptr [ebp - 0x58] */
  esi = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8d5012: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 8d5015: push 0x197 */
  { uint32_t v = 0x197u; esp -= 4; W32(esp, v); }
/* 8d501a: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 8d501d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d501e: lea eax, [ebp - 0xa0] */
  eax = (uint32_t)(ebp + 0xffffff60u);
/* 8d5024: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d5025: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d5027: lea eax, [ebp - 0x108] */
  eax = (uint32_t)(ebp + 0xfffffef8u);
/* 8d502d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d502e: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x8d5034u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d5034: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d5036: je 0x8d5057 */
  if (zf) goto L_8d5057;
L_8d5038: /* 8d5038: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8d503b: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* 8d503e: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 8d5041: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8d5044: mov ecx, dword ptr [edx + eax + 4] */
  ecx = R32((uint32_t)(edx + eax + 0x4u));
/* 8d5048: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d504b: lea eax, [ecx + edx] */
  eax = (uint32_t)(ecx + edx);
/* 8d504e: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 8d5050: mov cl, byte ptr [ebp + 0xb] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xbu))) & 0xffu);
/* 8d5053: or dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8d5055: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
L_8d5057: /* 8d5057: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8d5058: jmp 0x8d4e80 */
  goto L_8d4e80;
L_8d505d: /* 8d505d: mov edi, dword ptr [ebp - 0x38] */
  edi = R32((uint32_t)(ebp + 0xffffffc8u));
L_8d5060: /* 8d5060: mov al, byte ptr [ebp + 0xb] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xbu))) & 0xffu);
/* 8d5063: shl al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = 1;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8d5065: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d5067: mov byte ptr [ebp + 0xb], al */
  W8((uint32_t)(ebp + 0xbu), (eax & 0xffu));
/* 8d506a: jne 0x8d5073 */
  if (!zf) goto L_8d5073;
L_8d506c: /* 8d506c: inc dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
/* 8d506f: mov byte ptr [ebp + 0xb], 1 */
  W8((uint32_t)(ebp + 0xbu), 0x1u);
L_8d5073: /* 8d5073: inc dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 8d5076: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 8d5079: jmp 0x8d4c60 */
  goto L_8d4c60;
L_8d507e: /* 8d507e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d507f: jmp 0x8d4c44 */
  goto L_8d4c44;
L_8d5084: /* 8d5084: xor esi, esi */
  esi = 0;
L_8d5086: /* 8d5086: cmp esi, dword ptr [edi + 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d5089: jge 0x8d50d2 */
  if ((sf == of)) goto L_8d50d2;
L_8d508b: /* 8d508b: xor ecx, ecx */
  ecx = 0;
/* 8d508d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8d5090: /* 8d5090: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 8d5093: mov edx, esi */
  edx = esi;
/* 8d5095: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8d5098: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d509a: cmp ecx, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d509d: jge 0x8d50ab */
  if ((sf == of)) goto L_8d50ab;
L_8d509f: /* 8d509f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8d50a2: cmp byte ptr [ecx + edx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + edx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8d50a6: jne 0x8d50cf */
  if (!zf) goto L_8d50cf;
L_8d50a8: /* 8d50a8: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8d50a9: jmp 0x8d5090 */
  goto L_8d5090;
L_8d50ab: /* 8d50ab: mov ecx, dword ptr [edi + 0x34] */
  ecx = R32((uint32_t)(edi + 0x34u));
/* 8d50ae: lea ebx, [edi + 0x34] */
  ebx = (uint32_t)(edi + 0x34u);
/* 8d50b1: mov eax, esi */
  eax = esi;
/* 8d50b3: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8d50b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d50b8: lea ecx, [eax + ecx + 4] */
  ecx = (uint32_t)(eax + ecx + 0x4u);
/* 8d50bc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d50be: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8d50c4u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8d50c4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d50c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d50c7: mov ecx, ebx */
  ecx = ebx;
/* 8d50c9: call 0x6c16b8 */
  esp -= 4; W32(esp, 0x8d50ceu); SPILL(); f_6c16b8(); if (g_unwind) return; RELOAD();
/* 8d50ce: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_8d50cf: /* 8d50cf: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8d50d0: jmp 0x8d5086 */
  goto L_8d5086;
L_8d50d2: /* 8d50d2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d50d4: mov ecx, edi */
  ecx = edi;
/* 8d50d6: call 0x6c8b7a */
  esp -= 4; W32(esp, 0x8d50dbu); SPILL(); f_6c8b7a(); if (g_unwind) return; RELOAD();
/* 8d50db: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8d50de: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8d50e2: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8d50e7u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8d50e7: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8d50ea: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d50ed: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d50ee: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 8d50f1: mov esi, eax */
  esi = eax;
/* 8d50f3: jmp 0x8d4a72 */
  goto L_8d4a72;
L_8d50f8: /* 8d50f8: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8d50fa: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d50fc: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0x8d50ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d50ff: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 8d5105: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8d5109: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8d510eu); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8d510e: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 8d5111: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8d5115: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x8d511au); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 8d511a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d511d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d511e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d511f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d5126: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d5127: mov esp, ebp */
  esp = ebp;
/* 8d5129: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d512a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8d4c59(void) {
  LOAD_REGS();
  goto L_8d4c59;
L_8d4a72: /* 8d4a72: mov eax, dword ptr [ebx + 0x54] */
  eax = R32((uint32_t)(ebx + 0x54u));
/* 8d4a75: mov ecx, dword ptr [eax + 0x1278] */
  ecx = R32((uint32_t)(eax + 0x1278u));
/* 8d4a7b: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4a7d: mov edx, dword ptr [0xcfa508] */
  edx = R32((uint32_t)(0xcfa508u));
/* 8d4a83: jge 0x8d50f8 */
  if ((sf == of)) goto L_8d50f8;
L_8d4a89: /* 8d4a89: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8d4a8b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8d4a8d: push 0xaec978 */
  { uint32_t v = 0xaec978u; esp -= 4; W32(esp, v); }
/* 8d4a92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d4a93: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d4a94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d4a95: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x8d4a98u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d4a98: mov eax, dword ptr [ebx + 0x54] */
  eax = R32((uint32_t)(ebx + 0x54u));
/* 8d4a9b: mov ecx, dword ptr [eax + 0x1274] */
  ecx = R32((uint32_t)(eax + 0x1274u));
/* 8d4aa1: mov edi, dword ptr [ecx + esi*4] */
  edi = R32((uint32_t)(ecx + esi*4));
/* 8d4aa4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d4aa7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d4aa9: lea ecx, [edi + 0x44] */
  ecx = (uint32_t)(edi + 0x44u);
/* 8d4aac: mov dword ptr [ebp - 0x38], edi */
  W32((uint32_t)(ebp + 0xffffffc8u), edi);
/* 8d4aaf: call dword ptr [0xcfa894] */
  esp -= 4; W32(esp, 0x8d4ab5u); SPILL(); f_4e44f8(); if (g_unwind) return; /* Core!?GetExtrema@FBox@@QAEAAVFVector@@H@Z */ RELOAD();
/* 8d4ab5: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 8d4ab7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d4ab8: lea ecx, [ebp - 0xbc] */
  ecx = (uint32_t)(ebp + 0xffffff44u);
/* 8d4abe: call dword ptr [0xcfa55c] */
  esp -= 4; W32(esp, 0x8d4ac4u); SPILL(); f_4e34c2(); if (g_unwind) return; /* Core!??0FSphere@@QAE@PBVFVector@@H@Z */ RELOAD();
/* 8d4ac4: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8d4ac7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4ac9: jne 0x8d4af5 */
  if (!zf) goto L_8d4af5;
L_8d4acb: /* 8d4acb: lea ebx, [edi + 0x34] */
  ebx = (uint32_t)(edi + 0x34u);
/* 8d4ace: xor esi, esi */
  esi = 0;
L_8d4ad0: /* 8d4ad0: cmp esi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4ad3: jge 0x8d4ae9 */
  if ((sf == of)) goto L_8d4ae9;
L_8d4ad5: /* 8d4ad5: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8d4ad7: mov eax, esi */
  eax = esi;
/* 8d4ad9: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8d4adc: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d4ade: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 8d4ae1: call 0x6c3e13 */
  esp -= 4; W32(esp, 0x8d4ae6u); SPILL(); f_6c3e13(); if (g_unwind) return; RELOAD();
/* 8d4ae6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8d4ae7: jmp 0x8d4ad0 */
  goto L_8d4ad0;
L_8d4ae9: /* 8d4ae9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d4aeb: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8d4aed: mov ecx, ebx */
  ecx = ebx;
/* 8d4aef: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8d4af5u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
L_8d4af5: /* 8d4af5: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8d4af8: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8d4afeu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8d4afe: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8d4b02: xor esi, esi */
  esi = 0;
L_8d4b04: /* 8d4b04: cmp esi, dword ptr [ebp - 0x6c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff94u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4b07: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 8d4b0a: jge 0x8d4c30 */
  if ((sf == of)) goto L_8d4c30;
L_8d4b10: /* 8d4b10: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 8d4b13: mov ebx, dword ptr [edx + esi*4] */
  ebx = R32((uint32_t)(edx + esi*4));
/* 8d4b16: cmp byte ptr [ebx + 0x29], 0x13 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x29u))); uint8_t b = (uint8_t)(0x13u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8d4b1a: je 0x8d4b8b */
  if (zf) goto L_8d4b8b;
L_8d4b1c: /* 8d4b1c: fld dword ptr [ebx + 0x178] */
  { double v = F32((uint32_t)(ebx + 0x178u)); FPUSH(v); }
/* 8d4b22: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8d4b24: fsub dword ptr [ebp - 0xb4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff4cu)));
/* 8d4b2a: mov ecx, ebx */
  ecx = ebx;
/* 8d4b2c: fld dword ptr [ebx + 0x174] */
  { double v = F32((uint32_t)(ebx + 0x174u)); FPUSH(v); }
/* 8d4b32: fsub dword ptr [ebp - 0xb8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff48u)));
/* 8d4b38: fld dword ptr [ebx + 0x170] */
  { double v = F32((uint32_t)(ebx + 0x170u)); FPUSH(v); }
/* 8d4b3e: fsub dword ptr [ebp - 0xbc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff44u)));
/* 8d4b44: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 8d4b4a: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 8d4b50: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 8d4b56: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x8d4b5cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d4b5c: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 8d4b5f: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 8d4b65: fadd dword ptr [ebp - 0xb0] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff50u)));
/* 8d4b6b: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 8d4b6e: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8d4b74u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8d4b74: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8d4b77: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8d4b7a: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 8d4b7d: fcomp dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
  FPOP();
/* 8d4b80: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d4b82: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4b85: jne 0x8d4c2a */
  if (!zf) goto L_8d4c2a;
L_8d4b8b: /* 8d4b8b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8d4b8e: xor esi, esi */
  esi = 0;
/* 8d4b90: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4b92: je 0x8d4bb2 */
  if (zf) goto L_8d4bb2;
L_8d4b94: /* 8d4b94: xor ecx, ecx */
  ecx = 0;
L_8d4b96: /* 8d4b96: cmp ecx, dword ptr [edi + 0x38] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4b99: jge 0x8d4bae */
  if ((sf == of)) goto L_8d4bae;
L_8d4b9b: /* 8d4b9b: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 8d4b9e: mov edx, ecx */
  edx = ecx;
/* 8d4ba0: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8d4ba3: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d4ba5: cmp dword ptr [eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d4ba7: jne 0x8d4bab */
  if (!zf) goto L_8d4bab;
L_8d4ba9: /* 8d4ba9: mov esi, eax */
  esi = eax;
L_8d4bab: /* 8d4bab: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8d4bac: jmp 0x8d4b96 */
  goto L_8d4b96;
L_8d4bae: /* 8d4bae: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4bb0: jne 0x8d4bdb */
  if (!zf) goto L_8d4bdb;
L_8d4bb2: /* 8d4bb2: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8d4bb4: lea esi, [edi + 0x34] */
  esi = (uint32_t)(edi + 0x34u);
/* 8d4bb7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d4bb9: mov ecx, esi */
  ecx = esi;
/* 8d4bbb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8d4bc1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8d4bc1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8d4bc3: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8d4bc6: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8d4bc8: mov esi, eax */
  esi = eax;
/* 8d4bca: je 0x8d4bd9 */
  if (zf) goto L_8d4bd9;
L_8d4bcc: /* 8d4bcc: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8d4bcf: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 8d4bd1: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8d4bd7u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8d4bd7: jmp 0x8d4bdb */
  goto L_8d4bdb;
L_8d4bd9: /* 8d4bd9: xor esi, esi */
  esi = 0;
L_8d4bdb: /* 8d4bdb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d4bdd: lea ebx, [esi + 4] */
  ebx = (uint32_t)(esi + 0x4u);
/* 8d4be0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d4be2: mov ecx, ebx */
  ecx = ebx;
/* 8d4be4: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8d4beau); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8d4bea: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 8d4bed: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 8d4bf0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d4bf1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8d4bf2: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 8d4bf5: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d4bf8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8d4bf9: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8d4bfc: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d4bfe: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8d4c01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d4c02: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d4c04: mov ecx, ebx */
  ecx = ebx;
/* 8d4c06: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8d4c0cu); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8d4c0c: mov ebx, dword ptr [edi + 0x34] */
  ebx = R32((uint32_t)(edi + 0x34u));
/* 8d4c0f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8d4c11: sub esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8d4c13: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d4c15: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8d4c18: sar esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 8d4c1b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8d4c21u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8d4c21: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8d4c24: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
/* 8d4c27: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
L_8d4c2a: /* 8d4c2a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8d4c2b: jmp 0x8d4b04 */
  goto L_8d4b04;
L_8d4c30: /* 8d4c30: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8d4c33: xor eax, eax */
  eax = 0;
/* 8d4c35: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d4c37: je 0x8d50d2 */
  if (zf) goto L_8d50d2;
L_8d4c3d: /* 8d4c3d: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8d4c40: mov byte ptr [ebp + 0xb], 1 */
  W8((uint32_t)(ebp + 0xbu), 0x1u);
L_8d4c44: /* 8d4c44: cmp eax, dword ptr [edi + 0x64] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x64u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4c47: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 8d4c4a: jg 0x8d5084 */
  if ((!zf && sf == of)) goto L_8d5084;
L_8d4c50: /* 8d4c50: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 8d4c57: jmp 0x8d4c60 */
  goto L_8d4c60;
L_8d4c59: /* 8d4c59: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8d4c60: /* 8d4c60: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d4c63: cmp ecx, dword ptr [edi + 0x60] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4c66: jg 0x8d507e */
  if ((!zf && sf == of)) goto L_8d507e;
L_8d4c6c: /* 8d4c6c: mov edx, dword ptr [edi + 0x6c] */
  edx = R32((uint32_t)(edi + 0x6cu));
/* 8d4c6f: lea ecx, [edx + eax - 1] */
  ecx = (uint32_t)(edx + eax + 0xffffffffu);
/* 8d4c73: xor edx, edx */
  edx = 0;
/* 8d4c75: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8d4c77: setle dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((zf || sf != of)) ? 1 : 0) & 0xffu);
/* 8d4c7a: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 8d4c7b: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8d4c7d: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
L_8d4c80: /* 8d4c80: mov ecx, dword ptr [edi + 0x6c] */
  ecx = R32((uint32_t)(edi + 0x6cu));
/* 8d4c83: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d4c86: lea ecx, [ecx + eax + 1] */
  ecx = (uint32_t)(ecx + eax + 0x1u);
/* 8d4c8a: mov eax, dword ptr [edx + 0x54] */
  eax = R32((uint32_t)(edx + 0x54u));
/* 8d4c8d: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8d4c90: mov eax, dword ptr [eax + 0x1290] */
  eax = R32((uint32_t)(eax + 0x1290u));
/* 8d4c96: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8d4c97: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4c99: jle 0x8d4c9d */
  if ((zf || sf != of)) goto L_8d4c9d;
L_8d4c9b: /* 8d4c9b: mov eax, ecx */
  eax = ecx;
L_8d4c9d: /* 8d4c9d: cmp dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4ca0: jg 0x8d4cf6 */
  if ((!zf && sf == of)) goto L_8d4cf6;
L_8d4ca2: /* 8d4ca2: mov eax, dword ptr [edi + 0x68] */
  eax = R32((uint32_t)(edi + 0x68u));
/* 8d4ca5: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d4ca8: lea ebx, [eax + ecx] */
  ebx = (uint32_t)(eax + ecx);
/* 8d4cab: xor edx, edx */
  edx = 0;
/* 8d4cad: lea eax, [ebx - 1] */
  eax = (uint32_t)(ebx + 0xffffffffu);
/* 8d4cb0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8d4cb2: setle dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((zf || sf != of)) ? 1 : 0) & 0xffu);
/* 8d4cb5: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 8d4cb6: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8d4cb8: mov esi, edx */
  esi = edx;
/* 8d4cba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8d4cc0: /* 8d4cc0: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d4cc3: mov eax, dword ptr [eax + 0x128c] */
  eax = R32((uint32_t)(eax + 0x128cu));
/* 8d4cc9: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 8d4ccc: lea edx, [eax - 1] */
  edx = (uint32_t)(eax + 0xffffffffu);
/* 8d4ccf: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4cd1: jg 0x8d4cd5 */
  if ((!zf && sf == of)) goto L_8d4cd5;
L_8d4cd3: /* 8d4cd3: mov ecx, edx */
  ecx = edx;
L_8d4cd5: /* 8d4cd5: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4cd7: jg 0x8d4cee */
  if ((!zf && sf == of)) goto L_8d4cee;
L_8d4cd9: /* 8d4cd9: imul eax, dword ptr [ebp - 0x14] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  eax = (uint32_t)r;
  }
/* 8d4cdd: mov ecx, dword ptr [ebp - 0x88] */
  ecx = R32((uint32_t)(ebp + 0xffffff78u));
/* 8d4ce3: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d4ce5: cmp dword ptr [ecx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d4ce9: jne 0x8d4d00 */
  if (!zf) goto L_8d4d00;
L_8d4ceb: /* 8d4ceb: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8d4cec: jmp 0x8d4cc0 */
  goto L_8d4cc0;
L_8d4cee: /* 8d4cee: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 8d4cf1: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 8d4cf4: jmp 0x8d4c80 */
  goto L_8d4c80;
L_8d4cf6: /* 8d4cf6: xor eax, eax */
  eax = 0;
/* 8d4cf8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4cfa: je 0x8d5060 */
  if (zf) goto L_8d5060;
L_8d4d00: /* 8d4d00: mov edx, dword ptr [edi + 0x68] */
  edx = R32((uint32_t)(edi + 0x68u));
/* 8d4d03: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d4d06: lea ecx, [edx + eax] */
  ecx = (uint32_t)(edx + eax);
/* 8d4d09: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4d0b: je 0x8d4df8 */
  if (zf) goto L_8d4df8;
L_8d4d11: /* 8d4d11: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* 8d4d14: mov esi, dword ptr [ebp - 0x34] */
  esi = R32((uint32_t)(ebp + 0xffffffccu));
/* 8d4d17: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8d4d19: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4d1b: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 8d4d1e: je 0x8d4df8 */
  if (zf) goto L_8d4df8;
L_8d4d24: /* 8d4d24: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d4d27: mov eax, dword ptr [eax + 0x54] */
  eax = R32((uint32_t)(eax + 0x54u));
/* 8d4d2a: mov ebx, dword ptr [eax + 0x128c] */
  ebx = R32((uint32_t)(eax + 0x128cu));
/* 8d4d30: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 8d4d31: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d4d33: je 0x8d4df8 */
  if (zf) goto L_8d4df8;
L_8d4d39: /* 8d4d39: mov ecx, dword ptr [eax + 0x1290] */
  ecx = R32((uint32_t)(eax + 0x1290u));
/* 8d4d3f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8d4d40: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d4d42: je 0x8d4df8 */
  if (zf) goto L_8d4df8;
L_8d4d48: /* 8d4d48: mov ecx, dword ptr [eax + 0x128c] */
  ecx = R32((uint32_t)(eax + 0x128cu));
/* 8d4d4e: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d4d51: imul ecx, esi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(esi);
  ecx = (uint32_t)r;
  }
/* 8d4d54: mov edi, dword ptr [eax + 0x131c] */
  edi = R32((uint32_t)(eax + 0x131cu));
/* 8d4d5a: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d4d5c: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d4d5e: mov esi, ecx */
  esi = ecx;
/* 8d4d60: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 8d4d63: mov ebx, 1 */
  ebx = 0x1u;
/* 8d4d68: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 8d4d6a: sar esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 8d4d6d: test dword ptr [edi + esi*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + esi*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4d70: jne 0x8d4df5 */
  if (!zf) goto L_8d4df5;
L_8d4d76: /* 8d4d76: mov ecx, dword ptr [eax + 0x128c] */
  ecx = R32((uint32_t)(eax + 0x128cu));
/* 8d4d7c: imul ecx, dword ptr [ebp - 0x14] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  ecx = (uint32_t)r;
  }
/* 8d4d80: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d4d83: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d4d85: lea ecx, [ecx + esi - 1] */
  ecx = (uint32_t)(ecx + esi + 0xffffffffu);
/* 8d4d89: mov esi, ecx */
  esi = ecx;
/* 8d4d8b: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 8d4d8e: mov ebx, 1 */
  ebx = 0x1u;
/* 8d4d93: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 8d4d95: sar esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 8d4d98: test dword ptr [edi + esi*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + esi*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4d9b: jne 0x8d4df5 */
  if (!zf) goto L_8d4df5;
L_8d4d9d: /* 8d4d9d: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d4da0: mov ecx, dword ptr [eax + 0x128c] */
  ecx = R32((uint32_t)(eax + 0x128cu));
/* 8d4da6: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d4da9: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 8d4daa: imul ecx, esi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(esi);
  ecx = (uint32_t)r;
  }
/* 8d4dad: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d4daf: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d4db1: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 8d4db4: mov esi, ecx */
  esi = ecx;
/* 8d4db6: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 8d4db9: mov ebx, 1 */
  ebx = 0x1u;
/* 8d4dbe: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 8d4dc0: sar esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 8d4dc3: test dword ptr [edi + esi*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + esi*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4dc6: jne 0x8d4df5 */
  if (!zf) goto L_8d4df5;
L_8d4dc8: /* 8d4dc8: mov ecx, dword ptr [eax + 0x128c] */
  ecx = R32((uint32_t)(eax + 0x128cu));
/* 8d4dce: imul ecx, dword ptr [ebp - 0x20] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  ecx = (uint32_t)r;
  }
/* 8d4dd2: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d4dd4: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d4dd7: lea ecx, [ecx + edx - 1] */
  ecx = (uint32_t)(ecx + edx + 0xffffffffu);
/* 8d4ddb: mov edx, ecx */
  edx = ecx;
/* 8d4ddd: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 8d4de0: mov esi, 1 */
  esi = 0x1u;
/* 8d4de5: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 8d4de7: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8d4dea: mov eax, edi */
  eax = edi;
/* 8d4dec: test dword ptr [eax + edx*4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + edx*4))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4def: je 0x8d505d */
  if (zf) goto L_8d505d;
L_8d4df5: /* 8d4df5: mov edi, dword ptr [ebp - 0x38] */
  edi = R32((uint32_t)(ebp + 0xffffffc8u));
L_8d4df8: /* 8d4df8: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 8d4dfb: movzx eax, word ptr [edi + 0x90] */
  eax = (uint32_t)(R16((uint32_t)(edi + 0x90u)));
/* 8d4e02: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d4e05: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8d4e06: imul ecx, dword ptr [ebp - 0x34] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  ecx = (uint32_t)r;
  }
/* 8d4e0a: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8d4e0c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d4e0f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d4e11: mov edx, dword ptr [ecx + 0x54] */
  edx = R32((uint32_t)(ecx + 0x54u));
/* 8d4e14: mov ecx, dword ptr [edi + 0x8c] */
  ecx = R32((uint32_t)(edi + 0x8cu));
/* 8d4e1a: mov esi, dword ptr [edx + 0x134c] */
  esi = R32((uint32_t)(edx + 0x134cu));
/* 8d4e20: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 8d4e23: mov esi, dword ptr [ecx + esi + 4] */
  esi = R32((uint32_t)(ecx + esi + 0x4u));
/* 8d4e27: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 8d4e2a: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8d4e2d: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8d4e2f: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 8d4e31: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 8d4e34: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 8d4e37: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 8d4e3a: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 8d4e3d: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 8d4e40: mov edx, dword ptr [edx + 0x134c] */
  edx = R32((uint32_t)(edx + 0x134cu));
/* 8d4e46: mov ecx, dword ptr [ecx + edx + 4] */
  ecx = R32((uint32_t)(ecx + edx + 0x4u));
/* 8d4e4a: lea edx, [ecx + eax + 0xc] */
  edx = (uint32_t)(ecx + eax + 0xcu);
/* 8d4e4e: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8d4e50: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8d4e53: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8d4e56: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 8d4e59: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 8d4e5c: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 8d4e5f: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 8d4e62: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 8d4e65: xor ebx, ebx */
  ebx = 0;
/* 8d4e67: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8d4e6a: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8d4e6d: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 8d4e70: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8d4e73: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 8d4e76: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 8d4e79: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8d4e7c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8d4e80: /* 8d4e80: cmp ebx, dword ptr [ebp - 0x50] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d4e83: jge 0x8d5060 */
  if ((sf == of)) goto L_8d5060;
L_8d4e89: /* 8d4e89: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 8d4e8c: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* 8d4e8f: mov edx, dword ptr [edi + 0x34] */
  edx = R32((uint32_t)(edi + 0x34u));
/* 8d4e92: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8d4e95: mov esi, dword ptr [ecx + edx] */
  esi = R32((uint32_t)(ecx + edx));
/* 8d4e98: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8d4e9a: mov ecx, esi */
  ecx = esi;
/* 8d4e9c: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x8d4ea2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d4ea2: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 8d4ea5: mov al, byte ptr [esi + 0x29] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x29u))) & 0xffu);
/* 8d4ea8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8d4eaa: cmp al, 0x13 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x13u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8d4eac: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8d4eae: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8d4eb1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d4eb3: jne 0x8d4f0b */
  if (!zf) goto L_8d4f0b;
L_8d4eb5: /* 8d4eb5: lea ecx, [ebp - 0xd8] */
  ecx = (uint32_t)(ebp + 0xffffff28u);
/* 8d4ebb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d4ebc: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 8d4ec2: call dword ptr [0xcfa7dc] */
  esp -= 4; W32(esp, 0x8d4ec8u); SPILL(); f_4e30a8(); if (g_unwind) return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */ RELOAD();
/* 8d4ec8: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8d4ecb: fmul dword ptr [0xa1188c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1188cu)));
/* 8d4ed1: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8d4ed4: fmul dword ptr [0xa1188c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1188cu)));
/* 8d4eda: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8d4edd: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8d4edf: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 8d4ee2: fmul dword ptr [0xa1188c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1188cu)));
/* 8d4ee8: fstp dword ptr [ebp - 0xc8] */
  WF32((uint32_t)(ebp + 0xffffff38u), ST0); FPOP();
/* 8d4eee: fsubr dword ptr [ebp - 0x28] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffd8u))) - ST0;
/* 8d4ef1: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8d4ef4: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8d4ef7: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8d4efa: fsub dword ptr [ebp - 0xc8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff38u)));
/* 8d4f00: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 8d4f03: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 8d4f06: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 8d4f09: jmp 0x8d4f11 */
  goto L_8d4f11;
L_8d4f0b: /* 8d4f0b: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
L_8d4f11: /* 8d4f11: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8d4f13: mov dword ptr [ebp - 0xa0], edx */
  W32((uint32_t)(ebp + 0xffffff60u), edx);
/* 8d4f19: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8d4f1c: mov dword ptr [ebp - 0x9c], ecx */
  W32((uint32_t)(ebp + 0xffffff64u), ecx);
/* 8d4f22: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8d4f25: mov dword ptr [ebp - 0x98], edx */
  W32((uint32_t)(ebp + 0xffffff68u), edx);
/* 8d4f2b: mov dword ptr [ebp - 0xdc], 0 */
  W32((uint32_t)(ebp + 0xffffff24u), 0x0u);
/* 8d4f35: cmp byte ptr [esi + 0x29], 0x13 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x29u))); uint8_t b = (uint8_t)(0x13u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8d4f39: je 0x8d4fcc */
  if (zf) goto L_8d4fcc;
L_8d4f3f: /* 8d4f3f: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 8d4f45: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 8d4f4b: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 8d4f4e: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 8d4f54: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 8d4f57: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 8d4f5d: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 8d4f60: fstp dword ptr [ebp - 0xac] */
  WF32((uint32_t)(ebp + 0xffffff54u), ST0); FPOP();
/* 8d4f66: fstp dword ptr [ebp - 0xa8] */
  WF32((uint32_t)(ebp + 0xffffff58u), ST0); FPOP();
/* 8d4f6c: fstp dword ptr [ebp - 0xa4] */
  WF32((uint32_t)(ebp + 0xffffff5cu), ST0); FPOP();
/* 8d4f72: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8d4f78u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8d4f78: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 8d4f7b: fcomp dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
  FPOP();
/* 8d4f7e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d4f80: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8d4f83: jp 0x8d5057 */
  if (pf) goto L_8d5057;
L_8d4f89: /* 8d4f89: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 8d4f8f: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 8d4f92: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 8d4f98: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 8d4f9b: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 8d4fa1: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 8d4fa4: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 8d4fa7: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8d4fa9: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8d4fac: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8d4fae: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8d4fb0: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8d4fb2: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 8d4fb5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8d4fb7: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 8d4fbd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d4fbf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d4fc1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d4fc4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d4fc6: jne 0x8d5057 */
  if (!zf) goto L_8d5057;
L_8d4fcc: /* 8d4fcc: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d4fcf: mov eax, dword ptr [eax + 0x54] */
  eax = R32((uint32_t)(eax + 0x54u));
/* 8d4fd2: mov ecx, dword ptr [eax + 0x84] */
  ecx = R32((uint32_t)(eax + 0x84u));
/* 8d4fd8: test ch, ch */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(((ecx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 8d4fda: jns 0x8d5038 */
  if (!sf) goto L_8d5038;
L_8d4fdc: /* 8d4fdc: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 8d4fe2: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 8d4fe8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d4fea: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d4fed: mov eax, esp */
  eax = esp;
/* 8d4fef: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 8d4ff6: mov esi, dword ptr [ebp - 0x60] */
  esi = R32((uint32_t)(ebp + 0xffffffa0u));
/* 8d4ff9: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 8d4ffb: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 8d5002: mov esi, dword ptr [ebp - 0x5c] */
  esi = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8d5005: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 8d5008: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 8d500f: mov esi, dword ptr [ebp - 0x58] */
  esi = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8d5012: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 8d5015: push 0x197 */
  { uint32_t v = 0x197u; esp -= 4; W32(esp, v); }
/* 8d501a: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 8d501d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d501e: lea eax, [ebp - 0xa0] */
  eax = (uint32_t)(ebp + 0xffffff60u);
/* 8d5024: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d5025: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d5027: lea eax, [ebp - 0x108] */
  eax = (uint32_t)(ebp + 0xfffffef8u);
/* 8d502d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d502e: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x8d5034u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d5034: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d5036: je 0x8d5057 */
  if (zf) goto L_8d5057;
L_8d5038: /* 8d5038: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8d503b: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* 8d503e: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 8d5041: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8d5044: mov ecx, dword ptr [edx + eax + 4] */
  ecx = R32((uint32_t)(edx + eax + 0x4u));
/* 8d5048: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d504b: lea eax, [ecx + edx] */
  eax = (uint32_t)(ecx + edx);
/* 8d504e: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 8d5050: mov cl, byte ptr [ebp + 0xb] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xbu))) & 0xffu);
/* 8d5053: or dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8d5055: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
L_8d5057: /* 8d5057: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8d5058: jmp 0x8d4e80 */
  goto L_8d4e80;
L_8d505d: /* 8d505d: mov edi, dword ptr [ebp - 0x38] */
  edi = R32((uint32_t)(ebp + 0xffffffc8u));
L_8d5060: /* 8d5060: mov al, byte ptr [ebp + 0xb] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xbu))) & 0xffu);
/* 8d5063: shl al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = 1;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8d5065: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d5067: mov byte ptr [ebp + 0xb], al */
  W8((uint32_t)(ebp + 0xbu), (eax & 0xffu));
/* 8d506a: jne 0x8d5073 */
  if (!zf) goto L_8d5073;
L_8d506c: /* 8d506c: inc dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
/* 8d506f: mov byte ptr [ebp + 0xb], 1 */
  W8((uint32_t)(ebp + 0xbu), 0x1u);
L_8d5073: /* 8d5073: inc dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 8d5076: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 8d5079: jmp 0x8d4c60 */
  goto L_8d4c60;
L_8d507e: /* 8d507e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d507f: jmp 0x8d4c44 */
  goto L_8d4c44;
L_8d5084: /* 8d5084: xor esi, esi */
  esi = 0;
L_8d5086: /* 8d5086: cmp esi, dword ptr [edi + 0x38] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x38u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d5089: jge 0x8d50d2 */
  if ((sf == of)) goto L_8d50d2;
L_8d508b: /* 8d508b: xor ecx, ecx */
  ecx = 0;
/* 8d508d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8d5090: /* 8d5090: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 8d5093: mov edx, esi */
  edx = esi;
/* 8d5095: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8d5098: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d509a: cmp ecx, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d509d: jge 0x8d50ab */
  if ((sf == of)) goto L_8d50ab;
L_8d509f: /* 8d509f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8d50a2: cmp byte ptr [ecx + edx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + edx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8d50a6: jne 0x8d50cf */
  if (!zf) goto L_8d50cf;
L_8d50a8: /* 8d50a8: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8d50a9: jmp 0x8d5090 */
  goto L_8d5090;
L_8d50ab: /* 8d50ab: mov ecx, dword ptr [edi + 0x34] */
  ecx = R32((uint32_t)(edi + 0x34u));
/* 8d50ae: lea ebx, [edi + 0x34] */
  ebx = (uint32_t)(edi + 0x34u);
/* 8d50b1: mov eax, esi */
  eax = esi;
/* 8d50b3: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8d50b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d50b8: lea ecx, [eax + ecx + 4] */
  ecx = (uint32_t)(eax + ecx + 0x4u);
/* 8d50bc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d50be: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8d50c4u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8d50c4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d50c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d50c7: mov ecx, ebx */
  ecx = ebx;
/* 8d50c9: call 0x6c16b8 */
  esp -= 4; W32(esp, 0x8d50ceu); SPILL(); f_6c16b8(); if (g_unwind) return; RELOAD();
/* 8d50ce: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_8d50cf: /* 8d50cf: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8d50d0: jmp 0x8d5086 */
  goto L_8d5086;
L_8d50d2: /* 8d50d2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d50d4: mov ecx, edi */
  ecx = edi;
/* 8d50d6: call 0x6c8b7a */
  esp -= 4; W32(esp, 0x8d50dbu); SPILL(); f_6c8b7a(); if (g_unwind) return; RELOAD();
/* 8d50db: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8d50de: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8d50e2: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8d50e7u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8d50e7: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8d50ea: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d50ed: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d50ee: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 8d50f1: mov esi, eax */
  esi = eax;
/* 8d50f3: jmp 0x8d4a72 */
  goto L_8d4a72;
L_8d50f8: /* 8d50f8: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8d50fa: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d50fc: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0x8d50ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d50ff: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 8d5105: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8d5109: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8d510eu); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8d510e: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 8d5111: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8d5115: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x8d511au); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 8d511a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d511d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d511e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d511f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d5126: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d5127: mov esp, ebp */
  esp = ebp;
/* 8d5129: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d512a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8d512d(void) {
  LOAD_REGS();
L_8d512d: /* 8d512d: mov ecx, dword ptr [ebp - 0xcc] */
  ecx = R32((uint32_t)(ebp + 0xffffff34u));
/* 8d5133: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d5138: lea edx, [ebp - 0x64] */
  edx = (uint32_t)(ebp + 0xffffff9cu);
/* 8d513b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d513c: mov dword ptr [ebp - 0x64], ecx */
  W32((uint32_t)(ebp + 0xffffff9cu), ecx);
/* 8d513f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d5144u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d5144(); return;
}

void f_8d5144(void) {
  LOAD_REGS();
L_8d5144: /* 8d5144: push 0xa1cbc4 */
  { uint32_t v = 0xa1cbc4u; esp -= 4; W32(esp, v); }
/* 8d5149: push 0xaec9a0 */
  { uint32_t v = 0xaec9a0u; esp -= 4; W32(esp, v); }
/* 8d514e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d5154u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d5154: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d5157: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d5159: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d515b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d5160u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8d5160: guest_badaddr(0x8d5160); return;
}

void f_8d53a0(void) {
  LOAD_REGS();
L_8d53a0: /* 8d53a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d53a1: mov ebp, esp */
  ebp = esp;
/* 8d53a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d53a5: push 0x9d8070 */
  { uint32_t v = 0x9d8070u; esp -= 4; W32(esp, v); }
/* 8d53aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d53b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d53b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d53b8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d53bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d53bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d53bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d53be: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d53c1: mov esi, ecx */
  esi = ecx;
/* 8d53c3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8d53ca: call 0x6c45ed */
  esp -= 4; W32(esp, 0x8d53cfu); SPILL(); f_6c45ed(); if (g_unwind) return; RELOAD();
/* 8d53cf: mov eax, dword ptr [esi + 0xb0] */
  eax = R32((uint32_t)(esi + 0xb0u));
/* 8d53d5: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 8d53db: call 0x6c2649 */
  esp -= 4; W32(esp, 0x8d53e0u); SPILL(); f_6c2649(); if (g_unwind) return; RELOAD();
/* 8d53e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d53e2: lea ecx, [esi + 0x1268] */
  ecx = (uint32_t)(esi + 0x1268u);
/* 8d53e8: call 0x6cbc8a */
  esp -= 4; W32(esp, 0x8d53edu); SPILL(); f_6cbc8a(); if (g_unwind) return; RELOAD();
/* 8d53ed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d53ef: lea ecx, [esi + 0x1340] */
  ecx = (uint32_t)(esi + 0x1340u);
/* 8d53f5: call 0x6c5c95 */
  esp -= 4; W32(esp, 0x8d53fau); SPILL(); f_6c5c95(); if (g_unwind) return; RELOAD();
/* 8d53fa: mov ecx, esi */
  ecx = esi;
/* 8d53fc: call 0x6c6ff0 */
  esp -= 4; W32(esp, 0x8d5401u); SPILL(); f_6c6ff0(); if (g_unwind) return; RELOAD();
/* 8d5401: mov ecx, esi */
  ecx = esi;
/* 8d5403: call 0x6c4e44 */
  esp -= 4; W32(esp, 0x8d5408u); SPILL(); f_6c4e44(); if (g_unwind) return; RELOAD();
/* 8d5408: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d540a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d540c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d540e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d5410: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d5412: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d5414: mov ecx, esi */
  ecx = esi;
/* 8d5416: call 0x6ca63c */
  esp -= 4; W32(esp, 0x8d541bu); SPILL(); f_6ca63c(); if (g_unwind) return; RELOAD();
/* 8d541b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d541e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d541f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d5420: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d5427: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d5428: mov esp, ebp */
  esp = ebp;
/* 8d542a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d542b: ret  */
  esp += 4; SPILL(); return;
}

void f_8d542c(void) {
  LOAD_REGS();
L_8d542c: /* 8d542c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d542f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d5434: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8d5437: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d5438: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8d543b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d5440u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d5440(); return;
}

void f_8d5440(void) {
  LOAD_REGS();
L_8d5440: /* 8d5440: push 0xa1cc0c */
  { uint32_t v = 0xa1cc0cu; esp -= 4; W32(esp, v); }
/* 8d5445: push 0xaeca5c */
  { uint32_t v = 0xaeca5cu; esp -= 4; W32(esp, v); }
/* 8d544a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d5450u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d5450: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d5453: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d5455: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d5457: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d545cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8d545c: guest_badaddr(0x8d545c); return;
}

void f_8d5490(void) {
  LOAD_REGS();
L_8d5490: /* 8d5490: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d5491: mov ebp, esp */
  ebp = esp;
/* 8d5493: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d5495: push 0x9d8080 */
  { uint32_t v = 0x9d8080u; esp -= 4; W32(esp, v); }
/* 8d549a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d54a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d54a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d54a8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d54ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d54ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d54ad: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8d54b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d54b1: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8d54b4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d54b7: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8d54b9: xor ebx, ebx */
  ebx = 0;
/* 8d54bb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d54bc: mov ecx, edi */
  ecx = edi;
/* 8d54be: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8d54c1: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8d54c7u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8d54c7: mov ecx, esi */
  ecx = esi;
/* 8d54c9: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8d54cfu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8d54cf: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d54d1: je 0x8d552c */
  if (zf) goto L_8d552c;
L_8d54d3: /* 8d54d3: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8d54d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d54d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d54d8: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8d54deu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8d54de: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d54e1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d54e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d54e5: mov ecx, edi */
  ecx = edi;
/* 8d54e7: call 0x6cbc8a */
  esp -= 4; W32(esp, 0x8d54ecu); SPILL(); f_6cbc8a(); if (g_unwind) return; RELOAD();
/* 8d54ec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8d54f0: /* 8d54f0: cmp ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d54f3: jge 0x8d555f */
  if ((sf == of)) goto L_8d555f;
L_8d54f5: /* 8d54f5: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8d54f7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d54f9: mov ecx, edi */
  ecx = edi;
/* 8d54fb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8d5501u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8d5501: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8d5504: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8d5506: lea esi, [eax + edx*4] */
  esi = (uint32_t)(eax + edx*4);
/* 8d5509: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d550b: je 0x8d5517 */
  if (zf) goto L_8d5517;
L_8d550d: /* 8d550d: mov ecx, esi */
  ecx = esi;
/* 8d550f: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8d5515u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8d5515: jmp 0x8d5519 */
  goto L_8d5519;
L_8d5517: /* 8d5517: xor esi, esi */
  esi = 0;
L_8d5519: /* 8d5519: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8d551c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d551d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d551e: call 0x6c6744 */
  esp -= 4; W32(esp, 0x8d5523u); SPILL(); f_6c6744(); if (g_unwind) return; RELOAD();
/* 8d5523: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8d5526: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d5529: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8d552a: jmp 0x8d54f0 */
  goto L_8d54f0;
L_8d552c: /* 8d552c: lea ebx, [edi + 4] */
  ebx = (uint32_t)(edi + 0x4u);
/* 8d552f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d5530: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d5531: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8d5537u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8d5537: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d553a: xor esi, esi */
  esi = 0;
/* 8d553c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8d5540: /* 8d5540: cmp esi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d5542: jge 0x8d555c */
  if ((sf == of)) goto L_8d555c;
L_8d5544: /* 8d5544: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8d5546: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8d5549: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 8d554c: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 8d554f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d5550: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d5551: call 0x6c6744 */
  esp -= 4; W32(esp, 0x8d5556u); SPILL(); f_6c6744(); if (g_unwind) return; RELOAD();
/* 8d5556: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d5559: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8d555a: jmp 0x8d5540 */
  goto L_8d5540;
L_8d555c: /* 8d555c: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_8d555f: /* 8d555f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d5562: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d5563: mov eax, esi */
  eax = esi;
/* 8d5565: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d5566: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d556d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d556e: mov esp, ebp */
  esp = ebp;
/* 8d5570: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d5571: ret  */
  esp += 4; SPILL(); return;
}

void f_8d5572(void) {
  LOAD_REGS();
L_8d5572: /* 8d5572: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d5575: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d557a: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 8d557d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d557e: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8d5581: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d5586u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d5586(); return;
}

void f_8d5586(void) {
  LOAD_REGS();
L_8d5586: /* 8d5586: push 0xa1cc54 */
  { uint32_t v = 0xa1cc54u; esp -= 4; W32(esp, v); }
/* 8d558b: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8d5590: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d5596u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d5596: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d5599: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d559b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d559d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d55a2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8d55a2: guest_badaddr(0x8d55a2); return;
}

void f_8d5600(void) {
  LOAD_REGS();
L_8d5600: /* 8d5600: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d5601: mov ebp, esp */
  ebp = esp;
/* 8d5603: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d5605: push 0x9d8175 */
  { uint32_t v = 0x9d8175u; esp -= 4; W32(esp, v); }
/* 8d560a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d5610: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d5611: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d5618: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d561b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d561c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d561d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d561e: mov esi, ecx */
  esi = ecx;
/* 8d5620: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d5623: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 8d5626: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x8d562bu); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 8d562b: push 0x6cb2d0 */
  { uint32_t v = 0x6cb2d0u; esp -= 4; W32(esp, v); }
/* 8d5630: push 0x6c230b */
  { uint32_t v = 0x6c230bu; esp -= 4; W32(esp, v); }
/* 8d5635: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 8d5637: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 8d5639: lea eax, [esi + 0x350] */
  eax = (uint32_t)(esi + 0x350u);
/* 8d563f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d5640: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8d5647: mov dword ptr [esi], 0xa066c8 */
  W32((uint32_t)(esi), 0xa066c8u);
/* 8d564d: call 0x99cafe */
  esp -= 4; W32(esp, 0x8d5652u); SPILL(); f_99cafe(); if (g_unwind) return; RELOAD();
/* 8d5652: lea ecx, [esi + 0x1250] */
  ecx = (uint32_t)(esi + 0x1250u);
/* 8d5658: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8d565c: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8d5662u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8d5662: lea ecx, [esi + 0x1268] */
  ecx = (uint32_t)(esi + 0x1268u);
/* 8d5668: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8d566c: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8d5672u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8d5672: lea ecx, [esi + 0x1274] */
  ecx = (uint32_t)(esi + 0x1274u);
/* 8d5678: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8d567c: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8d5682u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8d5682: lea ecx, [esi + 0x1280] */
  ecx = (uint32_t)(esi + 0x1280u);
/* 8d5688: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8d568c: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8d5692u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8d5692: lea ecx, [esi + 0x12a0] */
  ecx = (uint32_t)(esi + 0x12a0u);
/* 8d5698: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8d569c: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8d56a2u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8d56a2: lea ecx, [esi + 0x12ac] */
  ecx = (uint32_t)(esi + 0x12acu);
/* 8d56a8: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8d56ac: call dword ptr [0xcfa434] */
  esp -= 4; W32(esp, 0x8d56b2u); SPILL(); f_4e125d(); if (g_unwind) return; /* Core!??0FCoords@@QAE@XZ */ RELOAD();
/* 8d56b2: lea ecx, [esi + 0x12dc] */
  ecx = (uint32_t)(esi + 0x12dcu);
/* 8d56b8: call dword ptr [0xcfa434] */
  esp -= 4; W32(esp, 0x8d56beu); SPILL(); f_4e125d(); if (g_unwind) return; /* Core!??0FCoords@@QAE@XZ */ RELOAD();
/* 8d56be: lea ecx, [esi + 0x130c] */
  ecx = (uint32_t)(esi + 0x130cu);
/* 8d56c4: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8d56cau); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8d56ca: lea ecx, [esi + 0x131c] */
  ecx = (uint32_t)(esi + 0x131cu);
/* 8d56d0: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 8d56d4: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8d56dau); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8d56da: lea ecx, [esi + 0x1328] */
  ecx = (uint32_t)(esi + 0x1328u);
/* 8d56e0: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 8d56e4: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8d56eau); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8d56ea: lea ecx, [esi + 0x1334] */
  ecx = (uint32_t)(esi + 0x1334u);
/* 8d56f0: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 8d56f4: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8d56fau); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8d56fa: lea ecx, [esi + 0x1340] */
  ecx = (uint32_t)(esi + 0x1340u);
/* 8d5700: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 8d5704: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8d570au); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8d570a: lea ecx, [esi + 0x134c] */
  ecx = (uint32_t)(esi + 0x134cu);
/* 8d5710: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 8d5714: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8d571au); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8d571a: lea ecx, [esi + 0x1358] */
  ecx = (uint32_t)(esi + 0x1358u);
/* 8d5720: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 8d5724: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8d572au); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8d572a: lea ecx, [esi + 0x1364] */
  ecx = (uint32_t)(esi + 0x1364u);
/* 8d5730: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 8d5734: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8d573au); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8d573a: lea ecx, [esi + 0x1378] */
  ecx = (uint32_t)(esi + 0x1378u);
/* 8d5740: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 8d5744: call dword ptr [0xcfa28c] */
  esp -= 4; W32(esp, 0x8d574au); SPILL(); f_4e3dcd(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@XZ */ RELOAD();
/* 8d574a: mov ecx, esi */
  ecx = esi;
/* 8d574c: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 8d5750: call 0x6c4e44 */
  esp -= 4; W32(esp, 0x8d5755u); SPILL(); f_6c4e44(); if (g_unwind) return; RELOAD();
/* 8d5755: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d5758: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d5759: mov eax, esi */
  eax = esi;
/* 8d575b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d575c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d5763: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d5764: mov esp, ebp */
  esp = ebp;
/* 8d5766: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d5767: ret  */
  esp += 4; SPILL(); return;
}

void f_8d5768(void) {
  LOAD_REGS();
L_8d5768: /* 8d5768: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d576b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d5770: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8d5773: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d5774: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8d5777: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d577cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d577c(); return;
}

void f_8d577c(void) {
  LOAD_REGS();
L_8d577c: /* 8d577c: push 0xa1cc6c */
  { uint32_t v = 0xa1cc6cu; esp -= 4; W32(esp, v); }
/* 8d5781: push 0xaeca54 */
  { uint32_t v = 0xaeca54u; esp -= 4; W32(esp, v); }
/* 8d5786: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d578cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d578c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d578f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d5791: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d5793: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d5798u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8d5798: guest_badaddr(0x8d5798); return;
}

void f_8d5810(void) {
  LOAD_REGS();
L_8d5810: /* 8d5810: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d5811: mov ebp, esp */
  ebp = esp;
/* 8d5813: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d5815: push 0x9d81d1 */
  { uint32_t v = 0x9d81d1u; esp -= 4; W32(esp, v); }
/* 8d581a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d5820: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d5821: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d5828: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d582b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d582c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8d582f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d5830: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d5831: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d5834: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d5835: mov esi, ecx */
  esi = ecx;
/* 8d5837: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8d583e: call 0x6c5588 */
  esp -= 4; W32(esp, 0x8d5843u); SPILL(); f_6c5588(); if (g_unwind) return; RELOAD();
/* 8d5843: lea eax, [esi + 0x1274] */
  eax = (uint32_t)(esi + 0x1274u);
/* 8d5849: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d584a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d584b: call 0x6c31ed */
  esp -= 4; W32(esp, 0x8d5850u); SPILL(); f_6c31ed(); if (g_unwind) return; RELOAD();
/* 8d5850: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d5853: lea ecx, [esi + 0x1280] */
  ecx = (uint32_t)(esi + 0x1280u);
/* 8d5859: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d585a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d585b: call 0x6c1505 */
  esp -= 4; W32(esp, 0x8d5860u); SPILL(); f_6c1505(); if (g_unwind) return; RELOAD();
/* 8d5860: mov edi, dword ptr [0xcfa280] */
  edi = R32((uint32_t)(0xcfa280u));
/* 8d5866: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d5869: lea edx, [esi + 0x1294] */
  edx = (uint32_t)(esi + 0x1294u);
/* 8d586f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d5870: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d5871: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8d5873u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d5873: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d5876: lea ecx, [esi + 0x1298] */
  ecx = (uint32_t)(esi + 0x1298u);
/* 8d587c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d587d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d587e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8d5880u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d5880: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d5883: lea edx, [esi + 0x12a0] */
  edx = (uint32_t)(esi + 0x12a0u);
/* 8d5889: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d588a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d588b: call 0x6c462e */
  esp -= 4; W32(esp, 0x8d5890u); SPILL(); f_6c462e(); if (g_unwind) return; RELOAD();
/* 8d5890: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d5893: mov ecx, ebx */
  ecx = ebx;
/* 8d5895: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8d589bu); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8d589b: cmp eax, 0x53 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x53u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d589e: jge 0x8d58c6 */
  if ((sf == of)) goto L_8d58c6;
L_8d58a0: /* 8d58a0: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8d58a3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8d58a9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8d58a9: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8d58ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d58ad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d58ae: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8d58b2: call 0x6cc66c */
  esp -= 4; W32(esp, 0x8d58b7u); SPILL(); f_6cc66c(); if (g_unwind) return; RELOAD();
/* 8d58b7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d58ba: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8d58bd: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8d58c1: call 0x6c33f0 */
  esp -= 4; W32(esp, 0x8d58c6u); SPILL(); f_6c33f0(); if (g_unwind) return; RELOAD();
L_8d58c6: /* 8d58c6: lea ecx, [esi + 0x12ac] */
  ecx = (uint32_t)(esi + 0x12acu);
/* 8d58cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d58cd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d58ce: call 0x6c97d2 */
  esp -= 4; W32(esp, 0x8d58d3u); SPILL(); f_6c97d2(); if (g_unwind) return; RELOAD();
/* 8d58d3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d58d6: lea edx, [esi + 0x12dc] */
  edx = (uint32_t)(esi + 0x12dcu);
/* 8d58dc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d58dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d58de: call 0x6c97d2 */
  esp -= 4; W32(esp, 0x8d58e3u); SPILL(); f_6c97d2(); if (g_unwind) return; RELOAD();
/* 8d58e3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d58e6: mov ecx, ebx */
  ecx = ebx;
/* 8d58e8: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8d58eeu); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8d58ee: cmp eax, 0x4c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d58f1: jge 0x8d5903 */
  if ((sf == of)) goto L_8d5903;
L_8d58f3: /* 8d58f3: lea eax, [esi + 0x1378] */
  eax = (uint32_t)(esi + 0x1378u);
/* 8d58f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d58fa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d58fb: call 0x6c67cb */
  esp -= 4; W32(esp, 0x8d5900u); SPILL(); f_6c67cb(); if (g_unwind) return; RELOAD();
/* 8d5900: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8d5903: /* 8d5903: lea ecx, [esi + 0x128c] */
  ecx = (uint32_t)(esi + 0x128cu);
/* 8d5909: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d590a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d590b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8d590du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d590d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d5910: lea edx, [esi + 0x1290] */
  edx = (uint32_t)(esi + 0x1290u);
/* 8d5916: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d5917: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d5918: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8d591au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d591a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d591d: mov ecx, ebx */
  ecx = ebx;
/* 8d591f: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8d5925u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8d5925: cmp eax, 0x4a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d5928: jle 0x8d59bf */
  if ((zf || sf != of)) goto L_8d59bf;
L_8d592e: /* 8d592e: mov ecx, ebx */
  ecx = ebx;
/* 8d5930: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8d5936u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8d5936: cmp eax, 0x52 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x52u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d5939: jge 0x8d59bf */
  if ((sf == of)) goto L_8d59bf;
L_8d593f: /* 8d593f: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_8d5946: /* 8d5946: cmp dword ptr [ebp - 0x14], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d594a: jge 0x8d59bf */
  if ((sf == of)) goto L_8d59bf;
L_8d594c: /* 8d594c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8d594f: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x8d5955u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 8d5955: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 8d5958: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d5959: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d595a: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8d595e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8d5960u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d5960: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d5963: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 8d5966: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d5967: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d5968: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8d596au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d596a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d596d: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 8d5970: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d5971: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d5972: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8d5974u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d5974: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d5977: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 8d597a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d597b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d597c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8d597eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d597e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d5981: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 8d5984: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d5985: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d5986: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8d5988u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d5988: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d598b: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 8d598e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d598f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d5990: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8d5992u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d5992: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d5995: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 8d5998: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d5999: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d599a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8d599cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d599c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d599f: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8d59a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d59a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d59a4: call dword ptr [0xcfa2dc] */
  esp -= 4; W32(esp, 0x8d59aau); SPILL(); f_4e1451(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFString@@@Z */ RELOAD();
/* 8d59aa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d59ad: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8d59b0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8d59b4: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x8d59bau); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 8d59ba: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 8d59bd: jmp 0x8d5946 */
  goto L_8d5946;
L_8d59bf: /* 8d59bf: mov ecx, ebx */
  ecx = ebx;
/* 8d59c1: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8d59c7u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8d59c7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d59c9: je 0x8d59d7 */
  if (zf) goto L_8d59d7;
L_8d59cb: /* 8d59cb: mov edx, dword ptr [esi + 0x340] */
  edx = R32((uint32_t)(esi + 0x340u));
/* 8d59d1: mov dword ptr [esi + 0x1374], edx */
  W32((uint32_t)(esi + 0x1374u), edx);
L_8d59d7: /* 8d59d7: mov ecx, ebx */
  ecx = ebx;
/* 8d59d9: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8d59dfu); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8d59df: cmp eax, 0x56 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x56u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d59e2: je 0x8d59f1 */
  if (zf) goto L_8d59f1;
L_8d59e4: /* 8d59e4: mov ecx, ebx */
  ecx = ebx;
/* 8d59e6: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8d59ecu); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8d59ec: cmp eax, 0x57 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x57u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d59ef: jne 0x8d5a01 */
  if (!zf) goto L_8d5a01;
L_8d59f1: /* 8d59f1: lea eax, [esi + 0x131c] */
  eax = (uint32_t)(esi + 0x131cu);
/* 8d59f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d59f8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d59f9: call 0x6c90b1 */
  esp -= 4; W32(esp, 0x8d59feu); SPILL(); f_6c90b1(); if (g_unwind) return; RELOAD();
/* 8d59fe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8d5a01: /* 8d5a01: mov ecx, ebx */
  ecx = ebx;
/* 8d5a03: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8d5a09u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8d5a09: cmp eax, 0x73 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x73u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d5a0c: jge 0x8d5a3c */
  if ((sf == of)) goto L_8d5a3c;
L_8d5a0e: /* 8d5a0e: xor ecx, ecx */
  ecx = 0;
L_8d5a10: /* 8d5a10: cmp ecx, dword ptr [esi + 0x1254] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1254u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d5a16: jge 0x8d5a3c */
  if ((sf == of)) goto L_8d5a3c;
L_8d5a18: /* 8d5a18: mov edx, dword ptr [esi + 0x1250] */
  edx = R32((uint32_t)(esi + 0x1250u));
/* 8d5a1e: mov eax, ecx */
  eax = ecx;
/* 8d5a20: imul eax, eax, 0x5c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x5cu);
  eax = (uint32_t)r;
  }
/* 8d5a23: mov dword ptr [edx + eax + 0x50], 0 */
  W32((uint32_t)(edx + eax + 0x50u), 0x0u);
/* 8d5a2b: mov edx, dword ptr [esi + 0x1250] */
  edx = R32((uint32_t)(esi + 0x1250u));
/* 8d5a31: mov dword ptr [edx + eax + 0x54], 0 */
  W32((uint32_t)(edx + eax + 0x54u), 0x0u);
/* 8d5a39: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8d5a3a: jmp 0x8d5a10 */
  goto L_8d5a10;
L_8d5a3c: /* 8d5a3c: mov ecx, ebx */
  ecx = ebx;
/* 8d5a3e: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8d5a44u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8d5a44: cmp eax, 0x77 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x77u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d5a47: jge 0x8d5a6e */
  if ((sf == of)) goto L_8d5a6e;
L_8d5a49: /* 8d5a49: xor eax, eax */
  eax = 0;
/* 8d5a4b: jmp 0x8d5a50 */
  goto L_8d5a50;
L_8d5a50: /* 8d5a50: cmp eax, dword ptr [esi + 0x1254] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1254u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d5a56: jge 0x8d5a6e */
  if ((sf == of)) goto L_8d5a6e;
L_8d5a58: /* 8d5a58: mov edx, dword ptr [esi + 0x1250] */
  edx = R32((uint32_t)(esi + 0x1250u));
/* 8d5a5e: mov ecx, eax */
  ecx = eax;
/* 8d5a60: imul ecx, ecx, 0x5c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x5cu);
  ecx = (uint32_t)r;
  }
/* 8d5a63: mov dword ptr [edx + ecx + 0x58], 0 */
  W32((uint32_t)(edx + ecx + 0x58u), 0x0u);
/* 8d5a6b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d5a6c: jmp 0x8d5a50 */
  goto L_8d5a50;
L_8d5a6e: /* 8d5a6e: mov ecx, ebx */
  ecx = ebx;
/* 8d5a70: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8d5a76u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8d5a76: cmp eax, 0x75 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x75u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d5a79: jl 0x8d5a8b */
  if ((sf != of)) goto L_8d5a8b;
L_8d5a7b: /* 8d5a7b: lea eax, [esi + 0x1358] */
  eax = (uint32_t)(esi + 0x1358u);
/* 8d5a81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d5a82: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d5a83: call 0x6c7734 */
  esp -= 4; W32(esp, 0x8d5a88u); SPILL(); f_6c7734(); if (g_unwind) return; RELOAD();
/* 8d5a88: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8d5a8b: /* 8d5a8b: mov ecx, ebx */
  ecx = ebx;
/* 8d5a8d: call dword ptr [0xcfa404] */
  esp -= 4; W32(esp, 0x8d5a93u); SPILL(); f_4e423c(); if (g_unwind) return; /* Core!?IsSaving@FArchive@@QAEHXZ */ RELOAD();
/* 8d5a93: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d5a95: jne 0x8d5b42 */
  if (!zf) goto L_8d5b42;
L_8d5a9b: /* 8d5a9b: mov ecx, ebx */
  ecx = ebx;
/* 8d5a9d: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8d5aa3u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8d5aa3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d5aa5: jne 0x8d5b42 */
  if (!zf) goto L_8d5b42;
L_8d5aab: /* 8d5aab: lea ecx, [esi + 0x130c] */
  ecx = (uint32_t)(esi + 0x130cu);
/* 8d5ab1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d5ab2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d5ab3: call 0x6c2220 */
  esp -= 4; W32(esp, 0x8d5ab8u); SPILL(); f_6c2220(); if (g_unwind) return; RELOAD();
/* 8d5ab8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d5abb: lea edx, [esi + 0x1268] */
  edx = (uint32_t)(esi + 0x1268u);
/* 8d5ac1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d5ac2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d5ac3: call 0x6c18fc */
  esp -= 4; W32(esp, 0x8d5ac8u); SPILL(); f_6c18fc(); if (g_unwind) return; RELOAD();
/* 8d5ac8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d5acb: lea ecx, [esi + 0x1318] */
  ecx = (uint32_t)(esi + 0x1318u);
/* 8d5ad1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d5ad2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d5ad3: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8d5ad5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d5ad5: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8d5ad7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d5ada: lea ecx, [esi + 0x1374] */
  ecx = (uint32_t)(esi + 0x1374u);
/* 8d5ae0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d5ae1: mov ecx, eax */
  ecx = eax;
/* 8d5ae3: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8d5ae6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d5ae6: lea edx, [esi + 0x260] */
  edx = (uint32_t)(esi + 0x260u);
/* 8d5aec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d5aed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d5aee: call 0x6c7e82 */
  esp -= 4; W32(esp, 0x8d5af3u); SPILL(); f_6c7e82(); if (g_unwind) return; RELOAD();
/* 8d5af3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8d5af5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d5af8: lea ecx, [esi + 0x129c] */
  ecx = (uint32_t)(esi + 0x129cu);
/* 8d5afe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d5aff: mov ecx, eax */
  ecx = eax;
/* 8d5b01: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8d5b04u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d5b04: lea edx, [esi + 0x134c] */
  edx = (uint32_t)(esi + 0x134cu);
/* 8d5b0a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d5b0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d5b0c: call 0x6c5a42 */
  esp -= 4; W32(esp, 0x8d5b11u); SPILL(); f_6c5a42(); if (g_unwind) return; RELOAD();
/* 8d5b11: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d5b14: lea ecx, [esi + 0x1364] */
  ecx = (uint32_t)(esi + 0x1364u);
/* 8d5b1a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d5b1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d5b1c: call 0x6c7734 */
  esp -= 4; W32(esp, 0x8d5b21u); SPILL(); f_6c7734(); if (g_unwind) return; RELOAD();
/* 8d5b21: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d5b24: lea edx, [esi + 0x1340] */
  edx = (uint32_t)(esi + 0x1340u);
/* 8d5b2a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d5b2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d5b2c: call 0x6c1f9b */
  esp -= 4; W32(esp, 0x8d5b31u); SPILL(); f_6c1f9b(); if (g_unwind) return; RELOAD();
/* 8d5b31: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8d5b33: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d5b36: add esi, 0x1370 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1370u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8d5b3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d5b3d: mov ecx, eax */
  ecx = eax;
/* 8d5b3f: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8d5b42u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8d5b42: /* 8d5b42: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d5b45: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d5b46: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d5b47: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d5b4e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d5b4f: mov esp, ebp */
  esp = ebp;
/* 8d5b51: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d5b52: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8d5a4d(void) {
  LOAD_REGS();
L_8d5a4d: /* 8d5a4d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8d5a50: /* 8d5a50: cmp eax, dword ptr [esi + 0x1254] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1254u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d5a56: jge 0x8d5a6e */
  if ((sf == of)) goto L_8d5a6e;
L_8d5a58: /* 8d5a58: mov edx, dword ptr [esi + 0x1250] */
  edx = R32((uint32_t)(esi + 0x1250u));
/* 8d5a5e: mov ecx, eax */
  ecx = eax;
/* 8d5a60: imul ecx, ecx, 0x5c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x5cu);
  ecx = (uint32_t)r;
  }
/* 8d5a63: mov dword ptr [edx + ecx + 0x58], 0 */
  W32((uint32_t)(edx + ecx + 0x58u), 0x0u);
/* 8d5a6b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d5a6c: jmp 0x8d5a50 */
  goto L_8d5a50;
L_8d5a6e: /* 8d5a6e: mov ecx, ebx */
  ecx = ebx;
/* 8d5a70: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8d5a76u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8d5a76: cmp eax, 0x75 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x75u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d5a79: jl 0x8d5a8b */
  if ((sf != of)) goto L_8d5a8b;
L_8d5a7b: /* 8d5a7b: lea eax, [esi + 0x1358] */
  eax = (uint32_t)(esi + 0x1358u);
/* 8d5a81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d5a82: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d5a83: call 0x6c7734 */
  esp -= 4; W32(esp, 0x8d5a88u); SPILL(); f_6c7734(); if (g_unwind) return; RELOAD();
/* 8d5a88: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8d5a8b: /* 8d5a8b: mov ecx, ebx */
  ecx = ebx;
/* 8d5a8d: call dword ptr [0xcfa404] */
  esp -= 4; W32(esp, 0x8d5a93u); SPILL(); f_4e423c(); if (g_unwind) return; /* Core!?IsSaving@FArchive@@QAEHXZ */ RELOAD();
/* 8d5a93: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d5a95: jne 0x8d5b42 */
  if (!zf) goto L_8d5b42;
L_8d5a9b: /* 8d5a9b: mov ecx, ebx */
  ecx = ebx;
/* 8d5a9d: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8d5aa3u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8d5aa3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d5aa5: jne 0x8d5b42 */
  if (!zf) goto L_8d5b42;
L_8d5aab: /* 8d5aab: lea ecx, [esi + 0x130c] */
  ecx = (uint32_t)(esi + 0x130cu);
/* 8d5ab1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d5ab2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d5ab3: call 0x6c2220 */
  esp -= 4; W32(esp, 0x8d5ab8u); SPILL(); f_6c2220(); if (g_unwind) return; RELOAD();
/* 8d5ab8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d5abb: lea edx, [esi + 0x1268] */
  edx = (uint32_t)(esi + 0x1268u);
/* 8d5ac1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d5ac2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d5ac3: call 0x6c18fc */
  esp -= 4; W32(esp, 0x8d5ac8u); SPILL(); f_6c18fc(); if (g_unwind) return; RELOAD();
/* 8d5ac8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d5acb: lea ecx, [esi + 0x1318] */
  ecx = (uint32_t)(esi + 0x1318u);
/* 8d5ad1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d5ad2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d5ad3: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8d5ad5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d5ad5: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8d5ad7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d5ada: lea ecx, [esi + 0x1374] */
  ecx = (uint32_t)(esi + 0x1374u);
/* 8d5ae0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d5ae1: mov ecx, eax */
  ecx = eax;
/* 8d5ae3: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8d5ae6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d5ae6: lea edx, [esi + 0x260] */
  edx = (uint32_t)(esi + 0x260u);
/* 8d5aec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d5aed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d5aee: call 0x6c7e82 */
  esp -= 4; W32(esp, 0x8d5af3u); SPILL(); f_6c7e82(); if (g_unwind) return; RELOAD();
/* 8d5af3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8d5af5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d5af8: lea ecx, [esi + 0x129c] */
  ecx = (uint32_t)(esi + 0x129cu);
/* 8d5afe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d5aff: mov ecx, eax */
  ecx = eax;
/* 8d5b01: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8d5b04u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d5b04: lea edx, [esi + 0x134c] */
  edx = (uint32_t)(esi + 0x134cu);
/* 8d5b0a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d5b0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d5b0c: call 0x6c5a42 */
  esp -= 4; W32(esp, 0x8d5b11u); SPILL(); f_6c5a42(); if (g_unwind) return; RELOAD();
/* 8d5b11: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d5b14: lea ecx, [esi + 0x1364] */
  ecx = (uint32_t)(esi + 0x1364u);
/* 8d5b1a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d5b1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d5b1c: call 0x6c7734 */
  esp -= 4; W32(esp, 0x8d5b21u); SPILL(); f_6c7734(); if (g_unwind) return; RELOAD();
/* 8d5b21: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d5b24: lea edx, [esi + 0x1340] */
  edx = (uint32_t)(esi + 0x1340u);
/* 8d5b2a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d5b2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d5b2c: call 0x6c1f9b */
  esp -= 4; W32(esp, 0x8d5b31u); SPILL(); f_6c1f9b(); if (g_unwind) return; RELOAD();
/* 8d5b31: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8d5b33: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d5b36: add esi, 0x1370 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1370u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8d5b3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d5b3d: mov ecx, eax */
  ecx = eax;
/* 8d5b3f: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8d5b42u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8d5b42: /* 8d5b42: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d5b45: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d5b46: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d5b47: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d5b4e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d5b4f: mov esp, ebp */
  esp = ebp;
/* 8d5b51: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d5b52: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8d5b55(void) {
  LOAD_REGS();
L_8d5b55: /* 8d5b55: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d5b58: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d5b5d: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 8d5b60: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d5b61: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8d5b64: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d5b69u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d5b69(); return;
}

void f_8d5b69(void) {
  LOAD_REGS();
L_8d5b69: /* 8d5b69: push 0xa1ccac */
  { uint32_t v = 0xa1ccacu; esp -= 4; W32(esp, v); }
/* 8d5b6e: push 0xaeca6c */
  { uint32_t v = 0xaeca6cu; esp -= 4; W32(esp, v); }
/* 8d5b73: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d5b79u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d5b79: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d5b7c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d5b7e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d5b80: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d5b85u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8d5b85: guest_badaddr(0x8d5b85); return;
}

void f_8d5c70(void) {
  LOAD_REGS();
L_8d5c70: /* 8d5c70: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d5c72: push 0x9d8208 */
  { uint32_t v = 0x9d8208u; esp -= 4; W32(esp, v); }
/* 8d5c77: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d5c7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d5c7e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d5c85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d5c86: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d5c87: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d5c88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d5c89: mov esi, ecx */
  esi = ecx;
/* 8d5c8b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d5c8c: lea edi, [esi + 4] */
  edi = (uint32_t)(esi + 0x4u);
/* 8d5c8f: mov ecx, edi */
  ecx = edi;
/* 8d5c91: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 8d5c95: mov dword ptr [esi], 0x9f78b8 */
  W32((uint32_t)(esi), 0x9f78b8u);
/* 8d5c9b: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x8d5ca1u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 8d5ca1: lea ebp, [esi + 0x10] */
  ebp = (uint32_t)(esi + 0x10u);
/* 8d5ca4: mov ecx, ebp */
  ecx = ebp;
/* 8d5ca6: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 8d5cae: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x8d5cb4u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 8d5cb4: mov ebx, 1 */
  ebx = 0x1u;
/* 8d5cb9: push 0xaed0c0 */
  { uint32_t v = 0xaed0c0u; esp -= 4; W32(esp, v); }
/* 8d5cbe: mov ecx, edi */
  ecx = edi;
/* 8d5cc0: mov byte ptr [esp + 0x20], bl */
  W8((uint32_t)(esp + 0x20u), (ebx & 0xffu));
/* 8d5cc4: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8d5ccau); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8d5cca: push 0xaed0cc */
  { uint32_t v = 0xaed0ccu; esp -= 4; W32(esp, v); }
/* 8d5ccf: mov ecx, ebp */
  ecx = ebp;
/* 8d5cd1: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8d5cd7u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8d5cd7: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 8d5cdb: xor eax, eax */
  eax = 0;
/* 8d5cdd: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 8d5ce0: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 8d5ce3: mov dword ptr [esi + 0x64], eax */
  W32((uint32_t)(esi + 0x64u), eax);
/* 8d5ce6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d5ce7: mov dword ptr [esi + 0x20], ebx */
  W32((uint32_t)(esi + 0x20u), ebx);
/* 8d5cea: mov dword ptr [esi + 0x24], ebx */
  W32((uint32_t)(esi + 0x24u), ebx);
/* 8d5ced: mov dword ptr [esi + 0x2c], ebx */
  W32((uint32_t)(esi + 0x2cu), ebx);
/* 8d5cf0: mov dword ptr [esi + 0x30], ebx */
  W32((uint32_t)(esi + 0x30u), ebx);
/* 8d5cf3: mov dword ptr [esi + 0x38], ebx */
  W32((uint32_t)(esi + 0x38u), ebx);
/* 8d5cf6: mov dword ptr [esi + 0x1c], 0xffffffff */
  W32((uint32_t)(esi + 0x1cu), 0xffffffffu);
/* 8d5cfd: mov dword ptr [esi + 0x54], 0x100 */
  W32((uint32_t)(esi + 0x54u), 0x100u);
/* 8d5d04: mov dword ptr [esi + 0x58], 0x400 */
  W32((uint32_t)(esi + 0x58u), 0x400u);
/* 8d5d0b: mov dword ptr [esi + 0x5c], 0x64 */
  W32((uint32_t)(esi + 0x5cu), 0x64u);
/* 8d5d12: mov dword ptr [esi + 0x60], 0x20 */
  W32((uint32_t)(esi + 0x60u), 0x20u);
/* 8d5d19: mov eax, esi */
  eax = esi;
/* 8d5d1b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d5d1c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d5d1d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d5d1e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d5d25: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d5d28: ret  */
  esp += 4; SPILL(); return;
}

void f_8d5d60(void) {
  LOAD_REGS();
L_8d5d60: /* 8d5d60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d5d62: push 0x9d822c */
  { uint32_t v = 0x9d822cu; esp -= 4; W32(esp, v); }
/* 8d5d67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d5d6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d5d6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d5d75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d5d76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d5d77: mov esi, ecx */
  esi = ecx;
/* 8d5d79: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 8d5d7d: mov dword ptr [esi], 0x9f78b8 */
  W32((uint32_t)(esi), 0x9f78b8u);
/* 8d5d83: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 8d5d86: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 8d5d8e: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8d5d94u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8d5d94: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8d5d97: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 8d5d9f: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8d5da5u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8d5da5: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8d5da9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d5daa: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d5db1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d5db4: ret  */
  esp += 4; SPILL(); return;
}

void f_8d5de0(void) {
  LOAD_REGS();
L_8d5de0: /* 8d5de0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8d5e00(void) {
  LOAD_REGS();
L_8d5e00: /* 8d5e00: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8d5e20(void) {
  LOAD_REGS();
L_8d5e20: /* 8d5e20: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8d5e40(void) {
  LOAD_REGS();
L_8d5e40: /* 8d5e40: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8d5e60(void) {
  LOAD_REGS();
L_8d5e60: /* 8d5e60: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d5e63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d5e64: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d5e65: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d5e67: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 8d5e6b: call dword ptr [0xcfa260] */
  esp -= 4; W32(esp, 0x8d5e71u); SPILL(); f_4e2ffe(); if (g_unwind) return; /* Core!??0FBox@@QAE@H@Z */ RELOAD();
/* 8d5e71: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 8d5e75: mov ecx, 7 */
  ecx = 0x7u;
/* 8d5e7a: lea esi, [esp + 8] */
  esi = (uint32_t)(esp + 0x8u);
/* 8d5e7e: mov edi, eax */
  edi = eax;
/* 8d5e80: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8d5e82: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d5e83: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d5e84: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d5e87: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8d5ea0(void) {
  LOAD_REGS();
L_8d5ea0: /* 8d5ea0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d5ea2: push 0x9d8248 */
  { uint32_t v = 0x9d8248u; esp -= 4; W32(esp, v); }
/* 8d5ea7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d5ead: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d5eae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d5eb5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d5eb6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d5eb7: mov esi, ecx */
  esi = ecx;
/* 8d5eb9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 8d5ebd: call 0x6c2351 */
  esp -= 4; W32(esp, 0x8d5ec2u); SPILL(); f_6c2351(); if (g_unwind) return; RELOAD();
/* 8d5ec2: push 0xaed0e8 */
  { uint32_t v = 0xaed0e8u; esp -= 4; W32(esp, v); }
/* 8d5ec7: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8d5eca: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 8d5ed2: mov dword ptr [esi], 0x9f78d4 */
  W32((uint32_t)(esi), 0x9f78d4u);
/* 8d5ed8: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8d5edeu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8d5ede: push 0xaed108 */
  { uint32_t v = 0xaed108u; esp -= 4; W32(esp, v); }
/* 8d5ee3: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 8d5ee6: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8d5eecu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8d5eec: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8d5ef0: mov dword ptr [esi + 0x1c], 0 */
  W32((uint32_t)(esi + 0x1cu), 0x0u);
/* 8d5ef7: mov dword ptr [esi + 0x28], 1 */
  W32((uint32_t)(esi + 0x28u), 0x1u);
/* 8d5efe: mov dword ptr [esi + 0x20], 0 */
  W32((uint32_t)(esi + 0x20u), 0x0u);
/* 8d5f05: mov eax, esi */
  eax = esi;
/* 8d5f07: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d5f08: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d5f0f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d5f12: ret  */
  esp += 4; SPILL(); return;
}

void f_8d5f40(void) {
  LOAD_REGS();
L_8d5f40: /* 8d5f40: mov dword ptr [ecx], 0x9f78d4 */
  W32((uint32_t)(ecx), 0x9f78d4u);
/* 8d5f46: jmp 0x6cad53 */
  SPILL(); f_6cad53(); return;
}

void f_8d5f60(void) {
  LOAD_REGS();
L_8d5f60: /* 8d5f60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d5f62: push 0x9d8268 */
  { uint32_t v = 0x9d8268u; esp -= 4; W32(esp, v); }
/* 8d5f67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d5f6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d5f6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d5f75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d5f76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d5f77: mov esi, ecx */
  esi = ecx;
/* 8d5f79: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 8d5f7d: call 0x6c2351 */
  esp -= 4; W32(esp, 0x8d5f82u); SPILL(); f_6c2351(); if (g_unwind) return; RELOAD();
/* 8d5f82: push 0xaed120 */
  { uint32_t v = 0xaed120u; esp -= 4; W32(esp, v); }
/* 8d5f87: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8d5f8a: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 8d5f92: mov dword ptr [esi], 0x9f78f0 */
  W32((uint32_t)(esi), 0x9f78f0u);
/* 8d5f98: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8d5f9eu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8d5f9e: push 0xaed134 */
  { uint32_t v = 0xaed134u; esp -= 4; W32(esp, v); }
/* 8d5fa3: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 8d5fa6: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8d5facu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8d5fac: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8d5fb0: mov dword ptr [esi + 0x1c], 1 */
  W32((uint32_t)(esi + 0x1cu), 0x1u);
/* 8d5fb7: mov eax, esi */
  eax = esi;
/* 8d5fb9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d5fba: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d5fc1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d5fc4: ret  */
  esp += 4; SPILL(); return;
}

void f_8d5ff0(void) {
  LOAD_REGS();
L_8d5ff0: /* 8d5ff0: mov dword ptr [ecx], 0x9f78f0 */
  W32((uint32_t)(ecx), 0x9f78f0u);
/* 8d5ff6: jmp 0x6cad53 */
  SPILL(); f_6cad53(); return;
}

void f_8d6010(void) {
  LOAD_REGS();
L_8d6010: /* 8d6010: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d6012: push 0x9d8288 */
  { uint32_t v = 0x9d8288u; esp -= 4; W32(esp, v); }
/* 8d6017: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d601d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d601e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d6025: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d6026: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d6027: mov esi, ecx */
  esi = ecx;
/* 8d6029: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 8d602d: call 0x6c2351 */
  esp -= 4; W32(esp, 0x8d6032u); SPILL(); f_6c2351(); if (g_unwind) return; RELOAD();
/* 8d6032: push 0xaed148 */
  { uint32_t v = 0xaed148u; esp -= 4; W32(esp, v); }
/* 8d6037: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8d603a: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 8d6042: mov dword ptr [esi], 0x9f790c */
  W32((uint32_t)(esi), 0x9f790cu);
/* 8d6048: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8d604eu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8d604e: push 0xaed154 */
  { uint32_t v = 0xaed154u; esp -= 4; W32(esp, v); }
/* 8d6053: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 8d6056: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8d605cu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8d605c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8d6060: mov dword ptr [esi + 0x1c], 0xa */
  W32((uint32_t)(esi + 0x1cu), 0xau);
/* 8d6067: mov dword ptr [esi + 0x2c], 0 */
  W32((uint32_t)(esi + 0x2cu), 0x0u);
/* 8d606e: mov eax, esi */
  eax = esi;
/* 8d6070: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d6071: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d6078: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d607b: ret  */
  esp += 4; SPILL(); return;
}

void f_8d60a0(void) {
  LOAD_REGS();
L_8d60a0: /* 8d60a0: mov dword ptr [ecx], 0x9f790c */
  W32((uint32_t)(ecx), 0x9f790cu);
/* 8d60a6: jmp 0x6cad53 */
  SPILL(); f_6cad53(); return;
}

void f_8d60c0(void) {
  LOAD_REGS();
L_8d60c0: /* 8d60c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d60c2: push 0x9d82a8 */
  { uint32_t v = 0x9d82a8u; esp -= 4; W32(esp, v); }
/* 8d60c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d60cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d60ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d60d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d60d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d60d7: mov esi, ecx */
  esi = ecx;
/* 8d60d9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 8d60dd: call 0x6c2351 */
  esp -= 4; W32(esp, 0x8d60e2u); SPILL(); f_6c2351(); if (g_unwind) return; RELOAD();
/* 8d60e2: push 0xaed168 */
  { uint32_t v = 0xaed168u; esp -= 4; W32(esp, v); }
/* 8d60e7: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8d60ea: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 8d60f2: mov dword ptr [esi], 0x9f7928 */
  W32((uint32_t)(esi), 0x9f7928u);
/* 8d60f8: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8d60feu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8d60fe: push 0xaed17c */
  { uint32_t v = 0xaed17cu; esp -= 4; W32(esp, v); }
/* 8d6103: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 8d6106: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8d610cu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8d610c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8d6110: mov dword ptr [esi + 0x1c], 2 */
  W32((uint32_t)(esi + 0x1cu), 0x2u);
/* 8d6117: mov dword ptr [esi + 0x2c], 0 */
  W32((uint32_t)(esi + 0x2cu), 0x0u);
/* 8d611e: mov eax, esi */
  eax = esi;
/* 8d6120: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d6121: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d6128: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d612b: ret  */
  esp += 4; SPILL(); return;
}

void f_8d6150(void) {
  LOAD_REGS();
L_8d6150: /* 8d6150: mov dword ptr [ecx], 0x9f7928 */
  W32((uint32_t)(ecx), 0x9f7928u);
/* 8d6156: jmp 0x6cad53 */
  SPILL(); f_6cad53(); return;
}

void f_8d6170(void) {
  LOAD_REGS();
L_8d6170: /* 8d6170: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d6172: push 0x9d82c8 */
  { uint32_t v = 0x9d82c8u; esp -= 4; W32(esp, v); }
/* 8d6177: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d617d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d617e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d6185: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d6186: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d6187: mov esi, ecx */
  esi = ecx;
/* 8d6189: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 8d618d: call 0x6c2351 */
  esp -= 4; W32(esp, 0x8d6192u); SPILL(); f_6c2351(); if (g_unwind) return; RELOAD();
/* 8d6192: push 0xaed194 */
  { uint32_t v = 0xaed194u; esp -= 4; W32(esp, v); }
/* 8d6197: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8d619a: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 8d61a2: mov dword ptr [esi], 0x9f7944 */
  W32((uint32_t)(esi), 0x9f7944u);
/* 8d61a8: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8d61aeu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8d61ae: push 0xaed1a0 */
  { uint32_t v = 0xaed1a0u; esp -= 4; W32(esp, v); }
/* 8d61b3: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 8d61b6: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8d61bcu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8d61bc: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8d61c0: mov dword ptr [esi + 0x1c], 3 */
  W32((uint32_t)(esi + 0x1cu), 0x3u);
/* 8d61c7: mov dword ptr [esi + 0x2c], 0 */
  W32((uint32_t)(esi + 0x2cu), 0x0u);
/* 8d61ce: mov eax, esi */
  eax = esi;
/* 8d61d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d61d1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d61d8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d61db: ret  */
  esp += 4; SPILL(); return;
}

void f_8d6200(void) {
  LOAD_REGS();
L_8d6200: /* 8d6200: mov dword ptr [ecx], 0x9f7944 */
  W32((uint32_t)(ecx), 0x9f7944u);
/* 8d6206: jmp 0x6cad53 */
  SPILL(); f_6cad53(); return;
}

void f_8d6220(void) {
  LOAD_REGS();
L_8d6220: /* 8d6220: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d6222: push 0x9d82e8 */
  { uint32_t v = 0x9d82e8u; esp -= 4; W32(esp, v); }
/* 8d6227: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d622d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d622e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d6235: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d6236: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d6237: mov esi, ecx */
  esi = ecx;
/* 8d6239: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 8d623d: call 0x6c2351 */
  esp -= 4; W32(esp, 0x8d6242u); SPILL(); f_6c2351(); if (g_unwind) return; RELOAD();
/* 8d6242: push 0xaed1b4 */
  { uint32_t v = 0xaed1b4u; esp -= 4; W32(esp, v); }
/* 8d6247: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8d624a: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 8d6252: mov dword ptr [esi], 0x9f7960 */
  W32((uint32_t)(esi), 0x9f7960u);
/* 8d6258: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8d625eu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8d625e: push 0xaed1c4 */
  { uint32_t v = 0xaed1c4u; esp -= 4; W32(esp, v); }
/* 8d6263: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 8d6266: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8d626cu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8d626c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8d6270: mov dword ptr [esi + 0x1c], 4 */
  W32((uint32_t)(esi + 0x1cu), 0x4u);
/* 8d6277: mov dword ptr [esi + 0x2c], 0 */
  W32((uint32_t)(esi + 0x2cu), 0x0u);
/* 8d627e: mov eax, esi */
  eax = esi;
/* 8d6280: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d6281: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d6288: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d628b: ret  */
  esp += 4; SPILL(); return;
}

void f_8d62b0(void) {
  LOAD_REGS();
L_8d62b0: /* 8d62b0: mov dword ptr [ecx], 0x9f7960 */
  W32((uint32_t)(ecx), 0x9f7960u);
/* 8d62b6: jmp 0x6cad53 */
  SPILL(); f_6cad53(); return;
}

void f_8d62d0(void) {
  LOAD_REGS();
L_8d62d0: /* 8d62d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d62d2: push 0x9d8308 */
  { uint32_t v = 0x9d8308u; esp -= 4; W32(esp, v); }
/* 8d62d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d62dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d62de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d62e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d62e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d62e7: mov esi, ecx */
  esi = ecx;
/* 8d62e9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 8d62ed: call 0x6c2351 */
  esp -= 4; W32(esp, 0x8d62f2u); SPILL(); f_6c2351(); if (g_unwind) return; RELOAD();
/* 8d62f2: push 0xaed1dc */
  { uint32_t v = 0xaed1dcu; esp -= 4; W32(esp, v); }
/* 8d62f7: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8d62fa: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 8d6302: mov dword ptr [esi], 0x9f797c */
  W32((uint32_t)(esi), 0x9f797cu);
/* 8d6308: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8d630eu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8d630e: push 0xaed1ec */
  { uint32_t v = 0xaed1ecu; esp -= 4; W32(esp, v); }
/* 8d6313: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 8d6316: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8d631cu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8d631c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8d6320: mov dword ptr [esi + 0x1c], 5 */
  W32((uint32_t)(esi + 0x1cu), 0x5u);
/* 8d6327: mov dword ptr [esi + 0x2c], 0 */
  W32((uint32_t)(esi + 0x2cu), 0x0u);
/* 8d632e: mov dword ptr [esi + 0x30], 0 */
  W32((uint32_t)(esi + 0x30u), 0x0u);
/* 8d6335: mov eax, esi */
  eax = esi;
/* 8d6337: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d6338: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d633f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d6342: ret  */
  esp += 4; SPILL(); return;
}

void f_8d6370(void) {
  LOAD_REGS();
L_8d6370: /* 8d6370: mov dword ptr [ecx], 0x9f797c */
  W32((uint32_t)(ecx), 0x9f797cu);
/* 8d6376: jmp 0x6cad53 */
  SPILL(); f_6cad53(); return;
}

void f_8d6390(void) {
  LOAD_REGS();
L_8d6390: /* 8d6390: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d6392: push 0x9d8328 */
  { uint32_t v = 0x9d8328u; esp -= 4; W32(esp, v); }
/* 8d6397: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d639d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d639e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d63a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d63a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d63a7: mov esi, ecx */
  esi = ecx;
/* 8d63a9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 8d63ad: call 0x6c2351 */
  esp -= 4; W32(esp, 0x8d63b2u); SPILL(); f_6c2351(); if (g_unwind) return; RELOAD();
/* 8d63b2: push 0xaed204 */
  { uint32_t v = 0xaed204u; esp -= 4; W32(esp, v); }
/* 8d63b7: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8d63ba: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 8d63c2: mov dword ptr [esi], 0x9f7998 */
  W32((uint32_t)(esi), 0x9f7998u);
/* 8d63c8: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8d63ceu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8d63ce: push 0xaed21c */
  { uint32_t v = 0xaed21cu; esp -= 4; W32(esp, v); }
/* 8d63d3: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 8d63d6: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8d63dcu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8d63dc: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8d63e0: mov dword ptr [esi + 0x1c], 6 */
  W32((uint32_t)(esi + 0x1cu), 0x6u);
/* 8d63e7: mov dword ptr [esi + 0x2c], 0 */
  W32((uint32_t)(esi + 0x2cu), 0x0u);
/* 8d63ee: mov dword ptr [esi + 0x30], 0 */
  W32((uint32_t)(esi + 0x30u), 0x0u);
/* 8d63f5: mov eax, esi */
  eax = esi;
/* 8d63f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d63f8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d63ff: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d6402: ret  */
  esp += 4; SPILL(); return;
}

void f_8d6430(void) {
  LOAD_REGS();
L_8d6430: /* 8d6430: mov dword ptr [ecx], 0x9f7998 */
  W32((uint32_t)(ecx), 0x9f7998u);
/* 8d6436: jmp 0x6cad53 */
  SPILL(); f_6cad53(); return;
}

void f_8d6450(void) {
  LOAD_REGS();
L_8d6450: /* 8d6450: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d6452: push 0x9d8348 */
  { uint32_t v = 0x9d8348u; esp -= 4; W32(esp, v); }
/* 8d6457: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d645d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d645e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d6465: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d6466: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d6467: mov esi, ecx */
  esi = ecx;
/* 8d6469: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 8d646d: call 0x6c2351 */
  esp -= 4; W32(esp, 0x8d6472u); SPILL(); f_6c2351(); if (g_unwind) return; RELOAD();
/* 8d6472: push 0xaed238 */
  { uint32_t v = 0xaed238u; esp -= 4; W32(esp, v); }
/* 8d6477: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8d647a: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 8d6482: mov dword ptr [esi], 0x9f79b4 */
  W32((uint32_t)(esi), 0x9f79b4u);
/* 8d6488: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8d648eu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8d648e: push 0xaed24c */
  { uint32_t v = 0xaed24cu; esp -= 4; W32(esp, v); }
/* 8d6493: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 8d6496: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8d649cu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8d649c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8d64a0: mov dword ptr [esi + 0x1c], 7 */
  W32((uint32_t)(esi + 0x1cu), 0x7u);
/* 8d64a7: mov dword ptr [esi + 0x2c], 0 */
  W32((uint32_t)(esi + 0x2cu), 0x0u);
/* 8d64ae: mov dword ptr [esi + 0x30], 0 */
  W32((uint32_t)(esi + 0x30u), 0x0u);
/* 8d64b5: mov eax, esi */
  eax = esi;
/* 8d64b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d64b8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d64bf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d64c2: ret  */
  esp += 4; SPILL(); return;
}

void f_8d64f0(void) {
  LOAD_REGS();
L_8d64f0: /* 8d64f0: mov dword ptr [ecx], 0x9f79b4 */
  W32((uint32_t)(ecx), 0x9f79b4u);
/* 8d64f6: jmp 0x6cad53 */
  SPILL(); f_6cad53(); return;
}

void f_8d6510(void) {
  LOAD_REGS();
L_8d6510: /* 8d6510: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d6512: push 0x9d8368 */
  { uint32_t v = 0x9d8368u; esp -= 4; W32(esp, v); }
/* 8d6517: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d651d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d651e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d6525: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d6528: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d6529: mov esi, ecx */
  esi = ecx;
/* 8d652b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d652c: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 8d6530: call 0x6c2351 */
  esp -= 4; W32(esp, 0x8d6535u); SPILL(); f_6c2351(); if (g_unwind) return; RELOAD();
/* 8d6535: xor edi, edi */
  edi = 0;
/* 8d6537: push 0xaed268 */
  { uint32_t v = 0xaed268u; esp -= 4; W32(esp, v); }
/* 8d653c: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8d653f: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 8d6543: mov dword ptr [esi], 0x9f79d0 */
  W32((uint32_t)(esi), 0x9f79d0u);
/* 8d6549: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8d654fu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8d654f: push 0xaed278 */
  { uint32_t v = 0xaed278u; esp -= 4; W32(esp, v); }
/* 8d6554: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 8d6557: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8d655du); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8d655d: mov dword ptr [esi + 0x2c], edi */
  W32((uint32_t)(esi + 0x2cu), edi);
/* 8d6560: mov dword ptr [esi + 0x30], edi */
  W32((uint32_t)(esi + 0x30u), edi);
/* 8d6563: mov dword ptr [esi + 0x28], edi */
  W32((uint32_t)(esi + 0x28u), edi);
/* 8d6566: mov dword ptr [esi + 0x20], edi */
  W32((uint32_t)(esi + 0x20u), edi);
/* 8d6569: mov dword ptr [esi + 0x24], edi */
  W32((uint32_t)(esi + 0x24u), edi);
/* 8d656c: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 8d6570: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 8d6574: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8d6578: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 8d657c: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 8d6580: lea eax, [esi + 0x48] */
  eax = (uint32_t)(esi + 0x48u);
/* 8d6583: mov edi, eax */
  edi = eax;
/* 8d6585: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 8d6589: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 8d658b: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 8d658e: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 8d6591: lea edi, [esi + 0x3c] */
  edi = (uint32_t)(esi + 0x3cu);
/* 8d6594: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 8d6596: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 8d6599: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 8d659d: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 8d65a0: mov dword ptr [esi + 0x1c], 8 */
  W32((uint32_t)(esi + 0x1cu), 0x8u);
/* 8d65a7: mov dword ptr [esi + 0x34], 1 */
  W32((uint32_t)(esi + 0x34u), 0x1u);
/* 8d65ae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d65af: mov eax, esi */
  eax = esi;
/* 8d65b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d65b2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d65b9: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d65bc: ret  */
  esp += 4; SPILL(); return;
}

void f_8d65f0(void) {
  LOAD_REGS();
L_8d65f0: /* 8d65f0: mov dword ptr [ecx], 0x9f79d0 */
  W32((uint32_t)(ecx), 0x9f79d0u);
/* 8d65f6: jmp 0x6cad53 */
  SPILL(); f_6cad53(); return;
}

void f_8d6610(void) {
  LOAD_REGS();
L_8d6610: /* 8d6610: mov eax, dword ptr [0xb1901c] */
  eax = R32((uint32_t)(0xb1901cu));
/* 8d6615: add ecx, 0x48 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d6618: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 8d661a: mov edx, dword ptr [0xb19020] */
  edx = R32((uint32_t)(0xb19020u));
/* 8d6620: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8d6623: mov eax, dword ptr [0xb19024] */
  eax = R32((uint32_t)(0xb19024u));
/* 8d6628: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8d662b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8d6640(void) {
  LOAD_REGS();
L_8d6640: /* 8d6640: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d6641: mov ebp, esp */
  ebp = esp;
/* 8d6643: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d6645: push 0x9d8380 */
  { uint32_t v = 0x9d8380u; esp -= 4; W32(esp, v); }
/* 8d664a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d6650: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d6651: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d6658: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d665b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d665c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d665d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d665e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d6661: mov esi, ecx */
  esi = ecx;
/* 8d6663: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d6665: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 8d6668: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8d666f: call dword ptr [0xcfa260] */
  esp -= 4; W32(esp, 0x8d6675u); SPILL(); f_4e2ffe(); if (g_unwind) return; /* Core!??0FBox@@QAE@H@Z */ RELOAD();
/* 8d6675: lea eax, [esi + 0x3c] */
  eax = (uint32_t)(esi + 0x3cu);
/* 8d6678: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d6679: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 8d667c: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x8d6682u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 8d6682: add esi, 0x48 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8d6685: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d6686: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 8d6689: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x8d668fu); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 8d668f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8d6692: mov ecx, 7 */
  ecx = 0x7u;
/* 8d6697: lea esi, [ebp - 0x34] */
  esi = (uint32_t)(ebp + 0xffffffccu);
/* 8d669a: mov edi, eax */
  edi = eax;
/* 8d669c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8d669e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d66a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d66a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d66a3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d66aa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d66ab: mov esp, ebp */
  esp = ebp;
/* 8d66ad: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d66ae: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8d66b1(void) {
  LOAD_REGS();
L_8d66b1: /* 8d66b1: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d66b4: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d66b9: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8d66bc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d66bd: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8d66c0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d66c5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d66c5(); return;
}

void f_8d66c5(void) {
  LOAD_REGS();
L_8d66c5: /* 8d66c5: push 0xa1cce8 */
  { uint32_t v = 0xa1cce8u; esp -= 4; W32(esp, v); }
/* 8d66ca: push 0xaed2a0 */
  { uint32_t v = 0xaed2a0u; esp -= 4; W32(esp, v); }
/* 8d66cf: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d66d5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d66d5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d66d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d66da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d66dc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d66e1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8d66e1: guest_badaddr(0x8d66e1); return;
}

void f_8d6720(void) {
  LOAD_REGS();
L_8d6720: /* 8d6720: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d6722: push 0x9d8398 */
  { uint32_t v = 0x9d8398u; esp -= 4; W32(esp, v); }
/* 8d6727: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d672d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d672e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d6735: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d6736: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d6737: mov esi, ecx */
  esi = ecx;
/* 8d6739: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d673a: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 8d673e: call 0x6c2351 */
  esp -= 4; W32(esp, 0x8d6743u); SPILL(); f_6c2351(); if (g_unwind) return; RELOAD();
/* 8d6743: xor edi, edi */
  edi = 0;
/* 8d6745: push 0xaed2a8 */
  { uint32_t v = 0xaed2a8u; esp -= 4; W32(esp, v); }
/* 8d674a: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8d674d: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 8d6751: mov dword ptr [esi], 0x9f79ec */
  W32((uint32_t)(esi), 0x9f79ecu);
/* 8d6757: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8d675du); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8d675d: push 0xaed2c0 */
  { uint32_t v = 0xaed2c0u; esp -= 4; W32(esp, v); }
/* 8d6762: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 8d6765: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8d676bu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8d676b: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 8d676f: mov eax, 1 */
  eax = 0x1u;
/* 8d6774: mov dword ptr [esi + 0x2c], edi */
  W32((uint32_t)(esi + 0x2cu), edi);
/* 8d6777: mov dword ptr [esi + 0x28], edi */
  W32((uint32_t)(esi + 0x28u), edi);
/* 8d677a: mov dword ptr [esi + 0x20], edi */
  W32((uint32_t)(esi + 0x20u), edi);
/* 8d677d: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
/* 8d6780: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 8d6783: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 8d6786: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 8d6789: mov dword ptr [esi + 0x1c], 9 */
  W32((uint32_t)(esi + 0x1cu), 0x9u);
/* 8d6790: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d6791: mov eax, esi */
  eax = esi;
/* 8d6793: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d6794: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d679b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d679e: ret  */
  esp += 4; SPILL(); return;
}

void f_8d67c0(void) {
  LOAD_REGS();
L_8d67c0: /* 8d67c0: mov dword ptr [ecx], 0x9f79ec */
  W32((uint32_t)(ecx), 0x9f79ecu);
/* 8d67c6: jmp 0x6cad53 */
  SPILL(); f_6cad53(); return;
}

void f_8d67e0(void) {
  LOAD_REGS();
L_8d67e0: /* 8d67e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d67e2: push 0x9d83b8 */
  { uint32_t v = 0x9d83b8u; esp -= 4; W32(esp, v); }
/* 8d67e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d67ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d67ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d67f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d67f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d67f7: mov esi, ecx */
  esi = ecx;
/* 8d67f9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d67fa: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 8d67fe: call 0x6c2351 */
  esp -= 4; W32(esp, 0x8d6803u); SPILL(); f_6c2351(); if (g_unwind) return; RELOAD();
/* 8d6803: xor edi, edi */
  edi = 0;
/* 8d6805: push 0xaed2e8 */
  { uint32_t v = 0xaed2e8u; esp -= 4; W32(esp, v); }
/* 8d680a: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8d680d: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 8d6811: mov dword ptr [esi], 0x9f7a08 */
  W32((uint32_t)(esi), 0x9f7a08u);
/* 8d6817: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8d681du); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8d681d: push 0xaed2fc */
  { uint32_t v = 0xaed2fcu; esp -= 4; W32(esp, v); }
/* 8d6822: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 8d6825: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8d682bu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8d682b: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 8d682f: mov dword ptr [esi + 0x2c], edi */
  W32((uint32_t)(esi + 0x2cu), edi);
/* 8d6832: mov dword ptr [esi + 0x30], edi */
  W32((uint32_t)(esi + 0x30u), edi);
/* 8d6835: mov dword ptr [esi + 0x28], edi */
  W32((uint32_t)(esi + 0x28u), edi);
/* 8d6838: mov dword ptr [esi + 0x20], edi */
  W32((uint32_t)(esi + 0x20u), edi);
/* 8d683b: mov dword ptr [esi + 0x24], edi */
  W32((uint32_t)(esi + 0x24u), edi);
/* 8d683e: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
/* 8d6841: mov dword ptr [esi + 0x1c], 0xb */
  W32((uint32_t)(esi + 0x1cu), 0xbu);
/* 8d6848: mov dword ptr [esi + 0x34], 1 */
  W32((uint32_t)(esi + 0x34u), 0x1u);
/* 8d684f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d6850: mov eax, esi */
  eax = esi;
/* 8d6852: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d6853: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d685a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d685d: ret  */
  esp += 4; SPILL(); return;
}

void f_8d6880(void) {
  LOAD_REGS();
L_8d6880: /* 8d6880: mov dword ptr [ecx], 0x9f7a08 */
  W32((uint32_t)(ecx), 0x9f7a08u);
/* 8d6886: jmp 0x6cad53 */
  SPILL(); f_6cad53(); return;
}

void f_8d68a0(void) {
  LOAD_REGS();
L_8d68a0: /* 8d68a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8d68a4: cmp dword ptr [ecx + 0x78], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x78u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d68a7: je 0x8d68ba */
  if (zf) goto L_8d68ba;
L_8d68a9: /* 8d68a9: mov dword ptr [ecx + 0x78], eax */
  W32((uint32_t)(ecx + 0x78u), eax);
/* 8d68ac: xor eax, eax */
  eax = 0;
/* 8d68ae: mov dword ptr [ecx + 0x70], eax */
  W32((uint32_t)(ecx + 0x70u), eax);
/* 8d68b1: mov dword ptr [ecx + 0x74], eax */
  W32((uint32_t)(ecx + 0x74u), eax);
/* 8d68b4: mov dword ptr [ecx + 0x54], eax */
  W32((uint32_t)(ecx + 0x54u), eax);
/* 8d68b7: mov dword ptr [ecx + 0x5c], eax */
  W32((uint32_t)(ecx + 0x5cu), eax);
L_8d68ba: /* 8d68ba: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8d68d0(void) {
  LOAD_REGS();
L_8d68d0: /* 8d68d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d68d1: mov esi, ecx */
  esi = ecx;
/* 8d68d3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8d68d9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8d68d9: mov eax, esi */
  eax = esi;
/* 8d68db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d68dc: ret  */
  esp += 4; SPILL(); return;
}

void f_8d68f0(void) {
  LOAD_REGS();
L_8d68f0: /* 8d68f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d68f1: mov esi, ecx */
  esi = ecx;
/* 8d68f3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8d68f9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8d68f9: mov eax, esi */
  eax = esi;
/* 8d68fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d68fc: ret  */
  esp += 4; SPILL(); return;
}

void f_8d6910(void) {
  LOAD_REGS();
L_8d6910: /* 8d6910: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8d6914: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8d6916: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d6917: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8d691du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8d691d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8d6930(void) {
  LOAD_REGS();
L_8d6930: /* 8d6930: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d6931: mov ebp, esp */
  ebp = esp;
/* 8d6933: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d6935: push 0x9d83d0 */
  { uint32_t v = 0x9d83d0u; esp -= 4; W32(esp, v); }
/* 8d693a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d6940: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d6941: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d6948: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d694b: mov ecx, dword ptr [0xb19070] */
  ecx = R32((uint32_t)(0xb19070u));
/* 8d6951: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d6953: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8d6956: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d6957: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d6958: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d6959: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d695c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8d6963: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8d6965: jne 0x8d697c */
  if (!zf) goto L_8d697c;
L_8d6967: /* 8d6967: xor eax, eax */
  eax = 0;
/* 8d6969: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d696c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d6973: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d6974: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d6975: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d6976: mov esp, ebp */
  esp = ebp;
/* 8d6978: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d6979: ret 8 */
  esp += 12; SPILL(); return;
L_8d697c: /* 8d697c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8d697f: mov edx, dword ptr [0xb1906c] */
  edx = R32((uint32_t)(0xb1906cu));
/* 8d6985: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8d6987: mov eax, edx */
  eax = edx;
/* 8d6989: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d698b: je 0x8d6967 */
  if (zf) goto L_8d6967;
L_8d698d: /* 8d698d: test byte ptr [eax + 0x7c], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x7cu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d6991: jne 0x8d69a0 */
  if (!zf) goto L_8d69a0;
L_8d6993: /* 8d6993: mov eax, dword ptr [eax + 0xac] */
  eax = R32((uint32_t)(eax + 0xacu));
/* 8d6999: lea ecx, [eax + 0x10] */
  ecx = (uint32_t)(eax + 0x10u);
/* 8d699c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d699e: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8d69a0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8d69a0: /* 8d69a0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d69a3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d69a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d69a5: mov eax, 1 */
  eax = 0x1u;
/* 8d69aa: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d69b1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d69b2: mov esp, ebp */
  esp = ebp;
/* 8d69b4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d69b5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8d69b8(void) {
  LOAD_REGS();
L_8d69b8: /* 8d69b8: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d69bb: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d69c0: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8d69c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d69c4: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8d69c7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d69ccu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d69cc(); return;
}

void f_8d69cc(void) {
  LOAD_REGS();
L_8d69cc: /* 8d69cc: push 0xa1cd30 */
  { uint32_t v = 0xa1cd30u; esp -= 4; W32(esp, v); }
/* 8d69d1: push 0xaed0d8 */
  { uint32_t v = 0xaed0d8u; esp -= 4; W32(esp, v); }
/* 8d69d6: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d69dcu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d69dc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d69df: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d69e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d69e3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d69e8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8d69e8: guest_badaddr(0x8d69e8); return;
}

void f_8d6a20(void) {
  LOAD_REGS();
L_8d6a20: /* 8d6a20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d6a21: mov ebp, esp */
  ebp = esp;
/* 8d6a23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d6a25: push 0x9d83e0 */
  { uint32_t v = 0x9d83e0u; esp -= 4; W32(esp, v); }
/* 8d6a2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d6a30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d6a31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d6a38: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d6a3b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d6a3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d6a3d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8d6a40: test byte ptr [esi + 0x7c], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x7cu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d6a44: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d6a45: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d6a48: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8d6a4f: jne 0x8d6a5e */
  if (!zf) goto L_8d6a5e;
L_8d6a51: /* 8d6a51: mov eax, dword ptr [esi + 0xac] */
  eax = R32((uint32_t)(esi + 0xacu));
/* 8d6a57: lea ecx, [eax + 0x10] */
  ecx = (uint32_t)(eax + 0x10u);
/* 8d6a5a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d6a5c: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8d6a5eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8d6a5e: /* 8d6a5e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8d6a61: call 0x6c6339 */
  esp -= 4; W32(esp, 0x8d6a66u); SPILL(); f_6c6339(); if (g_unwind) return; RELOAD();
/* 8d6a66: mov eax, dword ptr [esi + 0x7c] */
  eax = R32((uint32_t)(esi + 0x7cu));
/* 8d6a69: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d6a6c: or eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 8d6a71: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d6a72: mov dword ptr [esi + 0x7c], eax */
  W32((uint32_t)(esi + 0x7cu), eax);
/* 8d6a75: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d6a76: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d6a7d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d6a7e: mov esp, ebp */
  esp = ebp;
/* 8d6a80: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d6a81: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8d6a84(void) {
  LOAD_REGS();
L_8d6a84: /* 8d6a84: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d6a87: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d6a8c: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8d6a8f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d6a90: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8d6a93: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d6a98u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d6a98(); return;
}

void f_8d6a98(void) {
  LOAD_REGS();
L_8d6a98: /* 8d6a98: push 0xa1cd78 */
  { uint32_t v = 0xa1cd78u; esp -= 4; W32(esp, v); }
/* 8d6a9d: push 0xaed0e0 */
  { uint32_t v = 0xaed0e0u; esp -= 4; W32(esp, v); }
/* 8d6aa2: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d6aa8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d6aa8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d6aab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d6aad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d6aaf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d6ab4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8d6ab4: guest_badaddr(0x8d6ab4); return;
}

void f_8d6af0(void) {
  LOAD_REGS();
L_8d6af0: /* 8d6af0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d6af1: mov ebp, esp */
  ebp = esp;
/* 8d6af3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d6af5: push 0x9d83f0 */
  { uint32_t v = 0x9d83f0u; esp -= 4; W32(esp, v); }
/* 8d6afa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d6b00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d6b01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d6b08: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d6b0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d6b0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d6b0d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d6b0e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d6b11: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8d6b14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d6b15: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 8d6b18: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d6b19: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8d6b1c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8d6b23: call 0x6cad71 */
  esp -= 4; W32(esp, 0x8d6b28u); SPILL(); f_6cad71(); if (g_unwind) return; RELOAD();
/* 8d6b28: mov ecx, dword ptr [0xb1906c] */
  ecx = R32((uint32_t)(0xb1906cu));
/* 8d6b2e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d6b30: jne 0x8d6b3d */
  if (!zf) goto L_8d6b3d;
L_8d6b32: /* 8d6b32: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d6b35: mov ebx, dword ptr [edi + 0x340] */
  ebx = R32((uint32_t)(edi + 0x340u));
/* 8d6b3b: jmp 0x8d6b47 */
  goto L_8d6b47;
L_8d6b3d: /* 8d6b3d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d6b3f: je 0x8d6b86 */
  if (zf) goto L_8d6b86;
L_8d6b41: /* 8d6b41: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d6b44: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
L_8d6b47: /* 8d6b47: xor esi, esi */
  esi = 0;
/* 8d6b49: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8d6b50: /* 8d6b50: cmp esi, dword ptr [edi + 0x1310] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1310u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d6b56: jge 0x8d6b7c */
  if ((sf == of)) goto L_8d6b7c;
L_8d6b58: /* 8d6b58: mov ecx, dword ptr [edi + 0x130c] */
  ecx = R32((uint32_t)(edi + 0x130cu));
/* 8d6b5e: push 0xb19038 */
  { uint32_t v = 0xb19038u; esp -= 4; W32(esp, v); }
/* 8d6b63: lea eax, [esi + esi*4] */
  eax = (uint32_t)(esi + esi*4);
/* 8d6b66: mov edx, dword ptr [ecx + eax*4 + 4] */
  edx = R32((uint32_t)(ecx + eax*4 + 0x4u));
/* 8d6b6a: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8d6b6d: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8d6b6f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d6b70: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d6b71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d6b72: mov ecx, edi */
  ecx = edi;
/* 8d6b74: call 0x6c9d2c */
  esp -= 4; W32(esp, 0x8d6b79u); SPILL(); f_6c9d2c(); if (g_unwind) return; RELOAD();
/* 8d6b79: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8d6b7a: jmp 0x8d6b50 */
  goto L_8d6b50;
L_8d6b7c: /* 8d6b7c: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d6b7f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d6b80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d6b81: call 0x6c772a */
  esp -= 4; W32(esp, 0x8d6b86u); SPILL(); f_6c772a(); if (g_unwind) return; RELOAD();
L_8d6b86: /* 8d6b86: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d6b89: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d6b8a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d6b8b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d6b92: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d6b93: mov esp, ebp */
  esp = ebp;
/* 8d6b95: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d6b96: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8d6b99(void) {
  LOAD_REGS();
L_8d6b99: /* 8d6b99: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d6b9c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d6ba1: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 8d6ba4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d6ba5: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8d6ba8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d6badu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d6bad(); return;
}

void f_8d6bad(void) {
  LOAD_REGS();
L_8d6bad: /* 8d6bad: push 0xa1cdb8 */
  { uint32_t v = 0xa1cdb8u; esp -= 4; W32(esp, v); }
/* 8d6bb2: push 0xaed160 */
  { uint32_t v = 0xaed160u; esp -= 4; W32(esp, v); }
/* 8d6bb7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d6bbdu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d6bbd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d6bc0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d6bc2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d6bc4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d6bc9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8d6bc9: guest_badaddr(0x8d6bc9); return;
}

void f_8d6c10(void) {
  LOAD_REGS();
L_8d6c10: /* 8d6c10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d6c11: mov ebp, esp */
  ebp = esp;
/* 8d6c13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d6c15: push 0x9d8400 */
  { uint32_t v = 0x9d8400u; esp -= 4; W32(esp, v); }
/* 8d6c1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d6c20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d6c21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d6c28: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d6c2b: mov eax, dword ptr [0xb19068] */
  eax = R32((uint32_t)(0xb19068u));
/* 8d6c30: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d6c32: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d6c33: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d6c34: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d6c35: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d6c38: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8d6c3f: je 0x8d6caf */
  if (zf) goto L_8d6caf;
L_8d6c41: /* 8d6c41: mov ecx, dword ptr [0xb19070] */
  ecx = R32((uint32_t)(0xb19070u));
/* 8d6c47: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8d6c4a: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 8d6c4d: fadd dword ptr [eax + ecx + 0x2e8] */
  ST0 = ST0 + (F32((uint32_t)(eax + ecx + 0x2e8u)));
/* 8d6c54: fstp dword ptr [eax + ecx + 0x2e8] */
  WF32((uint32_t)(eax + ecx + 0x2e8u), ST0); FPOP();
/* 8d6c5b: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8d6c5e: lea eax, [eax + ecx + 0x2e8] */
  eax = (uint32_t)(eax + ecx + 0x2e8u);
/* 8d6c65: mov eax, dword ptr [0xb19068] */
  eax = R32((uint32_t)(0xb19068u));
/* 8d6c6a: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 8d6c6d: fadd dword ptr [eax + ecx + 0x2ec] */
  ST0 = ST0 + (F32((uint32_t)(eax + ecx + 0x2ecu)));
/* 8d6c74: fstp dword ptr [eax + ecx + 0x2ec] */
  WF32((uint32_t)(eax + ecx + 0x2ecu), ST0); FPOP();
/* 8d6c7b: lea eax, [eax + ecx + 0x2ec] */
  eax = (uint32_t)(eax + ecx + 0x2ecu);
/* 8d6c82: call 0x6c8ee5 */
  esp -= 4; W32(esp, 0x8d6c87u); SPILL(); f_6c8ee5(); if (g_unwind) return; RELOAD();
/* 8d6c87: mov edx, dword ptr [0xce9ec0] */
  edx = R32((uint32_t)(0xce9ec0u));
/* 8d6c8d: xor eax, eax */
  eax = 0;
/* 8d6c8f: nop  */
L_8d6c90: /* 8d6c90: cmp eax, dword ptr [edx + 0x30] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d6c93: jge 0x8d6caf */
  if ((sf == of)) goto L_8d6caf;
L_8d6c95: /* 8d6c95: mov ecx, dword ptr [edx + 0x2c] */
  ecx = R32((uint32_t)(edx + 0x2cu));
/* 8d6c98: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 8d6c9b: mov esi, dword ptr [ecx + 0xa4] */
  esi = R32((uint32_t)(ecx + 0xa4u));
/* 8d6ca1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d6ca3: je 0x8d6cc2 */
  if (zf) goto L_8d6cc2;
L_8d6ca5: /* 8d6ca5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d6ca7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d6ca9: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x8d6cafu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8d6caf: /* 8d6caf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d6cb2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d6cb3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d6cb4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d6cbb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d6cbc: mov esp, ebp */
  esp = ebp;
/* 8d6cbe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d6cbf: ret 8 */
  esp += 12; SPILL(); return;
L_8d6cc2: /* 8d6cc2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d6cc3: jmp 0x8d6c90 */
  goto L_8d6c90;
}
