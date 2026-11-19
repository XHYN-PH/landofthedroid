#include "recomp.h"
#include "rec_mod.h"

void f_7490f0(void) {
  LOAD_REGS();
L_7490f0: /* 7490f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7490f1: mov esi, ecx */
  esi = ecx;
/* 7490f3: call 0x6cc40a */
  esp -= 4; W32(esp, 0x7490f8u); SPILL(); f_6cc40a(); if (g_unwind) return; RELOAD();
/* 7490f8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7490fd: je 0x74910e */
  if (zf) goto L_74910e;
L_7490ff: /* 7490ff: push 0x450 */
  { uint32_t v = 0x450u; esp -= 4; W32(esp, v); }
/* 749104: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749105: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74910bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74910b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74910e: /* 74910e: mov eax, esi */
  eax = esi;
/* 749110: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 749111: ret 4 */
  esp += 8; SPILL(); return;
}

void f_749130(void) {
  LOAD_REGS();
L_749130: /* 749130: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 749131: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 749135: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 749138: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749139: mov esi, ecx */
  esi = ecx;
/* 74913b: je 0x749170 */
  if (zf) goto L_749170;
L_74913d: /* 74913d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 749140: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 749141: push 0x6cc40a */
  { uint32_t v = 0x6cc40au; esp -= 4; W32(esp, v); }
/* 749146: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 749149: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74914a: push 0x450 */
  { uint32_t v = 0x450u; esp -= 4; W32(esp, v); }
/* 74914f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749150: call 0x99ca3d */
  esp -= 4; W32(esp, 0x749155u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 749155: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 749158: je 0x749168 */
  if (zf) goto L_749168;
L_74915a: /* 74915a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 749160: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 749162: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 749164: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 749165: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x749168u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_749168: /* 749168: mov eax, edi */
  eax = edi;
/* 74916a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74916b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74916c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74916d: ret 4 */
  esp += 8; SPILL(); return;
L_749170: /* 749170: mov ecx, esi */
  ecx = esi;
/* 749172: call 0x6cc40a */
  esp -= 4; W32(esp, 0x749177u); SPILL(); f_6cc40a(); if (g_unwind) return; RELOAD();
/* 749177: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74917a: je 0x74918b */
  if (zf) goto L_74918b;
L_74917c: /* 74917c: push 0x450 */
  { uint32_t v = 0x450u; esp -= 4; W32(esp, v); }
/* 749181: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749182: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x749188u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 749188: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74918b: /* 74918b: mov eax, esi */
  eax = esi;
/* 74918d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74918e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74918f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7491c0(void) {
  LOAD_REGS();
L_7491c0: /* 7491c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7491c2: push 0x9c77e8 */
  { uint32_t v = 0x9c77e8u; esp -= 4; W32(esp, v); }
/* 7491c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7491cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7491ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7491d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7491d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7491d7: mov esi, ecx */
  esi = ecx;
/* 7491d9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7491dd: mov dword ptr [esi], 0x9fee08 */
  W32((uint32_t)(esi), 0x9fee08u);
/* 7491e3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 7491eb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x7491f1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 7491f1: mov ecx, esi */
  ecx = esi;
/* 7491f3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7491fb: call 0x6c57d6 */
  esp -= 4; W32(esp, 0x749200u); SPILL(); f_6c57d6(); if (g_unwind) return; RELOAD();
/* 749200: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 749204: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 749205: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74920c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74920f: ret  */
  esp += 4; SPILL(); return;
}

void f_749230(void) {
  LOAD_REGS();
L_749230: /* 749230: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749231: mov esi, ecx */
  esi = ecx;
/* 749233: call 0x6c6d43 */
  esp -= 4; W32(esp, 0x749238u); SPILL(); f_6c6d43(); if (g_unwind) return; RELOAD();
/* 749238: mov dword ptr [esi], 0x9fee08 */
  W32((uint32_t)(esi), 0x9fee08u);
/* 74923e: mov eax, esi */
  eax = esi;
/* 749240: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 749241: ret  */
  esp += 4; SPILL(); return;
}

void f_749260(void) {
  LOAD_REGS();
L_749260: /* 749260: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749261: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 749262: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 749266: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 749267: mov esi, ecx */
  esi = ecx;
/* 749269: call 0x6c3521 */
  esp -= 4; W32(esp, 0x74926eu); SPILL(); f_6c3521(); if (g_unwind) return; RELOAD();
/* 74926e: mov dword ptr [esi], 0x9fee08 */
  W32((uint32_t)(esi), 0x9fee08u);
/* 749274: lea eax, [edi + 0x3a8] */
  eax = (uint32_t)(edi + 0x3a8u);
/* 74927a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 74927c: lea ecx, [esi + 0x3a8] */
  ecx = (uint32_t)(esi + 0x3a8u);
/* 749282: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 749284: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 749287: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 74928a: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 74928d: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 749290: mov ecx, dword ptr [edi + 0x3b4] */
  ecx = R32((uint32_t)(edi + 0x3b4u));
/* 749296: mov dword ptr [esi + 0x3b4], ecx */
  W32((uint32_t)(esi + 0x3b4u), ecx);
/* 74929c: mov edx, dword ptr [edi + 0x3b8] */
  edx = R32((uint32_t)(edi + 0x3b8u));
/* 7492a2: mov dword ptr [esi + 0x3b8], edx */
  W32((uint32_t)(esi + 0x3b8u), edx);
/* 7492a8: mov eax, dword ptr [edi + 0x3bc] */
  eax = R32((uint32_t)(edi + 0x3bcu));
/* 7492ae: mov dword ptr [esi + 0x3bc], eax */
  W32((uint32_t)(esi + 0x3bcu), eax);
/* 7492b4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7492b5: mov eax, esi */
  eax = esi;
/* 7492b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7492b8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7492e0(void) {
  LOAD_REGS();
L_7492e0: /* 7492e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7492e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7492e2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 7492e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7492e7: mov esi, ecx */
  esi = ecx;
/* 7492e9: call 0x6cb4c9 */
  esp -= 4; W32(esp, 0x7492eeu); SPILL(); f_6cb4c9(); if (g_unwind) return; RELOAD();
/* 7492ee: lea eax, [edi + 0x3a8] */
  eax = (uint32_t)(edi + 0x3a8u);
/* 7492f4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7492f6: lea ecx, [esi + 0x3a8] */
  ecx = (uint32_t)(esi + 0x3a8u);
/* 7492fc: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7492fe: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 749301: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 749304: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 749307: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 74930a: mov ecx, dword ptr [edi + 0x3b4] */
  ecx = R32((uint32_t)(edi + 0x3b4u));
/* 749310: mov dword ptr [esi + 0x3b4], ecx */
  W32((uint32_t)(esi + 0x3b4u), ecx);
/* 749316: mov edx, dword ptr [edi + 0x3b8] */
  edx = R32((uint32_t)(edi + 0x3b8u));
/* 74931c: mov dword ptr [esi + 0x3b8], edx */
  W32((uint32_t)(esi + 0x3b8u), edx);
/* 749322: mov eax, dword ptr [edi + 0x3bc] */
  eax = R32((uint32_t)(edi + 0x3bcu));
/* 749328: mov dword ptr [esi + 0x3bc], eax */
  W32((uint32_t)(esi + 0x3bcu), eax);
/* 74932e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74932f: mov eax, esi */
  eax = esi;
/* 749331: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 749332: ret 4 */
  esp += 8; SPILL(); return;
}

void f_749360(void) {
  LOAD_REGS();
L_749360: /* 749360: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749361: mov esi, ecx */
  esi = ecx;
/* 749363: call 0x6c96f1 */
  esp -= 4; W32(esp, 0x749368u); SPILL(); f_6c96f1(); if (g_unwind) return; RELOAD();
/* 749368: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74936d: je 0x74937e */
  if (zf) goto L_74937e;
L_74936f: /* 74936f: push 0x3c0 */
  { uint32_t v = 0x3c0u; esp -= 4; W32(esp, v); }
/* 749374: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749375: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74937bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74937b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74937e: /* 74937e: mov eax, esi */
  eax = esi;
/* 749380: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 749381: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7493a0(void) {
  LOAD_REGS();
L_7493a0: /* 7493a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7493a1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 7493a5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7493a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7493a9: mov esi, ecx */
  esi = ecx;
/* 7493ab: je 0x7493e0 */
  if (zf) goto L_7493e0;
L_7493ad: /* 7493ad: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 7493b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7493b1: push 0x6c96f1 */
  { uint32_t v = 0x6c96f1u; esp -= 4; W32(esp, v); }
/* 7493b6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 7493b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7493ba: push 0x3c0 */
  { uint32_t v = 0x3c0u; esp -= 4; W32(esp, v); }
/* 7493bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7493c0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x7493c5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 7493c5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7493c8: je 0x7493d8 */
  if (zf) goto L_7493d8;
L_7493ca: /* 7493ca: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7493d0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7493d2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7493d4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7493d5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7493d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7493d8: /* 7493d8: mov eax, edi */
  eax = edi;
/* 7493da: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7493db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7493dc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7493dd: ret 4 */
  esp += 8; SPILL(); return;
L_7493e0: /* 7493e0: mov ecx, esi */
  ecx = esi;
/* 7493e2: call 0x6c96f1 */
  esp -= 4; W32(esp, 0x7493e7u); SPILL(); f_6c96f1(); if (g_unwind) return; RELOAD();
/* 7493e7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7493ea: je 0x7493fb */
  if (zf) goto L_7493fb;
L_7493ec: /* 7493ec: push 0x3c0 */
  { uint32_t v = 0x3c0u; esp -= 4; W32(esp, v); }
/* 7493f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7493f2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7493f8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7493f8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7493fb: /* 7493fb: mov eax, esi */
  eax = esi;
/* 7493fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7493fe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7493ff: ret 4 */
  esp += 8; SPILL(); return;
}

void f_749430(void) {
  LOAD_REGS();
L_749430: /* 749430: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 749432: push 0x9c7808 */
  { uint32_t v = 0x9c7808u; esp -= 4; W32(esp, v); }
/* 749437: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74943d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74943e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 749445: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 749446: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749447: mov esi, ecx */
  esi = ecx;
/* 749449: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74944d: mov dword ptr [esi], 0x9ff030 */
  W32((uint32_t)(esi), 0x9ff030u);
/* 749453: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 74945b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x749461u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 749461: mov ecx, esi */
  ecx = esi;
/* 749463: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 74946b: call 0x6c57d6 */
  esp -= 4; W32(esp, 0x749470u); SPILL(); f_6c57d6(); if (g_unwind) return; RELOAD();
/* 749470: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 749474: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 749475: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74947c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74947f: ret  */
  esp += 4; SPILL(); return;
}

void f_7494a0(void) {
  LOAD_REGS();
L_7494a0: /* 7494a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7494a2: push 0x9c7828 */
  { uint32_t v = 0x9c7828u; esp -= 4; W32(esp, v); }
/* 7494a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7494ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7494ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7494b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7494b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7494b7: mov esi, ecx */
  esi = ecx;
/* 7494b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7494bd: call 0x6c6d43 */
  esp -= 4; W32(esp, 0x7494c2u); SPILL(); f_6c6d43(); if (g_unwind) return; RELOAD();
/* 7494c2: lea ecx, [esi + 0x3a8] */
  ecx = (uint32_t)(esi + 0x3a8u);
/* 7494c8: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 7494d0: mov dword ptr [esi], 0x9ff030 */
  W32((uint32_t)(esi), 0x9ff030u);
/* 7494d6: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x7494dcu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 7494dc: lea ecx, [esi + 0x3b0] */
  ecx = (uint32_t)(esi + 0x3b0u);
/* 7494e2: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x7494e8u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 7494e8: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7494ec: mov eax, esi */
  eax = esi;
/* 7494ee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7494ef: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7494f6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7494f9: ret  */
  esp += 4; SPILL(); return;
}

void f_749520(void) {
  LOAD_REGS();
L_749520: /* 749520: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749521: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 749522: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 749526: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 749527: mov esi, ecx */
  esi = ecx;
/* 749529: call 0x6c3521 */
  esp -= 4; W32(esp, 0x74952eu); SPILL(); f_6c3521(); if (g_unwind) return; RELOAD();
/* 74952e: mov dword ptr [esi], 0x9ff030 */
  W32((uint32_t)(esi), 0x9ff030u);
/* 749534: mov eax, dword ptr [edi + 0x3a8] */
  eax = R32((uint32_t)(edi + 0x3a8u));
/* 74953a: mov dword ptr [esi + 0x3a8], eax */
  W32((uint32_t)(esi + 0x3a8u), eax);
/* 749540: mov ecx, dword ptr [edi + 0x3ac] */
  ecx = R32((uint32_t)(edi + 0x3acu));
/* 749546: mov dword ptr [esi + 0x3ac], ecx */
  W32((uint32_t)(esi + 0x3acu), ecx);
/* 74954c: mov edx, dword ptr [edi + 0x3b0] */
  edx = R32((uint32_t)(edi + 0x3b0u));
/* 749552: mov ecx, dword ptr [esi + 0x3b8] */
  ecx = R32((uint32_t)(esi + 0x3b8u));
/* 749558: mov dword ptr [esi + 0x3b0], edx */
  W32((uint32_t)(esi + 0x3b0u), edx);
/* 74955e: mov eax, dword ptr [edi + 0x3b4] */
  eax = R32((uint32_t)(edi + 0x3b4u));
/* 749564: mov dword ptr [esi + 0x3b4], eax */
  W32((uint32_t)(esi + 0x3b4u), eax);
/* 74956a: xor ecx, dword ptr [edi + 0x3b8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x3b8u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 749570: mov eax, dword ptr [esi + 0x3b8] */
  eax = R32((uint32_t)(esi + 0x3b8u));
/* 749576: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 749579: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74957b: mov dword ptr [esi + 0x3b8], eax */
  W32((uint32_t)(esi + 0x3b8u), eax);
/* 749581: mov ecx, eax */
  ecx = eax;
/* 749583: mov eax, dword ptr [edi + 0x3b8] */
  eax = R32((uint32_t)(edi + 0x3b8u));
/* 749589: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74958b: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74958e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 749590: mov dword ptr [esi + 0x3b8], eax */
  W32((uint32_t)(esi + 0x3b8u), eax);
/* 749596: mov ecx, dword ptr [edi + 0x3b8] */
  ecx = R32((uint32_t)(edi + 0x3b8u));
/* 74959c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74959e: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7495a1: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7495a3: mov dword ptr [esi + 0x3b8], ecx */
  W32((uint32_t)(esi + 0x3b8u), ecx);
/* 7495a9: mov edx, dword ptr [edi + 0x3b8] */
  edx = R32((uint32_t)(edi + 0x3b8u));
/* 7495af: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7495b1: and edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7495b4: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7495b6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7495b7: mov dword ptr [esi + 0x3b8], edx */
  W32((uint32_t)(esi + 0x3b8u), edx);
/* 7495bd: mov eax, esi */
  eax = esi;
/* 7495bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7495c0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_749600(void) {
  LOAD_REGS();
L_749600: /* 749600: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749601: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 749602: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 749606: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 749607: mov esi, ecx */
  esi = ecx;
/* 749609: call 0x6cb4c9 */
  esp -= 4; W32(esp, 0x74960eu); SPILL(); f_6cb4c9(); if (g_unwind) return; RELOAD();
/* 74960e: mov eax, dword ptr [edi + 0x3a8] */
  eax = R32((uint32_t)(edi + 0x3a8u));
/* 749614: mov dword ptr [esi + 0x3a8], eax */
  W32((uint32_t)(esi + 0x3a8u), eax);
/* 74961a: mov ecx, dword ptr [edi + 0x3ac] */
  ecx = R32((uint32_t)(edi + 0x3acu));
/* 749620: mov dword ptr [esi + 0x3ac], ecx */
  W32((uint32_t)(esi + 0x3acu), ecx);
/* 749626: mov edx, dword ptr [edi + 0x3b0] */
  edx = R32((uint32_t)(edi + 0x3b0u));
/* 74962c: mov ecx, dword ptr [esi + 0x3b8] */
  ecx = R32((uint32_t)(esi + 0x3b8u));
/* 749632: mov dword ptr [esi + 0x3b0], edx */
  W32((uint32_t)(esi + 0x3b0u), edx);
/* 749638: mov eax, dword ptr [edi + 0x3b4] */
  eax = R32((uint32_t)(edi + 0x3b4u));
/* 74963e: mov dword ptr [esi + 0x3b4], eax */
  W32((uint32_t)(esi + 0x3b4u), eax);
/* 749644: xor ecx, dword ptr [edi + 0x3b8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x3b8u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74964a: mov eax, dword ptr [esi + 0x3b8] */
  eax = R32((uint32_t)(esi + 0x3b8u));
/* 749650: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 749653: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 749655: mov dword ptr [esi + 0x3b8], eax */
  W32((uint32_t)(esi + 0x3b8u), eax);
/* 74965b: mov ecx, eax */
  ecx = eax;
/* 74965d: mov eax, dword ptr [edi + 0x3b8] */
  eax = R32((uint32_t)(edi + 0x3b8u));
/* 749663: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 749665: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 749668: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74966a: mov dword ptr [esi + 0x3b8], eax */
  W32((uint32_t)(esi + 0x3b8u), eax);
/* 749670: mov ecx, dword ptr [edi + 0x3b8] */
  ecx = R32((uint32_t)(edi + 0x3b8u));
/* 749676: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 749678: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74967b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74967d: mov dword ptr [esi + 0x3b8], ecx */
  W32((uint32_t)(esi + 0x3b8u), ecx);
/* 749683: mov edx, dword ptr [edi + 0x3b8] */
  edx = R32((uint32_t)(edi + 0x3b8u));
/* 749689: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74968b: and edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 74968e: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 749690: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 749691: mov dword ptr [esi + 0x3b8], edx */
  W32((uint32_t)(esi + 0x3b8u), edx);
/* 749697: mov eax, esi */
  eax = esi;
/* 749699: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74969a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7496d0(void) {
  LOAD_REGS();
L_7496d0: /* 7496d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7496d1: mov esi, ecx */
  esi = ecx;
/* 7496d3: call 0x6c2423 */
  esp -= 4; W32(esp, 0x7496d8u); SPILL(); f_6c2423(); if (g_unwind) return; RELOAD();
/* 7496d8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7496dd: je 0x7496ee */
  if (zf) goto L_7496ee;
L_7496df: /* 7496df: push 0x3bc */
  { uint32_t v = 0x3bcu; esp -= 4; W32(esp, v); }
/* 7496e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7496e5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7496ebu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7496eb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7496ee: /* 7496ee: mov eax, esi */
  eax = esi;
/* 7496f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7496f1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_749710(void) {
  LOAD_REGS();
L_749710: /* 749710: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 749711: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 749715: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 749718: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749719: mov esi, ecx */
  esi = ecx;
/* 74971b: je 0x749750 */
  if (zf) goto L_749750;
L_74971d: /* 74971d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 749720: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 749721: push 0x6c2423 */
  { uint32_t v = 0x6c2423u; esp -= 4; W32(esp, v); }
/* 749726: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 749729: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74972a: push 0x3bc */
  { uint32_t v = 0x3bcu; esp -= 4; W32(esp, v); }
/* 74972f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749730: call 0x99ca3d */
  esp -= 4; W32(esp, 0x749735u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 749735: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 749738: je 0x749748 */
  if (zf) goto L_749748;
L_74973a: /* 74973a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 749740: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 749742: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 749744: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 749745: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x749748u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_749748: /* 749748: mov eax, edi */
  eax = edi;
/* 74974a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74974b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74974c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74974d: ret 4 */
  esp += 8; SPILL(); return;
L_749750: /* 749750: mov ecx, esi */
  ecx = esi;
/* 749752: call 0x6c2423 */
  esp -= 4; W32(esp, 0x749757u); SPILL(); f_6c2423(); if (g_unwind) return; RELOAD();
/* 749757: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74975a: je 0x74976b */
  if (zf) goto L_74976b;
L_74975c: /* 74975c: push 0x3bc */
  { uint32_t v = 0x3bcu; esp -= 4; W32(esp, v); }
/* 749761: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749762: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x749768u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 749768: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74976b: /* 74976b: mov eax, esi */
  eax = esi;
/* 74976d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74976e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74976f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7497a0(void) {
  LOAD_REGS();
L_7497a0: /* 7497a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7497a2: push 0x9c7848 */
  { uint32_t v = 0x9c7848u; esp -= 4; W32(esp, v); }
/* 7497a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7497ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7497ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7497b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7497b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7497b7: mov esi, ecx */
  esi = ecx;
/* 7497b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7497bd: mov dword ptr [esi], 0x9ff258 */
  W32((uint32_t)(esi), 0x9ff258u);
/* 7497c3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 7497cb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x7497d1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 7497d1: mov ecx, esi */
  ecx = esi;
/* 7497d3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7497db: call 0x6c2423 */
  esp -= 4; W32(esp, 0x7497e0u); SPILL(); f_6c2423(); if (g_unwind) return; RELOAD();
/* 7497e0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7497e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7497e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7497ec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7497ef: ret  */
  esp += 4; SPILL(); return;
}

void f_749810(void) {
  LOAD_REGS();
L_749810: /* 749810: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749811: mov esi, ecx */
  esi = ecx;
/* 749813: call 0x6cca27 */
  esp -= 4; W32(esp, 0x749818u); SPILL(); f_6cca27(); if (g_unwind) return; RELOAD();
/* 749818: mov dword ptr [esi], 0x9ff258 */
  W32((uint32_t)(esi), 0x9ff258u);
/* 74981e: mov eax, esi */
  eax = esi;
/* 749820: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 749821: ret  */
  esp += 4; SPILL(); return;
}

void f_749840(void) {
  LOAD_REGS();
L_749840: /* 749840: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 749844: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749845: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 749846: mov esi, ecx */
  esi = ecx;
/* 749848: call 0x6c9a8e */
  esp -= 4; W32(esp, 0x74984du); SPILL(); f_6c9a8e(); if (g_unwind) return; RELOAD();
/* 74984d: mov dword ptr [esi], 0x9ff258 */
  W32((uint32_t)(esi), 0x9ff258u);
/* 749853: mov eax, esi */
  eax = esi;
/* 749855: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 749856: ret 4 */
  esp += 8; SPILL(); return;
}

void f_749870(void) {
  LOAD_REGS();
L_749870: /* 749870: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 749874: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749875: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 749876: mov esi, ecx */
  esi = ecx;
/* 749878: call 0x6c1b36 */
  esp -= 4; W32(esp, 0x74987du); SPILL(); f_6c1b36(); if (g_unwind) return; RELOAD();
/* 74987d: mov eax, esi */
  eax = esi;
/* 74987f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 749880: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7498a0(void) {
  LOAD_REGS();
L_7498a0: /* 7498a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7498a1: mov esi, ecx */
  esi = ecx;
/* 7498a3: call 0x6c3981 */
  esp -= 4; W32(esp, 0x7498a8u); SPILL(); f_6c3981(); if (g_unwind) return; RELOAD();
/* 7498a8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7498ad: je 0x7498be */
  if (zf) goto L_7498be;
L_7498af: /* 7498af: push 0x3bc */
  { uint32_t v = 0x3bcu; esp -= 4; W32(esp, v); }
/* 7498b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7498b5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7498bbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7498bb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7498be: /* 7498be: mov eax, esi */
  eax = esi;
/* 7498c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7498c1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7498e0(void) {
  LOAD_REGS();
L_7498e0: /* 7498e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7498e1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 7498e5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7498e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7498e9: mov esi, ecx */
  esi = ecx;
/* 7498eb: je 0x749920 */
  if (zf) goto L_749920;
L_7498ed: /* 7498ed: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 7498f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7498f1: push 0x6c3981 */
  { uint32_t v = 0x6c3981u; esp -= 4; W32(esp, v); }
/* 7498f6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 7498f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7498fa: push 0x3bc */
  { uint32_t v = 0x3bcu; esp -= 4; W32(esp, v); }
/* 7498ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749900: call 0x99ca3d */
  esp -= 4; W32(esp, 0x749905u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 749905: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 749908: je 0x749918 */
  if (zf) goto L_749918;
L_74990a: /* 74990a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 749910: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 749912: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 749914: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 749915: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x749918u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_749918: /* 749918: mov eax, edi */
  eax = edi;
/* 74991a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74991b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74991c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74991d: ret 4 */
  esp += 8; SPILL(); return;
L_749920: /* 749920: mov ecx, esi */
  ecx = esi;
/* 749922: call 0x6c3981 */
  esp -= 4; W32(esp, 0x749927u); SPILL(); f_6c3981(); if (g_unwind) return; RELOAD();
/* 749927: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74992a: je 0x74993b */
  if (zf) goto L_74993b;
L_74992c: /* 74992c: push 0x3bc */
  { uint32_t v = 0x3bcu; esp -= 4; W32(esp, v); }
/* 749931: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749932: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x749938u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 749938: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74993b: /* 74993b: mov eax, esi */
  eax = esi;
/* 74993d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74993e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74993f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_749970(void) {
  LOAD_REGS();
L_749970: /* 749970: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 749972: push 0x9c7868 */
  { uint32_t v = 0x9c7868u; esp -= 4; W32(esp, v); }
/* 749977: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74997d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74997e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 749985: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 749986: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749987: mov esi, ecx */
  esi = ecx;
/* 749989: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74998d: mov dword ptr [esi], 0x9ff480 */
  W32((uint32_t)(esi), 0x9ff480u);
/* 749993: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 74999b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x7499a1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 7499a1: mov ecx, esi */
  ecx = esi;
/* 7499a3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7499ab: call 0x6c57d6 */
  esp -= 4; W32(esp, 0x7499b0u); SPILL(); f_6c57d6(); if (g_unwind) return; RELOAD();
/* 7499b0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7499b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7499b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7499bc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7499bf: ret  */
  esp += 4; SPILL(); return;
}

void f_7499e0(void) {
  LOAD_REGS();
L_7499e0: /* 7499e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7499e1: mov esi, ecx */
  esi = ecx;
/* 7499e3: call 0x6c6d43 */
  esp -= 4; W32(esp, 0x7499e8u); SPILL(); f_6c6d43(); if (g_unwind) return; RELOAD();
/* 7499e8: mov dword ptr [esi], 0x9ff480 */
  W32((uint32_t)(esi), 0x9ff480u);
/* 7499ee: mov eax, esi */
  eax = esi;
/* 7499f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7499f1: ret  */
  esp += 4; SPILL(); return;
}

void f_749a10(void) {
  LOAD_REGS();
L_749a10: /* 749a10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 749a14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749a15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 749a16: mov esi, ecx */
  esi = ecx;
/* 749a18: call 0x6c3521 */
  esp -= 4; W32(esp, 0x749a1du); SPILL(); f_6c3521(); if (g_unwind) return; RELOAD();
/* 749a1d: mov dword ptr [esi], 0x9ff480 */
  W32((uint32_t)(esi), 0x9ff480u);
/* 749a23: mov eax, esi */
  eax = esi;
/* 749a25: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 749a26: ret 4 */
  esp += 8; SPILL(); return;
}

void f_749a40(void) {
  LOAD_REGS();
L_749a40: /* 749a40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 749a44: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749a45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 749a46: mov esi, ecx */
  esi = ecx;
/* 749a48: call 0x6cb4c9 */
  esp -= 4; W32(esp, 0x749a4du); SPILL(); f_6cb4c9(); if (g_unwind) return; RELOAD();
/* 749a4d: mov eax, esi */
  eax = esi;
/* 749a4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 749a50: ret 4 */
  esp += 8; SPILL(); return;
}

void f_749a70(void) {
  LOAD_REGS();
L_749a70: /* 749a70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749a71: mov esi, ecx */
  esi = ecx;
/* 749a73: call 0x6c4589 */
  esp -= 4; W32(esp, 0x749a78u); SPILL(); f_6c4589(); if (g_unwind) return; RELOAD();
/* 749a78: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 749a7d: je 0x749a8e */
  if (zf) goto L_749a8e;
L_749a7f: /* 749a7f: push 0x3a8 */
  { uint32_t v = 0x3a8u; esp -= 4; W32(esp, v); }
/* 749a84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749a85: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x749a8bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 749a8b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_749a8e: /* 749a8e: mov eax, esi */
  eax = esi;
/* 749a90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 749a91: ret 4 */
  esp += 8; SPILL(); return;
}

void f_749ab0(void) {
  LOAD_REGS();
L_749ab0: /* 749ab0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 749ab1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 749ab5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 749ab8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749ab9: mov esi, ecx */
  esi = ecx;
/* 749abb: je 0x749af0 */
  if (zf) goto L_749af0;
L_749abd: /* 749abd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 749ac0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 749ac1: push 0x6c4589 */
  { uint32_t v = 0x6c4589u; esp -= 4; W32(esp, v); }
/* 749ac6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 749ac9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 749aca: push 0x3a8 */
  { uint32_t v = 0x3a8u; esp -= 4; W32(esp, v); }
/* 749acf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749ad0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x749ad5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 749ad5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 749ad8: je 0x749ae8 */
  if (zf) goto L_749ae8;
L_749ada: /* 749ada: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 749ae0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 749ae2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 749ae4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 749ae5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x749ae8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_749ae8: /* 749ae8: mov eax, edi */
  eax = edi;
/* 749aea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 749aeb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 749aec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 749aed: ret 4 */
  esp += 8; SPILL(); return;
L_749af0: /* 749af0: mov ecx, esi */
  ecx = esi;
/* 749af2: call 0x6c4589 */
  esp -= 4; W32(esp, 0x749af7u); SPILL(); f_6c4589(); if (g_unwind) return; RELOAD();
/* 749af7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 749afa: je 0x749b0b */
  if (zf) goto L_749b0b;
L_749afc: /* 749afc: push 0x3a8 */
  { uint32_t v = 0x3a8u; esp -= 4; W32(esp, v); }
/* 749b01: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749b02: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x749b08u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 749b08: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_749b0b: /* 749b0b: mov eax, esi */
  eax = esi;
/* 749b0d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 749b0e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 749b0f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_749b40(void) {
  LOAD_REGS();
L_749b40: /* 749b40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 749b42: push 0x9c7888 */
  { uint32_t v = 0x9c7888u; esp -= 4; W32(esp, v); }
/* 749b47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 749b4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 749b4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 749b55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 749b56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749b57: mov esi, ecx */
  esi = ecx;
/* 749b59: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 749b5d: mov dword ptr [esi], 0x9ff6a8 */
  W32((uint32_t)(esi), 0x9ff6a8u);
/* 749b63: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 749b6b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x749b71u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 749b71: mov ecx, esi */
  ecx = esi;
/* 749b73: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 749b7b: call 0x6c4589 */
  esp -= 4; W32(esp, 0x749b80u); SPILL(); f_6c4589(); if (g_unwind) return; RELOAD();
/* 749b80: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 749b84: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 749b85: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 749b8c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 749b8f: ret  */
  esp += 4; SPILL(); return;
}

void f_749bb0(void) {
  LOAD_REGS();
L_749bb0: /* 749bb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749bb1: mov esi, ecx */
  esi = ecx;
/* 749bb3: call 0x6c6d43 */
  esp -= 4; W32(esp, 0x749bb8u); SPILL(); f_6c6d43(); if (g_unwind) return; RELOAD();
/* 749bb8: mov dword ptr [esi], 0x9ff6a8 */
  W32((uint32_t)(esi), 0x9ff6a8u);
/* 749bbe: mov eax, esi */
  eax = esi;
/* 749bc0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 749bc1: ret  */
  esp += 4; SPILL(); return;
}

void f_749be0(void) {
  LOAD_REGS();
L_749be0: /* 749be0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749be1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 749be2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 749be6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 749be7: mov esi, ecx */
  esi = ecx;
/* 749be9: call 0x6c3521 */
  esp -= 4; W32(esp, 0x749beeu); SPILL(); f_6c3521(); if (g_unwind) return; RELOAD();
/* 749bee: mov dword ptr [esi], 0x9ff6a8 */
  W32((uint32_t)(esi), 0x9ff6a8u);
/* 749bf4: mov eax, dword ptr [edi + 0x3a8] */
  eax = R32((uint32_t)(edi + 0x3a8u));
/* 749bfa: mov dword ptr [esi + 0x3a8], eax */
  W32((uint32_t)(esi + 0x3a8u), eax);
/* 749c00: mov ecx, dword ptr [edi + 0x3ac] */
  ecx = R32((uint32_t)(edi + 0x3acu));
/* 749c06: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 749c07: mov dword ptr [esi + 0x3ac], ecx */
  W32((uint32_t)(esi + 0x3acu), ecx);
/* 749c0d: mov eax, esi */
  eax = esi;
/* 749c0f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 749c10: ret 4 */
  esp += 8; SPILL(); return;
}

void f_749c30(void) {
  LOAD_REGS();
L_749c30: /* 749c30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749c31: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 749c32: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 749c36: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 749c37: mov esi, ecx */
  esi = ecx;
/* 749c39: call 0x6cb4c9 */
  esp -= 4; W32(esp, 0x749c3eu); SPILL(); f_6cb4c9(); if (g_unwind) return; RELOAD();
/* 749c3e: mov eax, dword ptr [edi + 0x3a8] */
  eax = R32((uint32_t)(edi + 0x3a8u));
/* 749c44: mov dword ptr [esi + 0x3a8], eax */
  W32((uint32_t)(esi + 0x3a8u), eax);
/* 749c4a: mov ecx, dword ptr [edi + 0x3ac] */
  ecx = R32((uint32_t)(edi + 0x3acu));
/* 749c50: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 749c51: mov dword ptr [esi + 0x3ac], ecx */
  W32((uint32_t)(esi + 0x3acu), ecx);
/* 749c57: mov eax, esi */
  eax = esi;
/* 749c59: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 749c5a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_749c70(void) {
  LOAD_REGS();
L_749c70: /* 749c70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749c71: mov esi, ecx */
  esi = ecx;
/* 749c73: call 0x6c7af9 */
  esp -= 4; W32(esp, 0x749c78u); SPILL(); f_6c7af9(); if (g_unwind) return; RELOAD();
/* 749c78: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 749c7d: je 0x749c8e */
  if (zf) goto L_749c8e;
L_749c7f: /* 749c7f: push 0x3b0 */
  { uint32_t v = 0x3b0u; esp -= 4; W32(esp, v); }
/* 749c84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749c85: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x749c8bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 749c8b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_749c8e: /* 749c8e: mov eax, esi */
  eax = esi;
/* 749c90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 749c91: ret 4 */
  esp += 8; SPILL(); return;
}

void f_749cb0(void) {
  LOAD_REGS();
L_749cb0: /* 749cb0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 749cb1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 749cb5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 749cb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749cb9: mov esi, ecx */
  esi = ecx;
/* 749cbb: je 0x749cf0 */
  if (zf) goto L_749cf0;
L_749cbd: /* 749cbd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 749cc0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 749cc1: push 0x6c7af9 */
  { uint32_t v = 0x6c7af9u; esp -= 4; W32(esp, v); }
/* 749cc6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 749cc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 749cca: push 0x3b0 */
  { uint32_t v = 0x3b0u; esp -= 4; W32(esp, v); }
/* 749ccf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749cd0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x749cd5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 749cd5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 749cd8: je 0x749ce8 */
  if (zf) goto L_749ce8;
L_749cda: /* 749cda: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 749ce0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 749ce2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 749ce4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 749ce5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x749ce8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_749ce8: /* 749ce8: mov eax, edi */
  eax = edi;
/* 749cea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 749ceb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 749cec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 749ced: ret 4 */
  esp += 8; SPILL(); return;
L_749cf0: /* 749cf0: mov ecx, esi */
  ecx = esi;
/* 749cf2: call 0x6c7af9 */
  esp -= 4; W32(esp, 0x749cf7u); SPILL(); f_6c7af9(); if (g_unwind) return; RELOAD();
/* 749cf7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 749cfa: je 0x749d0b */
  if (zf) goto L_749d0b;
L_749cfc: /* 749cfc: push 0x3b0 */
  { uint32_t v = 0x3b0u; esp -= 4; W32(esp, v); }
/* 749d01: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749d02: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x749d08u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 749d08: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_749d0b: /* 749d0b: mov eax, esi */
  eax = esi;
/* 749d0d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 749d0e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 749d0f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_749d40(void) {
  LOAD_REGS();
L_749d40: /* 749d40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 749d42: push 0x9c78a8 */
  { uint32_t v = 0x9c78a8u; esp -= 4; W32(esp, v); }
/* 749d47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 749d4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 749d4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 749d55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 749d56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749d57: mov esi, ecx */
  esi = ecx;
/* 749d59: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 749d5d: mov dword ptr [esi], 0x9ff8d0 */
  W32((uint32_t)(esi), 0x9ff8d0u);
/* 749d63: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 749d6b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x749d71u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 749d71: mov ecx, esi */
  ecx = esi;
/* 749d73: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 749d7b: call 0x6c7af9 */
  esp -= 4; W32(esp, 0x749d80u); SPILL(); f_6c7af9(); if (g_unwind) return; RELOAD();
/* 749d80: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 749d84: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 749d85: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 749d8c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 749d8f: ret  */
  esp += 4; SPILL(); return;
}

void f_749db0(void) {
  LOAD_REGS();
L_749db0: /* 749db0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749db1: mov esi, ecx */
  esi = ecx;
/* 749db3: call 0x6c6d43 */
  esp -= 4; W32(esp, 0x749db8u); SPILL(); f_6c6d43(); if (g_unwind) return; RELOAD();
/* 749db8: mov dword ptr [esi], 0x9ff8d0 */
  W32((uint32_t)(esi), 0x9ff8d0u);
/* 749dbe: mov eax, esi */
  eax = esi;
/* 749dc0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 749dc1: ret  */
  esp += 4; SPILL(); return;
}

void f_749de0(void) {
  LOAD_REGS();
L_749de0: /* 749de0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749de1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 749de2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 749de6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 749de7: mov esi, ecx */
  esi = ecx;
/* 749de9: call 0x6c3521 */
  esp -= 4; W32(esp, 0x749deeu); SPILL(); f_6c3521(); if (g_unwind) return; RELOAD();
/* 749dee: mov dword ptr [esi], 0x9ff6a8 */
  W32((uint32_t)(esi), 0x9ff6a8u);
/* 749df4: mov eax, dword ptr [edi + 0x3a8] */
  eax = R32((uint32_t)(edi + 0x3a8u));
/* 749dfa: mov dword ptr [esi + 0x3a8], eax */
  W32((uint32_t)(esi + 0x3a8u), eax);
/* 749e00: mov ecx, dword ptr [edi + 0x3ac] */
  ecx = R32((uint32_t)(edi + 0x3acu));
/* 749e06: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 749e07: mov dword ptr [esi + 0x3ac], ecx */
  W32((uint32_t)(esi + 0x3acu), ecx);
/* 749e0d: mov dword ptr [esi], 0x9ff8d0 */
  W32((uint32_t)(esi), 0x9ff8d0u);
/* 749e13: mov eax, esi */
  eax = esi;
/* 749e15: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 749e16: ret 4 */
  esp += 8; SPILL(); return;
}

void f_749e30(void) {
  LOAD_REGS();
L_749e30: /* 749e30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749e31: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 749e32: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 749e36: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 749e37: mov esi, ecx */
  esi = ecx;
/* 749e39: call 0x6cb4c9 */
  esp -= 4; W32(esp, 0x749e3eu); SPILL(); f_6cb4c9(); if (g_unwind) return; RELOAD();
/* 749e3e: mov eax, dword ptr [edi + 0x3a8] */
  eax = R32((uint32_t)(edi + 0x3a8u));
/* 749e44: mov dword ptr [esi + 0x3a8], eax */
  W32((uint32_t)(esi + 0x3a8u), eax);
/* 749e4a: mov ecx, dword ptr [edi + 0x3ac] */
  ecx = R32((uint32_t)(edi + 0x3acu));
/* 749e50: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 749e51: mov dword ptr [esi + 0x3ac], ecx */
  W32((uint32_t)(esi + 0x3acu), ecx);
/* 749e57: mov eax, esi */
  eax = esi;
/* 749e59: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 749e5a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_749e70(void) {
  LOAD_REGS();
L_749e70: /* 749e70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749e71: mov esi, ecx */
  esi = ecx;
/* 749e73: call 0x6c4741 */
  esp -= 4; W32(esp, 0x749e78u); SPILL(); f_6c4741(); if (g_unwind) return; RELOAD();
/* 749e78: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 749e7d: je 0x749e8e */
  if (zf) goto L_749e8e;
L_749e7f: /* 749e7f: push 0x3b0 */
  { uint32_t v = 0x3b0u; esp -= 4; W32(esp, v); }
/* 749e84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749e85: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x749e8bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 749e8b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_749e8e: /* 749e8e: mov eax, esi */
  eax = esi;
/* 749e90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 749e91: ret 4 */
  esp += 8; SPILL(); return;
}

void f_749eb0(void) {
  LOAD_REGS();
L_749eb0: /* 749eb0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 749eb1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 749eb5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 749eb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749eb9: mov esi, ecx */
  esi = ecx;
/* 749ebb: je 0x749ef0 */
  if (zf) goto L_749ef0;
L_749ebd: /* 749ebd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 749ec0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 749ec1: push 0x6c4741 */
  { uint32_t v = 0x6c4741u; esp -= 4; W32(esp, v); }
/* 749ec6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 749ec9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 749eca: push 0x3b0 */
  { uint32_t v = 0x3b0u; esp -= 4; W32(esp, v); }
/* 749ecf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749ed0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x749ed5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 749ed5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 749ed8: je 0x749ee8 */
  if (zf) goto L_749ee8;
L_749eda: /* 749eda: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 749ee0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 749ee2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 749ee4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 749ee5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x749ee8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_749ee8: /* 749ee8: mov eax, edi */
  eax = edi;
/* 749eea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 749eeb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 749eec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 749eed: ret 4 */
  esp += 8; SPILL(); return;
L_749ef0: /* 749ef0: mov ecx, esi */
  ecx = esi;
/* 749ef2: call 0x6c4741 */
  esp -= 4; W32(esp, 0x749ef7u); SPILL(); f_6c4741(); if (g_unwind) return; RELOAD();
/* 749ef7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 749efa: je 0x749f0b */
  if (zf) goto L_749f0b;
L_749efc: /* 749efc: push 0x3b0 */
  { uint32_t v = 0x3b0u; esp -= 4; W32(esp, v); }
/* 749f01: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749f02: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x749f08u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 749f08: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_749f0b: /* 749f0b: mov eax, esi */
  eax = esi;
/* 749f0d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 749f0e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 749f0f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_749f40(void) {
  LOAD_REGS();
L_749f40: /* 749f40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 749f42: push 0x9c78c8 */
  { uint32_t v = 0x9c78c8u; esp -= 4; W32(esp, v); }
/* 749f47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 749f4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 749f4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 749f55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 749f56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749f57: mov esi, ecx */
  esi = ecx;
/* 749f59: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 749f5d: mov dword ptr [esi], 0x9ffaf8 */
  W32((uint32_t)(esi), 0x9ffaf8u);
/* 749f63: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 749f6b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x749f71u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 749f71: mov ecx, esi */
  ecx = esi;
/* 749f73: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 749f7b: call 0x6c4589 */
  esp -= 4; W32(esp, 0x749f80u); SPILL(); f_6c4589(); if (g_unwind) return; RELOAD();
/* 749f80: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 749f84: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 749f85: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 749f8c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 749f8f: ret  */
  esp += 4; SPILL(); return;
}

void f_749fb0(void) {
  LOAD_REGS();
L_749fb0: /* 749fb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749fb1: mov esi, ecx */
  esi = ecx;
/* 749fb3: call 0x6c6d43 */
  esp -= 4; W32(esp, 0x749fb8u); SPILL(); f_6c6d43(); if (g_unwind) return; RELOAD();
/* 749fb8: mov dword ptr [esi], 0x9ffaf8 */
  W32((uint32_t)(esi), 0x9ffaf8u);
/* 749fbe: mov eax, esi */
  eax = esi;
/* 749fc0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 749fc1: ret  */
  esp += 4; SPILL(); return;
}

void f_749fe0(void) {
  LOAD_REGS();
L_749fe0: /* 749fe0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 749fe1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 749fe2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 749fe6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 749fe7: mov esi, ecx */
  esi = ecx;
/* 749fe9: call 0x6c3521 */
  esp -= 4; W32(esp, 0x749feeu); SPILL(); f_6c3521(); if (g_unwind) return; RELOAD();
/* 749fee: mov dword ptr [esi], 0x9ffaf8 */
  W32((uint32_t)(esi), 0x9ffaf8u);
/* 749ff4: mov eax, dword ptr [edi + 0x3a8] */
  eax = R32((uint32_t)(edi + 0x3a8u));
/* 749ffa: mov dword ptr [esi + 0x3a8], eax */
  W32((uint32_t)(esi + 0x3a8u), eax);
/* 74a000: mov ecx, dword ptr [edi + 0x3ac] */
  ecx = R32((uint32_t)(edi + 0x3acu));
/* 74a006: mov dword ptr [esi + 0x3ac], ecx */
  W32((uint32_t)(esi + 0x3acu), ecx);
/* 74a00c: mov edx, dword ptr [edi + 0x3b0] */
  edx = R32((uint32_t)(edi + 0x3b0u));
/* 74a012: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74a013: mov dword ptr [esi + 0x3b0], edx */
  W32((uint32_t)(esi + 0x3b0u), edx);
/* 74a019: mov eax, esi */
  eax = esi;
/* 74a01b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74a01c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74a030(void) {
  LOAD_REGS();
L_74a030: /* 74a030: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74a031: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74a032: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 74a036: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74a037: mov esi, ecx */
  esi = ecx;
/* 74a039: call 0x6cb4c9 */
  esp -= 4; W32(esp, 0x74a03eu); SPILL(); f_6cb4c9(); if (g_unwind) return; RELOAD();
/* 74a03e: mov eax, dword ptr [edi + 0x3a8] */
  eax = R32((uint32_t)(edi + 0x3a8u));
/* 74a044: mov dword ptr [esi + 0x3a8], eax */
  W32((uint32_t)(esi + 0x3a8u), eax);
/* 74a04a: mov ecx, dword ptr [edi + 0x3ac] */
  ecx = R32((uint32_t)(edi + 0x3acu));
/* 74a050: mov dword ptr [esi + 0x3ac], ecx */
  W32((uint32_t)(esi + 0x3acu), ecx);
/* 74a056: mov edx, dword ptr [edi + 0x3b0] */
  edx = R32((uint32_t)(edi + 0x3b0u));
/* 74a05c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74a05d: mov dword ptr [esi + 0x3b0], edx */
  W32((uint32_t)(esi + 0x3b0u), edx);
/* 74a063: mov eax, esi */
  eax = esi;
/* 74a065: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74a066: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74a080(void) {
  LOAD_REGS();
L_74a080: /* 74a080: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74a081: mov esi, ecx */
  esi = ecx;
/* 74a083: call 0x6c6e42 */
  esp -= 4; W32(esp, 0x74a088u); SPILL(); f_6c6e42(); if (g_unwind) return; RELOAD();
/* 74a088: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74a08d: je 0x74a09e */
  if (zf) goto L_74a09e;
L_74a08f: /* 74a08f: push 0x3b4 */
  { uint32_t v = 0x3b4u; esp -= 4; W32(esp, v); }
/* 74a094: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74a095: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74a09bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74a09b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74a09e: /* 74a09e: mov eax, esi */
  eax = esi;
/* 74a0a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74a0a1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74a0c0(void) {
  LOAD_REGS();
L_74a0c0: /* 74a0c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 74a0c1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 74a0c5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74a0c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74a0c9: mov esi, ecx */
  esi = ecx;
/* 74a0cb: je 0x74a100 */
  if (zf) goto L_74a100;
L_74a0cd: /* 74a0cd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 74a0d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74a0d1: push 0x6c6e42 */
  { uint32_t v = 0x6c6e42u; esp -= 4; W32(esp, v); }
/* 74a0d6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 74a0d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74a0da: push 0x3b4 */
  { uint32_t v = 0x3b4u; esp -= 4; W32(esp, v); }
/* 74a0df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74a0e0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x74a0e5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 74a0e5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74a0e8: je 0x74a0f8 */
  if (zf) goto L_74a0f8;
L_74a0ea: /* 74a0ea: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 74a0f0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 74a0f2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 74a0f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74a0f5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x74a0f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_74a0f8: /* 74a0f8: mov eax, edi */
  eax = edi;
/* 74a0fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74a0fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74a0fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74a0fd: ret 4 */
  esp += 8; SPILL(); return;
L_74a100: /* 74a100: mov ecx, esi */
  ecx = esi;
/* 74a102: call 0x6c6e42 */
  esp -= 4; W32(esp, 0x74a107u); SPILL(); f_6c6e42(); if (g_unwind) return; RELOAD();
/* 74a107: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74a10a: je 0x74a11b */
  if (zf) goto L_74a11b;
L_74a10c: /* 74a10c: push 0x3b4 */
  { uint32_t v = 0x3b4u; esp -= 4; W32(esp, v); }
/* 74a111: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74a112: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74a118u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74a118: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74a11b: /* 74a11b: mov eax, esi */
  eax = esi;
/* 74a11d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74a11e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74a11f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74a150(void) {
  LOAD_REGS();
L_74a150: /* 74a150: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 74a152: push 0x9c78e8 */
  { uint32_t v = 0x9c78e8u; esp -= 4; W32(esp, v); }
/* 74a157: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74a15d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74a15e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 74a165: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74a166: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74a167: mov esi, ecx */
  esi = ecx;
/* 74a169: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74a16d: mov dword ptr [esi], 0x9ffd20 */
  W32((uint32_t)(esi), 0x9ffd20u);
/* 74a173: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 74a17b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x74a181u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 74a181: mov ecx, esi */
  ecx = esi;
/* 74a183: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 74a18b: call 0x6c4589 */
  esp -= 4; W32(esp, 0x74a190u); SPILL(); f_6c4589(); if (g_unwind) return; RELOAD();
/* 74a190: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 74a194: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74a195: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74a19c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74a19f: ret  */
  esp += 4; SPILL(); return;
}

void f_74a1c0(void) {
  LOAD_REGS();
L_74a1c0: /* 74a1c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74a1c1: mov esi, ecx */
  esi = ecx;
/* 74a1c3: call 0x6c6d43 */
  esp -= 4; W32(esp, 0x74a1c8u); SPILL(); f_6c6d43(); if (g_unwind) return; RELOAD();
/* 74a1c8: mov dword ptr [esi], 0x9ffd20 */
  W32((uint32_t)(esi), 0x9ffd20u);
/* 74a1ce: mov eax, esi */
  eax = esi;
/* 74a1d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74a1d1: ret  */
  esp += 4; SPILL(); return;
}

void f_74a1f0(void) {
  LOAD_REGS();
L_74a1f0: /* 74a1f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74a1f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74a1f2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 74a1f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74a1f7: mov esi, ecx */
  esi = ecx;
/* 74a1f9: call 0x6c3521 */
  esp -= 4; W32(esp, 0x74a1feu); SPILL(); f_6c3521(); if (g_unwind) return; RELOAD();
/* 74a1fe: mov dword ptr [esi], 0x9ffd20 */
  W32((uint32_t)(esi), 0x9ffd20u);
/* 74a204: mov eax, dword ptr [edi + 0x3a8] */
  eax = R32((uint32_t)(edi + 0x3a8u));
/* 74a20a: mov dword ptr [esi + 0x3a8], eax */
  W32((uint32_t)(esi + 0x3a8u), eax);
/* 74a210: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74a211: mov eax, esi */
  eax = esi;
/* 74a213: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74a214: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74a230(void) {
  LOAD_REGS();
L_74a230: /* 74a230: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74a231: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74a232: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 74a236: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74a237: mov esi, ecx */
  esi = ecx;
/* 74a239: call 0x6cb4c9 */
  esp -= 4; W32(esp, 0x74a23eu); SPILL(); f_6cb4c9(); if (g_unwind) return; RELOAD();
/* 74a23e: mov eax, dword ptr [edi + 0x3a8] */
  eax = R32((uint32_t)(edi + 0x3a8u));
/* 74a244: mov dword ptr [esi + 0x3a8], eax */
  W32((uint32_t)(esi + 0x3a8u), eax);
/* 74a24a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74a24b: mov eax, esi */
  eax = esi;
/* 74a24d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74a24e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74a270(void) {
  LOAD_REGS();
L_74a270: /* 74a270: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74a271: mov esi, ecx */
  esi = ecx;
/* 74a273: call 0x6c8d3c */
  esp -= 4; W32(esp, 0x74a278u); SPILL(); f_6c8d3c(); if (g_unwind) return; RELOAD();
/* 74a278: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74a27d: je 0x74a28e */
  if (zf) goto L_74a28e;
L_74a27f: /* 74a27f: push 0x3ac */
  { uint32_t v = 0x3acu; esp -= 4; W32(esp, v); }
/* 74a284: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74a285: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74a28bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74a28b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74a28e: /* 74a28e: mov eax, esi */
  eax = esi;
/* 74a290: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74a291: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74a2b0(void) {
  LOAD_REGS();
L_74a2b0: /* 74a2b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 74a2b1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 74a2b5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74a2b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74a2b9: mov esi, ecx */
  esi = ecx;
/* 74a2bb: je 0x74a2f0 */
  if (zf) goto L_74a2f0;
L_74a2bd: /* 74a2bd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 74a2c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74a2c1: push 0x6c8d3c */
  { uint32_t v = 0x6c8d3cu; esp -= 4; W32(esp, v); }
/* 74a2c6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 74a2c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74a2ca: push 0x3ac */
  { uint32_t v = 0x3acu; esp -= 4; W32(esp, v); }
/* 74a2cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74a2d0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x74a2d5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 74a2d5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74a2d8: je 0x74a2e8 */
  if (zf) goto L_74a2e8;
L_74a2da: /* 74a2da: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 74a2e0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 74a2e2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 74a2e4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74a2e5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x74a2e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_74a2e8: /* 74a2e8: mov eax, edi */
  eax = edi;
/* 74a2ea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74a2eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74a2ec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74a2ed: ret 4 */
  esp += 8; SPILL(); return;
L_74a2f0: /* 74a2f0: mov ecx, esi */
  ecx = esi;
/* 74a2f2: call 0x6c8d3c */
  esp -= 4; W32(esp, 0x74a2f7u); SPILL(); f_6c8d3c(); if (g_unwind) return; RELOAD();
/* 74a2f7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74a2fa: je 0x74a30b */
  if (zf) goto L_74a30b;
L_74a2fc: /* 74a2fc: push 0x3ac */
  { uint32_t v = 0x3acu; esp -= 4; W32(esp, v); }
/* 74a301: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74a302: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74a308u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74a308: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74a30b: /* 74a30b: mov eax, esi */
  eax = esi;
/* 74a30d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74a30e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74a30f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74a340(void) {
  LOAD_REGS();
L_74a340: /* 74a340: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 74a342: push 0x9c7908 */
  { uint32_t v = 0x9c7908u; esp -= 4; W32(esp, v); }
/* 74a347: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74a34d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74a34e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 74a355: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74a356: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74a357: mov esi, ecx */
  esi = ecx;
/* 74a359: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74a35d: mov dword ptr [esi], 0x9fff48 */
  W32((uint32_t)(esi), 0x9fff48u);
/* 74a363: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 74a36b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x74a371u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 74a371: mov ecx, esi */
  ecx = esi;
/* 74a373: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 74a37b: call 0x6c4589 */
  esp -= 4; W32(esp, 0x74a380u); SPILL(); f_6c4589(); if (g_unwind) return; RELOAD();
/* 74a380: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 74a384: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74a385: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74a38c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74a38f: ret  */
  esp += 4; SPILL(); return;
}

void f_74a3b0(void) {
  LOAD_REGS();
L_74a3b0: /* 74a3b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74a3b1: mov esi, ecx */
  esi = ecx;
/* 74a3b3: call 0x6c6d43 */
  esp -= 4; W32(esp, 0x74a3b8u); SPILL(); f_6c6d43(); if (g_unwind) return; RELOAD();
/* 74a3b8: mov dword ptr [esi], 0x9fff48 */
  W32((uint32_t)(esi), 0x9fff48u);
/* 74a3be: mov eax, esi */
  eax = esi;
/* 74a3c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74a3c1: ret  */
  esp += 4; SPILL(); return;
}

void f_74a3e0(void) {
  LOAD_REGS();
L_74a3e0: /* 74a3e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74a3e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74a3e2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 74a3e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74a3e7: mov esi, ecx */
  esi = ecx;
/* 74a3e9: call 0x6c3521 */
  esp -= 4; W32(esp, 0x74a3eeu); SPILL(); f_6c3521(); if (g_unwind) return; RELOAD();
/* 74a3ee: mov dword ptr [esi], 0x9fff48 */
  W32((uint32_t)(esi), 0x9fff48u);
/* 74a3f4: mov eax, dword ptr [edi + 0x3a8] */
  eax = R32((uint32_t)(edi + 0x3a8u));
/* 74a3fa: mov dword ptr [esi + 0x3a8], eax */
  W32((uint32_t)(esi + 0x3a8u), eax);
/* 74a400: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74a401: mov eax, esi */
  eax = esi;
/* 74a403: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74a404: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74a420(void) {
  LOAD_REGS();
L_74a420: /* 74a420: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74a421: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74a422: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 74a426: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74a427: mov esi, ecx */
  esi = ecx;
/* 74a429: call 0x6cb4c9 */
  esp -= 4; W32(esp, 0x74a42eu); SPILL(); f_6cb4c9(); if (g_unwind) return; RELOAD();
/* 74a42e: mov eax, dword ptr [edi + 0x3a8] */
  eax = R32((uint32_t)(edi + 0x3a8u));
/* 74a434: mov dword ptr [esi + 0x3a8], eax */
  W32((uint32_t)(esi + 0x3a8u), eax);
/* 74a43a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74a43b: mov eax, esi */
  eax = esi;
/* 74a43d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74a43e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74a460(void) {
  LOAD_REGS();
L_74a460: /* 74a460: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74a461: mov esi, ecx */
  esi = ecx;
/* 74a463: call 0x6c1910 */
  esp -= 4; W32(esp, 0x74a468u); SPILL(); f_6c1910(); if (g_unwind) return; RELOAD();
/* 74a468: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74a46d: je 0x74a47e */
  if (zf) goto L_74a47e;
L_74a46f: /* 74a46f: push 0x3ac */
  { uint32_t v = 0x3acu; esp -= 4; W32(esp, v); }
/* 74a474: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74a475: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74a47bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74a47b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74a47e: /* 74a47e: mov eax, esi */
  eax = esi;
/* 74a480: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74a481: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74a4a0(void) {
  LOAD_REGS();
L_74a4a0: /* 74a4a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 74a4a1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 74a4a5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74a4a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74a4a9: mov esi, ecx */
  esi = ecx;
/* 74a4ab: je 0x74a4e0 */
  if (zf) goto L_74a4e0;
L_74a4ad: /* 74a4ad: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 74a4b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74a4b1: push 0x6c1910 */
  { uint32_t v = 0x6c1910u; esp -= 4; W32(esp, v); }
/* 74a4b6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 74a4b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74a4ba: push 0x3ac */
  { uint32_t v = 0x3acu; esp -= 4; W32(esp, v); }
/* 74a4bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74a4c0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x74a4c5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 74a4c5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74a4c8: je 0x74a4d8 */
  if (zf) goto L_74a4d8;
L_74a4ca: /* 74a4ca: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 74a4d0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 74a4d2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 74a4d4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74a4d5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x74a4d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_74a4d8: /* 74a4d8: mov eax, edi */
  eax = edi;
/* 74a4da: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74a4db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74a4dc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74a4dd: ret 4 */
  esp += 8; SPILL(); return;
L_74a4e0: /* 74a4e0: mov ecx, esi */
  ecx = esi;
/* 74a4e2: call 0x6c1910 */
  esp -= 4; W32(esp, 0x74a4e7u); SPILL(); f_6c1910(); if (g_unwind) return; RELOAD();
/* 74a4e7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74a4ea: je 0x74a4fb */
  if (zf) goto L_74a4fb;
L_74a4ec: /* 74a4ec: push 0x3ac */
  { uint32_t v = 0x3acu; esp -= 4; W32(esp, v); }
/* 74a4f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74a4f2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74a4f8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74a4f8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74a4fb: /* 74a4fb: mov eax, esi */
  eax = esi;
/* 74a4fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74a4fe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74a4ff: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74a530(void) {
  LOAD_REGS();
L_74a530: /* 74a530: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 74a532: push 0x9c7928 */
  { uint32_t v = 0x9c7928u; esp -= 4; W32(esp, v); }
/* 74a537: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74a53d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74a53e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 74a545: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74a546: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74a547: mov esi, ecx */
  esi = ecx;
/* 74a549: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74a54d: mov dword ptr [esi], 0xa00170 */
  W32((uint32_t)(esi), 0xa00170u);
/* 74a553: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 74a55b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x74a561u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 74a561: mov ecx, esi */
  ecx = esi;
/* 74a563: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 74a56b: call 0x6c4589 */
  esp -= 4; W32(esp, 0x74a570u); SPILL(); f_6c4589(); if (g_unwind) return; RELOAD();
/* 74a570: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 74a574: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74a575: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74a57c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74a57f: ret  */
  esp += 4; SPILL(); return;
}

void f_74a5a0(void) {
  LOAD_REGS();
L_74a5a0: /* 74a5a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74a5a1: mov esi, ecx */
  esi = ecx;
/* 74a5a3: call 0x6c6d43 */
  esp -= 4; W32(esp, 0x74a5a8u); SPILL(); f_6c6d43(); if (g_unwind) return; RELOAD();
/* 74a5a8: mov dword ptr [esi], 0xa00170 */
  W32((uint32_t)(esi), 0xa00170u);
/* 74a5ae: mov eax, esi */
  eax = esi;
/* 74a5b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74a5b1: ret  */
  esp += 4; SPILL(); return;
}

void f_74a5d0(void) {
  LOAD_REGS();
L_74a5d0: /* 74a5d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74a5d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74a5d2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 74a5d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74a5d7: mov esi, ecx */
  esi = ecx;
/* 74a5d9: call 0x6c3521 */
  esp -= 4; W32(esp, 0x74a5deu); SPILL(); f_6c3521(); if (g_unwind) return; RELOAD();
/* 74a5de: mov ecx, dword ptr [esi + 0x3ac] */
  ecx = R32((uint32_t)(esi + 0x3acu));
/* 74a5e4: mov dword ptr [esi], 0xa00170 */
  W32((uint32_t)(esi), 0xa00170u);
/* 74a5ea: mov al, byte ptr [edi + 0x3a8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3a8u))) & 0xffu);
/* 74a5f0: mov byte ptr [esi + 0x3a8], al */
  W8((uint32_t)(esi + 0x3a8u), (eax & 0xffu));
/* 74a5f6: xor ecx, dword ptr [edi + 0x3ac] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x3acu)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74a5fc: mov eax, dword ptr [esi + 0x3ac] */
  eax = R32((uint32_t)(esi + 0x3acu));
/* 74a602: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74a605: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74a607: mov dword ptr [esi + 0x3ac], eax */
  W32((uint32_t)(esi + 0x3acu), eax);
/* 74a60d: mov ecx, eax */
  ecx = eax;
/* 74a60f: mov eax, dword ptr [edi + 0x3ac] */
  eax = R32((uint32_t)(edi + 0x3acu));
/* 74a615: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74a617: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74a61a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74a61c: mov dword ptr [esi + 0x3ac], eax */
  W32((uint32_t)(esi + 0x3acu), eax);
/* 74a622: mov ecx, dword ptr [edi + 0x3ac] */
  ecx = R32((uint32_t)(edi + 0x3acu));
/* 74a628: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74a62a: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74a62d: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74a62f: mov dword ptr [esi + 0x3ac], ecx */
  W32((uint32_t)(esi + 0x3acu), ecx);
/* 74a635: mov edx, dword ptr [edi + 0x3ac] */
  edx = R32((uint32_t)(edi + 0x3acu));
/* 74a63b: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74a63d: and edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 74a640: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74a642: mov dword ptr [esi + 0x3ac], edx */
  W32((uint32_t)(esi + 0x3acu), edx);
/* 74a648: mov eax, dword ptr [edi + 0x3b0] */
  eax = R32((uint32_t)(edi + 0x3b0u));
/* 74a64e: mov dword ptr [esi + 0x3b0], eax */
  W32((uint32_t)(esi + 0x3b0u), eax);
/* 74a654: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74a655: mov eax, esi */
  eax = esi;
/* 74a657: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74a658: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74a690(void) {
  LOAD_REGS();
L_74a690: /* 74a690: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74a691: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74a692: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 74a696: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74a697: mov esi, ecx */
  esi = ecx;
/* 74a699: call 0x6cb4c9 */
  esp -= 4; W32(esp, 0x74a69eu); SPILL(); f_6cb4c9(); if (g_unwind) return; RELOAD();
/* 74a69e: mov al, byte ptr [edi + 0x3a8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3a8u))) & 0xffu);
/* 74a6a4: mov ecx, dword ptr [esi + 0x3ac] */
  ecx = R32((uint32_t)(esi + 0x3acu));
/* 74a6aa: mov byte ptr [esi + 0x3a8], al */
  W8((uint32_t)(esi + 0x3a8u), (eax & 0xffu));
/* 74a6b0: xor ecx, dword ptr [edi + 0x3ac] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x3acu)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74a6b6: mov eax, dword ptr [esi + 0x3ac] */
  eax = R32((uint32_t)(esi + 0x3acu));
/* 74a6bc: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74a6bf: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74a6c1: mov dword ptr [esi + 0x3ac], eax */
  W32((uint32_t)(esi + 0x3acu), eax);
/* 74a6c7: mov ecx, eax */
  ecx = eax;
/* 74a6c9: mov eax, dword ptr [edi + 0x3ac] */
  eax = R32((uint32_t)(edi + 0x3acu));
/* 74a6cf: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74a6d1: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74a6d4: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74a6d6: mov dword ptr [esi + 0x3ac], eax */
  W32((uint32_t)(esi + 0x3acu), eax);
/* 74a6dc: mov ecx, dword ptr [edi + 0x3ac] */
  ecx = R32((uint32_t)(edi + 0x3acu));
/* 74a6e2: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74a6e4: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74a6e7: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74a6e9: mov dword ptr [esi + 0x3ac], ecx */
  W32((uint32_t)(esi + 0x3acu), ecx);
/* 74a6ef: mov edx, dword ptr [edi + 0x3ac] */
  edx = R32((uint32_t)(edi + 0x3acu));
/* 74a6f5: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74a6f7: and edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 74a6fa: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74a6fc: mov dword ptr [esi + 0x3ac], edx */
  W32((uint32_t)(esi + 0x3acu), edx);
/* 74a702: mov eax, dword ptr [edi + 0x3b0] */
  eax = R32((uint32_t)(edi + 0x3b0u));
/* 74a708: mov dword ptr [esi + 0x3b0], eax */
  W32((uint32_t)(esi + 0x3b0u), eax);
/* 74a70e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74a70f: mov eax, esi */
  eax = esi;
/* 74a711: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74a712: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74a750(void) {
  LOAD_REGS();
L_74a750: /* 74a750: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74a751: mov esi, ecx */
  esi = ecx;
/* 74a753: call 0x6c213f */
  esp -= 4; W32(esp, 0x74a758u); SPILL(); f_6c213f(); if (g_unwind) return; RELOAD();
/* 74a758: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74a75d: je 0x74a76e */
  if (zf) goto L_74a76e;
L_74a75f: /* 74a75f: push 0x3b4 */
  { uint32_t v = 0x3b4u; esp -= 4; W32(esp, v); }
/* 74a764: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74a765: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74a76bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74a76b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74a76e: /* 74a76e: mov eax, esi */
  eax = esi;
/* 74a770: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74a771: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74a790(void) {
  LOAD_REGS();
L_74a790: /* 74a790: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 74a791: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 74a795: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74a798: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74a799: mov esi, ecx */
  esi = ecx;
/* 74a79b: je 0x74a7d0 */
  if (zf) goto L_74a7d0;
L_74a79d: /* 74a79d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 74a7a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74a7a1: push 0x6c213f */
  { uint32_t v = 0x6c213fu; esp -= 4; W32(esp, v); }
/* 74a7a6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 74a7a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74a7aa: push 0x3b4 */
  { uint32_t v = 0x3b4u; esp -= 4; W32(esp, v); }
/* 74a7af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74a7b0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x74a7b5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 74a7b5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74a7b8: je 0x74a7c8 */
  if (zf) goto L_74a7c8;
L_74a7ba: /* 74a7ba: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 74a7c0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 74a7c2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 74a7c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74a7c5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x74a7c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_74a7c8: /* 74a7c8: mov eax, edi */
  eax = edi;
/* 74a7ca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74a7cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74a7cc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74a7cd: ret 4 */
  esp += 8; SPILL(); return;
L_74a7d0: /* 74a7d0: mov ecx, esi */
  ecx = esi;
/* 74a7d2: call 0x6c213f */
  esp -= 4; W32(esp, 0x74a7d7u); SPILL(); f_6c213f(); if (g_unwind) return; RELOAD();
/* 74a7d7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74a7da: je 0x74a7eb */
  if (zf) goto L_74a7eb;
L_74a7dc: /* 74a7dc: push 0x3b4 */
  { uint32_t v = 0x3b4u; esp -= 4; W32(esp, v); }
/* 74a7e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74a7e2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74a7e8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74a7e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74a7eb: /* 74a7eb: mov eax, esi */
  eax = esi;
/* 74a7ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74a7ee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74a7ef: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74a820(void) {
  LOAD_REGS();
L_74a820: /* 74a820: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 74a822: push 0x9c7957 */
  { uint32_t v = 0x9c7957u; esp -= 4; W32(esp, v); }
/* 74a827: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74a82d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74a82e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 74a835: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74a836: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74a837: mov esi, ecx */
  esi = ecx;
/* 74a839: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74a83d: mov dword ptr [esi], 0xa00398 */
  W32((uint32_t)(esi), 0xa00398u);
/* 74a843: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 74a84b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x74a851u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 74a851: lea ecx, [esi + 0x3a8] */
  ecx = (uint32_t)(esi + 0x3a8u);
/* 74a857: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 74a85c: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x74a862u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 74a862: mov ecx, esi */
  ecx = esi;
/* 74a864: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 74a86c: call 0x6c4589 */
  esp -= 4; W32(esp, 0x74a871u); SPILL(); f_6c4589(); if (g_unwind) return; RELOAD();
/* 74a871: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 74a875: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74a876: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74a87d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74a880: ret  */
  esp += 4; SPILL(); return;
}

void f_74a8b0(void) {
  LOAD_REGS();
L_74a8b0: /* 74a8b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 74a8b2: push 0x9c7987 */
  { uint32_t v = 0x9c7987u; esp -= 4; W32(esp, v); }
/* 74a8b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74a8bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74a8be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 74a8c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74a8c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74a8c7: mov esi, ecx */
  esi = ecx;
/* 74a8c9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74a8cd: call 0x6c6d43 */
  esp -= 4; W32(esp, 0x74a8d2u); SPILL(); f_6c6d43(); if (g_unwind) return; RELOAD();
/* 74a8d2: lea ecx, [esi + 0x3a8] */
  ecx = (uint32_t)(esi + 0x3a8u);
/* 74a8d8: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 74a8e0: mov dword ptr [esi], 0xa00398 */
  W32((uint32_t)(esi), 0xa00398u);
/* 74a8e6: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x74a8ecu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 74a8ec: lea ecx, [esi + 0x3b4] */
  ecx = (uint32_t)(esi + 0x3b4u);
/* 74a8f2: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 74a8f7: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x74a8fdu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 74a8fd: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 74a901: mov eax, esi */
  eax = esi;
/* 74a903: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74a904: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74a90b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74a90e: ret  */
  esp += 4; SPILL(); return;
}

void f_74a930(void) {
  LOAD_REGS();
L_74a930: /* 74a930: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 74a932: push 0x9c79a8 */
  { uint32_t v = 0x9c79a8u; esp -= 4; W32(esp, v); }
/* 74a937: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74a93d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74a93e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 74a945: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74a946: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74a947: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74a948: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 74a94c: mov esi, ecx */
  esi = ecx;
/* 74a94e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74a94f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 74a953: call 0x6c3521 */
  esp -= 4; W32(esp, 0x74a958u); SPILL(); f_6c3521(); if (g_unwind) return; RELOAD();
/* 74a958: lea eax, [edi + 0x3a8] */
  eax = (uint32_t)(edi + 0x3a8u);
/* 74a95e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74a95f: lea ecx, [esi + 0x3a8] */
  ecx = (uint32_t)(esi + 0x3a8u);
/* 74a965: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 74a96d: mov dword ptr [esi], 0xa00398 */
  W32((uint32_t)(esi), 0xa00398u);
/* 74a973: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x74a979u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 74a979: mov ecx, dword ptr [edi + 0x3b4] */
  ecx = R32((uint32_t)(edi + 0x3b4u));
/* 74a97f: mov edx, dword ptr [esi + 0x3b8] */
  edx = R32((uint32_t)(esi + 0x3b8u));
/* 74a985: mov dword ptr [esi + 0x3b4], ecx */
  W32((uint32_t)(esi + 0x3b4u), ecx);
/* 74a98b: xor edx, dword ptr [edi + 0x3b8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x3b8u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74a991: mov eax, dword ptr [esi + 0x3b8] */
  eax = R32((uint32_t)(esi + 0x3b8u));
/* 74a997: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 74a99a: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74a99c: mov dword ptr [esi + 0x3b8], eax */
  W32((uint32_t)(esi + 0x3b8u), eax);
/* 74a9a2: mov ecx, eax */
  ecx = eax;
/* 74a9a4: mov eax, dword ptr [edi + 0x3b8] */
  eax = R32((uint32_t)(edi + 0x3b8u));
/* 74a9aa: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74a9ac: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74a9af: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74a9b1: mov dword ptr [esi + 0x3b8], eax */
  W32((uint32_t)(esi + 0x3b8u), eax);
/* 74a9b7: mov ecx, dword ptr [edi + 0x3b8] */
  ecx = R32((uint32_t)(edi + 0x3b8u));
/* 74a9bd: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74a9bf: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74a9c2: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74a9c4: mov dword ptr [esi + 0x3b8], ecx */
  W32((uint32_t)(esi + 0x3b8u), ecx);
/* 74a9ca: mov eax, dword ptr [edi + 0x3b8] */
  eax = R32((uint32_t)(edi + 0x3b8u));
/* 74a9d0: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74a9d2: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74a9d5: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74a9d7: mov dword ptr [esi + 0x3b8], eax */
  W32((uint32_t)(esi + 0x3b8u), eax);
/* 74a9dd: mov ecx, dword ptr [edi + 0x3b8] */
  ecx = R32((uint32_t)(edi + 0x3b8u));
/* 74a9e3: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74a9e5: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74a9e8: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74a9ea: mov dword ptr [esi + 0x3b8], ecx */
  W32((uint32_t)(esi + 0x3b8u), ecx);
/* 74a9f0: mov eax, dword ptr [edi + 0x3b8] */
  eax = R32((uint32_t)(edi + 0x3b8u));
/* 74a9f6: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74a9f8: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74a9fb: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74a9fd: mov dword ptr [esi + 0x3b8], eax */
  W32((uint32_t)(esi + 0x3b8u), eax);
/* 74aa03: lea ecx, [edi + 0x3bc] */
  ecx = (uint32_t)(edi + 0x3bcu);
/* 74aa09: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 74aa0b: lea edx, [esi + 0x3bc] */
  edx = (uint32_t)(esi + 0x3bcu);
/* 74aa11: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 74aa13: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 74aa16: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 74aa19: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 74aa1c: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 74aa1f: mov edx, dword ptr [edi + 0x3c8] */
  edx = R32((uint32_t)(edi + 0x3c8u));
/* 74aa25: mov dword ptr [esi + 0x3c8], edx */
  W32((uint32_t)(esi + 0x3c8u), edx);
/* 74aa2b: mov eax, dword ptr [edi + 0x3cc] */
  eax = R32((uint32_t)(edi + 0x3ccu));
/* 74aa31: mov dword ptr [esi + 0x3cc], eax */
  W32((uint32_t)(esi + 0x3ccu), eax);
/* 74aa37: mov ecx, dword ptr [edi + 0x3d0] */
  ecx = R32((uint32_t)(edi + 0x3d0u));
/* 74aa3d: mov dword ptr [esi + 0x3d0], ecx */
  W32((uint32_t)(esi + 0x3d0u), ecx);
/* 74aa43: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 74aa47: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74aa48: mov eax, esi */
  eax = esi;
/* 74aa4a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74aa4b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74aa52: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74aa55: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74aab0(void) {
  LOAD_REGS();
L_74aab0: /* 74aab0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74aab1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74aab2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 74aab6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74aab7: mov esi, ecx */
  esi = ecx;
/* 74aab9: call 0x6cb4c9 */
  esp -= 4; W32(esp, 0x74aabeu); SPILL(); f_6cb4c9(); if (g_unwind) return; RELOAD();
/* 74aabe: lea eax, [edi + 0x3a8] */
  eax = (uint32_t)(edi + 0x3a8u);
/* 74aac4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74aac5: lea ecx, [esi + 0x3a8] */
  ecx = (uint32_t)(esi + 0x3a8u);
/* 74aacb: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x74aad1u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 74aad1: mov ecx, dword ptr [edi + 0x3b4] */
  ecx = R32((uint32_t)(edi + 0x3b4u));
/* 74aad7: mov edx, dword ptr [esi + 0x3b8] */
  edx = R32((uint32_t)(esi + 0x3b8u));
/* 74aadd: mov dword ptr [esi + 0x3b4], ecx */
  W32((uint32_t)(esi + 0x3b4u), ecx);
/* 74aae3: xor edx, dword ptr [edi + 0x3b8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x3b8u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74aae9: mov eax, dword ptr [esi + 0x3b8] */
  eax = R32((uint32_t)(esi + 0x3b8u));
/* 74aaef: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 74aaf2: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74aaf4: mov dword ptr [esi + 0x3b8], eax */
  W32((uint32_t)(esi + 0x3b8u), eax);
/* 74aafa: mov ecx, eax */
  ecx = eax;
/* 74aafc: mov eax, dword ptr [edi + 0x3b8] */
  eax = R32((uint32_t)(edi + 0x3b8u));
/* 74ab02: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74ab04: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74ab07: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74ab09: mov dword ptr [esi + 0x3b8], eax */
  W32((uint32_t)(esi + 0x3b8u), eax);
/* 74ab0f: mov ecx, dword ptr [edi + 0x3b8] */
  ecx = R32((uint32_t)(edi + 0x3b8u));
/* 74ab15: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74ab17: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74ab1a: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74ab1c: mov dword ptr [esi + 0x3b8], ecx */
  W32((uint32_t)(esi + 0x3b8u), ecx);
/* 74ab22: mov eax, dword ptr [edi + 0x3b8] */
  eax = R32((uint32_t)(edi + 0x3b8u));
/* 74ab28: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74ab2a: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74ab2d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74ab2f: mov dword ptr [esi + 0x3b8], eax */
  W32((uint32_t)(esi + 0x3b8u), eax);
/* 74ab35: mov ecx, dword ptr [edi + 0x3b8] */
  ecx = R32((uint32_t)(edi + 0x3b8u));
/* 74ab3b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74ab3d: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74ab40: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74ab42: mov dword ptr [esi + 0x3b8], ecx */
  W32((uint32_t)(esi + 0x3b8u), ecx);
/* 74ab48: mov eax, dword ptr [edi + 0x3b8] */
  eax = R32((uint32_t)(edi + 0x3b8u));
/* 74ab4e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74ab50: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74ab53: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74ab55: mov dword ptr [esi + 0x3b8], eax */
  W32((uint32_t)(esi + 0x3b8u), eax);
/* 74ab5b: lea ecx, [edi + 0x3bc] */
  ecx = (uint32_t)(edi + 0x3bcu);
/* 74ab61: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 74ab63: lea edx, [esi + 0x3bc] */
  edx = (uint32_t)(esi + 0x3bcu);
/* 74ab69: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 74ab6b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 74ab6e: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 74ab71: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 74ab74: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 74ab77: mov edx, dword ptr [edi + 0x3c8] */
  edx = R32((uint32_t)(edi + 0x3c8u));
/* 74ab7d: mov dword ptr [esi + 0x3c8], edx */
  W32((uint32_t)(esi + 0x3c8u), edx);
/* 74ab83: mov eax, dword ptr [edi + 0x3cc] */
  eax = R32((uint32_t)(edi + 0x3ccu));
/* 74ab89: mov dword ptr [esi + 0x3cc], eax */
  W32((uint32_t)(esi + 0x3ccu), eax);
/* 74ab8f: mov ecx, dword ptr [edi + 0x3d0] */
  ecx = R32((uint32_t)(edi + 0x3d0u));
/* 74ab95: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74ab96: mov dword ptr [esi + 0x3d0], ecx */
  W32((uint32_t)(esi + 0x3d0u), ecx);
/* 74ab9c: mov eax, esi */
  eax = esi;
/* 74ab9e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74ab9f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74abf0(void) {
  LOAD_REGS();
L_74abf0: /* 74abf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74abf1: mov esi, ecx */
  esi = ecx;
/* 74abf3: call 0x6cbc2b */
  esp -= 4; W32(esp, 0x74abf8u); SPILL(); f_6cbc2b(); if (g_unwind) return; RELOAD();
/* 74abf8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74abfd: je 0x74ac0e */
  if (zf) goto L_74ac0e;
L_74abff: /* 74abff: push 0x3d4 */
  { uint32_t v = 0x3d4u; esp -= 4; W32(esp, v); }
/* 74ac04: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74ac05: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74ac0bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74ac0b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74ac0e: /* 74ac0e: mov eax, esi */
  eax = esi;
/* 74ac10: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74ac11: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74ac30(void) {
  LOAD_REGS();
L_74ac30: /* 74ac30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 74ac31: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 74ac35: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74ac38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74ac39: mov esi, ecx */
  esi = ecx;
/* 74ac3b: je 0x74ac70 */
  if (zf) goto L_74ac70;
L_74ac3d: /* 74ac3d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 74ac40: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74ac41: push 0x6cbc2b */
  { uint32_t v = 0x6cbc2bu; esp -= 4; W32(esp, v); }
/* 74ac46: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 74ac49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74ac4a: push 0x3d4 */
  { uint32_t v = 0x3d4u; esp -= 4; W32(esp, v); }
/* 74ac4f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74ac50: call 0x99ca3d */
  esp -= 4; W32(esp, 0x74ac55u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 74ac55: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74ac58: je 0x74ac68 */
  if (zf) goto L_74ac68;
L_74ac5a: /* 74ac5a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 74ac60: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 74ac62: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 74ac64: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74ac65: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x74ac68u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_74ac68: /* 74ac68: mov eax, edi */
  eax = edi;
/* 74ac6a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74ac6b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74ac6c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74ac6d: ret 4 */
  esp += 8; SPILL(); return;
L_74ac70: /* 74ac70: mov ecx, esi */
  ecx = esi;
/* 74ac72: call 0x6cbc2b */
  esp -= 4; W32(esp, 0x74ac77u); SPILL(); f_6cbc2b(); if (g_unwind) return; RELOAD();
/* 74ac77: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74ac7a: je 0x74ac8b */
  if (zf) goto L_74ac8b;
L_74ac7c: /* 74ac7c: push 0x3d4 */
  { uint32_t v = 0x3d4u; esp -= 4; W32(esp, v); }
/* 74ac81: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74ac82: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74ac88u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74ac88: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74ac8b: /* 74ac8b: mov eax, esi */
  eax = esi;
/* 74ac8d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74ac8e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74ac8f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74acc0(void) {
  LOAD_REGS();
L_74acc0: /* 74acc0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 74acc2: push 0x9c79c8 */
  { uint32_t v = 0x9c79c8u; esp -= 4; W32(esp, v); }
/* 74acc7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74accd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74acce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 74acd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74acd6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74acd7: mov esi, ecx */
  esi = ecx;
/* 74acd9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74acdd: mov dword ptr [esi], 0xa005c0 */
  W32((uint32_t)(esi), 0xa005c0u);
/* 74ace3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 74aceb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x74acf1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 74acf1: mov ecx, esi */
  ecx = esi;
/* 74acf3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 74acfb: call 0x6c57d6 */
  esp -= 4; W32(esp, 0x74ad00u); SPILL(); f_6c57d6(); if (g_unwind) return; RELOAD();
/* 74ad00: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 74ad04: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74ad05: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74ad0c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74ad0f: ret  */
  esp += 4; SPILL(); return;
}

void f_74ad30(void) {
  LOAD_REGS();
L_74ad30: /* 74ad30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 74ad32: push 0x9c79e8 */
  { uint32_t v = 0x9c79e8u; esp -= 4; W32(esp, v); }
/* 74ad37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74ad3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74ad3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 74ad45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74ad46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74ad47: mov esi, ecx */
  esi = ecx;
/* 74ad49: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74ad4d: call 0x6c6d43 */
  esp -= 4; W32(esp, 0x74ad52u); SPILL(); f_6c6d43(); if (g_unwind) return; RELOAD();
/* 74ad52: lea ecx, [esi + 0x3a8] */
  ecx = (uint32_t)(esi + 0x3a8u);
/* 74ad58: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 74ad60: mov dword ptr [esi], 0xa005c0 */
  W32((uint32_t)(esi), 0xa005c0u);
/* 74ad66: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x74ad6cu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 74ad6c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 74ad70: mov eax, esi */
  eax = esi;
/* 74ad72: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74ad73: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74ad7a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74ad7d: ret  */
  esp += 4; SPILL(); return;
}

void f_74ada0(void) {
  LOAD_REGS();
L_74ada0: /* 74ada0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74ada1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74ada2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 74ada6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74ada7: mov esi, ecx */
  esi = ecx;
/* 74ada9: call 0x6c3521 */
  esp -= 4; W32(esp, 0x74adaeu); SPILL(); f_6c3521(); if (g_unwind) return; RELOAD();
/* 74adae: mov dword ptr [esi], 0xa005c0 */
  W32((uint32_t)(esi), 0xa005c0u);
/* 74adb4: mov eax, dword ptr [edi + 0x3a8] */
  eax = R32((uint32_t)(edi + 0x3a8u));
/* 74adba: mov dword ptr [esi + 0x3a8], eax */
  W32((uint32_t)(esi + 0x3a8u), eax);
/* 74adc0: mov ecx, dword ptr [edi + 0x3ac] */
  ecx = R32((uint32_t)(edi + 0x3acu));
/* 74adc6: mov dword ptr [esi + 0x3ac], ecx */
  W32((uint32_t)(esi + 0x3acu), ecx);
/* 74adcc: mov dl, byte ptr [edi + 0x3b0] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3b0u))) & 0xffu);
/* 74add2: mov byte ptr [esi + 0x3b0], dl */
  W8((uint32_t)(esi + 0x3b0u), (edx & 0xffu));
/* 74add8: mov al, byte ptr [edi + 0x3b1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3b1u))) & 0xffu);
/* 74adde: mov byte ptr [esi + 0x3b1], al */
  W8((uint32_t)(esi + 0x3b1u), (eax & 0xffu));
/* 74ade4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74ade5: mov eax, esi */
  eax = esi;
/* 74ade7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74ade8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74ae10(void) {
  LOAD_REGS();
L_74ae10: /* 74ae10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74ae11: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74ae12: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 74ae16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74ae17: mov esi, ecx */
  esi = ecx;
/* 74ae19: call 0x6cb4c9 */
  esp -= 4; W32(esp, 0x74ae1eu); SPILL(); f_6cb4c9(); if (g_unwind) return; RELOAD();
/* 74ae1e: mov eax, dword ptr [edi + 0x3a8] */
  eax = R32((uint32_t)(edi + 0x3a8u));
/* 74ae24: mov dword ptr [esi + 0x3a8], eax */
  W32((uint32_t)(esi + 0x3a8u), eax);
/* 74ae2a: mov ecx, dword ptr [edi + 0x3ac] */
  ecx = R32((uint32_t)(edi + 0x3acu));
/* 74ae30: mov dword ptr [esi + 0x3ac], ecx */
  W32((uint32_t)(esi + 0x3acu), ecx);
/* 74ae36: mov dl, byte ptr [edi + 0x3b0] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3b0u))) & 0xffu);
/* 74ae3c: mov byte ptr [esi + 0x3b0], dl */
  W8((uint32_t)(esi + 0x3b0u), (edx & 0xffu));
/* 74ae42: mov al, byte ptr [edi + 0x3b1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3b1u))) & 0xffu);
/* 74ae48: mov byte ptr [esi + 0x3b1], al */
  W8((uint32_t)(esi + 0x3b1u), (eax & 0xffu));
/* 74ae4e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74ae4f: mov eax, esi */
  eax = esi;
/* 74ae51: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74ae52: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74ae80(void) {
  LOAD_REGS();
L_74ae80: /* 74ae80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74ae81: mov esi, ecx */
  esi = ecx;
/* 74ae83: call 0x6cbdb1 */
  esp -= 4; W32(esp, 0x74ae88u); SPILL(); f_6cbdb1(); if (g_unwind) return; RELOAD();
/* 74ae88: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74ae8d: je 0x74ae9e */
  if (zf) goto L_74ae9e;
L_74ae8f: /* 74ae8f: push 0x3b4 */
  { uint32_t v = 0x3b4u; esp -= 4; W32(esp, v); }
/* 74ae94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74ae95: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74ae9bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74ae9b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74ae9e: /* 74ae9e: mov eax, esi */
  eax = esi;
/* 74aea0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74aea1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74aec0(void) {
  LOAD_REGS();
L_74aec0: /* 74aec0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 74aec1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 74aec5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74aec8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74aec9: mov esi, ecx */
  esi = ecx;
/* 74aecb: je 0x74af00 */
  if (zf) goto L_74af00;
L_74aecd: /* 74aecd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 74aed0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74aed1: push 0x6cbdb1 */
  { uint32_t v = 0x6cbdb1u; esp -= 4; W32(esp, v); }
/* 74aed6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 74aed9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74aeda: push 0x3b4 */
  { uint32_t v = 0x3b4u; esp -= 4; W32(esp, v); }
/* 74aedf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74aee0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x74aee5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 74aee5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74aee8: je 0x74aef8 */
  if (zf) goto L_74aef8;
L_74aeea: /* 74aeea: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 74aef0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 74aef2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 74aef4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74aef5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x74aef8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_74aef8: /* 74aef8: mov eax, edi */
  eax = edi;
/* 74aefa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74aefb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74aefc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74aefd: ret 4 */
  esp += 8; SPILL(); return;
L_74af00: /* 74af00: mov ecx, esi */
  ecx = esi;
/* 74af02: call 0x6cbdb1 */
  esp -= 4; W32(esp, 0x74af07u); SPILL(); f_6cbdb1(); if (g_unwind) return; RELOAD();
/* 74af07: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74af0a: je 0x74af1b */
  if (zf) goto L_74af1b;
L_74af0c: /* 74af0c: push 0x3b4 */
  { uint32_t v = 0x3b4u; esp -= 4; W32(esp, v); }
/* 74af11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74af12: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74af18u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74af18: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74af1b: /* 74af1b: mov eax, esi */
  eax = esi;
/* 74af1d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74af1e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74af1f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74af50(void) {
  LOAD_REGS();
L_74af50: /* 74af50: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 74af52: push 0x9c7a08 */
  { uint32_t v = 0x9c7a08u; esp -= 4; W32(esp, v); }
/* 74af57: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74af5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74af5e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 74af65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74af66: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74af67: mov esi, ecx */
  esi = ecx;
/* 74af69: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74af6d: mov dword ptr [esi], 0xa007e8 */
  W32((uint32_t)(esi), 0xa007e8u);
/* 74af73: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 74af7b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x74af81u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 74af81: mov ecx, esi */
  ecx = esi;
/* 74af83: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 74af8b: call 0x6c57d6 */
  esp -= 4; W32(esp, 0x74af90u); SPILL(); f_6c57d6(); if (g_unwind) return; RELOAD();
/* 74af90: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 74af94: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74af95: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74af9c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74af9f: ret  */
  esp += 4; SPILL(); return;
}

void f_74afc0(void) {
  LOAD_REGS();
L_74afc0: /* 74afc0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 74afc2: push 0x9c7a28 */
  { uint32_t v = 0x9c7a28u; esp -= 4; W32(esp, v); }
/* 74afc7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74afcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74afce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 74afd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74afd6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74afd7: mov esi, ecx */
  esi = ecx;
/* 74afd9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74afdd: call 0x6c6d43 */
  esp -= 4; W32(esp, 0x74afe2u); SPILL(); f_6c6d43(); if (g_unwind) return; RELOAD();
/* 74afe2: lea ecx, [esi + 0x3a8] */
  ecx = (uint32_t)(esi + 0x3a8u);
/* 74afe8: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 74aff0: mov dword ptr [esi], 0xa007e8 */
  W32((uint32_t)(esi), 0xa007e8u);
/* 74aff6: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x74affcu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 74affc: lea ecx, [esi + 0x3b0] */
  ecx = (uint32_t)(esi + 0x3b0u);
/* 74b002: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x74b008u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 74b008: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 74b00c: mov eax, esi */
  eax = esi;
/* 74b00e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74b00f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74b016: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74b019: ret  */
  esp += 4; SPILL(); return;
}

void f_74b040(void) {
  LOAD_REGS();
L_74b040: /* 74b040: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74b041: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74b042: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 74b046: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74b047: mov esi, ecx */
  esi = ecx;
/* 74b049: call 0x6c3521 */
  esp -= 4; W32(esp, 0x74b04eu); SPILL(); f_6c3521(); if (g_unwind) return; RELOAD();
/* 74b04e: mov dword ptr [esi], 0xa007e8 */
  W32((uint32_t)(esi), 0xa007e8u);
/* 74b054: mov eax, dword ptr [edi + 0x3a8] */
  eax = R32((uint32_t)(edi + 0x3a8u));
/* 74b05a: mov dword ptr [esi + 0x3a8], eax */
  W32((uint32_t)(esi + 0x3a8u), eax);
/* 74b060: mov ecx, dword ptr [edi + 0x3ac] */
  ecx = R32((uint32_t)(edi + 0x3acu));
/* 74b066: mov dword ptr [esi + 0x3ac], ecx */
  W32((uint32_t)(esi + 0x3acu), ecx);
/* 74b06c: mov edx, dword ptr [edi + 0x3b0] */
  edx = R32((uint32_t)(edi + 0x3b0u));
/* 74b072: mov dword ptr [esi + 0x3b0], edx */
  W32((uint32_t)(esi + 0x3b0u), edx);
/* 74b078: mov eax, dword ptr [edi + 0x3b4] */
  eax = R32((uint32_t)(edi + 0x3b4u));
/* 74b07e: mov dword ptr [esi + 0x3b4], eax */
  W32((uint32_t)(esi + 0x3b4u), eax);
/* 74b084: mov ecx, dword ptr [edi + 0x3b8] */
  ecx = R32((uint32_t)(edi + 0x3b8u));
/* 74b08a: mov dword ptr [esi + 0x3b8], ecx */
  W32((uint32_t)(esi + 0x3b8u), ecx);
/* 74b090: add edi, 0x3bc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3bcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 74b096: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 74b098: lea edx, [esi + 0x3bc] */
  edx = (uint32_t)(esi + 0x3bcu);
/* 74b09e: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 74b0a0: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 74b0a3: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 74b0a6: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 74b0a9: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 74b0ac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74b0ad: mov eax, esi */
  eax = esi;
/* 74b0af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74b0b0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74b0e0(void) {
  LOAD_REGS();
L_74b0e0: /* 74b0e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74b0e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74b0e2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 74b0e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74b0e7: mov esi, ecx */
  esi = ecx;
/* 74b0e9: call 0x6cb4c9 */
  esp -= 4; W32(esp, 0x74b0eeu); SPILL(); f_6cb4c9(); if (g_unwind) return; RELOAD();
/* 74b0ee: mov eax, dword ptr [edi + 0x3a8] */
  eax = R32((uint32_t)(edi + 0x3a8u));
/* 74b0f4: mov dword ptr [esi + 0x3a8], eax */
  W32((uint32_t)(esi + 0x3a8u), eax);
/* 74b0fa: mov ecx, dword ptr [edi + 0x3ac] */
  ecx = R32((uint32_t)(edi + 0x3acu));
/* 74b100: mov dword ptr [esi + 0x3ac], ecx */
  W32((uint32_t)(esi + 0x3acu), ecx);
/* 74b106: mov edx, dword ptr [edi + 0x3b0] */
  edx = R32((uint32_t)(edi + 0x3b0u));
/* 74b10c: mov dword ptr [esi + 0x3b0], edx */
  W32((uint32_t)(esi + 0x3b0u), edx);
/* 74b112: mov eax, dword ptr [edi + 0x3b4] */
  eax = R32((uint32_t)(edi + 0x3b4u));
/* 74b118: mov dword ptr [esi + 0x3b4], eax */
  W32((uint32_t)(esi + 0x3b4u), eax);
/* 74b11e: mov ecx, dword ptr [edi + 0x3b8] */
  ecx = R32((uint32_t)(edi + 0x3b8u));
/* 74b124: mov dword ptr [esi + 0x3b8], ecx */
  W32((uint32_t)(esi + 0x3b8u), ecx);
/* 74b12a: add edi, 0x3bc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3bcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 74b130: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 74b132: lea edx, [esi + 0x3bc] */
  edx = (uint32_t)(esi + 0x3bcu);
/* 74b138: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 74b13a: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 74b13d: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 74b140: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 74b143: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 74b146: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74b147: mov eax, esi */
  eax = esi;
/* 74b149: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74b14a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74b170(void) {
  LOAD_REGS();
L_74b170: /* 74b170: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74b171: mov esi, ecx */
  esi = ecx;
/* 74b173: call 0x6ccc3e */
  esp -= 4; W32(esp, 0x74b178u); SPILL(); f_6ccc3e(); if (g_unwind) return; RELOAD();
/* 74b178: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74b17d: je 0x74b18e */
  if (zf) goto L_74b18e;
L_74b17f: /* 74b17f: push 0x3c8 */
  { uint32_t v = 0x3c8u; esp -= 4; W32(esp, v); }
/* 74b184: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74b185: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74b18bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74b18b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74b18e: /* 74b18e: mov eax, esi */
  eax = esi;
/* 74b190: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74b191: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74b1b0(void) {
  LOAD_REGS();
L_74b1b0: /* 74b1b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 74b1b1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 74b1b5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74b1b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74b1b9: mov esi, ecx */
  esi = ecx;
/* 74b1bb: je 0x74b1f0 */
  if (zf) goto L_74b1f0;
L_74b1bd: /* 74b1bd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 74b1c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74b1c1: push 0x6ccc3e */
  { uint32_t v = 0x6ccc3eu; esp -= 4; W32(esp, v); }
/* 74b1c6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 74b1c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74b1ca: push 0x3c8 */
  { uint32_t v = 0x3c8u; esp -= 4; W32(esp, v); }
/* 74b1cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74b1d0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x74b1d5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 74b1d5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74b1d8: je 0x74b1e8 */
  if (zf) goto L_74b1e8;
L_74b1da: /* 74b1da: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 74b1e0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 74b1e2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 74b1e4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74b1e5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x74b1e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_74b1e8: /* 74b1e8: mov eax, edi */
  eax = edi;
/* 74b1ea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74b1eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74b1ec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74b1ed: ret 4 */
  esp += 8; SPILL(); return;
L_74b1f0: /* 74b1f0: mov ecx, esi */
  ecx = esi;
/* 74b1f2: call 0x6ccc3e */
  esp -= 4; W32(esp, 0x74b1f7u); SPILL(); f_6ccc3e(); if (g_unwind) return; RELOAD();
/* 74b1f7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74b1fa: je 0x74b20b */
  if (zf) goto L_74b20b;
L_74b1fc: /* 74b1fc: push 0x3c8 */
  { uint32_t v = 0x3c8u; esp -= 4; W32(esp, v); }
/* 74b201: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74b202: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74b208u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74b208: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74b20b: /* 74b20b: mov eax, esi */
  eax = esi;
/* 74b20d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74b20e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74b20f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74b240(void) {
  LOAD_REGS();
L_74b240: /* 74b240: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 74b242: push 0x9c7a48 */
  { uint32_t v = 0x9c7a48u; esp -= 4; W32(esp, v); }
/* 74b247: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74b24d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74b24e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 74b255: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74b256: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74b257: mov esi, ecx */
  esi = ecx;
/* 74b259: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74b25d: mov dword ptr [esi], 0xa00a10 */
  W32((uint32_t)(esi), 0xa00a10u);
/* 74b263: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 74b26b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x74b271u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 74b271: mov ecx, esi */
  ecx = esi;
/* 74b273: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 74b27b: call 0x6c57d6 */
  esp -= 4; W32(esp, 0x74b280u); SPILL(); f_6c57d6(); if (g_unwind) return; RELOAD();
/* 74b280: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 74b284: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74b285: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74b28c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74b28f: ret  */
  esp += 4; SPILL(); return;
}

void f_74b2b0(void) {
  LOAD_REGS();
L_74b2b0: /* 74b2b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74b2b1: mov esi, ecx */
  esi = ecx;
/* 74b2b3: call 0x6c6d43 */
  esp -= 4; W32(esp, 0x74b2b8u); SPILL(); f_6c6d43(); if (g_unwind) return; RELOAD();
/* 74b2b8: mov dword ptr [esi], 0xa00a10 */
  W32((uint32_t)(esi), 0xa00a10u);
/* 74b2be: mov eax, esi */
  eax = esi;
/* 74b2c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74b2c1: ret  */
  esp += 4; SPILL(); return;
}

void f_74b2e0(void) {
  LOAD_REGS();
L_74b2e0: /* 74b2e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 74b2e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74b2e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74b2e6: mov esi, ecx */
  esi = ecx;
/* 74b2e8: call 0x6c3521 */
  esp -= 4; W32(esp, 0x74b2edu); SPILL(); f_6c3521(); if (g_unwind) return; RELOAD();
/* 74b2ed: mov dword ptr [esi], 0xa00a10 */
  W32((uint32_t)(esi), 0xa00a10u);
/* 74b2f3: mov eax, esi */
  eax = esi;
/* 74b2f5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74b2f6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74b310(void) {
  LOAD_REGS();
L_74b310: /* 74b310: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 74b314: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74b315: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74b316: mov esi, ecx */
  esi = ecx;
/* 74b318: call 0x6cb4c9 */
  esp -= 4; W32(esp, 0x74b31du); SPILL(); f_6cb4c9(); if (g_unwind) return; RELOAD();
/* 74b31d: mov eax, esi */
  eax = esi;
/* 74b31f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74b320: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74b340(void) {
  LOAD_REGS();
L_74b340: /* 74b340: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74b341: mov esi, ecx */
  esi = ecx;
/* 74b343: call 0x6c4be2 */
  esp -= 4; W32(esp, 0x74b348u); SPILL(); f_6c4be2(); if (g_unwind) return; RELOAD();
/* 74b348: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74b34d: je 0x74b35e */
  if (zf) goto L_74b35e;
L_74b34f: /* 74b34f: push 0x3a8 */
  { uint32_t v = 0x3a8u; esp -= 4; W32(esp, v); }
/* 74b354: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74b355: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74b35bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74b35b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74b35e: /* 74b35e: mov eax, esi */
  eax = esi;
/* 74b360: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74b361: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74b380(void) {
  LOAD_REGS();
L_74b380: /* 74b380: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 74b381: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 74b385: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74b388: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74b389: mov esi, ecx */
  esi = ecx;
/* 74b38b: je 0x74b3c0 */
  if (zf) goto L_74b3c0;
L_74b38d: /* 74b38d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 74b390: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74b391: push 0x6c4be2 */
  { uint32_t v = 0x6c4be2u; esp -= 4; W32(esp, v); }
/* 74b396: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 74b399: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74b39a: push 0x3a8 */
  { uint32_t v = 0x3a8u; esp -= 4; W32(esp, v); }
/* 74b39f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74b3a0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x74b3a5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 74b3a5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74b3a8: je 0x74b3b8 */
  if (zf) goto L_74b3b8;
L_74b3aa: /* 74b3aa: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 74b3b0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 74b3b2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 74b3b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74b3b5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x74b3b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_74b3b8: /* 74b3b8: mov eax, edi */
  eax = edi;
/* 74b3ba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74b3bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74b3bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74b3bd: ret 4 */
  esp += 8; SPILL(); return;
L_74b3c0: /* 74b3c0: mov ecx, esi */
  ecx = esi;
/* 74b3c2: call 0x6c4be2 */
  esp -= 4; W32(esp, 0x74b3c7u); SPILL(); f_6c4be2(); if (g_unwind) return; RELOAD();
/* 74b3c7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74b3ca: je 0x74b3db */
  if (zf) goto L_74b3db;
L_74b3cc: /* 74b3cc: push 0x3a8 */
  { uint32_t v = 0x3a8u; esp -= 4; W32(esp, v); }
/* 74b3d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74b3d2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74b3d8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74b3d8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74b3db: /* 74b3db: mov eax, esi */
  eax = esi;
/* 74b3dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74b3de: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74b3df: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74b410(void) {
  LOAD_REGS();
L_74b410: /* 74b410: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 74b412: push 0x9c7a86 */
  { uint32_t v = 0x9c7a86u; esp -= 4; W32(esp, v); }
/* 74b417: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74b41d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74b41e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 74b425: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74b426: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74b427: mov esi, ecx */
  esi = ecx;
/* 74b429: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74b42d: mov dword ptr [esi], 0xa00c38 */
  W32((uint32_t)(esi), 0xa00c38u);
/* 74b433: mov dword ptr [esp + 0x10], 2 */
  W32((uint32_t)(esp + 0x10u), 0x2u);
/* 74b43b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x74b441u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 74b441: lea ecx, [esi + 0x368] */
  ecx = (uint32_t)(esi + 0x368u);
/* 74b447: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 74b44c: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x74b452u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 74b452: lea ecx, [esi + 0x358] */
  ecx = (uint32_t)(esi + 0x358u);
/* 74b458: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 74b45d: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x74b463u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 74b463: mov ecx, esi */
  ecx = esi;
/* 74b465: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 74b46d: call 0x6c60a5 */
  esp -= 4; W32(esp, 0x74b472u); SPILL(); f_6c60a5(); if (g_unwind) return; RELOAD();
/* 74b472: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 74b476: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74b477: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74b47e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74b481: ret  */
  esp += 4; SPILL(); return;
}

void f_74b4b0(void) {
  LOAD_REGS();
L_74b4b0: /* 74b4b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 74b4b2: push 0x9c7ab7 */
  { uint32_t v = 0x9c7ab7u; esp -= 4; W32(esp, v); }
/* 74b4b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74b4bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74b4be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 74b4c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74b4c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74b4c7: mov esi, ecx */
  esi = ecx;
/* 74b4c9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74b4cd: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x74b4d2u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 74b4d2: lea ecx, [esi + 0x358] */
  ecx = (uint32_t)(esi + 0x358u);
/* 74b4d8: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 74b4e0: mov dword ptr [esi], 0xa00c38 */
  W32((uint32_t)(esi), 0xa00c38u);
/* 74b4e6: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x74b4ecu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 74b4ec: lea ecx, [esi + 0x368] */
  ecx = (uint32_t)(esi + 0x368u);
/* 74b4f2: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 74b4f7: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x74b4fdu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 74b4fd: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 74b501: mov eax, esi */
  eax = esi;
/* 74b503: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74b504: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74b50b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74b50e: ret  */
  esp += 4; SPILL(); return;
}

void f_74b530(void) {
  LOAD_REGS();
L_74b530: /* 74b530: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 74b532: push 0x9c7ae7 */
  { uint32_t v = 0x9c7ae7u; esp -= 4; W32(esp, v); }
/* 74b537: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74b53d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74b53e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 74b545: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74b546: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74b547: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74b548: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 74b54c: mov esi, ecx */
  esi = ecx;
/* 74b54e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74b54f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 74b553: call 0x6c1456 */
  esp -= 4; W32(esp, 0x74b558u); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 74b558: mov dword ptr [esi], 0xa00c38 */
  W32((uint32_t)(esi), 0xa00c38u);
/* 74b55e: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 74b564: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 74b56a: mov ecx, dword ptr [edi + 0x340] */
  ecx = R32((uint32_t)(edi + 0x340u));
/* 74b570: mov dword ptr [esi + 0x340], ecx */
  W32((uint32_t)(esi + 0x340u), ecx);
/* 74b576: mov edx, dword ptr [edi + 0x344] */
  edx = R32((uint32_t)(edi + 0x344u));
/* 74b57c: mov ecx, dword ptr [esi + 0x34c] */
  ecx = R32((uint32_t)(esi + 0x34cu));
/* 74b582: mov dword ptr [esi + 0x344], edx */
  W32((uint32_t)(esi + 0x344u), edx);
/* 74b588: mov eax, dword ptr [edi + 0x348] */
  eax = R32((uint32_t)(edi + 0x348u));
/* 74b58e: mov dword ptr [esi + 0x348], eax */
  W32((uint32_t)(esi + 0x348u), eax);
/* 74b594: xor ecx, dword ptr [edi + 0x34c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x34cu)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74b59a: mov eax, dword ptr [esi + 0x34c] */
  eax = R32((uint32_t)(esi + 0x34cu));
/* 74b5a0: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74b5a3: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74b5a5: mov dword ptr [esi + 0x34c], eax */
  W32((uint32_t)(esi + 0x34cu), eax);
/* 74b5ab: mov ecx, eax */
  ecx = eax;
/* 74b5ad: mov eax, dword ptr [edi + 0x34c] */
  eax = R32((uint32_t)(edi + 0x34cu));
/* 74b5b3: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74b5b5: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74b5b8: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74b5ba: mov dword ptr [esi + 0x34c], eax */
  W32((uint32_t)(esi + 0x34cu), eax);
/* 74b5c0: mov ecx, dword ptr [edi + 0x34c] */
  ecx = R32((uint32_t)(edi + 0x34cu));
/* 74b5c6: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74b5c8: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74b5cb: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74b5cd: mov dword ptr [esi + 0x34c], ecx */
  W32((uint32_t)(esi + 0x34cu), ecx);
/* 74b5d3: mov eax, dword ptr [edi + 0x34c] */
  eax = R32((uint32_t)(edi + 0x34cu));
/* 74b5d9: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74b5db: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74b5de: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74b5e0: mov dword ptr [esi + 0x34c], eax */
  W32((uint32_t)(esi + 0x34cu), eax);
/* 74b5e6: mov edx, dword ptr [edi + 0x34c] */
  edx = R32((uint32_t)(edi + 0x34cu));
/* 74b5ec: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74b5ee: and edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 74b5f1: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74b5f3: mov dword ptr [esi + 0x34c], edx */
  W32((uint32_t)(esi + 0x34cu), edx);
/* 74b5f9: mov eax, dword ptr [edi + 0x350] */
  eax = R32((uint32_t)(edi + 0x350u));
/* 74b5ff: mov dword ptr [esi + 0x350], eax */
  W32((uint32_t)(esi + 0x350u), eax);
/* 74b605: mov ecx, dword ptr [edi + 0x354] */
  ecx = R32((uint32_t)(edi + 0x354u));
/* 74b60b: lea edx, [edi + 0x358] */
  edx = (uint32_t)(edi + 0x358u);
/* 74b611: mov dword ptr [esi + 0x354], ecx */
  W32((uint32_t)(esi + 0x354u), ecx);
/* 74b617: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 74b618: lea ecx, [esi + 0x358] */
  ecx = (uint32_t)(esi + 0x358u);
/* 74b61e: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 74b626: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x74b62cu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 74b62c: mov eax, dword ptr [edi + 0x364] */
  eax = R32((uint32_t)(edi + 0x364u));
/* 74b632: add edi, 0x368 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x368u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 74b638: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74b639: lea ecx, [esi + 0x368] */
  ecx = (uint32_t)(esi + 0x368u);
/* 74b63f: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 74b644: mov dword ptr [esi + 0x364], eax */
  W32((uint32_t)(esi + 0x364u), eax);
/* 74b64a: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x74b650u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 74b650: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 74b654: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74b655: mov eax, esi */
  eax = esi;
/* 74b657: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74b658: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74b65f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74b662: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74b6c0(void) {
  LOAD_REGS();
L_74b6c0: /* 74b6c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74b6c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74b6c2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 74b6c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74b6c7: mov esi, ecx */
  esi = ecx;
/* 74b6c9: call 0x6c5cef */
  esp -= 4; W32(esp, 0x74b6ceu); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 74b6ce: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 74b6d4: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 74b6da: mov ecx, dword ptr [edi + 0x340] */
  ecx = R32((uint32_t)(edi + 0x340u));
/* 74b6e0: mov dword ptr [esi + 0x340], ecx */
  W32((uint32_t)(esi + 0x340u), ecx);
/* 74b6e6: mov edx, dword ptr [edi + 0x344] */
  edx = R32((uint32_t)(edi + 0x344u));
/* 74b6ec: mov ecx, dword ptr [esi + 0x34c] */
  ecx = R32((uint32_t)(esi + 0x34cu));
/* 74b6f2: mov dword ptr [esi + 0x344], edx */
  W32((uint32_t)(esi + 0x344u), edx);
/* 74b6f8: mov eax, dword ptr [edi + 0x348] */
  eax = R32((uint32_t)(edi + 0x348u));
/* 74b6fe: mov dword ptr [esi + 0x348], eax */
  W32((uint32_t)(esi + 0x348u), eax);
/* 74b704: xor ecx, dword ptr [edi + 0x34c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x34cu)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74b70a: mov eax, dword ptr [esi + 0x34c] */
  eax = R32((uint32_t)(esi + 0x34cu));
/* 74b710: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74b713: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74b715: mov dword ptr [esi + 0x34c], eax */
  W32((uint32_t)(esi + 0x34cu), eax);
/* 74b71b: mov ecx, eax */
  ecx = eax;
/* 74b71d: mov eax, dword ptr [edi + 0x34c] */
  eax = R32((uint32_t)(edi + 0x34cu));
/* 74b723: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74b725: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74b728: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74b72a: mov dword ptr [esi + 0x34c], eax */
  W32((uint32_t)(esi + 0x34cu), eax);
/* 74b730: mov ecx, dword ptr [edi + 0x34c] */
  ecx = R32((uint32_t)(edi + 0x34cu));
/* 74b736: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74b738: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74b73b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74b73d: mov dword ptr [esi + 0x34c], ecx */
  W32((uint32_t)(esi + 0x34cu), ecx);
/* 74b743: mov eax, dword ptr [edi + 0x34c] */
  eax = R32((uint32_t)(edi + 0x34cu));
/* 74b749: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74b74b: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74b74e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74b750: mov dword ptr [esi + 0x34c], eax */
  W32((uint32_t)(esi + 0x34cu), eax);
/* 74b756: mov edx, dword ptr [edi + 0x34c] */
  edx = R32((uint32_t)(edi + 0x34cu));
/* 74b75c: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74b75e: and edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 74b761: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74b763: mov dword ptr [esi + 0x34c], edx */
  W32((uint32_t)(esi + 0x34cu), edx);
/* 74b769: mov eax, dword ptr [edi + 0x350] */
  eax = R32((uint32_t)(edi + 0x350u));
/* 74b76f: mov dword ptr [esi + 0x350], eax */
  W32((uint32_t)(esi + 0x350u), eax);
/* 74b775: mov ecx, dword ptr [edi + 0x354] */
  ecx = R32((uint32_t)(edi + 0x354u));
/* 74b77b: lea edx, [edi + 0x358] */
  edx = (uint32_t)(edi + 0x358u);
/* 74b781: mov dword ptr [esi + 0x354], ecx */
  W32((uint32_t)(esi + 0x354u), ecx);
/* 74b787: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 74b788: lea ecx, [esi + 0x358] */
  ecx = (uint32_t)(esi + 0x358u);
/* 74b78e: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x74b794u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 74b794: mov eax, dword ptr [edi + 0x364] */
  eax = R32((uint32_t)(edi + 0x364u));
/* 74b79a: add edi, 0x368 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x368u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 74b7a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74b7a1: lea ecx, [esi + 0x368] */
  ecx = (uint32_t)(esi + 0x368u);
/* 74b7a7: mov dword ptr [esi + 0x364], eax */
  W32((uint32_t)(esi + 0x364u), eax);
/* 74b7ad: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x74b7b3u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 74b7b3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74b7b4: mov eax, esi */
  eax = esi;
/* 74b7b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74b7b7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74b800(void) {
  LOAD_REGS();
L_74b800: /* 74b800: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74b801: mov esi, ecx */
  esi = ecx;
/* 74b803: call 0x6c8bb1 */
  esp -= 4; W32(esp, 0x74b808u); SPILL(); f_6c8bb1(); if (g_unwind) return; RELOAD();
/* 74b808: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74b80d: je 0x74b81e */
  if (zf) goto L_74b81e;
L_74b80f: /* 74b80f: push 0x374 */
  { uint32_t v = 0x374u; esp -= 4; W32(esp, v); }
/* 74b814: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74b815: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74b81bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74b81b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74b81e: /* 74b81e: mov eax, esi */
  eax = esi;
/* 74b820: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74b821: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74b840(void) {
  LOAD_REGS();
L_74b840: /* 74b840: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 74b841: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 74b845: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74b848: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74b849: mov esi, ecx */
  esi = ecx;
/* 74b84b: je 0x74b880 */
  if (zf) goto L_74b880;
L_74b84d: /* 74b84d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 74b850: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74b851: push 0x6c8bb1 */
  { uint32_t v = 0x6c8bb1u; esp -= 4; W32(esp, v); }
/* 74b856: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 74b859: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74b85a: push 0x374 */
  { uint32_t v = 0x374u; esp -= 4; W32(esp, v); }
/* 74b85f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74b860: call 0x99ca3d */
  esp -= 4; W32(esp, 0x74b865u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 74b865: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74b868: je 0x74b878 */
  if (zf) goto L_74b878;
L_74b86a: /* 74b86a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 74b870: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 74b872: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 74b874: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74b875: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x74b878u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_74b878: /* 74b878: mov eax, edi */
  eax = edi;
/* 74b87a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74b87b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74b87c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74b87d: ret 4 */
  esp += 8; SPILL(); return;
L_74b880: /* 74b880: mov ecx, esi */
  ecx = esi;
/* 74b882: call 0x6c8bb1 */
  esp -= 4; W32(esp, 0x74b887u); SPILL(); f_6c8bb1(); if (g_unwind) return; RELOAD();
/* 74b887: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74b88a: je 0x74b89b */
  if (zf) goto L_74b89b;
L_74b88c: /* 74b88c: push 0x374 */
  { uint32_t v = 0x374u; esp -= 4; W32(esp, v); }
/* 74b891: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74b892: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74b898u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74b898: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74b89b: /* 74b89b: mov eax, esi */
  eax = esi;
/* 74b89d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74b89e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74b89f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74b8d0(void) {
  LOAD_REGS();
L_74b8d0: /* 74b8d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 74b8d2: push 0x9c7b08 */
  { uint32_t v = 0x9c7b08u; esp -= 4; W32(esp, v); }
/* 74b8d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74b8dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74b8de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 74b8e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74b8e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74b8e7: mov esi, ecx */
  esi = ecx;
/* 74b8e9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74b8ed: mov dword ptr [esi], 0xa00e18 */
  W32((uint32_t)(esi), 0xa00e18u);
/* 74b8f3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 74b8fb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x74b901u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 74b901: mov ecx, esi */
  ecx = esi;
/* 74b903: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 74b90b: call 0x6c8bb1 */
  esp -= 4; W32(esp, 0x74b910u); SPILL(); f_6c8bb1(); if (g_unwind) return; RELOAD();
/* 74b910: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 74b914: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74b915: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74b91c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74b91f: ret  */
  esp += 4; SPILL(); return;
}

void f_74b940(void) {
  LOAD_REGS();
L_74b940: /* 74b940: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74b941: mov esi, ecx */
  esi = ecx;
/* 74b943: call 0x6c6fa0 */
  esp -= 4; W32(esp, 0x74b948u); SPILL(); f_6c6fa0(); if (g_unwind) return; RELOAD();
/* 74b948: mov dword ptr [esi], 0xa00e18 */
  W32((uint32_t)(esi), 0xa00e18u);
/* 74b94e: mov eax, esi */
  eax = esi;
/* 74b950: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74b951: ret  */
  esp += 4; SPILL(); return;
}

void f_74b970(void) {
  LOAD_REGS();
L_74b970: /* 74b970: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74b971: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74b972: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 74b976: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74b977: mov esi, ecx */
  esi = ecx;
/* 74b979: call 0x6cade4 */
  esp -= 4; W32(esp, 0x74b97eu); SPILL(); f_6cade4(); if (g_unwind) return; RELOAD();
/* 74b97e: mov dword ptr [esi], 0xa00e18 */
  W32((uint32_t)(esi), 0xa00e18u);
/* 74b984: mov eax, dword ptr [edi + 0x374] */
  eax = R32((uint32_t)(edi + 0x374u));
/* 74b98a: mov dword ptr [esi + 0x374], eax */
  W32((uint32_t)(esi + 0x374u), eax);
/* 74b990: mov ecx, dword ptr [edi + 0x378] */
  ecx = R32((uint32_t)(edi + 0x378u));
/* 74b996: mov eax, dword ptr [esi + 0x378] */
  eax = R32((uint32_t)(esi + 0x378u));
/* 74b99c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74b99e: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74b9a1: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74b9a3: mov dword ptr [esi + 0x378], eax */
  W32((uint32_t)(esi + 0x378u), eax);
/* 74b9a9: mov edx, dword ptr [edi + 0x37c] */
  edx = R32((uint32_t)(edi + 0x37cu));
/* 74b9af: mov dword ptr [esi + 0x37c], edx */
  W32((uint32_t)(esi + 0x37cu), edx);
/* 74b9b5: mov eax, dword ptr [edi + 0x380] */
  eax = R32((uint32_t)(edi + 0x380u));
/* 74b9bb: mov dword ptr [esi + 0x380], eax */
  W32((uint32_t)(esi + 0x380u), eax);
/* 74b9c1: mov cl, byte ptr [edi + 0x384] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x384u))) & 0xffu);
/* 74b9c7: mov byte ptr [esi + 0x384], cl */
  W8((uint32_t)(esi + 0x384u), (ecx & 0xffu));
/* 74b9cd: mov dl, byte ptr [edi + 0x385] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x385u))) & 0xffu);
/* 74b9d3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74b9d4: mov byte ptr [esi + 0x385], dl */
  W8((uint32_t)(esi + 0x385u), (edx & 0xffu));
/* 74b9da: mov eax, esi */
  eax = esi;
/* 74b9dc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74b9dd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74ba00(void) {
  LOAD_REGS();
L_74ba00: /* 74ba00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74ba01: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74ba02: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 74ba06: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74ba07: mov esi, ecx */
  esi = ecx;
/* 74ba09: call 0x6c8b02 */
  esp -= 4; W32(esp, 0x74ba0eu); SPILL(); f_6c8b02(); if (g_unwind) return; RELOAD();
/* 74ba0e: mov eax, dword ptr [edi + 0x374] */
  eax = R32((uint32_t)(edi + 0x374u));
/* 74ba14: mov dword ptr [esi + 0x374], eax */
  W32((uint32_t)(esi + 0x374u), eax);
/* 74ba1a: mov ecx, dword ptr [edi + 0x378] */
  ecx = R32((uint32_t)(edi + 0x378u));
/* 74ba20: mov eax, dword ptr [esi + 0x378] */
  eax = R32((uint32_t)(esi + 0x378u));
/* 74ba26: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74ba28: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74ba2b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74ba2d: mov dword ptr [esi + 0x378], eax */
  W32((uint32_t)(esi + 0x378u), eax);
/* 74ba33: mov edx, dword ptr [edi + 0x37c] */
  edx = R32((uint32_t)(edi + 0x37cu));
/* 74ba39: mov dword ptr [esi + 0x37c], edx */
  W32((uint32_t)(esi + 0x37cu), edx);
/* 74ba3f: mov eax, dword ptr [edi + 0x380] */
  eax = R32((uint32_t)(edi + 0x380u));
/* 74ba45: mov dword ptr [esi + 0x380], eax */
  W32((uint32_t)(esi + 0x380u), eax);
/* 74ba4b: mov cl, byte ptr [edi + 0x384] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x384u))) & 0xffu);
/* 74ba51: mov byte ptr [esi + 0x384], cl */
  W8((uint32_t)(esi + 0x384u), (ecx & 0xffu));
/* 74ba57: mov dl, byte ptr [edi + 0x385] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x385u))) & 0xffu);
/* 74ba5d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74ba5e: mov byte ptr [esi + 0x385], dl */
  W8((uint32_t)(esi + 0x385u), (edx & 0xffu));
/* 74ba64: mov eax, esi */
  eax = esi;
/* 74ba66: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74ba67: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74ba90(void) {
  LOAD_REGS();
L_74ba90: /* 74ba90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74ba91: mov esi, ecx */
  esi = ecx;
/* 74ba93: call 0x6cb032 */
  esp -= 4; W32(esp, 0x74ba98u); SPILL(); f_6cb032(); if (g_unwind) return; RELOAD();
/* 74ba98: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74ba9d: je 0x74baae */
  if (zf) goto L_74baae;
L_74ba9f: /* 74ba9f: push 0x388 */
  { uint32_t v = 0x388u; esp -= 4; W32(esp, v); }
/* 74baa4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74baa5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74baabu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74baab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74baae: /* 74baae: mov eax, esi */
  eax = esi;
/* 74bab0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74bab1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74bad0(void) {
  LOAD_REGS();
L_74bad0: /* 74bad0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 74bad1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 74bad5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74bad8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74bad9: mov esi, ecx */
  esi = ecx;
/* 74badb: je 0x74bb10 */
  if (zf) goto L_74bb10;
L_74badd: /* 74badd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 74bae0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74bae1: push 0x6cb032 */
  { uint32_t v = 0x6cb032u; esp -= 4; W32(esp, v); }
/* 74bae6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 74bae9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74baea: push 0x388 */
  { uint32_t v = 0x388u; esp -= 4; W32(esp, v); }
/* 74baef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74baf0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x74baf5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 74baf5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74baf8: je 0x74bb08 */
  if (zf) goto L_74bb08;
L_74bafa: /* 74bafa: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 74bb00: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 74bb02: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 74bb04: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74bb05: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x74bb08u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_74bb08: /* 74bb08: mov eax, edi */
  eax = edi;
/* 74bb0a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74bb0b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74bb0c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74bb0d: ret 4 */
  esp += 8; SPILL(); return;
L_74bb10: /* 74bb10: mov ecx, esi */
  ecx = esi;
/* 74bb12: call 0x6cb032 */
  esp -= 4; W32(esp, 0x74bb17u); SPILL(); f_6cb032(); if (g_unwind) return; RELOAD();
/* 74bb17: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74bb1a: je 0x74bb2b */
  if (zf) goto L_74bb2b;
L_74bb1c: /* 74bb1c: push 0x388 */
  { uint32_t v = 0x388u; esp -= 4; W32(esp, v); }
/* 74bb21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74bb22: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74bb28u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74bb28: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74bb2b: /* 74bb2b: mov eax, esi */
  eax = esi;
/* 74bb2d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74bb2e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74bb2f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74bb60(void) {
  LOAD_REGS();
L_74bb60: /* 74bb60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 74bb62: push 0x9c7b28 */
  { uint32_t v = 0x9c7b28u; esp -= 4; W32(esp, v); }
/* 74bb67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74bb6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74bb6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 74bb75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74bb76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74bb77: mov esi, ecx */
  esi = ecx;
/* 74bb79: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74bb7d: mov dword ptr [esi], 0xa00ff8 */
  W32((uint32_t)(esi), 0xa00ff8u);
/* 74bb83: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 74bb8b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x74bb91u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 74bb91: mov ecx, esi */
  ecx = esi;
/* 74bb93: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 74bb9b: call 0x6c8bb1 */
  esp -= 4; W32(esp, 0x74bba0u); SPILL(); f_6c8bb1(); if (g_unwind) return; RELOAD();
/* 74bba0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 74bba4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74bba5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74bbac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74bbaf: ret  */
  esp += 4; SPILL(); return;
}

void f_74bbd0(void) {
  LOAD_REGS();
L_74bbd0: /* 74bbd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74bbd1: mov esi, ecx */
  esi = ecx;
/* 74bbd3: call 0x6c6fa0 */
  esp -= 4; W32(esp, 0x74bbd8u); SPILL(); f_6c6fa0(); if (g_unwind) return; RELOAD();
/* 74bbd8: mov dword ptr [esi], 0xa00ff8 */
  W32((uint32_t)(esi), 0xa00ff8u);
/* 74bbde: mov eax, esi */
  eax = esi;
/* 74bbe0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74bbe1: ret  */
  esp += 4; SPILL(); return;
}

void f_74bc00(void) {
  LOAD_REGS();
L_74bc00: /* 74bc00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74bc01: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74bc02: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 74bc06: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74bc07: mov esi, ecx */
  esi = ecx;
/* 74bc09: call 0x6cade4 */
  esp -= 4; W32(esp, 0x74bc0eu); SPILL(); f_6cade4(); if (g_unwind) return; RELOAD();
/* 74bc0e: mov dword ptr [esi], 0xa00ff8 */
  W32((uint32_t)(esi), 0xa00ff8u);
/* 74bc14: mov eax, dword ptr [edi + 0x374] */
  eax = R32((uint32_t)(edi + 0x374u));
/* 74bc1a: mov dword ptr [esi + 0x374], eax */
  W32((uint32_t)(esi + 0x374u), eax);
/* 74bc20: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74bc21: mov eax, esi */
  eax = esi;
/* 74bc23: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74bc24: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74bc40(void) {
  LOAD_REGS();
L_74bc40: /* 74bc40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74bc41: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74bc42: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 74bc46: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74bc47: mov esi, ecx */
  esi = ecx;
/* 74bc49: call 0x6c8b02 */
  esp -= 4; W32(esp, 0x74bc4eu); SPILL(); f_6c8b02(); if (g_unwind) return; RELOAD();
/* 74bc4e: mov eax, dword ptr [edi + 0x374] */
  eax = R32((uint32_t)(edi + 0x374u));
/* 74bc54: mov dword ptr [esi + 0x374], eax */
  W32((uint32_t)(esi + 0x374u), eax);
/* 74bc5a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74bc5b: mov eax, esi */
  eax = esi;
/* 74bc5d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74bc5e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74bc80(void) {
  LOAD_REGS();
L_74bc80: /* 74bc80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74bc81: mov esi, ecx */
  esi = ecx;
/* 74bc83: call 0x6cb5aa */
  esp -= 4; W32(esp, 0x74bc88u); SPILL(); f_6cb5aa(); if (g_unwind) return; RELOAD();
/* 74bc88: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74bc8d: je 0x74bc9e */
  if (zf) goto L_74bc9e;
L_74bc8f: /* 74bc8f: push 0x378 */
  { uint32_t v = 0x378u; esp -= 4; W32(esp, v); }
/* 74bc94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74bc95: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74bc9bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74bc9b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74bc9e: /* 74bc9e: mov eax, esi */
  eax = esi;
/* 74bca0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74bca1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74bcc0(void) {
  LOAD_REGS();
L_74bcc0: /* 74bcc0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 74bcc1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 74bcc5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74bcc8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74bcc9: mov esi, ecx */
  esi = ecx;
/* 74bccb: je 0x74bd00 */
  if (zf) goto L_74bd00;
L_74bccd: /* 74bccd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 74bcd0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74bcd1: push 0x6cb5aa */
  { uint32_t v = 0x6cb5aau; esp -= 4; W32(esp, v); }
/* 74bcd6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 74bcd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74bcda: push 0x378 */
  { uint32_t v = 0x378u; esp -= 4; W32(esp, v); }
/* 74bcdf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74bce0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x74bce5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 74bce5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74bce8: je 0x74bcf8 */
  if (zf) goto L_74bcf8;
L_74bcea: /* 74bcea: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 74bcf0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 74bcf2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 74bcf4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74bcf5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x74bcf8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_74bcf8: /* 74bcf8: mov eax, edi */
  eax = edi;
/* 74bcfa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74bcfb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74bcfc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74bcfd: ret 4 */
  esp += 8; SPILL(); return;
L_74bd00: /* 74bd00: mov ecx, esi */
  ecx = esi;
/* 74bd02: call 0x6cb5aa */
  esp -= 4; W32(esp, 0x74bd07u); SPILL(); f_6cb5aa(); if (g_unwind) return; RELOAD();
/* 74bd07: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74bd0a: je 0x74bd1b */
  if (zf) goto L_74bd1b;
L_74bd0c: /* 74bd0c: push 0x378 */
  { uint32_t v = 0x378u; esp -= 4; W32(esp, v); }
/* 74bd11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74bd12: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74bd18u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74bd18: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74bd1b: /* 74bd1b: mov eax, esi */
  eax = esi;
/* 74bd1d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74bd1e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74bd1f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74bd50(void) {
  LOAD_REGS();
L_74bd50: /* 74bd50: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 74bd52: push 0x9c7b48 */
  { uint32_t v = 0x9c7b48u; esp -= 4; W32(esp, v); }
/* 74bd57: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74bd5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74bd5e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 74bd65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74bd66: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74bd67: mov esi, ecx */
  esi = ecx;
/* 74bd69: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74bd6d: mov dword ptr [esi], 0xa011d8 */
  W32((uint32_t)(esi), 0xa011d8u);
/* 74bd73: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 74bd7b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x74bd81u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 74bd81: mov ecx, esi */
  ecx = esi;
/* 74bd83: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 74bd8b: call 0x6c60a5 */
  esp -= 4; W32(esp, 0x74bd90u); SPILL(); f_6c60a5(); if (g_unwind) return; RELOAD();
/* 74bd90: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 74bd94: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74bd95: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74bd9c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74bd9f: ret  */
  esp += 4; SPILL(); return;
}

void f_74bdc0(void) {
  LOAD_REGS();
L_74bdc0: /* 74bdc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74bdc1: mov esi, ecx */
  esi = ecx;
/* 74bdc3: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x74bdc8u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 74bdc8: mov dword ptr [esi], 0xa011d8 */
  W32((uint32_t)(esi), 0xa011d8u);
/* 74bdce: mov eax, esi */
  eax = esi;
/* 74bdd0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74bdd1: ret  */
  esp += 4; SPILL(); return;
}

void f_74bdf0(void) {
  LOAD_REGS();
L_74bdf0: /* 74bdf0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 74bdf4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74bdf5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74bdf6: mov esi, ecx */
  esi = ecx;
/* 74bdf8: call 0x6c1456 */
  esp -= 4; W32(esp, 0x74bdfdu); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 74bdfd: mov dword ptr [esi], 0xa011d8 */
  W32((uint32_t)(esi), 0xa011d8u);
/* 74be03: mov eax, esi */
  eax = esi;
/* 74be05: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74be06: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74be20(void) {
  LOAD_REGS();
L_74be20: /* 74be20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 74be24: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74be25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74be26: mov esi, ecx */
  esi = ecx;
/* 74be28: call 0x6c5cef */
  esp -= 4; W32(esp, 0x74be2du); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 74be2d: mov eax, esi */
  eax = esi;
/* 74be2f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74be30: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74be50(void) {
  LOAD_REGS();
L_74be50: /* 74be50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74be51: mov esi, ecx */
  esi = ecx;
/* 74be53: call 0x6c8ec7 */
  esp -= 4; W32(esp, 0x74be58u); SPILL(); f_6c8ec7(); if (g_unwind) return; RELOAD();
/* 74be58: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74be5d: je 0x74be6e */
  if (zf) goto L_74be6e;
L_74be5f: /* 74be5f: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 74be64: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74be65: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74be6bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74be6b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74be6e: /* 74be6e: mov eax, esi */
  eax = esi;
/* 74be70: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74be71: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74be90(void) {
  LOAD_REGS();
L_74be90: /* 74be90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 74be91: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 74be95: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74be98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74be99: mov esi, ecx */
  esi = ecx;
/* 74be9b: je 0x74bed0 */
  if (zf) goto L_74bed0;
L_74be9d: /* 74be9d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 74bea0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74bea1: push 0x6c8ec7 */
  { uint32_t v = 0x6c8ec7u; esp -= 4; W32(esp, v); }
/* 74bea6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 74bea9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74beaa: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 74beaf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74beb0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x74beb5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 74beb5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74beb8: je 0x74bec8 */
  if (zf) goto L_74bec8;
L_74beba: /* 74beba: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 74bec0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 74bec2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 74bec4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74bec5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x74bec8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_74bec8: /* 74bec8: mov eax, edi */
  eax = edi;
/* 74beca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74becb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74becc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74becd: ret 4 */
  esp += 8; SPILL(); return;
L_74bed0: /* 74bed0: mov ecx, esi */
  ecx = esi;
/* 74bed2: call 0x6c8ec7 */
  esp -= 4; W32(esp, 0x74bed7u); SPILL(); f_6c8ec7(); if (g_unwind) return; RELOAD();
/* 74bed7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74beda: je 0x74beeb */
  if (zf) goto L_74beeb;
L_74bedc: /* 74bedc: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 74bee1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74bee2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74bee8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74bee8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74beeb: /* 74beeb: mov eax, esi */
  eax = esi;
/* 74beed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74beee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74beef: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74bf20(void) {
  LOAD_REGS();
L_74bf20: /* 74bf20: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 74bf22: push 0x9c7b68 */
  { uint32_t v = 0x9c7b68u; esp -= 4; W32(esp, v); }
/* 74bf27: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74bf2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74bf2e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 74bf35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74bf36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74bf37: mov esi, ecx */
  esi = ecx;
/* 74bf39: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74bf3d: mov dword ptr [esi], 0xa013b8 */
  W32((uint32_t)(esi), 0xa013b8u);
/* 74bf43: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 74bf4b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x74bf51u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 74bf51: mov ecx, esi */
  ecx = esi;
/* 74bf53: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 74bf5b: call 0x6c60a5 */
  esp -= 4; W32(esp, 0x74bf60u); SPILL(); f_6c60a5(); if (g_unwind) return; RELOAD();
/* 74bf60: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 74bf64: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74bf65: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74bf6c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74bf6f: ret  */
  esp += 4; SPILL(); return;
}

void f_74bf90(void) {
  LOAD_REGS();
L_74bf90: /* 74bf90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74bf91: mov esi, ecx */
  esi = ecx;
/* 74bf93: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x74bf98u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 74bf98: mov dword ptr [esi], 0xa013b8 */
  W32((uint32_t)(esi), 0xa013b8u);
/* 74bf9e: mov eax, esi */
  eax = esi;
/* 74bfa0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74bfa1: ret  */
  esp += 4; SPILL(); return;
}

void f_74bfc0(void) {
  LOAD_REGS();
L_74bfc0: /* 74bfc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 74bfc4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74bfc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74bfc6: mov esi, ecx */
  esi = ecx;
/* 74bfc8: call 0x6c1456 */
  esp -= 4; W32(esp, 0x74bfcdu); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 74bfcd: mov dword ptr [esi], 0xa013b8 */
  W32((uint32_t)(esi), 0xa013b8u);
/* 74bfd3: mov eax, esi */
  eax = esi;
/* 74bfd5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74bfd6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74bff0(void) {
  LOAD_REGS();
L_74bff0: /* 74bff0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 74bff4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74bff5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74bff6: mov esi, ecx */
  esi = ecx;
/* 74bff8: call 0x6c5cef */
  esp -= 4; W32(esp, 0x74bffdu); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 74bffd: mov eax, esi */
  eax = esi;
/* 74bfff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74c000: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74c020(void) {
  LOAD_REGS();
L_74c020: /* 74c020: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74c021: mov esi, ecx */
  esi = ecx;
/* 74c023: call 0x6c1893 */
  esp -= 4; W32(esp, 0x74c028u); SPILL(); f_6c1893(); if (g_unwind) return; RELOAD();
/* 74c028: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74c02d: je 0x74c03e */
  if (zf) goto L_74c03e;
L_74c02f: /* 74c02f: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 74c034: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74c035: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74c03bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74c03b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74c03e: /* 74c03e: mov eax, esi */
  eax = esi;
/* 74c040: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74c041: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74c060(void) {
  LOAD_REGS();
L_74c060: /* 74c060: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 74c061: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 74c065: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74c068: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74c069: mov esi, ecx */
  esi = ecx;
/* 74c06b: je 0x74c0a0 */
  if (zf) goto L_74c0a0;
L_74c06d: /* 74c06d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 74c070: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74c071: push 0x6c1893 */
  { uint32_t v = 0x6c1893u; esp -= 4; W32(esp, v); }
/* 74c076: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 74c079: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74c07a: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 74c07f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74c080: call 0x99ca3d */
  esp -= 4; W32(esp, 0x74c085u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 74c085: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74c088: je 0x74c098 */
  if (zf) goto L_74c098;
L_74c08a: /* 74c08a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 74c090: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 74c092: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 74c094: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74c095: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x74c098u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_74c098: /* 74c098: mov eax, edi */
  eax = edi;
/* 74c09a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74c09b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74c09c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74c09d: ret 4 */
  esp += 8; SPILL(); return;
L_74c0a0: /* 74c0a0: mov ecx, esi */
  ecx = esi;
/* 74c0a2: call 0x6c1893 */
  esp -= 4; W32(esp, 0x74c0a7u); SPILL(); f_6c1893(); if (g_unwind) return; RELOAD();
/* 74c0a7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74c0aa: je 0x74c0bb */
  if (zf) goto L_74c0bb;
L_74c0ac: /* 74c0ac: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 74c0b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74c0b2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74c0b8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74c0b8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74c0bb: /* 74c0bb: mov eax, esi */
  eax = esi;
/* 74c0bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74c0be: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74c0bf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74c0f0(void) {
  LOAD_REGS();
L_74c0f0: /* 74c0f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 74c0f2: push 0x9c7b88 */
  { uint32_t v = 0x9c7b88u; esp -= 4; W32(esp, v); }
/* 74c0f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74c0fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74c0fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 74c105: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74c106: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74c107: mov esi, ecx */
  esi = ecx;
/* 74c109: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74c10d: mov dword ptr [esi], 0xa01598 */
  W32((uint32_t)(esi), 0xa01598u);
/* 74c113: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 74c11b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x74c121u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 74c121: mov ecx, esi */
  ecx = esi;
/* 74c123: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 74c12b: call 0x6c1893 */
  esp -= 4; W32(esp, 0x74c130u); SPILL(); f_6c1893(); if (g_unwind) return; RELOAD();
/* 74c130: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 74c134: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74c135: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74c13c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74c13f: ret  */
  esp += 4; SPILL(); return;
}

void f_74c160(void) {
  LOAD_REGS();
L_74c160: /* 74c160: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 74c162: push 0x9c7ba8 */
  { uint32_t v = 0x9c7ba8u; esp -= 4; W32(esp, v); }
/* 74c167: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74c16d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74c16e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 74c175: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74c176: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74c177: mov esi, ecx */
  esi = ecx;
/* 74c179: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74c17d: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x74c182u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 74c182: lea ecx, [esi + 0x344] */
  ecx = (uint32_t)(esi + 0x344u);
/* 74c188: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 74c190: mov dword ptr [esi], 0xa01598 */
  W32((uint32_t)(esi), 0xa01598u);
/* 74c196: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x74c19cu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 74c19c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 74c1a0: mov eax, esi */
  eax = esi;
/* 74c1a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74c1a3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74c1aa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74c1ad: ret  */
  esp += 4; SPILL(); return;
}

void f_74c1d0(void) {
  LOAD_REGS();
L_74c1d0: /* 74c1d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74c1d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74c1d2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 74c1d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74c1d7: mov esi, ecx */
  esi = ecx;
/* 74c1d9: call 0x6c1456 */
  esp -= 4; W32(esp, 0x74c1deu); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 74c1de: mov dword ptr [esi], 0xa01598 */
  W32((uint32_t)(esi), 0xa01598u);
/* 74c1e4: mov al, byte ptr [edi + 0x33c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x33cu))) & 0xffu);
/* 74c1ea: mov byte ptr [esi + 0x33c], al */
  W8((uint32_t)(esi + 0x33cu), (eax & 0xffu));
/* 74c1f0: mov ecx, dword ptr [edi + 0x340] */
  ecx = R32((uint32_t)(edi + 0x340u));
/* 74c1f6: mov eax, dword ptr [esi + 0x340] */
  eax = R32((uint32_t)(esi + 0x340u));
/* 74c1fc: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74c1fe: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74c201: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74c203: mov dword ptr [esi + 0x340], eax */
  W32((uint32_t)(esi + 0x340u), eax);
/* 74c209: mov edx, dword ptr [edi + 0x344] */
  edx = R32((uint32_t)(edi + 0x344u));
/* 74c20f: mov dword ptr [esi + 0x344], edx */
  W32((uint32_t)(esi + 0x344u), edx);
/* 74c215: mov eax, dword ptr [edi + 0x348] */
  eax = R32((uint32_t)(edi + 0x348u));
/* 74c21b: mov dword ptr [esi + 0x348], eax */
  W32((uint32_t)(esi + 0x348u), eax);
/* 74c221: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74c222: mov eax, esi */
  eax = esi;
/* 74c224: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74c225: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74c250(void) {
  LOAD_REGS();
L_74c250: /* 74c250: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74c251: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74c252: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 74c256: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74c257: mov esi, ecx */
  esi = ecx;
/* 74c259: call 0x6c5cef */
  esp -= 4; W32(esp, 0x74c25eu); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 74c25e: mov al, byte ptr [edi + 0x33c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x33cu))) & 0xffu);
/* 74c264: mov byte ptr [esi + 0x33c], al */
  W8((uint32_t)(esi + 0x33cu), (eax & 0xffu));
/* 74c26a: mov ecx, dword ptr [edi + 0x340] */
  ecx = R32((uint32_t)(edi + 0x340u));
/* 74c270: mov eax, dword ptr [esi + 0x340] */
  eax = R32((uint32_t)(esi + 0x340u));
/* 74c276: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74c278: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74c27b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74c27d: mov dword ptr [esi + 0x340], eax */
  W32((uint32_t)(esi + 0x340u), eax);
/* 74c283: mov edx, dword ptr [edi + 0x344] */
  edx = R32((uint32_t)(edi + 0x344u));
/* 74c289: mov dword ptr [esi + 0x344], edx */
  W32((uint32_t)(esi + 0x344u), edx);
/* 74c28f: mov eax, dword ptr [edi + 0x348] */
  eax = R32((uint32_t)(edi + 0x348u));
/* 74c295: mov dword ptr [esi + 0x348], eax */
  W32((uint32_t)(esi + 0x348u), eax);
/* 74c29b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74c29c: mov eax, esi */
  eax = esi;
/* 74c29e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74c29f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74c2d0(void) {
  LOAD_REGS();
L_74c2d0: /* 74c2d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74c2d1: mov esi, ecx */
  esi = ecx;
/* 74c2d3: call 0x6c6a05 */
  esp -= 4; W32(esp, 0x74c2d8u); SPILL(); f_6c6a05(); if (g_unwind) return; RELOAD();
/* 74c2d8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74c2dd: je 0x74c2ee */
  if (zf) goto L_74c2ee;
L_74c2df: /* 74c2df: push 0x34c */
  { uint32_t v = 0x34cu; esp -= 4; W32(esp, v); }
/* 74c2e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74c2e5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74c2ebu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74c2eb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74c2ee: /* 74c2ee: mov eax, esi */
  eax = esi;
/* 74c2f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74c2f1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74c310(void) {
  LOAD_REGS();
L_74c310: /* 74c310: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 74c311: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 74c315: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74c318: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74c319: mov esi, ecx */
  esi = ecx;
/* 74c31b: je 0x74c350 */
  if (zf) goto L_74c350;
L_74c31d: /* 74c31d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 74c320: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74c321: push 0x6c6a05 */
  { uint32_t v = 0x6c6a05u; esp -= 4; W32(esp, v); }
/* 74c326: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 74c329: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74c32a: push 0x34c */
  { uint32_t v = 0x34cu; esp -= 4; W32(esp, v); }
/* 74c32f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74c330: call 0x99ca3d */
  esp -= 4; W32(esp, 0x74c335u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 74c335: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74c338: je 0x74c348 */
  if (zf) goto L_74c348;
L_74c33a: /* 74c33a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 74c340: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 74c342: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 74c344: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74c345: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x74c348u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_74c348: /* 74c348: mov eax, edi */
  eax = edi;
/* 74c34a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74c34b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74c34c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74c34d: ret 4 */
  esp += 8; SPILL(); return;
L_74c350: /* 74c350: mov ecx, esi */
  ecx = esi;
/* 74c352: call 0x6c6a05 */
  esp -= 4; W32(esp, 0x74c357u); SPILL(); f_6c6a05(); if (g_unwind) return; RELOAD();
/* 74c357: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74c35a: je 0x74c36b */
  if (zf) goto L_74c36b;
L_74c35c: /* 74c35c: push 0x34c */
  { uint32_t v = 0x34cu; esp -= 4; W32(esp, v); }
/* 74c361: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74c362: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74c368u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74c368: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74c36b: /* 74c36b: mov eax, esi */
  eax = esi;
/* 74c36d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74c36e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74c36f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74c3a0(void) {
  LOAD_REGS();
L_74c3a0: /* 74c3a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 74c3a2: push 0x9c7bc8 */
  { uint32_t v = 0x9c7bc8u; esp -= 4; W32(esp, v); }
/* 74c3a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74c3ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74c3ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 74c3b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74c3b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74c3b7: mov esi, ecx */
  esi = ecx;
/* 74c3b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74c3bd: mov dword ptr [esi], 0xa01778 */
  W32((uint32_t)(esi), 0xa01778u);
/* 74c3c3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 74c3cb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x74c3d1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 74c3d1: mov ecx, esi */
  ecx = esi;
/* 74c3d3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 74c3db: call 0x6c60a5 */
  esp -= 4; W32(esp, 0x74c3e0u); SPILL(); f_6c60a5(); if (g_unwind) return; RELOAD();
/* 74c3e0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 74c3e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74c3e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74c3ec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74c3ef: ret  */
  esp += 4; SPILL(); return;
}

void f_74c410(void) {
  LOAD_REGS();
L_74c410: /* 74c410: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 74c412: push 0x9c7be8 */
  { uint32_t v = 0x9c7be8u; esp -= 4; W32(esp, v); }
/* 74c417: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74c41d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74c41e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 74c425: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74c426: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74c427: mov esi, ecx */
  esi = ecx;
/* 74c429: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74c42d: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x74c432u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 74c432: lea ecx, [esi + 0x350] */
  ecx = (uint32_t)(esi + 0x350u);
/* 74c438: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 74c440: mov dword ptr [esi], 0xa01778 */
  W32((uint32_t)(esi), 0xa01778u);
/* 74c446: call dword ptr [0xcfa438] */
  esp -= 4; W32(esp, 0x74c44cu); SPILL(); f_4e391d(); if (g_unwind) return; /* Core!??0FScale@@QAE@XZ */ RELOAD();
/* 74c44c: lea ecx, [esi + 0x364] */
  ecx = (uint32_t)(esi + 0x364u);
/* 74c452: call dword ptr [0xcfa438] */
  esp -= 4; W32(esp, 0x74c458u); SPILL(); f_4e391d(); if (g_unwind) return; /* Core!??0FScale@@QAE@XZ */ RELOAD();
/* 74c458: lea ecx, [esi + 0x378] */
  ecx = (uint32_t)(esi + 0x378u);
/* 74c45e: call dword ptr [0xcfa438] */
  esp -= 4; W32(esp, 0x74c464u); SPILL(); f_4e391d(); if (g_unwind) return; /* Core!??0FScale@@QAE@XZ */ RELOAD();
/* 74c464: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 74c468: mov eax, esi */
  eax = esi;
/* 74c46a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74c46b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74c472: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74c475: ret  */
  esp += 4; SPILL(); return;
}

void f_74c4a0(void) {
  LOAD_REGS();
L_74c4a0: /* 74c4a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 74c4a1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 74c4a2: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 74c4a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74c4a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74c4a8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 74c4a9: mov ebx, ecx */
  ebx = ecx;
/* 74c4ab: call 0x6c1456 */
  esp -= 4; W32(esp, 0x74c4b0u); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 74c4b0: mov dword ptr [ebx], 0xa01778 */
  W32((uint32_t)(ebx), 0xa01778u);
/* 74c4b6: mov al, byte ptr [ebp + 0x33c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x33cu))) & 0xffu);
/* 74c4bc: mov byte ptr [ebx + 0x33c], al */
  W8((uint32_t)(ebx + 0x33cu), (eax & 0xffu));
/* 74c4c2: mov ecx, dword ptr [ebp + 0x340] */
  ecx = R32((uint32_t)(ebp + 0x340u));
/* 74c4c8: mov dword ptr [ebx + 0x340], ecx */
  W32((uint32_t)(ebx + 0x340u), ecx);
/* 74c4ce: lea edx, [ebp + 0x344] */
  edx = (uint32_t)(ebp + 0x344u);
/* 74c4d4: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 74c4d6: lea eax, [ebx + 0x344] */
  eax = (uint32_t)(ebx + 0x344u);
/* 74c4dc: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 74c4de: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 74c4e1: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 74c4e4: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 74c4e7: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 74c4ea: lea esi, [ebp + 0x350] */
  esi = (uint32_t)(ebp + 0x350u);
/* 74c4f0: lea edi, [ebx + 0x350] */
  edi = (uint32_t)(ebx + 0x350u);
/* 74c4f6: mov ecx, 5 */
  ecx = 0x5u;
/* 74c4fb: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 74c4fd: lea esi, [ebp + 0x364] */
  esi = (uint32_t)(ebp + 0x364u);
/* 74c503: lea edi, [ebx + 0x364] */
  edi = (uint32_t)(ebx + 0x364u);
/* 74c509: mov ecx, 5 */
  ecx = 0x5u;
/* 74c50e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 74c510: lea esi, [ebp + 0x378] */
  esi = (uint32_t)(ebp + 0x378u);
/* 74c516: lea edi, [ebx + 0x378] */
  edi = (uint32_t)(ebx + 0x378u);
/* 74c51c: mov ecx, 5 */
  ecx = 0x5u;
/* 74c521: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 74c523: mov eax, dword ptr [ebp + 0x38c] */
  eax = R32((uint32_t)(ebp + 0x38cu));
/* 74c529: mov esi, dword ptr [ebx + 0x394] */
  esi = R32((uint32_t)(ebx + 0x394u));
/* 74c52f: mov dword ptr [ebx + 0x38c], eax */
  W32((uint32_t)(ebx + 0x38cu), eax);
/* 74c535: mov ecx, dword ptr [ebp + 0x390] */
  ecx = R32((uint32_t)(ebp + 0x390u));
/* 74c53b: mov dword ptr [ebx + 0x390], ecx */
  W32((uint32_t)(ebx + 0x390u), ecx);
/* 74c541: mov edx, dword ptr [ebp + 0x394] */
  edx = R32((uint32_t)(ebp + 0x394u));
/* 74c547: xor edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74c549: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74c54a: mov eax, esi */
  eax = esi;
/* 74c54c: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 74c54f: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74c551: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74c552: mov dword ptr [ebx + 0x394], eax */
  W32((uint32_t)(ebx + 0x394u), eax);
/* 74c558: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 74c559: mov eax, ebx */
  eax = ebx;
/* 74c55b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74c55c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74c590(void) {
  LOAD_REGS();
L_74c590: /* 74c590: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 74c591: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 74c592: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 74c596: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74c597: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74c598: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 74c599: mov ebx, ecx */
  ebx = ecx;
/* 74c59b: call 0x6c5cef */
  esp -= 4; W32(esp, 0x74c5a0u); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 74c5a0: mov al, byte ptr [ebp + 0x33c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x33cu))) & 0xffu);
/* 74c5a6: mov byte ptr [ebx + 0x33c], al */
  W8((uint32_t)(ebx + 0x33cu), (eax & 0xffu));
/* 74c5ac: mov ecx, dword ptr [ebp + 0x340] */
  ecx = R32((uint32_t)(ebp + 0x340u));
/* 74c5b2: mov dword ptr [ebx + 0x340], ecx */
  W32((uint32_t)(ebx + 0x340u), ecx);
/* 74c5b8: lea edx, [ebp + 0x344] */
  edx = (uint32_t)(ebp + 0x344u);
/* 74c5be: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 74c5c0: lea eax, [ebx + 0x344] */
  eax = (uint32_t)(ebx + 0x344u);
/* 74c5c6: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 74c5c8: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 74c5cb: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 74c5ce: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 74c5d1: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 74c5d4: lea esi, [ebp + 0x350] */
  esi = (uint32_t)(ebp + 0x350u);
/* 74c5da: lea edi, [ebx + 0x350] */
  edi = (uint32_t)(ebx + 0x350u);
/* 74c5e0: mov ecx, 5 */
  ecx = 0x5u;
/* 74c5e5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 74c5e7: lea esi, [ebp + 0x364] */
  esi = (uint32_t)(ebp + 0x364u);
/* 74c5ed: lea edi, [ebx + 0x364] */
  edi = (uint32_t)(ebx + 0x364u);
/* 74c5f3: mov ecx, 5 */
  ecx = 0x5u;
/* 74c5f8: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 74c5fa: lea esi, [ebp + 0x378] */
  esi = (uint32_t)(ebp + 0x378u);
/* 74c600: lea edi, [ebx + 0x378] */
  edi = (uint32_t)(ebx + 0x378u);
/* 74c606: mov ecx, 5 */
  ecx = 0x5u;
/* 74c60b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 74c60d: mov eax, dword ptr [ebp + 0x38c] */
  eax = R32((uint32_t)(ebp + 0x38cu));
/* 74c613: mov esi, dword ptr [ebx + 0x394] */
  esi = R32((uint32_t)(ebx + 0x394u));
/* 74c619: mov dword ptr [ebx + 0x38c], eax */
  W32((uint32_t)(ebx + 0x38cu), eax);
/* 74c61f: mov ecx, dword ptr [ebp + 0x390] */
  ecx = R32((uint32_t)(ebp + 0x390u));
/* 74c625: mov dword ptr [ebx + 0x390], ecx */
  W32((uint32_t)(ebx + 0x390u), ecx);
/* 74c62b: mov edx, dword ptr [ebp + 0x394] */
  edx = R32((uint32_t)(ebp + 0x394u));
/* 74c631: xor edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74c633: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74c634: mov eax, esi */
  eax = esi;
/* 74c636: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 74c639: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74c63b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74c63c: mov dword ptr [ebx + 0x394], eax */
  W32((uint32_t)(ebx + 0x394u), eax);
/* 74c642: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 74c643: mov eax, ebx */
  eax = ebx;
/* 74c645: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74c646: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74c680(void) {
  LOAD_REGS();
L_74c680: /* 74c680: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74c681: mov esi, ecx */
  esi = ecx;
/* 74c683: call 0x6c54fc */
  esp -= 4; W32(esp, 0x74c688u); SPILL(); f_6c54fc(); if (g_unwind) return; RELOAD();
/* 74c688: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74c68d: je 0x74c69e */
  if (zf) goto L_74c69e;
L_74c68f: /* 74c68f: push 0x398 */
  { uint32_t v = 0x398u; esp -= 4; W32(esp, v); }
/* 74c694: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74c695: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74c69bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74c69b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74c69e: /* 74c69e: mov eax, esi */
  eax = esi;
/* 74c6a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74c6a1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74c6c0(void) {
  LOAD_REGS();
L_74c6c0: /* 74c6c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 74c6c1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 74c6c5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74c6c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74c6c9: mov esi, ecx */
  esi = ecx;
/* 74c6cb: je 0x74c700 */
  if (zf) goto L_74c700;
L_74c6cd: /* 74c6cd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 74c6d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74c6d1: push 0x6c54fc */
  { uint32_t v = 0x6c54fcu; esp -= 4; W32(esp, v); }
/* 74c6d6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 74c6d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74c6da: push 0x398 */
  { uint32_t v = 0x398u; esp -= 4; W32(esp, v); }
/* 74c6df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74c6e0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x74c6e5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 74c6e5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74c6e8: je 0x74c6f8 */
  if (zf) goto L_74c6f8;
L_74c6ea: /* 74c6ea: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 74c6f0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 74c6f2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 74c6f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74c6f5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x74c6f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_74c6f8: /* 74c6f8: mov eax, edi */
  eax = edi;
/* 74c6fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74c6fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74c6fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74c6fd: ret 4 */
  esp += 8; SPILL(); return;
L_74c700: /* 74c700: mov ecx, esi */
  ecx = esi;
/* 74c702: call 0x6c54fc */
  esp -= 4; W32(esp, 0x74c707u); SPILL(); f_6c54fc(); if (g_unwind) return; RELOAD();
/* 74c707: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74c70a: je 0x74c71b */
  if (zf) goto L_74c71b;
L_74c70c: /* 74c70c: push 0x398 */
  { uint32_t v = 0x398u; esp -= 4; W32(esp, v); }
/* 74c711: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74c712: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74c718u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74c718: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74c71b: /* 74c71b: mov eax, esi */
  eax = esi;
/* 74c71d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74c71e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74c71f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74c750(void) {
  LOAD_REGS();
L_74c750: /* 74c750: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 74c752: push 0x9c7c17 */
  { uint32_t v = 0x9c7c17u; esp -= 4; W32(esp, v); }
/* 74c757: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74c75d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74c75e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 74c765: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74c766: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74c767: mov esi, ecx */
  esi = ecx;
/* 74c769: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74c76d: mov dword ptr [esi], 0xa01968 */
  W32((uint32_t)(esi), 0xa01968u);
/* 74c773: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 74c77b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x74c781u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 74c781: lea ecx, [esi + 0x3a4] */
  ecx = (uint32_t)(esi + 0x3a4u);
/* 74c787: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 74c78c: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x74c792u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 74c792: mov ecx, esi */
  ecx = esi;
/* 74c794: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 74c79c: call 0x6c54fc */
  esp -= 4; W32(esp, 0x74c7a1u); SPILL(); f_6c54fc(); if (g_unwind) return; RELOAD();
/* 74c7a1: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 74c7a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74c7a6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74c7ad: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74c7b0: ret  */
  esp += 4; SPILL(); return;
}

void f_74c7e0(void) {
  LOAD_REGS();
L_74c7e0: /* 74c7e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 74c7e2: push 0x9c7c38 */
  { uint32_t v = 0x9c7c38u; esp -= 4; W32(esp, v); }
/* 74c7e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74c7ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74c7ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 74c7f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74c7f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74c7f7: mov esi, ecx */
  esi = ecx;
/* 74c7f9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74c7fd: call 0x6c4f20 */
  esp -= 4; W32(esp, 0x74c802u); SPILL(); f_6c4f20(); if (g_unwind) return; RELOAD();
/* 74c802: lea ecx, [esi + 0x39c] */
  ecx = (uint32_t)(esi + 0x39cu);
/* 74c808: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 74c810: mov dword ptr [esi], 0xa01968 */
  W32((uint32_t)(esi), 0xa01968u);
/* 74c816: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x74c81cu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 74c81c: lea ecx, [esi + 0x3a4] */
  ecx = (uint32_t)(esi + 0x3a4u);
/* 74c822: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x74c828u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 74c828: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 74c82c: mov eax, esi */
  eax = esi;
/* 74c82e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74c82f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74c836: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74c839: ret  */
  esp += 4; SPILL(); return;
}

void f_74c860(void) {
  LOAD_REGS();
L_74c860: /* 74c860: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 74c862: push 0x9c7c58 */
  { uint32_t v = 0x9c7c58u; esp -= 4; W32(esp, v); }
/* 74c867: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74c86d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74c86e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 74c875: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74c876: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74c877: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74c878: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 74c87c: mov esi, ecx */
  esi = ecx;
/* 74c87e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74c87f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 74c883: call 0x6c8913 */
  esp -= 4; W32(esp, 0x74c888u); SPILL(); f_6c8913(); if (g_unwind) return; RELOAD();
/* 74c888: mov dword ptr [esi], 0xa01968 */
  W32((uint32_t)(esi), 0xa01968u);
/* 74c88e: mov eax, dword ptr [edi + 0x398] */
  eax = R32((uint32_t)(edi + 0x398u));
/* 74c894: mov dword ptr [esi + 0x398], eax */
  W32((uint32_t)(esi + 0x398u), eax);
/* 74c89a: mov ecx, dword ptr [edi + 0x39c] */
  ecx = R32((uint32_t)(edi + 0x39cu));
/* 74c8a0: mov dword ptr [esi + 0x39c], ecx */
  W32((uint32_t)(esi + 0x39cu), ecx);
/* 74c8a6: mov edx, dword ptr [edi + 0x3a0] */
  edx = R32((uint32_t)(edi + 0x3a0u));
/* 74c8ac: lea eax, [edi + 0x3a4] */
  eax = (uint32_t)(edi + 0x3a4u);
/* 74c8b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74c8b3: lea ecx, [esi + 0x3a4] */
  ecx = (uint32_t)(esi + 0x3a4u);
/* 74c8b9: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 74c8c1: mov dword ptr [esi + 0x3a0], edx */
  W32((uint32_t)(esi + 0x3a0u), edx);
/* 74c8c7: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x74c8cdu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 74c8cd: mov ecx, dword ptr [edi + 0x3b0] */
  ecx = R32((uint32_t)(edi + 0x3b0u));
/* 74c8d3: mov dword ptr [esi + 0x3b0], ecx */
  W32((uint32_t)(esi + 0x3b0u), ecx);
/* 74c8d9: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 74c8dd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74c8de: mov eax, esi */
  eax = esi;
/* 74c8e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74c8e1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74c8e8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74c8eb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74c920(void) {
  LOAD_REGS();
L_74c920: /* 74c920: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74c921: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74c922: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 74c926: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74c927: mov esi, ecx */
  esi = ecx;
/* 74c929: call 0x6c5097 */
  esp -= 4; W32(esp, 0x74c92eu); SPILL(); f_6c5097(); if (g_unwind) return; RELOAD();
/* 74c92e: mov eax, dword ptr [edi + 0x398] */
  eax = R32((uint32_t)(edi + 0x398u));
/* 74c934: mov dword ptr [esi + 0x398], eax */
  W32((uint32_t)(esi + 0x398u), eax);
/* 74c93a: mov ecx, dword ptr [edi + 0x39c] */
  ecx = R32((uint32_t)(edi + 0x39cu));
/* 74c940: mov dword ptr [esi + 0x39c], ecx */
  W32((uint32_t)(esi + 0x39cu), ecx);
/* 74c946: mov edx, dword ptr [edi + 0x3a0] */
  edx = R32((uint32_t)(edi + 0x3a0u));
/* 74c94c: lea eax, [edi + 0x3a4] */
  eax = (uint32_t)(edi + 0x3a4u);
/* 74c952: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74c953: lea ecx, [esi + 0x3a4] */
  ecx = (uint32_t)(esi + 0x3a4u);
/* 74c959: mov dword ptr [esi + 0x3a0], edx */
  W32((uint32_t)(esi + 0x3a0u), edx);
/* 74c95f: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x74c965u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 74c965: mov ecx, dword ptr [edi + 0x3b0] */
  ecx = R32((uint32_t)(edi + 0x3b0u));
/* 74c96b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74c96c: mov dword ptr [esi + 0x3b0], ecx */
  W32((uint32_t)(esi + 0x3b0u), ecx);
/* 74c972: mov eax, esi */
  eax = esi;
/* 74c974: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74c975: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74c9a0(void) {
  LOAD_REGS();
L_74c9a0: /* 74c9a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74c9a1: mov esi, ecx */
  esi = ecx;
/* 74c9a3: call 0x6c1942 */
  esp -= 4; W32(esp, 0x74c9a8u); SPILL(); f_6c1942(); if (g_unwind) return; RELOAD();
/* 74c9a8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74c9ad: je 0x74c9be */
  if (zf) goto L_74c9be;
L_74c9af: /* 74c9af: push 0x3b4 */
  { uint32_t v = 0x3b4u; esp -= 4; W32(esp, v); }
/* 74c9b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74c9b5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74c9bbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74c9bb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74c9be: /* 74c9be: mov eax, esi */
  eax = esi;
/* 74c9c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74c9c1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74c9e0(void) {
  LOAD_REGS();
L_74c9e0: /* 74c9e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 74c9e1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 74c9e5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74c9e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74c9e9: mov esi, ecx */
  esi = ecx;
/* 74c9eb: je 0x74ca20 */
  if (zf) goto L_74ca20;
L_74c9ed: /* 74c9ed: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 74c9f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74c9f1: push 0x6c1942 */
  { uint32_t v = 0x6c1942u; esp -= 4; W32(esp, v); }
/* 74c9f6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 74c9f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74c9fa: push 0x3b4 */
  { uint32_t v = 0x3b4u; esp -= 4; W32(esp, v); }
/* 74c9ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74ca00: call 0x99ca3d */
  esp -= 4; W32(esp, 0x74ca05u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 74ca05: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74ca08: je 0x74ca18 */
  if (zf) goto L_74ca18;
L_74ca0a: /* 74ca0a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 74ca10: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 74ca12: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 74ca14: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74ca15: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x74ca18u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_74ca18: /* 74ca18: mov eax, edi */
  eax = edi;
/* 74ca1a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74ca1b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74ca1c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74ca1d: ret 4 */
  esp += 8; SPILL(); return;
L_74ca20: /* 74ca20: mov ecx, esi */
  ecx = esi;
/* 74ca22: call 0x6c1942 */
  esp -= 4; W32(esp, 0x74ca27u); SPILL(); f_6c1942(); if (g_unwind) return; RELOAD();
/* 74ca27: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74ca2a: je 0x74ca3b */
  if (zf) goto L_74ca3b;
L_74ca2c: /* 74ca2c: push 0x3b4 */
  { uint32_t v = 0x3b4u; esp -= 4; W32(esp, v); }
/* 74ca31: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74ca32: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74ca38u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74ca38: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74ca3b: /* 74ca3b: mov eax, esi */
  eax = esi;
/* 74ca3d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74ca3e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74ca3f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74ca70(void) {
  LOAD_REGS();
L_74ca70: /* 74ca70: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 74ca72: push 0x9c7c78 */
  { uint32_t v = 0x9c7c78u; esp -= 4; W32(esp, v); }
/* 74ca77: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74ca7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74ca7e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 74ca85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74ca86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74ca87: mov esi, ecx */
  esi = ecx;
/* 74ca89: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74ca8d: mov dword ptr [esi], 0xa01b58 */
  W32((uint32_t)(esi), 0xa01b58u);
/* 74ca93: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 74ca9b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x74caa1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 74caa1: mov ecx, esi */
  ecx = esi;
/* 74caa3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 74caab: call 0x6c1942 */
  esp -= 4; W32(esp, 0x74cab0u); SPILL(); f_6c1942(); if (g_unwind) return; RELOAD();
/* 74cab0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 74cab4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74cab5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74cabc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74cabf: ret  */
  esp += 4; SPILL(); return;
}

void f_74cae0(void) {
  LOAD_REGS();
L_74cae0: /* 74cae0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74cae1: mov esi, ecx */
  esi = ecx;
/* 74cae3: call 0x6c77e3 */
  esp -= 4; W32(esp, 0x74cae8u); SPILL(); f_6c77e3(); if (g_unwind) return; RELOAD();
/* 74cae8: mov dword ptr [esi], 0xa01b58 */
  W32((uint32_t)(esi), 0xa01b58u);
/* 74caee: mov eax, esi */
  eax = esi;
/* 74caf0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74caf1: ret  */
  esp += 4; SPILL(); return;
}

void f_74cb10(void) {
  LOAD_REGS();
L_74cb10: /* 74cb10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74cb11: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74cb12: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 74cb16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74cb17: mov esi, ecx */
  esi = ecx;
/* 74cb19: call 0x6ca754 */
  esp -= 4; W32(esp, 0x74cb1eu); SPILL(); f_6ca754(); if (g_unwind) return; RELOAD();
/* 74cb1e: mov dword ptr [esi], 0xa01b58 */
  W32((uint32_t)(esi), 0xa01b58u);
/* 74cb24: mov eax, dword ptr [edi + 0x3b4] */
  eax = R32((uint32_t)(edi + 0x3b4u));
/* 74cb2a: mov edi, dword ptr [esi + 0x3b4] */
  edi = R32((uint32_t)(esi + 0x3b4u));
/* 74cb30: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74cb32: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74cb35: mov ecx, edi */
  ecx = edi;
/* 74cb37: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74cb39: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74cb3a: mov dword ptr [esi + 0x3b4], ecx */
  W32((uint32_t)(esi + 0x3b4u), ecx);
/* 74cb40: mov eax, esi */
  eax = esi;
/* 74cb42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74cb43: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74cb60(void) {
  LOAD_REGS();
L_74cb60: /* 74cb60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74cb61: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74cb62: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 74cb66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74cb67: mov esi, ecx */
  esi = ecx;
/* 74cb69: call 0x6c4467 */
  esp -= 4; W32(esp, 0x74cb6eu); SPILL(); f_6c4467(); if (g_unwind) return; RELOAD();
/* 74cb6e: mov eax, dword ptr [edi + 0x3b4] */
  eax = R32((uint32_t)(edi + 0x3b4u));
/* 74cb74: mov edi, dword ptr [esi + 0x3b4] */
  edi = R32((uint32_t)(esi + 0x3b4u));
/* 74cb7a: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74cb7c: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74cb7f: mov ecx, edi */
  ecx = edi;
/* 74cb81: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74cb83: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74cb84: mov dword ptr [esi + 0x3b4], ecx */
  W32((uint32_t)(esi + 0x3b4u), ecx);
/* 74cb8a: mov eax, esi */
  eax = esi;
/* 74cb8c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74cb8d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74cba0(void) {
  LOAD_REGS();
L_74cba0: /* 74cba0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74cba1: mov esi, ecx */
  esi = ecx;
/* 74cba3: call 0x6cc581 */
  esp -= 4; W32(esp, 0x74cba8u); SPILL(); f_6cc581(); if (g_unwind) return; RELOAD();
/* 74cba8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74cbad: je 0x74cbbe */
  if (zf) goto L_74cbbe;
L_74cbaf: /* 74cbaf: push 0x3b8 */
  { uint32_t v = 0x3b8u; esp -= 4; W32(esp, v); }
/* 74cbb4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74cbb5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74cbbbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74cbbb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74cbbe: /* 74cbbe: mov eax, esi */
  eax = esi;
/* 74cbc0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74cbc1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74cbe0(void) {
  LOAD_REGS();
L_74cbe0: /* 74cbe0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 74cbe1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 74cbe5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74cbe8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74cbe9: mov esi, ecx */
  esi = ecx;
/* 74cbeb: je 0x74cc20 */
  if (zf) goto L_74cc20;
L_74cbed: /* 74cbed: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 74cbf0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74cbf1: push 0x6cc581 */
  { uint32_t v = 0x6cc581u; esp -= 4; W32(esp, v); }
/* 74cbf6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 74cbf9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74cbfa: push 0x3b8 */
  { uint32_t v = 0x3b8u; esp -= 4; W32(esp, v); }
/* 74cbff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74cc00: call 0x99ca3d */
  esp -= 4; W32(esp, 0x74cc05u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 74cc05: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74cc08: je 0x74cc18 */
  if (zf) goto L_74cc18;
L_74cc0a: /* 74cc0a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 74cc10: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 74cc12: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 74cc14: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74cc15: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x74cc18u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_74cc18: /* 74cc18: mov eax, edi */
  eax = edi;
/* 74cc1a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74cc1b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74cc1c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74cc1d: ret 4 */
  esp += 8; SPILL(); return;
L_74cc20: /* 74cc20: mov ecx, esi */
  ecx = esi;
/* 74cc22: call 0x6cc581 */
  esp -= 4; W32(esp, 0x74cc27u); SPILL(); f_6cc581(); if (g_unwind) return; RELOAD();
/* 74cc27: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74cc2a: je 0x74cc3b */
  if (zf) goto L_74cc3b;
L_74cc2c: /* 74cc2c: push 0x3b8 */
  { uint32_t v = 0x3b8u; esp -= 4; W32(esp, v); }
/* 74cc31: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74cc32: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74cc38u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74cc38: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74cc3b: /* 74cc3b: mov eax, esi */
  eax = esi;
/* 74cc3d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74cc3e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74cc3f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74cc70(void) {
  LOAD_REGS();
L_74cc70: /* 74cc70: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 74cc72: push 0x9c7c98 */
  { uint32_t v = 0x9c7c98u; esp -= 4; W32(esp, v); }
/* 74cc77: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74cc7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74cc7e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 74cc85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74cc86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74cc87: mov esi, ecx */
  esi = ecx;
/* 74cc89: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74cc8d: mov dword ptr [esi], 0xa01d48 */
  W32((uint32_t)(esi), 0xa01d48u);
/* 74cc93: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 74cc9b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x74cca1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 74cca1: mov ecx, esi */
  ecx = esi;
/* 74cca3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 74ccab: call 0x6c1942 */
  esp -= 4; W32(esp, 0x74ccb0u); SPILL(); f_6c1942(); if (g_unwind) return; RELOAD();
/* 74ccb0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 74ccb4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74ccb5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74ccbc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74ccbf: ret  */
  esp += 4; SPILL(); return;
}

void f_74cce0(void) {
  LOAD_REGS();
L_74cce0: /* 74cce0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74cce1: mov esi, ecx */
  esi = ecx;
/* 74cce3: call 0x6c77e3 */
  esp -= 4; W32(esp, 0x74cce8u); SPILL(); f_6c77e3(); if (g_unwind) return; RELOAD();
/* 74cce8: mov dword ptr [esi], 0xa01d48 */
  W32((uint32_t)(esi), 0xa01d48u);
/* 74ccee: mov eax, esi */
  eax = esi;
/* 74ccf0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74ccf1: ret  */
  esp += 4; SPILL(); return;
}

void f_74cd10(void) {
  LOAD_REGS();
L_74cd10: /* 74cd10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74cd11: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74cd12: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 74cd16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74cd17: mov esi, ecx */
  esi = ecx;
/* 74cd19: call 0x6ca754 */
  esp -= 4; W32(esp, 0x74cd1eu); SPILL(); f_6ca754(); if (g_unwind) return; RELOAD();
/* 74cd1e: mov edx, dword ptr [esi + 0x3b4] */
  edx = R32((uint32_t)(esi + 0x3b4u));
/* 74cd24: mov dword ptr [esi], 0xa01d48 */
  W32((uint32_t)(esi), 0xa01d48u);
/* 74cd2a: mov eax, dword ptr [edi + 0x3b4] */
  eax = R32((uint32_t)(edi + 0x3b4u));
/* 74cd30: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74cd32: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74cd35: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74cd37: mov dword ptr [esi + 0x3b4], edx */
  W32((uint32_t)(esi + 0x3b4u), edx);
/* 74cd3d: lea ecx, [edi + 0x3b8] */
  ecx = (uint32_t)(edi + 0x3b8u);
/* 74cd43: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 74cd45: lea edx, [esi + 0x3b8] */
  edx = (uint32_t)(esi + 0x3b8u);
/* 74cd4b: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 74cd4d: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 74cd50: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 74cd53: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 74cd56: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 74cd59: lea edx, [edi + 0x3c4] */
  edx = (uint32_t)(edi + 0x3c4u);
/* 74cd5f: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 74cd61: lea eax, [esi + 0x3c4] */
  eax = (uint32_t)(esi + 0x3c4u);
/* 74cd67: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 74cd69: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 74cd6c: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 74cd6f: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 74cd72: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 74cd75: mov eax, dword ptr [edi + 0x3d0] */
  eax = R32((uint32_t)(edi + 0x3d0u));
/* 74cd7b: mov dword ptr [esi + 0x3d0], eax */
  W32((uint32_t)(esi + 0x3d0u), eax);
/* 74cd81: mov ecx, dword ptr [edi + 0x3d4] */
  ecx = R32((uint32_t)(edi + 0x3d4u));
/* 74cd87: mov dword ptr [esi + 0x3d4], ecx */
  W32((uint32_t)(esi + 0x3d4u), ecx);
/* 74cd8d: mov edx, dword ptr [edi + 0x3d8] */
  edx = R32((uint32_t)(edi + 0x3d8u));
/* 74cd93: mov dword ptr [esi + 0x3d8], edx */
  W32((uint32_t)(esi + 0x3d8u), edx);
/* 74cd99: mov eax, dword ptr [edi + 0x3dc] */
  eax = R32((uint32_t)(edi + 0x3dcu));
/* 74cd9f: mov dword ptr [esi + 0x3dc], eax */
  W32((uint32_t)(esi + 0x3dcu), eax);
/* 74cda5: mov ecx, dword ptr [edi + 0x3e0] */
  ecx = R32((uint32_t)(edi + 0x3e0u));
/* 74cdab: mov dword ptr [esi + 0x3e0], ecx */
  W32((uint32_t)(esi + 0x3e0u), ecx);
/* 74cdb1: mov edx, dword ptr [edi + 0x3e4] */
  edx = R32((uint32_t)(edi + 0x3e4u));
/* 74cdb7: mov dword ptr [esi + 0x3e4], edx */
  W32((uint32_t)(esi + 0x3e4u), edx);
/* 74cdbd: mov eax, dword ptr [edi + 0x3e8] */
  eax = R32((uint32_t)(edi + 0x3e8u));
/* 74cdc3: mov dword ptr [esi + 0x3e8], eax */
  W32((uint32_t)(esi + 0x3e8u), eax);
/* 74cdc9: mov ecx, dword ptr [edi + 0x3ec] */
  ecx = R32((uint32_t)(edi + 0x3ecu));
/* 74cdcf: mov dword ptr [esi + 0x3ec], ecx */
  W32((uint32_t)(esi + 0x3ecu), ecx);
/* 74cdd5: mov edx, dword ptr [edi + 0x3f0] */
  edx = R32((uint32_t)(edi + 0x3f0u));
/* 74cddb: mov dword ptr [esi + 0x3f0], edx */
  W32((uint32_t)(esi + 0x3f0u), edx);
/* 74cde1: mov eax, dword ptr [edi + 0x3f4] */
  eax = R32((uint32_t)(edi + 0x3f4u));
/* 74cde7: mov dword ptr [esi + 0x3f4], eax */
  W32((uint32_t)(esi + 0x3f4u), eax);
/* 74cded: lea ecx, [edi + 0x3f8] */
  ecx = (uint32_t)(edi + 0x3f8u);
/* 74cdf3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 74cdf5: lea edx, [esi + 0x3f8] */
  edx = (uint32_t)(esi + 0x3f8u);
/* 74cdfb: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 74cdfd: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 74ce00: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 74ce03: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 74ce06: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 74ce09: lea edx, [edi + 0x404] */
  edx = (uint32_t)(edi + 0x404u);
/* 74ce0f: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 74ce11: lea eax, [esi + 0x404] */
  eax = (uint32_t)(esi + 0x404u);
/* 74ce17: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 74ce19: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 74ce1c: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 74ce1f: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 74ce22: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 74ce25: mov ecx, dword ptr [edi + 0x410] */
  ecx = R32((uint32_t)(edi + 0x410u));
/* 74ce2b: mov eax, dword ptr [esi + 0x410] */
  eax = R32((uint32_t)(esi + 0x410u));
/* 74ce31: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74ce33: mov ecx, dword ptr [esi + 0x410] */
  ecx = R32((uint32_t)(esi + 0x410u));
/* 74ce39: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74ce3c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74ce3e: mov dword ptr [esi + 0x410], ecx */
  W32((uint32_t)(esi + 0x410u), ecx);
/* 74ce44: mov eax, dword ptr [edi + 0x410] */
  eax = R32((uint32_t)(edi + 0x410u));
/* 74ce4a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74ce4c: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74ce4f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74ce51: mov dword ptr [esi + 0x410], eax */
  W32((uint32_t)(esi + 0x410u), eax);
/* 74ce57: mov ecx, dword ptr [edi + 0x410] */
  ecx = R32((uint32_t)(edi + 0x410u));
/* 74ce5d: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74ce5f: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74ce62: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74ce64: mov dword ptr [esi + 0x410], ecx */
  W32((uint32_t)(esi + 0x410u), ecx);
/* 74ce6a: mov eax, dword ptr [edi + 0x410] */
  eax = R32((uint32_t)(edi + 0x410u));
/* 74ce70: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74ce72: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74ce75: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74ce77: mov dword ptr [esi + 0x410], eax */
  W32((uint32_t)(esi + 0x410u), eax);
/* 74ce7d: mov ecx, dword ptr [edi + 0x410] */
  ecx = R32((uint32_t)(edi + 0x410u));
/* 74ce83: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74ce85: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74ce88: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74ce8a: mov dword ptr [esi + 0x410], ecx */
  W32((uint32_t)(esi + 0x410u), ecx);
/* 74ce90: mov edx, dword ptr [edi + 0x410] */
  edx = R32((uint32_t)(edi + 0x410u));
/* 74ce96: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74ce98: and edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 74ce9b: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74ce9d: mov dword ptr [esi + 0x410], edx */
  W32((uint32_t)(esi + 0x410u), edx);
/* 74cea3: mov eax, dword ptr [edi + 0x414] */
  eax = R32((uint32_t)(edi + 0x414u));
/* 74cea9: mov dword ptr [esi + 0x414], eax */
  W32((uint32_t)(esi + 0x414u), eax);
/* 74ceaf: mov ecx, dword ptr [edi + 0x418] */
  ecx = R32((uint32_t)(edi + 0x418u));
/* 74ceb5: mov eax, dword ptr [esi + 0x418] */
  eax = R32((uint32_t)(esi + 0x418u));
/* 74cebb: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74cebd: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74cec0: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74cec2: mov dword ptr [esi + 0x418], eax */
  W32((uint32_t)(esi + 0x418u), eax);
/* 74cec8: mov edx, dword ptr [edi + 0x41c] */
  edx = R32((uint32_t)(edi + 0x41cu));
/* 74cece: mov dword ptr [esi + 0x41c], edx */
  W32((uint32_t)(esi + 0x41cu), edx);
/* 74ced4: mov eax, dword ptr [edi + 0x420] */
  eax = R32((uint32_t)(edi + 0x420u));
/* 74ceda: mov dword ptr [esi + 0x420], eax */
  W32((uint32_t)(esi + 0x420u), eax);
/* 74cee0: mov ecx, dword ptr [edi + 0x424] */
  ecx = R32((uint32_t)(edi + 0x424u));
/* 74cee6: mov dword ptr [esi + 0x424], ecx */
  W32((uint32_t)(esi + 0x424u), ecx);
/* 74ceec: mov edx, dword ptr [edi + 0x428] */
  edx = R32((uint32_t)(edi + 0x428u));
/* 74cef2: mov dword ptr [esi + 0x428], edx */
  W32((uint32_t)(esi + 0x428u), edx);
/* 74cef8: mov eax, dword ptr [edi + 0x42c] */
  eax = R32((uint32_t)(edi + 0x42cu));
/* 74cefe: mov dword ptr [esi + 0x42c], eax */
  W32((uint32_t)(esi + 0x42cu), eax);
/* 74cf04: mov ecx, dword ptr [edi + 0x430] */
  ecx = R32((uint32_t)(edi + 0x430u));
/* 74cf0a: mov dword ptr [esi + 0x430], ecx */
  W32((uint32_t)(esi + 0x430u), ecx);
/* 74cf10: mov edx, dword ptr [edi + 0x434] */
  edx = R32((uint32_t)(edi + 0x434u));
/* 74cf16: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74cf17: mov dword ptr [esi + 0x434], edx */
  W32((uint32_t)(esi + 0x434u), edx);
/* 74cf1d: mov eax, esi */
  eax = esi;
/* 74cf1f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74cf20: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74cfc0(void) {
  LOAD_REGS();
L_74cfc0: /* 74cfc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74cfc1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74cfc2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 74cfc6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74cfc7: mov esi, ecx */
  esi = ecx;
/* 74cfc9: call 0x6c4467 */
  esp -= 4; W32(esp, 0x74cfceu); SPILL(); f_6c4467(); if (g_unwind) return; RELOAD();
/* 74cfce: mov eax, dword ptr [edi + 0x3b4] */
  eax = R32((uint32_t)(edi + 0x3b4u));
/* 74cfd4: mov edx, dword ptr [esi + 0x3b4] */
  edx = R32((uint32_t)(esi + 0x3b4u));
/* 74cfda: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74cfdc: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74cfdf: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74cfe1: mov dword ptr [esi + 0x3b4], edx */
  W32((uint32_t)(esi + 0x3b4u), edx);
/* 74cfe7: lea ecx, [edi + 0x3b8] */
  ecx = (uint32_t)(edi + 0x3b8u);
/* 74cfed: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 74cfef: lea edx, [esi + 0x3b8] */
  edx = (uint32_t)(esi + 0x3b8u);
/* 74cff5: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 74cff7: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 74cffa: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 74cffd: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 74d000: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 74d003: lea edx, [edi + 0x3c4] */
  edx = (uint32_t)(edi + 0x3c4u);
/* 74d009: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 74d00b: lea eax, [esi + 0x3c4] */
  eax = (uint32_t)(esi + 0x3c4u);
/* 74d011: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 74d013: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 74d016: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 74d019: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 74d01c: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 74d01f: mov eax, dword ptr [edi + 0x3d0] */
  eax = R32((uint32_t)(edi + 0x3d0u));
/* 74d025: mov dword ptr [esi + 0x3d0], eax */
  W32((uint32_t)(esi + 0x3d0u), eax);
/* 74d02b: mov ecx, dword ptr [edi + 0x3d4] */
  ecx = R32((uint32_t)(edi + 0x3d4u));
/* 74d031: mov dword ptr [esi + 0x3d4], ecx */
  W32((uint32_t)(esi + 0x3d4u), ecx);
/* 74d037: mov edx, dword ptr [edi + 0x3d8] */
  edx = R32((uint32_t)(edi + 0x3d8u));
/* 74d03d: mov dword ptr [esi + 0x3d8], edx */
  W32((uint32_t)(esi + 0x3d8u), edx);
/* 74d043: mov eax, dword ptr [edi + 0x3dc] */
  eax = R32((uint32_t)(edi + 0x3dcu));
/* 74d049: mov dword ptr [esi + 0x3dc], eax */
  W32((uint32_t)(esi + 0x3dcu), eax);
/* 74d04f: mov ecx, dword ptr [edi + 0x3e0] */
  ecx = R32((uint32_t)(edi + 0x3e0u));
/* 74d055: mov dword ptr [esi + 0x3e0], ecx */
  W32((uint32_t)(esi + 0x3e0u), ecx);
/* 74d05b: mov edx, dword ptr [edi + 0x3e4] */
  edx = R32((uint32_t)(edi + 0x3e4u));
/* 74d061: mov dword ptr [esi + 0x3e4], edx */
  W32((uint32_t)(esi + 0x3e4u), edx);
/* 74d067: mov eax, dword ptr [edi + 0x3e8] */
  eax = R32((uint32_t)(edi + 0x3e8u));
/* 74d06d: mov dword ptr [esi + 0x3e8], eax */
  W32((uint32_t)(esi + 0x3e8u), eax);
/* 74d073: mov ecx, dword ptr [edi + 0x3ec] */
  ecx = R32((uint32_t)(edi + 0x3ecu));
/* 74d079: mov dword ptr [esi + 0x3ec], ecx */
  W32((uint32_t)(esi + 0x3ecu), ecx);
/* 74d07f: mov edx, dword ptr [edi + 0x3f0] */
  edx = R32((uint32_t)(edi + 0x3f0u));
/* 74d085: mov dword ptr [esi + 0x3f0], edx */
  W32((uint32_t)(esi + 0x3f0u), edx);
/* 74d08b: mov eax, dword ptr [edi + 0x3f4] */
  eax = R32((uint32_t)(edi + 0x3f4u));
/* 74d091: mov dword ptr [esi + 0x3f4], eax */
  W32((uint32_t)(esi + 0x3f4u), eax);
/* 74d097: lea ecx, [edi + 0x3f8] */
  ecx = (uint32_t)(edi + 0x3f8u);
/* 74d09d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 74d09f: lea edx, [esi + 0x3f8] */
  edx = (uint32_t)(esi + 0x3f8u);
/* 74d0a5: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 74d0a7: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 74d0aa: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 74d0ad: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 74d0b0: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 74d0b3: lea edx, [edi + 0x404] */
  edx = (uint32_t)(edi + 0x404u);
/* 74d0b9: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 74d0bb: lea eax, [esi + 0x404] */
  eax = (uint32_t)(esi + 0x404u);
/* 74d0c1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 74d0c3: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 74d0c6: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 74d0c9: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 74d0cc: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 74d0cf: mov ecx, dword ptr [edi + 0x410] */
  ecx = R32((uint32_t)(edi + 0x410u));
/* 74d0d5: mov eax, dword ptr [esi + 0x410] */
  eax = R32((uint32_t)(esi + 0x410u));
/* 74d0db: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74d0dd: mov ecx, dword ptr [esi + 0x410] */
  ecx = R32((uint32_t)(esi + 0x410u));
/* 74d0e3: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74d0e6: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74d0e8: mov dword ptr [esi + 0x410], ecx */
  W32((uint32_t)(esi + 0x410u), ecx);
/* 74d0ee: mov eax, dword ptr [edi + 0x410] */
  eax = R32((uint32_t)(edi + 0x410u));
/* 74d0f4: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74d0f6: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74d0f9: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74d0fb: mov dword ptr [esi + 0x410], eax */
  W32((uint32_t)(esi + 0x410u), eax);
/* 74d101: mov ecx, dword ptr [edi + 0x410] */
  ecx = R32((uint32_t)(edi + 0x410u));
/* 74d107: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74d109: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74d10c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74d10e: mov dword ptr [esi + 0x410], ecx */
  W32((uint32_t)(esi + 0x410u), ecx);
/* 74d114: mov eax, dword ptr [edi + 0x410] */
  eax = R32((uint32_t)(edi + 0x410u));
/* 74d11a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74d11c: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74d11f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74d121: mov dword ptr [esi + 0x410], eax */
  W32((uint32_t)(esi + 0x410u), eax);
/* 74d127: mov ecx, dword ptr [edi + 0x410] */
  ecx = R32((uint32_t)(edi + 0x410u));
/* 74d12d: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74d12f: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74d132: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74d134: mov dword ptr [esi + 0x410], ecx */
  W32((uint32_t)(esi + 0x410u), ecx);
/* 74d13a: mov edx, dword ptr [edi + 0x410] */
  edx = R32((uint32_t)(edi + 0x410u));
/* 74d140: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74d142: and edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 74d145: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74d147: mov dword ptr [esi + 0x410], edx */
  W32((uint32_t)(esi + 0x410u), edx);
/* 74d14d: mov eax, dword ptr [edi + 0x414] */
  eax = R32((uint32_t)(edi + 0x414u));
/* 74d153: mov dword ptr [esi + 0x414], eax */
  W32((uint32_t)(esi + 0x414u), eax);
/* 74d159: mov ecx, dword ptr [edi + 0x418] */
  ecx = R32((uint32_t)(edi + 0x418u));
/* 74d15f: mov eax, dword ptr [esi + 0x418] */
  eax = R32((uint32_t)(esi + 0x418u));
/* 74d165: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74d167: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74d16a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74d16c: mov dword ptr [esi + 0x418], eax */
  W32((uint32_t)(esi + 0x418u), eax);
/* 74d172: mov edx, dword ptr [edi + 0x41c] */
  edx = R32((uint32_t)(edi + 0x41cu));
/* 74d178: mov dword ptr [esi + 0x41c], edx */
  W32((uint32_t)(esi + 0x41cu), edx);
/* 74d17e: mov eax, dword ptr [edi + 0x420] */
  eax = R32((uint32_t)(edi + 0x420u));
/* 74d184: mov dword ptr [esi + 0x420], eax */
  W32((uint32_t)(esi + 0x420u), eax);
/* 74d18a: mov ecx, dword ptr [edi + 0x424] */
  ecx = R32((uint32_t)(edi + 0x424u));
/* 74d190: mov dword ptr [esi + 0x424], ecx */
  W32((uint32_t)(esi + 0x424u), ecx);
/* 74d196: mov edx, dword ptr [edi + 0x428] */
  edx = R32((uint32_t)(edi + 0x428u));
/* 74d19c: mov dword ptr [esi + 0x428], edx */
  W32((uint32_t)(esi + 0x428u), edx);
/* 74d1a2: mov eax, dword ptr [edi + 0x42c] */
  eax = R32((uint32_t)(edi + 0x42cu));
/* 74d1a8: mov dword ptr [esi + 0x42c], eax */
  W32((uint32_t)(esi + 0x42cu), eax);
/* 74d1ae: mov ecx, dword ptr [edi + 0x430] */
  ecx = R32((uint32_t)(edi + 0x430u));
/* 74d1b4: mov dword ptr [esi + 0x430], ecx */
  W32((uint32_t)(esi + 0x430u), ecx);
/* 74d1ba: mov edx, dword ptr [edi + 0x434] */
  edx = R32((uint32_t)(edi + 0x434u));
/* 74d1c0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74d1c1: mov dword ptr [esi + 0x434], edx */
  W32((uint32_t)(esi + 0x434u), edx);
/* 74d1c7: mov eax, esi */
  eax = esi;
/* 74d1c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74d1ca: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74d260(void) {
  LOAD_REGS();
L_74d260: /* 74d260: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74d261: mov esi, ecx */
  esi = ecx;
/* 74d263: call 0x6c83f0 */
  esp -= 4; W32(esp, 0x74d268u); SPILL(); f_6c83f0(); if (g_unwind) return; RELOAD();
/* 74d268: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74d26d: je 0x74d27e */
  if (zf) goto L_74d27e;
L_74d26f: /* 74d26f: push 0x438 */
  { uint32_t v = 0x438u; esp -= 4; W32(esp, v); }
/* 74d274: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74d275: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74d27bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74d27b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74d27e: /* 74d27e: mov eax, esi */
  eax = esi;
/* 74d280: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74d281: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74d2a0(void) {
  LOAD_REGS();
L_74d2a0: /* 74d2a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 74d2a1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 74d2a5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74d2a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74d2a9: mov esi, ecx */
  esi = ecx;
/* 74d2ab: je 0x74d2e0 */
  if (zf) goto L_74d2e0;
L_74d2ad: /* 74d2ad: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 74d2b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74d2b1: push 0x6c83f0 */
  { uint32_t v = 0x6c83f0u; esp -= 4; W32(esp, v); }
/* 74d2b6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 74d2b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74d2ba: push 0x438 */
  { uint32_t v = 0x438u; esp -= 4; W32(esp, v); }
/* 74d2bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74d2c0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x74d2c5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 74d2c5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74d2c8: je 0x74d2d8 */
  if (zf) goto L_74d2d8;
L_74d2ca: /* 74d2ca: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 74d2d0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 74d2d2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 74d2d4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74d2d5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x74d2d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_74d2d8: /* 74d2d8: mov eax, edi */
  eax = edi;
/* 74d2da: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74d2db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74d2dc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74d2dd: ret 4 */
  esp += 8; SPILL(); return;
L_74d2e0: /* 74d2e0: mov ecx, esi */
  ecx = esi;
/* 74d2e2: call 0x6c83f0 */
  esp -= 4; W32(esp, 0x74d2e7u); SPILL(); f_6c83f0(); if (g_unwind) return; RELOAD();
/* 74d2e7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74d2ea: je 0x74d2fb */
  if (zf) goto L_74d2fb;
L_74d2ec: /* 74d2ec: push 0x438 */
  { uint32_t v = 0x438u; esp -= 4; W32(esp, v); }
/* 74d2f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74d2f2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74d2f8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74d2f8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74d2fb: /* 74d2fb: mov eax, esi */
  eax = esi;
/* 74d2fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74d2fe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74d2ff: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74d330(void) {
  LOAD_REGS();
L_74d330: /* 74d330: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 74d332: push 0x9c7cb8 */
  { uint32_t v = 0x9c7cb8u; esp -= 4; W32(esp, v); }
/* 74d337: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74d33d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74d33e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 74d345: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74d346: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74d347: mov esi, ecx */
  esi = ecx;
/* 74d349: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74d34d: mov dword ptr [esi], 0xa01f38 */
  W32((uint32_t)(esi), 0xa01f38u);
/* 74d353: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 74d35b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x74d361u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 74d361: mov ecx, esi */
  ecx = esi;
/* 74d363: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 74d36b: call 0x6c83f0 */
  esp -= 4; W32(esp, 0x74d370u); SPILL(); f_6c83f0(); if (g_unwind) return; RELOAD();
/* 74d370: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 74d374: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74d375: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74d37c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74d37f: ret  */
  esp += 4; SPILL(); return;
}

void f_74d3a0(void) {
  LOAD_REGS();
L_74d3a0: /* 74d3a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 74d3a2: push 0x9c7cd8 */
  { uint32_t v = 0x9c7cd8u; esp -= 4; W32(esp, v); }
/* 74d3a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74d3ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74d3ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 74d3b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74d3b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74d3b7: mov esi, ecx */
  esi = ecx;
/* 74d3b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74d3bd: call 0x6c77e3 */
  esp -= 4; W32(esp, 0x74d3c2u); SPILL(); f_6c77e3(); if (g_unwind) return; RELOAD();
/* 74d3c2: lea ecx, [esi + 0x438] */
  ecx = (uint32_t)(esi + 0x438u);
/* 74d3c8: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 74d3d0: mov dword ptr [esi], 0xa01f38 */
  W32((uint32_t)(esi), 0xa01f38u);
/* 74d3d6: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x74d3dcu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 74d3dc: lea ecx, [esi + 0x43c] */
  ecx = (uint32_t)(esi + 0x43cu);
/* 74d3e2: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x74d3e8u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 74d3e8: lea ecx, [esi + 0x440] */
  ecx = (uint32_t)(esi + 0x440u);
/* 74d3ee: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x74d3f4u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 74d3f4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 74d3f8: mov eax, esi */
  eax = esi;
/* 74d3fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74d3fb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74d402: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74d405: ret  */
  esp += 4; SPILL(); return;
}

void f_74d430(void) {
  LOAD_REGS();
L_74d430: /* 74d430: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74d431: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74d432: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 74d436: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74d437: mov esi, ecx */
  esi = ecx;
/* 74d439: call 0x6cbeba */
  esp -= 4; W32(esp, 0x74d43eu); SPILL(); f_6cbeba(); if (g_unwind) return; RELOAD();
/* 74d43e: mov dword ptr [esi], 0xa01f38 */
  W32((uint32_t)(esi), 0xa01f38u);
/* 74d444: mov eax, dword ptr [edi + 0x438] */
  eax = R32((uint32_t)(edi + 0x438u));
/* 74d44a: mov dword ptr [esi + 0x438], eax */
  W32((uint32_t)(esi + 0x438u), eax);
/* 74d450: mov ecx, dword ptr [edi + 0x43c] */
  ecx = R32((uint32_t)(edi + 0x43cu));
/* 74d456: mov dword ptr [esi + 0x43c], ecx */
  W32((uint32_t)(esi + 0x43cu), ecx);
/* 74d45c: lea edx, [edi + 0x440] */
  edx = (uint32_t)(edi + 0x440u);
/* 74d462: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 74d464: lea eax, [esi + 0x440] */
  eax = (uint32_t)(esi + 0x440u);
/* 74d46a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 74d46c: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 74d46f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 74d472: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 74d475: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 74d478: lea eax, [edi + 0x44c] */
  eax = (uint32_t)(edi + 0x44cu);
/* 74d47e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 74d480: lea ecx, [esi + 0x44c] */
  ecx = (uint32_t)(esi + 0x44cu);
/* 74d486: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 74d488: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 74d48b: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 74d48e: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 74d491: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 74d494: lea ecx, [edi + 0x458] */
  ecx = (uint32_t)(edi + 0x458u);
/* 74d49a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 74d49c: lea edx, [esi + 0x458] */
  edx = (uint32_t)(esi + 0x458u);
/* 74d4a2: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 74d4a4: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 74d4a7: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 74d4aa: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 74d4ad: mov eax, dword ptr [esi + 0x468] */
  eax = R32((uint32_t)(esi + 0x468u));
/* 74d4b3: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 74d4b6: mov edx, dword ptr [edi + 0x464] */
  edx = R32((uint32_t)(edi + 0x464u));
/* 74d4bc: mov dword ptr [esi + 0x464], edx */
  W32((uint32_t)(esi + 0x464u), edx);
/* 74d4c2: xor eax, dword ptr [edi + 0x468] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x468u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74d4c8: mov ecx, dword ptr [esi + 0x468] */
  ecx = R32((uint32_t)(esi + 0x468u));
/* 74d4ce: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74d4d1: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74d4d3: mov dword ptr [esi + 0x468], ecx */
  W32((uint32_t)(esi + 0x468u), ecx);
/* 74d4d9: mov eax, ecx */
  eax = ecx;
/* 74d4db: mov ecx, dword ptr [edi + 0x468] */
  ecx = R32((uint32_t)(edi + 0x468u));
/* 74d4e1: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74d4e3: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74d4e6: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74d4e8: mov dword ptr [esi + 0x468], ecx */
  W32((uint32_t)(esi + 0x468u), ecx);
/* 74d4ee: mov edx, dword ptr [edi + 0x46c] */
  edx = R32((uint32_t)(edi + 0x46cu));
/* 74d4f4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74d4f5: mov dword ptr [esi + 0x46c], edx */
  W32((uint32_t)(esi + 0x46cu), edx);
/* 74d4fb: mov eax, esi */
  eax = esi;
/* 74d4fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74d4fe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74d550(void) {
  LOAD_REGS();
L_74d550: /* 74d550: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74d551: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74d552: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 74d556: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74d557: mov esi, ecx */
  esi = ecx;
/* 74d559: call 0x6cbaff */
  esp -= 4; W32(esp, 0x74d55eu); SPILL(); f_6cbaff(); if (g_unwind) return; RELOAD();
/* 74d55e: mov eax, dword ptr [edi + 0x438] */
  eax = R32((uint32_t)(edi + 0x438u));
/* 74d564: mov dword ptr [esi + 0x438], eax */
  W32((uint32_t)(esi + 0x438u), eax);
/* 74d56a: mov ecx, dword ptr [edi + 0x43c] */
  ecx = R32((uint32_t)(edi + 0x43cu));
/* 74d570: mov dword ptr [esi + 0x43c], ecx */
  W32((uint32_t)(esi + 0x43cu), ecx);
/* 74d576: lea edx, [edi + 0x440] */
  edx = (uint32_t)(edi + 0x440u);
/* 74d57c: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 74d57e: lea eax, [esi + 0x440] */
  eax = (uint32_t)(esi + 0x440u);
/* 74d584: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 74d586: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 74d589: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 74d58c: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 74d58f: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 74d592: lea eax, [edi + 0x44c] */
  eax = (uint32_t)(edi + 0x44cu);
/* 74d598: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 74d59a: lea ecx, [esi + 0x44c] */
  ecx = (uint32_t)(esi + 0x44cu);
/* 74d5a0: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 74d5a2: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 74d5a5: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 74d5a8: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 74d5ab: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 74d5ae: lea ecx, [edi + 0x458] */
  ecx = (uint32_t)(edi + 0x458u);
/* 74d5b4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 74d5b6: lea edx, [esi + 0x458] */
  edx = (uint32_t)(esi + 0x458u);
/* 74d5bc: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 74d5be: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 74d5c1: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 74d5c4: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 74d5c7: mov eax, dword ptr [esi + 0x468] */
  eax = R32((uint32_t)(esi + 0x468u));
/* 74d5cd: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 74d5d0: mov edx, dword ptr [edi + 0x464] */
  edx = R32((uint32_t)(edi + 0x464u));
/* 74d5d6: mov dword ptr [esi + 0x464], edx */
  W32((uint32_t)(esi + 0x464u), edx);
/* 74d5dc: xor eax, dword ptr [edi + 0x468] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x468u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74d5e2: mov ecx, dword ptr [esi + 0x468] */
  ecx = R32((uint32_t)(esi + 0x468u));
/* 74d5e8: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74d5eb: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74d5ed: mov dword ptr [esi + 0x468], ecx */
  W32((uint32_t)(esi + 0x468u), ecx);
/* 74d5f3: mov eax, ecx */
  eax = ecx;
/* 74d5f5: mov ecx, dword ptr [edi + 0x468] */
  ecx = R32((uint32_t)(edi + 0x468u));
/* 74d5fb: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74d5fd: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74d600: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74d602: mov dword ptr [esi + 0x468], ecx */
  W32((uint32_t)(esi + 0x468u), ecx);
/* 74d608: mov edx, dword ptr [edi + 0x46c] */
  edx = R32((uint32_t)(edi + 0x46cu));
/* 74d60e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74d60f: mov dword ptr [esi + 0x46c], edx */
  W32((uint32_t)(esi + 0x46cu), edx);
/* 74d615: mov eax, esi */
  eax = esi;
/* 74d617: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74d618: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74d660(void) {
  LOAD_REGS();
L_74d660: /* 74d660: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74d661: mov esi, ecx */
  esi = ecx;
/* 74d663: call 0x6c1d9d */
  esp -= 4; W32(esp, 0x74d668u); SPILL(); f_6c1d9d(); if (g_unwind) return; RELOAD();
/* 74d668: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74d66d: je 0x74d67e */
  if (zf) goto L_74d67e;
L_74d66f: /* 74d66f: push 0x470 */
  { uint32_t v = 0x470u; esp -= 4; W32(esp, v); }
/* 74d674: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74d675: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74d67bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74d67b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74d67e: /* 74d67e: mov eax, esi */
  eax = esi;
/* 74d680: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74d681: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74d6a0(void) {
  LOAD_REGS();
L_74d6a0: /* 74d6a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 74d6a1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 74d6a5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74d6a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74d6a9: mov esi, ecx */
  esi = ecx;
/* 74d6ab: je 0x74d6e0 */
  if (zf) goto L_74d6e0;
L_74d6ad: /* 74d6ad: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 74d6b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74d6b1: push 0x6c1d9d */
  { uint32_t v = 0x6c1d9du; esp -= 4; W32(esp, v); }
/* 74d6b6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 74d6b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74d6ba: push 0x470 */
  { uint32_t v = 0x470u; esp -= 4; W32(esp, v); }
/* 74d6bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74d6c0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x74d6c5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 74d6c5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74d6c8: je 0x74d6d8 */
  if (zf) goto L_74d6d8;
L_74d6ca: /* 74d6ca: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 74d6d0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 74d6d2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 74d6d4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74d6d5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x74d6d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_74d6d8: /* 74d6d8: mov eax, edi */
  eax = edi;
/* 74d6da: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74d6db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74d6dc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74d6dd: ret 4 */
  esp += 8; SPILL(); return;
L_74d6e0: /* 74d6e0: mov ecx, esi */
  ecx = esi;
/* 74d6e2: call 0x6c1d9d */
  esp -= 4; W32(esp, 0x74d6e7u); SPILL(); f_6c1d9d(); if (g_unwind) return; RELOAD();
/* 74d6e7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74d6ea: je 0x74d6fb */
  if (zf) goto L_74d6fb;
L_74d6ec: /* 74d6ec: push 0x470 */
  { uint32_t v = 0x470u; esp -= 4; W32(esp, v); }
/* 74d6f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74d6f2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74d6f8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74d6f8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74d6fb: /* 74d6fb: mov eax, esi */
  eax = esi;
/* 74d6fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74d6fe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74d6ff: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74d730(void) {
  LOAD_REGS();
L_74d730: /* 74d730: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 74d732: push 0x9c7cf8 */
  { uint32_t v = 0x9c7cf8u; esp -= 4; W32(esp, v); }
/* 74d737: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74d73d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74d73e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 74d745: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74d746: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74d747: mov esi, ecx */
  esi = ecx;
/* 74d749: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74d74d: mov dword ptr [esi], 0xa02128 */
  W32((uint32_t)(esi), 0xa02128u);
/* 74d753: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 74d75b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x74d761u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 74d761: mov ecx, esi */
  ecx = esi;
/* 74d763: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 74d76b: call 0x6c83f0 */
  esp -= 4; W32(esp, 0x74d770u); SPILL(); f_6c83f0(); if (g_unwind) return; RELOAD();
/* 74d770: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 74d774: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74d775: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74d77c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74d77f: ret  */
  esp += 4; SPILL(); return;
}

void f_74d7a0(void) {
  LOAD_REGS();
L_74d7a0: /* 74d7a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74d7a1: mov esi, ecx */
  esi = ecx;
/* 74d7a3: call 0x6c77e3 */
  esp -= 4; W32(esp, 0x74d7a8u); SPILL(); f_6c77e3(); if (g_unwind) return; RELOAD();
/* 74d7a8: mov dword ptr [esi], 0xa02128 */
  W32((uint32_t)(esi), 0xa02128u);
/* 74d7ae: mov eax, esi */
  eax = esi;
/* 74d7b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74d7b1: ret  */
  esp += 4; SPILL(); return;
}

void f_74d7d0(void) {
  LOAD_REGS();
L_74d7d0: /* 74d7d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 74d7d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74d7d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74d7d6: mov esi, ecx */
  esi = ecx;
/* 74d7d8: call 0x6cbeba */
  esp -= 4; W32(esp, 0x74d7ddu); SPILL(); f_6cbeba(); if (g_unwind) return; RELOAD();
/* 74d7dd: mov dword ptr [esi], 0xa02128 */
  W32((uint32_t)(esi), 0xa02128u);
/* 74d7e3: mov eax, esi */
  eax = esi;
/* 74d7e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74d7e6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74d800(void) {
  LOAD_REGS();
L_74d800: /* 74d800: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 74d804: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74d805: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74d806: mov esi, ecx */
  esi = ecx;
/* 74d808: call 0x6cbaff */
  esp -= 4; W32(esp, 0x74d80du); SPILL(); f_6cbaff(); if (g_unwind) return; RELOAD();
/* 74d80d: mov eax, esi */
  eax = esi;
/* 74d80f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74d810: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74d830(void) {
  LOAD_REGS();
L_74d830: /* 74d830: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74d831: mov esi, ecx */
  esi = ecx;
/* 74d833: call 0x6c9566 */
  esp -= 4; W32(esp, 0x74d838u); SPILL(); f_6c9566(); if (g_unwind) return; RELOAD();
/* 74d838: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74d83d: je 0x74d84e */
  if (zf) goto L_74d84e;
L_74d83f: /* 74d83f: push 0x438 */
  { uint32_t v = 0x438u; esp -= 4; W32(esp, v); }
/* 74d844: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74d845: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74d84bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74d84b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74d84e: /* 74d84e: mov eax, esi */
  eax = esi;
/* 74d850: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74d851: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74d870(void) {
  LOAD_REGS();
L_74d870: /* 74d870: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 74d871: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 74d875: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74d878: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74d879: mov esi, ecx */
  esi = ecx;
/* 74d87b: je 0x74d8b0 */
  if (zf) goto L_74d8b0;
L_74d87d: /* 74d87d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 74d880: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74d881: push 0x6c9566 */
  { uint32_t v = 0x6c9566u; esp -= 4; W32(esp, v); }
/* 74d886: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 74d889: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74d88a: push 0x438 */
  { uint32_t v = 0x438u; esp -= 4; W32(esp, v); }
/* 74d88f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74d890: call 0x99ca3d */
  esp -= 4; W32(esp, 0x74d895u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 74d895: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74d898: je 0x74d8a8 */
  if (zf) goto L_74d8a8;
L_74d89a: /* 74d89a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 74d8a0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 74d8a2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 74d8a4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74d8a5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x74d8a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_74d8a8: /* 74d8a8: mov eax, edi */
  eax = edi;
/* 74d8aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74d8ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74d8ac: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74d8ad: ret 4 */
  esp += 8; SPILL(); return;
L_74d8b0: /* 74d8b0: mov ecx, esi */
  ecx = esi;
/* 74d8b2: call 0x6c9566 */
  esp -= 4; W32(esp, 0x74d8b7u); SPILL(); f_6c9566(); if (g_unwind) return; RELOAD();
/* 74d8b7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74d8ba: je 0x74d8cb */
  if (zf) goto L_74d8cb;
L_74d8bc: /* 74d8bc: push 0x438 */
  { uint32_t v = 0x438u; esp -= 4; W32(esp, v); }
/* 74d8c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74d8c2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74d8c8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74d8c8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74d8cb: /* 74d8cb: mov eax, esi */
  eax = esi;
/* 74d8cd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74d8ce: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74d8cf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74d900(void) {
  LOAD_REGS();
L_74d900: /* 74d900: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 74d902: push 0x9c7d70 */
  { uint32_t v = 0x9c7d70u; esp -= 4; W32(esp, v); }
/* 74d907: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74d90d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74d90e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 74d915: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74d916: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74d917: mov esi, ecx */
  esi = ecx;
/* 74d919: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74d91d: mov dword ptr [esi], 0xa02318 */
  W32((uint32_t)(esi), 0xa02318u);
/* 74d923: mov dword ptr [esp + 0x10], 6 */
  W32((uint32_t)(esp + 0x10u), 0x6u);
/* 74d92b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x74d931u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 74d931: lea ecx, [esi + 0x3a4] */
  ecx = (uint32_t)(esi + 0x3a4u);
/* 74d937: mov byte ptr [esp + 0x10], 5 */
  W8((uint32_t)(esp + 0x10u), 0x5u);
/* 74d93c: call 0x6c55c9 */
  esp -= 4; W32(esp, 0x74d941u); SPILL(); f_6c55c9(); if (g_unwind) return; RELOAD();
/* 74d941: lea ecx, [esi + 0x390] */
  ecx = (uint32_t)(esi + 0x390u);
/* 74d947: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* 74d94c: call 0x6c55c9 */
  esp -= 4; W32(esp, 0x74d951u); SPILL(); f_6c55c9(); if (g_unwind) return; RELOAD();
/* 74d951: lea ecx, [esi + 0x374] */
  ecx = (uint32_t)(esi + 0x374u);
/* 74d957: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 74d95c: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x74d962u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 74d962: lea ecx, [esi + 0x354] */
  ecx = (uint32_t)(esi + 0x354u);
/* 74d968: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 74d96d: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x74d973u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 74d973: lea ecx, [esi + 0x348] */
  ecx = (uint32_t)(esi + 0x348u);
/* 74d979: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 74d97e: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x74d984u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 74d984: lea ecx, [esi + 0x33c] */
  ecx = (uint32_t)(esi + 0x33cu);
/* 74d98a: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 74d98f: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x74d995u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 74d995: mov ecx, esi */
  ecx = esi;
/* 74d997: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 74d99f: call 0x6c60a5 */
  esp -= 4; W32(esp, 0x74d9a4u); SPILL(); f_6c60a5(); if (g_unwind) return; RELOAD();
/* 74d9a4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 74d9a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74d9a9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74d9b0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74d9b3: ret  */
  esp += 4; SPILL(); return;
}

void f_74d9f0(void) {
  LOAD_REGS();
L_74d9f0: /* 74d9f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 74d9f2: push 0x9c7df2 */
  { uint32_t v = 0x9c7df2u; esp -= 4; W32(esp, v); }
/* 74d9f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74d9fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74d9fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 74da05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74da06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74da07: mov esi, ecx */
  esi = ecx;
/* 74da09: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74da0d: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x74da12u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 74da12: lea ecx, [esi + 0x33c] */
  ecx = (uint32_t)(esi + 0x33cu);
/* 74da18: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 74da20: mov dword ptr [esi], 0xa02318 */
  W32((uint32_t)(esi), 0xa02318u);
/* 74da26: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x74da2cu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 74da2c: lea ecx, [esi + 0x348] */
  ecx = (uint32_t)(esi + 0x348u);
/* 74da32: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 74da37: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x74da3du); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 74da3d: lea ecx, [esi + 0x354] */
  ecx = (uint32_t)(esi + 0x354u);
/* 74da43: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 74da48: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x74da4eu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 74da4e: lea ecx, [esi + 0x374] */
  ecx = (uint32_t)(esi + 0x374u);
/* 74da54: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 74da59: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x74da5fu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 74da5f: lea ecx, [esi + 0x390] */
  ecx = (uint32_t)(esi + 0x390u);
/* 74da65: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 74da67: mov byte ptr [esp + 0x14], 4 */
  W8((uint32_t)(esp + 0x14u), 0x4u);
/* 74da6c: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x74da72u); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 74da72: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 74da74: lea ecx, [esi + 0x3a4] */
  ecx = (uint32_t)(esi + 0x3a4u);
/* 74da7a: mov byte ptr [esp + 0x14], 5 */
  W8((uint32_t)(esp + 0x14u), 0x5u);
/* 74da7f: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x74da85u); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 74da85: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 74da89: mov eax, esi */
  eax = esi;
/* 74da8b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74da8c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74da93: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74da96: ret  */
  esp += 4; SPILL(); return;
}

void f_74dad0(void) {
  LOAD_REGS();
L_74dad0: /* 74dad0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 74dad2: push 0x9c7e72 */
  { uint32_t v = 0x9c7e72u; esp -= 4; W32(esp, v); }
/* 74dad7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74dadd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74dade: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 74dae5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74dae6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74dae7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74dae8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 74daec: mov esi, ecx */
  esi = ecx;
/* 74daee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74daef: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 74daf3: call 0x6c1456 */
  esp -= 4; W32(esp, 0x74daf8u); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 74daf8: lea eax, [edi + 0x33c] */
  eax = (uint32_t)(edi + 0x33cu);
/* 74dafe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74daff: lea ecx, [esi + 0x33c] */
  ecx = (uint32_t)(esi + 0x33cu);
/* 74db05: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 74db0d: mov dword ptr [esi], 0xa02318 */
  W32((uint32_t)(esi), 0xa02318u);
/* 74db13: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x74db19u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 74db19: lea ecx, [edi + 0x348] */
  ecx = (uint32_t)(edi + 0x348u);
/* 74db1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74db20: lea ecx, [esi + 0x348] */
  ecx = (uint32_t)(esi + 0x348u);
/* 74db26: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 74db2b: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x74db31u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 74db31: lea edx, [edi + 0x354] */
  edx = (uint32_t)(edi + 0x354u);
/* 74db37: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 74db38: lea ecx, [esi + 0x354] */
  ecx = (uint32_t)(esi + 0x354u);
/* 74db3e: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* 74db43: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x74db49u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 74db49: mov eax, dword ptr [edi + 0x360] */
  eax = R32((uint32_t)(edi + 0x360u));
/* 74db4f: mov dword ptr [esi + 0x360], eax */
  W32((uint32_t)(esi + 0x360u), eax);
/* 74db55: lea ecx, [edi + 0x364] */
  ecx = (uint32_t)(edi + 0x364u);
/* 74db5b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 74db5d: lea edx, [esi + 0x364] */
  edx = (uint32_t)(esi + 0x364u);
/* 74db63: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 74db65: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 74db68: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 74db6b: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 74db6e: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 74db71: mov edx, dword ptr [edi + 0x370] */
  edx = R32((uint32_t)(edi + 0x370u));
/* 74db77: lea eax, [edi + 0x374] */
  eax = (uint32_t)(edi + 0x374u);
/* 74db7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74db7e: lea ecx, [esi + 0x374] */
  ecx = (uint32_t)(esi + 0x374u);
/* 74db84: mov byte ptr [esp + 0x18], 3 */
  W8((uint32_t)(esp + 0x18u), 0x3u);
/* 74db89: mov dword ptr [esi + 0x370], edx */
  W32((uint32_t)(esi + 0x370u), edx);
/* 74db8f: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x74db95u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 74db95: mov eax, dword ptr [edi + 0x380] */
  eax = R32((uint32_t)(edi + 0x380u));
/* 74db9b: mov ecx, dword ptr [esi + 0x380] */
  ecx = R32((uint32_t)(esi + 0x380u));
/* 74dba1: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74dba3: mov eax, dword ptr [esi + 0x380] */
  eax = R32((uint32_t)(esi + 0x380u));
/* 74dba9: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74dbac: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74dbae: mov dword ptr [esi + 0x380], eax */
  W32((uint32_t)(esi + 0x380u), eax);
/* 74dbb4: mov ecx, eax */
  ecx = eax;
/* 74dbb6: mov eax, dword ptr [edi + 0x380] */
  eax = R32((uint32_t)(edi + 0x380u));
/* 74dbbc: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74dbbe: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74dbc1: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74dbc3: mov dword ptr [esi + 0x380], eax */
  W32((uint32_t)(esi + 0x380u), eax);
/* 74dbc9: mov ecx, dword ptr [edi + 0x380] */
  ecx = R32((uint32_t)(edi + 0x380u));
/* 74dbcf: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74dbd1: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74dbd4: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74dbd6: mov dword ptr [esi + 0x380], ecx */
  W32((uint32_t)(esi + 0x380u), ecx);
/* 74dbdc: mov eax, dword ptr [edi + 0x380] */
  eax = R32((uint32_t)(edi + 0x380u));
/* 74dbe2: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74dbe4: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74dbe7: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74dbe9: mov dword ptr [esi + 0x380], eax */
  W32((uint32_t)(esi + 0x380u), eax);
/* 74dbef: mov ecx, dword ptr [edi + 0x380] */
  ecx = R32((uint32_t)(edi + 0x380u));
/* 74dbf5: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74dbf7: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74dbfa: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74dbfc: mov dword ptr [esi + 0x380], ecx */
  W32((uint32_t)(esi + 0x380u), ecx);
/* 74dc02: mov eax, dword ptr [edi + 0x380] */
  eax = R32((uint32_t)(edi + 0x380u));
/* 74dc08: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74dc0a: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74dc0d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74dc0f: mov dword ptr [esi + 0x380], eax */
  W32((uint32_t)(esi + 0x380u), eax);
/* 74dc15: mov ecx, dword ptr [edi + 0x380] */
  ecx = R32((uint32_t)(edi + 0x380u));
/* 74dc1b: mov byte ptr [esp + 0x14], 4 */
  W8((uint32_t)(esp + 0x14u), 0x4u);
/* 74dc20: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74dc22: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74dc25: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74dc27: mov dword ptr [esi + 0x380], ecx */
  W32((uint32_t)(esi + 0x380u), ecx);
/* 74dc2d: mov edx, dword ptr [edi + 0x380] */
  edx = R32((uint32_t)(edi + 0x380u));
/* 74dc33: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74dc35: and edx, 0x80 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 74dc3b: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74dc3d: mov dword ptr [esi + 0x380], edx */
  W32((uint32_t)(esi + 0x380u), edx);
/* 74dc43: mov eax, dword ptr [edi + 0x384] */
  eax = R32((uint32_t)(edi + 0x384u));
/* 74dc49: mov dword ptr [esi + 0x384], eax */
  W32((uint32_t)(esi + 0x384u), eax);
/* 74dc4f: mov ecx, dword ptr [edi + 0x388] */
  ecx = R32((uint32_t)(edi + 0x388u));
/* 74dc55: mov dword ptr [esi + 0x388], ecx */
  W32((uint32_t)(esi + 0x388u), ecx);
/* 74dc5b: mov edx, dword ptr [edi + 0x38c] */
  edx = R32((uint32_t)(edi + 0x38cu));
/* 74dc61: lea eax, [edi + 0x390] */
  eax = (uint32_t)(edi + 0x390u);
/* 74dc67: lea ecx, [esi + 0x390] */
  ecx = (uint32_t)(esi + 0x390u);
/* 74dc6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74dc6e: mov dword ptr [esi + 0x38c], edx */
  W32((uint32_t)(esi + 0x38cu), edx);
/* 74dc74: call 0x6c6d6b */
  esp -= 4; W32(esp, 0x74dc79u); SPILL(); f_6c6d6b(); if (g_unwind) return; RELOAD();
/* 74dc79: mov ecx, dword ptr [edi + 0x39c] */
  ecx = R32((uint32_t)(edi + 0x39cu));
/* 74dc7f: mov dword ptr [esi + 0x39c], ecx */
  W32((uint32_t)(esi + 0x39cu), ecx);
/* 74dc85: mov edx, dword ptr [edi + 0x3a0] */
  edx = R32((uint32_t)(edi + 0x3a0u));
/* 74dc8b: lea eax, [edi + 0x3a4] */
  eax = (uint32_t)(edi + 0x3a4u);
/* 74dc91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74dc92: lea ecx, [esi + 0x3a4] */
  ecx = (uint32_t)(esi + 0x3a4u);
/* 74dc98: mov byte ptr [esp + 0x18], 5 */
  W8((uint32_t)(esp + 0x18u), 0x5u);
/* 74dc9d: mov dword ptr [esi + 0x3a0], edx */
  W32((uint32_t)(esi + 0x3a0u), edx);
/* 74dca3: call 0x6c6d6b */
  esp -= 4; W32(esp, 0x74dca8u); SPILL(); f_6c6d6b(); if (g_unwind) return; RELOAD();
/* 74dca8: mov ecx, dword ptr [edi + 0x3b0] */
  ecx = R32((uint32_t)(edi + 0x3b0u));
/* 74dcae: mov dword ptr [esi + 0x3b0], ecx */
  W32((uint32_t)(esi + 0x3b0u), ecx);
/* 74dcb4: mov edx, dword ptr [edi + 0x3b4] */
  edx = R32((uint32_t)(edi + 0x3b4u));
/* 74dcba: mov dword ptr [esi + 0x3b4], edx */
  W32((uint32_t)(esi + 0x3b4u), edx);
/* 74dcc0: mov eax, dword ptr [edi + 0x3b8] */
  eax = R32((uint32_t)(edi + 0x3b8u));
/* 74dcc6: mov dword ptr [esi + 0x3b8], eax */
  W32((uint32_t)(esi + 0x3b8u), eax);
/* 74dccc: lea ecx, [edi + 0x3bc] */
  ecx = (uint32_t)(edi + 0x3bcu);
/* 74dcd2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 74dcd4: lea edx, [esi + 0x3bc] */
  edx = (uint32_t)(esi + 0x3bcu);
/* 74dcda: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 74dcdc: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 74dcdf: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 74dce2: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 74dce5: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 74dce8: mov edx, dword ptr [edi + 0x3c8] */
  edx = R32((uint32_t)(edi + 0x3c8u));
/* 74dcee: mov dword ptr [esi + 0x3c8], edx */
  W32((uint32_t)(esi + 0x3c8u), edx);
/* 74dcf4: mov eax, dword ptr [edi + 0x3cc] */
  eax = R32((uint32_t)(edi + 0x3ccu));
/* 74dcfa: mov dword ptr [esi + 0x3cc], eax */
  W32((uint32_t)(esi + 0x3ccu), eax);
/* 74dd00: lea ecx, [edi + 0x3d0] */
  ecx = (uint32_t)(edi + 0x3d0u);
/* 74dd06: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 74dd08: lea edx, [esi + 0x3d0] */
  edx = (uint32_t)(esi + 0x3d0u);
/* 74dd0e: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 74dd10: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 74dd13: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 74dd16: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 74dd19: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 74dd1c: mov edx, dword ptr [edi + 0x3dc] */
  edx = R32((uint32_t)(edi + 0x3dcu));
/* 74dd22: mov dword ptr [esi + 0x3dc], edx */
  W32((uint32_t)(esi + 0x3dcu), edx);
/* 74dd28: mov eax, dword ptr [edi + 0x3e0] */
  eax = R32((uint32_t)(edi + 0x3e0u));
/* 74dd2e: mov dword ptr [esi + 0x3e0], eax */
  W32((uint32_t)(esi + 0x3e0u), eax);
/* 74dd34: mov ecx, dword ptr [edi + 0x3e4] */
  ecx = R32((uint32_t)(edi + 0x3e4u));
/* 74dd3a: mov dword ptr [esi + 0x3e4], ecx */
  W32((uint32_t)(esi + 0x3e4u), ecx);
/* 74dd40: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 74dd44: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74dd45: mov eax, esi */
  eax = esi;
/* 74dd47: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74dd48: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74dd4f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74dd52: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74de10(void) {
  LOAD_REGS();
L_74de10: /* 74de10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74de11: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74de12: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 74de16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74de17: mov esi, ecx */
  esi = ecx;
/* 74de19: call 0x6c5cef */
  esp -= 4; W32(esp, 0x74de1eu); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 74de1e: lea eax, [edi + 0x33c] */
  eax = (uint32_t)(edi + 0x33cu);
/* 74de24: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74de25: lea ecx, [esi + 0x33c] */
  ecx = (uint32_t)(esi + 0x33cu);
/* 74de2b: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x74de31u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 74de31: lea ecx, [edi + 0x348] */
  ecx = (uint32_t)(edi + 0x348u);
/* 74de37: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74de38: lea ecx, [esi + 0x348] */
  ecx = (uint32_t)(esi + 0x348u);
/* 74de3e: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x74de44u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 74de44: lea edx, [edi + 0x354] */
  edx = (uint32_t)(edi + 0x354u);
/* 74de4a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 74de4b: lea ecx, [esi + 0x354] */
  ecx = (uint32_t)(esi + 0x354u);
/* 74de51: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x74de57u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 74de57: mov eax, dword ptr [edi + 0x360] */
  eax = R32((uint32_t)(edi + 0x360u));
/* 74de5d: mov dword ptr [esi + 0x360], eax */
  W32((uint32_t)(esi + 0x360u), eax);
/* 74de63: lea ecx, [edi + 0x364] */
  ecx = (uint32_t)(edi + 0x364u);
/* 74de69: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 74de6b: lea edx, [esi + 0x364] */
  edx = (uint32_t)(esi + 0x364u);
/* 74de71: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 74de73: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 74de76: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 74de79: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 74de7c: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 74de7f: mov edx, dword ptr [edi + 0x370] */
  edx = R32((uint32_t)(edi + 0x370u));
/* 74de85: lea eax, [edi + 0x374] */
  eax = (uint32_t)(edi + 0x374u);
/* 74de8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74de8c: lea ecx, [esi + 0x374] */
  ecx = (uint32_t)(esi + 0x374u);
/* 74de92: mov dword ptr [esi + 0x370], edx */
  W32((uint32_t)(esi + 0x370u), edx);
/* 74de98: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x74de9eu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 74de9e: mov eax, dword ptr [edi + 0x380] */
  eax = R32((uint32_t)(edi + 0x380u));
/* 74dea4: mov ecx, dword ptr [esi + 0x380] */
  ecx = R32((uint32_t)(esi + 0x380u));
/* 74deaa: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74deac: mov eax, dword ptr [esi + 0x380] */
  eax = R32((uint32_t)(esi + 0x380u));
/* 74deb2: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74deb5: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74deb7: mov dword ptr [esi + 0x380], eax */
  W32((uint32_t)(esi + 0x380u), eax);
/* 74debd: mov ecx, eax */
  ecx = eax;
/* 74debf: mov eax, dword ptr [edi + 0x380] */
  eax = R32((uint32_t)(edi + 0x380u));
/* 74dec5: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74dec7: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74deca: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74decc: mov dword ptr [esi + 0x380], eax */
  W32((uint32_t)(esi + 0x380u), eax);
/* 74ded2: mov ecx, dword ptr [edi + 0x380] */
  ecx = R32((uint32_t)(edi + 0x380u));
/* 74ded8: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74deda: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74dedd: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74dedf: mov dword ptr [esi + 0x380], ecx */
  W32((uint32_t)(esi + 0x380u), ecx);
/* 74dee5: mov eax, dword ptr [edi + 0x380] */
  eax = R32((uint32_t)(edi + 0x380u));
/* 74deeb: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74deed: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74def0: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74def2: mov dword ptr [esi + 0x380], eax */
  W32((uint32_t)(esi + 0x380u), eax);
/* 74def8: mov ecx, dword ptr [edi + 0x380] */
  ecx = R32((uint32_t)(edi + 0x380u));
/* 74defe: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74df00: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74df03: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74df05: mov dword ptr [esi + 0x380], ecx */
  W32((uint32_t)(esi + 0x380u), ecx);
/* 74df0b: mov eax, dword ptr [edi + 0x380] */
  eax = R32((uint32_t)(edi + 0x380u));
/* 74df11: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74df13: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74df16: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74df18: mov dword ptr [esi + 0x380], eax */
  W32((uint32_t)(esi + 0x380u), eax);
/* 74df1e: mov ecx, dword ptr [edi + 0x380] */
  ecx = R32((uint32_t)(edi + 0x380u));
/* 74df24: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74df26: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74df29: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74df2b: mov dword ptr [esi + 0x380], ecx */
  W32((uint32_t)(esi + 0x380u), ecx);
/* 74df31: mov edx, dword ptr [edi + 0x380] */
  edx = R32((uint32_t)(edi + 0x380u));
/* 74df37: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74df39: and edx, 0x80 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 74df3f: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74df41: mov dword ptr [esi + 0x380], edx */
  W32((uint32_t)(esi + 0x380u), edx);
/* 74df47: mov eax, dword ptr [edi + 0x384] */
  eax = R32((uint32_t)(edi + 0x384u));
/* 74df4d: mov dword ptr [esi + 0x384], eax */
  W32((uint32_t)(esi + 0x384u), eax);
/* 74df53: mov ecx, dword ptr [edi + 0x388] */
  ecx = R32((uint32_t)(edi + 0x388u));
/* 74df59: mov dword ptr [esi + 0x388], ecx */
  W32((uint32_t)(esi + 0x388u), ecx);
/* 74df5f: mov edx, dword ptr [edi + 0x38c] */
  edx = R32((uint32_t)(edi + 0x38cu));
/* 74df65: lea eax, [edi + 0x390] */
  eax = (uint32_t)(edi + 0x390u);
/* 74df6b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74df6c: lea ecx, [esi + 0x390] */
  ecx = (uint32_t)(esi + 0x390u);
/* 74df72: mov dword ptr [esi + 0x38c], edx */
  W32((uint32_t)(esi + 0x38cu), edx);
/* 74df78: call 0x6c78ab */
  esp -= 4; W32(esp, 0x74df7du); SPILL(); f_6c78ab(); if (g_unwind) return; RELOAD();
/* 74df7d: mov ecx, dword ptr [edi + 0x39c] */
  ecx = R32((uint32_t)(edi + 0x39cu));
/* 74df83: mov dword ptr [esi + 0x39c], ecx */
  W32((uint32_t)(esi + 0x39cu), ecx);
/* 74df89: mov edx, dword ptr [edi + 0x3a0] */
  edx = R32((uint32_t)(edi + 0x3a0u));
/* 74df8f: lea eax, [edi + 0x3a4] */
  eax = (uint32_t)(edi + 0x3a4u);
/* 74df95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74df96: lea ecx, [esi + 0x3a4] */
  ecx = (uint32_t)(esi + 0x3a4u);
/* 74df9c: mov dword ptr [esi + 0x3a0], edx */
  W32((uint32_t)(esi + 0x3a0u), edx);
/* 74dfa2: call 0x6c78ab */
  esp -= 4; W32(esp, 0x74dfa7u); SPILL(); f_6c78ab(); if (g_unwind) return; RELOAD();
/* 74dfa7: mov ecx, dword ptr [edi + 0x3b0] */
  ecx = R32((uint32_t)(edi + 0x3b0u));
/* 74dfad: mov dword ptr [esi + 0x3b0], ecx */
  W32((uint32_t)(esi + 0x3b0u), ecx);
/* 74dfb3: mov edx, dword ptr [edi + 0x3b4] */
  edx = R32((uint32_t)(edi + 0x3b4u));
/* 74dfb9: mov dword ptr [esi + 0x3b4], edx */
  W32((uint32_t)(esi + 0x3b4u), edx);
/* 74dfbf: mov eax, dword ptr [edi + 0x3b8] */
  eax = R32((uint32_t)(edi + 0x3b8u));
/* 74dfc5: mov dword ptr [esi + 0x3b8], eax */
  W32((uint32_t)(esi + 0x3b8u), eax);
/* 74dfcb: lea ecx, [edi + 0x3bc] */
  ecx = (uint32_t)(edi + 0x3bcu);
/* 74dfd1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 74dfd3: lea edx, [esi + 0x3bc] */
  edx = (uint32_t)(esi + 0x3bcu);
/* 74dfd9: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 74dfdb: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 74dfde: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 74dfe1: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 74dfe4: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 74dfe7: mov edx, dword ptr [edi + 0x3c8] */
  edx = R32((uint32_t)(edi + 0x3c8u));
/* 74dfed: mov dword ptr [esi + 0x3c8], edx */
  W32((uint32_t)(esi + 0x3c8u), edx);
/* 74dff3: mov eax, dword ptr [edi + 0x3cc] */
  eax = R32((uint32_t)(edi + 0x3ccu));
/* 74dff9: mov dword ptr [esi + 0x3cc], eax */
  W32((uint32_t)(esi + 0x3ccu), eax);
/* 74dfff: lea ecx, [edi + 0x3d0] */
  ecx = (uint32_t)(edi + 0x3d0u);
/* 74e005: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 74e007: lea edx, [esi + 0x3d0] */
  edx = (uint32_t)(esi + 0x3d0u);
/* 74e00d: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 74e00f: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 74e012: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 74e015: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 74e018: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 74e01b: mov edx, dword ptr [edi + 0x3dc] */
  edx = R32((uint32_t)(edi + 0x3dcu));
/* 74e021: mov dword ptr [esi + 0x3dc], edx */
  W32((uint32_t)(esi + 0x3dcu), edx);
/* 74e027: mov eax, dword ptr [edi + 0x3e0] */
  eax = R32((uint32_t)(edi + 0x3e0u));
/* 74e02d: mov dword ptr [esi + 0x3e0], eax */
  W32((uint32_t)(esi + 0x3e0u), eax);
/* 74e033: mov ecx, dword ptr [edi + 0x3e4] */
  ecx = R32((uint32_t)(edi + 0x3e4u));
/* 74e039: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74e03a: mov dword ptr [esi + 0x3e4], ecx */
  W32((uint32_t)(esi + 0x3e4u), ecx);
/* 74e040: mov eax, esi */
  eax = esi;
/* 74e042: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74e043: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74e0e0(void) {
  LOAD_REGS();
L_74e0e0: /* 74e0e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74e0e1: mov esi, ecx */
  esi = ecx;
/* 74e0e3: call 0x6c6988 */
  esp -= 4; W32(esp, 0x74e0e8u); SPILL(); f_6c6988(); if (g_unwind) return; RELOAD();
/* 74e0e8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74e0ed: je 0x74e0fe */
  if (zf) goto L_74e0fe;
L_74e0ef: /* 74e0ef: push 0x3e8 */
  { uint32_t v = 0x3e8u; esp -= 4; W32(esp, v); }
/* 74e0f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74e0f5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74e0fbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74e0fb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74e0fe: /* 74e0fe: mov eax, esi */
  eax = esi;
/* 74e100: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74e101: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74e120(void) {
  LOAD_REGS();
L_74e120: /* 74e120: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 74e121: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 74e125: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74e128: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74e129: mov esi, ecx */
  esi = ecx;
/* 74e12b: je 0x74e160 */
  if (zf) goto L_74e160;
L_74e12d: /* 74e12d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 74e130: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74e131: push 0x6c6988 */
  { uint32_t v = 0x6c6988u; esp -= 4; W32(esp, v); }
/* 74e136: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 74e139: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74e13a: push 0x3e8 */
  { uint32_t v = 0x3e8u; esp -= 4; W32(esp, v); }
/* 74e13f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74e140: call 0x99ca3d */
  esp -= 4; W32(esp, 0x74e145u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 74e145: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74e148: je 0x74e158 */
  if (zf) goto L_74e158;
L_74e14a: /* 74e14a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 74e150: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 74e152: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 74e154: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74e155: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x74e158u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_74e158: /* 74e158: mov eax, edi */
  eax = edi;
/* 74e15a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74e15b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74e15c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74e15d: ret 4 */
  esp += 8; SPILL(); return;
L_74e160: /* 74e160: mov ecx, esi */
  ecx = esi;
/* 74e162: call 0x6c6988 */
  esp -= 4; W32(esp, 0x74e167u); SPILL(); f_6c6988(); if (g_unwind) return; RELOAD();
/* 74e167: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74e16a: je 0x74e17b */
  if (zf) goto L_74e17b;
L_74e16c: /* 74e16c: push 0x3e8 */
  { uint32_t v = 0x3e8u; esp -= 4; W32(esp, v); }
/* 74e171: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74e172: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74e178u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74e178: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74e17b: /* 74e17b: mov eax, esi */
  eax = esi;
/* 74e17d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74e17e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74e17f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74e1b0(void) {
  LOAD_REGS();
L_74e1b0: /* 74e1b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 74e1b2: push 0x9c7ea8 */
  { uint32_t v = 0x9c7ea8u; esp -= 4; W32(esp, v); }
/* 74e1b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74e1bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74e1be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 74e1c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74e1c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74e1c7: mov esi, ecx */
  esi = ecx;
/* 74e1c9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74e1cd: mov dword ptr [esi], 0xa024f8 */
  W32((uint32_t)(esi), 0xa024f8u);
/* 74e1d3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 74e1db: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x74e1e1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 74e1e1: mov ecx, esi */
  ecx = esi;
/* 74e1e3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 74e1eb: call 0x6c60a5 */
  esp -= 4; W32(esp, 0x74e1f0u); SPILL(); f_6c60a5(); if (g_unwind) return; RELOAD();
/* 74e1f0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 74e1f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74e1f5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74e1fc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74e1ff: ret  */
  esp += 4; SPILL(); return;
}

void f_74e220(void) {
  LOAD_REGS();
L_74e220: /* 74e220: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74e221: mov esi, ecx */
  esi = ecx;
/* 74e223: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x74e228u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 74e228: mov dword ptr [esi], 0xa024f8 */
  W32((uint32_t)(esi), 0xa024f8u);
/* 74e22e: mov eax, esi */
  eax = esi;
/* 74e230: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74e231: ret  */
  esp += 4; SPILL(); return;
}

void f_74e250(void) {
  LOAD_REGS();
L_74e250: /* 74e250: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74e251: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74e252: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 74e256: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74e257: mov esi, ecx */
  esi = ecx;
/* 74e259: call 0x6c1456 */
  esp -= 4; W32(esp, 0x74e25eu); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 74e25e: mov dword ptr [esi], 0xa024f8 */
  W32((uint32_t)(esi), 0xa024f8u);
/* 74e264: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 74e26a: mov edi, dword ptr [esi + 0x33c] */
  edi = R32((uint32_t)(esi + 0x33cu));
/* 74e270: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74e272: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74e275: mov ecx, edi */
  ecx = edi;
/* 74e277: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74e279: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74e27a: mov dword ptr [esi + 0x33c], ecx */
  W32((uint32_t)(esi + 0x33cu), ecx);
/* 74e280: mov eax, esi */
  eax = esi;
/* 74e282: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74e283: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74e2a0(void) {
  LOAD_REGS();
L_74e2a0: /* 74e2a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74e2a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74e2a2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 74e2a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74e2a7: mov esi, ecx */
  esi = ecx;
/* 74e2a9: call 0x6c5cef */
  esp -= 4; W32(esp, 0x74e2aeu); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 74e2ae: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 74e2b4: mov edi, dword ptr [esi + 0x33c] */
  edi = R32((uint32_t)(esi + 0x33cu));
/* 74e2ba: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74e2bc: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74e2bf: mov ecx, edi */
  ecx = edi;
/* 74e2c1: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74e2c3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74e2c4: mov dword ptr [esi + 0x33c], ecx */
  W32((uint32_t)(esi + 0x33cu), ecx);
/* 74e2ca: mov eax, esi */
  eax = esi;
/* 74e2cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74e2cd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74e2e0(void) {
  LOAD_REGS();
L_74e2e0: /* 74e2e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74e2e1: mov esi, ecx */
  esi = ecx;
/* 74e2e3: call 0x6c883c */
  esp -= 4; W32(esp, 0x74e2e8u); SPILL(); f_6c883c(); if (g_unwind) return; RELOAD();
/* 74e2e8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74e2ed: je 0x74e2fe */
  if (zf) goto L_74e2fe;
L_74e2ef: /* 74e2ef: push 0x340 */
  { uint32_t v = 0x340u; esp -= 4; W32(esp, v); }
/* 74e2f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74e2f5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74e2fbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74e2fb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74e2fe: /* 74e2fe: mov eax, esi */
  eax = esi;
/* 74e300: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74e301: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74e320(void) {
  LOAD_REGS();
L_74e320: /* 74e320: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 74e321: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 74e325: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74e328: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74e329: mov esi, ecx */
  esi = ecx;
/* 74e32b: je 0x74e360 */
  if (zf) goto L_74e360;
L_74e32d: /* 74e32d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 74e330: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74e331: push 0x6c883c */
  { uint32_t v = 0x6c883cu; esp -= 4; W32(esp, v); }
/* 74e336: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 74e339: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74e33a: push 0x340 */
  { uint32_t v = 0x340u; esp -= 4; W32(esp, v); }
/* 74e33f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74e340: call 0x99ca3d */
  esp -= 4; W32(esp, 0x74e345u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 74e345: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74e348: je 0x74e358 */
  if (zf) goto L_74e358;
L_74e34a: /* 74e34a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 74e350: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 74e352: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 74e354: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74e355: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x74e358u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_74e358: /* 74e358: mov eax, edi */
  eax = edi;
/* 74e35a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74e35b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74e35c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74e35d: ret 4 */
  esp += 8; SPILL(); return;
L_74e360: /* 74e360: mov ecx, esi */
  ecx = esi;
/* 74e362: call 0x6c883c */
  esp -= 4; W32(esp, 0x74e367u); SPILL(); f_6c883c(); if (g_unwind) return; RELOAD();
/* 74e367: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74e36a: je 0x74e37b */
  if (zf) goto L_74e37b;
L_74e36c: /* 74e36c: push 0x340 */
  { uint32_t v = 0x340u; esp -= 4; W32(esp, v); }
/* 74e371: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74e372: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74e378u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74e378: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74e37b: /* 74e37b: mov eax, esi */
  eax = esi;
/* 74e37d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74e37e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74e37f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74e3b0(void) {
  LOAD_REGS();
L_74e3b0: /* 74e3b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 74e3b2: push 0x9c7ed7 */
  { uint32_t v = 0x9c7ed7u; esp -= 4; W32(esp, v); }
/* 74e3b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74e3bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74e3be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 74e3c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74e3c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74e3c7: mov esi, ecx */
  esi = ecx;
/* 74e3c9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74e3cd: mov dword ptr [esi], 0xa026d8 */
  W32((uint32_t)(esi), 0xa026d8u);
/* 74e3d3: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 74e3db: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x74e3e1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 74e3e1: lea ecx, [esi + 0x3d8] */
  ecx = (uint32_t)(esi + 0x3d8u);
/* 74e3e7: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 74e3ec: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x74e3f2u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 74e3f2: mov ecx, esi */
  ecx = esi;
/* 74e3f4: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 74e3fc: call 0x6c60a5 */
  esp -= 4; W32(esp, 0x74e401u); SPILL(); f_6c60a5(); if (g_unwind) return; RELOAD();
/* 74e401: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 74e405: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74e406: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74e40d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74e410: ret  */
  esp += 4; SPILL(); return;
}

void f_74e440(void) {
  LOAD_REGS();
L_74e440: /* 74e440: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 74e442: push 0x9c7ef8 */
  { uint32_t v = 0x9c7ef8u; esp -= 4; W32(esp, v); }
/* 74e447: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74e44d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74e44e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 74e455: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74e456: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74e457: mov esi, ecx */
  esi = ecx;
/* 74e459: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74e45d: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x74e462u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 74e462: lea ecx, [esi + 0x3d8] */
  ecx = (uint32_t)(esi + 0x3d8u);
/* 74e468: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 74e470: mov dword ptr [esi], 0xa026d8 */
  W32((uint32_t)(esi), 0xa026d8u);
/* 74e476: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x74e47cu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 74e47c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 74e480: mov eax, esi */
  eax = esi;
/* 74e482: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74e483: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74e48a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74e48d: ret  */
  esp += 4; SPILL(); return;
}

void f_74e4b0(void) {
  LOAD_REGS();
L_74e4b0: /* 74e4b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 74e4b2: push 0x9c7f18 */
  { uint32_t v = 0x9c7f18u; esp -= 4; W32(esp, v); }
/* 74e4b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74e4bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74e4be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 74e4c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74e4c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 74e4c7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 74e4c8: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 74e4cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74e4cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74e4ce: mov ebx, ecx */
  ebx = ecx;
/* 74e4d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 74e4d1: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 74e4d5: call 0x6c1456 */
  esp -= 4; W32(esp, 0x74e4dau); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 74e4da: mov dword ptr [ebx], 0xa026d8 */
  W32((uint32_t)(ebx), 0xa026d8u);
/* 74e4e0: mov eax, dword ptr [ebp + 0x33c] */
  eax = R32((uint32_t)(ebp + 0x33cu));
/* 74e4e6: mov dword ptr [ebx + 0x33c], eax */
  W32((uint32_t)(ebx + 0x33cu), eax);
/* 74e4ec: mov ecx, dword ptr [ebp + 0x340] */
  ecx = R32((uint32_t)(ebp + 0x340u));
/* 74e4f2: mov dword ptr [ebx + 0x340], ecx */
  W32((uint32_t)(ebx + 0x340u), ecx);
/* 74e4f8: mov edx, dword ptr [ebp + 0x344] */
  edx = R32((uint32_t)(ebp + 0x344u));
/* 74e4fe: mov dword ptr [ebx + 0x344], edx */
  W32((uint32_t)(ebx + 0x344u), edx);
/* 74e504: mov eax, dword ptr [ebp + 0x348] */
  eax = R32((uint32_t)(ebp + 0x348u));
/* 74e50a: mov edx, dword ptr [ebx + 0x350] */
  edx = R32((uint32_t)(ebx + 0x350u));
/* 74e510: mov dword ptr [ebx + 0x348], eax */
  W32((uint32_t)(ebx + 0x348u), eax);
/* 74e516: mov ecx, dword ptr [ebp + 0x34c] */
  ecx = R32((uint32_t)(ebp + 0x34cu));
/* 74e51c: mov eax, dword ptr [ebx + 0x350] */
  eax = R32((uint32_t)(ebx + 0x350u));
/* 74e522: mov dword ptr [ebx + 0x34c], ecx */
  W32((uint32_t)(ebx + 0x34cu), ecx);
/* 74e528: xor edx, dword ptr [ebp + 0x350] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x350u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74e52e: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 74e531: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74e533: mov dword ptr [ebx + 0x350], eax */
  W32((uint32_t)(ebx + 0x350u), eax);
/* 74e539: mov ecx, eax */
  ecx = eax;
/* 74e53b: mov eax, dword ptr [ebp + 0x350] */
  eax = R32((uint32_t)(ebp + 0x350u));
/* 74e541: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74e543: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74e546: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74e548: mov dword ptr [ebx + 0x350], eax */
  W32((uint32_t)(ebx + 0x350u), eax);
/* 74e54e: mov ecx, dword ptr [ebp + 0x350] */
  ecx = R32((uint32_t)(ebp + 0x350u));
/* 74e554: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74e556: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74e559: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74e55b: mov dword ptr [ebx + 0x350], ecx */
  W32((uint32_t)(ebx + 0x350u), ecx);
/* 74e561: mov eax, dword ptr [ebp + 0x350] */
  eax = R32((uint32_t)(ebp + 0x350u));
/* 74e567: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74e569: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74e56c: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74e56e: mov dword ptr [ebx + 0x350], eax */
  W32((uint32_t)(ebx + 0x350u), eax);
/* 74e574: mov ecx, dword ptr [ebp + 0x350] */
  ecx = R32((uint32_t)(ebp + 0x350u));
/* 74e57a: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74e57c: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74e57f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74e581: mov dword ptr [ebx + 0x350], ecx */
  W32((uint32_t)(ebx + 0x350u), ecx);
/* 74e587: mov eax, dword ptr [ebp + 0x350] */
  eax = R32((uint32_t)(ebp + 0x350u));
/* 74e58d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74e58f: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74e592: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74e594: mov dword ptr [ebx + 0x350], eax */
  W32((uint32_t)(ebx + 0x350u), eax);
/* 74e59a: mov ecx, dword ptr [ebp + 0x350] */
  ecx = R32((uint32_t)(ebp + 0x350u));
/* 74e5a0: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74e5a2: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74e5a5: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74e5a7: mov dword ptr [ebx + 0x350], ecx */
  W32((uint32_t)(ebx + 0x350u), ecx);
/* 74e5ad: mov eax, dword ptr [ebp + 0x350] */
  eax = R32((uint32_t)(ebp + 0x350u));
/* 74e5b3: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74e5b5: and eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74e5ba: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74e5bc: mov dword ptr [ebx + 0x350], eax */
  W32((uint32_t)(ebx + 0x350u), eax);
/* 74e5c2: mov ecx, dword ptr [ebp + 0x350] */
  ecx = R32((uint32_t)(ebp + 0x350u));
/* 74e5c8: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74e5ca: and ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74e5d0: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74e5d2: mov dword ptr [ebx + 0x350], ecx */
  W32((uint32_t)(ebx + 0x350u), ecx);
/* 74e5d8: mov eax, dword ptr [ebp + 0x350] */
  eax = R32((uint32_t)(ebp + 0x350u));
/* 74e5de: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74e5e0: and eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74e5e5: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74e5e7: mov dword ptr [ebx + 0x350], eax */
  W32((uint32_t)(ebx + 0x350u), eax);
/* 74e5ed: mov ecx, dword ptr [ebp + 0x350] */
  ecx = R32((uint32_t)(ebp + 0x350u));
/* 74e5f3: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74e5f5: and ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74e5fb: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74e5fd: mov dword ptr [ebx + 0x350], ecx */
  W32((uint32_t)(ebx + 0x350u), ecx);
/* 74e603: mov eax, dword ptr [ebp + 0x350] */
  eax = R32((uint32_t)(ebp + 0x350u));
/* 74e609: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 74e611: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74e613: and eax, 0x800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74e618: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74e61a: mov dword ptr [ebx + 0x350], eax */
  W32((uint32_t)(ebx + 0x350u), eax);
/* 74e620: mov ecx, dword ptr [ebp + 0x350] */
  ecx = R32((uint32_t)(ebp + 0x350u));
/* 74e626: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74e628: and ecx, 0x1000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74e62e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74e630: mov dword ptr [ebx + 0x350], ecx */
  W32((uint32_t)(ebx + 0x350u), ecx);
/* 74e636: mov eax, dword ptr [ebp + 0x350] */
  eax = R32((uint32_t)(ebp + 0x350u));
/* 74e63c: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74e63e: and eax, 0x2000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74e643: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74e645: mov dword ptr [ebx + 0x350], eax */
  W32((uint32_t)(ebx + 0x350u), eax);
/* 74e64b: mov ecx, dword ptr [ebp + 0x350] */
  ecx = R32((uint32_t)(ebp + 0x350u));
/* 74e651: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74e653: and ecx, 0x4000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74e659: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74e65b: mov dword ptr [ebx + 0x350], ecx */
  W32((uint32_t)(ebx + 0x350u), ecx);
/* 74e661: mov eax, dword ptr [ebp + 0x350] */
  eax = R32((uint32_t)(ebp + 0x350u));
/* 74e667: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74e669: and eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74e66e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74e670: mov dword ptr [ebx + 0x350], eax */
  W32((uint32_t)(ebx + 0x350u), eax);
/* 74e676: mov ecx, dword ptr [ebp + 0x350] */
  ecx = R32((uint32_t)(ebp + 0x350u));
/* 74e67c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74e67e: and ecx, 0x10000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74e684: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74e686: mov dword ptr [ebx + 0x350], ecx */
  W32((uint32_t)(ebx + 0x350u), ecx);
/* 74e68c: mov eax, dword ptr [ebp + 0x350] */
  eax = R32((uint32_t)(ebp + 0x350u));
/* 74e692: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74e694: and eax, 0x20000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74e699: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74e69b: mov dword ptr [ebx + 0x350], eax */
  W32((uint32_t)(ebx + 0x350u), eax);
/* 74e6a1: mov cl, byte ptr [ebp + 0x354] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x354u))) & 0xffu);
/* 74e6a7: mov byte ptr [ebx + 0x354], cl */
  W8((uint32_t)(ebx + 0x354u), (ecx & 0xffu));
/* 74e6ad: mov dl, byte ptr [ebp + 0x355] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x355u))) & 0xffu);
/* 74e6b3: mov byte ptr [ebx + 0x355], dl */
  W8((uint32_t)(ebx + 0x355u), (edx & 0xffu));
/* 74e6b9: mov al, byte ptr [ebp + 0x356] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x356u))) & 0xffu);
/* 74e6bf: mov byte ptr [ebx + 0x356], al */
  W8((uint32_t)(ebx + 0x356u), (eax & 0xffu));
/* 74e6c5: mov cl, byte ptr [ebp + 0x357] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x357u))) & 0xffu);
/* 74e6cb: mov byte ptr [ebx + 0x357], cl */
  W8((uint32_t)(ebx + 0x357u), (ecx & 0xffu));
/* 74e6d1: lea edx, [ebp + 0x358] */
  edx = (uint32_t)(ebp + 0x358u);
/* 74e6d7: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 74e6d9: lea eax, [ebx + 0x358] */
  eax = (uint32_t)(ebx + 0x358u);
/* 74e6df: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 74e6e1: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 74e6e4: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 74e6e7: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 74e6ea: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 74e6ed: mov eax, dword ptr [ebp + 0x364] */
  eax = R32((uint32_t)(ebp + 0x364u));
/* 74e6f3: mov dword ptr [ebx + 0x364], eax */
  W32((uint32_t)(ebx + 0x364u), eax);
/* 74e6f9: mov ecx, dword ptr [ebp + 0x368] */
  ecx = R32((uint32_t)(ebp + 0x368u));
/* 74e6ff: mov dword ptr [ebx + 0x368], ecx */
  W32((uint32_t)(ebx + 0x368u), ecx);
/* 74e705: mov edx, dword ptr [ebp + 0x36c] */
  edx = R32((uint32_t)(ebp + 0x36cu));
/* 74e70b: mov dword ptr [ebx + 0x36c], edx */
  W32((uint32_t)(ebx + 0x36cu), edx);
/* 74e711: mov eax, dword ptr [ebp + 0x370] */
  eax = R32((uint32_t)(ebp + 0x370u));
/* 74e717: mov dword ptr [ebx + 0x370], eax */
  W32((uint32_t)(ebx + 0x370u), eax);
/* 74e71d: lea ecx, [ebp + 0x374] */
  ecx = (uint32_t)(ebp + 0x374u);
/* 74e723: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 74e725: lea edx, [ebx + 0x374] */
  edx = (uint32_t)(ebx + 0x374u);
/* 74e72b: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 74e72d: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 74e730: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 74e733: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 74e736: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 74e739: lea edx, [ebp + 0x380] */
  edx = (uint32_t)(ebp + 0x380u);
/* 74e73f: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 74e741: lea eax, [ebx + 0x380] */
  eax = (uint32_t)(ebx + 0x380u);
/* 74e747: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 74e749: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 74e74c: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 74e74f: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 74e752: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 74e755: mov eax, dword ptr [ebp + 0x38c] */
  eax = R32((uint32_t)(ebp + 0x38cu));
/* 74e75b: mov dword ptr [ebx + 0x38c], eax */
  W32((uint32_t)(ebx + 0x38cu), eax);
/* 74e761: mov ecx, dword ptr [ebp + 0x390] */
  ecx = R32((uint32_t)(ebp + 0x390u));
/* 74e767: lea edx, [ebp + 0x394] */
  edx = (uint32_t)(ebp + 0x394u);
/* 74e76d: mov dword ptr [ebx + 0x390], ecx */
  W32((uint32_t)(ebx + 0x390u), ecx);
/* 74e773: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 74e775: lea eax, [ebx + 0x394] */
  eax = (uint32_t)(ebx + 0x394u);
/* 74e77b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 74e77d: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 74e780: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 74e783: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 74e786: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 74e789: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 74e78c: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 74e78f: mov eax, dword ptr [ebp + 0x3a4] */
  eax = R32((uint32_t)(ebp + 0x3a4u));
/* 74e795: mov dword ptr [ebx + 0x3a4], eax */
  W32((uint32_t)(ebx + 0x3a4u), eax);
/* 74e79b: mov ecx, dword ptr [ebp + 0x3a8] */
  ecx = R32((uint32_t)(ebp + 0x3a8u));
/* 74e7a1: mov dword ptr [ebx + 0x3a8], ecx */
  W32((uint32_t)(ebx + 0x3a8u), ecx);
/* 74e7a7: mov edx, dword ptr [ebp + 0x3ac] */
  edx = R32((uint32_t)(ebp + 0x3acu));
/* 74e7ad: mov dword ptr [ebx + 0x3ac], edx */
  W32((uint32_t)(ebx + 0x3acu), edx);
/* 74e7b3: mov eax, dword ptr [ebp + 0x3b0] */
  eax = R32((uint32_t)(ebp + 0x3b0u));
/* 74e7b9: mov dword ptr [ebx + 0x3b0], eax */
  W32((uint32_t)(ebx + 0x3b0u), eax);
/* 74e7bf: mov ecx, dword ptr [ebp + 0x3b4] */
  ecx = R32((uint32_t)(ebp + 0x3b4u));
/* 74e7c5: mov dword ptr [ebx + 0x3b4], ecx */
  W32((uint32_t)(ebx + 0x3b4u), ecx);
/* 74e7cb: mov edx, dword ptr [ebp + 0x3b8] */
  edx = R32((uint32_t)(ebp + 0x3b8u));
/* 74e7d1: mov dword ptr [ebx + 0x3b8], edx */
  W32((uint32_t)(ebx + 0x3b8u), edx);
/* 74e7d7: lea eax, [ebp + 0x3bc] */
  eax = (uint32_t)(ebp + 0x3bcu);
/* 74e7dd: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 74e7df: lea ecx, [ebx + 0x3bc] */
  ecx = (uint32_t)(ebx + 0x3bcu);
/* 74e7e5: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 74e7e7: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 74e7ea: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 74e7ed: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 74e7f0: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 74e7f3: lea ecx, [ebp + 0x3c8] */
  ecx = (uint32_t)(ebp + 0x3c8u);
/* 74e7f9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 74e7fb: lea edx, [ebx + 0x3c8] */
  edx = (uint32_t)(ebx + 0x3c8u);
/* 74e801: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 74e803: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 74e806: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 74e809: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 74e80c: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 74e80f: mov edx, dword ptr [ebp + 0x3d4] */
  edx = R32((uint32_t)(ebp + 0x3d4u));
/* 74e815: lea eax, [ebp + 0x3d8] */
  eax = (uint32_t)(ebp + 0x3d8u);
/* 74e81b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74e81c: lea ecx, [ebx + 0x3d8] */
  ecx = (uint32_t)(ebx + 0x3d8u);
/* 74e822: mov dword ptr [ebx + 0x3d4], edx */
  W32((uint32_t)(ebx + 0x3d4u), edx);
/* 74e828: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x74e82eu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 74e82e: mov ecx, dword ptr [ebp + 0x3e4] */
  ecx = R32((uint32_t)(ebp + 0x3e4u));
/* 74e834: mov dword ptr [ebx + 0x3e4], ecx */
  W32((uint32_t)(ebx + 0x3e4u), ecx);
/* 74e83a: lea esi, [ebp + 0x3e8] */
  esi = (uint32_t)(ebp + 0x3e8u);
/* 74e840: lea edi, [ebx + 0x3e8] */
  edi = (uint32_t)(ebx + 0x3e8u);
/* 74e846: mov ecx, 0x10 */
  ecx = 0x10u;
/* 74e84b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 74e84d: mov edx, dword ptr [ebp + 0x428] */
  edx = R32((uint32_t)(ebp + 0x428u));
/* 74e853: mov dword ptr [ebx + 0x428], edx */
  W32((uint32_t)(ebx + 0x428u), edx);
/* 74e859: lea eax, [ebp + 0x42c] */
  eax = (uint32_t)(ebp + 0x42cu);
/* 74e85f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 74e861: lea ecx, [ebx + 0x42c] */
  ecx = (uint32_t)(ebx + 0x42cu);
/* 74e867: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 74e869: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 74e86c: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 74e86f: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 74e872: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 74e875: mov ecx, dword ptr [ebp + 0x438] */
  ecx = R32((uint32_t)(ebp + 0x438u));
/* 74e87b: mov dword ptr [ebx + 0x438], ecx */
  W32((uint32_t)(ebx + 0x438u), ecx);
/* 74e881: mov edx, dword ptr [ebp + 0x43c] */
  edx = R32((uint32_t)(ebp + 0x43cu));
/* 74e887: mov dword ptr [ebx + 0x43c], edx */
  W32((uint32_t)(ebx + 0x43cu), edx);
/* 74e88d: mov eax, dword ptr [ebp + 0x440] */
  eax = R32((uint32_t)(ebp + 0x440u));
/* 74e893: mov dword ptr [ebx + 0x440], eax */
  W32((uint32_t)(ebx + 0x440u), eax);
/* 74e899: mov ecx, dword ptr [ebp + 0x444] */
  ecx = R32((uint32_t)(ebp + 0x444u));
/* 74e89f: mov dword ptr [ebx + 0x444], ecx */
  W32((uint32_t)(ebx + 0x444u), ecx);
/* 74e8a5: mov edx, dword ptr [ebp + 0x448] */
  edx = R32((uint32_t)(ebp + 0x448u));
/* 74e8ab: mov dword ptr [ebx + 0x448], edx */
  W32((uint32_t)(ebx + 0x448u), edx);
/* 74e8b1: mov eax, dword ptr [ebp + 0x44c] */
  eax = R32((uint32_t)(ebp + 0x44cu));
/* 74e8b7: mov dword ptr [ebx + 0x44c], eax */
  W32((uint32_t)(ebx + 0x44cu), eax);
/* 74e8bd: mov ecx, dword ptr [ebp + 0x450] */
  ecx = R32((uint32_t)(ebp + 0x450u));
/* 74e8c3: mov dword ptr [ebx + 0x450], ecx */
  W32((uint32_t)(ebx + 0x450u), ecx);
/* 74e8c9: mov edx, dword ptr [ebp + 0x454] */
  edx = R32((uint32_t)(ebp + 0x454u));
/* 74e8cf: mov dword ptr [ebx + 0x454], edx */
  W32((uint32_t)(ebx + 0x454u), edx);
/* 74e8d5: lea eax, [ebp + 0x458] */
  eax = (uint32_t)(ebp + 0x458u);
/* 74e8db: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 74e8dd: lea ecx, [ebx + 0x458] */
  ecx = (uint32_t)(ebx + 0x458u);
/* 74e8e3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 74e8e5: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 74e8e8: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 74e8eb: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 74e8ee: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 74e8f1: lea ecx, [ebp + 0x464] */
  ecx = (uint32_t)(ebp + 0x464u);
/* 74e8f7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 74e8f9: lea edx, [ebx + 0x464] */
  edx = (uint32_t)(ebx + 0x464u);
/* 74e8ff: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 74e901: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 74e904: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 74e907: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 74e90a: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 74e90d: lea edx, [ebp + 0x470] */
  edx = (uint32_t)(ebp + 0x470u);
/* 74e913: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 74e915: lea eax, [ebx + 0x470] */
  eax = (uint32_t)(ebx + 0x470u);
/* 74e91b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 74e91d: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 74e920: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 74e923: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 74e926: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 74e929: mov eax, dword ptr [ebp + 0x47c] */
  eax = R32((uint32_t)(ebp + 0x47cu));
/* 74e92f: mov dword ptr [ebx + 0x47c], eax */
  W32((uint32_t)(ebx + 0x47cu), eax);
/* 74e935: lea ecx, [ebp + 0x480] */
  ecx = (uint32_t)(ebp + 0x480u);
/* 74e93b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 74e93d: lea edx, [ebx + 0x480] */
  edx = (uint32_t)(ebx + 0x480u);
/* 74e943: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 74e945: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 74e948: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 74e94b: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 74e94e: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 74e951: mov edx, dword ptr [ebp + 0x48c] */
  edx = R32((uint32_t)(ebp + 0x48cu));
/* 74e957: mov dword ptr [ebx + 0x48c], edx */
  W32((uint32_t)(ebx + 0x48cu), edx);
/* 74e95d: mov eax, dword ptr [ebp + 0x490] */
  eax = R32((uint32_t)(ebp + 0x490u));
/* 74e963: mov dword ptr [ebx + 0x490], eax */
  W32((uint32_t)(ebx + 0x490u), eax);
/* 74e969: mov ecx, dword ptr [ebp + 0x494] */
  ecx = R32((uint32_t)(ebp + 0x494u));
/* 74e96f: mov dword ptr [ebx + 0x494], ecx */
  W32((uint32_t)(ebx + 0x494u), ecx);
/* 74e975: mov edx, dword ptr [ebp + 0x498] */
  edx = R32((uint32_t)(ebp + 0x498u));
/* 74e97b: mov dword ptr [ebx + 0x498], edx */
  W32((uint32_t)(ebx + 0x498u), edx);
/* 74e981: mov eax, dword ptr [ebp + 0x49c] */
  eax = R32((uint32_t)(ebp + 0x49cu));
/* 74e987: mov dword ptr [ebx + 0x49c], eax */
  W32((uint32_t)(ebx + 0x49cu), eax);
/* 74e98d: mov ecx, dword ptr [ebp + 0x4a0] */
  ecx = R32((uint32_t)(ebp + 0x4a0u));
/* 74e993: mov dword ptr [ebx + 0x4a0], ecx */
  W32((uint32_t)(ebx + 0x4a0u), ecx);
/* 74e999: lea edx, [ebp + 0x4a4] */
  edx = (uint32_t)(ebp + 0x4a4u);
/* 74e99f: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 74e9a1: lea eax, [ebx + 0x4a4] */
  eax = (uint32_t)(ebx + 0x4a4u);
/* 74e9a7: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 74e9a9: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 74e9ac: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 74e9af: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 74e9b2: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 74e9b6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74e9b7: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 74e9ba: mov eax, dword ptr [ebp + 0x4b0] */
  eax = R32((uint32_t)(ebp + 0x4b0u));
/* 74e9c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74e9c1: mov dword ptr [ebx + 0x4b0], eax */
  W32((uint32_t)(ebx + 0x4b0u), eax);
/* 74e9c7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 74e9c8: mov eax, ebx */
  eax = ebx;
/* 74e9ca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74e9cb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74e9d2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74e9d5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74eb30(void) {
  LOAD_REGS();
L_74eb30: /* 74eb30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 74eb31: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74eb32: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74eb33: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 74eb37: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74eb38: mov esi, ecx */
  esi = ecx;
/* 74eb3a: call 0x6c5cef */
  esp -= 4; W32(esp, 0x74eb3fu); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 74eb3f: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 74eb45: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 74eb4b: mov ecx, dword ptr [edi + 0x340] */
  ecx = R32((uint32_t)(edi + 0x340u));
/* 74eb51: mov dword ptr [esi + 0x340], ecx */
  W32((uint32_t)(esi + 0x340u), ecx);
/* 74eb57: mov edx, dword ptr [edi + 0x344] */
  edx = R32((uint32_t)(edi + 0x344u));
/* 74eb5d: mov ebx, dword ptr [esi + 0x350] */
  ebx = R32((uint32_t)(esi + 0x350u));
/* 74eb63: mov dword ptr [esi + 0x344], edx */
  W32((uint32_t)(esi + 0x344u), edx);
/* 74eb69: mov eax, dword ptr [edi + 0x348] */
  eax = R32((uint32_t)(edi + 0x348u));
/* 74eb6f: mov edx, dword ptr [esi + 0x350] */
  edx = R32((uint32_t)(esi + 0x350u));
/* 74eb75: mov dword ptr [esi + 0x348], eax */
  W32((uint32_t)(esi + 0x348u), eax);
/* 74eb7b: mov ecx, dword ptr [edi + 0x34c] */
  ecx = R32((uint32_t)(edi + 0x34cu));
/* 74eb81: mov dword ptr [esi + 0x34c], ecx */
  W32((uint32_t)(esi + 0x34cu), ecx);
/* 74eb87: xor edx, dword ptr [edi + 0x350] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x350u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74eb8d: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 74eb90: xor ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ebx = r;
  }
/* 74eb92: mov dword ptr [esi + 0x350], ebx */
  W32((uint32_t)(esi + 0x350u), ebx);
/* 74eb98: mov eax, dword ptr [edi + 0x350] */
  eax = R32((uint32_t)(edi + 0x350u));
/* 74eb9e: mov ecx, ebx */
  ecx = ebx;
/* 74eba0: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74eba2: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74eba5: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74eba7: mov dword ptr [esi + 0x350], eax */
  W32((uint32_t)(esi + 0x350u), eax);
/* 74ebad: mov ecx, dword ptr [edi + 0x350] */
  ecx = R32((uint32_t)(edi + 0x350u));
/* 74ebb3: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74ebb5: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74ebb8: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74ebba: mov dword ptr [esi + 0x350], ecx */
  W32((uint32_t)(esi + 0x350u), ecx);
/* 74ebc0: mov eax, dword ptr [edi + 0x350] */
  eax = R32((uint32_t)(edi + 0x350u));
/* 74ebc6: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74ebc8: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74ebcb: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74ebcd: mov dword ptr [esi + 0x350], eax */
  W32((uint32_t)(esi + 0x350u), eax);
/* 74ebd3: mov ecx, dword ptr [edi + 0x350] */
  ecx = R32((uint32_t)(edi + 0x350u));
/* 74ebd9: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74ebdb: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74ebde: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74ebe0: mov dword ptr [esi + 0x350], ecx */
  W32((uint32_t)(esi + 0x350u), ecx);
/* 74ebe6: mov eax, dword ptr [edi + 0x350] */
  eax = R32((uint32_t)(edi + 0x350u));
/* 74ebec: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74ebee: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74ebf1: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74ebf3: mov dword ptr [esi + 0x350], eax */
  W32((uint32_t)(esi + 0x350u), eax);
/* 74ebf9: mov ecx, dword ptr [edi + 0x350] */
  ecx = R32((uint32_t)(edi + 0x350u));
/* 74ebff: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74ec01: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74ec04: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74ec06: mov dword ptr [esi + 0x350], ecx */
  W32((uint32_t)(esi + 0x350u), ecx);
/* 74ec0c: mov eax, dword ptr [edi + 0x350] */
  eax = R32((uint32_t)(edi + 0x350u));
/* 74ec12: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74ec14: and eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74ec19: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74ec1b: mov dword ptr [esi + 0x350], eax */
  W32((uint32_t)(esi + 0x350u), eax);
/* 74ec21: mov ecx, dword ptr [edi + 0x350] */
  ecx = R32((uint32_t)(edi + 0x350u));
/* 74ec27: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74ec29: and ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74ec2f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74ec31: mov dword ptr [esi + 0x350], ecx */
  W32((uint32_t)(esi + 0x350u), ecx);
/* 74ec37: mov eax, dword ptr [edi + 0x350] */
  eax = R32((uint32_t)(edi + 0x350u));
/* 74ec3d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74ec3f: and eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74ec44: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74ec46: mov dword ptr [esi + 0x350], eax */
  W32((uint32_t)(esi + 0x350u), eax);
/* 74ec4c: mov ecx, dword ptr [edi + 0x350] */
  ecx = R32((uint32_t)(edi + 0x350u));
/* 74ec52: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74ec54: and ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74ec5a: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74ec5c: mov dword ptr [esi + 0x350], ecx */
  W32((uint32_t)(esi + 0x350u), ecx);
/* 74ec62: mov eax, dword ptr [edi + 0x350] */
  eax = R32((uint32_t)(edi + 0x350u));
/* 74ec68: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74ec6a: and eax, 0x800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74ec6f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74ec71: mov dword ptr [esi + 0x350], eax */
  W32((uint32_t)(esi + 0x350u), eax);
/* 74ec77: mov ecx, dword ptr [edi + 0x350] */
  ecx = R32((uint32_t)(edi + 0x350u));
/* 74ec7d: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74ec7f: and ecx, 0x1000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74ec85: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74ec87: mov dword ptr [esi + 0x350], ecx */
  W32((uint32_t)(esi + 0x350u), ecx);
/* 74ec8d: mov eax, dword ptr [edi + 0x350] */
  eax = R32((uint32_t)(edi + 0x350u));
/* 74ec93: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74ec95: and eax, 0x2000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74ec9a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74ec9c: mov dword ptr [esi + 0x350], eax */
  W32((uint32_t)(esi + 0x350u), eax);
/* 74eca2: mov ecx, dword ptr [edi + 0x350] */
  ecx = R32((uint32_t)(edi + 0x350u));
/* 74eca8: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74ecaa: and ecx, 0x4000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74ecb0: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74ecb2: mov dword ptr [esi + 0x350], ecx */
  W32((uint32_t)(esi + 0x350u), ecx);
/* 74ecb8: mov eax, dword ptr [edi + 0x350] */
  eax = R32((uint32_t)(edi + 0x350u));
/* 74ecbe: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74ecc0: and eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74ecc5: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74ecc7: mov dword ptr [esi + 0x350], eax */
  W32((uint32_t)(esi + 0x350u), eax);
/* 74eccd: mov ecx, dword ptr [edi + 0x350] */
  ecx = R32((uint32_t)(edi + 0x350u));
/* 74ecd3: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74ecd5: and ecx, 0x10000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74ecdb: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74ecdd: mov dword ptr [esi + 0x350], ecx */
  W32((uint32_t)(esi + 0x350u), ecx);
/* 74ece3: mov eax, dword ptr [edi + 0x350] */
  eax = R32((uint32_t)(edi + 0x350u));
/* 74ece9: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74eceb: and eax, 0x20000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74ecf0: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74ecf2: mov dword ptr [esi + 0x350], eax */
  W32((uint32_t)(esi + 0x350u), eax);
/* 74ecf8: mov cl, byte ptr [edi + 0x354] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x354u))) & 0xffu);
/* 74ecfe: mov byte ptr [esi + 0x354], cl */
  W8((uint32_t)(esi + 0x354u), (ecx & 0xffu));
/* 74ed04: mov dl, byte ptr [edi + 0x355] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x355u))) & 0xffu);
/* 74ed0a: mov byte ptr [esi + 0x355], dl */
  W8((uint32_t)(esi + 0x355u), (edx & 0xffu));
/* 74ed10: mov al, byte ptr [edi + 0x356] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x356u))) & 0xffu);
/* 74ed16: mov byte ptr [esi + 0x356], al */
  W8((uint32_t)(esi + 0x356u), (eax & 0xffu));
/* 74ed1c: mov cl, byte ptr [edi + 0x357] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x357u))) & 0xffu);
/* 74ed22: mov byte ptr [esi + 0x357], cl */
  W8((uint32_t)(esi + 0x357u), (ecx & 0xffu));
/* 74ed28: lea edx, [edi + 0x358] */
  edx = (uint32_t)(edi + 0x358u);
/* 74ed2e: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 74ed30: lea eax, [esi + 0x358] */
  eax = (uint32_t)(esi + 0x358u);
/* 74ed36: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 74ed38: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 74ed3b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 74ed3e: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 74ed41: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 74ed44: mov eax, dword ptr [edi + 0x364] */
  eax = R32((uint32_t)(edi + 0x364u));
/* 74ed4a: mov dword ptr [esi + 0x364], eax */
  W32((uint32_t)(esi + 0x364u), eax);
/* 74ed50: mov ecx, dword ptr [edi + 0x368] */
  ecx = R32((uint32_t)(edi + 0x368u));
/* 74ed56: mov dword ptr [esi + 0x368], ecx */
  W32((uint32_t)(esi + 0x368u), ecx);
/* 74ed5c: mov edx, dword ptr [edi + 0x36c] */
  edx = R32((uint32_t)(edi + 0x36cu));
/* 74ed62: mov dword ptr [esi + 0x36c], edx */
  W32((uint32_t)(esi + 0x36cu), edx);
/* 74ed68: mov eax, dword ptr [edi + 0x370] */
  eax = R32((uint32_t)(edi + 0x370u));
/* 74ed6e: mov dword ptr [esi + 0x370], eax */
  W32((uint32_t)(esi + 0x370u), eax);
/* 74ed74: lea ecx, [edi + 0x374] */
  ecx = (uint32_t)(edi + 0x374u);
/* 74ed7a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 74ed7c: lea edx, [esi + 0x374] */
  edx = (uint32_t)(esi + 0x374u);
/* 74ed82: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 74ed84: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 74ed87: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 74ed8a: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 74ed8d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 74ed90: lea edx, [edi + 0x380] */
  edx = (uint32_t)(edi + 0x380u);
/* 74ed96: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 74ed98: lea eax, [esi + 0x380] */
  eax = (uint32_t)(esi + 0x380u);
/* 74ed9e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 74eda0: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 74eda3: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 74eda6: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 74eda9: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 74edac: mov eax, dword ptr [edi + 0x38c] */
  eax = R32((uint32_t)(edi + 0x38cu));
/* 74edb2: mov dword ptr [esi + 0x38c], eax */
  W32((uint32_t)(esi + 0x38cu), eax);
/* 74edb8: mov ecx, dword ptr [edi + 0x390] */
  ecx = R32((uint32_t)(edi + 0x390u));
/* 74edbe: mov dword ptr [esi + 0x390], ecx */
  W32((uint32_t)(esi + 0x390u), ecx);
/* 74edc4: mov edx, dword ptr [edi + 0x394] */
  edx = R32((uint32_t)(edi + 0x394u));
/* 74edca: mov dword ptr [esi + 0x394], edx */
  W32((uint32_t)(esi + 0x394u), edx);
/* 74edd0: mov eax, dword ptr [edi + 0x398] */
  eax = R32((uint32_t)(edi + 0x398u));
/* 74edd6: mov dword ptr [esi + 0x398], eax */
  W32((uint32_t)(esi + 0x398u), eax);
/* 74eddc: mov ecx, dword ptr [edi + 0x39c] */
  ecx = R32((uint32_t)(edi + 0x39cu));
/* 74ede2: mov dword ptr [esi + 0x39c], ecx */
  W32((uint32_t)(esi + 0x39cu), ecx);
/* 74ede8: mov edx, dword ptr [edi + 0x3a0] */
  edx = R32((uint32_t)(edi + 0x3a0u));
/* 74edee: mov dword ptr [esi + 0x3a0], edx */
  W32((uint32_t)(esi + 0x3a0u), edx);
/* 74edf4: mov eax, dword ptr [edi + 0x3a4] */
  eax = R32((uint32_t)(edi + 0x3a4u));
/* 74edfa: mov dword ptr [esi + 0x3a4], eax */
  W32((uint32_t)(esi + 0x3a4u), eax);
/* 74ee00: mov ecx, dword ptr [edi + 0x3a8] */
  ecx = R32((uint32_t)(edi + 0x3a8u));
/* 74ee06: mov dword ptr [esi + 0x3a8], ecx */
  W32((uint32_t)(esi + 0x3a8u), ecx);
/* 74ee0c: mov edx, dword ptr [edi + 0x3ac] */
  edx = R32((uint32_t)(edi + 0x3acu));
/* 74ee12: mov dword ptr [esi + 0x3ac], edx */
  W32((uint32_t)(esi + 0x3acu), edx);
/* 74ee18: mov eax, dword ptr [edi + 0x3b0] */
  eax = R32((uint32_t)(edi + 0x3b0u));
/* 74ee1e: mov dword ptr [esi + 0x3b0], eax */
  W32((uint32_t)(esi + 0x3b0u), eax);
/* 74ee24: mov ecx, dword ptr [edi + 0x3b4] */
  ecx = R32((uint32_t)(edi + 0x3b4u));
/* 74ee2a: mov dword ptr [esi + 0x3b4], ecx */
  W32((uint32_t)(esi + 0x3b4u), ecx);
/* 74ee30: mov edx, dword ptr [edi + 0x3b8] */
  edx = R32((uint32_t)(edi + 0x3b8u));
/* 74ee36: mov dword ptr [esi + 0x3b8], edx */
  W32((uint32_t)(esi + 0x3b8u), edx);
/* 74ee3c: lea eax, [edi + 0x3bc] */
  eax = (uint32_t)(edi + 0x3bcu);
/* 74ee42: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 74ee44: lea ecx, [esi + 0x3bc] */
  ecx = (uint32_t)(esi + 0x3bcu);
/* 74ee4a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 74ee4c: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 74ee4f: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 74ee52: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 74ee55: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 74ee58: lea ecx, [edi + 0x3c8] */
  ecx = (uint32_t)(edi + 0x3c8u);
/* 74ee5e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 74ee60: lea edx, [esi + 0x3c8] */
  edx = (uint32_t)(esi + 0x3c8u);
/* 74ee66: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 74ee68: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 74ee6b: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 74ee6e: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 74ee71: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 74ee74: mov edx, dword ptr [edi + 0x3d4] */
  edx = R32((uint32_t)(edi + 0x3d4u));
/* 74ee7a: lea eax, [edi + 0x3d8] */
  eax = (uint32_t)(edi + 0x3d8u);
/* 74ee80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74ee81: lea ecx, [esi + 0x3d8] */
  ecx = (uint32_t)(esi + 0x3d8u);
/* 74ee87: mov dword ptr [esi + 0x3d4], edx */
  W32((uint32_t)(esi + 0x3d4u), edx);
/* 74ee8d: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x74ee93u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 74ee93: mov ecx, dword ptr [edi + 0x3e4] */
  ecx = R32((uint32_t)(edi + 0x3e4u));
/* 74ee99: mov eax, edi */
  eax = edi;
/* 74ee9b: mov dword ptr [esi + 0x3e4], ecx */
  W32((uint32_t)(esi + 0x3e4u), ecx);
/* 74eea1: lea ecx, [esi + 0x3e8] */
  ecx = (uint32_t)(esi + 0x3e8u);
/* 74eea7: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 74eea9: mov edx, 0x10 */
  edx = 0x10u;
/* 74eeae: mov edi, edi */
  edi = edi;
L_74eeb0: /* 74eeb0: mov ebx, dword ptr [eax + ecx] */
  ebx = R32((uint32_t)(eax + ecx));
/* 74eeb3: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 74eeb5: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 74eeb8: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 74eeb9: jne 0x74eeb0 */
  if (!zf) goto L_74eeb0;
L_74eebb: /* 74eebb: mov edx, dword ptr [edi + 0x428] */
  edx = R32((uint32_t)(edi + 0x428u));
/* 74eec1: mov dword ptr [esi + 0x428], edx */
  W32((uint32_t)(esi + 0x428u), edx);
/* 74eec7: lea eax, [edi + 0x42c] */
  eax = (uint32_t)(edi + 0x42cu);
/* 74eecd: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 74eecf: lea ecx, [esi + 0x42c] */
  ecx = (uint32_t)(esi + 0x42cu);
/* 74eed5: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 74eed7: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 74eeda: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 74eedd: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 74eee0: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 74eee3: mov ecx, dword ptr [edi + 0x438] */
  ecx = R32((uint32_t)(edi + 0x438u));
/* 74eee9: mov dword ptr [esi + 0x438], ecx */
  W32((uint32_t)(esi + 0x438u), ecx);
/* 74eeef: mov edx, dword ptr [edi + 0x43c] */
  edx = R32((uint32_t)(edi + 0x43cu));
/* 74eef5: mov dword ptr [esi + 0x43c], edx */
  W32((uint32_t)(esi + 0x43cu), edx);
/* 74eefb: mov eax, dword ptr [edi + 0x440] */
  eax = R32((uint32_t)(edi + 0x440u));
/* 74ef01: mov dword ptr [esi + 0x440], eax */
  W32((uint32_t)(esi + 0x440u), eax);
/* 74ef07: mov ecx, dword ptr [edi + 0x444] */
  ecx = R32((uint32_t)(edi + 0x444u));
/* 74ef0d: mov dword ptr [esi + 0x444], ecx */
  W32((uint32_t)(esi + 0x444u), ecx);
/* 74ef13: mov edx, dword ptr [edi + 0x448] */
  edx = R32((uint32_t)(edi + 0x448u));
/* 74ef19: mov dword ptr [esi + 0x448], edx */
  W32((uint32_t)(esi + 0x448u), edx);
/* 74ef1f: mov eax, dword ptr [edi + 0x44c] */
  eax = R32((uint32_t)(edi + 0x44cu));
/* 74ef25: mov dword ptr [esi + 0x44c], eax */
  W32((uint32_t)(esi + 0x44cu), eax);
/* 74ef2b: mov ecx, dword ptr [edi + 0x450] */
  ecx = R32((uint32_t)(edi + 0x450u));
/* 74ef31: mov dword ptr [esi + 0x450], ecx */
  W32((uint32_t)(esi + 0x450u), ecx);
/* 74ef37: mov edx, dword ptr [edi + 0x454] */
  edx = R32((uint32_t)(edi + 0x454u));
/* 74ef3d: mov dword ptr [esi + 0x454], edx */
  W32((uint32_t)(esi + 0x454u), edx);
/* 74ef43: lea eax, [edi + 0x458] */
  eax = (uint32_t)(edi + 0x458u);
/* 74ef49: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 74ef4b: lea ecx, [esi + 0x458] */
  ecx = (uint32_t)(esi + 0x458u);
/* 74ef51: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 74ef53: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 74ef56: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 74ef59: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 74ef5c: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 74ef5f: lea ecx, [edi + 0x464] */
  ecx = (uint32_t)(edi + 0x464u);
/* 74ef65: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 74ef67: lea edx, [esi + 0x464] */
  edx = (uint32_t)(esi + 0x464u);
/* 74ef6d: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 74ef6f: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 74ef72: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 74ef75: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 74ef78: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 74ef7b: lea edx, [edi + 0x470] */
  edx = (uint32_t)(edi + 0x470u);
/* 74ef81: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 74ef83: lea eax, [esi + 0x470] */
  eax = (uint32_t)(esi + 0x470u);
/* 74ef89: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 74ef8b: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 74ef8e: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 74ef91: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 74ef94: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 74ef97: mov eax, dword ptr [edi + 0x47c] */
  eax = R32((uint32_t)(edi + 0x47cu));
/* 74ef9d: mov dword ptr [esi + 0x47c], eax */
  W32((uint32_t)(esi + 0x47cu), eax);
/* 74efa3: lea ecx, [edi + 0x480] */
  ecx = (uint32_t)(edi + 0x480u);
/* 74efa9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 74efab: lea edx, [esi + 0x480] */
  edx = (uint32_t)(esi + 0x480u);
/* 74efb1: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 74efb3: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 74efb6: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 74efb9: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 74efbc: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 74efbf: mov edx, dword ptr [edi + 0x48c] */
  edx = R32((uint32_t)(edi + 0x48cu));
/* 74efc5: mov dword ptr [esi + 0x48c], edx */
  W32((uint32_t)(esi + 0x48cu), edx);
/* 74efcb: mov eax, dword ptr [edi + 0x490] */
  eax = R32((uint32_t)(edi + 0x490u));
/* 74efd1: mov dword ptr [esi + 0x490], eax */
  W32((uint32_t)(esi + 0x490u), eax);
/* 74efd7: mov ecx, dword ptr [edi + 0x494] */
  ecx = R32((uint32_t)(edi + 0x494u));
/* 74efdd: mov dword ptr [esi + 0x494], ecx */
  W32((uint32_t)(esi + 0x494u), ecx);
/* 74efe3: mov edx, dword ptr [edi + 0x498] */
  edx = R32((uint32_t)(edi + 0x498u));
/* 74efe9: mov dword ptr [esi + 0x498], edx */
  W32((uint32_t)(esi + 0x498u), edx);
/* 74efef: mov eax, dword ptr [edi + 0x49c] */
  eax = R32((uint32_t)(edi + 0x49cu));
/* 74eff5: mov dword ptr [esi + 0x49c], eax */
  W32((uint32_t)(esi + 0x49cu), eax);
/* 74effb: mov ecx, dword ptr [edi + 0x4a0] */
  ecx = R32((uint32_t)(edi + 0x4a0u));
/* 74f001: mov dword ptr [esi + 0x4a0], ecx */
  W32((uint32_t)(esi + 0x4a0u), ecx);
/* 74f007: lea edx, [edi + 0x4a4] */
  edx = (uint32_t)(edi + 0x4a4u);
/* 74f00d: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 74f00f: lea eax, [esi + 0x4a4] */
  eax = (uint32_t)(esi + 0x4a4u);
/* 74f015: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 74f017: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 74f01a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 74f01d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 74f020: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 74f023: mov eax, dword ptr [edi + 0x4b0] */
  eax = R32((uint32_t)(edi + 0x4b0u));
/* 74f029: mov dword ptr [esi + 0x4b0], eax */
  W32((uint32_t)(esi + 0x4b0u), eax);
/* 74f02f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74f030: mov eax, esi */
  eax = esi;
/* 74f032: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74f033: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74f034: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74f190(void) {
  LOAD_REGS();
L_74f190: /* 74f190: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74f191: mov esi, ecx */
  esi = ecx;
/* 74f193: call 0x6c5673 */
  esp -= 4; W32(esp, 0x74f198u); SPILL(); f_6c5673(); if (g_unwind) return; RELOAD();
/* 74f198: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74f19d: je 0x74f1ae */
  if (zf) goto L_74f1ae;
L_74f19f: /* 74f19f: push 0x4b4 */
  { uint32_t v = 0x4b4u; esp -= 4; W32(esp, v); }
/* 74f1a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74f1a5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74f1abu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74f1ab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74f1ae: /* 74f1ae: mov eax, esi */
  eax = esi;
/* 74f1b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74f1b1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74f1d0(void) {
  LOAD_REGS();
L_74f1d0: /* 74f1d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 74f1d1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 74f1d5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74f1d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74f1d9: mov esi, ecx */
  esi = ecx;
/* 74f1db: je 0x74f210 */
  if (zf) goto L_74f210;
L_74f1dd: /* 74f1dd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 74f1e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74f1e1: push 0x6c5673 */
  { uint32_t v = 0x6c5673u; esp -= 4; W32(esp, v); }
/* 74f1e6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 74f1e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74f1ea: push 0x4b4 */
  { uint32_t v = 0x4b4u; esp -= 4; W32(esp, v); }
/* 74f1ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74f1f0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x74f1f5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 74f1f5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74f1f8: je 0x74f208 */
  if (zf) goto L_74f208;
L_74f1fa: /* 74f1fa: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 74f200: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 74f202: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 74f204: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74f205: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x74f208u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_74f208: /* 74f208: mov eax, edi */
  eax = edi;
/* 74f20a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74f20b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74f20c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74f20d: ret 4 */
  esp += 8; SPILL(); return;
L_74f210: /* 74f210: mov ecx, esi */
  ecx = esi;
/* 74f212: call 0x6c5673 */
  esp -= 4; W32(esp, 0x74f217u); SPILL(); f_6c5673(); if (g_unwind) return; RELOAD();
/* 74f217: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74f21a: je 0x74f22b */
  if (zf) goto L_74f22b;
L_74f21c: /* 74f21c: push 0x4b4 */
  { uint32_t v = 0x4b4u; esp -= 4; W32(esp, v); }
/* 74f221: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74f222: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74f228u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74f228: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74f22b: /* 74f22b: mov eax, esi */
  eax = esi;
/* 74f22d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74f22e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74f22f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74f260(void) {
  LOAD_REGS();
L_74f260: /* 74f260: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 74f262: push 0x9c8032 */
  { uint32_t v = 0x9c8032u; esp -= 4; W32(esp, v); }
/* 74f267: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74f26d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74f26e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 74f275: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74f276: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74f277: mov esi, ecx */
  esi = ecx;
/* 74f279: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74f27d: mov dword ptr [esi], 0xa028e0 */
  W32((uint32_t)(esi), 0xa028e0u);
/* 74f283: mov dword ptr [esp + 0x10], 0x10 */
  W32((uint32_t)(esp + 0x10u), 0x10u);
/* 74f28b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x74f291u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 74f291: lea ecx, [esi + 0x7d8] */
  ecx = (uint32_t)(esi + 0x7d8u);
/* 74f297: mov byte ptr [esp + 0x10], 0xf */
  W8((uint32_t)(esp + 0x10u), 0xfu);
/* 74f29c: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x74f2a2u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 74f2a2: lea ecx, [esi + 0x7cc] */
  ecx = (uint32_t)(esi + 0x7ccu);
/* 74f2a8: mov byte ptr [esp + 0x10], 0xe */
  W8((uint32_t)(esp + 0x10u), 0xeu);
/* 74f2ad: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x74f2b3u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 74f2b3: lea ecx, [esi + 0x714] */
  ecx = (uint32_t)(esi + 0x714u);
/* 74f2b9: mov byte ptr [esp + 0x10], 0xd */
  W8((uint32_t)(esp + 0x10u), 0xdu);
/* 74f2be: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x74f2c4u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 74f2c4: lea ecx, [esi + 0x708] */
  ecx = (uint32_t)(esi + 0x708u);
/* 74f2ca: mov byte ptr [esp + 0x10], 0xc */
  W8((uint32_t)(esp + 0x10u), 0xcu);
/* 74f2cf: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x74f2d5u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 74f2d5: lea ecx, [esi + 0x6f8] */
  ecx = (uint32_t)(esi + 0x6f8u);
/* 74f2db: mov byte ptr [esp + 0x10], 0xb */
  W8((uint32_t)(esp + 0x10u), 0xbu);
/* 74f2e0: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x74f2e6u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 74f2e6: lea ecx, [esi + 0x6ec] */
  ecx = (uint32_t)(esi + 0x6ecu);
/* 74f2ec: mov byte ptr [esp + 0x10], 0xa */
  W8((uint32_t)(esp + 0x10u), 0xau);
/* 74f2f1: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x74f2f7u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 74f2f7: lea ecx, [esi + 0x6e0] */
  ecx = (uint32_t)(esi + 0x6e0u);
/* 74f2fd: mov byte ptr [esp + 0x10], 9 */
  W8((uint32_t)(esp + 0x10u), 0x9u);
/* 74f302: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x74f308u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 74f308: lea ecx, [esi + 0x6d4] */
  ecx = (uint32_t)(esi + 0x6d4u);
/* 74f30e: mov byte ptr [esp + 0x10], 8 */
  W8((uint32_t)(esp + 0x10u), 0x8u);
/* 74f313: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x74f319u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 74f319: mov eax, dword ptr [0xcfa304] */
  eax = R32((uint32_t)(0xcfa304u));
/* 74f31e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74f31f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 74f321: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 74f323: lea ecx, [esi + 0x690] */
  ecx = (uint32_t)(esi + 0x690u);
/* 74f329: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74f32a: mov byte ptr [esp + 0x20], 7 */
  W8((uint32_t)(esp + 0x20u), 0x7u);
/* 74f32f: call 0x99ca3d */
  esp -= 4; W32(esp, 0x74f334u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 74f334: lea ecx, [esi + 0x654] */
  ecx = (uint32_t)(esi + 0x654u);
/* 74f33a: mov byte ptr [esp + 0x10], 6 */
  W8((uint32_t)(esp + 0x10u), 0x6u);
/* 74f33f: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x74f345u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 74f345: lea ecx, [esi + 0x5a0] */
  ecx = (uint32_t)(esi + 0x5a0u);
/* 74f34b: mov byte ptr [esp + 0x10], 5 */
  W8((uint32_t)(esp + 0x10u), 0x5u);
/* 74f350: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x74f356u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 74f356: lea ecx, [esi + 0x570] */
  ecx = (uint32_t)(esi + 0x570u);
/* 74f35c: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* 74f361: call 0x6c605a */
  esp -= 4; W32(esp, 0x74f366u); SPILL(); f_6c605a(); if (g_unwind) return; RELOAD();
/* 74f366: lea ecx, [esi + 0x4e4] */
  ecx = (uint32_t)(esi + 0x4e4u);
/* 74f36c: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 74f371: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x74f377u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 74f377: lea ecx, [esi + 0x4d8] */
  ecx = (uint32_t)(esi + 0x4d8u);
/* 74f37d: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 74f382: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x74f388u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 74f388: lea ecx, [esi + 0x4cc] */
  ecx = (uint32_t)(esi + 0x4ccu);
/* 74f38e: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 74f393: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x74f399u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 74f399: lea ecx, [esi + 0x4b4] */
  ecx = (uint32_t)(esi + 0x4b4u);
/* 74f39f: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 74f3a4: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x74f3aau); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 74f3aa: mov ecx, esi */
  ecx = esi;
/* 74f3ac: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 74f3b4: call 0x6c5673 */
  esp -= 4; W32(esp, 0x74f3b9u); SPILL(); f_6c5673(); if (g_unwind) return; RELOAD();
/* 74f3b9: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 74f3bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74f3be: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74f3c5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74f3c8: ret  */
  esp += 4; SPILL(); return;
}

void f_74f430(void) {
  LOAD_REGS();
L_74f430: /* 74f430: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 74f432: push 0x9c8173 */
  { uint32_t v = 0x9c8173u; esp -= 4; W32(esp, v); }
/* 74f437: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74f43d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74f43e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 74f445: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74f446: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74f447: mov esi, ecx */
  esi = ecx;
/* 74f449: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74f44d: call 0x6c95b1 */
  esp -= 4; W32(esp, 0x74f452u); SPILL(); f_6c95b1(); if (g_unwind) return; RELOAD();
/* 74f452: lea ecx, [esi + 0x4b4] */
  ecx = (uint32_t)(esi + 0x4b4u);
/* 74f458: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 74f460: mov dword ptr [esi], 0xa028e0 */
  W32((uint32_t)(esi), 0xa028e0u);
/* 74f466: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x74f46cu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 74f46c: lea ecx, [esi + 0x4cc] */
  ecx = (uint32_t)(esi + 0x4ccu);
/* 74f472: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 74f477: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x74f47du); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 74f47d: lea ecx, [esi + 0x4d8] */
  ecx = (uint32_t)(esi + 0x4d8u);
/* 74f483: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 74f488: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x74f48eu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 74f48e: lea ecx, [esi + 0x4e4] */
  ecx = (uint32_t)(esi + 0x4e4u);
/* 74f494: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 74f499: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x74f49fu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 74f49f: lea ecx, [esi + 0x564] */
  ecx = (uint32_t)(esi + 0x564u);
/* 74f4a5: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* 74f4aa: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x74f4b0u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 74f4b0: lea ecx, [esi + 0x570] */
  ecx = (uint32_t)(esi + 0x570u);
/* 74f4b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 74f4b8: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x74f4beu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 74f4be: lea ecx, [esi + 0x594] */
  ecx = (uint32_t)(esi + 0x594u);
/* 74f4c4: mov byte ptr [esp + 0x10], 5 */
  W8((uint32_t)(esp + 0x10u), 0x5u);
/* 74f4c9: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x74f4cfu); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 74f4cf: lea ecx, [esi + 0x620] */
  ecx = (uint32_t)(esi + 0x620u);
/* 74f4d5: mov byte ptr [esp + 0x10], 6 */
  W8((uint32_t)(esp + 0x10u), 0x6u);
/* 74f4da: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x74f4e0u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 74f4e0: lea ecx, [esi + 0x62c] */
  ecx = (uint32_t)(esi + 0x62cu);
/* 74f4e6: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x74f4ecu); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 74f4ec: lea ecx, [esi + 0x654] */
  ecx = (uint32_t)(esi + 0x654u);
/* 74f4f2: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x74f4f8u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 74f4f8: mov eax, dword ptr [0xcfa304] */
  eax = R32((uint32_t)(0xcfa304u));
/* 74f4fd: mov ecx, dword ptr [0xcfa300] */
  ecx = R32((uint32_t)(0xcfa300u));
/* 74f503: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74f504: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74f505: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 74f507: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 74f509: lea edx, [esi + 0x690] */
  edx = (uint32_t)(esi + 0x690u);
/* 74f50f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 74f510: mov byte ptr [esp + 0x24], 7 */
  W8((uint32_t)(esp + 0x24u), 0x7u);
/* 74f515: call 0x99cafe */
  esp -= 4; W32(esp, 0x74f51au); SPILL(); f_99cafe(); if (g_unwind) return; RELOAD();
/* 74f51a: lea ecx, [esi + 0x6d4] */
  ecx = (uint32_t)(esi + 0x6d4u);
/* 74f520: mov byte ptr [esp + 0x10], 8 */
  W8((uint32_t)(esp + 0x10u), 0x8u);
/* 74f525: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x74f52bu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 74f52b: lea ecx, [esi + 0x6e0] */
  ecx = (uint32_t)(esi + 0x6e0u);
/* 74f531: mov byte ptr [esp + 0x10], 9 */
  W8((uint32_t)(esp + 0x10u), 0x9u);
/* 74f536: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x74f53cu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 74f53c: lea ecx, [esi + 0x6ec] */
  ecx = (uint32_t)(esi + 0x6ecu);
/* 74f542: mov byte ptr [esp + 0x10], 0xa */
  W8((uint32_t)(esp + 0x10u), 0xau);
/* 74f547: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x74f54du); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 74f54d: lea ecx, [esi + 0x6f8] */
  ecx = (uint32_t)(esi + 0x6f8u);
/* 74f553: mov byte ptr [esp + 0x10], 0xb */
  W8((uint32_t)(esp + 0x10u), 0xbu);
/* 74f558: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x74f55eu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 74f55e: lea ecx, [esi + 0x708] */
  ecx = (uint32_t)(esi + 0x708u);
/* 74f564: mov byte ptr [esp + 0x10], 0xc */
  W8((uint32_t)(esp + 0x10u), 0xcu);
/* 74f569: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x74f56fu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 74f56f: lea ecx, [esi + 0x714] */
  ecx = (uint32_t)(esi + 0x714u);
/* 74f575: mov byte ptr [esp + 0x10], 0xd */
  W8((uint32_t)(esp + 0x10u), 0xdu);
/* 74f57a: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x74f580u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 74f580: lea ecx, [esi + 0x76c] */
  ecx = (uint32_t)(esi + 0x76cu);
/* 74f586: mov byte ptr [esp + 0x10], 0xe */
  W8((uint32_t)(esp + 0x10u), 0xeu);
/* 74f58b: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x74f591u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 74f591: lea ecx, [esi + 0x7cc] */
  ecx = (uint32_t)(esi + 0x7ccu);
/* 74f597: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x74f59du); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 74f59d: lea ecx, [esi + 0x7d8] */
  ecx = (uint32_t)(esi + 0x7d8u);
/* 74f5a3: mov byte ptr [esp + 0x10], 0xf */
  W8((uint32_t)(esp + 0x10u), 0xfu);
/* 74f5a8: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x74f5aeu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 74f5ae: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 74f5b2: mov eax, esi */
  eax = esi;
/* 74f5b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74f5b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74f5bc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74f5bf: ret  */
  esp += 4; SPILL(); return;
}

void f_74f630(void) {
  LOAD_REGS();
L_74f630: /* 74f630: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 74f632: push 0x9c8299 */
  { uint32_t v = 0x9c8299u; esp -= 4; W32(esp, v); }
/* 74f637: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74f63d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74f63e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 74f645: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74f646: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 74f647: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 74f648: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 74f64c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 74f64d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 74f64e: mov ebx, ecx */
  ebx = ecx;
/* 74f650: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 74f651: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 74f655: call 0x6c4d09 */
  esp -= 4; W32(esp, 0x74f65au); SPILL(); f_6c4d09(); if (g_unwind) return; RELOAD();
/* 74f65a: lea eax, [ebp + 0x4b4] */
  eax = (uint32_t)(ebp + 0x4b4u);
/* 74f660: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74f661: lea ecx, [ebx + 0x4b4] */
  ecx = (uint32_t)(ebx + 0x4b4u);
/* 74f667: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 74f66f: mov dword ptr [ebx], 0xa028e0 */
  W32((uint32_t)(ebx), 0xa028e0u);
/* 74f675: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x74f67bu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 74f67b: mov ecx, dword ptr [ebp + 0x4c0] */
  ecx = R32((uint32_t)(ebp + 0x4c0u));
/* 74f681: mov edx, dword ptr [ebx + 0x4c4] */
  edx = R32((uint32_t)(ebx + 0x4c4u));
/* 74f687: mov esi, dword ptr [ebx + 0x4c4] */
  esi = R32((uint32_t)(ebx + 0x4c4u));
/* 74f68d: mov dword ptr [ebx + 0x4c0], ecx */
  W32((uint32_t)(ebx + 0x4c0u), ecx);
/* 74f693: xor edx, dword ptr [ebp + 0x4c4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4c4u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74f699: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 74f69c: xor esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 74f69e: mov dword ptr [ebx + 0x4c4], esi */
  W32((uint32_t)(ebx + 0x4c4u), esi);
/* 74f6a4: mov eax, dword ptr [ebp + 0x4c4] */
  eax = R32((uint32_t)(ebp + 0x4c4u));
/* 74f6aa: mov ecx, esi */
  ecx = esi;
/* 74f6ac: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74f6ae: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74f6b1: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74f6b3: mov dword ptr [ebx + 0x4c4], eax */
  W32((uint32_t)(ebx + 0x4c4u), eax);
/* 74f6b9: mov ecx, dword ptr [ebp + 0x4c4] */
  ecx = R32((uint32_t)(ebp + 0x4c4u));
/* 74f6bf: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74f6c1: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74f6c4: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74f6c6: mov dword ptr [ebx + 0x4c4], ecx */
  W32((uint32_t)(ebx + 0x4c4u), ecx);
/* 74f6cc: mov eax, dword ptr [ebp + 0x4c4] */
  eax = R32((uint32_t)(ebp + 0x4c4u));
/* 74f6d2: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74f6d4: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74f6d7: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74f6d9: mov dword ptr [ebx + 0x4c4], eax */
  W32((uint32_t)(ebx + 0x4c4u), eax);
/* 74f6df: mov ecx, dword ptr [ebp + 0x4c4] */
  ecx = R32((uint32_t)(ebp + 0x4c4u));
/* 74f6e5: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74f6e7: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74f6ea: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74f6ec: mov dword ptr [ebx + 0x4c4], ecx */
  W32((uint32_t)(ebx + 0x4c4u), ecx);
/* 74f6f2: mov eax, dword ptr [ebp + 0x4c4] */
  eax = R32((uint32_t)(ebp + 0x4c4u));
/* 74f6f8: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74f6fa: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74f6fd: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74f6ff: mov dword ptr [ebx + 0x4c4], eax */
  W32((uint32_t)(ebx + 0x4c4u), eax);
/* 74f705: mov ecx, dword ptr [ebp + 0x4c4] */
  ecx = R32((uint32_t)(ebp + 0x4c4u));
/* 74f70b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74f70d: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74f710: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74f712: mov dword ptr [ebx + 0x4c4], ecx */
  W32((uint32_t)(ebx + 0x4c4u), ecx);
/* 74f718: mov eax, dword ptr [ebp + 0x4c4] */
  eax = R32((uint32_t)(ebp + 0x4c4u));
/* 74f71e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74f720: and eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74f725: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74f727: mov dword ptr [ebx + 0x4c4], eax */
  W32((uint32_t)(ebx + 0x4c4u), eax);
/* 74f72d: mov ecx, dword ptr [ebp + 0x4c4] */
  ecx = R32((uint32_t)(ebp + 0x4c4u));
/* 74f733: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74f735: and ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74f73b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74f73d: mov dword ptr [ebx + 0x4c4], ecx */
  W32((uint32_t)(ebx + 0x4c4u), ecx);
/* 74f743: mov eax, dword ptr [ebp + 0x4c4] */
  eax = R32((uint32_t)(ebp + 0x4c4u));
/* 74f749: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74f74b: and eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74f750: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74f752: mov dword ptr [ebx + 0x4c4], eax */
  W32((uint32_t)(ebx + 0x4c4u), eax);
/* 74f758: mov ecx, dword ptr [ebp + 0x4c4] */
  ecx = R32((uint32_t)(ebp + 0x4c4u));
/* 74f75e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74f760: and ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74f766: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74f768: mov dword ptr [ebx + 0x4c4], ecx */
  W32((uint32_t)(ebx + 0x4c4u), ecx);
/* 74f76e: mov eax, dword ptr [ebp + 0x4c4] */
  eax = R32((uint32_t)(ebp + 0x4c4u));
/* 74f774: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74f776: mov byte ptr [esp + 0x1c], 1 */
  W8((uint32_t)(esp + 0x1cu), 0x1u);
/* 74f77b: and eax, 0x800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74f780: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74f782: mov dword ptr [ebx + 0x4c4], eax */
  W32((uint32_t)(ebx + 0x4c4u), eax);
/* 74f788: mov ecx, dword ptr [ebp + 0x4c4] */
  ecx = R32((uint32_t)(ebp + 0x4c4u));
/* 74f78e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74f790: and ecx, 0x1000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74f796: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74f798: mov dword ptr [ebx + 0x4c4], ecx */
  W32((uint32_t)(ebx + 0x4c4u), ecx);
/* 74f79e: mov eax, dword ptr [ebp + 0x4c4] */
  eax = R32((uint32_t)(ebp + 0x4c4u));
/* 74f7a4: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74f7a6: and eax, 0x2000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74f7ab: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74f7ad: mov dword ptr [ebx + 0x4c4], eax */
  W32((uint32_t)(ebx + 0x4c4u), eax);
/* 74f7b3: mov ecx, dword ptr [ebp + 0x4c4] */
  ecx = R32((uint32_t)(ebp + 0x4c4u));
/* 74f7b9: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74f7bb: and ecx, 0x4000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74f7c1: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74f7c3: mov dword ptr [ebx + 0x4c4], ecx */
  W32((uint32_t)(ebx + 0x4c4u), ecx);
/* 74f7c9: mov eax, dword ptr [ebp + 0x4c4] */
  eax = R32((uint32_t)(ebp + 0x4c4u));
/* 74f7cf: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74f7d1: and eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74f7d6: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74f7d8: mov dword ptr [ebx + 0x4c4], eax */
  W32((uint32_t)(ebx + 0x4c4u), eax);
/* 74f7de: mov ecx, dword ptr [ebp + 0x4c4] */
  ecx = R32((uint32_t)(ebp + 0x4c4u));
/* 74f7e4: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74f7e6: and ecx, 0x10000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74f7ec: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74f7ee: mov dword ptr [ebx + 0x4c4], ecx */
  W32((uint32_t)(ebx + 0x4c4u), ecx);
/* 74f7f4: mov eax, dword ptr [ebp + 0x4c4] */
  eax = R32((uint32_t)(ebp + 0x4c4u));
/* 74f7fa: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74f7fc: and eax, 0x20000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74f801: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74f803: mov dword ptr [ebx + 0x4c4], eax */
  W32((uint32_t)(ebx + 0x4c4u), eax);
/* 74f809: mov ecx, dword ptr [ebp + 0x4c4] */
  ecx = R32((uint32_t)(ebp + 0x4c4u));
/* 74f80f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74f811: and ecx, 0x40000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74f817: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74f819: mov dword ptr [ebx + 0x4c4], ecx */
  W32((uint32_t)(ebx + 0x4c4u), ecx);
/* 74f81f: mov eax, dword ptr [ebp + 0x4c4] */
  eax = R32((uint32_t)(ebp + 0x4c4u));
/* 74f825: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74f827: and eax, 0x80000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74f82c: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74f82e: mov dword ptr [ebx + 0x4c4], eax */
  W32((uint32_t)(ebx + 0x4c4u), eax);
/* 74f834: mov ecx, dword ptr [ebp + 0x4c4] */
  ecx = R32((uint32_t)(ebp + 0x4c4u));
/* 74f83a: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74f83c: and ecx, 0x100000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74f842: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74f844: mov dword ptr [ebx + 0x4c4], ecx */
  W32((uint32_t)(ebx + 0x4c4u), ecx);
/* 74f84a: mov eax, dword ptr [ebp + 0x4c4] */
  eax = R32((uint32_t)(ebp + 0x4c4u));
/* 74f850: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74f852: and eax, 0x200000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74f857: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74f859: mov dword ptr [ebx + 0x4c4], eax */
  W32((uint32_t)(ebx + 0x4c4u), eax);
/* 74f85f: mov ecx, dword ptr [ebp + 0x4c4] */
  ecx = R32((uint32_t)(ebp + 0x4c4u));
/* 74f865: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74f867: and ecx, 0x400000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74f86d: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74f86f: mov dword ptr [ebx + 0x4c4], ecx */
  W32((uint32_t)(ebx + 0x4c4u), ecx);
/* 74f875: mov eax, dword ptr [ebp + 0x4c4] */
  eax = R32((uint32_t)(ebp + 0x4c4u));
/* 74f87b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74f87d: and eax, 0x800000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74f882: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74f884: mov dword ptr [ebx + 0x4c4], eax */
  W32((uint32_t)(ebx + 0x4c4u), eax);
/* 74f88a: mov ecx, dword ptr [ebp + 0x4c4] */
  ecx = R32((uint32_t)(ebp + 0x4c4u));
/* 74f890: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74f892: and ecx, 0x1000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74f898: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74f89a: mov dword ptr [ebx + 0x4c4], ecx */
  W32((uint32_t)(ebx + 0x4c4u), ecx);
/* 74f8a0: mov eax, dword ptr [ebp + 0x4c4] */
  eax = R32((uint32_t)(ebp + 0x4c4u));
/* 74f8a6: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74f8a8: and eax, 0x2000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74f8ad: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74f8af: mov dword ptr [ebx + 0x4c4], eax */
  W32((uint32_t)(ebx + 0x4c4u), eax);
/* 74f8b5: mov ecx, dword ptr [ebp + 0x4c4] */
  ecx = R32((uint32_t)(ebp + 0x4c4u));
/* 74f8bb: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74f8bd: and ecx, 0x4000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74f8c3: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74f8c5: mov dword ptr [ebx + 0x4c4], ecx */
  W32((uint32_t)(ebx + 0x4c4u), ecx);
/* 74f8cb: mov eax, dword ptr [ebp + 0x4c4] */
  eax = R32((uint32_t)(ebp + 0x4c4u));
/* 74f8d1: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74f8d3: and eax, 0x8000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74f8d8: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74f8da: mov dword ptr [ebx + 0x4c4], eax */
  W32((uint32_t)(ebx + 0x4c4u), eax);
/* 74f8e0: mov ecx, dword ptr [ebp + 0x4c4] */
  ecx = R32((uint32_t)(ebp + 0x4c4u));
/* 74f8e6: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74f8e8: and ecx, 0x10000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74f8ee: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74f8f0: mov dword ptr [ebx + 0x4c4], ecx */
  W32((uint32_t)(ebx + 0x4c4u), ecx);
/* 74f8f6: mov eax, dword ptr [ebp + 0x4c4] */
  eax = R32((uint32_t)(ebp + 0x4c4u));
/* 74f8fc: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74f8fe: and eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74f903: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74f905: mov dword ptr [ebx + 0x4c4], eax */
  W32((uint32_t)(ebx + 0x4c4u), eax);
/* 74f90b: mov ecx, dword ptr [ebp + 0x4c4] */
  ecx = R32((uint32_t)(ebp + 0x4c4u));
/* 74f911: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74f913: and ecx, 0x40000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74f919: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74f91b: mov dword ptr [ebx + 0x4c4], ecx */
  W32((uint32_t)(ebx + 0x4c4u), ecx);
/* 74f921: mov eax, dword ptr [ebp + 0x4c4] */
  eax = R32((uint32_t)(ebp + 0x4c4u));
/* 74f927: mov edi, dword ptr [ebp + 0x4c4] */
  edi = R32((uint32_t)(ebp + 0x4c4u));
/* 74f92d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74f92f: mov ecx, dword ptr [ebx + 0x4c8] */
  ecx = R32((uint32_t)(ebx + 0x4c8u));
/* 74f935: and eax, 0x7fffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74f93a: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74f93c: mov dword ptr [ebx + 0x4c4], eax */
  W32((uint32_t)(ebx + 0x4c4u), eax);
/* 74f942: mov esi, dword ptr [ebp + 0x4c8] */
  esi = R32((uint32_t)(ebp + 0x4c8u));
/* 74f948: mov eax, dword ptr [ebx + 0x4c8] */
  eax = R32((uint32_t)(ebx + 0x4c8u));
/* 74f94e: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74f950: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74f953: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74f955: mov dword ptr [ebx + 0x4c8], eax */
  W32((uint32_t)(ebx + 0x4c8u), eax);
/* 74f95b: mov ecx, eax */
  ecx = eax;
/* 74f95d: mov eax, dword ptr [ebp + 0x4c8] */
  eax = R32((uint32_t)(ebp + 0x4c8u));
/* 74f963: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74f965: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74f968: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74f96a: mov dword ptr [ebx + 0x4c8], eax */
  W32((uint32_t)(ebx + 0x4c8u), eax);
/* 74f970: mov ecx, dword ptr [ebp + 0x4c8] */
  ecx = R32((uint32_t)(ebp + 0x4c8u));
/* 74f976: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74f978: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74f97b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74f97d: mov dword ptr [ebx + 0x4c8], ecx */
  W32((uint32_t)(ebx + 0x4c8u), ecx);
/* 74f983: mov eax, dword ptr [ebp + 0x4c8] */
  eax = R32((uint32_t)(ebp + 0x4c8u));
/* 74f989: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74f98b: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74f98e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74f990: mov dword ptr [ebx + 0x4c8], eax */
  W32((uint32_t)(ebx + 0x4c8u), eax);
/* 74f996: mov edx, dword ptr [ebp + 0x4c8] */
  edx = R32((uint32_t)(ebp + 0x4c8u));
/* 74f99c: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74f99e: and edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 74f9a1: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74f9a3: lea eax, [ebp + 0x4cc] */
  eax = (uint32_t)(ebp + 0x4ccu);
/* 74f9a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74f9aa: lea ecx, [ebx + 0x4cc] */
  ecx = (uint32_t)(ebx + 0x4ccu);
/* 74f9b0: mov dword ptr [ebx + 0x4c8], edx */
  W32((uint32_t)(ebx + 0x4c8u), edx);
/* 74f9b6: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x74f9bcu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 74f9bc: lea ecx, [ebp + 0x4d8] */
  ecx = (uint32_t)(ebp + 0x4d8u);
/* 74f9c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74f9c3: lea ecx, [ebx + 0x4d8] */
  ecx = (uint32_t)(ebx + 0x4d8u);
/* 74f9c9: mov byte ptr [esp + 0x20], 2 */
  W8((uint32_t)(esp + 0x20u), 0x2u);
/* 74f9ce: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x74f9d4u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 74f9d4: lea edx, [ebp + 0x4e4] */
  edx = (uint32_t)(ebp + 0x4e4u);
/* 74f9da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 74f9db: lea ecx, [ebx + 0x4e4] */
  ecx = (uint32_t)(ebx + 0x4e4u);
/* 74f9e1: mov byte ptr [esp + 0x20], 3 */
  W8((uint32_t)(esp + 0x20u), 0x3u);
/* 74f9e6: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x74f9ecu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 74f9ec: mov al, byte ptr [ebp + 0x4f0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x4f0u))) & 0xffu);
/* 74f9f2: mov byte ptr [ebx + 0x4f0], al */
  W8((uint32_t)(ebx + 0x4f0u), (eax & 0xffu));
/* 74f9f8: mov cl, byte ptr [ebp + 0x4f1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x4f1u))) & 0xffu);
/* 74f9fe: mov byte ptr [ebx + 0x4f1], cl */
  W8((uint32_t)(ebx + 0x4f1u), (ecx & 0xffu));
/* 74fa04: mov edx, dword ptr [ebp + 0x4f4] */
  edx = R32((uint32_t)(ebp + 0x4f4u));
/* 74fa0a: mov dword ptr [ebx + 0x4f4], edx */
  W32((uint32_t)(ebx + 0x4f4u), edx);
/* 74fa10: mov eax, dword ptr [ebp + 0x4f8] */
  eax = R32((uint32_t)(ebp + 0x4f8u));
/* 74fa16: mov dword ptr [ebx + 0x4f8], eax */
  W32((uint32_t)(ebx + 0x4f8u), eax);
/* 74fa1c: mov ecx, dword ptr [ebp + 0x4fc] */
  ecx = R32((uint32_t)(ebp + 0x4fcu));
/* 74fa22: mov dword ptr [ebx + 0x4fc], ecx */
  W32((uint32_t)(ebx + 0x4fcu), ecx);
/* 74fa28: mov edx, dword ptr [ebp + 0x500] */
  edx = R32((uint32_t)(ebp + 0x500u));
/* 74fa2e: mov dword ptr [ebx + 0x500], edx */
  W32((uint32_t)(ebx + 0x500u), edx);
/* 74fa34: mov eax, dword ptr [ebp + 0x504] */
  eax = R32((uint32_t)(ebp + 0x504u));
/* 74fa3a: mov byte ptr [esp + 0x1c], 4 */
  W8((uint32_t)(esp + 0x1cu), 0x4u);
/* 74fa3f: mov dword ptr [ebx + 0x504], eax */
  W32((uint32_t)(ebx + 0x504u), eax);
/* 74fa45: mov ecx, dword ptr [ebp + 0x508] */
  ecx = R32((uint32_t)(ebp + 0x508u));
/* 74fa4b: mov dword ptr [ebx + 0x508], ecx */
  W32((uint32_t)(ebx + 0x508u), ecx);
/* 74fa51: mov edx, dword ptr [ebp + 0x50c] */
  edx = R32((uint32_t)(ebp + 0x50cu));
/* 74fa57: mov dword ptr [ebx + 0x50c], edx */
  W32((uint32_t)(ebx + 0x50cu), edx);
/* 74fa5d: mov eax, dword ptr [ebp + 0x510] */
  eax = R32((uint32_t)(ebp + 0x510u));
/* 74fa63: mov dword ptr [ebx + 0x510], eax */
  W32((uint32_t)(ebx + 0x510u), eax);
/* 74fa69: mov ecx, dword ptr [ebp + 0x514] */
  ecx = R32((uint32_t)(ebp + 0x514u));
/* 74fa6f: mov dword ptr [ebx + 0x514], ecx */
  W32((uint32_t)(ebx + 0x514u), ecx);
/* 74fa75: mov edx, dword ptr [ebp + 0x518] */
  edx = R32((uint32_t)(ebp + 0x518u));
/* 74fa7b: mov dword ptr [ebx + 0x518], edx */
  W32((uint32_t)(ebx + 0x518u), edx);
/* 74fa81: mov eax, dword ptr [ebp + 0x51c] */
  eax = R32((uint32_t)(ebp + 0x51cu));
/* 74fa87: mov dword ptr [ebx + 0x51c], eax */
  W32((uint32_t)(ebx + 0x51cu), eax);
/* 74fa8d: mov ecx, dword ptr [ebp + 0x520] */
  ecx = R32((uint32_t)(ebp + 0x520u));
/* 74fa93: mov dword ptr [ebx + 0x520], ecx */
  W32((uint32_t)(ebx + 0x520u), ecx);
/* 74fa99: mov edx, dword ptr [ebp + 0x524] */
  edx = R32((uint32_t)(ebp + 0x524u));
/* 74fa9f: mov dword ptr [ebx + 0x524], edx */
  W32((uint32_t)(ebx + 0x524u), edx);
/* 74faa5: mov al, byte ptr [ebp + 0x528] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x528u))) & 0xffu);
/* 74faab: mov byte ptr [ebx + 0x528], al */
  W8((uint32_t)(ebx + 0x528u), (eax & 0xffu));
/* 74fab1: mov cl, byte ptr [ebp + 0x529] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x529u))) & 0xffu);
/* 74fab7: mov byte ptr [ebx + 0x529], cl */
  W8((uint32_t)(ebx + 0x529u), (ecx & 0xffu));
/* 74fabd: mov dl, byte ptr [ebp + 0x52a] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x52au))) & 0xffu);
/* 74fac3: mov byte ptr [ebx + 0x52a], dl */
  W8((uint32_t)(ebx + 0x52au), (edx & 0xffu));
/* 74fac9: mov al, byte ptr [ebp + 0x52b] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x52bu))) & 0xffu);
/* 74facf: mov byte ptr [ebx + 0x52b], al */
  W8((uint32_t)(ebx + 0x52bu), (eax & 0xffu));
/* 74fad5: mov cl, byte ptr [ebp + 0x52c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x52cu))) & 0xffu);
/* 74fadb: mov byte ptr [ebx + 0x52c], cl */
  W8((uint32_t)(ebx + 0x52cu), (ecx & 0xffu));
/* 74fae1: mov dl, byte ptr [ebp + 0x52d] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x52du))) & 0xffu);
/* 74fae7: mov byte ptr [ebx + 0x52d], dl */
  W8((uint32_t)(ebx + 0x52du), (edx & 0xffu));
/* 74faed: mov al, byte ptr [ebp + 0x52e] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x52eu))) & 0xffu);
/* 74faf3: mov byte ptr [ebx + 0x52e], al */
  W8((uint32_t)(ebx + 0x52eu), (eax & 0xffu));
/* 74faf9: mov cl, byte ptr [ebp + 0x52f] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x52fu))) & 0xffu);
/* 74faff: mov byte ptr [ebx + 0x52f], cl */
  W8((uint32_t)(ebx + 0x52fu), (ecx & 0xffu));
/* 74fb05: mov dl, byte ptr [ebp + 0x530] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x530u))) & 0xffu);
/* 74fb0b: mov byte ptr [ebx + 0x530], dl */
  W8((uint32_t)(ebx + 0x530u), (edx & 0xffu));
/* 74fb11: mov eax, dword ptr [ebp + 0x534] */
  eax = R32((uint32_t)(ebp + 0x534u));
/* 74fb17: mov dword ptr [ebx + 0x534], eax */
  W32((uint32_t)(ebx + 0x534u), eax);
/* 74fb1d: mov ecx, dword ptr [ebp + 0x538] */
  ecx = R32((uint32_t)(ebp + 0x538u));
/* 74fb23: mov dword ptr [ebx + 0x538], ecx */
  W32((uint32_t)(ebx + 0x538u), ecx);
/* 74fb29: mov edx, dword ptr [ebp + 0x53c] */
  edx = R32((uint32_t)(ebp + 0x53cu));
/* 74fb2f: mov dword ptr [ebx + 0x53c], edx */
  W32((uint32_t)(ebx + 0x53cu), edx);
/* 74fb35: mov eax, dword ptr [ebp + 0x540] */
  eax = R32((uint32_t)(ebp + 0x540u));
/* 74fb3b: mov dword ptr [ebx + 0x540], eax */
  W32((uint32_t)(ebx + 0x540u), eax);
/* 74fb41: mov ecx, dword ptr [ebp + 0x544] */
  ecx = R32((uint32_t)(ebp + 0x544u));
/* 74fb47: mov dword ptr [ebx + 0x544], ecx */
  W32((uint32_t)(ebx + 0x544u), ecx);
/* 74fb4d: mov edx, dword ptr [ebp + 0x548] */
  edx = R32((uint32_t)(ebp + 0x548u));
/* 74fb53: mov dword ptr [ebx + 0x548], edx */
  W32((uint32_t)(ebx + 0x548u), edx);
/* 74fb59: mov eax, dword ptr [ebp + 0x54c] */
  eax = R32((uint32_t)(ebp + 0x54cu));
/* 74fb5f: mov dword ptr [ebx + 0x54c], eax */
  W32((uint32_t)(ebx + 0x54cu), eax);
/* 74fb65: mov ecx, dword ptr [ebp + 0x550] */
  ecx = R32((uint32_t)(ebp + 0x550u));
/* 74fb6b: mov dword ptr [ebx + 0x550], ecx */
  W32((uint32_t)(ebx + 0x550u), ecx);
/* 74fb71: mov edx, dword ptr [ebp + 0x554] */
  edx = R32((uint32_t)(ebp + 0x554u));
/* 74fb77: mov dword ptr [ebx + 0x554], edx */
  W32((uint32_t)(ebx + 0x554u), edx);
/* 74fb7d: lea eax, [ebp + 0x558] */
  eax = (uint32_t)(ebp + 0x558u);
/* 74fb83: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 74fb85: lea ecx, [ebx + 0x558] */
  ecx = (uint32_t)(ebx + 0x558u);
/* 74fb8b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 74fb8d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 74fb90: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 74fb93: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 74fb96: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 74fb99: lea ecx, [ebp + 0x564] */
  ecx = (uint32_t)(ebp + 0x564u);
/* 74fb9f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 74fba1: lea edx, [ebx + 0x564] */
  edx = (uint32_t)(ebx + 0x564u);
/* 74fba7: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 74fba9: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 74fbac: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 74fbaf: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 74fbb2: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 74fbb5: lea edx, [ebp + 0x570] */
  edx = (uint32_t)(ebp + 0x570u);
/* 74fbbb: lea ecx, [ebx + 0x570] */
  ecx = (uint32_t)(ebx + 0x570u);
/* 74fbc1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 74fbc2: call 0x6c545c */
  esp -= 4; W32(esp, 0x74fbc7u); SPILL(); f_6c545c(); if (g_unwind) return; RELOAD();
/* 74fbc7: mov eax, dword ptr [ebp + 0x57c] */
  eax = R32((uint32_t)(ebp + 0x57cu));
/* 74fbcd: mov dword ptr [ebx + 0x57c], eax */
  W32((uint32_t)(ebx + 0x57cu), eax);
/* 74fbd3: mov ecx, dword ptr [ebp + 0x580] */
  ecx = R32((uint32_t)(ebp + 0x580u));
/* 74fbd9: mov dword ptr [ebx + 0x580], ecx */
  W32((uint32_t)(ebx + 0x580u), ecx);
/* 74fbdf: mov edx, dword ptr [ebp + 0x584] */
  edx = R32((uint32_t)(ebp + 0x584u));
/* 74fbe5: mov dword ptr [ebx + 0x584], edx */
  W32((uint32_t)(ebx + 0x584u), edx);
/* 74fbeb: lea eax, [ebp + 0x588] */
  eax = (uint32_t)(ebp + 0x588u);
/* 74fbf1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 74fbf3: lea ecx, [ebx + 0x588] */
  ecx = (uint32_t)(ebx + 0x588u);
/* 74fbf9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 74fbfb: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 74fbfe: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 74fc01: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 74fc04: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 74fc07: lea ecx, [ebp + 0x594] */
  ecx = (uint32_t)(ebp + 0x594u);
/* 74fc0d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 74fc0f: lea edx, [ebx + 0x594] */
  edx = (uint32_t)(ebx + 0x594u);
/* 74fc15: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 74fc17: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 74fc1a: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 74fc1d: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 74fc20: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 74fc23: lea esi, [ebp + 0x5a0] */
  esi = (uint32_t)(ebp + 0x5a0u);
/* 74fc29: lea edi, [ebx + 0x5a0] */
  edi = (uint32_t)(ebx + 0x5a0u);
/* 74fc2f: mov ecx, 0x10 */
  ecx = 0x10u;
/* 74fc34: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 74fc36: lea edx, [ebp + 0x5e0] */
  edx = (uint32_t)(ebp + 0x5e0u);
/* 74fc3c: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 74fc3e: lea eax, [ebx + 0x5e0] */
  eax = (uint32_t)(ebx + 0x5e0u);
/* 74fc44: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 74fc46: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 74fc49: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 74fc4c: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 74fc4f: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 74fc52: lea eax, [ebp + 0x5ec] */
  eax = (uint32_t)(ebp + 0x5ecu);
/* 74fc58: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 74fc5a: lea ecx, [ebx + 0x5ec] */
  ecx = (uint32_t)(ebx + 0x5ecu);
/* 74fc60: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 74fc62: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 74fc65: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 74fc68: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 74fc6b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 74fc6e: mov ecx, dword ptr [ebp + 0x5f8] */
  ecx = R32((uint32_t)(ebp + 0x5f8u));
/* 74fc74: mov dword ptr [ebx + 0x5f8], ecx */
  W32((uint32_t)(ebx + 0x5f8u), ecx);
/* 74fc7a: lea edx, [ebp + 0x5fc] */
  edx = (uint32_t)(ebp + 0x5fcu);
/* 74fc80: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 74fc82: lea eax, [ebx + 0x5fc] */
  eax = (uint32_t)(ebx + 0x5fcu);
/* 74fc88: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 74fc8a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 74fc8d: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 74fc90: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 74fc93: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 74fc96: mov eax, dword ptr [ebp + 0x608] */
  eax = R32((uint32_t)(ebp + 0x608u));
/* 74fc9c: mov dword ptr [ebx + 0x608], eax */
  W32((uint32_t)(ebx + 0x608u), eax);
/* 74fca2: mov ecx, dword ptr [ebp + 0x60c] */
  ecx = R32((uint32_t)(ebp + 0x60cu));
/* 74fca8: mov dword ptr [ebx + 0x60c], ecx */
  W32((uint32_t)(ebx + 0x60cu), ecx);
/* 74fcae: mov edx, dword ptr [ebp + 0x610] */
  edx = R32((uint32_t)(ebp + 0x610u));
/* 74fcb4: mov dword ptr [ebx + 0x610], edx */
  W32((uint32_t)(ebx + 0x610u), edx);
/* 74fcba: mov eax, dword ptr [ebp + 0x614] */
  eax = R32((uint32_t)(ebp + 0x614u));
/* 74fcc0: mov dword ptr [ebx + 0x614], eax */
  W32((uint32_t)(ebx + 0x614u), eax);
/* 74fcc6: mov ecx, dword ptr [ebp + 0x618] */
  ecx = R32((uint32_t)(ebp + 0x618u));
/* 74fccc: mov dword ptr [ebx + 0x618], ecx */
  W32((uint32_t)(ebx + 0x618u), ecx);
/* 74fcd2: mov edx, dword ptr [ebp + 0x61c] */
  edx = R32((uint32_t)(ebp + 0x61cu));
/* 74fcd8: mov dword ptr [ebx + 0x61c], edx */
  W32((uint32_t)(ebx + 0x61cu), edx);
/* 74fcde: lea eax, [ebp + 0x620] */
  eax = (uint32_t)(ebp + 0x620u);
/* 74fce4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 74fce6: lea ecx, [ebx + 0x620] */
  ecx = (uint32_t)(ebx + 0x620u);
/* 74fcec: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 74fcee: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 74fcf1: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 74fcf4: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 74fcf7: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 74fcfa: lea ecx, [ebp + 0x62c] */
  ecx = (uint32_t)(ebp + 0x62cu);
/* 74fd00: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 74fd02: lea edx, [ebx + 0x62c] */
  edx = (uint32_t)(ebx + 0x62cu);
/* 74fd08: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 74fd0a: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 74fd0d: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 74fd10: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 74fd13: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 74fd16: mov edx, dword ptr [ebp + 0x638] */
  edx = R32((uint32_t)(ebp + 0x638u));
/* 74fd1c: lea eax, [ebp + 0x63c] */
  eax = (uint32_t)(ebp + 0x63cu);
/* 74fd22: mov dword ptr [ebx + 0x638], edx */
  W32((uint32_t)(ebx + 0x638u), edx);
/* 74fd28: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 74fd2a: lea ecx, [ebx + 0x63c] */
  ecx = (uint32_t)(ebx + 0x63cu);
/* 74fd30: mov byte ptr [esp + 0x1c], 6 */
  W8((uint32_t)(esp + 0x1cu), 0x6u);
/* 74fd35: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 74fd37: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 74fd3a: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 74fd3d: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 74fd40: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 74fd43: mov ecx, dword ptr [ebp + 0x648] */
  ecx = R32((uint32_t)(ebp + 0x648u));
/* 74fd49: mov dword ptr [ebx + 0x648], ecx */
  W32((uint32_t)(ebx + 0x648u), ecx);
/* 74fd4f: mov edx, dword ptr [ebp + 0x64c] */
  edx = R32((uint32_t)(ebp + 0x64cu));
/* 74fd55: lea ecx, [ebp + 0x654] */
  ecx = (uint32_t)(ebp + 0x654u);
/* 74fd5b: mov dword ptr [ebx + 0x64c], edx */
  W32((uint32_t)(ebx + 0x64cu), edx);
/* 74fd61: mov eax, dword ptr [ebp + 0x650] */
  eax = R32((uint32_t)(ebp + 0x650u));
/* 74fd67: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74fd68: lea ecx, [ebx + 0x654] */
  ecx = (uint32_t)(ebx + 0x654u);
/* 74fd6e: mov dword ptr [ebx + 0x650], eax */
  W32((uint32_t)(ebx + 0x650u), eax);
/* 74fd74: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x74fd7au); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 74fd7a: mov dl, byte ptr [ebp + 0x660] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x660u))) & 0xffu);
/* 74fd80: mov byte ptr [ebx + 0x660], dl */
  W8((uint32_t)(ebx + 0x660u), (edx & 0xffu));
/* 74fd86: mov eax, dword ptr [ebp + 0x664] */
  eax = R32((uint32_t)(ebp + 0x664u));
/* 74fd8c: mov dword ptr [ebx + 0x664], eax */
  W32((uint32_t)(ebx + 0x664u), eax);
/* 74fd92: mov ecx, dword ptr [ebp + 0x668] */
  ecx = R32((uint32_t)(ebp + 0x668u));
/* 74fd98: mov dword ptr [ebx + 0x668], ecx */
  W32((uint32_t)(ebx + 0x668u), ecx);
/* 74fd9e: mov edx, dword ptr [ebp + 0x66c] */
  edx = R32((uint32_t)(ebp + 0x66cu));
/* 74fda4: mov dword ptr [ebx + 0x66c], edx */
  W32((uint32_t)(ebx + 0x66cu), edx);
/* 74fdaa: mov eax, dword ptr [ebp + 0x670] */
  eax = R32((uint32_t)(ebp + 0x670u));
/* 74fdb0: mov dword ptr [ebx + 0x670], eax */
  W32((uint32_t)(ebx + 0x670u), eax);
/* 74fdb6: mov ecx, dword ptr [ebp + 0x674] */
  ecx = R32((uint32_t)(ebp + 0x674u));
/* 74fdbc: mov dword ptr [ebx + 0x674], ecx */
  W32((uint32_t)(ebx + 0x674u), ecx);
/* 74fdc2: mov edx, dword ptr [ebp + 0x678] */
  edx = R32((uint32_t)(ebp + 0x678u));
/* 74fdc8: mov dword ptr [ebx + 0x678], edx */
  W32((uint32_t)(ebx + 0x678u), edx);
/* 74fdce: mov eax, dword ptr [ebp + 0x67c] */
  eax = R32((uint32_t)(ebp + 0x67cu));
/* 74fdd4: mov dword ptr [ebx + 0x67c], eax */
  W32((uint32_t)(ebx + 0x67cu), eax);
/* 74fdda: mov ecx, dword ptr [ebp + 0x680] */
  ecx = R32((uint32_t)(ebp + 0x680u));
/* 74fde0: mov dword ptr [ebx + 0x680], ecx */
  W32((uint32_t)(ebx + 0x680u), ecx);
/* 74fde6: mov edx, dword ptr [ebp + 0x684] */
  edx = R32((uint32_t)(ebp + 0x684u));
/* 74fdec: mov dword ptr [ebx + 0x684], edx */
  W32((uint32_t)(ebx + 0x684u), edx);
/* 74fdf2: mov eax, dword ptr [ebp + 0x688] */
  eax = R32((uint32_t)(ebp + 0x688u));
/* 74fdf8: mov edx, dword ptr [0xcfa304] */
  edx = R32((uint32_t)(0xcfa304u));
/* 74fdfe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 74fdff: mov dword ptr [ebx + 0x688], eax */
  W32((uint32_t)(ebx + 0x688u), eax);
/* 74fe05: mov eax, dword ptr [0xcfa308] */
  eax = R32((uint32_t)(0xcfa308u));
/* 74fe0a: mov ecx, dword ptr [ebp + 0x68c] */
  ecx = R32((uint32_t)(ebp + 0x68cu));
/* 74fe10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74fe11: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 74fe13: mov dword ptr [ebx + 0x68c], ecx */
  W32((uint32_t)(ebx + 0x68cu), ecx);
/* 74fe19: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 74fe1b: lea ecx, [ebp + 0x690] */
  ecx = (uint32_t)(ebp + 0x690u);
/* 74fe21: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74fe22: lea edx, [ebx + 0x690] */
  edx = (uint32_t)(ebx + 0x690u);
/* 74fe28: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 74fe29: mov byte ptr [esp + 0x34], 7 */
  W8((uint32_t)(esp + 0x34u), 0x7u);
/* 74fe2e: call 0x99cb60 */
  esp -= 4; W32(esp, 0x74fe33u); SPILL(); f_99cb60(); if (g_unwind) return; RELOAD();
/* 74fe33: lea eax, [ebp + 0x6c0] */
  eax = (uint32_t)(ebp + 0x6c0u);
/* 74fe39: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 74fe3b: lea ecx, [ebx + 0x6c0] */
  ecx = (uint32_t)(ebx + 0x6c0u);
/* 74fe41: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 74fe43: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 74fe46: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 74fe49: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 74fe4c: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 74fe4f: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 74fe52: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 74fe55: mov ecx, dword ptr [ebp + 0x6d0] */
  ecx = R32((uint32_t)(ebp + 0x6d0u));
/* 74fe5b: lea edx, [ebp + 0x6d4] */
  edx = (uint32_t)(ebp + 0x6d4u);
/* 74fe61: mov dword ptr [ebx + 0x6d0], ecx */
  W32((uint32_t)(ebx + 0x6d0u), ecx);
/* 74fe67: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 74fe68: lea ecx, [ebx + 0x6d4] */
  ecx = (uint32_t)(ebx + 0x6d4u);
/* 74fe6e: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x74fe74u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 74fe74: lea eax, [ebp + 0x6e0] */
  eax = (uint32_t)(ebp + 0x6e0u);
/* 74fe7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74fe7b: lea ecx, [ebx + 0x6e0] */
  ecx = (uint32_t)(ebx + 0x6e0u);
/* 74fe81: mov byte ptr [esp + 0x20], 8 */
  W8((uint32_t)(esp + 0x20u), 0x8u);
/* 74fe86: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x74fe8cu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 74fe8c: lea ecx, [ebp + 0x6ec] */
  ecx = (uint32_t)(ebp + 0x6ecu);
/* 74fe92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74fe93: lea ecx, [ebx + 0x6ec] */
  ecx = (uint32_t)(ebx + 0x6ecu);
/* 74fe99: mov byte ptr [esp + 0x20], 9 */
  W8((uint32_t)(esp + 0x20u), 0x9u);
/* 74fe9e: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x74fea4u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 74fea4: mov byte ptr [esp + 0x1c], 0xa */
  W8((uint32_t)(esp + 0x1cu), 0xau);
/* 74fea9: lea edx, [ebp + 0x6f8] */
  edx = (uint32_t)(ebp + 0x6f8u);
/* 74feaf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 74feb0: lea ecx, [ebx + 0x6f8] */
  ecx = (uint32_t)(ebx + 0x6f8u);
/* 74feb6: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x74febcu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 74febc: mov eax, dword ptr [ebp + 0x704] */
  eax = R32((uint32_t)(ebp + 0x704u));
/* 74fec2: lea ecx, [ebp + 0x708] */
  ecx = (uint32_t)(ebp + 0x708u);
/* 74fec8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74fec9: lea ecx, [ebx + 0x708] */
  ecx = (uint32_t)(ebx + 0x708u);
/* 74fecf: mov byte ptr [esp + 0x20], 0xb */
  W8((uint32_t)(esp + 0x20u), 0xbu);
/* 74fed4: mov dword ptr [ebx + 0x704], eax */
  W32((uint32_t)(ebx + 0x704u), eax);
/* 74feda: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x74fee0u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 74fee0: lea edx, [ebp + 0x714] */
  edx = (uint32_t)(ebp + 0x714u);
/* 74fee6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 74fee7: lea ecx, [ebx + 0x714] */
  ecx = (uint32_t)(ebx + 0x714u);
/* 74feed: mov byte ptr [esp + 0x20], 0xc */
  W8((uint32_t)(esp + 0x20u), 0xcu);
/* 74fef2: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x74fef8u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 74fef8: mov eax, dword ptr [ebp + 0x720] */
  eax = R32((uint32_t)(ebp + 0x720u));
/* 74fefe: mov dword ptr [ebx + 0x720], eax */
  W32((uint32_t)(ebx + 0x720u), eax);
/* 74ff04: mov ecx, dword ptr [ebp + 0x724] */
  ecx = R32((uint32_t)(ebp + 0x724u));
/* 74ff0a: mov dword ptr [ebx + 0x724], ecx */
  W32((uint32_t)(ebx + 0x724u), ecx);
/* 74ff10: lea edx, [ebp + 0x728] */
  edx = (uint32_t)(ebp + 0x728u);
/* 74ff16: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 74ff18: lea eax, [ebx + 0x728] */
  eax = (uint32_t)(ebx + 0x728u);
/* 74ff1e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 74ff20: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 74ff23: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 74ff26: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 74ff29: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 74ff2c: mov eax, dword ptr [ebp + 0x734] */
  eax = R32((uint32_t)(ebp + 0x734u));
/* 74ff32: mov dword ptr [ebx + 0x734], eax */
  W32((uint32_t)(ebx + 0x734u), eax);
/* 74ff38: lea ecx, [ebp + 0x738] */
  ecx = (uint32_t)(ebp + 0x738u);
/* 74ff3e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 74ff40: lea edx, [ebx + 0x738] */
  edx = (uint32_t)(ebx + 0x738u);
/* 74ff46: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 74ff48: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 74ff4b: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 74ff4e: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 74ff51: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 74ff54: lea edx, [ebp + 0x744] */
  edx = (uint32_t)(ebp + 0x744u);
/* 74ff5a: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 74ff5c: lea eax, [ebx + 0x744] */
  eax = (uint32_t)(ebx + 0x744u);
/* 74ff62: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 74ff64: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 74ff67: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 74ff6a: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 74ff6d: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 74ff70: mov eax, dword ptr [ebp + 0x750] */
  eax = R32((uint32_t)(ebp + 0x750u));
/* 74ff76: mov dword ptr [ebx + 0x750], eax */
  W32((uint32_t)(ebx + 0x750u), eax);
/* 74ff7c: lea ecx, [ebp + 0x754] */
  ecx = (uint32_t)(ebp + 0x754u);
/* 74ff82: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 74ff84: lea edx, [ebx + 0x754] */
  edx = (uint32_t)(ebx + 0x754u);
/* 74ff8a: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 74ff8c: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 74ff8f: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 74ff92: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 74ff95: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 74ff98: mov edx, dword ptr [ebp + 0x760] */
  edx = R32((uint32_t)(ebp + 0x760u));
/* 74ff9e: mov dword ptr [ebx + 0x760], edx */
  W32((uint32_t)(ebx + 0x760u), edx);
/* 74ffa4: mov eax, dword ptr [ebp + 0x764] */
  eax = R32((uint32_t)(ebp + 0x764u));
/* 74ffaa: mov dword ptr [ebx + 0x764], eax */
  W32((uint32_t)(ebx + 0x764u), eax);
/* 74ffb0: mov ecx, dword ptr [ebp + 0x768] */
  ecx = R32((uint32_t)(ebp + 0x768u));
/* 74ffb6: mov dword ptr [ebx + 0x768], ecx */
  W32((uint32_t)(ebx + 0x768u), ecx);
/* 74ffbc: lea edx, [ebp + 0x76c] */
  edx = (uint32_t)(ebp + 0x76cu);
/* 74ffc2: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 74ffc4: lea eax, [ebx + 0x76c] */
  eax = (uint32_t)(ebx + 0x76cu);
/* 74ffca: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 74ffcc: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 74ffcf: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 74ffd2: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 74ffd5: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 74ffd8: lea eax, [ebp + 0x778] */
  eax = (uint32_t)(ebp + 0x778u);
/* 74ffde: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 74ffe0: lea ecx, [ebx + 0x778] */
  ecx = (uint32_t)(ebx + 0x778u);
/* 74ffe6: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 74ffe8: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 74ffeb: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 74ffee: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 74fff1: mov byte ptr [esp + 0x1c], 0xd */
  W8((uint32_t)(esp + 0x1cu), 0xdu);
/* 74fff6: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 74fff9: mov ecx, dword ptr [ebp + 0x784] */
  ecx = R32((uint32_t)(ebp + 0x784u));
/* 74ffff: mov dword ptr [ebx + 0x784], ecx */
  W32((uint32_t)(ebx + 0x784u), ecx);
/* 750005: mov edx, dword ptr [ebp + 0x788] */
  edx = R32((uint32_t)(ebp + 0x788u));
/* 75000b: mov dword ptr [ebx + 0x788], edx */
  W32((uint32_t)(ebx + 0x788u), edx);
/* 750011: mov eax, dword ptr [ebp + 0x78c] */
  eax = R32((uint32_t)(ebp + 0x78cu));
/* 750017: mov dword ptr [ebx + 0x78c], eax */
  W32((uint32_t)(ebx + 0x78cu), eax);
/* 75001d: mov ecx, dword ptr [ebp + 0x790] */
  ecx = R32((uint32_t)(ebp + 0x790u));
/* 750023: mov dword ptr [ebx + 0x790], ecx */
  W32((uint32_t)(ebx + 0x790u), ecx);
/* 750029: lea edx, [ebp + 0x794] */
  edx = (uint32_t)(ebp + 0x794u);
/* 75002f: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 750031: lea eax, [ebx + 0x794] */
  eax = (uint32_t)(ebx + 0x794u);
/* 750037: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 750039: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 75003c: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 75003f: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 750042: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 750045: mov eax, dword ptr [ebp + 0x7a0] */
  eax = R32((uint32_t)(ebp + 0x7a0u));
/* 75004b: mov dword ptr [ebx + 0x7a0], eax */
  W32((uint32_t)(ebx + 0x7a0u), eax);
/* 750051: mov ecx, dword ptr [ebp + 0x7a4] */
  ecx = R32((uint32_t)(ebp + 0x7a4u));
/* 750057: mov dword ptr [ebx + 0x7a4], ecx */
  W32((uint32_t)(ebx + 0x7a4u), ecx);
/* 75005d: mov edx, dword ptr [ebp + 0x7a8] */
  edx = R32((uint32_t)(ebp + 0x7a8u));
/* 750063: mov dword ptr [ebx + 0x7a8], edx */
  W32((uint32_t)(ebx + 0x7a8u), edx);
/* 750069: mov eax, dword ptr [ebp + 0x7ac] */
  eax = R32((uint32_t)(ebp + 0x7acu));
/* 75006f: mov dword ptr [ebx + 0x7ac], eax */
  W32((uint32_t)(ebx + 0x7acu), eax);
/* 750075: mov ecx, dword ptr [ebp + 0x7b0] */
  ecx = R32((uint32_t)(ebp + 0x7b0u));
/* 75007b: mov dword ptr [ebx + 0x7b0], ecx */
  W32((uint32_t)(ebx + 0x7b0u), ecx);
/* 750081: mov edx, dword ptr [ebp + 0x7b4] */
  edx = R32((uint32_t)(ebp + 0x7b4u));
/* 750087: mov dword ptr [ebx + 0x7b4], edx */
  W32((uint32_t)(ebx + 0x7b4u), edx);
/* 75008d: mov eax, dword ptr [ebp + 0x7b8] */
  eax = R32((uint32_t)(ebp + 0x7b8u));
/* 750093: mov dword ptr [ebx + 0x7b8], eax */
  W32((uint32_t)(ebx + 0x7b8u), eax);
/* 750099: mov ecx, dword ptr [ebp + 0x7bc] */
  ecx = R32((uint32_t)(ebp + 0x7bcu));
/* 75009f: mov dword ptr [ebx + 0x7bc], ecx */
  W32((uint32_t)(ebx + 0x7bcu), ecx);
/* 7500a5: mov edx, dword ptr [ebp + 0x7c0] */
  edx = R32((uint32_t)(ebp + 0x7c0u));
/* 7500ab: mov dword ptr [ebx + 0x7c0], edx */
  W32((uint32_t)(ebx + 0x7c0u), edx);
/* 7500b1: mov eax, dword ptr [ebp + 0x7c4] */
  eax = R32((uint32_t)(ebp + 0x7c4u));
/* 7500b7: mov dword ptr [ebx + 0x7c4], eax */
  W32((uint32_t)(ebx + 0x7c4u), eax);
/* 7500bd: mov ecx, dword ptr [ebp + 0x7c8] */
  ecx = R32((uint32_t)(ebp + 0x7c8u));
/* 7500c3: lea edx, [ebp + 0x7cc] */
  edx = (uint32_t)(ebp + 0x7ccu);
/* 7500c9: mov dword ptr [ebx + 0x7c8], ecx */
  W32((uint32_t)(ebx + 0x7c8u), ecx);
/* 7500cf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7500d0: lea ecx, [ebx + 0x7cc] */
  ecx = (uint32_t)(ebx + 0x7ccu);
/* 7500d6: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x7500dcu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 7500dc: lea eax, [ebp + 0x7d8] */
  eax = (uint32_t)(ebp + 0x7d8u);
/* 7500e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7500e3: lea ecx, [ebx + 0x7d8] */
  ecx = (uint32_t)(ebx + 0x7d8u);
/* 7500e9: mov byte ptr [esp + 0x20], 0xe */
  W8((uint32_t)(esp + 0x20u), 0xeu);
/* 7500ee: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x7500f4u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 7500f4: mov esi, dword ptr [ebp + 0x7e4] */
  esi = R32((uint32_t)(ebp + 0x7e4u));
/* 7500fa: mov ecx, dword ptr [ebx + 0x7e4] */
  ecx = R32((uint32_t)(ebx + 0x7e4u));
/* 750100: mov eax, dword ptr [ebx + 0x7e4] */
  eax = R32((uint32_t)(ebx + 0x7e4u));
/* 750106: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 750108: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 75010b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75010d: mov dword ptr [ebx + 0x7e4], eax */
  W32((uint32_t)(ebx + 0x7e4u), eax);
/* 750113: mov ecx, eax */
  ecx = eax;
/* 750115: mov eax, dword ptr [ebp + 0x7e4] */
  eax = R32((uint32_t)(ebp + 0x7e4u));
/* 75011b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75011d: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 750120: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750122: mov dword ptr [ebx + 0x7e4], eax */
  W32((uint32_t)(ebx + 0x7e4u), eax);
/* 750128: mov ecx, dword ptr [ebp + 0x7e4] */
  ecx = R32((uint32_t)(ebp + 0x7e4u));
/* 75012e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 750130: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 750133: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 750135: mov dword ptr [ebx + 0x7e4], ecx */
  W32((uint32_t)(ebx + 0x7e4u), ecx);
/* 75013b: mov eax, dword ptr [ebp + 0x7e4] */
  eax = R32((uint32_t)(ebp + 0x7e4u));
/* 750141: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750143: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 750146: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750148: mov dword ptr [ebx + 0x7e4], eax */
  W32((uint32_t)(ebx + 0x7e4u), eax);
/* 75014e: mov edx, dword ptr [ebp + 0x7e4] */
  edx = R32((uint32_t)(ebp + 0x7e4u));
/* 750154: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 750156: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 750157: and edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 75015a: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 75015c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75015d: mov dword ptr [ebx + 0x7e4], edx */
  W32((uint32_t)(ebx + 0x7e4u), edx);
/* 750163: mov eax, ebx */
  eax = ebx;
/* 750165: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 750166: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75016a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75016b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 750172: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 750175: ret 4 */
  esp += 8; SPILL(); return;
}

void f_750042(void) {
  LOAD_REGS();
L_750042: /* 750042: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 750045: mov eax, dword ptr [ebp + 0x7a0] */
  eax = R32((uint32_t)(ebp + 0x7a0u));
/* 75004b: mov dword ptr [ebx + 0x7a0], eax */
  W32((uint32_t)(ebx + 0x7a0u), eax);
/* 750051: mov ecx, dword ptr [ebp + 0x7a4] */
  ecx = R32((uint32_t)(ebp + 0x7a4u));
/* 750057: mov dword ptr [ebx + 0x7a4], ecx */
  W32((uint32_t)(ebx + 0x7a4u), ecx);
/* 75005d: mov edx, dword ptr [ebp + 0x7a8] */
  edx = R32((uint32_t)(ebp + 0x7a8u));
/* 750063: mov dword ptr [ebx + 0x7a8], edx */
  W32((uint32_t)(ebx + 0x7a8u), edx);
/* 750069: mov eax, dword ptr [ebp + 0x7ac] */
  eax = R32((uint32_t)(ebp + 0x7acu));
/* 75006f: mov dword ptr [ebx + 0x7ac], eax */
  W32((uint32_t)(ebx + 0x7acu), eax);
/* 750075: mov ecx, dword ptr [ebp + 0x7b0] */
  ecx = R32((uint32_t)(ebp + 0x7b0u));
/* 75007b: mov dword ptr [ebx + 0x7b0], ecx */
  W32((uint32_t)(ebx + 0x7b0u), ecx);
/* 750081: mov edx, dword ptr [ebp + 0x7b4] */
  edx = R32((uint32_t)(ebp + 0x7b4u));
/* 750087: mov dword ptr [ebx + 0x7b4], edx */
  W32((uint32_t)(ebx + 0x7b4u), edx);
/* 75008d: mov eax, dword ptr [ebp + 0x7b8] */
  eax = R32((uint32_t)(ebp + 0x7b8u));
/* 750093: mov dword ptr [ebx + 0x7b8], eax */
  W32((uint32_t)(ebx + 0x7b8u), eax);
/* 750099: mov ecx, dword ptr [ebp + 0x7bc] */
  ecx = R32((uint32_t)(ebp + 0x7bcu));
/* 75009f: mov dword ptr [ebx + 0x7bc], ecx */
  W32((uint32_t)(ebx + 0x7bcu), ecx);
/* 7500a5: mov edx, dword ptr [ebp + 0x7c0] */
  edx = R32((uint32_t)(ebp + 0x7c0u));
/* 7500ab: mov dword ptr [ebx + 0x7c0], edx */
  W32((uint32_t)(ebx + 0x7c0u), edx);
/* 7500b1: mov eax, dword ptr [ebp + 0x7c4] */
  eax = R32((uint32_t)(ebp + 0x7c4u));
/* 7500b7: mov dword ptr [ebx + 0x7c4], eax */
  W32((uint32_t)(ebx + 0x7c4u), eax);
/* 7500bd: mov ecx, dword ptr [ebp + 0x7c8] */
  ecx = R32((uint32_t)(ebp + 0x7c8u));
/* 7500c3: lea edx, [ebp + 0x7cc] */
  edx = (uint32_t)(ebp + 0x7ccu);
/* 7500c9: mov dword ptr [ebx + 0x7c8], ecx */
  W32((uint32_t)(ebx + 0x7c8u), ecx);
/* 7500cf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7500d0: lea ecx, [ebx + 0x7cc] */
  ecx = (uint32_t)(ebx + 0x7ccu);
/* 7500d6: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x7500dcu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 7500dc: lea eax, [ebp + 0x7d8] */
  eax = (uint32_t)(ebp + 0x7d8u);
/* 7500e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7500e3: lea ecx, [ebx + 0x7d8] */
  ecx = (uint32_t)(ebx + 0x7d8u);
/* 7500e9: mov byte ptr [esp + 0x20], 0xe */
  W8((uint32_t)(esp + 0x20u), 0xeu);
/* 7500ee: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x7500f4u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 7500f4: mov esi, dword ptr [ebp + 0x7e4] */
  esi = R32((uint32_t)(ebp + 0x7e4u));
/* 7500fa: mov ecx, dword ptr [ebx + 0x7e4] */
  ecx = R32((uint32_t)(ebx + 0x7e4u));
/* 750100: mov eax, dword ptr [ebx + 0x7e4] */
  eax = R32((uint32_t)(ebx + 0x7e4u));
/* 750106: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 750108: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 75010b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75010d: mov dword ptr [ebx + 0x7e4], eax */
  W32((uint32_t)(ebx + 0x7e4u), eax);
/* 750113: mov ecx, eax */
  ecx = eax;
/* 750115: mov eax, dword ptr [ebp + 0x7e4] */
  eax = R32((uint32_t)(ebp + 0x7e4u));
/* 75011b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75011d: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 750120: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750122: mov dword ptr [ebx + 0x7e4], eax */
  W32((uint32_t)(ebx + 0x7e4u), eax);
/* 750128: mov ecx, dword ptr [ebp + 0x7e4] */
  ecx = R32((uint32_t)(ebp + 0x7e4u));
/* 75012e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 750130: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 750133: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 750135: mov dword ptr [ebx + 0x7e4], ecx */
  W32((uint32_t)(ebx + 0x7e4u), ecx);
/* 75013b: mov eax, dword ptr [ebp + 0x7e4] */
  eax = R32((uint32_t)(ebp + 0x7e4u));
/* 750141: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750143: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 750146: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750148: mov dword ptr [ebx + 0x7e4], eax */
  W32((uint32_t)(ebx + 0x7e4u), eax);
/* 75014e: mov edx, dword ptr [ebp + 0x7e4] */
  edx = R32((uint32_t)(ebp + 0x7e4u));
/* 750154: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 750156: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 750157: and edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 75015a: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 75015c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75015d: mov dword ptr [ebx + 0x7e4], edx */
  W32((uint32_t)(ebx + 0x7e4u), edx);
/* 750163: mov eax, ebx */
  eax = ebx;
/* 750165: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 750166: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75016a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75016b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 750172: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 750175: ret 4 */
  esp += 8; SPILL(); return;
}

void f_750051(void) {
  LOAD_REGS();
L_750051: /* 750051: mov ecx, dword ptr [ebp + 0x7a4] */
  ecx = R32((uint32_t)(ebp + 0x7a4u));
/* 750057: mov dword ptr [ebx + 0x7a4], ecx */
  W32((uint32_t)(ebx + 0x7a4u), ecx);
/* 75005d: mov edx, dword ptr [ebp + 0x7a8] */
  edx = R32((uint32_t)(ebp + 0x7a8u));
/* 750063: mov dword ptr [ebx + 0x7a8], edx */
  W32((uint32_t)(ebx + 0x7a8u), edx);
/* 750069: mov eax, dword ptr [ebp + 0x7ac] */
  eax = R32((uint32_t)(ebp + 0x7acu));
/* 75006f: mov dword ptr [ebx + 0x7ac], eax */
  W32((uint32_t)(ebx + 0x7acu), eax);
/* 750075: mov ecx, dword ptr [ebp + 0x7b0] */
  ecx = R32((uint32_t)(ebp + 0x7b0u));
/* 75007b: mov dword ptr [ebx + 0x7b0], ecx */
  W32((uint32_t)(ebx + 0x7b0u), ecx);
/* 750081: mov edx, dword ptr [ebp + 0x7b4] */
  edx = R32((uint32_t)(ebp + 0x7b4u));
/* 750087: mov dword ptr [ebx + 0x7b4], edx */
  W32((uint32_t)(ebx + 0x7b4u), edx);
/* 75008d: mov eax, dword ptr [ebp + 0x7b8] */
  eax = R32((uint32_t)(ebp + 0x7b8u));
/* 750093: mov dword ptr [ebx + 0x7b8], eax */
  W32((uint32_t)(ebx + 0x7b8u), eax);
/* 750099: mov ecx, dword ptr [ebp + 0x7bc] */
  ecx = R32((uint32_t)(ebp + 0x7bcu));
/* 75009f: mov dword ptr [ebx + 0x7bc], ecx */
  W32((uint32_t)(ebx + 0x7bcu), ecx);
/* 7500a5: mov edx, dword ptr [ebp + 0x7c0] */
  edx = R32((uint32_t)(ebp + 0x7c0u));
/* 7500ab: mov dword ptr [ebx + 0x7c0], edx */
  W32((uint32_t)(ebx + 0x7c0u), edx);
/* 7500b1: mov eax, dword ptr [ebp + 0x7c4] */
  eax = R32((uint32_t)(ebp + 0x7c4u));
/* 7500b7: mov dword ptr [ebx + 0x7c4], eax */
  W32((uint32_t)(ebx + 0x7c4u), eax);
/* 7500bd: mov ecx, dword ptr [ebp + 0x7c8] */
  ecx = R32((uint32_t)(ebp + 0x7c8u));
/* 7500c3: lea edx, [ebp + 0x7cc] */
  edx = (uint32_t)(ebp + 0x7ccu);
/* 7500c9: mov dword ptr [ebx + 0x7c8], ecx */
  W32((uint32_t)(ebx + 0x7c8u), ecx);
/* 7500cf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7500d0: lea ecx, [ebx + 0x7cc] */
  ecx = (uint32_t)(ebx + 0x7ccu);
/* 7500d6: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x7500dcu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 7500dc: lea eax, [ebp + 0x7d8] */
  eax = (uint32_t)(ebp + 0x7d8u);
/* 7500e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7500e3: lea ecx, [ebx + 0x7d8] */
  ecx = (uint32_t)(ebx + 0x7d8u);
/* 7500e9: mov byte ptr [esp + 0x20], 0xe */
  W8((uint32_t)(esp + 0x20u), 0xeu);
/* 7500ee: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x7500f4u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 7500f4: mov esi, dword ptr [ebp + 0x7e4] */
  esi = R32((uint32_t)(ebp + 0x7e4u));
/* 7500fa: mov ecx, dword ptr [ebx + 0x7e4] */
  ecx = R32((uint32_t)(ebx + 0x7e4u));
/* 750100: mov eax, dword ptr [ebx + 0x7e4] */
  eax = R32((uint32_t)(ebx + 0x7e4u));
/* 750106: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 750108: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 75010b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75010d: mov dword ptr [ebx + 0x7e4], eax */
  W32((uint32_t)(ebx + 0x7e4u), eax);
/* 750113: mov ecx, eax */
  ecx = eax;
/* 750115: mov eax, dword ptr [ebp + 0x7e4] */
  eax = R32((uint32_t)(ebp + 0x7e4u));
/* 75011b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75011d: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 750120: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750122: mov dword ptr [ebx + 0x7e4], eax */
  W32((uint32_t)(ebx + 0x7e4u), eax);
/* 750128: mov ecx, dword ptr [ebp + 0x7e4] */
  ecx = R32((uint32_t)(ebp + 0x7e4u));
/* 75012e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 750130: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 750133: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 750135: mov dword ptr [ebx + 0x7e4], ecx */
  W32((uint32_t)(ebx + 0x7e4u), ecx);
/* 75013b: mov eax, dword ptr [ebp + 0x7e4] */
  eax = R32((uint32_t)(ebp + 0x7e4u));
/* 750141: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750143: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 750146: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750148: mov dword ptr [ebx + 0x7e4], eax */
  W32((uint32_t)(ebx + 0x7e4u), eax);
/* 75014e: mov edx, dword ptr [ebp + 0x7e4] */
  edx = R32((uint32_t)(ebp + 0x7e4u));
/* 750154: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 750156: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 750157: and edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 75015a: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 75015c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75015d: mov dword ptr [ebx + 0x7e4], edx */
  W32((uint32_t)(ebx + 0x7e4u), edx);
/* 750163: mov eax, ebx */
  eax = ebx;
/* 750165: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 750166: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75016a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75016b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 750172: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 750175: ret 4 */
  esp += 8; SPILL(); return;
}

void f_750063(void) {
  LOAD_REGS();
L_750063: /* 750063: mov dword ptr [ebx + 0x7a8], edx */
  W32((uint32_t)(ebx + 0x7a8u), edx);
/* 750069: mov eax, dword ptr [ebp + 0x7ac] */
  eax = R32((uint32_t)(ebp + 0x7acu));
/* 75006f: mov dword ptr [ebx + 0x7ac], eax */
  W32((uint32_t)(ebx + 0x7acu), eax);
/* 750075: mov ecx, dword ptr [ebp + 0x7b0] */
  ecx = R32((uint32_t)(ebp + 0x7b0u));
/* 75007b: mov dword ptr [ebx + 0x7b0], ecx */
  W32((uint32_t)(ebx + 0x7b0u), ecx);
/* 750081: mov edx, dword ptr [ebp + 0x7b4] */
  edx = R32((uint32_t)(ebp + 0x7b4u));
/* 750087: mov dword ptr [ebx + 0x7b4], edx */
  W32((uint32_t)(ebx + 0x7b4u), edx);
/* 75008d: mov eax, dword ptr [ebp + 0x7b8] */
  eax = R32((uint32_t)(ebp + 0x7b8u));
/* 750093: mov dword ptr [ebx + 0x7b8], eax */
  W32((uint32_t)(ebx + 0x7b8u), eax);
/* 750099: mov ecx, dword ptr [ebp + 0x7bc] */
  ecx = R32((uint32_t)(ebp + 0x7bcu));
/* 75009f: mov dword ptr [ebx + 0x7bc], ecx */
  W32((uint32_t)(ebx + 0x7bcu), ecx);
/* 7500a5: mov edx, dword ptr [ebp + 0x7c0] */
  edx = R32((uint32_t)(ebp + 0x7c0u));
/* 7500ab: mov dword ptr [ebx + 0x7c0], edx */
  W32((uint32_t)(ebx + 0x7c0u), edx);
/* 7500b1: mov eax, dword ptr [ebp + 0x7c4] */
  eax = R32((uint32_t)(ebp + 0x7c4u));
/* 7500b7: mov dword ptr [ebx + 0x7c4], eax */
  W32((uint32_t)(ebx + 0x7c4u), eax);
/* 7500bd: mov ecx, dword ptr [ebp + 0x7c8] */
  ecx = R32((uint32_t)(ebp + 0x7c8u));
/* 7500c3: lea edx, [ebp + 0x7cc] */
  edx = (uint32_t)(ebp + 0x7ccu);
/* 7500c9: mov dword ptr [ebx + 0x7c8], ecx */
  W32((uint32_t)(ebx + 0x7c8u), ecx);
/* 7500cf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7500d0: lea ecx, [ebx + 0x7cc] */
  ecx = (uint32_t)(ebx + 0x7ccu);
/* 7500d6: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x7500dcu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 7500dc: lea eax, [ebp + 0x7d8] */
  eax = (uint32_t)(ebp + 0x7d8u);
/* 7500e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7500e3: lea ecx, [ebx + 0x7d8] */
  ecx = (uint32_t)(ebx + 0x7d8u);
/* 7500e9: mov byte ptr [esp + 0x20], 0xe */
  W8((uint32_t)(esp + 0x20u), 0xeu);
/* 7500ee: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x7500f4u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 7500f4: mov esi, dword ptr [ebp + 0x7e4] */
  esi = R32((uint32_t)(ebp + 0x7e4u));
/* 7500fa: mov ecx, dword ptr [ebx + 0x7e4] */
  ecx = R32((uint32_t)(ebx + 0x7e4u));
/* 750100: mov eax, dword ptr [ebx + 0x7e4] */
  eax = R32((uint32_t)(ebx + 0x7e4u));
/* 750106: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 750108: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 75010b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75010d: mov dword ptr [ebx + 0x7e4], eax */
  W32((uint32_t)(ebx + 0x7e4u), eax);
/* 750113: mov ecx, eax */
  ecx = eax;
/* 750115: mov eax, dword ptr [ebp + 0x7e4] */
  eax = R32((uint32_t)(ebp + 0x7e4u));
/* 75011b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75011d: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 750120: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750122: mov dword ptr [ebx + 0x7e4], eax */
  W32((uint32_t)(ebx + 0x7e4u), eax);
/* 750128: mov ecx, dword ptr [ebp + 0x7e4] */
  ecx = R32((uint32_t)(ebp + 0x7e4u));
/* 75012e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 750130: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 750133: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 750135: mov dword ptr [ebx + 0x7e4], ecx */
  W32((uint32_t)(ebx + 0x7e4u), ecx);
/* 75013b: mov eax, dword ptr [ebp + 0x7e4] */
  eax = R32((uint32_t)(ebp + 0x7e4u));
/* 750141: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750143: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 750146: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750148: mov dword ptr [ebx + 0x7e4], eax */
  W32((uint32_t)(ebx + 0x7e4u), eax);
/* 75014e: mov edx, dword ptr [ebp + 0x7e4] */
  edx = R32((uint32_t)(ebp + 0x7e4u));
/* 750154: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 750156: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 750157: and edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 75015a: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 75015c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75015d: mov dword ptr [ebx + 0x7e4], edx */
  W32((uint32_t)(ebx + 0x7e4u), edx);
/* 750163: mov eax, ebx */
  eax = ebx;
/* 750165: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 750166: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75016a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75016b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 750172: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 750175: ret 4 */
  esp += 8; SPILL(); return;
}

void f_750069(void) {
  LOAD_REGS();
L_750069: /* 750069: mov eax, dword ptr [ebp + 0x7ac] */
  eax = R32((uint32_t)(ebp + 0x7acu));
/* 75006f: mov dword ptr [ebx + 0x7ac], eax */
  W32((uint32_t)(ebx + 0x7acu), eax);
/* 750075: mov ecx, dword ptr [ebp + 0x7b0] */
  ecx = R32((uint32_t)(ebp + 0x7b0u));
/* 75007b: mov dword ptr [ebx + 0x7b0], ecx */
  W32((uint32_t)(ebx + 0x7b0u), ecx);
/* 750081: mov edx, dword ptr [ebp + 0x7b4] */
  edx = R32((uint32_t)(ebp + 0x7b4u));
/* 750087: mov dword ptr [ebx + 0x7b4], edx */
  W32((uint32_t)(ebx + 0x7b4u), edx);
/* 75008d: mov eax, dword ptr [ebp + 0x7b8] */
  eax = R32((uint32_t)(ebp + 0x7b8u));
/* 750093: mov dword ptr [ebx + 0x7b8], eax */
  W32((uint32_t)(ebx + 0x7b8u), eax);
/* 750099: mov ecx, dword ptr [ebp + 0x7bc] */
  ecx = R32((uint32_t)(ebp + 0x7bcu));
/* 75009f: mov dword ptr [ebx + 0x7bc], ecx */
  W32((uint32_t)(ebx + 0x7bcu), ecx);
/* 7500a5: mov edx, dword ptr [ebp + 0x7c0] */
  edx = R32((uint32_t)(ebp + 0x7c0u));
/* 7500ab: mov dword ptr [ebx + 0x7c0], edx */
  W32((uint32_t)(ebx + 0x7c0u), edx);
/* 7500b1: mov eax, dword ptr [ebp + 0x7c4] */
  eax = R32((uint32_t)(ebp + 0x7c4u));
/* 7500b7: mov dword ptr [ebx + 0x7c4], eax */
  W32((uint32_t)(ebx + 0x7c4u), eax);
/* 7500bd: mov ecx, dword ptr [ebp + 0x7c8] */
  ecx = R32((uint32_t)(ebp + 0x7c8u));
/* 7500c3: lea edx, [ebp + 0x7cc] */
  edx = (uint32_t)(ebp + 0x7ccu);
/* 7500c9: mov dword ptr [ebx + 0x7c8], ecx */
  W32((uint32_t)(ebx + 0x7c8u), ecx);
/* 7500cf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7500d0: lea ecx, [ebx + 0x7cc] */
  ecx = (uint32_t)(ebx + 0x7ccu);
/* 7500d6: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x7500dcu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 7500dc: lea eax, [ebp + 0x7d8] */
  eax = (uint32_t)(ebp + 0x7d8u);
/* 7500e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7500e3: lea ecx, [ebx + 0x7d8] */
  ecx = (uint32_t)(ebx + 0x7d8u);
/* 7500e9: mov byte ptr [esp + 0x20], 0xe */
  W8((uint32_t)(esp + 0x20u), 0xeu);
/* 7500ee: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x7500f4u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 7500f4: mov esi, dword ptr [ebp + 0x7e4] */
  esi = R32((uint32_t)(ebp + 0x7e4u));
/* 7500fa: mov ecx, dword ptr [ebx + 0x7e4] */
  ecx = R32((uint32_t)(ebx + 0x7e4u));
/* 750100: mov eax, dword ptr [ebx + 0x7e4] */
  eax = R32((uint32_t)(ebx + 0x7e4u));
/* 750106: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 750108: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 75010b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75010d: mov dword ptr [ebx + 0x7e4], eax */
  W32((uint32_t)(ebx + 0x7e4u), eax);
/* 750113: mov ecx, eax */
  ecx = eax;
/* 750115: mov eax, dword ptr [ebp + 0x7e4] */
  eax = R32((uint32_t)(ebp + 0x7e4u));
/* 75011b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75011d: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 750120: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750122: mov dword ptr [ebx + 0x7e4], eax */
  W32((uint32_t)(ebx + 0x7e4u), eax);
/* 750128: mov ecx, dword ptr [ebp + 0x7e4] */
  ecx = R32((uint32_t)(ebp + 0x7e4u));
/* 75012e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 750130: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 750133: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 750135: mov dword ptr [ebx + 0x7e4], ecx */
  W32((uint32_t)(ebx + 0x7e4u), ecx);
/* 75013b: mov eax, dword ptr [ebp + 0x7e4] */
  eax = R32((uint32_t)(ebp + 0x7e4u));
/* 750141: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750143: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 750146: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750148: mov dword ptr [ebx + 0x7e4], eax */
  W32((uint32_t)(ebx + 0x7e4u), eax);
/* 75014e: mov edx, dword ptr [ebp + 0x7e4] */
  edx = R32((uint32_t)(ebp + 0x7e4u));
/* 750154: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 750156: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 750157: and edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 75015a: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 75015c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75015d: mov dword ptr [ebx + 0x7e4], edx */
  W32((uint32_t)(ebx + 0x7e4u), edx);
/* 750163: mov eax, ebx */
  eax = ebx;
/* 750165: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 750166: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75016a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75016b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 750172: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 750175: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75006f(void) {
  LOAD_REGS();
L_75006f: /* 75006f: mov dword ptr [ebx + 0x7ac], eax */
  W32((uint32_t)(ebx + 0x7acu), eax);
/* 750075: mov ecx, dword ptr [ebp + 0x7b0] */
  ecx = R32((uint32_t)(ebp + 0x7b0u));
/* 75007b: mov dword ptr [ebx + 0x7b0], ecx */
  W32((uint32_t)(ebx + 0x7b0u), ecx);
/* 750081: mov edx, dword ptr [ebp + 0x7b4] */
  edx = R32((uint32_t)(ebp + 0x7b4u));
/* 750087: mov dword ptr [ebx + 0x7b4], edx */
  W32((uint32_t)(ebx + 0x7b4u), edx);
/* 75008d: mov eax, dword ptr [ebp + 0x7b8] */
  eax = R32((uint32_t)(ebp + 0x7b8u));
/* 750093: mov dword ptr [ebx + 0x7b8], eax */
  W32((uint32_t)(ebx + 0x7b8u), eax);
/* 750099: mov ecx, dword ptr [ebp + 0x7bc] */
  ecx = R32((uint32_t)(ebp + 0x7bcu));
/* 75009f: mov dword ptr [ebx + 0x7bc], ecx */
  W32((uint32_t)(ebx + 0x7bcu), ecx);
/* 7500a5: mov edx, dword ptr [ebp + 0x7c0] */
  edx = R32((uint32_t)(ebp + 0x7c0u));
/* 7500ab: mov dword ptr [ebx + 0x7c0], edx */
  W32((uint32_t)(ebx + 0x7c0u), edx);
/* 7500b1: mov eax, dword ptr [ebp + 0x7c4] */
  eax = R32((uint32_t)(ebp + 0x7c4u));
/* 7500b7: mov dword ptr [ebx + 0x7c4], eax */
  W32((uint32_t)(ebx + 0x7c4u), eax);
/* 7500bd: mov ecx, dword ptr [ebp + 0x7c8] */
  ecx = R32((uint32_t)(ebp + 0x7c8u));
/* 7500c3: lea edx, [ebp + 0x7cc] */
  edx = (uint32_t)(ebp + 0x7ccu);
/* 7500c9: mov dword ptr [ebx + 0x7c8], ecx */
  W32((uint32_t)(ebx + 0x7c8u), ecx);
/* 7500cf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7500d0: lea ecx, [ebx + 0x7cc] */
  ecx = (uint32_t)(ebx + 0x7ccu);
/* 7500d6: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x7500dcu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 7500dc: lea eax, [ebp + 0x7d8] */
  eax = (uint32_t)(ebp + 0x7d8u);
/* 7500e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7500e3: lea ecx, [ebx + 0x7d8] */
  ecx = (uint32_t)(ebx + 0x7d8u);
/* 7500e9: mov byte ptr [esp + 0x20], 0xe */
  W8((uint32_t)(esp + 0x20u), 0xeu);
/* 7500ee: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x7500f4u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 7500f4: mov esi, dword ptr [ebp + 0x7e4] */
  esi = R32((uint32_t)(ebp + 0x7e4u));
/* 7500fa: mov ecx, dword ptr [ebx + 0x7e4] */
  ecx = R32((uint32_t)(ebx + 0x7e4u));
/* 750100: mov eax, dword ptr [ebx + 0x7e4] */
  eax = R32((uint32_t)(ebx + 0x7e4u));
/* 750106: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 750108: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 75010b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75010d: mov dword ptr [ebx + 0x7e4], eax */
  W32((uint32_t)(ebx + 0x7e4u), eax);
/* 750113: mov ecx, eax */
  ecx = eax;
/* 750115: mov eax, dword ptr [ebp + 0x7e4] */
  eax = R32((uint32_t)(ebp + 0x7e4u));
/* 75011b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75011d: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 750120: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750122: mov dword ptr [ebx + 0x7e4], eax */
  W32((uint32_t)(ebx + 0x7e4u), eax);
/* 750128: mov ecx, dword ptr [ebp + 0x7e4] */
  ecx = R32((uint32_t)(ebp + 0x7e4u));
/* 75012e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 750130: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 750133: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 750135: mov dword ptr [ebx + 0x7e4], ecx */
  W32((uint32_t)(ebx + 0x7e4u), ecx);
/* 75013b: mov eax, dword ptr [ebp + 0x7e4] */
  eax = R32((uint32_t)(ebp + 0x7e4u));
/* 750141: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750143: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 750146: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 750148: mov dword ptr [ebx + 0x7e4], eax */
  W32((uint32_t)(ebx + 0x7e4u), eax);
/* 75014e: mov edx, dword ptr [ebp + 0x7e4] */
  edx = R32((uint32_t)(ebp + 0x7e4u));
/* 750154: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 750156: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 750157: and edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 75015a: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 75015c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75015d: mov dword ptr [ebx + 0x7e4], edx */
  W32((uint32_t)(ebx + 0x7e4u), edx);
/* 750163: mov eax, ebx */
  eax = ebx;
/* 750165: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 750166: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75016a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75016b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 750172: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 750175: ret 4 */
  esp += 8; SPILL(); return;
}
