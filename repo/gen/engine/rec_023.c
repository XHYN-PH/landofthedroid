#include "recomp.h"
#include "rec_mod.h"

void f_76c860(void) {
  LOAD_REGS();
L_76c860: /* 76c860: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76c862: push 0x9cbf04 */
  { uint32_t v = 0x9cbf04u; esp -= 4; W32(esp, v); }
/* 76c867: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76c86d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76c86e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76c875: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76c876: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76c877: mov esi, ecx */
  esi = ecx;
/* 76c879: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 76c87d: mov dword ptr [esi], 0xa07058 */
  W32((uint32_t)(esi), 0xa07058u);
/* 76c883: mov dword ptr [esi + 0x28], 0xa07050 */
  W32((uint32_t)(esi + 0x28u), 0xa07050u);
/* 76c88a: mov dword ptr [esp + 0x10], 3 */
  W32((uint32_t)(esp + 0x10u), 0x3u);
/* 76c892: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x76c898u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 76c898: lea ecx, [esi + 0xe0] */
  ecx = (uint32_t)(esi + 0xe0u);
/* 76c89e: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 76c8a3: call 0x6ccd7e */
  esp -= 4; W32(esp, 0x76c8a8u); SPILL(); f_6ccd7e(); if (g_unwind) return; RELOAD();
/* 76c8a8: lea ecx, [esi + 0xa8] */
  ecx = (uint32_t)(esi + 0xa8u);
/* 76c8ae: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 76c8b3: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x76c8b9u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 76c8b9: lea ecx, [esi + 0x9c] */
  ecx = (uint32_t)(esi + 0x9cu);
/* 76c8bf: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 76c8c4: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x76c8cau); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 76c8ca: mov ecx, esi */
  ecx = esi;
/* 76c8cc: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 76c8d4: call 0x6c97c8 */
  esp -= 4; W32(esp, 0x76c8d9u); SPILL(); f_6c97c8(); if (g_unwind) return; RELOAD();
/* 76c8d9: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 76c8dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76c8de: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76c8e5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76c8e8: ret  */
  esp += 4; SPILL(); return;
}

void f_76c920(void) {
  LOAD_REGS();
L_76c920: /* 76c920: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76c922: push 0x9cbf46 */
  { uint32_t v = 0x9cbf46u; esp -= 4; W32(esp, v); }
/* 76c927: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76c92d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76c92e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76c935: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76c936: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76c937: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76c938: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 76c93c: mov esi, ecx */
  esi = ecx;
/* 76c93e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76c93f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 76c943: call 0x6cbac8 */
  esp -= 4; W32(esp, 0x76c948u); SPILL(); f_6cbac8(); if (g_unwind) return; RELOAD();
/* 76c948: lea eax, [edi + 0x9c] */
  eax = (uint32_t)(edi + 0x9cu);
/* 76c94e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76c94f: lea ecx, [esi + 0x9c] */
  ecx = (uint32_t)(esi + 0x9cu);
/* 76c955: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 76c95d: mov dword ptr [esi], 0xa07058 */
  W32((uint32_t)(esi), 0xa07058u);
/* 76c963: mov dword ptr [esi + 0x28], 0xa07050 */
  W32((uint32_t)(esi + 0x28u), 0xa07050u);
/* 76c96a: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x76c970u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 76c970: lea ecx, [edi + 0xa8] */
  ecx = (uint32_t)(edi + 0xa8u);
/* 76c976: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76c977: lea ecx, [esi + 0xa8] */
  ecx = (uint32_t)(esi + 0xa8u);
/* 76c97d: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 76c982: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x76c988u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 76c988: mov edx, dword ptr [edi + 0xb4] */
  edx = R32((uint32_t)(edi + 0xb4u));
/* 76c98e: mov dword ptr [esi + 0xb4], edx */
  W32((uint32_t)(esi + 0xb4u), edx);
/* 76c994: mov eax, dword ptr [edi + 0xb8] */
  eax = R32((uint32_t)(edi + 0xb8u));
/* 76c99a: mov dword ptr [esi + 0xb8], eax */
  W32((uint32_t)(esi + 0xb8u), eax);
/* 76c9a0: mov ecx, dword ptr [edi + 0xbc] */
  ecx = R32((uint32_t)(edi + 0xbcu));
/* 76c9a6: mov dword ptr [esi + 0xbc], ecx */
  W32((uint32_t)(esi + 0xbcu), ecx);
/* 76c9ac: mov edx, dword ptr [edi + 0xc0] */
  edx = R32((uint32_t)(edi + 0xc0u));
/* 76c9b2: mov dword ptr [esi + 0xc0], edx */
  W32((uint32_t)(esi + 0xc0u), edx);
/* 76c9b8: mov eax, dword ptr [edi + 0xc4] */
  eax = R32((uint32_t)(edi + 0xc4u));
/* 76c9be: mov dword ptr [esi + 0xc4], eax */
  W32((uint32_t)(esi + 0xc4u), eax);
/* 76c9c4: mov ecx, dword ptr [edi + 0xc8] */
  ecx = R32((uint32_t)(edi + 0xc8u));
/* 76c9ca: mov dword ptr [esi + 0xc8], ecx */
  W32((uint32_t)(esi + 0xc8u), ecx);
/* 76c9d0: mov edx, dword ptr [edi + 0xcc] */
  edx = R32((uint32_t)(edi + 0xccu));
/* 76c9d6: mov dword ptr [esi + 0xcc], edx */
  W32((uint32_t)(esi + 0xccu), edx);
/* 76c9dc: mov eax, dword ptr [edi + 0xd0] */
  eax = R32((uint32_t)(edi + 0xd0u));
/* 76c9e2: mov dword ptr [esi + 0xd0], eax */
  W32((uint32_t)(esi + 0xd0u), eax);
/* 76c9e8: mov ecx, dword ptr [edi + 0xd4] */
  ecx = R32((uint32_t)(edi + 0xd4u));
/* 76c9ee: mov dword ptr [esi + 0xd4], ecx */
  W32((uint32_t)(esi + 0xd4u), ecx);
/* 76c9f4: mov edx, dword ptr [edi + 0xd8] */
  edx = R32((uint32_t)(edi + 0xd8u));
/* 76c9fa: lea ecx, [edi + 0xe0] */
  ecx = (uint32_t)(edi + 0xe0u);
/* 76ca00: mov dword ptr [esi + 0xd8], edx */
  W32((uint32_t)(esi + 0xd8u), edx);
/* 76ca06: mov eax, dword ptr [edi + 0xdc] */
  eax = R32((uint32_t)(edi + 0xdcu));
/* 76ca0c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76ca0d: lea ecx, [esi + 0xe0] */
  ecx = (uint32_t)(esi + 0xe0u);
/* 76ca13: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* 76ca18: mov dword ptr [esi + 0xdc], eax */
  W32((uint32_t)(esi + 0xdcu), eax);
/* 76ca1e: call 0x6c1870 */
  esp -= 4; W32(esp, 0x76ca23u); SPILL(); f_6c1870(); if (g_unwind) return; RELOAD();
/* 76ca23: mov edx, dword ptr [edi + 0x124] */
  edx = R32((uint32_t)(edi + 0x124u));
/* 76ca29: mov dword ptr [esi + 0x124], edx */
  W32((uint32_t)(esi + 0x124u), edx);
/* 76ca2f: mov eax, dword ptr [edi + 0x128] */
  eax = R32((uint32_t)(edi + 0x128u));
/* 76ca35: mov dword ptr [esi + 0x128], eax */
  W32((uint32_t)(esi + 0x128u), eax);
/* 76ca3b: mov ecx, dword ptr [edi + 0x12c] */
  ecx = R32((uint32_t)(edi + 0x12cu));
/* 76ca41: mov dword ptr [esi + 0x12c], ecx */
  W32((uint32_t)(esi + 0x12cu), ecx);
/* 76ca47: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 76ca4b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76ca4c: mov eax, esi */
  eax = esi;
/* 76ca4e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76ca4f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76ca56: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76ca59: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76cab0(void) {
  LOAD_REGS();
L_76cab0: /* 76cab0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76cab1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76cab2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 76cab6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76cab7: mov esi, ecx */
  esi = ecx;
/* 76cab9: call 0x6c8d5f */
  esp -= 4; W32(esp, 0x76cabeu); SPILL(); f_6c8d5f(); if (g_unwind) return; RELOAD();
/* 76cabe: lea eax, [edi + 0x9c] */
  eax = (uint32_t)(edi + 0x9cu);
/* 76cac4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76cac5: lea ecx, [esi + 0x9c] */
  ecx = (uint32_t)(esi + 0x9cu);
/* 76cacb: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x76cad1u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 76cad1: lea ecx, [edi + 0xa8] */
  ecx = (uint32_t)(edi + 0xa8u);
/* 76cad7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76cad8: lea ecx, [esi + 0xa8] */
  ecx = (uint32_t)(esi + 0xa8u);
/* 76cade: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x76cae4u); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 76cae4: mov edx, dword ptr [edi + 0xb4] */
  edx = R32((uint32_t)(edi + 0xb4u));
/* 76caea: mov dword ptr [esi + 0xb4], edx */
  W32((uint32_t)(esi + 0xb4u), edx);
/* 76caf0: mov eax, dword ptr [edi + 0xb8] */
  eax = R32((uint32_t)(edi + 0xb8u));
/* 76caf6: mov dword ptr [esi + 0xb8], eax */
  W32((uint32_t)(esi + 0xb8u), eax);
/* 76cafc: mov ecx, dword ptr [edi + 0xbc] */
  ecx = R32((uint32_t)(edi + 0xbcu));
/* 76cb02: mov dword ptr [esi + 0xbc], ecx */
  W32((uint32_t)(esi + 0xbcu), ecx);
/* 76cb08: mov edx, dword ptr [edi + 0xc0] */
  edx = R32((uint32_t)(edi + 0xc0u));
/* 76cb0e: mov dword ptr [esi + 0xc0], edx */
  W32((uint32_t)(esi + 0xc0u), edx);
/* 76cb14: mov eax, dword ptr [edi + 0xc4] */
  eax = R32((uint32_t)(edi + 0xc4u));
/* 76cb1a: mov dword ptr [esi + 0xc4], eax */
  W32((uint32_t)(esi + 0xc4u), eax);
/* 76cb20: mov ecx, dword ptr [edi + 0xc8] */
  ecx = R32((uint32_t)(edi + 0xc8u));
/* 76cb26: mov dword ptr [esi + 0xc8], ecx */
  W32((uint32_t)(esi + 0xc8u), ecx);
/* 76cb2c: mov edx, dword ptr [edi + 0xcc] */
  edx = R32((uint32_t)(edi + 0xccu));
/* 76cb32: mov dword ptr [esi + 0xcc], edx */
  W32((uint32_t)(esi + 0xccu), edx);
/* 76cb38: mov eax, dword ptr [edi + 0xd0] */
  eax = R32((uint32_t)(edi + 0xd0u));
/* 76cb3e: mov dword ptr [esi + 0xd0], eax */
  W32((uint32_t)(esi + 0xd0u), eax);
/* 76cb44: mov ecx, dword ptr [edi + 0xd4] */
  ecx = R32((uint32_t)(edi + 0xd4u));
/* 76cb4a: mov dword ptr [esi + 0xd4], ecx */
  W32((uint32_t)(esi + 0xd4u), ecx);
/* 76cb50: mov edx, dword ptr [edi + 0xd8] */
  edx = R32((uint32_t)(edi + 0xd8u));
/* 76cb56: lea ecx, [edi + 0xe0] */
  ecx = (uint32_t)(edi + 0xe0u);
/* 76cb5c: mov dword ptr [esi + 0xd8], edx */
  W32((uint32_t)(esi + 0xd8u), edx);
/* 76cb62: mov eax, dword ptr [edi + 0xdc] */
  eax = R32((uint32_t)(edi + 0xdcu));
/* 76cb68: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76cb69: lea ecx, [esi + 0xe0] */
  ecx = (uint32_t)(esi + 0xe0u);
/* 76cb6f: mov dword ptr [esi + 0xdc], eax */
  W32((uint32_t)(esi + 0xdcu), eax);
/* 76cb75: call 0x6ca50b */
  esp -= 4; W32(esp, 0x76cb7au); SPILL(); f_6ca50b(); if (g_unwind) return; RELOAD();
/* 76cb7a: mov edx, dword ptr [edi + 0x124] */
  edx = R32((uint32_t)(edi + 0x124u));
/* 76cb80: mov dword ptr [esi + 0x124], edx */
  W32((uint32_t)(esi + 0x124u), edx);
/* 76cb86: mov eax, dword ptr [edi + 0x128] */
  eax = R32((uint32_t)(edi + 0x128u));
/* 76cb8c: mov dword ptr [esi + 0x128], eax */
  W32((uint32_t)(esi + 0x128u), eax);
/* 76cb92: mov ecx, dword ptr [edi + 0x12c] */
  ecx = R32((uint32_t)(edi + 0x12cu));
/* 76cb98: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76cb99: mov dword ptr [esi + 0x12c], ecx */
  W32((uint32_t)(esi + 0x12cu), ecx);
/* 76cb9f: mov eax, esi */
  eax = esi;
/* 76cba1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76cba2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76cbf0(void) {
  LOAD_REGS();
L_76cbf0: /* 76cbf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76cbf1: mov esi, ecx */
  esi = ecx;
/* 76cbf3: call 0x6c29ff */
  esp -= 4; W32(esp, 0x76cbf8u); SPILL(); f_6c29ff(); if (g_unwind) return; RELOAD();
/* 76cbf8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76cbfd: je 0x76cc0e */
  if (zf) goto L_76cc0e;
L_76cbff: /* 76cbff: push 0x130 */
  { uint32_t v = 0x130u; esp -= 4; W32(esp, v); }
/* 76cc04: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76cc05: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x76cc0bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 76cc0b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76cc0e: /* 76cc0e: mov eax, esi */
  eax = esi;
/* 76cc10: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76cc11: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76cc30(void) {
  LOAD_REGS();
L_76cc30: /* 76cc30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76cc31: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 76cc35: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76cc38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76cc39: mov esi, ecx */
  esi = ecx;
/* 76cc3b: je 0x76cc70 */
  if (zf) goto L_76cc70;
L_76cc3d: /* 76cc3d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 76cc40: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76cc41: push 0x6c29ff */
  { uint32_t v = 0x6c29ffu; esp -= 4; W32(esp, v); }
/* 76cc46: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 76cc49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76cc4a: push 0x130 */
  { uint32_t v = 0x130u; esp -= 4; W32(esp, v); }
/* 76cc4f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76cc50: call 0x99ca3d */
  esp -= 4; W32(esp, 0x76cc55u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 76cc55: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76cc58: je 0x76cc68 */
  if (zf) goto L_76cc68;
L_76cc5a: /* 76cc5a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 76cc60: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 76cc62: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 76cc64: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76cc65: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x76cc68u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_76cc68: /* 76cc68: mov eax, edi */
  eax = edi;
/* 76cc6a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76cc6b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76cc6c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76cc6d: ret 4 */
  esp += 8; SPILL(); return;
L_76cc70: /* 76cc70: mov ecx, esi */
  ecx = esi;
/* 76cc72: call 0x6c29ff */
  esp -= 4; W32(esp, 0x76cc77u); SPILL(); f_6c29ff(); if (g_unwind) return; RELOAD();
/* 76cc77: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76cc7a: je 0x76cc8b */
  if (zf) goto L_76cc8b;
L_76cc7c: /* 76cc7c: push 0x130 */
  { uint32_t v = 0x130u; esp -= 4; W32(esp, v); }
/* 76cc81: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76cc82: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x76cc88u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 76cc88: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76cc8b: /* 76cc8b: mov eax, esi */
  eax = esi;
/* 76cc8d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76cc8e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76cc8f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76ccc0(void) {
  LOAD_REGS();
L_76ccc0: /* 76ccc0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76ccc1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 76ccc5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 76ccc7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76ccc8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76ccc9: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 76cccf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76ccd0: mov ebp, ecx */
  ebp = ecx;
/* 76ccd2: jge 0x76cce8 */
  if ((sf == of)) goto L_76cce8;
L_76ccd4: /* 76ccd4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 76ccd9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 76ccde: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 76cce3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x76cce5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76cce5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76cce8: /* 76cce8: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76cceb: jle 0x76cd01 */
  if ((zf || sf != of)) goto L_76cd01;
L_76cced: /* 76cced: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 76ccf2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 76ccf7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 76ccfc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x76ccfeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76ccfe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76cd01: /* 76cd01: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 76cd05: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 76cd08: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76cd0b: jle 0x76cd21 */
  if ((zf || sf != of)) goto L_76cd21;
L_76cd0d: /* 76cd0d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 76cd12: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 76cd17: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 76cd1c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x76cd1eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76cd1e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76cd21: /* 76cd21: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76cd23: jge 0x76cd40 */
  if ((sf == of)) goto L_76cd40;
L_76cd25: /* 76cd25: lea esi, [ebx + ebx*4] */
  esi = (uint32_t)(ebx + ebx*4);
/* 76cd28: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 76cd2b: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 76cd2d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_76cd30: /* 76cd30: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 76cd33: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 76cd35: call 0x6c8f21 */
  esp -= 4; W32(esp, 0x76cd3au); SPILL(); f_6c8f21(); if (g_unwind) return; RELOAD();
/* 76cd3a: add esi, 0x14 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 76cd3d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 76cd3e: jne 0x76cd30 */
  if (!zf) goto L_76cd30;
L_76cd40: /* 76cd40: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 76cd44: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 76cd46: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76cd47: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76cd48: mov ecx, ebp */
  ecx = ebp;
/* 76cd4a: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x76cd50u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 76cd50: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76cd51: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76cd52: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 76cd53: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76cd54: ret 8 */
  esp += 12; SPILL(); return;
}

void f_76cd90(void) {
  LOAD_REGS();
L_76cd90: /* 76cd90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76cd91: mov esi, ecx */
  esi = ecx;
/* 76cd93: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 76cd96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76cd97: xor edi, edi */
  edi = 0;
/* 76cd99: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 76cd9b: jle 0x76cdb5 */
  if ((zf || sf != of)) goto L_76cdb5;
L_76cd9d: /* 76cd9d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76cd9e: xor ebx, ebx */
  ebx = 0;
L_76cda0: /* 76cda0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 76cda2: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 76cda4: call 0x6c8f21 */
  esp -= 4; W32(esp, 0x76cda9u); SPILL(); f_6c8f21(); if (g_unwind) return; RELOAD();
/* 76cda9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 76cdac: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 76cdad: add ebx, 0x14 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 76cdb0: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76cdb2: jl 0x76cda0 */
  if ((sf != of)) goto L_76cda0;
L_76cdb4: /* 76cdb4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_76cdb5: /* 76cdb5: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 76cdb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76cdba: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 76cdbc: mov ecx, esi */
  ecx = esi;
/* 76cdbe: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x76cdc4u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 76cdc4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76cdc5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76cdc6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76cde0(void) {
  LOAD_REGS();
L_76cde0: /* 76cde0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76cde2: push 0x9cbf69 */
  { uint32_t v = 0x9cbf69u; esp -= 4; W32(esp, v); }
/* 76cde7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76cded: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76cdee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76cdf5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76cdf6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76cdf7: mov esi, ecx */
  esi = ecx;
/* 76cdf9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 76cdfd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 76ce00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76ce01: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76ce03: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 76ce0b: call 0x6c227a */
  esp -= 4; W32(esp, 0x76ce10u); SPILL(); f_6c227a(); if (g_unwind) return; RELOAD();
/* 76ce10: mov ecx, esi */
  ecx = esi;
/* 76ce12: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 76ce1a: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x76ce20u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 76ce20: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 76ce24: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76ce25: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76ce2c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76ce2f: ret  */
  esp += 4; SPILL(); return;
}

void f_76ce50(void) {
  LOAD_REGS();
L_76ce50: /* 76ce50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76ce51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76ce52: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76ce53: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 76ce57: mov esi, ecx */
  esi = ecx;
/* 76ce59: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 76ce5b: je 0x76cea0 */
  if (zf) goto L_76cea0;
L_76ce5d: /* 76ce5d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 76ce60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76ce61: call 0x6ca196 */
  esp -= 4; W32(esp, 0x76ce66u); SPILL(); f_6ca196(); if (g_unwind) return; RELOAD();
/* 76ce66: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 76ce69: xor ebx, ebx */
  ebx = 0;
/* 76ce6b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 76ce6d: jle 0x76cea0 */
  if ((zf || sf != of)) goto L_76cea0;
L_76ce6f: /* 76ce6f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76ce70: xor ebp, ebp */
  ebp = 0;
L_76ce72: /* 76ce72: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 76ce74: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 76ce76: mov ecx, esi */
  ecx = esi;
/* 76ce78: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x76ce7eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 76ce7e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 76ce80: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 76ce83: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 76ce86: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76ce88: je 0x76ce94 */
  if (zf) goto L_76ce94;
L_76ce8a: /* 76ce8a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 76ce8c: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 76ce8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76ce8f: call 0x6ccc75 */
  esp -= 4; W32(esp, 0x76ce94u); SPILL(); f_6ccc75(); if (g_unwind) return; RELOAD();
L_76ce94: /* 76ce94: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 76ce97: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 76ce98: add ebp, 0x14 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 76ce9b: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76ce9d: jl 0x76ce72 */
  if ((sf != of)) goto L_76ce72;
L_76ce9f: /* 76ce9f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_76cea0: /* 76cea0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76cea1: mov eax, esi */
  eax = esi;
/* 76cea3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76cea4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76cea5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76ced0(void) {
  LOAD_REGS();
L_76ced0: /* 76ced0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76ced2: push 0x9cc03f */
  { uint32_t v = 0x9cc03fu; esp -= 4; W32(esp, v); }
/* 76ced7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76cedd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76cede: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76cee5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76cee6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76cee7: mov esi, ecx */
  esi = ecx;
/* 76cee9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 76ceed: mov dword ptr [esi], 0xa07118 */
  W32((uint32_t)(esi), 0xa07118u);
/* 76cef3: mov dword ptr [esi + 0x28], 0xa07108 */
  W32((uint32_t)(esi + 0x28u), 0xa07108u);
/* 76cefa: mov dword ptr [esi + 0x2c], 0xa07104 */
  W32((uint32_t)(esi + 0x2cu), 0xa07104u);
/* 76cf01: mov dword ptr [esp + 0x10], 0xd */
  W32((uint32_t)(esp + 0x10u), 0xdu);
/* 76cf09: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x76cf0fu); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 76cf0f: lea ecx, [esi + 0x3f24] */
  ecx = (uint32_t)(esi + 0x3f24u);
/* 76cf15: mov byte ptr [esp + 0x10], 0xc */
  W8((uint32_t)(esp + 0x10u), 0xcu);
/* 76cf1a: call 0x6c89e5 */
  esp -= 4; W32(esp, 0x76cf1fu); SPILL(); f_6c89e5(); if (g_unwind) return; RELOAD();
/* 76cf1f: lea ecx, [esi + 0x3ef0] */
  ecx = (uint32_t)(esi + 0x3ef0u);
/* 76cf25: mov byte ptr [esp + 0x10], 0xb */
  W8((uint32_t)(esp + 0x10u), 0xbu);
/* 76cf2a: call 0x6cbf1e */
  esp -= 4; W32(esp, 0x76cf2fu); SPILL(); f_6cbf1e(); if (g_unwind) return; RELOAD();
/* 76cf2f: lea ecx, [esi + 0x3ed8] */
  ecx = (uint32_t)(esi + 0x3ed8u);
/* 76cf35: mov byte ptr [esp + 0x10], 0xa */
  W8((uint32_t)(esp + 0x10u), 0xau);
/* 76cf3a: call 0x6c4cd2 */
  esp -= 4; W32(esp, 0x76cf3fu); SPILL(); f_6c4cd2(); if (g_unwind) return; RELOAD();
/* 76cf3f: lea ecx, [esi + 0x3ecc] */
  ecx = (uint32_t)(esi + 0x3eccu);
/* 76cf45: mov byte ptr [esp + 0x10], 9 */
  W8((uint32_t)(esp + 0x10u), 0x9u);
/* 76cf4a: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x76cf4fu); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 76cf4f: lea ecx, [esi + 0x3ec0] */
  ecx = (uint32_t)(esi + 0x3ec0u);
/* 76cf55: mov byte ptr [esp + 0x10], 8 */
  W8((uint32_t)(esp + 0x10u), 0x8u);
/* 76cf5a: call 0x6ccb8a */
  esp -= 4; W32(esp, 0x76cf5fu); SPILL(); f_6ccb8a(); if (g_unwind) return; RELOAD();
/* 76cf5f: lea ecx, [esi + 0x3eb4] */
  ecx = (uint32_t)(esi + 0x3eb4u);
/* 76cf65: mov byte ptr [esp + 0x10], 7 */
  W8((uint32_t)(esp + 0x10u), 0x7u);
/* 76cf6a: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x76cf6fu); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 76cf6f: lea ecx, [esi + 0x3ea8] */
  ecx = (uint32_t)(esi + 0x3ea8u);
/* 76cf75: mov byte ptr [esp + 0x10], 6 */
  W8((uint32_t)(esp + 0x10u), 0x6u);
/* 76cf7a: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x76cf7fu); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 76cf7f: lea ecx, [esi + 0x254] */
  ecx = (uint32_t)(esi + 0x254u);
/* 76cf85: mov byte ptr [esp + 0x10], 5 */
  W8((uint32_t)(esp + 0x10u), 0x5u);
/* 76cf8a: call dword ptr [0xcfa48c] */
  esp -= 4; W32(esp, 0x76cf90u); SPILL(); f_4e3837(); if (g_unwind) return; /* Core!??1FBitWriter@@UAE@XZ */ RELOAD();
/* 76cf90: lea ecx, [esi + 0x140] */
  ecx = (uint32_t)(esi + 0x140u);
/* 76cf96: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* 76cf9b: call dword ptr [0xcfa48c] */
  esp -= 4; W32(esp, 0x76cfa1u); SPILL(); f_4e3837(); if (g_unwind) return; /* Core!??1FBitWriter@@UAE@XZ */ RELOAD();
/* 76cfa1: lea ecx, [esi + 0xec] */
  ecx = (uint32_t)(esi + 0xecu);
/* 76cfa7: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 76cfac: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x76cfb2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 76cfb2: lea ecx, [esi + 0xe0] */
  ecx = (uint32_t)(esi + 0xe0u);
/* 76cfb8: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 76cfbd: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x76cfc3u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 76cfc3: lea ecx, [esi + 0xd4] */
  ecx = (uint32_t)(esi + 0xd4u);
/* 76cfc9: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 76cfce: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x76cfd4u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 76cfd4: lea ecx, [esi + 0x70] */
  ecx = (uint32_t)(esi + 0x70u);
/* 76cfd7: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 76cfdc: call 0x6ccd7e */
  esp -= 4; W32(esp, 0x76cfe1u); SPILL(); f_6ccd7e(); if (g_unwind) return; RELOAD();
/* 76cfe1: mov ecx, esi */
  ecx = esi;
/* 76cfe3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 76cfeb: call 0x6cb6f4 */
  esp -= 4; W32(esp, 0x76cff0u); SPILL(); f_6cb6f4(); if (g_unwind) return; RELOAD();
/* 76cff0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 76cff4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76cff5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76cffc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76cfff: ret  */
  esp += 4; SPILL(); return;
}

void f_76d050(void) {
  LOAD_REGS();
L_76d050: /* 76d050: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76d051: mov ebp, esp */
  ebp = esp;
/* 76d053: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 76d056: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76d058: push 0x9cc131 */
  { uint32_t v = 0x9cc131u; esp -= 4; W32(esp, v); }
/* 76d05d: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76d063: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76d064: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76d06b: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 76d06e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76d06f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76d070: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 76d073: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76d074: mov ebx, ecx */
  ebx = ecx;
/* 76d076: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76d077: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 76d07b: call 0x6c2504 */
  esp -= 4; W32(esp, 0x76d080u); SPILL(); f_6c2504(); if (g_unwind) return; RELOAD();
/* 76d080: mov dword ptr [ebx], 0xa07118 */
  W32((uint32_t)(ebx), 0xa07118u);
/* 76d086: mov dword ptr [ebx + 0x28], 0xa07108 */
  W32((uint32_t)(ebx + 0x28u), 0xa07108u);
/* 76d08d: mov dword ptr [ebx + 0x2c], 0xa07104 */
  W32((uint32_t)(ebx + 0x2cu), 0xa07104u);
/* 76d094: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 76d097: mov dword ptr [ebx + 0x68], eax */
  W32((uint32_t)(ebx + 0x68u), eax);
/* 76d09a: mov ecx, dword ptr [esi + 0x6c] */
  ecx = R32((uint32_t)(esi + 0x6cu));
/* 76d09d: lea edx, [esi + 0x70] */
  edx = (uint32_t)(esi + 0x70u);
/* 76d0a0: mov dword ptr [ebx + 0x6c], ecx */
  W32((uint32_t)(ebx + 0x6cu), ecx);
/* 76d0a3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76d0a4: lea ecx, [ebx + 0x70] */
  ecx = (uint32_t)(ebx + 0x70u);
/* 76d0a7: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 76d0af: call 0x6c1870 */
  esp -= 4; W32(esp, 0x76d0b4u); SPILL(); f_6c1870(); if (g_unwind) return; RELOAD();
/* 76d0b4: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 76d0ba: mov dword ptr [ebx + 0xb4], eax */
  W32((uint32_t)(ebx + 0xb4u), eax);
/* 76d0c0: mov ecx, dword ptr [esi + 0xb8] */
  ecx = R32((uint32_t)(esi + 0xb8u));
/* 76d0c6: mov dword ptr [ebx + 0xb8], ecx */
  W32((uint32_t)(ebx + 0xb8u), ecx);
/* 76d0cc: mov edx, dword ptr [esi + 0xbc] */
  edx = R32((uint32_t)(esi + 0xbcu));
/* 76d0d2: mov dword ptr [ebx + 0xbc], edx */
  W32((uint32_t)(ebx + 0xbcu), edx);
/* 76d0d8: mov eax, dword ptr [esi + 0xc0] */
  eax = R32((uint32_t)(esi + 0xc0u));
/* 76d0de: mov dword ptr [ebx + 0xc0], eax */
  W32((uint32_t)(ebx + 0xc0u), eax);
/* 76d0e4: mov ecx, dword ptr [esi + 0xc4] */
  ecx = R32((uint32_t)(esi + 0xc4u));
/* 76d0ea: mov dword ptr [ebx + 0xc4], ecx */
  W32((uint32_t)(ebx + 0xc4u), ecx);
/* 76d0f0: mov edx, dword ptr [esi + 0xc8] */
  edx = R32((uint32_t)(esi + 0xc8u));
/* 76d0f6: mov dword ptr [ebx + 0xc8], edx */
  W32((uint32_t)(ebx + 0xc8u), edx);
/* 76d0fc: mov eax, dword ptr [esi + 0xcc] */
  eax = R32((uint32_t)(esi + 0xccu));
/* 76d102: mov dword ptr [ebx + 0xcc], eax */
  W32((uint32_t)(ebx + 0xccu), eax);
/* 76d108: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* 76d10e: lea edx, [esi + 0xd4] */
  edx = (uint32_t)(esi + 0xd4u);
/* 76d114: mov dword ptr [ebx + 0xd0], ecx */
  W32((uint32_t)(ebx + 0xd0u), ecx);
/* 76d11a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76d11b: lea ecx, [ebx + 0xd4] */
  ecx = (uint32_t)(ebx + 0xd4u);
/* 76d121: mov byte ptr [esp + 0x20], 1 */
  W8((uint32_t)(esp + 0x20u), 0x1u);
/* 76d126: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x76d12cu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 76d12c: lea eax, [esi + 0xe0] */
  eax = (uint32_t)(esi + 0xe0u);
/* 76d132: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76d133: lea ecx, [ebx + 0xe0] */
  ecx = (uint32_t)(ebx + 0xe0u);
/* 76d139: mov byte ptr [esp + 0x20], 2 */
  W8((uint32_t)(esp + 0x20u), 0x2u);
/* 76d13e: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x76d144u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 76d144: lea ecx, [esi + 0xec] */
  ecx = (uint32_t)(esi + 0xecu);
/* 76d14a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76d14b: lea ecx, [ebx + 0xec] */
  ecx = (uint32_t)(ebx + 0xecu);
/* 76d151: mov byte ptr [esp + 0x20], 3 */
  W8((uint32_t)(esp + 0x20u), 0x3u);
/* 76d156: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x76d15cu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 76d15c: mov edx, dword ptr [esi + 0xf8] */
  edx = R32((uint32_t)(esi + 0xf8u));
/* 76d162: mov dword ptr [ebx + 0xf8], edx */
  W32((uint32_t)(ebx + 0xf8u), edx);
/* 76d168: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* 76d16e: mov dword ptr [ebx + 0xfc], eax */
  W32((uint32_t)(ebx + 0xfcu), eax);
/* 76d174: mov ecx, dword ptr [esi + 0x100] */
  ecx = R32((uint32_t)(esi + 0x100u));
/* 76d17a: mov dword ptr [ebx + 0x100], ecx */
  W32((uint32_t)(ebx + 0x100u), ecx);
/* 76d180: mov edx, dword ptr [esi + 0x104] */
  edx = R32((uint32_t)(esi + 0x104u));
/* 76d186: mov dword ptr [ebx + 0x104], edx */
  W32((uint32_t)(ebx + 0x104u), edx);
/* 76d18c: mov eax, dword ptr [esi + 0x108] */
  eax = R32((uint32_t)(esi + 0x108u));
/* 76d192: mov dword ptr [ebx + 0x108], eax */
  W32((uint32_t)(ebx + 0x108u), eax);
/* 76d198: mov ecx, dword ptr [esi + 0x10c] */
  ecx = R32((uint32_t)(esi + 0x10cu));
/* 76d19e: mov dword ptr [ebx + 0x10c], ecx */
  W32((uint32_t)(ebx + 0x10cu), ecx);
/* 76d1a4: mov edx, dword ptr [esi + 0x110] */
  edx = R32((uint32_t)(esi + 0x110u));
/* 76d1aa: mov dword ptr [ebx + 0x110], edx */
  W32((uint32_t)(ebx + 0x110u), edx);
/* 76d1b0: mov eax, dword ptr [esi + 0x114] */
  eax = R32((uint32_t)(esi + 0x114u));
/* 76d1b6: mov dword ptr [ebx + 0x114], eax */
  W32((uint32_t)(ebx + 0x114u), eax);
/* 76d1bc: mov ecx, dword ptr [esi + 0x118] */
  ecx = R32((uint32_t)(esi + 0x118u));
/* 76d1c2: mov dword ptr [ebx + 0x118], ecx */
  W32((uint32_t)(ebx + 0x118u), ecx);
/* 76d1c8: mov edx, dword ptr [esi + 0x11c] */
  edx = R32((uint32_t)(esi + 0x11cu));
/* 76d1ce: mov dword ptr [ebx + 0x11c], edx */
  W32((uint32_t)(ebx + 0x11cu), edx);
/* 76d1d4: mov eax, dword ptr [esi + 0x120] */
  eax = R32((uint32_t)(esi + 0x120u));
/* 76d1da: mov dword ptr [ebx + 0x120], eax */
  W32((uint32_t)(ebx + 0x120u), eax);
/* 76d1e0: mov ecx, dword ptr [esi + 0x124] */
  ecx = R32((uint32_t)(esi + 0x124u));
/* 76d1e6: mov byte ptr [esp + 0x1c], 4 */
  W8((uint32_t)(esp + 0x1cu), 0x4u);
/* 76d1eb: mov dword ptr [ebx + 0x124], ecx */
  W32((uint32_t)(ebx + 0x124u), ecx);
/* 76d1f1: mov edx, dword ptr [esi + 0x128] */
  edx = R32((uint32_t)(esi + 0x128u));
/* 76d1f7: mov dword ptr [ebx + 0x128], edx */
  W32((uint32_t)(ebx + 0x128u), edx);
/* 76d1fd: mov eax, dword ptr [esi + 0x12c] */
  eax = R32((uint32_t)(esi + 0x12cu));
/* 76d203: mov dword ptr [ebx + 0x12c], eax */
  W32((uint32_t)(ebx + 0x12cu), eax);
/* 76d209: mov ecx, dword ptr [esi + 0x130] */
  ecx = R32((uint32_t)(esi + 0x130u));
/* 76d20f: mov dword ptr [ebx + 0x130], ecx */
  W32((uint32_t)(ebx + 0x130u), ecx);
/* 76d215: mov edx, dword ptr [esi + 0x134] */
  edx = R32((uint32_t)(esi + 0x134u));
/* 76d21b: mov dword ptr [ebx + 0x134], edx */
  W32((uint32_t)(ebx + 0x134u), edx);
/* 76d221: mov eax, dword ptr [esi + 0x138] */
  eax = R32((uint32_t)(esi + 0x138u));
/* 76d227: mov dword ptr [ebx + 0x138], eax */
  W32((uint32_t)(ebx + 0x138u), eax);
/* 76d22d: mov ecx, dword ptr [esi + 0x13c] */
  ecx = R32((uint32_t)(esi + 0x13cu));
/* 76d233: lea edx, [esi + 0x140] */
  edx = (uint32_t)(esi + 0x140u);
/* 76d239: mov dword ptr [ebx + 0x13c], ecx */
  W32((uint32_t)(ebx + 0x13cu), ecx);
/* 76d23f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76d240: lea ecx, [ebx + 0x140] */
  ecx = (uint32_t)(ebx + 0x140u);
/* 76d246: call 0x6c27b6 */
  esp -= 4; W32(esp, 0x76d24bu); SPILL(); f_6c27b6(); if (g_unwind) return; RELOAD();
/* 76d24b: mov eax, dword ptr [esi + 0x1bc] */
  eax = R32((uint32_t)(esi + 0x1bcu));
/* 76d251: mov dword ptr [ebx + 0x1bc], eax */
  W32((uint32_t)(ebx + 0x1bcu), eax);
/* 76d257: mov ecx, dword ptr [esi + 0x1c0] */
  ecx = R32((uint32_t)(esi + 0x1c0u));
/* 76d25d: mov dword ptr [ebx + 0x1c0], ecx */
  W32((uint32_t)(ebx + 0x1c0u), ecx);
/* 76d263: mov edx, dword ptr [esi + 0x1c4] */
  edx = R32((uint32_t)(esi + 0x1c4u));
/* 76d269: mov dword ptr [ebx + 0x1c4], edx */
  W32((uint32_t)(ebx + 0x1c4u), edx);
/* 76d26f: mov eax, dword ptr [esi + 0x1c8] */
  eax = R32((uint32_t)(esi + 0x1c8u));
/* 76d275: mov dword ptr [ebx + 0x1c8], eax */
  W32((uint32_t)(ebx + 0x1c8u), eax);
/* 76d27b: mov ecx, dword ptr [esi + 0x1cc] */
  ecx = R32((uint32_t)(esi + 0x1ccu));
/* 76d281: mov dword ptr [ebx + 0x1cc], ecx */
  W32((uint32_t)(ebx + 0x1ccu), ecx);
/* 76d287: mov edx, dword ptr [esi + 0x1d0] */
  edx = R32((uint32_t)(esi + 0x1d0u));
/* 76d28d: mov dword ptr [ebx + 0x1d0], edx */
  W32((uint32_t)(ebx + 0x1d0u), edx);
/* 76d293: mov eax, dword ptr [esi + 0x1d4] */
  eax = R32((uint32_t)(esi + 0x1d4u));
/* 76d299: mov dword ptr [ebx + 0x1d4], eax */
  W32((uint32_t)(ebx + 0x1d4u), eax);
/* 76d29f: mov ecx, dword ptr [esi + 0x1d8] */
  ecx = R32((uint32_t)(esi + 0x1d8u));
/* 76d2a5: mov dword ptr [ebx + 0x1d8], ecx */
  W32((uint32_t)(ebx + 0x1d8u), ecx);
/* 76d2ab: mov edx, dword ptr [esi + 0x1dc] */
  edx = R32((uint32_t)(esi + 0x1dcu));
/* 76d2b1: mov dword ptr [ebx + 0x1dc], edx */
  W32((uint32_t)(ebx + 0x1dcu), edx);
/* 76d2b7: mov eax, dword ptr [esi + 0x1e0] */
  eax = R32((uint32_t)(esi + 0x1e0u));
/* 76d2bd: mov dword ptr [ebx + 0x1e0], eax */
  W32((uint32_t)(ebx + 0x1e0u), eax);
/* 76d2c3: mov ecx, dword ptr [esi + 0x1e4] */
  ecx = R32((uint32_t)(esi + 0x1e4u));
/* 76d2c9: mov dword ptr [ebx + 0x1e4], ecx */
  W32((uint32_t)(ebx + 0x1e4u), ecx);
/* 76d2cf: mov edx, dword ptr [esi + 0x1e8] */
  edx = R32((uint32_t)(esi + 0x1e8u));
/* 76d2d5: mov dword ptr [ebx + 0x1e8], edx */
  W32((uint32_t)(ebx + 0x1e8u), edx);
/* 76d2db: mov eax, dword ptr [esi + 0x1ec] */
  eax = R32((uint32_t)(esi + 0x1ecu));
/* 76d2e1: mov dword ptr [ebx + 0x1ec], eax */
  W32((uint32_t)(ebx + 0x1ecu), eax);
/* 76d2e7: mov ecx, dword ptr [esi + 0x1f0] */
  ecx = R32((uint32_t)(esi + 0x1f0u));
/* 76d2ed: mov dword ptr [ebx + 0x1f0], ecx */
  W32((uint32_t)(ebx + 0x1f0u), ecx);
/* 76d2f3: mov edx, dword ptr [esi + 0x1f4] */
  edx = R32((uint32_t)(esi + 0x1f4u));
/* 76d2f9: mov dword ptr [ebx + 0x1f4], edx */
  W32((uint32_t)(ebx + 0x1f4u), edx);
/* 76d2ff: mov eax, dword ptr [esi + 0x1f8] */
  eax = R32((uint32_t)(esi + 0x1f8u));
/* 76d305: mov dword ptr [ebx + 0x1f8], eax */
  W32((uint32_t)(ebx + 0x1f8u), eax);
/* 76d30b: mov ecx, dword ptr [esi + 0x1fc] */
  ecx = R32((uint32_t)(esi + 0x1fcu));
/* 76d311: mov dword ptr [ebx + 0x1fc], ecx */
  W32((uint32_t)(ebx + 0x1fcu), ecx);
/* 76d317: mov edx, dword ptr [esi + 0x200] */
  edx = R32((uint32_t)(esi + 0x200u));
/* 76d31d: mov dword ptr [ebx + 0x200], edx */
  W32((uint32_t)(ebx + 0x200u), edx);
/* 76d323: mov eax, dword ptr [esi + 0x204] */
  eax = R32((uint32_t)(esi + 0x204u));
/* 76d329: mov dword ptr [ebx + 0x204], eax */
  W32((uint32_t)(ebx + 0x204u), eax);
/* 76d32f: mov ecx, dword ptr [esi + 0x208] */
  ecx = R32((uint32_t)(esi + 0x208u));
/* 76d335: mov dword ptr [ebx + 0x208], ecx */
  W32((uint32_t)(ebx + 0x208u), ecx);
/* 76d33b: mov edx, dword ptr [esi + 0x20c] */
  edx = R32((uint32_t)(esi + 0x20cu));
/* 76d341: mov dword ptr [ebx + 0x20c], edx */
  W32((uint32_t)(ebx + 0x20cu), edx);
/* 76d347: mov eax, dword ptr [esi + 0x210] */
  eax = R32((uint32_t)(esi + 0x210u));
/* 76d34d: mov dword ptr [ebx + 0x210], eax */
  W32((uint32_t)(ebx + 0x210u), eax);
/* 76d353: mov ecx, dword ptr [esi + 0x214] */
  ecx = R32((uint32_t)(esi + 0x214u));
/* 76d359: mov dword ptr [ebx + 0x214], ecx */
  W32((uint32_t)(ebx + 0x214u), ecx);
/* 76d35f: mov edx, dword ptr [esi + 0x218] */
  edx = R32((uint32_t)(esi + 0x218u));
/* 76d365: mov dword ptr [ebx + 0x218], edx */
  W32((uint32_t)(ebx + 0x218u), edx);
/* 76d36b: mov eax, dword ptr [esi + 0x21c] */
  eax = R32((uint32_t)(esi + 0x21cu));
/* 76d371: mov dword ptr [ebx + 0x21c], eax */
  W32((uint32_t)(ebx + 0x21cu), eax);
/* 76d377: mov ecx, dword ptr [esi + 0x220] */
  ecx = R32((uint32_t)(esi + 0x220u));
/* 76d37d: mov dword ptr [ebx + 0x220], ecx */
  W32((uint32_t)(ebx + 0x220u), ecx);
/* 76d383: mov edx, dword ptr [esi + 0x224] */
  edx = R32((uint32_t)(esi + 0x224u));
/* 76d389: mov dword ptr [ebx + 0x224], edx */
  W32((uint32_t)(ebx + 0x224u), edx);
/* 76d38f: mov eax, dword ptr [esi + 0x228] */
  eax = R32((uint32_t)(esi + 0x228u));
/* 76d395: mov dword ptr [ebx + 0x228], eax */
  W32((uint32_t)(ebx + 0x228u), eax);
/* 76d39b: mov ecx, dword ptr [esi + 0x22c] */
  ecx = R32((uint32_t)(esi + 0x22cu));
/* 76d3a1: mov dword ptr [ebx + 0x22c], ecx */
  W32((uint32_t)(ebx + 0x22cu), ecx);
/* 76d3a7: mov edx, dword ptr [esi + 0x230] */
  edx = R32((uint32_t)(esi + 0x230u));
/* 76d3ad: mov dword ptr [ebx + 0x230], edx */
  W32((uint32_t)(ebx + 0x230u), edx);
/* 76d3b3: mov eax, dword ptr [esi + 0x234] */
  eax = R32((uint32_t)(esi + 0x234u));
/* 76d3b9: mov dword ptr [ebx + 0x234], eax */
  W32((uint32_t)(ebx + 0x234u), eax);
/* 76d3bf: mov ecx, dword ptr [esi + 0x238] */
  ecx = R32((uint32_t)(esi + 0x238u));
/* 76d3c5: mov byte ptr [esp + 0x1c], 5 */
  W8((uint32_t)(esp + 0x1cu), 0x5u);
/* 76d3ca: mov dword ptr [ebx + 0x238], ecx */
  W32((uint32_t)(ebx + 0x238u), ecx);
/* 76d3d0: mov edx, dword ptr [esi + 0x23c] */
  edx = R32((uint32_t)(esi + 0x23cu));
/* 76d3d6: mov dword ptr [ebx + 0x23c], edx */
  W32((uint32_t)(ebx + 0x23cu), edx);
/* 76d3dc: mov eax, dword ptr [esi + 0x240] */
  eax = R32((uint32_t)(esi + 0x240u));
/* 76d3e2: mov dword ptr [ebx + 0x240], eax */
  W32((uint32_t)(ebx + 0x240u), eax);
/* 76d3e8: mov ecx, dword ptr [esi + 0x244] */
  ecx = R32((uint32_t)(esi + 0x244u));
/* 76d3ee: mov dword ptr [ebx + 0x244], ecx */
  W32((uint32_t)(ebx + 0x244u), ecx);
/* 76d3f4: mov edx, dword ptr [esi + 0x248] */
  edx = R32((uint32_t)(esi + 0x248u));
/* 76d3fa: mov dword ptr [ebx + 0x248], edx */
  W32((uint32_t)(ebx + 0x248u), edx);
/* 76d400: mov eax, dword ptr [esi + 0x24c] */
  eax = R32((uint32_t)(esi + 0x24cu));
/* 76d406: mov dword ptr [ebx + 0x24c], eax */
  W32((uint32_t)(ebx + 0x24cu), eax);
/* 76d40c: mov ecx, dword ptr [esi + 0x250] */
  ecx = R32((uint32_t)(esi + 0x250u));
/* 76d412: lea edx, [esi + 0x254] */
  edx = (uint32_t)(esi + 0x254u);
/* 76d418: mov dword ptr [ebx + 0x250], ecx */
  W32((uint32_t)(ebx + 0x250u), ecx);
/* 76d41e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76d41f: lea ecx, [ebx + 0x254] */
  ecx = (uint32_t)(ebx + 0x254u);
/* 76d425: call dword ptr [0xcfa4dc] */
  esp -= 4; W32(esp, 0x76d42bu); SPILL(); f_4e2ba8(); if (g_unwind) return; /* Core!??0FBitWriter@@QAE@ABU0@@Z */ RELOAD();
/* 76d42b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 76d42e: add esi, 0x2a8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2a8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 76d434: lea edi, [ebx + 0x2a8] */
  edi = (uint32_t)(ebx + 0x2a8u);
/* 76d43a: mov ecx, 0x200 */
  ecx = 0x200u;
/* 76d43f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 76d441: lea esi, [eax + 0xaa8] */
  esi = (uint32_t)(eax + 0xaa8u);
/* 76d447: lea edi, [ebx + 0xaa8] */
  edi = (uint32_t)(ebx + 0xaa8u);
/* 76d44d: mov ecx, 0x100 */
  ecx = 0x100u;
/* 76d452: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 76d454: mov ecx, dword ptr [eax + 0xea8] */
  ecx = R32((uint32_t)(eax + 0xea8u));
/* 76d45a: mov dword ptr [ebx + 0xea8], ecx */
  W32((uint32_t)(ebx + 0xea8u), ecx);
/* 76d460: mov edx, dword ptr [eax + 0xeac] */
  edx = R32((uint32_t)(eax + 0xeacu));
/* 76d466: mov dword ptr [ebx + 0xeac], edx */
  W32((uint32_t)(ebx + 0xeacu), edx);
/* 76d46c: mov ecx, dword ptr [eax + 0xeb0] */
  ecx = R32((uint32_t)(eax + 0xeb0u));
/* 76d472: mov dword ptr [ebx + 0xeb0], ecx */
  W32((uint32_t)(ebx + 0xeb0u), ecx);
/* 76d478: lea esi, [eax + 0xeb4] */
  esi = (uint32_t)(eax + 0xeb4u);
/* 76d47e: lea edi, [ebx + 0xeb4] */
  edi = (uint32_t)(ebx + 0xeb4u);
/* 76d484: mov ecx, 0x3ff */
  ecx = 0x3ffu;
/* 76d489: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 76d48b: lea esi, [eax + 0x1eb0] */
  esi = (uint32_t)(eax + 0x1eb0u);
/* 76d491: lea edi, [ebx + 0x1eb0] */
  edi = (uint32_t)(ebx + 0x1eb0u);
/* 76d497: mov ecx, 0x3ff */
  ecx = 0x3ffu;
/* 76d49c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 76d49e: lea esi, [eax + 0x2eac] */
  esi = (uint32_t)(eax + 0x2eacu);
/* 76d4a4: lea edi, [ebx + 0x2eac] */
  edi = (uint32_t)(ebx + 0x2eacu);
/* 76d4aa: mov ecx, 0x3ff */
  ecx = 0x3ffu;
/* 76d4af: add eax, 0x3ea8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3ea8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 76d4b4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 76d4b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76d4b7: lea ecx, [ebx + 0x3ea8] */
  ecx = (uint32_t)(ebx + 0x3ea8u);
/* 76d4bd: mov byte ptr [esp + 0x20], 6 */
  W8((uint32_t)(esp + 0x20u), 0x6u);
/* 76d4c2: call 0x6c1a00 */
  esp -= 4; W32(esp, 0x76d4c7u); SPILL(); f_6c1a00(); if (g_unwind) return; RELOAD();
/* 76d4c7: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 76d4ca: lea edx, [esi + 0x3eb4] */
  edx = (uint32_t)(esi + 0x3eb4u);
/* 76d4d0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76d4d1: lea ecx, [ebx + 0x3eb4] */
  ecx = (uint32_t)(ebx + 0x3eb4u);
/* 76d4d7: mov byte ptr [esp + 0x20], 7 */
  W8((uint32_t)(esp + 0x20u), 0x7u);
/* 76d4dc: call 0x6c1a00 */
  esp -= 4; W32(esp, 0x76d4e1u); SPILL(); f_6c1a00(); if (g_unwind) return; RELOAD();
/* 76d4e1: lea eax, [esi + 0x3ec0] */
  eax = (uint32_t)(esi + 0x3ec0u);
/* 76d4e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76d4e8: lea ecx, [ebx + 0x3ec0] */
  ecx = (uint32_t)(ebx + 0x3ec0u);
/* 76d4ee: mov byte ptr [esp + 0x20], 8 */
  W8((uint32_t)(esp + 0x20u), 0x8u);
/* 76d4f3: call 0x6c564b */
  esp -= 4; W32(esp, 0x76d4f8u); SPILL(); f_6c564b(); if (g_unwind) return; RELOAD();
/* 76d4f8: lea ecx, [esi + 0x3ecc] */
  ecx = (uint32_t)(esi + 0x3eccu);
/* 76d4fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76d4ff: lea ecx, [ebx + 0x3ecc] */
  ecx = (uint32_t)(ebx + 0x3eccu);
/* 76d505: mov byte ptr [esp + 0x20], 9 */
  W8((uint32_t)(esp + 0x20u), 0x9u);
/* 76d50a: call 0x6cab5f */
  esp -= 4; W32(esp, 0x76d50fu); SPILL(); f_6cab5f(); if (g_unwind) return; RELOAD();
/* 76d50f: lea edx, [esi + 0x3ed8] */
  edx = (uint32_t)(esi + 0x3ed8u);
/* 76d515: lea ecx, [ebx + 0x3ed8] */
  ecx = (uint32_t)(ebx + 0x3ed8u);
/* 76d51b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76d51c: mov byte ptr [esp + 0x20], 0xa */
  W8((uint32_t)(esp + 0x20u), 0xau);
/* 76d521: call 0x6c4534 */
  esp -= 4; W32(esp, 0x76d526u); SPILL(); f_6c4534(); if (g_unwind) return; RELOAD();
/* 76d526: mov eax, dword ptr [esi + 0x3eec] */
  eax = R32((uint32_t)(esi + 0x3eecu));
/* 76d52c: lea ecx, [esi + 0x3ef0] */
  ecx = (uint32_t)(esi + 0x3ef0u);
/* 76d532: mov byte ptr [esp + 0x1c], 0xb */
  W8((uint32_t)(esp + 0x1cu), 0xbu);
/* 76d537: mov dword ptr [ebx + 0x3eec], eax */
  W32((uint32_t)(ebx + 0x3eecu), eax);
/* 76d53d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76d53e: lea ecx, [ebx + 0x3ef0] */
  ecx = (uint32_t)(ebx + 0x3ef0u);
/* 76d544: call 0x6cc85b */
  esp -= 4; W32(esp, 0x76d549u); SPILL(); f_6cc85b(); if (g_unwind) return; RELOAD();
/* 76d549: mov edx, dword ptr [esi + 0x3efc] */
  edx = R32((uint32_t)(esi + 0x3efcu));
/* 76d54f: mov dword ptr [ebx + 0x3efc], edx */
  W32((uint32_t)(ebx + 0x3efcu), edx);
/* 76d555: mov eax, dword ptr [esi + 0x3f00] */
  eax = R32((uint32_t)(esi + 0x3f00u));
/* 76d55b: mov dword ptr [ebx + 0x3f00], eax */
  W32((uint32_t)(ebx + 0x3f00u), eax);
/* 76d561: mov ecx, dword ptr [esi + 0x3f04] */
  ecx = R32((uint32_t)(esi + 0x3f04u));
/* 76d567: mov dword ptr [ebx + 0x3f04], ecx */
  W32((uint32_t)(ebx + 0x3f04u), ecx);
/* 76d56d: mov edx, dword ptr [esi + 0x3f08] */
  edx = R32((uint32_t)(esi + 0x3f08u));
/* 76d573: mov dword ptr [ebx + 0x3f08], edx */
  W32((uint32_t)(ebx + 0x3f08u), edx);
/* 76d579: mov eax, dword ptr [esi + 0x3f0c] */
  eax = R32((uint32_t)(esi + 0x3f0cu));
/* 76d57f: mov dword ptr [ebx + 0x3f0c], eax */
  W32((uint32_t)(ebx + 0x3f0cu), eax);
/* 76d585: mov ecx, dword ptr [esi + 0x3f10] */
  ecx = R32((uint32_t)(esi + 0x3f10u));
/* 76d58b: mov dword ptr [ebx + 0x3f10], ecx */
  W32((uint32_t)(ebx + 0x3f10u), ecx);
/* 76d591: mov edx, dword ptr [esi + 0x3f14] */
  edx = R32((uint32_t)(esi + 0x3f14u));
/* 76d597: mov dword ptr [ebx + 0x3f14], edx */
  W32((uint32_t)(ebx + 0x3f14u), edx);
/* 76d59d: mov eax, dword ptr [esi + 0x3f18] */
  eax = R32((uint32_t)(esi + 0x3f18u));
/* 76d5a3: mov dword ptr [ebx + 0x3f18], eax */
  W32((uint32_t)(ebx + 0x3f18u), eax);
/* 76d5a9: mov ecx, dword ptr [esi + 0x3f1c] */
  ecx = R32((uint32_t)(esi + 0x3f1cu));
/* 76d5af: mov dword ptr [ebx + 0x3f1c], ecx */
  W32((uint32_t)(ebx + 0x3f1cu), ecx);
/* 76d5b5: mov edx, dword ptr [esi + 0x3f20] */
  edx = R32((uint32_t)(esi + 0x3f20u));
/* 76d5bb: add esi, 0x3f24 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3f24u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 76d5c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76d5c2: lea ecx, [ebx + 0x3f24] */
  ecx = (uint32_t)(ebx + 0x3f24u);
/* 76d5c8: mov byte ptr [esp + 0x20], 0xc */
  W8((uint32_t)(esp + 0x20u), 0xcu);
/* 76d5cd: mov dword ptr [ebx + 0x3f20], edx */
  W32((uint32_t)(ebx + 0x3f20u), edx);
/* 76d5d3: call 0x6cbca8 */
  esp -= 4; W32(esp, 0x76d5d8u); SPILL(); f_6cbca8(); if (g_unwind) return; RELOAD();
/* 76d5d8: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 76d5dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76d5dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76d5de: mov eax, ebx */
  eax = ebx;
/* 76d5e0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76d5e7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76d5e8: mov esp, ebp */
  esp = ebp;
/* 76d5ea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 76d5eb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76d760(void) {
  LOAD_REGS();
L_76d760: /* 76d760: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76d761: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76d762: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76d763: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76d764: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 76d768: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76d769: mov esi, ecx */
  esi = ecx;
/* 76d76b: call 0x6cbedd */
  esp -= 4; W32(esp, 0x76d770u); SPILL(); f_6cbedd(); if (g_unwind) return; RELOAD();
/* 76d770: mov eax, dword ptr [edi + 0x68] */
  eax = R32((uint32_t)(edi + 0x68u));
/* 76d773: mov dword ptr [esi + 0x68], eax */
  W32((uint32_t)(esi + 0x68u), eax);
/* 76d776: mov ecx, dword ptr [edi + 0x6c] */
  ecx = R32((uint32_t)(edi + 0x6cu));
/* 76d779: lea edx, [edi + 0x70] */
  edx = (uint32_t)(edi + 0x70u);
/* 76d77c: mov dword ptr [esi + 0x6c], ecx */
  W32((uint32_t)(esi + 0x6cu), ecx);
/* 76d77f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76d780: lea ecx, [esi + 0x70] */
  ecx = (uint32_t)(esi + 0x70u);
/* 76d783: call 0x6ca50b */
  esp -= 4; W32(esp, 0x76d788u); SPILL(); f_6ca50b(); if (g_unwind) return; RELOAD();
/* 76d788: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 76d78e: mov dword ptr [esi + 0xb4], eax */
  W32((uint32_t)(esi + 0xb4u), eax);
/* 76d794: mov ecx, dword ptr [edi + 0xb8] */
  ecx = R32((uint32_t)(edi + 0xb8u));
/* 76d79a: mov dword ptr [esi + 0xb8], ecx */
  W32((uint32_t)(esi + 0xb8u), ecx);
/* 76d7a0: mov edx, dword ptr [edi + 0xbc] */
  edx = R32((uint32_t)(edi + 0xbcu));
/* 76d7a6: mov dword ptr [esi + 0xbc], edx */
  W32((uint32_t)(esi + 0xbcu), edx);
/* 76d7ac: mov eax, dword ptr [edi + 0xc0] */
  eax = R32((uint32_t)(edi + 0xc0u));
/* 76d7b2: mov dword ptr [esi + 0xc0], eax */
  W32((uint32_t)(esi + 0xc0u), eax);
/* 76d7b8: mov ecx, dword ptr [edi + 0xc4] */
  ecx = R32((uint32_t)(edi + 0xc4u));
/* 76d7be: mov dword ptr [esi + 0xc4], ecx */
  W32((uint32_t)(esi + 0xc4u), ecx);
/* 76d7c4: mov edx, dword ptr [edi + 0xc8] */
  edx = R32((uint32_t)(edi + 0xc8u));
/* 76d7ca: mov dword ptr [esi + 0xc8], edx */
  W32((uint32_t)(esi + 0xc8u), edx);
/* 76d7d0: mov eax, dword ptr [edi + 0xcc] */
  eax = R32((uint32_t)(edi + 0xccu));
/* 76d7d6: mov dword ptr [esi + 0xcc], eax */
  W32((uint32_t)(esi + 0xccu), eax);
/* 76d7dc: mov ecx, dword ptr [edi + 0xd0] */
  ecx = R32((uint32_t)(edi + 0xd0u));
/* 76d7e2: lea edx, [edi + 0xd4] */
  edx = (uint32_t)(edi + 0xd4u);
/* 76d7e8: mov dword ptr [esi + 0xd0], ecx */
  W32((uint32_t)(esi + 0xd0u), ecx);
/* 76d7ee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76d7ef: lea ecx, [esi + 0xd4] */
  ecx = (uint32_t)(esi + 0xd4u);
/* 76d7f5: call dword ptr [0xcfa30c] */
  esp -= 4; W32(esp, 0x76d7fbu); SPILL(); f_4e132f(); if (g_unwind) return; /* Core!??4FStringNoInit@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 76d7fb: lea eax, [edi + 0xe0] */
  eax = (uint32_t)(edi + 0xe0u);
/* 76d801: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76d802: lea ecx, [esi + 0xe0] */
  ecx = (uint32_t)(esi + 0xe0u);
/* 76d808: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x76d80eu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 76d80e: lea ecx, [edi + 0xec] */
  ecx = (uint32_t)(edi + 0xecu);
/* 76d814: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76d815: lea ecx, [esi + 0xec] */
  ecx = (uint32_t)(esi + 0xecu);
/* 76d81b: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x76d821u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 76d821: mov edx, dword ptr [edi + 0xf8] */
  edx = R32((uint32_t)(edi + 0xf8u));
/* 76d827: mov dword ptr [esi + 0xf8], edx */
  W32((uint32_t)(esi + 0xf8u), edx);
/* 76d82d: mov eax, dword ptr [edi + 0xfc] */
  eax = R32((uint32_t)(edi + 0xfcu));
/* 76d833: mov dword ptr [esi + 0xfc], eax */
  W32((uint32_t)(esi + 0xfcu), eax);
/* 76d839: mov ecx, dword ptr [edi + 0x100] */
  ecx = R32((uint32_t)(edi + 0x100u));
/* 76d83f: mov dword ptr [esi + 0x100], ecx */
  W32((uint32_t)(esi + 0x100u), ecx);
/* 76d845: mov edx, dword ptr [edi + 0x104] */
  edx = R32((uint32_t)(edi + 0x104u));
/* 76d84b: mov dword ptr [esi + 0x104], edx */
  W32((uint32_t)(esi + 0x104u), edx);
/* 76d851: mov eax, dword ptr [edi + 0x108] */
  eax = R32((uint32_t)(edi + 0x108u));
/* 76d857: mov dword ptr [esi + 0x108], eax */
  W32((uint32_t)(esi + 0x108u), eax);
/* 76d85d: mov ecx, dword ptr [edi + 0x10c] */
  ecx = R32((uint32_t)(edi + 0x10cu));
/* 76d863: mov dword ptr [esi + 0x10c], ecx */
  W32((uint32_t)(esi + 0x10cu), ecx);
/* 76d869: mov edx, dword ptr [edi + 0x110] */
  edx = R32((uint32_t)(edi + 0x110u));
/* 76d86f: mov dword ptr [esi + 0x110], edx */
  W32((uint32_t)(esi + 0x110u), edx);
/* 76d875: mov eax, dword ptr [edi + 0x114] */
  eax = R32((uint32_t)(edi + 0x114u));
/* 76d87b: mov dword ptr [esi + 0x114], eax */
  W32((uint32_t)(esi + 0x114u), eax);
/* 76d881: mov ecx, dword ptr [edi + 0x118] */
  ecx = R32((uint32_t)(edi + 0x118u));
/* 76d887: mov dword ptr [esi + 0x118], ecx */
  W32((uint32_t)(esi + 0x118u), ecx);
/* 76d88d: mov edx, dword ptr [edi + 0x11c] */
  edx = R32((uint32_t)(edi + 0x11cu));
/* 76d893: mov dword ptr [esi + 0x11c], edx */
  W32((uint32_t)(esi + 0x11cu), edx);
/* 76d899: mov eax, dword ptr [edi + 0x120] */
  eax = R32((uint32_t)(edi + 0x120u));
/* 76d89f: mov dword ptr [esi + 0x120], eax */
  W32((uint32_t)(esi + 0x120u), eax);
/* 76d8a5: mov ecx, dword ptr [edi + 0x124] */
  ecx = R32((uint32_t)(edi + 0x124u));
/* 76d8ab: mov dword ptr [esi + 0x124], ecx */
  W32((uint32_t)(esi + 0x124u), ecx);
/* 76d8b1: mov edx, dword ptr [edi + 0x128] */
  edx = R32((uint32_t)(edi + 0x128u));
/* 76d8b7: mov dword ptr [esi + 0x128], edx */
  W32((uint32_t)(esi + 0x128u), edx);
/* 76d8bd: mov eax, dword ptr [edi + 0x12c] */
  eax = R32((uint32_t)(edi + 0x12cu));
/* 76d8c3: mov dword ptr [esi + 0x12c], eax */
  W32((uint32_t)(esi + 0x12cu), eax);
/* 76d8c9: mov ecx, dword ptr [edi + 0x130] */
  ecx = R32((uint32_t)(edi + 0x130u));
/* 76d8cf: mov dword ptr [esi + 0x130], ecx */
  W32((uint32_t)(esi + 0x130u), ecx);
/* 76d8d5: mov edx, dword ptr [edi + 0x134] */
  edx = R32((uint32_t)(edi + 0x134u));
/* 76d8db: mov dword ptr [esi + 0x134], edx */
  W32((uint32_t)(esi + 0x134u), edx);
/* 76d8e1: mov eax, dword ptr [edi + 0x138] */
  eax = R32((uint32_t)(edi + 0x138u));
/* 76d8e7: mov dword ptr [esi + 0x138], eax */
  W32((uint32_t)(esi + 0x138u), eax);
/* 76d8ed: mov ecx, dword ptr [edi + 0x13c] */
  ecx = R32((uint32_t)(edi + 0x13cu));
/* 76d8f3: mov dword ptr [esi + 0x13c], ecx */
  W32((uint32_t)(esi + 0x13cu), ecx);
/* 76d8f9: lea edx, [edi + 0x140] */
  edx = (uint32_t)(edi + 0x140u);
/* 76d8ff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76d900: lea ecx, [esi + 0x140] */
  ecx = (uint32_t)(esi + 0x140u);
/* 76d906: call 0x6ca989 */
  esp -= 4; W32(esp, 0x76d90bu); SPILL(); f_6ca989(); if (g_unwind) return; RELOAD();
/* 76d90b: mov eax, dword ptr [edi + 0x1bc] */
  eax = R32((uint32_t)(edi + 0x1bcu));
/* 76d911: mov dword ptr [esi + 0x1bc], eax */
  W32((uint32_t)(esi + 0x1bcu), eax);
/* 76d917: mov ecx, dword ptr [edi + 0x1c0] */
  ecx = R32((uint32_t)(edi + 0x1c0u));
/* 76d91d: mov dword ptr [esi + 0x1c0], ecx */
  W32((uint32_t)(esi + 0x1c0u), ecx);
/* 76d923: mov edx, dword ptr [edi + 0x1c4] */
  edx = R32((uint32_t)(edi + 0x1c4u));
/* 76d929: mov dword ptr [esi + 0x1c4], edx */
  W32((uint32_t)(esi + 0x1c4u), edx);
/* 76d92f: mov eax, dword ptr [edi + 0x1c8] */
  eax = R32((uint32_t)(edi + 0x1c8u));
/* 76d935: mov dword ptr [esi + 0x1c8], eax */
  W32((uint32_t)(esi + 0x1c8u), eax);
/* 76d93b: mov ecx, dword ptr [edi + 0x1cc] */
  ecx = R32((uint32_t)(edi + 0x1ccu));
/* 76d941: mov dword ptr [esi + 0x1cc], ecx */
  W32((uint32_t)(esi + 0x1ccu), ecx);
/* 76d947: mov edx, dword ptr [edi + 0x1d0] */
  edx = R32((uint32_t)(edi + 0x1d0u));
/* 76d94d: mov dword ptr [esi + 0x1d0], edx */
  W32((uint32_t)(esi + 0x1d0u), edx);
/* 76d953: mov eax, dword ptr [edi + 0x1d4] */
  eax = R32((uint32_t)(edi + 0x1d4u));
/* 76d959: mov dword ptr [esi + 0x1d4], eax */
  W32((uint32_t)(esi + 0x1d4u), eax);
/* 76d95f: mov ecx, dword ptr [edi + 0x1d8] */
  ecx = R32((uint32_t)(edi + 0x1d8u));
/* 76d965: mov dword ptr [esi + 0x1d8], ecx */
  W32((uint32_t)(esi + 0x1d8u), ecx);
/* 76d96b: mov edx, dword ptr [edi + 0x1dc] */
  edx = R32((uint32_t)(edi + 0x1dcu));
/* 76d971: mov dword ptr [esi + 0x1dc], edx */
  W32((uint32_t)(esi + 0x1dcu), edx);
/* 76d977: mov eax, dword ptr [edi + 0x1e0] */
  eax = R32((uint32_t)(edi + 0x1e0u));
/* 76d97d: mov dword ptr [esi + 0x1e0], eax */
  W32((uint32_t)(esi + 0x1e0u), eax);
/* 76d983: mov ecx, dword ptr [edi + 0x1e4] */
  ecx = R32((uint32_t)(edi + 0x1e4u));
/* 76d989: mov dword ptr [esi + 0x1e4], ecx */
  W32((uint32_t)(esi + 0x1e4u), ecx);
/* 76d98f: mov edx, dword ptr [edi + 0x1e8] */
  edx = R32((uint32_t)(edi + 0x1e8u));
/* 76d995: mov dword ptr [esi + 0x1e8], edx */
  W32((uint32_t)(esi + 0x1e8u), edx);
/* 76d99b: mov eax, dword ptr [edi + 0x1ec] */
  eax = R32((uint32_t)(edi + 0x1ecu));
/* 76d9a1: mov dword ptr [esi + 0x1ec], eax */
  W32((uint32_t)(esi + 0x1ecu), eax);
/* 76d9a7: mov ecx, dword ptr [edi + 0x1f0] */
  ecx = R32((uint32_t)(edi + 0x1f0u));
/* 76d9ad: mov dword ptr [esi + 0x1f0], ecx */
  W32((uint32_t)(esi + 0x1f0u), ecx);
/* 76d9b3: mov edx, dword ptr [edi + 0x1f4] */
  edx = R32((uint32_t)(edi + 0x1f4u));
/* 76d9b9: mov dword ptr [esi + 0x1f4], edx */
  W32((uint32_t)(esi + 0x1f4u), edx);
/* 76d9bf: mov eax, dword ptr [edi + 0x1f8] */
  eax = R32((uint32_t)(edi + 0x1f8u));
/* 76d9c5: mov dword ptr [esi + 0x1f8], eax */
  W32((uint32_t)(esi + 0x1f8u), eax);
/* 76d9cb: mov ecx, dword ptr [edi + 0x1fc] */
  ecx = R32((uint32_t)(edi + 0x1fcu));
/* 76d9d1: mov dword ptr [esi + 0x1fc], ecx */
  W32((uint32_t)(esi + 0x1fcu), ecx);
/* 76d9d7: mov edx, dword ptr [edi + 0x200] */
  edx = R32((uint32_t)(edi + 0x200u));
/* 76d9dd: mov dword ptr [esi + 0x200], edx */
  W32((uint32_t)(esi + 0x200u), edx);
/* 76d9e3: mov eax, dword ptr [edi + 0x204] */
  eax = R32((uint32_t)(edi + 0x204u));
/* 76d9e9: mov dword ptr [esi + 0x204], eax */
  W32((uint32_t)(esi + 0x204u), eax);
/* 76d9ef: mov ecx, dword ptr [edi + 0x208] */
  ecx = R32((uint32_t)(edi + 0x208u));
/* 76d9f5: mov dword ptr [esi + 0x208], ecx */
  W32((uint32_t)(esi + 0x208u), ecx);
/* 76d9fb: mov edx, dword ptr [edi + 0x20c] */
  edx = R32((uint32_t)(edi + 0x20cu));
/* 76da01: mov dword ptr [esi + 0x20c], edx */
  W32((uint32_t)(esi + 0x20cu), edx);
/* 76da07: mov eax, dword ptr [edi + 0x210] */
  eax = R32((uint32_t)(edi + 0x210u));
/* 76da0d: mov dword ptr [esi + 0x210], eax */
  W32((uint32_t)(esi + 0x210u), eax);
/* 76da13: mov ecx, dword ptr [edi + 0x214] */
  ecx = R32((uint32_t)(edi + 0x214u));
/* 76da19: mov dword ptr [esi + 0x214], ecx */
  W32((uint32_t)(esi + 0x214u), ecx);
/* 76da1f: mov edx, dword ptr [edi + 0x218] */
  edx = R32((uint32_t)(edi + 0x218u));
/* 76da25: mov dword ptr [esi + 0x218], edx */
  W32((uint32_t)(esi + 0x218u), edx);
/* 76da2b: mov eax, dword ptr [edi + 0x21c] */
  eax = R32((uint32_t)(edi + 0x21cu));
/* 76da31: mov dword ptr [esi + 0x21c], eax */
  W32((uint32_t)(esi + 0x21cu), eax);
/* 76da37: mov ecx, dword ptr [edi + 0x220] */
  ecx = R32((uint32_t)(edi + 0x220u));
/* 76da3d: mov dword ptr [esi + 0x220], ecx */
  W32((uint32_t)(esi + 0x220u), ecx);
/* 76da43: mov edx, dword ptr [edi + 0x224] */
  edx = R32((uint32_t)(edi + 0x224u));
/* 76da49: mov dword ptr [esi + 0x224], edx */
  W32((uint32_t)(esi + 0x224u), edx);
/* 76da4f: mov eax, dword ptr [edi + 0x228] */
  eax = R32((uint32_t)(edi + 0x228u));
/* 76da55: mov dword ptr [esi + 0x228], eax */
  W32((uint32_t)(esi + 0x228u), eax);
/* 76da5b: mov ecx, dword ptr [edi + 0x22c] */
  ecx = R32((uint32_t)(edi + 0x22cu));
/* 76da61: mov dword ptr [esi + 0x22c], ecx */
  W32((uint32_t)(esi + 0x22cu), ecx);
/* 76da67: mov edx, dword ptr [edi + 0x230] */
  edx = R32((uint32_t)(edi + 0x230u));
/* 76da6d: mov dword ptr [esi + 0x230], edx */
  W32((uint32_t)(esi + 0x230u), edx);
/* 76da73: mov eax, dword ptr [edi + 0x234] */
  eax = R32((uint32_t)(edi + 0x234u));
/* 76da79: mov dword ptr [esi + 0x234], eax */
  W32((uint32_t)(esi + 0x234u), eax);
/* 76da7f: mov ecx, dword ptr [edi + 0x238] */
  ecx = R32((uint32_t)(edi + 0x238u));
/* 76da85: mov dword ptr [esi + 0x238], ecx */
  W32((uint32_t)(esi + 0x238u), ecx);
/* 76da8b: mov edx, dword ptr [edi + 0x23c] */
  edx = R32((uint32_t)(edi + 0x23cu));
/* 76da91: mov dword ptr [esi + 0x23c], edx */
  W32((uint32_t)(esi + 0x23cu), edx);
/* 76da97: mov eax, dword ptr [edi + 0x240] */
  eax = R32((uint32_t)(edi + 0x240u));
/* 76da9d: mov dword ptr [esi + 0x240], eax */
  W32((uint32_t)(esi + 0x240u), eax);
/* 76daa3: mov ecx, dword ptr [edi + 0x244] */
  ecx = R32((uint32_t)(edi + 0x244u));
/* 76daa9: mov dword ptr [esi + 0x244], ecx */
  W32((uint32_t)(esi + 0x244u), ecx);
/* 76daaf: mov edx, dword ptr [edi + 0x248] */
  edx = R32((uint32_t)(edi + 0x248u));
/* 76dab5: mov dword ptr [esi + 0x248], edx */
  W32((uint32_t)(esi + 0x248u), edx);
/* 76dabb: mov eax, dword ptr [edi + 0x24c] */
  eax = R32((uint32_t)(edi + 0x24cu));
/* 76dac1: mov dword ptr [esi + 0x24c], eax */
  W32((uint32_t)(esi + 0x24cu), eax);
/* 76dac7: mov ecx, dword ptr [edi + 0x250] */
  ecx = R32((uint32_t)(edi + 0x250u));
/* 76dacd: lea edx, [edi + 0x254] */
  edx = (uint32_t)(edi + 0x254u);
/* 76dad3: mov dword ptr [esi + 0x250], ecx */
  W32((uint32_t)(esi + 0x250u), ecx);
/* 76dad9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76dada: lea ecx, [esi + 0x254] */
  ecx = (uint32_t)(esi + 0x254u);
/* 76dae0: call dword ptr [0xcfa4e0] */
  esp -= 4; W32(esp, 0x76dae6u); SPILL(); f_4e107d(); if (g_unwind) return; /* Core!??4FBitWriter@@QAEAAU0@ABU0@@Z */ RELOAD();
/* 76dae6: mov eax, edi */
  eax = edi;
/* 76dae8: lea ecx, [esi + 0x2a8] */
  ecx = (uint32_t)(esi + 0x2a8u);
/* 76daee: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 76daf0: mov edx, 0x100 */
  edx = 0x100u;
L_76daf5: /* 76daf5: mov ebx, dword ptr [eax + ecx] */
  ebx = R32((uint32_t)(eax + ecx));
/* 76daf8: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 76dafa: mov ebx, dword ptr [eax + ecx + 4] */
  ebx = R32((uint32_t)(eax + ecx + 0x4u));
/* 76dafe: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 76db01: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 76db04: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 76db05: jne 0x76daf5 */
  if (!zf) goto L_76daf5;
L_76db07: /* 76db07: lea ecx, [esi + 0xaa8] */
  ecx = (uint32_t)(esi + 0xaa8u);
/* 76db0d: mov edx, 0x100 */
  edx = 0x100u;
L_76db12: /* 76db12: mov ebx, dword ptr [ecx + eax] */
  ebx = R32((uint32_t)(ecx + eax));
/* 76db15: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 76db17: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 76db1a: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 76db1b: jne 0x76db12 */
  if (!zf) goto L_76db12;
L_76db1d: /* 76db1d: mov ecx, dword ptr [edi + 0xea8] */
  ecx = R32((uint32_t)(edi + 0xea8u));
/* 76db23: mov dword ptr [esi + 0xea8], ecx */
  W32((uint32_t)(esi + 0xea8u), ecx);
/* 76db29: mov edx, dword ptr [edi + 0xeac] */
  edx = R32((uint32_t)(edi + 0xeacu));
/* 76db2f: mov dword ptr [esi + 0xeac], edx */
  W32((uint32_t)(esi + 0xeacu), edx);
/* 76db35: mov ecx, dword ptr [edi + 0xeb0] */
  ecx = R32((uint32_t)(edi + 0xeb0u));
/* 76db3b: mov dword ptr [esi + 0xeb0], ecx */
  W32((uint32_t)(esi + 0xeb0u), ecx);
/* 76db41: lea ecx, [esi + 0xeb4] */
  ecx = (uint32_t)(esi + 0xeb4u);
/* 76db47: mov edx, 0x3ff */
  edx = 0x3ffu;
/* 76db4c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_76db50: /* 76db50: mov ebx, dword ptr [eax + ecx] */
  ebx = R32((uint32_t)(eax + ecx));
/* 76db53: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 76db55: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 76db58: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 76db59: jne 0x76db50 */
  if (!zf) goto L_76db50;
L_76db5b: /* 76db5b: lea ecx, [esi + 0x1eb0] */
  ecx = (uint32_t)(esi + 0x1eb0u);
/* 76db61: mov edx, 0x3ff */
  edx = 0x3ffu;
L_76db66: /* 76db66: mov ebx, dword ptr [eax + ecx] */
  ebx = R32((uint32_t)(eax + ecx));
/* 76db69: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 76db6b: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 76db6e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 76db6f: jne 0x76db66 */
  if (!zf) goto L_76db66;
L_76db71: /* 76db71: lea ecx, [esi + 0x2eac] */
  ecx = (uint32_t)(esi + 0x2eacu);
/* 76db77: mov edx, 0x3ff */
  edx = 0x3ffu;
/* 76db7c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_76db80: /* 76db80: mov ebx, dword ptr [eax + ecx] */
  ebx = R32((uint32_t)(eax + ecx));
/* 76db83: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 76db85: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 76db88: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 76db89: jne 0x76db80 */
  if (!zf) goto L_76db80;
L_76db8b: /* 76db8b: lea edx, [edi + 0x3ea8] */
  edx = (uint32_t)(edi + 0x3ea8u);
/* 76db91: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76db92: lea ecx, [esi + 0x3ea8] */
  ecx = (uint32_t)(esi + 0x3ea8u);
/* 76db98: call 0x6c5eac */
  esp -= 4; W32(esp, 0x76db9du); SPILL(); f_6c5eac(); if (g_unwind) return; RELOAD();
/* 76db9d: lea eax, [edi + 0x3eb4] */
  eax = (uint32_t)(edi + 0x3eb4u);
/* 76dba3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76dba4: lea ecx, [esi + 0x3eb4] */
  ecx = (uint32_t)(esi + 0x3eb4u);
/* 76dbaa: call 0x6c5eac */
  esp -= 4; W32(esp, 0x76dbafu); SPILL(); f_6c5eac(); if (g_unwind) return; RELOAD();
/* 76dbaf: lea ecx, [edi + 0x3ec0] */
  ecx = (uint32_t)(edi + 0x3ec0u);
/* 76dbb5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76dbb6: lea ecx, [esi + 0x3ec0] */
  ecx = (uint32_t)(esi + 0x3ec0u);
/* 76dbbc: call 0x6c7a3b */
  esp -= 4; W32(esp, 0x76dbc1u); SPILL(); f_6c7a3b(); if (g_unwind) return; RELOAD();
/* 76dbc1: lea edx, [edi + 0x3ecc] */
  edx = (uint32_t)(edi + 0x3eccu);
/* 76dbc7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76dbc8: lea ecx, [esi + 0x3ecc] */
  ecx = (uint32_t)(esi + 0x3eccu);
/* 76dbce: call 0x6c49d0 */
  esp -= 4; W32(esp, 0x76dbd3u); SPILL(); f_6c49d0(); if (g_unwind) return; RELOAD();
/* 76dbd3: lea ebp, [edi + 0x3ed8] */
  ebp = (uint32_t)(edi + 0x3ed8u);
/* 76dbd9: lea ebx, [esi + 0x3ed8] */
  ebx = (uint32_t)(esi + 0x3ed8u);
/* 76dbdf: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76dbe0: mov ecx, ebx */
  ecx = ebx;
/* 76dbe2: call 0x6c152d */
  esp -= 4; W32(esp, 0x76dbe7u); SPILL(); f_6c152d(); if (g_unwind) return; RELOAD();
/* 76dbe7: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 76dbea: mov ecx, ebx */
  ecx = ebx;
/* 76dbec: mov dword ptr [ebx + 0x10], eax */
  W32((uint32_t)(ebx + 0x10u), eax);
/* 76dbef: call 0x6c69ce */
  esp -= 4; W32(esp, 0x76dbf4u); SPILL(); f_6c69ce(); if (g_unwind) return; RELOAD();
/* 76dbf4: mov ecx, dword ptr [edi + 0x3eec] */
  ecx = R32((uint32_t)(edi + 0x3eecu));
/* 76dbfa: lea edx, [edi + 0x3ef0] */
  edx = (uint32_t)(edi + 0x3ef0u);
/* 76dc00: mov dword ptr [esi + 0x3eec], ecx */
  W32((uint32_t)(esi + 0x3eecu), ecx);
/* 76dc06: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76dc07: lea ecx, [esi + 0x3ef0] */
  ecx = (uint32_t)(esi + 0x3ef0u);
/* 76dc0d: call 0x6cc4c8 */
  esp -= 4; W32(esp, 0x76dc12u); SPILL(); f_6cc4c8(); if (g_unwind) return; RELOAD();
/* 76dc12: mov eax, dword ptr [edi + 0x3efc] */
  eax = R32((uint32_t)(edi + 0x3efcu));
/* 76dc18: mov dword ptr [esi + 0x3efc], eax */
  W32((uint32_t)(esi + 0x3efcu), eax);
/* 76dc1e: mov ecx, dword ptr [edi + 0x3f00] */
  ecx = R32((uint32_t)(edi + 0x3f00u));
/* 76dc24: mov dword ptr [esi + 0x3f00], ecx */
  W32((uint32_t)(esi + 0x3f00u), ecx);
/* 76dc2a: mov edx, dword ptr [edi + 0x3f04] */
  edx = R32((uint32_t)(edi + 0x3f04u));
/* 76dc30: mov dword ptr [esi + 0x3f04], edx */
  W32((uint32_t)(esi + 0x3f04u), edx);
/* 76dc36: mov eax, dword ptr [edi + 0x3f08] */
  eax = R32((uint32_t)(edi + 0x3f08u));
/* 76dc3c: mov dword ptr [esi + 0x3f08], eax */
  W32((uint32_t)(esi + 0x3f08u), eax);
/* 76dc42: mov ecx, dword ptr [edi + 0x3f0c] */
  ecx = R32((uint32_t)(edi + 0x3f0cu));
/* 76dc48: mov dword ptr [esi + 0x3f0c], ecx */
  W32((uint32_t)(esi + 0x3f0cu), ecx);
/* 76dc4e: mov edx, dword ptr [edi + 0x3f10] */
  edx = R32((uint32_t)(edi + 0x3f10u));
/* 76dc54: mov dword ptr [esi + 0x3f10], edx */
  W32((uint32_t)(esi + 0x3f10u), edx);
/* 76dc5a: mov eax, dword ptr [edi + 0x3f14] */
  eax = R32((uint32_t)(edi + 0x3f14u));
/* 76dc60: mov dword ptr [esi + 0x3f14], eax */
  W32((uint32_t)(esi + 0x3f14u), eax);
/* 76dc66: mov ecx, dword ptr [edi + 0x3f18] */
  ecx = R32((uint32_t)(edi + 0x3f18u));
/* 76dc6c: mov dword ptr [esi + 0x3f18], ecx */
  W32((uint32_t)(esi + 0x3f18u), ecx);
/* 76dc72: mov edx, dword ptr [edi + 0x3f1c] */
  edx = R32((uint32_t)(edi + 0x3f1cu));
/* 76dc78: mov dword ptr [esi + 0x3f1c], edx */
  W32((uint32_t)(esi + 0x3f1cu), edx);
/* 76dc7e: mov eax, dword ptr [edi + 0x3f20] */
  eax = R32((uint32_t)(edi + 0x3f20u));
/* 76dc84: add edi, 0x3f24 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3f24u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 76dc8a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76dc8b: lea ecx, [esi + 0x3f24] */
  ecx = (uint32_t)(esi + 0x3f24u);
/* 76dc91: mov dword ptr [esi + 0x3f20], eax */
  W32((uint32_t)(esi + 0x3f20u), eax);
/* 76dc97: call 0x6c268a */
  esp -= 4; W32(esp, 0x76dc9cu); SPILL(); f_6c268a(); if (g_unwind) return; RELOAD();
/* 76dc9c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76dc9d: mov eax, esi */
  eax = esi;
/* 76dc9f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76dca0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 76dca1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76dca2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76de10(void) {
  LOAD_REGS();
L_76de10: /* 76de10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76de11: mov esi, ecx */
  esi = ecx;
/* 76de13: call 0x6c2dfb */
  esp -= 4; W32(esp, 0x76de18u); SPILL(); f_6c2dfb(); if (g_unwind) return; RELOAD();
/* 76de18: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76de1d: je 0x76de2e */
  if (zf) goto L_76de2e;
L_76de1f: /* 76de1f: push 0x3f30 */
  { uint32_t v = 0x3f30u; esp -= 4; W32(esp, v); }
/* 76de24: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76de25: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x76de2bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 76de2b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76de2e: /* 76de2e: mov eax, esi */
  eax = esi;
/* 76de30: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76de31: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76de50(void) {
  LOAD_REGS();
L_76de50: /* 76de50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76de51: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 76de55: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76de58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76de59: mov esi, ecx */
  esi = ecx;
/* 76de5b: je 0x76de90 */
  if (zf) goto L_76de90;
L_76de5d: /* 76de5d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 76de60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76de61: push 0x6c2dfb */
  { uint32_t v = 0x6c2dfbu; esp -= 4; W32(esp, v); }
/* 76de66: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 76de69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76de6a: push 0x3f30 */
  { uint32_t v = 0x3f30u; esp -= 4; W32(esp, v); }
/* 76de6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76de70: call 0x99ca3d */
  esp -= 4; W32(esp, 0x76de75u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 76de75: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76de78: je 0x76de88 */
  if (zf) goto L_76de88;
L_76de7a: /* 76de7a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 76de80: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 76de82: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 76de84: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76de85: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x76de88u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_76de88: /* 76de88: mov eax, edi */
  eax = edi;
/* 76de8a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76de8b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76de8c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76de8d: ret 4 */
  esp += 8; SPILL(); return;
L_76de90: /* 76de90: mov ecx, esi */
  ecx = esi;
/* 76de92: call 0x6c2dfb */
  esp -= 4; W32(esp, 0x76de97u); SPILL(); f_6c2dfb(); if (g_unwind) return; RELOAD();
/* 76de97: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76de9a: je 0x76deab */
  if (zf) goto L_76deab;
L_76de9c: /* 76de9c: push 0x3f30 */
  { uint32_t v = 0x3f30u; esp -= 4; W32(esp, v); }
/* 76dea1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76dea2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x76dea8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 76dea8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76deab: /* 76deab: mov eax, esi */
  eax = esi;
/* 76dead: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76deae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76deaf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76dee0(void) {
  LOAD_REGS();
L_76dee0: /* 76dee0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76dee2: push 0x9cc178 */
  { uint32_t v = 0x9cc178u; esp -= 4; W32(esp, v); }
/* 76dee7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76deed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76deee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76def5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76def6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76def7: mov esi, ecx */
  esi = ecx;
/* 76def9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 76defd: mov dword ptr [esi], 0xa071e0 */
  W32((uint32_t)(esi), 0xa071e0u);
/* 76df03: mov dword ptr [esi + 0x28], 0xa071d0 */
  W32((uint32_t)(esi + 0x28u), 0xa071d0u);
/* 76df0a: mov dword ptr [esi + 0x2c], 0xa071cc */
  W32((uint32_t)(esi + 0x2cu), 0xa071ccu);
/* 76df11: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 76df19: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x76df1fu); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 76df1f: mov ecx, esi */
  ecx = esi;
/* 76df21: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 76df29: call 0x6c2dfb */
  esp -= 4; W32(esp, 0x76df2eu); SPILL(); f_6c2dfb(); if (g_unwind) return; RELOAD();
/* 76df2e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 76df32: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76df33: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76df3a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76df3d: ret  */
  esp += 4; SPILL(); return;
}

void f_76df60(void) {
  LOAD_REGS();
L_76df60: /* 76df60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76df61: mov esi, ecx */
  esi = ecx;
/* 76df63: call 0x6c3625 */
  esp -= 4; W32(esp, 0x76df68u); SPILL(); f_6c3625(); if (g_unwind) return; RELOAD();
/* 76df68: mov dword ptr [esi], 0xa071e0 */
  W32((uint32_t)(esi), 0xa071e0u);
/* 76df6e: mov dword ptr [esi + 0x28], 0xa071d0 */
  W32((uint32_t)(esi + 0x28u), 0xa071d0u);
/* 76df75: mov dword ptr [esi + 0x2c], 0xa071cc */
  W32((uint32_t)(esi + 0x2cu), 0xa071ccu);
/* 76df7c: mov eax, esi */
  eax = esi;
/* 76df7e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76df7f: ret  */
  esp += 4; SPILL(); return;
}

void f_76df90(void) {
  LOAD_REGS();
L_76df90: /* 76df90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 76df94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76df95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76df96: mov esi, ecx */
  esi = ecx;
/* 76df98: call 0x6c8f0d */
  esp -= 4; W32(esp, 0x76df9du); SPILL(); f_6c8f0d(); if (g_unwind) return; RELOAD();
/* 76df9d: mov dword ptr [esi], 0xa071e0 */
  W32((uint32_t)(esi), 0xa071e0u);
/* 76dfa3: mov dword ptr [esi + 0x28], 0xa071d0 */
  W32((uint32_t)(esi + 0x28u), 0xa071d0u);
/* 76dfaa: mov dword ptr [esi + 0x2c], 0xa071cc */
  W32((uint32_t)(esi + 0x2cu), 0xa071ccu);
/* 76dfb1: mov eax, esi */
  eax = esi;
/* 76dfb3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76dfb4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76dfd0(void) {
  LOAD_REGS();
L_76dfd0: /* 76dfd0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 76dfd4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76dfd5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76dfd6: mov esi, ecx */
  esi = ecx;
/* 76dfd8: call 0x6cac95 */
  esp -= 4; W32(esp, 0x76dfddu); SPILL(); f_6cac95(); if (g_unwind) return; RELOAD();
/* 76dfdd: mov eax, esi */
  eax = esi;
/* 76dfdf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76dfe0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76e000(void) {
  LOAD_REGS();
L_76e000: /* 76e000: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76e001: mov esi, ecx */
  esi = ecx;
/* 76e003: call 0x6c40a7 */
  esp -= 4; W32(esp, 0x76e008u); SPILL(); f_6c40a7(); if (g_unwind) return; RELOAD();
/* 76e008: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76e00d: je 0x76e01e */
  if (zf) goto L_76e01e;
L_76e00f: /* 76e00f: push 0x3f30 */
  { uint32_t v = 0x3f30u; esp -= 4; W32(esp, v); }
/* 76e014: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76e015: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x76e01bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 76e01b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76e01e: /* 76e01e: mov eax, esi */
  eax = esi;
/* 76e020: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76e021: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76e040(void) {
  LOAD_REGS();
L_76e040: /* 76e040: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76e041: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 76e045: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76e048: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76e049: mov esi, ecx */
  esi = ecx;
/* 76e04b: je 0x76e080 */
  if (zf) goto L_76e080;
L_76e04d: /* 76e04d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 76e050: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76e051: push 0x6c40a7 */
  { uint32_t v = 0x6c40a7u; esp -= 4; W32(esp, v); }
/* 76e056: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 76e059: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76e05a: push 0x3f30 */
  { uint32_t v = 0x3f30u; esp -= 4; W32(esp, v); }
/* 76e05f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76e060: call 0x99ca3d */
  esp -= 4; W32(esp, 0x76e065u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 76e065: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76e068: je 0x76e078 */
  if (zf) goto L_76e078;
L_76e06a: /* 76e06a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 76e070: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 76e072: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 76e074: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76e075: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x76e078u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_76e078: /* 76e078: mov eax, edi */
  eax = edi;
/* 76e07a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76e07b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76e07c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76e07d: ret 4 */
  esp += 8; SPILL(); return;
L_76e080: /* 76e080: mov ecx, esi */
  ecx = esi;
/* 76e082: call 0x6c40a7 */
  esp -= 4; W32(esp, 0x76e087u); SPILL(); f_6c40a7(); if (g_unwind) return; RELOAD();
/* 76e087: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76e08a: je 0x76e09b */
  if (zf) goto L_76e09b;
L_76e08c: /* 76e08c: push 0x3f30 */
  { uint32_t v = 0x3f30u; esp -= 4; W32(esp, v); }
/* 76e091: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76e092: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x76e098u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 76e098: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76e09b: /* 76e09b: mov eax, esi */
  eax = esi;
/* 76e09d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76e09e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76e09f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76e0d0(void) {
  LOAD_REGS();
L_76e0d0: /* 76e0d0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 76e0d4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76e0d6: je 0x76e0dd */
  if (zf) goto L_76e0dd;
L_76e0d8: /* 76e0d8: jmp 0x6c956b */
  SPILL(); f_6c956b(); return;
L_76e0dd: /* 76e0dd: ret  */
  esp += 4; SPILL(); return;
}

void f_76e0f0(void) {
  LOAD_REGS();
L_76e0f0: /* 76e0f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 76e0f4: mov dword ptr [0xb08f88], eax */
  W32((uint32_t)(0xb08f88u), eax);
/* 76e0f9: mov eax, 1 */
  eax = 0x1u;
/* 76e0fe: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_76e120(void) {
  LOAD_REGS();
L_76e120: /* 76e120: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 76e122: ret  */
  esp += 4; SPILL(); return;
}

void f_76e140(void) {
  LOAD_REGS();
L_76e140: /* 76e140: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76e141: mov ebp, esp */
  ebp = esp;
/* 76e143: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76e145: push 0x9cc190 */
  { uint32_t v = 0x9cc190u; esp -= 4; W32(esp, v); }
/* 76e14a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76e150: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76e151: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76e158: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 76e15b: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 76e160: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76e162: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76e163: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76e164: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76e165: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 76e168: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 76e16f: je 0x76e1de */
  if (zf) goto L_76e1de;
L_76e171: /* 76e171: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 76e174: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 76e176: mov ecx, esi */
  ecx = esi;
/* 76e178: call dword ptr [eax + 0x190] */
  { uint32_t t = R32((uint32_t)(eax + 0x190u)); esp -= 4; W32(esp, 0x76e17eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76e17e: mov ebx, eax */
  ebx = eax;
/* 76e180: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76e182: je 0x76e1de */
  if (zf) goto L_76e1de;
L_76e184: /* 76e184: cmp byte ptr [esi + 0x50], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 76e188: jne 0x76e190 */
  if (!zf) goto L_76e190;
L_76e18a: /* 76e18a: mov byte ptr [esi + 0x50], 0 */
  W8((uint32_t)(esi + 0x50u), 0x0u);
/* 76e18e: jmp 0x76e1a7 */
  goto L_76e1a7;
L_76e190: /* 76e190: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 76e196: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 76e198: push 0xac4380 */
  { uint32_t v = 0xac4380u; esp -= 4; W32(esp, v); }
/* 76e19d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76e19e: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x76e1a4u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 76e1a4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76e1a7: /* 76e1a7: mov edi, dword ptr [esi + 0x364] */
  edi = R32((uint32_t)(esi + 0x364u));
/* 76e1ad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76e1ae: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x76e1b3u); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
/* 76e1b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76e1b4: call 0x90bbd0 */
  esp -= 4; W32(esp, 0x76e1b9u); SPILL(); f_90bbd0(); if (g_unwind) return; RELOAD();
/* 76e1b9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76e1bb: mov dword ptr [esi + 0x360], 0 */
  W32((uint32_t)(esi + 0x360u), 0x0u);
/* 76e1c5: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 76e1c9: je 0x76e1de */
  if (zf) goto L_76e1de;
L_76e1cb: /* 76e1cb: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* 76e1d1: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76e1d4: jne 0x76e1de */
  if (!zf) goto L_76e1de;
L_76e1d6: /* 76e1d6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 76e1d8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76e1d9: call 0x6c5001 */
  esp -= 4; W32(esp, 0x76e1deu); SPILL(); f_6c5001(); if (g_unwind) return; RELOAD();
L_76e1de: /* 76e1de: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 76e1e1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76e1e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76e1e3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76e1ea: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76e1eb: mov esp, ebp */
  esp = ebp;
/* 76e1ed: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 76e1ee: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76e1f1(void) {
  LOAD_REGS();
L_76e1f1: /* 76e1f1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 76e1f4: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 76e1f9: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 76e1fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76e1fd: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 76e200: call 0x99caf8 */
  esp -= 4; W32(esp, 0x76e205u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_76e205(); return;
}

void f_76e205(void) {
  LOAD_REGS();
L_76e205: /* 76e205: push 0xa072d8 */
  { uint32_t v = 0xa072d8u; esp -= 4; W32(esp, v); }
/* 76e20a: push 0xac4404 */
  { uint32_t v = 0xac4404u; esp -= 4; W32(esp, v); }
/* 76e20f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x76e215u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 76e215: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76e218: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76e21a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76e21c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x76e221u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_76e221(); return;
}

void f_76e221(void) {
  LOAD_REGS();
L_76e221: /* 76e221: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 76e224: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 76e229: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 76e22c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76e22d: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 76e230: call 0x99caf8 */
  esp -= 4; W32(esp, 0x76e235u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_76e235(); return;
}

void f_76e235(void) {
  LOAD_REGS();
L_76e235: /* 76e235: push 0xa072a4 */
  { uint32_t v = 0xa072a4u; esp -= 4; W32(esp, v); }
/* 76e23a: push 0xac440c */
  { uint32_t v = 0xac440cu; esp -= 4; W32(esp, v); }
/* 76e23f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x76e245u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 76e245: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76e248: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76e24a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76e24c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x76e251u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_76e251: guest_badaddr(0x76e251); return;
}

void f_76e2b0(void) {
  LOAD_REGS();
L_76e2b0: /* 76e2b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76e2b1: mov ebp, esp */
  ebp = esp;
/* 76e2b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76e2b5: push 0x9cc1a0 */
  { uint32_t v = 0x9cc1a0u; esp -= 4; W32(esp, v); }
/* 76e2ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76e2c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76e2c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76e2c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 76e2cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76e2cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76e2cd: mov esi, ecx */
  esi = ecx;
/* 76e2cf: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 76e2d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76e2d2: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 76e2d5: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 76e2dc: call dword ptr [eax + 0x190] */
  { uint32_t t = R32((uint32_t)(eax + 0x190u)); esp -= 4; W32(esp, 0x76e2e2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76e2e2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76e2e4: je 0x76e36f */
  if (zf) goto L_76e36f;
L_76e2ea: /* 76e2ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76e2eb: call 0x90d4e0 */
  esp -= 4; W32(esp, 0x76e2f0u); SPILL(); f_90d4e0(); if (g_unwind) return; RELOAD();
/* 76e2f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76e2f2: je 0x76e36f */
  if (zf) goto L_76e36f;
L_76e2f4: /* 76e2f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76e2f5: call 0x90d500 */
  esp -= 4; W32(esp, 0x76e2fau); SPILL(); f_90d500(); if (g_unwind) return; RELOAD();
/* 76e2fa: mov edi, eax */
  edi = eax;
/* 76e2fc: test byte ptr [esi + 0x3e8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3e8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76e303: je 0x76e30d */
  if (zf) goto L_76e30d;
L_76e305: /* 76e305: fld dword ptr [esi + 0x3e4] */
  { double v = F32((uint32_t)(esi + 0x3e4u)); FPUSH(v); }
/* 76e30b: jmp 0x76e313 */
  goto L_76e313;
L_76e30d: /* 76e30d: fld dword ptr [esi + 0x3dc] */
  { double v = F32((uint32_t)(esi + 0x3dcu)); FPUSH(v); }
L_76e313: /* 76e313: cmp byte ptr [esi + 0x3c8], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3c8u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 76e31a: jne 0x76e35b */
  if (!zf) goto L_76e35b;
L_76e31c: /* 76e31c: mov ecx, dword ptr [esi + 0x3d8] */
  ecx = R32((uint32_t)(esi + 0x3d8u));
/* 76e322: fld dword ptr [0xa0729c] */
  { double v = F32((uint32_t)(0xa0729cu)); FPUSH(v); }
/* 76e328: fmul dword ptr [esi + 0x3d4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x3d4u)));
/* 76e32e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76e32f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 76e332: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 76e336: fld dword ptr [0xa0729c] */
  { double v = F32((uint32_t)(0xa0729cu)); FPUSH(v); }
/* 76e33c: fmul dword ptr [esi + 0x3e0] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x3e0u)));
/* 76e342: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 76e346: fld dword ptr [0xa0729c] */
  { double v = F32((uint32_t)(0xa0729cu)); FPUSH(v); }
/* 76e34c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 76e34e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 76e351: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76e352: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 76e354: call 0x90d230 */
  esp -= 4; W32(esp, 0x76e359u); SPILL(); f_90d230(); if (g_unwind) return; RELOAD();
/* 76e359: jmp 0x76e35d */
  goto L_76e35d;
L_76e35b: /* 76e35b: fstp st(0) */
  STI(0) = ST0; FPOP();
L_76e35d: /* 76e35d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76e35e: call 0x90c9f0 */
  esp -= 4; W32(esp, 0x76e363u); SPILL(); f_90c9f0(); if (g_unwind) return; RELOAD();
/* 76e363: fmul dword ptr [0xa07294] */
  ST0 = ST0 * (F32((uint32_t)(0xa07294u)));
/* 76e369: fstp dword ptr [esi + 0x3ec] */
  WF32((uint32_t)(esi + 0x3ecu), ST0); FPOP();
L_76e36f: /* 76e36f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 76e372: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76e373: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76e374: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76e37b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76e37c: mov esp, ebp */
  esp = ebp;
/* 76e37e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 76e37f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76e382(void) {
  LOAD_REGS();
L_76e382: /* 76e382: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 76e385: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 76e38a: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 76e38d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76e38e: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 76e391: call 0x99caf8 */
  esp -= 4; W32(esp, 0x76e396u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_76e396(); return;
}

void f_76e396(void) {
  LOAD_REGS();
L_76e396: /* 76e396: push 0xa072f8 */
  { uint32_t v = 0xa072f8u; esp -= 4; W32(esp, v); }
/* 76e39b: push 0xac441c */
  { uint32_t v = 0xac441cu; esp -= 4; W32(esp, v); }
/* 76e3a0: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x76e3a6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 76e3a6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76e3a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76e3ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76e3ad: call 0x99caf8 */
  esp -= 4; W32(esp, 0x76e3b2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_76e3b2: guest_badaddr(0x76e3b2); return;
}

void f_76e410(void) {
  LOAD_REGS();
L_76e410: /* 76e410: xor eax, eax */
  eax = 0;
/* 76e412: ret  */
  esp += 4; SPILL(); return;
}

void f_76e430(void) {
  LOAD_REGS();
L_76e430: /* 76e430: mov eax, dword ptr [ecx + 0x360] */
  eax = R32((uint32_t)(ecx + 0x360u));
/* 76e436: ret  */
  esp += 4; SPILL(); return;
}

void f_76e450(void) {
  LOAD_REGS();
L_76e450: /* 76e450: ret  */
  esp += 4; SPILL(); return;
}

void f_76e470(void) {
  LOAD_REGS();
L_76e470: /* 76e470: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76e471: mov ebp, esp */
  ebp = esp;
/* 76e473: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76e475: push 0x9cc1b0 */
  { uint32_t v = 0x9cc1b0u; esp -= 4; W32(esp, v); }
/* 76e47a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76e480: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76e481: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76e488: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 76e48b: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 76e490: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76e491: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76e492: mov esi, ecx */
  esi = ecx;
/* 76e494: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 76e497: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76e498: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 76e49b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 76e4a2: je 0x76e4ae */
  if (zf) goto L_76e4ae;
L_76e4a4: /* 76e4a4: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 76e4a6: mov ecx, esi */
  ecx = esi;
/* 76e4a8: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x76e4aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_76e4ae: /* 76e4ae: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 76e4b0: mov ecx, esi */
  ecx = esi;
/* 76e4b2: call dword ptr [eax + 0x194] */
  { uint32_t t = R32((uint32_t)(eax + 0x194u)); esp -= 4; W32(esp, 0x76e4b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76e4b8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 76e4bb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76e4bc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76e4bd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76e4c4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76e4c5: mov esp, ebp */
  esp = ebp;
/* 76e4c7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 76e4c8: ret  */
  esp += 4; SPILL(); return;
}

void f_76e4c9(void) {
  LOAD_REGS();
L_76e4c9: /* 76e4c9: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 76e4cc: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 76e4d1: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 76e4d4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76e4d5: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 76e4d8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x76e4ddu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_76e4dd(); return;
}

void f_76e4dd(void) {
  LOAD_REGS();
L_76e4dd: /* 76e4dd: push 0xa0732c */
  { uint32_t v = 0xa0732cu; esp -= 4; W32(esp, v); }
/* 76e4e2: push 0xac4424 */
  { uint32_t v = 0xac4424u; esp -= 4; W32(esp, v); }
/* 76e4e7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x76e4edu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 76e4ed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76e4f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76e4f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76e4f4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x76e4f9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_76e4f9: guest_badaddr(0x76e4f9); return;
}

void f_76e530(void) {
  LOAD_REGS();
L_76e530: /* 76e530: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76e531: mov ebp, esp */
  ebp = esp;
/* 76e533: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76e535: push 0x9cc1c0 */
  { uint32_t v = 0x9cc1c0u; esp -= 4; W32(esp, v); }
/* 76e53a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76e540: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76e541: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76e548: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 76e54b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76e54c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76e54d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76e54e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 76e551: mov esi, ecx */
  esi = ecx;
/* 76e553: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 76e55a: call 0x6c2441 */
  esp -= 4; W32(esp, 0x76e55fu); SPILL(); f_6c2441(); if (g_unwind) return; RELOAD();
/* 76e55f: mov eax, dword ptr [esi + 0x364] */
  eax = R32((uint32_t)(esi + 0x364u));
/* 76e565: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76e567: jne 0x76e587 */
  if (!zf) goto L_76e587;
L_76e569: /* 76e569: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 76e56f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76e571: jne 0x76e587 */
  if (!zf) goto L_76e587;
L_76e573: /* 76e573: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 76e578: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 76e57a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 76e57c: push 0xac4438 */
  { uint32_t v = 0xac4438u; esp -= 4; W32(esp, v); }
/* 76e581: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76e582: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76e584: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x76e587u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_76e587: /* 76e587: mov eax, dword ptr [esi + 0x364] */
  eax = R32((uint32_t)(esi + 0x364u));
/* 76e58d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76e58f: je 0x76e59b */
  if (zf) goto L_76e59b;
L_76e591: /* 76e591: mov ecx, dword ptr [eax + 0x30c] */
  ecx = R32((uint32_t)(eax + 0x30cu));
/* 76e597: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76e599: je 0x76e5af */
  if (zf) goto L_76e5af;
L_76e59b: /* 76e59b: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 76e5a1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76e5a3: je 0x76e5c3 */
  if (zf) goto L_76e5c3;
L_76e5a5: /* 76e5a5: mov ecx, dword ptr [eax + 0x30c] */
  ecx = R32((uint32_t)(eax + 0x30cu));
/* 76e5ab: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76e5ad: jne 0x76e5c3 */
  if (!zf) goto L_76e5c3;
L_76e5af: /* 76e5af: mov eax, dword ptr [0xcfa508] */
  eax = R32((uint32_t)(0xcfa508u));
/* 76e5b4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 76e5b6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 76e5b8: push 0xac4498 */
  { uint32_t v = 0xac4498u; esp -= 4; W32(esp, v); }
/* 76e5bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76e5be: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76e5c0: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x76e5c3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_76e5c3: /* 76e5c3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 76e5c6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76e5c7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76e5c8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76e5cf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76e5d0: mov esp, ebp */
  esp = ebp;
/* 76e5d2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 76e5d3: ret  */
  esp += 4; SPILL(); return;
}

void f_76e5d4(void) {
  LOAD_REGS();
L_76e5d4: /* 76e5d4: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 76e5d7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 76e5dc: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 76e5df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76e5e0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 76e5e3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x76e5e8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_76e5e8(); return;
}

void f_76e5e8(void) {
  LOAD_REGS();
L_76e5e8: /* 76e5e8: push 0xa07374 */
  { uint32_t v = 0xa07374u; esp -= 4; W32(esp, v); }
/* 76e5ed: push 0xac44f4 */
  { uint32_t v = 0xac44f4u; esp -= 4; W32(esp, v); }
/* 76e5f2: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x76e5f8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 76e5f8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76e5fb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76e5fd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76e5ff: call 0x99caf8 */
  esp -= 4; W32(esp, 0x76e604u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_76e604: guest_badaddr(0x76e604); return;
}

void f_76e650(void) {
  LOAD_REGS();
L_76e650: /* 76e650: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76e651: mov ebp, esp */
  ebp = esp;
/* 76e653: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76e655: push 0x9cc1d0 */
  { uint32_t v = 0x9cc1d0u; esp -= 4; W32(esp, v); }
/* 76e65a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76e660: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76e661: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76e668: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 76e66b: mov eax, dword ptr [0xcfa514] */
  eax = R32((uint32_t)(0xcfa514u));
/* 76e670: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76e671: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 76e677: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76e678: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 76e67b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 76e67e: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 76e681: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 76e682: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76e683: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 76e686: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 76e689: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 76e68c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76e68d: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 76e692: mov edi, ecx */
  edi = ecx;
/* 76e694: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 76e697: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76e698: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 76e69f: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x76e6a2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76e6a2: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 76e6a8: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 76e6aa: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76e6ac: je 0x76e6bb */
  if (zf) goto L_76e6bb;
L_76e6ae: /* 76e6ae: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 76e6b3: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 76e6b5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 76e6b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76e6b8: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x76e6bbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_76e6bb: /* 76e6bb: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 76e6c1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 76e6c3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76e6c5: mov ebx, eax */
  ebx = eax;
/* 76e6c7: jne 0x76e6cc */
  if (!zf) goto L_76e6cc;
L_76e6c9: /* 76e6c9: lea ebx, [ebp - 0x24] */
  ebx = (uint32_t)(ebp + 0xffffffdcu);
L_76e6cc: /* 76e6cc: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 76e6cf: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 76e6d0: mov eax, edx */
  eax = edx;
/* 76e6d2: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 76e6d5: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 76e6d8: jne 0x76e6f0 */
  if (!zf) goto L_76e6f0;
L_76e6da: /* 76e6da: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 76e6dd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 76e6de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76e6e0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 76e6e3: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 76e6e9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76e6ea: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x76e6f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_76e6f0: /* 76e6f0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 76e6f2: mov ecx, edi */
  ecx = edi;
/* 76e6f4: call dword ptr [eax + 0x190] */
  { uint32_t t = R32((uint32_t)(eax + 0x190u)); esp -= 4; W32(esp, 0x76e6fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76e6fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76e6fc: je 0x76e717 */
  if (zf) goto L_76e717;
L_76e6fe: /* 76e6fe: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 76e701: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76e702: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76e704: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76e705: call 0x90bdc0 */
  esp -= 4; W32(esp, 0x76e70au); SPILL(); f_90bdc0(); if (g_unwind) return; RELOAD();
/* 76e70a: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 76e70d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76e70e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76e70f: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x76e714u); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 76e714: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76e717: /* 76e717: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 76e71a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76e71b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76e71c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76e723: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76e724: mov esp, ebp */
  esp = ebp;
/* 76e726: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 76e727: ret 8 */
  esp += 12; SPILL(); return;
}

void f_76e72a(void) {
  LOAD_REGS();
L_76e72a: /* 76e72a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 76e72d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 76e732: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 76e735: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76e736: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 76e739: call 0x99caf8 */
  esp -= 4; W32(esp, 0x76e73eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_76e73e(); return;
}

void f_76e73e(void) {
  LOAD_REGS();
L_76e73e: /* 76e73e: push 0xa073c0 */
  { uint32_t v = 0xa073c0u; esp -= 4; W32(esp, v); }
/* 76e743: push 0xac44fc */
  { uint32_t v = 0xac44fcu; esp -= 4; W32(esp, v); }
/* 76e748: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x76e74eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 76e74e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76e751: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76e753: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76e755: call 0x99caf8 */
  esp -= 4; W32(esp, 0x76e75au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_76e75a: guest_badaddr(0x76e75a); return;
}

void f_76e7b0(void) {
  LOAD_REGS();
L_76e7b0: /* 76e7b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76e7b1: mov ebp, esp */
  ebp = esp;
/* 76e7b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76e7b5: push 0x9cc1e0 */
  { uint32_t v = 0x9cc1e0u; esp -= 4; W32(esp, v); }
/* 76e7ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76e7c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76e7c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76e7c8: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 76e7cb: mov eax, dword ptr [0xcfa514] */
  eax = R32((uint32_t)(0xcfa514u));
/* 76e7d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76e7d1: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 76e7d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76e7d8: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 76e7db: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 76e7de: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 76e7e1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 76e7e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76e7e3: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 76e7e6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 76e7e9: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 76e7ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76e7ed: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 76e7f2: mov edi, ecx */
  edi = ecx;
/* 76e7f4: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 76e7f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76e7f8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 76e7ff: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x76e802u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76e802: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 76e808: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 76e80a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76e80c: je 0x76e81b */
  if (zf) goto L_76e81b;
L_76e80e: /* 76e80e: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 76e813: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 76e815: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 76e817: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76e818: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x76e81bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_76e81b: /* 76e81b: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 76e821: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 76e823: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76e825: mov ebx, eax */
  ebx = eax;
/* 76e827: jne 0x76e82c */
  if (!zf) goto L_76e82c;
L_76e829: /* 76e829: lea ebx, [ebp - 0x24] */
  ebx = (uint32_t)(ebp + 0xffffffdcu);
L_76e82c: /* 76e82c: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 76e82f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 76e830: mov eax, edx */
  eax = edx;
/* 76e832: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 76e835: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 76e838: jne 0x76e850 */
  if (!zf) goto L_76e850;
L_76e83a: /* 76e83a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 76e83d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 76e83e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76e840: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 76e843: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 76e849: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76e84a: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x76e850u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_76e850: /* 76e850: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 76e852: mov ecx, edi */
  ecx = edi;
/* 76e854: call dword ptr [eax + 0x190] */
  { uint32_t t = R32((uint32_t)(eax + 0x190u)); esp -= 4; W32(esp, 0x76e85au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76e85a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76e85c: je 0x76e877 */
  if (zf) goto L_76e877;
L_76e85e: /* 76e85e: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 76e861: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76e862: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76e864: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76e865: call 0x90be00 */
  esp -= 4; W32(esp, 0x76e86au); SPILL(); f_90be00(); if (g_unwind) return; RELOAD();
/* 76e86a: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 76e86d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76e86e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76e86f: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x76e874u); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 76e874: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76e877: /* 76e877: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 76e87a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76e87b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76e87c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76e883: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76e884: mov esp, ebp */
  esp = ebp;
/* 76e886: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 76e887: ret 8 */
  esp += 12; SPILL(); return;
}

void f_76e88a(void) {
  LOAD_REGS();
L_76e88a: /* 76e88a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 76e88d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 76e892: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 76e895: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76e896: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 76e899: call 0x99caf8 */
  esp -= 4; W32(esp, 0x76e89eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_76e89e(); return;
}

void f_76e89e(void) {
  LOAD_REGS();
L_76e89e: /* 76e89e: push 0xa07420 */
  { uint32_t v = 0xa07420u; esp -= 4; W32(esp, v); }
/* 76e8a3: push 0xac4504 */
  { uint32_t v = 0xac4504u; esp -= 4; W32(esp, v); }
/* 76e8a8: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x76e8aeu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 76e8ae: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76e8b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76e8b3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76e8b5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x76e8bau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_76e8ba: guest_badaddr(0x76e8ba); return;
}

void f_76e910(void) {
  LOAD_REGS();
L_76e910: /* 76e910: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76e911: mov ebp, esp */
  ebp = esp;
/* 76e913: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76e915: push 0x9cc1f0 */
  { uint32_t v = 0x9cc1f0u; esp -= 4; W32(esp, v); }
/* 76e91a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76e920: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76e921: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76e928: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 76e92b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 76e92e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 76e931: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76e932: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 76e933: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76e934: mov esi, ecx */
  esi = ecx;
/* 76e936: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 76e939: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 76e93c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76e93d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 76e940: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 76e947: jne 0x76e95e */
  if (!zf) goto L_76e95e;
L_76e949: /* 76e949: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 76e94c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 76e94d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76e94f: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 76e952: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76e953: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 76e958: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x76e95eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_76e95e: /* 76e95e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 76e960: mov ecx, esi */
  ecx = esi;
/* 76e962: call dword ptr [edx + 0x194] */
  { uint32_t t = R32((uint32_t)(edx + 0x194u)); esp -= 4; W32(esp, 0x76e968u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76e968: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 76e96b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76e96c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76e96d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76e974: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76e975: mov esp, ebp */
  esp = ebp;
/* 76e977: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 76e978: ret 8 */
  esp += 12; SPILL(); return;
}

void f_76e97b(void) {
  LOAD_REGS();
L_76e97b: /* 76e97b: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 76e97e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 76e983: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 76e986: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76e987: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 76e98a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x76e98fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_76e98f(); return;
}

void f_76e98f(void) {
  LOAD_REGS();
L_76e98f: /* 76e98f: push 0xa07480 */
  { uint32_t v = 0xa07480u; esp -= 4; W32(esp, v); }
/* 76e994: push 0xac450c */
  { uint32_t v = 0xac450cu; esp -= 4; W32(esp, v); }
/* 76e999: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x76e99fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 76e99f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76e9a2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76e9a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76e9a6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x76e9abu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_76e9ab: guest_badaddr(0x76e9ab); return;
}

void f_76e9e0(void) {
  LOAD_REGS();
L_76e9e0: /* 76e9e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76e9e1: mov ebp, esp */
  ebp = esp;
/* 76e9e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76e9e5: push 0x9cc200 */
  { uint32_t v = 0x9cc200u; esp -= 4; W32(esp, v); }
/* 76e9ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76e9f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76e9f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76e9f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 76e9fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76e9fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76e9fd: mov esi, ecx */
  esi = ecx;
/* 76e9ff: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 76ea05: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76ea08: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76ea09: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 76ea0c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 76ea13: jne 0x76ea63 */
  if (!zf) goto L_76ea63;
L_76ea15: /* 76ea15: mov eax, dword ptr [esi + 0x360] */
  eax = R32((uint32_t)(esi + 0x360u));
/* 76ea1b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76ea1d: je 0x76ea63 */
  if (zf) goto L_76ea63;
L_76ea1f: /* 76ea1f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 76ea21: call dword ptr [eax + 0x190] */
  { uint32_t t = R32((uint32_t)(eax + 0x190u)); esp -= 4; W32(esp, 0x76ea27u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76ea27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76ea28: call 0x90d640 */
  esp -= 4; W32(esp, 0x76ea2du); SPILL(); f_90d640(); if (g_unwind) return; RELOAD();
/* 76ea2d: mov edi, eax */
  edi = eax;
/* 76ea2f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76ea31: je 0x76ea63 */
  if (zf) goto L_76ea63;
L_76ea33: /* 76ea33: fld dword ptr [0xa0729c] */
  { double v = F32((uint32_t)(0xa0729cu)); FPUSH(v); }
/* 76ea39: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76ea3a: fmul dword ptr [esi + 0x3c8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x3c8u)));
/* 76ea40: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 76ea43: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76ea44: call 0x90d660 */
  esp -= 4; W32(esp, 0x76ea49u); SPILL(); f_90d660(); if (g_unwind) return; RELOAD();
/* 76ea49: mov ecx, dword ptr [esi + 0x3cc] */
  ecx = R32((uint32_t)(esi + 0x3ccu));
/* 76ea4f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76ea50: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76ea51: call 0x90d690 */
  esp -= 4; W32(esp, 0x76ea56u); SPILL(); f_90d690(); if (g_unwind) return; RELOAD();
/* 76ea56: mov edx, dword ptr [esi + 0x3d0] */
  edx = R32((uint32_t)(esi + 0x3d0u));
/* 76ea5c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76ea5d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76ea5e: call 0x90d6c0 */
  esp -= 4; W32(esp, 0x76ea63u); SPILL(); f_90d6c0(); if (g_unwind) return; RELOAD();
L_76ea63: /* 76ea63: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 76ea66: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76ea67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76ea68: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76ea6f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76ea70: mov esp, ebp */
  esp = ebp;
/* 76ea72: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 76ea73: ret  */
  esp += 4; SPILL(); return;
}

void f_76ea74(void) {
  LOAD_REGS();
L_76ea74: /* 76ea74: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 76ea77: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 76ea7c: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 76ea7f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76ea80: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 76ea83: call 0x99caf8 */
  esp -= 4; W32(esp, 0x76ea88u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_76ea88(); return;
}

void f_76ea88(void) {
  LOAD_REGS();
L_76ea88: /* 76ea88: push 0xa074e0 */
  { uint32_t v = 0xa074e0u; esp -= 4; W32(esp, v); }
/* 76ea8d: push 0xac4514 */
  { uint32_t v = 0xac4514u; esp -= 4; W32(esp, v); }
/* 76ea92: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x76ea98u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 76ea98: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76ea9b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76ea9d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76ea9f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x76eaa4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_76eaa4: guest_badaddr(0x76eaa4); return;
}

void f_76eaf0(void) {
  LOAD_REGS();
L_76eaf0: /* 76eaf0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76eaf1: mov ebp, esp */
  ebp = esp;
/* 76eaf3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76eaf5: push 0x9cc210 */
  { uint32_t v = 0x9cc210u; esp -= 4; W32(esp, v); }
/* 76eafa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76eb00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76eb01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76eb08: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 76eb0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76eb0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76eb0d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76eb0e: mov edi, ecx */
  edi = ecx;
/* 76eb10: mov eax, dword ptr [edi + 0x360] */
  eax = R32((uint32_t)(edi + 0x360u));
/* 76eb16: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76eb18: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 76eb1b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 76eb22: je 0x76ebf7 */
  if (zf) goto L_76ebf7;
L_76eb28: /* 76eb28: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 76eb2a: call dword ptr [eax + 0x190] */
  { uint32_t t = R32((uint32_t)(eax + 0x190u)); esp -= 4; W32(esp, 0x76eb30u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76eb30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76eb31: call 0x90d4e0 */
  esp -= 4; W32(esp, 0x76eb36u); SPILL(); f_90d4e0(); if (g_unwind) return; RELOAD();
/* 76eb36: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76eb38: je 0x76ebf7 */
  if (zf) goto L_76ebf7;
L_76eb3e: /* 76eb3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76eb3f: call 0x90d500 */
  esp -= 4; W32(esp, 0x76eb44u); SPILL(); f_90d500(); if (g_unwind) return; RELOAD();
/* 76eb44: mov esi, eax */
  esi = eax;
/* 76eb46: test byte ptr [edi + 0x3e8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x3e8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76eb4d: je 0x76eb5a */
  if (zf) goto L_76eb5a;
L_76eb4f: /* 76eb4f: mov ecx, dword ptr [edi + 0x3e4] */
  ecx = R32((uint32_t)(edi + 0x3e4u));
/* 76eb55: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 76eb58: jmp 0x76eb63 */
  goto L_76eb63;
L_76eb5a: /* 76eb5a: mov edx, dword ptr [edi + 0x3dc] */
  edx = R32((uint32_t)(edi + 0x3dcu));
/* 76eb60: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
L_76eb63: /* 76eb63: fld dword ptr [0xa0729c] */
  { double v = F32((uint32_t)(0xa0729cu)); FPUSH(v); }
/* 76eb69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76eb6a: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 76eb6d: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 76eb70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76eb71: call 0x90c9d0 */
  esp -= 4; W32(esp, 0x76eb76u); SPILL(); f_90c9d0(); if (g_unwind) return; RELOAD();
/* 76eb76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76eb77: call 0x90c890 */
  esp -= 4; W32(esp, 0x76eb7cu); SPILL(); f_90c890(); if (g_unwind) return; RELOAD();
/* 76eb7c: mov eax, dword ptr [edi + 0x3cc] */
  eax = R32((uint32_t)(edi + 0x3ccu));
/* 76eb82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76eb83: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76eb84: call 0x90c9d0 */
  esp -= 4; W32(esp, 0x76eb89u); SPILL(); f_90c9d0(); if (g_unwind) return; RELOAD();
/* 76eb89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76eb8a: call 0x90c8a0 */
  esp -= 4; W32(esp, 0x76eb8fu); SPILL(); f_90c8a0(); if (g_unwind) return; RELOAD();
/* 76eb8f: mov ecx, dword ptr [edi + 0x3d0] */
  ecx = R32((uint32_t)(edi + 0x3d0u));
/* 76eb95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76eb96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76eb97: call 0x90c9d0 */
  esp -= 4; W32(esp, 0x76eb9cu); SPILL(); f_90c9d0(); if (g_unwind) return; RELOAD();
/* 76eb9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76eb9d: call 0x90c8d0 */
  esp -= 4; W32(esp, 0x76eba2u); SPILL(); f_90c8d0(); if (g_unwind) return; RELOAD();
/* 76eba2: fld dword ptr [0xa0729c] */
  { double v = F32((uint32_t)(0xa0729cu)); FPUSH(v); }
/* 76eba8: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 76ebab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76ebac: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 76ebaf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76ebb0: call 0x90c9e0 */
  esp -= 4; W32(esp, 0x76ebb5u); SPILL(); f_90c9e0(); if (g_unwind) return; RELOAD();
/* 76ebb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76ebb6: call 0x90c890 */
  esp -= 4; W32(esp, 0x76ebbbu); SPILL(); f_90c890(); if (g_unwind) return; RELOAD();
/* 76ebbb: mov edx, dword ptr [edi + 0x3cc] */
  edx = R32((uint32_t)(edi + 0x3ccu));
/* 76ebc1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76ebc2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76ebc3: call 0x90c9e0 */
  esp -= 4; W32(esp, 0x76ebc8u); SPILL(); f_90c9e0(); if (g_unwind) return; RELOAD();
/* 76ebc8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76ebc9: call 0x90c8a0 */
  esp -= 4; W32(esp, 0x76ebceu); SPILL(); f_90c8a0(); if (g_unwind) return; RELOAD();
/* 76ebce: mov eax, dword ptr [edi + 0x3d0] */
  eax = R32((uint32_t)(edi + 0x3d0u));
/* 76ebd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76ebd5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76ebd6: call 0x90c9e0 */
  esp -= 4; W32(esp, 0x76ebdbu); SPILL(); f_90c9e0(); if (g_unwind) return; RELOAD();
/* 76ebdb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76ebdc: call 0x90c8d0 */
  esp -= 4; W32(esp, 0x76ebe1u); SPILL(); f_90c8d0(); if (g_unwind) return; RELOAD();
/* 76ebe1: mov al, byte ptr [edi + 0x3c8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x3c8u))) & 0xffu);
/* 76ebe7: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76ebe9: je 0x76ec46 */
  if (zf) goto L_76ec46;
L_76ebeb: /* 76ebeb: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 76ebed: jne 0x76ec08 */
  if (!zf) goto L_76ec08;
L_76ebef: /* 76ebef: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
L_76ebf1: /* 76ebf1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76ebf2: call 0x90cb80 */
  esp -= 4; W32(esp, 0x76ebf7u); SPILL(); f_90cb80(); if (g_unwind) return; RELOAD();
L_76ebf7: /* 76ebf7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 76ebfa: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76ec01: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76ec02: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76ec03: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76ec04: mov esp, ebp */
  esp = ebp;
/* 76ec06: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 76ec07: ret  */
  esp += 4; SPILL(); return;
L_76ec08: /* 76ec08: cmp al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 76ec0a: jne 0x76ec42 */
  if (!zf) goto L_76ec42;
L_76ec0c: /* 76ec0c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76ec0e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76ec0f: call 0x90cb80 */
  esp -= 4; W32(esp, 0x76ec14u); SPILL(); f_90cb80(); if (g_unwind) return; RELOAD();
/* 76ec14: fld dword ptr [0xa0729c] */
  { double v = F32((uint32_t)(0xa0729cu)); FPUSH(v); }
/* 76ec1a: mov ecx, dword ptr [edi + 0x3d8] */
  ecx = R32((uint32_t)(edi + 0x3d8u));
/* 76ec20: fmul dword ptr [edi + 0x3d4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x3d4u)));
/* 76ec26: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76ec27: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76ec28: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 76ec2b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76ec2c: call 0x90cc60 */
  esp -= 4; W32(esp, 0x76ec31u); SPILL(); f_90cc60(); if (g_unwind) return; RELOAD();
/* 76ec31: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 76ec34: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76ec35: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76ec36: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76ec3d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76ec3e: mov esp, ebp */
  esp = ebp;
/* 76ec40: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 76ec41: ret  */
  esp += 4; SPILL(); return;
L_76ec42: /* 76ec42: cmp al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 76ec44: jne 0x76ebf7 */
  if (!zf) goto L_76ebf7;
L_76ec46: /* 76ec46: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76ec48: jmp 0x76ebf1 */
  goto L_76ebf1;
}

void f_76ec4a(void) {
  LOAD_REGS();
L_76ec4a: /* 76ec4a: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 76ec4d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 76ec52: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 76ec55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76ec56: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 76ec59: call 0x99caf8 */
  esp -= 4; W32(esp, 0x76ec5eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_76ec5e(); return;
}

void f_76ec5e(void) {
  LOAD_REGS();
L_76ec5e: /* 76ec5e: push 0xa0752c */
  { uint32_t v = 0xa0752cu; esp -= 4; W32(esp, v); }
/* 76ec63: push 0xac451c */
  { uint32_t v = 0xac451cu; esp -= 4; W32(esp, v); }
/* 76ec68: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x76ec6eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 76ec6e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76ec71: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76ec73: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76ec75: call 0x99caf8 */
  esp -= 4; W32(esp, 0x76ec7au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_76ec7a: guest_badaddr(0x76ec7a); return;
}

void f_76ecf0(void) {
  LOAD_REGS();
L_76ecf0: /* 76ecf0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76ecf1: mov ebp, esp */
  ebp = esp;
/* 76ecf3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76ecf5: push 0x9cc220 */
  { uint32_t v = 0x9cc220u; esp -= 4; W32(esp, v); }
/* 76ecfa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76ed00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76ed01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76ed08: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 76ed0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76ed0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76ed0d: mov esi, ecx */
  esi = ecx;
/* 76ed0f: mov eax, dword ptr [esi + 0x360] */
  eax = R32((uint32_t)(esi + 0x360u));
/* 76ed15: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76ed17: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76ed18: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 76ed1b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 76ed22: je 0x76ed78 */
  if (zf) goto L_76ed78;
L_76ed24: /* 76ed24: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 76ed26: call dword ptr [eax + 0x190] */
  { uint32_t t = R32((uint32_t)(eax + 0x190u)); esp -= 4; W32(esp, 0x76ed2cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76ed2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76ed2d: call 0x90d820 */
  esp -= 4; W32(esp, 0x76ed32u); SPILL(); f_90d820(); if (g_unwind) return; RELOAD();
/* 76ed32: mov edi, eax */
  edi = eax;
/* 76ed34: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76ed36: je 0x76ed78 */
  if (zf) goto L_76ed78;
L_76ed38: /* 76ed38: test byte ptr [esi + 0x3d8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3d8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76ed3f: je 0x76ed45 */
  if (zf) goto L_76ed45;
L_76ed41: /* 76ed41: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 76ed43: jmp 0x76ed47 */
  goto L_76ed47;
L_76ed45: /* 76ed45: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
L_76ed47: /* 76ed47: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76ed48: call 0x90dca0 */
  esp -= 4; W32(esp, 0x76ed4du); SPILL(); f_90dca0(); if (g_unwind) return; RELOAD();
/* 76ed4d: mov ecx, dword ptr [esi + 0x3f8] */
  ecx = R32((uint32_t)(esi + 0x3f8u));
/* 76ed53: mov edx, dword ptr [esi + 0x3ec] */
  edx = R32((uint32_t)(esi + 0x3ecu));
/* 76ed59: mov eax, dword ptr [esi + 0x3e8] */
  eax = R32((uint32_t)(esi + 0x3e8u));
/* 76ed5f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76ed60: mov ecx, dword ptr [esi + 0x3f4] */
  ecx = R32((uint32_t)(esi + 0x3f4u));
/* 76ed66: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76ed67: mov edx, dword ptr [esi + 0x3f0] */
  edx = R32((uint32_t)(esi + 0x3f0u));
/* 76ed6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76ed6e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76ed70: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76ed71: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76ed72: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76ed73: call 0x90dce0 */
  esp -= 4; W32(esp, 0x76ed78u); SPILL(); f_90dce0(); if (g_unwind) return; RELOAD();
L_76ed78: /* 76ed78: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 76ed7b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76ed7c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76ed7d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76ed84: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76ed85: mov esp, ebp */
  esp = ebp;
/* 76ed87: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 76ed88: ret  */
  esp += 4; SPILL(); return;
}

void f_76ed89(void) {
  LOAD_REGS();
L_76ed89: /* 76ed89: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 76ed8c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 76ed91: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 76ed94: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76ed95: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 76ed98: call 0x99caf8 */
  esp -= 4; W32(esp, 0x76ed9du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_76ed9d(); return;
}

void f_76ed9d(void) {
  LOAD_REGS();
L_76ed9d: /* 76ed9d: push 0xa07578 */
  { uint32_t v = 0xa07578u; esp -= 4; W32(esp, v); }
/* 76eda2: push 0xac4524 */
  { uint32_t v = 0xac4524u; esp -= 4; W32(esp, v); }
/* 76eda7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x76edadu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 76edad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76edb0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76edb2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76edb4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x76edb9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_76edb9: guest_badaddr(0x76edb9); return;
}

void f_76ee00(void) {
  LOAD_REGS();
L_76ee00: /* 76ee00: mov eax, ecx */
  eax = ecx;
/* 76ee02: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 76ee06: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 76ee08: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76ee20(void) {
  LOAD_REGS();
L_76ee20: /* 76ee20: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 76ee24: imul ecx, dword ptr [esp + 0xc] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0xcu)));
  ecx = (uint32_t)r;
  }
/* 76ee29: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 76ee2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76ee2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76ee2f: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 76ee33: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x76ee39u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 76ee39: ret  */
  esp += 4; SPILL(); return;
}

void f_76ee50(void) {
  LOAD_REGS();
L_76ee50: /* 76ee50: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 76ee54: fsqrt  */
  ST0 = sqrt(ST0);
/* 76ee56: ret  */
  esp += 4; SPILL(); return;
}

void f_76ee70(void) {
  LOAD_REGS();
L_76ee70: /* 76ee70: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 76ee72: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 76ee74: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 76ee76: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 76ee79: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 76ee7c: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 76ee7f: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 76ee82: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 76ee85: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 76ee88: ret  */
  esp += 4; SPILL(); return;
}

void f_76eea0(void) {
  LOAD_REGS();
L_76eea0: /* 76eea0: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 76eea3: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 76eea6: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 76eea9: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 76eeac: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76eeae: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 76eeb0: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 76eeb2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76eeb4: ret  */
  esp += 4; SPILL(); return;
}

void f_76eed0(void) {
  LOAD_REGS();
L_76eed0: /* 76eed0: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 76eed3: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 76eed5: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 76eed8: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 76eeda: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 76eedc: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 76eede: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 76eee0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76eee2: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 76eee4: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 76eee6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76eee8: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 76eeea: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 76eeec: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 76eeee: ret  */
  esp += 4; SPILL(); return;
}

void f_76ef00(void) {
  LOAD_REGS();
L_76ef00: /* 76ef00: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 76ef03: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 76ef05: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 76ef08: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 76ef0a: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 76ef0c: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 76ef0e: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 76ef10: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76ef12: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 76ef14: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 76ef16: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76ef18: fsqrt  */
  ST0 = sqrt(ST0);
/* 76ef1a: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 76ef1c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 76ef1e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 76ef20: ret  */
  esp += 4; SPILL(); return;
}

void f_76ef40(void) {
  LOAD_REGS();
L_76ef40: /* 76ef40: xor ecx, ecx */
  ecx = 0;
/* 76ef42: mov edx, 0x3f800000 */
  edx = 0x3f800000u;
/* 76ef47: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 76ef49: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 76ef4c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 76ef4f: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 76ef52: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 76ef55: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 76ef58: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 76ef5b: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 76ef5e: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 76ef61: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* 76ef64: mov dword ptr [eax + 0x28], edx */
  W32((uint32_t)(eax + 0x28u), edx);
/* 76ef67: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 76ef6a: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* 76ef6d: mov dword ptr [eax + 0x34], ecx */
  W32((uint32_t)(eax + 0x34u), ecx);
/* 76ef70: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* 76ef73: mov dword ptr [eax + 0x3c], edx */
  W32((uint32_t)(eax + 0x3cu), edx);
/* 76ef76: ret  */
  esp += 4; SPILL(); return;
}

void f_76ef90(void) {
  LOAD_REGS();
L_76ef90: /* 76ef90: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 76ef92: fsub dword ptr [eax + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x30u)));
/* 76ef95: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 76ef98: fsub dword ptr [eax + 0x34] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x34u)));
/* 76ef9b: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 76ef9e: fsub dword ptr [eax + 0x38] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x38u)));
/* 76efa1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 76efa3: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 76efa6: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 76efa8: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 76efab: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76efad: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 76efaf: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 76efb1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76efb3: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 76efb5: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 76efb7: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 76efba: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 76efbc: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 76efbf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76efc1: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 76efc3: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 76efc6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76efc8: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 76efcb: fmul dword ptr [eax + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x28u)));
/* 76efce: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 76efd0: fmul dword ptr [eax + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x24u)));
/* 76efd3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76efd5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 76efd7: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 76efda: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76efdc: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 76efdf: ret  */
  esp += 4; SPILL(); return;
}

void f_76f000(void) {
  LOAD_REGS();
L_76f000: /* 76f000: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 76f003: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 76f006: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 76f009: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 76f00c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76f00e: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 76f010: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 76f012: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76f014: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 76f016: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 76f019: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 76f01c: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 76f01f: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 76f021: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76f023: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 76f026: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 76f029: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76f02b: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 76f02e: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 76f031: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 76f034: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 76f037: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 76f039: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76f03b: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 76f03e: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 76f041: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76f043: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 76f046: ret  */
  esp += 4; SPILL(); return;
}

void f_76f070(void) {
  LOAD_REGS();
L_76f070: /* 76f070: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 76f074: mov eax, ecx */
  eax = ecx;
/* 76f076: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 76f07a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 76f07c: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 76f07f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_76f0a0(void) {
  LOAD_REGS();
L_76f0a0: /* 76f0a0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 76f0a4: mov eax, ecx */
  eax = ecx;
/* 76f0a6: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 76f0aa: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 76f0ac: xor ecx, ecx */
  ecx = 0;
/* 76f0ae: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 76f0b1: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 76f0b4: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 76f0b7: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 76f0ba: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 76f0bd: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 76f0c0: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 76f0c3: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 76f0c6: mov dword ptr [eax + 0x24], edx */
  W32((uint32_t)(eax + 0x24u), edx);
/* 76f0c9: mov dword ptr [eax + 0x28], 0xffffffff */
  W32((uint32_t)(eax + 0x28u), 0xffffffffu);
/* 76f0d0: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 76f0d3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_76f0f0(void) {
  LOAD_REGS();
L_76f0f0: /* 76f0f0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 76f0f4: mov eax, ecx */
  eax = ecx;
/* 76f0f6: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 76f0fa: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 76f0fc: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 76f0ff: ret 8 */
  esp += 12; SPILL(); return;
}

void f_76f120(void) {
  LOAD_REGS();
L_76f120: /* 76f120: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76f121: mov ebp, esp */
  ebp = esp;
/* 76f123: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76f125: push 0x9cc230 */
  { uint32_t v = 0x9cc230u; esp -= 4; W32(esp, v); }
/* 76f12a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76f130: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76f131: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76f138: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 76f13b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76f13c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76f13d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76f13e: mov edi, ecx */
  edi = ecx;
/* 76f140: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 76f142: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 76f145: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 76f14c: call dword ptr [eax + 0x190] */
  { uint32_t t = R32((uint32_t)(eax + 0x190u)); esp -= 4; W32(esp, 0x76f152u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76f152: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76f154: je 0x76f37a */
  if (zf) goto L_76f37a;
L_76f15a: /* 76f15a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76f15b: call 0x90d820 */
  esp -= 4; W32(esp, 0x76f160u); SPILL(); f_90d820(); if (g_unwind) return; RELOAD();
/* 76f160: mov esi, eax */
  esi = eax;
/* 76f162: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76f164: je 0x76f37a */
  if (zf) goto L_76f37a;
L_76f16a: /* 76f16a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76f16c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76f16d: call 0x90d810 */
  esp -= 4; W32(esp, 0x76f172u); SPILL(); f_90d810(); if (g_unwind) return; RELOAD();
/* 76f172: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76f173: call 0x90bda0 */
  esp -= 4; W32(esp, 0x76f178u); SPILL(); f_90bda0(); if (g_unwind) return; RELOAD();
/* 76f178: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 76f17a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76f17b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 76f17e: call 0x90d810 */
  esp -= 4; W32(esp, 0x76f183u); SPILL(); f_90d810(); if (g_unwind) return; RELOAD();
/* 76f183: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76f184: call 0x90bda0 */
  esp -= 4; W32(esp, 0x76f189u); SPILL(); f_90bda0(); if (g_unwind) return; RELOAD();
/* 76f189: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 76f18c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76f18d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76f18e: mov ebx, eax */
  ebx = eax;
/* 76f190: call 0x90da60 */
  esp -= 4; W32(esp, 0x76f195u); SPILL(); f_90da60(); if (g_unwind) return; RELOAD();
/* 76f195: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 76f198: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76f199: call 0x90f170 */
  esp -= 4; W32(esp, 0x76f19eu); SPILL(); f_90f170(); if (g_unwind) return; RELOAD();
/* 76f19e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76f1a0: jne 0x76f1b0 */
  if (!zf) goto L_76f1b0;
L_76f1a2: /* 76f1a2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76f1a3: call 0x90f170 */
  esp -= 4; W32(esp, 0x76f1a8u); SPILL(); f_90f170(); if (g_unwind) return; RELOAD();
/* 76f1a8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76f1aa: je 0x76f37a */
  if (zf) goto L_76f37a;
L_76f1b0: /* 76f1b0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 76f1b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76f1b4: call 0x90f170 */
  esp -= 4; W32(esp, 0x76f1b9u); SPILL(); f_90f170(); if (g_unwind) return; RELOAD();
/* 76f1b9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76f1bb: jne 0x76f1c6 */
  if (!zf) goto L_76f1c6;
L_76f1bd: /* 76f1bd: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 76f1c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76f1c1: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x76f1c6u); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
L_76f1c6: /* 76f1c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76f1c7: call 0x90f170 */
  esp -= 4; W32(esp, 0x76f1ccu); SPILL(); f_90f170(); if (g_unwind) return; RELOAD();
/* 76f1cc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76f1ce: jne 0x76f1d6 */
  if (!zf) goto L_76f1d6;
L_76f1d0: /* 76f1d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76f1d1: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x76f1d6u); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
L_76f1d6: /* 76f1d6: fld dword ptr [edi + 0x3e4] */
  { double v = F32((uint32_t)(edi + 0x3e4u)); FPUSH(v); }
/* 76f1dc: fcomp qword ptr [0xa07620] */
  fpu_com(ST0, F64((uint32_t)(0xa07620u)));
  FPOP();
/* 76f1e2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 76f1e4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76f1e7: jne 0x76f1f2 */
  if (!zf) goto L_76f1f2;
L_76f1e9: /* 76f1e9: mov edx, dword ptr [edi + 0x3e4] */
  edx = R32((uint32_t)(edi + 0x3e4u));
/* 76f1ef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76f1f0: jmp 0x76f255 */
  goto L_76f255;
L_76f1f2: /* 76f1f2: fld dword ptr [edi + 0x3dc] */
  { double v = F32((uint32_t)(edi + 0x3dcu)); FPUSH(v); }
/* 76f1f8: fcomp qword ptr [0xa07620] */
  fpu_com(ST0, F64((uint32_t)(0xa07620u)));
  FPOP();
/* 76f1fe: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 76f200: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76f203: jne 0x76f21e */
  if (!zf) goto L_76f21e;
L_76f205: /* 76f205: mov eax, dword ptr [edi + 0x3dc] */
  eax = R32((uint32_t)(edi + 0x3dcu));
/* 76f20b: fld dword ptr [0xa0729c] */
  { double v = F32((uint32_t)(0xa0729cu)); FPUSH(v); }
/* 76f211: fmul dword ptr [edi + 0x3e0] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x3e0u)));
/* 76f217: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76f218: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76f219: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 76f21c: jmp 0x76f257 */
  goto L_76f257;
L_76f21e: /* 76f21e: fld dword ptr [edi + 0x3dc] */
  { double v = F32((uint32_t)(edi + 0x3dcu)); FPUSH(v); }
/* 76f224: fcomp qword ptr [0xa07610] */
  fpu_com(ST0, F64((uint32_t)(0xa07610u)));
  FPOP();
/* 76f22a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 76f22c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 76f22f: jp 0x76f253 */
  if (pf) goto L_76f253;
L_76f231: /* 76f231: fld dword ptr [edi + 0x3dc] */
  { double v = F32((uint32_t)(edi + 0x3dcu)); FPUSH(v); }
/* 76f237: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 76f23a: fchs  */
  ST0 = -ST0;
/* 76f23c: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 76f240: fld dword ptr [0xa0729c] */
  { double v = F32((uint32_t)(0xa0729cu)); FPUSH(v); }
/* 76f246: fmul dword ptr [edi + 0x3e0] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x3e0u)));
/* 76f24c: fchs  */
  ST0 = -ST0;
/* 76f24e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 76f251: jmp 0x76f257 */
  goto L_76f257;
L_76f253: /* 76f253: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
L_76f255: /* 76f255: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
L_76f257: /* 76f257: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76f258: call 0x90dcc0 */
  esp -= 4; W32(esp, 0x76f25du); SPILL(); f_90dcc0(); if (g_unwind) return; RELOAD();
/* 76f25d: test byte ptr [edi + 0x3d8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x3d8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76f264: jne 0x76f301 */
  if (!zf) goto L_76f301;
L_76f26a: /* 76f26a: fld dword ptr [0xa0729c] */
  { double v = F32((uint32_t)(0xa0729cu)); FPUSH(v); }
/* 76f270: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76f271: fmul dword ptr [edi + 0x3cc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x3ccu)));
/* 76f277: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 76f27a: fld dword ptr [0xa0729c] */
  { double v = F32((uint32_t)(0xa0729cu)); FPUSH(v); }
/* 76f280: fmul dword ptr [edi + 0x3c8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x3c8u)));
/* 76f286: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 76f289: call 0x90d840 */
  esp -= 4; W32(esp, 0x76f28eu); SPILL(); f_90d840(); if (g_unwind) return; RELOAD();
/* 76f28e: fsubr dword ptr [ebp - 0x1c] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffe4u))) - ST0;
/* 76f291: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 76f294: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 76f297: fchs  */
  ST0 = -ST0;
/* 76f299: fcomp dword ptr [ebp - 0x1c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe4u)));
  FPOP();
/* 76f29c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 76f29e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76f2a1: jne 0x76f2b8 */
  if (!zf) goto L_76f2b8;
L_76f2a3: /* 76f2a3: mov ecx, dword ptr [edi + 0x3d0] */
  ecx = R32((uint32_t)(edi + 0x3d0u));
/* 76f2a9: fld dword ptr [0xa0729c] */
  { double v = F32((uint32_t)(0xa0729cu)); FPUSH(v); }
/* 76f2af: fmul dword ptr [edi + 0x3d4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x3d4u)));
/* 76f2b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76f2b6: jmp 0x76f2f7 */
  goto L_76f2f7;
L_76f2b8: /* 76f2b8: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 76f2bb: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 76f2be: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 76f2c0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76f2c3: jne 0x76f2dc */
  if (!zf) goto L_76f2dc;
L_76f2c5: /* 76f2c5: fld dword ptr [0xa0729c] */
  { double v = F32((uint32_t)(0xa0729cu)); FPUSH(v); }
/* 76f2cb: mov edx, dword ptr [edi + 0x3d0] */
  edx = R32((uint32_t)(edi + 0x3d0u));
/* 76f2d1: fmul dword ptr [edi + 0x3d4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x3d4u)));
/* 76f2d7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76f2d8: fchs  */
  ST0 = -ST0;
/* 76f2da: jmp 0x76f2f7 */
  goto L_76f2f7;
L_76f2dc: /* 76f2dc: fld dword ptr [edi + 0x3d4] */
  { double v = F32((uint32_t)(edi + 0x3d4u)); FPUSH(v); }
/* 76f2e2: mov eax, dword ptr [edi + 0x3d0] */
  eax = R32((uint32_t)(edi + 0x3d0u));
/* 76f2e8: fdiv dword ptr [ebp - 0x18] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 76f2eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76f2ec: fmul dword ptr [0xa0729c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0729cu)));
/* 76f2f2: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 76f2f5: fchs  */
  ST0 = -ST0;
L_76f2f7: /* 76f2f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76f2f8: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 76f2fb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76f2fc: call 0x90dc80 */
  esp -= 4; W32(esp, 0x76f301u); SPILL(); f_90dc80(); if (g_unwind) return; RELOAD();
L_76f301: /* 76f301: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 76f304: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 76f307: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 76f30a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76f30b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76f30c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76f30d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76f30e: call 0x90eab0 */
  esp -= 4; W32(esp, 0x76f313u); SPILL(); f_90eab0(); if (g_unwind) return; RELOAD();
/* 76f313: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 76f316: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76f317: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76f318: call 0x90d810 */
  esp -= 4; W32(esp, 0x76f31du); SPILL(); f_90d810(); if (g_unwind) return; RELOAD();
/* 76f31d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76f31e: call 0x90be40 */
  esp -= 4; W32(esp, 0x76f323u); SPILL(); f_90be40(); if (g_unwind) return; RELOAD();
/* 76f323: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 76f326: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76f327: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76f328: call 0x90e1f0 */
  esp -= 4; W32(esp, 0x76f32du); SPILL(); f_90e1f0(); if (g_unwind) return; RELOAD();
/* 76f32d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 76f330: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 76f333: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76f334: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76f336: add esi, 0xbc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 76f33c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76f33d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76f33e: call 0x90cda0 */
  esp -= 4; W32(esp, 0x76f343u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 76f343: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 76f346: fsub dword ptr [ebp - 0x44] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 76f349: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 76f34c: fsub dword ptr [ebp - 0x40] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 76f34f: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 76f352: fsub dword ptr [ebp - 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 76f355: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 76f358: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 76f35a: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 76f35d: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 76f35f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76f361: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 76f363: fmul dword ptr [ebp - 0x50] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 76f366: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 76f368: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 76f36a: fmul dword ptr [0xa07298] */
  ST0 = ST0 * (F32((uint32_t)(0xa07298u)));
/* 76f370: fstp dword ptr [edi + 0x3fc] */
  WF32((uint32_t)(edi + 0x3fcu), ST0); FPOP();
/* 76f376: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 76f378: fstp st(0) */
  STI(0) = ST0; FPOP();
L_76f37a: /* 76f37a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 76f37d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76f37e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76f37f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76f386: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76f387: mov esp, ebp */
  esp = ebp;
/* 76f389: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 76f38a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76f38d(void) {
  LOAD_REGS();
L_76f38d: /* 76f38d: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 76f390: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 76f395: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 76f398: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76f399: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 76f39c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x76f3a1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_76f3a1(); return;
}

void f_76f3a1(void) {
  LOAD_REGS();
L_76f3a1: /* 76f3a1: push 0xa075c4 */
  { uint32_t v = 0xa075c4u; esp -= 4; W32(esp, v); }
/* 76f3a6: push 0xac4414 */
  { uint32_t v = 0xac4414u; esp -= 4; W32(esp, v); }
/* 76f3ab: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x76f3b1u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 76f3b1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76f3b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76f3b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76f3b8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x76f3bdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_76f3bd: guest_badaddr(0x76f3bd); return;
}

void f_76f470(void) {
  LOAD_REGS();
L_76f470: /* 76f470: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76f471: mov esi, ecx */
  esi = ecx;
/* 76f473: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 76f476: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76f478: je 0x76f49a */
  if (zf) goto L_76f49a;
L_76f47a: /* 76f47a: mov eax, dword ptr [eax + 0x80] */
  eax = R32((uint32_t)(eax + 0x80u));
/* 76f480: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 76f486: mov edx, dword ptr [ecx + 0xfc] */
  edx = R32((uint32_t)(ecx + 0xfcu));
/* 76f48c: shr eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 76f48f: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 76f492: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 76f494: jne 0x76f52a */
  if (!zf) goto L_76f52a;
L_76f49a: /* 76f49a: mov eax, dword ptr [esi + 0x364] */
  eax = R32((uint32_t)(esi + 0x364u));
/* 76f4a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76f4a2: je 0x76f504 */
  if (zf) goto L_76f504;
L_76f4a4: /* 76f4a4: mov edx, dword ptr [eax + 0x80] */
  edx = R32((uint32_t)(eax + 0x80u));
/* 76f4aa: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 76f4b0: mov ecx, dword ptr [eax + 0xfc] */
  ecx = R32((uint32_t)(eax + 0xfcu));
/* 76f4b6: shr edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 76f4b9: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 76f4bc: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 76f4be: je 0x76f504 */
  if (zf) goto L_76f504;
L_76f4c0: /* 76f4c0: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 76f4c2: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 76f4c4: mov ecx, 0xb08f8c */
  ecx = 0xb08f8cu;
/* 76f4c9: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x76f4cfu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 76f4cf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76f4d1: je 0x76f4f4 */
  if (zf) goto L_76f4f4;
L_76f4d3: /* 76f4d3: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 76f4d9: mov ecx, dword ptr [ecx + 0xf4] */
  ecx = R32((uint32_t)(ecx + 0xf4u));
/* 76f4df: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 76f4e1: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 76f4e4: mov edx, dword ptr [esi + 0xb4] */
  edx = R32((uint32_t)(esi + 0xb4u));
/* 76f4ea: mov dword ptr [edx + 0xf4], eax */
  W32((uint32_t)(edx + 0xf4u), eax);
/* 76f4f0: xor eax, eax */
  eax = 0;
/* 76f4f2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76f4f3: ret  */
  esp += 4; SPILL(); return;
L_76f4f4: /* 76f4f4: mov edx, dword ptr [esi + 0xb4] */
  edx = R32((uint32_t)(esi + 0xb4u));
/* 76f4fa: xor eax, eax */
  eax = 0;
/* 76f4fc: mov dword ptr [edx + 0xf4], eax */
  W32((uint32_t)(edx + 0xf4u), eax);
/* 76f502: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76f503: ret  */
  esp += 4; SPILL(); return;
L_76f504: /* 76f504: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 76f50a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76f50c: je 0x76f56e */
  if (zf) goto L_76f56e;
L_76f50e: /* 76f50e: mov eax, dword ptr [eax + 0x80] */
  eax = R32((uint32_t)(eax + 0x80u));
/* 76f514: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 76f51a: mov edx, dword ptr [ecx + 0xfc] */
  edx = R32((uint32_t)(ecx + 0xfcu));
/* 76f520: shr eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 76f523: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 76f526: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 76f528: je 0x76f56e */
  if (zf) goto L_76f56e;
L_76f52a: /* 76f52a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 76f52c: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 76f52e: mov ecx, 0xb08f8c */
  ecx = 0xb08f8cu;
/* 76f533: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x76f539u); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 76f539: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76f53b: je 0x76f55e */
  if (zf) goto L_76f55e;
L_76f53d: /* 76f53d: mov edx, dword ptr [esi + 0xb4] */
  edx = R32((uint32_t)(esi + 0xb4u));
/* 76f543: mov ecx, dword ptr [edx + 0xf4] */
  ecx = R32((uint32_t)(edx + 0xf4u));
/* 76f549: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 76f54b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 76f54e: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 76f554: mov dword ptr [ecx + 0xf4], eax */
  W32((uint32_t)(ecx + 0xf4u), eax);
/* 76f55a: xor eax, eax */
  eax = 0;
/* 76f55c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76f55d: ret  */
  esp += 4; SPILL(); return;
L_76f55e: /* 76f55e: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 76f564: xor eax, eax */
  eax = 0;
/* 76f566: mov dword ptr [ecx + 0xf4], eax */
  W32((uint32_t)(ecx + 0xf4u), eax);
/* 76f56c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76f56d: ret  */
  esp += 4; SPILL(); return;
L_76f56e: /* 76f56e: mov eax, 1 */
  eax = 0x1u;
/* 76f573: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76f574: ret  */
  esp += 4; SPILL(); return;
}

void f_76f5d0(void) {
  LOAD_REGS();
L_76f5d0: /* 76f5d0: sub esp, 0x74 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x74u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 76f5d3: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 76f5d8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76f5d9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76f5da: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 76f5de: mov ecx, dword ptr [0xce8334] */
  ecx = R32((uint32_t)(0xce8334u));
/* 76f5e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76f5e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76f5e6: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 76f5e9: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 76f5eb: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 76f5ed: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 76f5f1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 76f5f3: call dword ptr [edx + 0x190] */
  { uint32_t t = R32((uint32_t)(edx + 0x190u)); esp -= 4; W32(esp, 0x76f5f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76f5f9: mov esi, eax */
  esi = eax;
/* 76f5fb: xor edi, edi */
  edi = 0;
/* 76f5fd: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 76f5ff: je 0x76f797 */
  if (zf) goto L_76f797;
L_76f605: /* 76f605: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 76f609: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x76f60fu); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 76f60f: lea eax, [esp + 0x3c] */
  eax = (uint32_t)(esp + 0x3cu);
/* 76f613: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76f614: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76f615: mov dword ptr [esp + 0x5c], edi */
  W32((uint32_t)(esp + 0x5cu), edi);
/* 76f619: mov dword ptr [esp + 0x60], edi */
  W32((uint32_t)(esp + 0x60u), edi);
/* 76f61d: mov dword ptr [esp + 0x64], edi */
  W32((uint32_t)(esp + 0x64u), edi);
/* 76f621: mov dword ptr [esp + 0x68], edi */
  W32((uint32_t)(esp + 0x68u), edi);
/* 76f625: mov dword ptr [esp + 0x6c], edi */
  W32((uint32_t)(esp + 0x6cu), edi);
/* 76f629: mov dword ptr [esp + 0x70], edi */
  W32((uint32_t)(esp + 0x70u), edi);
/* 76f62d: mov dword ptr [esp + 0x74], edi */
  W32((uint32_t)(esp + 0x74u), edi);
/* 76f631: mov dword ptr [esp + 0x78], edi */
  W32((uint32_t)(esp + 0x78u), edi);
/* 76f635: mov dword ptr [esp + 0x7c], edi */
  W32((uint32_t)(esp + 0x7cu), edi);
/* 76f639: mov dword ptr [esp + 0x80], 0x3f800000 */
  W32((uint32_t)(esp + 0x80u), 0x3f800000u);
/* 76f644: mov dword ptr [esp + 0x84], 0xffffffff */
  W32((uint32_t)(esp + 0x84u), 0xffffffffu);
/* 76f64f: mov dword ptr [esp + 0x88], edi */
  W32((uint32_t)(esp + 0x88u), edi);
/* 76f656: call 0x90be40 */
  esp -= 4; W32(esp, 0x76f65bu); SPILL(); f_90be40(); if (g_unwind) return; RELOAD();
/* 76f65b: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 76f65f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76f660: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* 76f664: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76f665: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x76f66au); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 76f66a: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 76f66e: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 76f672: fsub dword ptr [eax + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x170u)));
/* 76f678: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76f67b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76f67c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76f67d: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 76f681: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76f682: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 76f686: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 76f68a: fsub dword ptr [eax + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x174u)));
/* 76f690: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 76f694: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 76f698: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 76f69e: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 76f6a2: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x76f6a8u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 76f6a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76f6a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76f6aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76f6ab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76f6ac: mov ecx, eax */
  ecx = eax;
/* 76f6ae: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 76f6b0: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 76f6b4: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 76f6b7: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 76f6bb: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 76f6be: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 76f6c2: lea edi, [esp + 0x64] */
  edi = (uint32_t)(esp + 0x64u);
/* 76f6c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76f6c7: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 76f6cb: mov ebp, dword ptr [eax] */
  ebp = R32((uint32_t)(eax));
/* 76f6cd: mov ecx, dword ptr [edx + 0xb4] */
  ecx = R32((uint32_t)(edx + 0xb4u));
/* 76f6d3: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 76f6d5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 76f6d8: mov edi, esp */
  edi = esp;
/* 76f6da: mov dword ptr [edi], ebp */
  W32((uint32_t)(edi), ebp);
/* 76f6dc: mov ebp, dword ptr [eax + 4] */
  ebp = R32((uint32_t)(eax + 0x4u));
/* 76f6df: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 76f6e2: mov dword ptr [edi + 4], ebp */
  W32((uint32_t)(edi + 0x4u), ebp);
/* 76f6e5: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 76f6e8: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 76f6ec: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 76f6ef: mov eax, esp */
  eax = esp;
/* 76f6f1: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 76f6f3: mov edi, dword ptr [esp + 0x48] */
  edi = R32((uint32_t)(esp + 0x48u));
/* 76f6f7: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 76f6fa: mov edi, dword ptr [esp + 0x4c] */
  edi = R32((uint32_t)(esp + 0x4cu));
/* 76f6fe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76f6ff: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 76f702: call dword ptr [ebx + 0x9c] */
  { uint32_t t = R32((uint32_t)(ebx + 0x9cu)); esp -= 4; W32(esp, 0x76f708u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76f708: mov ecx, dword ptr [0xb7e450] */
  ecx = R32((uint32_t)(0xb7e450u));
/* 76f70e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76f70f: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 76f713: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x76f719u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 76f719: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76f71b: je 0x76f76b */
  if (zf) goto L_76f76b;
L_76f71d: /* 76f71d: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 76f721: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76f722: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76f724: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76f725: call 0x90bdc0 */
  esp -= 4; W32(esp, 0x76f72au); SPILL(); f_90bdc0(); if (g_unwind) return; RELOAD();
/* 76f72a: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 76f72e: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 76f732: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 76f736: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 76f73a: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 76f73e: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 76f740: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 76f742: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76f744: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 76f746: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 76f748: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76f74a: fsqrt  */
  ST0 = sqrt(ST0);
/* 76f74c: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 76f74e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 76f750: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 76f754: fcomp dword ptr [ecx + 0x3c4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x3c4u)));
  FPOP();
/* 76f75a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 76f75c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76f75f: jne 0x76f76f */
  if (!zf) goto L_76f76f;
L_76f761: /* 76f761: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 76f765: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76f766: call 0x6cacd6 */
  esp -= 4; W32(esp, 0x76f76bu); SPILL(); f_6cacd6(); if (g_unwind) return; RELOAD();
L_76f76b: /* 76f76b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
L_76f76f: /* 76f76f: mov edx, dword ptr [0xb21bb4] */
  edx = R32((uint32_t)(0xb21bb4u));
/* 76f775: mov eax, dword ptr [edx + 0x15220] */
  eax = R32((uint32_t)(edx + 0x15220u));
/* 76f77b: mov edi, dword ptr [ecx + 0x80] */
  edi = R32((uint32_t)(ecx + 0x80u));
/* 76f781: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 76f784: not eax */
  eax = ~eax;
/* 76f786: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 76f788: and eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 76f78d: mov edx, edi */
  edx = edi;
/* 76f78f: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 76f791: mov dword ptr [ecx + 0x80], edx */
  W32((uint32_t)(ecx + 0x80u), edx);
L_76f797: /* 76f797: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 76f79d: mov edx, dword ptr [0xce8334] */
  edx = R32((uint32_t)(0xce8334u));
/* 76f7a3: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 76f7a6: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 76f7a8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 76f7aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76f7ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76f7ac: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 76f7af: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 76f7b1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 76f7b2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 76f7b4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76f7b5: add esp, 0x74 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x74u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76f7b8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_76f840(void) {
  LOAD_REGS();
L_76f840: /* 76f840: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76f841: mov ebp, esp */
  ebp = esp;
/* 76f843: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76f845: push 0x9cc240 */
  { uint32_t v = 0x9cc240u; esp -= 4; W32(esp, v); }
/* 76f84a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76f850: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76f851: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76f858: sub esp, 0x104 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 76f85e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76f85f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76f860: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76f861: mov edi, ecx */
  edi = ecx;
/* 76f863: mov eax, dword ptr [edi + 0x364] */
  eax = R32((uint32_t)(edi + 0x364u));
/* 76f869: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76f86b: mov esi, dword ptr [edi + 0x368] */
  esi = R32((uint32_t)(edi + 0x368u));
/* 76f871: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 76f874: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 76f87b: jne 0x76f889 */
  if (!zf) goto L_76f889;
L_76f87d: /* 76f87d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76f87f: je 0x76fd29 */
  if (zf) goto L_76fd29;
L_76f885: /* 76f885: mov eax, esi */
  eax = esi;
/* 76f887: xor esi, esi */
  esi = 0;
L_76f889: /* 76f889: lea ecx, [eax + 0x17c] */
  ecx = (uint32_t)(eax + 0x17cu);
/* 76f88f: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 76f891: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 76f894: mov edx, esp */
  edx = esp;
/* 76f896: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 76f898: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 76f89b: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 76f89e: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 76f8a1: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 76f8a4: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 76f8a9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 76f8ab: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 76f8ae: mov edx, esp */
  edx = esp;
/* 76f8b0: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 76f8b2: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 76f8b5: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 76f8b8: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 76f8bb: lea ecx, [ebp - 0x10c] */
  ecx = (uint32_t)(ebp + 0xfffffef4u);
/* 76f8c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76f8c2: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 76f8c5: call 0x6c8eae */
  esp -= 4; W32(esp, 0x76f8cau); SPILL(); f_6c8eae(); if (g_unwind) return; RELOAD();
/* 76f8ca: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76f8cd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76f8cf: je 0x76f915 */
  if (zf) goto L_76f915;
L_76f8d1: /* 76f8d1: lea edx, [esi + 0x17c] */
  edx = (uint32_t)(esi + 0x17cu);
/* 76f8d7: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 76f8d9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 76f8dc: mov eax, esp */
  eax = esp;
/* 76f8de: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 76f8e0: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 76f8e3: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 76f8e6: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 76f8e9: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 76f8ec: add esi, 0x170 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 76f8f2: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 76f8f4: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 76f8f7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 76f8fa: mov eax, esp */
  eax = esp;
/* 76f8fc: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 76f8fe: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 76f901: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 76f904: lea edx, [ebp - 0x68] */
  edx = (uint32_t)(ebp + 0xffffff98u);
/* 76f907: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76f908: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 76f90b: call 0x6c8eae */
  esp -= 4; W32(esp, 0x76f910u); SPILL(); f_6c8eae(); if (g_unwind) return; RELOAD();
/* 76f910: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76f913: jmp 0x76f985 */
  goto L_76f985;
L_76f915: /* 76f915: mov dword ptr [ebp - 0x68], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x3f800000u);
/* 76f91c: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 76f923: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 76f92a: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 76f931: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 76f938: mov dword ptr [ebp - 0x54], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x3f800000u);
/* 76f93f: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 76f946: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 76f94d: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 76f954: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 76f95b: mov dword ptr [ebp - 0x40], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x3f800000u);
/* 76f962: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 76f969: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 76f970: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 76f977: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 76f97e: mov dword ptr [ebp - 0x2c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x3f800000u);
L_76f985: /* 76f985: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 76f988: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76f989: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 76f98f: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 76f996: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 76f99d: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 76f9a4: call dword ptr [0xcfa520] */
  esp -= 4; W32(esp, 0x76f9aau); SPILL(); f_4e3cc9(); if (g_unwind) return; /* Core!??0FCoords@@QAE@ABVFVector@@@Z */ RELOAD();
/* 76f9aa: lea ecx, [edi + 0x17c] */
  ecx = (uint32_t)(edi + 0x17cu);
/* 76f9b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76f9b1: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 76f9b7: call dword ptr [0xcfa51c] */
  esp -= 4; W32(esp, 0x76f9bdu); SPILL(); f_4e13e8(); if (g_unwind) return; /* Core!??XFCoords@@QAEAAV0@ABVFRotator@@@Z */ RELOAD();
/* 76f9bd: lea edx, [edi + 0x170] */
  edx = (uint32_t)(edi + 0x170u);
/* 76f9c3: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 76f9c5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 76f9c8: mov eax, esp */
  eax = esp;
/* 76f9ca: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 76f9cc: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 76f9cf: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 76f9d2: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 76f9d5: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 76f9d8: lea eax, [ebp - 0x98] */
  eax = (uint32_t)(ebp + 0xffffff68u);
/* 76f9de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76f9df: call 0x6c882d */
  esp -= 4; W32(esp, 0x76f9e4u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 76f9e4: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 76f9ea: fsub dword ptr [ebp - 0xdc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff24u)));
/* 76f9f0: mov ecx, dword ptr [ebp - 0xbc] */
  ecx = R32((uint32_t)(ebp + 0xffffff44u));
/* 76f9f6: fld dword ptr [ebp - 0x94] */
  { double v = F32((uint32_t)(ebp + 0xffffff6cu)); FPUSH(v); }
/* 76f9fc: mov edx, dword ptr [ebp - 0xb0] */
  edx = R32((uint32_t)(ebp + 0xffffff50u));
/* 76fa02: fsub dword ptr [ebp - 0xd8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff28u)));
/* 76fa08: mov eax, dword ptr [ebp - 0xa4] */
  eax = R32((uint32_t)(ebp + 0xffffff5cu));
/* 76fa0e: fld dword ptr [ebp - 0x90] */
  { double v = F32((uint32_t)(ebp + 0xffffff70u)); FPUSH(v); }
/* 76fa14: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 76fa17: fsub dword ptr [ebp - 0xd4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff2cu)));
/* 76fa1d: mov ecx, dword ptr [ebp - 0xb8] */
  ecx = R32((uint32_t)(ebp + 0xffffff48u));
/* 76fa23: fld dword ptr [ebp - 0x104] */
  { double v = F32((uint32_t)(ebp + 0xfffffefcu)); FPUSH(v); }
/* 76fa29: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 76fa2c: mov edx, dword ptr [ebp - 0xac] */
  edx = R32((uint32_t)(ebp + 0xffffff54u));
/* 76fa32: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 76fa34: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 76fa37: fld dword ptr [ebp - 0x108] */
  { double v = F32((uint32_t)(ebp + 0xfffffef8u)); FPUSH(v); }
/* 76fa3d: mov eax, dword ptr [ebp - 0xa0] */
  eax = R32((uint32_t)(ebp + 0xffffff60u));
/* 76fa43: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 76fa45: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76fa48: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 76fa4b: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 76fa4e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76fa50: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 76fa53: fld dword ptr [ebp - 0x10c] */
  { double v = F32((uint32_t)(ebp + 0xfffffef4u)); FPUSH(v); }
/* 76fa59: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 76fa5b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76fa5d: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 76fa60: fld dword ptr [ebp - 0xf4] */
  { double v = F32((uint32_t)(ebp + 0xffffff0cu)); FPUSH(v); }
/* 76fa66: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 76fa68: fld dword ptr [ebp - 0xf8] */
  { double v = F32((uint32_t)(ebp + 0xffffff08u)); FPUSH(v); }
/* 76fa6e: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 76fa70: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76fa72: fld dword ptr [ebp - 0xfc] */
  { double v = F32((uint32_t)(ebp + 0xffffff04u)); FPUSH(v); }
/* 76fa78: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 76fa7a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76fa7c: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 76fa7f: fld dword ptr [ebp - 0xe4] */
  { double v = F32((uint32_t)(ebp + 0xffffff1cu)); FPUSH(v); }
/* 76fa85: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 76fa87: fld dword ptr [ebp - 0xe8] */
  { double v = F32((uint32_t)(ebp + 0xffffff18u)); FPUSH(v); }
/* 76fa8d: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 76fa8f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76fa91: fld dword ptr [ebp - 0xec] */
  { double v = F32((uint32_t)(ebp + 0xffffff14u)); FPUSH(v); }
/* 76fa97: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 76fa99: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76fa9b: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 76fa9e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 76faa0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 76faa2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 76faa4: fld dword ptr [ebp - 0x104] */
  { double v = F32((uint32_t)(ebp + 0xfffffefcu)); FPUSH(v); }
/* 76faaa: fmul dword ptr [ebp - 0xa4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff5cu)));
/* 76fab0: fld dword ptr [ebp - 0x108] */
  { double v = F32((uint32_t)(ebp + 0xfffffef8u)); FPUSH(v); }
/* 76fab6: fmul dword ptr [ebp - 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff50u)));
/* 76fabc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76fabe: fld dword ptr [ebp - 0x10c] */
  { double v = F32((uint32_t)(ebp + 0xfffffef4u)); FPUSH(v); }
/* 76fac4: fmul dword ptr [ebp - 0xbc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff44u)));
/* 76faca: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76facc: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 76facf: fld dword ptr [ebp - 0xf4] */
  { double v = F32((uint32_t)(ebp + 0xffffff0cu)); FPUSH(v); }
/* 76fad5: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 76fad8: fmul dword ptr [ebp - 0xa4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff5cu)));
/* 76fade: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76fadf: fld dword ptr [ebp - 0xf8] */
  { double v = F32((uint32_t)(ebp + 0xffffff08u)); FPUSH(v); }
/* 76fae5: lea edx, [edi + 0x378] */
  edx = (uint32_t)(edi + 0x378u);
/* 76faeb: fmul dword ptr [ebp - 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff50u)));
/* 76faf1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76faf2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76faf4: fld dword ptr [ebp - 0xfc] */
  { double v = F32((uint32_t)(ebp + 0xffffff04u)); FPUSH(v); }
/* 76fafa: fmul dword ptr [ebp - 0xbc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff44u)));
/* 76fb00: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76fb02: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 76fb05: fld dword ptr [ebp - 0xe4] */
  { double v = F32((uint32_t)(ebp + 0xffffff1cu)); FPUSH(v); }
/* 76fb0b: fmul dword ptr [ebp - 0xa4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff5cu)));
/* 76fb11: fld dword ptr [ebp - 0xe8] */
  { double v = F32((uint32_t)(ebp + 0xffffff18u)); FPUSH(v); }
/* 76fb17: fmul dword ptr [ebp - 0xb0] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff50u)));
/* 76fb1d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76fb1f: fld dword ptr [ebp - 0xec] */
  { double v = F32((uint32_t)(ebp + 0xffffff14u)); FPUSH(v); }
/* 76fb25: fmul dword ptr [ebp - 0xbc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff44u)));
/* 76fb2b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76fb2d: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 76fb30: fld dword ptr [ebp - 0x104] */
  { double v = F32((uint32_t)(ebp + 0xfffffefcu)); FPUSH(v); }
/* 76fb36: fmul dword ptr [ebp - 0xa0] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff60u)));
/* 76fb3c: fld dword ptr [ebp - 0x108] */
  { double v = F32((uint32_t)(ebp + 0xfffffef8u)); FPUSH(v); }
/* 76fb42: fmul dword ptr [ebp - 0xac] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff54u)));
/* 76fb48: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76fb4a: fld dword ptr [ebp - 0x10c] */
  { double v = F32((uint32_t)(ebp + 0xfffffef4u)); FPUSH(v); }
/* 76fb50: fmul dword ptr [ebp - 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff48u)));
/* 76fb56: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76fb58: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 76fb5e: fld dword ptr [ebp - 0xf4] */
  { double v = F32((uint32_t)(ebp + 0xffffff0cu)); FPUSH(v); }
/* 76fb64: fmul dword ptr [ebp - 0xa0] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff60u)));
/* 76fb6a: fld dword ptr [ebp - 0xf8] */
  { double v = F32((uint32_t)(ebp + 0xffffff08u)); FPUSH(v); }
/* 76fb70: fmul dword ptr [ebp - 0xac] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff54u)));
/* 76fb76: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76fb78: fld dword ptr [ebp - 0xfc] */
  { double v = F32((uint32_t)(ebp + 0xffffff04u)); FPUSH(v); }
/* 76fb7e: fmul dword ptr [ebp - 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff48u)));
/* 76fb84: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76fb86: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 76fb8c: fld dword ptr [ebp - 0xe4] */
  { double v = F32((uint32_t)(ebp + 0xffffff1cu)); FPUSH(v); }
/* 76fb92: fmul dword ptr [ebp - 0xa0] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff60u)));
/* 76fb98: fld dword ptr [ebp - 0xe8] */
  { double v = F32((uint32_t)(ebp + 0xffffff18u)); FPUSH(v); }
/* 76fb9e: fmul dword ptr [ebp - 0xac] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff54u)));
/* 76fba4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76fba6: fld dword ptr [ebp - 0xec] */
  { double v = F32((uint32_t)(ebp + 0xffffff14u)); FPUSH(v); }
/* 76fbac: fmul dword ptr [ebp - 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff48u)));
/* 76fbb2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76fbb4: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 76fbba: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x76fbbfu); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 76fbbf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76fbc2: lea eax, [ebp - 0x74] */
  eax = (uint32_t)(ebp + 0xffffff8cu);
/* 76fbc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76fbc6: lea ecx, [edi + 0x384] */
  ecx = (uint32_t)(edi + 0x384u);
/* 76fbcc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76fbcd: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x76fbd2u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 76fbd2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76fbd5: lea edx, [ebp - 0x8c] */
  edx = (uint32_t)(ebp + 0xffffff74u);
/* 76fbdb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76fbdc: lea eax, [edi + 0x390] */
  eax = (uint32_t)(edi + 0x390u);
/* 76fbe2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76fbe3: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x76fbe8u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 76fbe8: fld dword ptr [ebp - 0x98] */
  { double v = F32((uint32_t)(ebp + 0xffffff68u)); FPUSH(v); }
/* 76fbee: fsub dword ptr [ebp - 0x38] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 76fbf1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76fbf4: fld dword ptr [ebp - 0x94] */
  { double v = F32((uint32_t)(ebp + 0xffffff6cu)); FPUSH(v); }
/* 76fbfa: fsub dword ptr [ebp - 0x34] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffccu)));
/* 76fbfd: fld dword ptr [ebp - 0x90] */
  { double v = F32((uint32_t)(ebp + 0xffffff70u)); FPUSH(v); }
/* 76fc03: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 76fc06: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 76fc09: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 76fc0b: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 76fc0e: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 76fc10: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76fc12: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 76fc14: fmul dword ptr [ebp - 0x68] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff98u)));
/* 76fc17: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76fc19: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 76fc1c: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 76fc1f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 76fc21: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 76fc24: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 76fc26: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 76fc29: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76fc2a: lea edx, [edi + 0x39c] */
  edx = (uint32_t)(edi + 0x39cu);
/* 76fc30: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76fc32: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76fc33: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 76fc36: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 76fc38: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76fc3a: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 76fc3d: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 76fc40: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 76fc42: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 76fc45: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 76fc47: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76fc49: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 76fc4c: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 76fc4e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76fc50: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 76fc53: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 76fc55: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 76fc57: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 76fc59: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 76fc5c: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 76fc5f: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 76fc62: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 76fc65: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76fc67: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 76fc6a: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 76fc6d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76fc6f: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 76fc72: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 76fc75: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 76fc78: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 76fc7b: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 76fc7e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76fc80: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 76fc83: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 76fc86: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76fc88: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 76fc8b: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 76fc8e: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 76fc91: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 76fc94: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 76fc97: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76fc99: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 76fc9c: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 76fc9f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76fca1: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 76fca4: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 76fca7: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 76fcaa: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 76fcad: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 76fcb0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76fcb2: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 76fcb5: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 76fcb8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76fcba: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 76fcc0: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 76fcc3: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 76fcc6: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 76fcc9: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 76fccc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76fcce: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 76fcd1: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 76fcd4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76fcd6: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 76fcdc: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 76fcdf: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 76fce2: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 76fce5: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 76fce8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76fcea: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 76fced: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 76fcf0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 76fcf2: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 76fcf8: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x76fcfdu); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 76fcfd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76fd00: lea eax, [ebp - 0x74] */
  eax = (uint32_t)(ebp + 0xffffff8cu);
/* 76fd03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76fd04: lea ecx, [edi + 0x3a8] */
  ecx = (uint32_t)(edi + 0x3a8u);
/* 76fd0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76fd0b: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x76fd10u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 76fd10: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76fd13: lea edx, [ebp - 0x8c] */
  edx = (uint32_t)(ebp + 0xffffff74u);
/* 76fd19: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76fd1a: add edi, 0x3b4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3b4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 76fd20: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76fd21: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x76fd26u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 76fd26: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76fd29: /* 76fd29: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 76fd2c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76fd2d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76fd2e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76fd35: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76fd36: mov esp, ebp */
  esp = ebp;
/* 76fd38: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 76fd39: ret  */
  esp += 4; SPILL(); return;
}

void f_76fd3a(void) {
  LOAD_REGS();
L_76fd3a: /* 76fd3a: mov eax, dword ptr [ebp - 0x110] */
  eax = R32((uint32_t)(ebp + 0xfffffef0u));
/* 76fd40: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 76fd45: lea ecx, [ebp - 0xcc] */
  ecx = (uint32_t)(ebp + 0xffffff34u);
/* 76fd4b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76fd4c: mov dword ptr [ebp - 0xcc], eax */
  W32((uint32_t)(ebp + 0xffffff34u), eax);
/* 76fd52: call 0x99caf8 */
  esp -= 4; W32(esp, 0x76fd57u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_76fd57(); return;
}

void f_76fd57(void) {
  LOAD_REGS();
L_76fd57: /* 76fd57: push 0xa0762c */
  { uint32_t v = 0xa0762cu; esp -= 4; W32(esp, v); }
/* 76fd5c: push 0xac442c */
  { uint32_t v = 0xac442cu; esp -= 4; W32(esp, v); }
/* 76fd61: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x76fd67u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 76fd67: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76fd6a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76fd6c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76fd6e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x76fd73u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_76fd73: guest_badaddr(0x76fd73); return;
}

void f_76fed0(void) {
  LOAD_REGS();
L_76fed0: /* 76fed0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76fed1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 76fed5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76fed7: je 0x76feee */
  if (zf) goto L_76feee;
L_76fed9: /* 76fed9: push 0xb1ee08 */
  { uint32_t v = 0xb1ee08u; esp -= 4; W32(esp, v); }
/* 76fede: mov ecx, esi */
  ecx = esi;
/* 76fee0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x76fee6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 76fee6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76fee8: je 0x76feee */
  if (zf) goto L_76feee;
L_76feea: /* 76feea: mov eax, esi */
  eax = esi;
/* 76feec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76feed: ret  */
  esp += 4; SPILL(); return;
L_76feee: /* 76feee: xor eax, eax */
  eax = 0;
/* 76fef0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76fef1: ret  */
  esp += 4; SPILL(); return;
}

void f_76ff10(void) {
  LOAD_REGS();
L_76ff10: /* 76ff10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76ff11: mov ebp, esp */
  ebp = esp;
/* 76ff13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 76ff15: push 0x9cc250 */
  { uint32_t v = 0x9cc250u; esp -= 4; W32(esp, v); }
/* 76ff1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76ff20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76ff21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 76ff28: sub esp, 0xbc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xbcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 76ff2e: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 76ff33: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76ff34: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76ff35: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76ff36: xor edi, edi */
  edi = 0;
/* 76ff38: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 76ff3a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 76ff3d: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 76ff40: je 0x7700c1 */
  if (zf) goto L_7700c1;
L_76ff46: /* 76ff46: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 76ff49: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 76ff4f: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76ff52: jne 0x7700c1 */
  if (!zf) goto L_7700c1;
L_76ff58: /* 76ff58: push 0xac3ea8 */
  { uint32_t v = 0xac3ea8u; esp -= 4; W32(esp, v); }
/* 76ff5d: call 0x6c7405 */
  esp -= 4; W32(esp, 0x76ff62u); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 76ff62: mov ebx, dword ptr [esi + 0xb4] */
  ebx = R32((uint32_t)(esi + 0xb4u));
/* 76ff68: mov eax, dword ptr [ebx + 0x115c] */
  eax = R32((uint32_t)(ebx + 0x115cu));
/* 76ff6e: mov ecx, dword ptr [0xcfa504] */
  ecx = R32((uint32_t)(0xcfa504u));
/* 76ff74: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 76ff77: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 76ff7a: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 76ff7d: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 76ff80: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 76ff83: cmp dword ptr [ecx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 76ff85: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 76ff88: jne 0x7700c1 */
  if (!zf) goto L_7700c1;
L_76ff8e: /* 76ff8e: cmp byte ptr [esi + 0x50], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 76ff92: jne 0x7700c1 */
  if (!zf) goto L_7700c1;
L_76ff98: /* 76ff98: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 76ff9e: mov ecx, 0x200 */
  ecx = 0x200u;
/* 76ffa3: test ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76ffa5: jne 0x7700c1 */
  if (!zf) goto L_7700c1;
L_76ffab: /* 76ffab: mov eax, dword ptr [esi + 0x364] */
  eax = R32((uint32_t)(esi + 0x364u));
/* 76ffb1: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 76ffb3: jne 0x76ffd7 */
  if (!zf) goto L_76ffd7;
L_76ffb5: /* 76ffb5: cmp dword ptr [esi + 0x368], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x368u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 76ffbb: je 0x76ffc7 */
  if (zf) goto L_76ffc7;
L_76ffbd: /* 76ffbd: push 0xac3ed8 */
  { uint32_t v = 0xac3ed8u; esp -= 4; W32(esp, v); }
/* 76ffc2: jmp 0x7700ab */
  goto L_7700ab;
L_76ffc7: /* 76ffc7: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 76ffc9: jne 0x76ffd7 */
  if (!zf) goto L_76ffd7;
L_76ffcb: /* 76ffcb: cmp dword ptr [esi + 0x368], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x368u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 76ffd1: je 0x7700bd */
  if (zf) goto L_7700bd;
L_76ffd7: /* 76ffd7: test dword ptr [eax + 0x80], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76ffdd: jne 0x7705f6 */
  if (!zf) goto L_7705f6;
L_76ffe3: /* 76ffe3: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 76ffe9: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 76ffeb: je 0x76fff9 */
  if (zf) goto L_76fff9;
L_76ffed: /* 76ffed: test dword ptr [eax + 0x80], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76fff3: jne 0x7705f6 */
  if (!zf) goto L_7705f6;
L_76fff9: /* 76fff9: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 76fffb: mov ecx, esi */
  ecx = esi;
/* 76fffd: call dword ptr [edx + 0x190] */
  { uint32_t t = R32((uint32_t)(edx + 0x190u)); esp -= 4; W32(esp, 0x770003u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 770003: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 770005: je 0x770011 */
  if (zf) goto L_770011;
L_770007: /* 770007: push 0xac4008 */
  { uint32_t v = 0xac4008u; esp -= 4; W32(esp, v); }
/* 77000c: jmp 0x770233 */
  goto L_770233;
L_770011: /* 770011: cmp dword ptr [ebx + 0x115c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x115cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 770017: jne 0x770043 */
  if (!zf) goto L_770043;
L_770019: /* 770019: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 77001f: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 770021: push 0xac4078 */
  { uint32_t v = 0xac4078u; esp -= 4; W32(esp, v); }
/* 770026: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770027: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x77002du); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 77002d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 770030: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 770033: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77003a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77003b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77003c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77003d: mov esp, ebp */
  esp = ebp;
/* 77003f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 770040: ret 4 */
  esp += 8; SPILL(); return;
L_770043: /* 770043: mov ecx, dword ptr [esi + 0x364] */
  ecx = R32((uint32_t)(esi + 0x364u));
/* 770049: mov eax, dword ptr [ecx + 0x30c] */
  eax = R32((uint32_t)(ecx + 0x30cu));
/* 77004f: xor ebx, ebx */
  ebx = 0;
/* 770051: xor edi, edi */
  edi = 0;
/* 770053: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770055: je 0x770062 */
  if (zf) goto L_770062;
L_770057: /* 770057: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770058: call 0x6c82e7 */
  esp -= 4; W32(esp, 0x77005du); SPILL(); f_6c82e7(); if (g_unwind) return; RELOAD();
/* 77005d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 770060: mov ebx, eax */
  ebx = eax;
L_770062: /* 770062: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 770068: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77006a: je 0x77008d */
  if (zf) goto L_77008d;
L_77006c: /* 77006c: mov edx, dword ptr [esi + 0x364] */
  edx = R32((uint32_t)(esi + 0x364u));
/* 770072: mov ecx, dword ptr [edx + 0x30c] */
  ecx = R32((uint32_t)(edx + 0x30cu));
/* 770078: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77007a: je 0x77008d */
  if (zf) goto L_77008d;
L_77007c: /* 77007c: mov eax, dword ptr [eax + 0x30c] */
  eax = R32((uint32_t)(eax + 0x30cu));
/* 770082: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770083: call 0x6c82e7 */
  esp -= 4; W32(esp, 0x770088u); SPILL(); f_6c82e7(); if (g_unwind) return; RELOAD();
/* 770088: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77008b: mov edi, eax */
  edi = eax;
L_77008d: /* 77008d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77008f: je 0x7700d4 */
  if (zf) goto L_7700d4;
L_770091: /* 770091: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770093: je 0x7700d4 */
  if (zf) goto L_7700d4;
L_770095: /* 770095: mov ecx, dword ptr [edi + 0x90] */
  ecx = R32((uint32_t)(edi + 0x90u));
/* 77009b: xor ecx, dword ptr [ebx + 0x90] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x90u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7700a1: test cl, 4 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7700a4: je 0x7700d4 */
  if (zf) goto L_7700d4;
L_7700a6: /* 7700a6: push 0xac40d0 */
  { uint32_t v = 0xac40d0u; esp -= 4; W32(esp, v); }
L_7700ab: /* 7700ab: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7700b1: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7700b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7700b4: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7700bau); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7700ba: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7700bd: /* 7700bd: mov byte ptr [esi + 0x50], 0 */
  W8((uint32_t)(esi + 0x50u), 0x0u);
L_7700c1: /* 7700c1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7700c4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7700cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7700cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7700cd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7700ce: mov esp, ebp */
  esp = ebp;
/* 7700d0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7700d1: ret 4 */
  esp += 8; SPILL(); return;
L_7700d4: /* 7700d4: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 7700da: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7700dc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7700df: mov ecx, esp */
  ecx = esp;
/* 7700e1: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7700e3: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7700e6: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7700e9: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7700ec: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7700ef: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7700f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7700f6: call 0x6c882d */
  esp -= 4; W32(esp, 0x7700fbu); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 7700fb: mov edx, dword ptr [esi + 0x364] */
  edx = R32((uint32_t)(esi + 0x364u));
/* 770101: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 770104: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770105: call 0x6c1bb8 */
  esp -= 4; W32(esp, 0x77010au); SPILL(); f_6c1bb8(); if (g_unwind) return; RELOAD();
/* 77010a: mov edx, dword ptr [esi + 0x36c] */
  edx = R32((uint32_t)(esi + 0x36cu));
/* 770110: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 770113: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770114: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 770117: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770118: mov ecx, dword ptr [esi + 0x364] */
  ecx = R32((uint32_t)(esi + 0x364u));
/* 77011e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77011f: lea eax, [ebp - 0x88] */
  eax = (uint32_t)(ebp + 0xffffff78u);
/* 770125: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770126: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770127: call 0x6ca524 */
  esp -= 4; W32(esp, 0x77012cu); SPILL(); f_6ca524(); if (g_unwind) return; RELOAD();
/* 77012c: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 770132: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770134: je 0x77015e */
  if (zf) goto L_77015e;
L_770136: /* 770136: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770137: call 0x6c1bb8 */
  esp -= 4; W32(esp, 0x77013cu); SPILL(); f_6c1bb8(); if (g_unwind) return; RELOAD();
/* 77013c: mov ecx, dword ptr [esi + 0x370] */
  ecx = R32((uint32_t)(esi + 0x370u));
/* 770142: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 770145: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770146: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 770149: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77014a: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 770150: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770151: lea edx, [ebp - 0x88] */
  edx = (uint32_t)(ebp + 0xffffff78u);
/* 770157: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770158: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770159: call 0x6ca524 */
  esp -= 4; W32(esp, 0x77015eu); SPILL(); f_6ca524(); if (g_unwind) return; RELOAD();
L_77015e: /* 77015e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 770161: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770163: jne 0x77018f */
  if (!zf) goto L_77018f;
L_770165: /* 770165: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 77016b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 77016d: push 0xac4198 */
  { uint32_t v = 0xac4198u; esp -= 4; W32(esp, v); }
/* 770172: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770173: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x770179u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 770179: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77017c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77017f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 770186: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 770187: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 770188: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 770189: mov esp, ebp */
  esp = ebp;
/* 77018b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77018c: ret 4 */
  esp += 8; SPILL(); return;
L_77018f: /* 77018f: cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 770192: jne 0x77019e */
  if (!zf) goto L_77019e;
L_770194: /* 770194: push 0xac4220 */
  { uint32_t v = 0xac4220u; esp -= 4; W32(esp, v); }
/* 770199: jmp 0x770233 */
  goto L_770233;
L_77019e: /* 77019e: push 0xb1c9b0 */
  { uint32_t v = 0xb1c9b0u; esp -= 4; W32(esp, v); }
/* 7701a3: mov ecx, esi */
  ecx = esi;
/* 7701a5: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7701a9: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7701afu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7701af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7701b1: je 0x7701c4 */
  if (zf) goto L_7701c4;
L_7701b3: /* 7701b3: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7701b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7701b7: call 0x90f700 */
  esp -= 4; W32(esp, 0x7701bcu); SPILL(); f_90f700(); if (g_unwind) return; RELOAD();
/* 7701bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7701bd: call 0x90f790 */
  esp -= 4; W32(esp, 0x7701c2u); SPILL(); f_90f790(); if (g_unwind) return; RELOAD();
/* 7701c2: jmp 0x770228 */
  goto L_770228;
L_7701c4: /* 7701c4: push 0xb1cee0 */
  { uint32_t v = 0xb1cee0u; esp -= 4; W32(esp, v); }
/* 7701c9: mov ecx, esi */
  ecx = esi;
/* 7701cb: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7701d1u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7701d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7701d3: je 0x7701e6 */
  if (zf) goto L_7701e6;
L_7701d5: /* 7701d5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7701d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7701d9: call 0x90d440 */
  esp -= 4; W32(esp, 0x7701deu); SPILL(); f_90d440(); if (g_unwind) return; RELOAD();
/* 7701de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7701df: call 0x90d4d0 */
  esp -= 4; W32(esp, 0x7701e4u); SPILL(); f_90d4d0(); if (g_unwind) return; RELOAD();
/* 7701e4: jmp 0x770228 */
  goto L_770228;
L_7701e6: /* 7701e6: push 0xb1d940 */
  { uint32_t v = 0xb1d940u; esp -= 4; W32(esp, v); }
/* 7701eb: mov ecx, esi */
  ecx = esi;
/* 7701ed: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7701f3u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7701f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7701f5: je 0x770208 */
  if (zf) goto L_770208;
L_7701f7: /* 7701f7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7701fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7701fb: call 0x90d6f0 */
  esp -= 4; W32(esp, 0x770200u); SPILL(); f_90d6f0(); if (g_unwind) return; RELOAD();
/* 770200: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770201: call 0x90d810 */
  esp -= 4; W32(esp, 0x770206u); SPILL(); f_90d810(); if (g_unwind) return; RELOAD();
/* 770206: jmp 0x770228 */
  goto L_770228;
L_770208: /* 770208: push 0xb1d410 */
  { uint32_t v = 0xb1d410u; esp -= 4; W32(esp, v); }
/* 77020d: mov ecx, esi */
  ecx = esi;
/* 77020f: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x770215u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 770215: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770217: je 0x77022e */
  if (zf) goto L_77022e;
L_770219: /* 770219: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77021c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77021d: call 0x90d580 */
  esp -= 4; W32(esp, 0x770222u); SPILL(); f_90d580(); if (g_unwind) return; RELOAD();
/* 770222: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770223: call 0x90d630 */
  esp -= 4; W32(esp, 0x770228u); SPILL(); f_90d630(); if (g_unwind) return; RELOAD();
L_770228: /* 770228: mov edi, eax */
  edi = eax;
/* 77022a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77022c: jne 0x770257 */
  if (!zf) goto L_770257;
L_77022e: /* 77022e: push 0xac42b0 */
  { uint32_t v = 0xac42b0u; esp -= 4; W32(esp, v); }
L_770233: /* 770233: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 770238: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 77023a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77023b: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x770241u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 770241: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 770244: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 770247: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77024e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77024f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 770250: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 770251: mov esp, ebp */
  esp = ebp;
/* 770253: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 770254: ret 4 */
  esp += 8; SPILL(); return;
L_770257: /* 770257: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 77025a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 77025d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77025e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77025f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 770260: call 0x90c130 */
  esp -= 4; W32(esp, 0x770265u); SPILL(); f_90c130(); if (g_unwind) return; RELOAD();
/* 770265: test byte ptr [esi + 0x3c0], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3c0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 77026c: mov bl, 0xe */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xeu) & 0xffu);
/* 77026e: jne 0x770296 */
  if (!zf) goto L_770296;
L_770270: /* 770270: mov eax, dword ptr [esi + 0x364] */
  eax = R32((uint32_t)(esi + 0x364u));
/* 770276: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770278: je 0x77027f */
  if (zf) goto L_77027f;
L_77027a: /* 77027a: cmp byte ptr [eax + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77027d: je 0x770296 */
  if (zf) goto L_770296;
L_77027f: /* 77027f: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 770285: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770287: je 0x770454 */
  if (zf) goto L_770454;
L_77028d: /* 77028d: cmp byte ptr [eax + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 770290: jne 0x770454 */
  if (!zf) goto L_770454;
L_770296: /* 770296: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 770299: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77029a: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7702a0: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 7702a7: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 7702ae: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 7702b5: call dword ptr [0xcfa520] */
  esp -= 4; W32(esp, 0x7702bbu); SPILL(); f_4e3cc9(); if (g_unwind) return; /* Core!??0FCoords@@QAE@ABVFVector@@@Z */ RELOAD();
/* 7702bb: lea edx, [esi + 0x17c] */
  edx = (uint32_t)(esi + 0x17cu);
/* 7702c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7702c2: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7702c8: call dword ptr [0xcfa51c] */
  esp -= 4; W32(esp, 0x7702ceu); SPILL(); f_4e13e8(); if (g_unwind) return; /* Core!??XFCoords@@QAEAAV0@ABVFRotator@@@Z */ RELOAD();
/* 7702ce: mov ecx, dword ptr [esi + 0x170] */
  ecx = R32((uint32_t)(esi + 0x170u));
/* 7702d4: mov edx, dword ptr [esi + 0x174] */
  edx = R32((uint32_t)(esi + 0x174u));
/* 7702da: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7702dd: mov eax, esp */
  eax = esp;
/* 7702df: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7702e1: mov ecx, dword ptr [esi + 0x178] */
  ecx = R32((uint32_t)(esi + 0x178u));
/* 7702e7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7702ea: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 7702f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7702f1: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7702f4: call 0x6c882d */
  esp -= 4; W32(esp, 0x7702f9u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 7702f9: mov eax, dword ptr [ebp - 0xbc] */
  eax = R32((uint32_t)(ebp + 0xffffff44u));
/* 7702ff: mov ecx, dword ptr [ebp - 0xb0] */
  ecx = R32((uint32_t)(ebp + 0xffffff50u));
/* 770305: mov edx, dword ptr [ebp - 0xa4] */
  edx = R32((uint32_t)(ebp + 0xffffff5cu));
/* 77030b: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 77030e: mov eax, dword ptr [ebp - 0xb8] */
  eax = R32((uint32_t)(ebp + 0xffffff48u));
/* 770314: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 770317: mov al, byte ptr [esi + 0x3c0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3c0u))) & 0xffu);
/* 77031d: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 770320: mov ecx, dword ptr [ebp - 0xac] */
  ecx = R32((uint32_t)(ebp + 0xffffff54u));
/* 770326: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 770329: mov edx, dword ptr [ebp - 0xa0] */
  edx = R32((uint32_t)(ebp + 0xffffff60u));
/* 77032f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 770332: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 770334: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 770337: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 77033a: jne 0x77034b */
  if (!zf) goto L_77034b;
L_77033c: /* 77033c: mov eax, dword ptr [esi + 0x364] */
  eax = R32((uint32_t)(esi + 0x364u));
/* 770342: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770344: je 0x7703c0 */
  if (zf) goto L_7703c0;
L_770346: /* 770346: cmp byte ptr [eax + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 770349: jne 0x7703c0 */
  if (!zf) goto L_7703c0;
L_77034b: /* 77034b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 77034e: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 770351: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770352: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770353: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 770359: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77035a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77035c: call 0x90cec0 */
  esp -= 4; W32(esp, 0x770361u); SPILL(); f_90cec0(); if (g_unwind) return; RELOAD();
/* 770361: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 770364: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 770367: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770368: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770369: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 77036c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77036d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77036f: call 0x90cda0 */
  esp -= 4; W32(esp, 0x770374u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 770374: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 770377: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* 77037a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77037b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77037c: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 77037f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770380: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 770382: call 0x90cda0 */
  esp -= 4; W32(esp, 0x770387u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 770387: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 77038a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77038b: lea ecx, [esi + 0x378] */
  ecx = (uint32_t)(esi + 0x378u);
/* 770391: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770392: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x770397u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 770397: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77039a: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 77039d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77039e: lea eax, [esi + 0x384] */
  eax = (uint32_t)(esi + 0x384u);
/* 7703a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7703a5: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x7703aau); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 7703aa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7703ad: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 7703b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7703b1: lea edx, [esi + 0x390] */
  edx = (uint32_t)(esi + 0x390u);
/* 7703b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7703b8: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x7703bdu); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 7703bd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7703c0: /* 7703c0: test byte ptr [esi + 0x3c0], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3c0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7703c7: jne 0x7703d8 */
  if (!zf) goto L_7703d8;
L_7703c9: /* 7703c9: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 7703cf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7703d1: je 0x77044d */
  if (zf) goto L_77044d;
L_7703d3: /* 7703d3: cmp byte ptr [eax + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7703d6: jne 0x77044d */
  if (!zf) goto L_77044d;
L_7703d8: /* 7703d8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7703db: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 7703de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7703df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7703e0: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 7703e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7703e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7703e9: call 0x90cec0 */
  esp -= 4; W32(esp, 0x7703eeu); SPILL(); f_90cec0(); if (g_unwind) return; RELOAD();
/* 7703ee: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7703f1: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 7703f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7703f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7703f6: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 7703f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7703fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7703fc: call 0x90cda0 */
  esp -= 4; W32(esp, 0x770401u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 770401: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 770404: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* 770407: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770408: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770409: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 77040c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77040d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77040f: call 0x90cda0 */
  esp -= 4; W32(esp, 0x770414u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 770414: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 770417: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770418: lea ecx, [esi + 0x39c] */
  ecx = (uint32_t)(esi + 0x39cu);
/* 77041e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77041f: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x770424u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 770424: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 770427: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 77042a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77042b: lea eax, [esi + 0x3a8] */
  eax = (uint32_t)(esi + 0x3a8u);
/* 770431: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770432: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x770437u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 770437: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77043a: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 77043d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77043e: lea edx, [esi + 0x3b4] */
  edx = (uint32_t)(esi + 0x3b4u);
/* 770444: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770445: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x77044au); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 77044a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77044d: /* 77044d: and dword ptr [esi + 0x3c0], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3c0u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x3c0u), r);
  }
L_770454: /* 770454: mov eax, dword ptr [esi + 0x380] */
  eax = R32((uint32_t)(esi + 0x380u));
/* 77045a: mov ecx, dword ptr [esi + 0x37c] */
  ecx = R32((uint32_t)(esi + 0x37cu));
/* 770460: mov edx, dword ptr [esi + 0x378] */
  edx = R32((uint32_t)(esi + 0x378u));
/* 770466: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770467: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770468: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770469: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77046b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77046c: call 0x90c1c0 */
  esp -= 4; W32(esp, 0x770471u); SPILL(); f_90c1c0(); if (g_unwind) return; RELOAD();
/* 770471: mov eax, dword ptr [esi + 0x398] */
  eax = R32((uint32_t)(esi + 0x398u));
/* 770477: mov ecx, dword ptr [esi + 0x394] */
  ecx = R32((uint32_t)(esi + 0x394u));
/* 77047d: mov edx, dword ptr [esi + 0x390] */
  edx = R32((uint32_t)(esi + 0x390u));
/* 770483: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770484: mov eax, dword ptr [esi + 0x38c] */
  eax = R32((uint32_t)(esi + 0x38cu));
/* 77048a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77048b: mov ecx, dword ptr [esi + 0x388] */
  ecx = R32((uint32_t)(esi + 0x388u));
/* 770491: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770492: mov edx, dword ptr [esi + 0x384] */
  edx = R32((uint32_t)(esi + 0x384u));
/* 770498: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770499: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77049a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77049b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77049d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77049e: call 0x90c4e0 */
  esp -= 4; W32(esp, 0x7704a3u); SPILL(); f_90c4e0(); if (g_unwind) return; RELOAD();
/* 7704a3: mov eax, dword ptr [esi + 0x3a4] */
  eax = R32((uint32_t)(esi + 0x3a4u));
/* 7704a9: mov ecx, dword ptr [esi + 0x3a0] */
  ecx = R32((uint32_t)(esi + 0x3a0u));
/* 7704af: mov edx, dword ptr [esi + 0x39c] */
  edx = R32((uint32_t)(esi + 0x39cu));
/* 7704b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7704b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7704b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7704b8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7704ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7704bb: call 0x90c1c0 */
  esp -= 4; W32(esp, 0x7704c0u); SPILL(); f_90c1c0(); if (g_unwind) return; RELOAD();
/* 7704c0: mov eax, dword ptr [esi + 0x3bc] */
  eax = R32((uint32_t)(esi + 0x3bcu));
/* 7704c6: mov ecx, dword ptr [esi + 0x3b8] */
  ecx = R32((uint32_t)(esi + 0x3b8u));
/* 7704cc: mov edx, dword ptr [esi + 0x3b4] */
  edx = R32((uint32_t)(esi + 0x3b4u));
/* 7704d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7704d3: mov eax, dword ptr [esi + 0x3b0] */
  eax = R32((uint32_t)(esi + 0x3b0u));
/* 7704d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7704da: mov ecx, dword ptr [esi + 0x3ac] */
  ecx = R32((uint32_t)(esi + 0x3acu));
/* 7704e0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7704e1: mov edx, dword ptr [esi + 0x3a8] */
  edx = R32((uint32_t)(esi + 0x3a8u));
/* 7704e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7704e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7704e9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7704ea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7704ec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7704ed: call 0x90c4e0 */
  esp -= 4; W32(esp, 0x7704f2u); SPILL(); f_90c4e0(); if (g_unwind) return; RELOAD();
/* 7704f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7704f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7704f4: mov dword ptr [esi + 0x360], edi */
  W32((uint32_t)(esi + 0x360u), edi);
/* 7704fa: call 0x90c140 */
  esp -= 4; W32(esp, 0x7704ffu); SPILL(); f_90c140(); if (g_unwind) return; RELOAD();
/* 7704ff: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 770501: mov ecx, esi */
  ecx = esi;
/* 770503: call dword ptr [eax + 0x194] */
  { uint32_t t = R32((uint32_t)(eax + 0x194u)); esp -= 4; W32(esp, 0x770509u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 770509: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 77050b: mov ecx, esi */
  ecx = esi;
/* 77050d: call dword ptr [edx + 0x190] */
  { uint32_t t = R32((uint32_t)(edx + 0x190u)); esp -= 4; W32(esp, 0x770513u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 770513: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770514: call 0x90bc20 */
  esp -= 4; W32(esp, 0x770519u); SPILL(); f_90bc20(); if (g_unwind) return; RELOAD();
/* 770519: test byte ptr [esi + 0x374], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x374u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 770520: je 0x77055d */
  if (zf) goto L_77055d;
L_770522: /* 770522: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 770528: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77052a: jne 0x77053d */
  if (!zf) goto L_77053d;
L_77052c: /* 77052c: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 770532: mov eax, dword ptr [eax + 0x1168] */
  eax = R32((uint32_t)(eax + 0x1168u));
/* 770538: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 77053b: jmp 0x770540 */
  goto L_770540;
L_77053d: /* 77053d: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_770540: /* 770540: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 770543: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770545: je 0x77055d */
  if (zf) goto L_77055d;
L_770547: /* 770547: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770549: je 0x77055d */
  if (zf) goto L_77055d;
L_77054b: /* 77054b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77054d: je 0x77055d */
  if (zf) goto L_77055d;
L_77054f: /* 77054f: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 770552: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770553: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770554: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770555: call 0x6cacb8 */
  esp -= 4; W32(esp, 0x77055au); SPILL(); f_6cacb8(); if (g_unwind) return; RELOAD();
/* 77055a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77055d: /* 77055d: mov eax, dword ptr [esi + 0x364] */
  eax = R32((uint32_t)(esi + 0x364u));
/* 770563: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 770565: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770566: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 77056a: call 0x6c5001 */
  esp -= 4; W32(esp, 0x77056fu); SPILL(); f_6c5001(); if (g_unwind) return; RELOAD();
/* 77056f: push 0xac4340 */
  { uint32_t v = 0xac4340u; esp -= 4; W32(esp, v); }
/* 770574: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77057b: call 0x6c7405 */
  esp -= 4; W32(esp, 0x770580u); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 770580: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 770583: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 770584: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 770585: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77058c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77058d: mov esp, ebp */
  esp = ebp;
/* 77058f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 770590: ret 4 */
  esp += 8; SPILL(); return;
L_7705f6: /* 7705f6: push 0xac3f78 */
  { uint32_t v = 0xac3f78u; esp -= 4; W32(esp, v); }
/* 7705fb: jmp 0x7700ab */
  goto L_7700ab;
}

void f_77003a(void) {
  LOAD_REGS();
L_77003a: /* 77003a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77003b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77003c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77003d: mov esp, ebp */
  esp = ebp;
/* 77003f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 770040: ret 4 */
  esp += 8; SPILL(); return;
}

void f_77004f(void) {
  LOAD_REGS();
L_77004f: /* 77004f: xor ebx, ebx */
  ebx = 0;
/* 770051: xor edi, edi */
  edi = 0;
/* 770053: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770055: je 0x770062 */
  if (zf) goto L_770062;
L_770057: /* 770057: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770058: call 0x6c82e7 */
  esp -= 4; W32(esp, 0x77005du); SPILL(); f_6c82e7(); if (g_unwind) return; RELOAD();
/* 77005d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 770060: mov ebx, eax */
  ebx = eax;
L_770062: /* 770062: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 770068: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77006a: je 0x77008d */
  if (zf) goto L_77008d;
L_77006c: /* 77006c: mov edx, dword ptr [esi + 0x364] */
  edx = R32((uint32_t)(esi + 0x364u));
/* 770072: mov ecx, dword ptr [edx + 0x30c] */
  ecx = R32((uint32_t)(edx + 0x30cu));
/* 770078: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77007a: je 0x77008d */
  if (zf) goto L_77008d;
L_77007c: /* 77007c: mov eax, dword ptr [eax + 0x30c] */
  eax = R32((uint32_t)(eax + 0x30cu));
/* 770082: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770083: call 0x6c82e7 */
  esp -= 4; W32(esp, 0x770088u); SPILL(); f_6c82e7(); if (g_unwind) return; RELOAD();
/* 770088: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77008b: mov edi, eax */
  edi = eax;
L_77008d: /* 77008d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77008f: je 0x7700d4 */
  if (zf) goto L_7700d4;
L_770091: /* 770091: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770093: je 0x7700d4 */
  if (zf) goto L_7700d4;
L_770095: /* 770095: mov ecx, dword ptr [edi + 0x90] */
  ecx = R32((uint32_t)(edi + 0x90u));
/* 77009b: xor ecx, dword ptr [ebx + 0x90] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x90u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7700a1: test cl, 4 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7700a4: je 0x7700d4 */
  if (zf) goto L_7700d4;
L_7700a6: /* 7700a6: push 0xac40d0 */
  { uint32_t v = 0xac40d0u; esp -= 4; W32(esp, v); }
/* 7700ab: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7700b1: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7700b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7700b4: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7700bau); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7700ba: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7700bd: mov byte ptr [esi + 0x50], 0 */
  W8((uint32_t)(esi + 0x50u), 0x0u);
/* 7700c1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7700c4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7700cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7700cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7700cd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7700ce: mov esp, ebp */
  esp = ebp;
/* 7700d0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7700d1: ret 4 */
  esp += 8; SPILL(); return;
L_7700d4: /* 7700d4: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 7700da: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7700dc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7700df: mov ecx, esp */
  ecx = esp;
/* 7700e1: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7700e3: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7700e6: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7700e9: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7700ec: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7700ef: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7700f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7700f6: call 0x6c882d */
  esp -= 4; W32(esp, 0x7700fbu); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 7700fb: mov edx, dword ptr [esi + 0x364] */
  edx = R32((uint32_t)(esi + 0x364u));
/* 770101: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 770104: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770105: call 0x6c1bb8 */
  esp -= 4; W32(esp, 0x77010au); SPILL(); f_6c1bb8(); if (g_unwind) return; RELOAD();
/* 77010a: mov edx, dword ptr [esi + 0x36c] */
  edx = R32((uint32_t)(esi + 0x36cu));
/* 770110: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 770113: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770114: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 770117: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770118: mov ecx, dword ptr [esi + 0x364] */
  ecx = R32((uint32_t)(esi + 0x364u));
/* 77011e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77011f: lea eax, [ebp - 0x88] */
  eax = (uint32_t)(ebp + 0xffffff78u);
/* 770125: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770126: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770127: call 0x6ca524 */
  esp -= 4; W32(esp, 0x77012cu); SPILL(); f_6ca524(); if (g_unwind) return; RELOAD();
/* 77012c: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 770132: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770134: je 0x77015e */
  if (zf) goto L_77015e;
L_770136: /* 770136: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770137: call 0x6c1bb8 */
  esp -= 4; W32(esp, 0x77013cu); SPILL(); f_6c1bb8(); if (g_unwind) return; RELOAD();
/* 77013c: mov ecx, dword ptr [esi + 0x370] */
  ecx = R32((uint32_t)(esi + 0x370u));
/* 770142: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 770145: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770146: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 770149: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77014a: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 770150: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770151: lea edx, [ebp - 0x88] */
  edx = (uint32_t)(ebp + 0xffffff78u);
/* 770157: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770158: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770159: call 0x6ca524 */
  esp -= 4; W32(esp, 0x77015eu); SPILL(); f_6ca524(); if (g_unwind) return; RELOAD();
L_77015e: /* 77015e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 770161: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770163: jne 0x77018f */
  if (!zf) goto L_77018f;
L_770165: /* 770165: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 77016b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 77016d: push 0xac4198 */
  { uint32_t v = 0xac4198u; esp -= 4; W32(esp, v); }
/* 770172: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770173: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x770179u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 770179: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77017c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77017f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 770186: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 770187: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 770188: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 770189: mov esp, ebp */
  esp = ebp;
/* 77018b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77018c: ret 4 */
  esp += 8; SPILL(); return;
L_77018f: /* 77018f: cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 770192: jne 0x77019e */
  if (!zf) goto L_77019e;
L_770194: /* 770194: push 0xac4220 */
  { uint32_t v = 0xac4220u; esp -= 4; W32(esp, v); }
/* 770199: jmp 0x770233 */
  goto L_770233;
L_77019e: /* 77019e: push 0xb1c9b0 */
  { uint32_t v = 0xb1c9b0u; esp -= 4; W32(esp, v); }
/* 7701a3: mov ecx, esi */
  ecx = esi;
/* 7701a5: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7701a9: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7701afu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7701af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7701b1: je 0x7701c4 */
  if (zf) goto L_7701c4;
L_7701b3: /* 7701b3: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7701b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7701b7: call 0x90f700 */
  esp -= 4; W32(esp, 0x7701bcu); SPILL(); f_90f700(); if (g_unwind) return; RELOAD();
/* 7701bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7701bd: call 0x90f790 */
  esp -= 4; W32(esp, 0x7701c2u); SPILL(); f_90f790(); if (g_unwind) return; RELOAD();
/* 7701c2: jmp 0x770228 */
  goto L_770228;
L_7701c4: /* 7701c4: push 0xb1cee0 */
  { uint32_t v = 0xb1cee0u; esp -= 4; W32(esp, v); }
/* 7701c9: mov ecx, esi */
  ecx = esi;
/* 7701cb: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7701d1u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7701d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7701d3: je 0x7701e6 */
  if (zf) goto L_7701e6;
L_7701d5: /* 7701d5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7701d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7701d9: call 0x90d440 */
  esp -= 4; W32(esp, 0x7701deu); SPILL(); f_90d440(); if (g_unwind) return; RELOAD();
/* 7701de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7701df: call 0x90d4d0 */
  esp -= 4; W32(esp, 0x7701e4u); SPILL(); f_90d4d0(); if (g_unwind) return; RELOAD();
/* 7701e4: jmp 0x770228 */
  goto L_770228;
L_7701e6: /* 7701e6: push 0xb1d940 */
  { uint32_t v = 0xb1d940u; esp -= 4; W32(esp, v); }
/* 7701eb: mov ecx, esi */
  ecx = esi;
/* 7701ed: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7701f3u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7701f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7701f5: je 0x770208 */
  if (zf) goto L_770208;
L_7701f7: /* 7701f7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7701fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7701fb: call 0x90d6f0 */
  esp -= 4; W32(esp, 0x770200u); SPILL(); f_90d6f0(); if (g_unwind) return; RELOAD();
/* 770200: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770201: call 0x90d810 */
  esp -= 4; W32(esp, 0x770206u); SPILL(); f_90d810(); if (g_unwind) return; RELOAD();
/* 770206: jmp 0x770228 */
  goto L_770228;
L_770208: /* 770208: push 0xb1d410 */
  { uint32_t v = 0xb1d410u; esp -= 4; W32(esp, v); }
/* 77020d: mov ecx, esi */
  ecx = esi;
/* 77020f: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x770215u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 770215: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770217: je 0x77022e */
  if (zf) goto L_77022e;
L_770219: /* 770219: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77021c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77021d: call 0x90d580 */
  esp -= 4; W32(esp, 0x770222u); SPILL(); f_90d580(); if (g_unwind) return; RELOAD();
/* 770222: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770223: call 0x90d630 */
  esp -= 4; W32(esp, 0x770228u); SPILL(); f_90d630(); if (g_unwind) return; RELOAD();
L_770228: /* 770228: mov edi, eax */
  edi = eax;
/* 77022a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77022c: jne 0x770257 */
  if (!zf) goto L_770257;
L_77022e: /* 77022e: push 0xac42b0 */
  { uint32_t v = 0xac42b0u; esp -= 4; W32(esp, v); }
L_770233: /* 770233: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 770238: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 77023a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77023b: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x770241u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 770241: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 770244: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 770247: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77024e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77024f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 770250: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 770251: mov esp, ebp */
  esp = ebp;
/* 770253: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 770254: ret 4 */
  esp += 8; SPILL(); return;
L_770257: /* 770257: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 77025a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 77025d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77025e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77025f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 770260: call 0x90c130 */
  esp -= 4; W32(esp, 0x770265u); SPILL(); f_90c130(); if (g_unwind) return; RELOAD();
/* 770265: test byte ptr [esi + 0x3c0], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3c0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 77026c: mov bl, 0xe */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xeu) & 0xffu);
/* 77026e: jne 0x770296 */
  if (!zf) goto L_770296;
L_770270: /* 770270: mov eax, dword ptr [esi + 0x364] */
  eax = R32((uint32_t)(esi + 0x364u));
/* 770276: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770278: je 0x77027f */
  if (zf) goto L_77027f;
L_77027a: /* 77027a: cmp byte ptr [eax + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77027d: je 0x770296 */
  if (zf) goto L_770296;
L_77027f: /* 77027f: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 770285: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770287: je 0x770454 */
  if (zf) goto L_770454;
L_77028d: /* 77028d: cmp byte ptr [eax + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 770290: jne 0x770454 */
  if (!zf) goto L_770454;
L_770296: /* 770296: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 770299: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77029a: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7702a0: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 7702a7: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 7702ae: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 7702b5: call dword ptr [0xcfa520] */
  esp -= 4; W32(esp, 0x7702bbu); SPILL(); f_4e3cc9(); if (g_unwind) return; /* Core!??0FCoords@@QAE@ABVFVector@@@Z */ RELOAD();
/* 7702bb: lea edx, [esi + 0x17c] */
  edx = (uint32_t)(esi + 0x17cu);
/* 7702c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7702c2: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7702c8: call dword ptr [0xcfa51c] */
  esp -= 4; W32(esp, 0x7702ceu); SPILL(); f_4e13e8(); if (g_unwind) return; /* Core!??XFCoords@@QAEAAV0@ABVFRotator@@@Z */ RELOAD();
/* 7702ce: mov ecx, dword ptr [esi + 0x170] */
  ecx = R32((uint32_t)(esi + 0x170u));
/* 7702d4: mov edx, dword ptr [esi + 0x174] */
  edx = R32((uint32_t)(esi + 0x174u));
/* 7702da: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7702dd: mov eax, esp */
  eax = esp;
/* 7702df: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7702e1: mov ecx, dword ptr [esi + 0x178] */
  ecx = R32((uint32_t)(esi + 0x178u));
/* 7702e7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7702ea: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 7702f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7702f1: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7702f4: call 0x6c882d */
  esp -= 4; W32(esp, 0x7702f9u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 7702f9: mov eax, dword ptr [ebp - 0xbc] */
  eax = R32((uint32_t)(ebp + 0xffffff44u));
/* 7702ff: mov ecx, dword ptr [ebp - 0xb0] */
  ecx = R32((uint32_t)(ebp + 0xffffff50u));
/* 770305: mov edx, dword ptr [ebp - 0xa4] */
  edx = R32((uint32_t)(ebp + 0xffffff5cu));
/* 77030b: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 77030e: mov eax, dword ptr [ebp - 0xb8] */
  eax = R32((uint32_t)(ebp + 0xffffff48u));
/* 770314: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 770317: mov al, byte ptr [esi + 0x3c0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3c0u))) & 0xffu);
/* 77031d: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 770320: mov ecx, dword ptr [ebp - 0xac] */
  ecx = R32((uint32_t)(ebp + 0xffffff54u));
/* 770326: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 770329: mov edx, dword ptr [ebp - 0xa0] */
  edx = R32((uint32_t)(ebp + 0xffffff60u));
/* 77032f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 770332: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 770334: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 770337: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 77033a: jne 0x77034b */
  if (!zf) goto L_77034b;
L_77033c: /* 77033c: mov eax, dword ptr [esi + 0x364] */
  eax = R32((uint32_t)(esi + 0x364u));
/* 770342: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770344: je 0x7703c0 */
  if (zf) goto L_7703c0;
L_770346: /* 770346: cmp byte ptr [eax + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 770349: jne 0x7703c0 */
  if (!zf) goto L_7703c0;
L_77034b: /* 77034b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 77034e: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 770351: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770352: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770353: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 770359: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77035a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77035c: call 0x90cec0 */
  esp -= 4; W32(esp, 0x770361u); SPILL(); f_90cec0(); if (g_unwind) return; RELOAD();
/* 770361: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 770364: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 770367: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770368: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770369: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 77036c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77036d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77036f: call 0x90cda0 */
  esp -= 4; W32(esp, 0x770374u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 770374: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 770377: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* 77037a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77037b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77037c: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 77037f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770380: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 770382: call 0x90cda0 */
  esp -= 4; W32(esp, 0x770387u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 770387: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 77038a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77038b: lea ecx, [esi + 0x378] */
  ecx = (uint32_t)(esi + 0x378u);
/* 770391: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770392: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x770397u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 770397: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77039a: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 77039d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77039e: lea eax, [esi + 0x384] */
  eax = (uint32_t)(esi + 0x384u);
/* 7703a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7703a5: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x7703aau); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 7703aa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7703ad: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 7703b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7703b1: lea edx, [esi + 0x390] */
  edx = (uint32_t)(esi + 0x390u);
/* 7703b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7703b8: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x7703bdu); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 7703bd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7703c0: /* 7703c0: test byte ptr [esi + 0x3c0], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3c0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7703c7: jne 0x7703d8 */
  if (!zf) goto L_7703d8;
L_7703c9: /* 7703c9: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 7703cf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7703d1: je 0x77044d */
  if (zf) goto L_77044d;
L_7703d3: /* 7703d3: cmp byte ptr [eax + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7703d6: jne 0x77044d */
  if (!zf) goto L_77044d;
L_7703d8: /* 7703d8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7703db: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 7703de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7703df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7703e0: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 7703e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7703e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7703e9: call 0x90cec0 */
  esp -= 4; W32(esp, 0x7703eeu); SPILL(); f_90cec0(); if (g_unwind) return; RELOAD();
/* 7703ee: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7703f1: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 7703f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7703f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7703f6: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 7703f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7703fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7703fc: call 0x90cda0 */
  esp -= 4; W32(esp, 0x770401u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 770401: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 770404: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* 770407: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770408: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770409: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 77040c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77040d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77040f: call 0x90cda0 */
  esp -= 4; W32(esp, 0x770414u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 770414: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 770417: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770418: lea ecx, [esi + 0x39c] */
  ecx = (uint32_t)(esi + 0x39cu);
/* 77041e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77041f: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x770424u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 770424: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 770427: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 77042a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77042b: lea eax, [esi + 0x3a8] */
  eax = (uint32_t)(esi + 0x3a8u);
/* 770431: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770432: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x770437u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 770437: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77043a: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 77043d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77043e: lea edx, [esi + 0x3b4] */
  edx = (uint32_t)(esi + 0x3b4u);
/* 770444: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770445: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x77044au); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 77044a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77044d: /* 77044d: and dword ptr [esi + 0x3c0], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3c0u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x3c0u), r);
  }
L_770454: /* 770454: mov eax, dword ptr [esi + 0x380] */
  eax = R32((uint32_t)(esi + 0x380u));
/* 77045a: mov ecx, dword ptr [esi + 0x37c] */
  ecx = R32((uint32_t)(esi + 0x37cu));
/* 770460: mov edx, dword ptr [esi + 0x378] */
  edx = R32((uint32_t)(esi + 0x378u));
/* 770466: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770467: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770468: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770469: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77046b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77046c: call 0x90c1c0 */
  esp -= 4; W32(esp, 0x770471u); SPILL(); f_90c1c0(); if (g_unwind) return; RELOAD();
/* 770471: mov eax, dword ptr [esi + 0x398] */
  eax = R32((uint32_t)(esi + 0x398u));
/* 770477: mov ecx, dword ptr [esi + 0x394] */
  ecx = R32((uint32_t)(esi + 0x394u));
/* 77047d: mov edx, dword ptr [esi + 0x390] */
  edx = R32((uint32_t)(esi + 0x390u));
/* 770483: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770484: mov eax, dword ptr [esi + 0x38c] */
  eax = R32((uint32_t)(esi + 0x38cu));
/* 77048a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77048b: mov ecx, dword ptr [esi + 0x388] */
  ecx = R32((uint32_t)(esi + 0x388u));
/* 770491: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770492: mov edx, dword ptr [esi + 0x384] */
  edx = R32((uint32_t)(esi + 0x384u));
/* 770498: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770499: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77049a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77049b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77049d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77049e: call 0x90c4e0 */
  esp -= 4; W32(esp, 0x7704a3u); SPILL(); f_90c4e0(); if (g_unwind) return; RELOAD();
/* 7704a3: mov eax, dword ptr [esi + 0x3a4] */
  eax = R32((uint32_t)(esi + 0x3a4u));
/* 7704a9: mov ecx, dword ptr [esi + 0x3a0] */
  ecx = R32((uint32_t)(esi + 0x3a0u));
/* 7704af: mov edx, dword ptr [esi + 0x39c] */
  edx = R32((uint32_t)(esi + 0x39cu));
/* 7704b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7704b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7704b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7704b8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7704ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7704bb: call 0x90c1c0 */
  esp -= 4; W32(esp, 0x7704c0u); SPILL(); f_90c1c0(); if (g_unwind) return; RELOAD();
/* 7704c0: mov eax, dword ptr [esi + 0x3bc] */
  eax = R32((uint32_t)(esi + 0x3bcu));
/* 7704c6: mov ecx, dword ptr [esi + 0x3b8] */
  ecx = R32((uint32_t)(esi + 0x3b8u));
/* 7704cc: mov edx, dword ptr [esi + 0x3b4] */
  edx = R32((uint32_t)(esi + 0x3b4u));
/* 7704d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7704d3: mov eax, dword ptr [esi + 0x3b0] */
  eax = R32((uint32_t)(esi + 0x3b0u));
/* 7704d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7704da: mov ecx, dword ptr [esi + 0x3ac] */
  ecx = R32((uint32_t)(esi + 0x3acu));
/* 7704e0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7704e1: mov edx, dword ptr [esi + 0x3a8] */
  edx = R32((uint32_t)(esi + 0x3a8u));
/* 7704e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7704e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7704e9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7704ea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7704ec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7704ed: call 0x90c4e0 */
  esp -= 4; W32(esp, 0x7704f2u); SPILL(); f_90c4e0(); if (g_unwind) return; RELOAD();
/* 7704f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7704f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7704f4: mov dword ptr [esi + 0x360], edi */
  W32((uint32_t)(esi + 0x360u), edi);
/* 7704fa: call 0x90c140 */
  esp -= 4; W32(esp, 0x7704ffu); SPILL(); f_90c140(); if (g_unwind) return; RELOAD();
/* 7704ff: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 770501: mov ecx, esi */
  ecx = esi;
/* 770503: call dword ptr [eax + 0x194] */
  { uint32_t t = R32((uint32_t)(eax + 0x194u)); esp -= 4; W32(esp, 0x770509u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 770509: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 77050b: mov ecx, esi */
  ecx = esi;
/* 77050d: call dword ptr [edx + 0x190] */
  { uint32_t t = R32((uint32_t)(edx + 0x190u)); esp -= 4; W32(esp, 0x770513u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 770513: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770514: call 0x90bc20 */
  esp -= 4; W32(esp, 0x770519u); SPILL(); f_90bc20(); if (g_unwind) return; RELOAD();
/* 770519: test byte ptr [esi + 0x374], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x374u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 770520: je 0x77055d */
  if (zf) goto L_77055d;
L_770522: /* 770522: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 770528: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77052a: jne 0x77053d */
  if (!zf) goto L_77053d;
L_77052c: /* 77052c: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 770532: mov eax, dword ptr [eax + 0x1168] */
  eax = R32((uint32_t)(eax + 0x1168u));
/* 770538: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 77053b: jmp 0x770540 */
  goto L_770540;
L_77053d: /* 77053d: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_770540: /* 770540: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 770543: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770545: je 0x77055d */
  if (zf) goto L_77055d;
L_770547: /* 770547: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770549: je 0x77055d */
  if (zf) goto L_77055d;
L_77054b: /* 77054b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77054d: je 0x77055d */
  if (zf) goto L_77055d;
L_77054f: /* 77054f: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 770552: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770553: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770554: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770555: call 0x6cacb8 */
  esp -= 4; W32(esp, 0x77055au); SPILL(); f_6cacb8(); if (g_unwind) return; RELOAD();
/* 77055a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77055d: /* 77055d: mov eax, dword ptr [esi + 0x364] */
  eax = R32((uint32_t)(esi + 0x364u));
/* 770563: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 770565: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770566: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 77056a: call 0x6c5001 */
  esp -= 4; W32(esp, 0x77056fu); SPILL(); f_6c5001(); if (g_unwind) return; RELOAD();
/* 77056f: push 0xac4340 */
  { uint32_t v = 0xac4340u; esp -= 4; W32(esp, v); }
/* 770574: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77057b: call 0x6c7405 */
  esp -= 4; W32(esp, 0x770580u); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 770580: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 770583: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 770584: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 770585: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77058c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77058d: mov esp, ebp */
  esp = ebp;
/* 77058f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 770590: ret 4 */
  esp += 8; SPILL(); return;
}

void f_770053(void) {
  LOAD_REGS();
L_770053: /* 770053: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770055: je 0x770062 */
  if (zf) goto L_770062;
L_770057: /* 770057: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770058: call 0x6c82e7 */
  esp -= 4; W32(esp, 0x77005du); SPILL(); f_6c82e7(); if (g_unwind) return; RELOAD();
/* 77005d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 770060: mov ebx, eax */
  ebx = eax;
L_770062: /* 770062: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 770068: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77006a: je 0x77008d */
  if (zf) goto L_77008d;
L_77006c: /* 77006c: mov edx, dword ptr [esi + 0x364] */
  edx = R32((uint32_t)(esi + 0x364u));
/* 770072: mov ecx, dword ptr [edx + 0x30c] */
  ecx = R32((uint32_t)(edx + 0x30cu));
/* 770078: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77007a: je 0x77008d */
  if (zf) goto L_77008d;
L_77007c: /* 77007c: mov eax, dword ptr [eax + 0x30c] */
  eax = R32((uint32_t)(eax + 0x30cu));
/* 770082: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770083: call 0x6c82e7 */
  esp -= 4; W32(esp, 0x770088u); SPILL(); f_6c82e7(); if (g_unwind) return; RELOAD();
/* 770088: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77008b: mov edi, eax */
  edi = eax;
L_77008d: /* 77008d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77008f: je 0x7700d4 */
  if (zf) goto L_7700d4;
L_770091: /* 770091: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770093: je 0x7700d4 */
  if (zf) goto L_7700d4;
L_770095: /* 770095: mov ecx, dword ptr [edi + 0x90] */
  ecx = R32((uint32_t)(edi + 0x90u));
/* 77009b: xor ecx, dword ptr [ebx + 0x90] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x90u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7700a1: test cl, 4 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7700a4: je 0x7700d4 */
  if (zf) goto L_7700d4;
L_7700a6: /* 7700a6: push 0xac40d0 */
  { uint32_t v = 0xac40d0u; esp -= 4; W32(esp, v); }
/* 7700ab: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7700b1: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7700b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7700b4: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7700bau); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7700ba: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7700bd: mov byte ptr [esi + 0x50], 0 */
  W8((uint32_t)(esi + 0x50u), 0x0u);
/* 7700c1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7700c4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7700cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7700cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7700cd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7700ce: mov esp, ebp */
  esp = ebp;
/* 7700d0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7700d1: ret 4 */
  esp += 8; SPILL(); return;
L_7700d4: /* 7700d4: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 7700da: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7700dc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7700df: mov ecx, esp */
  ecx = esp;
/* 7700e1: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7700e3: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7700e6: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7700e9: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7700ec: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7700ef: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7700f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7700f6: call 0x6c882d */
  esp -= 4; W32(esp, 0x7700fbu); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 7700fb: mov edx, dword ptr [esi + 0x364] */
  edx = R32((uint32_t)(esi + 0x364u));
/* 770101: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 770104: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770105: call 0x6c1bb8 */
  esp -= 4; W32(esp, 0x77010au); SPILL(); f_6c1bb8(); if (g_unwind) return; RELOAD();
/* 77010a: mov edx, dword ptr [esi + 0x36c] */
  edx = R32((uint32_t)(esi + 0x36cu));
/* 770110: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 770113: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770114: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 770117: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770118: mov ecx, dword ptr [esi + 0x364] */
  ecx = R32((uint32_t)(esi + 0x364u));
/* 77011e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77011f: lea eax, [ebp - 0x88] */
  eax = (uint32_t)(ebp + 0xffffff78u);
/* 770125: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770126: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770127: call 0x6ca524 */
  esp -= 4; W32(esp, 0x77012cu); SPILL(); f_6ca524(); if (g_unwind) return; RELOAD();
/* 77012c: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 770132: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770134: je 0x77015e */
  if (zf) goto L_77015e;
L_770136: /* 770136: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770137: call 0x6c1bb8 */
  esp -= 4; W32(esp, 0x77013cu); SPILL(); f_6c1bb8(); if (g_unwind) return; RELOAD();
/* 77013c: mov ecx, dword ptr [esi + 0x370] */
  ecx = R32((uint32_t)(esi + 0x370u));
/* 770142: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 770145: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770146: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 770149: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77014a: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 770150: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770151: lea edx, [ebp - 0x88] */
  edx = (uint32_t)(ebp + 0xffffff78u);
/* 770157: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770158: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770159: call 0x6ca524 */
  esp -= 4; W32(esp, 0x77015eu); SPILL(); f_6ca524(); if (g_unwind) return; RELOAD();
L_77015e: /* 77015e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 770161: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770163: jne 0x77018f */
  if (!zf) goto L_77018f;
L_770165: /* 770165: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 77016b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 77016d: push 0xac4198 */
  { uint32_t v = 0xac4198u; esp -= 4; W32(esp, v); }
/* 770172: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770173: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x770179u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 770179: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77017c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77017f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 770186: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 770187: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 770188: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 770189: mov esp, ebp */
  esp = ebp;
/* 77018b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77018c: ret 4 */
  esp += 8; SPILL(); return;
L_77018f: /* 77018f: cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 770192: jne 0x77019e */
  if (!zf) goto L_77019e;
L_770194: /* 770194: push 0xac4220 */
  { uint32_t v = 0xac4220u; esp -= 4; W32(esp, v); }
/* 770199: jmp 0x770233 */
  goto L_770233;
L_77019e: /* 77019e: push 0xb1c9b0 */
  { uint32_t v = 0xb1c9b0u; esp -= 4; W32(esp, v); }
/* 7701a3: mov ecx, esi */
  ecx = esi;
/* 7701a5: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7701a9: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7701afu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7701af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7701b1: je 0x7701c4 */
  if (zf) goto L_7701c4;
L_7701b3: /* 7701b3: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7701b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7701b7: call 0x90f700 */
  esp -= 4; W32(esp, 0x7701bcu); SPILL(); f_90f700(); if (g_unwind) return; RELOAD();
/* 7701bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7701bd: call 0x90f790 */
  esp -= 4; W32(esp, 0x7701c2u); SPILL(); f_90f790(); if (g_unwind) return; RELOAD();
/* 7701c2: jmp 0x770228 */
  goto L_770228;
L_7701c4: /* 7701c4: push 0xb1cee0 */
  { uint32_t v = 0xb1cee0u; esp -= 4; W32(esp, v); }
/* 7701c9: mov ecx, esi */
  ecx = esi;
/* 7701cb: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7701d1u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7701d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7701d3: je 0x7701e6 */
  if (zf) goto L_7701e6;
L_7701d5: /* 7701d5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7701d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7701d9: call 0x90d440 */
  esp -= 4; W32(esp, 0x7701deu); SPILL(); f_90d440(); if (g_unwind) return; RELOAD();
/* 7701de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7701df: call 0x90d4d0 */
  esp -= 4; W32(esp, 0x7701e4u); SPILL(); f_90d4d0(); if (g_unwind) return; RELOAD();
/* 7701e4: jmp 0x770228 */
  goto L_770228;
L_7701e6: /* 7701e6: push 0xb1d940 */
  { uint32_t v = 0xb1d940u; esp -= 4; W32(esp, v); }
/* 7701eb: mov ecx, esi */
  ecx = esi;
/* 7701ed: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7701f3u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7701f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7701f5: je 0x770208 */
  if (zf) goto L_770208;
L_7701f7: /* 7701f7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7701fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7701fb: call 0x90d6f0 */
  esp -= 4; W32(esp, 0x770200u); SPILL(); f_90d6f0(); if (g_unwind) return; RELOAD();
/* 770200: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770201: call 0x90d810 */
  esp -= 4; W32(esp, 0x770206u); SPILL(); f_90d810(); if (g_unwind) return; RELOAD();
/* 770206: jmp 0x770228 */
  goto L_770228;
L_770208: /* 770208: push 0xb1d410 */
  { uint32_t v = 0xb1d410u; esp -= 4; W32(esp, v); }
/* 77020d: mov ecx, esi */
  ecx = esi;
/* 77020f: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x770215u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 770215: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770217: je 0x77022e */
  if (zf) goto L_77022e;
L_770219: /* 770219: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77021c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77021d: call 0x90d580 */
  esp -= 4; W32(esp, 0x770222u); SPILL(); f_90d580(); if (g_unwind) return; RELOAD();
/* 770222: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770223: call 0x90d630 */
  esp -= 4; W32(esp, 0x770228u); SPILL(); f_90d630(); if (g_unwind) return; RELOAD();
L_770228: /* 770228: mov edi, eax */
  edi = eax;
/* 77022a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77022c: jne 0x770257 */
  if (!zf) goto L_770257;
L_77022e: /* 77022e: push 0xac42b0 */
  { uint32_t v = 0xac42b0u; esp -= 4; W32(esp, v); }
L_770233: /* 770233: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 770238: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 77023a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77023b: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x770241u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 770241: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 770244: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 770247: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77024e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77024f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 770250: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 770251: mov esp, ebp */
  esp = ebp;
/* 770253: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 770254: ret 4 */
  esp += 8; SPILL(); return;
L_770257: /* 770257: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 77025a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 77025d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77025e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77025f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 770260: call 0x90c130 */
  esp -= 4; W32(esp, 0x770265u); SPILL(); f_90c130(); if (g_unwind) return; RELOAD();
/* 770265: test byte ptr [esi + 0x3c0], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3c0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 77026c: mov bl, 0xe */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xeu) & 0xffu);
/* 77026e: jne 0x770296 */
  if (!zf) goto L_770296;
L_770270: /* 770270: mov eax, dword ptr [esi + 0x364] */
  eax = R32((uint32_t)(esi + 0x364u));
/* 770276: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770278: je 0x77027f */
  if (zf) goto L_77027f;
L_77027a: /* 77027a: cmp byte ptr [eax + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77027d: je 0x770296 */
  if (zf) goto L_770296;
L_77027f: /* 77027f: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 770285: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770287: je 0x770454 */
  if (zf) goto L_770454;
L_77028d: /* 77028d: cmp byte ptr [eax + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 770290: jne 0x770454 */
  if (!zf) goto L_770454;
L_770296: /* 770296: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 770299: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77029a: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7702a0: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 7702a7: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 7702ae: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 7702b5: call dword ptr [0xcfa520] */
  esp -= 4; W32(esp, 0x7702bbu); SPILL(); f_4e3cc9(); if (g_unwind) return; /* Core!??0FCoords@@QAE@ABVFVector@@@Z */ RELOAD();
/* 7702bb: lea edx, [esi + 0x17c] */
  edx = (uint32_t)(esi + 0x17cu);
/* 7702c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7702c2: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7702c8: call dword ptr [0xcfa51c] */
  esp -= 4; W32(esp, 0x7702ceu); SPILL(); f_4e13e8(); if (g_unwind) return; /* Core!??XFCoords@@QAEAAV0@ABVFRotator@@@Z */ RELOAD();
/* 7702ce: mov ecx, dword ptr [esi + 0x170] */
  ecx = R32((uint32_t)(esi + 0x170u));
/* 7702d4: mov edx, dword ptr [esi + 0x174] */
  edx = R32((uint32_t)(esi + 0x174u));
/* 7702da: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7702dd: mov eax, esp */
  eax = esp;
/* 7702df: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7702e1: mov ecx, dword ptr [esi + 0x178] */
  ecx = R32((uint32_t)(esi + 0x178u));
/* 7702e7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7702ea: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 7702f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7702f1: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7702f4: call 0x6c882d */
  esp -= 4; W32(esp, 0x7702f9u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 7702f9: mov eax, dword ptr [ebp - 0xbc] */
  eax = R32((uint32_t)(ebp + 0xffffff44u));
/* 7702ff: mov ecx, dword ptr [ebp - 0xb0] */
  ecx = R32((uint32_t)(ebp + 0xffffff50u));
/* 770305: mov edx, dword ptr [ebp - 0xa4] */
  edx = R32((uint32_t)(ebp + 0xffffff5cu));
/* 77030b: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 77030e: mov eax, dword ptr [ebp - 0xb8] */
  eax = R32((uint32_t)(ebp + 0xffffff48u));
/* 770314: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 770317: mov al, byte ptr [esi + 0x3c0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3c0u))) & 0xffu);
/* 77031d: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 770320: mov ecx, dword ptr [ebp - 0xac] */
  ecx = R32((uint32_t)(ebp + 0xffffff54u));
/* 770326: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 770329: mov edx, dword ptr [ebp - 0xa0] */
  edx = R32((uint32_t)(ebp + 0xffffff60u));
/* 77032f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 770332: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 770334: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 770337: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 77033a: jne 0x77034b */
  if (!zf) goto L_77034b;
L_77033c: /* 77033c: mov eax, dword ptr [esi + 0x364] */
  eax = R32((uint32_t)(esi + 0x364u));
/* 770342: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770344: je 0x7703c0 */
  if (zf) goto L_7703c0;
L_770346: /* 770346: cmp byte ptr [eax + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 770349: jne 0x7703c0 */
  if (!zf) goto L_7703c0;
L_77034b: /* 77034b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 77034e: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 770351: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770352: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770353: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 770359: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77035a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77035c: call 0x90cec0 */
  esp -= 4; W32(esp, 0x770361u); SPILL(); f_90cec0(); if (g_unwind) return; RELOAD();
/* 770361: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 770364: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 770367: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770368: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770369: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 77036c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77036d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77036f: call 0x90cda0 */
  esp -= 4; W32(esp, 0x770374u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 770374: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 770377: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* 77037a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77037b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77037c: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 77037f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770380: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 770382: call 0x90cda0 */
  esp -= 4; W32(esp, 0x770387u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 770387: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 77038a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77038b: lea ecx, [esi + 0x378] */
  ecx = (uint32_t)(esi + 0x378u);
/* 770391: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770392: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x770397u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 770397: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77039a: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 77039d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77039e: lea eax, [esi + 0x384] */
  eax = (uint32_t)(esi + 0x384u);
/* 7703a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7703a5: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x7703aau); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 7703aa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7703ad: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 7703b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7703b1: lea edx, [esi + 0x390] */
  edx = (uint32_t)(esi + 0x390u);
/* 7703b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7703b8: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x7703bdu); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 7703bd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7703c0: /* 7703c0: test byte ptr [esi + 0x3c0], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3c0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7703c7: jne 0x7703d8 */
  if (!zf) goto L_7703d8;
L_7703c9: /* 7703c9: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 7703cf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7703d1: je 0x77044d */
  if (zf) goto L_77044d;
L_7703d3: /* 7703d3: cmp byte ptr [eax + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7703d6: jne 0x77044d */
  if (!zf) goto L_77044d;
L_7703d8: /* 7703d8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7703db: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 7703de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7703df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7703e0: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 7703e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7703e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7703e9: call 0x90cec0 */
  esp -= 4; W32(esp, 0x7703eeu); SPILL(); f_90cec0(); if (g_unwind) return; RELOAD();
/* 7703ee: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7703f1: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 7703f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7703f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7703f6: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 7703f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7703fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7703fc: call 0x90cda0 */
  esp -= 4; W32(esp, 0x770401u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 770401: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 770404: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* 770407: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770408: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770409: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 77040c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77040d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77040f: call 0x90cda0 */
  esp -= 4; W32(esp, 0x770414u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 770414: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 770417: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770418: lea ecx, [esi + 0x39c] */
  ecx = (uint32_t)(esi + 0x39cu);
/* 77041e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77041f: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x770424u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 770424: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 770427: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 77042a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77042b: lea eax, [esi + 0x3a8] */
  eax = (uint32_t)(esi + 0x3a8u);
/* 770431: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770432: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x770437u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 770437: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77043a: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 77043d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77043e: lea edx, [esi + 0x3b4] */
  edx = (uint32_t)(esi + 0x3b4u);
/* 770444: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770445: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x77044au); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 77044a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77044d: /* 77044d: and dword ptr [esi + 0x3c0], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3c0u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x3c0u), r);
  }
L_770454: /* 770454: mov eax, dword ptr [esi + 0x380] */
  eax = R32((uint32_t)(esi + 0x380u));
/* 77045a: mov ecx, dword ptr [esi + 0x37c] */
  ecx = R32((uint32_t)(esi + 0x37cu));
/* 770460: mov edx, dword ptr [esi + 0x378] */
  edx = R32((uint32_t)(esi + 0x378u));
/* 770466: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770467: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770468: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770469: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77046b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77046c: call 0x90c1c0 */
  esp -= 4; W32(esp, 0x770471u); SPILL(); f_90c1c0(); if (g_unwind) return; RELOAD();
/* 770471: mov eax, dword ptr [esi + 0x398] */
  eax = R32((uint32_t)(esi + 0x398u));
/* 770477: mov ecx, dword ptr [esi + 0x394] */
  ecx = R32((uint32_t)(esi + 0x394u));
/* 77047d: mov edx, dword ptr [esi + 0x390] */
  edx = R32((uint32_t)(esi + 0x390u));
/* 770483: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770484: mov eax, dword ptr [esi + 0x38c] */
  eax = R32((uint32_t)(esi + 0x38cu));
/* 77048a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77048b: mov ecx, dword ptr [esi + 0x388] */
  ecx = R32((uint32_t)(esi + 0x388u));
/* 770491: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770492: mov edx, dword ptr [esi + 0x384] */
  edx = R32((uint32_t)(esi + 0x384u));
/* 770498: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770499: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77049a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77049b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77049d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77049e: call 0x90c4e0 */
  esp -= 4; W32(esp, 0x7704a3u); SPILL(); f_90c4e0(); if (g_unwind) return; RELOAD();
/* 7704a3: mov eax, dword ptr [esi + 0x3a4] */
  eax = R32((uint32_t)(esi + 0x3a4u));
/* 7704a9: mov ecx, dword ptr [esi + 0x3a0] */
  ecx = R32((uint32_t)(esi + 0x3a0u));
/* 7704af: mov edx, dword ptr [esi + 0x39c] */
  edx = R32((uint32_t)(esi + 0x39cu));
/* 7704b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7704b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7704b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7704b8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7704ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7704bb: call 0x90c1c0 */
  esp -= 4; W32(esp, 0x7704c0u); SPILL(); f_90c1c0(); if (g_unwind) return; RELOAD();
/* 7704c0: mov eax, dword ptr [esi + 0x3bc] */
  eax = R32((uint32_t)(esi + 0x3bcu));
/* 7704c6: mov ecx, dword ptr [esi + 0x3b8] */
  ecx = R32((uint32_t)(esi + 0x3b8u));
/* 7704cc: mov edx, dword ptr [esi + 0x3b4] */
  edx = R32((uint32_t)(esi + 0x3b4u));
/* 7704d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7704d3: mov eax, dword ptr [esi + 0x3b0] */
  eax = R32((uint32_t)(esi + 0x3b0u));
/* 7704d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7704da: mov ecx, dword ptr [esi + 0x3ac] */
  ecx = R32((uint32_t)(esi + 0x3acu));
/* 7704e0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7704e1: mov edx, dword ptr [esi + 0x3a8] */
  edx = R32((uint32_t)(esi + 0x3a8u));
/* 7704e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7704e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7704e9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7704ea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7704ec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7704ed: call 0x90c4e0 */
  esp -= 4; W32(esp, 0x7704f2u); SPILL(); f_90c4e0(); if (g_unwind) return; RELOAD();
/* 7704f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7704f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7704f4: mov dword ptr [esi + 0x360], edi */
  W32((uint32_t)(esi + 0x360u), edi);
/* 7704fa: call 0x90c140 */
  esp -= 4; W32(esp, 0x7704ffu); SPILL(); f_90c140(); if (g_unwind) return; RELOAD();
/* 7704ff: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 770501: mov ecx, esi */
  ecx = esi;
/* 770503: call dword ptr [eax + 0x194] */
  { uint32_t t = R32((uint32_t)(eax + 0x194u)); esp -= 4; W32(esp, 0x770509u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 770509: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 77050b: mov ecx, esi */
  ecx = esi;
/* 77050d: call dword ptr [edx + 0x190] */
  { uint32_t t = R32((uint32_t)(edx + 0x190u)); esp -= 4; W32(esp, 0x770513u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 770513: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770514: call 0x90bc20 */
  esp -= 4; W32(esp, 0x770519u); SPILL(); f_90bc20(); if (g_unwind) return; RELOAD();
/* 770519: test byte ptr [esi + 0x374], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x374u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 770520: je 0x77055d */
  if (zf) goto L_77055d;
L_770522: /* 770522: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 770528: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77052a: jne 0x77053d */
  if (!zf) goto L_77053d;
L_77052c: /* 77052c: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 770532: mov eax, dword ptr [eax + 0x1168] */
  eax = R32((uint32_t)(eax + 0x1168u));
/* 770538: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 77053b: jmp 0x770540 */
  goto L_770540;
L_77053d: /* 77053d: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_770540: /* 770540: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 770543: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770545: je 0x77055d */
  if (zf) goto L_77055d;
L_770547: /* 770547: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770549: je 0x77055d */
  if (zf) goto L_77055d;
L_77054b: /* 77054b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77054d: je 0x77055d */
  if (zf) goto L_77055d;
L_77054f: /* 77054f: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 770552: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770553: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770554: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770555: call 0x6cacb8 */
  esp -= 4; W32(esp, 0x77055au); SPILL(); f_6cacb8(); if (g_unwind) return; RELOAD();
/* 77055a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77055d: /* 77055d: mov eax, dword ptr [esi + 0x364] */
  eax = R32((uint32_t)(esi + 0x364u));
/* 770563: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 770565: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770566: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 77056a: call 0x6c5001 */
  esp -= 4; W32(esp, 0x77056fu); SPILL(); f_6c5001(); if (g_unwind) return; RELOAD();
/* 77056f: push 0xac4340 */
  { uint32_t v = 0xac4340u; esp -= 4; W32(esp, v); }
/* 770574: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77057b: call 0x6c7405 */
  esp -= 4; W32(esp, 0x770580u); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 770580: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 770583: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 770584: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 770585: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77058c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77058d: mov esp, ebp */
  esp = ebp;
/* 77058f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 770590: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7700d4(void) {
  LOAD_REGS();
L_7700d4: /* 7700d4: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 7700da: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7700dc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7700df: mov ecx, esp */
  ecx = esp;
/* 7700e1: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7700e3: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7700e6: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7700e9: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7700ec: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7700ef: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* 7700f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7700f6: call 0x6c882d */
  esp -= 4; W32(esp, 0x7700fbu); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 7700fb: mov edx, dword ptr [esi + 0x364] */
  edx = R32((uint32_t)(esi + 0x364u));
/* 770101: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 770104: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770105: call 0x6c1bb8 */
  esp -= 4; W32(esp, 0x77010au); SPILL(); f_6c1bb8(); if (g_unwind) return; RELOAD();
/* 77010a: mov edx, dword ptr [esi + 0x36c] */
  edx = R32((uint32_t)(esi + 0x36cu));
/* 770110: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 770113: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770114: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 770117: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770118: mov ecx, dword ptr [esi + 0x364] */
  ecx = R32((uint32_t)(esi + 0x364u));
/* 77011e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77011f: lea eax, [ebp - 0x88] */
  eax = (uint32_t)(ebp + 0xffffff78u);
/* 770125: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770126: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770127: call 0x6ca524 */
  esp -= 4; W32(esp, 0x77012cu); SPILL(); f_6ca524(); if (g_unwind) return; RELOAD();
/* 77012c: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 770132: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770134: je 0x77015e */
  if (zf) goto L_77015e;
L_770136: /* 770136: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770137: call 0x6c1bb8 */
  esp -= 4; W32(esp, 0x77013cu); SPILL(); f_6c1bb8(); if (g_unwind) return; RELOAD();
/* 77013c: mov ecx, dword ptr [esi + 0x370] */
  ecx = R32((uint32_t)(esi + 0x370u));
/* 770142: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 770145: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770146: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 770149: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77014a: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 770150: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770151: lea edx, [ebp - 0x88] */
  edx = (uint32_t)(ebp + 0xffffff78u);
/* 770157: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770158: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770159: call 0x6ca524 */
  esp -= 4; W32(esp, 0x77015eu); SPILL(); f_6ca524(); if (g_unwind) return; RELOAD();
L_77015e: /* 77015e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 770161: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770163: jne 0x77018f */
  if (!zf) goto L_77018f;
L_770165: /* 770165: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 77016b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 77016d: push 0xac4198 */
  { uint32_t v = 0xac4198u; esp -= 4; W32(esp, v); }
/* 770172: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770173: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x770179u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 770179: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77017c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77017f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 770186: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 770187: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 770188: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 770189: mov esp, ebp */
  esp = ebp;
/* 77018b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77018c: ret 4 */
  esp += 8; SPILL(); return;
L_77018f: /* 77018f: cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 770192: jne 0x77019e */
  if (!zf) goto L_77019e;
L_770194: /* 770194: push 0xac4220 */
  { uint32_t v = 0xac4220u; esp -= 4; W32(esp, v); }
/* 770199: jmp 0x770233 */
  goto L_770233;
L_77019e: /* 77019e: push 0xb1c9b0 */
  { uint32_t v = 0xb1c9b0u; esp -= 4; W32(esp, v); }
/* 7701a3: mov ecx, esi */
  ecx = esi;
/* 7701a5: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7701a9: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7701afu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7701af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7701b1: je 0x7701c4 */
  if (zf) goto L_7701c4;
L_7701b3: /* 7701b3: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7701b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7701b7: call 0x90f700 */
  esp -= 4; W32(esp, 0x7701bcu); SPILL(); f_90f700(); if (g_unwind) return; RELOAD();
/* 7701bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7701bd: call 0x90f790 */
  esp -= 4; W32(esp, 0x7701c2u); SPILL(); f_90f790(); if (g_unwind) return; RELOAD();
/* 7701c2: jmp 0x770228 */
  goto L_770228;
L_7701c4: /* 7701c4: push 0xb1cee0 */
  { uint32_t v = 0xb1cee0u; esp -= 4; W32(esp, v); }
/* 7701c9: mov ecx, esi */
  ecx = esi;
/* 7701cb: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7701d1u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7701d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7701d3: je 0x7701e6 */
  if (zf) goto L_7701e6;
L_7701d5: /* 7701d5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7701d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7701d9: call 0x90d440 */
  esp -= 4; W32(esp, 0x7701deu); SPILL(); f_90d440(); if (g_unwind) return; RELOAD();
/* 7701de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7701df: call 0x90d4d0 */
  esp -= 4; W32(esp, 0x7701e4u); SPILL(); f_90d4d0(); if (g_unwind) return; RELOAD();
/* 7701e4: jmp 0x770228 */
  goto L_770228;
L_7701e6: /* 7701e6: push 0xb1d940 */
  { uint32_t v = 0xb1d940u; esp -= 4; W32(esp, v); }
/* 7701eb: mov ecx, esi */
  ecx = esi;
/* 7701ed: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7701f3u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7701f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7701f5: je 0x770208 */
  if (zf) goto L_770208;
L_7701f7: /* 7701f7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7701fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7701fb: call 0x90d6f0 */
  esp -= 4; W32(esp, 0x770200u); SPILL(); f_90d6f0(); if (g_unwind) return; RELOAD();
/* 770200: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770201: call 0x90d810 */
  esp -= 4; W32(esp, 0x770206u); SPILL(); f_90d810(); if (g_unwind) return; RELOAD();
/* 770206: jmp 0x770228 */
  goto L_770228;
L_770208: /* 770208: push 0xb1d410 */
  { uint32_t v = 0xb1d410u; esp -= 4; W32(esp, v); }
/* 77020d: mov ecx, esi */
  ecx = esi;
/* 77020f: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x770215u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 770215: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770217: je 0x77022e */
  if (zf) goto L_77022e;
L_770219: /* 770219: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77021c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77021d: call 0x90d580 */
  esp -= 4; W32(esp, 0x770222u); SPILL(); f_90d580(); if (g_unwind) return; RELOAD();
/* 770222: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770223: call 0x90d630 */
  esp -= 4; W32(esp, 0x770228u); SPILL(); f_90d630(); if (g_unwind) return; RELOAD();
L_770228: /* 770228: mov edi, eax */
  edi = eax;
/* 77022a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77022c: jne 0x770257 */
  if (!zf) goto L_770257;
L_77022e: /* 77022e: push 0xac42b0 */
  { uint32_t v = 0xac42b0u; esp -= 4; W32(esp, v); }
L_770233: /* 770233: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 770238: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 77023a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77023b: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x770241u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 770241: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 770244: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 770247: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77024e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77024f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 770250: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 770251: mov esp, ebp */
  esp = ebp;
/* 770253: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 770254: ret 4 */
  esp += 8; SPILL(); return;
L_770257: /* 770257: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 77025a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 77025d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77025e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77025f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 770260: call 0x90c130 */
  esp -= 4; W32(esp, 0x770265u); SPILL(); f_90c130(); if (g_unwind) return; RELOAD();
/* 770265: test byte ptr [esi + 0x3c0], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3c0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 77026c: mov bl, 0xe */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xeu) & 0xffu);
/* 77026e: jne 0x770296 */
  if (!zf) goto L_770296;
L_770270: /* 770270: mov eax, dword ptr [esi + 0x364] */
  eax = R32((uint32_t)(esi + 0x364u));
/* 770276: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770278: je 0x77027f */
  if (zf) goto L_77027f;
L_77027a: /* 77027a: cmp byte ptr [eax + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77027d: je 0x770296 */
  if (zf) goto L_770296;
L_77027f: /* 77027f: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 770285: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770287: je 0x770454 */
  if (zf) goto L_770454;
L_77028d: /* 77028d: cmp byte ptr [eax + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 770290: jne 0x770454 */
  if (!zf) goto L_770454;
L_770296: /* 770296: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 770299: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77029a: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7702a0: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 7702a7: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 7702ae: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 7702b5: call dword ptr [0xcfa520] */
  esp -= 4; W32(esp, 0x7702bbu); SPILL(); f_4e3cc9(); if (g_unwind) return; /* Core!??0FCoords@@QAE@ABVFVector@@@Z */ RELOAD();
/* 7702bb: lea edx, [esi + 0x17c] */
  edx = (uint32_t)(esi + 0x17cu);
/* 7702c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7702c2: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7702c8: call dword ptr [0xcfa51c] */
  esp -= 4; W32(esp, 0x7702ceu); SPILL(); f_4e13e8(); if (g_unwind) return; /* Core!??XFCoords@@QAEAAV0@ABVFRotator@@@Z */ RELOAD();
/* 7702ce: mov ecx, dword ptr [esi + 0x170] */
  ecx = R32((uint32_t)(esi + 0x170u));
/* 7702d4: mov edx, dword ptr [esi + 0x174] */
  edx = R32((uint32_t)(esi + 0x174u));
/* 7702da: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7702dd: mov eax, esp */
  eax = esp;
/* 7702df: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7702e1: mov ecx, dword ptr [esi + 0x178] */
  ecx = R32((uint32_t)(esi + 0x178u));
/* 7702e7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7702ea: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 7702f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7702f1: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7702f4: call 0x6c882d */
  esp -= 4; W32(esp, 0x7702f9u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 7702f9: mov eax, dword ptr [ebp - 0xbc] */
  eax = R32((uint32_t)(ebp + 0xffffff44u));
/* 7702ff: mov ecx, dword ptr [ebp - 0xb0] */
  ecx = R32((uint32_t)(ebp + 0xffffff50u));
/* 770305: mov edx, dword ptr [ebp - 0xa4] */
  edx = R32((uint32_t)(ebp + 0xffffff5cu));
/* 77030b: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 77030e: mov eax, dword ptr [ebp - 0xb8] */
  eax = R32((uint32_t)(ebp + 0xffffff48u));
/* 770314: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 770317: mov al, byte ptr [esi + 0x3c0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3c0u))) & 0xffu);
/* 77031d: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 770320: mov ecx, dword ptr [ebp - 0xac] */
  ecx = R32((uint32_t)(ebp + 0xffffff54u));
/* 770326: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 770329: mov edx, dword ptr [ebp - 0xa0] */
  edx = R32((uint32_t)(ebp + 0xffffff60u));
/* 77032f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 770332: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 770334: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 770337: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 77033a: jne 0x77034b */
  if (!zf) goto L_77034b;
L_77033c: /* 77033c: mov eax, dword ptr [esi + 0x364] */
  eax = R32((uint32_t)(esi + 0x364u));
/* 770342: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770344: je 0x7703c0 */
  if (zf) goto L_7703c0;
L_770346: /* 770346: cmp byte ptr [eax + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 770349: jne 0x7703c0 */
  if (!zf) goto L_7703c0;
L_77034b: /* 77034b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 77034e: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 770351: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770352: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770353: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 770359: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77035a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77035c: call 0x90cec0 */
  esp -= 4; W32(esp, 0x770361u); SPILL(); f_90cec0(); if (g_unwind) return; RELOAD();
/* 770361: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 770364: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 770367: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770368: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770369: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 77036c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77036d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77036f: call 0x90cda0 */
  esp -= 4; W32(esp, 0x770374u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 770374: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 770377: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* 77037a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77037b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77037c: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 77037f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770380: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 770382: call 0x90cda0 */
  esp -= 4; W32(esp, 0x770387u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 770387: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 77038a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77038b: lea ecx, [esi + 0x378] */
  ecx = (uint32_t)(esi + 0x378u);
/* 770391: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770392: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x770397u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 770397: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77039a: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 77039d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77039e: lea eax, [esi + 0x384] */
  eax = (uint32_t)(esi + 0x384u);
/* 7703a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7703a5: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x7703aau); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 7703aa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7703ad: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 7703b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7703b1: lea edx, [esi + 0x390] */
  edx = (uint32_t)(esi + 0x390u);
/* 7703b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7703b8: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x7703bdu); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 7703bd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7703c0: /* 7703c0: test byte ptr [esi + 0x3c0], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3c0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7703c7: jne 0x7703d8 */
  if (!zf) goto L_7703d8;
L_7703c9: /* 7703c9: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 7703cf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7703d1: je 0x77044d */
  if (zf) goto L_77044d;
L_7703d3: /* 7703d3: cmp byte ptr [eax + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7703d6: jne 0x77044d */
  if (!zf) goto L_77044d;
L_7703d8: /* 7703d8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7703db: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 7703de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7703df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7703e0: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 7703e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7703e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7703e9: call 0x90cec0 */
  esp -= 4; W32(esp, 0x7703eeu); SPILL(); f_90cec0(); if (g_unwind) return; RELOAD();
/* 7703ee: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7703f1: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 7703f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7703f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7703f6: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 7703f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7703fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7703fc: call 0x90cda0 */
  esp -= 4; W32(esp, 0x770401u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 770401: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 770404: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* 770407: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770408: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770409: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 77040c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77040d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77040f: call 0x90cda0 */
  esp -= 4; W32(esp, 0x770414u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 770414: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 770417: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770418: lea ecx, [esi + 0x39c] */
  ecx = (uint32_t)(esi + 0x39cu);
/* 77041e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77041f: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x770424u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 770424: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 770427: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 77042a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77042b: lea eax, [esi + 0x3a8] */
  eax = (uint32_t)(esi + 0x3a8u);
/* 770431: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770432: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x770437u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 770437: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77043a: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 77043d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77043e: lea edx, [esi + 0x3b4] */
  edx = (uint32_t)(esi + 0x3b4u);
/* 770444: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770445: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x77044au); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 77044a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77044d: /* 77044d: and dword ptr [esi + 0x3c0], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3c0u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x3c0u), r);
  }
L_770454: /* 770454: mov eax, dword ptr [esi + 0x380] */
  eax = R32((uint32_t)(esi + 0x380u));
/* 77045a: mov ecx, dword ptr [esi + 0x37c] */
  ecx = R32((uint32_t)(esi + 0x37cu));
/* 770460: mov edx, dword ptr [esi + 0x378] */
  edx = R32((uint32_t)(esi + 0x378u));
/* 770466: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770467: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770468: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770469: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77046b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77046c: call 0x90c1c0 */
  esp -= 4; W32(esp, 0x770471u); SPILL(); f_90c1c0(); if (g_unwind) return; RELOAD();
/* 770471: mov eax, dword ptr [esi + 0x398] */
  eax = R32((uint32_t)(esi + 0x398u));
/* 770477: mov ecx, dword ptr [esi + 0x394] */
  ecx = R32((uint32_t)(esi + 0x394u));
/* 77047d: mov edx, dword ptr [esi + 0x390] */
  edx = R32((uint32_t)(esi + 0x390u));
/* 770483: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770484: mov eax, dword ptr [esi + 0x38c] */
  eax = R32((uint32_t)(esi + 0x38cu));
/* 77048a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77048b: mov ecx, dword ptr [esi + 0x388] */
  ecx = R32((uint32_t)(esi + 0x388u));
/* 770491: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770492: mov edx, dword ptr [esi + 0x384] */
  edx = R32((uint32_t)(esi + 0x384u));
/* 770498: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770499: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77049a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77049b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77049d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77049e: call 0x90c4e0 */
  esp -= 4; W32(esp, 0x7704a3u); SPILL(); f_90c4e0(); if (g_unwind) return; RELOAD();
/* 7704a3: mov eax, dword ptr [esi + 0x3a4] */
  eax = R32((uint32_t)(esi + 0x3a4u));
/* 7704a9: mov ecx, dword ptr [esi + 0x3a0] */
  ecx = R32((uint32_t)(esi + 0x3a0u));
/* 7704af: mov edx, dword ptr [esi + 0x39c] */
  edx = R32((uint32_t)(esi + 0x39cu));
/* 7704b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7704b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7704b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7704b8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7704ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7704bb: call 0x90c1c0 */
  esp -= 4; W32(esp, 0x7704c0u); SPILL(); f_90c1c0(); if (g_unwind) return; RELOAD();
/* 7704c0: mov eax, dword ptr [esi + 0x3bc] */
  eax = R32((uint32_t)(esi + 0x3bcu));
/* 7704c6: mov ecx, dword ptr [esi + 0x3b8] */
  ecx = R32((uint32_t)(esi + 0x3b8u));
/* 7704cc: mov edx, dword ptr [esi + 0x3b4] */
  edx = R32((uint32_t)(esi + 0x3b4u));
/* 7704d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7704d3: mov eax, dword ptr [esi + 0x3b0] */
  eax = R32((uint32_t)(esi + 0x3b0u));
/* 7704d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7704da: mov ecx, dword ptr [esi + 0x3ac] */
  ecx = R32((uint32_t)(esi + 0x3acu));
/* 7704e0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7704e1: mov edx, dword ptr [esi + 0x3a8] */
  edx = R32((uint32_t)(esi + 0x3a8u));
/* 7704e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7704e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7704e9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7704ea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7704ec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7704ed: call 0x90c4e0 */
  esp -= 4; W32(esp, 0x7704f2u); SPILL(); f_90c4e0(); if (g_unwind) return; RELOAD();
/* 7704f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7704f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7704f4: mov dword ptr [esi + 0x360], edi */
  W32((uint32_t)(esi + 0x360u), edi);
/* 7704fa: call 0x90c140 */
  esp -= 4; W32(esp, 0x7704ffu); SPILL(); f_90c140(); if (g_unwind) return; RELOAD();
/* 7704ff: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 770501: mov ecx, esi */
  ecx = esi;
/* 770503: call dword ptr [eax + 0x194] */
  { uint32_t t = R32((uint32_t)(eax + 0x194u)); esp -= 4; W32(esp, 0x770509u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 770509: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 77050b: mov ecx, esi */
  ecx = esi;
/* 77050d: call dword ptr [edx + 0x190] */
  { uint32_t t = R32((uint32_t)(edx + 0x190u)); esp -= 4; W32(esp, 0x770513u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 770513: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770514: call 0x90bc20 */
  esp -= 4; W32(esp, 0x770519u); SPILL(); f_90bc20(); if (g_unwind) return; RELOAD();
/* 770519: test byte ptr [esi + 0x374], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x374u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 770520: je 0x77055d */
  if (zf) goto L_77055d;
L_770522: /* 770522: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 770528: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77052a: jne 0x77053d */
  if (!zf) goto L_77053d;
L_77052c: /* 77052c: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 770532: mov eax, dword ptr [eax + 0x1168] */
  eax = R32((uint32_t)(eax + 0x1168u));
/* 770538: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 77053b: jmp 0x770540 */
  goto L_770540;
L_77053d: /* 77053d: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_770540: /* 770540: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 770543: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770545: je 0x77055d */
  if (zf) goto L_77055d;
L_770547: /* 770547: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770549: je 0x77055d */
  if (zf) goto L_77055d;
L_77054b: /* 77054b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77054d: je 0x77055d */
  if (zf) goto L_77055d;
L_77054f: /* 77054f: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 770552: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770553: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770554: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770555: call 0x6cacb8 */
  esp -= 4; W32(esp, 0x77055au); SPILL(); f_6cacb8(); if (g_unwind) return; RELOAD();
/* 77055a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77055d: /* 77055d: mov eax, dword ptr [esi + 0x364] */
  eax = R32((uint32_t)(esi + 0x364u));
/* 770563: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 770565: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770566: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 77056a: call 0x6c5001 */
  esp -= 4; W32(esp, 0x77056fu); SPILL(); f_6c5001(); if (g_unwind) return; RELOAD();
/* 77056f: push 0xac4340 */
  { uint32_t v = 0xac4340u; esp -= 4; W32(esp, v); }
/* 770574: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77057b: call 0x6c7405 */
  esp -= 4; W32(esp, 0x770580u); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 770580: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 770583: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 770584: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 770585: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77058c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77058d: mov esp, ebp */
  esp = ebp;
/* 77058f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 770590: ret 4 */
  esp += 8; SPILL(); return;
}

void f_77018f(void) {
  LOAD_REGS();
L_77018f: /* 77018f: cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 770192: jne 0x77019e */
  if (!zf) goto L_77019e;
L_770194: /* 770194: push 0xac4220 */
  { uint32_t v = 0xac4220u; esp -= 4; W32(esp, v); }
/* 770199: jmp 0x770233 */
  goto L_770233;
L_77019e: /* 77019e: push 0xb1c9b0 */
  { uint32_t v = 0xb1c9b0u; esp -= 4; W32(esp, v); }
/* 7701a3: mov ecx, esi */
  ecx = esi;
/* 7701a5: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7701a9: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7701afu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7701af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7701b1: je 0x7701c4 */
  if (zf) goto L_7701c4;
L_7701b3: /* 7701b3: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7701b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7701b7: call 0x90f700 */
  esp -= 4; W32(esp, 0x7701bcu); SPILL(); f_90f700(); if (g_unwind) return; RELOAD();
/* 7701bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7701bd: call 0x90f790 */
  esp -= 4; W32(esp, 0x7701c2u); SPILL(); f_90f790(); if (g_unwind) return; RELOAD();
/* 7701c2: jmp 0x770228 */
  goto L_770228;
L_7701c4: /* 7701c4: push 0xb1cee0 */
  { uint32_t v = 0xb1cee0u; esp -= 4; W32(esp, v); }
/* 7701c9: mov ecx, esi */
  ecx = esi;
/* 7701cb: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7701d1u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7701d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7701d3: je 0x7701e6 */
  if (zf) goto L_7701e6;
L_7701d5: /* 7701d5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7701d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7701d9: call 0x90d440 */
  esp -= 4; W32(esp, 0x7701deu); SPILL(); f_90d440(); if (g_unwind) return; RELOAD();
/* 7701de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7701df: call 0x90d4d0 */
  esp -= 4; W32(esp, 0x7701e4u); SPILL(); f_90d4d0(); if (g_unwind) return; RELOAD();
/* 7701e4: jmp 0x770228 */
  goto L_770228;
L_7701e6: /* 7701e6: push 0xb1d940 */
  { uint32_t v = 0xb1d940u; esp -= 4; W32(esp, v); }
/* 7701eb: mov ecx, esi */
  ecx = esi;
/* 7701ed: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7701f3u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7701f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7701f5: je 0x770208 */
  if (zf) goto L_770208;
L_7701f7: /* 7701f7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7701fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7701fb: call 0x90d6f0 */
  esp -= 4; W32(esp, 0x770200u); SPILL(); f_90d6f0(); if (g_unwind) return; RELOAD();
/* 770200: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770201: call 0x90d810 */
  esp -= 4; W32(esp, 0x770206u); SPILL(); f_90d810(); if (g_unwind) return; RELOAD();
/* 770206: jmp 0x770228 */
  goto L_770228;
L_770208: /* 770208: push 0xb1d410 */
  { uint32_t v = 0xb1d410u; esp -= 4; W32(esp, v); }
/* 77020d: mov ecx, esi */
  ecx = esi;
/* 77020f: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x770215u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 770215: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770217: je 0x77022e */
  if (zf) goto L_77022e;
L_770219: /* 770219: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77021c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77021d: call 0x90d580 */
  esp -= 4; W32(esp, 0x770222u); SPILL(); f_90d580(); if (g_unwind) return; RELOAD();
/* 770222: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770223: call 0x90d630 */
  esp -= 4; W32(esp, 0x770228u); SPILL(); f_90d630(); if (g_unwind) return; RELOAD();
L_770228: /* 770228: mov edi, eax */
  edi = eax;
/* 77022a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77022c: jne 0x770257 */
  if (!zf) goto L_770257;
L_77022e: /* 77022e: push 0xac42b0 */
  { uint32_t v = 0xac42b0u; esp -= 4; W32(esp, v); }
L_770233: /* 770233: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 770238: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 77023a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77023b: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x770241u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 770241: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 770244: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 770247: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77024e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77024f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 770250: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 770251: mov esp, ebp */
  esp = ebp;
/* 770253: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 770254: ret 4 */
  esp += 8; SPILL(); return;
L_770257: /* 770257: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 77025a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 77025d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77025e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77025f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 770260: call 0x90c130 */
  esp -= 4; W32(esp, 0x770265u); SPILL(); f_90c130(); if (g_unwind) return; RELOAD();
/* 770265: test byte ptr [esi + 0x3c0], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3c0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 77026c: mov bl, 0xe */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xeu) & 0xffu);
/* 77026e: jne 0x770296 */
  if (!zf) goto L_770296;
L_770270: /* 770270: mov eax, dword ptr [esi + 0x364] */
  eax = R32((uint32_t)(esi + 0x364u));
/* 770276: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770278: je 0x77027f */
  if (zf) goto L_77027f;
L_77027a: /* 77027a: cmp byte ptr [eax + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77027d: je 0x770296 */
  if (zf) goto L_770296;
L_77027f: /* 77027f: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 770285: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770287: je 0x770454 */
  if (zf) goto L_770454;
L_77028d: /* 77028d: cmp byte ptr [eax + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 770290: jne 0x770454 */
  if (!zf) goto L_770454;
L_770296: /* 770296: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 770299: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77029a: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7702a0: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 7702a7: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 7702ae: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 7702b5: call dword ptr [0xcfa520] */
  esp -= 4; W32(esp, 0x7702bbu); SPILL(); f_4e3cc9(); if (g_unwind) return; /* Core!??0FCoords@@QAE@ABVFVector@@@Z */ RELOAD();
/* 7702bb: lea edx, [esi + 0x17c] */
  edx = (uint32_t)(esi + 0x17cu);
/* 7702c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7702c2: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7702c8: call dword ptr [0xcfa51c] */
  esp -= 4; W32(esp, 0x7702ceu); SPILL(); f_4e13e8(); if (g_unwind) return; /* Core!??XFCoords@@QAEAAV0@ABVFRotator@@@Z */ RELOAD();
/* 7702ce: mov ecx, dword ptr [esi + 0x170] */
  ecx = R32((uint32_t)(esi + 0x170u));
/* 7702d4: mov edx, dword ptr [esi + 0x174] */
  edx = R32((uint32_t)(esi + 0x174u));
/* 7702da: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7702dd: mov eax, esp */
  eax = esp;
/* 7702df: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7702e1: mov ecx, dword ptr [esi + 0x178] */
  ecx = R32((uint32_t)(esi + 0x178u));
/* 7702e7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7702ea: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 7702f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7702f1: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7702f4: call 0x6c882d */
  esp -= 4; W32(esp, 0x7702f9u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 7702f9: mov eax, dword ptr [ebp - 0xbc] */
  eax = R32((uint32_t)(ebp + 0xffffff44u));
/* 7702ff: mov ecx, dword ptr [ebp - 0xb0] */
  ecx = R32((uint32_t)(ebp + 0xffffff50u));
/* 770305: mov edx, dword ptr [ebp - 0xa4] */
  edx = R32((uint32_t)(ebp + 0xffffff5cu));
/* 77030b: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 77030e: mov eax, dword ptr [ebp - 0xb8] */
  eax = R32((uint32_t)(ebp + 0xffffff48u));
/* 770314: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 770317: mov al, byte ptr [esi + 0x3c0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3c0u))) & 0xffu);
/* 77031d: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 770320: mov ecx, dword ptr [ebp - 0xac] */
  ecx = R32((uint32_t)(ebp + 0xffffff54u));
/* 770326: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 770329: mov edx, dword ptr [ebp - 0xa0] */
  edx = R32((uint32_t)(ebp + 0xffffff60u));
/* 77032f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 770332: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 770334: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 770337: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 77033a: jne 0x77034b */
  if (!zf) goto L_77034b;
L_77033c: /* 77033c: mov eax, dword ptr [esi + 0x364] */
  eax = R32((uint32_t)(esi + 0x364u));
/* 770342: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770344: je 0x7703c0 */
  if (zf) goto L_7703c0;
L_770346: /* 770346: cmp byte ptr [eax + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 770349: jne 0x7703c0 */
  if (!zf) goto L_7703c0;
L_77034b: /* 77034b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 77034e: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 770351: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770352: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770353: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 770359: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77035a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77035c: call 0x90cec0 */
  esp -= 4; W32(esp, 0x770361u); SPILL(); f_90cec0(); if (g_unwind) return; RELOAD();
/* 770361: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 770364: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 770367: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770368: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770369: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 77036c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77036d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77036f: call 0x90cda0 */
  esp -= 4; W32(esp, 0x770374u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 770374: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 770377: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* 77037a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77037b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77037c: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 77037f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770380: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 770382: call 0x90cda0 */
  esp -= 4; W32(esp, 0x770387u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 770387: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 77038a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77038b: lea ecx, [esi + 0x378] */
  ecx = (uint32_t)(esi + 0x378u);
/* 770391: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770392: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x770397u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 770397: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77039a: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 77039d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77039e: lea eax, [esi + 0x384] */
  eax = (uint32_t)(esi + 0x384u);
/* 7703a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7703a5: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x7703aau); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 7703aa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7703ad: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 7703b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7703b1: lea edx, [esi + 0x390] */
  edx = (uint32_t)(esi + 0x390u);
/* 7703b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7703b8: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x7703bdu); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 7703bd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7703c0: /* 7703c0: test byte ptr [esi + 0x3c0], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3c0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7703c7: jne 0x7703d8 */
  if (!zf) goto L_7703d8;
L_7703c9: /* 7703c9: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 7703cf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7703d1: je 0x77044d */
  if (zf) goto L_77044d;
L_7703d3: /* 7703d3: cmp byte ptr [eax + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7703d6: jne 0x77044d */
  if (!zf) goto L_77044d;
L_7703d8: /* 7703d8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7703db: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 7703de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7703df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7703e0: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 7703e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7703e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7703e9: call 0x90cec0 */
  esp -= 4; W32(esp, 0x7703eeu); SPILL(); f_90cec0(); if (g_unwind) return; RELOAD();
/* 7703ee: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7703f1: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 7703f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7703f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7703f6: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 7703f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7703fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7703fc: call 0x90cda0 */
  esp -= 4; W32(esp, 0x770401u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 770401: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 770404: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* 770407: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770408: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770409: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 77040c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77040d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77040f: call 0x90cda0 */
  esp -= 4; W32(esp, 0x770414u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 770414: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 770417: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770418: lea ecx, [esi + 0x39c] */
  ecx = (uint32_t)(esi + 0x39cu);
/* 77041e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77041f: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x770424u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 770424: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 770427: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 77042a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77042b: lea eax, [esi + 0x3a8] */
  eax = (uint32_t)(esi + 0x3a8u);
/* 770431: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770432: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x770437u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 770437: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77043a: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 77043d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77043e: lea edx, [esi + 0x3b4] */
  edx = (uint32_t)(esi + 0x3b4u);
/* 770444: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770445: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x77044au); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 77044a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77044d: /* 77044d: and dword ptr [esi + 0x3c0], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3c0u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x3c0u), r);
  }
L_770454: /* 770454: mov eax, dword ptr [esi + 0x380] */
  eax = R32((uint32_t)(esi + 0x380u));
/* 77045a: mov ecx, dword ptr [esi + 0x37c] */
  ecx = R32((uint32_t)(esi + 0x37cu));
/* 770460: mov edx, dword ptr [esi + 0x378] */
  edx = R32((uint32_t)(esi + 0x378u));
/* 770466: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770467: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770468: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770469: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77046b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77046c: call 0x90c1c0 */
  esp -= 4; W32(esp, 0x770471u); SPILL(); f_90c1c0(); if (g_unwind) return; RELOAD();
/* 770471: mov eax, dword ptr [esi + 0x398] */
  eax = R32((uint32_t)(esi + 0x398u));
/* 770477: mov ecx, dword ptr [esi + 0x394] */
  ecx = R32((uint32_t)(esi + 0x394u));
/* 77047d: mov edx, dword ptr [esi + 0x390] */
  edx = R32((uint32_t)(esi + 0x390u));
/* 770483: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770484: mov eax, dword ptr [esi + 0x38c] */
  eax = R32((uint32_t)(esi + 0x38cu));
/* 77048a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77048b: mov ecx, dword ptr [esi + 0x388] */
  ecx = R32((uint32_t)(esi + 0x388u));
/* 770491: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770492: mov edx, dword ptr [esi + 0x384] */
  edx = R32((uint32_t)(esi + 0x384u));
/* 770498: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770499: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77049a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77049b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77049d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77049e: call 0x90c4e0 */
  esp -= 4; W32(esp, 0x7704a3u); SPILL(); f_90c4e0(); if (g_unwind) return; RELOAD();
/* 7704a3: mov eax, dword ptr [esi + 0x3a4] */
  eax = R32((uint32_t)(esi + 0x3a4u));
/* 7704a9: mov ecx, dword ptr [esi + 0x3a0] */
  ecx = R32((uint32_t)(esi + 0x3a0u));
/* 7704af: mov edx, dword ptr [esi + 0x39c] */
  edx = R32((uint32_t)(esi + 0x39cu));
/* 7704b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7704b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7704b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7704b8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7704ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7704bb: call 0x90c1c0 */
  esp -= 4; W32(esp, 0x7704c0u); SPILL(); f_90c1c0(); if (g_unwind) return; RELOAD();
/* 7704c0: mov eax, dword ptr [esi + 0x3bc] */
  eax = R32((uint32_t)(esi + 0x3bcu));
/* 7704c6: mov ecx, dword ptr [esi + 0x3b8] */
  ecx = R32((uint32_t)(esi + 0x3b8u));
/* 7704cc: mov edx, dword ptr [esi + 0x3b4] */
  edx = R32((uint32_t)(esi + 0x3b4u));
/* 7704d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7704d3: mov eax, dword ptr [esi + 0x3b0] */
  eax = R32((uint32_t)(esi + 0x3b0u));
/* 7704d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7704da: mov ecx, dword ptr [esi + 0x3ac] */
  ecx = R32((uint32_t)(esi + 0x3acu));
/* 7704e0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7704e1: mov edx, dword ptr [esi + 0x3a8] */
  edx = R32((uint32_t)(esi + 0x3a8u));
/* 7704e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7704e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7704e9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7704ea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7704ec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7704ed: call 0x90c4e0 */
  esp -= 4; W32(esp, 0x7704f2u); SPILL(); f_90c4e0(); if (g_unwind) return; RELOAD();
/* 7704f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7704f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7704f4: mov dword ptr [esi + 0x360], edi */
  W32((uint32_t)(esi + 0x360u), edi);
/* 7704fa: call 0x90c140 */
  esp -= 4; W32(esp, 0x7704ffu); SPILL(); f_90c140(); if (g_unwind) return; RELOAD();
/* 7704ff: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 770501: mov ecx, esi */
  ecx = esi;
/* 770503: call dword ptr [eax + 0x194] */
  { uint32_t t = R32((uint32_t)(eax + 0x194u)); esp -= 4; W32(esp, 0x770509u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 770509: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 77050b: mov ecx, esi */
  ecx = esi;
/* 77050d: call dword ptr [edx + 0x190] */
  { uint32_t t = R32((uint32_t)(edx + 0x190u)); esp -= 4; W32(esp, 0x770513u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 770513: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770514: call 0x90bc20 */
  esp -= 4; W32(esp, 0x770519u); SPILL(); f_90bc20(); if (g_unwind) return; RELOAD();
/* 770519: test byte ptr [esi + 0x374], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x374u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 770520: je 0x77055d */
  if (zf) goto L_77055d;
L_770522: /* 770522: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 770528: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77052a: jne 0x77053d */
  if (!zf) goto L_77053d;
L_77052c: /* 77052c: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 770532: mov eax, dword ptr [eax + 0x1168] */
  eax = R32((uint32_t)(eax + 0x1168u));
/* 770538: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 77053b: jmp 0x770540 */
  goto L_770540;
L_77053d: /* 77053d: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_770540: /* 770540: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 770543: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770545: je 0x77055d */
  if (zf) goto L_77055d;
L_770547: /* 770547: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770549: je 0x77055d */
  if (zf) goto L_77055d;
L_77054b: /* 77054b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77054d: je 0x77055d */
  if (zf) goto L_77055d;
L_77054f: /* 77054f: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 770552: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770553: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770554: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770555: call 0x6cacb8 */
  esp -= 4; W32(esp, 0x77055au); SPILL(); f_6cacb8(); if (g_unwind) return; RELOAD();
/* 77055a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77055d: /* 77055d: mov eax, dword ptr [esi + 0x364] */
  eax = R32((uint32_t)(esi + 0x364u));
/* 770563: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 770565: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770566: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 77056a: call 0x6c5001 */
  esp -= 4; W32(esp, 0x77056fu); SPILL(); f_6c5001(); if (g_unwind) return; RELOAD();
/* 77056f: push 0xac4340 */
  { uint32_t v = 0xac4340u; esp -= 4; W32(esp, v); }
/* 770574: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77057b: call 0x6c7405 */
  esp -= 4; W32(esp, 0x770580u); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 770580: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 770583: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 770584: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 770585: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77058c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77058d: mov esp, ebp */
  esp = ebp;
/* 77058f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 770590: ret 4 */
  esp += 8; SPILL(); return;
}

void f_77019e(void) {
  LOAD_REGS();
L_77019e: /* 77019e: push 0xb1c9b0 */
  { uint32_t v = 0xb1c9b0u; esp -= 4; W32(esp, v); }
/* 7701a3: mov ecx, esi */
  ecx = esi;
/* 7701a5: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7701a9: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7701afu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7701af: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7701b1: je 0x7701c4 */
  if (zf) goto L_7701c4;
L_7701b3: /* 7701b3: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7701b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7701b7: call 0x90f700 */
  esp -= 4; W32(esp, 0x7701bcu); SPILL(); f_90f700(); if (g_unwind) return; RELOAD();
/* 7701bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7701bd: call 0x90f790 */
  esp -= 4; W32(esp, 0x7701c2u); SPILL(); f_90f790(); if (g_unwind) return; RELOAD();
/* 7701c2: jmp 0x770228 */
  goto L_770228;
L_7701c4: /* 7701c4: push 0xb1cee0 */
  { uint32_t v = 0xb1cee0u; esp -= 4; W32(esp, v); }
/* 7701c9: mov ecx, esi */
  ecx = esi;
/* 7701cb: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7701d1u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7701d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7701d3: je 0x7701e6 */
  if (zf) goto L_7701e6;
L_7701d5: /* 7701d5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7701d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7701d9: call 0x90d440 */
  esp -= 4; W32(esp, 0x7701deu); SPILL(); f_90d440(); if (g_unwind) return; RELOAD();
/* 7701de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7701df: call 0x90d4d0 */
  esp -= 4; W32(esp, 0x7701e4u); SPILL(); f_90d4d0(); if (g_unwind) return; RELOAD();
/* 7701e4: jmp 0x770228 */
  goto L_770228;
L_7701e6: /* 7701e6: push 0xb1d940 */
  { uint32_t v = 0xb1d940u; esp -= 4; W32(esp, v); }
/* 7701eb: mov ecx, esi */
  ecx = esi;
/* 7701ed: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7701f3u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7701f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7701f5: je 0x770208 */
  if (zf) goto L_770208;
L_7701f7: /* 7701f7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7701fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7701fb: call 0x90d6f0 */
  esp -= 4; W32(esp, 0x770200u); SPILL(); f_90d6f0(); if (g_unwind) return; RELOAD();
/* 770200: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770201: call 0x90d810 */
  esp -= 4; W32(esp, 0x770206u); SPILL(); f_90d810(); if (g_unwind) return; RELOAD();
/* 770206: jmp 0x770228 */
  goto L_770228;
L_770208: /* 770208: push 0xb1d410 */
  { uint32_t v = 0xb1d410u; esp -= 4; W32(esp, v); }
/* 77020d: mov ecx, esi */
  ecx = esi;
/* 77020f: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x770215u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 770215: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770217: je 0x77022e */
  if (zf) goto L_77022e;
L_770219: /* 770219: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77021c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77021d: call 0x90d580 */
  esp -= 4; W32(esp, 0x770222u); SPILL(); f_90d580(); if (g_unwind) return; RELOAD();
/* 770222: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770223: call 0x90d630 */
  esp -= 4; W32(esp, 0x770228u); SPILL(); f_90d630(); if (g_unwind) return; RELOAD();
L_770228: /* 770228: mov edi, eax */
  edi = eax;
/* 77022a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77022c: jne 0x770257 */
  if (!zf) goto L_770257;
L_77022e: /* 77022e: push 0xac42b0 */
  { uint32_t v = 0xac42b0u; esp -= 4; W32(esp, v); }
/* 770233: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 770238: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 77023a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77023b: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x770241u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 770241: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 770244: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 770247: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77024e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77024f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 770250: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 770251: mov esp, ebp */
  esp = ebp;
/* 770253: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 770254: ret 4 */
  esp += 8; SPILL(); return;
L_770257: /* 770257: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 77025a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 77025d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77025e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77025f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 770260: call 0x90c130 */
  esp -= 4; W32(esp, 0x770265u); SPILL(); f_90c130(); if (g_unwind) return; RELOAD();
/* 770265: test byte ptr [esi + 0x3c0], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3c0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 77026c: mov bl, 0xe */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xeu) & 0xffu);
/* 77026e: jne 0x770296 */
  if (!zf) goto L_770296;
L_770270: /* 770270: mov eax, dword ptr [esi + 0x364] */
  eax = R32((uint32_t)(esi + 0x364u));
/* 770276: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770278: je 0x77027f */
  if (zf) goto L_77027f;
L_77027a: /* 77027a: cmp byte ptr [eax + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77027d: je 0x770296 */
  if (zf) goto L_770296;
L_77027f: /* 77027f: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 770285: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770287: je 0x770454 */
  if (zf) goto L_770454;
L_77028d: /* 77028d: cmp byte ptr [eax + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 770290: jne 0x770454 */
  if (!zf) goto L_770454;
L_770296: /* 770296: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 770299: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77029a: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7702a0: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 7702a7: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 7702ae: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 7702b5: call dword ptr [0xcfa520] */
  esp -= 4; W32(esp, 0x7702bbu); SPILL(); f_4e3cc9(); if (g_unwind) return; /* Core!??0FCoords@@QAE@ABVFVector@@@Z */ RELOAD();
/* 7702bb: lea edx, [esi + 0x17c] */
  edx = (uint32_t)(esi + 0x17cu);
/* 7702c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7702c2: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7702c8: call dword ptr [0xcfa51c] */
  esp -= 4; W32(esp, 0x7702ceu); SPILL(); f_4e13e8(); if (g_unwind) return; /* Core!??XFCoords@@QAEAAV0@ABVFRotator@@@Z */ RELOAD();
/* 7702ce: mov ecx, dword ptr [esi + 0x170] */
  ecx = R32((uint32_t)(esi + 0x170u));
/* 7702d4: mov edx, dword ptr [esi + 0x174] */
  edx = R32((uint32_t)(esi + 0x174u));
/* 7702da: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7702dd: mov eax, esp */
  eax = esp;
/* 7702df: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7702e1: mov ecx, dword ptr [esi + 0x178] */
  ecx = R32((uint32_t)(esi + 0x178u));
/* 7702e7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7702ea: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 7702f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7702f1: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7702f4: call 0x6c882d */
  esp -= 4; W32(esp, 0x7702f9u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 7702f9: mov eax, dword ptr [ebp - 0xbc] */
  eax = R32((uint32_t)(ebp + 0xffffff44u));
/* 7702ff: mov ecx, dword ptr [ebp - 0xb0] */
  ecx = R32((uint32_t)(ebp + 0xffffff50u));
/* 770305: mov edx, dword ptr [ebp - 0xa4] */
  edx = R32((uint32_t)(ebp + 0xffffff5cu));
/* 77030b: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 77030e: mov eax, dword ptr [ebp - 0xb8] */
  eax = R32((uint32_t)(ebp + 0xffffff48u));
/* 770314: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 770317: mov al, byte ptr [esi + 0x3c0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3c0u))) & 0xffu);
/* 77031d: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 770320: mov ecx, dword ptr [ebp - 0xac] */
  ecx = R32((uint32_t)(ebp + 0xffffff54u));
/* 770326: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 770329: mov edx, dword ptr [ebp - 0xa0] */
  edx = R32((uint32_t)(ebp + 0xffffff60u));
/* 77032f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 770332: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 770334: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 770337: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 77033a: jne 0x77034b */
  if (!zf) goto L_77034b;
L_77033c: /* 77033c: mov eax, dword ptr [esi + 0x364] */
  eax = R32((uint32_t)(esi + 0x364u));
/* 770342: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770344: je 0x7703c0 */
  if (zf) goto L_7703c0;
L_770346: /* 770346: cmp byte ptr [eax + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 770349: jne 0x7703c0 */
  if (!zf) goto L_7703c0;
L_77034b: /* 77034b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 77034e: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 770351: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770352: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770353: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 770359: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77035a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77035c: call 0x90cec0 */
  esp -= 4; W32(esp, 0x770361u); SPILL(); f_90cec0(); if (g_unwind) return; RELOAD();
/* 770361: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 770364: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 770367: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770368: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770369: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 77036c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77036d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77036f: call 0x90cda0 */
  esp -= 4; W32(esp, 0x770374u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 770374: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 770377: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* 77037a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77037b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77037c: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 77037f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770380: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 770382: call 0x90cda0 */
  esp -= 4; W32(esp, 0x770387u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 770387: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 77038a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77038b: lea ecx, [esi + 0x378] */
  ecx = (uint32_t)(esi + 0x378u);
/* 770391: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770392: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x770397u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 770397: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77039a: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 77039d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77039e: lea eax, [esi + 0x384] */
  eax = (uint32_t)(esi + 0x384u);
/* 7703a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7703a5: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x7703aau); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 7703aa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7703ad: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 7703b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7703b1: lea edx, [esi + 0x390] */
  edx = (uint32_t)(esi + 0x390u);
/* 7703b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7703b8: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x7703bdu); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 7703bd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7703c0: /* 7703c0: test byte ptr [esi + 0x3c0], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3c0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7703c7: jne 0x7703d8 */
  if (!zf) goto L_7703d8;
L_7703c9: /* 7703c9: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 7703cf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7703d1: je 0x77044d */
  if (zf) goto L_77044d;
L_7703d3: /* 7703d3: cmp byte ptr [eax + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7703d6: jne 0x77044d */
  if (!zf) goto L_77044d;
L_7703d8: /* 7703d8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7703db: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 7703de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7703df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7703e0: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 7703e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7703e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7703e9: call 0x90cec0 */
  esp -= 4; W32(esp, 0x7703eeu); SPILL(); f_90cec0(); if (g_unwind) return; RELOAD();
/* 7703ee: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7703f1: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 7703f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7703f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7703f6: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 7703f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7703fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7703fc: call 0x90cda0 */
  esp -= 4; W32(esp, 0x770401u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 770401: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 770404: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* 770407: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770408: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770409: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 77040c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77040d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77040f: call 0x90cda0 */
  esp -= 4; W32(esp, 0x770414u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 770414: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 770417: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770418: lea ecx, [esi + 0x39c] */
  ecx = (uint32_t)(esi + 0x39cu);
/* 77041e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77041f: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x770424u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 770424: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 770427: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 77042a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77042b: lea eax, [esi + 0x3a8] */
  eax = (uint32_t)(esi + 0x3a8u);
/* 770431: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770432: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x770437u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 770437: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77043a: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 77043d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77043e: lea edx, [esi + 0x3b4] */
  edx = (uint32_t)(esi + 0x3b4u);
/* 770444: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770445: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x77044au); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 77044a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77044d: /* 77044d: and dword ptr [esi + 0x3c0], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3c0u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x3c0u), r);
  }
L_770454: /* 770454: mov eax, dword ptr [esi + 0x380] */
  eax = R32((uint32_t)(esi + 0x380u));
/* 77045a: mov ecx, dword ptr [esi + 0x37c] */
  ecx = R32((uint32_t)(esi + 0x37cu));
/* 770460: mov edx, dword ptr [esi + 0x378] */
  edx = R32((uint32_t)(esi + 0x378u));
/* 770466: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770467: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770468: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770469: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77046b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77046c: call 0x90c1c0 */
  esp -= 4; W32(esp, 0x770471u); SPILL(); f_90c1c0(); if (g_unwind) return; RELOAD();
/* 770471: mov eax, dword ptr [esi + 0x398] */
  eax = R32((uint32_t)(esi + 0x398u));
/* 770477: mov ecx, dword ptr [esi + 0x394] */
  ecx = R32((uint32_t)(esi + 0x394u));
/* 77047d: mov edx, dword ptr [esi + 0x390] */
  edx = R32((uint32_t)(esi + 0x390u));
/* 770483: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770484: mov eax, dword ptr [esi + 0x38c] */
  eax = R32((uint32_t)(esi + 0x38cu));
/* 77048a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77048b: mov ecx, dword ptr [esi + 0x388] */
  ecx = R32((uint32_t)(esi + 0x388u));
/* 770491: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770492: mov edx, dword ptr [esi + 0x384] */
  edx = R32((uint32_t)(esi + 0x384u));
/* 770498: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770499: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77049a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77049b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77049d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77049e: call 0x90c4e0 */
  esp -= 4; W32(esp, 0x7704a3u); SPILL(); f_90c4e0(); if (g_unwind) return; RELOAD();
/* 7704a3: mov eax, dword ptr [esi + 0x3a4] */
  eax = R32((uint32_t)(esi + 0x3a4u));
/* 7704a9: mov ecx, dword ptr [esi + 0x3a0] */
  ecx = R32((uint32_t)(esi + 0x3a0u));
/* 7704af: mov edx, dword ptr [esi + 0x39c] */
  edx = R32((uint32_t)(esi + 0x39cu));
/* 7704b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7704b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7704b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7704b8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7704ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7704bb: call 0x90c1c0 */
  esp -= 4; W32(esp, 0x7704c0u); SPILL(); f_90c1c0(); if (g_unwind) return; RELOAD();
/* 7704c0: mov eax, dword ptr [esi + 0x3bc] */
  eax = R32((uint32_t)(esi + 0x3bcu));
/* 7704c6: mov ecx, dword ptr [esi + 0x3b8] */
  ecx = R32((uint32_t)(esi + 0x3b8u));
/* 7704cc: mov edx, dword ptr [esi + 0x3b4] */
  edx = R32((uint32_t)(esi + 0x3b4u));
/* 7704d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7704d3: mov eax, dword ptr [esi + 0x3b0] */
  eax = R32((uint32_t)(esi + 0x3b0u));
/* 7704d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7704da: mov ecx, dword ptr [esi + 0x3ac] */
  ecx = R32((uint32_t)(esi + 0x3acu));
/* 7704e0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7704e1: mov edx, dword ptr [esi + 0x3a8] */
  edx = R32((uint32_t)(esi + 0x3a8u));
/* 7704e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7704e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7704e9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7704ea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7704ec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7704ed: call 0x90c4e0 */
  esp -= 4; W32(esp, 0x7704f2u); SPILL(); f_90c4e0(); if (g_unwind) return; RELOAD();
/* 7704f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7704f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7704f4: mov dword ptr [esi + 0x360], edi */
  W32((uint32_t)(esi + 0x360u), edi);
/* 7704fa: call 0x90c140 */
  esp -= 4; W32(esp, 0x7704ffu); SPILL(); f_90c140(); if (g_unwind) return; RELOAD();
/* 7704ff: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 770501: mov ecx, esi */
  ecx = esi;
/* 770503: call dword ptr [eax + 0x194] */
  { uint32_t t = R32((uint32_t)(eax + 0x194u)); esp -= 4; W32(esp, 0x770509u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 770509: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 77050b: mov ecx, esi */
  ecx = esi;
/* 77050d: call dword ptr [edx + 0x190] */
  { uint32_t t = R32((uint32_t)(edx + 0x190u)); esp -= 4; W32(esp, 0x770513u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 770513: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770514: call 0x90bc20 */
  esp -= 4; W32(esp, 0x770519u); SPILL(); f_90bc20(); if (g_unwind) return; RELOAD();
/* 770519: test byte ptr [esi + 0x374], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x374u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 770520: je 0x77055d */
  if (zf) goto L_77055d;
L_770522: /* 770522: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 770528: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77052a: jne 0x77053d */
  if (!zf) goto L_77053d;
L_77052c: /* 77052c: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 770532: mov eax, dword ptr [eax + 0x1168] */
  eax = R32((uint32_t)(eax + 0x1168u));
/* 770538: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 77053b: jmp 0x770540 */
  goto L_770540;
L_77053d: /* 77053d: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_770540: /* 770540: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 770543: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770545: je 0x77055d */
  if (zf) goto L_77055d;
L_770547: /* 770547: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770549: je 0x77055d */
  if (zf) goto L_77055d;
L_77054b: /* 77054b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77054d: je 0x77055d */
  if (zf) goto L_77055d;
L_77054f: /* 77054f: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 770552: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770553: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770554: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770555: call 0x6cacb8 */
  esp -= 4; W32(esp, 0x77055au); SPILL(); f_6cacb8(); if (g_unwind) return; RELOAD();
/* 77055a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77055d: /* 77055d: mov eax, dword ptr [esi + 0x364] */
  eax = R32((uint32_t)(esi + 0x364u));
/* 770563: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 770565: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770566: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 77056a: call 0x6c5001 */
  esp -= 4; W32(esp, 0x77056fu); SPILL(); f_6c5001(); if (g_unwind) return; RELOAD();
/* 77056f: push 0xac4340 */
  { uint32_t v = 0xac4340u; esp -= 4; W32(esp, v); }
/* 770574: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77057b: call 0x6c7405 */
  esp -= 4; W32(esp, 0x770580u); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 770580: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 770583: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 770584: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 770585: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77058c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77058d: mov esp, ebp */
  esp = ebp;
/* 77058f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 770590: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7701c4(void) {
  LOAD_REGS();
L_7701c4: /* 7701c4: push 0xb1cee0 */
  { uint32_t v = 0xb1cee0u; esp -= 4; W32(esp, v); }
/* 7701c9: mov ecx, esi */
  ecx = esi;
/* 7701cb: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7701d1u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7701d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7701d3: je 0x7701e6 */
  if (zf) goto L_7701e6;
L_7701d5: /* 7701d5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7701d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7701d9: call 0x90d440 */
  esp -= 4; W32(esp, 0x7701deu); SPILL(); f_90d440(); if (g_unwind) return; RELOAD();
/* 7701de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7701df: call 0x90d4d0 */
  esp -= 4; W32(esp, 0x7701e4u); SPILL(); f_90d4d0(); if (g_unwind) return; RELOAD();
/* 7701e4: jmp 0x770228 */
  goto L_770228;
L_7701e6: /* 7701e6: push 0xb1d940 */
  { uint32_t v = 0xb1d940u; esp -= 4; W32(esp, v); }
/* 7701eb: mov ecx, esi */
  ecx = esi;
/* 7701ed: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7701f3u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7701f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7701f5: je 0x770208 */
  if (zf) goto L_770208;
L_7701f7: /* 7701f7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7701fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7701fb: call 0x90d6f0 */
  esp -= 4; W32(esp, 0x770200u); SPILL(); f_90d6f0(); if (g_unwind) return; RELOAD();
/* 770200: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770201: call 0x90d810 */
  esp -= 4; W32(esp, 0x770206u); SPILL(); f_90d810(); if (g_unwind) return; RELOAD();
/* 770206: jmp 0x770228 */
  goto L_770228;
L_770208: /* 770208: push 0xb1d410 */
  { uint32_t v = 0xb1d410u; esp -= 4; W32(esp, v); }
/* 77020d: mov ecx, esi */
  ecx = esi;
/* 77020f: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x770215u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 770215: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770217: je 0x77022e */
  if (zf) goto L_77022e;
L_770219: /* 770219: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77021c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77021d: call 0x90d580 */
  esp -= 4; W32(esp, 0x770222u); SPILL(); f_90d580(); if (g_unwind) return; RELOAD();
/* 770222: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770223: call 0x90d630 */
  esp -= 4; W32(esp, 0x770228u); SPILL(); f_90d630(); if (g_unwind) return; RELOAD();
L_770228: /* 770228: mov edi, eax */
  edi = eax;
/* 77022a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77022c: jne 0x770257 */
  if (!zf) goto L_770257;
L_77022e: /* 77022e: push 0xac42b0 */
  { uint32_t v = 0xac42b0u; esp -= 4; W32(esp, v); }
/* 770233: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 770238: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 77023a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77023b: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x770241u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 770241: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 770244: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 770247: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77024e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77024f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 770250: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 770251: mov esp, ebp */
  esp = ebp;
/* 770253: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 770254: ret 4 */
  esp += 8; SPILL(); return;
L_770257: /* 770257: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 77025a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 77025d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77025e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77025f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 770260: call 0x90c130 */
  esp -= 4; W32(esp, 0x770265u); SPILL(); f_90c130(); if (g_unwind) return; RELOAD();
/* 770265: test byte ptr [esi + 0x3c0], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3c0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 77026c: mov bl, 0xe */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xeu) & 0xffu);
/* 77026e: jne 0x770296 */
  if (!zf) goto L_770296;
L_770270: /* 770270: mov eax, dword ptr [esi + 0x364] */
  eax = R32((uint32_t)(esi + 0x364u));
/* 770276: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770278: je 0x77027f */
  if (zf) goto L_77027f;
L_77027a: /* 77027a: cmp byte ptr [eax + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77027d: je 0x770296 */
  if (zf) goto L_770296;
L_77027f: /* 77027f: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 770285: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770287: je 0x770454 */
  if (zf) goto L_770454;
L_77028d: /* 77028d: cmp byte ptr [eax + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 770290: jne 0x770454 */
  if (!zf) goto L_770454;
L_770296: /* 770296: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 770299: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77029a: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7702a0: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 7702a7: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 7702ae: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 7702b5: call dword ptr [0xcfa520] */
  esp -= 4; W32(esp, 0x7702bbu); SPILL(); f_4e3cc9(); if (g_unwind) return; /* Core!??0FCoords@@QAE@ABVFVector@@@Z */ RELOAD();
/* 7702bb: lea edx, [esi + 0x17c] */
  edx = (uint32_t)(esi + 0x17cu);
/* 7702c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7702c2: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7702c8: call dword ptr [0xcfa51c] */
  esp -= 4; W32(esp, 0x7702ceu); SPILL(); f_4e13e8(); if (g_unwind) return; /* Core!??XFCoords@@QAEAAV0@ABVFRotator@@@Z */ RELOAD();
/* 7702ce: mov ecx, dword ptr [esi + 0x170] */
  ecx = R32((uint32_t)(esi + 0x170u));
/* 7702d4: mov edx, dword ptr [esi + 0x174] */
  edx = R32((uint32_t)(esi + 0x174u));
/* 7702da: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7702dd: mov eax, esp */
  eax = esp;
/* 7702df: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7702e1: mov ecx, dword ptr [esi + 0x178] */
  ecx = R32((uint32_t)(esi + 0x178u));
/* 7702e7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7702ea: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 7702f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7702f1: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7702f4: call 0x6c882d */
  esp -= 4; W32(esp, 0x7702f9u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 7702f9: mov eax, dword ptr [ebp - 0xbc] */
  eax = R32((uint32_t)(ebp + 0xffffff44u));
/* 7702ff: mov ecx, dword ptr [ebp - 0xb0] */
  ecx = R32((uint32_t)(ebp + 0xffffff50u));
/* 770305: mov edx, dword ptr [ebp - 0xa4] */
  edx = R32((uint32_t)(ebp + 0xffffff5cu));
/* 77030b: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 77030e: mov eax, dword ptr [ebp - 0xb8] */
  eax = R32((uint32_t)(ebp + 0xffffff48u));
/* 770314: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 770317: mov al, byte ptr [esi + 0x3c0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3c0u))) & 0xffu);
/* 77031d: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 770320: mov ecx, dword ptr [ebp - 0xac] */
  ecx = R32((uint32_t)(ebp + 0xffffff54u));
/* 770326: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 770329: mov edx, dword ptr [ebp - 0xa0] */
  edx = R32((uint32_t)(ebp + 0xffffff60u));
/* 77032f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 770332: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 770334: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 770337: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 77033a: jne 0x77034b */
  if (!zf) goto L_77034b;
L_77033c: /* 77033c: mov eax, dword ptr [esi + 0x364] */
  eax = R32((uint32_t)(esi + 0x364u));
/* 770342: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770344: je 0x7703c0 */
  if (zf) goto L_7703c0;
L_770346: /* 770346: cmp byte ptr [eax + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 770349: jne 0x7703c0 */
  if (!zf) goto L_7703c0;
L_77034b: /* 77034b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 77034e: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 770351: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770352: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770353: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 770359: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77035a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77035c: call 0x90cec0 */
  esp -= 4; W32(esp, 0x770361u); SPILL(); f_90cec0(); if (g_unwind) return; RELOAD();
/* 770361: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 770364: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 770367: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770368: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770369: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 77036c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77036d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77036f: call 0x90cda0 */
  esp -= 4; W32(esp, 0x770374u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 770374: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 770377: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* 77037a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77037b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77037c: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 77037f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770380: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 770382: call 0x90cda0 */
  esp -= 4; W32(esp, 0x770387u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 770387: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 77038a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77038b: lea ecx, [esi + 0x378] */
  ecx = (uint32_t)(esi + 0x378u);
/* 770391: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770392: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x770397u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 770397: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77039a: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 77039d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77039e: lea eax, [esi + 0x384] */
  eax = (uint32_t)(esi + 0x384u);
/* 7703a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7703a5: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x7703aau); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 7703aa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7703ad: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 7703b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7703b1: lea edx, [esi + 0x390] */
  edx = (uint32_t)(esi + 0x390u);
/* 7703b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7703b8: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x7703bdu); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 7703bd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7703c0: /* 7703c0: test byte ptr [esi + 0x3c0], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3c0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7703c7: jne 0x7703d8 */
  if (!zf) goto L_7703d8;
L_7703c9: /* 7703c9: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 7703cf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7703d1: je 0x77044d */
  if (zf) goto L_77044d;
L_7703d3: /* 7703d3: cmp byte ptr [eax + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7703d6: jne 0x77044d */
  if (!zf) goto L_77044d;
L_7703d8: /* 7703d8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7703db: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 7703de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7703df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7703e0: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 7703e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7703e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7703e9: call 0x90cec0 */
  esp -= 4; W32(esp, 0x7703eeu); SPILL(); f_90cec0(); if (g_unwind) return; RELOAD();
/* 7703ee: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7703f1: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 7703f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7703f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7703f6: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 7703f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7703fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7703fc: call 0x90cda0 */
  esp -= 4; W32(esp, 0x770401u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 770401: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 770404: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* 770407: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770408: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770409: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 77040c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77040d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77040f: call 0x90cda0 */
  esp -= 4; W32(esp, 0x770414u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 770414: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 770417: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770418: lea ecx, [esi + 0x39c] */
  ecx = (uint32_t)(esi + 0x39cu);
/* 77041e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77041f: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x770424u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 770424: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 770427: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 77042a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77042b: lea eax, [esi + 0x3a8] */
  eax = (uint32_t)(esi + 0x3a8u);
/* 770431: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770432: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x770437u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 770437: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77043a: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 77043d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77043e: lea edx, [esi + 0x3b4] */
  edx = (uint32_t)(esi + 0x3b4u);
/* 770444: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770445: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x77044au); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 77044a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77044d: /* 77044d: and dword ptr [esi + 0x3c0], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3c0u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x3c0u), r);
  }
L_770454: /* 770454: mov eax, dword ptr [esi + 0x380] */
  eax = R32((uint32_t)(esi + 0x380u));
/* 77045a: mov ecx, dword ptr [esi + 0x37c] */
  ecx = R32((uint32_t)(esi + 0x37cu));
/* 770460: mov edx, dword ptr [esi + 0x378] */
  edx = R32((uint32_t)(esi + 0x378u));
/* 770466: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770467: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770468: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770469: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77046b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77046c: call 0x90c1c0 */
  esp -= 4; W32(esp, 0x770471u); SPILL(); f_90c1c0(); if (g_unwind) return; RELOAD();
/* 770471: mov eax, dword ptr [esi + 0x398] */
  eax = R32((uint32_t)(esi + 0x398u));
/* 770477: mov ecx, dword ptr [esi + 0x394] */
  ecx = R32((uint32_t)(esi + 0x394u));
/* 77047d: mov edx, dword ptr [esi + 0x390] */
  edx = R32((uint32_t)(esi + 0x390u));
/* 770483: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770484: mov eax, dword ptr [esi + 0x38c] */
  eax = R32((uint32_t)(esi + 0x38cu));
/* 77048a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77048b: mov ecx, dword ptr [esi + 0x388] */
  ecx = R32((uint32_t)(esi + 0x388u));
/* 770491: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770492: mov edx, dword ptr [esi + 0x384] */
  edx = R32((uint32_t)(esi + 0x384u));
/* 770498: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770499: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77049a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77049b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77049d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77049e: call 0x90c4e0 */
  esp -= 4; W32(esp, 0x7704a3u); SPILL(); f_90c4e0(); if (g_unwind) return; RELOAD();
/* 7704a3: mov eax, dword ptr [esi + 0x3a4] */
  eax = R32((uint32_t)(esi + 0x3a4u));
/* 7704a9: mov ecx, dword ptr [esi + 0x3a0] */
  ecx = R32((uint32_t)(esi + 0x3a0u));
/* 7704af: mov edx, dword ptr [esi + 0x39c] */
  edx = R32((uint32_t)(esi + 0x39cu));
/* 7704b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7704b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7704b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7704b8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7704ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7704bb: call 0x90c1c0 */
  esp -= 4; W32(esp, 0x7704c0u); SPILL(); f_90c1c0(); if (g_unwind) return; RELOAD();
/* 7704c0: mov eax, dword ptr [esi + 0x3bc] */
  eax = R32((uint32_t)(esi + 0x3bcu));
/* 7704c6: mov ecx, dword ptr [esi + 0x3b8] */
  ecx = R32((uint32_t)(esi + 0x3b8u));
/* 7704cc: mov edx, dword ptr [esi + 0x3b4] */
  edx = R32((uint32_t)(esi + 0x3b4u));
/* 7704d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7704d3: mov eax, dword ptr [esi + 0x3b0] */
  eax = R32((uint32_t)(esi + 0x3b0u));
/* 7704d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7704da: mov ecx, dword ptr [esi + 0x3ac] */
  ecx = R32((uint32_t)(esi + 0x3acu));
/* 7704e0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7704e1: mov edx, dword ptr [esi + 0x3a8] */
  edx = R32((uint32_t)(esi + 0x3a8u));
/* 7704e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7704e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7704e9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7704ea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7704ec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7704ed: call 0x90c4e0 */
  esp -= 4; W32(esp, 0x7704f2u); SPILL(); f_90c4e0(); if (g_unwind) return; RELOAD();
/* 7704f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7704f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7704f4: mov dword ptr [esi + 0x360], edi */
  W32((uint32_t)(esi + 0x360u), edi);
/* 7704fa: call 0x90c140 */
  esp -= 4; W32(esp, 0x7704ffu); SPILL(); f_90c140(); if (g_unwind) return; RELOAD();
/* 7704ff: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 770501: mov ecx, esi */
  ecx = esi;
/* 770503: call dword ptr [eax + 0x194] */
  { uint32_t t = R32((uint32_t)(eax + 0x194u)); esp -= 4; W32(esp, 0x770509u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 770509: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 77050b: mov ecx, esi */
  ecx = esi;
/* 77050d: call dword ptr [edx + 0x190] */
  { uint32_t t = R32((uint32_t)(edx + 0x190u)); esp -= 4; W32(esp, 0x770513u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 770513: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770514: call 0x90bc20 */
  esp -= 4; W32(esp, 0x770519u); SPILL(); f_90bc20(); if (g_unwind) return; RELOAD();
/* 770519: test byte ptr [esi + 0x374], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x374u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 770520: je 0x77055d */
  if (zf) goto L_77055d;
L_770522: /* 770522: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 770528: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77052a: jne 0x77053d */
  if (!zf) goto L_77053d;
L_77052c: /* 77052c: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 770532: mov eax, dword ptr [eax + 0x1168] */
  eax = R32((uint32_t)(eax + 0x1168u));
/* 770538: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 77053b: jmp 0x770540 */
  goto L_770540;
L_77053d: /* 77053d: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_770540: /* 770540: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 770543: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770545: je 0x77055d */
  if (zf) goto L_77055d;
L_770547: /* 770547: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770549: je 0x77055d */
  if (zf) goto L_77055d;
L_77054b: /* 77054b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77054d: je 0x77055d */
  if (zf) goto L_77055d;
L_77054f: /* 77054f: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 770552: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770553: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770554: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770555: call 0x6cacb8 */
  esp -= 4; W32(esp, 0x77055au); SPILL(); f_6cacb8(); if (g_unwind) return; RELOAD();
/* 77055a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77055d: /* 77055d: mov eax, dword ptr [esi + 0x364] */
  eax = R32((uint32_t)(esi + 0x364u));
/* 770563: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 770565: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770566: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 77056a: call 0x6c5001 */
  esp -= 4; W32(esp, 0x77056fu); SPILL(); f_6c5001(); if (g_unwind) return; RELOAD();
/* 77056f: push 0xac4340 */
  { uint32_t v = 0xac4340u; esp -= 4; W32(esp, v); }
/* 770574: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77057b: call 0x6c7405 */
  esp -= 4; W32(esp, 0x770580u); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 770580: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 770583: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 770584: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 770585: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77058c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77058d: mov esp, ebp */
  esp = ebp;
/* 77058f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 770590: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7701e6(void) {
  LOAD_REGS();
L_7701e6: /* 7701e6: push 0xb1d940 */
  { uint32_t v = 0xb1d940u; esp -= 4; W32(esp, v); }
/* 7701eb: mov ecx, esi */
  ecx = esi;
/* 7701ed: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7701f3u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7701f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7701f5: je 0x770208 */
  if (zf) goto L_770208;
L_7701f7: /* 7701f7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7701fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7701fb: call 0x90d6f0 */
  esp -= 4; W32(esp, 0x770200u); SPILL(); f_90d6f0(); if (g_unwind) return; RELOAD();
/* 770200: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770201: call 0x90d810 */
  esp -= 4; W32(esp, 0x770206u); SPILL(); f_90d810(); if (g_unwind) return; RELOAD();
/* 770206: jmp 0x770228 */
  goto L_770228;
L_770208: /* 770208: push 0xb1d410 */
  { uint32_t v = 0xb1d410u; esp -= 4; W32(esp, v); }
/* 77020d: mov ecx, esi */
  ecx = esi;
/* 77020f: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x770215u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 770215: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770217: je 0x77022e */
  if (zf) goto L_77022e;
L_770219: /* 770219: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77021c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77021d: call 0x90d580 */
  esp -= 4; W32(esp, 0x770222u); SPILL(); f_90d580(); if (g_unwind) return; RELOAD();
/* 770222: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770223: call 0x90d630 */
  esp -= 4; W32(esp, 0x770228u); SPILL(); f_90d630(); if (g_unwind) return; RELOAD();
L_770228: /* 770228: mov edi, eax */
  edi = eax;
/* 77022a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77022c: jne 0x770257 */
  if (!zf) goto L_770257;
L_77022e: /* 77022e: push 0xac42b0 */
  { uint32_t v = 0xac42b0u; esp -= 4; W32(esp, v); }
/* 770233: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 770238: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 77023a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77023b: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x770241u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 770241: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 770244: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 770247: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77024e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77024f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 770250: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 770251: mov esp, ebp */
  esp = ebp;
/* 770253: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 770254: ret 4 */
  esp += 8; SPILL(); return;
L_770257: /* 770257: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 77025a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 77025d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77025e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77025f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 770260: call 0x90c130 */
  esp -= 4; W32(esp, 0x770265u); SPILL(); f_90c130(); if (g_unwind) return; RELOAD();
/* 770265: test byte ptr [esi + 0x3c0], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3c0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 77026c: mov bl, 0xe */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xeu) & 0xffu);
/* 77026e: jne 0x770296 */
  if (!zf) goto L_770296;
L_770270: /* 770270: mov eax, dword ptr [esi + 0x364] */
  eax = R32((uint32_t)(esi + 0x364u));
/* 770276: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770278: je 0x77027f */
  if (zf) goto L_77027f;
L_77027a: /* 77027a: cmp byte ptr [eax + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77027d: je 0x770296 */
  if (zf) goto L_770296;
L_77027f: /* 77027f: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 770285: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770287: je 0x770454 */
  if (zf) goto L_770454;
L_77028d: /* 77028d: cmp byte ptr [eax + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 770290: jne 0x770454 */
  if (!zf) goto L_770454;
L_770296: /* 770296: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 770299: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77029a: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7702a0: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 7702a7: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 7702ae: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 7702b5: call dword ptr [0xcfa520] */
  esp -= 4; W32(esp, 0x7702bbu); SPILL(); f_4e3cc9(); if (g_unwind) return; /* Core!??0FCoords@@QAE@ABVFVector@@@Z */ RELOAD();
/* 7702bb: lea edx, [esi + 0x17c] */
  edx = (uint32_t)(esi + 0x17cu);
/* 7702c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7702c2: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7702c8: call dword ptr [0xcfa51c] */
  esp -= 4; W32(esp, 0x7702ceu); SPILL(); f_4e13e8(); if (g_unwind) return; /* Core!??XFCoords@@QAEAAV0@ABVFRotator@@@Z */ RELOAD();
/* 7702ce: mov ecx, dword ptr [esi + 0x170] */
  ecx = R32((uint32_t)(esi + 0x170u));
/* 7702d4: mov edx, dword ptr [esi + 0x174] */
  edx = R32((uint32_t)(esi + 0x174u));
/* 7702da: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7702dd: mov eax, esp */
  eax = esp;
/* 7702df: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7702e1: mov ecx, dword ptr [esi + 0x178] */
  ecx = R32((uint32_t)(esi + 0x178u));
/* 7702e7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7702ea: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 7702f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7702f1: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7702f4: call 0x6c882d */
  esp -= 4; W32(esp, 0x7702f9u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 7702f9: mov eax, dword ptr [ebp - 0xbc] */
  eax = R32((uint32_t)(ebp + 0xffffff44u));
/* 7702ff: mov ecx, dword ptr [ebp - 0xb0] */
  ecx = R32((uint32_t)(ebp + 0xffffff50u));
/* 770305: mov edx, dword ptr [ebp - 0xa4] */
  edx = R32((uint32_t)(ebp + 0xffffff5cu));
/* 77030b: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 77030e: mov eax, dword ptr [ebp - 0xb8] */
  eax = R32((uint32_t)(ebp + 0xffffff48u));
/* 770314: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 770317: mov al, byte ptr [esi + 0x3c0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3c0u))) & 0xffu);
/* 77031d: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 770320: mov ecx, dword ptr [ebp - 0xac] */
  ecx = R32((uint32_t)(ebp + 0xffffff54u));
/* 770326: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 770329: mov edx, dword ptr [ebp - 0xa0] */
  edx = R32((uint32_t)(ebp + 0xffffff60u));
/* 77032f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 770332: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 770334: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 770337: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 77033a: jne 0x77034b */
  if (!zf) goto L_77034b;
L_77033c: /* 77033c: mov eax, dword ptr [esi + 0x364] */
  eax = R32((uint32_t)(esi + 0x364u));
/* 770342: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770344: je 0x7703c0 */
  if (zf) goto L_7703c0;
L_770346: /* 770346: cmp byte ptr [eax + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 770349: jne 0x7703c0 */
  if (!zf) goto L_7703c0;
L_77034b: /* 77034b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 77034e: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 770351: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770352: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770353: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 770359: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77035a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77035c: call 0x90cec0 */
  esp -= 4; W32(esp, 0x770361u); SPILL(); f_90cec0(); if (g_unwind) return; RELOAD();
/* 770361: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 770364: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 770367: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770368: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770369: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 77036c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77036d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77036f: call 0x90cda0 */
  esp -= 4; W32(esp, 0x770374u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 770374: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 770377: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* 77037a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77037b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77037c: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 77037f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770380: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 770382: call 0x90cda0 */
  esp -= 4; W32(esp, 0x770387u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 770387: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 77038a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77038b: lea ecx, [esi + 0x378] */
  ecx = (uint32_t)(esi + 0x378u);
/* 770391: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770392: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x770397u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 770397: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77039a: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 77039d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77039e: lea eax, [esi + 0x384] */
  eax = (uint32_t)(esi + 0x384u);
/* 7703a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7703a5: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x7703aau); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 7703aa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7703ad: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 7703b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7703b1: lea edx, [esi + 0x390] */
  edx = (uint32_t)(esi + 0x390u);
/* 7703b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7703b8: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x7703bdu); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 7703bd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7703c0: /* 7703c0: test byte ptr [esi + 0x3c0], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3c0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7703c7: jne 0x7703d8 */
  if (!zf) goto L_7703d8;
L_7703c9: /* 7703c9: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 7703cf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7703d1: je 0x77044d */
  if (zf) goto L_77044d;
L_7703d3: /* 7703d3: cmp byte ptr [eax + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7703d6: jne 0x77044d */
  if (!zf) goto L_77044d;
L_7703d8: /* 7703d8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7703db: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 7703de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7703df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7703e0: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 7703e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7703e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7703e9: call 0x90cec0 */
  esp -= 4; W32(esp, 0x7703eeu); SPILL(); f_90cec0(); if (g_unwind) return; RELOAD();
/* 7703ee: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7703f1: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 7703f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7703f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7703f6: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 7703f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7703fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7703fc: call 0x90cda0 */
  esp -= 4; W32(esp, 0x770401u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 770401: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 770404: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* 770407: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770408: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770409: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 77040c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77040d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77040f: call 0x90cda0 */
  esp -= 4; W32(esp, 0x770414u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 770414: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 770417: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770418: lea ecx, [esi + 0x39c] */
  ecx = (uint32_t)(esi + 0x39cu);
/* 77041e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77041f: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x770424u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 770424: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 770427: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 77042a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77042b: lea eax, [esi + 0x3a8] */
  eax = (uint32_t)(esi + 0x3a8u);
/* 770431: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770432: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x770437u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 770437: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77043a: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 77043d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77043e: lea edx, [esi + 0x3b4] */
  edx = (uint32_t)(esi + 0x3b4u);
/* 770444: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770445: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x77044au); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 77044a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77044d: /* 77044d: and dword ptr [esi + 0x3c0], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3c0u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x3c0u), r);
  }
L_770454: /* 770454: mov eax, dword ptr [esi + 0x380] */
  eax = R32((uint32_t)(esi + 0x380u));
/* 77045a: mov ecx, dword ptr [esi + 0x37c] */
  ecx = R32((uint32_t)(esi + 0x37cu));
/* 770460: mov edx, dword ptr [esi + 0x378] */
  edx = R32((uint32_t)(esi + 0x378u));
/* 770466: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770467: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770468: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770469: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77046b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77046c: call 0x90c1c0 */
  esp -= 4; W32(esp, 0x770471u); SPILL(); f_90c1c0(); if (g_unwind) return; RELOAD();
/* 770471: mov eax, dword ptr [esi + 0x398] */
  eax = R32((uint32_t)(esi + 0x398u));
/* 770477: mov ecx, dword ptr [esi + 0x394] */
  ecx = R32((uint32_t)(esi + 0x394u));
/* 77047d: mov edx, dword ptr [esi + 0x390] */
  edx = R32((uint32_t)(esi + 0x390u));
/* 770483: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770484: mov eax, dword ptr [esi + 0x38c] */
  eax = R32((uint32_t)(esi + 0x38cu));
/* 77048a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77048b: mov ecx, dword ptr [esi + 0x388] */
  ecx = R32((uint32_t)(esi + 0x388u));
/* 770491: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770492: mov edx, dword ptr [esi + 0x384] */
  edx = R32((uint32_t)(esi + 0x384u));
/* 770498: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770499: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77049a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77049b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77049d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77049e: call 0x90c4e0 */
  esp -= 4; W32(esp, 0x7704a3u); SPILL(); f_90c4e0(); if (g_unwind) return; RELOAD();
/* 7704a3: mov eax, dword ptr [esi + 0x3a4] */
  eax = R32((uint32_t)(esi + 0x3a4u));
/* 7704a9: mov ecx, dword ptr [esi + 0x3a0] */
  ecx = R32((uint32_t)(esi + 0x3a0u));
/* 7704af: mov edx, dword ptr [esi + 0x39c] */
  edx = R32((uint32_t)(esi + 0x39cu));
/* 7704b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7704b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7704b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7704b8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7704ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7704bb: call 0x90c1c0 */
  esp -= 4; W32(esp, 0x7704c0u); SPILL(); f_90c1c0(); if (g_unwind) return; RELOAD();
/* 7704c0: mov eax, dword ptr [esi + 0x3bc] */
  eax = R32((uint32_t)(esi + 0x3bcu));
/* 7704c6: mov ecx, dword ptr [esi + 0x3b8] */
  ecx = R32((uint32_t)(esi + 0x3b8u));
/* 7704cc: mov edx, dword ptr [esi + 0x3b4] */
  edx = R32((uint32_t)(esi + 0x3b4u));
/* 7704d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7704d3: mov eax, dword ptr [esi + 0x3b0] */
  eax = R32((uint32_t)(esi + 0x3b0u));
/* 7704d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7704da: mov ecx, dword ptr [esi + 0x3ac] */
  ecx = R32((uint32_t)(esi + 0x3acu));
/* 7704e0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7704e1: mov edx, dword ptr [esi + 0x3a8] */
  edx = R32((uint32_t)(esi + 0x3a8u));
/* 7704e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7704e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7704e9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7704ea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7704ec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7704ed: call 0x90c4e0 */
  esp -= 4; W32(esp, 0x7704f2u); SPILL(); f_90c4e0(); if (g_unwind) return; RELOAD();
/* 7704f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7704f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7704f4: mov dword ptr [esi + 0x360], edi */
  W32((uint32_t)(esi + 0x360u), edi);
/* 7704fa: call 0x90c140 */
  esp -= 4; W32(esp, 0x7704ffu); SPILL(); f_90c140(); if (g_unwind) return; RELOAD();
/* 7704ff: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 770501: mov ecx, esi */
  ecx = esi;
/* 770503: call dword ptr [eax + 0x194] */
  { uint32_t t = R32((uint32_t)(eax + 0x194u)); esp -= 4; W32(esp, 0x770509u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 770509: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 77050b: mov ecx, esi */
  ecx = esi;
/* 77050d: call dword ptr [edx + 0x190] */
  { uint32_t t = R32((uint32_t)(edx + 0x190u)); esp -= 4; W32(esp, 0x770513u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 770513: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770514: call 0x90bc20 */
  esp -= 4; W32(esp, 0x770519u); SPILL(); f_90bc20(); if (g_unwind) return; RELOAD();
/* 770519: test byte ptr [esi + 0x374], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x374u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 770520: je 0x77055d */
  if (zf) goto L_77055d;
L_770522: /* 770522: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 770528: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77052a: jne 0x77053d */
  if (!zf) goto L_77053d;
L_77052c: /* 77052c: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 770532: mov eax, dword ptr [eax + 0x1168] */
  eax = R32((uint32_t)(eax + 0x1168u));
/* 770538: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 77053b: jmp 0x770540 */
  goto L_770540;
L_77053d: /* 77053d: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_770540: /* 770540: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 770543: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770545: je 0x77055d */
  if (zf) goto L_77055d;
L_770547: /* 770547: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770549: je 0x77055d */
  if (zf) goto L_77055d;
L_77054b: /* 77054b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77054d: je 0x77055d */
  if (zf) goto L_77055d;
L_77054f: /* 77054f: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 770552: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770553: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770554: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770555: call 0x6cacb8 */
  esp -= 4; W32(esp, 0x77055au); SPILL(); f_6cacb8(); if (g_unwind) return; RELOAD();
/* 77055a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77055d: /* 77055d: mov eax, dword ptr [esi + 0x364] */
  eax = R32((uint32_t)(esi + 0x364u));
/* 770563: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 770565: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770566: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 77056a: call 0x6c5001 */
  esp -= 4; W32(esp, 0x77056fu); SPILL(); f_6c5001(); if (g_unwind) return; RELOAD();
/* 77056f: push 0xac4340 */
  { uint32_t v = 0xac4340u; esp -= 4; W32(esp, v); }
/* 770574: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77057b: call 0x6c7405 */
  esp -= 4; W32(esp, 0x770580u); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 770580: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 770583: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 770584: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 770585: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77058c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77058d: mov esp, ebp */
  esp = ebp;
/* 77058f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 770590: ret 4 */
  esp += 8; SPILL(); return;
}

void f_770208(void) {
  LOAD_REGS();
L_770208: /* 770208: push 0xb1d410 */
  { uint32_t v = 0xb1d410u; esp -= 4; W32(esp, v); }
/* 77020d: mov ecx, esi */
  ecx = esi;
/* 77020f: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x770215u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 770215: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770217: je 0x77022e */
  if (zf) goto L_77022e;
L_770219: /* 770219: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77021c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77021d: call 0x90d580 */
  esp -= 4; W32(esp, 0x770222u); SPILL(); f_90d580(); if (g_unwind) return; RELOAD();
/* 770222: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770223: call 0x90d630 */
  esp -= 4; W32(esp, 0x770228u); SPILL(); f_90d630(); if (g_unwind) return; RELOAD();
/* 770228: mov edi, eax */
  edi = eax;
/* 77022a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77022c: jne 0x770257 */
  if (!zf) goto L_770257;
L_77022e: /* 77022e: push 0xac42b0 */
  { uint32_t v = 0xac42b0u; esp -= 4; W32(esp, v); }
/* 770233: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 770238: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 77023a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77023b: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x770241u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 770241: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 770244: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 770247: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77024e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77024f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 770250: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 770251: mov esp, ebp */
  esp = ebp;
/* 770253: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 770254: ret 4 */
  esp += 8; SPILL(); return;
L_770257: /* 770257: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 77025a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 77025d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77025e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77025f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 770260: call 0x90c130 */
  esp -= 4; W32(esp, 0x770265u); SPILL(); f_90c130(); if (g_unwind) return; RELOAD();
/* 770265: test byte ptr [esi + 0x3c0], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3c0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 77026c: mov bl, 0xe */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xeu) & 0xffu);
/* 77026e: jne 0x770296 */
  if (!zf) goto L_770296;
L_770270: /* 770270: mov eax, dword ptr [esi + 0x364] */
  eax = R32((uint32_t)(esi + 0x364u));
/* 770276: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770278: je 0x77027f */
  if (zf) goto L_77027f;
L_77027a: /* 77027a: cmp byte ptr [eax + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77027d: je 0x770296 */
  if (zf) goto L_770296;
L_77027f: /* 77027f: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 770285: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770287: je 0x770454 */
  if (zf) goto L_770454;
L_77028d: /* 77028d: cmp byte ptr [eax + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 770290: jne 0x770454 */
  if (!zf) goto L_770454;
L_770296: /* 770296: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 770299: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77029a: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7702a0: mov dword ptr [ebp - 0x54], 0 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x0u);
/* 7702a7: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 7702ae: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 7702b5: call dword ptr [0xcfa520] */
  esp -= 4; W32(esp, 0x7702bbu); SPILL(); f_4e3cc9(); if (g_unwind) return; /* Core!??0FCoords@@QAE@ABVFVector@@@Z */ RELOAD();
/* 7702bb: lea edx, [esi + 0x17c] */
  edx = (uint32_t)(esi + 0x17cu);
/* 7702c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7702c2: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 7702c8: call dword ptr [0xcfa51c] */
  esp -= 4; W32(esp, 0x7702ceu); SPILL(); f_4e13e8(); if (g_unwind) return; /* Core!??XFCoords@@QAEAAV0@ABVFRotator@@@Z */ RELOAD();
/* 7702ce: mov ecx, dword ptr [esi + 0x170] */
  ecx = R32((uint32_t)(esi + 0x170u));
/* 7702d4: mov edx, dword ptr [esi + 0x174] */
  edx = R32((uint32_t)(esi + 0x174u));
/* 7702da: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7702dd: mov eax, esp */
  eax = esp;
/* 7702df: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7702e1: mov ecx, dword ptr [esi + 0x178] */
  ecx = R32((uint32_t)(esi + 0x178u));
/* 7702e7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7702ea: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 7702f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7702f1: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7702f4: call 0x6c882d */
  esp -= 4; W32(esp, 0x7702f9u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 7702f9: mov eax, dword ptr [ebp - 0xbc] */
  eax = R32((uint32_t)(ebp + 0xffffff44u));
/* 7702ff: mov ecx, dword ptr [ebp - 0xb0] */
  ecx = R32((uint32_t)(ebp + 0xffffff50u));
/* 770305: mov edx, dword ptr [ebp - 0xa4] */
  edx = R32((uint32_t)(ebp + 0xffffff5cu));
/* 77030b: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 77030e: mov eax, dword ptr [ebp - 0xb8] */
  eax = R32((uint32_t)(ebp + 0xffffff48u));
/* 770314: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 770317: mov al, byte ptr [esi + 0x3c0] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3c0u))) & 0xffu);
/* 77031d: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 770320: mov ecx, dword ptr [ebp - 0xac] */
  ecx = R32((uint32_t)(ebp + 0xffffff54u));
/* 770326: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 770329: mov edx, dword ptr [ebp - 0xa0] */
  edx = R32((uint32_t)(ebp + 0xffffff60u));
/* 77032f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 770332: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 770334: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 770337: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 77033a: jne 0x77034b */
  if (!zf) goto L_77034b;
L_77033c: /* 77033c: mov eax, dword ptr [esi + 0x364] */
  eax = R32((uint32_t)(esi + 0x364u));
/* 770342: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770344: je 0x7703c0 */
  if (zf) goto L_7703c0;
L_770346: /* 770346: cmp byte ptr [eax + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 770349: jne 0x7703c0 */
  if (!zf) goto L_7703c0;
L_77034b: /* 77034b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 77034e: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 770351: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770352: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770353: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 770359: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77035a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77035c: call 0x90cec0 */
  esp -= 4; W32(esp, 0x770361u); SPILL(); f_90cec0(); if (g_unwind) return; RELOAD();
/* 770361: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 770364: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 770367: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770368: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770369: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 77036c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77036d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77036f: call 0x90cda0 */
  esp -= 4; W32(esp, 0x770374u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 770374: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 770377: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* 77037a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77037b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77037c: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 77037f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770380: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 770382: call 0x90cda0 */
  esp -= 4; W32(esp, 0x770387u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 770387: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 77038a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77038b: lea ecx, [esi + 0x378] */
  ecx = (uint32_t)(esi + 0x378u);
/* 770391: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770392: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x770397u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 770397: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77039a: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 77039d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77039e: lea eax, [esi + 0x384] */
  eax = (uint32_t)(esi + 0x384u);
/* 7703a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7703a5: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x7703aau); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 7703aa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7703ad: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 7703b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7703b1: lea edx, [esi + 0x390] */
  edx = (uint32_t)(esi + 0x390u);
/* 7703b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7703b8: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x7703bdu); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 7703bd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7703c0: /* 7703c0: test byte ptr [esi + 0x3c0], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3c0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7703c7: jne 0x7703d8 */
  if (!zf) goto L_7703d8;
L_7703c9: /* 7703c9: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 7703cf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7703d1: je 0x77044d */
  if (zf) goto L_77044d;
L_7703d3: /* 7703d3: cmp byte ptr [eax + 0x50], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7703d6: jne 0x77044d */
  if (!zf) goto L_77044d;
L_7703d8: /* 7703d8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7703db: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 7703de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7703df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7703e0: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 7703e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7703e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7703e9: call 0x90cec0 */
  esp -= 4; W32(esp, 0x7703eeu); SPILL(); f_90cec0(); if (g_unwind) return; RELOAD();
/* 7703ee: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7703f1: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 7703f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7703f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7703f6: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 7703f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7703fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7703fc: call 0x90cda0 */
  esp -= 4; W32(esp, 0x770401u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 770401: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 770404: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* 770407: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770408: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770409: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 77040c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77040d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77040f: call 0x90cda0 */
  esp -= 4; W32(esp, 0x770414u); SPILL(); f_90cda0(); if (g_unwind) return; RELOAD();
/* 770414: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 770417: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770418: lea ecx, [esi + 0x39c] */
  ecx = (uint32_t)(esi + 0x39cu);
/* 77041e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77041f: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x770424u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 770424: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 770427: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 77042a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77042b: lea eax, [esi + 0x3a8] */
  eax = (uint32_t)(esi + 0x3a8u);
/* 770431: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770432: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x770437u); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 770437: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77043a: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 77043d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77043e: lea edx, [esi + 0x3b4] */
  edx = (uint32_t)(esi + 0x3b4u);
/* 770444: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770445: call 0x6c5ea7 */
  esp -= 4; W32(esp, 0x77044au); SPILL(); f_6c5ea7(); if (g_unwind) return; RELOAD();
/* 77044a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77044d: /* 77044d: and dword ptr [esi + 0x3c0], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3c0u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x3c0u), r);
  }
L_770454: /* 770454: mov eax, dword ptr [esi + 0x380] */
  eax = R32((uint32_t)(esi + 0x380u));
/* 77045a: mov ecx, dword ptr [esi + 0x37c] */
  ecx = R32((uint32_t)(esi + 0x37cu));
/* 770460: mov edx, dword ptr [esi + 0x378] */
  edx = R32((uint32_t)(esi + 0x378u));
/* 770466: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770467: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770468: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770469: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77046b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77046c: call 0x90c1c0 */
  esp -= 4; W32(esp, 0x770471u); SPILL(); f_90c1c0(); if (g_unwind) return; RELOAD();
/* 770471: mov eax, dword ptr [esi + 0x398] */
  eax = R32((uint32_t)(esi + 0x398u));
/* 770477: mov ecx, dword ptr [esi + 0x394] */
  ecx = R32((uint32_t)(esi + 0x394u));
/* 77047d: mov edx, dword ptr [esi + 0x390] */
  edx = R32((uint32_t)(esi + 0x390u));
/* 770483: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770484: mov eax, dword ptr [esi + 0x38c] */
  eax = R32((uint32_t)(esi + 0x38cu));
/* 77048a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77048b: mov ecx, dword ptr [esi + 0x388] */
  ecx = R32((uint32_t)(esi + 0x388u));
/* 770491: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770492: mov edx, dword ptr [esi + 0x384] */
  edx = R32((uint32_t)(esi + 0x384u));
/* 770498: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770499: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77049a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77049b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77049d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77049e: call 0x90c4e0 */
  esp -= 4; W32(esp, 0x7704a3u); SPILL(); f_90c4e0(); if (g_unwind) return; RELOAD();
/* 7704a3: mov eax, dword ptr [esi + 0x3a4] */
  eax = R32((uint32_t)(esi + 0x3a4u));
/* 7704a9: mov ecx, dword ptr [esi + 0x3a0] */
  ecx = R32((uint32_t)(esi + 0x3a0u));
/* 7704af: mov edx, dword ptr [esi + 0x39c] */
  edx = R32((uint32_t)(esi + 0x39cu));
/* 7704b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7704b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7704b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7704b8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7704ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7704bb: call 0x90c1c0 */
  esp -= 4; W32(esp, 0x7704c0u); SPILL(); f_90c1c0(); if (g_unwind) return; RELOAD();
/* 7704c0: mov eax, dword ptr [esi + 0x3bc] */
  eax = R32((uint32_t)(esi + 0x3bcu));
/* 7704c6: mov ecx, dword ptr [esi + 0x3b8] */
  ecx = R32((uint32_t)(esi + 0x3b8u));
/* 7704cc: mov edx, dword ptr [esi + 0x3b4] */
  edx = R32((uint32_t)(esi + 0x3b4u));
/* 7704d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7704d3: mov eax, dword ptr [esi + 0x3b0] */
  eax = R32((uint32_t)(esi + 0x3b0u));
/* 7704d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7704da: mov ecx, dword ptr [esi + 0x3ac] */
  ecx = R32((uint32_t)(esi + 0x3acu));
/* 7704e0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7704e1: mov edx, dword ptr [esi + 0x3a8] */
  edx = R32((uint32_t)(esi + 0x3a8u));
/* 7704e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7704e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7704e9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7704ea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7704ec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7704ed: call 0x90c4e0 */
  esp -= 4; W32(esp, 0x7704f2u); SPILL(); f_90c4e0(); if (g_unwind) return; RELOAD();
/* 7704f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7704f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7704f4: mov dword ptr [esi + 0x360], edi */
  W32((uint32_t)(esi + 0x360u), edi);
/* 7704fa: call 0x90c140 */
  esp -= 4; W32(esp, 0x7704ffu); SPILL(); f_90c140(); if (g_unwind) return; RELOAD();
/* 7704ff: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 770501: mov ecx, esi */
  ecx = esi;
/* 770503: call dword ptr [eax + 0x194] */
  { uint32_t t = R32((uint32_t)(eax + 0x194u)); esp -= 4; W32(esp, 0x770509u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 770509: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 77050b: mov ecx, esi */
  ecx = esi;
/* 77050d: call dword ptr [edx + 0x190] */
  { uint32_t t = R32((uint32_t)(edx + 0x190u)); esp -= 4; W32(esp, 0x770513u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 770513: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770514: call 0x90bc20 */
  esp -= 4; W32(esp, 0x770519u); SPILL(); f_90bc20(); if (g_unwind) return; RELOAD();
/* 770519: test byte ptr [esi + 0x374], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x374u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 770520: je 0x77055d */
  if (zf) goto L_77055d;
L_770522: /* 770522: mov eax, dword ptr [esi + 0x368] */
  eax = R32((uint32_t)(esi + 0x368u));
/* 770528: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77052a: jne 0x77053d */
  if (!zf) goto L_77053d;
L_77052c: /* 77052c: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 770532: mov eax, dword ptr [eax + 0x1168] */
  eax = R32((uint32_t)(eax + 0x1168u));
/* 770538: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 77053b: jmp 0x770540 */
  goto L_770540;
L_77053d: /* 77053d: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_770540: /* 770540: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 770543: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770545: je 0x77055d */
  if (zf) goto L_77055d;
L_770547: /* 770547: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 770549: je 0x77055d */
  if (zf) goto L_77055d;
L_77054b: /* 77054b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77054d: je 0x77055d */
  if (zf) goto L_77055d;
L_77054f: /* 77054f: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 770552: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 770553: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770554: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 770555: call 0x6cacb8 */
  esp -= 4; W32(esp, 0x77055au); SPILL(); f_6cacb8(); if (g_unwind) return; RELOAD();
/* 77055a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77055d: /* 77055d: mov eax, dword ptr [esi + 0x364] */
  eax = R32((uint32_t)(esi + 0x364u));
/* 770563: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 770565: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 770566: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 77056a: call 0x6c5001 */
  esp -= 4; W32(esp, 0x77056fu); SPILL(); f_6c5001(); if (g_unwind) return; RELOAD();
/* 77056f: push 0xac4340 */
  { uint32_t v = 0xac4340u; esp -= 4; W32(esp, v); }
/* 770574: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77057b: call 0x6c7405 */
  esp -= 4; W32(esp, 0x770580u); SPILL(); f_6c7405(); if (g_unwind) return; RELOAD();
/* 770580: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 770583: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 770584: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 770585: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77058c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77058d: mov esp, ebp */
  esp = ebp;
/* 77058f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 770590: ret 4 */
  esp += 8; SPILL(); return;
}
