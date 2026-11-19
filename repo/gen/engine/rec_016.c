#include "recomp.h"
#include "rec_mod.h"

void f_73a3b0(void) {
  LOAD_REGS();
L_73a3b0: /* 73a3b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73a3b1: mov esi, ecx */
  esi = ecx;
/* 73a3b3: call 0x6c60a5 */
  esp -= 4; W32(esp, 0x73a3b8u); SPILL(); f_6c60a5(); if (g_unwind) return; RELOAD();
/* 73a3b8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73a3bd: je 0x73a3ce */
  if (zf) goto L_73a3ce;
L_73a3bf: /* 73a3bf: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 73a3c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73a3c5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73a3cbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73a3cb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73a3ce: /* 73a3ce: mov eax, esi */
  eax = esi;
/* 73a3d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73a3d1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73a3f0(void) {
  LOAD_REGS();
L_73a3f0: /* 73a3f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73a3f1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 73a3f5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73a3f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73a3f9: mov esi, ecx */
  esi = ecx;
/* 73a3fb: je 0x73a430 */
  if (zf) goto L_73a430;
L_73a3fd: /* 73a3fd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 73a400: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73a401: push 0x6c60a5 */
  { uint32_t v = 0x6c60a5u; esp -= 4; W32(esp, v); }
/* 73a406: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 73a409: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73a40a: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 73a40f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73a410: call 0x99ca3d */
  esp -= 4; W32(esp, 0x73a415u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 73a415: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73a418: je 0x73a428 */
  if (zf) goto L_73a428;
L_73a41a: /* 73a41a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 73a420: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 73a422: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 73a424: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73a425: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x73a428u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_73a428: /* 73a428: mov eax, edi */
  eax = edi;
/* 73a42a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73a42b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73a42c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73a42d: ret 4 */
  esp += 8; SPILL(); return;
L_73a430: /* 73a430: mov ecx, esi */
  ecx = esi;
/* 73a432: call 0x6c60a5 */
  esp -= 4; W32(esp, 0x73a437u); SPILL(); f_6c60a5(); if (g_unwind) return; RELOAD();
/* 73a437: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73a43a: je 0x73a44b */
  if (zf) goto L_73a44b;
L_73a43c: /* 73a43c: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 73a441: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73a442: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73a448u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73a448: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73a44b: /* 73a44b: mov eax, esi */
  eax = esi;
/* 73a44d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73a44e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73a44f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73a480(void) {
  LOAD_REGS();
L_73a480: /* 73a480: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73a482: push 0x9c5b38 */
  { uint32_t v = 0x9c5b38u; esp -= 4; W32(esp, v); }
/* 73a487: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73a48d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73a48e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73a495: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73a496: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73a497: mov esi, ecx */
  esi = ecx;
/* 73a499: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73a49d: mov dword ptr [esi], 0x9f99f0 */
  W32((uint32_t)(esi), 0x9f99f0u);
/* 73a4a3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 73a4ab: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x73a4b1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 73a4b1: mov ecx, esi */
  ecx = esi;
/* 73a4b3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 73a4bb: call 0x6c60a5 */
  esp -= 4; W32(esp, 0x73a4c0u); SPILL(); f_6c60a5(); if (g_unwind) return; RELOAD();
/* 73a4c0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 73a4c4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73a4c5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73a4cc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73a4cf: ret  */
  esp += 4; SPILL(); return;
}

void f_73a4f0(void) {
  LOAD_REGS();
L_73a4f0: /* 73a4f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73a4f1: mov esi, ecx */
  esi = ecx;
/* 73a4f3: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x73a4f8u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 73a4f8: mov dword ptr [esi], 0x9f99f0 */
  W32((uint32_t)(esi), 0x9f99f0u);
/* 73a4fe: mov eax, esi */
  eax = esi;
/* 73a500: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73a501: ret  */
  esp += 4; SPILL(); return;
}

void f_73a520(void) {
  LOAD_REGS();
L_73a520: /* 73a520: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 73a524: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73a525: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73a526: mov esi, ecx */
  esi = ecx;
/* 73a528: call 0x6c1456 */
  esp -= 4; W32(esp, 0x73a52du); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 73a52d: mov dword ptr [esi], 0x9f99f0 */
  W32((uint32_t)(esi), 0x9f99f0u);
/* 73a533: mov eax, esi */
  eax = esi;
/* 73a535: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73a536: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73a550(void) {
  LOAD_REGS();
L_73a550: /* 73a550: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 73a554: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73a555: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73a556: mov esi, ecx */
  esi = ecx;
/* 73a558: call 0x6c5cef */
  esp -= 4; W32(esp, 0x73a55du); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 73a55d: mov eax, esi */
  eax = esi;
/* 73a55f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73a560: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73a580(void) {
  LOAD_REGS();
L_73a580: /* 73a580: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73a581: mov esi, ecx */
  esi = ecx;
/* 73a583: call 0x6c461f */
  esp -= 4; W32(esp, 0x73a588u); SPILL(); f_6c461f(); if (g_unwind) return; RELOAD();
/* 73a588: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73a58d: je 0x73a59e */
  if (zf) goto L_73a59e;
L_73a58f: /* 73a58f: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 73a594: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73a595: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73a59bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73a59b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73a59e: /* 73a59e: mov eax, esi */
  eax = esi;
/* 73a5a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73a5a1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73a5c0(void) {
  LOAD_REGS();
L_73a5c0: /* 73a5c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73a5c1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 73a5c5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73a5c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73a5c9: mov esi, ecx */
  esi = ecx;
/* 73a5cb: je 0x73a600 */
  if (zf) goto L_73a600;
L_73a5cd: /* 73a5cd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 73a5d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73a5d1: push 0x6c461f */
  { uint32_t v = 0x6c461fu; esp -= 4; W32(esp, v); }
/* 73a5d6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 73a5d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73a5da: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 73a5df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73a5e0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x73a5e5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 73a5e5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73a5e8: je 0x73a5f8 */
  if (zf) goto L_73a5f8;
L_73a5ea: /* 73a5ea: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 73a5f0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 73a5f2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 73a5f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73a5f5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x73a5f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_73a5f8: /* 73a5f8: mov eax, edi */
  eax = edi;
/* 73a5fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73a5fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73a5fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73a5fd: ret 4 */
  esp += 8; SPILL(); return;
L_73a600: /* 73a600: mov ecx, esi */
  ecx = esi;
/* 73a602: call 0x6c461f */
  esp -= 4; W32(esp, 0x73a607u); SPILL(); f_6c461f(); if (g_unwind) return; RELOAD();
/* 73a607: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73a60a: je 0x73a61b */
  if (zf) goto L_73a61b;
L_73a60c: /* 73a60c: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 73a611: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73a612: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73a618u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73a618: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73a61b: /* 73a61b: mov eax, esi */
  eax = esi;
/* 73a61d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73a61e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73a61f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73a650(void) {
  LOAD_REGS();
L_73a650: /* 73a650: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73a652: push 0x9c5b58 */
  { uint32_t v = 0x9c5b58u; esp -= 4; W32(esp, v); }
/* 73a657: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73a65d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73a65e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73a665: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73a666: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73a667: mov esi, ecx */
  esi = ecx;
/* 73a669: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73a66d: mov dword ptr [esi], 0x9f9bd0 */
  W32((uint32_t)(esi), 0x9f9bd0u);
/* 73a673: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 73a67b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x73a681u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 73a681: mov ecx, esi */
  ecx = esi;
/* 73a683: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 73a68b: call 0x6c60a5 */
  esp -= 4; W32(esp, 0x73a690u); SPILL(); f_6c60a5(); if (g_unwind) return; RELOAD();
/* 73a690: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 73a694: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73a695: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73a69c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73a69f: ret  */
  esp += 4; SPILL(); return;
}

void f_73a6c0(void) {
  LOAD_REGS();
L_73a6c0: /* 73a6c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73a6c1: mov esi, ecx */
  esi = ecx;
/* 73a6c3: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x73a6c8u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 73a6c8: mov dword ptr [esi], 0x9f9bd0 */
  W32((uint32_t)(esi), 0x9f9bd0u);
/* 73a6ce: mov eax, esi */
  eax = esi;
/* 73a6d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73a6d1: ret  */
  esp += 4; SPILL(); return;
}

void f_73a6f0(void) {
  LOAD_REGS();
L_73a6f0: /* 73a6f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 73a6f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73a6f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73a6f6: mov esi, ecx */
  esi = ecx;
/* 73a6f8: call 0x6c1456 */
  esp -= 4; W32(esp, 0x73a6fdu); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 73a6fd: mov dword ptr [esi], 0x9f9bd0 */
  W32((uint32_t)(esi), 0x9f9bd0u);
/* 73a703: mov eax, esi */
  eax = esi;
/* 73a705: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73a706: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73a720(void) {
  LOAD_REGS();
L_73a720: /* 73a720: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 73a724: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73a725: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73a726: mov esi, ecx */
  esi = ecx;
/* 73a728: call 0x6c5cef */
  esp -= 4; W32(esp, 0x73a72du); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 73a72d: mov eax, esi */
  eax = esi;
/* 73a72f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73a730: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73a750(void) {
  LOAD_REGS();
L_73a750: /* 73a750: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73a751: mov esi, ecx */
  esi = ecx;
/* 73a753: call 0x6cb9c9 */
  esp -= 4; W32(esp, 0x73a758u); SPILL(); f_6cb9c9(); if (g_unwind) return; RELOAD();
/* 73a758: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73a75d: je 0x73a76e */
  if (zf) goto L_73a76e;
L_73a75f: /* 73a75f: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 73a764: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73a765: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73a76bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73a76b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73a76e: /* 73a76e: mov eax, esi */
  eax = esi;
/* 73a770: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73a771: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73a790(void) {
  LOAD_REGS();
L_73a790: /* 73a790: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73a791: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 73a795: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73a798: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73a799: mov esi, ecx */
  esi = ecx;
/* 73a79b: je 0x73a7d0 */
  if (zf) goto L_73a7d0;
L_73a79d: /* 73a79d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 73a7a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73a7a1: push 0x6cb9c9 */
  { uint32_t v = 0x6cb9c9u; esp -= 4; W32(esp, v); }
/* 73a7a6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 73a7a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73a7aa: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 73a7af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73a7b0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x73a7b5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 73a7b5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73a7b8: je 0x73a7c8 */
  if (zf) goto L_73a7c8;
L_73a7ba: /* 73a7ba: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 73a7c0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 73a7c2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 73a7c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73a7c5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x73a7c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_73a7c8: /* 73a7c8: mov eax, edi */
  eax = edi;
/* 73a7ca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73a7cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73a7cc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73a7cd: ret 4 */
  esp += 8; SPILL(); return;
L_73a7d0: /* 73a7d0: mov ecx, esi */
  ecx = esi;
/* 73a7d2: call 0x6cb9c9 */
  esp -= 4; W32(esp, 0x73a7d7u); SPILL(); f_6cb9c9(); if (g_unwind) return; RELOAD();
/* 73a7d7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73a7da: je 0x73a7eb */
  if (zf) goto L_73a7eb;
L_73a7dc: /* 73a7dc: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 73a7e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73a7e2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73a7e8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73a7e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73a7eb: /* 73a7eb: mov eax, esi */
  eax = esi;
/* 73a7ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73a7ee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73a7ef: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73a820(void) {
  LOAD_REGS();
L_73a820: /* 73a820: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73a822: push 0x9c5b86 */
  { uint32_t v = 0x9c5b86u; esp -= 4; W32(esp, v); }
/* 73a827: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73a82d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73a82e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73a835: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73a836: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73a837: mov esi, ecx */
  esi = ecx;
/* 73a839: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73a83d: mov dword ptr [esi], 0x9f9db0 */
  W32((uint32_t)(esi), 0x9f9db0u);
/* 73a843: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 73a84b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x73a851u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 73a851: lea ecx, [esi + 0x33c] */
  ecx = (uint32_t)(esi + 0x33cu);
/* 73a857: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 73a85c: call 0x6c9264 */
  esp -= 4; W32(esp, 0x73a861u); SPILL(); f_6c9264(); if (g_unwind) return; RELOAD();
/* 73a861: mov ecx, esi */
  ecx = esi;
/* 73a863: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 73a86b: call 0x6cb9c9 */
  esp -= 4; W32(esp, 0x73a870u); SPILL(); f_6cb9c9(); if (g_unwind) return; RELOAD();
/* 73a870: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 73a874: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73a875: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73a87c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73a87f: ret  */
  esp += 4; SPILL(); return;
}

void f_73a8a0(void) {
  LOAD_REGS();
L_73a8a0: /* 73a8a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73a8a2: push 0x9c5ba8 */
  { uint32_t v = 0x9c5ba8u; esp -= 4; W32(esp, v); }
/* 73a8a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73a8ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73a8ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73a8b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73a8b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73a8b7: mov esi, ecx */
  esi = ecx;
/* 73a8b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73a8bd: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x73a8c2u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 73a8c2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 73a8c4: lea ecx, [esi + 0x33c] */
  ecx = (uint32_t)(esi + 0x33cu);
/* 73a8ca: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 73a8d2: mov dword ptr [esi], 0x9f9db0 */
  W32((uint32_t)(esi), 0x9f9db0u);
/* 73a8d8: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x73a8deu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 73a8de: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 73a8e2: mov eax, esi */
  eax = esi;
/* 73a8e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73a8e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73a8ec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73a8ef: ret  */
  esp += 4; SPILL(); return;
}

void f_73a910(void) {
  LOAD_REGS();
L_73a910: /* 73a910: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73a912: push 0x9c5bc8 */
  { uint32_t v = 0x9c5bc8u; esp -= 4; W32(esp, v); }
/* 73a917: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73a91d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73a91e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73a925: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73a926: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73a927: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73a928: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 73a92c: mov esi, ecx */
  esi = ecx;
/* 73a92e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73a92f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 73a933: call 0x6c1456 */
  esp -= 4; W32(esp, 0x73a938u); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 73a938: add edi, 0x33c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 73a93e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73a93f: lea ecx, [esi + 0x33c] */
  ecx = (uint32_t)(esi + 0x33cu);
/* 73a945: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 73a94d: mov dword ptr [esi], 0x9f9db0 */
  W32((uint32_t)(esi), 0x9f9db0u);
/* 73a953: call 0x6c38a0 */
  esp -= 4; W32(esp, 0x73a958u); SPILL(); f_6c38a0(); if (g_unwind) return; RELOAD();
/* 73a958: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 73a95c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73a95d: mov eax, esi */
  eax = esi;
/* 73a95f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73a960: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73a967: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73a96a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73a990(void) {
  LOAD_REGS();
L_73a990: /* 73a990: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73a991: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73a992: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 73a996: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73a997: mov esi, ecx */
  esi = ecx;
/* 73a999: call 0x6c5cef */
  esp -= 4; W32(esp, 0x73a99eu); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 73a99e: add edi, 0x33c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 73a9a4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73a9a5: lea ecx, [esi + 0x33c] */
  ecx = (uint32_t)(esi + 0x33cu);
/* 73a9ab: call 0x6cbe88 */
  esp -= 4; W32(esp, 0x73a9b0u); SPILL(); f_6cbe88(); if (g_unwind) return; RELOAD();
/* 73a9b0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73a9b1: mov eax, esi */
  eax = esi;
/* 73a9b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73a9b4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73a9d0(void) {
  LOAD_REGS();
L_73a9d0: /* 73a9d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73a9d1: mov esi, ecx */
  esi = ecx;
/* 73a9d3: call 0x6c40fc */
  esp -= 4; W32(esp, 0x73a9d8u); SPILL(); f_6c40fc(); if (g_unwind) return; RELOAD();
/* 73a9d8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73a9dd: je 0x73a9ee */
  if (zf) goto L_73a9ee;
L_73a9df: /* 73a9df: push 0x348 */
  { uint32_t v = 0x348u; esp -= 4; W32(esp, v); }
/* 73a9e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73a9e5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73a9ebu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73a9eb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73a9ee: /* 73a9ee: mov eax, esi */
  eax = esi;
/* 73a9f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73a9f1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73aa10(void) {
  LOAD_REGS();
L_73aa10: /* 73aa10: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73aa11: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 73aa15: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73aa18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73aa19: mov esi, ecx */
  esi = ecx;
/* 73aa1b: je 0x73aa50 */
  if (zf) goto L_73aa50;
L_73aa1d: /* 73aa1d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 73aa20: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73aa21: push 0x6c40fc */
  { uint32_t v = 0x6c40fcu; esp -= 4; W32(esp, v); }
/* 73aa26: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 73aa29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73aa2a: push 0x348 */
  { uint32_t v = 0x348u; esp -= 4; W32(esp, v); }
/* 73aa2f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73aa30: call 0x99ca3d */
  esp -= 4; W32(esp, 0x73aa35u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 73aa35: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73aa38: je 0x73aa48 */
  if (zf) goto L_73aa48;
L_73aa3a: /* 73aa3a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 73aa40: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 73aa42: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 73aa44: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73aa45: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x73aa48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_73aa48: /* 73aa48: mov eax, edi */
  eax = edi;
/* 73aa4a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73aa4b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73aa4c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73aa4d: ret 4 */
  esp += 8; SPILL(); return;
L_73aa50: /* 73aa50: mov ecx, esi */
  ecx = esi;
/* 73aa52: call 0x6c40fc */
  esp -= 4; W32(esp, 0x73aa57u); SPILL(); f_6c40fc(); if (g_unwind) return; RELOAD();
/* 73aa57: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73aa5a: je 0x73aa6b */
  if (zf) goto L_73aa6b;
L_73aa5c: /* 73aa5c: push 0x348 */
  { uint32_t v = 0x348u; esp -= 4; W32(esp, v); }
/* 73aa61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73aa62: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73aa68u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73aa68: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73aa6b: /* 73aa6b: mov eax, esi */
  eax = esi;
/* 73aa6d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73aa6e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73aa6f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73aaa0(void) {
  LOAD_REGS();
L_73aaa0: /* 73aaa0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73aaa2: push 0x9c5be8 */
  { uint32_t v = 0x9c5be8u; esp -= 4; W32(esp, v); }
/* 73aaa7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73aaad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73aaae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73aab5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73aab6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73aab7: mov esi, ecx */
  esi = ecx;
/* 73aab9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73aabd: mov dword ptr [esi], 0x9f9f90 */
  W32((uint32_t)(esi), 0x9f9f90u);
/* 73aac3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 73aacb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x73aad1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 73aad1: mov ecx, esi */
  ecx = esi;
/* 73aad3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 73aadb: call 0x6cb9c9 */
  esp -= 4; W32(esp, 0x73aae0u); SPILL(); f_6cb9c9(); if (g_unwind) return; RELOAD();
/* 73aae0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 73aae4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73aae5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73aaec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73aaef: ret  */
  esp += 4; SPILL(); return;
}

void f_73ab10(void) {
  LOAD_REGS();
L_73ab10: /* 73ab10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73ab11: mov esi, ecx */
  esi = ecx;
/* 73ab13: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x73ab18u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 73ab18: mov dword ptr [esi], 0x9f9f90 */
  W32((uint32_t)(esi), 0x9f9f90u);
/* 73ab1e: mov eax, esi */
  eax = esi;
/* 73ab20: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73ab21: ret  */
  esp += 4; SPILL(); return;
}

void f_73ab40(void) {
  LOAD_REGS();
L_73ab40: /* 73ab40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 73ab44: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73ab45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73ab46: mov esi, ecx */
  esi = ecx;
/* 73ab48: call 0x6c1456 */
  esp -= 4; W32(esp, 0x73ab4du); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 73ab4d: mov dword ptr [esi], 0x9f9f90 */
  W32((uint32_t)(esi), 0x9f9f90u);
/* 73ab53: mov eax, esi */
  eax = esi;
/* 73ab55: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73ab56: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73ab70(void) {
  LOAD_REGS();
L_73ab70: /* 73ab70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 73ab74: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73ab75: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73ab76: mov esi, ecx */
  esi = ecx;
/* 73ab78: call 0x6c5cef */
  esp -= 4; W32(esp, 0x73ab7du); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 73ab7d: mov eax, esi */
  eax = esi;
/* 73ab7f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73ab80: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73aba0(void) {
  LOAD_REGS();
L_73aba0: /* 73aba0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73aba1: mov esi, ecx */
  esi = ecx;
/* 73aba3: call 0x6cba91 */
  esp -= 4; W32(esp, 0x73aba8u); SPILL(); f_6cba91(); if (g_unwind) return; RELOAD();
/* 73aba8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73abad: je 0x73abbe */
  if (zf) goto L_73abbe;
L_73abaf: /* 73abaf: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 73abb4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73abb5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73abbbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73abbb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73abbe: /* 73abbe: mov eax, esi */
  eax = esi;
/* 73abc0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73abc1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73abe0(void) {
  LOAD_REGS();
L_73abe0: /* 73abe0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73abe1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 73abe5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73abe8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73abe9: mov esi, ecx */
  esi = ecx;
/* 73abeb: je 0x73ac20 */
  if (zf) goto L_73ac20;
L_73abed: /* 73abed: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 73abf0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73abf1: push 0x6cba91 */
  { uint32_t v = 0x6cba91u; esp -= 4; W32(esp, v); }
/* 73abf6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 73abf9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73abfa: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 73abff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73ac00: call 0x99ca3d */
  esp -= 4; W32(esp, 0x73ac05u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 73ac05: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73ac08: je 0x73ac18 */
  if (zf) goto L_73ac18;
L_73ac0a: /* 73ac0a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 73ac10: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 73ac12: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 73ac14: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73ac15: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x73ac18u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_73ac18: /* 73ac18: mov eax, edi */
  eax = edi;
/* 73ac1a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73ac1b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73ac1c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73ac1d: ret 4 */
  esp += 8; SPILL(); return;
L_73ac20: /* 73ac20: mov ecx, esi */
  ecx = esi;
/* 73ac22: call 0x6cba91 */
  esp -= 4; W32(esp, 0x73ac27u); SPILL(); f_6cba91(); if (g_unwind) return; RELOAD();
/* 73ac27: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73ac2a: je 0x73ac3b */
  if (zf) goto L_73ac3b;
L_73ac2c: /* 73ac2c: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 73ac31: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73ac32: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73ac38u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73ac38: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73ac3b: /* 73ac3b: mov eax, esi */
  eax = esi;
/* 73ac3d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73ac3e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73ac3f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73ac70(void) {
  LOAD_REGS();
L_73ac70: /* 73ac70: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73ac72: push 0x9c5c08 */
  { uint32_t v = 0x9c5c08u; esp -= 4; W32(esp, v); }
/* 73ac77: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73ac7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73ac7e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73ac85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73ac86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73ac87: mov esi, ecx */
  esi = ecx;
/* 73ac89: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73ac8d: mov dword ptr [esi], 0x9fa170 */
  W32((uint32_t)(esi), 0x9fa170u);
/* 73ac93: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 73ac9b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x73aca1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 73aca1: mov ecx, esi */
  ecx = esi;
/* 73aca3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 73acab: call 0x6cb9c9 */
  esp -= 4; W32(esp, 0x73acb0u); SPILL(); f_6cb9c9(); if (g_unwind) return; RELOAD();
/* 73acb0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 73acb4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73acb5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73acbc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73acbf: ret  */
  esp += 4; SPILL(); return;
}

void f_73ace0(void) {
  LOAD_REGS();
L_73ace0: /* 73ace0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73ace1: mov esi, ecx */
  esi = ecx;
/* 73ace3: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x73ace8u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 73ace8: mov dword ptr [esi], 0x9fa170 */
  W32((uint32_t)(esi), 0x9fa170u);
/* 73acee: mov eax, esi */
  eax = esi;
/* 73acf0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73acf1: ret  */
  esp += 4; SPILL(); return;
}

void f_73ad10(void) {
  LOAD_REGS();
L_73ad10: /* 73ad10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73ad11: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73ad12: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 73ad16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73ad17: mov esi, ecx */
  esi = ecx;
/* 73ad19: call 0x6c1456 */
  esp -= 4; W32(esp, 0x73ad1eu); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 73ad1e: mov ecx, dword ptr [esi + 0x340] */
  ecx = R32((uint32_t)(esi + 0x340u));
/* 73ad24: mov dword ptr [esi], 0x9fa170 */
  W32((uint32_t)(esi), 0x9fa170u);
/* 73ad2a: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 73ad30: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 73ad36: xor ecx, dword ptr [edi + 0x340] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x340u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73ad3c: mov edx, dword ptr [esi + 0x340] */
  edx = R32((uint32_t)(esi + 0x340u));
/* 73ad42: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73ad45: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 73ad47: mov dword ptr [esi + 0x340], edx */
  W32((uint32_t)(esi + 0x340u), edx);
/* 73ad4d: mov eax, edx */
  eax = edx;
/* 73ad4f: mov edx, dword ptr [edi + 0x340] */
  edx = R32((uint32_t)(edi + 0x340u));
/* 73ad55: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 73ad57: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 73ad5a: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 73ad5c: mov dword ptr [esi + 0x340], edx */
  W32((uint32_t)(esi + 0x340u), edx);
/* 73ad62: mov eax, dword ptr [edi + 0x344] */
  eax = R32((uint32_t)(edi + 0x344u));
/* 73ad68: mov dword ptr [esi + 0x344], eax */
  W32((uint32_t)(esi + 0x344u), eax);
/* 73ad6e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73ad6f: mov eax, esi */
  eax = esi;
/* 73ad71: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73ad72: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73ada0(void) {
  LOAD_REGS();
L_73ada0: /* 73ada0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73ada1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73ada2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 73ada6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73ada7: mov esi, ecx */
  esi = ecx;
/* 73ada9: call 0x6c5cef */
  esp -= 4; W32(esp, 0x73adaeu); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 73adae: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 73adb4: mov ecx, dword ptr [esi + 0x340] */
  ecx = R32((uint32_t)(esi + 0x340u));
/* 73adba: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 73adc0: xor ecx, dword ptr [edi + 0x340] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x340u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73adc6: mov edx, dword ptr [esi + 0x340] */
  edx = R32((uint32_t)(esi + 0x340u));
/* 73adcc: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73adcf: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 73add1: mov dword ptr [esi + 0x340], edx */
  W32((uint32_t)(esi + 0x340u), edx);
/* 73add7: mov eax, edx */
  eax = edx;
/* 73add9: mov edx, dword ptr [edi + 0x340] */
  edx = R32((uint32_t)(edi + 0x340u));
/* 73addf: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 73ade1: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 73ade4: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 73ade6: mov dword ptr [esi + 0x340], edx */
  W32((uint32_t)(esi + 0x340u), edx);
/* 73adec: mov eax, dword ptr [edi + 0x344] */
  eax = R32((uint32_t)(edi + 0x344u));
/* 73adf2: mov dword ptr [esi + 0x344], eax */
  W32((uint32_t)(esi + 0x344u), eax);
/* 73adf8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73adf9: mov eax, esi */
  eax = esi;
/* 73adfb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73adfc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73ae20(void) {
  LOAD_REGS();
L_73ae20: /* 73ae20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73ae21: mov esi, ecx */
  esi = ecx;
/* 73ae23: call 0x6ccaae */
  esp -= 4; W32(esp, 0x73ae28u); SPILL(); f_6ccaae(); if (g_unwind) return; RELOAD();
/* 73ae28: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73ae2d: je 0x73ae3e */
  if (zf) goto L_73ae3e;
L_73ae2f: /* 73ae2f: push 0x348 */
  { uint32_t v = 0x348u; esp -= 4; W32(esp, v); }
/* 73ae34: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73ae35: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73ae3bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73ae3b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73ae3e: /* 73ae3e: mov eax, esi */
  eax = esi;
/* 73ae40: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73ae41: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73ae60(void) {
  LOAD_REGS();
L_73ae60: /* 73ae60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73ae61: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 73ae65: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73ae68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73ae69: mov esi, ecx */
  esi = ecx;
/* 73ae6b: je 0x73aea0 */
  if (zf) goto L_73aea0;
L_73ae6d: /* 73ae6d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 73ae70: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73ae71: push 0x6ccaae */
  { uint32_t v = 0x6ccaaeu; esp -= 4; W32(esp, v); }
/* 73ae76: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 73ae79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73ae7a: push 0x348 */
  { uint32_t v = 0x348u; esp -= 4; W32(esp, v); }
/* 73ae7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73ae80: call 0x99ca3d */
  esp -= 4; W32(esp, 0x73ae85u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 73ae85: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73ae88: je 0x73ae98 */
  if (zf) goto L_73ae98;
L_73ae8a: /* 73ae8a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 73ae90: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 73ae92: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 73ae94: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73ae95: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x73ae98u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_73ae98: /* 73ae98: mov eax, edi */
  eax = edi;
/* 73ae9a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73ae9b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73ae9c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73ae9d: ret 4 */
  esp += 8; SPILL(); return;
L_73aea0: /* 73aea0: mov ecx, esi */
  ecx = esi;
/* 73aea2: call 0x6ccaae */
  esp -= 4; W32(esp, 0x73aea7u); SPILL(); f_6ccaae(); if (g_unwind) return; RELOAD();
/* 73aea7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73aeaa: je 0x73aebb */
  if (zf) goto L_73aebb;
L_73aeac: /* 73aeac: push 0x348 */
  { uint32_t v = 0x348u; esp -= 4; W32(esp, v); }
/* 73aeb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73aeb2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73aeb8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73aeb8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73aebb: /* 73aebb: mov eax, esi */
  eax = esi;
/* 73aebd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73aebe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73aebf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73aef0(void) {
  LOAD_REGS();
L_73aef0: /* 73aef0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73aef2: push 0x9c5c28 */
  { uint32_t v = 0x9c5c28u; esp -= 4; W32(esp, v); }
/* 73aef7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73aefd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73aefe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73af05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73af06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73af07: mov esi, ecx */
  esi = ecx;
/* 73af09: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73af0d: mov dword ptr [esi], 0x9fa350 */
  W32((uint32_t)(esi), 0x9fa350u);
/* 73af13: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 73af1b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x73af21u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 73af21: mov ecx, esi */
  ecx = esi;
/* 73af23: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 73af2b: call 0x6cb9c9 */
  esp -= 4; W32(esp, 0x73af30u); SPILL(); f_6cb9c9(); if (g_unwind) return; RELOAD();
/* 73af30: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 73af34: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73af35: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73af3c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73af3f: ret  */
  esp += 4; SPILL(); return;
}

void f_73af60(void) {
  LOAD_REGS();
L_73af60: /* 73af60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73af61: mov esi, ecx */
  esi = ecx;
/* 73af63: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x73af68u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 73af68: mov dword ptr [esi], 0x9fa350 */
  W32((uint32_t)(esi), 0x9fa350u);
/* 73af6e: mov eax, esi */
  eax = esi;
/* 73af70: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73af71: ret  */
  esp += 4; SPILL(); return;
}

void f_73af90(void) {
  LOAD_REGS();
L_73af90: /* 73af90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 73af94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73af95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73af96: mov esi, ecx */
  esi = ecx;
/* 73af98: call 0x6c1456 */
  esp -= 4; W32(esp, 0x73af9du); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 73af9d: mov dword ptr [esi], 0x9fa350 */
  W32((uint32_t)(esi), 0x9fa350u);
/* 73afa3: mov eax, esi */
  eax = esi;
/* 73afa5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73afa6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73afc0(void) {
  LOAD_REGS();
L_73afc0: /* 73afc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 73afc4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73afc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73afc6: mov esi, ecx */
  esi = ecx;
/* 73afc8: call 0x6c5cef */
  esp -= 4; W32(esp, 0x73afcdu); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 73afcd: mov eax, esi */
  eax = esi;
/* 73afcf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73afd0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73aff0(void) {
  LOAD_REGS();
L_73aff0: /* 73aff0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73aff1: mov esi, ecx */
  esi = ecx;
/* 73aff3: call 0x6c3efe */
  esp -= 4; W32(esp, 0x73aff8u); SPILL(); f_6c3efe(); if (g_unwind) return; RELOAD();
/* 73aff8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73affd: je 0x73b00e */
  if (zf) goto L_73b00e;
L_73afff: /* 73afff: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 73b004: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b005: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73b00bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73b00b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73b00e: /* 73b00e: mov eax, esi */
  eax = esi;
/* 73b010: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73b011: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73b030(void) {
  LOAD_REGS();
L_73b030: /* 73b030: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73b031: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 73b035: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73b038: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b039: mov esi, ecx */
  esi = ecx;
/* 73b03b: je 0x73b070 */
  if (zf) goto L_73b070;
L_73b03d: /* 73b03d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 73b040: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73b041: push 0x6c3efe */
  { uint32_t v = 0x6c3efeu; esp -= 4; W32(esp, v); }
/* 73b046: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 73b049: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73b04a: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 73b04f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b050: call 0x99ca3d */
  esp -= 4; W32(esp, 0x73b055u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 73b055: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73b058: je 0x73b068 */
  if (zf) goto L_73b068;
L_73b05a: /* 73b05a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 73b060: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 73b062: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 73b064: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73b065: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x73b068u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_73b068: /* 73b068: mov eax, edi */
  eax = edi;
/* 73b06a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73b06b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73b06c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73b06d: ret 4 */
  esp += 8; SPILL(); return;
L_73b070: /* 73b070: mov ecx, esi */
  ecx = esi;
/* 73b072: call 0x6c3efe */
  esp -= 4; W32(esp, 0x73b077u); SPILL(); f_6c3efe(); if (g_unwind) return; RELOAD();
/* 73b077: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73b07a: je 0x73b08b */
  if (zf) goto L_73b08b;
L_73b07c: /* 73b07c: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 73b081: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b082: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73b088u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73b088: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73b08b: /* 73b08b: mov eax, esi */
  eax = esi;
/* 73b08d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73b08e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73b08f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73b0c0(void) {
  LOAD_REGS();
L_73b0c0: /* 73b0c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73b0c2: push 0x9c5c48 */
  { uint32_t v = 0x9c5c48u; esp -= 4; W32(esp, v); }
/* 73b0c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73b0cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73b0ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73b0d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73b0d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b0d7: mov esi, ecx */
  esi = ecx;
/* 73b0d9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73b0dd: mov dword ptr [esi], 0x9fa530 */
  W32((uint32_t)(esi), 0x9fa530u);
/* 73b0e3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 73b0eb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x73b0f1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 73b0f1: mov ecx, esi */
  ecx = esi;
/* 73b0f3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 73b0fb: call 0x6cb9c9 */
  esp -= 4; W32(esp, 0x73b100u); SPILL(); f_6cb9c9(); if (g_unwind) return; RELOAD();
/* 73b100: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 73b104: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73b105: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73b10c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73b10f: ret  */
  esp += 4; SPILL(); return;
}

void f_73b130(void) {
  LOAD_REGS();
L_73b130: /* 73b130: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b131: mov esi, ecx */
  esi = ecx;
/* 73b133: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x73b138u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 73b138: mov dword ptr [esi], 0x9fa530 */
  W32((uint32_t)(esi), 0x9fa530u);
/* 73b13e: mov eax, esi */
  eax = esi;
/* 73b140: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73b141: ret  */
  esp += 4; SPILL(); return;
}

void f_73b160(void) {
  LOAD_REGS();
L_73b160: /* 73b160: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 73b164: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b165: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73b166: mov esi, ecx */
  esi = ecx;
/* 73b168: call 0x6c1456 */
  esp -= 4; W32(esp, 0x73b16du); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 73b16d: mov dword ptr [esi], 0x9fa530 */
  W32((uint32_t)(esi), 0x9fa530u);
/* 73b173: mov eax, esi */
  eax = esi;
/* 73b175: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73b176: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73b190(void) {
  LOAD_REGS();
L_73b190: /* 73b190: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 73b194: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b195: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73b196: mov esi, ecx */
  esi = ecx;
/* 73b198: call 0x6c5cef */
  esp -= 4; W32(esp, 0x73b19du); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 73b19d: mov eax, esi */
  eax = esi;
/* 73b19f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73b1a0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73b1c0(void) {
  LOAD_REGS();
L_73b1c0: /* 73b1c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b1c1: mov esi, ecx */
  esi = ecx;
/* 73b1c3: call 0x6c2711 */
  esp -= 4; W32(esp, 0x73b1c8u); SPILL(); f_6c2711(); if (g_unwind) return; RELOAD();
/* 73b1c8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73b1cd: je 0x73b1de */
  if (zf) goto L_73b1de;
L_73b1cf: /* 73b1cf: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 73b1d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b1d5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73b1dbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73b1db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73b1de: /* 73b1de: mov eax, esi */
  eax = esi;
/* 73b1e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73b1e1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73b200(void) {
  LOAD_REGS();
L_73b200: /* 73b200: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73b201: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 73b205: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73b208: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b209: mov esi, ecx */
  esi = ecx;
/* 73b20b: je 0x73b240 */
  if (zf) goto L_73b240;
L_73b20d: /* 73b20d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 73b210: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73b211: push 0x6c2711 */
  { uint32_t v = 0x6c2711u; esp -= 4; W32(esp, v); }
/* 73b216: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 73b219: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73b21a: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 73b21f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b220: call 0x99ca3d */
  esp -= 4; W32(esp, 0x73b225u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 73b225: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73b228: je 0x73b238 */
  if (zf) goto L_73b238;
L_73b22a: /* 73b22a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 73b230: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 73b232: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 73b234: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73b235: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x73b238u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_73b238: /* 73b238: mov eax, edi */
  eax = edi;
/* 73b23a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73b23b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73b23c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73b23d: ret 4 */
  esp += 8; SPILL(); return;
L_73b240: /* 73b240: mov ecx, esi */
  ecx = esi;
/* 73b242: call 0x6c2711 */
  esp -= 4; W32(esp, 0x73b247u); SPILL(); f_6c2711(); if (g_unwind) return; RELOAD();
/* 73b247: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73b24a: je 0x73b25b */
  if (zf) goto L_73b25b;
L_73b24c: /* 73b24c: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 73b251: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b252: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73b258u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73b258: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73b25b: /* 73b25b: mov eax, esi */
  eax = esi;
/* 73b25d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73b25e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73b25f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73b290(void) {
  LOAD_REGS();
L_73b290: /* 73b290: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73b292: push 0x9c5c68 */
  { uint32_t v = 0x9c5c68u; esp -= 4; W32(esp, v); }
/* 73b297: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73b29d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73b29e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73b2a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73b2a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b2a7: mov esi, ecx */
  esi = ecx;
/* 73b2a9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73b2ad: mov dword ptr [esi], 0x9fa710 */
  W32((uint32_t)(esi), 0x9fa710u);
/* 73b2b3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 73b2bb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x73b2c1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 73b2c1: mov ecx, esi */
  ecx = esi;
/* 73b2c3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 73b2cb: call 0x6cb9c9 */
  esp -= 4; W32(esp, 0x73b2d0u); SPILL(); f_6cb9c9(); if (g_unwind) return; RELOAD();
/* 73b2d0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 73b2d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73b2d5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73b2dc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73b2df: ret  */
  esp += 4; SPILL(); return;
}

void f_73b300(void) {
  LOAD_REGS();
L_73b300: /* 73b300: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b301: mov esi, ecx */
  esi = ecx;
/* 73b303: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x73b308u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 73b308: mov dword ptr [esi], 0x9fa710 */
  W32((uint32_t)(esi), 0x9fa710u);
/* 73b30e: mov eax, esi */
  eax = esi;
/* 73b310: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73b311: ret  */
  esp += 4; SPILL(); return;
}

void f_73b330(void) {
  LOAD_REGS();
L_73b330: /* 73b330: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 73b334: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b335: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73b336: mov esi, ecx */
  esi = ecx;
/* 73b338: call 0x6c1456 */
  esp -= 4; W32(esp, 0x73b33du); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 73b33d: mov dword ptr [esi], 0x9fa710 */
  W32((uint32_t)(esi), 0x9fa710u);
/* 73b343: mov eax, esi */
  eax = esi;
/* 73b345: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73b346: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73b360(void) {
  LOAD_REGS();
L_73b360: /* 73b360: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 73b364: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b365: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73b366: mov esi, ecx */
  esi = ecx;
/* 73b368: call 0x6c5cef */
  esp -= 4; W32(esp, 0x73b36du); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 73b36d: mov eax, esi */
  eax = esi;
/* 73b36f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73b370: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73b390(void) {
  LOAD_REGS();
L_73b390: /* 73b390: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b391: mov esi, ecx */
  esi = ecx;
/* 73b393: call 0x6c796e */
  esp -= 4; W32(esp, 0x73b398u); SPILL(); f_6c796e(); if (g_unwind) return; RELOAD();
/* 73b398: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73b39d: je 0x73b3ae */
  if (zf) goto L_73b3ae;
L_73b39f: /* 73b39f: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 73b3a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b3a5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73b3abu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73b3ab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73b3ae: /* 73b3ae: mov eax, esi */
  eax = esi;
/* 73b3b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73b3b1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73b3d0(void) {
  LOAD_REGS();
L_73b3d0: /* 73b3d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73b3d1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 73b3d5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73b3d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b3d9: mov esi, ecx */
  esi = ecx;
/* 73b3db: je 0x73b410 */
  if (zf) goto L_73b410;
L_73b3dd: /* 73b3dd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 73b3e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73b3e1: push 0x6c796e */
  { uint32_t v = 0x6c796eu; esp -= 4; W32(esp, v); }
/* 73b3e6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 73b3e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73b3ea: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 73b3ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b3f0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x73b3f5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 73b3f5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73b3f8: je 0x73b408 */
  if (zf) goto L_73b408;
L_73b3fa: /* 73b3fa: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 73b400: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 73b402: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 73b404: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73b405: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x73b408u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_73b408: /* 73b408: mov eax, edi */
  eax = edi;
/* 73b40a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73b40b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73b40c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73b40d: ret 4 */
  esp += 8; SPILL(); return;
L_73b410: /* 73b410: mov ecx, esi */
  ecx = esi;
/* 73b412: call 0x6c796e */
  esp -= 4; W32(esp, 0x73b417u); SPILL(); f_6c796e(); if (g_unwind) return; RELOAD();
/* 73b417: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73b41a: je 0x73b42b */
  if (zf) goto L_73b42b;
L_73b41c: /* 73b41c: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 73b421: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b422: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73b428u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73b428: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73b42b: /* 73b42b: mov eax, esi */
  eax = esi;
/* 73b42d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73b42e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73b42f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73b460(void) {
  LOAD_REGS();
L_73b460: /* 73b460: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73b462: push 0x9c5c88 */
  { uint32_t v = 0x9c5c88u; esp -= 4; W32(esp, v); }
/* 73b467: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73b46d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73b46e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73b475: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73b476: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b477: mov esi, ecx */
  esi = ecx;
/* 73b479: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73b47d: mov dword ptr [esi], 0x9fa8f0 */
  W32((uint32_t)(esi), 0x9fa8f0u);
/* 73b483: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 73b48b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x73b491u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 73b491: mov ecx, esi */
  ecx = esi;
/* 73b493: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 73b49b: call 0x6c60a5 */
  esp -= 4; W32(esp, 0x73b4a0u); SPILL(); f_6c60a5(); if (g_unwind) return; RELOAD();
/* 73b4a0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 73b4a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73b4a5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73b4ac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73b4af: ret  */
  esp += 4; SPILL(); return;
}

void f_73b4d0(void) {
  LOAD_REGS();
L_73b4d0: /* 73b4d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b4d1: mov esi, ecx */
  esi = ecx;
/* 73b4d3: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x73b4d8u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 73b4d8: mov dword ptr [esi], 0x9fa8f0 */
  W32((uint32_t)(esi), 0x9fa8f0u);
/* 73b4de: mov eax, esi */
  eax = esi;
/* 73b4e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73b4e1: ret  */
  esp += 4; SPILL(); return;
}

void f_73b500(void) {
  LOAD_REGS();
L_73b500: /* 73b500: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 73b504: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b505: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73b506: mov esi, ecx */
  esi = ecx;
/* 73b508: call 0x6c1456 */
  esp -= 4; W32(esp, 0x73b50du); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 73b50d: mov dword ptr [esi], 0x9fa8f0 */
  W32((uint32_t)(esi), 0x9fa8f0u);
/* 73b513: mov eax, esi */
  eax = esi;
/* 73b515: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73b516: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73b530(void) {
  LOAD_REGS();
L_73b530: /* 73b530: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 73b534: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b535: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73b536: mov esi, ecx */
  esi = ecx;
/* 73b538: call 0x6c5cef */
  esp -= 4; W32(esp, 0x73b53du); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 73b53d: mov eax, esi */
  eax = esi;
/* 73b53f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73b540: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73b560(void) {
  LOAD_REGS();
L_73b560: /* 73b560: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b561: mov esi, ecx */
  esi = ecx;
/* 73b563: call 0x6c688e */
  esp -= 4; W32(esp, 0x73b568u); SPILL(); f_6c688e(); if (g_unwind) return; RELOAD();
/* 73b568: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73b56d: je 0x73b57e */
  if (zf) goto L_73b57e;
L_73b56f: /* 73b56f: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 73b574: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b575: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73b57bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73b57b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73b57e: /* 73b57e: mov eax, esi */
  eax = esi;
/* 73b580: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73b581: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73b5a0(void) {
  LOAD_REGS();
L_73b5a0: /* 73b5a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73b5a1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 73b5a5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73b5a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b5a9: mov esi, ecx */
  esi = ecx;
/* 73b5ab: je 0x73b5e0 */
  if (zf) goto L_73b5e0;
L_73b5ad: /* 73b5ad: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 73b5b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73b5b1: push 0x6c688e */
  { uint32_t v = 0x6c688eu; esp -= 4; W32(esp, v); }
/* 73b5b6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 73b5b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73b5ba: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 73b5bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b5c0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x73b5c5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 73b5c5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73b5c8: je 0x73b5d8 */
  if (zf) goto L_73b5d8;
L_73b5ca: /* 73b5ca: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 73b5d0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 73b5d2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 73b5d4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73b5d5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x73b5d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_73b5d8: /* 73b5d8: mov eax, edi */
  eax = edi;
/* 73b5da: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73b5db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73b5dc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73b5dd: ret 4 */
  esp += 8; SPILL(); return;
L_73b5e0: /* 73b5e0: mov ecx, esi */
  ecx = esi;
/* 73b5e2: call 0x6c688e */
  esp -= 4; W32(esp, 0x73b5e7u); SPILL(); f_6c688e(); if (g_unwind) return; RELOAD();
/* 73b5e7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73b5ea: je 0x73b5fb */
  if (zf) goto L_73b5fb;
L_73b5ec: /* 73b5ec: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 73b5f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b5f2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73b5f8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73b5f8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73b5fb: /* 73b5fb: mov eax, esi */
  eax = esi;
/* 73b5fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73b5fe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73b5ff: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73b630(void) {
  LOAD_REGS();
L_73b630: /* 73b630: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73b632: push 0x9c5cc2 */
  { uint32_t v = 0x9c5cc2u; esp -= 4; W32(esp, v); }
/* 73b637: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73b63d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73b63e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73b645: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73b646: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b647: mov esi, ecx */
  esi = ecx;
/* 73b649: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73b64d: mov dword ptr [esi], 0x9faad0 */
  W32((uint32_t)(esi), 0x9faad0u);
/* 73b653: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 73b65b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x73b661u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 73b661: mov eax, dword ptr [0xcfa304] */
  eax = R32((uint32_t)(0xcfa304u));
/* 73b666: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73b667: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 73b669: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 73b66b: lea ecx, [esi + 0x340] */
  ecx = (uint32_t)(esi + 0x340u);
/* 73b671: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73b672: mov byte ptr [esp + 0x20], 0 */
  W8((uint32_t)(esp + 0x20u), 0x0u);
/* 73b677: call 0x99ca3d */
  esp -= 4; W32(esp, 0x73b67cu); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 73b67c: mov ecx, esi */
  ecx = esi;
/* 73b67e: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 73b686: call 0x6c688e */
  esp -= 4; W32(esp, 0x73b68bu); SPILL(); f_6c688e(); if (g_unwind) return; RELOAD();
/* 73b68b: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 73b68f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73b690: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73b697: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73b69a: ret  */
  esp += 4; SPILL(); return;
}

void f_73b6c0(void) {
  LOAD_REGS();
L_73b6c0: /* 73b6c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73b6c2: push 0x9c5ce8 */
  { uint32_t v = 0x9c5ce8u; esp -= 4; W32(esp, v); }
/* 73b6c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73b6cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73b6ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73b6d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73b6d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b6d7: mov esi, ecx */
  esi = ecx;
/* 73b6d9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73b6dd: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x73b6e2u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 73b6e2: mov eax, dword ptr [0xcfa304] */
  eax = R32((uint32_t)(0xcfa304u));
/* 73b6e7: mov ecx, dword ptr [0xcfa300] */
  ecx = R32((uint32_t)(0xcfa300u));
/* 73b6ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73b6ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73b6ef: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 73b6f1: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 73b6f3: lea edx, [esi + 0x340] */
  edx = (uint32_t)(esi + 0x340u);
/* 73b6f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73b6fa: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 73b702: mov dword ptr [esi], 0x9faad0 */
  W32((uint32_t)(esi), 0x9faad0u);
/* 73b708: call 0x99cafe */
  esp -= 4; W32(esp, 0x73b70du); SPILL(); f_99cafe(); if (g_unwind) return; RELOAD();
/* 73b70d: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 73b711: mov eax, esi */
  eax = esi;
/* 73b713: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73b714: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73b71b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73b71e: ret  */
  esp += 4; SPILL(); return;
}

void f_73b740(void) {
  LOAD_REGS();
L_73b740: /* 73b740: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73b742: push 0x9c5d08 */
  { uint32_t v = 0x9c5d08u; esp -= 4; W32(esp, v); }
/* 73b747: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73b74d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73b74e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73b755: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73b756: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b757: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73b758: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 73b75c: mov esi, ecx */
  esi = ecx;
/* 73b75e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73b75f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 73b763: call 0x6c1456 */
  esp -= 4; W32(esp, 0x73b768u); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 73b768: mov ecx, dword ptr [0xcfa304] */
  ecx = R32((uint32_t)(0xcfa304u));
/* 73b76e: mov edx, dword ptr [0xcfa308] */
  edx = R32((uint32_t)(0xcfa308u));
/* 73b774: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73b775: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73b776: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 73b778: mov dword ptr [esi], 0x9faad0 */
  W32((uint32_t)(esi), 0x9faad0u);
/* 73b77e: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 73b784: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 73b786: add edi, 0x340 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x340u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 73b78c: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 73b792: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73b793: lea eax, [esi + 0x340] */
  eax = (uint32_t)(esi + 0x340u);
/* 73b799: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73b79a: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 73b7a2: call 0x99cb60 */
  esp -= 4; W32(esp, 0x73b7a7u); SPILL(); f_99cb60(); if (g_unwind) return; RELOAD();
/* 73b7a7: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 73b7ab: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73b7ac: mov eax, esi */
  eax = esi;
/* 73b7ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73b7af: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73b7b6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73b7b9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73b7e0(void) {
  LOAD_REGS();
L_73b7e0: /* 73b7e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73b7e1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 73b7e5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 73b7e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b7e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73b7e8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73b7e9: mov edi, ecx */
  edi = ecx;
/* 73b7eb: call 0x6c5cef */
  esp -= 4; W32(esp, 0x73b7f0u); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 73b7f0: mov eax, dword ptr [ebx + 0x33c] */
  eax = R32((uint32_t)(ebx + 0x33cu));
/* 73b7f6: mov dword ptr [edi + 0x33c], eax */
  W32((uint32_t)(edi + 0x33cu), eax);
/* 73b7fc: lea esi, [edi + 0x340] */
  esi = (uint32_t)(edi + 0x340u);
/* 73b802: sub ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 73b804: mov ebp, 2 */
  ebp = 0x2u;
/* 73b809: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_73b810: /* 73b810: lea ecx, [ebx + esi] */
  ecx = (uint32_t)(ebx + esi);
/* 73b813: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73b814: mov ecx, esi */
  ecx = esi;
/* 73b816: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x73b81cu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 73b81c: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 73b81f: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* 73b820: jne 0x73b810 */
  if (!zf) goto L_73b810;
L_73b822: /* 73b822: mov eax, edi */
  eax = edi;
/* 73b824: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73b825: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73b826: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 73b827: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73b828: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73b850(void) {
  LOAD_REGS();
L_73b850: /* 73b850: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b851: mov esi, ecx */
  esi = ecx;
/* 73b853: call 0x6c3cd3 */
  esp -= 4; W32(esp, 0x73b858u); SPILL(); f_6c3cd3(); if (g_unwind) return; RELOAD();
/* 73b858: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73b85d: je 0x73b86e */
  if (zf) goto L_73b86e;
L_73b85f: /* 73b85f: push 0x358 */
  { uint32_t v = 0x358u; esp -= 4; W32(esp, v); }
/* 73b864: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b865: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73b86bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73b86b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73b86e: /* 73b86e: mov eax, esi */
  eax = esi;
/* 73b870: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73b871: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73b890(void) {
  LOAD_REGS();
L_73b890: /* 73b890: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73b891: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 73b895: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73b898: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b899: mov esi, ecx */
  esi = ecx;
/* 73b89b: je 0x73b8d0 */
  if (zf) goto L_73b8d0;
L_73b89d: /* 73b89d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 73b8a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73b8a1: push 0x6c3cd3 */
  { uint32_t v = 0x6c3cd3u; esp -= 4; W32(esp, v); }
/* 73b8a6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 73b8a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73b8aa: push 0x358 */
  { uint32_t v = 0x358u; esp -= 4; W32(esp, v); }
/* 73b8af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b8b0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x73b8b5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 73b8b5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73b8b8: je 0x73b8c8 */
  if (zf) goto L_73b8c8;
L_73b8ba: /* 73b8ba: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 73b8c0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 73b8c2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 73b8c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73b8c5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x73b8c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_73b8c8: /* 73b8c8: mov eax, edi */
  eax = edi;
/* 73b8ca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73b8cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73b8cc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73b8cd: ret 4 */
  esp += 8; SPILL(); return;
L_73b8d0: /* 73b8d0: mov ecx, esi */
  ecx = esi;
/* 73b8d2: call 0x6c3cd3 */
  esp -= 4; W32(esp, 0x73b8d7u); SPILL(); f_6c3cd3(); if (g_unwind) return; RELOAD();
/* 73b8d7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73b8da: je 0x73b8eb */
  if (zf) goto L_73b8eb;
L_73b8dc: /* 73b8dc: push 0x358 */
  { uint32_t v = 0x358u; esp -= 4; W32(esp, v); }
/* 73b8e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b8e2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73b8e8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73b8e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73b8eb: /* 73b8eb: mov eax, esi */
  eax = esi;
/* 73b8ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73b8ee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73b8ef: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73b920(void) {
  LOAD_REGS();
L_73b920: /* 73b920: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73b922: push 0x9c5d52 */
  { uint32_t v = 0x9c5d52u; esp -= 4; W32(esp, v); }
/* 73b927: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73b92d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73b92e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73b935: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73b936: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b937: mov esi, ecx */
  esi = ecx;
/* 73b939: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73b93d: mov dword ptr [esi], 0x9facb0 */
  W32((uint32_t)(esi), 0x9facb0u);
/* 73b943: mov dword ptr [esp + 0x10], 3 */
  W32((uint32_t)(esp + 0x10u), 0x3u);
/* 73b94b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x73b951u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 73b951: lea ecx, [esi + 0x388] */
  ecx = (uint32_t)(esi + 0x388u);
/* 73b957: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 73b95c: call 0x6c45fc */
  esp -= 4; W32(esp, 0x73b961u); SPILL(); f_6c45fc(); if (g_unwind) return; RELOAD();
/* 73b961: lea ecx, [esi + 0x37c] */
  ecx = (uint32_t)(esi + 0x37cu);
/* 73b967: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 73b96c: call 0x6c9543 */
  esp -= 4; W32(esp, 0x73b971u); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 73b971: lea ecx, [esi + 0x33c] */
  ecx = (uint32_t)(esi + 0x33cu);
/* 73b977: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 73b97c: call 0x6cbd4d */
  esp -= 4; W32(esp, 0x73b981u); SPILL(); f_6cbd4d(); if (g_unwind) return; RELOAD();
/* 73b981: mov ecx, esi */
  ecx = esi;
/* 73b983: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 73b98b: call 0x6c688e */
  esp -= 4; W32(esp, 0x73b990u); SPILL(); f_6c688e(); if (g_unwind) return; RELOAD();
/* 73b990: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 73b994: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73b995: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73b99c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73b99f: ret  */
  esp += 4; SPILL(); return;
}

void f_73b9c0(void) {
  LOAD_REGS();
L_73b9c0: /* 73b9c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73b9c2: push 0x9c5da2 */
  { uint32_t v = 0x9c5da2u; esp -= 4; W32(esp, v); }
/* 73b9c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73b9cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73b9ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73b9d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73b9d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73b9d7: mov esi, ecx */
  esi = ecx;
/* 73b9d9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73b9da: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 73b9de: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x73b9e3u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 73b9e3: xor edi, edi */
  edi = 0;
/* 73b9e5: lea ecx, [esi + 0x33c] */
  ecx = (uint32_t)(esi + 0x33cu);
/* 73b9eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73b9ec: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 73b9f0: mov dword ptr [esi], 0x9facb0 */
  W32((uint32_t)(esi), 0x9facb0u);
/* 73b9f6: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x73b9fcu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 73b9fc: lea ecx, [esi + 0x354] */
  ecx = (uint32_t)(esi + 0x354u);
/* 73ba02: mov byte ptr [esp + 0x14], 1 */
  W8((uint32_t)(esp + 0x14u), 0x1u);
/* 73ba07: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x73ba0du); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 73ba0d: lea ecx, [esi + 0x358] */
  ecx = (uint32_t)(esi + 0x358u);
/* 73ba13: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x73ba19u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 73ba19: lea ecx, [esi + 0x37c] */
  ecx = (uint32_t)(esi + 0x37cu);
/* 73ba1f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73ba20: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x73ba26u); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 73ba26: lea ecx, [esi + 0x388] */
  ecx = (uint32_t)(esi + 0x388u);
/* 73ba2c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73ba2d: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* 73ba32: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x73ba38u); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 73ba38: lea ecx, [esi + 0x3bc] */
  ecx = (uint32_t)(esi + 0x3bcu);
/* 73ba3e: mov byte ptr [esp + 0x14], 3 */
  W8((uint32_t)(esp + 0x14u), 0x3u);
/* 73ba43: mov dword ptr [esi + 0x394], 2 */
  W32((uint32_t)(esi + 0x394u), 0x2u);
/* 73ba4d: mov dword ptr [esi + 0x398], edi */
  W32((uint32_t)(esi + 0x398u), edi);
/* 73ba53: mov dword ptr [esi + 0x39c], edi */
  W32((uint32_t)(esi + 0x39cu), edi);
/* 73ba59: mov dword ptr [esi + 0x3a0], edi */
  W32((uint32_t)(esi + 0x3a0u), edi);
/* 73ba5f: mov dword ptr [esi + 0x3a4], edi */
  W32((uint32_t)(esi + 0x3a4u), edi);
/* 73ba65: mov dword ptr [esi + 0x3a8], edi */
  W32((uint32_t)(esi + 0x3a8u), edi);
/* 73ba6b: mov dword ptr [esi + 0x3ac], edi */
  W32((uint32_t)(esi + 0x3acu), edi);
/* 73ba71: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x73ba77u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 73ba77: lea ecx, [esi + 0x3f0] */
  ecx = (uint32_t)(esi + 0x3f0u);
/* 73ba7d: mov dword ptr [esi + 0x3c8], 2 */
  W32((uint32_t)(esi + 0x3c8u), 0x2u);
/* 73ba87: mov dword ptr [esi + 0x3cc], edi */
  W32((uint32_t)(esi + 0x3ccu), edi);
/* 73ba8d: mov dword ptr [esi + 0x3d0], edi */
  W32((uint32_t)(esi + 0x3d0u), edi);
/* 73ba93: mov dword ptr [esi + 0x3d4], edi */
  W32((uint32_t)(esi + 0x3d4u), edi);
/* 73ba99: mov dword ptr [esi + 0x3d8], edi */
  W32((uint32_t)(esi + 0x3d8u), edi);
/* 73ba9f: mov dword ptr [esi + 0x3dc], edi */
  W32((uint32_t)(esi + 0x3dcu), edi);
/* 73baa5: mov dword ptr [esi + 0x3e0], edi */
  W32((uint32_t)(esi + 0x3e0u), edi);
/* 73baab: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x73bab1u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 73bab1: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 73bab5: mov dword ptr [esi + 0x3fc], 1 */
  W32((uint32_t)(esi + 0x3fcu), 0x1u);
/* 73babf: mov dword ptr [esi + 0x400], 0x3f800000 */
  W32((uint32_t)(esi + 0x400u), 0x3f800000u);
/* 73bac9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73baca: mov eax, esi */
  eax = esi;
/* 73bacc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73bacd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73bad4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73bad7: ret  */
  esp += 4; SPILL(); return;
}

void f_73bb30(void) {
  LOAD_REGS();
L_73bb30: /* 73bb30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73bb32: push 0x9c5de4 */
  { uint32_t v = 0x9c5de4u; esp -= 4; W32(esp, v); }
/* 73bb37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73bb3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73bb3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73bb45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73bb46: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73bb47: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 73bb48: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 73bb4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73bb4d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73bb4e: mov ebx, ecx */
  ebx = ecx;
/* 73bb50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 73bb51: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 73bb55: call 0x6c1456 */
  esp -= 4; W32(esp, 0x73bb5au); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 73bb5a: lea eax, [ebp + 0x33c] */
  eax = (uint32_t)(ebp + 0x33cu);
/* 73bb60: lea ecx, [ebx + 0x33c] */
  ecx = (uint32_t)(ebx + 0x33cu);
/* 73bb66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73bb67: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 73bb6f: mov dword ptr [ebx], 0x9facb0 */
  W32((uint32_t)(ebx), 0x9facb0u);
/* 73bb75: call 0x6c7f13 */
  esp -= 4; W32(esp, 0x73bb7au); SPILL(); f_6c7f13(); if (g_unwind) return; RELOAD();
/* 73bb7a: mov cl, byte ptr [ebp + 0x348] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x348u))) & 0xffu);
/* 73bb80: mov eax, dword ptr [ebx + 0x350] */
  eax = R32((uint32_t)(ebx + 0x350u));
/* 73bb86: mov edi, dword ptr [ebx + 0x350] */
  edi = R32((uint32_t)(ebx + 0x350u));
/* 73bb8c: mov byte ptr [ebx + 0x348], cl */
  W8((uint32_t)(ebx + 0x348u), (ecx & 0xffu));
/* 73bb92: mov edx, dword ptr [ebp + 0x34c] */
  edx = R32((uint32_t)(ebp + 0x34cu));
/* 73bb98: mov dword ptr [ebx + 0x34c], edx */
  W32((uint32_t)(ebx + 0x34cu), edx);
/* 73bb9e: xor eax, dword ptr [ebp + 0x350] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x350u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73bba4: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73bba7: xor edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 73bba9: mov dword ptr [ebx + 0x350], edi */
  W32((uint32_t)(ebx + 0x350u), edi);
/* 73bbaf: mov ecx, dword ptr [ebp + 0x350] */
  ecx = R32((uint32_t)(ebp + 0x350u));
/* 73bbb5: mov eax, edi */
  eax = edi;
/* 73bbb7: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73bbb9: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73bbbc: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73bbbe: mov dword ptr [ebx + 0x350], ecx */
  W32((uint32_t)(ebx + 0x350u), ecx);
/* 73bbc4: mov edx, dword ptr [ebp + 0x354] */
  edx = R32((uint32_t)(ebp + 0x354u));
/* 73bbca: mov dword ptr [ebx + 0x354], edx */
  W32((uint32_t)(ebx + 0x354u), edx);
/* 73bbd0: mov eax, dword ptr [ebp + 0x358] */
  eax = R32((uint32_t)(ebp + 0x358u));
/* 73bbd6: mov dword ptr [ebx + 0x358], eax */
  W32((uint32_t)(ebx + 0x358u), eax);
/* 73bbdc: mov ecx, dword ptr [ebp + 0x35c] */
  ecx = R32((uint32_t)(ebp + 0x35cu));
/* 73bbe2: mov dword ptr [ebx + 0x35c], ecx */
  W32((uint32_t)(ebx + 0x35cu), ecx);
/* 73bbe8: mov edx, dword ptr [ebp + 0x360] */
  edx = R32((uint32_t)(ebp + 0x360u));
/* 73bbee: mov dword ptr [ebx + 0x360], edx */
  W32((uint32_t)(ebx + 0x360u), edx);
/* 73bbf4: mov eax, dword ptr [ebp + 0x364] */
  eax = R32((uint32_t)(ebp + 0x364u));
/* 73bbfa: mov dword ptr [ebx + 0x364], eax */
  W32((uint32_t)(ebx + 0x364u), eax);
/* 73bc00: mov ecx, dword ptr [ebp + 0x368] */
  ecx = R32((uint32_t)(ebp + 0x368u));
/* 73bc06: mov dword ptr [ebx + 0x368], ecx */
  W32((uint32_t)(ebx + 0x368u), ecx);
/* 73bc0c: mov edx, dword ptr [ebp + 0x36c] */
  edx = R32((uint32_t)(ebp + 0x36cu));
/* 73bc12: mov ecx, dword ptr [ebx + 0x374] */
  ecx = R32((uint32_t)(ebx + 0x374u));
/* 73bc18: mov dword ptr [ebx + 0x36c], edx */
  W32((uint32_t)(ebx + 0x36cu), edx);
/* 73bc1e: mov eax, dword ptr [ebp + 0x370] */
  eax = R32((uint32_t)(ebp + 0x370u));
/* 73bc24: mov dword ptr [ebx + 0x370], eax */
  W32((uint32_t)(ebx + 0x370u), eax);
/* 73bc2a: mov esi, dword ptr [ebp + 0x374] */
  esi = R32((uint32_t)(ebp + 0x374u));
/* 73bc30: mov eax, dword ptr [ebx + 0x374] */
  eax = R32((uint32_t)(ebx + 0x374u));
/* 73bc36: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73bc38: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73bc3b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73bc3d: mov dword ptr [ebx + 0x374], eax */
  W32((uint32_t)(ebx + 0x374u), eax);
/* 73bc43: mov edx, dword ptr [ebp + 0x374] */
  edx = R32((uint32_t)(ebp + 0x374u));
/* 73bc49: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 73bc4b: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 73bc4e: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 73bc50: mov dword ptr [ebx + 0x374], edx */
  W32((uint32_t)(ebx + 0x374u), edx);
/* 73bc56: mov eax, dword ptr [ebp + 0x378] */
  eax = R32((uint32_t)(ebp + 0x378u));
/* 73bc5c: lea edx, [ebp + 0x37c] */
  edx = (uint32_t)(ebp + 0x37cu);
/* 73bc62: lea ecx, [ebx + 0x37c] */
  ecx = (uint32_t)(ebx + 0x37cu);
/* 73bc68: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73bc69: mov byte ptr [esp + 0x20], 1 */
  W8((uint32_t)(esp + 0x20u), 0x1u);
/* 73bc6e: mov dword ptr [ebx + 0x378], eax */
  W32((uint32_t)(ebx + 0x378u), eax);
/* 73bc74: call 0x6cbbae */
  esp -= 4; W32(esp, 0x73bc79u); SPILL(); f_6cbbae(); if (g_unwind) return; RELOAD();
/* 73bc79: lea eax, [ebp + 0x388] */
  eax = (uint32_t)(ebp + 0x388u);
/* 73bc7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73bc80: lea ecx, [ebx + 0x388] */
  ecx = (uint32_t)(ebx + 0x388u);
/* 73bc86: mov byte ptr [esp + 0x20], 2 */
  W8((uint32_t)(esp + 0x20u), 0x2u);
/* 73bc8b: call 0x6c640b */
  esp -= 4; W32(esp, 0x73bc90u); SPILL(); f_6c640b(); if (g_unwind) return; RELOAD();
/* 73bc90: lea esi, [ebp + 0x394] */
  esi = (uint32_t)(ebp + 0x394u);
/* 73bc96: lea edi, [ebx + 0x394] */
  edi = (uint32_t)(ebx + 0x394u);
/* 73bc9c: mov ecx, 0xd */
  ecx = 0xdu;
/* 73bca1: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 73bca3: lea esi, [ebp + 0x3c8] */
  esi = (uint32_t)(ebp + 0x3c8u);
/* 73bca9: lea edi, [ebx + 0x3c8] */
  edi = (uint32_t)(ebx + 0x3c8u);
/* 73bcaf: mov ecx, 0xd */
  ecx = 0xdu;
/* 73bcb4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 73bcb6: lea esi, [ebp + 0x3fc] */
  esi = (uint32_t)(ebp + 0x3fcu);
/* 73bcbc: lea edi, [ebx + 0x3fc] */
  edi = (uint32_t)(ebx + 0x3fcu);
/* 73bcc2: mov ecx, 6 */
  ecx = 0x6u;
/* 73bcc7: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 73bcc9: lea ecx, [ebp + 0x414] */
  ecx = (uint32_t)(ebp + 0x414u);
/* 73bccf: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 73bcd1: lea edx, [ebx + 0x414] */
  edx = (uint32_t)(ebx + 0x414u);
/* 73bcd7: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 73bcd9: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 73bcdc: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 73bcdf: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 73bce2: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 73bce5: mov esi, dword ptr [ebx + 0x444] */
  esi = R32((uint32_t)(ebx + 0x444u));
/* 73bceb: lea edx, [ebp + 0x420] */
  edx = (uint32_t)(ebp + 0x420u);
/* 73bcf1: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 73bcf3: lea eax, [ebx + 0x420] */
  eax = (uint32_t)(ebx + 0x420u);
/* 73bcf9: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 73bcfb: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 73bcfe: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 73bd01: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 73bd04: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 73bd07: lea eax, [ebp + 0x42c] */
  eax = (uint32_t)(ebp + 0x42cu);
/* 73bd0d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 73bd0f: lea ecx, [ebx + 0x42c] */
  ecx = (uint32_t)(ebx + 0x42cu);
/* 73bd15: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 73bd17: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 73bd1a: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 73bd1d: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 73bd20: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 73bd23: lea ecx, [ebp + 0x438] */
  ecx = (uint32_t)(ebp + 0x438u);
/* 73bd29: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 73bd2b: lea edx, [ebx + 0x438] */
  edx = (uint32_t)(ebx + 0x438u);
/* 73bd31: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 73bd33: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 73bd36: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 73bd39: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 73bd3c: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 73bd3f: mov edx, dword ptr [ebp + 0x444] */
  edx = R32((uint32_t)(ebp + 0x444u));
/* 73bd45: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 73bd49: xor edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 73bd4b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73bd4c: mov eax, esi */
  eax = esi;
/* 73bd4e: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 73bd51: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73bd53: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73bd54: mov dword ptr [ebx + 0x444], eax */
  W32((uint32_t)(ebx + 0x444u), eax);
/* 73bd5a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 73bd5b: mov eax, ebx */
  eax = ebx;
/* 73bd5d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73bd5e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73bd65: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73bd68: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73be00(void) {
  LOAD_REGS();
L_73be00: /* 73be00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73be01: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 73be02: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 73be06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73be07: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73be08: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 73be09: mov ebx, ecx */
  ebx = ecx;
/* 73be0b: call 0x6c5cef */
  esp -= 4; W32(esp, 0x73be10u); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 73be10: lea eax, [ebp + 0x33c] */
  eax = (uint32_t)(ebp + 0x33cu);
/* 73be16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73be17: lea ecx, [ebx + 0x33c] */
  ecx = (uint32_t)(ebx + 0x33cu);
/* 73be1d: call 0x6c82f6 */
  esp -= 4; W32(esp, 0x73be22u); SPILL(); f_6c82f6(); if (g_unwind) return; RELOAD();
/* 73be22: mov cl, byte ptr [ebp + 0x348] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x348u))) & 0xffu);
/* 73be28: mov eax, dword ptr [ebx + 0x350] */
  eax = R32((uint32_t)(ebx + 0x350u));
/* 73be2e: mov byte ptr [ebx + 0x348], cl */
  W8((uint32_t)(ebx + 0x348u), (ecx & 0xffu));
/* 73be34: mov edx, dword ptr [ebp + 0x34c] */
  edx = R32((uint32_t)(ebp + 0x34cu));
/* 73be3a: mov ecx, dword ptr [ebx + 0x350] */
  ecx = R32((uint32_t)(ebx + 0x350u));
/* 73be40: mov dword ptr [ebx + 0x34c], edx */
  W32((uint32_t)(ebx + 0x34cu), edx);
/* 73be46: xor eax, dword ptr [ebp + 0x350] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x350u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73be4c: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73be4f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73be51: mov dword ptr [ebx + 0x350], ecx */
  W32((uint32_t)(ebx + 0x350u), ecx);
/* 73be57: mov eax, ecx */
  eax = ecx;
/* 73be59: mov ecx, dword ptr [ebp + 0x350] */
  ecx = R32((uint32_t)(ebp + 0x350u));
/* 73be5f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73be61: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73be64: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73be66: mov dword ptr [ebx + 0x350], ecx */
  W32((uint32_t)(ebx + 0x350u), ecx);
/* 73be6c: mov edx, dword ptr [ebp + 0x354] */
  edx = R32((uint32_t)(ebp + 0x354u));
/* 73be72: mov dword ptr [ebx + 0x354], edx */
  W32((uint32_t)(ebx + 0x354u), edx);
/* 73be78: mov eax, dword ptr [ebp + 0x358] */
  eax = R32((uint32_t)(ebp + 0x358u));
/* 73be7e: mov dword ptr [ebx + 0x358], eax */
  W32((uint32_t)(ebx + 0x358u), eax);
/* 73be84: mov ecx, dword ptr [ebp + 0x35c] */
  ecx = R32((uint32_t)(ebp + 0x35cu));
/* 73be8a: mov dword ptr [ebx + 0x35c], ecx */
  W32((uint32_t)(ebx + 0x35cu), ecx);
/* 73be90: mov edx, dword ptr [ebp + 0x360] */
  edx = R32((uint32_t)(ebp + 0x360u));
/* 73be96: mov dword ptr [ebx + 0x360], edx */
  W32((uint32_t)(ebx + 0x360u), edx);
/* 73be9c: mov eax, dword ptr [ebp + 0x364] */
  eax = R32((uint32_t)(ebp + 0x364u));
/* 73bea2: mov dword ptr [ebx + 0x364], eax */
  W32((uint32_t)(ebx + 0x364u), eax);
/* 73bea8: mov ecx, dword ptr [ebp + 0x368] */
  ecx = R32((uint32_t)(ebp + 0x368u));
/* 73beae: mov dword ptr [ebx + 0x368], ecx */
  W32((uint32_t)(ebx + 0x368u), ecx);
/* 73beb4: mov edx, dword ptr [ebp + 0x36c] */
  edx = R32((uint32_t)(ebp + 0x36cu));
/* 73beba: mov ecx, dword ptr [ebx + 0x374] */
  ecx = R32((uint32_t)(ebx + 0x374u));
/* 73bec0: mov dword ptr [ebx + 0x36c], edx */
  W32((uint32_t)(ebx + 0x36cu), edx);
/* 73bec6: mov eax, dword ptr [ebp + 0x370] */
  eax = R32((uint32_t)(ebp + 0x370u));
/* 73becc: mov edx, dword ptr [ebx + 0x374] */
  edx = R32((uint32_t)(ebx + 0x374u));
/* 73bed2: mov dword ptr [ebx + 0x370], eax */
  W32((uint32_t)(ebx + 0x370u), eax);
/* 73bed8: xor ecx, dword ptr [ebp + 0x374] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x374u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73bede: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73bee1: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 73bee3: mov dword ptr [ebx + 0x374], edx */
  W32((uint32_t)(ebx + 0x374u), edx);
/* 73bee9: mov eax, edx */
  eax = edx;
/* 73beeb: mov edx, dword ptr [ebp + 0x374] */
  edx = R32((uint32_t)(ebp + 0x374u));
/* 73bef1: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 73bef3: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 73bef6: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 73bef8: lea ecx, [ebp + 0x37c] */
  ecx = (uint32_t)(ebp + 0x37cu);
/* 73befe: mov dword ptr [ebx + 0x374], edx */
  W32((uint32_t)(ebx + 0x374u), edx);
/* 73bf04: mov eax, dword ptr [ebp + 0x378] */
  eax = R32((uint32_t)(ebp + 0x378u));
/* 73bf0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73bf0b: lea ecx, [ebx + 0x37c] */
  ecx = (uint32_t)(ebx + 0x37cu);
/* 73bf11: mov dword ptr [ebx + 0x378], eax */
  W32((uint32_t)(ebx + 0x378u), eax);
/* 73bf17: call 0x6ca3a3 */
  esp -= 4; W32(esp, 0x73bf1cu); SPILL(); f_6ca3a3(); if (g_unwind) return; RELOAD();
/* 73bf1c: lea edx, [ebp + 0x388] */
  edx = (uint32_t)(ebp + 0x388u);
/* 73bf22: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73bf23: lea ecx, [ebx + 0x388] */
  ecx = (uint32_t)(ebx + 0x388u);
/* 73bf29: call 0x6c2fef */
  esp -= 4; W32(esp, 0x73bf2eu); SPILL(); f_6c2fef(); if (g_unwind) return; RELOAD();
/* 73bf2e: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 73bf31: mov edi, esp */
  edi = esp;
/* 73bf33: lea esi, [ebp + 0x394] */
  esi = (uint32_t)(ebp + 0x394u);
/* 73bf39: mov ecx, 0xd */
  ecx = 0xdu;
/* 73bf3e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 73bf40: lea ecx, [ebx + 0x394] */
  ecx = (uint32_t)(ebx + 0x394u);
/* 73bf46: call 0x6c7c66 */
  esp -= 4; W32(esp, 0x73bf4bu); SPILL(); f_6c7c66(); if (g_unwind) return; RELOAD();
/* 73bf4b: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 73bf4e: lea esi, [ebp + 0x3c8] */
  esi = (uint32_t)(ebp + 0x3c8u);
/* 73bf54: mov ecx, 0xd */
  ecx = 0xdu;
/* 73bf59: mov edi, esp */
  edi = esp;
/* 73bf5b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 73bf5d: lea ecx, [ebx + 0x3c8] */
  ecx = (uint32_t)(ebx + 0x3c8u);
/* 73bf63: call 0x6c7c66 */
  esp -= 4; W32(esp, 0x73bf68u); SPILL(); f_6c7c66(); if (g_unwind) return; RELOAD();
/* 73bf68: lea esi, [ebp + 0x3fc] */
  esi = (uint32_t)(ebp + 0x3fcu);
/* 73bf6e: lea edi, [ebx + 0x3fc] */
  edi = (uint32_t)(ebx + 0x3fcu);
/* 73bf74: lea eax, [ebp + 0x414] */
  eax = (uint32_t)(ebp + 0x414u);
/* 73bf7a: mov ecx, 6 */
  ecx = 0x6u;
/* 73bf7f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 73bf81: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 73bf83: lea ecx, [ebx + 0x414] */
  ecx = (uint32_t)(ebx + 0x414u);
/* 73bf89: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 73bf8b: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 73bf8e: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 73bf91: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 73bf94: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 73bf97: mov esi, dword ptr [ebx + 0x444] */
  esi = R32((uint32_t)(ebx + 0x444u));
/* 73bf9d: lea ecx, [ebp + 0x420] */
  ecx = (uint32_t)(ebp + 0x420u);
/* 73bfa3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 73bfa5: lea edx, [ebx + 0x420] */
  edx = (uint32_t)(ebx + 0x420u);
/* 73bfab: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 73bfad: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 73bfb0: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 73bfb3: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 73bfb6: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 73bfb9: lea edx, [ebp + 0x42c] */
  edx = (uint32_t)(ebp + 0x42cu);
/* 73bfbf: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 73bfc1: lea eax, [ebx + 0x42c] */
  eax = (uint32_t)(ebx + 0x42cu);
/* 73bfc7: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 73bfc9: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 73bfcc: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 73bfcf: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 73bfd2: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 73bfd5: lea eax, [ebp + 0x438] */
  eax = (uint32_t)(ebp + 0x438u);
/* 73bfdb: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 73bfdd: lea ecx, [ebx + 0x438] */
  ecx = (uint32_t)(ebx + 0x438u);
/* 73bfe3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 73bfe5: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 73bfe8: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 73bfeb: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 73bfee: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 73bff1: mov ecx, dword ptr [ebp + 0x444] */
  ecx = R32((uint32_t)(ebp + 0x444u));
/* 73bff7: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73bff9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73bffa: mov eax, esi */
  eax = esi;
/* 73bffc: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73bfff: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73c001: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73c002: mov dword ptr [ebx + 0x444], eax */
  W32((uint32_t)(ebx + 0x444u), eax);
/* 73c008: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 73c009: mov eax, ebx */
  eax = ebx;
/* 73c00b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73c00c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73c0a0(void) {
  LOAD_REGS();
L_73c0a0: /* 73c0a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73c0a1: mov esi, ecx */
  esi = ecx;
/* 73c0a3: call 0x6c15a5 */
  esp -= 4; W32(esp, 0x73c0a8u); SPILL(); f_6c15a5(); if (g_unwind) return; RELOAD();
/* 73c0a8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73c0ad: je 0x73c0be */
  if (zf) goto L_73c0be;
L_73c0af: /* 73c0af: push 0x448 */
  { uint32_t v = 0x448u; esp -= 4; W32(esp, v); }
/* 73c0b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73c0b5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73c0bbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73c0bb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73c0be: /* 73c0be: mov eax, esi */
  eax = esi;
/* 73c0c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73c0c1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73c0e0(void) {
  LOAD_REGS();
L_73c0e0: /* 73c0e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73c0e1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 73c0e5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73c0e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73c0e9: mov esi, ecx */
  esi = ecx;
/* 73c0eb: je 0x73c120 */
  if (zf) goto L_73c120;
L_73c0ed: /* 73c0ed: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 73c0f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73c0f1: push 0x6c15a5 */
  { uint32_t v = 0x6c15a5u; esp -= 4; W32(esp, v); }
/* 73c0f6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 73c0f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73c0fa: push 0x448 */
  { uint32_t v = 0x448u; esp -= 4; W32(esp, v); }
/* 73c0ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73c100: call 0x99ca3d */
  esp -= 4; W32(esp, 0x73c105u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 73c105: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73c108: je 0x73c118 */
  if (zf) goto L_73c118;
L_73c10a: /* 73c10a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 73c110: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 73c112: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 73c114: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73c115: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x73c118u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_73c118: /* 73c118: mov eax, edi */
  eax = edi;
/* 73c11a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73c11b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73c11c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73c11d: ret 4 */
  esp += 8; SPILL(); return;
L_73c120: /* 73c120: mov ecx, esi */
  ecx = esi;
/* 73c122: call 0x6c15a5 */
  esp -= 4; W32(esp, 0x73c127u); SPILL(); f_6c15a5(); if (g_unwind) return; RELOAD();
/* 73c127: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73c12a: je 0x73c13b */
  if (zf) goto L_73c13b;
L_73c12c: /* 73c12c: push 0x448 */
  { uint32_t v = 0x448u; esp -= 4; W32(esp, v); }
/* 73c131: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73c132: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73c138u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73c138: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73c13b: /* 73c13b: mov eax, esi */
  eax = esi;
/* 73c13d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73c13e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73c13f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73c170(void) {
  LOAD_REGS();
L_73c170: /* 73c170: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73c172: push 0x9c5e08 */
  { uint32_t v = 0x9c5e08u; esp -= 4; W32(esp, v); }
/* 73c177: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73c17d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73c17e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73c185: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73c186: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73c187: mov esi, ecx */
  esi = ecx;
/* 73c189: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73c18d: mov dword ptr [esi], 0x9fae90 */
  W32((uint32_t)(esi), 0x9fae90u);
/* 73c193: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 73c19b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x73c1a1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 73c1a1: mov ecx, esi */
  ecx = esi;
/* 73c1a3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 73c1ab: call 0x6c688e */
  esp -= 4; W32(esp, 0x73c1b0u); SPILL(); f_6c688e(); if (g_unwind) return; RELOAD();
/* 73c1b0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 73c1b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73c1b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73c1bc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73c1bf: ret  */
  esp += 4; SPILL(); return;
}

void f_73c1e0(void) {
  LOAD_REGS();
L_73c1e0: /* 73c1e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73c1e1: mov esi, ecx */
  esi = ecx;
/* 73c1e3: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x73c1e8u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 73c1e8: mov dword ptr [esi], 0x9fae90 */
  W32((uint32_t)(esi), 0x9fae90u);
/* 73c1ee: mov eax, esi */
  eax = esi;
/* 73c1f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73c1f1: ret  */
  esp += 4; SPILL(); return;
}

void f_73c210(void) {
  LOAD_REGS();
L_73c210: /* 73c210: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 73c214: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73c215: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73c216: mov esi, ecx */
  esi = ecx;
/* 73c218: call 0x6c1456 */
  esp -= 4; W32(esp, 0x73c21du); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 73c21d: mov dword ptr [esi], 0x9fae90 */
  W32((uint32_t)(esi), 0x9fae90u);
/* 73c223: mov eax, esi */
  eax = esi;
/* 73c225: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73c226: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73c240(void) {
  LOAD_REGS();
L_73c240: /* 73c240: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 73c244: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73c245: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73c246: mov esi, ecx */
  esi = ecx;
/* 73c248: call 0x6c5cef */
  esp -= 4; W32(esp, 0x73c24du); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 73c24d: mov eax, esi */
  eax = esi;
/* 73c24f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73c250: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73c270(void) {
  LOAD_REGS();
L_73c270: /* 73c270: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73c271: mov esi, ecx */
  esi = ecx;
/* 73c273: call 0x6c78b5 */
  esp -= 4; W32(esp, 0x73c278u); SPILL(); f_6c78b5(); if (g_unwind) return; RELOAD();
/* 73c278: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73c27d: je 0x73c28e */
  if (zf) goto L_73c28e;
L_73c27f: /* 73c27f: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 73c284: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73c285: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73c28bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73c28b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73c28e: /* 73c28e: mov eax, esi */
  eax = esi;
/* 73c290: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73c291: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73c2b0(void) {
  LOAD_REGS();
L_73c2b0: /* 73c2b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73c2b1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 73c2b5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73c2b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73c2b9: mov esi, ecx */
  esi = ecx;
/* 73c2bb: je 0x73c2f0 */
  if (zf) goto L_73c2f0;
L_73c2bd: /* 73c2bd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 73c2c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73c2c1: push 0x6c78b5 */
  { uint32_t v = 0x6c78b5u; esp -= 4; W32(esp, v); }
/* 73c2c6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 73c2c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73c2ca: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 73c2cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73c2d0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x73c2d5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 73c2d5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73c2d8: je 0x73c2e8 */
  if (zf) goto L_73c2e8;
L_73c2da: /* 73c2da: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 73c2e0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 73c2e2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 73c2e4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73c2e5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x73c2e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_73c2e8: /* 73c2e8: mov eax, edi */
  eax = edi;
/* 73c2ea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73c2eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73c2ec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73c2ed: ret 4 */
  esp += 8; SPILL(); return;
L_73c2f0: /* 73c2f0: mov ecx, esi */
  ecx = esi;
/* 73c2f2: call 0x6c78b5 */
  esp -= 4; W32(esp, 0x73c2f7u); SPILL(); f_6c78b5(); if (g_unwind) return; RELOAD();
/* 73c2f7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73c2fa: je 0x73c30b */
  if (zf) goto L_73c30b;
L_73c2fc: /* 73c2fc: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 73c301: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73c302: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73c308u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73c308: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73c30b: /* 73c30b: mov eax, esi */
  eax = esi;
/* 73c30d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73c30e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73c30f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73c340(void) {
  LOAD_REGS();
L_73c340: /* 73c340: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73c342: push 0x9c5e51 */
  { uint32_t v = 0x9c5e51u; esp -= 4; W32(esp, v); }
/* 73c347: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73c34d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73c34e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73c355: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73c356: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73c357: mov esi, ecx */
  esi = ecx;
/* 73c359: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73c35d: mov dword ptr [esi], 0x9fb070 */
  W32((uint32_t)(esi), 0x9fb070u);
/* 73c363: mov dword ptr [esp + 0x10], 2 */
  W32((uint32_t)(esp + 0x10u), 0x2u);
/* 73c36b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x73c371u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 73c371: mov eax, dword ptr [0xcfa304] */
  eax = R32((uint32_t)(0xcfa304u));
/* 73c376: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73c377: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 73c379: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 73c37b: lea ecx, [esi + 0x364] */
  ecx = (uint32_t)(esi + 0x364u);
/* 73c381: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73c382: mov byte ptr [esp + 0x20], 1 */
  W8((uint32_t)(esp + 0x20u), 0x1u);
/* 73c387: call 0x99ca3d */
  esp -= 4; W32(esp, 0x73c38cu); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 73c38c: lea ecx, [esi + 0x33c] */
  ecx = (uint32_t)(esi + 0x33cu);
/* 73c392: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 73c397: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73c39du); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73c39d: mov ecx, esi */
  ecx = esi;
/* 73c39f: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 73c3a7: call 0x6c78b5 */
  esp -= 4; W32(esp, 0x73c3acu); SPILL(); f_6c78b5(); if (g_unwind) return; RELOAD();
/* 73c3ac: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 73c3b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73c3b1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73c3b8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73c3bb: ret  */
  esp += 4; SPILL(); return;
}

void f_73c3e0(void) {
  LOAD_REGS();
L_73c3e0: /* 73c3e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73c3e2: push 0x9c5e87 */
  { uint32_t v = 0x9c5e87u; esp -= 4; W32(esp, v); }
/* 73c3e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73c3ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73c3ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73c3f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73c3f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73c3f7: mov esi, ecx */
  esi = ecx;
/* 73c3f9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73c3fd: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x73c402u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 73c402: lea ecx, [esi + 0x33c] */
  ecx = (uint32_t)(esi + 0x33cu);
/* 73c408: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 73c410: mov dword ptr [esi], 0x9fb070 */
  W32((uint32_t)(esi), 0x9fb070u);
/* 73c416: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73c41cu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73c41c: mov eax, dword ptr [0xcfa304] */
  eax = R32((uint32_t)(0xcfa304u));
/* 73c421: mov ecx, dword ptr [0xcfa300] */
  ecx = R32((uint32_t)(0xcfa300u));
/* 73c427: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73c428: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73c429: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 73c42b: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 73c42d: lea edx, [esi + 0x364] */
  edx = (uint32_t)(esi + 0x364u);
/* 73c433: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73c434: mov byte ptr [esp + 0x24], 1 */
  W8((uint32_t)(esp + 0x24u), 0x1u);
/* 73c439: call 0x99cafe */
  esp -= 4; W32(esp, 0x73c43eu); SPILL(); f_99cafe(); if (g_unwind) return; RELOAD();
/* 73c43e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 73c442: mov eax, esi */
  eax = esi;
/* 73c444: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73c445: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73c44c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73c44f: ret  */
  esp += 4; SPILL(); return;
}

void f_73c470(void) {
  LOAD_REGS();
L_73c470: /* 73c470: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73c472: push 0x9c5eb7 */
  { uint32_t v = 0x9c5eb7u; esp -= 4; W32(esp, v); }
/* 73c477: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73c47d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73c47e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73c485: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73c486: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73c487: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73c488: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 73c48c: mov esi, ecx */
  esi = ecx;
/* 73c48e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73c48f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 73c493: call 0x6c1456 */
  esp -= 4; W32(esp, 0x73c498u); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 73c498: lea eax, [edi + 0x33c] */
  eax = (uint32_t)(edi + 0x33cu);
/* 73c49e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73c49f: lea ecx, [esi + 0x33c] */
  ecx = (uint32_t)(esi + 0x33cu);
/* 73c4a5: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 73c4ad: mov dword ptr [esi], 0x9fb070 */
  W32((uint32_t)(esi), 0x9fb070u);
/* 73c4b3: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73c4b9u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73c4b9: mov ecx, dword ptr [edi + 0x348] */
  ecx = R32((uint32_t)(edi + 0x348u));
/* 73c4bf: mov dword ptr [esi + 0x348], ecx */
  W32((uint32_t)(esi + 0x348u), ecx);
/* 73c4c5: mov edx, dword ptr [edi + 0x34c] */
  edx = R32((uint32_t)(edi + 0x34cu));
/* 73c4cb: mov dword ptr [esi + 0x34c], edx */
  W32((uint32_t)(esi + 0x34cu), edx);
/* 73c4d1: mov eax, dword ptr [edi + 0x350] */
  eax = R32((uint32_t)(edi + 0x350u));
/* 73c4d7: mov dword ptr [esi + 0x350], eax */
  W32((uint32_t)(esi + 0x350u), eax);
/* 73c4dd: mov ecx, dword ptr [edi + 0x354] */
  ecx = R32((uint32_t)(edi + 0x354u));
/* 73c4e3: mov dword ptr [esi + 0x354], ecx */
  W32((uint32_t)(esi + 0x354u), ecx);
/* 73c4e9: mov edx, dword ptr [edi + 0x358] */
  edx = R32((uint32_t)(edi + 0x358u));
/* 73c4ef: mov dword ptr [esi + 0x358], edx */
  W32((uint32_t)(esi + 0x358u), edx);
/* 73c4f5: mov eax, dword ptr [edi + 0x35c] */
  eax = R32((uint32_t)(edi + 0x35cu));
/* 73c4fb: mov edx, dword ptr [0xcfa304] */
  edx = R32((uint32_t)(0xcfa304u));
/* 73c501: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73c502: mov dword ptr [esi + 0x35c], eax */
  W32((uint32_t)(esi + 0x35cu), eax);
/* 73c508: mov eax, dword ptr [0xcfa308] */
  eax = R32((uint32_t)(0xcfa308u));
/* 73c50d: mov ecx, dword ptr [edi + 0x360] */
  ecx = R32((uint32_t)(edi + 0x360u));
/* 73c513: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73c514: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 73c516: mov dword ptr [esi + 0x360], ecx */
  W32((uint32_t)(esi + 0x360u), ecx);
/* 73c51c: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 73c51e: lea ecx, [edi + 0x364] */
  ecx = (uint32_t)(edi + 0x364u);
/* 73c524: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73c525: lea edx, [esi + 0x364] */
  edx = (uint32_t)(esi + 0x364u);
/* 73c52b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73c52c: mov byte ptr [esp + 0x2c], 1 */
  W8((uint32_t)(esp + 0x2cu), 0x1u);
/* 73c531: call 0x99cb60 */
  esp -= 4; W32(esp, 0x73c536u); SPILL(); f_99cb60(); if (g_unwind) return; RELOAD();
/* 73c536: mov eax, dword ptr [edi + 0x394] */
  eax = R32((uint32_t)(edi + 0x394u));
/* 73c53c: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 73c540: mov dword ptr [esi + 0x394], eax */
  W32((uint32_t)(esi + 0x394u), eax);
/* 73c546: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73c547: mov eax, esi */
  eax = esi;
/* 73c549: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73c54a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73c551: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73c554: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73c5a0(void) {
  LOAD_REGS();
L_73c5a0: /* 73c5a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73c5a1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 73c5a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73c5a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73c5a4: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 73c5a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73c5a9: mov esi, ecx */
  esi = ecx;
/* 73c5ab: call 0x6c5cef */
  esp -= 4; W32(esp, 0x73c5b0u); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 73c5b0: lea eax, [edi + 0x33c] */
  eax = (uint32_t)(edi + 0x33cu);
/* 73c5b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73c5b7: lea ecx, [esi + 0x33c] */
  ecx = (uint32_t)(esi + 0x33cu);
/* 73c5bd: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x73c5c3u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 73c5c3: mov ecx, dword ptr [edi + 0x348] */
  ecx = R32((uint32_t)(edi + 0x348u));
/* 73c5c9: mov dword ptr [esi + 0x348], ecx */
  W32((uint32_t)(esi + 0x348u), ecx);
/* 73c5cf: mov edx, dword ptr [edi + 0x34c] */
  edx = R32((uint32_t)(edi + 0x34cu));
/* 73c5d5: mov dword ptr [esi + 0x34c], edx */
  W32((uint32_t)(esi + 0x34cu), edx);
/* 73c5db: mov eax, dword ptr [edi + 0x350] */
  eax = R32((uint32_t)(edi + 0x350u));
/* 73c5e1: mov dword ptr [esi + 0x350], eax */
  W32((uint32_t)(esi + 0x350u), eax);
/* 73c5e7: mov ecx, dword ptr [edi + 0x354] */
  ecx = R32((uint32_t)(edi + 0x354u));
/* 73c5ed: mov dword ptr [esi + 0x354], ecx */
  W32((uint32_t)(esi + 0x354u), ecx);
/* 73c5f3: mov edx, dword ptr [edi + 0x358] */
  edx = R32((uint32_t)(edi + 0x358u));
/* 73c5f9: mov dword ptr [esi + 0x358], edx */
  W32((uint32_t)(esi + 0x358u), edx);
/* 73c5ff: mov eax, dword ptr [edi + 0x35c] */
  eax = R32((uint32_t)(edi + 0x35cu));
/* 73c605: mov dword ptr [esi + 0x35c], eax */
  W32((uint32_t)(esi + 0x35cu), eax);
/* 73c60b: mov ecx, dword ptr [edi + 0x360] */
  ecx = R32((uint32_t)(edi + 0x360u));
/* 73c611: mov ebp, edi */
  ebp = edi;
/* 73c613: mov dword ptr [esi + 0x360], ecx */
  W32((uint32_t)(esi + 0x360u), ecx);
/* 73c619: lea ebx, [esi + 0x364] */
  ebx = (uint32_t)(esi + 0x364u);
/* 73c61f: sub ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 73c621: mov dword ptr [esp + 0x14], 4 */
  W32((uint32_t)(esp + 0x14u), 0x4u);
/* 73c629: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_73c630: /* 73c630: lea edx, [ebx + ebp] */
  edx = (uint32_t)(ebx + ebp);
/* 73c633: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73c634: mov ecx, ebx */
  ecx = ebx;
/* 73c636: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x73c63cu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 73c63c: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 73c640: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 73c643: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 73c644: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 73c648: jne 0x73c630 */
  if (!zf) goto L_73c630;
L_73c64a: /* 73c64a: mov eax, dword ptr [edi + 0x394] */
  eax = R32((uint32_t)(edi + 0x394u));
/* 73c650: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73c651: mov dword ptr [esi + 0x394], eax */
  W32((uint32_t)(esi + 0x394u), eax);
/* 73c657: mov eax, esi */
  eax = esi;
/* 73c659: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73c65a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 73c65b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73c65c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73c690(void) {
  LOAD_REGS();
L_73c690: /* 73c690: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73c691: mov esi, ecx */
  esi = ecx;
/* 73c693: call 0x6c6dcf */
  esp -= 4; W32(esp, 0x73c698u); SPILL(); f_6c6dcf(); if (g_unwind) return; RELOAD();
/* 73c698: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73c69d: je 0x73c6ae */
  if (zf) goto L_73c6ae;
L_73c69f: /* 73c69f: push 0x398 */
  { uint32_t v = 0x398u; esp -= 4; W32(esp, v); }
/* 73c6a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73c6a5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73c6abu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73c6ab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73c6ae: /* 73c6ae: mov eax, esi */
  eax = esi;
/* 73c6b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73c6b1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73c6d0(void) {
  LOAD_REGS();
L_73c6d0: /* 73c6d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73c6d1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 73c6d5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73c6d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73c6d9: mov esi, ecx */
  esi = ecx;
/* 73c6db: je 0x73c710 */
  if (zf) goto L_73c710;
L_73c6dd: /* 73c6dd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 73c6e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73c6e1: push 0x6c6dcf */
  { uint32_t v = 0x6c6dcfu; esp -= 4; W32(esp, v); }
/* 73c6e6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 73c6e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73c6ea: push 0x398 */
  { uint32_t v = 0x398u; esp -= 4; W32(esp, v); }
/* 73c6ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73c6f0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x73c6f5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 73c6f5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73c6f8: je 0x73c708 */
  if (zf) goto L_73c708;
L_73c6fa: /* 73c6fa: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 73c700: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 73c702: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 73c704: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73c705: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x73c708u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_73c708: /* 73c708: mov eax, edi */
  eax = edi;
/* 73c70a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73c70b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73c70c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73c70d: ret 4 */
  esp += 8; SPILL(); return;
L_73c710: /* 73c710: mov ecx, esi */
  ecx = esi;
/* 73c712: call 0x6c6dcf */
  esp -= 4; W32(esp, 0x73c717u); SPILL(); f_6c6dcf(); if (g_unwind) return; RELOAD();
/* 73c717: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73c71a: je 0x73c72b */
  if (zf) goto L_73c72b;
L_73c71c: /* 73c71c: push 0x398 */
  { uint32_t v = 0x398u; esp -= 4; W32(esp, v); }
/* 73c721: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73c722: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73c728u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73c728: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73c72b: /* 73c72b: mov eax, esi */
  eax = esi;
/* 73c72d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73c72e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73c72f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73c760(void) {
  LOAD_REGS();
L_73c760: /* 73c760: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73c762: push 0x9c5f8a */
  { uint32_t v = 0x9c5f8au; esp -= 4; W32(esp, v); }
/* 73c767: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73c76d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73c76e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73c775: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73c776: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73c777: mov esi, ecx */
  esi = ecx;
/* 73c779: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73c77d: mov dword ptr [esi], 0x9fb250 */
  W32((uint32_t)(esi), 0x9fb250u);
/* 73c783: mov dword ptr [esp + 0x10], 0xc */
  W32((uint32_t)(esp + 0x10u), 0xcu);
/* 73c78b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x73c791u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 73c791: lea ecx, [esi + 0x3fc] */
  ecx = (uint32_t)(esi + 0x3fcu);
/* 73c797: mov byte ptr [esp + 0x10], 0xb */
  W8((uint32_t)(esp + 0x10u), 0xbu);
/* 73c79c: call 0x6c5899 */
  esp -= 4; W32(esp, 0x73c7a1u); SPILL(); f_6c5899(); if (g_unwind) return; RELOAD();
/* 73c7a1: lea ecx, [esi + 0x3f0] */
  ecx = (uint32_t)(esi + 0x3f0u);
/* 73c7a7: mov byte ptr [esp + 0x10], 0xa */
  W8((uint32_t)(esp + 0x10u), 0xau);
/* 73c7ac: call 0x6c5899 */
  esp -= 4; W32(esp, 0x73c7b1u); SPILL(); f_6c5899(); if (g_unwind) return; RELOAD();
/* 73c7b1: lea ecx, [esi + 0x3e0] */
  ecx = (uint32_t)(esi + 0x3e0u);
/* 73c7b7: mov byte ptr [esp + 0x10], 9 */
  W8((uint32_t)(esp + 0x10u), 0x9u);
/* 73c7bc: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73c7c2u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73c7c2: lea ecx, [esi + 0x3d4] */
  ecx = (uint32_t)(esi + 0x3d4u);
/* 73c7c8: mov byte ptr [esp + 0x10], 8 */
  W8((uint32_t)(esp + 0x10u), 0x8u);
/* 73c7cd: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73c7d3u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73c7d3: lea ecx, [esi + 0x3c8] */
  ecx = (uint32_t)(esi + 0x3c8u);
/* 73c7d9: mov byte ptr [esp + 0x10], 7 */
  W8((uint32_t)(esp + 0x10u), 0x7u);
/* 73c7de: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73c7e4u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73c7e4: lea ecx, [esi + 0x3bc] */
  ecx = (uint32_t)(esi + 0x3bcu);
/* 73c7ea: mov byte ptr [esp + 0x10], 6 */
  W8((uint32_t)(esp + 0x10u), 0x6u);
/* 73c7ef: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73c7f5u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73c7f5: lea ecx, [esi + 0x3ac] */
  ecx = (uint32_t)(esi + 0x3acu);
/* 73c7fb: mov byte ptr [esp + 0x10], 5 */
  W8((uint32_t)(esp + 0x10u), 0x5u);
/* 73c800: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73c806u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73c806: lea ecx, [esi + 0x3a0] */
  ecx = (uint32_t)(esi + 0x3a0u);
/* 73c80c: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* 73c811: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73c817u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73c817: lea ecx, [esi + 0x394] */
  ecx = (uint32_t)(esi + 0x394u);
/* 73c81d: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 73c822: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73c828u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73c828: lea ecx, [esi + 0x388] */
  ecx = (uint32_t)(esi + 0x388u);
/* 73c82e: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 73c833: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73c839u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73c839: lea ecx, [esi + 0x348] */
  ecx = (uint32_t)(esi + 0x348u);
/* 73c83f: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 73c844: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73c84au); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73c84a: lea ecx, [esi + 0x33c] */
  ecx = (uint32_t)(esi + 0x33cu);
/* 73c850: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 73c855: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73c85bu); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73c85b: mov ecx, esi */
  ecx = esi;
/* 73c85d: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 73c865: call 0x6c78b5 */
  esp -= 4; W32(esp, 0x73c86au); SPILL(); f_6c78b5(); if (g_unwind) return; RELOAD();
/* 73c86a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 73c86e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73c86f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73c876: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73c879: ret  */
  esp += 4; SPILL(); return;
}

void f_73c8d0(void) {
  LOAD_REGS();
L_73c8d0: /* 73c8d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73c8d2: push 0x9c607c */
  { uint32_t v = 0x9c607cu; esp -= 4; W32(esp, v); }
/* 73c8d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73c8dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73c8de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73c8e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73c8e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73c8e7: mov esi, ecx */
  esi = ecx;
/* 73c8e9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73c8ed: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x73c8f2u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 73c8f2: lea ecx, [esi + 0x33c] */
  ecx = (uint32_t)(esi + 0x33cu);
/* 73c8f8: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 73c900: mov dword ptr [esi], 0x9fb250 */
  W32((uint32_t)(esi), 0x9fb250u);
/* 73c906: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73c90cu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73c90c: lea ecx, [esi + 0x348] */
  ecx = (uint32_t)(esi + 0x348u);
/* 73c912: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 73c917: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73c91du); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73c91d: lea ecx, [esi + 0x388] */
  ecx = (uint32_t)(esi + 0x388u);
/* 73c923: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 73c928: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73c92eu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73c92e: lea ecx, [esi + 0x394] */
  ecx = (uint32_t)(esi + 0x394u);
/* 73c934: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 73c939: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73c93fu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73c93f: lea ecx, [esi + 0x3a0] */
  ecx = (uint32_t)(esi + 0x3a0u);
/* 73c945: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* 73c94a: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73c950u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73c950: lea ecx, [esi + 0x3ac] */
  ecx = (uint32_t)(esi + 0x3acu);
/* 73c956: mov byte ptr [esp + 0x10], 5 */
  W8((uint32_t)(esp + 0x10u), 0x5u);
/* 73c95b: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73c961u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73c961: lea ecx, [esi + 0x3bc] */
  ecx = (uint32_t)(esi + 0x3bcu);
/* 73c967: mov byte ptr [esp + 0x10], 6 */
  W8((uint32_t)(esp + 0x10u), 0x6u);
/* 73c96c: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73c972u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73c972: lea ecx, [esi + 0x3c8] */
  ecx = (uint32_t)(esi + 0x3c8u);
/* 73c978: mov byte ptr [esp + 0x10], 7 */
  W8((uint32_t)(esp + 0x10u), 0x7u);
/* 73c97d: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73c983u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73c983: lea ecx, [esi + 0x3d4] */
  ecx = (uint32_t)(esi + 0x3d4u);
/* 73c989: mov byte ptr [esp + 0x10], 8 */
  W8((uint32_t)(esp + 0x10u), 0x8u);
/* 73c98e: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73c994u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73c994: lea ecx, [esi + 0x3e0] */
  ecx = (uint32_t)(esi + 0x3e0u);
/* 73c99a: mov byte ptr [esp + 0x10], 9 */
  W8((uint32_t)(esp + 0x10u), 0x9u);
/* 73c99f: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73c9a5u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73c9a5: lea ecx, [esi + 0x3f0] */
  ecx = (uint32_t)(esi + 0x3f0u);
/* 73c9ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 73c9ad: mov byte ptr [esp + 0x14], 0xa */
  W8((uint32_t)(esp + 0x14u), 0xau);
/* 73c9b2: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x73c9b8u); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 73c9b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 73c9ba: lea ecx, [esi + 0x3fc] */
  ecx = (uint32_t)(esi + 0x3fcu);
/* 73c9c0: mov byte ptr [esp + 0x14], 0xb */
  W8((uint32_t)(esp + 0x14u), 0xbu);
/* 73c9c5: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x73c9cbu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 73c9cb: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 73c9cf: mov eax, esi */
  eax = esi;
/* 73c9d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73c9d2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73c9d9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73c9dc: ret  */
  esp += 4; SPILL(); return;
}

void f_73ca30(void) {
  LOAD_REGS();
L_73ca30: /* 73ca30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73ca32: push 0x9c616c */
  { uint32_t v = 0x9c616cu; esp -= 4; W32(esp, v); }
/* 73ca37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73ca3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73ca3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73ca45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73ca46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73ca47: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73ca48: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 73ca4c: mov esi, ecx */
  esi = ecx;
/* 73ca4e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73ca4f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 73ca53: call 0x6c1456 */
  esp -= 4; W32(esp, 0x73ca58u); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 73ca58: lea eax, [edi + 0x33c] */
  eax = (uint32_t)(edi + 0x33cu);
/* 73ca5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73ca5f: lea ecx, [esi + 0x33c] */
  ecx = (uint32_t)(esi + 0x33cu);
/* 73ca65: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 73ca6d: mov dword ptr [esi], 0x9fb250 */
  W32((uint32_t)(esi), 0x9fb250u);
/* 73ca73: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73ca79u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73ca79: lea ecx, [edi + 0x348] */
  ecx = (uint32_t)(edi + 0x348u);
/* 73ca7f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73ca80: lea ecx, [esi + 0x348] */
  ecx = (uint32_t)(esi + 0x348u);
/* 73ca86: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 73ca8b: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73ca91u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73ca91: mov eax, dword ptr [edi + 0x354] */
  eax = R32((uint32_t)(edi + 0x354u));
/* 73ca97: mov edx, dword ptr [esi + 0x354] */
  edx = R32((uint32_t)(esi + 0x354u));
/* 73ca9d: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 73ca9f: mov eax, dword ptr [esi + 0x354] */
  eax = R32((uint32_t)(esi + 0x354u));
/* 73caa5: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 73caa8: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73caaa: mov dword ptr [esi + 0x354], eax */
  W32((uint32_t)(esi + 0x354u), eax);
/* 73cab0: mov ecx, eax */
  ecx = eax;
/* 73cab2: mov eax, dword ptr [edi + 0x354] */
  eax = R32((uint32_t)(edi + 0x354u));
/* 73cab8: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73caba: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73cabd: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73cabf: mov dword ptr [esi + 0x354], eax */
  W32((uint32_t)(esi + 0x354u), eax);
/* 73cac5: mov ecx, dword ptr [edi + 0x354] */
  ecx = R32((uint32_t)(edi + 0x354u));
/* 73cacb: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73cacd: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73cad0: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73cad2: mov dword ptr [esi + 0x354], ecx */
  W32((uint32_t)(esi + 0x354u), ecx);
/* 73cad8: mov eax, dword ptr [edi + 0x354] */
  eax = R32((uint32_t)(edi + 0x354u));
/* 73cade: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73cae0: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73cae3: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73cae5: mov dword ptr [esi + 0x354], eax */
  W32((uint32_t)(esi + 0x354u), eax);
/* 73caeb: mov ecx, dword ptr [edi + 0x354] */
  ecx = R32((uint32_t)(edi + 0x354u));
/* 73caf1: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73caf3: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73caf6: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73caf8: mov dword ptr [esi + 0x354], ecx */
  W32((uint32_t)(esi + 0x354u), ecx);
/* 73cafe: mov edx, dword ptr [edi + 0x358] */
  edx = R32((uint32_t)(edi + 0x358u));
/* 73cb04: mov dword ptr [esi + 0x358], edx */
  W32((uint32_t)(esi + 0x358u), edx);
/* 73cb0a: mov eax, dword ptr [edi + 0x35c] */
  eax = R32((uint32_t)(edi + 0x35cu));
/* 73cb10: mov dword ptr [esi + 0x35c], eax */
  W32((uint32_t)(esi + 0x35cu), eax);
/* 73cb16: mov ecx, dword ptr [edi + 0x360] */
  ecx = R32((uint32_t)(edi + 0x360u));
/* 73cb1c: mov dword ptr [esi + 0x360], ecx */
  W32((uint32_t)(esi + 0x360u), ecx);
/* 73cb22: mov edx, dword ptr [edi + 0x364] */
  edx = R32((uint32_t)(edi + 0x364u));
/* 73cb28: mov dword ptr [esi + 0x364], edx */
  W32((uint32_t)(esi + 0x364u), edx);
/* 73cb2e: mov eax, dword ptr [edi + 0x368] */
  eax = R32((uint32_t)(edi + 0x368u));
/* 73cb34: mov dword ptr [esi + 0x368], eax */
  W32((uint32_t)(esi + 0x368u), eax);
/* 73cb3a: mov ecx, dword ptr [edi + 0x36c] */
  ecx = R32((uint32_t)(edi + 0x36cu));
/* 73cb40: mov dword ptr [esi + 0x36c], ecx */
  W32((uint32_t)(esi + 0x36cu), ecx);
/* 73cb46: mov edx, dword ptr [edi + 0x370] */
  edx = R32((uint32_t)(edi + 0x370u));
/* 73cb4c: mov dword ptr [esi + 0x370], edx */
  W32((uint32_t)(esi + 0x370u), edx);
/* 73cb52: mov eax, dword ptr [edi + 0x374] */
  eax = R32((uint32_t)(edi + 0x374u));
/* 73cb58: mov dword ptr [esi + 0x374], eax */
  W32((uint32_t)(esi + 0x374u), eax);
/* 73cb5e: mov ecx, dword ptr [edi + 0x378] */
  ecx = R32((uint32_t)(edi + 0x378u));
/* 73cb64: mov dword ptr [esi + 0x378], ecx */
  W32((uint32_t)(esi + 0x378u), ecx);
/* 73cb6a: mov edx, dword ptr [edi + 0x37c] */
  edx = R32((uint32_t)(edi + 0x37cu));
/* 73cb70: mov ecx, dword ptr [esi + 0x37c] */
  ecx = R32((uint32_t)(esi + 0x37cu));
/* 73cb76: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 73cb78: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 73cb7b: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73cb7d: mov dword ptr [esi + 0x37c], ecx */
  W32((uint32_t)(esi + 0x37cu), ecx);
/* 73cb83: mov eax, dword ptr [edi + 0x380] */
  eax = R32((uint32_t)(edi + 0x380u));
/* 73cb89: mov dword ptr [esi + 0x380], eax */
  W32((uint32_t)(esi + 0x380u), eax);
/* 73cb8f: mov ecx, dword ptr [edi + 0x384] */
  ecx = R32((uint32_t)(edi + 0x384u));
/* 73cb95: lea edx, [edi + 0x388] */
  edx = (uint32_t)(edi + 0x388u);
/* 73cb9b: mov dword ptr [esi + 0x384], ecx */
  W32((uint32_t)(esi + 0x384u), ecx);
/* 73cba1: mov byte ptr [esp + 0x14], 2 */
  W8((uint32_t)(esp + 0x14u), 0x2u);
/* 73cba6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73cba7: lea ecx, [esi + 0x388] */
  ecx = (uint32_t)(esi + 0x388u);
/* 73cbad: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73cbb3u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73cbb3: lea eax, [edi + 0x394] */
  eax = (uint32_t)(edi + 0x394u);
/* 73cbb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73cbba: lea ecx, [esi + 0x394] */
  ecx = (uint32_t)(esi + 0x394u);
/* 73cbc0: mov byte ptr [esp + 0x18], 3 */
  W8((uint32_t)(esp + 0x18u), 0x3u);
/* 73cbc5: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73cbcbu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73cbcb: lea ecx, [edi + 0x3a0] */
  ecx = (uint32_t)(edi + 0x3a0u);
/* 73cbd1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73cbd2: lea ecx, [esi + 0x3a0] */
  ecx = (uint32_t)(esi + 0x3a0u);
/* 73cbd8: mov byte ptr [esp + 0x18], 4 */
  W8((uint32_t)(esp + 0x18u), 0x4u);
/* 73cbdd: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73cbe3u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73cbe3: lea edx, [edi + 0x3ac] */
  edx = (uint32_t)(edi + 0x3acu);
/* 73cbe9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73cbea: lea ecx, [esi + 0x3ac] */
  ecx = (uint32_t)(esi + 0x3acu);
/* 73cbf0: mov byte ptr [esp + 0x18], 5 */
  W8((uint32_t)(esp + 0x18u), 0x5u);
/* 73cbf5: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73cbfbu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73cbfb: mov eax, dword ptr [edi + 0x3b8] */
  eax = R32((uint32_t)(edi + 0x3b8u));
/* 73cc01: lea ecx, [edi + 0x3bc] */
  ecx = (uint32_t)(edi + 0x3bcu);
/* 73cc07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73cc08: lea ecx, [esi + 0x3bc] */
  ecx = (uint32_t)(esi + 0x3bcu);
/* 73cc0e: mov byte ptr [esp + 0x18], 6 */
  W8((uint32_t)(esp + 0x18u), 0x6u);
/* 73cc13: mov dword ptr [esi + 0x3b8], eax */
  W32((uint32_t)(esi + 0x3b8u), eax);
/* 73cc19: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73cc1fu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73cc1f: lea edx, [edi + 0x3c8] */
  edx = (uint32_t)(edi + 0x3c8u);
/* 73cc25: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73cc26: lea ecx, [esi + 0x3c8] */
  ecx = (uint32_t)(esi + 0x3c8u);
/* 73cc2c: mov byte ptr [esp + 0x18], 7 */
  W8((uint32_t)(esp + 0x18u), 0x7u);
/* 73cc31: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73cc37u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73cc37: lea eax, [edi + 0x3d4] */
  eax = (uint32_t)(edi + 0x3d4u);
/* 73cc3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73cc3e: lea ecx, [esi + 0x3d4] */
  ecx = (uint32_t)(esi + 0x3d4u);
/* 73cc44: mov byte ptr [esp + 0x18], 8 */
  W8((uint32_t)(esp + 0x18u), 0x8u);
/* 73cc49: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73cc4fu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73cc4f: lea ecx, [edi + 0x3e0] */
  ecx = (uint32_t)(edi + 0x3e0u);
/* 73cc55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73cc56: lea ecx, [esi + 0x3e0] */
  ecx = (uint32_t)(esi + 0x3e0u);
/* 73cc5c: mov byte ptr [esp + 0x18], 9 */
  W8((uint32_t)(esp + 0x18u), 0x9u);
/* 73cc61: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73cc67u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73cc67: mov edx, dword ptr [edi + 0x3ec] */
  edx = R32((uint32_t)(edi + 0x3ecu));
/* 73cc6d: lea eax, [edi + 0x3f0] */
  eax = (uint32_t)(edi + 0x3f0u);
/* 73cc73: lea ecx, [esi + 0x3f0] */
  ecx = (uint32_t)(esi + 0x3f0u);
/* 73cc79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73cc7a: mov byte ptr [esp + 0x18], 0xa */
  W8((uint32_t)(esp + 0x18u), 0xau);
/* 73cc7f: mov dword ptr [esi + 0x3ec], edx */
  W32((uint32_t)(esi + 0x3ecu), edx);
/* 73cc85: call 0x6cb2ee */
  esp -= 4; W32(esp, 0x73cc8au); SPILL(); f_6cb2ee(); if (g_unwind) return; RELOAD();
/* 73cc8a: lea ecx, [edi + 0x3fc] */
  ecx = (uint32_t)(edi + 0x3fcu);
/* 73cc90: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73cc91: lea ecx, [esi + 0x3fc] */
  ecx = (uint32_t)(esi + 0x3fcu);
/* 73cc97: mov byte ptr [esp + 0x18], 0xb */
  W8((uint32_t)(esp + 0x18u), 0xbu);
/* 73cc9c: call 0x6cb2ee */
  esp -= 4; W32(esp, 0x73cca1u); SPILL(); f_6cb2ee(); if (g_unwind) return; RELOAD();
/* 73cca1: lea edx, [edi + 0x408] */
  edx = (uint32_t)(edi + 0x408u);
/* 73cca7: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 73cca9: lea eax, [esi + 0x408] */
  eax = (uint32_t)(esi + 0x408u);
/* 73ccaf: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 73ccb1: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 73ccb4: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 73ccb7: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 73ccba: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 73ccbd: mov ax, word ptr [edi + 0x414] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0x414u))) & 0xffffu);
/* 73ccc4: mov word ptr [esi + 0x414], ax */
  W16((uint32_t)(esi + 0x414u), (eax & 0xffffu));
/* 73cccb: mov ecx, dword ptr [edi + 0x418] */
  ecx = R32((uint32_t)(edi + 0x418u));
/* 73ccd1: mov dword ptr [esi + 0x418], ecx */
  W32((uint32_t)(esi + 0x418u), ecx);
/* 73ccd7: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 73ccdb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73ccdc: mov eax, esi */
  eax = esi;
/* 73ccde: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73ccdf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73cce6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73cce9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73cda0(void) {
  LOAD_REGS();
L_73cda0: /* 73cda0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73cda1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73cda2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 73cda6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73cda7: mov esi, ecx */
  esi = ecx;
/* 73cda9: call 0x6c5cef */
  esp -= 4; W32(esp, 0x73cdaeu); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 73cdae: lea eax, [edi + 0x33c] */
  eax = (uint32_t)(edi + 0x33cu);
/* 73cdb4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73cdb5: lea ecx, [esi + 0x33c] */
  ecx = (uint32_t)(esi + 0x33cu);
/* 73cdbb: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x73cdc1u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 73cdc1: lea ecx, [edi + 0x348] */
  ecx = (uint32_t)(edi + 0x348u);
/* 73cdc7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73cdc8: lea ecx, [esi + 0x348] */
  ecx = (uint32_t)(esi + 0x348u);
/* 73cdce: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x73cdd4u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 73cdd4: mov eax, dword ptr [edi + 0x354] */
  eax = R32((uint32_t)(edi + 0x354u));
/* 73cdda: mov edx, dword ptr [esi + 0x354] */
  edx = R32((uint32_t)(esi + 0x354u));
/* 73cde0: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 73cde2: mov eax, dword ptr [esi + 0x354] */
  eax = R32((uint32_t)(esi + 0x354u));
/* 73cde8: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 73cdeb: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73cded: mov dword ptr [esi + 0x354], eax */
  W32((uint32_t)(esi + 0x354u), eax);
/* 73cdf3: mov ecx, eax */
  ecx = eax;
/* 73cdf5: mov eax, dword ptr [edi + 0x354] */
  eax = R32((uint32_t)(edi + 0x354u));
/* 73cdfb: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73cdfd: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73ce00: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73ce02: mov dword ptr [esi + 0x354], eax */
  W32((uint32_t)(esi + 0x354u), eax);
/* 73ce08: mov ecx, dword ptr [edi + 0x354] */
  ecx = R32((uint32_t)(edi + 0x354u));
/* 73ce0e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73ce10: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73ce13: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73ce15: mov dword ptr [esi + 0x354], ecx */
  W32((uint32_t)(esi + 0x354u), ecx);
/* 73ce1b: mov eax, dword ptr [edi + 0x354] */
  eax = R32((uint32_t)(edi + 0x354u));
/* 73ce21: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73ce23: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73ce26: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73ce28: mov dword ptr [esi + 0x354], eax */
  W32((uint32_t)(esi + 0x354u), eax);
/* 73ce2e: mov ecx, dword ptr [edi + 0x354] */
  ecx = R32((uint32_t)(edi + 0x354u));
/* 73ce34: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73ce36: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73ce39: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73ce3b: mov dword ptr [esi + 0x354], ecx */
  W32((uint32_t)(esi + 0x354u), ecx);
/* 73ce41: mov edx, dword ptr [edi + 0x358] */
  edx = R32((uint32_t)(edi + 0x358u));
/* 73ce47: mov dword ptr [esi + 0x358], edx */
  W32((uint32_t)(esi + 0x358u), edx);
/* 73ce4d: mov eax, dword ptr [edi + 0x35c] */
  eax = R32((uint32_t)(edi + 0x35cu));
/* 73ce53: mov dword ptr [esi + 0x35c], eax */
  W32((uint32_t)(esi + 0x35cu), eax);
/* 73ce59: mov ecx, dword ptr [edi + 0x360] */
  ecx = R32((uint32_t)(edi + 0x360u));
/* 73ce5f: mov dword ptr [esi + 0x360], ecx */
  W32((uint32_t)(esi + 0x360u), ecx);
/* 73ce65: mov edx, dword ptr [edi + 0x364] */
  edx = R32((uint32_t)(edi + 0x364u));
/* 73ce6b: mov dword ptr [esi + 0x364], edx */
  W32((uint32_t)(esi + 0x364u), edx);
/* 73ce71: mov eax, dword ptr [edi + 0x368] */
  eax = R32((uint32_t)(edi + 0x368u));
/* 73ce77: mov dword ptr [esi + 0x368], eax */
  W32((uint32_t)(esi + 0x368u), eax);
/* 73ce7d: mov ecx, dword ptr [edi + 0x36c] */
  ecx = R32((uint32_t)(edi + 0x36cu));
/* 73ce83: mov dword ptr [esi + 0x36c], ecx */
  W32((uint32_t)(esi + 0x36cu), ecx);
/* 73ce89: mov edx, dword ptr [edi + 0x370] */
  edx = R32((uint32_t)(edi + 0x370u));
/* 73ce8f: mov dword ptr [esi + 0x370], edx */
  W32((uint32_t)(esi + 0x370u), edx);
/* 73ce95: mov eax, dword ptr [edi + 0x374] */
  eax = R32((uint32_t)(edi + 0x374u));
/* 73ce9b: mov dword ptr [esi + 0x374], eax */
  W32((uint32_t)(esi + 0x374u), eax);
/* 73cea1: mov ecx, dword ptr [edi + 0x378] */
  ecx = R32((uint32_t)(edi + 0x378u));
/* 73cea7: mov dword ptr [esi + 0x378], ecx */
  W32((uint32_t)(esi + 0x378u), ecx);
/* 73cead: mov ecx, dword ptr [esi + 0x37c] */
  ecx = R32((uint32_t)(esi + 0x37cu));
/* 73ceb3: mov edx, dword ptr [edi + 0x37c] */
  edx = R32((uint32_t)(edi + 0x37cu));
/* 73ceb9: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 73cebb: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 73cebe: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73cec0: mov dword ptr [esi + 0x37c], ecx */
  W32((uint32_t)(esi + 0x37cu), ecx);
/* 73cec6: mov eax, dword ptr [edi + 0x380] */
  eax = R32((uint32_t)(edi + 0x380u));
/* 73cecc: mov dword ptr [esi + 0x380], eax */
  W32((uint32_t)(esi + 0x380u), eax);
/* 73ced2: mov ecx, dword ptr [edi + 0x384] */
  ecx = R32((uint32_t)(edi + 0x384u));
/* 73ced8: lea edx, [edi + 0x388] */
  edx = (uint32_t)(edi + 0x388u);
/* 73cede: mov dword ptr [esi + 0x384], ecx */
  W32((uint32_t)(esi + 0x384u), ecx);
/* 73cee4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73cee5: lea ecx, [esi + 0x388] */
  ecx = (uint32_t)(esi + 0x388u);
/* 73ceeb: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x73cef1u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 73cef1: lea eax, [edi + 0x394] */
  eax = (uint32_t)(edi + 0x394u);
/* 73cef7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73cef8: lea ecx, [esi + 0x394] */
  ecx = (uint32_t)(esi + 0x394u);
/* 73cefe: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x73cf04u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 73cf04: lea ecx, [edi + 0x3a0] */
  ecx = (uint32_t)(edi + 0x3a0u);
/* 73cf0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73cf0b: lea ecx, [esi + 0x3a0] */
  ecx = (uint32_t)(esi + 0x3a0u);
/* 73cf11: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x73cf17u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 73cf17: lea edx, [edi + 0x3ac] */
  edx = (uint32_t)(edi + 0x3acu);
/* 73cf1d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73cf1e: lea ecx, [esi + 0x3ac] */
  ecx = (uint32_t)(esi + 0x3acu);
/* 73cf24: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x73cf2au); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 73cf2a: mov eax, dword ptr [edi + 0x3b8] */
  eax = R32((uint32_t)(edi + 0x3b8u));
/* 73cf30: lea ecx, [edi + 0x3bc] */
  ecx = (uint32_t)(edi + 0x3bcu);
/* 73cf36: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73cf37: lea ecx, [esi + 0x3bc] */
  ecx = (uint32_t)(esi + 0x3bcu);
/* 73cf3d: mov dword ptr [esi + 0x3b8], eax */
  W32((uint32_t)(esi + 0x3b8u), eax);
/* 73cf43: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x73cf49u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 73cf49: lea edx, [edi + 0x3c8] */
  edx = (uint32_t)(edi + 0x3c8u);
/* 73cf4f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73cf50: lea ecx, [esi + 0x3c8] */
  ecx = (uint32_t)(esi + 0x3c8u);
/* 73cf56: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x73cf5cu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 73cf5c: lea eax, [edi + 0x3d4] */
  eax = (uint32_t)(edi + 0x3d4u);
/* 73cf62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73cf63: lea ecx, [esi + 0x3d4] */
  ecx = (uint32_t)(esi + 0x3d4u);
/* 73cf69: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x73cf6fu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 73cf6f: lea ecx, [edi + 0x3e0] */
  ecx = (uint32_t)(edi + 0x3e0u);
/* 73cf75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73cf76: lea ecx, [esi + 0x3e0] */
  ecx = (uint32_t)(esi + 0x3e0u);
/* 73cf7c: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x73cf82u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 73cf82: mov edx, dword ptr [edi + 0x3ec] */
  edx = R32((uint32_t)(edi + 0x3ecu));
/* 73cf88: lea eax, [edi + 0x3f0] */
  eax = (uint32_t)(edi + 0x3f0u);
/* 73cf8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73cf8f: lea ecx, [esi + 0x3f0] */
  ecx = (uint32_t)(esi + 0x3f0u);
/* 73cf95: mov dword ptr [esi + 0x3ec], edx */
  W32((uint32_t)(esi + 0x3ecu), edx);
/* 73cf9b: call 0x6c868e */
  esp -= 4; W32(esp, 0x73cfa0u); SPILL(); f_6c868e(); if (g_unwind) return; RELOAD();
/* 73cfa0: lea ecx, [edi + 0x3fc] */
  ecx = (uint32_t)(edi + 0x3fcu);
/* 73cfa6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73cfa7: lea ecx, [esi + 0x3fc] */
  ecx = (uint32_t)(esi + 0x3fcu);
/* 73cfad: call 0x6c868e */
  esp -= 4; W32(esp, 0x73cfb2u); SPILL(); f_6c868e(); if (g_unwind) return; RELOAD();
/* 73cfb2: lea edx, [edi + 0x408] */
  edx = (uint32_t)(edi + 0x408u);
/* 73cfb8: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 73cfba: lea eax, [esi + 0x408] */
  eax = (uint32_t)(esi + 0x408u);
/* 73cfc0: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 73cfc2: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 73cfc5: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 73cfc8: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 73cfcb: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 73cfce: mov al, byte ptr [edi + 0x414] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x414u))) & 0xffu);
/* 73cfd4: mov byte ptr [esi + 0x414], al */
  W8((uint32_t)(esi + 0x414u), (eax & 0xffu));
/* 73cfda: mov cl, byte ptr [edi + 0x415] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x415u))) & 0xffu);
/* 73cfe0: mov byte ptr [esi + 0x415], cl */
  W8((uint32_t)(esi + 0x415u), (ecx & 0xffu));
/* 73cfe6: mov edx, dword ptr [edi + 0x418] */
  edx = R32((uint32_t)(edi + 0x418u));
/* 73cfec: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73cfed: mov dword ptr [esi + 0x418], edx */
  W32((uint32_t)(esi + 0x418u), edx);
/* 73cff3: mov eax, esi */
  eax = esi;
/* 73cff5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73cff6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73d0a0(void) {
  LOAD_REGS();
L_73d0a0: /* 73d0a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73d0a1: mov esi, ecx */
  esi = ecx;
/* 73d0a3: call 0x6ccd10 */
  esp -= 4; W32(esp, 0x73d0a8u); SPILL(); f_6ccd10(); if (g_unwind) return; RELOAD();
/* 73d0a8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73d0ad: je 0x73d0be */
  if (zf) goto L_73d0be;
L_73d0af: /* 73d0af: push 0x41c */
  { uint32_t v = 0x41cu; esp -= 4; W32(esp, v); }
/* 73d0b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73d0b5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73d0bbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73d0bb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73d0be: /* 73d0be: mov eax, esi */
  eax = esi;
/* 73d0c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73d0c1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73d0e0(void) {
  LOAD_REGS();
L_73d0e0: /* 73d0e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73d0e1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 73d0e5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73d0e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73d0e9: mov esi, ecx */
  esi = ecx;
/* 73d0eb: je 0x73d120 */
  if (zf) goto L_73d120;
L_73d0ed: /* 73d0ed: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 73d0f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73d0f1: push 0x6ccd10 */
  { uint32_t v = 0x6ccd10u; esp -= 4; W32(esp, v); }
/* 73d0f6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 73d0f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73d0fa: push 0x41c */
  { uint32_t v = 0x41cu; esp -= 4; W32(esp, v); }
/* 73d0ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73d100: call 0x99ca3d */
  esp -= 4; W32(esp, 0x73d105u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 73d105: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73d108: je 0x73d118 */
  if (zf) goto L_73d118;
L_73d10a: /* 73d10a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 73d110: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 73d112: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 73d114: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73d115: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x73d118u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_73d118: /* 73d118: mov eax, edi */
  eax = edi;
/* 73d11a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73d11b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73d11c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73d11d: ret 4 */
  esp += 8; SPILL(); return;
L_73d120: /* 73d120: mov ecx, esi */
  ecx = esi;
/* 73d122: call 0x6ccd10 */
  esp -= 4; W32(esp, 0x73d127u); SPILL(); f_6ccd10(); if (g_unwind) return; RELOAD();
/* 73d127: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73d12a: je 0x73d13b */
  if (zf) goto L_73d13b;
L_73d12c: /* 73d12c: push 0x41c */
  { uint32_t v = 0x41cu; esp -= 4; W32(esp, v); }
/* 73d131: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73d132: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73d138u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73d138: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73d13b: /* 73d13b: mov eax, esi */
  eax = esi;
/* 73d13d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73d13e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73d13f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73d170(void) {
  LOAD_REGS();
L_73d170: /* 73d170: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73d172: push 0x9c625d */
  { uint32_t v = 0x9c625du; esp -= 4; W32(esp, v); }
/* 73d177: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73d17d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73d17e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73d185: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73d186: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73d187: mov esi, ecx */
  esi = ecx;
/* 73d189: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73d18d: mov dword ptr [esi], 0x9fb430 */
  W32((uint32_t)(esi), 0x9fb430u);
/* 73d193: mov dword ptr [esp + 0x10], 0xb */
  W32((uint32_t)(esp + 0x10u), 0xbu);
/* 73d19b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x73d1a1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 73d1a1: lea ecx, [esi + 0x3e8] */
  ecx = (uint32_t)(esi + 0x3e8u);
/* 73d1a7: mov byte ptr [esp + 0x10], 0xa */
  W8((uint32_t)(esp + 0x10u), 0xau);
/* 73d1ac: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73d1b2u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73d1b2: lea ecx, [esi + 0x3dc] */
  ecx = (uint32_t)(esi + 0x3dcu);
/* 73d1b8: mov byte ptr [esp + 0x10], 9 */
  W8((uint32_t)(esp + 0x10u), 0x9u);
/* 73d1bd: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73d1c3u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73d1c3: lea ecx, [esi + 0x3d0] */
  ecx = (uint32_t)(esi + 0x3d0u);
/* 73d1c9: mov byte ptr [esp + 0x10], 8 */
  W8((uint32_t)(esp + 0x10u), 0x8u);
/* 73d1ce: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73d1d4u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73d1d4: lea ecx, [esi + 0x3c0] */
  ecx = (uint32_t)(esi + 0x3c0u);
/* 73d1da: mov byte ptr [esp + 0x10], 7 */
  W8((uint32_t)(esp + 0x10u), 0x7u);
/* 73d1df: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73d1e5u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73d1e5: lea ecx, [esi + 0x3b4] */
  ecx = (uint32_t)(esi + 0x3b4u);
/* 73d1eb: mov byte ptr [esp + 0x10], 6 */
  W8((uint32_t)(esp + 0x10u), 0x6u);
/* 73d1f0: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73d1f6u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73d1f6: lea ecx, [esi + 0x3a8] */
  ecx = (uint32_t)(esi + 0x3a8u);
/* 73d1fc: mov byte ptr [esp + 0x10], 5 */
  W8((uint32_t)(esp + 0x10u), 0x5u);
/* 73d201: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73d207u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73d207: lea ecx, [esi + 0x388] */
  ecx = (uint32_t)(esi + 0x388u);
/* 73d20d: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* 73d212: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73d218u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73d218: lea ecx, [esi + 0x37c] */
  ecx = (uint32_t)(esi + 0x37cu);
/* 73d21e: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 73d223: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73d229u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73d229: lea ecx, [esi + 0x370] */
  ecx = (uint32_t)(esi + 0x370u);
/* 73d22f: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 73d234: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73d23au); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73d23a: lea ecx, [esi + 0x364] */
  ecx = (uint32_t)(esi + 0x364u);
/* 73d240: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 73d245: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73d24bu); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73d24b: lea ecx, [esi + 0x358] */
  ecx = (uint32_t)(esi + 0x358u);
/* 73d251: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 73d256: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73d25cu); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73d25c: mov ecx, esi */
  ecx = esi;
/* 73d25e: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 73d266: call 0x6c78b5 */
  esp -= 4; W32(esp, 0x73d26bu); SPILL(); f_6c78b5(); if (g_unwind) return; RELOAD();
/* 73d26b: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 73d26f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73d270: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73d277: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73d27a: ret  */
  esp += 4; SPILL(); return;
}

void f_73d2d0(void) {
  LOAD_REGS();
L_73d2d0: /* 73d2d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73d2d2: push 0x9c633e */
  { uint32_t v = 0x9c633eu; esp -= 4; W32(esp, v); }
/* 73d2d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73d2dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73d2de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73d2e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73d2e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73d2e7: mov esi, ecx */
  esi = ecx;
/* 73d2e9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73d2ed: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x73d2f2u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 73d2f2: lea ecx, [esi + 0x358] */
  ecx = (uint32_t)(esi + 0x358u);
/* 73d2f8: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 73d300: mov dword ptr [esi], 0x9fb430 */
  W32((uint32_t)(esi), 0x9fb430u);
/* 73d306: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73d30cu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73d30c: lea ecx, [esi + 0x364] */
  ecx = (uint32_t)(esi + 0x364u);
/* 73d312: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 73d317: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73d31du); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73d31d: lea ecx, [esi + 0x370] */
  ecx = (uint32_t)(esi + 0x370u);
/* 73d323: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 73d328: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73d32eu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73d32e: lea ecx, [esi + 0x37c] */
  ecx = (uint32_t)(esi + 0x37cu);
/* 73d334: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 73d339: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73d33fu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73d33f: lea ecx, [esi + 0x388] */
  ecx = (uint32_t)(esi + 0x388u);
/* 73d345: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* 73d34a: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73d350u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73d350: lea ecx, [esi + 0x3a8] */
  ecx = (uint32_t)(esi + 0x3a8u);
/* 73d356: mov byte ptr [esp + 0x10], 5 */
  W8((uint32_t)(esp + 0x10u), 0x5u);
/* 73d35b: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73d361u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73d361: lea ecx, [esi + 0x3b4] */
  ecx = (uint32_t)(esi + 0x3b4u);
/* 73d367: mov byte ptr [esp + 0x10], 6 */
  W8((uint32_t)(esp + 0x10u), 0x6u);
/* 73d36c: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73d372u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73d372: lea ecx, [esi + 0x3c0] */
  ecx = (uint32_t)(esi + 0x3c0u);
/* 73d378: mov byte ptr [esp + 0x10], 7 */
  W8((uint32_t)(esp + 0x10u), 0x7u);
/* 73d37d: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73d383u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73d383: lea ecx, [esi + 0x3d0] */
  ecx = (uint32_t)(esi + 0x3d0u);
/* 73d389: mov byte ptr [esp + 0x10], 8 */
  W8((uint32_t)(esp + 0x10u), 0x8u);
/* 73d38e: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73d394u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73d394: lea ecx, [esi + 0x3dc] */
  ecx = (uint32_t)(esi + 0x3dcu);
/* 73d39a: mov byte ptr [esp + 0x10], 9 */
  W8((uint32_t)(esp + 0x10u), 0x9u);
/* 73d39f: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73d3a5u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73d3a5: lea ecx, [esi + 0x3e8] */
  ecx = (uint32_t)(esi + 0x3e8u);
/* 73d3ab: mov byte ptr [esp + 0x10], 0xa */
  W8((uint32_t)(esp + 0x10u), 0xau);
/* 73d3b0: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73d3b6u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73d3b6: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 73d3ba: mov eax, esi */
  eax = esi;
/* 73d3bc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73d3bd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73d3c4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73d3c7: ret  */
  esp += 4; SPILL(); return;
}

void f_73d410(void) {
  LOAD_REGS();
L_73d410: /* 73d410: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73d412: push 0x9c641e */
  { uint32_t v = 0x9c641eu; esp -= 4; W32(esp, v); }
/* 73d417: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73d41d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73d41e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73d425: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73d426: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73d427: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73d428: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 73d42c: mov esi, ecx */
  esi = ecx;
/* 73d42e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73d42f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 73d433: call 0x6c1456 */
  esp -= 4; W32(esp, 0x73d438u); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 73d438: mov dword ptr [esi], 0x9fb430 */
  W32((uint32_t)(esi), 0x9fb430u);
/* 73d43e: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 73d444: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 73d44a: mov ecx, dword ptr [edi + 0x340] */
  ecx = R32((uint32_t)(edi + 0x340u));
/* 73d450: mov dword ptr [esi + 0x340], ecx */
  W32((uint32_t)(esi + 0x340u), ecx);
/* 73d456: mov edx, dword ptr [edi + 0x344] */
  edx = R32((uint32_t)(edi + 0x344u));
/* 73d45c: mov dword ptr [esi + 0x344], edx */
  W32((uint32_t)(esi + 0x344u), edx);
/* 73d462: mov eax, dword ptr [edi + 0x348] */
  eax = R32((uint32_t)(edi + 0x348u));
/* 73d468: mov dword ptr [esi + 0x348], eax */
  W32((uint32_t)(esi + 0x348u), eax);
/* 73d46e: mov ecx, dword ptr [edi + 0x34c] */
  ecx = R32((uint32_t)(edi + 0x34cu));
/* 73d474: mov dword ptr [esi + 0x34c], ecx */
  W32((uint32_t)(esi + 0x34cu), ecx);
/* 73d47a: mov edx, dword ptr [edi + 0x350] */
  edx = R32((uint32_t)(edi + 0x350u));
/* 73d480: lea ecx, [edi + 0x358] */
  ecx = (uint32_t)(edi + 0x358u);
/* 73d486: mov dword ptr [esi + 0x350], edx */
  W32((uint32_t)(esi + 0x350u), edx);
/* 73d48c: mov eax, dword ptr [edi + 0x354] */
  eax = R32((uint32_t)(edi + 0x354u));
/* 73d492: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73d493: lea ecx, [esi + 0x358] */
  ecx = (uint32_t)(esi + 0x358u);
/* 73d499: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 73d4a1: mov dword ptr [esi + 0x354], eax */
  W32((uint32_t)(esi + 0x354u), eax);
/* 73d4a7: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73d4adu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73d4ad: lea edx, [edi + 0x364] */
  edx = (uint32_t)(edi + 0x364u);
/* 73d4b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73d4b4: lea ecx, [esi + 0x364] */
  ecx = (uint32_t)(esi + 0x364u);
/* 73d4ba: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 73d4bf: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73d4c5u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73d4c5: lea eax, [edi + 0x370] */
  eax = (uint32_t)(edi + 0x370u);
/* 73d4cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73d4cc: lea ecx, [esi + 0x370] */
  ecx = (uint32_t)(esi + 0x370u);
/* 73d4d2: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* 73d4d7: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73d4ddu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73d4dd: lea ecx, [edi + 0x37c] */
  ecx = (uint32_t)(edi + 0x37cu);
/* 73d4e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73d4e4: lea ecx, [esi + 0x37c] */
  ecx = (uint32_t)(esi + 0x37cu);
/* 73d4ea: mov byte ptr [esp + 0x18], 3 */
  W8((uint32_t)(esp + 0x18u), 0x3u);
/* 73d4ef: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73d4f5u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73d4f5: lea edx, [edi + 0x388] */
  edx = (uint32_t)(edi + 0x388u);
/* 73d4fb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73d4fc: lea ecx, [esi + 0x388] */
  ecx = (uint32_t)(esi + 0x388u);
/* 73d502: mov byte ptr [esp + 0x18], 4 */
  W8((uint32_t)(esp + 0x18u), 0x4u);
/* 73d507: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73d50du); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73d50d: mov eax, dword ptr [edi + 0x394] */
  eax = R32((uint32_t)(edi + 0x394u));
/* 73d513: mov dword ptr [esi + 0x394], eax */
  W32((uint32_t)(esi + 0x394u), eax);
/* 73d519: mov ecx, dword ptr [edi + 0x398] */
  ecx = R32((uint32_t)(edi + 0x398u));
/* 73d51f: mov dword ptr [esi + 0x398], ecx */
  W32((uint32_t)(esi + 0x398u), ecx);
/* 73d525: mov edx, dword ptr [edi + 0x39c] */
  edx = R32((uint32_t)(edi + 0x39cu));
/* 73d52b: mov ecx, dword ptr [esi + 0x3a4] */
  ecx = R32((uint32_t)(esi + 0x3a4u));
/* 73d531: mov dword ptr [esi + 0x39c], edx */
  W32((uint32_t)(esi + 0x39cu), edx);
/* 73d537: mov eax, dword ptr [edi + 0x3a0] */
  eax = R32((uint32_t)(edi + 0x3a0u));
/* 73d53d: mov dword ptr [esi + 0x3a0], eax */
  W32((uint32_t)(esi + 0x3a0u), eax);
/* 73d543: xor ecx, dword ptr [edi + 0x3a4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x3a4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73d549: mov eax, dword ptr [esi + 0x3a4] */
  eax = R32((uint32_t)(esi + 0x3a4u));
/* 73d54f: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73d552: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73d554: mov dword ptr [esi + 0x3a4], eax */
  W32((uint32_t)(esi + 0x3a4u), eax);
/* 73d55a: mov ecx, eax */
  ecx = eax;
/* 73d55c: mov eax, dword ptr [edi + 0x3a4] */
  eax = R32((uint32_t)(edi + 0x3a4u));
/* 73d562: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73d564: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73d567: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73d569: mov dword ptr [esi + 0x3a4], eax */
  W32((uint32_t)(esi + 0x3a4u), eax);
/* 73d56f: mov ecx, dword ptr [edi + 0x3a4] */
  ecx = R32((uint32_t)(edi + 0x3a4u));
/* 73d575: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73d577: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73d57a: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73d57c: mov dword ptr [esi + 0x3a4], ecx */
  W32((uint32_t)(esi + 0x3a4u), ecx);
/* 73d582: mov eax, dword ptr [edi + 0x3a4] */
  eax = R32((uint32_t)(edi + 0x3a4u));
/* 73d588: mov byte ptr [esp + 0x14], 5 */
  W8((uint32_t)(esp + 0x14u), 0x5u);
/* 73d58d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73d58f: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73d592: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73d594: mov dword ptr [esi + 0x3a4], eax */
  W32((uint32_t)(esi + 0x3a4u), eax);
/* 73d59a: mov ecx, dword ptr [edi + 0x3a4] */
  ecx = R32((uint32_t)(edi + 0x3a4u));
/* 73d5a0: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73d5a2: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73d5a5: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73d5a7: mov dword ptr [esi + 0x3a4], ecx */
  W32((uint32_t)(esi + 0x3a4u), ecx);
/* 73d5ad: mov eax, dword ptr [edi + 0x3a4] */
  eax = R32((uint32_t)(edi + 0x3a4u));
/* 73d5b3: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73d5b5: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73d5b8: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73d5ba: mov dword ptr [esi + 0x3a4], eax */
  W32((uint32_t)(esi + 0x3a4u), eax);
/* 73d5c0: mov ecx, dword ptr [edi + 0x3a4] */
  ecx = R32((uint32_t)(edi + 0x3a4u));
/* 73d5c6: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73d5c8: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73d5cb: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73d5cd: mov dword ptr [esi + 0x3a4], ecx */
  W32((uint32_t)(esi + 0x3a4u), ecx);
/* 73d5d3: mov eax, dword ptr [edi + 0x3a4] */
  eax = R32((uint32_t)(edi + 0x3a4u));
/* 73d5d9: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73d5db: and eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73d5e0: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73d5e2: mov dword ptr [esi + 0x3a4], eax */
  W32((uint32_t)(esi + 0x3a4u), eax);
/* 73d5e8: mov ecx, dword ptr [edi + 0x3a4] */
  ecx = R32((uint32_t)(edi + 0x3a4u));
/* 73d5ee: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73d5f0: and ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73d5f6: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73d5f8: mov dword ptr [esi + 0x3a4], ecx */
  W32((uint32_t)(esi + 0x3a4u), ecx);
/* 73d5fe: mov eax, dword ptr [edi + 0x3a4] */
  eax = R32((uint32_t)(edi + 0x3a4u));
/* 73d604: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73d606: and eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73d60b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73d60d: mov dword ptr [esi + 0x3a4], eax */
  W32((uint32_t)(esi + 0x3a4u), eax);
/* 73d613: mov edx, dword ptr [edi + 0x3a4] */
  edx = R32((uint32_t)(edi + 0x3a4u));
/* 73d619: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 73d61b: and edx, 0x400 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 73d621: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 73d623: lea eax, [edi + 0x3a8] */
  eax = (uint32_t)(edi + 0x3a8u);
/* 73d629: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73d62a: lea ecx, [esi + 0x3a8] */
  ecx = (uint32_t)(esi + 0x3a8u);
/* 73d630: mov dword ptr [esi + 0x3a4], edx */
  W32((uint32_t)(esi + 0x3a4u), edx);
/* 73d636: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73d63cu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73d63c: lea ecx, [edi + 0x3b4] */
  ecx = (uint32_t)(edi + 0x3b4u);
/* 73d642: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73d643: lea ecx, [esi + 0x3b4] */
  ecx = (uint32_t)(esi + 0x3b4u);
/* 73d649: mov byte ptr [esp + 0x18], 6 */
  W8((uint32_t)(esp + 0x18u), 0x6u);
/* 73d64e: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73d654u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73d654: lea edx, [edi + 0x3c0] */
  edx = (uint32_t)(edi + 0x3c0u);
/* 73d65a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73d65b: lea ecx, [esi + 0x3c0] */
  ecx = (uint32_t)(esi + 0x3c0u);
/* 73d661: mov byte ptr [esp + 0x18], 7 */
  W8((uint32_t)(esp + 0x18u), 0x7u);
/* 73d666: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73d66cu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73d66c: mov eax, dword ptr [edi + 0x3cc] */
  eax = R32((uint32_t)(edi + 0x3ccu));
/* 73d672: lea ecx, [edi + 0x3d0] */
  ecx = (uint32_t)(edi + 0x3d0u);
/* 73d678: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73d679: lea ecx, [esi + 0x3d0] */
  ecx = (uint32_t)(esi + 0x3d0u);
/* 73d67f: mov byte ptr [esp + 0x18], 8 */
  W8((uint32_t)(esp + 0x18u), 0x8u);
/* 73d684: mov dword ptr [esi + 0x3cc], eax */
  W32((uint32_t)(esi + 0x3ccu), eax);
/* 73d68a: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73d690u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73d690: lea edx, [edi + 0x3dc] */
  edx = (uint32_t)(edi + 0x3dcu);
/* 73d696: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73d697: lea ecx, [esi + 0x3dc] */
  ecx = (uint32_t)(esi + 0x3dcu);
/* 73d69d: mov byte ptr [esp + 0x18], 9 */
  W8((uint32_t)(esp + 0x18u), 0x9u);
/* 73d6a2: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73d6a8u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73d6a8: lea eax, [edi + 0x3e8] */
  eax = (uint32_t)(edi + 0x3e8u);
/* 73d6ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73d6af: lea ecx, [esi + 0x3e8] */
  ecx = (uint32_t)(esi + 0x3e8u);
/* 73d6b5: mov byte ptr [esp + 0x18], 0xa */
  W8((uint32_t)(esp + 0x18u), 0xau);
/* 73d6ba: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73d6c0u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73d6c0: mov ecx, dword ptr [edi + 0x3f4] */
  ecx = R32((uint32_t)(edi + 0x3f4u));
/* 73d6c6: mov dword ptr [esi + 0x3f4], ecx */
  W32((uint32_t)(esi + 0x3f4u), ecx);
/* 73d6cc: mov edx, dword ptr [edi + 0x3f8] */
  edx = R32((uint32_t)(edi + 0x3f8u));
/* 73d6d2: mov dword ptr [esi + 0x3f8], edx */
  W32((uint32_t)(esi + 0x3f8u), edx);
/* 73d6d8: mov eax, dword ptr [edi + 0x3fc] */
  eax = R32((uint32_t)(edi + 0x3fcu));
/* 73d6de: mov dword ptr [esi + 0x3fc], eax */
  W32((uint32_t)(esi + 0x3fcu), eax);
/* 73d6e4: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 73d6e8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73d6e9: mov eax, esi */
  eax = esi;
/* 73d6eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73d6ec: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73d6f3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73d6f6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73d7c0(void) {
  LOAD_REGS();
L_73d7c0: /* 73d7c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73d7c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73d7c2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 73d7c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73d7c7: mov esi, ecx */
  esi = ecx;
/* 73d7c9: call 0x6c5cef */
  esp -= 4; W32(esp, 0x73d7ceu); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 73d7ce: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 73d7d4: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 73d7da: mov ecx, dword ptr [edi + 0x340] */
  ecx = R32((uint32_t)(edi + 0x340u));
/* 73d7e0: mov dword ptr [esi + 0x340], ecx */
  W32((uint32_t)(esi + 0x340u), ecx);
/* 73d7e6: mov edx, dword ptr [edi + 0x344] */
  edx = R32((uint32_t)(edi + 0x344u));
/* 73d7ec: mov dword ptr [esi + 0x344], edx */
  W32((uint32_t)(esi + 0x344u), edx);
/* 73d7f2: mov eax, dword ptr [edi + 0x348] */
  eax = R32((uint32_t)(edi + 0x348u));
/* 73d7f8: mov dword ptr [esi + 0x348], eax */
  W32((uint32_t)(esi + 0x348u), eax);
/* 73d7fe: mov ecx, dword ptr [edi + 0x34c] */
  ecx = R32((uint32_t)(edi + 0x34cu));
/* 73d804: mov dword ptr [esi + 0x34c], ecx */
  W32((uint32_t)(esi + 0x34cu), ecx);
/* 73d80a: mov edx, dword ptr [edi + 0x350] */
  edx = R32((uint32_t)(edi + 0x350u));
/* 73d810: lea ecx, [edi + 0x358] */
  ecx = (uint32_t)(edi + 0x358u);
/* 73d816: mov dword ptr [esi + 0x350], edx */
  W32((uint32_t)(esi + 0x350u), edx);
/* 73d81c: mov eax, dword ptr [edi + 0x354] */
  eax = R32((uint32_t)(edi + 0x354u));
/* 73d822: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73d823: lea ecx, [esi + 0x358] */
  ecx = (uint32_t)(esi + 0x358u);
/* 73d829: mov dword ptr [esi + 0x354], eax */
  W32((uint32_t)(esi + 0x354u), eax);
/* 73d82f: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x73d835u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 73d835: lea edx, [edi + 0x364] */
  edx = (uint32_t)(edi + 0x364u);
/* 73d83b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73d83c: lea ecx, [esi + 0x364] */
  ecx = (uint32_t)(esi + 0x364u);
/* 73d842: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x73d848u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 73d848: lea eax, [edi + 0x370] */
  eax = (uint32_t)(edi + 0x370u);
/* 73d84e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73d84f: lea ecx, [esi + 0x370] */
  ecx = (uint32_t)(esi + 0x370u);
/* 73d855: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x73d85bu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 73d85b: lea ecx, [edi + 0x37c] */
  ecx = (uint32_t)(edi + 0x37cu);
/* 73d861: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73d862: lea ecx, [esi + 0x37c] */
  ecx = (uint32_t)(esi + 0x37cu);
/* 73d868: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x73d86eu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 73d86e: lea edx, [edi + 0x388] */
  edx = (uint32_t)(edi + 0x388u);
/* 73d874: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73d875: lea ecx, [esi + 0x388] */
  ecx = (uint32_t)(esi + 0x388u);
/* 73d87b: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x73d881u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 73d881: mov eax, dword ptr [edi + 0x394] */
  eax = R32((uint32_t)(edi + 0x394u));
/* 73d887: mov dword ptr [esi + 0x394], eax */
  W32((uint32_t)(esi + 0x394u), eax);
/* 73d88d: mov ecx, dword ptr [edi + 0x398] */
  ecx = R32((uint32_t)(edi + 0x398u));
/* 73d893: mov dword ptr [esi + 0x398], ecx */
  W32((uint32_t)(esi + 0x398u), ecx);
/* 73d899: mov edx, dword ptr [edi + 0x39c] */
  edx = R32((uint32_t)(edi + 0x39cu));
/* 73d89f: mov ecx, dword ptr [esi + 0x3a4] */
  ecx = R32((uint32_t)(esi + 0x3a4u));
/* 73d8a5: mov dword ptr [esi + 0x39c], edx */
  W32((uint32_t)(esi + 0x39cu), edx);
/* 73d8ab: mov eax, dword ptr [edi + 0x3a0] */
  eax = R32((uint32_t)(edi + 0x3a0u));
/* 73d8b1: mov dword ptr [esi + 0x3a0], eax */
  W32((uint32_t)(esi + 0x3a0u), eax);
/* 73d8b7: xor ecx, dword ptr [edi + 0x3a4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x3a4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73d8bd: mov eax, dword ptr [esi + 0x3a4] */
  eax = R32((uint32_t)(esi + 0x3a4u));
/* 73d8c3: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73d8c6: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73d8c8: mov dword ptr [esi + 0x3a4], eax */
  W32((uint32_t)(esi + 0x3a4u), eax);
/* 73d8ce: mov ecx, eax */
  ecx = eax;
/* 73d8d0: mov eax, dword ptr [edi + 0x3a4] */
  eax = R32((uint32_t)(edi + 0x3a4u));
/* 73d8d6: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73d8d8: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73d8db: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73d8dd: mov dword ptr [esi + 0x3a4], eax */
  W32((uint32_t)(esi + 0x3a4u), eax);
/* 73d8e3: mov ecx, dword ptr [edi + 0x3a4] */
  ecx = R32((uint32_t)(edi + 0x3a4u));
/* 73d8e9: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73d8eb: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73d8ee: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73d8f0: mov dword ptr [esi + 0x3a4], ecx */
  W32((uint32_t)(esi + 0x3a4u), ecx);
/* 73d8f6: mov eax, dword ptr [edi + 0x3a4] */
  eax = R32((uint32_t)(edi + 0x3a4u));
/* 73d8fc: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73d8fe: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73d901: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73d903: mov dword ptr [esi + 0x3a4], eax */
  W32((uint32_t)(esi + 0x3a4u), eax);
/* 73d909: mov ecx, dword ptr [edi + 0x3a4] */
  ecx = R32((uint32_t)(edi + 0x3a4u));
/* 73d90f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73d911: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73d914: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73d916: mov dword ptr [esi + 0x3a4], ecx */
  W32((uint32_t)(esi + 0x3a4u), ecx);
/* 73d91c: mov eax, dword ptr [edi + 0x3a4] */
  eax = R32((uint32_t)(edi + 0x3a4u));
/* 73d922: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73d924: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73d927: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73d929: mov dword ptr [esi + 0x3a4], eax */
  W32((uint32_t)(esi + 0x3a4u), eax);
/* 73d92f: mov ecx, dword ptr [edi + 0x3a4] */
  ecx = R32((uint32_t)(edi + 0x3a4u));
/* 73d935: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73d937: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73d93a: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73d93c: mov dword ptr [esi + 0x3a4], ecx */
  W32((uint32_t)(esi + 0x3a4u), ecx);
/* 73d942: mov eax, dword ptr [edi + 0x3a4] */
  eax = R32((uint32_t)(edi + 0x3a4u));
/* 73d948: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73d94a: and eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73d94f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73d951: mov dword ptr [esi + 0x3a4], eax */
  W32((uint32_t)(esi + 0x3a4u), eax);
/* 73d957: mov ecx, dword ptr [edi + 0x3a4] */
  ecx = R32((uint32_t)(edi + 0x3a4u));
/* 73d95d: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73d95f: and ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73d965: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73d967: mov dword ptr [esi + 0x3a4], ecx */
  W32((uint32_t)(esi + 0x3a4u), ecx);
/* 73d96d: mov eax, dword ptr [edi + 0x3a4] */
  eax = R32((uint32_t)(edi + 0x3a4u));
/* 73d973: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73d975: and eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73d97a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73d97c: mov dword ptr [esi + 0x3a4], eax */
  W32((uint32_t)(esi + 0x3a4u), eax);
/* 73d982: mov edx, dword ptr [edi + 0x3a4] */
  edx = R32((uint32_t)(edi + 0x3a4u));
/* 73d988: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 73d98a: and edx, 0x400 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 73d990: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 73d992: lea eax, [edi + 0x3a8] */
  eax = (uint32_t)(edi + 0x3a8u);
/* 73d998: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73d999: lea ecx, [esi + 0x3a8] */
  ecx = (uint32_t)(esi + 0x3a8u);
/* 73d99f: mov dword ptr [esi + 0x3a4], edx */
  W32((uint32_t)(esi + 0x3a4u), edx);
/* 73d9a5: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x73d9abu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 73d9ab: lea ecx, [edi + 0x3b4] */
  ecx = (uint32_t)(edi + 0x3b4u);
/* 73d9b1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73d9b2: lea ecx, [esi + 0x3b4] */
  ecx = (uint32_t)(esi + 0x3b4u);
/* 73d9b8: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x73d9beu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 73d9be: lea edx, [edi + 0x3c0] */
  edx = (uint32_t)(edi + 0x3c0u);
/* 73d9c4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73d9c5: lea ecx, [esi + 0x3c0] */
  ecx = (uint32_t)(esi + 0x3c0u);
/* 73d9cb: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x73d9d1u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 73d9d1: mov eax, dword ptr [edi + 0x3cc] */
  eax = R32((uint32_t)(edi + 0x3ccu));
/* 73d9d7: lea ecx, [edi + 0x3d0] */
  ecx = (uint32_t)(edi + 0x3d0u);
/* 73d9dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73d9de: lea ecx, [esi + 0x3d0] */
  ecx = (uint32_t)(esi + 0x3d0u);
/* 73d9e4: mov dword ptr [esi + 0x3cc], eax */
  W32((uint32_t)(esi + 0x3ccu), eax);
/* 73d9ea: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x73d9f0u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 73d9f0: lea edx, [edi + 0x3dc] */
  edx = (uint32_t)(edi + 0x3dcu);
/* 73d9f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73d9f7: lea ecx, [esi + 0x3dc] */
  ecx = (uint32_t)(esi + 0x3dcu);
/* 73d9fd: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x73da03u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 73da03: lea eax, [edi + 0x3e8] */
  eax = (uint32_t)(edi + 0x3e8u);
/* 73da09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73da0a: lea ecx, [esi + 0x3e8] */
  ecx = (uint32_t)(esi + 0x3e8u);
/* 73da10: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x73da16u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 73da16: mov ecx, dword ptr [edi + 0x3f4] */
  ecx = R32((uint32_t)(edi + 0x3f4u));
/* 73da1c: mov dword ptr [esi + 0x3f4], ecx */
  W32((uint32_t)(esi + 0x3f4u), ecx);
/* 73da22: mov edx, dword ptr [edi + 0x3f8] */
  edx = R32((uint32_t)(edi + 0x3f8u));
/* 73da28: mov dword ptr [esi + 0x3f8], edx */
  W32((uint32_t)(esi + 0x3f8u), edx);
/* 73da2e: mov eax, dword ptr [edi + 0x3fc] */
  eax = R32((uint32_t)(edi + 0x3fcu));
/* 73da34: mov dword ptr [esi + 0x3fc], eax */
  W32((uint32_t)(esi + 0x3fcu), eax);
/* 73da3a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73da3b: mov eax, esi */
  eax = esi;
/* 73da3d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73da3e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73db00(void) {
  LOAD_REGS();
L_73db00: /* 73db00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73db01: mov esi, ecx */
  esi = ecx;
/* 73db03: call 0x6c5b96 */
  esp -= 4; W32(esp, 0x73db08u); SPILL(); f_6c5b96(); if (g_unwind) return; RELOAD();
/* 73db08: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73db0d: je 0x73db1e */
  if (zf) goto L_73db1e;
L_73db0f: /* 73db0f: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 73db14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73db15: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73db1bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73db1b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73db1e: /* 73db1e: mov eax, esi */
  eax = esi;
/* 73db20: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73db21: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73db40(void) {
  LOAD_REGS();
L_73db40: /* 73db40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73db41: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 73db45: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73db48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73db49: mov esi, ecx */
  esi = ecx;
/* 73db4b: je 0x73db80 */
  if (zf) goto L_73db80;
L_73db4d: /* 73db4d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 73db50: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73db51: push 0x6c5b96 */
  { uint32_t v = 0x6c5b96u; esp -= 4; W32(esp, v); }
/* 73db56: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 73db59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73db5a: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 73db5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73db60: call 0x99ca3d */
  esp -= 4; W32(esp, 0x73db65u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 73db65: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73db68: je 0x73db78 */
  if (zf) goto L_73db78;
L_73db6a: /* 73db6a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 73db70: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 73db72: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 73db74: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73db75: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x73db78u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_73db78: /* 73db78: mov eax, edi */
  eax = edi;
/* 73db7a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73db7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73db7c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73db7d: ret 4 */
  esp += 8; SPILL(); return;
L_73db80: /* 73db80: mov ecx, esi */
  ecx = esi;
/* 73db82: call 0x6c5b96 */
  esp -= 4; W32(esp, 0x73db87u); SPILL(); f_6c5b96(); if (g_unwind) return; RELOAD();
/* 73db87: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73db8a: je 0x73db9b */
  if (zf) goto L_73db9b;
L_73db8c: /* 73db8c: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 73db91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73db92: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73db98u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73db98: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73db9b: /* 73db9b: mov eax, esi */
  eax = esi;
/* 73db9d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73db9e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73db9f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73dbd0(void) {
  LOAD_REGS();
L_73dbd0: /* 73dbd0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73dbd2: push 0x9c6468 */
  { uint32_t v = 0x9c6468u; esp -= 4; W32(esp, v); }
/* 73dbd7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73dbdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73dbde: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73dbe5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73dbe6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73dbe7: mov esi, ecx */
  esi = ecx;
/* 73dbe9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73dbed: mov dword ptr [esi], 0x9fb610 */
  W32((uint32_t)(esi), 0x9fb610u);
/* 73dbf3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 73dbfb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x73dc01u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 73dc01: mov ecx, esi */
  ecx = esi;
/* 73dc03: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 73dc0b: call 0x6c688e */
  esp -= 4; W32(esp, 0x73dc10u); SPILL(); f_6c688e(); if (g_unwind) return; RELOAD();
/* 73dc10: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 73dc14: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73dc15: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73dc1c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73dc1f: ret  */
  esp += 4; SPILL(); return;
}

void f_73dc40(void) {
  LOAD_REGS();
L_73dc40: /* 73dc40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73dc41: mov esi, ecx */
  esi = ecx;
/* 73dc43: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x73dc48u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 73dc48: mov dword ptr [esi], 0x9fb610 */
  W32((uint32_t)(esi), 0x9fb610u);
/* 73dc4e: mov eax, esi */
  eax = esi;
/* 73dc50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73dc51: ret  */
  esp += 4; SPILL(); return;
}

void f_73dc70(void) {
  LOAD_REGS();
L_73dc70: /* 73dc70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 73dc74: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73dc75: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73dc76: mov esi, ecx */
  esi = ecx;
/* 73dc78: call 0x6c1456 */
  esp -= 4; W32(esp, 0x73dc7du); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 73dc7d: mov dword ptr [esi], 0x9fb610 */
  W32((uint32_t)(esi), 0x9fb610u);
/* 73dc83: mov eax, esi */
  eax = esi;
/* 73dc85: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73dc86: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73dca0(void) {
  LOAD_REGS();
L_73dca0: /* 73dca0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 73dca4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73dca5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73dca6: mov esi, ecx */
  esi = ecx;
/* 73dca8: call 0x6c5cef */
  esp -= 4; W32(esp, 0x73dcadu); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 73dcad: mov eax, esi */
  eax = esi;
/* 73dcaf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73dcb0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73dcd0(void) {
  LOAD_REGS();
L_73dcd0: /* 73dcd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73dcd1: mov esi, ecx */
  esi = ecx;
/* 73dcd3: call 0x6c91dd */
  esp -= 4; W32(esp, 0x73dcd8u); SPILL(); f_6c91dd(); if (g_unwind) return; RELOAD();
/* 73dcd8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73dcdd: je 0x73dcee */
  if (zf) goto L_73dcee;
L_73dcdf: /* 73dcdf: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 73dce4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73dce5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73dcebu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73dceb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73dcee: /* 73dcee: mov eax, esi */
  eax = esi;
/* 73dcf0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73dcf1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73dd10(void) {
  LOAD_REGS();
L_73dd10: /* 73dd10: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73dd11: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 73dd15: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73dd18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73dd19: mov esi, ecx */
  esi = ecx;
/* 73dd1b: je 0x73dd50 */
  if (zf) goto L_73dd50;
L_73dd1d: /* 73dd1d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 73dd20: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73dd21: push 0x6c91dd */
  { uint32_t v = 0x6c91ddu; esp -= 4; W32(esp, v); }
/* 73dd26: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 73dd29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73dd2a: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 73dd2f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73dd30: call 0x99ca3d */
  esp -= 4; W32(esp, 0x73dd35u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 73dd35: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73dd38: je 0x73dd48 */
  if (zf) goto L_73dd48;
L_73dd3a: /* 73dd3a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 73dd40: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 73dd42: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 73dd44: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73dd45: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x73dd48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_73dd48: /* 73dd48: mov eax, edi */
  eax = edi;
/* 73dd4a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73dd4b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73dd4c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73dd4d: ret 4 */
  esp += 8; SPILL(); return;
L_73dd50: /* 73dd50: mov ecx, esi */
  ecx = esi;
/* 73dd52: call 0x6c91dd */
  esp -= 4; W32(esp, 0x73dd57u); SPILL(); f_6c91dd(); if (g_unwind) return; RELOAD();
/* 73dd57: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73dd5a: je 0x73dd6b */
  if (zf) goto L_73dd6b;
L_73dd5c: /* 73dd5c: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 73dd61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73dd62: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73dd68u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73dd68: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73dd6b: /* 73dd6b: mov eax, esi */
  eax = esi;
/* 73dd6d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73dd6e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73dd6f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73dda0(void) {
  LOAD_REGS();
L_73dda0: /* 73dda0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73dda2: push 0x9c64c4 */
  { uint32_t v = 0x9c64c4u; esp -= 4; W32(esp, v); }
/* 73dda7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73ddad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73ddae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73ddb5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73ddb6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73ddb7: mov esi, ecx */
  esi = ecx;
/* 73ddb9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73ddbd: mov dword ptr [esi], 0x9fb7f0 */
  W32((uint32_t)(esi), 0x9fb7f0u);
/* 73ddc3: mov dword ptr [esp + 0x10], 4 */
  W32((uint32_t)(esp + 0x10u), 0x4u);
/* 73ddcb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x73ddd1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 73ddd1: lea ecx, [esi + 0x368] */
  ecx = (uint32_t)(esi + 0x368u);
/* 73ddd7: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 73dddc: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73dde2u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73dde2: lea ecx, [esi + 0x35c] */
  ecx = (uint32_t)(esi + 0x35cu);
/* 73dde8: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 73dded: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73ddf3u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73ddf3: lea ecx, [esi + 0x350] */
  ecx = (uint32_t)(esi + 0x350u);
/* 73ddf9: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 73ddfe: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73de04u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73de04: lea ecx, [esi + 0x344] */
  ecx = (uint32_t)(esi + 0x344u);
/* 73de0a: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 73de0f: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73de15u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73de15: mov ecx, esi */
  ecx = esi;
/* 73de17: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 73de1f: call 0x6c688e */
  esp -= 4; W32(esp, 0x73de24u); SPILL(); f_6c688e(); if (g_unwind) return; RELOAD();
/* 73de24: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 73de28: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73de29: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73de30: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73de33: ret  */
  esp += 4; SPILL(); return;
}

void f_73de70(void) {
  LOAD_REGS();
L_73de70: /* 73de70: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73de72: push 0x9c6525 */
  { uint32_t v = 0x9c6525u; esp -= 4; W32(esp, v); }
/* 73de77: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73de7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73de7e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73de85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73de86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73de87: mov esi, ecx */
  esi = ecx;
/* 73de89: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73de8d: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x73de92u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 73de92: lea ecx, [esi + 0x344] */
  ecx = (uint32_t)(esi + 0x344u);
/* 73de98: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 73dea0: mov dword ptr [esi], 0x9fb7f0 */
  W32((uint32_t)(esi), 0x9fb7f0u);
/* 73dea6: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73deacu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73deac: lea ecx, [esi + 0x350] */
  ecx = (uint32_t)(esi + 0x350u);
/* 73deb2: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 73deb7: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73debdu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73debd: lea ecx, [esi + 0x35c] */
  ecx = (uint32_t)(esi + 0x35cu);
/* 73dec3: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 73dec8: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73deceu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73dece: lea ecx, [esi + 0x368] */
  ecx = (uint32_t)(esi + 0x368u);
/* 73ded4: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 73ded9: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73dedfu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73dedf: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 73dee3: mov eax, esi */
  eax = esi;
/* 73dee5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73dee6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73deed: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73def0: ret  */
  esp += 4; SPILL(); return;
}

void f_73df30(void) {
  LOAD_REGS();
L_73df30: /* 73df30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73df32: push 0x9c6575 */
  { uint32_t v = 0x9c6575u; esp -= 4; W32(esp, v); }
/* 73df37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73df3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73df3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73df45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73df46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73df47: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73df48: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 73df4c: mov esi, ecx */
  esi = ecx;
/* 73df4e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73df4f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 73df53: call 0x6c1456 */
  esp -= 4; W32(esp, 0x73df58u); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 73df58: mov dword ptr [esi], 0x9fb7f0 */
  W32((uint32_t)(esi), 0x9fb7f0u);
/* 73df5e: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 73df64: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 73df6a: mov ecx, dword ptr [edi + 0x340] */
  ecx = R32((uint32_t)(edi + 0x340u));
/* 73df70: lea edx, [edi + 0x344] */
  edx = (uint32_t)(edi + 0x344u);
/* 73df76: mov dword ptr [esi + 0x340], ecx */
  W32((uint32_t)(esi + 0x340u), ecx);
/* 73df7c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73df7d: lea ecx, [esi + 0x344] */
  ecx = (uint32_t)(esi + 0x344u);
/* 73df83: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 73df8b: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73df91u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73df91: lea eax, [edi + 0x350] */
  eax = (uint32_t)(edi + 0x350u);
/* 73df97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73df98: lea ecx, [esi + 0x350] */
  ecx = (uint32_t)(esi + 0x350u);
/* 73df9e: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 73dfa3: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73dfa9u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73dfa9: lea ecx, [edi + 0x35c] */
  ecx = (uint32_t)(edi + 0x35cu);
/* 73dfaf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73dfb0: lea ecx, [esi + 0x35c] */
  ecx = (uint32_t)(esi + 0x35cu);
/* 73dfb6: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* 73dfbb: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73dfc1u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73dfc1: lea edx, [edi + 0x368] */
  edx = (uint32_t)(edi + 0x368u);
/* 73dfc7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73dfc8: lea ecx, [esi + 0x368] */
  ecx = (uint32_t)(esi + 0x368u);
/* 73dfce: mov byte ptr [esp + 0x18], 3 */
  W8((uint32_t)(esp + 0x18u), 0x3u);
/* 73dfd3: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73dfd9u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73dfd9: mov eax, dword ptr [edi + 0x374] */
  eax = R32((uint32_t)(edi + 0x374u));
/* 73dfdf: mov edi, dword ptr [esi + 0x374] */
  edi = R32((uint32_t)(esi + 0x374u));
/* 73dfe5: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73dfe7: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73dfea: mov ecx, edi */
  ecx = edi;
/* 73dfec: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73dfee: mov dword ptr [esi + 0x374], ecx */
  W32((uint32_t)(esi + 0x374u), ecx);
/* 73dff4: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 73dff8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73dff9: mov eax, esi */
  eax = esi;
/* 73dffb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73dffc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73e003: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73e006: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73e050(void) {
  LOAD_REGS();
L_73e050: /* 73e050: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73e051: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73e052: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 73e056: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73e057: mov esi, ecx */
  esi = ecx;
/* 73e059: call 0x6c5cef */
  esp -= 4; W32(esp, 0x73e05eu); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 73e05e: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 73e064: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 73e06a: mov ecx, dword ptr [edi + 0x340] */
  ecx = R32((uint32_t)(edi + 0x340u));
/* 73e070: lea edx, [edi + 0x344] */
  edx = (uint32_t)(edi + 0x344u);
/* 73e076: mov dword ptr [esi + 0x340], ecx */
  W32((uint32_t)(esi + 0x340u), ecx);
/* 73e07c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73e07d: lea ecx, [esi + 0x344] */
  ecx = (uint32_t)(esi + 0x344u);
/* 73e083: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x73e089u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 73e089: lea eax, [edi + 0x350] */
  eax = (uint32_t)(edi + 0x350u);
/* 73e08f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73e090: lea ecx, [esi + 0x350] */
  ecx = (uint32_t)(esi + 0x350u);
/* 73e096: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x73e09cu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 73e09c: lea ecx, [edi + 0x35c] */
  ecx = (uint32_t)(edi + 0x35cu);
/* 73e0a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73e0a3: lea ecx, [esi + 0x35c] */
  ecx = (uint32_t)(esi + 0x35cu);
/* 73e0a9: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x73e0afu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 73e0af: lea edx, [edi + 0x368] */
  edx = (uint32_t)(edi + 0x368u);
/* 73e0b5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73e0b6: lea ecx, [esi + 0x368] */
  ecx = (uint32_t)(esi + 0x368u);
/* 73e0bc: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x73e0c2u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 73e0c2: mov eax, dword ptr [edi + 0x374] */
  eax = R32((uint32_t)(edi + 0x374u));
/* 73e0c8: mov edi, dword ptr [esi + 0x374] */
  edi = R32((uint32_t)(esi + 0x374u));
/* 73e0ce: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73e0d0: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73e0d3: mov ecx, edi */
  ecx = edi;
/* 73e0d5: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73e0d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73e0d8: mov dword ptr [esi + 0x374], ecx */
  W32((uint32_t)(esi + 0x374u), ecx);
/* 73e0de: mov eax, esi */
  eax = esi;
/* 73e0e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73e0e1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73e120(void) {
  LOAD_REGS();
L_73e120: /* 73e120: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73e121: mov esi, ecx */
  esi = ecx;
/* 73e123: call 0x6c4e80 */
  esp -= 4; W32(esp, 0x73e128u); SPILL(); f_6c4e80(); if (g_unwind) return; RELOAD();
/* 73e128: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73e12d: je 0x73e13e */
  if (zf) goto L_73e13e;
L_73e12f: /* 73e12f: push 0x378 */
  { uint32_t v = 0x378u; esp -= 4; W32(esp, v); }
/* 73e134: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73e135: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73e13bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73e13b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73e13e: /* 73e13e: mov eax, esi */
  eax = esi;
/* 73e140: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73e141: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73e160(void) {
  LOAD_REGS();
L_73e160: /* 73e160: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73e161: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 73e165: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73e168: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73e169: mov esi, ecx */
  esi = ecx;
/* 73e16b: je 0x73e1a0 */
  if (zf) goto L_73e1a0;
L_73e16d: /* 73e16d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 73e170: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73e171: push 0x6c4e80 */
  { uint32_t v = 0x6c4e80u; esp -= 4; W32(esp, v); }
/* 73e176: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 73e179: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73e17a: push 0x378 */
  { uint32_t v = 0x378u; esp -= 4; W32(esp, v); }
/* 73e17f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73e180: call 0x99ca3d */
  esp -= 4; W32(esp, 0x73e185u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 73e185: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73e188: je 0x73e198 */
  if (zf) goto L_73e198;
L_73e18a: /* 73e18a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 73e190: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 73e192: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 73e194: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73e195: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x73e198u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_73e198: /* 73e198: mov eax, edi */
  eax = edi;
/* 73e19a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73e19b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73e19c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73e19d: ret 4 */
  esp += 8; SPILL(); return;
L_73e1a0: /* 73e1a0: mov ecx, esi */
  ecx = esi;
/* 73e1a2: call 0x6c4e80 */
  esp -= 4; W32(esp, 0x73e1a7u); SPILL(); f_6c4e80(); if (g_unwind) return; RELOAD();
/* 73e1a7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73e1aa: je 0x73e1bb */
  if (zf) goto L_73e1bb;
L_73e1ac: /* 73e1ac: push 0x378 */
  { uint32_t v = 0x378u; esp -= 4; W32(esp, v); }
/* 73e1b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73e1b2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73e1b8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73e1b8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73e1bb: /* 73e1bb: mov eax, esi */
  eax = esi;
/* 73e1bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73e1be: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73e1bf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73e1f0(void) {
  LOAD_REGS();
L_73e1f0: /* 73e1f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73e1f2: push 0x9c6598 */
  { uint32_t v = 0x9c6598u; esp -= 4; W32(esp, v); }
/* 73e1f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73e1fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73e1fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73e205: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73e206: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73e207: mov esi, ecx */
  esi = ecx;
/* 73e209: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73e20d: mov dword ptr [esi], 0x9fb9d0 */
  W32((uint32_t)(esi), 0x9fb9d0u);
/* 73e213: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 73e21b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x73e221u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 73e221: mov ecx, esi */
  ecx = esi;
/* 73e223: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 73e22b: call 0x6c688e */
  esp -= 4; W32(esp, 0x73e230u); SPILL(); f_6c688e(); if (g_unwind) return; RELOAD();
/* 73e230: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 73e234: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73e235: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73e23c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73e23f: ret  */
  esp += 4; SPILL(); return;
}

void f_73e260(void) {
  LOAD_REGS();
L_73e260: /* 73e260: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73e261: mov esi, ecx */
  esi = ecx;
/* 73e263: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x73e268u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 73e268: mov dword ptr [esi], 0x9fb9d0 */
  W32((uint32_t)(esi), 0x9fb9d0u);
/* 73e26e: mov eax, esi */
  eax = esi;
/* 73e270: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73e271: ret  */
  esp += 4; SPILL(); return;
}

void f_73e290(void) {
  LOAD_REGS();
L_73e290: /* 73e290: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 73e294: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73e295: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73e296: mov esi, ecx */
  esi = ecx;
/* 73e298: call 0x6c1456 */
  esp -= 4; W32(esp, 0x73e29du); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 73e29d: mov dword ptr [esi], 0x9fb9d0 */
  W32((uint32_t)(esi), 0x9fb9d0u);
/* 73e2a3: mov eax, esi */
  eax = esi;
/* 73e2a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73e2a6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73e2c0(void) {
  LOAD_REGS();
L_73e2c0: /* 73e2c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 73e2c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73e2c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73e2c6: mov esi, ecx */
  esi = ecx;
/* 73e2c8: call 0x6c5cef */
  esp -= 4; W32(esp, 0x73e2cdu); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 73e2cd: mov eax, esi */
  eax = esi;
/* 73e2cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73e2d0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73e2f0(void) {
  LOAD_REGS();
L_73e2f0: /* 73e2f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73e2f1: mov esi, ecx */
  esi = ecx;
/* 73e2f3: call 0x6c60cd */
  esp -= 4; W32(esp, 0x73e2f8u); SPILL(); f_6c60cd(); if (g_unwind) return; RELOAD();
/* 73e2f8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73e2fd: je 0x73e30e */
  if (zf) goto L_73e30e;
L_73e2ff: /* 73e2ff: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 73e304: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73e305: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73e30bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73e30b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73e30e: /* 73e30e: mov eax, esi */
  eax = esi;
/* 73e310: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73e311: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73e330(void) {
  LOAD_REGS();
L_73e330: /* 73e330: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73e331: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 73e335: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73e338: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73e339: mov esi, ecx */
  esi = ecx;
/* 73e33b: je 0x73e370 */
  if (zf) goto L_73e370;
L_73e33d: /* 73e33d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 73e340: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73e341: push 0x6c60cd */
  { uint32_t v = 0x6c60cdu; esp -= 4; W32(esp, v); }
/* 73e346: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 73e349: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73e34a: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 73e34f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73e350: call 0x99ca3d */
  esp -= 4; W32(esp, 0x73e355u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 73e355: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73e358: je 0x73e368 */
  if (zf) goto L_73e368;
L_73e35a: /* 73e35a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 73e360: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 73e362: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 73e364: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73e365: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x73e368u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_73e368: /* 73e368: mov eax, edi */
  eax = edi;
/* 73e36a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73e36b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73e36c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73e36d: ret 4 */
  esp += 8; SPILL(); return;
L_73e370: /* 73e370: mov ecx, esi */
  ecx = esi;
/* 73e372: call 0x6c60cd */
  esp -= 4; W32(esp, 0x73e377u); SPILL(); f_6c60cd(); if (g_unwind) return; RELOAD();
/* 73e377: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73e37a: je 0x73e38b */
  if (zf) goto L_73e38b;
L_73e37c: /* 73e37c: push 0x33c */
  { uint32_t v = 0x33cu; esp -= 4; W32(esp, v); }
/* 73e381: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73e382: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73e388u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73e388: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73e38b: /* 73e38b: mov eax, esi */
  eax = esi;
/* 73e38d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73e38e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73e38f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73e3c0(void) {
  LOAD_REGS();
L_73e3c0: /* 73e3c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73e3c2: push 0x9c65b8 */
  { uint32_t v = 0x9c65b8u; esp -= 4; W32(esp, v); }
/* 73e3c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73e3cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73e3ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73e3d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73e3d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73e3d7: mov esi, ecx */
  esi = ecx;
/* 73e3d9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73e3dd: mov dword ptr [esi], 0x9fbbb0 */
  W32((uint32_t)(esi), 0x9fbbb0u);
/* 73e3e3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 73e3eb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x73e3f1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 73e3f1: mov ecx, esi */
  ecx = esi;
/* 73e3f3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 73e3fb: call 0x6c688e */
  esp -= 4; W32(esp, 0x73e400u); SPILL(); f_6c688e(); if (g_unwind) return; RELOAD();
/* 73e400: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 73e404: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73e405: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73e40c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73e40f: ret  */
  esp += 4; SPILL(); return;
}

void f_73e430(void) {
  LOAD_REGS();
L_73e430: /* 73e430: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73e431: mov esi, ecx */
  esi = ecx;
/* 73e433: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x73e438u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 73e438: mov dword ptr [esi], 0x9fbbb0 */
  W32((uint32_t)(esi), 0x9fbbb0u);
/* 73e43e: mov eax, esi */
  eax = esi;
/* 73e440: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73e441: ret  */
  esp += 4; SPILL(); return;
}

void f_73e460(void) {
  LOAD_REGS();
L_73e460: /* 73e460: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73e461: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73e462: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 73e466: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73e467: mov esi, ecx */
  esi = ecx;
/* 73e469: call 0x6c1456 */
  esp -= 4; W32(esp, 0x73e46eu); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 73e46e: mov dword ptr [esi], 0x9fbbb0 */
  W32((uint32_t)(esi), 0x9fbbb0u);
/* 73e474: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 73e47a: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 73e480: mov ecx, dword ptr [edi + 0x340] */
  ecx = R32((uint32_t)(edi + 0x340u));
/* 73e486: mov eax, dword ptr [esi + 0x348] */
  eax = R32((uint32_t)(esi + 0x348u));
/* 73e48c: mov dword ptr [esi + 0x340], ecx */
  W32((uint32_t)(esi + 0x340u), ecx);
/* 73e492: mov edx, dword ptr [edi + 0x344] */
  edx = R32((uint32_t)(edi + 0x344u));
/* 73e498: mov dword ptr [esi + 0x344], edx */
  W32((uint32_t)(esi + 0x344u), edx);
/* 73e49e: xor eax, dword ptr [edi + 0x348] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x348u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73e4a4: mov ecx, dword ptr [esi + 0x348] */
  ecx = R32((uint32_t)(esi + 0x348u));
/* 73e4aa: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73e4ad: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73e4af: mov dword ptr [esi + 0x348], ecx */
  W32((uint32_t)(esi + 0x348u), ecx);
/* 73e4b5: mov eax, dword ptr [edi + 0x348] */
  eax = R32((uint32_t)(edi + 0x348u));
/* 73e4bb: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73e4bd: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73e4c0: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73e4c2: mov dword ptr [esi + 0x348], eax */
  W32((uint32_t)(esi + 0x348u), eax);
/* 73e4c8: mov ecx, dword ptr [edi + 0x348] */
  ecx = R32((uint32_t)(edi + 0x348u));
/* 73e4ce: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73e4d0: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73e4d3: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73e4d5: mov dword ptr [esi + 0x348], ecx */
  W32((uint32_t)(esi + 0x348u), ecx);
/* 73e4db: mov edx, dword ptr [edi + 0x348] */
  edx = R32((uint32_t)(edi + 0x348u));
/* 73e4e1: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 73e4e3: and edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 73e4e6: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 73e4e8: mov dword ptr [esi + 0x348], edx */
  W32((uint32_t)(esi + 0x348u), edx);
/* 73e4ee: mov al, byte ptr [edi + 0x34c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x34cu))) & 0xffu);
/* 73e4f4: mov byte ptr [esi + 0x34c], al */
  W8((uint32_t)(esi + 0x34cu), (eax & 0xffu));
/* 73e4fa: mov cl, byte ptr [edi + 0x34d] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x34du))) & 0xffu);
/* 73e500: mov byte ptr [esi + 0x34d], cl */
  W8((uint32_t)(esi + 0x34du), (ecx & 0xffu));
/* 73e506: lea edx, [edi + 0x350] */
  edx = (uint32_t)(edi + 0x350u);
/* 73e50c: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 73e50e: lea eax, [esi + 0x350] */
  eax = (uint32_t)(esi + 0x350u);
/* 73e514: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 73e516: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 73e519: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 73e51c: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 73e51f: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 73e522: add edi, 0x35c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x35cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 73e528: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 73e52a: lea eax, [esi + 0x35c] */
  eax = (uint32_t)(esi + 0x35cu);
/* 73e530: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 73e532: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 73e535: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 73e538: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 73e53b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 73e53e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73e53f: mov eax, esi */
  eax = esi;
/* 73e541: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73e542: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73e590(void) {
  LOAD_REGS();
L_73e590: /* 73e590: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73e591: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73e592: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 73e596: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73e597: mov esi, ecx */
  esi = ecx;
/* 73e599: call 0x6c5cef */
  esp -= 4; W32(esp, 0x73e59eu); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 73e59e: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 73e5a4: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 73e5aa: mov ecx, dword ptr [edi + 0x340] */
  ecx = R32((uint32_t)(edi + 0x340u));
/* 73e5b0: mov eax, dword ptr [esi + 0x348] */
  eax = R32((uint32_t)(esi + 0x348u));
/* 73e5b6: mov dword ptr [esi + 0x340], ecx */
  W32((uint32_t)(esi + 0x340u), ecx);
/* 73e5bc: mov edx, dword ptr [edi + 0x344] */
  edx = R32((uint32_t)(edi + 0x344u));
/* 73e5c2: mov dword ptr [esi + 0x344], edx */
  W32((uint32_t)(esi + 0x344u), edx);
/* 73e5c8: xor eax, dword ptr [edi + 0x348] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x348u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73e5ce: mov ecx, dword ptr [esi + 0x348] */
  ecx = R32((uint32_t)(esi + 0x348u));
/* 73e5d4: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73e5d7: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73e5d9: mov dword ptr [esi + 0x348], ecx */
  W32((uint32_t)(esi + 0x348u), ecx);
/* 73e5df: mov eax, dword ptr [edi + 0x348] */
  eax = R32((uint32_t)(edi + 0x348u));
/* 73e5e5: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73e5e7: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73e5ea: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73e5ec: mov dword ptr [esi + 0x348], eax */
  W32((uint32_t)(esi + 0x348u), eax);
/* 73e5f2: mov ecx, dword ptr [edi + 0x348] */
  ecx = R32((uint32_t)(edi + 0x348u));
/* 73e5f8: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73e5fa: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73e5fd: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73e5ff: mov dword ptr [esi + 0x348], ecx */
  W32((uint32_t)(esi + 0x348u), ecx);
/* 73e605: mov edx, dword ptr [edi + 0x348] */
  edx = R32((uint32_t)(edi + 0x348u));
/* 73e60b: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 73e60d: and edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 73e610: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 73e612: mov dword ptr [esi + 0x348], edx */
  W32((uint32_t)(esi + 0x348u), edx);
/* 73e618: mov al, byte ptr [edi + 0x34c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x34cu))) & 0xffu);
/* 73e61e: mov byte ptr [esi + 0x34c], al */
  W8((uint32_t)(esi + 0x34cu), (eax & 0xffu));
/* 73e624: mov cl, byte ptr [edi + 0x34d] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x34du))) & 0xffu);
/* 73e62a: mov byte ptr [esi + 0x34d], cl */
  W8((uint32_t)(esi + 0x34du), (ecx & 0xffu));
/* 73e630: lea edx, [edi + 0x350] */
  edx = (uint32_t)(edi + 0x350u);
/* 73e636: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 73e638: lea eax, [esi + 0x350] */
  eax = (uint32_t)(esi + 0x350u);
/* 73e63e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 73e640: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 73e643: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 73e646: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 73e649: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 73e64c: add edi, 0x35c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x35cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 73e652: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 73e654: lea eax, [esi + 0x35c] */
  eax = (uint32_t)(esi + 0x35cu);
/* 73e65a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 73e65c: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 73e65f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 73e662: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 73e665: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 73e668: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73e669: mov eax, esi */
  eax = esi;
/* 73e66b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73e66c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73e6b0(void) {
  LOAD_REGS();
L_73e6b0: /* 73e6b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73e6b1: mov esi, ecx */
  esi = ecx;
/* 73e6b3: call 0x6c25d1 */
  esp -= 4; W32(esp, 0x73e6b8u); SPILL(); f_6c25d1(); if (g_unwind) return; RELOAD();
/* 73e6b8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73e6bd: je 0x73e6ce */
  if (zf) goto L_73e6ce;
L_73e6bf: /* 73e6bf: push 0x368 */
  { uint32_t v = 0x368u; esp -= 4; W32(esp, v); }
/* 73e6c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73e6c5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73e6cbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73e6cb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73e6ce: /* 73e6ce: mov eax, esi */
  eax = esi;
/* 73e6d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73e6d1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73e6f0(void) {
  LOAD_REGS();
L_73e6f0: /* 73e6f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73e6f1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 73e6f5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73e6f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73e6f9: mov esi, ecx */
  esi = ecx;
/* 73e6fb: je 0x73e730 */
  if (zf) goto L_73e730;
L_73e6fd: /* 73e6fd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 73e700: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73e701: push 0x6c25d1 */
  { uint32_t v = 0x6c25d1u; esp -= 4; W32(esp, v); }
/* 73e706: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 73e709: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73e70a: push 0x368 */
  { uint32_t v = 0x368u; esp -= 4; W32(esp, v); }
/* 73e70f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73e710: call 0x99ca3d */
  esp -= 4; W32(esp, 0x73e715u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 73e715: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73e718: je 0x73e728 */
  if (zf) goto L_73e728;
L_73e71a: /* 73e71a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 73e720: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 73e722: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 73e724: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73e725: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x73e728u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_73e728: /* 73e728: mov eax, edi */
  eax = edi;
/* 73e72a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73e72b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73e72c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73e72d: ret 4 */
  esp += 8; SPILL(); return;
L_73e730: /* 73e730: mov ecx, esi */
  ecx = esi;
/* 73e732: call 0x6c25d1 */
  esp -= 4; W32(esp, 0x73e737u); SPILL(); f_6c25d1(); if (g_unwind) return; RELOAD();
/* 73e737: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73e73a: je 0x73e74b */
  if (zf) goto L_73e74b;
L_73e73c: /* 73e73c: push 0x368 */
  { uint32_t v = 0x368u; esp -= 4; W32(esp, v); }
/* 73e741: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73e742: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73e748u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73e748: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73e74b: /* 73e74b: mov eax, esi */
  eax = esi;
/* 73e74d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73e74e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73e74f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73e780(void) {
  LOAD_REGS();
L_73e780: /* 73e780: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73e782: push 0x9c6603 */
  { uint32_t v = 0x9c6603u; esp -= 4; W32(esp, v); }
/* 73e787: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73e78d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73e78e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73e795: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73e796: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73e797: mov esi, ecx */
  esi = ecx;
/* 73e799: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73e79d: mov dword ptr [esi], 0x9fbd90 */
  W32((uint32_t)(esi), 0x9fbd90u);
/* 73e7a3: mov dword ptr [esp + 0x10], 3 */
  W32((uint32_t)(esp + 0x10u), 0x3u);
/* 73e7ab: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x73e7b1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 73e7b1: lea ecx, [esi + 0x39c] */
  ecx = (uint32_t)(esi + 0x39cu);
/* 73e7b7: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 73e7bc: call 0x6c41ab */
  esp -= 4; W32(esp, 0x73e7c1u); SPILL(); f_6c41ab(); if (g_unwind) return; RELOAD();
/* 73e7c1: lea ecx, [esi + 0x35c] */
  ecx = (uint32_t)(esi + 0x35cu);
/* 73e7c7: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 73e7cc: call 0x6c9868 */
  esp -= 4; W32(esp, 0x73e7d1u); SPILL(); f_6c9868(); if (g_unwind) return; RELOAD();
/* 73e7d1: lea ecx, [esi + 0x344] */
  ecx = (uint32_t)(esi + 0x344u);
/* 73e7d7: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 73e7dc: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73e7e2u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73e7e2: mov ecx, esi */
  ecx = esi;
/* 73e7e4: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 73e7ec: call 0x6c688e */
  esp -= 4; W32(esp, 0x73e7f1u); SPILL(); f_6c688e(); if (g_unwind) return; RELOAD();
/* 73e7f1: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 73e7f5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73e7f6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73e7fd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73e800: ret  */
  esp += 4; SPILL(); return;
}

void f_73e840(void) {
  LOAD_REGS();
L_73e840: /* 73e840: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73e842: push 0x9c6645 */
  { uint32_t v = 0x9c6645u; esp -= 4; W32(esp, v); }
/* 73e847: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73e84d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73e84e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73e855: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73e856: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73e857: mov esi, ecx */
  esi = ecx;
/* 73e859: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73e85d: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x73e862u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 73e862: lea ecx, [esi + 0x340] */
  ecx = (uint32_t)(esi + 0x340u);
/* 73e868: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 73e870: mov dword ptr [esi], 0x9fbd90 */
  W32((uint32_t)(esi), 0x9fbd90u);
/* 73e876: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x73e87cu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 73e87c: lea ecx, [esi + 0x344] */
  ecx = (uint32_t)(esi + 0x344u);
/* 73e882: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73e888u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73e888: lea ecx, [esi + 0x35c] */
  ecx = (uint32_t)(esi + 0x35cu);
/* 73e88e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 73e890: mov byte ptr [esp + 0x14], 1 */
  W8((uint32_t)(esp + 0x14u), 0x1u);
/* 73e895: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x73e89bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 73e89b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 73e89d: lea ecx, [esi + 0x39c] */
  ecx = (uint32_t)(esi + 0x39cu);
/* 73e8a3: mov byte ptr [esp + 0x14], 2 */
  W8((uint32_t)(esp + 0x14u), 0x2u);
/* 73e8a8: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x73e8aeu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 73e8ae: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 73e8b2: mov eax, esi */
  eax = esi;
/* 73e8b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73e8b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73e8bc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73e8bf: ret  */
  esp += 4; SPILL(); return;
}

void f_73e8e0(void) {
  LOAD_REGS();
L_73e8e0: /* 73e8e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73e8e2: push 0x9c6685 */
  { uint32_t v = 0x9c6685u; esp -= 4; W32(esp, v); }
/* 73e8e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73e8ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73e8ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73e8f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73e8f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73e8f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73e8f8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 73e8fc: mov esi, ecx */
  esi = ecx;
/* 73e8fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73e8ff: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 73e903: call 0x6c1456 */
  esp -= 4; W32(esp, 0x73e908u); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 73e908: mov dword ptr [esi], 0x9fbd90 */
  W32((uint32_t)(esi), 0x9fbd90u);
/* 73e90e: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 73e914: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 73e91a: mov ecx, dword ptr [edi + 0x340] */
  ecx = R32((uint32_t)(edi + 0x340u));
/* 73e920: lea edx, [edi + 0x344] */
  edx = (uint32_t)(edi + 0x344u);
/* 73e926: mov dword ptr [esi + 0x340], ecx */
  W32((uint32_t)(esi + 0x340u), ecx);
/* 73e92c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73e92d: lea ecx, [esi + 0x344] */
  ecx = (uint32_t)(esi + 0x344u);
/* 73e933: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 73e93b: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73e941u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73e941: mov eax, dword ptr [edi + 0x350] */
  eax = R32((uint32_t)(edi + 0x350u));
/* 73e947: mov edx, dword ptr [esi + 0x358] */
  edx = R32((uint32_t)(esi + 0x358u));
/* 73e94d: mov dword ptr [esi + 0x350], eax */
  W32((uint32_t)(esi + 0x350u), eax);
/* 73e953: mov cl, byte ptr [edi + 0x354] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x354u))) & 0xffu);
/* 73e959: mov byte ptr [esi + 0x354], cl */
  W8((uint32_t)(esi + 0x354u), (ecx & 0xffu));
/* 73e95f: xor edx, dword ptr [edi + 0x358] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x358u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 73e965: mov eax, dword ptr [esi + 0x358] */
  eax = R32((uint32_t)(esi + 0x358u));
/* 73e96b: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 73e96e: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73e970: mov dword ptr [esi + 0x358], eax */
  W32((uint32_t)(esi + 0x358u), eax);
/* 73e976: mov ecx, eax */
  ecx = eax;
/* 73e978: mov eax, dword ptr [edi + 0x358] */
  eax = R32((uint32_t)(edi + 0x358u));
/* 73e97e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73e980: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73e983: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73e985: mov dword ptr [esi + 0x358], eax */
  W32((uint32_t)(esi + 0x358u), eax);
/* 73e98b: mov ecx, dword ptr [edi + 0x358] */
  ecx = R32((uint32_t)(edi + 0x358u));
/* 73e991: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73e993: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73e996: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73e998: mov dword ptr [esi + 0x358], ecx */
  W32((uint32_t)(esi + 0x358u), ecx);
/* 73e99e: mov eax, dword ptr [edi + 0x358] */
  eax = R32((uint32_t)(edi + 0x358u));
/* 73e9a4: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73e9a6: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73e9a9: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73e9ab: lea edx, [edi + 0x35c] */
  edx = (uint32_t)(edi + 0x35cu);
/* 73e9b1: lea ecx, [esi + 0x35c] */
  ecx = (uint32_t)(esi + 0x35cu);
/* 73e9b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73e9b8: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 73e9bd: mov dword ptr [esi + 0x358], eax */
  W32((uint32_t)(esi + 0x358u), eax);
/* 73e9c3: call 0x6c1217 */
  esp -= 4; W32(esp, 0x73e9c8u); SPILL(); f_6c1217(); if (g_unwind) return; RELOAD();
/* 73e9c8: lea eax, [edi + 0x368] */
  eax = (uint32_t)(edi + 0x368u);
/* 73e9ce: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 73e9d0: lea ecx, [esi + 0x368] */
  ecx = (uint32_t)(esi + 0x368u);
/* 73e9d6: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 73e9d8: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 73e9db: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 73e9de: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 73e9e1: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 73e9e4: mov cl, byte ptr [edi + 0x374] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x374u))) & 0xffu);
/* 73e9ea: mov byte ptr [esi + 0x374], cl */
  W8((uint32_t)(esi + 0x374u), (ecx & 0xffu));
/* 73e9f0: mov dl, byte ptr [edi + 0x375] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x375u))) & 0xffu);
/* 73e9f6: mov byte ptr [esi + 0x375], dl */
  W8((uint32_t)(esi + 0x375u), (edx & 0xffu));
/* 73e9fc: mov al, byte ptr [edi + 0x376] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x376u))) & 0xffu);
/* 73ea02: mov byte ptr [esi + 0x376], al */
  W8((uint32_t)(esi + 0x376u), (eax & 0xffu));
/* 73ea08: mov ecx, dword ptr [edi + 0x378] */
  ecx = R32((uint32_t)(edi + 0x378u));
/* 73ea0e: mov dword ptr [esi + 0x378], ecx */
  W32((uint32_t)(esi + 0x378u), ecx);
/* 73ea14: mov edx, dword ptr [edi + 0x37c] */
  edx = R32((uint32_t)(edi + 0x37cu));
/* 73ea1a: mov dword ptr [esi + 0x37c], edx */
  W32((uint32_t)(esi + 0x37cu), edx);
/* 73ea20: mov eax, dword ptr [edi + 0x380] */
  eax = R32((uint32_t)(edi + 0x380u));
/* 73ea26: mov dword ptr [esi + 0x380], eax */
  W32((uint32_t)(esi + 0x380u), eax);
/* 73ea2c: mov ecx, dword ptr [edi + 0x384] */
  ecx = R32((uint32_t)(edi + 0x384u));
/* 73ea32: mov dword ptr [esi + 0x384], ecx */
  W32((uint32_t)(esi + 0x384u), ecx);
/* 73ea38: mov edx, dword ptr [edi + 0x388] */
  edx = R32((uint32_t)(edi + 0x388u));
/* 73ea3e: mov dword ptr [esi + 0x388], edx */
  W32((uint32_t)(esi + 0x388u), edx);
/* 73ea44: mov eax, dword ptr [edi + 0x38c] */
  eax = R32((uint32_t)(edi + 0x38cu));
/* 73ea4a: mov dword ptr [esi + 0x38c], eax */
  W32((uint32_t)(esi + 0x38cu), eax);
/* 73ea50: mov ecx, dword ptr [edi + 0x390] */
  ecx = R32((uint32_t)(edi + 0x390u));
/* 73ea56: mov byte ptr [esp + 0x14], 2 */
  W8((uint32_t)(esp + 0x14u), 0x2u);
/* 73ea5b: mov dword ptr [esi + 0x390], ecx */
  W32((uint32_t)(esi + 0x390u), ecx);
/* 73ea61: mov edx, dword ptr [edi + 0x394] */
  edx = R32((uint32_t)(edi + 0x394u));
/* 73ea67: mov ecx, dword ptr [esi + 0x398] */
  ecx = R32((uint32_t)(esi + 0x398u));
/* 73ea6d: mov dword ptr [esi + 0x394], edx */
  W32((uint32_t)(esi + 0x394u), edx);
/* 73ea73: mov eax, dword ptr [edi + 0x398] */
  eax = R32((uint32_t)(edi + 0x398u));
/* 73ea79: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73ea7b: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73ea7e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73ea80: add edi, 0x39c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x39cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 73ea86: mov dword ptr [esi + 0x398], ecx */
  W32((uint32_t)(esi + 0x398u), ecx);
/* 73ea8c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73ea8d: lea ecx, [esi + 0x39c] */
  ecx = (uint32_t)(esi + 0x39cu);
/* 73ea93: call 0x6c7ecd */
  esp -= 4; W32(esp, 0x73ea98u); SPILL(); f_6c7ecd(); if (g_unwind) return; RELOAD();
/* 73ea98: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 73ea9c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73ea9d: mov eax, esi */
  eax = esi;
/* 73ea9f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73eaa0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73eaa7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73eaaa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73eb30(void) {
  LOAD_REGS();
L_73eb30: /* 73eb30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73eb31: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73eb32: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 73eb36: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73eb37: mov esi, ecx */
  esi = ecx;
/* 73eb39: call 0x6c5cef */
  esp -= 4; W32(esp, 0x73eb3eu); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 73eb3e: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 73eb44: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 73eb4a: mov ecx, dword ptr [edi + 0x340] */
  ecx = R32((uint32_t)(edi + 0x340u));
/* 73eb50: lea edx, [edi + 0x344] */
  edx = (uint32_t)(edi + 0x344u);
/* 73eb56: mov dword ptr [esi + 0x340], ecx */
  W32((uint32_t)(esi + 0x340u), ecx);
/* 73eb5c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73eb5d: lea ecx, [esi + 0x344] */
  ecx = (uint32_t)(esi + 0x344u);
/* 73eb63: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x73eb69u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 73eb69: mov eax, dword ptr [edi + 0x350] */
  eax = R32((uint32_t)(edi + 0x350u));
/* 73eb6f: mov edx, dword ptr [esi + 0x358] */
  edx = R32((uint32_t)(esi + 0x358u));
/* 73eb75: mov dword ptr [esi + 0x350], eax */
  W32((uint32_t)(esi + 0x350u), eax);
/* 73eb7b: mov cl, byte ptr [edi + 0x354] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x354u))) & 0xffu);
/* 73eb81: mov byte ptr [esi + 0x354], cl */
  W8((uint32_t)(esi + 0x354u), (ecx & 0xffu));
/* 73eb87: xor edx, dword ptr [edi + 0x358] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x358u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 73eb8d: mov eax, dword ptr [esi + 0x358] */
  eax = R32((uint32_t)(esi + 0x358u));
/* 73eb93: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 73eb96: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73eb98: mov dword ptr [esi + 0x358], eax */
  W32((uint32_t)(esi + 0x358u), eax);
/* 73eb9e: mov ecx, eax */
  ecx = eax;
/* 73eba0: mov eax, dword ptr [edi + 0x358] */
  eax = R32((uint32_t)(edi + 0x358u));
/* 73eba6: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73eba8: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73ebab: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73ebad: mov dword ptr [esi + 0x358], eax */
  W32((uint32_t)(esi + 0x358u), eax);
/* 73ebb3: mov ecx, dword ptr [edi + 0x358] */
  ecx = R32((uint32_t)(edi + 0x358u));
/* 73ebb9: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73ebbb: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73ebbe: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73ebc0: mov dword ptr [esi + 0x358], ecx */
  W32((uint32_t)(esi + 0x358u), ecx);
/* 73ebc6: mov eax, dword ptr [edi + 0x358] */
  eax = R32((uint32_t)(edi + 0x358u));
/* 73ebcc: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73ebce: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73ebd1: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73ebd3: lea ecx, [edi + 0x35c] */
  ecx = (uint32_t)(edi + 0x35cu);
/* 73ebd9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73ebda: lea ecx, [esi + 0x35c] */
  ecx = (uint32_t)(esi + 0x35cu);
/* 73ebe0: mov dword ptr [esi + 0x358], eax */
  W32((uint32_t)(esi + 0x358u), eax);
/* 73ebe6: call 0x6c7167 */
  esp -= 4; W32(esp, 0x73ebebu); SPILL(); f_6c7167(); if (g_unwind) return; RELOAD();
/* 73ebeb: lea edx, [edi + 0x368] */
  edx = (uint32_t)(edi + 0x368u);
/* 73ebf1: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 73ebf3: lea eax, [esi + 0x368] */
  eax = (uint32_t)(esi + 0x368u);
/* 73ebf9: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 73ebfb: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 73ebfe: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 73ec01: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 73ec04: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 73ec07: mov al, byte ptr [edi + 0x374] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x374u))) & 0xffu);
/* 73ec0d: mov byte ptr [esi + 0x374], al */
  W8((uint32_t)(esi + 0x374u), (eax & 0xffu));
/* 73ec13: mov cl, byte ptr [edi + 0x375] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x375u))) & 0xffu);
/* 73ec19: mov byte ptr [esi + 0x375], cl */
  W8((uint32_t)(esi + 0x375u), (ecx & 0xffu));
/* 73ec1f: mov dl, byte ptr [edi + 0x376] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x376u))) & 0xffu);
/* 73ec25: mov byte ptr [esi + 0x376], dl */
  W8((uint32_t)(esi + 0x376u), (edx & 0xffu));
/* 73ec2b: mov eax, dword ptr [edi + 0x378] */
  eax = R32((uint32_t)(edi + 0x378u));
/* 73ec31: mov dword ptr [esi + 0x378], eax */
  W32((uint32_t)(esi + 0x378u), eax);
/* 73ec37: mov ecx, dword ptr [edi + 0x37c] */
  ecx = R32((uint32_t)(edi + 0x37cu));
/* 73ec3d: mov dword ptr [esi + 0x37c], ecx */
  W32((uint32_t)(esi + 0x37cu), ecx);
/* 73ec43: mov edx, dword ptr [edi + 0x380] */
  edx = R32((uint32_t)(edi + 0x380u));
/* 73ec49: mov dword ptr [esi + 0x380], edx */
  W32((uint32_t)(esi + 0x380u), edx);
/* 73ec4f: mov eax, dword ptr [edi + 0x384] */
  eax = R32((uint32_t)(edi + 0x384u));
/* 73ec55: mov dword ptr [esi + 0x384], eax */
  W32((uint32_t)(esi + 0x384u), eax);
/* 73ec5b: mov ecx, dword ptr [edi + 0x388] */
  ecx = R32((uint32_t)(edi + 0x388u));
/* 73ec61: mov dword ptr [esi + 0x388], ecx */
  W32((uint32_t)(esi + 0x388u), ecx);
/* 73ec67: mov edx, dword ptr [edi + 0x38c] */
  edx = R32((uint32_t)(edi + 0x38cu));
/* 73ec6d: mov dword ptr [esi + 0x38c], edx */
  W32((uint32_t)(esi + 0x38cu), edx);
/* 73ec73: mov eax, dword ptr [edi + 0x390] */
  eax = R32((uint32_t)(edi + 0x390u));
/* 73ec79: mov dword ptr [esi + 0x390], eax */
  W32((uint32_t)(esi + 0x390u), eax);
/* 73ec7f: mov ecx, dword ptr [edi + 0x394] */
  ecx = R32((uint32_t)(edi + 0x394u));
/* 73ec85: mov dword ptr [esi + 0x394], ecx */
  W32((uint32_t)(esi + 0x394u), ecx);
/* 73ec8b: mov ecx, dword ptr [esi + 0x398] */
  ecx = R32((uint32_t)(esi + 0x398u));
/* 73ec91: mov edx, dword ptr [edi + 0x398] */
  edx = R32((uint32_t)(edi + 0x398u));
/* 73ec97: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 73ec99: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 73ec9c: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73ec9e: mov dword ptr [esi + 0x398], ecx */
  W32((uint32_t)(esi + 0x398u), ecx);
/* 73eca4: add edi, 0x39c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x39cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 73ecaa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73ecab: lea ecx, [esi + 0x39c] */
  ecx = (uint32_t)(esi + 0x39cu);
/* 73ecb1: call 0x6c10e1 */
  esp -= 4; W32(esp, 0x73ecb6u); SPILL(); f_6c10e1(); if (g_unwind) return; RELOAD();
/* 73ecb6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73ecb7: mov eax, esi */
  eax = esi;
/* 73ecb9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73ecba: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73ed30(void) {
  LOAD_REGS();
L_73ed30: /* 73ed30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73ed31: mov esi, ecx */
  esi = ecx;
/* 73ed33: call 0x6c5128 */
  esp -= 4; W32(esp, 0x73ed38u); SPILL(); f_6c5128(); if (g_unwind) return; RELOAD();
/* 73ed38: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73ed3d: je 0x73ed4e */
  if (zf) goto L_73ed4e;
L_73ed3f: /* 73ed3f: push 0x3a8 */
  { uint32_t v = 0x3a8u; esp -= 4; W32(esp, v); }
/* 73ed44: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73ed45: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73ed4bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73ed4b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73ed4e: /* 73ed4e: mov eax, esi */
  eax = esi;
/* 73ed50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73ed51: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73ed70(void) {
  LOAD_REGS();
L_73ed70: /* 73ed70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73ed71: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 73ed75: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73ed78: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73ed79: mov esi, ecx */
  esi = ecx;
/* 73ed7b: je 0x73edb0 */
  if (zf) goto L_73edb0;
L_73ed7d: /* 73ed7d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 73ed80: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73ed81: push 0x6c5128 */
  { uint32_t v = 0x6c5128u; esp -= 4; W32(esp, v); }
/* 73ed86: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 73ed89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73ed8a: push 0x3a8 */
  { uint32_t v = 0x3a8u; esp -= 4; W32(esp, v); }
/* 73ed8f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73ed90: call 0x99ca3d */
  esp -= 4; W32(esp, 0x73ed95u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 73ed95: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73ed98: je 0x73eda8 */
  if (zf) goto L_73eda8;
L_73ed9a: /* 73ed9a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 73eda0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 73eda2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 73eda4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73eda5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x73eda8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_73eda8: /* 73eda8: mov eax, edi */
  eax = edi;
/* 73edaa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73edab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73edac: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73edad: ret 4 */
  esp += 8; SPILL(); return;
L_73edb0: /* 73edb0: mov ecx, esi */
  ecx = esi;
/* 73edb2: call 0x6c5128 */
  esp -= 4; W32(esp, 0x73edb7u); SPILL(); f_6c5128(); if (g_unwind) return; RELOAD();
/* 73edb7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73edba: je 0x73edcb */
  if (zf) goto L_73edcb;
L_73edbc: /* 73edbc: push 0x3a8 */
  { uint32_t v = 0x3a8u; esp -= 4; W32(esp, v); }
/* 73edc1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73edc2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73edc8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73edc8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73edcb: /* 73edcb: mov eax, esi */
  eax = esi;
/* 73edcd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73edce: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73edcf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73ee00(void) {
  LOAD_REGS();
L_73ee00: /* 73ee00: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73ee02: push 0x9c66d1 */
  { uint32_t v = 0x9c66d1u; esp -= 4; W32(esp, v); }
/* 73ee07: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73ee0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73ee0e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73ee15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73ee16: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73ee17: mov esi, ecx */
  esi = ecx;
/* 73ee19: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73ee1d: mov dword ptr [esi], 0x9fbf70 */
  W32((uint32_t)(esi), 0x9fbf70u);
/* 73ee23: mov dword ptr [esp + 0x10], 2 */
  W32((uint32_t)(esp + 0x10u), 0x2u);
/* 73ee2b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x73ee31u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 73ee31: mov eax, dword ptr [0xcfa304] */
  eax = R32((uint32_t)(0xcfa304u));
/* 73ee36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73ee37: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 73ee39: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 73ee3b: lea ecx, [esi + 0x3f8] */
  ecx = (uint32_t)(esi + 0x3f8u);
/* 73ee41: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73ee42: mov byte ptr [esp + 0x20], 1 */
  W8((uint32_t)(esp + 0x20u), 0x1u);
/* 73ee47: call 0x99ca3d */
  esp -= 4; W32(esp, 0x73ee4cu); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 73ee4c: lea ecx, [esi + 0x3a8] */
  ecx = (uint32_t)(esi + 0x3a8u);
/* 73ee52: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 73ee57: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73ee5du); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73ee5d: mov ecx, esi */
  ecx = esi;
/* 73ee5f: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 73ee67: call 0x6c5128 */
  esp -= 4; W32(esp, 0x73ee6cu); SPILL(); f_6c5128(); if (g_unwind) return; RELOAD();
/* 73ee6c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 73ee70: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73ee71: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73ee78: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73ee7b: ret  */
  esp += 4; SPILL(); return;
}

void f_73eea0(void) {
  LOAD_REGS();
L_73eea0: /* 73eea0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73eea2: push 0x9c6707 */
  { uint32_t v = 0x9c6707u; esp -= 4; W32(esp, v); }
/* 73eea7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73eead: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73eeae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73eeb5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73eeb6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73eeb7: mov esi, ecx */
  esi = ecx;
/* 73eeb9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73eebd: call 0x6cab64 */
  esp -= 4; W32(esp, 0x73eec2u); SPILL(); f_6cab64(); if (g_unwind) return; RELOAD();
/* 73eec2: lea ecx, [esi + 0x3a8] */
  ecx = (uint32_t)(esi + 0x3a8u);
/* 73eec8: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 73eed0: mov dword ptr [esi], 0x9fbf70 */
  W32((uint32_t)(esi), 0x9fbf70u);
/* 73eed6: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73eedcu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73eedc: lea ecx, [esi + 0x3b4] */
  ecx = (uint32_t)(esi + 0x3b4u);
/* 73eee2: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 73eee7: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x73eeedu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 73eeed: lea ecx, [esi + 0x3c0] */
  ecx = (uint32_t)(esi + 0x3c0u);
/* 73eef3: call dword ptr [0xcfa434] */
  esp -= 4; W32(esp, 0x73eef9u); SPILL(); f_4e125d(); if (g_unwind) return; /* Core!??0FCoords@@QAE@XZ */ RELOAD();
/* 73eef9: mov eax, dword ptr [0xcfa304] */
  eax = R32((uint32_t)(0xcfa304u));
/* 73eefe: mov ecx, dword ptr [0xcfa300] */
  ecx = R32((uint32_t)(0xcfa300u));
/* 73ef04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73ef05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73ef06: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 73ef08: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 73ef0a: lea edx, [esi + 0x3f8] */
  edx = (uint32_t)(esi + 0x3f8u);
/* 73ef10: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73ef11: call 0x99cafe */
  esp -= 4; W32(esp, 0x73ef16u); SPILL(); f_99cafe(); if (g_unwind) return; RELOAD();
/* 73ef16: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 73ef1a: mov eax, esi */
  eax = esi;
/* 73ef1c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73ef1d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73ef24: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73ef27: ret  */
  esp += 4; SPILL(); return;
}

void f_73ef60(void) {
  LOAD_REGS();
L_73ef60: /* 73ef60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73ef62: push 0x9c6737 */
  { uint32_t v = 0x9c6737u; esp -= 4; W32(esp, v); }
/* 73ef67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73ef6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73ef6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73ef75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73ef76: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73ef77: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 73ef78: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 73ef7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73ef7d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73ef7e: mov ebx, ecx */
  ebx = ecx;
/* 73ef80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 73ef81: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 73ef85: call 0x6c6271 */
  esp -= 4; W32(esp, 0x73ef8au); SPILL(); f_6c6271(); if (g_unwind) return; RELOAD();
/* 73ef8a: lea eax, [ebp + 0x3a8] */
  eax = (uint32_t)(ebp + 0x3a8u);
/* 73ef90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73ef91: lea ecx, [ebx + 0x3a8] */
  ecx = (uint32_t)(ebx + 0x3a8u);
/* 73ef97: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 73ef9f: mov dword ptr [ebx], 0x9fbf70 */
  W32((uint32_t)(ebx), 0x9fbf70u);
/* 73efa5: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73efabu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73efab: mov ecx, dword ptr [ebp + 0x3b4] */
  ecx = R32((uint32_t)(ebp + 0x3b4u));
/* 73efb1: mov dword ptr [ebx + 0x3b4], ecx */
  W32((uint32_t)(ebx + 0x3b4u), ecx);
/* 73efb7: mov edx, dword ptr [ebp + 0x3b8] */
  edx = R32((uint32_t)(ebp + 0x3b8u));
/* 73efbd: mov ecx, dword ptr [ebx + 0x3b8] */
  ecx = R32((uint32_t)(ebx + 0x3b8u));
/* 73efc3: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 73efc5: mov edi, ecx */
  edi = ecx;
/* 73efc7: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 73efca: xor edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 73efcc: mov dword ptr [ebx + 0x3b8], edi */
  W32((uint32_t)(ebx + 0x3b8u), edi);
/* 73efd2: mov eax, dword ptr [ebp + 0x3bc] */
  eax = R32((uint32_t)(ebp + 0x3bcu));
/* 73efd8: mov dword ptr [ebx + 0x3bc], eax */
  W32((uint32_t)(ebx + 0x3bcu), eax);
/* 73efde: mov eax, dword ptr [0xcfa304] */
  eax = R32((uint32_t)(0xcfa304u));
/* 73efe3: lea esi, [ebp + 0x3c0] */
  esi = (uint32_t)(ebp + 0x3c0u);
/* 73efe9: lea edi, [ebx + 0x3c0] */
  edi = (uint32_t)(ebx + 0x3c0u);
/* 73efef: mov ecx, 0xc */
  ecx = 0xcu;
/* 73eff4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 73eff6: mov ecx, dword ptr [ebp + 0x3f0] */
  ecx = R32((uint32_t)(ebp + 0x3f0u));
/* 73effc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73effd: mov dword ptr [ebx + 0x3f0], ecx */
  W32((uint32_t)(ebx + 0x3f0u), ecx);
/* 73f003: mov ecx, dword ptr [0xcfa308] */
  ecx = R32((uint32_t)(0xcfa308u));
/* 73f009: mov edx, dword ptr [ebp + 0x3f4] */
  edx = R32((uint32_t)(ebp + 0x3f4u));
/* 73f00f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73f010: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 73f012: mov dword ptr [ebx + 0x3f4], edx */
  W32((uint32_t)(ebx + 0x3f4u), edx);
/* 73f018: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 73f01a: lea edx, [ebp + 0x3f8] */
  edx = (uint32_t)(ebp + 0x3f8u);
/* 73f020: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73f021: lea eax, [ebx + 0x3f8] */
  eax = (uint32_t)(ebx + 0x3f8u);
/* 73f027: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73f028: mov byte ptr [esp + 0x34], 1 */
  W8((uint32_t)(esp + 0x34u), 0x1u);
/* 73f02d: call 0x99cb60 */
  esp -= 4; W32(esp, 0x73f032u); SPILL(); f_99cb60(); if (g_unwind) return; RELOAD();
/* 73f032: mov ecx, dword ptr [ebp + 0x458] */
  ecx = R32((uint32_t)(ebp + 0x458u));
/* 73f038: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73f039: mov dword ptr [ebx + 0x458], ecx */
  W32((uint32_t)(ebx + 0x458u), ecx);
/* 73f03f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 73f043: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73f044: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 73f045: mov eax, ebx */
  eax = ebx;
/* 73f047: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73f048: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73f04f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73f052: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73f0a0(void) {
  LOAD_REGS();
L_73f0a0: /* 73f0a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73f0a1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 73f0a2: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 73f0a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73f0a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73f0a8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 73f0a9: mov ebx, ecx */
  ebx = ecx;
/* 73f0ab: call 0x6c6b8b */
  esp -= 4; W32(esp, 0x73f0b0u); SPILL(); f_6c6b8b(); if (g_unwind) return; RELOAD();
/* 73f0b0: lea eax, [ebp + 0x3a8] */
  eax = (uint32_t)(ebp + 0x3a8u);
/* 73f0b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73f0b7: lea ecx, [ebx + 0x3a8] */
  ecx = (uint32_t)(ebx + 0x3a8u);
/* 73f0bd: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x73f0c3u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 73f0c3: mov ecx, dword ptr [ebp + 0x3b4] */
  ecx = R32((uint32_t)(ebp + 0x3b4u));
/* 73f0c9: mov edi, dword ptr [ebx + 0x3b8] */
  edi = R32((uint32_t)(ebx + 0x3b8u));
/* 73f0cf: mov dword ptr [ebx + 0x3b4], ecx */
  W32((uint32_t)(ebx + 0x3b4u), ecx);
/* 73f0d5: mov edx, dword ptr [ebp + 0x3b8] */
  edx = R32((uint32_t)(ebp + 0x3b8u));
/* 73f0db: xor edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 73f0dd: mov ecx, edi */
  ecx = edi;
/* 73f0df: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 73f0e2: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73f0e4: mov dword ptr [ebx + 0x3b8], ecx */
  W32((uint32_t)(ebx + 0x3b8u), ecx);
/* 73f0ea: mov eax, dword ptr [ebp + 0x3bc] */
  eax = R32((uint32_t)(ebp + 0x3bcu));
/* 73f0f0: mov dword ptr [ebx + 0x3bc], eax */
  W32((uint32_t)(ebx + 0x3bcu), eax);
/* 73f0f6: lea esi, [ebp + 0x3c0] */
  esi = (uint32_t)(ebp + 0x3c0u);
/* 73f0fc: lea edi, [ebx + 0x3c0] */
  edi = (uint32_t)(ebx + 0x3c0u);
/* 73f102: mov ecx, 0xc */
  ecx = 0xcu;
/* 73f107: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 73f109: mov ecx, dword ptr [ebp + 0x3f0] */
  ecx = R32((uint32_t)(ebp + 0x3f0u));
/* 73f10f: mov dword ptr [ebx + 0x3f0], ecx */
  W32((uint32_t)(ebx + 0x3f0u), ecx);
/* 73f115: mov edx, dword ptr [ebp + 0x3f4] */
  edx = R32((uint32_t)(ebp + 0x3f4u));
/* 73f11b: mov edi, ebp */
  edi = ebp;
/* 73f11d: mov dword ptr [ebx + 0x3f4], edx */
  W32((uint32_t)(ebx + 0x3f4u), edx);
/* 73f123: lea esi, [ebx + 0x3f8] */
  esi = (uint32_t)(ebx + 0x3f8u);
/* 73f129: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 73f12b: mov dword ptr [esp + 0x14], 8 */
  W32((uint32_t)(esp + 0x14u), 0x8u);
L_73f133: /* 73f133: lea eax, [edi + esi] */
  eax = (uint32_t)(edi + esi);
/* 73f136: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73f137: mov ecx, esi */
  ecx = esi;
/* 73f139: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x73f13fu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 73f13f: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 73f143: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 73f146: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 73f147: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 73f14b: jne 0x73f133 */
  if (!zf) goto L_73f133;
L_73f14d: /* 73f14d: mov ecx, dword ptr [ebp + 0x458] */
  ecx = R32((uint32_t)(ebp + 0x458u));
/* 73f153: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73f154: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73f155: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 73f156: mov dword ptr [ebx + 0x458], ecx */
  W32((uint32_t)(ebx + 0x458u), ecx);
/* 73f15c: mov eax, ebx */
  eax = ebx;
/* 73f15e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73f15f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73f1b0(void) {
  LOAD_REGS();
L_73f1b0: /* 73f1b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73f1b1: mov esi, ecx */
  esi = ecx;
/* 73f1b3: call 0x6c34c7 */
  esp -= 4; W32(esp, 0x73f1b8u); SPILL(); f_6c34c7(); if (g_unwind) return; RELOAD();
/* 73f1b8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73f1bd: je 0x73f1ce */
  if (zf) goto L_73f1ce;
L_73f1bf: /* 73f1bf: push 0x45c */
  { uint32_t v = 0x45cu; esp -= 4; W32(esp, v); }
/* 73f1c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73f1c5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73f1cbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73f1cb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73f1ce: /* 73f1ce: mov eax, esi */
  eax = esi;
/* 73f1d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73f1d1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73f1f0(void) {
  LOAD_REGS();
L_73f1f0: /* 73f1f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73f1f1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 73f1f5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73f1f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73f1f9: mov esi, ecx */
  esi = ecx;
/* 73f1fb: je 0x73f230 */
  if (zf) goto L_73f230;
L_73f1fd: /* 73f1fd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 73f200: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73f201: push 0x6c34c7 */
  { uint32_t v = 0x6c34c7u; esp -= 4; W32(esp, v); }
/* 73f206: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 73f209: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73f20a: push 0x45c */
  { uint32_t v = 0x45cu; esp -= 4; W32(esp, v); }
/* 73f20f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73f210: call 0x99ca3d */
  esp -= 4; W32(esp, 0x73f215u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 73f215: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73f218: je 0x73f228 */
  if (zf) goto L_73f228;
L_73f21a: /* 73f21a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 73f220: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 73f222: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 73f224: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73f225: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x73f228u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_73f228: /* 73f228: mov eax, edi */
  eax = edi;
/* 73f22a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73f22b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73f22c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73f22d: ret 4 */
  esp += 8; SPILL(); return;
L_73f230: /* 73f230: mov ecx, esi */
  ecx = esi;
/* 73f232: call 0x6c34c7 */
  esp -= 4; W32(esp, 0x73f237u); SPILL(); f_6c34c7(); if (g_unwind) return; RELOAD();
/* 73f237: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73f23a: je 0x73f24b */
  if (zf) goto L_73f24b;
L_73f23c: /* 73f23c: push 0x45c */
  { uint32_t v = 0x45cu; esp -= 4; W32(esp, v); }
/* 73f241: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73f242: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73f248u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73f248: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73f24b: /* 73f24b: mov eax, esi */
  eax = esi;
/* 73f24d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73f24e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73f24f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73f280(void) {
  LOAD_REGS();
L_73f280: /* 73f280: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73f282: push 0x9c6758 */
  { uint32_t v = 0x9c6758u; esp -= 4; W32(esp, v); }
/* 73f287: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73f28d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73f28e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73f295: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73f296: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73f297: mov esi, ecx */
  esi = ecx;
/* 73f299: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73f29d: mov dword ptr [esi], 0x9fc150 */
  W32((uint32_t)(esi), 0x9fc150u);
/* 73f2a3: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 73f2ab: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x73f2b1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 73f2b1: mov ecx, esi */
  ecx = esi;
/* 73f2b3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 73f2bb: call 0x6c5128 */
  esp -= 4; W32(esp, 0x73f2c0u); SPILL(); f_6c5128(); if (g_unwind) return; RELOAD();
/* 73f2c0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 73f2c4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73f2c5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73f2cc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73f2cf: ret  */
  esp += 4; SPILL(); return;
}

void f_73f2f0(void) {
  LOAD_REGS();
L_73f2f0: /* 73f2f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73f2f1: mov esi, ecx */
  esi = ecx;
/* 73f2f3: call 0x6cab64 */
  esp -= 4; W32(esp, 0x73f2f8u); SPILL(); f_6cab64(); if (g_unwind) return; RELOAD();
/* 73f2f8: mov dword ptr [esi], 0x9fc150 */
  W32((uint32_t)(esi), 0x9fc150u);
/* 73f2fe: mov eax, esi */
  eax = esi;
/* 73f300: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73f301: ret  */
  esp += 4; SPILL(); return;
}

void f_73f320(void) {
  LOAD_REGS();
L_73f320: /* 73f320: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 73f324: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73f325: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73f326: mov esi, ecx */
  esi = ecx;
/* 73f328: call 0x6c6271 */
  esp -= 4; W32(esp, 0x73f32du); SPILL(); f_6c6271(); if (g_unwind) return; RELOAD();
/* 73f32d: mov dword ptr [esi], 0x9fc150 */
  W32((uint32_t)(esi), 0x9fc150u);
/* 73f333: mov eax, esi */
  eax = esi;
/* 73f335: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73f336: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73f350(void) {
  LOAD_REGS();
L_73f350: /* 73f350: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 73f354: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73f355: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73f356: mov esi, ecx */
  esi = ecx;
/* 73f358: call 0x6c6b8b */
  esp -= 4; W32(esp, 0x73f35du); SPILL(); f_6c6b8b(); if (g_unwind) return; RELOAD();
/* 73f35d: mov eax, esi */
  eax = esi;
/* 73f35f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73f360: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73f380(void) {
  LOAD_REGS();
L_73f380: /* 73f380: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73f381: mov esi, ecx */
  esi = ecx;
/* 73f383: call 0x6cc707 */
  esp -= 4; W32(esp, 0x73f388u); SPILL(); f_6cc707(); if (g_unwind) return; RELOAD();
/* 73f388: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73f38d: je 0x73f39e */
  if (zf) goto L_73f39e;
L_73f38f: /* 73f38f: push 0x3a8 */
  { uint32_t v = 0x3a8u; esp -= 4; W32(esp, v); }
/* 73f394: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73f395: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73f39bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73f39b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73f39e: /* 73f39e: mov eax, esi */
  eax = esi;
/* 73f3a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73f3a1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73f3c0(void) {
  LOAD_REGS();
L_73f3c0: /* 73f3c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 73f3c1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 73f3c5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73f3c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73f3c9: mov esi, ecx */
  esi = ecx;
/* 73f3cb: je 0x73f400 */
  if (zf) goto L_73f400;
L_73f3cd: /* 73f3cd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 73f3d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73f3d1: push 0x6cc707 */
  { uint32_t v = 0x6cc707u; esp -= 4; W32(esp, v); }
/* 73f3d6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 73f3d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73f3da: push 0x3a8 */
  { uint32_t v = 0x3a8u; esp -= 4; W32(esp, v); }
/* 73f3df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73f3e0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x73f3e5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 73f3e5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73f3e8: je 0x73f3f8 */
  if (zf) goto L_73f3f8;
L_73f3ea: /* 73f3ea: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 73f3f0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 73f3f2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 73f3f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73f3f5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x73f3f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_73f3f8: /* 73f3f8: mov eax, edi */
  eax = edi;
/* 73f3fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73f3fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73f3fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73f3fd: ret 4 */
  esp += 8; SPILL(); return;
L_73f400: /* 73f400: mov ecx, esi */
  ecx = esi;
/* 73f402: call 0x6cc707 */
  esp -= 4; W32(esp, 0x73f407u); SPILL(); f_6cc707(); if (g_unwind) return; RELOAD();
/* 73f407: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 73f40a: je 0x73f41b */
  if (zf) goto L_73f41b;
L_73f40c: /* 73f40c: push 0x3a8 */
  { uint32_t v = 0x3a8u; esp -= 4; W32(esp, v); }
/* 73f411: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73f412: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x73f418u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 73f418: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_73f41b: /* 73f41b: mov eax, esi */
  eax = esi;
/* 73f41d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73f41e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 73f41f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73f450(void) {
  LOAD_REGS();
L_73f450: /* 73f450: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73f452: push 0x9c6857 */
  { uint32_t v = 0x9c6857u; esp -= 4; W32(esp, v); }
/* 73f457: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73f45d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73f45e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73f465: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73f466: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73f467: mov esi, ecx */
  esi = ecx;
/* 73f469: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73f46d: mov dword ptr [esi], 0x9fc330 */
  W32((uint32_t)(esi), 0x9fc330u);
/* 73f473: mov dword ptr [esp + 0x10], 0xf */
  W32((uint32_t)(esp + 0x10u), 0xfu);
/* 73f47b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x73f481u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 73f481: lea ecx, [esi + 0x540] */
  ecx = (uint32_t)(esi + 0x540u);
/* 73f487: mov byte ptr [esp + 0x10], 0xe */
  W8((uint32_t)(esp + 0x10u), 0xeu);
/* 73f48c: call 0x6c7ddd */
  esp -= 4; W32(esp, 0x73f491u); SPILL(); f_6c7ddd(); if (g_unwind) return; RELOAD();
/* 73f491: lea ecx, [esi + 0x534] */
  ecx = (uint32_t)(esi + 0x534u);
/* 73f497: mov byte ptr [esp + 0x10], 0xd */
  W8((uint32_t)(esp + 0x10u), 0xdu);
/* 73f49c: call 0x6c1b7c */
  esp -= 4; W32(esp, 0x73f4a1u); SPILL(); f_6c1b7c(); if (g_unwind) return; RELOAD();
/* 73f4a1: lea ecx, [esi + 0x51c] */
  ecx = (uint32_t)(esi + 0x51cu);
/* 73f4a7: mov byte ptr [esp + 0x10], 0xc */
  W8((uint32_t)(esp + 0x10u), 0xcu);
/* 73f4ac: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73f4b2u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73f4b2: lea ecx, [esi + 0x4fc] */
  ecx = (uint32_t)(esi + 0x4fcu);
/* 73f4b8: mov byte ptr [esp + 0x10], 0xb */
  W8((uint32_t)(esp + 0x10u), 0xbu);
/* 73f4bd: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73f4c3u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73f4c3: lea ecx, [esi + 0x4f0] */
  ecx = (uint32_t)(esi + 0x4f0u);
/* 73f4c9: mov byte ptr [esp + 0x10], 0xa */
  W8((uint32_t)(esp + 0x10u), 0xau);
/* 73f4ce: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73f4d4u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73f4d4: lea ecx, [esi + 0x4e4] */
  ecx = (uint32_t)(esi + 0x4e4u);
/* 73f4da: mov byte ptr [esp + 0x10], 9 */
  W8((uint32_t)(esp + 0x10u), 0x9u);
/* 73f4df: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73f4e5u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73f4e5: lea ecx, [esi + 0x4d8] */
  ecx = (uint32_t)(esi + 0x4d8u);
/* 73f4eb: mov byte ptr [esp + 0x10], 8 */
  W8((uint32_t)(esp + 0x10u), 0x8u);
/* 73f4f0: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73f4f6u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73f4f6: lea ecx, [esi + 0x4cc] */
  ecx = (uint32_t)(esi + 0x4ccu);
/* 73f4fc: mov byte ptr [esp + 0x10], 7 */
  W8((uint32_t)(esp + 0x10u), 0x7u);
/* 73f501: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73f507u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73f507: lea ecx, [esi + 0x48c] */
  ecx = (uint32_t)(esi + 0x48cu);
/* 73f50d: mov byte ptr [esp + 0x10], 6 */
  W8((uint32_t)(esp + 0x10u), 0x6u);
/* 73f512: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73f518u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73f518: lea ecx, [esi + 0x438] */
  ecx = (uint32_t)(esi + 0x438u);
/* 73f51e: mov byte ptr [esp + 0x10], 5 */
  W8((uint32_t)(esp + 0x10u), 0x5u);
/* 73f523: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73f529u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73f529: lea ecx, [esi + 0x42c] */
  ecx = (uint32_t)(esi + 0x42cu);
/* 73f52f: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* 73f534: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73f53au); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73f53a: lea ecx, [esi + 0x418] */
  ecx = (uint32_t)(esi + 0x418u);
/* 73f540: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 73f545: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73f54bu); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73f54b: lea ecx, [esi + 0x40c] */
  ecx = (uint32_t)(esi + 0x40cu);
/* 73f551: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 73f556: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73f55cu); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73f55c: lea ecx, [esi + 0x3e0] */
  ecx = (uint32_t)(esi + 0x3e0u);
/* 73f562: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 73f567: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73f56du); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73f56d: lea ecx, [esi + 0x3d4] */
  ecx = (uint32_t)(esi + 0x3d4u);
/* 73f573: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 73f578: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x73f57eu); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 73f57e: mov ecx, esi */
  ecx = esi;
/* 73f580: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 73f588: call 0x6c5128 */
  esp -= 4; W32(esp, 0x73f58du); SPILL(); f_6c5128(); if (g_unwind) return; RELOAD();
/* 73f58d: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 73f591: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73f592: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73f599: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73f59c: ret  */
  esp += 4; SPILL(); return;
}

void f_73f600(void) {
  LOAD_REGS();
L_73f600: /* 73f600: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73f602: push 0x9c6979 */
  { uint32_t v = 0x9c6979u; esp -= 4; W32(esp, v); }
/* 73f607: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73f60d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73f60e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73f615: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73f616: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73f617: mov esi, ecx */
  esi = ecx;
/* 73f619: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 73f61d: call 0x6cab64 */
  esp -= 4; W32(esp, 0x73f622u); SPILL(); f_6cab64(); if (g_unwind) return; RELOAD();
/* 73f622: lea ecx, [esi + 0x3d4] */
  ecx = (uint32_t)(esi + 0x3d4u);
/* 73f628: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 73f630: mov dword ptr [esi], 0x9fc330 */
  W32((uint32_t)(esi), 0x9fc330u);
/* 73f636: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73f63cu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73f63c: lea ecx, [esi + 0x3e0] */
  ecx = (uint32_t)(esi + 0x3e0u);
/* 73f642: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 73f647: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73f64du); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73f64d: lea ecx, [esi + 0x40c] */
  ecx = (uint32_t)(esi + 0x40cu);
/* 73f653: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 73f658: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73f65eu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73f65e: lea ecx, [esi + 0x418] */
  ecx = (uint32_t)(esi + 0x418u);
/* 73f664: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 73f669: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73f66fu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73f66f: lea ecx, [esi + 0x42c] */
  ecx = (uint32_t)(esi + 0x42cu);
/* 73f675: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* 73f67a: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73f680u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73f680: lea ecx, [esi + 0x438] */
  ecx = (uint32_t)(esi + 0x438u);
/* 73f686: mov byte ptr [esp + 0x10], 5 */
  W8((uint32_t)(esp + 0x10u), 0x5u);
/* 73f68b: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73f691u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73f691: lea ecx, [esi + 0x480] */
  ecx = (uint32_t)(esi + 0x480u);
/* 73f697: mov byte ptr [esp + 0x10], 6 */
  W8((uint32_t)(esp + 0x10u), 0x6u);
/* 73f69c: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x73f6a2u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 73f6a2: lea ecx, [esi + 0x48c] */
  ecx = (uint32_t)(esi + 0x48cu);
/* 73f6a8: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73f6aeu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73f6ae: lea ecx, [esi + 0x4cc] */
  ecx = (uint32_t)(esi + 0x4ccu);
/* 73f6b4: mov byte ptr [esp + 0x10], 7 */
  W8((uint32_t)(esp + 0x10u), 0x7u);
/* 73f6b9: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73f6bfu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73f6bf: lea ecx, [esi + 0x4d8] */
  ecx = (uint32_t)(esi + 0x4d8u);
/* 73f6c5: mov byte ptr [esp + 0x10], 8 */
  W8((uint32_t)(esp + 0x10u), 0x8u);
/* 73f6ca: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73f6d0u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73f6d0: lea ecx, [esi + 0x4e4] */
  ecx = (uint32_t)(esi + 0x4e4u);
/* 73f6d6: mov byte ptr [esp + 0x10], 9 */
  W8((uint32_t)(esp + 0x10u), 0x9u);
/* 73f6db: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73f6e1u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73f6e1: lea ecx, [esi + 0x4f0] */
  ecx = (uint32_t)(esi + 0x4f0u);
/* 73f6e7: mov byte ptr [esp + 0x10], 0xa */
  W8((uint32_t)(esp + 0x10u), 0xau);
/* 73f6ec: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73f6f2u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73f6f2: lea ecx, [esi + 0x4fc] */
  ecx = (uint32_t)(esi + 0x4fcu);
/* 73f6f8: mov byte ptr [esp + 0x10], 0xb */
  W8((uint32_t)(esp + 0x10u), 0xbu);
/* 73f6fd: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73f703u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73f703: lea ecx, [esi + 0x51c] */
  ecx = (uint32_t)(esi + 0x51cu);
/* 73f709: mov byte ptr [esp + 0x10], 0xc */
  W8((uint32_t)(esp + 0x10u), 0xcu);
/* 73f70e: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x73f714u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 73f714: lea ecx, [esi + 0x534] */
  ecx = (uint32_t)(esi + 0x534u);
/* 73f71a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 73f71c: mov byte ptr [esp + 0x14], 0xd */
  W8((uint32_t)(esp + 0x14u), 0xdu);
/* 73f721: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x73f727u); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 73f727: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 73f729: lea ecx, [esi + 0x540] */
  ecx = (uint32_t)(esi + 0x540u);
/* 73f72f: mov byte ptr [esp + 0x14], 0xe */
  W8((uint32_t)(esp + 0x14u), 0xeu);
/* 73f734: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x73f73au); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 73f73a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 73f73e: mov eax, esi */
  eax = esi;
/* 73f740: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73f741: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73f748: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73f74b: ret  */
  esp += 4; SPILL(); return;
}

void f_73f7b0(void) {
  LOAD_REGS();
L_73f7b0: /* 73f7b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 73f7b2: push 0x9c6a99 */
  { uint32_t v = 0x9c6a99u; esp -= 4; W32(esp, v); }
/* 73f7b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 73f7bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73f7be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 73f7c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73f7c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73f7c7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73f7c8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 73f7cc: mov esi, ecx */
  esi = ecx;
/* 73f7ce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73f7cf: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 73f7d3: call 0x6c6271 */
  esp -= 4; W32(esp, 0x73f7d8u); SPILL(); f_6c6271(); if (g_unwind) return; RELOAD();
/* 73f7d8: mov dword ptr [esi], 0x9fc330 */
  W32((uint32_t)(esi), 0x9fc330u);
/* 73f7de: mov eax, dword ptr [edi + 0x3a8] */
  eax = R32((uint32_t)(edi + 0x3a8u));
/* 73f7e4: mov dword ptr [esi + 0x3a8], eax */
  W32((uint32_t)(esi + 0x3a8u), eax);
/* 73f7ea: mov ecx, dword ptr [edi + 0x3ac] */
  ecx = R32((uint32_t)(edi + 0x3acu));
/* 73f7f0: mov dword ptr [esi + 0x3ac], ecx */
  W32((uint32_t)(esi + 0x3acu), ecx);
/* 73f7f6: mov edx, dword ptr [edi + 0x3b0] */
  edx = R32((uint32_t)(edi + 0x3b0u));
/* 73f7fc: mov dword ptr [esi + 0x3b0], edx */
  W32((uint32_t)(esi + 0x3b0u), edx);
/* 73f802: mov eax, dword ptr [edi + 0x3b4] */
  eax = R32((uint32_t)(edi + 0x3b4u));
/* 73f808: mov dword ptr [esi + 0x3b4], eax */
  W32((uint32_t)(esi + 0x3b4u), eax);
/* 73f80e: mov ecx, dword ptr [edi + 0x3b8] */
  ecx = R32((uint32_t)(edi + 0x3b8u));
/* 73f814: mov dword ptr [esi + 0x3b8], ecx */
  W32((uint32_t)(esi + 0x3b8u), ecx);
/* 73f81a: mov edx, dword ptr [edi + 0x3bc] */
  edx = R32((uint32_t)(edi + 0x3bcu));
/* 73f820: mov dword ptr [esi + 0x3bc], edx */
  W32((uint32_t)(esi + 0x3bcu), edx);
/* 73f826: mov eax, dword ptr [edi + 0x3c0] */
  eax = R32((uint32_t)(edi + 0x3c0u));
/* 73f82c: mov dword ptr [esi + 0x3c0], eax */
  W32((uint32_t)(esi + 0x3c0u), eax);
/* 73f832: mov ecx, dword ptr [edi + 0x3c4] */
  ecx = R32((uint32_t)(edi + 0x3c4u));
/* 73f838: mov dword ptr [esi + 0x3c4], ecx */
  W32((uint32_t)(esi + 0x3c4u), ecx);
/* 73f83e: mov edx, dword ptr [edi + 0x3c8] */
  edx = R32((uint32_t)(edi + 0x3c8u));
/* 73f844: mov dword ptr [esi + 0x3c8], edx */
  W32((uint32_t)(esi + 0x3c8u), edx);
/* 73f84a: mov eax, dword ptr [edi + 0x3cc] */
  eax = R32((uint32_t)(edi + 0x3ccu));
/* 73f850: mov dword ptr [esi + 0x3cc], eax */
  W32((uint32_t)(esi + 0x3ccu), eax);
/* 73f856: mov ecx, dword ptr [edi + 0x3d0] */
  ecx = R32((uint32_t)(edi + 0x3d0u));
/* 73f85c: lea edx, [edi + 0x3d4] */
  edx = (uint32_t)(edi + 0x3d4u);
/* 73f862: mov dword ptr [esi + 0x3d0], ecx */
  W32((uint32_t)(esi + 0x3d0u), ecx);
/* 73f868: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73f869: lea ecx, [esi + 0x3d4] */
  ecx = (uint32_t)(esi + 0x3d4u);
/* 73f86f: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 73f877: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73f87du); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73f87d: lea eax, [edi + 0x3e0] */
  eax = (uint32_t)(edi + 0x3e0u);
/* 73f883: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73f884: lea ecx, [esi + 0x3e0] */
  ecx = (uint32_t)(esi + 0x3e0u);
/* 73f88a: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 73f88f: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73f895u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73f895: mov ecx, dword ptr [edi + 0x3ec] */
  ecx = R32((uint32_t)(edi + 0x3ecu));
/* 73f89b: mov dword ptr [esi + 0x3ec], ecx */
  W32((uint32_t)(esi + 0x3ecu), ecx);
/* 73f8a1: mov dl, byte ptr [edi + 0x3f0] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3f0u))) & 0xffu);
/* 73f8a7: mov byte ptr [esi + 0x3f0], dl */
  W8((uint32_t)(esi + 0x3f0u), (edx & 0xffu));
/* 73f8ad: mov eax, dword ptr [edi + 0x3f4] */
  eax = R32((uint32_t)(edi + 0x3f4u));
/* 73f8b3: mov dword ptr [esi + 0x3f4], eax */
  W32((uint32_t)(esi + 0x3f4u), eax);
/* 73f8b9: mov ecx, dword ptr [edi + 0x3f8] */
  ecx = R32((uint32_t)(edi + 0x3f8u));
/* 73f8bf: mov dword ptr [esi + 0x3f8], ecx */
  W32((uint32_t)(esi + 0x3f8u), ecx);
/* 73f8c5: mov edx, dword ptr [edi + 0x3fc] */
  edx = R32((uint32_t)(edi + 0x3fcu));
/* 73f8cb: mov ecx, dword ptr [esi + 0x404] */
  ecx = R32((uint32_t)(esi + 0x404u));
/* 73f8d1: mov dword ptr [esi + 0x3fc], edx */
  W32((uint32_t)(esi + 0x3fcu), edx);
/* 73f8d7: mov eax, dword ptr [edi + 0x400] */
  eax = R32((uint32_t)(edi + 0x400u));
/* 73f8dd: mov dword ptr [esi + 0x400], eax */
  W32((uint32_t)(esi + 0x400u), eax);
/* 73f8e3: xor ecx, dword ptr [edi + 0x404] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x404u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73f8e9: mov edx, dword ptr [esi + 0x404] */
  edx = R32((uint32_t)(esi + 0x404u));
/* 73f8ef: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73f8f2: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 73f8f4: mov dword ptr [esi + 0x404], edx */
  W32((uint32_t)(esi + 0x404u), edx);
/* 73f8fa: mov eax, edx */
  eax = edx;
/* 73f8fc: mov edx, dword ptr [edi + 0x404] */
  edx = R32((uint32_t)(edi + 0x404u));
/* 73f902: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 73f904: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 73f907: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 73f909: lea ecx, [edi + 0x40c] */
  ecx = (uint32_t)(edi + 0x40cu);
/* 73f90f: mov dword ptr [esi + 0x404], edx */
  W32((uint32_t)(esi + 0x404u), edx);
/* 73f915: mov eax, dword ptr [edi + 0x408] */
  eax = R32((uint32_t)(edi + 0x408u));
/* 73f91b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73f91c: lea ecx, [esi + 0x40c] */
  ecx = (uint32_t)(esi + 0x40cu);
/* 73f922: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* 73f927: mov dword ptr [esi + 0x408], eax */
  W32((uint32_t)(esi + 0x408u), eax);
/* 73f92d: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73f933u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73f933: lea edx, [edi + 0x418] */
  edx = (uint32_t)(edi + 0x418u);
/* 73f939: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73f93a: lea ecx, [esi + 0x418] */
  ecx = (uint32_t)(esi + 0x418u);
/* 73f940: mov byte ptr [esp + 0x18], 3 */
  W8((uint32_t)(esp + 0x18u), 0x3u);
/* 73f945: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73f94bu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73f94b: mov eax, dword ptr [edi + 0x424] */
  eax = R32((uint32_t)(edi + 0x424u));
/* 73f951: mov dword ptr [esi + 0x424], eax */
  W32((uint32_t)(esi + 0x424u), eax);
/* 73f957: mov ecx, dword ptr [edi + 0x428] */
  ecx = R32((uint32_t)(edi + 0x428u));
/* 73f95d: lea edx, [edi + 0x42c] */
  edx = (uint32_t)(edi + 0x42cu);
/* 73f963: mov dword ptr [esi + 0x428], ecx */
  W32((uint32_t)(esi + 0x428u), ecx);
/* 73f969: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73f96a: lea ecx, [esi + 0x42c] */
  ecx = (uint32_t)(esi + 0x42cu);
/* 73f970: mov byte ptr [esp + 0x18], 4 */
  W8((uint32_t)(esp + 0x18u), 0x4u);
/* 73f975: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73f97bu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73f97b: lea eax, [edi + 0x438] */
  eax = (uint32_t)(edi + 0x438u);
/* 73f981: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73f982: lea ecx, [esi + 0x438] */
  ecx = (uint32_t)(esi + 0x438u);
/* 73f988: mov byte ptr [esp + 0x18], 5 */
  W8((uint32_t)(esp + 0x18u), 0x5u);
/* 73f98d: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73f993u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73f993: mov eax, dword ptr [edi + 0x444] */
  eax = R32((uint32_t)(edi + 0x444u));
/* 73f999: mov ecx, dword ptr [esi + 0x444] */
  ecx = R32((uint32_t)(esi + 0x444u));
/* 73f99f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73f9a1: mov eax, dword ptr [esi + 0x444] */
  eax = R32((uint32_t)(esi + 0x444u));
/* 73f9a7: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73f9aa: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73f9ac: mov dword ptr [esi + 0x444], eax */
  W32((uint32_t)(esi + 0x444u), eax);
/* 73f9b2: mov ecx, eax */
  ecx = eax;
/* 73f9b4: mov eax, dword ptr [edi + 0x444] */
  eax = R32((uint32_t)(edi + 0x444u));
/* 73f9ba: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73f9bc: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73f9bf: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73f9c1: mov dword ptr [esi + 0x444], eax */
  W32((uint32_t)(esi + 0x444u), eax);
/* 73f9c7: mov ecx, dword ptr [edi + 0x444] */
  ecx = R32((uint32_t)(edi + 0x444u));
/* 73f9cd: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73f9cf: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73f9d2: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73f9d4: mov dword ptr [esi + 0x444], ecx */
  W32((uint32_t)(esi + 0x444u), ecx);
/* 73f9da: mov edx, dword ptr [edi + 0x444] */
  edx = R32((uint32_t)(edi + 0x444u));
/* 73f9e0: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 73f9e2: and edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 73f9e5: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 73f9e7: mov ecx, dword ptr [esi + 0x44c] */
  ecx = R32((uint32_t)(esi + 0x44cu));
/* 73f9ed: mov dword ptr [esi + 0x444], edx */
  W32((uint32_t)(esi + 0x444u), edx);
/* 73f9f3: mov al, byte ptr [edi + 0x448] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x448u))) & 0xffu);
/* 73f9f9: mov byte ptr [esi + 0x448], al */
  W8((uint32_t)(esi + 0x448u), (eax & 0xffu));
/* 73f9ff: xor ecx, dword ptr [edi + 0x44c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x44cu)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73fa05: mov eax, dword ptr [esi + 0x44c] */
  eax = R32((uint32_t)(esi + 0x44cu));
/* 73fa0b: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73fa0e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73fa10: mov dword ptr [esi + 0x44c], eax */
  W32((uint32_t)(esi + 0x44cu), eax);
/* 73fa16: mov ecx, eax */
  ecx = eax;
/* 73fa18: mov eax, dword ptr [edi + 0x44c] */
  eax = R32((uint32_t)(edi + 0x44cu));
/* 73fa1e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73fa20: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73fa23: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73fa25: mov dword ptr [esi + 0x44c], eax */
  W32((uint32_t)(esi + 0x44cu), eax);
/* 73fa2b: mov ecx, dword ptr [edi + 0x44c] */
  ecx = R32((uint32_t)(edi + 0x44cu));
/* 73fa31: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73fa33: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73fa36: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73fa38: mov dword ptr [esi + 0x44c], ecx */
  W32((uint32_t)(esi + 0x44cu), ecx);
/* 73fa3e: mov eax, dword ptr [edi + 0x44c] */
  eax = R32((uint32_t)(edi + 0x44cu));
/* 73fa44: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73fa46: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73fa49: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73fa4b: mov dword ptr [esi + 0x44c], eax */
  W32((uint32_t)(esi + 0x44cu), eax);
/* 73fa51: mov ecx, dword ptr [edi + 0x44c] */
  ecx = R32((uint32_t)(edi + 0x44cu));
/* 73fa57: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73fa59: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73fa5c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73fa5e: mov dword ptr [esi + 0x44c], ecx */
  W32((uint32_t)(esi + 0x44cu), ecx);
/* 73fa64: mov eax, dword ptr [edi + 0x44c] */
  eax = R32((uint32_t)(edi + 0x44cu));
/* 73fa6a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73fa6c: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73fa6f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73fa71: mov dword ptr [esi + 0x44c], eax */
  W32((uint32_t)(esi + 0x44cu), eax);
/* 73fa77: mov ecx, dword ptr [edi + 0x44c] */
  ecx = R32((uint32_t)(edi + 0x44cu));
/* 73fa7d: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73fa7f: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73fa82: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73fa84: mov byte ptr [esp + 0x14], 6 */
  W8((uint32_t)(esp + 0x14u), 0x6u);
/* 73fa89: mov dword ptr [esi + 0x44c], ecx */
  W32((uint32_t)(esi + 0x44cu), ecx);
/* 73fa8f: mov eax, dword ptr [edi + 0x44c] */
  eax = R32((uint32_t)(edi + 0x44cu));
/* 73fa95: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73fa97: and eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73fa9c: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73fa9e: mov dword ptr [esi + 0x44c], eax */
  W32((uint32_t)(esi + 0x44cu), eax);
/* 73faa4: mov edx, dword ptr [edi + 0x44c] */
  edx = R32((uint32_t)(edi + 0x44cu));
/* 73faaa: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 73faac: and edx, 0x100 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 73fab2: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 73fab4: mov dword ptr [esi + 0x44c], edx */
  W32((uint32_t)(esi + 0x44cu), edx);
/* 73faba: lea eax, [edi + 0x450] */
  eax = (uint32_t)(edi + 0x450u);
/* 73fac0: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 73fac2: lea ecx, [esi + 0x450] */
  ecx = (uint32_t)(esi + 0x450u);
/* 73fac8: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 73faca: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 73facd: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 73fad0: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 73fad3: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 73fad6: lea ecx, [edi + 0x45c] */
  ecx = (uint32_t)(edi + 0x45cu);
/* 73fadc: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 73fade: lea edx, [esi + 0x45c] */
  edx = (uint32_t)(esi + 0x45cu);
/* 73fae4: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 73fae6: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 73fae9: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 73faec: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 73faef: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 73faf2: lea edx, [edi + 0x468] */
  edx = (uint32_t)(edi + 0x468u);
/* 73faf8: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 73fafa: lea eax, [esi + 0x468] */
  eax = (uint32_t)(esi + 0x468u);
/* 73fb00: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 73fb02: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 73fb05: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 73fb08: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 73fb0b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 73fb0e: lea eax, [edi + 0x474] */
  eax = (uint32_t)(edi + 0x474u);
/* 73fb14: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 73fb16: lea ecx, [esi + 0x474] */
  ecx = (uint32_t)(esi + 0x474u);
/* 73fb1c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 73fb1e: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 73fb21: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 73fb24: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 73fb27: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 73fb2a: lea ecx, [edi + 0x480] */
  ecx = (uint32_t)(edi + 0x480u);
/* 73fb30: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 73fb32: lea edx, [esi + 0x480] */
  edx = (uint32_t)(esi + 0x480u);
/* 73fb38: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 73fb3a: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 73fb3d: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 73fb40: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 73fb43: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 73fb46: lea edx, [edi + 0x48c] */
  edx = (uint32_t)(edi + 0x48cu);
/* 73fb4c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73fb4d: lea ecx, [esi + 0x48c] */
  ecx = (uint32_t)(esi + 0x48cu);
/* 73fb53: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73fb59u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73fb59: mov eax, dword ptr [edi + 0x498] */
  eax = R32((uint32_t)(edi + 0x498u));
/* 73fb5f: mov dword ptr [esi + 0x498], eax */
  W32((uint32_t)(esi + 0x498u), eax);
/* 73fb65: mov ecx, dword ptr [edi + 0x49c] */
  ecx = R32((uint32_t)(edi + 0x49cu));
/* 73fb6b: mov dword ptr [esi + 0x49c], ecx */
  W32((uint32_t)(esi + 0x49cu), ecx);
/* 73fb71: mov edx, dword ptr [edi + 0x4a0] */
  edx = R32((uint32_t)(edi + 0x4a0u));
/* 73fb77: mov dword ptr [esi + 0x4a0], edx */
  W32((uint32_t)(esi + 0x4a0u), edx);
/* 73fb7d: mov eax, dword ptr [edi + 0x4a4] */
  eax = R32((uint32_t)(edi + 0x4a4u));
/* 73fb83: mov dword ptr [esi + 0x4a4], eax */
  W32((uint32_t)(esi + 0x4a4u), eax);
/* 73fb89: mov ecx, dword ptr [edi + 0x4a8] */
  ecx = R32((uint32_t)(edi + 0x4a8u));
/* 73fb8f: mov dword ptr [esi + 0x4a8], ecx */
  W32((uint32_t)(esi + 0x4a8u), ecx);
/* 73fb95: mov edx, dword ptr [edi + 0x4ac] */
  edx = R32((uint32_t)(edi + 0x4acu));
/* 73fb9b: mov dword ptr [esi + 0x4ac], edx */
  W32((uint32_t)(esi + 0x4acu), edx);
/* 73fba1: mov eax, dword ptr [edi + 0x4b0] */
  eax = R32((uint32_t)(edi + 0x4b0u));
/* 73fba7: mov dword ptr [esi + 0x4b0], eax */
  W32((uint32_t)(esi + 0x4b0u), eax);
/* 73fbad: mov ecx, dword ptr [edi + 0x4b4] */
  ecx = R32((uint32_t)(edi + 0x4b4u));
/* 73fbb3: mov dword ptr [esi + 0x4b4], ecx */
  W32((uint32_t)(esi + 0x4b4u), ecx);
/* 73fbb9: mov edx, dword ptr [edi + 0x4b8] */
  edx = R32((uint32_t)(edi + 0x4b8u));
/* 73fbbf: mov dword ptr [esi + 0x4b8], edx */
  W32((uint32_t)(esi + 0x4b8u), edx);
/* 73fbc5: mov al, byte ptr [edi + 0x4bc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x4bcu))) & 0xffu);
/* 73fbcb: mov byte ptr [esi + 0x4bc], al */
  W8((uint32_t)(esi + 0x4bcu), (eax & 0xffu));
/* 73fbd1: mov ecx, dword ptr [edi + 0x4c0] */
  ecx = R32((uint32_t)(edi + 0x4c0u));
/* 73fbd7: mov dword ptr [esi + 0x4c0], ecx */
  W32((uint32_t)(esi + 0x4c0u), ecx);
/* 73fbdd: mov edx, dword ptr [edi + 0x4c4] */
  edx = R32((uint32_t)(edi + 0x4c4u));
/* 73fbe3: mov dword ptr [esi + 0x4c4], edx */
  W32((uint32_t)(esi + 0x4c4u), edx);
/* 73fbe9: mov al, byte ptr [edi + 0x4c8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x4c8u))) & 0xffu);
/* 73fbef: mov byte ptr [esp + 0x14], 7 */
  W8((uint32_t)(esp + 0x14u), 0x7u);
/* 73fbf4: lea ecx, [edi + 0x4cc] */
  ecx = (uint32_t)(edi + 0x4ccu);
/* 73fbfa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73fbfb: lea ecx, [esi + 0x4cc] */
  ecx = (uint32_t)(esi + 0x4ccu);
/* 73fc01: mov byte ptr [esi + 0x4c8], al */
  W8((uint32_t)(esi + 0x4c8u), (eax & 0xffu));
/* 73fc07: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73fc0du); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73fc0d: lea edx, [edi + 0x4d8] */
  edx = (uint32_t)(edi + 0x4d8u);
/* 73fc13: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73fc14: lea ecx, [esi + 0x4d8] */
  ecx = (uint32_t)(esi + 0x4d8u);
/* 73fc1a: mov byte ptr [esp + 0x18], 8 */
  W8((uint32_t)(esp + 0x18u), 0x8u);
/* 73fc1f: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73fc25u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73fc25: lea eax, [edi + 0x4e4] */
  eax = (uint32_t)(edi + 0x4e4u);
/* 73fc2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73fc2c: lea ecx, [esi + 0x4e4] */
  ecx = (uint32_t)(esi + 0x4e4u);
/* 73fc32: mov byte ptr [esp + 0x18], 9 */
  W8((uint32_t)(esp + 0x18u), 0x9u);
/* 73fc37: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73fc3du); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73fc3d: lea ecx, [edi + 0x4f0] */
  ecx = (uint32_t)(edi + 0x4f0u);
/* 73fc43: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73fc44: lea ecx, [esi + 0x4f0] */
  ecx = (uint32_t)(esi + 0x4f0u);
/* 73fc4a: mov byte ptr [esp + 0x18], 0xa */
  W8((uint32_t)(esp + 0x18u), 0xau);
/* 73fc4f: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73fc55u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73fc55: lea edx, [edi + 0x4fc] */
  edx = (uint32_t)(edi + 0x4fcu);
/* 73fc5b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73fc5c: lea ecx, [esi + 0x4fc] */
  ecx = (uint32_t)(esi + 0x4fcu);
/* 73fc62: mov byte ptr [esp + 0x18], 0xb */
  W8((uint32_t)(esp + 0x18u), 0xbu);
/* 73fc67: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73fc6du); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73fc6d: mov eax, dword ptr [edi + 0x508] */
  eax = R32((uint32_t)(edi + 0x508u));
/* 73fc73: mov dword ptr [esi + 0x508], eax */
  W32((uint32_t)(esi + 0x508u), eax);
/* 73fc79: mov ecx, dword ptr [edi + 0x50c] */
  ecx = R32((uint32_t)(edi + 0x50cu));
/* 73fc7f: mov dword ptr [esi + 0x50c], ecx */
  W32((uint32_t)(esi + 0x50cu), ecx);
/* 73fc85: mov edx, dword ptr [edi + 0x510] */
  edx = R32((uint32_t)(edi + 0x510u));
/* 73fc8b: mov dword ptr [esi + 0x510], edx */
  W32((uint32_t)(esi + 0x510u), edx);
/* 73fc91: mov eax, dword ptr [edi + 0x514] */
  eax = R32((uint32_t)(edi + 0x514u));
/* 73fc97: mov dword ptr [esi + 0x514], eax */
  W32((uint32_t)(esi + 0x514u), eax);
/* 73fc9d: mov ecx, dword ptr [edi + 0x518] */
  ecx = R32((uint32_t)(edi + 0x518u));
/* 73fca3: lea edx, [edi + 0x51c] */
  edx = (uint32_t)(edi + 0x51cu);
/* 73fca9: mov dword ptr [esi + 0x518], ecx */
  W32((uint32_t)(esi + 0x518u), ecx);
/* 73fcaf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73fcb0: lea ecx, [esi + 0x51c] */
  ecx = (uint32_t)(esi + 0x51cu);
/* 73fcb6: mov byte ptr [esp + 0x18], 0xc */
  W8((uint32_t)(esp + 0x18u), 0xcu);
/* 73fcbb: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x73fcc1u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 73fcc1: mov eax, dword ptr [edi + 0x528] */
  eax = R32((uint32_t)(edi + 0x528u));
/* 73fcc7: mov ecx, dword ptr [esi + 0x528] */
  ecx = R32((uint32_t)(esi + 0x528u));
/* 73fccd: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 73fccf: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 73fcd2: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73fcd4: mov dword ptr [esi + 0x528], ecx */
  W32((uint32_t)(esi + 0x528u), ecx);
/* 73fcda: mov ecx, dword ptr [edi + 0x52c] */
  ecx = R32((uint32_t)(edi + 0x52cu));
/* 73fce0: mov dword ptr [esi + 0x52c], ecx */
  W32((uint32_t)(esi + 0x52cu), ecx);
/* 73fce6: mov edx, dword ptr [edi + 0x530] */
  edx = R32((uint32_t)(edi + 0x530u));
/* 73fcec: lea eax, [edi + 0x534] */
  eax = (uint32_t)(edi + 0x534u);
/* 73fcf2: lea ecx, [esi + 0x534] */
  ecx = (uint32_t)(esi + 0x534u);
/* 73fcf8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73fcf9: mov byte ptr [esp + 0x18], 0xd */
  W8((uint32_t)(esp + 0x18u), 0xdu);
/* 73fcfe: mov dword ptr [esi + 0x530], edx */
  W32((uint32_t)(esi + 0x530u), edx);
/* 73fd04: call 0x6c925f */
  esp -= 4; W32(esp, 0x73fd09u); SPILL(); f_6c925f(); if (g_unwind) return; RELOAD();
/* 73fd09: lea ecx, [edi + 0x540] */
  ecx = (uint32_t)(edi + 0x540u);
/* 73fd0f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 73fd10: lea ecx, [esi + 0x540] */
  ecx = (uint32_t)(esi + 0x540u);
/* 73fd16: mov byte ptr [esp + 0x18], 0xe */
  W8((uint32_t)(esp + 0x18u), 0xeu);
/* 73fd1b: call 0x6cbf0a */
  esp -= 4; W32(esp, 0x73fd20u); SPILL(); f_6cbf0a(); if (g_unwind) return; RELOAD();
/* 73fd20: mov edx, dword ptr [edi + 0x54c] */
  edx = R32((uint32_t)(edi + 0x54cu));
/* 73fd26: mov dword ptr [esi + 0x54c], edx */
  W32((uint32_t)(esi + 0x54cu), edx);
/* 73fd2c: mov eax, dword ptr [edi + 0x550] */
  eax = R32((uint32_t)(edi + 0x550u));
/* 73fd32: mov dword ptr [esi + 0x550], eax */
  W32((uint32_t)(esi + 0x550u), eax);
/* 73fd38: mov ecx, dword ptr [edi + 0x554] */
  ecx = R32((uint32_t)(edi + 0x554u));
/* 73fd3e: mov dword ptr [esi + 0x554], ecx */
  W32((uint32_t)(esi + 0x554u), ecx);
/* 73fd44: mov edx, dword ptr [edi + 0x558] */
  edx = R32((uint32_t)(edi + 0x558u));
/* 73fd4a: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 73fd4e: mov dword ptr [esi + 0x558], edx */
  W32((uint32_t)(esi + 0x558u), edx);
/* 73fd54: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 73fd55: mov eax, esi */
  eax = esi;
/* 73fd57: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 73fd58: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 73fd5f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 73fd62: ret 4 */
  esp += 8; SPILL(); return;
}

void f_73fee0(void) {
  LOAD_REGS();
L_73fee0: /* 73fee0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 73fee1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73fee2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 73fee6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 73fee7: mov esi, ecx */
  esi = ecx;
/* 73fee9: call 0x6c6b8b */
  esp -= 4; W32(esp, 0x73feeeu); SPILL(); f_6c6b8b(); if (g_unwind) return; RELOAD();
/* 73feee: mov eax, dword ptr [edi + 0x3a8] */
  eax = R32((uint32_t)(edi + 0x3a8u));
/* 73fef4: mov dword ptr [esi + 0x3a8], eax */
  W32((uint32_t)(esi + 0x3a8u), eax);
/* 73fefa: mov ecx, dword ptr [edi + 0x3ac] */
  ecx = R32((uint32_t)(edi + 0x3acu));
/* 73ff00: mov dword ptr [esi + 0x3ac], ecx */
  W32((uint32_t)(esi + 0x3acu), ecx);
/* 73ff06: mov edx, dword ptr [edi + 0x3b0] */
  edx = R32((uint32_t)(edi + 0x3b0u));
/* 73ff0c: mov dword ptr [esi + 0x3b0], edx */
  W32((uint32_t)(esi + 0x3b0u), edx);
/* 73ff12: mov eax, dword ptr [edi + 0x3b4] */
  eax = R32((uint32_t)(edi + 0x3b4u));
/* 73ff18: mov dword ptr [esi + 0x3b4], eax */
  W32((uint32_t)(esi + 0x3b4u), eax);
/* 73ff1e: mov ecx, dword ptr [edi + 0x3b8] */
  ecx = R32((uint32_t)(edi + 0x3b8u));
/* 73ff24: mov dword ptr [esi + 0x3b8], ecx */
  W32((uint32_t)(esi + 0x3b8u), ecx);
/* 73ff2a: mov edx, dword ptr [edi + 0x3bc] */
  edx = R32((uint32_t)(edi + 0x3bcu));
/* 73ff30: mov dword ptr [esi + 0x3bc], edx */
  W32((uint32_t)(esi + 0x3bcu), edx);
/* 73ff36: mov eax, dword ptr [edi + 0x3c0] */
  eax = R32((uint32_t)(edi + 0x3c0u));
/* 73ff3c: mov dword ptr [esi + 0x3c0], eax */
  W32((uint32_t)(esi + 0x3c0u), eax);
/* 73ff42: mov ecx, dword ptr [edi + 0x3c4] */
  ecx = R32((uint32_t)(edi + 0x3c4u));
/* 73ff48: mov dword ptr [esi + 0x3c4], ecx */
  W32((uint32_t)(esi + 0x3c4u), ecx);
/* 73ff4e: mov edx, dword ptr [edi + 0x3c8] */
  edx = R32((uint32_t)(edi + 0x3c8u));
/* 73ff54: mov dword ptr [esi + 0x3c8], edx */
  W32((uint32_t)(esi + 0x3c8u), edx);
/* 73ff5a: mov eax, dword ptr [edi + 0x3cc] */
  eax = R32((uint32_t)(edi + 0x3ccu));
/* 73ff60: mov dword ptr [esi + 0x3cc], eax */
  W32((uint32_t)(esi + 0x3ccu), eax);
/* 73ff66: mov ecx, dword ptr [edi + 0x3d0] */
  ecx = R32((uint32_t)(edi + 0x3d0u));
/* 73ff6c: lea edx, [edi + 0x3d4] */
  edx = (uint32_t)(edi + 0x3d4u);
/* 73ff72: mov dword ptr [esi + 0x3d0], ecx */
  W32((uint32_t)(esi + 0x3d0u), ecx);
/* 73ff78: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 73ff79: lea ecx, [esi + 0x3d4] */
  ecx = (uint32_t)(esi + 0x3d4u);
/* 73ff7f: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x73ff85u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 73ff85: lea eax, [edi + 0x3e0] */
  eax = (uint32_t)(edi + 0x3e0u);
/* 73ff8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 73ff8c: lea ecx, [esi + 0x3e0] */
  ecx = (uint32_t)(esi + 0x3e0u);
/* 73ff92: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x73ff98u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 73ff98: mov ecx, dword ptr [edi + 0x3ec] */
  ecx = R32((uint32_t)(edi + 0x3ecu));
/* 73ff9e: mov dword ptr [esi + 0x3ec], ecx */
  W32((uint32_t)(esi + 0x3ecu), ecx);
/* 73ffa4: mov dl, byte ptr [edi + 0x3f0] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3f0u))) & 0xffu);
/* 73ffaa: mov byte ptr [esi + 0x3f0], dl */
  W8((uint32_t)(esi + 0x3f0u), (edx & 0xffu));
/* 73ffb0: mov eax, dword ptr [edi + 0x3f4] */
  eax = R32((uint32_t)(edi + 0x3f4u));
/* 73ffb6: mov dword ptr [esi + 0x3f4], eax */
  W32((uint32_t)(esi + 0x3f4u), eax);
/* 73ffbc: mov ecx, dword ptr [edi + 0x3f8] */
  ecx = R32((uint32_t)(edi + 0x3f8u));
/* 73ffc2: mov dword ptr [esi + 0x3f8], ecx */
  W32((uint32_t)(esi + 0x3f8u), ecx);
/* 73ffc8: mov edx, dword ptr [edi + 0x3fc] */
  edx = R32((uint32_t)(edi + 0x3fcu));
/* 73ffce: mov ecx, dword ptr [esi + 0x404] */
  ecx = R32((uint32_t)(esi + 0x404u));
/* 73ffd4: mov dword ptr [esi + 0x3fc], edx */
  W32((uint32_t)(esi + 0x3fcu), edx);
/* 73ffda: mov eax, dword ptr [edi + 0x400] */
  eax = R32((uint32_t)(edi + 0x400u));
/* 73ffe0: mov dword ptr [esi + 0x400], eax */
  W32((uint32_t)(esi + 0x400u), eax);
/* 73ffe6: xor ecx, dword ptr [edi + 0x404] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x404u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 73ffec: mov edx, dword ptr [esi + 0x404] */
  edx = R32((uint32_t)(esi + 0x404u));
/* 73fff2: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 73fff5: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 73fff7: mov dword ptr [esi + 0x404], edx */
  W32((uint32_t)(esi + 0x404u), edx);
/* 73fffd: mov eax, edx */
  eax = edx;
/* 73ffff: mov edx, dword ptr [edi + 0x404] */
  edx = R32((uint32_t)(edi + 0x404u));
/* 740005: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 740007: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 74000a: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74000c: lea ecx, [edi + 0x40c] */
  ecx = (uint32_t)(edi + 0x40cu);
/* 740012: mov dword ptr [esi + 0x404], edx */
  W32((uint32_t)(esi + 0x404u), edx);
/* 740018: mov eax, dword ptr [edi + 0x408] */
  eax = R32((uint32_t)(edi + 0x408u));
/* 74001e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74001f: lea ecx, [esi + 0x40c] */
  ecx = (uint32_t)(esi + 0x40cu);
/* 740025: mov dword ptr [esi + 0x408], eax */
  W32((uint32_t)(esi + 0x408u), eax);
/* 74002b: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x740031u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 740031: lea edx, [edi + 0x418] */
  edx = (uint32_t)(edi + 0x418u);
/* 740037: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 740038: lea ecx, [esi + 0x418] */
  ecx = (uint32_t)(esi + 0x418u);
/* 74003e: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x740044u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 740044: mov eax, dword ptr [edi + 0x424] */
  eax = R32((uint32_t)(edi + 0x424u));
/* 74004a: mov dword ptr [esi + 0x424], eax */
  W32((uint32_t)(esi + 0x424u), eax);
/* 740050: mov ecx, dword ptr [edi + 0x428] */
  ecx = R32((uint32_t)(edi + 0x428u));
/* 740056: lea edx, [edi + 0x42c] */
  edx = (uint32_t)(edi + 0x42cu);
/* 74005c: mov dword ptr [esi + 0x428], ecx */
  W32((uint32_t)(esi + 0x428u), ecx);
/* 740062: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 740063: lea ecx, [esi + 0x42c] */
  ecx = (uint32_t)(esi + 0x42cu);
/* 740069: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x74006fu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 74006f: lea eax, [edi + 0x438] */
  eax = (uint32_t)(edi + 0x438u);
/* 740075: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 740076: lea ecx, [esi + 0x438] */
  ecx = (uint32_t)(esi + 0x438u);
/* 74007c: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x740082u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 740082: mov eax, dword ptr [edi + 0x444] */
  eax = R32((uint32_t)(edi + 0x444u));
/* 740088: mov ecx, dword ptr [esi + 0x444] */
  ecx = R32((uint32_t)(esi + 0x444u));
/* 74008e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740090: mov eax, dword ptr [esi + 0x444] */
  eax = R32((uint32_t)(esi + 0x444u));
/* 740096: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 740099: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74009b: mov dword ptr [esi + 0x444], eax */
  W32((uint32_t)(esi + 0x444u), eax);
/* 7400a1: mov ecx, eax */
  ecx = eax;
/* 7400a3: mov eax, dword ptr [edi + 0x444] */
  eax = R32((uint32_t)(edi + 0x444u));
/* 7400a9: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7400ab: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7400ae: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7400b0: mov dword ptr [esi + 0x444], eax */
  W32((uint32_t)(esi + 0x444u), eax);
/* 7400b6: mov ecx, dword ptr [edi + 0x444] */
  ecx = R32((uint32_t)(edi + 0x444u));
/* 7400bc: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7400be: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7400c1: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7400c3: mov dword ptr [esi + 0x444], ecx */
  W32((uint32_t)(esi + 0x444u), ecx);
/* 7400c9: mov edx, dword ptr [edi + 0x444] */
  edx = R32((uint32_t)(edi + 0x444u));
/* 7400cf: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7400d1: and edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7400d4: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7400d6: mov ecx, dword ptr [esi + 0x44c] */
  ecx = R32((uint32_t)(esi + 0x44cu));
/* 7400dc: mov dword ptr [esi + 0x444], edx */
  W32((uint32_t)(esi + 0x444u), edx);
/* 7400e2: mov al, byte ptr [edi + 0x448] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x448u))) & 0xffu);
/* 7400e8: mov byte ptr [esi + 0x448], al */
  W8((uint32_t)(esi + 0x448u), (eax & 0xffu));
/* 7400ee: xor ecx, dword ptr [edi + 0x44c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x44cu)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7400f4: mov eax, dword ptr [esi + 0x44c] */
  eax = R32((uint32_t)(esi + 0x44cu));
/* 7400fa: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7400fd: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7400ff: mov dword ptr [esi + 0x44c], eax */
  W32((uint32_t)(esi + 0x44cu), eax);
/* 740105: mov ecx, eax */
  ecx = eax;
/* 740107: mov eax, dword ptr [edi + 0x44c] */
  eax = R32((uint32_t)(edi + 0x44cu));
/* 74010d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74010f: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 740112: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740114: mov dword ptr [esi + 0x44c], eax */
  W32((uint32_t)(esi + 0x44cu), eax);
/* 74011a: mov ecx, dword ptr [edi + 0x44c] */
  ecx = R32((uint32_t)(edi + 0x44cu));
/* 740120: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740122: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 740125: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740127: mov dword ptr [esi + 0x44c], ecx */
  W32((uint32_t)(esi + 0x44cu), ecx);
/* 74012d: mov eax, dword ptr [edi + 0x44c] */
  eax = R32((uint32_t)(edi + 0x44cu));
/* 740133: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740135: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 740138: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74013a: mov dword ptr [esi + 0x44c], eax */
  W32((uint32_t)(esi + 0x44cu), eax);
/* 740140: mov ecx, dword ptr [edi + 0x44c] */
  ecx = R32((uint32_t)(edi + 0x44cu));
/* 740146: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740148: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74014b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74014d: mov dword ptr [esi + 0x44c], ecx */
  W32((uint32_t)(esi + 0x44cu), ecx);
/* 740153: mov eax, dword ptr [edi + 0x44c] */
  eax = R32((uint32_t)(edi + 0x44cu));
/* 740159: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74015b: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74015e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740160: mov dword ptr [esi + 0x44c], eax */
  W32((uint32_t)(esi + 0x44cu), eax);
/* 740166: mov ecx, dword ptr [edi + 0x44c] */
  ecx = R32((uint32_t)(edi + 0x44cu));
/* 74016c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74016e: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 740171: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740173: mov dword ptr [esi + 0x44c], ecx */
  W32((uint32_t)(esi + 0x44cu), ecx);
/* 740179: mov eax, dword ptr [edi + 0x44c] */
  eax = R32((uint32_t)(edi + 0x44cu));
/* 74017f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740181: and eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 740186: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740188: mov dword ptr [esi + 0x44c], eax */
  W32((uint32_t)(esi + 0x44cu), eax);
/* 74018e: mov edx, dword ptr [edi + 0x44c] */
  edx = R32((uint32_t)(edi + 0x44cu));
/* 740194: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 740196: and edx, 0x100 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 74019c: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74019e: lea eax, [edi + 0x450] */
  eax = (uint32_t)(edi + 0x450u);
/* 7401a4: mov dword ptr [esi + 0x44c], edx */
  W32((uint32_t)(esi + 0x44cu), edx);
/* 7401aa: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7401ac: lea ecx, [esi + 0x450] */
  ecx = (uint32_t)(esi + 0x450u);
/* 7401b2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7401b4: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7401b7: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7401ba: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7401bd: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7401c0: lea ecx, [edi + 0x45c] */
  ecx = (uint32_t)(edi + 0x45cu);
/* 7401c6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7401c8: lea edx, [esi + 0x45c] */
  edx = (uint32_t)(esi + 0x45cu);
/* 7401ce: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7401d0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7401d3: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7401d6: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7401d9: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7401dc: lea edx, [edi + 0x468] */
  edx = (uint32_t)(edi + 0x468u);
/* 7401e2: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7401e4: lea eax, [esi + 0x468] */
  eax = (uint32_t)(esi + 0x468u);
/* 7401ea: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7401ec: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7401ef: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7401f2: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7401f5: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7401f8: lea eax, [edi + 0x474] */
  eax = (uint32_t)(edi + 0x474u);
/* 7401fe: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 740200: lea ecx, [esi + 0x474] */
  ecx = (uint32_t)(esi + 0x474u);
/* 740206: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 740208: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 74020b: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 74020e: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 740211: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 740214: lea ecx, [edi + 0x480] */
  ecx = (uint32_t)(edi + 0x480u);
/* 74021a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 74021c: lea edx, [esi + 0x480] */
  edx = (uint32_t)(esi + 0x480u);
/* 740222: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 740224: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 740227: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 74022a: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 74022d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 740230: lea edx, [edi + 0x48c] */
  edx = (uint32_t)(edi + 0x48cu);
/* 740236: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 740237: lea ecx, [esi + 0x48c] */
  ecx = (uint32_t)(esi + 0x48cu);
/* 74023d: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x740243u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 740243: mov eax, dword ptr [edi + 0x498] */
  eax = R32((uint32_t)(edi + 0x498u));
/* 740249: mov dword ptr [esi + 0x498], eax */
  W32((uint32_t)(esi + 0x498u), eax);
/* 74024f: mov ecx, dword ptr [edi + 0x49c] */
  ecx = R32((uint32_t)(edi + 0x49cu));
/* 740255: mov dword ptr [esi + 0x49c], ecx */
  W32((uint32_t)(esi + 0x49cu), ecx);
/* 74025b: mov edx, dword ptr [edi + 0x4a0] */
  edx = R32((uint32_t)(edi + 0x4a0u));
/* 740261: mov dword ptr [esi + 0x4a0], edx */
  W32((uint32_t)(esi + 0x4a0u), edx);
/* 740267: mov eax, dword ptr [edi + 0x4a4] */
  eax = R32((uint32_t)(edi + 0x4a4u));
/* 74026d: mov dword ptr [esi + 0x4a4], eax */
  W32((uint32_t)(esi + 0x4a4u), eax);
/* 740273: mov ecx, dword ptr [edi + 0x4a8] */
  ecx = R32((uint32_t)(edi + 0x4a8u));
/* 740279: mov dword ptr [esi + 0x4a8], ecx */
  W32((uint32_t)(esi + 0x4a8u), ecx);
/* 74027f: mov edx, dword ptr [edi + 0x4ac] */
  edx = R32((uint32_t)(edi + 0x4acu));
/* 740285: mov dword ptr [esi + 0x4ac], edx */
  W32((uint32_t)(esi + 0x4acu), edx);
/* 74028b: mov eax, dword ptr [edi + 0x4b0] */
  eax = R32((uint32_t)(edi + 0x4b0u));
/* 740291: mov dword ptr [esi + 0x4b0], eax */
  W32((uint32_t)(esi + 0x4b0u), eax);
/* 740297: mov ecx, dword ptr [edi + 0x4b4] */
  ecx = R32((uint32_t)(edi + 0x4b4u));
/* 74029d: mov dword ptr [esi + 0x4b4], ecx */
  W32((uint32_t)(esi + 0x4b4u), ecx);
/* 7402a3: mov edx, dword ptr [edi + 0x4b8] */
  edx = R32((uint32_t)(edi + 0x4b8u));
/* 7402a9: mov dword ptr [esi + 0x4b8], edx */
  W32((uint32_t)(esi + 0x4b8u), edx);
/* 7402af: mov al, byte ptr [edi + 0x4bc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x4bcu))) & 0xffu);
/* 7402b5: mov byte ptr [esi + 0x4bc], al */
  W8((uint32_t)(esi + 0x4bcu), (eax & 0xffu));
/* 7402bb: mov ecx, dword ptr [edi + 0x4c0] */
  ecx = R32((uint32_t)(edi + 0x4c0u));
/* 7402c1: mov dword ptr [esi + 0x4c0], ecx */
  W32((uint32_t)(esi + 0x4c0u), ecx);
/* 7402c7: mov edx, dword ptr [edi + 0x4c4] */
  edx = R32((uint32_t)(edi + 0x4c4u));
/* 7402cd: lea ecx, [edi + 0x4cc] */
  ecx = (uint32_t)(edi + 0x4ccu);
/* 7402d3: mov dword ptr [esi + 0x4c4], edx */
  W32((uint32_t)(esi + 0x4c4u), edx);
/* 7402d9: mov al, byte ptr [edi + 0x4c8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x4c8u))) & 0xffu);
/* 7402df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7402e0: lea ecx, [esi + 0x4cc] */
  ecx = (uint32_t)(esi + 0x4ccu);
/* 7402e6: mov byte ptr [esi + 0x4c8], al */
  W8((uint32_t)(esi + 0x4c8u), (eax & 0xffu));
/* 7402ec: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x7402f2u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 7402f2: lea edx, [edi + 0x4d8] */
  edx = (uint32_t)(edi + 0x4d8u);
/* 7402f8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7402f9: lea ecx, [esi + 0x4d8] */
  ecx = (uint32_t)(esi + 0x4d8u);
/* 7402ff: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x740305u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 740305: lea eax, [edi + 0x4e4] */
  eax = (uint32_t)(edi + 0x4e4u);
/* 74030b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74030c: lea ecx, [esi + 0x4e4] */
  ecx = (uint32_t)(esi + 0x4e4u);
/* 740312: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x740318u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 740318: lea ecx, [edi + 0x4f0] */
  ecx = (uint32_t)(edi + 0x4f0u);
/* 74031e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74031f: lea ecx, [esi + 0x4f0] */
  ecx = (uint32_t)(esi + 0x4f0u);
/* 740325: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x74032bu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 74032b: lea edx, [edi + 0x4fc] */
  edx = (uint32_t)(edi + 0x4fcu);
/* 740331: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 740332: lea ecx, [esi + 0x4fc] */
  ecx = (uint32_t)(esi + 0x4fcu);
/* 740338: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x74033eu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 74033e: mov eax, dword ptr [edi + 0x508] */
  eax = R32((uint32_t)(edi + 0x508u));
/* 740344: mov dword ptr [esi + 0x508], eax */
  W32((uint32_t)(esi + 0x508u), eax);
/* 74034a: mov ecx, dword ptr [edi + 0x50c] */
  ecx = R32((uint32_t)(edi + 0x50cu));
/* 740350: mov dword ptr [esi + 0x50c], ecx */
  W32((uint32_t)(esi + 0x50cu), ecx);
/* 740356: mov edx, dword ptr [edi + 0x510] */
  edx = R32((uint32_t)(edi + 0x510u));
/* 74035c: mov dword ptr [esi + 0x510], edx */
  W32((uint32_t)(esi + 0x510u), edx);
/* 740362: mov eax, dword ptr [edi + 0x514] */
  eax = R32((uint32_t)(edi + 0x514u));
/* 740368: mov dword ptr [esi + 0x514], eax */
  W32((uint32_t)(esi + 0x514u), eax);
/* 74036e: mov ecx, dword ptr [edi + 0x518] */
  ecx = R32((uint32_t)(edi + 0x518u));
/* 740374: lea edx, [edi + 0x51c] */
  edx = (uint32_t)(edi + 0x51cu);
/* 74037a: mov dword ptr [esi + 0x518], ecx */
  W32((uint32_t)(esi + 0x518u), ecx);
/* 740380: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 740381: lea ecx, [esi + 0x51c] */
  ecx = (uint32_t)(esi + 0x51cu);
/* 740387: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x74038du); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 74038d: mov eax, dword ptr [edi + 0x528] */
  eax = R32((uint32_t)(edi + 0x528u));
/* 740393: mov edx, dword ptr [esi + 0x528] */
  edx = R32((uint32_t)(esi + 0x528u));
/* 740399: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74039b: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74039e: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7403a0: mov dword ptr [esi + 0x528], edx */
  W32((uint32_t)(esi + 0x528u), edx);
/* 7403a6: mov ecx, dword ptr [edi + 0x52c] */
  ecx = R32((uint32_t)(edi + 0x52cu));
/* 7403ac: mov dword ptr [esi + 0x52c], ecx */
  W32((uint32_t)(esi + 0x52cu), ecx);
/* 7403b2: mov edx, dword ptr [edi + 0x530] */
  edx = R32((uint32_t)(edi + 0x530u));
/* 7403b8: lea eax, [edi + 0x534] */
  eax = (uint32_t)(edi + 0x534u);
/* 7403be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7403bf: lea ecx, [esi + 0x534] */
  ecx = (uint32_t)(esi + 0x534u);
/* 7403c5: mov dword ptr [esi + 0x530], edx */
  W32((uint32_t)(esi + 0x530u), edx);
/* 7403cb: call 0x6c4ac0 */
  esp -= 4; W32(esp, 0x7403d0u); SPILL(); f_6c4ac0(); if (g_unwind) return; RELOAD();
/* 7403d0: lea ecx, [edi + 0x540] */
  ecx = (uint32_t)(edi + 0x540u);
/* 7403d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7403d7: lea ecx, [esi + 0x540] */
  ecx = (uint32_t)(esi + 0x540u);
/* 7403dd: call 0x6ca56f */
  esp -= 4; W32(esp, 0x7403e2u); SPILL(); f_6ca56f(); if (g_unwind) return; RELOAD();
/* 7403e2: mov edx, dword ptr [edi + 0x54c] */
  edx = R32((uint32_t)(edi + 0x54cu));
/* 7403e8: mov dword ptr [esi + 0x54c], edx */
  W32((uint32_t)(esi + 0x54cu), edx);
/* 7403ee: mov eax, dword ptr [edi + 0x550] */
  eax = R32((uint32_t)(edi + 0x550u));
/* 7403f4: mov dword ptr [esi + 0x550], eax */
  W32((uint32_t)(esi + 0x550u), eax);
/* 7403fa: mov ecx, dword ptr [edi + 0x554] */
  ecx = R32((uint32_t)(edi + 0x554u));
/* 740400: mov dword ptr [esi + 0x554], ecx */
  W32((uint32_t)(esi + 0x554u), ecx);
/* 740406: mov edx, dword ptr [edi + 0x558] */
  edx = R32((uint32_t)(edi + 0x558u));
/* 74040c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74040d: mov dword ptr [esi + 0x558], edx */
  W32((uint32_t)(esi + 0x558u), edx);
/* 740413: mov eax, esi */
  eax = esi;
/* 740415: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 740416: ret 4 */
  esp += 8; SPILL(); return;
}

void f_740063(void) {
  LOAD_REGS();
L_740063: /* 740063: lea ecx, [esi + 0x42c] */
  ecx = (uint32_t)(esi + 0x42cu);
/* 740069: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x74006fu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 74006f: lea eax, [edi + 0x438] */
  eax = (uint32_t)(edi + 0x438u);
/* 740075: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 740076: lea ecx, [esi + 0x438] */
  ecx = (uint32_t)(esi + 0x438u);
/* 74007c: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x740082u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 740082: mov eax, dword ptr [edi + 0x444] */
  eax = R32((uint32_t)(edi + 0x444u));
/* 740088: mov ecx, dword ptr [esi + 0x444] */
  ecx = R32((uint32_t)(esi + 0x444u));
/* 74008e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740090: mov eax, dword ptr [esi + 0x444] */
  eax = R32((uint32_t)(esi + 0x444u));
/* 740096: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 740099: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74009b: mov dword ptr [esi + 0x444], eax */
  W32((uint32_t)(esi + 0x444u), eax);
/* 7400a1: mov ecx, eax */
  ecx = eax;
/* 7400a3: mov eax, dword ptr [edi + 0x444] */
  eax = R32((uint32_t)(edi + 0x444u));
/* 7400a9: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7400ab: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7400ae: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7400b0: mov dword ptr [esi + 0x444], eax */
  W32((uint32_t)(esi + 0x444u), eax);
/* 7400b6: mov ecx, dword ptr [edi + 0x444] */
  ecx = R32((uint32_t)(edi + 0x444u));
/* 7400bc: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7400be: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7400c1: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7400c3: mov dword ptr [esi + 0x444], ecx */
  W32((uint32_t)(esi + 0x444u), ecx);
/* 7400c9: mov edx, dword ptr [edi + 0x444] */
  edx = R32((uint32_t)(edi + 0x444u));
/* 7400cf: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7400d1: and edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7400d4: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7400d6: mov ecx, dword ptr [esi + 0x44c] */
  ecx = R32((uint32_t)(esi + 0x44cu));
/* 7400dc: mov dword ptr [esi + 0x444], edx */
  W32((uint32_t)(esi + 0x444u), edx);
/* 7400e2: mov al, byte ptr [edi + 0x448] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x448u))) & 0xffu);
/* 7400e8: mov byte ptr [esi + 0x448], al */
  W8((uint32_t)(esi + 0x448u), (eax & 0xffu));
/* 7400ee: xor ecx, dword ptr [edi + 0x44c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x44cu)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7400f4: mov eax, dword ptr [esi + 0x44c] */
  eax = R32((uint32_t)(esi + 0x44cu));
/* 7400fa: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7400fd: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7400ff: mov dword ptr [esi + 0x44c], eax */
  W32((uint32_t)(esi + 0x44cu), eax);
/* 740105: mov ecx, eax */
  ecx = eax;
/* 740107: mov eax, dword ptr [edi + 0x44c] */
  eax = R32((uint32_t)(edi + 0x44cu));
/* 74010d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74010f: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 740112: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740114: mov dword ptr [esi + 0x44c], eax */
  W32((uint32_t)(esi + 0x44cu), eax);
/* 74011a: mov ecx, dword ptr [edi + 0x44c] */
  ecx = R32((uint32_t)(edi + 0x44cu));
/* 740120: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740122: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 740125: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740127: mov dword ptr [esi + 0x44c], ecx */
  W32((uint32_t)(esi + 0x44cu), ecx);
/* 74012d: mov eax, dword ptr [edi + 0x44c] */
  eax = R32((uint32_t)(edi + 0x44cu));
/* 740133: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740135: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 740138: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74013a: mov dword ptr [esi + 0x44c], eax */
  W32((uint32_t)(esi + 0x44cu), eax);
/* 740140: mov ecx, dword ptr [edi + 0x44c] */
  ecx = R32((uint32_t)(edi + 0x44cu));
/* 740146: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740148: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74014b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74014d: mov dword ptr [esi + 0x44c], ecx */
  W32((uint32_t)(esi + 0x44cu), ecx);
/* 740153: mov eax, dword ptr [edi + 0x44c] */
  eax = R32((uint32_t)(edi + 0x44cu));
/* 740159: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74015b: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74015e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740160: mov dword ptr [esi + 0x44c], eax */
  W32((uint32_t)(esi + 0x44cu), eax);
/* 740166: mov ecx, dword ptr [edi + 0x44c] */
  ecx = R32((uint32_t)(edi + 0x44cu));
/* 74016c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74016e: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 740171: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740173: mov dword ptr [esi + 0x44c], ecx */
  W32((uint32_t)(esi + 0x44cu), ecx);
/* 740179: mov eax, dword ptr [edi + 0x44c] */
  eax = R32((uint32_t)(edi + 0x44cu));
/* 74017f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740181: and eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 740186: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740188: mov dword ptr [esi + 0x44c], eax */
  W32((uint32_t)(esi + 0x44cu), eax);
/* 74018e: mov edx, dword ptr [edi + 0x44c] */
  edx = R32((uint32_t)(edi + 0x44cu));
/* 740194: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 740196: and edx, 0x100 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 74019c: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74019e: lea eax, [edi + 0x450] */
  eax = (uint32_t)(edi + 0x450u);
/* 7401a4: mov dword ptr [esi + 0x44c], edx */
  W32((uint32_t)(esi + 0x44cu), edx);
/* 7401aa: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7401ac: lea ecx, [esi + 0x450] */
  ecx = (uint32_t)(esi + 0x450u);
/* 7401b2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7401b4: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7401b7: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7401ba: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7401bd: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7401c0: lea ecx, [edi + 0x45c] */
  ecx = (uint32_t)(edi + 0x45cu);
/* 7401c6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7401c8: lea edx, [esi + 0x45c] */
  edx = (uint32_t)(esi + 0x45cu);
/* 7401ce: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7401d0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7401d3: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7401d6: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7401d9: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7401dc: lea edx, [edi + 0x468] */
  edx = (uint32_t)(edi + 0x468u);
/* 7401e2: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7401e4: lea eax, [esi + 0x468] */
  eax = (uint32_t)(esi + 0x468u);
/* 7401ea: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7401ec: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7401ef: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7401f2: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7401f5: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7401f8: lea eax, [edi + 0x474] */
  eax = (uint32_t)(edi + 0x474u);
/* 7401fe: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 740200: lea ecx, [esi + 0x474] */
  ecx = (uint32_t)(esi + 0x474u);
/* 740206: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 740208: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 74020b: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 74020e: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 740211: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 740214: lea ecx, [edi + 0x480] */
  ecx = (uint32_t)(edi + 0x480u);
/* 74021a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 74021c: lea edx, [esi + 0x480] */
  edx = (uint32_t)(esi + 0x480u);
/* 740222: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 740224: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 740227: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 74022a: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 74022d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 740230: lea edx, [edi + 0x48c] */
  edx = (uint32_t)(edi + 0x48cu);
/* 740236: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 740237: lea ecx, [esi + 0x48c] */
  ecx = (uint32_t)(esi + 0x48cu);
/* 74023d: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x740243u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 740243: mov eax, dword ptr [edi + 0x498] */
  eax = R32((uint32_t)(edi + 0x498u));
/* 740249: mov dword ptr [esi + 0x498], eax */
  W32((uint32_t)(esi + 0x498u), eax);
/* 74024f: mov ecx, dword ptr [edi + 0x49c] */
  ecx = R32((uint32_t)(edi + 0x49cu));
/* 740255: mov dword ptr [esi + 0x49c], ecx */
  W32((uint32_t)(esi + 0x49cu), ecx);
/* 74025b: mov edx, dword ptr [edi + 0x4a0] */
  edx = R32((uint32_t)(edi + 0x4a0u));
/* 740261: mov dword ptr [esi + 0x4a0], edx */
  W32((uint32_t)(esi + 0x4a0u), edx);
/* 740267: mov eax, dword ptr [edi + 0x4a4] */
  eax = R32((uint32_t)(edi + 0x4a4u));
/* 74026d: mov dword ptr [esi + 0x4a4], eax */
  W32((uint32_t)(esi + 0x4a4u), eax);
/* 740273: mov ecx, dword ptr [edi + 0x4a8] */
  ecx = R32((uint32_t)(edi + 0x4a8u));
/* 740279: mov dword ptr [esi + 0x4a8], ecx */
  W32((uint32_t)(esi + 0x4a8u), ecx);
/* 74027f: mov edx, dword ptr [edi + 0x4ac] */
  edx = R32((uint32_t)(edi + 0x4acu));
/* 740285: mov dword ptr [esi + 0x4ac], edx */
  W32((uint32_t)(esi + 0x4acu), edx);
/* 74028b: mov eax, dword ptr [edi + 0x4b0] */
  eax = R32((uint32_t)(edi + 0x4b0u));
/* 740291: mov dword ptr [esi + 0x4b0], eax */
  W32((uint32_t)(esi + 0x4b0u), eax);
/* 740297: mov ecx, dword ptr [edi + 0x4b4] */
  ecx = R32((uint32_t)(edi + 0x4b4u));
/* 74029d: mov dword ptr [esi + 0x4b4], ecx */
  W32((uint32_t)(esi + 0x4b4u), ecx);
/* 7402a3: mov edx, dword ptr [edi + 0x4b8] */
  edx = R32((uint32_t)(edi + 0x4b8u));
/* 7402a9: mov dword ptr [esi + 0x4b8], edx */
  W32((uint32_t)(esi + 0x4b8u), edx);
/* 7402af: mov al, byte ptr [edi + 0x4bc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x4bcu))) & 0xffu);
/* 7402b5: mov byte ptr [esi + 0x4bc], al */
  W8((uint32_t)(esi + 0x4bcu), (eax & 0xffu));
/* 7402bb: mov ecx, dword ptr [edi + 0x4c0] */
  ecx = R32((uint32_t)(edi + 0x4c0u));
/* 7402c1: mov dword ptr [esi + 0x4c0], ecx */
  W32((uint32_t)(esi + 0x4c0u), ecx);
/* 7402c7: mov edx, dword ptr [edi + 0x4c4] */
  edx = R32((uint32_t)(edi + 0x4c4u));
/* 7402cd: lea ecx, [edi + 0x4cc] */
  ecx = (uint32_t)(edi + 0x4ccu);
/* 7402d3: mov dword ptr [esi + 0x4c4], edx */
  W32((uint32_t)(esi + 0x4c4u), edx);
/* 7402d9: mov al, byte ptr [edi + 0x4c8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x4c8u))) & 0xffu);
/* 7402df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7402e0: lea ecx, [esi + 0x4cc] */
  ecx = (uint32_t)(esi + 0x4ccu);
/* 7402e6: mov byte ptr [esi + 0x4c8], al */
  W8((uint32_t)(esi + 0x4c8u), (eax & 0xffu));
/* 7402ec: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x7402f2u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 7402f2: lea edx, [edi + 0x4d8] */
  edx = (uint32_t)(edi + 0x4d8u);
/* 7402f8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7402f9: lea ecx, [esi + 0x4d8] */
  ecx = (uint32_t)(esi + 0x4d8u);
/* 7402ff: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x740305u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 740305: lea eax, [edi + 0x4e4] */
  eax = (uint32_t)(edi + 0x4e4u);
/* 74030b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74030c: lea ecx, [esi + 0x4e4] */
  ecx = (uint32_t)(esi + 0x4e4u);
/* 740312: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x740318u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 740318: lea ecx, [edi + 0x4f0] */
  ecx = (uint32_t)(edi + 0x4f0u);
/* 74031e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74031f: lea ecx, [esi + 0x4f0] */
  ecx = (uint32_t)(esi + 0x4f0u);
/* 740325: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x74032bu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 74032b: lea edx, [edi + 0x4fc] */
  edx = (uint32_t)(edi + 0x4fcu);
/* 740331: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 740332: lea ecx, [esi + 0x4fc] */
  ecx = (uint32_t)(esi + 0x4fcu);
/* 740338: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x74033eu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 74033e: mov eax, dword ptr [edi + 0x508] */
  eax = R32((uint32_t)(edi + 0x508u));
/* 740344: mov dword ptr [esi + 0x508], eax */
  W32((uint32_t)(esi + 0x508u), eax);
/* 74034a: mov ecx, dword ptr [edi + 0x50c] */
  ecx = R32((uint32_t)(edi + 0x50cu));
/* 740350: mov dword ptr [esi + 0x50c], ecx */
  W32((uint32_t)(esi + 0x50cu), ecx);
/* 740356: mov edx, dword ptr [edi + 0x510] */
  edx = R32((uint32_t)(edi + 0x510u));
/* 74035c: mov dword ptr [esi + 0x510], edx */
  W32((uint32_t)(esi + 0x510u), edx);
/* 740362: mov eax, dword ptr [edi + 0x514] */
  eax = R32((uint32_t)(edi + 0x514u));
/* 740368: mov dword ptr [esi + 0x514], eax */
  W32((uint32_t)(esi + 0x514u), eax);
/* 74036e: mov ecx, dword ptr [edi + 0x518] */
  ecx = R32((uint32_t)(edi + 0x518u));
/* 740374: lea edx, [edi + 0x51c] */
  edx = (uint32_t)(edi + 0x51cu);
/* 74037a: mov dword ptr [esi + 0x518], ecx */
  W32((uint32_t)(esi + 0x518u), ecx);
/* 740380: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 740381: lea ecx, [esi + 0x51c] */
  ecx = (uint32_t)(esi + 0x51cu);
/* 740387: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x74038du); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 74038d: mov eax, dword ptr [edi + 0x528] */
  eax = R32((uint32_t)(edi + 0x528u));
/* 740393: mov edx, dword ptr [esi + 0x528] */
  edx = R32((uint32_t)(esi + 0x528u));
/* 740399: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74039b: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74039e: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7403a0: mov dword ptr [esi + 0x528], edx */
  W32((uint32_t)(esi + 0x528u), edx);
/* 7403a6: mov ecx, dword ptr [edi + 0x52c] */
  ecx = R32((uint32_t)(edi + 0x52cu));
/* 7403ac: mov dword ptr [esi + 0x52c], ecx */
  W32((uint32_t)(esi + 0x52cu), ecx);
/* 7403b2: mov edx, dword ptr [edi + 0x530] */
  edx = R32((uint32_t)(edi + 0x530u));
/* 7403b8: lea eax, [edi + 0x534] */
  eax = (uint32_t)(edi + 0x534u);
/* 7403be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7403bf: lea ecx, [esi + 0x534] */
  ecx = (uint32_t)(esi + 0x534u);
/* 7403c5: mov dword ptr [esi + 0x530], edx */
  W32((uint32_t)(esi + 0x530u), edx);
/* 7403cb: call 0x6c4ac0 */
  esp -= 4; W32(esp, 0x7403d0u); SPILL(); f_6c4ac0(); if (g_unwind) return; RELOAD();
/* 7403d0: lea ecx, [edi + 0x540] */
  ecx = (uint32_t)(edi + 0x540u);
/* 7403d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7403d7: lea ecx, [esi + 0x540] */
  ecx = (uint32_t)(esi + 0x540u);
/* 7403dd: call 0x6ca56f */
  esp -= 4; W32(esp, 0x7403e2u); SPILL(); f_6ca56f(); if (g_unwind) return; RELOAD();
/* 7403e2: mov edx, dword ptr [edi + 0x54c] */
  edx = R32((uint32_t)(edi + 0x54cu));
/* 7403e8: mov dword ptr [esi + 0x54c], edx */
  W32((uint32_t)(esi + 0x54cu), edx);
/* 7403ee: mov eax, dword ptr [edi + 0x550] */
  eax = R32((uint32_t)(edi + 0x550u));
/* 7403f4: mov dword ptr [esi + 0x550], eax */
  W32((uint32_t)(esi + 0x550u), eax);
/* 7403fa: mov ecx, dword ptr [edi + 0x554] */
  ecx = R32((uint32_t)(edi + 0x554u));
/* 740400: mov dword ptr [esi + 0x554], ecx */
  W32((uint32_t)(esi + 0x554u), ecx);
/* 740406: mov edx, dword ptr [edi + 0x558] */
  edx = R32((uint32_t)(edi + 0x558u));
/* 74040c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74040d: mov dword ptr [esi + 0x558], edx */
  W32((uint32_t)(esi + 0x558u), edx);
/* 740413: mov eax, esi */
  eax = esi;
/* 740415: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 740416: ret 4 */
  esp += 8; SPILL(); return;
}

void f_740069(void) {
  LOAD_REGS();
L_740069: /* 740069: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x74006fu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 74006f: lea eax, [edi + 0x438] */
  eax = (uint32_t)(edi + 0x438u);
/* 740075: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 740076: lea ecx, [esi + 0x438] */
  ecx = (uint32_t)(esi + 0x438u);
/* 74007c: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x740082u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 740082: mov eax, dword ptr [edi + 0x444] */
  eax = R32((uint32_t)(edi + 0x444u));
/* 740088: mov ecx, dword ptr [esi + 0x444] */
  ecx = R32((uint32_t)(esi + 0x444u));
/* 74008e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740090: mov eax, dword ptr [esi + 0x444] */
  eax = R32((uint32_t)(esi + 0x444u));
/* 740096: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 740099: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74009b: mov dword ptr [esi + 0x444], eax */
  W32((uint32_t)(esi + 0x444u), eax);
/* 7400a1: mov ecx, eax */
  ecx = eax;
/* 7400a3: mov eax, dword ptr [edi + 0x444] */
  eax = R32((uint32_t)(edi + 0x444u));
/* 7400a9: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7400ab: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7400ae: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7400b0: mov dword ptr [esi + 0x444], eax */
  W32((uint32_t)(esi + 0x444u), eax);
/* 7400b6: mov ecx, dword ptr [edi + 0x444] */
  ecx = R32((uint32_t)(edi + 0x444u));
/* 7400bc: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7400be: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7400c1: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7400c3: mov dword ptr [esi + 0x444], ecx */
  W32((uint32_t)(esi + 0x444u), ecx);
/* 7400c9: mov edx, dword ptr [edi + 0x444] */
  edx = R32((uint32_t)(edi + 0x444u));
/* 7400cf: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7400d1: and edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7400d4: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7400d6: mov ecx, dword ptr [esi + 0x44c] */
  ecx = R32((uint32_t)(esi + 0x44cu));
/* 7400dc: mov dword ptr [esi + 0x444], edx */
  W32((uint32_t)(esi + 0x444u), edx);
/* 7400e2: mov al, byte ptr [edi + 0x448] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x448u))) & 0xffu);
/* 7400e8: mov byte ptr [esi + 0x448], al */
  W8((uint32_t)(esi + 0x448u), (eax & 0xffu));
/* 7400ee: xor ecx, dword ptr [edi + 0x44c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x44cu)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7400f4: mov eax, dword ptr [esi + 0x44c] */
  eax = R32((uint32_t)(esi + 0x44cu));
/* 7400fa: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7400fd: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7400ff: mov dword ptr [esi + 0x44c], eax */
  W32((uint32_t)(esi + 0x44cu), eax);
/* 740105: mov ecx, eax */
  ecx = eax;
/* 740107: mov eax, dword ptr [edi + 0x44c] */
  eax = R32((uint32_t)(edi + 0x44cu));
/* 74010d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74010f: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 740112: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740114: mov dword ptr [esi + 0x44c], eax */
  W32((uint32_t)(esi + 0x44cu), eax);
/* 74011a: mov ecx, dword ptr [edi + 0x44c] */
  ecx = R32((uint32_t)(edi + 0x44cu));
/* 740120: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740122: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 740125: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740127: mov dword ptr [esi + 0x44c], ecx */
  W32((uint32_t)(esi + 0x44cu), ecx);
/* 74012d: mov eax, dword ptr [edi + 0x44c] */
  eax = R32((uint32_t)(edi + 0x44cu));
/* 740133: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740135: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 740138: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74013a: mov dword ptr [esi + 0x44c], eax */
  W32((uint32_t)(esi + 0x44cu), eax);
/* 740140: mov ecx, dword ptr [edi + 0x44c] */
  ecx = R32((uint32_t)(edi + 0x44cu));
/* 740146: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740148: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74014b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74014d: mov dword ptr [esi + 0x44c], ecx */
  W32((uint32_t)(esi + 0x44cu), ecx);
/* 740153: mov eax, dword ptr [edi + 0x44c] */
  eax = R32((uint32_t)(edi + 0x44cu));
/* 740159: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74015b: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74015e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740160: mov dword ptr [esi + 0x44c], eax */
  W32((uint32_t)(esi + 0x44cu), eax);
/* 740166: mov ecx, dword ptr [edi + 0x44c] */
  ecx = R32((uint32_t)(edi + 0x44cu));
/* 74016c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74016e: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 740171: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740173: mov dword ptr [esi + 0x44c], ecx */
  W32((uint32_t)(esi + 0x44cu), ecx);
/* 740179: mov eax, dword ptr [edi + 0x44c] */
  eax = R32((uint32_t)(edi + 0x44cu));
/* 74017f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740181: and eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 740186: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740188: mov dword ptr [esi + 0x44c], eax */
  W32((uint32_t)(esi + 0x44cu), eax);
/* 74018e: mov edx, dword ptr [edi + 0x44c] */
  edx = R32((uint32_t)(edi + 0x44cu));
/* 740194: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 740196: and edx, 0x100 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 74019c: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74019e: lea eax, [edi + 0x450] */
  eax = (uint32_t)(edi + 0x450u);
/* 7401a4: mov dword ptr [esi + 0x44c], edx */
  W32((uint32_t)(esi + 0x44cu), edx);
/* 7401aa: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7401ac: lea ecx, [esi + 0x450] */
  ecx = (uint32_t)(esi + 0x450u);
/* 7401b2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7401b4: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7401b7: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7401ba: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7401bd: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7401c0: lea ecx, [edi + 0x45c] */
  ecx = (uint32_t)(edi + 0x45cu);
/* 7401c6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7401c8: lea edx, [esi + 0x45c] */
  edx = (uint32_t)(esi + 0x45cu);
/* 7401ce: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7401d0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7401d3: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7401d6: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7401d9: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7401dc: lea edx, [edi + 0x468] */
  edx = (uint32_t)(edi + 0x468u);
/* 7401e2: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7401e4: lea eax, [esi + 0x468] */
  eax = (uint32_t)(esi + 0x468u);
/* 7401ea: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7401ec: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7401ef: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7401f2: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7401f5: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7401f8: lea eax, [edi + 0x474] */
  eax = (uint32_t)(edi + 0x474u);
/* 7401fe: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 740200: lea ecx, [esi + 0x474] */
  ecx = (uint32_t)(esi + 0x474u);
/* 740206: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 740208: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 74020b: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 74020e: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 740211: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 740214: lea ecx, [edi + 0x480] */
  ecx = (uint32_t)(edi + 0x480u);
/* 74021a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 74021c: lea edx, [esi + 0x480] */
  edx = (uint32_t)(esi + 0x480u);
/* 740222: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 740224: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 740227: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 74022a: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 74022d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 740230: lea edx, [edi + 0x48c] */
  edx = (uint32_t)(edi + 0x48cu);
/* 740236: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 740237: lea ecx, [esi + 0x48c] */
  ecx = (uint32_t)(esi + 0x48cu);
/* 74023d: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x740243u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 740243: mov eax, dword ptr [edi + 0x498] */
  eax = R32((uint32_t)(edi + 0x498u));
/* 740249: mov dword ptr [esi + 0x498], eax */
  W32((uint32_t)(esi + 0x498u), eax);
/* 74024f: mov ecx, dword ptr [edi + 0x49c] */
  ecx = R32((uint32_t)(edi + 0x49cu));
/* 740255: mov dword ptr [esi + 0x49c], ecx */
  W32((uint32_t)(esi + 0x49cu), ecx);
/* 74025b: mov edx, dword ptr [edi + 0x4a0] */
  edx = R32((uint32_t)(edi + 0x4a0u));
/* 740261: mov dword ptr [esi + 0x4a0], edx */
  W32((uint32_t)(esi + 0x4a0u), edx);
/* 740267: mov eax, dword ptr [edi + 0x4a4] */
  eax = R32((uint32_t)(edi + 0x4a4u));
/* 74026d: mov dword ptr [esi + 0x4a4], eax */
  W32((uint32_t)(esi + 0x4a4u), eax);
/* 740273: mov ecx, dword ptr [edi + 0x4a8] */
  ecx = R32((uint32_t)(edi + 0x4a8u));
/* 740279: mov dword ptr [esi + 0x4a8], ecx */
  W32((uint32_t)(esi + 0x4a8u), ecx);
/* 74027f: mov edx, dword ptr [edi + 0x4ac] */
  edx = R32((uint32_t)(edi + 0x4acu));
/* 740285: mov dword ptr [esi + 0x4ac], edx */
  W32((uint32_t)(esi + 0x4acu), edx);
/* 74028b: mov eax, dword ptr [edi + 0x4b0] */
  eax = R32((uint32_t)(edi + 0x4b0u));
/* 740291: mov dword ptr [esi + 0x4b0], eax */
  W32((uint32_t)(esi + 0x4b0u), eax);
/* 740297: mov ecx, dword ptr [edi + 0x4b4] */
  ecx = R32((uint32_t)(edi + 0x4b4u));
/* 74029d: mov dword ptr [esi + 0x4b4], ecx */
  W32((uint32_t)(esi + 0x4b4u), ecx);
/* 7402a3: mov edx, dword ptr [edi + 0x4b8] */
  edx = R32((uint32_t)(edi + 0x4b8u));
/* 7402a9: mov dword ptr [esi + 0x4b8], edx */
  W32((uint32_t)(esi + 0x4b8u), edx);
/* 7402af: mov al, byte ptr [edi + 0x4bc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x4bcu))) & 0xffu);
/* 7402b5: mov byte ptr [esi + 0x4bc], al */
  W8((uint32_t)(esi + 0x4bcu), (eax & 0xffu));
/* 7402bb: mov ecx, dword ptr [edi + 0x4c0] */
  ecx = R32((uint32_t)(edi + 0x4c0u));
/* 7402c1: mov dword ptr [esi + 0x4c0], ecx */
  W32((uint32_t)(esi + 0x4c0u), ecx);
/* 7402c7: mov edx, dword ptr [edi + 0x4c4] */
  edx = R32((uint32_t)(edi + 0x4c4u));
/* 7402cd: lea ecx, [edi + 0x4cc] */
  ecx = (uint32_t)(edi + 0x4ccu);
/* 7402d3: mov dword ptr [esi + 0x4c4], edx */
  W32((uint32_t)(esi + 0x4c4u), edx);
/* 7402d9: mov al, byte ptr [edi + 0x4c8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x4c8u))) & 0xffu);
/* 7402df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7402e0: lea ecx, [esi + 0x4cc] */
  ecx = (uint32_t)(esi + 0x4ccu);
/* 7402e6: mov byte ptr [esi + 0x4c8], al */
  W8((uint32_t)(esi + 0x4c8u), (eax & 0xffu));
/* 7402ec: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x7402f2u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 7402f2: lea edx, [edi + 0x4d8] */
  edx = (uint32_t)(edi + 0x4d8u);
/* 7402f8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7402f9: lea ecx, [esi + 0x4d8] */
  ecx = (uint32_t)(esi + 0x4d8u);
/* 7402ff: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x740305u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 740305: lea eax, [edi + 0x4e4] */
  eax = (uint32_t)(edi + 0x4e4u);
/* 74030b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74030c: lea ecx, [esi + 0x4e4] */
  ecx = (uint32_t)(esi + 0x4e4u);
/* 740312: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x740318u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 740318: lea ecx, [edi + 0x4f0] */
  ecx = (uint32_t)(edi + 0x4f0u);
/* 74031e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74031f: lea ecx, [esi + 0x4f0] */
  ecx = (uint32_t)(esi + 0x4f0u);
/* 740325: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x74032bu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 74032b: lea edx, [edi + 0x4fc] */
  edx = (uint32_t)(edi + 0x4fcu);
/* 740331: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 740332: lea ecx, [esi + 0x4fc] */
  ecx = (uint32_t)(esi + 0x4fcu);
/* 740338: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x74033eu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 74033e: mov eax, dword ptr [edi + 0x508] */
  eax = R32((uint32_t)(edi + 0x508u));
/* 740344: mov dword ptr [esi + 0x508], eax */
  W32((uint32_t)(esi + 0x508u), eax);
/* 74034a: mov ecx, dword ptr [edi + 0x50c] */
  ecx = R32((uint32_t)(edi + 0x50cu));
/* 740350: mov dword ptr [esi + 0x50c], ecx */
  W32((uint32_t)(esi + 0x50cu), ecx);
/* 740356: mov edx, dword ptr [edi + 0x510] */
  edx = R32((uint32_t)(edi + 0x510u));
/* 74035c: mov dword ptr [esi + 0x510], edx */
  W32((uint32_t)(esi + 0x510u), edx);
/* 740362: mov eax, dword ptr [edi + 0x514] */
  eax = R32((uint32_t)(edi + 0x514u));
/* 740368: mov dword ptr [esi + 0x514], eax */
  W32((uint32_t)(esi + 0x514u), eax);
/* 74036e: mov ecx, dword ptr [edi + 0x518] */
  ecx = R32((uint32_t)(edi + 0x518u));
/* 740374: lea edx, [edi + 0x51c] */
  edx = (uint32_t)(edi + 0x51cu);
/* 74037a: mov dword ptr [esi + 0x518], ecx */
  W32((uint32_t)(esi + 0x518u), ecx);
/* 740380: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 740381: lea ecx, [esi + 0x51c] */
  ecx = (uint32_t)(esi + 0x51cu);
/* 740387: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x74038du); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 74038d: mov eax, dword ptr [edi + 0x528] */
  eax = R32((uint32_t)(edi + 0x528u));
/* 740393: mov edx, dword ptr [esi + 0x528] */
  edx = R32((uint32_t)(esi + 0x528u));
/* 740399: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74039b: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74039e: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7403a0: mov dword ptr [esi + 0x528], edx */
  W32((uint32_t)(esi + 0x528u), edx);
/* 7403a6: mov ecx, dword ptr [edi + 0x52c] */
  ecx = R32((uint32_t)(edi + 0x52cu));
/* 7403ac: mov dword ptr [esi + 0x52c], ecx */
  W32((uint32_t)(esi + 0x52cu), ecx);
/* 7403b2: mov edx, dword ptr [edi + 0x530] */
  edx = R32((uint32_t)(edi + 0x530u));
/* 7403b8: lea eax, [edi + 0x534] */
  eax = (uint32_t)(edi + 0x534u);
/* 7403be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7403bf: lea ecx, [esi + 0x534] */
  ecx = (uint32_t)(esi + 0x534u);
/* 7403c5: mov dword ptr [esi + 0x530], edx */
  W32((uint32_t)(esi + 0x530u), edx);
/* 7403cb: call 0x6c4ac0 */
  esp -= 4; W32(esp, 0x7403d0u); SPILL(); f_6c4ac0(); if (g_unwind) return; RELOAD();
/* 7403d0: lea ecx, [edi + 0x540] */
  ecx = (uint32_t)(edi + 0x540u);
/* 7403d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7403d7: lea ecx, [esi + 0x540] */
  ecx = (uint32_t)(esi + 0x540u);
/* 7403dd: call 0x6ca56f */
  esp -= 4; W32(esp, 0x7403e2u); SPILL(); f_6ca56f(); if (g_unwind) return; RELOAD();
/* 7403e2: mov edx, dword ptr [edi + 0x54c] */
  edx = R32((uint32_t)(edi + 0x54cu));
/* 7403e8: mov dword ptr [esi + 0x54c], edx */
  W32((uint32_t)(esi + 0x54cu), edx);
/* 7403ee: mov eax, dword ptr [edi + 0x550] */
  eax = R32((uint32_t)(edi + 0x550u));
/* 7403f4: mov dword ptr [esi + 0x550], eax */
  W32((uint32_t)(esi + 0x550u), eax);
/* 7403fa: mov ecx, dword ptr [edi + 0x554] */
  ecx = R32((uint32_t)(edi + 0x554u));
/* 740400: mov dword ptr [esi + 0x554], ecx */
  W32((uint32_t)(esi + 0x554u), ecx);
/* 740406: mov edx, dword ptr [edi + 0x558] */
  edx = R32((uint32_t)(edi + 0x558u));
/* 74040c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74040d: mov dword ptr [esi + 0x558], edx */
  W32((uint32_t)(esi + 0x558u), edx);
/* 740413: mov eax, esi */
  eax = esi;
/* 740415: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 740416: ret 4 */
  esp += 8; SPILL(); return;
}

void f_74006f(void) {
  LOAD_REGS();
L_74006f: /* 74006f: lea eax, [edi + 0x438] */
  eax = (uint32_t)(edi + 0x438u);
/* 740075: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 740076: lea ecx, [esi + 0x438] */
  ecx = (uint32_t)(esi + 0x438u);
/* 74007c: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x740082u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 740082: mov eax, dword ptr [edi + 0x444] */
  eax = R32((uint32_t)(edi + 0x444u));
/* 740088: mov ecx, dword ptr [esi + 0x444] */
  ecx = R32((uint32_t)(esi + 0x444u));
/* 74008e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740090: mov eax, dword ptr [esi + 0x444] */
  eax = R32((uint32_t)(esi + 0x444u));
/* 740096: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 740099: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74009b: mov dword ptr [esi + 0x444], eax */
  W32((uint32_t)(esi + 0x444u), eax);
/* 7400a1: mov ecx, eax */
  ecx = eax;
/* 7400a3: mov eax, dword ptr [edi + 0x444] */
  eax = R32((uint32_t)(edi + 0x444u));
/* 7400a9: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7400ab: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7400ae: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7400b0: mov dword ptr [esi + 0x444], eax */
  W32((uint32_t)(esi + 0x444u), eax);
/* 7400b6: mov ecx, dword ptr [edi + 0x444] */
  ecx = R32((uint32_t)(edi + 0x444u));
/* 7400bc: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7400be: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7400c1: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7400c3: mov dword ptr [esi + 0x444], ecx */
  W32((uint32_t)(esi + 0x444u), ecx);
/* 7400c9: mov edx, dword ptr [edi + 0x444] */
  edx = R32((uint32_t)(edi + 0x444u));
/* 7400cf: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7400d1: and edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7400d4: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7400d6: mov ecx, dword ptr [esi + 0x44c] */
  ecx = R32((uint32_t)(esi + 0x44cu));
/* 7400dc: mov dword ptr [esi + 0x444], edx */
  W32((uint32_t)(esi + 0x444u), edx);
/* 7400e2: mov al, byte ptr [edi + 0x448] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x448u))) & 0xffu);
/* 7400e8: mov byte ptr [esi + 0x448], al */
  W8((uint32_t)(esi + 0x448u), (eax & 0xffu));
/* 7400ee: xor ecx, dword ptr [edi + 0x44c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x44cu)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7400f4: mov eax, dword ptr [esi + 0x44c] */
  eax = R32((uint32_t)(esi + 0x44cu));
/* 7400fa: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7400fd: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7400ff: mov dword ptr [esi + 0x44c], eax */
  W32((uint32_t)(esi + 0x44cu), eax);
/* 740105: mov ecx, eax */
  ecx = eax;
/* 740107: mov eax, dword ptr [edi + 0x44c] */
  eax = R32((uint32_t)(edi + 0x44cu));
/* 74010d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74010f: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 740112: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740114: mov dword ptr [esi + 0x44c], eax */
  W32((uint32_t)(esi + 0x44cu), eax);
/* 74011a: mov ecx, dword ptr [edi + 0x44c] */
  ecx = R32((uint32_t)(edi + 0x44cu));
/* 740120: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740122: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 740125: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740127: mov dword ptr [esi + 0x44c], ecx */
  W32((uint32_t)(esi + 0x44cu), ecx);
/* 74012d: mov eax, dword ptr [edi + 0x44c] */
  eax = R32((uint32_t)(edi + 0x44cu));
/* 740133: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740135: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 740138: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74013a: mov dword ptr [esi + 0x44c], eax */
  W32((uint32_t)(esi + 0x44cu), eax);
/* 740140: mov ecx, dword ptr [edi + 0x44c] */
  ecx = R32((uint32_t)(edi + 0x44cu));
/* 740146: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740148: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74014b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74014d: mov dword ptr [esi + 0x44c], ecx */
  W32((uint32_t)(esi + 0x44cu), ecx);
/* 740153: mov eax, dword ptr [edi + 0x44c] */
  eax = R32((uint32_t)(edi + 0x44cu));
/* 740159: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74015b: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74015e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740160: mov dword ptr [esi + 0x44c], eax */
  W32((uint32_t)(esi + 0x44cu), eax);
/* 740166: mov ecx, dword ptr [edi + 0x44c] */
  ecx = R32((uint32_t)(edi + 0x44cu));
/* 74016c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74016e: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 740171: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740173: mov dword ptr [esi + 0x44c], ecx */
  W32((uint32_t)(esi + 0x44cu), ecx);
/* 740179: mov eax, dword ptr [edi + 0x44c] */
  eax = R32((uint32_t)(edi + 0x44cu));
/* 74017f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740181: and eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 740186: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740188: mov dword ptr [esi + 0x44c], eax */
  W32((uint32_t)(esi + 0x44cu), eax);
/* 74018e: mov edx, dword ptr [edi + 0x44c] */
  edx = R32((uint32_t)(edi + 0x44cu));
/* 740194: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 740196: and edx, 0x100 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 74019c: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74019e: lea eax, [edi + 0x450] */
  eax = (uint32_t)(edi + 0x450u);
/* 7401a4: mov dword ptr [esi + 0x44c], edx */
  W32((uint32_t)(esi + 0x44cu), edx);
/* 7401aa: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7401ac: lea ecx, [esi + 0x450] */
  ecx = (uint32_t)(esi + 0x450u);
/* 7401b2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7401b4: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7401b7: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7401ba: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7401bd: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7401c0: lea ecx, [edi + 0x45c] */
  ecx = (uint32_t)(edi + 0x45cu);
/* 7401c6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7401c8: lea edx, [esi + 0x45c] */
  edx = (uint32_t)(esi + 0x45cu);
/* 7401ce: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7401d0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7401d3: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7401d6: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7401d9: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7401dc: lea edx, [edi + 0x468] */
  edx = (uint32_t)(edi + 0x468u);
/* 7401e2: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7401e4: lea eax, [esi + 0x468] */
  eax = (uint32_t)(esi + 0x468u);
/* 7401ea: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7401ec: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7401ef: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7401f2: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7401f5: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7401f8: lea eax, [edi + 0x474] */
  eax = (uint32_t)(edi + 0x474u);
/* 7401fe: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 740200: lea ecx, [esi + 0x474] */
  ecx = (uint32_t)(esi + 0x474u);
/* 740206: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 740208: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 74020b: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 74020e: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 740211: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 740214: lea ecx, [edi + 0x480] */
  ecx = (uint32_t)(edi + 0x480u);
/* 74021a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 74021c: lea edx, [esi + 0x480] */
  edx = (uint32_t)(esi + 0x480u);
/* 740222: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 740224: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 740227: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 74022a: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 74022d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 740230: lea edx, [edi + 0x48c] */
  edx = (uint32_t)(edi + 0x48cu);
/* 740236: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 740237: lea ecx, [esi + 0x48c] */
  ecx = (uint32_t)(esi + 0x48cu);
/* 74023d: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x740243u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 740243: mov eax, dword ptr [edi + 0x498] */
  eax = R32((uint32_t)(edi + 0x498u));
/* 740249: mov dword ptr [esi + 0x498], eax */
  W32((uint32_t)(esi + 0x498u), eax);
/* 74024f: mov ecx, dword ptr [edi + 0x49c] */
  ecx = R32((uint32_t)(edi + 0x49cu));
/* 740255: mov dword ptr [esi + 0x49c], ecx */
  W32((uint32_t)(esi + 0x49cu), ecx);
/* 74025b: mov edx, dword ptr [edi + 0x4a0] */
  edx = R32((uint32_t)(edi + 0x4a0u));
/* 740261: mov dword ptr [esi + 0x4a0], edx */
  W32((uint32_t)(esi + 0x4a0u), edx);
/* 740267: mov eax, dword ptr [edi + 0x4a4] */
  eax = R32((uint32_t)(edi + 0x4a4u));
/* 74026d: mov dword ptr [esi + 0x4a4], eax */
  W32((uint32_t)(esi + 0x4a4u), eax);
/* 740273: mov ecx, dword ptr [edi + 0x4a8] */
  ecx = R32((uint32_t)(edi + 0x4a8u));
/* 740279: mov dword ptr [esi + 0x4a8], ecx */
  W32((uint32_t)(esi + 0x4a8u), ecx);
/* 74027f: mov edx, dword ptr [edi + 0x4ac] */
  edx = R32((uint32_t)(edi + 0x4acu));
/* 740285: mov dword ptr [esi + 0x4ac], edx */
  W32((uint32_t)(esi + 0x4acu), edx);
/* 74028b: mov eax, dword ptr [edi + 0x4b0] */
  eax = R32((uint32_t)(edi + 0x4b0u));
/* 740291: mov dword ptr [esi + 0x4b0], eax */
  W32((uint32_t)(esi + 0x4b0u), eax);
/* 740297: mov ecx, dword ptr [edi + 0x4b4] */
  ecx = R32((uint32_t)(edi + 0x4b4u));
/* 74029d: mov dword ptr [esi + 0x4b4], ecx */
  W32((uint32_t)(esi + 0x4b4u), ecx);
/* 7402a3: mov edx, dword ptr [edi + 0x4b8] */
  edx = R32((uint32_t)(edi + 0x4b8u));
/* 7402a9: mov dword ptr [esi + 0x4b8], edx */
  W32((uint32_t)(esi + 0x4b8u), edx);
/* 7402af: mov al, byte ptr [edi + 0x4bc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x4bcu))) & 0xffu);
/* 7402b5: mov byte ptr [esi + 0x4bc], al */
  W8((uint32_t)(esi + 0x4bcu), (eax & 0xffu));
/* 7402bb: mov ecx, dword ptr [edi + 0x4c0] */
  ecx = R32((uint32_t)(edi + 0x4c0u));
/* 7402c1: mov dword ptr [esi + 0x4c0], ecx */
  W32((uint32_t)(esi + 0x4c0u), ecx);
/* 7402c7: mov edx, dword ptr [edi + 0x4c4] */
  edx = R32((uint32_t)(edi + 0x4c4u));
/* 7402cd: lea ecx, [edi + 0x4cc] */
  ecx = (uint32_t)(edi + 0x4ccu);
/* 7402d3: mov dword ptr [esi + 0x4c4], edx */
  W32((uint32_t)(esi + 0x4c4u), edx);
/* 7402d9: mov al, byte ptr [edi + 0x4c8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x4c8u))) & 0xffu);
/* 7402df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7402e0: lea ecx, [esi + 0x4cc] */
  ecx = (uint32_t)(esi + 0x4ccu);
/* 7402e6: mov byte ptr [esi + 0x4c8], al */
  W8((uint32_t)(esi + 0x4c8u), (eax & 0xffu));
/* 7402ec: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x7402f2u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 7402f2: lea edx, [edi + 0x4d8] */
  edx = (uint32_t)(edi + 0x4d8u);
/* 7402f8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7402f9: lea ecx, [esi + 0x4d8] */
  ecx = (uint32_t)(esi + 0x4d8u);
/* 7402ff: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x740305u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 740305: lea eax, [edi + 0x4e4] */
  eax = (uint32_t)(edi + 0x4e4u);
/* 74030b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74030c: lea ecx, [esi + 0x4e4] */
  ecx = (uint32_t)(esi + 0x4e4u);
/* 740312: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x740318u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 740318: lea ecx, [edi + 0x4f0] */
  ecx = (uint32_t)(edi + 0x4f0u);
/* 74031e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74031f: lea ecx, [esi + 0x4f0] */
  ecx = (uint32_t)(esi + 0x4f0u);
/* 740325: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x74032bu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 74032b: lea edx, [edi + 0x4fc] */
  edx = (uint32_t)(edi + 0x4fcu);
/* 740331: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 740332: lea ecx, [esi + 0x4fc] */
  ecx = (uint32_t)(esi + 0x4fcu);
/* 740338: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x74033eu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 74033e: mov eax, dword ptr [edi + 0x508] */
  eax = R32((uint32_t)(edi + 0x508u));
/* 740344: mov dword ptr [esi + 0x508], eax */
  W32((uint32_t)(esi + 0x508u), eax);
/* 74034a: mov ecx, dword ptr [edi + 0x50c] */
  ecx = R32((uint32_t)(edi + 0x50cu));
/* 740350: mov dword ptr [esi + 0x50c], ecx */
  W32((uint32_t)(esi + 0x50cu), ecx);
/* 740356: mov edx, dword ptr [edi + 0x510] */
  edx = R32((uint32_t)(edi + 0x510u));
/* 74035c: mov dword ptr [esi + 0x510], edx */
  W32((uint32_t)(esi + 0x510u), edx);
/* 740362: mov eax, dword ptr [edi + 0x514] */
  eax = R32((uint32_t)(edi + 0x514u));
/* 740368: mov dword ptr [esi + 0x514], eax */
  W32((uint32_t)(esi + 0x514u), eax);
/* 74036e: mov ecx, dword ptr [edi + 0x518] */
  ecx = R32((uint32_t)(edi + 0x518u));
/* 740374: lea edx, [edi + 0x51c] */
  edx = (uint32_t)(edi + 0x51cu);
/* 74037a: mov dword ptr [esi + 0x518], ecx */
  W32((uint32_t)(esi + 0x518u), ecx);
/* 740380: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 740381: lea ecx, [esi + 0x51c] */
  ecx = (uint32_t)(esi + 0x51cu);
/* 740387: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x74038du); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 74038d: mov eax, dword ptr [edi + 0x528] */
  eax = R32((uint32_t)(edi + 0x528u));
/* 740393: mov edx, dword ptr [esi + 0x528] */
  edx = R32((uint32_t)(esi + 0x528u));
/* 740399: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74039b: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74039e: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7403a0: mov dword ptr [esi + 0x528], edx */
  W32((uint32_t)(esi + 0x528u), edx);
/* 7403a6: mov ecx, dword ptr [edi + 0x52c] */
  ecx = R32((uint32_t)(edi + 0x52cu));
/* 7403ac: mov dword ptr [esi + 0x52c], ecx */
  W32((uint32_t)(esi + 0x52cu), ecx);
/* 7403b2: mov edx, dword ptr [edi + 0x530] */
  edx = R32((uint32_t)(edi + 0x530u));
/* 7403b8: lea eax, [edi + 0x534] */
  eax = (uint32_t)(edi + 0x534u);
/* 7403be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7403bf: lea ecx, [esi + 0x534] */
  ecx = (uint32_t)(esi + 0x534u);
/* 7403c5: mov dword ptr [esi + 0x530], edx */
  W32((uint32_t)(esi + 0x530u), edx);
/* 7403cb: call 0x6c4ac0 */
  esp -= 4; W32(esp, 0x7403d0u); SPILL(); f_6c4ac0(); if (g_unwind) return; RELOAD();
/* 7403d0: lea ecx, [edi + 0x540] */
  ecx = (uint32_t)(edi + 0x540u);
/* 7403d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7403d7: lea ecx, [esi + 0x540] */
  ecx = (uint32_t)(esi + 0x540u);
/* 7403dd: call 0x6ca56f */
  esp -= 4; W32(esp, 0x7403e2u); SPILL(); f_6ca56f(); if (g_unwind) return; RELOAD();
/* 7403e2: mov edx, dword ptr [edi + 0x54c] */
  edx = R32((uint32_t)(edi + 0x54cu));
/* 7403e8: mov dword ptr [esi + 0x54c], edx */
  W32((uint32_t)(esi + 0x54cu), edx);
/* 7403ee: mov eax, dword ptr [edi + 0x550] */
  eax = R32((uint32_t)(edi + 0x550u));
/* 7403f4: mov dword ptr [esi + 0x550], eax */
  W32((uint32_t)(esi + 0x550u), eax);
/* 7403fa: mov ecx, dword ptr [edi + 0x554] */
  ecx = R32((uint32_t)(edi + 0x554u));
/* 740400: mov dword ptr [esi + 0x554], ecx */
  W32((uint32_t)(esi + 0x554u), ecx);
/* 740406: mov edx, dword ptr [edi + 0x558] */
  edx = R32((uint32_t)(edi + 0x558u));
/* 74040c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74040d: mov dword ptr [esi + 0x558], edx */
  W32((uint32_t)(esi + 0x558u), edx);
/* 740413: mov eax, esi */
  eax = esi;
/* 740415: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 740416: ret 4 */
  esp += 8; SPILL(); return;
}

void f_740075(void) {
  LOAD_REGS();
L_740075: /* 740075: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 740076: lea ecx, [esi + 0x438] */
  ecx = (uint32_t)(esi + 0x438u);
/* 74007c: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x740082u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 740082: mov eax, dword ptr [edi + 0x444] */
  eax = R32((uint32_t)(edi + 0x444u));
/* 740088: mov ecx, dword ptr [esi + 0x444] */
  ecx = R32((uint32_t)(esi + 0x444u));
/* 74008e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740090: mov eax, dword ptr [esi + 0x444] */
  eax = R32((uint32_t)(esi + 0x444u));
/* 740096: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 740099: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74009b: mov dword ptr [esi + 0x444], eax */
  W32((uint32_t)(esi + 0x444u), eax);
/* 7400a1: mov ecx, eax */
  ecx = eax;
/* 7400a3: mov eax, dword ptr [edi + 0x444] */
  eax = R32((uint32_t)(edi + 0x444u));
/* 7400a9: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7400ab: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7400ae: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7400b0: mov dword ptr [esi + 0x444], eax */
  W32((uint32_t)(esi + 0x444u), eax);
/* 7400b6: mov ecx, dword ptr [edi + 0x444] */
  ecx = R32((uint32_t)(edi + 0x444u));
/* 7400bc: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7400be: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7400c1: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7400c3: mov dword ptr [esi + 0x444], ecx */
  W32((uint32_t)(esi + 0x444u), ecx);
/* 7400c9: mov edx, dword ptr [edi + 0x444] */
  edx = R32((uint32_t)(edi + 0x444u));
/* 7400cf: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7400d1: and edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7400d4: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7400d6: mov ecx, dword ptr [esi + 0x44c] */
  ecx = R32((uint32_t)(esi + 0x44cu));
/* 7400dc: mov dword ptr [esi + 0x444], edx */
  W32((uint32_t)(esi + 0x444u), edx);
/* 7400e2: mov al, byte ptr [edi + 0x448] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x448u))) & 0xffu);
/* 7400e8: mov byte ptr [esi + 0x448], al */
  W8((uint32_t)(esi + 0x448u), (eax & 0xffu));
/* 7400ee: xor ecx, dword ptr [edi + 0x44c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x44cu)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7400f4: mov eax, dword ptr [esi + 0x44c] */
  eax = R32((uint32_t)(esi + 0x44cu));
/* 7400fa: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7400fd: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7400ff: mov dword ptr [esi + 0x44c], eax */
  W32((uint32_t)(esi + 0x44cu), eax);
/* 740105: mov ecx, eax */
  ecx = eax;
/* 740107: mov eax, dword ptr [edi + 0x44c] */
  eax = R32((uint32_t)(edi + 0x44cu));
/* 74010d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74010f: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 740112: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740114: mov dword ptr [esi + 0x44c], eax */
  W32((uint32_t)(esi + 0x44cu), eax);
/* 74011a: mov ecx, dword ptr [edi + 0x44c] */
  ecx = R32((uint32_t)(edi + 0x44cu));
/* 740120: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740122: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 740125: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740127: mov dword ptr [esi + 0x44c], ecx */
  W32((uint32_t)(esi + 0x44cu), ecx);
/* 74012d: mov eax, dword ptr [edi + 0x44c] */
  eax = R32((uint32_t)(edi + 0x44cu));
/* 740133: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740135: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 740138: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74013a: mov dword ptr [esi + 0x44c], eax */
  W32((uint32_t)(esi + 0x44cu), eax);
/* 740140: mov ecx, dword ptr [edi + 0x44c] */
  ecx = R32((uint32_t)(edi + 0x44cu));
/* 740146: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740148: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 74014b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74014d: mov dword ptr [esi + 0x44c], ecx */
  W32((uint32_t)(esi + 0x44cu), ecx);
/* 740153: mov eax, dword ptr [edi + 0x44c] */
  eax = R32((uint32_t)(edi + 0x44cu));
/* 740159: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74015b: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74015e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740160: mov dword ptr [esi + 0x44c], eax */
  W32((uint32_t)(esi + 0x44cu), eax);
/* 740166: mov ecx, dword ptr [edi + 0x44c] */
  ecx = R32((uint32_t)(edi + 0x44cu));
/* 74016c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 74016e: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 740171: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740173: mov dword ptr [esi + 0x44c], ecx */
  W32((uint32_t)(esi + 0x44cu), ecx);
/* 740179: mov eax, dword ptr [edi + 0x44c] */
  eax = R32((uint32_t)(edi + 0x44cu));
/* 74017f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740181: and eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 740186: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740188: mov dword ptr [esi + 0x44c], eax */
  W32((uint32_t)(esi + 0x44cu), eax);
/* 74018e: mov edx, dword ptr [edi + 0x44c] */
  edx = R32((uint32_t)(edi + 0x44cu));
/* 740194: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 740196: and edx, 0x100 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 74019c: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74019e: lea eax, [edi + 0x450] */
  eax = (uint32_t)(edi + 0x450u);
/* 7401a4: mov dword ptr [esi + 0x44c], edx */
  W32((uint32_t)(esi + 0x44cu), edx);
/* 7401aa: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7401ac: lea ecx, [esi + 0x450] */
  ecx = (uint32_t)(esi + 0x450u);
/* 7401b2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7401b4: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7401b7: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7401ba: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7401bd: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7401c0: lea ecx, [edi + 0x45c] */
  ecx = (uint32_t)(edi + 0x45cu);
/* 7401c6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7401c8: lea edx, [esi + 0x45c] */
  edx = (uint32_t)(esi + 0x45cu);
/* 7401ce: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7401d0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7401d3: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7401d6: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7401d9: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7401dc: lea edx, [edi + 0x468] */
  edx = (uint32_t)(edi + 0x468u);
/* 7401e2: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7401e4: lea eax, [esi + 0x468] */
  eax = (uint32_t)(esi + 0x468u);
/* 7401ea: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7401ec: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7401ef: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7401f2: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7401f5: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7401f8: lea eax, [edi + 0x474] */
  eax = (uint32_t)(edi + 0x474u);
/* 7401fe: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 740200: lea ecx, [esi + 0x474] */
  ecx = (uint32_t)(esi + 0x474u);
/* 740206: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 740208: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 74020b: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 74020e: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 740211: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 740214: lea ecx, [edi + 0x480] */
  ecx = (uint32_t)(edi + 0x480u);
/* 74021a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 74021c: lea edx, [esi + 0x480] */
  edx = (uint32_t)(esi + 0x480u);
/* 740222: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 740224: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 740227: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 74022a: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 74022d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 740230: lea edx, [edi + 0x48c] */
  edx = (uint32_t)(edi + 0x48cu);
/* 740236: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 740237: lea ecx, [esi + 0x48c] */
  ecx = (uint32_t)(esi + 0x48cu);
/* 74023d: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x740243u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 740243: mov eax, dword ptr [edi + 0x498] */
  eax = R32((uint32_t)(edi + 0x498u));
/* 740249: mov dword ptr [esi + 0x498], eax */
  W32((uint32_t)(esi + 0x498u), eax);
/* 74024f: mov ecx, dword ptr [edi + 0x49c] */
  ecx = R32((uint32_t)(edi + 0x49cu));
/* 740255: mov dword ptr [esi + 0x49c], ecx */
  W32((uint32_t)(esi + 0x49cu), ecx);
/* 74025b: mov edx, dword ptr [edi + 0x4a0] */
  edx = R32((uint32_t)(edi + 0x4a0u));
/* 740261: mov dword ptr [esi + 0x4a0], edx */
  W32((uint32_t)(esi + 0x4a0u), edx);
/* 740267: mov eax, dword ptr [edi + 0x4a4] */
  eax = R32((uint32_t)(edi + 0x4a4u));
/* 74026d: mov dword ptr [esi + 0x4a4], eax */
  W32((uint32_t)(esi + 0x4a4u), eax);
/* 740273: mov ecx, dword ptr [edi + 0x4a8] */
  ecx = R32((uint32_t)(edi + 0x4a8u));
/* 740279: mov dword ptr [esi + 0x4a8], ecx */
  W32((uint32_t)(esi + 0x4a8u), ecx);
/* 74027f: mov edx, dword ptr [edi + 0x4ac] */
  edx = R32((uint32_t)(edi + 0x4acu));
/* 740285: mov dword ptr [esi + 0x4ac], edx */
  W32((uint32_t)(esi + 0x4acu), edx);
/* 74028b: mov eax, dword ptr [edi + 0x4b0] */
  eax = R32((uint32_t)(edi + 0x4b0u));
/* 740291: mov dword ptr [esi + 0x4b0], eax */
  W32((uint32_t)(esi + 0x4b0u), eax);
/* 740297: mov ecx, dword ptr [edi + 0x4b4] */
  ecx = R32((uint32_t)(edi + 0x4b4u));
/* 74029d: mov dword ptr [esi + 0x4b4], ecx */
  W32((uint32_t)(esi + 0x4b4u), ecx);
/* 7402a3: mov edx, dword ptr [edi + 0x4b8] */
  edx = R32((uint32_t)(edi + 0x4b8u));
/* 7402a9: mov dword ptr [esi + 0x4b8], edx */
  W32((uint32_t)(esi + 0x4b8u), edx);
/* 7402af: mov al, byte ptr [edi + 0x4bc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x4bcu))) & 0xffu);
/* 7402b5: mov byte ptr [esi + 0x4bc], al */
  W8((uint32_t)(esi + 0x4bcu), (eax & 0xffu));
/* 7402bb: mov ecx, dword ptr [edi + 0x4c0] */
  ecx = R32((uint32_t)(edi + 0x4c0u));
/* 7402c1: mov dword ptr [esi + 0x4c0], ecx */
  W32((uint32_t)(esi + 0x4c0u), ecx);
/* 7402c7: mov edx, dword ptr [edi + 0x4c4] */
  edx = R32((uint32_t)(edi + 0x4c4u));
/* 7402cd: lea ecx, [edi + 0x4cc] */
  ecx = (uint32_t)(edi + 0x4ccu);
/* 7402d3: mov dword ptr [esi + 0x4c4], edx */
  W32((uint32_t)(esi + 0x4c4u), edx);
/* 7402d9: mov al, byte ptr [edi + 0x4c8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x4c8u))) & 0xffu);
/* 7402df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7402e0: lea ecx, [esi + 0x4cc] */
  ecx = (uint32_t)(esi + 0x4ccu);
/* 7402e6: mov byte ptr [esi + 0x4c8], al */
  W8((uint32_t)(esi + 0x4c8u), (eax & 0xffu));
/* 7402ec: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x7402f2u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 7402f2: lea edx, [edi + 0x4d8] */
  edx = (uint32_t)(edi + 0x4d8u);
/* 7402f8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7402f9: lea ecx, [esi + 0x4d8] */
  ecx = (uint32_t)(esi + 0x4d8u);
/* 7402ff: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x740305u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 740305: lea eax, [edi + 0x4e4] */
  eax = (uint32_t)(edi + 0x4e4u);
/* 74030b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74030c: lea ecx, [esi + 0x4e4] */
  ecx = (uint32_t)(esi + 0x4e4u);
/* 740312: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x740318u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 740318: lea ecx, [edi + 0x4f0] */
  ecx = (uint32_t)(edi + 0x4f0u);
/* 74031e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74031f: lea ecx, [esi + 0x4f0] */
  ecx = (uint32_t)(esi + 0x4f0u);
/* 740325: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x74032bu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 74032b: lea edx, [edi + 0x4fc] */
  edx = (uint32_t)(edi + 0x4fcu);
/* 740331: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 740332: lea ecx, [esi + 0x4fc] */
  ecx = (uint32_t)(esi + 0x4fcu);
/* 740338: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x74033eu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 74033e: mov eax, dword ptr [edi + 0x508] */
  eax = R32((uint32_t)(edi + 0x508u));
/* 740344: mov dword ptr [esi + 0x508], eax */
  W32((uint32_t)(esi + 0x508u), eax);
/* 74034a: mov ecx, dword ptr [edi + 0x50c] */
  ecx = R32((uint32_t)(edi + 0x50cu));
/* 740350: mov dword ptr [esi + 0x50c], ecx */
  W32((uint32_t)(esi + 0x50cu), ecx);
/* 740356: mov edx, dword ptr [edi + 0x510] */
  edx = R32((uint32_t)(edi + 0x510u));
/* 74035c: mov dword ptr [esi + 0x510], edx */
  W32((uint32_t)(esi + 0x510u), edx);
/* 740362: mov eax, dword ptr [edi + 0x514] */
  eax = R32((uint32_t)(edi + 0x514u));
/* 740368: mov dword ptr [esi + 0x514], eax */
  W32((uint32_t)(esi + 0x514u), eax);
/* 74036e: mov ecx, dword ptr [edi + 0x518] */
  ecx = R32((uint32_t)(edi + 0x518u));
/* 740374: lea edx, [edi + 0x51c] */
  edx = (uint32_t)(edi + 0x51cu);
/* 74037a: mov dword ptr [esi + 0x518], ecx */
  W32((uint32_t)(esi + 0x518u), ecx);
/* 740380: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 740381: lea ecx, [esi + 0x51c] */
  ecx = (uint32_t)(esi + 0x51cu);
/* 740387: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x74038du); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 74038d: mov eax, dword ptr [edi + 0x528] */
  eax = R32((uint32_t)(edi + 0x528u));
/* 740393: mov edx, dword ptr [esi + 0x528] */
  edx = R32((uint32_t)(esi + 0x528u));
/* 740399: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 74039b: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 74039e: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7403a0: mov dword ptr [esi + 0x528], edx */
  W32((uint32_t)(esi + 0x528u), edx);
/* 7403a6: mov ecx, dword ptr [edi + 0x52c] */
  ecx = R32((uint32_t)(edi + 0x52cu));
/* 7403ac: mov dword ptr [esi + 0x52c], ecx */
  W32((uint32_t)(esi + 0x52cu), ecx);
/* 7403b2: mov edx, dword ptr [edi + 0x530] */
  edx = R32((uint32_t)(edi + 0x530u));
/* 7403b8: lea eax, [edi + 0x534] */
  eax = (uint32_t)(edi + 0x534u);
/* 7403be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7403bf: lea ecx, [esi + 0x534] */
  ecx = (uint32_t)(esi + 0x534u);
/* 7403c5: mov dword ptr [esi + 0x530], edx */
  W32((uint32_t)(esi + 0x530u), edx);
/* 7403cb: call 0x6c4ac0 */
  esp -= 4; W32(esp, 0x7403d0u); SPILL(); f_6c4ac0(); if (g_unwind) return; RELOAD();
/* 7403d0: lea ecx, [edi + 0x540] */
  ecx = (uint32_t)(edi + 0x540u);
/* 7403d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7403d7: lea ecx, [esi + 0x540] */
  ecx = (uint32_t)(esi + 0x540u);
/* 7403dd: call 0x6ca56f */
  esp -= 4; W32(esp, 0x7403e2u); SPILL(); f_6ca56f(); if (g_unwind) return; RELOAD();
/* 7403e2: mov edx, dword ptr [edi + 0x54c] */
  edx = R32((uint32_t)(edi + 0x54cu));
/* 7403e8: mov dword ptr [esi + 0x54c], edx */
  W32((uint32_t)(esi + 0x54cu), edx);
/* 7403ee: mov eax, dword ptr [edi + 0x550] */
  eax = R32((uint32_t)(edi + 0x550u));
/* 7403f4: mov dword ptr [esi + 0x550], eax */
  W32((uint32_t)(esi + 0x550u), eax);
/* 7403fa: mov ecx, dword ptr [edi + 0x554] */
  ecx = R32((uint32_t)(edi + 0x554u));
/* 740400: mov dword ptr [esi + 0x554], ecx */
  W32((uint32_t)(esi + 0x554u), ecx);
/* 740406: mov edx, dword ptr [edi + 0x558] */
  edx = R32((uint32_t)(edi + 0x558u));
/* 74040c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 74040d: mov dword ptr [esi + 0x558], edx */
  W32((uint32_t)(esi + 0x558u), edx);
/* 740413: mov eax, esi */
  eax = esi;
/* 740415: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 740416: ret 4 */
  esp += 8; SPILL(); return;
}

void f_740570(void) {
  LOAD_REGS();
L_740570: /* 740570: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 740571: mov esi, ecx */
  esi = ecx;
/* 740573: call 0x6c7469 */
  esp -= 4; W32(esp, 0x740578u); SPILL(); f_6c7469(); if (g_unwind) return; RELOAD();
/* 740578: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 74057d: je 0x74058e */
  if (zf) goto L_74058e;
L_74057f: /* 74057f: push 0x55c */
  { uint32_t v = 0x55cu; esp -= 4; W32(esp, v); }
/* 740584: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 740585: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x74058bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 74058b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74058e: /* 74058e: mov eax, esi */
  eax = esi;
/* 740590: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 740591: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7405b0(void) {
  LOAD_REGS();
L_7405b0: /* 7405b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7405b1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 7405b5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7405b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7405b9: mov esi, ecx */
  esi = ecx;
/* 7405bb: je 0x7405f0 */
  if (zf) goto L_7405f0;
L_7405bd: /* 7405bd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 7405c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7405c1: push 0x6c7469 */
  { uint32_t v = 0x6c7469u; esp -= 4; W32(esp, v); }
/* 7405c6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 7405c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7405ca: push 0x55c */
  { uint32_t v = 0x55cu; esp -= 4; W32(esp, v); }
/* 7405cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7405d0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x7405d5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 7405d5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7405d8: je 0x7405e8 */
  if (zf) goto L_7405e8;
L_7405da: /* 7405da: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7405e0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7405e2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7405e4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7405e5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7405e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7405e8: /* 7405e8: mov eax, edi */
  eax = edi;
/* 7405ea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7405eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7405ec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7405ed: ret 4 */
  esp += 8; SPILL(); return;
L_7405f0: /* 7405f0: mov ecx, esi */
  ecx = esi;
/* 7405f2: call 0x6c7469 */
  esp -= 4; W32(esp, 0x7405f7u); SPILL(); f_6c7469(); if (g_unwind) return; RELOAD();
/* 7405f7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7405fa: je 0x74060b */
  if (zf) goto L_74060b;
L_7405fc: /* 7405fc: push 0x55c */
  { uint32_t v = 0x55cu; esp -= 4; W32(esp, v); }
/* 740601: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 740602: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x740608u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 740608: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_74060b: /* 74060b: mov eax, esi */
  eax = esi;
/* 74060d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 74060e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 74060f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_740640(void) {
  LOAD_REGS();
L_740640: /* 740640: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 740642: push 0x9c6c83 */
  { uint32_t v = 0x9c6c83u; esp -= 4; W32(esp, v); }
/* 740647: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 74064d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74064e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 740655: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 740656: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 740657: mov esi, ecx */
  esi = ecx;
/* 740659: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74065d: mov dword ptr [esi], 0x9fc510 */
  W32((uint32_t)(esi), 0x9fc510u);
/* 740663: mov dword ptr [esp + 0x10], 0x1a */
  W32((uint32_t)(esp + 0x10u), 0x1au);
/* 74066b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x740671u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 740671: mov eax, dword ptr [0xcfa304] */
  eax = R32((uint32_t)(0xcfa304u));
/* 740676: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 740677: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 740679: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 74067b: lea ecx, [esi + 0x554] */
  ecx = (uint32_t)(esi + 0x554u);
/* 740681: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 740682: mov byte ptr [esp + 0x20], 0x19 */
  W8((uint32_t)(esp + 0x20u), 0x19u);
/* 740687: call 0x99ca3d */
  esp -= 4; W32(esp, 0x74068cu); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 74068c: mov edx, dword ptr [0xcfa304] */
  edx = R32((uint32_t)(0xcfa304u));
/* 740692: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 740693: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* 740695: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 740697: lea eax, [esi + 0x4d0] */
  eax = (uint32_t)(esi + 0x4d0u);
/* 74069d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74069e: mov byte ptr [esp + 0x20], 0x18 */
  W8((uint32_t)(esp + 0x20u), 0x18u);
/* 7406a3: call 0x99ca3d */
  esp -= 4; W32(esp, 0x7406a8u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 7406a8: lea ecx, [esi + 0x4c4] */
  ecx = (uint32_t)(esi + 0x4c4u);
/* 7406ae: mov byte ptr [esp + 0x10], 0x17 */
  W8((uint32_t)(esp + 0x10u), 0x17u);
/* 7406b3: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x7406b9u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 7406b9: lea ecx, [esi + 0x4b8] */
  ecx = (uint32_t)(esi + 0x4b8u);
/* 7406bf: mov byte ptr [esp + 0x10], 0x16 */
  W8((uint32_t)(esp + 0x10u), 0x16u);
/* 7406c4: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x7406cau); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 7406ca: lea ecx, [esi + 0x4ac] */
  ecx = (uint32_t)(esi + 0x4acu);
/* 7406d0: mov byte ptr [esp + 0x10], 0x15 */
  W8((uint32_t)(esp + 0x10u), 0x15u);
/* 7406d5: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x7406dbu); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 7406db: lea ecx, [esi + 0x4a0] */
  ecx = (uint32_t)(esi + 0x4a0u);
/* 7406e1: mov byte ptr [esp + 0x10], 0x14 */
  W8((uint32_t)(esp + 0x10u), 0x14u);
/* 7406e6: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x7406ecu); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 7406ec: lea ecx, [esi + 0x494] */
  ecx = (uint32_t)(esi + 0x494u);
/* 7406f2: mov byte ptr [esp + 0x10], 0x13 */
  W8((uint32_t)(esp + 0x10u), 0x13u);
/* 7406f7: call 0x6c6a6e */
  esp -= 4; W32(esp, 0x7406fcu); SPILL(); f_6c6a6e(); if (g_unwind) return; RELOAD();
/* 7406fc: lea ecx, [esi + 0x488] */
  ecx = (uint32_t)(esi + 0x488u);
/* 740702: mov byte ptr [esp + 0x10], 0x12 */
  W8((uint32_t)(esp + 0x10u), 0x12u);
/* 740707: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x74070du); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 74070d: lea ecx, [esi + 0x46c] */
  ecx = (uint32_t)(esi + 0x46cu);
/* 740713: mov byte ptr [esp + 0x10], 0x11 */
  W8((uint32_t)(esp + 0x10u), 0x11u);
/* 740718: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x74071eu); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 74071e: lea ecx, [esi + 0x458] */
  ecx = (uint32_t)(esi + 0x458u);
/* 740724: mov byte ptr [esp + 0x10], 0x10 */
  W8((uint32_t)(esp + 0x10u), 0x10u);
/* 740729: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x74072fu); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 74072f: lea ecx, [esi + 0x444] */
  ecx = (uint32_t)(esi + 0x444u);
/* 740735: mov byte ptr [esp + 0x10], 0xf */
  W8((uint32_t)(esp + 0x10u), 0xfu);
/* 74073a: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x740740u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 740740: lea ecx, [esi + 0x434] */
  ecx = (uint32_t)(esi + 0x434u);
/* 740746: mov byte ptr [esp + 0x10], 0xe */
  W8((uint32_t)(esp + 0x10u), 0xeu);
/* 74074b: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x740751u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 740751: mov byte ptr [esp + 0x10], 0xd */
  W8((uint32_t)(esp + 0x10u), 0xdu);
/* 740756: lea ecx, [esi + 0x408] */
  ecx = (uint32_t)(esi + 0x408u);
/* 74075c: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x740762u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 740762: lea ecx, [esi + 0x3fc] */
  ecx = (uint32_t)(esi + 0x3fcu);
/* 740768: mov byte ptr [esp + 0x10], 0xc */
  W8((uint32_t)(esp + 0x10u), 0xcu);
/* 74076d: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x740773u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 740773: lea ecx, [esi + 0x3d8] */
  ecx = (uint32_t)(esi + 0x3d8u);
/* 740779: mov byte ptr [esp + 0x10], 0xb */
  W8((uint32_t)(esp + 0x10u), 0xbu);
/* 74077e: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x740784u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 740784: lea ecx, [esi + 0x3cc] */
  ecx = (uint32_t)(esi + 0x3ccu);
/* 74078a: mov byte ptr [esp + 0x10], 0xa */
  W8((uint32_t)(esp + 0x10u), 0xau);
/* 74078f: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x740795u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 740795: lea ecx, [esi + 0x3c0] */
  ecx = (uint32_t)(esi + 0x3c0u);
/* 74079b: mov byte ptr [esp + 0x10], 9 */
  W8((uint32_t)(esp + 0x10u), 0x9u);
/* 7407a0: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x7407a6u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 7407a6: lea ecx, [esi + 0x3b4] */
  ecx = (uint32_t)(esi + 0x3b4u);
/* 7407ac: mov byte ptr [esp + 0x10], 8 */
  W8((uint32_t)(esp + 0x10u), 0x8u);
/* 7407b1: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x7407b7u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 7407b7: lea ecx, [esi + 0x3a8] */
  ecx = (uint32_t)(esi + 0x3a8u);
/* 7407bd: mov byte ptr [esp + 0x10], 7 */
  W8((uint32_t)(esp + 0x10u), 0x7u);
/* 7407c2: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x7407c8u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 7407c8: lea ecx, [esi + 0x39c] */
  ecx = (uint32_t)(esi + 0x39cu);
/* 7407ce: mov byte ptr [esp + 0x10], 6 */
  W8((uint32_t)(esp + 0x10u), 0x6u);
/* 7407d3: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x7407d9u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 7407d9: lea ecx, [esi + 0x390] */
  ecx = (uint32_t)(esi + 0x390u);
/* 7407df: mov byte ptr [esp + 0x10], 5 */
  W8((uint32_t)(esp + 0x10u), 0x5u);
/* 7407e4: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x7407eau); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 7407ea: lea ecx, [esi + 0x384] */
  ecx = (uint32_t)(esi + 0x384u);
/* 7407f0: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* 7407f5: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x7407fbu); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 7407fb: lea ecx, [esi + 0x378] */
  ecx = (uint32_t)(esi + 0x378u);
/* 740801: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 740806: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x74080cu); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 74080c: lea ecx, [esi + 0x36c] */
  ecx = (uint32_t)(esi + 0x36cu);
/* 740812: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 740817: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x74081du); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 74081d: lea ecx, [esi + 0x360] */
  ecx = (uint32_t)(esi + 0x360u);
/* 740823: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 740828: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x74082eu); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 74082e: lea ecx, [esi + 0x354] */
  ecx = (uint32_t)(esi + 0x354u);
/* 740834: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 740839: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x74083fu); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 74083f: mov ecx, esi */
  ecx = esi;
/* 740841: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 740849: call 0x6c688e */
  esp -= 4; W32(esp, 0x74084eu); SPILL(); f_6c688e(); if (g_unwind) return; RELOAD();
/* 74084e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 740852: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 740853: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74085a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 74085d: ret  */
  esp += 4; SPILL(); return;
}

void f_7408f0(void) {
  LOAD_REGS();
L_7408f0: /* 7408f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7408f2: push 0x9c6e89 */
  { uint32_t v = 0x9c6e89u; esp -= 4; W32(esp, v); }
/* 7408f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7408fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7408fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 740905: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 740906: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 740907: mov esi, ecx */
  esi = ecx;
/* 740909: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 74090d: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x740912u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 740912: lea ecx, [esi + 0x354] */
  ecx = (uint32_t)(esi + 0x354u);
/* 740918: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 740920: mov dword ptr [esi], 0x9fc510 */
  W32((uint32_t)(esi), 0x9fc510u);
/* 740926: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x74092cu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 74092c: lea ecx, [esi + 0x360] */
  ecx = (uint32_t)(esi + 0x360u);
/* 740932: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 740937: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x74093du); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 74093d: lea ecx, [esi + 0x36c] */
  ecx = (uint32_t)(esi + 0x36cu);
/* 740943: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 740948: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x74094eu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 74094e: lea ecx, [esi + 0x378] */
  ecx = (uint32_t)(esi + 0x378u);
/* 740954: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 740959: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x74095fu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 74095f: lea ecx, [esi + 0x384] */
  ecx = (uint32_t)(esi + 0x384u);
/* 740965: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* 74096a: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x740970u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 740970: lea ecx, [esi + 0x390] */
  ecx = (uint32_t)(esi + 0x390u);
/* 740976: mov byte ptr [esp + 0x10], 5 */
  W8((uint32_t)(esp + 0x10u), 0x5u);
/* 74097b: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x740981u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 740981: lea ecx, [esi + 0x39c] */
  ecx = (uint32_t)(esi + 0x39cu);
/* 740987: mov byte ptr [esp + 0x10], 6 */
  W8((uint32_t)(esp + 0x10u), 0x6u);
/* 74098c: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x740992u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 740992: lea ecx, [esi + 0x3a8] */
  ecx = (uint32_t)(esi + 0x3a8u);
/* 740998: mov byte ptr [esp + 0x10], 7 */
  W8((uint32_t)(esp + 0x10u), 0x7u);
/* 74099d: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x7409a3u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 7409a3: lea ecx, [esi + 0x3b4] */
  ecx = (uint32_t)(esi + 0x3b4u);
/* 7409a9: mov byte ptr [esp + 0x10], 8 */
  W8((uint32_t)(esp + 0x10u), 0x8u);
/* 7409ae: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x7409b4u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 7409b4: lea ecx, [esi + 0x3c0] */
  ecx = (uint32_t)(esi + 0x3c0u);
/* 7409ba: mov byte ptr [esp + 0x10], 9 */
  W8((uint32_t)(esp + 0x10u), 0x9u);
/* 7409bf: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x7409c5u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 7409c5: lea ecx, [esi + 0x3cc] */
  ecx = (uint32_t)(esi + 0x3ccu);
/* 7409cb: mov byte ptr [esp + 0x10], 0xa */
  W8((uint32_t)(esp + 0x10u), 0xau);
/* 7409d0: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x7409d6u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 7409d6: lea ecx, [esi + 0x3d8] */
  ecx = (uint32_t)(esi + 0x3d8u);
/* 7409dc: mov byte ptr [esp + 0x10], 0xb */
  W8((uint32_t)(esp + 0x10u), 0xbu);
/* 7409e1: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x7409e7u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 7409e7: lea ecx, [esi + 0x3fc] */
  ecx = (uint32_t)(esi + 0x3fcu);
/* 7409ed: mov byte ptr [esp + 0x10], 0xc */
  W8((uint32_t)(esp + 0x10u), 0xcu);
/* 7409f2: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x7409f8u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 7409f8: lea ecx, [esi + 0x408] */
  ecx = (uint32_t)(esi + 0x408u);
/* 7409fe: mov byte ptr [esp + 0x10], 0xd */
  W8((uint32_t)(esp + 0x10u), 0xdu);
/* 740a03: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x740a09u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 740a09: lea ecx, [esi + 0x430] */
  ecx = (uint32_t)(esi + 0x430u);
/* 740a0f: mov byte ptr [esp + 0x10], 0xe */
  W8((uint32_t)(esp + 0x10u), 0xeu);
/* 740a14: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x740a1au); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 740a1a: lea ecx, [esi + 0x434] */
  ecx = (uint32_t)(esi + 0x434u);
/* 740a20: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x740a26u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 740a26: lea ecx, [esi + 0x444] */
  ecx = (uint32_t)(esi + 0x444u);
/* 740a2c: mov byte ptr [esp + 0x10], 0xf */
  W8((uint32_t)(esp + 0x10u), 0xfu);
/* 740a31: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x740a37u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 740a37: lea ecx, [esi + 0x458] */
  ecx = (uint32_t)(esi + 0x458u);
/* 740a3d: mov byte ptr [esp + 0x10], 0x10 */
  W8((uint32_t)(esp + 0x10u), 0x10u);
/* 740a42: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x740a48u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 740a48: lea ecx, [esi + 0x46c] */
  ecx = (uint32_t)(esi + 0x46cu);
/* 740a4e: mov byte ptr [esp + 0x10], 0x11 */
  W8((uint32_t)(esp + 0x10u), 0x11u);
/* 740a53: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x740a59u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 740a59: mov byte ptr [esp + 0x10], 0x12 */
  W8((uint32_t)(esp + 0x10u), 0x12u);
/* 740a5e: lea ecx, [esi + 0x488] */
  ecx = (uint32_t)(esi + 0x488u);
/* 740a64: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x740a6au); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 740a6a: lea ecx, [esi + 0x494] */
  ecx = (uint32_t)(esi + 0x494u);
/* 740a70: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 740a72: mov byte ptr [esp + 0x14], 0x13 */
  W8((uint32_t)(esp + 0x14u), 0x13u);
/* 740a77: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x740a7du); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 740a7d: lea ecx, [esi + 0x4a0] */
  ecx = (uint32_t)(esi + 0x4a0u);
/* 740a83: mov byte ptr [esp + 0x10], 0x14 */
  W8((uint32_t)(esp + 0x10u), 0x14u);
/* 740a88: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x740a8eu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 740a8e: lea ecx, [esi + 0x4ac] */
  ecx = (uint32_t)(esi + 0x4acu);
/* 740a94: mov byte ptr [esp + 0x10], 0x15 */
  W8((uint32_t)(esp + 0x10u), 0x15u);
/* 740a99: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x740a9fu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 740a9f: lea ecx, [esi + 0x4b8] */
  ecx = (uint32_t)(esi + 0x4b8u);
/* 740aa5: mov byte ptr [esp + 0x10], 0x16 */
  W8((uint32_t)(esp + 0x10u), 0x16u);
/* 740aaa: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x740ab0u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 740ab0: lea ecx, [esi + 0x4c4] */
  ecx = (uint32_t)(esi + 0x4c4u);
/* 740ab6: mov byte ptr [esp + 0x10], 0x17 */
  W8((uint32_t)(esp + 0x10u), 0x17u);
/* 740abb: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x740ac1u); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 740ac1: mov eax, dword ptr [0xcfa304] */
  eax = R32((uint32_t)(0xcfa304u));
/* 740ac6: mov ecx, dword ptr [0xcfa300] */
  ecx = R32((uint32_t)(0xcfa300u));
/* 740acc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 740acd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 740ace: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* 740ad0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 740ad2: lea edx, [esi + 0x4d0] */
  edx = (uint32_t)(esi + 0x4d0u);
/* 740ad8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 740ad9: mov byte ptr [esp + 0x24], 0x18 */
  W8((uint32_t)(esp + 0x24u), 0x18u);
/* 740ade: call 0x99cafe */
  esp -= 4; W32(esp, 0x740ae3u); SPILL(); f_99cafe(); if (g_unwind) return; RELOAD();
/* 740ae3: mov eax, dword ptr [0xcfa304] */
  eax = R32((uint32_t)(0xcfa304u));
/* 740ae8: mov ecx, dword ptr [0xcfa300] */
  ecx = R32((uint32_t)(0xcfa300u));
/* 740aee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 740aef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 740af0: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 740af2: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 740af4: lea edx, [esi + 0x554] */
  edx = (uint32_t)(esi + 0x554u);
/* 740afa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 740afb: mov byte ptr [esp + 0x24], 0x19 */
  W8((uint32_t)(esp + 0x24u), 0x19u);
/* 740b00: call 0x99cafe */
  esp -= 4; W32(esp, 0x740b05u); SPILL(); f_99cafe(); if (g_unwind) return; RELOAD();
/* 740b05: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 740b09: mov eax, esi */
  eax = esi;
/* 740b0b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 740b0c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 740b13: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 740b16: ret  */
  esp += 4; SPILL(); return;
}

void f_740bb0(void) {
  LOAD_REGS();
L_740bb0: /* 740bb0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 740bb2: push 0x9c706f */
  { uint32_t v = 0x9c706fu; esp -= 4; W32(esp, v); }
/* 740bb7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 740bbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 740bbe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 740bc5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 740bc6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 740bc7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 740bc8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 740bcc: mov esi, ecx */
  esi = ecx;
/* 740bce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 740bcf: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 740bd3: call 0x6c1456 */
  esp -= 4; W32(esp, 0x740bd8u); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 740bd8: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 740bde: mov dword ptr [esi], 0x9fc510 */
  W32((uint32_t)(esi), 0x9fc510u);
/* 740be4: xor eax, dword ptr [edi + 0x33c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x33cu)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740bea: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 740bf0: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 740bf3: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740bf5: mov dword ptr [esi + 0x33c], ecx */
  W32((uint32_t)(esi + 0x33cu), ecx);
/* 740bfb: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 740c01: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740c03: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 740c06: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740c08: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 740c0e: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 740c14: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740c16: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 740c19: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740c1b: mov dword ptr [esi + 0x33c], ecx */
  W32((uint32_t)(esi + 0x33cu), ecx);
/* 740c21: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 740c27: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740c29: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 740c2c: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740c2e: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 740c34: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 740c3a: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740c3c: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 740c3f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740c41: mov dword ptr [esi + 0x33c], ecx */
  W32((uint32_t)(esi + 0x33cu), ecx);
/* 740c47: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 740c4d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740c4f: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 740c52: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740c54: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 740c5a: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 740c60: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740c62: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 740c65: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740c67: mov dword ptr [esi + 0x33c], ecx */
  W32((uint32_t)(esi + 0x33cu), ecx);
/* 740c6d: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 740c73: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740c75: and eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 740c7a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740c7c: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 740c82: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 740c88: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740c8a: and ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 740c90: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740c92: mov dword ptr [esi + 0x33c], ecx */
  W32((uint32_t)(esi + 0x33cu), ecx);
/* 740c98: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 740c9e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740ca0: and eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 740ca5: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740ca7: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 740cad: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 740cb3: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740cb5: and ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 740cbb: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740cbd: mov dword ptr [esi + 0x33c], ecx */
  W32((uint32_t)(esi + 0x33cu), ecx);
/* 740cc3: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 740cc9: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740ccb: and eax, 0x800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 740cd0: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740cd2: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 740cd8: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 740cde: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740ce0: and ecx, 0x1000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 740ce6: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740ce8: mov dword ptr [esi + 0x33c], ecx */
  W32((uint32_t)(esi + 0x33cu), ecx);
/* 740cee: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 740cf4: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740cf6: and eax, 0x2000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 740cfb: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 740d03: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740d05: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 740d0b: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 740d11: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740d13: and ecx, 0x4000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 740d19: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740d1b: mov dword ptr [esi + 0x33c], ecx */
  W32((uint32_t)(esi + 0x33cu), ecx);
/* 740d21: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 740d27: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740d29: and eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 740d2e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740d30: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 740d36: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 740d3c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740d3e: and ecx, 0x10000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 740d44: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740d46: mov dword ptr [esi + 0x33c], ecx */
  W32((uint32_t)(esi + 0x33cu), ecx);
/* 740d4c: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 740d52: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740d54: and eax, 0x20000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 740d59: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740d5b: mov dword ptr [esi + 0x33c], eax */
  W32((uint32_t)(esi + 0x33cu), eax);
/* 740d61: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 740d67: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740d69: and ecx, 0x40000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 740d6f: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740d71: mov dword ptr [esi + 0x33c], ecx */
  W32((uint32_t)(esi + 0x33cu), ecx);
/* 740d77: mov edx, dword ptr [edi + 0x33c] */
  edx = R32((uint32_t)(edi + 0x33cu));
/* 740d7d: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 740d7f: and edx, 0x80000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 740d85: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 740d87: mov dword ptr [esi + 0x33c], edx */
  W32((uint32_t)(esi + 0x33cu), edx);
/* 740d8d: mov eax, dword ptr [edi + 0x340] */
  eax = R32((uint32_t)(edi + 0x340u));
/* 740d93: mov dword ptr [esi + 0x340], eax */
  W32((uint32_t)(esi + 0x340u), eax);
/* 740d99: mov ecx, dword ptr [edi + 0x344] */
  ecx = R32((uint32_t)(edi + 0x344u));
/* 740d9f: mov dword ptr [esi + 0x344], ecx */
  W32((uint32_t)(esi + 0x344u), ecx);
/* 740da5: mov edx, dword ptr [edi + 0x348] */
  edx = R32((uint32_t)(edi + 0x348u));
/* 740dab: mov dword ptr [esi + 0x348], edx */
  W32((uint32_t)(esi + 0x348u), edx);
/* 740db1: mov eax, dword ptr [edi + 0x34c] */
  eax = R32((uint32_t)(edi + 0x34cu));
/* 740db7: mov dword ptr [esi + 0x34c], eax */
  W32((uint32_t)(esi + 0x34cu), eax);
/* 740dbd: mov ecx, dword ptr [edi + 0x350] */
  ecx = R32((uint32_t)(edi + 0x350u));
/* 740dc3: lea edx, [edi + 0x354] */
  edx = (uint32_t)(edi + 0x354u);
/* 740dc9: mov dword ptr [esi + 0x350], ecx */
  W32((uint32_t)(esi + 0x350u), ecx);
/* 740dcf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 740dd0: lea ecx, [esi + 0x354] */
  ecx = (uint32_t)(esi + 0x354u);
/* 740dd6: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x740ddcu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 740ddc: lea eax, [edi + 0x360] */
  eax = (uint32_t)(edi + 0x360u);
/* 740de2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 740de3: lea ecx, [esi + 0x360] */
  ecx = (uint32_t)(esi + 0x360u);
/* 740de9: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 740dee: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x740df4u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 740df4: lea ecx, [edi + 0x36c] */
  ecx = (uint32_t)(edi + 0x36cu);
/* 740dfa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 740dfb: lea ecx, [esi + 0x36c] */
  ecx = (uint32_t)(esi + 0x36cu);
/* 740e01: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* 740e06: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x740e0cu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 740e0c: lea edx, [edi + 0x378] */
  edx = (uint32_t)(edi + 0x378u);
/* 740e12: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 740e13: lea ecx, [esi + 0x378] */
  ecx = (uint32_t)(esi + 0x378u);
/* 740e19: mov byte ptr [esp + 0x18], 3 */
  W8((uint32_t)(esp + 0x18u), 0x3u);
/* 740e1e: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x740e24u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 740e24: lea eax, [edi + 0x384] */
  eax = (uint32_t)(edi + 0x384u);
/* 740e2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 740e2b: lea ecx, [esi + 0x384] */
  ecx = (uint32_t)(esi + 0x384u);
/* 740e31: mov byte ptr [esp + 0x18], 4 */
  W8((uint32_t)(esp + 0x18u), 0x4u);
/* 740e36: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x740e3cu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 740e3c: lea ecx, [edi + 0x390] */
  ecx = (uint32_t)(edi + 0x390u);
/* 740e42: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 740e43: lea ecx, [esi + 0x390] */
  ecx = (uint32_t)(esi + 0x390u);
/* 740e49: mov byte ptr [esp + 0x18], 5 */
  W8((uint32_t)(esp + 0x18u), 0x5u);
/* 740e4e: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x740e54u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 740e54: lea edx, [edi + 0x39c] */
  edx = (uint32_t)(edi + 0x39cu);
/* 740e5a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 740e5b: lea ecx, [esi + 0x39c] */
  ecx = (uint32_t)(esi + 0x39cu);
/* 740e61: mov byte ptr [esp + 0x18], 6 */
  W8((uint32_t)(esp + 0x18u), 0x6u);
/* 740e66: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x740e6cu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 740e6c: lea eax, [edi + 0x3a8] */
  eax = (uint32_t)(edi + 0x3a8u);
/* 740e72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 740e73: lea ecx, [esi + 0x3a8] */
  ecx = (uint32_t)(esi + 0x3a8u);
/* 740e79: mov byte ptr [esp + 0x18], 7 */
  W8((uint32_t)(esp + 0x18u), 0x7u);
/* 740e7e: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x740e84u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 740e84: lea ecx, [edi + 0x3b4] */
  ecx = (uint32_t)(edi + 0x3b4u);
/* 740e8a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 740e8b: lea ecx, [esi + 0x3b4] */
  ecx = (uint32_t)(esi + 0x3b4u);
/* 740e91: mov byte ptr [esp + 0x18], 8 */
  W8((uint32_t)(esp + 0x18u), 0x8u);
/* 740e96: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x740e9cu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 740e9c: lea edx, [edi + 0x3c0] */
  edx = (uint32_t)(edi + 0x3c0u);
/* 740ea2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 740ea3: lea ecx, [esi + 0x3c0] */
  ecx = (uint32_t)(esi + 0x3c0u);
/* 740ea9: mov byte ptr [esp + 0x18], 9 */
  W8((uint32_t)(esp + 0x18u), 0x9u);
/* 740eae: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x740eb4u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 740eb4: lea eax, [edi + 0x3cc] */
  eax = (uint32_t)(edi + 0x3ccu);
/* 740eba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 740ebb: lea ecx, [esi + 0x3cc] */
  ecx = (uint32_t)(esi + 0x3ccu);
/* 740ec1: mov byte ptr [esp + 0x18], 0xa */
  W8((uint32_t)(esp + 0x18u), 0xau);
/* 740ec6: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x740eccu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 740ecc: lea ecx, [edi + 0x3d8] */
  ecx = (uint32_t)(edi + 0x3d8u);
/* 740ed2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 740ed3: lea ecx, [esi + 0x3d8] */
  ecx = (uint32_t)(esi + 0x3d8u);
/* 740ed9: mov byte ptr [esp + 0x18], 0xb */
  W8((uint32_t)(esp + 0x18u), 0xbu);
/* 740ede: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x740ee4u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 740ee4: mov edx, dword ptr [edi + 0x3e4] */
  edx = R32((uint32_t)(edi + 0x3e4u));
/* 740eea: mov dword ptr [esi + 0x3e4], edx */
  W32((uint32_t)(esi + 0x3e4u), edx);
/* 740ef0: mov eax, dword ptr [edi + 0x3e8] */
  eax = R32((uint32_t)(edi + 0x3e8u));
/* 740ef6: mov dword ptr [esi + 0x3e8], eax */
  W32((uint32_t)(esi + 0x3e8u), eax);
/* 740efc: mov ecx, dword ptr [edi + 0x3ec] */
  ecx = R32((uint32_t)(edi + 0x3ecu));
/* 740f02: mov dword ptr [esi + 0x3ec], ecx */
  W32((uint32_t)(esi + 0x3ecu), ecx);
/* 740f08: mov edx, dword ptr [edi + 0x3f0] */
  edx = R32((uint32_t)(edi + 0x3f0u));
/* 740f0e: mov dword ptr [esi + 0x3f0], edx */
  W32((uint32_t)(esi + 0x3f0u), edx);
/* 740f14: mov eax, dword ptr [edi + 0x3f4] */
  eax = R32((uint32_t)(edi + 0x3f4u));
/* 740f1a: mov dword ptr [esi + 0x3f4], eax */
  W32((uint32_t)(esi + 0x3f4u), eax);
/* 740f20: mov ecx, dword ptr [edi + 0x3f8] */
  ecx = R32((uint32_t)(edi + 0x3f8u));
/* 740f26: lea edx, [edi + 0x3fc] */
  edx = (uint32_t)(edi + 0x3fcu);
/* 740f2c: mov dword ptr [esi + 0x3f8], ecx */
  W32((uint32_t)(esi + 0x3f8u), ecx);
/* 740f32: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 740f33: lea ecx, [esi + 0x3fc] */
  ecx = (uint32_t)(esi + 0x3fcu);
/* 740f39: mov byte ptr [esp + 0x18], 0xc */
  W8((uint32_t)(esp + 0x18u), 0xcu);
/* 740f3e: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x740f44u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 740f44: lea eax, [edi + 0x408] */
  eax = (uint32_t)(edi + 0x408u);
/* 740f4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 740f4b: lea ecx, [esi + 0x408] */
  ecx = (uint32_t)(esi + 0x408u);
/* 740f51: mov byte ptr [esp + 0x18], 0xd */
  W8((uint32_t)(esp + 0x18u), 0xdu);
/* 740f56: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x740f5cu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 740f5c: mov ecx, dword ptr [edi + 0x414] */
  ecx = R32((uint32_t)(edi + 0x414u));
/* 740f62: mov dword ptr [esi + 0x414], ecx */
  W32((uint32_t)(esi + 0x414u), ecx);
/* 740f68: mov edx, dword ptr [edi + 0x418] */
  edx = R32((uint32_t)(edi + 0x418u));
/* 740f6e: mov dword ptr [esi + 0x418], edx */
  W32((uint32_t)(esi + 0x418u), edx);
/* 740f74: mov eax, dword ptr [edi + 0x41c] */
  eax = R32((uint32_t)(edi + 0x41cu));
/* 740f7a: mov dword ptr [esi + 0x41c], eax */
  W32((uint32_t)(esi + 0x41cu), eax);
/* 740f80: mov ecx, dword ptr [edi + 0x420] */
  ecx = R32((uint32_t)(edi + 0x420u));
/* 740f86: mov eax, dword ptr [esi + 0x420] */
  eax = R32((uint32_t)(esi + 0x420u));
/* 740f8c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 740f8e: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 740f91: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 740f93: mov dword ptr [esi + 0x420], eax */
  W32((uint32_t)(esi + 0x420u), eax);
/* 740f99: mov edx, dword ptr [edi + 0x424] */
  edx = R32((uint32_t)(edi + 0x424u));
/* 740f9f: mov dword ptr [esi + 0x424], edx */
  W32((uint32_t)(esi + 0x424u), edx);
/* 740fa5: mov eax, dword ptr [edi + 0x428] */
  eax = R32((uint32_t)(edi + 0x428u));
/* 740fab: mov dword ptr [esi + 0x428], eax */
  W32((uint32_t)(esi + 0x428u), eax);
/* 740fb1: mov ecx, dword ptr [edi + 0x42c] */
  ecx = R32((uint32_t)(edi + 0x42cu));
/* 740fb7: mov dword ptr [esi + 0x42c], ecx */
  W32((uint32_t)(esi + 0x42cu), ecx);
/* 740fbd: mov edx, dword ptr [edi + 0x430] */
  edx = R32((uint32_t)(edi + 0x430u));
/* 740fc3: lea eax, [edi + 0x434] */
  eax = (uint32_t)(edi + 0x434u);
/* 740fc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 740fca: lea ecx, [esi + 0x434] */
  ecx = (uint32_t)(esi + 0x434u);
/* 740fd0: mov byte ptr [esp + 0x18], 0xe */
  W8((uint32_t)(esp + 0x18u), 0xeu);
/* 740fd5: mov dword ptr [esi + 0x430], edx */
  W32((uint32_t)(esi + 0x430u), edx);
/* 740fdb: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x740fe1u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 740fe1: mov ecx, dword ptr [edi + 0x440] */
  ecx = R32((uint32_t)(edi + 0x440u));
/* 740fe7: lea edx, [edi + 0x444] */
  edx = (uint32_t)(edi + 0x444u);
/* 740fed: mov dword ptr [esi + 0x440], ecx */
  W32((uint32_t)(esi + 0x440u), ecx);
/* 740ff3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 740ff4: lea ecx, [esi + 0x444] */
  ecx = (uint32_t)(esi + 0x444u);
/* 740ffa: mov byte ptr [esp + 0x18], 0xf */
  W8((uint32_t)(esp + 0x18u), 0xfu);
/* 740fff: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x741005u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 741005: mov eax, dword ptr [edi + 0x450] */
  eax = R32((uint32_t)(edi + 0x450u));
/* 74100b: mov dword ptr [esi + 0x450], eax */
  W32((uint32_t)(esi + 0x450u), eax);
/* 741011: mov ecx, dword ptr [edi + 0x454] */
  ecx = R32((uint32_t)(edi + 0x454u));
/* 741017: lea edx, [edi + 0x458] */
  edx = (uint32_t)(edi + 0x458u);
/* 74101d: mov dword ptr [esi + 0x454], ecx */
  W32((uint32_t)(esi + 0x454u), ecx);
/* 741023: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 741024: lea ecx, [esi + 0x458] */
  ecx = (uint32_t)(esi + 0x458u);
/* 74102a: mov byte ptr [esp + 0x18], 0x10 */
  W8((uint32_t)(esp + 0x18u), 0x10u);
/* 74102f: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x741035u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 741035: mov eax, dword ptr [edi + 0x464] */
  eax = R32((uint32_t)(edi + 0x464u));
/* 74103b: mov dword ptr [esi + 0x464], eax */
  W32((uint32_t)(esi + 0x464u), eax);
/* 741041: mov ecx, dword ptr [edi + 0x468] */
  ecx = R32((uint32_t)(edi + 0x468u));
/* 741047: lea edx, [edi + 0x46c] */
  edx = (uint32_t)(edi + 0x46cu);
/* 74104d: mov dword ptr [esi + 0x468], ecx */
  W32((uint32_t)(esi + 0x468u), ecx);
/* 741053: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 741054: lea ecx, [esi + 0x46c] */
  ecx = (uint32_t)(esi + 0x46cu);
/* 74105a: mov byte ptr [esp + 0x18], 0x11 */
  W8((uint32_t)(esp + 0x18u), 0x11u);
/* 74105f: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x741065u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 741065: mov eax, dword ptr [edi + 0x478] */
  eax = R32((uint32_t)(edi + 0x478u));
/* 74106b: mov dword ptr [esi + 0x478], eax */
  W32((uint32_t)(esi + 0x478u), eax);
/* 741071: mov ecx, dword ptr [edi + 0x47c] */
  ecx = R32((uint32_t)(edi + 0x47cu));
/* 741077: mov eax, dword ptr [esi + 0x480] */
  eax = R32((uint32_t)(esi + 0x480u));
/* 74107d: mov dword ptr [esi + 0x47c], ecx */
  W32((uint32_t)(esi + 0x47cu), ecx);
/* 741083: mov edx, dword ptr [edi + 0x480] */
  edx = R32((uint32_t)(edi + 0x480u));
/* 741089: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 74108b: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 74108e: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 741090: lea ecx, [edi + 0x488] */
  ecx = (uint32_t)(edi + 0x488u);
/* 741096: mov dword ptr [esi + 0x480], eax */
  W32((uint32_t)(esi + 0x480u), eax);
/* 74109c: mov eax, dword ptr [edi + 0x484] */
  eax = R32((uint32_t)(edi + 0x484u));
/* 7410a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7410a3: lea ecx, [esi + 0x488] */
  ecx = (uint32_t)(esi + 0x488u);
/* 7410a9: mov byte ptr [esp + 0x18], 0x12 */
  W8((uint32_t)(esp + 0x18u), 0x12u);
/* 7410ae: mov dword ptr [esi + 0x484], eax */
  W32((uint32_t)(esi + 0x484u), eax);
/* 7410b4: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x7410bau); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 7410ba: lea edx, [edi + 0x494] */
  edx = (uint32_t)(edi + 0x494u);
/* 7410c0: lea ecx, [esi + 0x494] */
  ecx = (uint32_t)(esi + 0x494u);
/* 7410c6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7410c7: mov byte ptr [esp + 0x18], 0x13 */
  W8((uint32_t)(esp + 0x18u), 0x13u);
/* 7410cc: call 0x6c1e15 */
  esp -= 4; W32(esp, 0x7410d1u); SPILL(); f_6c1e15(); if (g_unwind) return; RELOAD();
/* 7410d1: lea eax, [edi + 0x4a0] */
  eax = (uint32_t)(edi + 0x4a0u);
/* 7410d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7410d8: lea ecx, [esi + 0x4a0] */
  ecx = (uint32_t)(esi + 0x4a0u);
/* 7410de: mov byte ptr [esp + 0x18], 0x14 */
  W8((uint32_t)(esp + 0x18u), 0x14u);
/* 7410e3: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x7410e9u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 7410e9: lea ecx, [edi + 0x4ac] */
  ecx = (uint32_t)(edi + 0x4acu);
/* 7410ef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7410f0: lea ecx, [esi + 0x4ac] */
  ecx = (uint32_t)(esi + 0x4acu);
/* 7410f6: mov byte ptr [esp + 0x18], 0x15 */
  W8((uint32_t)(esp + 0x18u), 0x15u);
/* 7410fb: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x741101u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 741101: lea edx, [edi + 0x4b8] */
  edx = (uint32_t)(edi + 0x4b8u);
/* 741107: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 741108: lea ecx, [esi + 0x4b8] */
  ecx = (uint32_t)(esi + 0x4b8u);
/* 74110e: mov byte ptr [esp + 0x18], 0x16 */
  W8((uint32_t)(esp + 0x18u), 0x16u);
/* 741113: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x741119u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 741119: lea eax, [edi + 0x4c4] */
  eax = (uint32_t)(edi + 0x4c4u);
/* 74111f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 741120: lea ecx, [esi + 0x4c4] */
  ecx = (uint32_t)(esi + 0x4c4u);
/* 741126: mov byte ptr [esp + 0x18], 0x17 */
  W8((uint32_t)(esp + 0x18u), 0x17u);
/* 74112b: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x741131u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 741131: mov ecx, dword ptr [0xcfa304] */
  ecx = R32((uint32_t)(0xcfa304u));
/* 741137: mov edx, dword ptr [0xcfa308] */
  edx = R32((uint32_t)(0xcfa308u));
/* 74113d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74113e: mov byte ptr [esp + 0x18], 0x18 */
  W8((uint32_t)(esp + 0x18u), 0x18u);
/* 741143: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 741144: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* 741146: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 741148: lea eax, [edi + 0x4d0] */
  eax = (uint32_t)(edi + 0x4d0u);
/* 74114e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 74114f: lea ecx, [esi + 0x4d0] */
  ecx = (uint32_t)(esi + 0x4d0u);
/* 741155: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 741156: call 0x99cb60 */
  esp -= 4; W32(esp, 0x74115bu); SPILL(); f_99cb60(); if (g_unwind) return; RELOAD();
/* 74115b: mov edx, dword ptr [0xcfa304] */
  edx = R32((uint32_t)(0xcfa304u));
/* 741161: mov eax, dword ptr [0xcfa308] */
  eax = R32((uint32_t)(0xcfa308u));
/* 741166: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 741167: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 741168: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 74116a: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 74116c: add edi, 0x554 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x554u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 741172: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 741173: lea ecx, [esi + 0x554] */
  ecx = (uint32_t)(esi + 0x554u);
/* 741179: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 74117a: call 0x99cb60 */
  esp -= 4; W32(esp, 0x74117fu); SPILL(); f_99cb60(); if (g_unwind) return; RELOAD();
/* 74117f: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 741183: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 741184: mov eax, esi */
  eax = esi;
/* 741186: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 741187: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 74118e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 741191: ret 4 */
  esp += 8; SPILL(); return;
}
