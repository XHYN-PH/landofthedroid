#include "recomp.h"
#include "rec_mod.h"

void f_757e60(void) {
  LOAD_REGS();
L_757e60: /* 757e60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 757e62: push 0x9c8d18 */
  { uint32_t v = 0x9c8d18u; esp -= 4; W32(esp, v); }
/* 757e67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 757e6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 757e6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 757e75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 757e76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 757e77: mov esi, ecx */
  esi = ecx;
/* 757e79: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 757e7d: mov dword ptr [esi], 0xa051f0 */
  W32((uint32_t)(esi), 0xa051f0u);
/* 757e83: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 757e8b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x757e91u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 757e91: mov ecx, esi */
  ecx = esi;
/* 757e93: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 757e9b: call 0x6c8d9b */
  esp -= 4; W32(esp, 0x757ea0u); SPILL(); f_6c8d9b(); if (g_unwind) return; RELOAD();
/* 757ea0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 757ea4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 757ea5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 757eac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 757eaf: ret  */
  esp += 4; SPILL(); return;
}

void f_757ed0(void) {
  LOAD_REGS();
L_757ed0: /* 757ed0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 757ed1: mov esi, ecx */
  esi = ecx;
/* 757ed3: call 0x6c61bd */
  esp -= 4; W32(esp, 0x757ed8u); SPILL(); f_6c61bd(); if (g_unwind) return; RELOAD();
/* 757ed8: mov dword ptr [esi], 0xa051f0 */
  W32((uint32_t)(esi), 0xa051f0u);
/* 757ede: mov eax, esi */
  eax = esi;
/* 757ee0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 757ee1: ret  */
  esp += 4; SPILL(); return;
}

void f_757f00(void) {
  LOAD_REGS();
L_757f00: /* 757f00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 757f01: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 757f02: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 757f06: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 757f07: mov esi, ecx */
  esi = ecx;
/* 757f09: call 0x6c16cc */
  esp -= 4; W32(esp, 0x757f0eu); SPILL(); f_6c16cc(); if (g_unwind) return; RELOAD();
/* 757f0e: mov ecx, dword ptr [esi + 0x498] */
  ecx = R32((uint32_t)(esi + 0x498u));
/* 757f14: mov dword ptr [esi], 0xa051f0 */
  W32((uint32_t)(esi), 0xa051f0u);
/* 757f1a: mov eax, dword ptr [edi + 0x494] */
  eax = R32((uint32_t)(edi + 0x494u));
/* 757f20: mov dword ptr [esi + 0x494], eax */
  W32((uint32_t)(esi + 0x494u), eax);
/* 757f26: xor ecx, dword ptr [edi + 0x498] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x498u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 757f2c: mov eax, dword ptr [esi + 0x498] */
  eax = R32((uint32_t)(esi + 0x498u));
/* 757f32: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 757f35: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 757f37: mov dword ptr [esi + 0x498], eax */
  W32((uint32_t)(esi + 0x498u), eax);
/* 757f3d: mov ecx, eax */
  ecx = eax;
/* 757f3f: mov eax, dword ptr [edi + 0x498] */
  eax = R32((uint32_t)(edi + 0x498u));
/* 757f45: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 757f47: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 757f4a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 757f4c: mov dword ptr [esi + 0x498], eax */
  W32((uint32_t)(esi + 0x498u), eax);
/* 757f52: mov edx, dword ptr [edi + 0x498] */
  edx = R32((uint32_t)(edi + 0x498u));
/* 757f58: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 757f5a: and edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 757f5d: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 757f5f: mov dword ptr [esi + 0x498], edx */
  W32((uint32_t)(esi + 0x498u), edx);
/* 757f65: add edi, 0x49c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x49cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 757f6b: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 757f6d: lea eax, [esi + 0x49c] */
  eax = (uint32_t)(esi + 0x49cu);
/* 757f73: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 757f75: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 757f78: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 757f7b: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 757f7e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 757f81: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 757f82: mov eax, esi */
  eax = esi;
/* 757f84: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 757f85: ret 4 */
  esp += 8; SPILL(); return;
}

void f_757fc0(void) {
  LOAD_REGS();
L_757fc0: /* 757fc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 757fc1: mov esi, ecx */
  esi = ecx;
/* 757fc3: call 0x6c4f39 */
  esp -= 4; W32(esp, 0x757fc8u); SPILL(); f_6c4f39(); if (g_unwind) return; RELOAD();
/* 757fc8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 757fcd: je 0x757fde */
  if (zf) goto L_757fde;
L_757fcf: /* 757fcf: push 0x4a8 */
  { uint32_t v = 0x4a8u; esp -= 4; W32(esp, v); }
/* 757fd4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 757fd5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x757fdbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 757fdb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_757fde: /* 757fde: mov eax, esi */
  eax = esi;
/* 757fe0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 757fe1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_758000(void) {
  LOAD_REGS();
L_758000: /* 758000: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 758001: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 758005: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 758008: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 758009: mov esi, ecx */
  esi = ecx;
/* 75800b: je 0x758040 */
  if (zf) goto L_758040;
L_75800d: /* 75800d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 758010: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 758011: push 0x6c4f39 */
  { uint32_t v = 0x6c4f39u; esp -= 4; W32(esp, v); }
/* 758016: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 758019: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75801a: push 0x4a8 */
  { uint32_t v = 0x4a8u; esp -= 4; W32(esp, v); }
/* 75801f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 758020: call 0x99ca3d */
  esp -= 4; W32(esp, 0x758025u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 758025: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 758028: je 0x758038 */
  if (zf) goto L_758038;
L_75802a: /* 75802a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 758030: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 758032: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 758034: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 758035: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x758038u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_758038: /* 758038: mov eax, edi */
  eax = edi;
/* 75803a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75803b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75803c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75803d: ret 4 */
  esp += 8; SPILL(); return;
L_758040: /* 758040: mov ecx, esi */
  ecx = esi;
/* 758042: call 0x6c4f39 */
  esp -= 4; W32(esp, 0x758047u); SPILL(); f_6c4f39(); if (g_unwind) return; RELOAD();
/* 758047: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75804a: je 0x75805b */
  if (zf) goto L_75805b;
L_75804c: /* 75804c: push 0x4a8 */
  { uint32_t v = 0x4a8u; esp -= 4; W32(esp, v); }
/* 758051: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 758052: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x758058u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 758058: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75805b: /* 75805b: mov eax, esi */
  eax = esi;
/* 75805d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75805e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75805f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_758090(void) {
  LOAD_REGS();
L_758090: /* 758090: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 758092: push 0x9c8d8c */
  { uint32_t v = 0x9c8d8cu; esp -= 4; W32(esp, v); }
/* 758097: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75809d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75809e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7580a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7580a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7580a7: mov esi, ecx */
  esi = ecx;
/* 7580a9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7580ad: mov dword ptr [esi], 0xa052a0 */
  W32((uint32_t)(esi), 0xa052a0u);
/* 7580b3: mov dword ptr [esp + 0x10], 6 */
  W32((uint32_t)(esp + 0x10u), 0x6u);
/* 7580bb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x7580c1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 7580c1: lea ecx, [esi + 0x590] */
  ecx = (uint32_t)(esi + 0x590u);
/* 7580c7: mov byte ptr [esp + 0x10], 5 */
  W8((uint32_t)(esp + 0x10u), 0x5u);
/* 7580cc: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x7580d1u); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 7580d1: lea ecx, [esi + 0x584] */
  ecx = (uint32_t)(esi + 0x584u);
/* 7580d7: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* 7580dc: call 0x6c9543 */
  esp -= 4; W32(esp, 0x7580e1u); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 7580e1: lea ecx, [esi + 0x578] */
  ecx = (uint32_t)(esi + 0x578u);
/* 7580e7: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 7580ec: call 0x6c2b26 */
  esp -= 4; W32(esp, 0x7580f1u); SPILL(); f_6c2b26(); if (g_unwind) return; RELOAD();
/* 7580f1: lea ecx, [esi + 0x500] */
  ecx = (uint32_t)(esi + 0x500u);
/* 7580f7: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 7580fc: call 0x6c98f4 */
  esp -= 4; W32(esp, 0x758101u); SPILL(); f_6c98f4(); if (g_unwind) return; RELOAD();
/* 758101: lea ecx, [esi + 0x4f4] */
  ecx = (uint32_t)(esi + 0x4f4u);
/* 758107: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 75810c: call 0x6c98f4 */
  esp -= 4; W32(esp, 0x758111u); SPILL(); f_6c98f4(); if (g_unwind) return; RELOAD();
/* 758111: lea ecx, [esi + 0x49c] */
  ecx = (uint32_t)(esi + 0x49cu);
/* 758117: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 75811c: call 0x6ca0ab */
  esp -= 4; W32(esp, 0x758121u); SPILL(); f_6ca0ab(); if (g_unwind) return; RELOAD();
/* 758121: mov ecx, esi */
  ecx = esi;
/* 758123: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 75812b: call 0x6c8d9b */
  esp -= 4; W32(esp, 0x758130u); SPILL(); f_6c8d9b(); if (g_unwind) return; RELOAD();
/* 758130: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 758134: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 758135: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75813c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75813f: ret  */
  esp += 4; SPILL(); return;
}

void f_758170(void) {
  LOAD_REGS();
L_758170: /* 758170: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 758172: push 0x9c8dfe */
  { uint32_t v = 0x9c8dfeu; esp -= 4; W32(esp, v); }
/* 758177: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75817d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75817e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 758185: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 758186: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 758187: mov esi, ecx */
  esi = ecx;
/* 758189: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75818d: call 0x6c61bd */
  esp -= 4; W32(esp, 0x758192u); SPILL(); f_6c61bd(); if (g_unwind) return; RELOAD();
/* 758192: lea ecx, [esi + 0x494] */
  ecx = (uint32_t)(esi + 0x494u);
/* 758198: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 7581a0: mov dword ptr [esi], 0xa052a0 */
  W32((uint32_t)(esi), 0xa052a0u);
/* 7581a6: call dword ptr [0xcfa310] */
  esp -= 4; W32(esp, 0x7581acu); SPILL(); f_4e1fd7(); if (g_unwind) return; /* Core!??0FRange@@QAE@XZ */ RELOAD();
/* 7581ac: lea ecx, [esi + 0x49c] */
  ecx = (uint32_t)(esi + 0x49cu);
/* 7581b2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7581b4: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x7581bau); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 7581ba: lea ecx, [esi + 0x4bc] */
  ecx = (uint32_t)(esi + 0x4bcu);
/* 7581c0: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 7581c5: call dword ptr [0xcfa314] */
  esp -= 4; W32(esp, 0x7581cbu); SPILL(); f_4e3ba7(); if (g_unwind) return; /* Core!??0FRangeVector@@QAE@XZ */ RELOAD();
/* 7581cb: lea ecx, [esi + 0x4d8] */
  ecx = (uint32_t)(esi + 0x4d8u);
/* 7581d1: call dword ptr [0xcfa314] */
  esp -= 4; W32(esp, 0x7581d7u); SPILL(); f_4e3ba7(); if (g_unwind) return; /* Core!??0FRangeVector@@QAE@XZ */ RELOAD();
/* 7581d7: lea ecx, [esi + 0x4f4] */
  ecx = (uint32_t)(esi + 0x4f4u);
/* 7581dd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7581df: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x7581e5u); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 7581e5: lea ecx, [esi + 0x500] */
  ecx = (uint32_t)(esi + 0x500u);
/* 7581eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7581ed: mov byte ptr [esp + 0x14], 2 */
  W8((uint32_t)(esp + 0x14u), 0x2u);
/* 7581f2: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x7581f8u); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 7581f8: lea ecx, [esi + 0x518] */
  ecx = (uint32_t)(esi + 0x518u);
/* 7581fe: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 758203: call dword ptr [0xcfa314] */
  esp -= 4; W32(esp, 0x758209u); SPILL(); f_4e3ba7(); if (g_unwind) return; /* Core!??0FRangeVector@@QAE@XZ */ RELOAD();
/* 758209: lea ecx, [esi + 0x530] */
  ecx = (uint32_t)(esi + 0x530u);
/* 75820f: call dword ptr [0xcfa310] */
  esp -= 4; W32(esp, 0x758215u); SPILL(); f_4e1fd7(); if (g_unwind) return; /* Core!??0FRange@@QAE@XZ */ RELOAD();
/* 758215: lea ecx, [esi + 0x538] */
  ecx = (uint32_t)(esi + 0x538u);
/* 75821b: call dword ptr [0xcfa310] */
  esp -= 4; W32(esp, 0x758221u); SPILL(); f_4e1fd7(); if (g_unwind) return; /* Core!??0FRange@@QAE@XZ */ RELOAD();
/* 758221: lea ecx, [esi + 0x544] */
  ecx = (uint32_t)(esi + 0x544u);
/* 758227: call dword ptr [0xcfa310] */
  esp -= 4; W32(esp, 0x75822du); SPILL(); f_4e1fd7(); if (g_unwind) return; /* Core!??0FRange@@QAE@XZ */ RELOAD();
/* 75822d: lea ecx, [esi + 0x54c] */
  ecx = (uint32_t)(esi + 0x54cu);
/* 758233: call dword ptr [0xcfa310] */
  esp -= 4; W32(esp, 0x758239u); SPILL(); f_4e1fd7(); if (g_unwind) return; /* Core!??0FRange@@QAE@XZ */ RELOAD();
/* 758239: lea ecx, [esi + 0x558] */
  ecx = (uint32_t)(esi + 0x558u);
/* 75823f: call dword ptr [0xcfa310] */
  esp -= 4; W32(esp, 0x758245u); SPILL(); f_4e1fd7(); if (g_unwind) return; /* Core!??0FRange@@QAE@XZ */ RELOAD();
/* 758245: lea ecx, [esi + 0x578] */
  ecx = (uint32_t)(esi + 0x578u);
/* 75824b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 75824d: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x758253u); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 758253: lea ecx, [esi + 0x584] */
  ecx = (uint32_t)(esi + 0x584u);
/* 758259: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 75825b: mov byte ptr [esp + 0x14], 4 */
  W8((uint32_t)(esp + 0x14u), 0x4u);
/* 758260: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x758266u); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 758266: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 758268: lea ecx, [esi + 0x590] */
  ecx = (uint32_t)(esi + 0x590u);
/* 75826e: mov byte ptr [esp + 0x14], 5 */
  W8((uint32_t)(esp + 0x14u), 0x5u);
/* 758273: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x758279u); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 758279: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75827d: mov eax, esi */
  eax = esi;
/* 75827f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 758280: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 758287: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75828a: ret  */
  esp += 4; SPILL(); return;
}

void f_7582e0(void) {
  LOAD_REGS();
L_7582e0: /* 7582e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7582e2: push 0x9c8e6e */
  { uint32_t v = 0x9c8e6eu; esp -= 4; W32(esp, v); }
/* 7582e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7582ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7582ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7582f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7582f6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7582f7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7582f8: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 7582fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7582fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7582fe: mov ebx, ecx */
  ebx = ecx;
/* 758300: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 758301: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 758305: call 0x6c16cc */
  esp -= 4; W32(esp, 0x75830au); SPILL(); f_6c16cc(); if (g_unwind) return; RELOAD();
/* 75830a: mov dword ptr [ebx], 0xa052a0 */
  W32((uint32_t)(ebx), 0xa052a0u);
/* 758310: mov eax, dword ptr [ebp + 0x494] */
  eax = R32((uint32_t)(ebp + 0x494u));
/* 758316: mov dword ptr [ebx + 0x494], eax */
  W32((uint32_t)(ebx + 0x494u), eax);
/* 75831c: mov ecx, dword ptr [ebp + 0x498] */
  ecx = R32((uint32_t)(ebp + 0x498u));
/* 758322: lea edx, [ebp + 0x49c] */
  edx = (uint32_t)(ebp + 0x49cu);
/* 758328: mov dword ptr [ebx + 0x498], ecx */
  W32((uint32_t)(ebx + 0x498u), ecx);
/* 75832e: lea ecx, [ebx + 0x49c] */
  ecx = (uint32_t)(ebx + 0x49cu);
/* 758334: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 758335: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 75833d: call 0x6cab00 */
  esp -= 4; W32(esp, 0x758342u); SPILL(); f_6cab00(); if (g_unwind) return; RELOAD();
/* 758342: mov al, byte ptr [ebp + 0x4a8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x4a8u))) & 0xffu);
/* 758348: mov edi, dword ptr [ebx + 0x4b8] */
  edi = R32((uint32_t)(ebx + 0x4b8u));
/* 75834e: mov byte ptr [ebx + 0x4a8], al */
  W8((uint32_t)(ebx + 0x4a8u), (eax & 0xffu));
/* 758354: mov ecx, dword ptr [ebp + 0x4ac] */
  ecx = R32((uint32_t)(ebp + 0x4acu));
/* 75835a: mov dword ptr [ebx + 0x4ac], ecx */
  W32((uint32_t)(ebx + 0x4acu), ecx);
/* 758360: mov edx, dword ptr [ebp + 0x4b0] */
  edx = R32((uint32_t)(ebp + 0x4b0u));
/* 758366: mov dword ptr [ebx + 0x4b0], edx */
  W32((uint32_t)(ebx + 0x4b0u), edx);
/* 75836c: mov eax, dword ptr [ebp + 0x4b4] */
  eax = R32((uint32_t)(ebp + 0x4b4u));
/* 758372: mov dword ptr [ebx + 0x4b4], eax */
  W32((uint32_t)(ebx + 0x4b4u), eax);
/* 758378: mov ecx, dword ptr [ebp + 0x4b8] */
  ecx = R32((uint32_t)(ebp + 0x4b8u));
/* 75837e: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 758380: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 758383: mov edx, edi */
  edx = edi;
/* 758385: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 758387: mov dword ptr [ebx + 0x4b8], edx */
  W32((uint32_t)(ebx + 0x4b8u), edx);
/* 75838d: lea esi, [ebp + 0x4bc] */
  esi = (uint32_t)(ebp + 0x4bcu);
/* 758393: lea edi, [ebx + 0x4bc] */
  edi = (uint32_t)(ebx + 0x4bcu);
/* 758399: mov ecx, 6 */
  ecx = 0x6u;
/* 75839e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7583a0: mov edx, dword ptr [ebp + 0x4d4] */
  edx = R32((uint32_t)(ebp + 0x4d4u));
/* 7583a6: mov dword ptr [ebx + 0x4d4], edx */
  W32((uint32_t)(ebx + 0x4d4u), edx);
/* 7583ac: lea esi, [ebp + 0x4d8] */
  esi = (uint32_t)(ebp + 0x4d8u);
/* 7583b2: lea edi, [ebx + 0x4d8] */
  edi = (uint32_t)(ebx + 0x4d8u);
/* 7583b8: mov ecx, 6 */
  ecx = 0x6u;
/* 7583bd: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7583bf: mov eax, dword ptr [ebp + 0x4f0] */
  eax = R32((uint32_t)(ebp + 0x4f0u));
/* 7583c5: lea edx, [ebp + 0x4f4] */
  edx = (uint32_t)(ebp + 0x4f4u);
/* 7583cb: lea ecx, [ebx + 0x4f4] */
  ecx = (uint32_t)(ebx + 0x4f4u);
/* 7583d1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7583d2: mov byte ptr [esp + 0x20], 1 */
  W8((uint32_t)(esp + 0x20u), 0x1u);
/* 7583d7: mov dword ptr [ebx + 0x4f0], eax */
  W32((uint32_t)(ebx + 0x4f0u), eax);
/* 7583dd: call 0x6c224d */
  esp -= 4; W32(esp, 0x7583e2u); SPILL(); f_6c224d(); if (g_unwind) return; RELOAD();
/* 7583e2: lea eax, [ebp + 0x500] */
  eax = (uint32_t)(ebp + 0x500u);
/* 7583e8: lea ecx, [ebx + 0x500] */
  ecx = (uint32_t)(ebx + 0x500u);
/* 7583ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7583ef: mov byte ptr [esp + 0x20], 2 */
  W8((uint32_t)(esp + 0x20u), 0x2u);
/* 7583f4: call 0x6c224d */
  esp -= 4; W32(esp, 0x7583f9u); SPILL(); f_6c224d(); if (g_unwind) return; RELOAD();
/* 7583f9: mov ecx, dword ptr [ebp + 0x50c] */
  ecx = R32((uint32_t)(ebp + 0x50cu));
/* 7583ff: mov eax, dword ptr [ebx + 0x514] */
  eax = R32((uint32_t)(ebx + 0x514u));
/* 758405: mov dword ptr [ebx + 0x50c], ecx */
  W32((uint32_t)(ebx + 0x50cu), ecx);
/* 75840b: mov edx, dword ptr [ebp + 0x510] */
  edx = R32((uint32_t)(ebp + 0x510u));
/* 758411: mov ecx, dword ptr [ebx + 0x514] */
  ecx = R32((uint32_t)(ebx + 0x514u));
/* 758417: mov dword ptr [ebx + 0x510], edx */
  W32((uint32_t)(ebx + 0x510u), edx);
/* 75841d: xor eax, dword ptr [ebp + 0x514] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x514u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 758423: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 758426: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 758428: mov dword ptr [ebx + 0x514], ecx */
  W32((uint32_t)(ebx + 0x514u), ecx);
/* 75842e: mov eax, dword ptr [ebp + 0x514] */
  eax = R32((uint32_t)(ebp + 0x514u));
/* 758434: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 758436: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 758439: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75843b: mov dword ptr [ebx + 0x514], eax */
  W32((uint32_t)(ebx + 0x514u), eax);
/* 758441: mov ecx, dword ptr [ebp + 0x514] */
  ecx = R32((uint32_t)(ebp + 0x514u));
/* 758447: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 758449: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 75844c: mov byte ptr [esp + 0x1c], 3 */
  W8((uint32_t)(esp + 0x1cu), 0x3u);
/* 758451: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 758453: mov dword ptr [ebx + 0x514], ecx */
  W32((uint32_t)(ebx + 0x514u), ecx);
/* 758459: lea esi, [ebp + 0x518] */
  esi = (uint32_t)(ebp + 0x518u);
/* 75845f: lea edi, [ebx + 0x518] */
  edi = (uint32_t)(ebx + 0x518u);
/* 758465: mov ecx, 6 */
  ecx = 0x6u;
/* 75846a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 75846c: mov edx, dword ptr [ebp + 0x530] */
  edx = R32((uint32_t)(ebp + 0x530u));
/* 758472: mov edi, dword ptr [ebx + 0x540] */
  edi = R32((uint32_t)(ebx + 0x540u));
/* 758478: mov dword ptr [ebx + 0x530], edx */
  W32((uint32_t)(ebx + 0x530u), edx);
/* 75847e: mov eax, dword ptr [ebp + 0x534] */
  eax = R32((uint32_t)(ebp + 0x534u));
/* 758484: mov dword ptr [ebx + 0x534], eax */
  W32((uint32_t)(ebx + 0x534u), eax);
/* 75848a: mov ecx, dword ptr [ebp + 0x538] */
  ecx = R32((uint32_t)(ebp + 0x538u));
/* 758490: mov dword ptr [ebx + 0x538], ecx */
  W32((uint32_t)(ebx + 0x538u), ecx);
/* 758496: mov edx, dword ptr [ebp + 0x53c] */
  edx = R32((uint32_t)(ebp + 0x53cu));
/* 75849c: mov dword ptr [ebx + 0x53c], edx */
  W32((uint32_t)(ebx + 0x53cu), edx);
/* 7584a2: mov eax, dword ptr [ebp + 0x540] */
  eax = R32((uint32_t)(ebp + 0x540u));
/* 7584a8: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7584aa: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7584ad: mov edx, edi */
  edx = edi;
/* 7584af: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7584b1: mov dword ptr [ebx + 0x540], edx */
  W32((uint32_t)(ebx + 0x540u), edx);
/* 7584b7: mov ecx, dword ptr [ebp + 0x544] */
  ecx = R32((uint32_t)(ebp + 0x544u));
/* 7584bd: mov dword ptr [ebx + 0x544], ecx */
  W32((uint32_t)(ebx + 0x544u), ecx);
/* 7584c3: mov edx, dword ptr [ebp + 0x548] */
  edx = R32((uint32_t)(ebp + 0x548u));
/* 7584c9: mov dword ptr [ebx + 0x548], edx */
  W32((uint32_t)(ebx + 0x548u), edx);
/* 7584cf: mov eax, dword ptr [ebp + 0x54c] */
  eax = R32((uint32_t)(ebp + 0x54cu));
/* 7584d5: mov dword ptr [ebx + 0x54c], eax */
  W32((uint32_t)(ebx + 0x54cu), eax);
/* 7584db: mov ecx, dword ptr [ebp + 0x550] */
  ecx = R32((uint32_t)(ebp + 0x550u));
/* 7584e1: mov dword ptr [ebx + 0x550], ecx */
  W32((uint32_t)(ebx + 0x550u), ecx);
/* 7584e7: mov edx, dword ptr [ebp + 0x554] */
  edx = R32((uint32_t)(ebp + 0x554u));
/* 7584ed: mov dword ptr [ebx + 0x554], edx */
  W32((uint32_t)(ebx + 0x554u), edx);
/* 7584f3: mov eax, dword ptr [ebp + 0x558] */
  eax = R32((uint32_t)(ebp + 0x558u));
/* 7584f9: mov dword ptr [ebx + 0x558], eax */
  W32((uint32_t)(ebx + 0x558u), eax);
/* 7584ff: mov ecx, dword ptr [ebp + 0x55c] */
  ecx = R32((uint32_t)(ebp + 0x55cu));
/* 758505: mov dword ptr [ebx + 0x55c], ecx */
  W32((uint32_t)(ebx + 0x55cu), ecx);
/* 75850b: mov edx, dword ptr [ebp + 0x560] */
  edx = R32((uint32_t)(ebp + 0x560u));
/* 758511: mov ecx, dword ptr [ebx + 0x560] */
  ecx = R32((uint32_t)(ebx + 0x560u));
/* 758517: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 758519: mov edi, ecx */
  edi = ecx;
/* 75851b: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 75851e: xor edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 758520: mov dword ptr [ebx + 0x560], edi */
  W32((uint32_t)(ebx + 0x560u), edi);
/* 758526: mov eax, dword ptr [ebp + 0x564] */
  eax = R32((uint32_t)(ebp + 0x564u));
/* 75852c: mov dword ptr [ebx + 0x564], eax */
  W32((uint32_t)(ebx + 0x564u), eax);
/* 758532: mov ecx, dword ptr [ebp + 0x568] */
  ecx = R32((uint32_t)(ebp + 0x568u));
/* 758538: mov dword ptr [ebx + 0x568], ecx */
  W32((uint32_t)(ebx + 0x568u), ecx);
/* 75853e: mov edx, dword ptr [ebp + 0x56c] */
  edx = R32((uint32_t)(ebp + 0x56cu));
/* 758544: mov dword ptr [ebx + 0x56c], edx */
  W32((uint32_t)(ebx + 0x56cu), edx);
/* 75854a: mov eax, dword ptr [ebp + 0x570] */
  eax = R32((uint32_t)(ebp + 0x570u));
/* 758550: mov dword ptr [ebx + 0x570], eax */
  W32((uint32_t)(ebx + 0x570u), eax);
/* 758556: mov ecx, dword ptr [ebp + 0x574] */
  ecx = R32((uint32_t)(ebp + 0x574u));
/* 75855c: lea edx, [ebp + 0x578] */
  edx = (uint32_t)(ebp + 0x578u);
/* 758562: mov dword ptr [ebx + 0x574], ecx */
  W32((uint32_t)(ebx + 0x574u), ecx);
/* 758568: lea ecx, [ebx + 0x578] */
  ecx = (uint32_t)(ebx + 0x578u);
/* 75856e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 75856f: call 0x6c4714 */
  esp -= 4; W32(esp, 0x758574u); SPILL(); f_6c4714(); if (g_unwind) return; RELOAD();
/* 758574: lea eax, [ebp + 0x584] */
  eax = (uint32_t)(ebp + 0x584u);
/* 75857a: lea ecx, [ebx + 0x584] */
  ecx = (uint32_t)(ebx + 0x584u);
/* 758580: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 758581: mov byte ptr [esp + 0x20], 4 */
  W8((uint32_t)(esp + 0x20u), 0x4u);
/* 758586: call 0x6cbbae */
  esp -= 4; W32(esp, 0x75858bu); SPILL(); f_6cbbae(); if (g_unwind) return; RELOAD();
/* 75858b: lea ecx, [ebp + 0x590] */
  ecx = (uint32_t)(ebp + 0x590u);
/* 758591: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 758592: lea ecx, [ebx + 0x590] */
  ecx = (uint32_t)(ebx + 0x590u);
/* 758598: mov byte ptr [esp + 0x20], 5 */
  W8((uint32_t)(esp + 0x20u), 0x5u);
/* 75859d: call 0x6cab5f */
  esp -= 4; W32(esp, 0x7585a2u); SPILL(); f_6cab5f(); if (g_unwind) return; RELOAD();
/* 7585a2: mov edx, dword ptr [ebp + 0x59c] */
  edx = R32((uint32_t)(ebp + 0x59cu));
/* 7585a8: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7585ac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7585ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7585ae: mov dword ptr [ebx + 0x59c], edx */
  W32((uint32_t)(ebx + 0x59cu), edx);
/* 7585b4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7585b5: mov eax, ebx */
  eax = ebx;
/* 7585b7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7585b8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7585bf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7585c2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_758690(void) {
  LOAD_REGS();
L_758690: /* 758690: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 758691: mov esi, ecx */
  esi = ecx;
/* 758693: call 0x6c7063 */
  esp -= 4; W32(esp, 0x758698u); SPILL(); f_6c7063(); if (g_unwind) return; RELOAD();
/* 758698: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75869d: je 0x7586ae */
  if (zf) goto L_7586ae;
L_75869f: /* 75869f: push 0x5a0 */
  { uint32_t v = 0x5a0u; esp -= 4; W32(esp, v); }
/* 7586a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7586a5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7586abu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7586ab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7586ae: /* 7586ae: mov eax, esi */
  eax = esi;
/* 7586b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7586b1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7586d0(void) {
  LOAD_REGS();
L_7586d0: /* 7586d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7586d1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 7586d5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7586d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7586d9: mov esi, ecx */
  esi = ecx;
/* 7586db: je 0x758710 */
  if (zf) goto L_758710;
L_7586dd: /* 7586dd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 7586e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7586e1: push 0x6c7063 */
  { uint32_t v = 0x6c7063u; esp -= 4; W32(esp, v); }
/* 7586e6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 7586e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7586ea: push 0x5a0 */
  { uint32_t v = 0x5a0u; esp -= 4; W32(esp, v); }
/* 7586ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7586f0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x7586f5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 7586f5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7586f8: je 0x758708 */
  if (zf) goto L_758708;
L_7586fa: /* 7586fa: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 758700: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 758702: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 758704: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 758705: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x758708u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_758708: /* 758708: mov eax, edi */
  eax = edi;
/* 75870a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75870b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75870c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75870d: ret 4 */
  esp += 8; SPILL(); return;
L_758710: /* 758710: mov ecx, esi */
  ecx = esi;
/* 758712: call 0x6c7063 */
  esp -= 4; W32(esp, 0x758717u); SPILL(); f_6c7063(); if (g_unwind) return; RELOAD();
/* 758717: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75871a: je 0x75872b */
  if (zf) goto L_75872b;
L_75871c: /* 75871c: push 0x5a0 */
  { uint32_t v = 0x5a0u; esp -= 4; W32(esp, v); }
/* 758721: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 758722: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x758728u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 758728: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75872b: /* 75872b: mov eax, esi */
  eax = esi;
/* 75872d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75872e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75872f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_758760(void) {
  LOAD_REGS();
L_758760: /* 758760: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 758762: push 0x9c8ea3 */
  { uint32_t v = 0x9c8ea3u; esp -= 4; W32(esp, v); }
/* 758767: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75876d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75876e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 758775: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 758776: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 758777: mov esi, ecx */
  esi = ecx;
/* 758779: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75877d: mov dword ptr [esi], 0xa05358 */
  W32((uint32_t)(esi), 0xa05358u);
/* 758783: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 75878b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x758791u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 758791: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 758794: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 758799: call 0x6c5394 */
  esp -= 4; W32(esp, 0x75879eu); SPILL(); f_6c5394(); if (g_unwind) return; RELOAD();
/* 75879e: mov ecx, esi */
  ecx = esi;
/* 7587a0: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7587a8: call 0x6caf88 */
  esp -= 4; W32(esp, 0x7587adu); SPILL(); f_6caf88(); if (g_unwind) return; RELOAD();
/* 7587ad: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7587b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7587b2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7587b9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7587bc: ret  */
  esp += 4; SPILL(); return;
}

void f_7587e0(void) {
  LOAD_REGS();
L_7587e0: /* 7587e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7587e2: push 0x9c8ec8 */
  { uint32_t v = 0x9c8ec8u; esp -= 4; W32(esp, v); }
/* 7587e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7587ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7587ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7587f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7587f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7587f7: mov esi, ecx */
  esi = ecx;
/* 7587f9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7587fd: call 0x6cc2a7 */
  esp -= 4; W32(esp, 0x758802u); SPILL(); f_6cc2a7(); if (g_unwind) return; RELOAD();
/* 758802: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 758804: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 758807: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 75880f: mov dword ptr [esi], 0xa05358 */
  W32((uint32_t)(esi), 0xa05358u);
/* 758815: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x75881bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 75881b: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75881f: mov eax, esi */
  eax = esi;
/* 758821: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 758822: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 758829: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75882c: ret  */
  esp += 4; SPILL(); return;
}

void f_758850(void) {
  LOAD_REGS();
L_758850: /* 758850: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 758852: push 0x9c8ee8 */
  { uint32_t v = 0x9c8ee8u; esp -= 4; W32(esp, v); }
/* 758857: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75885d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75885e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 758865: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 758866: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 758867: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 758868: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 75886c: mov esi, ecx */
  esi = ecx;
/* 75886e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75886f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 758873: call 0x6c7595 */
  esp -= 4; W32(esp, 0x758878u); SPILL(); f_6c7595(); if (g_unwind) return; RELOAD();
/* 758878: lea eax, [edi + 0x38] */
  eax = (uint32_t)(edi + 0x38u);
/* 75887b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75887c: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 75887f: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 758887: mov dword ptr [esi], 0xa05358 */
  W32((uint32_t)(esi), 0xa05358u);
/* 75888d: call 0x6c3f12 */
  esp -= 4; W32(esp, 0x758892u); SPILL(); f_6c3f12(); if (g_unwind) return; RELOAD();
/* 758892: mov cl, byte ptr [edi + 0x44] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x44u))) & 0xffu);
/* 758895: mov byte ptr [esi + 0x44], cl */
  W8((uint32_t)(esi + 0x44u), (ecx & 0xffu));
/* 758898: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* 75889b: mov edi, dword ptr [esi + 0x48] */
  edi = R32((uint32_t)(esi + 0x48u));
/* 75889e: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 7588a2: xor edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7588a4: mov eax, edi */
  eax = edi;
/* 7588a6: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7588a9: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7588ab: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 7588ae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7588af: mov eax, esi */
  eax = esi;
/* 7588b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7588b2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7588b9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7588bc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7588e0(void) {
  LOAD_REGS();
L_7588e0: /* 7588e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7588e1: mov esi, ecx */
  esi = ecx;
/* 7588e3: call 0x6c73ec */
  esp -= 4; W32(esp, 0x7588e8u); SPILL(); f_6c73ec(); if (g_unwind) return; RELOAD();
/* 7588e8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7588ed: je 0x7588fb */
  if (zf) goto L_7588fb;
L_7588ef: /* 7588ef: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 7588f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7588f2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7588f8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7588f8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7588fb: /* 7588fb: mov eax, esi */
  eax = esi;
/* 7588fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7588fe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_758920(void) {
  LOAD_REGS();
L_758920: /* 758920: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 758921: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 758925: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 758928: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 758929: mov esi, ecx */
  esi = ecx;
/* 75892b: je 0x75895d */
  if (zf) goto L_75895d;
L_75892d: /* 75892d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 758930: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 758931: push 0x6c73ec */
  { uint32_t v = 0x6c73ecu; esp -= 4; W32(esp, v); }
/* 758936: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 758939: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75893a: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 75893c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75893d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x758942u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 758942: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 758945: je 0x758955 */
  if (zf) goto L_758955;
L_758947: /* 758947: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 75894d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 75894f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 758951: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 758952: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x758955u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_758955: /* 758955: mov eax, edi */
  eax = edi;
/* 758957: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 758958: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 758959: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75895a: ret 4 */
  esp += 8; SPILL(); return;
L_75895d: /* 75895d: mov ecx, esi */
  ecx = esi;
/* 75895f: call 0x6c73ec */
  esp -= 4; W32(esp, 0x758964u); SPILL(); f_6c73ec(); if (g_unwind) return; RELOAD();
/* 758964: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 758967: je 0x758975 */
  if (zf) goto L_758975;
L_758969: /* 758969: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* 75896b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75896c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x758972u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 758972: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_758975: /* 758975: mov eax, esi */
  eax = esi;
/* 758977: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 758978: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 758979: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7589a0(void) {
  LOAD_REGS();
L_7589a0: /* 7589a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7589a2: push 0x9c8f13 */
  { uint32_t v = 0x9c8f13u; esp -= 4; W32(esp, v); }
/* 7589a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7589ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7589ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7589b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7589b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7589b7: mov esi, ecx */
  esi = ecx;
/* 7589b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7589bd: mov dword ptr [esi], 0xa05410 */
  W32((uint32_t)(esi), 0xa05410u);
/* 7589c3: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 7589cb: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x7589d1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 7589d1: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* 7589d4: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 7589d9: call 0x6c15b4 */
  esp -= 4; W32(esp, 0x7589deu); SPILL(); f_6c15b4(); if (g_unwind) return; RELOAD();
/* 7589de: mov ecx, esi */
  ecx = esi;
/* 7589e0: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7589e8: call 0x6c1cc6 */
  esp -= 4; W32(esp, 0x7589edu); SPILL(); f_6c1cc6(); if (g_unwind) return; RELOAD();
/* 7589ed: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7589f1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7589f2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7589f9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7589fc: ret  */
  esp += 4; SPILL(); return;
}

void f_758a20(void) {
  LOAD_REGS();
L_758a20: /* 758a20: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 758a22: push 0x9c8f38 */
  { uint32_t v = 0x9c8f38u; esp -= 4; W32(esp, v); }
/* 758a27: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 758a2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 758a2e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 758a35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 758a36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 758a37: mov esi, ecx */
  esi = ecx;
/* 758a39: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 758a3d: call 0x6cc2a7 */
  esp -= 4; W32(esp, 0x758a42u); SPILL(); f_6cc2a7(); if (g_unwind) return; RELOAD();
/* 758a42: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 758a44: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* 758a47: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 758a4f: mov dword ptr [esi], 0xa05410 */
  W32((uint32_t)(esi), 0xa05410u);
/* 758a55: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x758a5bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 758a5b: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 758a5f: mov eax, esi */
  eax = esi;
/* 758a61: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 758a62: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 758a69: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 758a6c: ret  */
  esp += 4; SPILL(); return;
}

void f_758a90(void) {
  LOAD_REGS();
L_758a90: /* 758a90: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 758a92: push 0x9c8f58 */
  { uint32_t v = 0x9c8f58u; esp -= 4; W32(esp, v); }
/* 758a97: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 758a9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 758a9e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 758aa5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 758aa6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 758aa7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 758aa8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 758aac: mov esi, ecx */
  esi = ecx;
/* 758aae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 758aaf: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 758ab3: call 0x6c88dc */
  esp -= 4; W32(esp, 0x758ab8u); SPILL(); f_6c88dc(); if (g_unwind) return; RELOAD();
/* 758ab8: lea eax, [edi + 0x3c] */
  eax = (uint32_t)(edi + 0x3cu);
/* 758abb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 758abc: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* 758abf: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 758ac7: mov dword ptr [esi], 0xa05410 */
  W32((uint32_t)(esi), 0xa05410u);
/* 758acd: call 0x6c10af */
  esp -= 4; W32(esp, 0x758ad2u); SPILL(); f_6c10af(); if (g_unwind) return; RELOAD();
/* 758ad2: mov cl, byte ptr [edi + 0x48] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x48u))) & 0xffu);
/* 758ad5: mov edx, dword ptr [esi + 0x4c] */
  edx = R32((uint32_t)(esi + 0x4cu));
/* 758ad8: mov byte ptr [esi + 0x48], cl */
  W8((uint32_t)(esi + 0x48u), (ecx & 0xffu));
/* 758adb: xor edx, dword ptr [edi + 0x4c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4cu)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 758ade: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* 758ae1: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 758ae4: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 758ae6: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 758ae9: mov ecx, dword ptr [edi + 0x4c] */
  ecx = R32((uint32_t)(edi + 0x4cu));
/* 758aec: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 758aee: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 758af1: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 758af3: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* 758af6: mov edx, dword ptr [edi + 0x50] */
  edx = R32((uint32_t)(edi + 0x50u));
/* 758af9: mov dword ptr [esi + 0x50], edx */
  W32((uint32_t)(esi + 0x50u), edx);
/* 758afc: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 758aff: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 758b02: mov ecx, dword ptr [edi + 0x58] */
  ecx = R32((uint32_t)(edi + 0x58u));
/* 758b05: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 758b08: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 758b0c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 758b0d: mov eax, esi */
  eax = esi;
/* 758b0f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 758b10: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 758b17: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 758b1a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_758b50(void) {
  LOAD_REGS();
L_758b50: /* 758b50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 758b51: mov esi, ecx */
  esi = ecx;
/* 758b53: call 0x6c167c */
  esp -= 4; W32(esp, 0x758b58u); SPILL(); f_6c167c(); if (g_unwind) return; RELOAD();
/* 758b58: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 758b5d: je 0x758b6b */
  if (zf) goto L_758b6b;
L_758b5f: /* 758b5f: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 758b61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 758b62: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x758b68u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 758b68: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_758b6b: /* 758b6b: mov eax, esi */
  eax = esi;
/* 758b6d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 758b6e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_758b90(void) {
  LOAD_REGS();
L_758b90: /* 758b90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 758b91: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 758b95: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 758b98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 758b99: mov esi, ecx */
  esi = ecx;
/* 758b9b: je 0x758bcd */
  if (zf) goto L_758bcd;
L_758b9d: /* 758b9d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 758ba0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 758ba1: push 0x6c167c */
  { uint32_t v = 0x6c167cu; esp -= 4; W32(esp, v); }
/* 758ba6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 758ba9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 758baa: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 758bac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 758bad: call 0x99ca3d */
  esp -= 4; W32(esp, 0x758bb2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 758bb2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 758bb5: je 0x758bc5 */
  if (zf) goto L_758bc5;
L_758bb7: /* 758bb7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 758bbd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 758bbf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 758bc1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 758bc2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x758bc5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_758bc5: /* 758bc5: mov eax, edi */
  eax = edi;
/* 758bc7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 758bc8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 758bc9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 758bca: ret 4 */
  esp += 8; SPILL(); return;
L_758bcd: /* 758bcd: mov ecx, esi */
  ecx = esi;
/* 758bcf: call 0x6c167c */
  esp -= 4; W32(esp, 0x758bd4u); SPILL(); f_6c167c(); if (g_unwind) return; RELOAD();
/* 758bd4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 758bd7: je 0x758be5 */
  if (zf) goto L_758be5;
L_758bd9: /* 758bd9: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 758bdb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 758bdc: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x758be2u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 758be2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_758be5: /* 758be5: mov eax, esi */
  eax = esi;
/* 758be7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 758be8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 758be9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_758c10(void) {
  LOAD_REGS();
L_758c10: /* 758c10: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 758c12: push 0x9c8f78 */
  { uint32_t v = 0x9c8f78u; esp -= 4; W32(esp, v); }
/* 758c17: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 758c1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 758c1e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 758c25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 758c26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 758c27: mov esi, ecx */
  esi = ecx;
/* 758c29: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 758c2d: call 0x6cc2a7 */
  esp -= 4; W32(esp, 0x758c32u); SPILL(); f_6cc2a7(); if (g_unwind) return; RELOAD();
/* 758c32: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 758c34: lea ecx, [esi + 0x40] */
  ecx = (uint32_t)(esi + 0x40u);
/* 758c37: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 758c3f: mov dword ptr [esi], 0x9f8bf0 */
  W32((uint32_t)(esi), 0x9f8bf0u);
/* 758c45: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x758c4bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 758c4b: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 758c4f: mov eax, esi */
  eax = esi;
/* 758c51: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 758c52: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 758c59: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 758c5c: ret  */
  esp += 4; SPILL(); return;
}

void f_758c80(void) {
  LOAD_REGS();
L_758c80: /* 758c80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 758c81: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 758c82: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 758c86: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 758c87: mov esi, ecx */
  esi = ecx;
/* 758c89: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x758c8fu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 758c8f: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 758c92: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 758c95: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 758c98: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 758c9b: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 758c9e: xor edx, dword ptr [edi + 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x30u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 758ca1: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 758ca4: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 758ca7: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 758ca9: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 758cac: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 758caf: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 758cb1: and ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 758cb4: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 758cb6: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* 758cb9: mov dl, byte ptr [edi + 0x34] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x34u))) & 0xffu);
/* 758cbc: mov byte ptr [esi + 0x34], dl */
  W8((uint32_t)(esi + 0x34u), (edx & 0xffu));
/* 758cbf: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 758cc2: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 758cc5: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 758cc8: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 758ccb: add edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 758cce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 758ccf: lea ecx, [esi + 0x40] */
  ecx = (uint32_t)(esi + 0x40u);
/* 758cd2: call 0x6c4ac0 */
  esp -= 4; W32(esp, 0x758cd7u); SPILL(); f_6c4ac0(); if (g_unwind) return; RELOAD();
/* 758cd7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 758cd8: mov eax, esi */
  eax = esi;
/* 758cda: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 758cdb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_758d00(void) {
  LOAD_REGS();
L_758d00: /* 758d00: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 758d02: push 0x9c8faf */
  { uint32_t v = 0x9c8fafu; esp -= 4; W32(esp, v); }
/* 758d07: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 758d0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 758d0e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 758d15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 758d16: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 758d17: mov esi, ecx */
  esi = ecx;
/* 758d19: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 758d1d: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x758d23u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 758d23: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 758d26: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 758d2e: mov dword ptr [esi], 0x9f8ca8 */
  W32((uint32_t)(esi), 0x9f8ca8u);
/* 758d34: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x758d3au); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 758d3a: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* 758d3d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 758d3f: mov byte ptr [esp + 0x14], 1 */
  W8((uint32_t)(esp + 0x14u), 0x1u);
/* 758d44: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x758d4au); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 758d4a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 758d4c: lea ecx, [esi + 0x70] */
  ecx = (uint32_t)(esi + 0x70u);
/* 758d4f: mov byte ptr [esp + 0x14], 2 */
  W8((uint32_t)(esp + 0x14u), 0x2u);
/* 758d54: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x758d5au); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 758d5a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 758d5e: mov eax, esi */
  eax = esi;
/* 758d60: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 758d61: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 758d68: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 758d6b: ret  */
  esp += 4; SPILL(); return;
}

void f_758d90(void) {
  LOAD_REGS();
L_758d90: /* 758d90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 758d91: mov esi, ecx */
  esi = ecx;
/* 758d93: call 0x6c3cb0 */
  esp -= 4; W32(esp, 0x758d98u); SPILL(); f_6c3cb0(); if (g_unwind) return; RELOAD();
/* 758d98: mov dword ptr [esi], 0x9f8d28 */
  W32((uint32_t)(esi), 0x9f8d28u);
/* 758d9e: mov eax, esi */
  eax = esi;
/* 758da0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 758da1: ret  */
  esp += 4; SPILL(); return;
}

void f_758dc0(void) {
  LOAD_REGS();
L_758dc0: /* 758dc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 758dc1: mov esi, ecx */
  esi = ecx;
/* 758dc3: call 0x6c3cb0 */
  esp -= 4; W32(esp, 0x758dc8u); SPILL(); f_6c3cb0(); if (g_unwind) return; RELOAD();
/* 758dc8: mov dword ptr [esi], 0x9f8da8 */
  W32((uint32_t)(esi), 0x9f8da8u);
/* 758dce: mov eax, esi */
  eax = esi;
/* 758dd0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 758dd1: ret  */
  esp += 4; SPILL(); return;
}

void f_758df0(void) {
  LOAD_REGS();
L_758df0: /* 758df0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 758df2: push 0x9c8ff2 */
  { uint32_t v = 0x9c8ff2u; esp -= 4; W32(esp, v); }
/* 758df7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 758dfd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 758dfe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 758e05: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 758e08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 758e09: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 758e0a: mov esi, ecx */
  esi = ecx;
/* 758e0c: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 758e10: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 758e18: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x758e1eu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 758e1e: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 758e22: mov byte ptr [esp + 0x2c], 1 */
  W8((uint32_t)(esp + 0x2cu), 0x1u);
/* 758e27: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x758e2du); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 758e2d: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 758e31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 758e32: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 758e36: mov byte ptr [esp + 0x30], 2 */
  W8((uint32_t)(esp + 0x30u), 0x2u);
/* 758e3b: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x758e41u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 758e41: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 758e45: lea edx, [esp + 0x3c] */
  edx = (uint32_t)(esp + 0x3cu);
/* 758e49: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 758e4d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 758e4e: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 758e52: call 0x6c6127 */
  esp -= 4; W32(esp, 0x758e57u); SPILL(); f_6c6127(); if (g_unwind) return; RELOAD();
/* 758e57: mov ecx, dword ptr [0xb7e47c] */
  ecx = R32((uint32_t)(0xb7e47cu));
/* 758e5d: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 758e5f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 758e61: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 758e65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 758e66: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 758e68: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 758e69: mov ecx, esi */
  ecx = esi;
/* 758e6b: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x758e71u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 758e71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 758e72: mov ecx, esi */
  ecx = esi;
/* 758e74: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x758e77u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 758e77: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 758e7b: mov byte ptr [esp + 0x2c], 3 */
  W8((uint32_t)(esp + 0x2cu), 0x3u);
/* 758e80: call 0x6cbf69 */
  esp -= 4; W32(esp, 0x758e85u); SPILL(); f_6cbf69(); if (g_unwind) return; RELOAD();
/* 758e85: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 758e89: mov byte ptr [esp + 0x2c], 0 */
  W8((uint32_t)(esp + 0x2cu), 0x0u);
/* 758e8e: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x758e94u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 758e94: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 758e98: mov dword ptr [esp + 0x2c], 0xffffffff */
  W32((uint32_t)(esp + 0x2cu), 0xffffffffu);
/* 758ea0: call 0x6cbf69 */
  esp -= 4; W32(esp, 0x758ea5u); SPILL(); f_6cbf69(); if (g_unwind) return; RELOAD();
/* 758ea5: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 758ea9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 758eaa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 758eab: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 758eb2: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 758eb5: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_758f00(void) {
  LOAD_REGS();
L_758f00: /* 758f00: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 758f02: push 0x9c9020 */
  { uint32_t v = 0x9c9020u; esp -= 4; W32(esp, v); }
/* 758f07: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 758f0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 758f0e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 758f15: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 758f18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 758f19: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 758f1a: mov esi, ecx */
  esi = ecx;
/* 758f1c: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 758f20: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 758f28: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x758f2eu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 758f2e: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 758f32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 758f33: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 758f37: mov byte ptr [esp + 0x24], 1 */
  W8((uint32_t)(esp + 0x24u), 0x1u);
/* 758f3c: call 0x6c6127 */
  esp -= 4; W32(esp, 0x758f41u); SPILL(); f_6c6127(); if (g_unwind) return; RELOAD();
/* 758f41: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 758f45: mov eax, dword ptr [0xb7e478] */
  eax = R32((uint32_t)(0xb7e478u));
/* 758f4a: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 758f4c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 758f4e: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 758f52: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 758f53: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 758f55: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 758f59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 758f5a: mov ecx, esi */
  ecx = esi;
/* 758f5c: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x758f62u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 758f62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 758f63: mov ecx, esi */
  ecx = esi;
/* 758f65: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x758f68u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 758f68: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 758f6c: mov byte ptr [esp + 0x20], 0 */
  W8((uint32_t)(esp + 0x20u), 0x0u);
/* 758f71: call 0x6cbf69 */
  esp -= 4; W32(esp, 0x758f76u); SPILL(); f_6cbf69(); if (g_unwind) return; RELOAD();
/* 758f76: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 758f7a: mov dword ptr [esp + 0x20], 0xffffffff */
  W32((uint32_t)(esp + 0x20u), 0xffffffffu);
/* 758f82: call 0x6cbf69 */
  esp -= 4; W32(esp, 0x758f87u); SPILL(); f_6cbf69(); if (g_unwind) return; RELOAD();
/* 758f87: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 758f8b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 758f8c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 758f8d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 758f94: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 758f97: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_758fd0(void) {
  LOAD_REGS();
L_758fd0: /* 758fd0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 758fd2: push 0x9c9040 */
  { uint32_t v = 0x9c9040u; esp -= 4; W32(esp, v); }
/* 758fd7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 758fdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 758fde: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 758fe5: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 758fe8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 758fe9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 758fea: mov esi, ecx */
  esi = ecx;
/* 758fec: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 758ff0: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 758ff8: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x758ffeu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 758ffe: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 759002: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 759003: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 759007: mov byte ptr [esp + 0x24], 1 */
  W8((uint32_t)(esp + 0x24u), 0x1u);
/* 75900c: call 0x6c6127 */
  esp -= 4; W32(esp, 0x759011u); SPILL(); f_6c6127(); if (g_unwind) return; RELOAD();
/* 759011: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 759015: mov eax, dword ptr [0xb7e464] */
  eax = R32((uint32_t)(0xb7e464u));
/* 75901a: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 75901c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 75901e: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 759022: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 759023: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 759025: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 759029: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75902a: mov ecx, esi */
  ecx = esi;
/* 75902c: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x759032u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 759032: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 759033: mov ecx, esi */
  ecx = esi;
/* 759035: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x759038u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 759038: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 75903c: mov byte ptr [esp + 0x20], 0 */
  W8((uint32_t)(esp + 0x20u), 0x0u);
/* 759041: call 0x6cbf69 */
  esp -= 4; W32(esp, 0x759046u); SPILL(); f_6cbf69(); if (g_unwind) return; RELOAD();
/* 759046: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 75904a: mov dword ptr [esp + 0x20], 0xffffffff */
  W32((uint32_t)(esp + 0x20u), 0xffffffffu);
/* 759052: call 0x6cbf69 */
  esp -= 4; W32(esp, 0x759057u); SPILL(); f_6cbf69(); if (g_unwind) return; RELOAD();
/* 759057: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 75905b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75905c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75905d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 759064: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 759067: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7590a0(void) {
  LOAD_REGS();
L_7590a0: /* 7590a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7590a2: push 0x9c9060 */
  { uint32_t v = 0x9c9060u; esp -= 4; W32(esp, v); }
/* 7590a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7590ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7590ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7590b5: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7590b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7590b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7590ba: mov esi, ecx */
  esi = ecx;
/* 7590bc: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 7590c0: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 7590c8: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7590ceu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7590ce: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 7590d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7590d3: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 7590d7: mov byte ptr [esp + 0x24], 1 */
  W8((uint32_t)(esp + 0x24u), 0x1u);
/* 7590dc: call 0x6c6127 */
  esp -= 4; W32(esp, 0x7590e1u); SPILL(); f_6c6127(); if (g_unwind) return; RELOAD();
/* 7590e1: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 7590e5: mov eax, dword ptr [0xb7e460] */
  eax = R32((uint32_t)(0xb7e460u));
/* 7590ea: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 7590ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7590ee: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 7590f2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7590f3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7590f5: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 7590f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7590fa: mov ecx, esi */
  ecx = esi;
/* 7590fc: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x759102u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 759102: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 759103: mov ecx, esi */
  ecx = esi;
/* 759105: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x759108u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 759108: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 75910c: mov byte ptr [esp + 0x20], 0 */
  W8((uint32_t)(esp + 0x20u), 0x0u);
/* 759111: call 0x6cbf69 */
  esp -= 4; W32(esp, 0x759116u); SPILL(); f_6cbf69(); if (g_unwind) return; RELOAD();
/* 759116: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 75911a: mov dword ptr [esp + 0x20], 0xffffffff */
  W32((uint32_t)(esp + 0x20u), 0xffffffffu);
/* 759122: call 0x6cbf69 */
  esp -= 4; W32(esp, 0x759127u); SPILL(); f_6cbf69(); if (g_unwind) return; RELOAD();
/* 759127: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 75912b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75912c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75912d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 759134: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 759137: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_759170(void) {
  LOAD_REGS();
L_759170: /* 759170: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 759172: push 0x9c9080 */
  { uint32_t v = 0x9c9080u; esp -= 4; W32(esp, v); }
/* 759177: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75917d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75917e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 759185: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 759188: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 759189: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75918a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75918b: mov esi, ecx */
  esi = ecx;
/* 75918d: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 759191: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 759199: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x75919fu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 75919f: lea eax, [esp + 0x34] */
  eax = (uint32_t)(esp + 0x34u);
/* 7591a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7591a4: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 7591a8: mov byte ptr [esp + 0x30], 1 */
  W8((uint32_t)(esp + 0x30u), 0x1u);
/* 7591ad: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 7591b5: call 0x6c6127 */
  esp -= 4; W32(esp, 0x7591bau); SPILL(); f_6c6127(); if (g_unwind) return; RELOAD();
/* 7591ba: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 7591be: mov cl, byte ptr [edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 7591c0: mov ebp, dword ptr [esp + 0x44] */
  ebp = R32((uint32_t)(esp + 0x44u));
/* 7591c4: mov dl, byte ptr [ebp] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp))) & 0xffu);
/* 7591c7: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 7591cb: mov byte ptr [esp + 0x18], cl */
  W8((uint32_t)(esp + 0x18u), (ecx & 0xffu));
/* 7591cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7591d1: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 7591d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7591d6: mov byte ptr [esp + 0x21], dl */
  W8((uint32_t)(esp + 0x21u), (edx & 0xffu));
/* 7591da: mov edx, dword ptr [0xb7e45c] */
  edx = R32((uint32_t)(0xb7e45cu));
/* 7591e0: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 7591e4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7591e6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7591e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7591e9: mov ecx, esi */
  ecx = esi;
/* 7591eb: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* 7591ef: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7591f5u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7591f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7591f6: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 7591fa: mov ecx, esi */
  ecx = esi;
/* 7591fc: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0x7591ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7591ff: mov al, byte ptr [esp + 0x18] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x18u))) & 0xffu);
/* 759203: mov cl, byte ptr [esp + 0x19] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x19u))) & 0xffu);
/* 759207: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 75920b: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 75920d: mov byte ptr [ebp], cl */
  W8((uint32_t)(ebp), (ecx & 0xffu));
/* 759210: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 759214: mov byte ptr [esp + 0x2c], 0 */
  W8((uint32_t)(esp + 0x2cu), 0x0u);
/* 759219: call 0x6cbf69 */
  esp -= 4; W32(esp, 0x75921eu); SPILL(); f_6cbf69(); if (g_unwind) return; RELOAD();
/* 75921e: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 759222: mov dword ptr [esp + 0x2c], 0xffffffff */
  W32((uint32_t)(esp + 0x2cu), 0xffffffffu);
/* 75922a: call 0x6cbf69 */
  esp -= 4; W32(esp, 0x75922fu); SPILL(); f_6cbf69(); if (g_unwind) return; RELOAD();
/* 75922f: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 759233: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 759234: mov eax, esi */
  eax = esi;
/* 759236: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 759237: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 759238: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75923f: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 759242: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_759290(void) {
  LOAD_REGS();
L_759290: /* 759290: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 759292: push 0x9c90b0 */
  { uint32_t v = 0x9c90b0u; esp -= 4; W32(esp, v); }
/* 759297: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75929d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75929e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7592a5: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7592a8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7592a9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7592aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7592ab: mov esi, ecx */
  esi = ecx;
/* 7592ad: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 7592b1: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 7592b9: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7592bfu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7592bf: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 7592c3: mov byte ptr [esp + 0x34], 1 */
  W8((uint32_t)(esp + 0x34u), 0x1u);
/* 7592c8: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7592ceu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7592ce: lea eax, [esp + 0x3c] */
  eax = (uint32_t)(esp + 0x3cu);
/* 7592d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7592d3: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 7592d7: mov byte ptr [esp + 0x38], 2 */
  W8((uint32_t)(esp + 0x38u), 0x2u);
/* 7592dc: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 7592e4: call 0x6c6127 */
  esp -= 4; W32(esp, 0x7592e9u); SPILL(); f_6c6127(); if (g_unwind) return; RELOAD();
/* 7592e9: mov edi, dword ptr [esp + 0x48] */
  edi = R32((uint32_t)(esp + 0x48u));
/* 7592ed: mov cl, byte ptr [edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 7592ef: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 7592f3: mov byte ptr [esp + 0x18], cl */
  W8((uint32_t)(esp + 0x18u), (ecx & 0xffu));
/* 7592f7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7592f8: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 7592fc: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x759302u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 759302: mov ecx, dword ptr [0xb7e458] */
  ecx = R32((uint32_t)(0xb7e458u));
/* 759308: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 75930a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 75930c: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 759310: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 759311: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 759313: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 759314: mov ecx, esi */
  ecx = esi;
/* 759316: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x75931cu); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 75931c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75931d: mov ecx, esi */
  ecx = esi;
/* 75931f: call dword ptr [ebp + 0x10] */
  { uint32_t t = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, 0x759322u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 759322: mov dl, byte ptr [esp + 0x18] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x18u))) & 0xffu);
/* 759326: mov esi, dword ptr [esp + 0x28] */
  esi = R32((uint32_t)(esp + 0x28u));
/* 75932a: mov byte ptr [edi], dl */
  W8((uint32_t)(edi), (edx & 0xffu));
/* 75932c: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 759330: mov byte ptr [esp + 0x34], 3 */
  W8((uint32_t)(esp + 0x34u), 0x3u);
/* 759335: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x75933bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 75933b: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 75933f: mov byte ptr [esp + 0x34], 0 */
  W8((uint32_t)(esp + 0x34u), 0x0u);
/* 759344: call 0x6cbf69 */
  esp -= 4; W32(esp, 0x759349u); SPILL(); f_6cbf69(); if (g_unwind) return; RELOAD();
/* 759349: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 75934d: mov dword ptr [esp + 0x34], 0xffffffff */
  W32((uint32_t)(esp + 0x34u), 0xffffffffu);
/* 759355: call 0x6cbf69 */
  esp -= 4; W32(esp, 0x75935au); SPILL(); f_6cbf69(); if (g_unwind) return; RELOAD();
/* 75935a: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 75935e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75935f: mov eax, esi */
  eax = esi;
/* 759361: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 759362: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 759363: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75936a: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75936d: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_7593b0(void) {
  LOAD_REGS();
L_7593b0: /* 7593b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7593b2: push 0x9c90e3 */
  { uint32_t v = 0x9c90e3u; esp -= 4; W32(esp, v); }
/* 7593b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7593bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7593be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7593c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7593c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7593c7: mov esi, ecx */
  esi = ecx;
/* 7593c9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7593cd: mov dword ptr [esi], 0xa054c8 */
  W32((uint32_t)(esi), 0xa054c8u);
/* 7593d3: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 7593db: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x7593e1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 7593e1: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 7593e4: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 7593e9: call 0x6cbf69 */
  esp -= 4; W32(esp, 0x7593eeu); SPILL(); f_6cbf69(); if (g_unwind) return; RELOAD();
/* 7593ee: mov ecx, esi */
  ecx = esi;
/* 7593f0: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7593f8: call 0x6c5fab */
  esp -= 4; W32(esp, 0x7593fdu); SPILL(); f_6c5fab(); if (g_unwind) return; RELOAD();
/* 7593fd: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 759401: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 759402: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 759409: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75940c: ret  */
  esp += 4; SPILL(); return;
}

void f_759430(void) {
  LOAD_REGS();
L_759430: /* 759430: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 759432: push 0x9c9108 */
  { uint32_t v = 0x9c9108u; esp -= 4; W32(esp, v); }
/* 759437: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75943d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75943e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 759445: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 759446: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 759447: mov esi, ecx */
  esi = ecx;
/* 759449: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75944d: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x759453u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 759453: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 759455: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 759458: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 759460: mov dword ptr [esi], 0xa054c8 */
  W32((uint32_t)(esi), 0xa054c8u);
/* 759466: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x75946cu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 75946c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 759470: mov eax, esi */
  eax = esi;
/* 759472: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 759473: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75947a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75947d: ret  */
  esp += 4; SPILL(); return;
}

void f_7594a0(void) {
  LOAD_REGS();
L_7594a0: /* 7594a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7594a2: push 0x9c9128 */
  { uint32_t v = 0x9c9128u; esp -= 4; W32(esp, v); }
/* 7594a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7594ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7594ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7594b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7594b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7594b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7594b8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 7594bc: mov esi, ecx */
  esi = ecx;
/* 7594be: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7594bf: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7594c3: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x7594c9u); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 7594c9: mov dword ptr [esi], 0xa054c8 */
  W32((uint32_t)(esi), 0xa054c8u);
/* 7594cf: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 7594d2: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 7594d5: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 7594d8: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 7594db: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 7594de: lea eax, [edi + 0x34] */
  eax = (uint32_t)(edi + 0x34u);
/* 7594e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7594e2: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 7594e5: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7594ed: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 7594f0: call 0x6c407f */
  esp -= 4; W32(esp, 0x7594f5u); SPILL(); f_6c407f(); if (g_unwind) return; RELOAD();
/* 7594f5: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* 7594f8: mov edi, dword ptr [esi + 0x40] */
  edi = R32((uint32_t)(esi + 0x40u));
/* 7594fb: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7594fd: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 759500: mov eax, edi */
  eax = edi;
/* 759502: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 759504: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 759508: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 75950b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75950c: mov eax, esi */
  eax = esi;
/* 75950e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75950f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 759516: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 759519: ret 4 */
  esp += 8; SPILL(); return;
}

void f_759540(void) {
  LOAD_REGS();
L_759540: /* 759540: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 759541: mov esi, ecx */
  esi = ecx;
/* 759543: call 0x6c21a8 */
  esp -= 4; W32(esp, 0x759548u); SPILL(); f_6c21a8(); if (g_unwind) return; RELOAD();
/* 759548: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75954d: je 0x75955b */
  if (zf) goto L_75955b;
L_75954f: /* 75954f: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 759551: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 759552: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x759558u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 759558: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75955b: /* 75955b: mov eax, esi */
  eax = esi;
/* 75955d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75955e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_759580(void) {
  LOAD_REGS();
L_759580: /* 759580: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 759581: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 759585: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 759588: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 759589: mov esi, ecx */
  esi = ecx;
/* 75958b: je 0x7595bd */
  if (zf) goto L_7595bd;
L_75958d: /* 75958d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 759590: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 759591: push 0x6c21a8 */
  { uint32_t v = 0x6c21a8u; esp -= 4; W32(esp, v); }
/* 759596: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 759599: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75959a: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 75959c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75959d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x7595a2u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 7595a2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7595a5: je 0x7595b5 */
  if (zf) goto L_7595b5;
L_7595a7: /* 7595a7: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7595ad: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7595af: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7595b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7595b2: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7595b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7595b5: /* 7595b5: mov eax, edi */
  eax = edi;
/* 7595b7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7595b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7595b9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7595ba: ret 4 */
  esp += 8; SPILL(); return;
L_7595bd: /* 7595bd: mov ecx, esi */
  ecx = esi;
/* 7595bf: call 0x6c21a8 */
  esp -= 4; W32(esp, 0x7595c4u); SPILL(); f_6c21a8(); if (g_unwind) return; RELOAD();
/* 7595c4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7595c7: je 0x7595d5 */
  if (zf) goto L_7595d5;
L_7595c9: /* 7595c9: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 7595cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7595cc: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7595d2u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7595d2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7595d5: /* 7595d5: mov eax, esi */
  eax = esi;
/* 7595d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7595d8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7595d9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_759600(void) {
  LOAD_REGS();
L_759600: /* 759600: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 759602: push 0x9c9156 */
  { uint32_t v = 0x9c9156u; esp -= 4; W32(esp, v); }
/* 759607: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75960d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75960e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 759615: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 759616: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 759617: mov esi, ecx */
  esi = ecx;
/* 759619: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75961d: mov dword ptr [esi], 0xa05548 */
  W32((uint32_t)(esi), 0xa05548u);
/* 759623: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 75962b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x759631u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 759631: lea ecx, [esi + 0xa0] */
  ecx = (uint32_t)(esi + 0xa0u);
/* 759637: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 75963c: call 0x6c6104 */
  esp -= 4; W32(esp, 0x759641u); SPILL(); f_6c6104(); if (g_unwind) return; RELOAD();
/* 759641: mov ecx, esi */
  ecx = esi;
/* 759643: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 75964b: call 0x6cc5f4 */
  esp -= 4; W32(esp, 0x759650u); SPILL(); f_6cc5f4(); if (g_unwind) return; RELOAD();
/* 759650: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 759654: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 759655: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75965c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75965f: ret  */
  esp += 4; SPILL(); return;
}

void f_759680(void) {
  LOAD_REGS();
L_759680: /* 759680: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 759682: push 0x9c9178 */
  { uint32_t v = 0x9c9178u; esp -= 4; W32(esp, v); }
/* 759687: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75968d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75968e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 759695: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 759696: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 759697: mov esi, ecx */
  esi = ecx;
/* 759699: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75969d: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x7596a3u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 7596a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7596a5: lea ecx, [esi + 0xa0] */
  ecx = (uint32_t)(esi + 0xa0u);
/* 7596ab: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 7596b3: mov dword ptr [esi], 0xa05548 */
  W32((uint32_t)(esi), 0xa05548u);
/* 7596b9: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x7596bfu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 7596bf: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7596c3: mov eax, esi */
  eax = esi;
/* 7596c5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7596c6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7596cd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7596d0: ret  */
  esp += 4; SPILL(); return;
}

void f_759700(void) {
  LOAD_REGS();
L_759700: /* 759700: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 759702: push 0x9c9198 */
  { uint32_t v = 0x9c9198u; esp -= 4; W32(esp, v); }
/* 759707: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75970d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75970e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 759715: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 759716: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 759717: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 759718: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 75971c: mov esi, ecx */
  esi = ecx;
/* 75971e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75971f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 759723: call 0x6c5317 */
  esp -= 4; W32(esp, 0x759728u); SPILL(); f_6c5317(); if (g_unwind) return; RELOAD();
/* 759728: mov dword ptr [esi], 0xa05548 */
  W32((uint32_t)(esi), 0xa05548u);
/* 75972e: mov eax, dword ptr [edi + 0x4c] */
  eax = R32((uint32_t)(edi + 0x4cu));
/* 759731: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 759734: mov ecx, dword ptr [edi + 0x50] */
  ecx = R32((uint32_t)(edi + 0x50u));
/* 759737: mov dword ptr [esi + 0x50], ecx */
  W32((uint32_t)(esi + 0x50u), ecx);
/* 75973a: mov edx, dword ptr [edi + 0x54] */
  edx = R32((uint32_t)(edi + 0x54u));
/* 75973d: mov dword ptr [esi + 0x54], edx */
  W32((uint32_t)(esi + 0x54u), edx);
/* 759740: mov eax, dword ptr [edi + 0x58] */
  eax = R32((uint32_t)(edi + 0x58u));
/* 759743: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 759746: mov ecx, dword ptr [edi + 0x5c] */
  ecx = R32((uint32_t)(edi + 0x5cu));
/* 759749: mov dword ptr [esi + 0x5c], ecx */
  W32((uint32_t)(esi + 0x5cu), ecx);
/* 75974c: mov edx, dword ptr [edi + 0x60] */
  edx = R32((uint32_t)(edi + 0x60u));
/* 75974f: mov dword ptr [esi + 0x60], edx */
  W32((uint32_t)(esi + 0x60u), edx);
/* 759752: mov eax, dword ptr [edi + 0x64] */
  eax = R32((uint32_t)(edi + 0x64u));
/* 759755: mov dword ptr [esi + 0x64], eax */
  W32((uint32_t)(esi + 0x64u), eax);
/* 759758: mov ecx, dword ptr [edi + 0x68] */
  ecx = R32((uint32_t)(edi + 0x68u));
/* 75975b: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 75975e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 759760: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 759763: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 759765: mov dword ptr [esi + 0x68], eax */
  W32((uint32_t)(esi + 0x68u), eax);
/* 759768: lea edx, [edi + 0x6c] */
  edx = (uint32_t)(edi + 0x6cu);
/* 75976b: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 75976d: lea eax, [esi + 0x6c] */
  eax = (uint32_t)(esi + 0x6cu);
/* 759770: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 759772: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 759775: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 759778: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 75977b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 75977e: lea eax, [edi + 0x78] */
  eax = (uint32_t)(edi + 0x78u);
/* 759781: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 759783: lea ecx, [esi + 0x78] */
  ecx = (uint32_t)(esi + 0x78u);
/* 759786: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 759788: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 75978b: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 75978e: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 759791: mov edx, dword ptr [esi + 0x84] */
  edx = R32((uint32_t)(esi + 0x84u));
/* 759797: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 75979a: mov ecx, dword ptr [edi + 0x84] */
  ecx = R32((uint32_t)(edi + 0x84u));
/* 7597a0: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7597a2: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7597a5: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7597a7: mov ecx, dword ptr [esi + 0x90] */
  ecx = R32((uint32_t)(esi + 0x90u));
/* 7597ad: mov dword ptr [esi + 0x84], edx */
  W32((uint32_t)(esi + 0x84u), edx);
/* 7597b3: mov edx, dword ptr [edi + 0x88] */
  edx = R32((uint32_t)(edi + 0x88u));
/* 7597b9: mov dword ptr [esi + 0x88], edx */
  W32((uint32_t)(esi + 0x88u), edx);
/* 7597bf: mov eax, dword ptr [edi + 0x8c] */
  eax = R32((uint32_t)(edi + 0x8cu));
/* 7597c5: mov dword ptr [esi + 0x8c], eax */
  W32((uint32_t)(esi + 0x8cu), eax);
/* 7597cb: xor ecx, dword ptr [edi + 0x90] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x90u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7597d1: mov eax, dword ptr [esi + 0x90] */
  eax = R32((uint32_t)(esi + 0x90u));
/* 7597d7: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7597da: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7597dc: mov dword ptr [esi + 0x90], eax */
  W32((uint32_t)(esi + 0x90u), eax);
/* 7597e2: mov ecx, eax */
  ecx = eax;
/* 7597e4: mov eax, dword ptr [edi + 0x90] */
  eax = R32((uint32_t)(edi + 0x90u));
/* 7597ea: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7597ec: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7597ef: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7597f1: mov dword ptr [esi + 0x90], eax */
  W32((uint32_t)(esi + 0x90u), eax);
/* 7597f7: mov ecx, dword ptr [edi + 0x90] */
  ecx = R32((uint32_t)(edi + 0x90u));
/* 7597fd: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7597ff: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 759802: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 759804: mov dword ptr [esi + 0x90], ecx */
  W32((uint32_t)(esi + 0x90u), ecx);
/* 75980a: mov eax, dword ptr [edi + 0x90] */
  eax = R32((uint32_t)(edi + 0x90u));
/* 759810: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 759812: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 759815: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 759817: mov dword ptr [esi + 0x90], eax */
  W32((uint32_t)(esi + 0x90u), eax);
/* 75981d: mov ecx, dword ptr [edi + 0x90] */
  ecx = R32((uint32_t)(edi + 0x90u));
/* 759823: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 75982b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75982d: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 759830: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 759832: mov dword ptr [esi + 0x90], ecx */
  W32((uint32_t)(esi + 0x90u), ecx);
/* 759838: mov edx, dword ptr [edi + 0x90] */
  edx = R32((uint32_t)(edi + 0x90u));
/* 75983e: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 759840: and edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 759843: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 759845: mov dword ptr [esi + 0x90], edx */
  W32((uint32_t)(esi + 0x90u), edx);
/* 75984b: mov eax, dword ptr [edi + 0x94] */
  eax = R32((uint32_t)(edi + 0x94u));
/* 759851: mov dword ptr [esi + 0x94], eax */
  W32((uint32_t)(esi + 0x94u), eax);
/* 759857: mov ecx, dword ptr [edi + 0x98] */
  ecx = R32((uint32_t)(edi + 0x98u));
/* 75985d: mov dword ptr [esi + 0x98], ecx */
  W32((uint32_t)(esi + 0x98u), ecx);
/* 759863: mov dl, byte ptr [edi + 0x9c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x9cu))) & 0xffu);
/* 759869: add edi, 0xa0 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xa0u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 75986f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 759870: lea ecx, [esi + 0xa0] */
  ecx = (uint32_t)(esi + 0xa0u);
/* 759876: mov byte ptr [esi + 0x9c], dl */
  W8((uint32_t)(esi + 0x9cu), (edx & 0xffu));
/* 75987c: call 0x6c6de3 */
  esp -= 4; W32(esp, 0x759881u); SPILL(); f_6c6de3(); if (g_unwind) return; RELOAD();
/* 759881: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 759885: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 759886: mov eax, esi */
  eax = esi;
/* 759888: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 759889: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 759890: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 759893: ret 4 */
  esp += 8; SPILL(); return;
}

void f_759910(void) {
  LOAD_REGS();
L_759910: /* 759910: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 759911: mov esi, ecx */
  esi = ecx;
/* 759913: call 0x6c7a63 */
  esp -= 4; W32(esp, 0x759918u); SPILL(); f_6c7a63(); if (g_unwind) return; RELOAD();
/* 759918: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75991d: je 0x75992e */
  if (zf) goto L_75992e;
L_75991f: /* 75991f: push 0xac */
  { uint32_t v = 0xacu; esp -= 4; W32(esp, v); }
/* 759924: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 759925: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x75992bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 75992b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75992e: /* 75992e: mov eax, esi */
  eax = esi;
/* 759930: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 759931: ret 4 */
  esp += 8; SPILL(); return;
}

void f_759950(void) {
  LOAD_REGS();
L_759950: /* 759950: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 759951: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 759955: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 759958: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 759959: mov esi, ecx */
  esi = ecx;
/* 75995b: je 0x759990 */
  if (zf) goto L_759990;
L_75995d: /* 75995d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 759960: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 759961: push 0x6c7a63 */
  { uint32_t v = 0x6c7a63u; esp -= 4; W32(esp, v); }
/* 759966: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 759969: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75996a: push 0xac */
  { uint32_t v = 0xacu; esp -= 4; W32(esp, v); }
/* 75996f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 759970: call 0x99ca3d */
  esp -= 4; W32(esp, 0x759975u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 759975: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 759978: je 0x759988 */
  if (zf) goto L_759988;
L_75997a: /* 75997a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 759980: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 759982: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 759984: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 759985: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x759988u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_759988: /* 759988: mov eax, edi */
  eax = edi;
/* 75998a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75998b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75998c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75998d: ret 4 */
  esp += 8; SPILL(); return;
L_759990: /* 759990: mov ecx, esi */
  ecx = esi;
/* 759992: call 0x6c7a63 */
  esp -= 4; W32(esp, 0x759997u); SPILL(); f_6c7a63(); if (g_unwind) return; RELOAD();
/* 759997: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75999a: je 0x7599ab */
  if (zf) goto L_7599ab;
L_75999c: /* 75999c: push 0xac */
  { uint32_t v = 0xacu; esp -= 4; W32(esp, v); }
/* 7599a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7599a2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7599a8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7599a8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7599ab: /* 7599ab: mov eax, esi */
  eax = esi;
/* 7599ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7599ae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7599af: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7599e0(void) {
  LOAD_REGS();
L_7599e0: /* 7599e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7599e2: push 0x9c91c7 */
  { uint32_t v = 0x9c91c7u; esp -= 4; W32(esp, v); }
/* 7599e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7599ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7599ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7599f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7599f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7599f7: mov esi, ecx */
  esi = ecx;
/* 7599f9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7599fd: mov dword ptr [esi], 0xa055c8 */
  W32((uint32_t)(esi), 0xa055c8u);
/* 759a03: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 759a0b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x759a11u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 759a11: lea ecx, [esi + 0xac] */
  ecx = (uint32_t)(esi + 0xacu);
/* 759a17: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 759a1c: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x759a22u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 759a22: mov ecx, esi */
  ecx = esi;
/* 759a24: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 759a2c: call 0x6c7a63 */
  esp -= 4; W32(esp, 0x759a31u); SPILL(); f_6c7a63(); if (g_unwind) return; RELOAD();
/* 759a31: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 759a35: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 759a36: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 759a3d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 759a40: ret  */
  esp += 4; SPILL(); return;
}

void f_759a70(void) {
  LOAD_REGS();
L_759a70: /* 759a70: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 759a72: push 0x9c91f7 */
  { uint32_t v = 0x9c91f7u; esp -= 4; W32(esp, v); }
/* 759a77: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 759a7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 759a7e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 759a85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 759a86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 759a87: mov esi, ecx */
  esi = ecx;
/* 759a89: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 759a8d: call 0x6c782e */
  esp -= 4; W32(esp, 0x759a92u); SPILL(); f_6c782e(); if (g_unwind) return; RELOAD();
/* 759a92: lea ecx, [esi + 0xac] */
  ecx = (uint32_t)(esi + 0xacu);
/* 759a98: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 759aa0: mov dword ptr [esi], 0xa055c8 */
  W32((uint32_t)(esi), 0xa055c8u);
/* 759aa6: call dword ptr [0xcfa300] */
  esp -= 4; W32(esp, 0x759aacu); SPILL(); f_4e3b7a(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@XZ */ RELOAD();
/* 759aac: lea ecx, [esi + 0xbc] */
  ecx = (uint32_t)(esi + 0xbcu);
/* 759ab2: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 759ab7: call dword ptr [0xcfa310] */
  esp -= 4; W32(esp, 0x759abdu); SPILL(); f_4e1fd7(); if (g_unwind) return; /* Core!??0FRange@@QAE@XZ */ RELOAD();
/* 759abd: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 759ac1: mov eax, esi */
  eax = esi;
/* 759ac3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 759ac4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 759acb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 759ace: ret  */
  esp += 4; SPILL(); return;
}

void f_759af0(void) {
  LOAD_REGS();
L_759af0: /* 759af0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 759af2: push 0x9c9218 */
  { uint32_t v = 0x9c9218u; esp -= 4; W32(esp, v); }
/* 759af7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 759afd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 759afe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 759b05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 759b06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 759b07: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 759b08: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 759b0c: mov esi, ecx */
  esi = ecx;
/* 759b0e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 759b0f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 759b13: call 0x6cbca3 */
  esp -= 4; W32(esp, 0x759b18u); SPILL(); f_6cbca3(); if (g_unwind) return; RELOAD();
/* 759b18: lea eax, [edi + 0xac] */
  eax = (uint32_t)(edi + 0xacu);
/* 759b1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 759b1f: lea ecx, [esi + 0xac] */
  ecx = (uint32_t)(esi + 0xacu);
/* 759b25: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 759b2d: mov dword ptr [esi], 0xa055c8 */
  W32((uint32_t)(esi), 0xa055c8u);
/* 759b33: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x759b39u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 759b39: mov ecx, dword ptr [edi + 0xb8] */
  ecx = R32((uint32_t)(edi + 0xb8u));
/* 759b3f: mov eax, dword ptr [esi + 0xb8] */
  eax = R32((uint32_t)(esi + 0xb8u));
/* 759b45: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 759b47: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 759b4a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 759b4c: mov dword ptr [esi + 0xb8], eax */
  W32((uint32_t)(esi + 0xb8u), eax);
/* 759b52: mov edx, dword ptr [edi + 0xbc] */
  edx = R32((uint32_t)(edi + 0xbcu));
/* 759b58: mov dword ptr [esi + 0xbc], edx */
  W32((uint32_t)(esi + 0xbcu), edx);
/* 759b5e: mov eax, dword ptr [edi + 0xc0] */
  eax = R32((uint32_t)(edi + 0xc0u));
/* 759b64: mov dword ptr [esi + 0xc0], eax */
  W32((uint32_t)(esi + 0xc0u), eax);
/* 759b6a: lea ecx, [edi + 0xc4] */
  ecx = (uint32_t)(edi + 0xc4u);
/* 759b70: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 759b72: lea edx, [esi + 0xc4] */
  edx = (uint32_t)(esi + 0xc4u);
/* 759b78: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 759b7a: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 759b7d: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 759b80: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 759b83: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 759b86: lea edx, [edi + 0xd0] */
  edx = (uint32_t)(edi + 0xd0u);
/* 759b8c: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 759b8e: lea eax, [esi + 0xd0] */
  eax = (uint32_t)(esi + 0xd0u);
/* 759b94: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 759b96: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 759b99: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 759b9c: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 759b9f: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 759ba2: mov eax, dword ptr [edi + 0xdc] */
  eax = R32((uint32_t)(edi + 0xdcu));
/* 759ba8: mov dword ptr [esi + 0xdc], eax */
  W32((uint32_t)(esi + 0xdcu), eax);
/* 759bae: mov ecx, dword ptr [edi + 0xe0] */
  ecx = R32((uint32_t)(edi + 0xe0u));
/* 759bb4: mov edi, dword ptr [esi + 0xe0] */
  edi = R32((uint32_t)(esi + 0xe0u));
/* 759bba: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 759bbc: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 759bbf: mov eax, edi */
  eax = edi;
/* 759bc1: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 759bc3: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 759bc7: mov dword ptr [esi + 0xe0], eax */
  W32((uint32_t)(esi + 0xe0u), eax);
/* 759bcd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 759bce: mov eax, esi */
  eax = esi;
/* 759bd0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 759bd1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 759bd8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 759bdb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_759c20(void) {
  LOAD_REGS();
L_759c20: /* 759c20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 759c21: mov esi, ecx */
  esi = ecx;
/* 759c23: call 0x6c1208 */
  esp -= 4; W32(esp, 0x759c28u); SPILL(); f_6c1208(); if (g_unwind) return; RELOAD();
/* 759c28: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 759c2d: je 0x759c3e */
  if (zf) goto L_759c3e;
L_759c2f: /* 759c2f: push 0xe4 */
  { uint32_t v = 0xe4u; esp -= 4; W32(esp, v); }
/* 759c34: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 759c35: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x759c3bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 759c3b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_759c3e: /* 759c3e: mov eax, esi */
  eax = esi;
/* 759c40: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 759c41: ret 4 */
  esp += 8; SPILL(); return;
}

void f_759c60(void) {
  LOAD_REGS();
L_759c60: /* 759c60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 759c61: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 759c65: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 759c68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 759c69: mov esi, ecx */
  esi = ecx;
/* 759c6b: je 0x759ca0 */
  if (zf) goto L_759ca0;
L_759c6d: /* 759c6d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 759c70: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 759c71: push 0x6c1208 */
  { uint32_t v = 0x6c1208u; esp -= 4; W32(esp, v); }
/* 759c76: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 759c79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 759c7a: push 0xe4 */
  { uint32_t v = 0xe4u; esp -= 4; W32(esp, v); }
/* 759c7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 759c80: call 0x99ca3d */
  esp -= 4; W32(esp, 0x759c85u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 759c85: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 759c88: je 0x759c98 */
  if (zf) goto L_759c98;
L_759c8a: /* 759c8a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 759c90: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 759c92: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 759c94: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 759c95: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x759c98u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_759c98: /* 759c98: mov eax, edi */
  eax = edi;
/* 759c9a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 759c9b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 759c9c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 759c9d: ret 4 */
  esp += 8; SPILL(); return;
L_759ca0: /* 759ca0: mov ecx, esi */
  ecx = esi;
/* 759ca2: call 0x6c1208 */
  esp -= 4; W32(esp, 0x759ca7u); SPILL(); f_6c1208(); if (g_unwind) return; RELOAD();
/* 759ca7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 759caa: je 0x759cbb */
  if (zf) goto L_759cbb;
L_759cac: /* 759cac: push 0xe4 */
  { uint32_t v = 0xe4u; esp -= 4; W32(esp, v); }
/* 759cb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 759cb2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x759cb8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 759cb8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_759cbb: /* 759cbb: mov eax, esi */
  eax = esi;
/* 759cbd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 759cbe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 759cbf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_759cf0(void) {
  LOAD_REGS();
L_759cf0: /* 759cf0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 759cf2: push 0x9c9238 */
  { uint32_t v = 0x9c9238u; esp -= 4; W32(esp, v); }
/* 759cf7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 759cfd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 759cfe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 759d05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 759d06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 759d07: mov esi, ecx */
  esi = ecx;
/* 759d09: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 759d0d: mov dword ptr [esi], 0xa05648 */
  W32((uint32_t)(esi), 0xa05648u);
/* 759d13: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 759d1b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x759d21u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 759d21: mov ecx, esi */
  ecx = esi;
/* 759d23: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 759d2b: call 0x6c7a63 */
  esp -= 4; W32(esp, 0x759d30u); SPILL(); f_6c7a63(); if (g_unwind) return; RELOAD();
/* 759d30: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 759d34: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 759d35: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 759d3c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 759d3f: ret  */
  esp += 4; SPILL(); return;
}

void f_759d60(void) {
  LOAD_REGS();
L_759d60: /* 759d60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 759d61: mov esi, ecx */
  esi = ecx;
/* 759d63: call 0x6c782e */
  esp -= 4; W32(esp, 0x759d68u); SPILL(); f_6c782e(); if (g_unwind) return; RELOAD();
/* 759d68: mov dword ptr [esi], 0xa05648 */
  W32((uint32_t)(esi), 0xa05648u);
/* 759d6e: mov eax, esi */
  eax = esi;
/* 759d70: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 759d71: ret  */
  esp += 4; SPILL(); return;
}

void f_759d90(void) {
  LOAD_REGS();
L_759d90: /* 759d90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 759d91: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 759d92: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 759d96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 759d97: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 759d98: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 759d99: mov ebx, ecx */
  ebx = ecx;
/* 759d9b: call 0x6cbca3 */
  esp -= 4; W32(esp, 0x759da0u); SPILL(); f_6cbca3(); if (g_unwind) return; RELOAD();
/* 759da0: lea esi, [ebp + 0xac] */
  esi = (uint32_t)(ebp + 0xacu);
/* 759da6: mov dword ptr [ebx], 0xa05648 */
  W32((uint32_t)(ebx), 0xa05648u);
/* 759dac: lea edi, [ebx + 0xac] */
  edi = (uint32_t)(ebx + 0xacu);
/* 759db2: add ebp, 0xc4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xc4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 759db8: mov ecx, 6 */
  ecx = 0x6u;
/* 759dbd: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 759dbf: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 759dc2: lea eax, [ebx + 0xc4] */
  eax = (uint32_t)(ebx + 0xc4u);
/* 759dc8: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 759dca: mov edx, dword ptr [ebp + 4] */
  edx = R32((uint32_t)(ebp + 0x4u));
/* 759dcd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 759dce: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 759dd1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 759dd4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 759dd5: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 759dd8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 759dd9: mov eax, ebx */
  eax = ebx;
/* 759ddb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 759ddc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_759e00(void) {
  LOAD_REGS();
L_759e00: /* 759e00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 759e01: mov esi, ecx */
  esi = ecx;
/* 759e03: call 0x6ca015 */
  esp -= 4; W32(esp, 0x759e08u); SPILL(); f_6ca015(); if (g_unwind) return; RELOAD();
/* 759e08: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 759e0d: je 0x759e1e */
  if (zf) goto L_759e1e;
L_759e0f: /* 759e0f: push 0xd0 */
  { uint32_t v = 0xd0u; esp -= 4; W32(esp, v); }
/* 759e14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 759e15: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x759e1bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 759e1b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_759e1e: /* 759e1e: mov eax, esi */
  eax = esi;
/* 759e20: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 759e21: ret 4 */
  esp += 8; SPILL(); return;
}

void f_759e40(void) {
  LOAD_REGS();
L_759e40: /* 759e40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 759e41: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 759e45: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 759e48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 759e49: mov esi, ecx */
  esi = ecx;
/* 759e4b: je 0x759e80 */
  if (zf) goto L_759e80;
L_759e4d: /* 759e4d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 759e50: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 759e51: push 0x6ca015 */
  { uint32_t v = 0x6ca015u; esp -= 4; W32(esp, v); }
/* 759e56: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 759e59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 759e5a: push 0xd0 */
  { uint32_t v = 0xd0u; esp -= 4; W32(esp, v); }
/* 759e5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 759e60: call 0x99ca3d */
  esp -= 4; W32(esp, 0x759e65u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 759e65: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 759e68: je 0x759e78 */
  if (zf) goto L_759e78;
L_759e6a: /* 759e6a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 759e70: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 759e72: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 759e74: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 759e75: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x759e78u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_759e78: /* 759e78: mov eax, edi */
  eax = edi;
/* 759e7a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 759e7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 759e7c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 759e7d: ret 4 */
  esp += 8; SPILL(); return;
L_759e80: /* 759e80: mov ecx, esi */
  ecx = esi;
/* 759e82: call 0x6ca015 */
  esp -= 4; W32(esp, 0x759e87u); SPILL(); f_6ca015(); if (g_unwind) return; RELOAD();
/* 759e87: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 759e8a: je 0x759e9b */
  if (zf) goto L_759e9b;
L_759e8c: /* 759e8c: push 0xd0 */
  { uint32_t v = 0xd0u; esp -= 4; W32(esp, v); }
/* 759e91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 759e92: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x759e98u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 759e98: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_759e9b: /* 759e9b: mov eax, esi */
  eax = esi;
/* 759e9d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 759e9e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 759e9f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_759ed0(void) {
  LOAD_REGS();
L_759ed0: /* 759ed0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 759ed2: push 0x9c926f */
  { uint32_t v = 0x9c926fu; esp -= 4; W32(esp, v); }
/* 759ed7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 759edd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 759ede: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 759ee5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 759ee6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 759ee7: mov esi, ecx */
  esi = ecx;
/* 759ee9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 759eed: mov dword ptr [esi], 0xa056f0 */
  W32((uint32_t)(esi), 0xa056f0u);
/* 759ef3: mov dword ptr [esi + 0x28], 0xa056c4 */
  W32((uint32_t)(esi + 0x28u), 0xa056c4u);
/* 759efa: mov dword ptr [esp + 0x10], 2 */
  W32((uint32_t)(esp + 0x10u), 0x2u);
/* 759f02: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x759f08u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 759f08: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 759f0b: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 759f10: call 0x6ccd7e */
  esp -= 4; W32(esp, 0x759f15u); SPILL(); f_6ccd7e(); if (g_unwind) return; RELOAD();
/* 759f15: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 759f18: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 759f1d: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x759f22u); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 759f22: mov ecx, esi */
  ecx = esi;
/* 759f24: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 759f2c: call dword ptr [0xcfa254] */
  esp -= 4; W32(esp, 0x759f32u); SPILL(); f_4e2e55(); if (g_unwind) return; /* Core!??1UObject@@UAE@XZ */ RELOAD();
/* 759f32: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 759f36: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 759f37: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 759f3e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 759f41: ret  */
  esp += 4; SPILL(); return;
}

void f_759f70(void) {
  LOAD_REGS();
L_759f70: /* 759f70: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 759f72: push 0x9c92a4 */
  { uint32_t v = 0x9c92a4u; esp -= 4; W32(esp, v); }
/* 759f77: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 759f7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 759f7e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 759f85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 759f86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 759f87: mov esi, ecx */
  esi = ecx;
/* 759f89: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 759f8a: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 759f8e: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x759f94u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 759f94: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 759f96: mov dword ptr [esi + 0x28], 0x9f6ae4 */
  W32((uint32_t)(esi + 0x28u), 0x9f6ae4u);
/* 759f9d: lea edi, [esi + 0x2c] */
  edi = (uint32_t)(esi + 0x2cu);
/* 759fa0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 759fa2: mov ecx, edi */
  ecx = edi;
/* 759fa4: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 759fac: mov dword ptr [esi], 0xa056f0 */
  W32((uint32_t)(esi), 0xa056f0u);
/* 759fb2: mov dword ptr [esi + 0x28], 0xa056c4 */
  W32((uint32_t)(esi + 0x28u), 0xa056c4u);
/* 759fb9: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x759fbfu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 759fbf: mov dword ptr [edi + 0xc], esi */
  W32((uint32_t)(edi + 0xcu), esi);
/* 759fc2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 759fc4: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 759fc7: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 759fcc: call 0x6c321a */
  esp -= 4; W32(esp, 0x759fd1u); SPILL(); f_6c321a(); if (g_unwind) return; RELOAD();
/* 759fd1: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 759fd5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 759fd6: mov eax, esi */
  eax = esi;
/* 759fd8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 759fd9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 759fe0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 759fe3: ret  */
  esp += 4; SPILL(); return;
}

void f_75a010(void) {
  LOAD_REGS();
L_75a010: /* 75a010: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75a012: push 0x9c92d4 */
  { uint32_t v = 0x9c92d4u; esp -= 4; W32(esp, v); }
/* 75a017: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75a01d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75a01e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75a025: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75a026: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75a027: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75a028: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75a029: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75a02a: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 75a02e: mov esi, ecx */
  esi = ecx;
/* 75a030: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75a031: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 75a035: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x75a03bu); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 75a03b: mov dword ptr [esi + 0x28], 0x9f6ae4 */
  W32((uint32_t)(esi + 0x28u), 0x9f6ae4u);
/* 75a042: lea ebx, [edi + 0x2c] */
  ebx = (uint32_t)(edi + 0x2cu);
/* 75a045: lea ebp, [esi + 0x2c] */
  ebp = (uint32_t)(esi + 0x2cu);
/* 75a048: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75a049: mov ecx, ebp */
  ecx = ebp;
/* 75a04b: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 75a053: mov dword ptr [esi], 0xa056f0 */
  W32((uint32_t)(esi), 0xa056f0u);
/* 75a059: mov dword ptr [esi + 0x28], 0xa056c4 */
  W32((uint32_t)(esi + 0x28u), 0xa056c4u);
/* 75a060: call 0x6cab5f */
  esp -= 4; W32(esp, 0x75a065u); SPILL(); f_6cab5f(); if (g_unwind) return; RELOAD();
/* 75a065: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 75a068: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 75a06b: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 75a06e: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 75a071: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 75a074: lea eax, [edi + 0x44] */
  eax = (uint32_t)(edi + 0x44u);
/* 75a077: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75a078: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 75a07b: mov byte ptr [esp + 0x20], 1 */
  W8((uint32_t)(esp + 0x20u), 0x1u);
/* 75a080: mov dword ptr [esi + 0x40], edx */
  W32((uint32_t)(esi + 0x40u), edx);
/* 75a083: call 0x6c1870 */
  esp -= 4; W32(esp, 0x75a088u); SPILL(); f_6c1870(); if (g_unwind) return; RELOAD();
/* 75a088: mov ecx, dword ptr [edi + 0x88] */
  ecx = R32((uint32_t)(edi + 0x88u));
/* 75a08e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75a08f: mov dword ptr [esi + 0x88], ecx */
  W32((uint32_t)(esi + 0x88u), ecx);
/* 75a095: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 75a099: mov eax, esi */
  eax = esi;
/* 75a09b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75a09c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 75a09d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75a09e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75a0a5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75a0a8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75a0e0(void) {
  LOAD_REGS();
L_75a0e0: /* 75a0e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75a0e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75a0e2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 75a0e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75a0e7: mov esi, ecx */
  esi = ecx;
/* 75a0e9: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x75a0efu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 75a0ef: lea eax, [edi + 0x2c] */
  eax = (uint32_t)(edi + 0x2cu);
/* 75a0f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75a0f3: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 75a0f6: call 0x6ca998 */
  esp -= 4; W32(esp, 0x75a0fbu); SPILL(); f_6ca998(); if (g_unwind) return; RELOAD();
/* 75a0fb: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 75a0fe: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 75a101: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 75a104: lea eax, [edi + 0x44] */
  eax = (uint32_t)(edi + 0x44u);
/* 75a107: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75a108: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 75a10b: mov dword ptr [esi + 0x40], edx */
  W32((uint32_t)(esi + 0x40u), edx);
/* 75a10e: call 0x6ca50b */
  esp -= 4; W32(esp, 0x75a113u); SPILL(); f_6ca50b(); if (g_unwind) return; RELOAD();
/* 75a113: mov ecx, dword ptr [edi + 0x88] */
  ecx = R32((uint32_t)(edi + 0x88u));
/* 75a119: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75a11a: mov dword ptr [esi + 0x88], ecx */
  W32((uint32_t)(esi + 0x88u), ecx);
/* 75a120: mov eax, esi */
  eax = esi;
/* 75a122: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75a123: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75a150(void) {
  LOAD_REGS();
L_75a150: /* 75a150: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75a151: mov esi, ecx */
  esi = ecx;
/* 75a153: call 0x6ca5ba */
  esp -= 4; W32(esp, 0x75a158u); SPILL(); f_6ca5ba(); if (g_unwind) return; RELOAD();
/* 75a158: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75a15d: je 0x75a16e */
  if (zf) goto L_75a16e;
L_75a15f: /* 75a15f: push 0x8c */
  { uint32_t v = 0x8cu; esp -= 4; W32(esp, v); }
/* 75a164: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75a165: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x75a16bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 75a16b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75a16e: /* 75a16e: mov eax, esi */
  eax = esi;
/* 75a170: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75a171: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75a190(void) {
  LOAD_REGS();
L_75a190: /* 75a190: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75a191: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 75a195: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75a198: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75a199: mov esi, ecx */
  esi = ecx;
/* 75a19b: je 0x75a1d0 */
  if (zf) goto L_75a1d0;
L_75a19d: /* 75a19d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 75a1a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75a1a1: push 0x6ca5ba */
  { uint32_t v = 0x6ca5bau; esp -= 4; W32(esp, v); }
/* 75a1a6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 75a1a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75a1aa: push 0x8c */
  { uint32_t v = 0x8cu; esp -= 4; W32(esp, v); }
/* 75a1af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75a1b0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x75a1b5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 75a1b5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75a1b8: je 0x75a1c8 */
  if (zf) goto L_75a1c8;
L_75a1ba: /* 75a1ba: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 75a1c0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 75a1c2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 75a1c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75a1c5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x75a1c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_75a1c8: /* 75a1c8: mov eax, edi */
  eax = edi;
/* 75a1ca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75a1cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75a1cc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75a1cd: ret 4 */
  esp += 8; SPILL(); return;
L_75a1d0: /* 75a1d0: mov ecx, esi */
  ecx = esi;
/* 75a1d2: call 0x6ca5ba */
  esp -= 4; W32(esp, 0x75a1d7u); SPILL(); f_6ca5ba(); if (g_unwind) return; RELOAD();
/* 75a1d7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75a1da: je 0x75a1eb */
  if (zf) goto L_75a1eb;
L_75a1dc: /* 75a1dc: push 0x8c */
  { uint32_t v = 0x8cu; esp -= 4; W32(esp, v); }
/* 75a1e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75a1e2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x75a1e8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 75a1e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75a1eb: /* 75a1eb: mov eax, esi */
  eax = esi;
/* 75a1ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75a1ee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75a1ef: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75a220(void) {
  LOAD_REGS();
L_75a220: /* 75a220: jmp 0x6c4683 */
  SPILL(); f_6c4683(); return;
}

void f_75a240(void) {
  LOAD_REGS();
L_75a240: /* 75a240: jmp 0x6c8959 */
  SPILL(); f_6c8959(); return;
}

void f_75a260(void) {
  LOAD_REGS();
L_75a260: /* 75a260: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75a262: push 0x9c92f8 */
  { uint32_t v = 0x9c92f8u; esp -= 4; W32(esp, v); }
/* 75a267: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75a26d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75a26e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75a275: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75a276: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75a277: mov esi, ecx */
  esi = ecx;
/* 75a279: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75a27d: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x75a283u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 75a283: xor eax, eax */
  eax = 0;
/* 75a285: mov ecx, esi */
  ecx = esi;
/* 75a287: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 75a28b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 75a28e: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 75a295: call 0x6c3fda */
  esp -= 4; W32(esp, 0x75a29au); SPILL(); f_6c3fda(); if (g_unwind) return; RELOAD();
/* 75a29a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75a29e: mov eax, esi */
  eax = esi;
/* 75a2a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75a2a1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75a2a8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75a2ab: ret  */
  esp += 4; SPILL(); return;
}

void f_75a2d0(void) {
  LOAD_REGS();
L_75a2d0: /* 75a2d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75a2d2: push 0x9c9318 */
  { uint32_t v = 0x9c9318u; esp -= 4; W32(esp, v); }
/* 75a2d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75a2dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75a2de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75a2e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75a2e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75a2e7: mov esi, ecx */
  esi = ecx;
/* 75a2e9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75a2ed: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x75a2f3u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 75a2f3: xor eax, eax */
  eax = 0;
/* 75a2f5: mov ecx, esi */
  ecx = esi;
/* 75a2f7: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 75a2fb: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 75a2fe: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 75a305: call 0x6ca2bd */
  esp -= 4; W32(esp, 0x75a30au); SPILL(); f_6ca2bd(); if (g_unwind) return; RELOAD();
/* 75a30a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75a30e: mov eax, esi */
  eax = esi;
/* 75a310: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75a311: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75a318: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75a31b: ret  */
  esp += 4; SPILL(); return;
}

void f_75a340(void) {
  LOAD_REGS();
L_75a340: /* 75a340: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 75a344: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75a345: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75a346: mov esi, ecx */
  esi = ecx;
/* 75a348: call 0x6c9e03 */
  esp -= 4; W32(esp, 0x75a34du); SPILL(); f_6c9e03(); if (g_unwind) return; RELOAD();
/* 75a34d: mov eax, esi */
  eax = esi;
/* 75a34f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75a350: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75a370(void) {
  LOAD_REGS();
L_75a370: /* 75a370: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 75a374: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75a375: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75a376: mov esi, ecx */
  esi = ecx;
/* 75a378: call 0x6c32ce */
  esp -= 4; W32(esp, 0x75a37du); SPILL(); f_6c32ce(); if (g_unwind) return; RELOAD();
/* 75a37d: mov eax, esi */
  eax = esi;
/* 75a37f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75a380: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75a3a0(void) {
  LOAD_REGS();
L_75a3a0: /* 75a3a0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75a3a4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75a3a6: je 0x75a3ad */
  if (zf) goto L_75a3ad;
L_75a3a8: /* 75a3a8: jmp 0x6c2ba8 */
  SPILL(); f_6c2ba8(); return;
L_75a3ad: /* 75a3ad: ret  */
  esp += 4; SPILL(); return;
}

void f_75a3c0(void) {
  LOAD_REGS();
L_75a3c0: /* 75a3c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75a3c2: push 0x9c9424 */
  { uint32_t v = 0x9c9424u; esp -= 4; W32(esp, v); }
/* 75a3c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75a3cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75a3ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75a3d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75a3d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75a3d7: mov esi, ecx */
  esi = ecx;
/* 75a3d9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75a3dd: mov dword ptr [esi], 0xa05770 */
  W32((uint32_t)(esi), 0xa05770u);
/* 75a3e3: mov dword ptr [esi + 0x28], 0xa0576c */
  W32((uint32_t)(esi + 0x28u), 0xa0576cu);
/* 75a3ea: mov dword ptr [esp + 0x10], 0x10 */
  W32((uint32_t)(esp + 0x10u), 0x10u);
/* 75a3f2: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x75a3f8u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 75a3f8: lea ecx, [esi + 0x214] */
  ecx = (uint32_t)(esi + 0x214u);
/* 75a3fe: mov byte ptr [esp + 0x10], 0xf */
  W8((uint32_t)(esp + 0x10u), 0xfu);
/* 75a403: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x75a409u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 75a409: lea ecx, [esi + 0x208] */
  ecx = (uint32_t)(esi + 0x208u);
/* 75a40f: mov byte ptr [esp + 0x10], 0xe */
  W8((uint32_t)(esp + 0x10u), 0xeu);
/* 75a414: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x75a41au); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 75a41a: lea ecx, [esi + 0x1f8] */
  ecx = (uint32_t)(esi + 0x1f8u);
/* 75a420: mov byte ptr [esp + 0x10], 0xd */
  W8((uint32_t)(esp + 0x10u), 0xdu);
/* 75a425: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x75a42bu); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 75a42b: lea ecx, [esi + 0x1e8] */
  ecx = (uint32_t)(esi + 0x1e8u);
/* 75a431: mov byte ptr [esp + 0x10], 0xc */
  W8((uint32_t)(esp + 0x10u), 0xcu);
/* 75a436: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x75a43cu); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 75a43c: lea ecx, [esi + 0x1dc] */
  ecx = (uint32_t)(esi + 0x1dcu);
/* 75a442: mov byte ptr [esp + 0x10], 0xb */
  W8((uint32_t)(esp + 0x10u), 0xbu);
/* 75a447: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x75a44du); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 75a44d: lea ecx, [esi + 0x1d0] */
  ecx = (uint32_t)(esi + 0x1d0u);
/* 75a453: mov byte ptr [esp + 0x10], 0xa */
  W8((uint32_t)(esp + 0x10u), 0xau);
/* 75a458: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x75a45eu); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 75a45e: lea ecx, [esi + 0x1c4] */
  ecx = (uint32_t)(esi + 0x1c4u);
/* 75a464: mov byte ptr [esp + 0x10], 9 */
  W8((uint32_t)(esp + 0x10u), 0x9u);
/* 75a469: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x75a46fu); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 75a46f: lea ecx, [esi + 0x1b4] */
  ecx = (uint32_t)(esi + 0x1b4u);
/* 75a475: mov byte ptr [esp + 0x10], 8 */
  W8((uint32_t)(esp + 0x10u), 0x8u);
/* 75a47a: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x75a480u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 75a480: lea ecx, [esi + 0x1a8] */
  ecx = (uint32_t)(esi + 0x1a8u);
/* 75a486: mov byte ptr [esp + 0x10], 7 */
  W8((uint32_t)(esp + 0x10u), 0x7u);
/* 75a48b: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x75a491u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 75a491: lea ecx, [esi + 0x19c] */
  ecx = (uint32_t)(esi + 0x19cu);
/* 75a497: mov byte ptr [esp + 0x10], 6 */
  W8((uint32_t)(esp + 0x10u), 0x6u);
/* 75a49c: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x75a4a2u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 75a4a2: lea ecx, [esi + 0x190] */
  ecx = (uint32_t)(esi + 0x190u);
/* 75a4a8: mov byte ptr [esp + 0x10], 5 */
  W8((uint32_t)(esp + 0x10u), 0x5u);
/* 75a4ad: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x75a4b3u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 75a4b3: lea ecx, [esi + 0x184] */
  ecx = (uint32_t)(esi + 0x184u);
/* 75a4b9: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* 75a4be: call dword ptr [0xcfa304] */
  esp -= 4; W32(esp, 0x75a4c4u); SPILL(); f_4e2397(); if (g_unwind) return; /* Core!??1FStringNoInit@@QAE@XZ */ RELOAD();
/* 75a4c4: lea ecx, [esi + 0x170] */
  ecx = (uint32_t)(esi + 0x170u);
/* 75a4ca: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 75a4cf: call 0x6cad2b */
  esp -= 4; W32(esp, 0x75a4d4u); SPILL(); f_6cad2b(); if (g_unwind) return; RELOAD();
/* 75a4d4: lea ecx, [esi + 0x164] */
  ecx = (uint32_t)(esi + 0x164u);
/* 75a4da: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 75a4df: call 0x6c1cdf */
  esp -= 4; W32(esp, 0x75a4e4u); SPILL(); f_6c1cdf(); if (g_unwind) return; RELOAD();
/* 75a4e4: lea ecx, [esi + 0x158] */
  ecx = (uint32_t)(esi + 0x158u);
/* 75a4ea: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 75a4ef: call 0x6c1cdf */
  esp -= 4; W32(esp, 0x75a4f4u); SPILL(); f_6c1cdf(); if (g_unwind) return; RELOAD();
/* 75a4f4: lea ecx, [esi + 0x114] */
  ecx = (uint32_t)(esi + 0x114u);
/* 75a4fa: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 75a4ff: call 0x6ccd7e */
  esp -= 4; W32(esp, 0x75a504u); SPILL(); f_6ccd7e(); if (g_unwind) return; RELOAD();
/* 75a504: mov ecx, esi */
  ecx = esi;
/* 75a506: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 75a50e: call 0x6c1d25 */
  esp -= 4; W32(esp, 0x75a513u); SPILL(); f_6c1d25(); if (g_unwind) return; RELOAD();
/* 75a513: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75a517: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75a518: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75a51f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75a522: ret  */
  esp += 4; SPILL(); return;
}

void f_75a590(void) {
  LOAD_REGS();
L_75a590: /* 75a590: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75a592: push 0x9c9555 */
  { uint32_t v = 0x9c9555u; esp -= 4; W32(esp, v); }
/* 75a597: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75a59d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75a59e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75a5a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75a5a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75a5a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75a5a8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 75a5ac: mov esi, ecx */
  esi = ecx;
/* 75a5ae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75a5af: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 75a5b3: call 0x6cc8f6 */
  esp -= 4; W32(esp, 0x75a5b8u); SPILL(); f_6cc8f6(); if (g_unwind) return; RELOAD();
/* 75a5b8: mov dword ptr [esi], 0xa05770 */
  W32((uint32_t)(esi), 0xa05770u);
/* 75a5be: mov dword ptr [esi + 0x28], 0xa0576c */
  W32((uint32_t)(esi + 0x28u), 0xa0576cu);
/* 75a5c5: mov eax, dword ptr [edi + 0x108] */
  eax = R32((uint32_t)(edi + 0x108u));
/* 75a5cb: mov dword ptr [esi + 0x108], eax */
  W32((uint32_t)(esi + 0x108u), eax);
/* 75a5d1: mov ecx, dword ptr [edi + 0x10c] */
  ecx = R32((uint32_t)(edi + 0x10cu));
/* 75a5d7: mov dword ptr [esi + 0x10c], ecx */
  W32((uint32_t)(esi + 0x10cu), ecx);
/* 75a5dd: mov edx, dword ptr [edi + 0x110] */
  edx = R32((uint32_t)(edi + 0x110u));
/* 75a5e3: lea eax, [edi + 0x114] */
  eax = (uint32_t)(edi + 0x114u);
/* 75a5e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75a5ea: lea ecx, [esi + 0x114] */
  ecx = (uint32_t)(esi + 0x114u);
/* 75a5f0: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 75a5f8: mov dword ptr [esi + 0x110], edx */
  W32((uint32_t)(esi + 0x110u), edx);
/* 75a5fe: call 0x6c1870 */
  esp -= 4; W32(esp, 0x75a603u); SPILL(); f_6c1870(); if (g_unwind) return; RELOAD();
/* 75a603: lea edx, [edi + 0x158] */
  edx = (uint32_t)(edi + 0x158u);
/* 75a609: lea ecx, [esi + 0x158] */
  ecx = (uint32_t)(esi + 0x158u);
/* 75a60f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 75a610: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 75a615: call 0x6cabe1 */
  esp -= 4; W32(esp, 0x75a61au); SPILL(); f_6cabe1(); if (g_unwind) return; RELOAD();
/* 75a61a: lea eax, [edi + 0x164] */
  eax = (uint32_t)(edi + 0x164u);
/* 75a620: lea ecx, [esi + 0x164] */
  ecx = (uint32_t)(esi + 0x164u);
/* 75a626: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75a627: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* 75a62c: call 0x6cabe1 */
  esp -= 4; W32(esp, 0x75a631u); SPILL(); f_6cabe1(); if (g_unwind) return; RELOAD();
/* 75a631: lea ecx, [edi + 0x170] */
  ecx = (uint32_t)(edi + 0x170u);
/* 75a637: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75a638: lea ecx, [esi + 0x170] */
  ecx = (uint32_t)(esi + 0x170u);
/* 75a63e: mov byte ptr [esp + 0x18], 3 */
  W8((uint32_t)(esp + 0x18u), 0x3u);
/* 75a643: call 0x6c7941 */
  esp -= 4; W32(esp, 0x75a648u); SPILL(); f_6c7941(); if (g_unwind) return; RELOAD();
/* 75a648: mov edx, dword ptr [edi + 0x17c] */
  edx = R32((uint32_t)(edi + 0x17cu));
/* 75a64e: lea ecx, [edi + 0x184] */
  ecx = (uint32_t)(edi + 0x184u);
/* 75a654: mov dword ptr [esi + 0x17c], edx */
  W32((uint32_t)(esi + 0x17cu), edx);
/* 75a65a: mov eax, dword ptr [edi + 0x180] */
  eax = R32((uint32_t)(edi + 0x180u));
/* 75a660: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75a661: lea ecx, [esi + 0x184] */
  ecx = (uint32_t)(esi + 0x184u);
/* 75a667: mov byte ptr [esp + 0x18], 4 */
  W8((uint32_t)(esp + 0x18u), 0x4u);
/* 75a66c: mov dword ptr [esi + 0x180], eax */
  W32((uint32_t)(esi + 0x180u), eax);
/* 75a672: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x75a678u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 75a678: lea edx, [edi + 0x190] */
  edx = (uint32_t)(edi + 0x190u);
/* 75a67e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 75a67f: lea ecx, [esi + 0x190] */
  ecx = (uint32_t)(esi + 0x190u);
/* 75a685: mov byte ptr [esp + 0x18], 5 */
  W8((uint32_t)(esp + 0x18u), 0x5u);
/* 75a68a: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x75a690u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 75a690: lea eax, [edi + 0x19c] */
  eax = (uint32_t)(edi + 0x19cu);
/* 75a696: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75a697: lea ecx, [esi + 0x19c] */
  ecx = (uint32_t)(esi + 0x19cu);
/* 75a69d: mov byte ptr [esp + 0x18], 6 */
  W8((uint32_t)(esp + 0x18u), 0x6u);
/* 75a6a2: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x75a6a8u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 75a6a8: lea ecx, [edi + 0x1a8] */
  ecx = (uint32_t)(edi + 0x1a8u);
/* 75a6ae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75a6af: lea ecx, [esi + 0x1a8] */
  ecx = (uint32_t)(esi + 0x1a8u);
/* 75a6b5: mov byte ptr [esp + 0x18], 7 */
  W8((uint32_t)(esp + 0x18u), 0x7u);
/* 75a6ba: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x75a6c0u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 75a6c0: lea edx, [edi + 0x1b4] */
  edx = (uint32_t)(edi + 0x1b4u);
/* 75a6c6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 75a6c7: lea ecx, [esi + 0x1b4] */
  ecx = (uint32_t)(esi + 0x1b4u);
/* 75a6cd: mov byte ptr [esp + 0x18], 8 */
  W8((uint32_t)(esp + 0x18u), 0x8u);
/* 75a6d2: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x75a6d8u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 75a6d8: mov eax, dword ptr [edi + 0x1c0] */
  eax = R32((uint32_t)(edi + 0x1c0u));
/* 75a6de: lea ecx, [edi + 0x1c4] */
  ecx = (uint32_t)(edi + 0x1c4u);
/* 75a6e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75a6e5: lea ecx, [esi + 0x1c4] */
  ecx = (uint32_t)(esi + 0x1c4u);
/* 75a6eb: mov byte ptr [esp + 0x18], 9 */
  W8((uint32_t)(esp + 0x18u), 0x9u);
/* 75a6f0: mov dword ptr [esi + 0x1c0], eax */
  W32((uint32_t)(esi + 0x1c0u), eax);
/* 75a6f6: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x75a6fcu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 75a6fc: lea edx, [edi + 0x1d0] */
  edx = (uint32_t)(edi + 0x1d0u);
/* 75a702: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 75a703: lea ecx, [esi + 0x1d0] */
  ecx = (uint32_t)(esi + 0x1d0u);
/* 75a709: mov byte ptr [esp + 0x18], 0xa */
  W8((uint32_t)(esp + 0x18u), 0xau);
/* 75a70e: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x75a714u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 75a714: lea eax, [edi + 0x1dc] */
  eax = (uint32_t)(edi + 0x1dcu);
/* 75a71a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75a71b: lea ecx, [esi + 0x1dc] */
  ecx = (uint32_t)(esi + 0x1dcu);
/* 75a721: mov byte ptr [esp + 0x18], 0xb */
  W8((uint32_t)(esp + 0x18u), 0xbu);
/* 75a726: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x75a72cu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 75a72c: lea ecx, [edi + 0x1e8] */
  ecx = (uint32_t)(edi + 0x1e8u);
/* 75a732: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75a733: lea ecx, [esi + 0x1e8] */
  ecx = (uint32_t)(esi + 0x1e8u);
/* 75a739: mov byte ptr [esp + 0x18], 0xc */
  W8((uint32_t)(esp + 0x18u), 0xcu);
/* 75a73e: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x75a744u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 75a744: mov edx, dword ptr [edi + 0x1f4] */
  edx = R32((uint32_t)(edi + 0x1f4u));
/* 75a74a: lea eax, [edi + 0x1f8] */
  eax = (uint32_t)(edi + 0x1f8u);
/* 75a750: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75a751: lea ecx, [esi + 0x1f8] */
  ecx = (uint32_t)(esi + 0x1f8u);
/* 75a757: mov byte ptr [esp + 0x18], 0xd */
  W8((uint32_t)(esp + 0x18u), 0xdu);
/* 75a75c: mov dword ptr [esi + 0x1f4], edx */
  W32((uint32_t)(esi + 0x1f4u), edx);
/* 75a762: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x75a768u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 75a768: mov ecx, dword ptr [edi + 0x204] */
  ecx = R32((uint32_t)(edi + 0x204u));
/* 75a76e: lea edx, [edi + 0x208] */
  edx = (uint32_t)(edi + 0x208u);
/* 75a774: mov dword ptr [esi + 0x204], ecx */
  W32((uint32_t)(esi + 0x204u), ecx);
/* 75a77a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 75a77b: lea ecx, [esi + 0x208] */
  ecx = (uint32_t)(esi + 0x208u);
/* 75a781: mov byte ptr [esp + 0x18], 0xe */
  W8((uint32_t)(esp + 0x18u), 0xeu);
/* 75a786: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x75a78cu); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 75a78c: add edi, 0x214 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x214u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 75a792: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75a793: lea ecx, [esi + 0x214] */
  ecx = (uint32_t)(esi + 0x214u);
/* 75a799: mov byte ptr [esp + 0x18], 0xf */
  W8((uint32_t)(esp + 0x18u), 0xfu);
/* 75a79e: call dword ptr [0xcfa308] */
  esp -= 4; W32(esp, 0x75a7a4u); SPILL(); f_4e3729(); if (g_unwind) return; /* Core!??0FStringNoInit@@QAE@ABU0@@Z */ RELOAD();
/* 75a7a4: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 75a7a8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75a7a9: mov eax, esi */
  eax = esi;
/* 75a7ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75a7ac: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75a7b3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75a7b6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75a850(void) {
  LOAD_REGS();
L_75a850: /* 75a850: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75a851: mov esi, ecx */
  esi = ecx;
/* 75a853: call 0x6c3292 */
  esp -= 4; W32(esp, 0x75a858u); SPILL(); f_6c3292(); if (g_unwind) return; RELOAD();
/* 75a858: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75a85d: je 0x75a86e */
  if (zf) goto L_75a86e;
L_75a85f: /* 75a85f: push 0x220 */
  { uint32_t v = 0x220u; esp -= 4; W32(esp, v); }
/* 75a864: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75a865: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x75a86bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 75a86b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75a86e: /* 75a86e: mov eax, esi */
  eax = esi;
/* 75a870: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75a871: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75a890(void) {
  LOAD_REGS();
L_75a890: /* 75a890: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75a891: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 75a895: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75a898: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75a899: mov esi, ecx */
  esi = ecx;
/* 75a89b: je 0x75a8d0 */
  if (zf) goto L_75a8d0;
L_75a89d: /* 75a89d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 75a8a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75a8a1: push 0x6c3292 */
  { uint32_t v = 0x6c3292u; esp -= 4; W32(esp, v); }
/* 75a8a6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 75a8a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75a8aa: push 0x220 */
  { uint32_t v = 0x220u; esp -= 4; W32(esp, v); }
/* 75a8af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75a8b0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x75a8b5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 75a8b5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75a8b8: je 0x75a8c8 */
  if (zf) goto L_75a8c8;
L_75a8ba: /* 75a8ba: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 75a8c0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 75a8c2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 75a8c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75a8c5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x75a8c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_75a8c8: /* 75a8c8: mov eax, edi */
  eax = edi;
/* 75a8ca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75a8cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75a8cc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75a8cd: ret 4 */
  esp += 8; SPILL(); return;
L_75a8d0: /* 75a8d0: mov ecx, esi */
  ecx = esi;
/* 75a8d2: call 0x6c3292 */
  esp -= 4; W32(esp, 0x75a8d7u); SPILL(); f_6c3292(); if (g_unwind) return; RELOAD();
/* 75a8d7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75a8da: je 0x75a8eb */
  if (zf) goto L_75a8eb;
L_75a8dc: /* 75a8dc: push 0x220 */
  { uint32_t v = 0x220u; esp -= 4; W32(esp, v); }
/* 75a8e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75a8e2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x75a8e8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 75a8e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75a8eb: /* 75a8eb: mov eax, esi */
  eax = esi;
/* 75a8ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75a8ee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75a8ef: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75a920(void) {
  LOAD_REGS();
L_75a920: /* 75a920: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75a924: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75a926: je 0x75a92d */
  if (zf) goto L_75a92d;
L_75a928: /* 75a928: jmp 0x6c292d */
  SPILL(); f_6c292d(); return;
L_75a92d: /* 75a92d: ret  */
  esp += 4; SPILL(); return;
}

void f_75a940(void) {
  LOAD_REGS();
L_75a940: /* 75a940: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75a942: push 0x9c95ab */
  { uint32_t v = 0x9c95abu; esp -= 4; W32(esp, v); }
/* 75a947: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75a94d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75a94e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75a955: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 75a958: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 75a95c: mov eax, dword ptr [ecx + 0x50] */
  eax = R32((uint32_t)(ecx + 0x50u));
/* 75a95f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75a961: jne 0x75a9cd */
  if (!zf) goto L_75a9cd;
L_75a963: /* 75a963: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 75a968: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 75a96a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 75a96c: push 0xac38c4 */
  { uint32_t v = 0xac38c4u; esp -= 4; W32(esp, v); }
/* 75a971: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 75a973: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x75a975u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75a975: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 75a979: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75a97b: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 75a983: je 0x75a98e */
  if (zf) goto L_75a98e;
L_75a985: /* 75a985: mov ecx, eax */
  ecx = eax;
/* 75a987: call 0x6cc2de */
  esp -= 4; W32(esp, 0x75a98cu); SPILL(); f_6cc2de(); if (g_unwind) return; RELOAD();
/* 75a98c: jmp 0x75a990 */
  goto L_75a990;
L_75a98e: /* 75a98e: xor eax, eax */
  eax = 0;
L_75a990: /* 75a990: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* 75a994: mov dword ptr [ecx + 0x50], eax */
  W32((uint32_t)(ecx + 0x50u), eax);
/* 75a997: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* 75a99b: mov eax, dword ptr [edx + 0x50] */
  eax = R32((uint32_t)(edx + 0x50u));
/* 75a99e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75a99f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75a9a0: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 75a9a4: mov ecx, 0x2c */
  ecx = 0x2cu;
/* 75a9a9: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 75a9ad: xor eax, eax */
  eax = 0;
/* 75a9af: mov ebx, ecx */
  ebx = ecx;
/* 75a9b1: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 75a9b4: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 75a9b7: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 75a9b9: mov ecx, ebx */
  ecx = ebx;
/* 75a9bb: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 75a9bd: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75a9c1: mov edx, dword ptr [ecx + 0x50] */
  edx = R32((uint32_t)(ecx + 0x50u));
/* 75a9c4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75a9c5: mov dword ptr [edx + 0x28], 0x3f800000 */
  W32((uint32_t)(edx + 0x28u), 0x3f800000u);
/* 75a9cc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_75a9cd: /* 75a9cd: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75a9d1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75a9d8: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75a9db: ret  */
  esp += 4; SPILL(); return;
}

void f_75aa10(void) {
  LOAD_REGS();
L_75aa10: /* 75aa10: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75aa14: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75aa16: je 0x75aa1d */
  if (zf) goto L_75aa1d;
L_75aa18: /* 75aa18: jmp 0x6c6df7 */
  SPILL(); f_6c6df7(); return;
L_75aa1d: /* 75aa1d: ret  */
  esp += 4; SPILL(); return;
}

void f_75aa30(void) {
  LOAD_REGS();
L_75aa30: /* 75aa30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75aa32: push 0x9c960e */
  { uint32_t v = 0x9c960eu; esp -= 4; W32(esp, v); }
/* 75aa37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75aa3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75aa3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75aa45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75aa46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75aa47: mov esi, ecx */
  esi = ecx;
/* 75aa49: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75aa4d: mov dword ptr [esi], 0xa058a0 */
  W32((uint32_t)(esi), 0xa058a0u);
/* 75aa53: mov dword ptr [esp + 0x10], 5 */
  W32((uint32_t)(esp + 0x10u), 0x5u);
/* 75aa5b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x75aa61u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 75aa61: lea ecx, [esi + 0x430] */
  ecx = (uint32_t)(esi + 0x430u);
/* 75aa67: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* 75aa6c: call 0x6cb90b */
  esp -= 4; W32(esp, 0x75aa71u); SPILL(); f_6cb90b(); if (g_unwind) return; RELOAD();
/* 75aa71: lea ecx, [esi + 0x3ec] */
  ecx = (uint32_t)(esi + 0x3ecu);
/* 75aa77: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 75aa7c: call 0x6c3e13 */
  esp -= 4; W32(esp, 0x75aa81u); SPILL(); f_6c3e13(); if (g_unwind) return; RELOAD();
/* 75aa81: lea ecx, [esi + 0x3e0] */
  ecx = (uint32_t)(esi + 0x3e0u);
/* 75aa87: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 75aa8c: call 0x6c2ed2 */
  esp -= 4; W32(esp, 0x75aa91u); SPILL(); f_6c2ed2(); if (g_unwind) return; RELOAD();
/* 75aa91: lea ecx, [esi + 0x3d4] */
  ecx = (uint32_t)(esi + 0x3d4u);
/* 75aa97: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 75aa9c: call 0x6c2ed2 */
  esp -= 4; W32(esp, 0x75aaa1u); SPILL(); f_6c2ed2(); if (g_unwind) return; RELOAD();
/* 75aaa1: lea ecx, [esi + 0x3b0] */
  ecx = (uint32_t)(esi + 0x3b0u);
/* 75aaa7: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 75aaac: call 0x6cbadc */
  esp -= 4; W32(esp, 0x75aab1u); SPILL(); f_6cbadc(); if (g_unwind) return; RELOAD();
/* 75aab1: mov ecx, esi */
  ecx = esi;
/* 75aab3: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 75aabb: call 0x6c688e */
  esp -= 4; W32(esp, 0x75aac0u); SPILL(); f_6c688e(); if (g_unwind) return; RELOAD();
/* 75aac0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75aac4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75aac5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75aacc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75aacf: ret  */
  esp += 4; SPILL(); return;
}

void f_75ab00(void) {
  LOAD_REGS();
L_75ab00: /* 75ab00: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75ab02: push 0x9c9670 */
  { uint32_t v = 0x9c9670u; esp -= 4; W32(esp, v); }
/* 75ab07: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75ab0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75ab0e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75ab15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75ab16: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75ab17: mov esi, ecx */
  esi = ecx;
/* 75ab19: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75ab1d: call 0x6c87a6 */
  esp -= 4; W32(esp, 0x75ab22u); SPILL(); f_6c87a6(); if (g_unwind) return; RELOAD();
/* 75ab22: lea ecx, [esi + 0x35c] */
  ecx = (uint32_t)(esi + 0x35cu);
/* 75ab28: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 75ab30: mov dword ptr [esi], 0xa058a0 */
  W32((uint32_t)(esi), 0xa058a0u);
/* 75ab36: call dword ptr [0xcfa310] */
  esp -= 4; W32(esp, 0x75ab3cu); SPILL(); f_4e1fd7(); if (g_unwind) return; /* Core!??0FRange@@QAE@XZ */ RELOAD();
/* 75ab3c: lea ecx, [esi + 0x3b0] */
  ecx = (uint32_t)(esi + 0x3b0u);
/* 75ab42: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x75ab48u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 75ab48: lea ecx, [esi + 0x3d4] */
  ecx = (uint32_t)(esi + 0x3d4u);
/* 75ab4e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 75ab50: mov byte ptr [esp + 0x14], 1 */
  W8((uint32_t)(esp + 0x14u), 0x1u);
/* 75ab55: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x75ab5bu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 75ab5b: lea ecx, [esi + 0x3e0] */
  ecx = (uint32_t)(esi + 0x3e0u);
/* 75ab61: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 75ab63: mov byte ptr [esp + 0x14], 2 */
  W8((uint32_t)(esp + 0x14u), 0x2u);
/* 75ab68: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x75ab6eu); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 75ab6e: lea ecx, [esi + 0x3ec] */
  ecx = (uint32_t)(esi + 0x3ecu);
/* 75ab74: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 75ab76: mov byte ptr [esp + 0x14], 3 */
  W8((uint32_t)(esp + 0x14u), 0x3u);
/* 75ab7b: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x75ab81u); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 75ab81: lea ecx, [esi + 0x3fc] */
  ecx = (uint32_t)(esi + 0x3fcu);
/* 75ab87: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* 75ab8c: call dword ptr [0xcfa370] */
  esp -= 4; W32(esp, 0x75ab92u); SPILL(); f_4e205e(); if (g_unwind) return; /* Core!??0FBox@@QAE@XZ */ RELOAD();
/* 75ab92: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 75ab94: lea ecx, [esi + 0x430] */
  ecx = (uint32_t)(esi + 0x430u);
/* 75ab9a: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x75aba0u); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 75aba0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75aba4: mov eax, esi */
  eax = esi;
/* 75aba6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75aba7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75abae: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75abb1: ret  */
  esp += 4; SPILL(); return;
}

void f_75abf0(void) {
  LOAD_REGS();
L_75abf0: /* 75abf0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75abf2: push 0x9c96d0 */
  { uint32_t v = 0x9c96d0u; esp -= 4; W32(esp, v); }
/* 75abf7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75abfd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75abfe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75ac05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75ac06: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75ac07: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75ac08: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 75ac0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75ac0d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75ac0e: mov ebx, ecx */
  ebx = ecx;
/* 75ac10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75ac11: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 75ac15: call 0x6c1456 */
  esp -= 4; W32(esp, 0x75ac1au); SPILL(); f_6c1456(); if (g_unwind) return; RELOAD();
/* 75ac1a: mov dword ptr [ebx], 0xa058a0 */
  W32((uint32_t)(ebx), 0xa058a0u);
/* 75ac20: mov al, byte ptr [ebp + 0x33c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x33cu))) & 0xffu);
/* 75ac26: mov byte ptr [ebx + 0x33c], al */
  W8((uint32_t)(ebx + 0x33cu), (eax & 0xffu));
/* 75ac2c: mov ecx, dword ptr [ebp + 0x340] */
  ecx = R32((uint32_t)(ebp + 0x340u));
/* 75ac32: mov dword ptr [ebx + 0x340], ecx */
  W32((uint32_t)(ebx + 0x340u), ecx);
/* 75ac38: mov edx, dword ptr [ebp + 0x344] */
  edx = R32((uint32_t)(ebp + 0x344u));
/* 75ac3e: mov dword ptr [ebx + 0x344], edx */
  W32((uint32_t)(ebx + 0x344u), edx);
/* 75ac44: mov eax, dword ptr [ebp + 0x348] */
  eax = R32((uint32_t)(ebp + 0x348u));
/* 75ac4a: mov dword ptr [ebx + 0x348], eax */
  W32((uint32_t)(ebx + 0x348u), eax);
/* 75ac50: mov ecx, dword ptr [ebp + 0x34c] */
  ecx = R32((uint32_t)(ebp + 0x34cu));
/* 75ac56: mov dword ptr [ebx + 0x34c], ecx */
  W32((uint32_t)(ebx + 0x34cu), ecx);
/* 75ac5c: mov edx, dword ptr [ebp + 0x350] */
  edx = R32((uint32_t)(ebp + 0x350u));
/* 75ac62: mov dword ptr [ebx + 0x350], edx */
  W32((uint32_t)(ebx + 0x350u), edx);
/* 75ac68: mov eax, dword ptr [ebp + 0x354] */
  eax = R32((uint32_t)(ebp + 0x354u));
/* 75ac6e: mov edi, dword ptr [ebx + 0x364] */
  edi = R32((uint32_t)(ebx + 0x364u));
/* 75ac74: mov dword ptr [ebx + 0x354], eax */
  W32((uint32_t)(ebx + 0x354u), eax);
/* 75ac7a: mov ecx, dword ptr [ebp + 0x358] */
  ecx = R32((uint32_t)(ebp + 0x358u));
/* 75ac80: mov dword ptr [ebx + 0x358], ecx */
  W32((uint32_t)(ebx + 0x358u), ecx);
/* 75ac86: mov edx, dword ptr [ebp + 0x35c] */
  edx = R32((uint32_t)(ebp + 0x35cu));
/* 75ac8c: mov dword ptr [ebx + 0x35c], edx */
  W32((uint32_t)(ebx + 0x35cu), edx);
/* 75ac92: mov eax, dword ptr [ebp + 0x360] */
  eax = R32((uint32_t)(ebp + 0x360u));
/* 75ac98: mov dword ptr [ebx + 0x360], eax */
  W32((uint32_t)(ebx + 0x360u), eax);
/* 75ac9e: mov ecx, dword ptr [ebp + 0x364] */
  ecx = R32((uint32_t)(ebp + 0x364u));
/* 75aca4: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75aca6: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 75aca9: mov edx, edi */
  edx = edi;
/* 75acab: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 75acad: mov dword ptr [ebx + 0x364], edx */
  W32((uint32_t)(ebx + 0x364u), edx);
/* 75acb3: mov edx, dword ptr [ebp + 0x368] */
  edx = R32((uint32_t)(ebp + 0x368u));
/* 75acb9: mov dword ptr [ebx + 0x368], edx */
  W32((uint32_t)(ebx + 0x368u), edx);
/* 75acbf: mov eax, dword ptr [ebp + 0x36c] */
  eax = R32((uint32_t)(ebp + 0x36cu));
/* 75acc5: mov dword ptr [ebx + 0x36c], eax */
  W32((uint32_t)(ebx + 0x36cu), eax);
/* 75accb: mov ecx, dword ptr [ebp + 0x370] */
  ecx = R32((uint32_t)(ebp + 0x370u));
/* 75acd1: mov dword ptr [ebx + 0x370], ecx */
  W32((uint32_t)(ebx + 0x370u), ecx);
/* 75acd7: mov edx, dword ptr [ebp + 0x374] */
  edx = R32((uint32_t)(ebp + 0x374u));
/* 75acdd: mov dword ptr [ebx + 0x374], edx */
  W32((uint32_t)(ebx + 0x374u), edx);
/* 75ace3: mov eax, dword ptr [ebp + 0x378] */
  eax = R32((uint32_t)(ebp + 0x378u));
/* 75ace9: mov dword ptr [ebx + 0x378], eax */
  W32((uint32_t)(ebx + 0x378u), eax);
/* 75acef: mov ecx, dword ptr [ebp + 0x37c] */
  ecx = R32((uint32_t)(ebp + 0x37cu));
/* 75acf5: mov dword ptr [ebx + 0x37c], ecx */
  W32((uint32_t)(ebx + 0x37cu), ecx);
/* 75acfb: mov edx, dword ptr [ebp + 0x380] */
  edx = R32((uint32_t)(ebp + 0x380u));
/* 75ad01: mov dword ptr [ebx + 0x380], edx */
  W32((uint32_t)(ebx + 0x380u), edx);
/* 75ad07: mov eax, dword ptr [ebp + 0x384] */
  eax = R32((uint32_t)(ebp + 0x384u));
/* 75ad0d: mov dword ptr [ebx + 0x384], eax */
  W32((uint32_t)(ebx + 0x384u), eax);
/* 75ad13: mov ecx, dword ptr [ebp + 0x388] */
  ecx = R32((uint32_t)(ebp + 0x388u));
/* 75ad19: mov dword ptr [ebx + 0x388], ecx */
  W32((uint32_t)(ebx + 0x388u), ecx);
/* 75ad1f: mov dl, byte ptr [ebp + 0x38c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x38cu))) & 0xffu);
/* 75ad25: mov byte ptr [ebx + 0x38c], dl */
  W8((uint32_t)(ebx + 0x38cu), (edx & 0xffu));
/* 75ad2b: mov eax, dword ptr [ebp + 0x390] */
  eax = R32((uint32_t)(ebp + 0x390u));
/* 75ad31: mov esi, dword ptr [ebx + 0x3ac] */
  esi = R32((uint32_t)(ebx + 0x3acu));
/* 75ad37: mov dword ptr [ebx + 0x390], eax */
  W32((uint32_t)(ebx + 0x390u), eax);
/* 75ad3d: mov ecx, dword ptr [ebp + 0x394] */
  ecx = R32((uint32_t)(ebp + 0x394u));
/* 75ad43: mov dword ptr [ebx + 0x394], ecx */
  W32((uint32_t)(ebx + 0x394u), ecx);
/* 75ad49: mov edx, dword ptr [ebp + 0x398] */
  edx = R32((uint32_t)(ebp + 0x398u));
/* 75ad4f: mov dword ptr [ebx + 0x398], edx */
  W32((uint32_t)(ebx + 0x398u), edx);
/* 75ad55: mov eax, dword ptr [ebp + 0x39c] */
  eax = R32((uint32_t)(ebp + 0x39cu));
/* 75ad5b: mov dword ptr [ebx + 0x39c], eax */
  W32((uint32_t)(ebx + 0x39cu), eax);
/* 75ad61: mov ecx, dword ptr [ebp + 0x3a0] */
  ecx = R32((uint32_t)(ebp + 0x3a0u));
/* 75ad67: mov dword ptr [ebx + 0x3a0], ecx */
  W32((uint32_t)(ebx + 0x3a0u), ecx);
/* 75ad6d: mov ecx, dword ptr [ebx + 0x3a4] */
  ecx = R32((uint32_t)(ebx + 0x3a4u));
/* 75ad73: mov edx, dword ptr [ebp + 0x3a4] */
  edx = R32((uint32_t)(ebp + 0x3a4u));
/* 75ad79: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 75ad7b: mov edi, ecx */
  edi = ecx;
/* 75ad7d: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 75ad80: xor edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 75ad82: mov dword ptr [ebx + 0x3a4], edi */
  W32((uint32_t)(ebx + 0x3a4u), edi);
/* 75ad88: mov eax, dword ptr [ebp + 0x3a8] */
  eax = R32((uint32_t)(ebp + 0x3a8u));
/* 75ad8e: mov dword ptr [ebx + 0x3a8], eax */
  W32((uint32_t)(ebx + 0x3a8u), eax);
/* 75ad94: mov ecx, dword ptr [ebp + 0x3ac] */
  ecx = R32((uint32_t)(ebp + 0x3acu));
/* 75ad9a: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 75ada2: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75ada4: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 75ada7: mov eax, esi */
  eax = esi;
/* 75ada9: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75adab: lea edx, [ebp + 0x3b0] */
  edx = (uint32_t)(ebp + 0x3b0u);
/* 75adb1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 75adb2: lea ecx, [ebx + 0x3b0] */
  ecx = (uint32_t)(ebx + 0x3b0u);
/* 75adb8: mov dword ptr [ebx + 0x3ac], eax */
  W32((uint32_t)(ebx + 0x3acu), eax);
/* 75adbe: call 0x6c70a4 */
  esp -= 4; W32(esp, 0x75adc3u); SPILL(); f_6c70a4(); if (g_unwind) return; RELOAD();
/* 75adc3: mov eax, dword ptr [ebp + 0x3bc] */
  eax = R32((uint32_t)(ebp + 0x3bcu));
/* 75adc9: mov ecx, dword ptr [ebx + 0x3c0] */
  ecx = R32((uint32_t)(ebx + 0x3c0u));
/* 75adcf: mov dword ptr [ebx + 0x3bc], eax */
  W32((uint32_t)(ebx + 0x3bcu), eax);
/* 75add5: mov esi, dword ptr [ebp + 0x3c0] */
  esi = R32((uint32_t)(ebp + 0x3c0u));
/* 75addb: mov eax, dword ptr [ebx + 0x3c0] */
  eax = R32((uint32_t)(ebx + 0x3c0u));
/* 75ade1: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75ade3: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 75ade6: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75ade8: mov dword ptr [ebx + 0x3c0], eax */
  W32((uint32_t)(ebx + 0x3c0u), eax);
/* 75adee: mov edx, dword ptr [ebp + 0x3c0] */
  edx = R32((uint32_t)(ebp + 0x3c0u));
/* 75adf4: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 75adf6: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 75adf9: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 75adfb: mov dword ptr [ebx + 0x3c0], edx */
  W32((uint32_t)(ebx + 0x3c0u), edx);
/* 75ae01: mov eax, dword ptr [ebp + 0x3c4] */
  eax = R32((uint32_t)(ebp + 0x3c4u));
/* 75ae07: mov dword ptr [ebx + 0x3c4], eax */
  W32((uint32_t)(ebx + 0x3c4u), eax);
/* 75ae0d: mov ecx, dword ptr [ebp + 0x3c8] */
  ecx = R32((uint32_t)(ebp + 0x3c8u));
/* 75ae13: mov dword ptr [ebx + 0x3c8], ecx */
  W32((uint32_t)(ebx + 0x3c8u), ecx);
/* 75ae19: mov edx, dword ptr [ebp + 0x3cc] */
  edx = R32((uint32_t)(ebp + 0x3ccu));
/* 75ae1f: mov dword ptr [ebx + 0x3cc], edx */
  W32((uint32_t)(ebx + 0x3ccu), edx);
/* 75ae25: mov eax, dword ptr [ebp + 0x3d0] */
  eax = R32((uint32_t)(ebp + 0x3d0u));
/* 75ae2b: lea edx, [ebp + 0x3d4] */
  edx = (uint32_t)(ebp + 0x3d4u);
/* 75ae31: lea ecx, [ebx + 0x3d4] */
  ecx = (uint32_t)(ebx + 0x3d4u);
/* 75ae37: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 75ae38: mov byte ptr [esp + 0x20], 1 */
  W8((uint32_t)(esp + 0x20u), 0x1u);
/* 75ae3d: mov dword ptr [ebx + 0x3d0], eax */
  W32((uint32_t)(ebx + 0x3d0u), eax);
/* 75ae43: call 0x6c85e4 */
  esp -= 4; W32(esp, 0x75ae48u); SPILL(); f_6c85e4(); if (g_unwind) return; RELOAD();
/* 75ae48: lea eax, [ebp + 0x3e0] */
  eax = (uint32_t)(ebp + 0x3e0u);
/* 75ae4e: lea ecx, [ebx + 0x3e0] */
  ecx = (uint32_t)(ebx + 0x3e0u);
/* 75ae54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75ae55: mov byte ptr [esp + 0x20], 2 */
  W8((uint32_t)(esp + 0x20u), 0x2u);
/* 75ae5a: call 0x6c85e4 */
  esp -= 4; W32(esp, 0x75ae5fu); SPILL(); f_6c85e4(); if (g_unwind) return; RELOAD();
/* 75ae5f: lea edx, [ebp + 0x3ec] */
  edx = (uint32_t)(ebp + 0x3ecu);
/* 75ae65: lea ecx, [ebx + 0x3ec] */
  ecx = (uint32_t)(ebx + 0x3ecu);
/* 75ae6b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 75ae6c: mov byte ptr [esp + 0x20], 3 */
  W8((uint32_t)(esp + 0x20u), 0x3u);
/* 75ae71: call 0x6cb258 */
  esp -= 4; W32(esp, 0x75ae76u); SPILL(); f_6cb258(); if (g_unwind) return; RELOAD();
/* 75ae76: mov eax, dword ptr [ebp + 0x3f8] */
  eax = R32((uint32_t)(ebp + 0x3f8u));
/* 75ae7c: mov dword ptr [ebx + 0x3f8], eax */
  W32((uint32_t)(ebx + 0x3f8u), eax);
/* 75ae82: lea esi, [ebp + 0x3fc] */
  esi = (uint32_t)(ebp + 0x3fcu);
/* 75ae88: lea edi, [ebx + 0x3fc] */
  edi = (uint32_t)(ebx + 0x3fcu);
/* 75ae8e: mov ecx, 7 */
  ecx = 0x7u;
/* 75ae93: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 75ae95: lea ecx, [ebp + 0x418] */
  ecx = (uint32_t)(ebp + 0x418u);
/* 75ae9b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 75ae9d: lea edx, [ebx + 0x418] */
  edx = (uint32_t)(ebx + 0x418u);
/* 75aea3: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 75aea5: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 75aea8: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 75aeab: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 75aeae: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 75aeb1: mov edx, dword ptr [ebp + 0x424] */
  edx = R32((uint32_t)(ebp + 0x424u));
/* 75aeb7: mov dword ptr [ebx + 0x424], edx */
  W32((uint32_t)(ebx + 0x424u), edx);
/* 75aebd: mov eax, dword ptr [ebp + 0x428] */
  eax = R32((uint32_t)(ebp + 0x428u));
/* 75aec3: mov dword ptr [ebx + 0x428], eax */
  W32((uint32_t)(ebx + 0x428u), eax);
/* 75aec9: mov ecx, dword ptr [ebp + 0x42c] */
  ecx = R32((uint32_t)(ebp + 0x42cu));
/* 75aecf: lea edx, [ebp + 0x430] */
  edx = (uint32_t)(ebp + 0x430u);
/* 75aed5: mov dword ptr [ebx + 0x42c], ecx */
  W32((uint32_t)(ebx + 0x42cu), ecx);
/* 75aedb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 75aedc: lea ecx, [ebx + 0x430] */
  ecx = (uint32_t)(ebx + 0x430u);
/* 75aee2: mov byte ptr [esp + 0x20], 4 */
  W8((uint32_t)(esp + 0x20u), 0x4u);
/* 75aee7: call 0x6c807b */
  esp -= 4; W32(esp, 0x75aeecu); SPILL(); f_6c807b(); if (g_unwind) return; RELOAD();
/* 75aeec: mov eax, dword ptr [ebp + 0x43c] */
  eax = R32((uint32_t)(ebp + 0x43cu));
/* 75aef2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75aef3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75aef4: mov dword ptr [ebx + 0x43c], eax */
  W32((uint32_t)(ebx + 0x43cu), eax);
/* 75aefa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 75aefb: mov eax, ebx */
  eax = ebx;
/* 75aefd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75aefe: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75af02: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75af09: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75af0c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75afe0(void) {
  LOAD_REGS();
L_75afe0: /* 75afe0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75afe1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75afe2: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 75afe6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75afe7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75afe8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75afe9: mov ebx, ecx */
  ebx = ecx;
/* 75afeb: call 0x6c5cef */
  esp -= 4; W32(esp, 0x75aff0u); SPILL(); f_6c5cef(); if (g_unwind) return; RELOAD();
/* 75aff0: mov al, byte ptr [ebp + 0x33c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x33cu))) & 0xffu);
/* 75aff6: mov byte ptr [ebx + 0x33c], al */
  W8((uint32_t)(ebx + 0x33cu), (eax & 0xffu));
/* 75affc: mov ecx, dword ptr [ebp + 0x340] */
  ecx = R32((uint32_t)(ebp + 0x340u));
/* 75b002: mov dword ptr [ebx + 0x340], ecx */
  W32((uint32_t)(ebx + 0x340u), ecx);
/* 75b008: mov edx, dword ptr [ebp + 0x344] */
  edx = R32((uint32_t)(ebp + 0x344u));
/* 75b00e: mov dword ptr [ebx + 0x344], edx */
  W32((uint32_t)(ebx + 0x344u), edx);
/* 75b014: mov eax, dword ptr [ebp + 0x348] */
  eax = R32((uint32_t)(ebp + 0x348u));
/* 75b01a: mov dword ptr [ebx + 0x348], eax */
  W32((uint32_t)(ebx + 0x348u), eax);
/* 75b020: mov ecx, dword ptr [ebp + 0x34c] */
  ecx = R32((uint32_t)(ebp + 0x34cu));
/* 75b026: mov dword ptr [ebx + 0x34c], ecx */
  W32((uint32_t)(ebx + 0x34cu), ecx);
/* 75b02c: mov edx, dword ptr [ebp + 0x350] */
  edx = R32((uint32_t)(ebp + 0x350u));
/* 75b032: mov dword ptr [ebx + 0x350], edx */
  W32((uint32_t)(ebx + 0x350u), edx);
/* 75b038: mov eax, dword ptr [ebp + 0x354] */
  eax = R32((uint32_t)(ebp + 0x354u));
/* 75b03e: mov edi, dword ptr [ebx + 0x364] */
  edi = R32((uint32_t)(ebx + 0x364u));
/* 75b044: mov dword ptr [ebx + 0x354], eax */
  W32((uint32_t)(ebx + 0x354u), eax);
/* 75b04a: mov ecx, dword ptr [ebp + 0x358] */
  ecx = R32((uint32_t)(ebp + 0x358u));
/* 75b050: mov dword ptr [ebx + 0x358], ecx */
  W32((uint32_t)(ebx + 0x358u), ecx);
/* 75b056: mov edx, dword ptr [ebp + 0x35c] */
  edx = R32((uint32_t)(ebp + 0x35cu));
/* 75b05c: mov dword ptr [ebx + 0x35c], edx */
  W32((uint32_t)(ebx + 0x35cu), edx);
/* 75b062: mov eax, dword ptr [ebp + 0x360] */
  eax = R32((uint32_t)(ebp + 0x360u));
/* 75b068: mov dword ptr [ebx + 0x360], eax */
  W32((uint32_t)(ebx + 0x360u), eax);
/* 75b06e: mov ecx, dword ptr [ebp + 0x364] */
  ecx = R32((uint32_t)(ebp + 0x364u));
/* 75b074: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75b076: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 75b079: mov edx, edi */
  edx = edi;
/* 75b07b: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 75b07d: mov dword ptr [ebx + 0x364], edx */
  W32((uint32_t)(ebx + 0x364u), edx);
/* 75b083: mov edx, dword ptr [ebp + 0x368] */
  edx = R32((uint32_t)(ebp + 0x368u));
/* 75b089: mov dword ptr [ebx + 0x368], edx */
  W32((uint32_t)(ebx + 0x368u), edx);
/* 75b08f: mov eax, dword ptr [ebp + 0x36c] */
  eax = R32((uint32_t)(ebp + 0x36cu));
/* 75b095: mov dword ptr [ebx + 0x36c], eax */
  W32((uint32_t)(ebx + 0x36cu), eax);
/* 75b09b: mov ecx, dword ptr [ebp + 0x370] */
  ecx = R32((uint32_t)(ebp + 0x370u));
/* 75b0a1: mov dword ptr [ebx + 0x370], ecx */
  W32((uint32_t)(ebx + 0x370u), ecx);
/* 75b0a7: mov edx, dword ptr [ebp + 0x374] */
  edx = R32((uint32_t)(ebp + 0x374u));
/* 75b0ad: mov dword ptr [ebx + 0x374], edx */
  W32((uint32_t)(ebx + 0x374u), edx);
/* 75b0b3: mov eax, dword ptr [ebp + 0x378] */
  eax = R32((uint32_t)(ebp + 0x378u));
/* 75b0b9: mov dword ptr [ebx + 0x378], eax */
  W32((uint32_t)(ebx + 0x378u), eax);
/* 75b0bf: mov ecx, dword ptr [ebp + 0x37c] */
  ecx = R32((uint32_t)(ebp + 0x37cu));
/* 75b0c5: mov dword ptr [ebx + 0x37c], ecx */
  W32((uint32_t)(ebx + 0x37cu), ecx);
/* 75b0cb: mov edx, dword ptr [ebp + 0x380] */
  edx = R32((uint32_t)(ebp + 0x380u));
/* 75b0d1: mov dword ptr [ebx + 0x380], edx */
  W32((uint32_t)(ebx + 0x380u), edx);
/* 75b0d7: mov eax, dword ptr [ebp + 0x384] */
  eax = R32((uint32_t)(ebp + 0x384u));
/* 75b0dd: mov dword ptr [ebx + 0x384], eax */
  W32((uint32_t)(ebx + 0x384u), eax);
/* 75b0e3: mov ecx, dword ptr [ebp + 0x388] */
  ecx = R32((uint32_t)(ebp + 0x388u));
/* 75b0e9: mov dword ptr [ebx + 0x388], ecx */
  W32((uint32_t)(ebx + 0x388u), ecx);
/* 75b0ef: mov dl, byte ptr [ebp + 0x38c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x38cu))) & 0xffu);
/* 75b0f5: mov byte ptr [ebx + 0x38c], dl */
  W8((uint32_t)(ebx + 0x38cu), (edx & 0xffu));
/* 75b0fb: mov eax, dword ptr [ebp + 0x390] */
  eax = R32((uint32_t)(ebp + 0x390u));
/* 75b101: mov esi, dword ptr [ebx + 0x3ac] */
  esi = R32((uint32_t)(ebx + 0x3acu));
/* 75b107: mov dword ptr [ebx + 0x390], eax */
  W32((uint32_t)(ebx + 0x390u), eax);
/* 75b10d: mov ecx, dword ptr [ebp + 0x394] */
  ecx = R32((uint32_t)(ebp + 0x394u));
/* 75b113: mov dword ptr [ebx + 0x394], ecx */
  W32((uint32_t)(ebx + 0x394u), ecx);
/* 75b119: mov edx, dword ptr [ebp + 0x398] */
  edx = R32((uint32_t)(ebp + 0x398u));
/* 75b11f: mov dword ptr [ebx + 0x398], edx */
  W32((uint32_t)(ebx + 0x398u), edx);
/* 75b125: mov eax, dword ptr [ebp + 0x39c] */
  eax = R32((uint32_t)(ebp + 0x39cu));
/* 75b12b: mov dword ptr [ebx + 0x39c], eax */
  W32((uint32_t)(ebx + 0x39cu), eax);
/* 75b131: mov ecx, dword ptr [ebp + 0x3a0] */
  ecx = R32((uint32_t)(ebp + 0x3a0u));
/* 75b137: mov dword ptr [ebx + 0x3a0], ecx */
  W32((uint32_t)(ebx + 0x3a0u), ecx);
/* 75b13d: mov edx, dword ptr [ebp + 0x3a4] */
  edx = R32((uint32_t)(ebp + 0x3a4u));
/* 75b143: mov ecx, dword ptr [ebx + 0x3a4] */
  ecx = R32((uint32_t)(ebx + 0x3a4u));
/* 75b149: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 75b14b: mov edi, ecx */
  edi = ecx;
/* 75b14d: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 75b150: xor edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 75b152: mov dword ptr [ebx + 0x3a4], edi */
  W32((uint32_t)(ebx + 0x3a4u), edi);
/* 75b158: mov eax, dword ptr [ebp + 0x3a8] */
  eax = R32((uint32_t)(ebp + 0x3a8u));
/* 75b15e: mov dword ptr [ebx + 0x3a8], eax */
  W32((uint32_t)(ebx + 0x3a8u), eax);
/* 75b164: mov ecx, dword ptr [ebp + 0x3ac] */
  ecx = R32((uint32_t)(ebp + 0x3acu));
/* 75b16a: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75b16c: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 75b16f: mov eax, esi */
  eax = esi;
/* 75b171: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75b173: mov dword ptr [ebx + 0x3ac], eax */
  W32((uint32_t)(ebx + 0x3acu), eax);
/* 75b179: lea edx, [ebp + 0x3b0] */
  edx = (uint32_t)(ebp + 0x3b0u);
/* 75b17f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 75b180: lea ecx, [ebx + 0x3b0] */
  ecx = (uint32_t)(ebx + 0x3b0u);
/* 75b186: call 0x6cca95 */
  esp -= 4; W32(esp, 0x75b18bu); SPILL(); f_6cca95(); if (g_unwind) return; RELOAD();
/* 75b18b: mov eax, dword ptr [ebp + 0x3bc] */
  eax = R32((uint32_t)(ebp + 0x3bcu));
/* 75b191: mov ecx, dword ptr [ebx + 0x3c0] */
  ecx = R32((uint32_t)(ebx + 0x3c0u));
/* 75b197: mov dword ptr [ebx + 0x3bc], eax */
  W32((uint32_t)(ebx + 0x3bcu), eax);
/* 75b19d: mov esi, dword ptr [ebp + 0x3c0] */
  esi = R32((uint32_t)(ebp + 0x3c0u));
/* 75b1a3: mov eax, dword ptr [ebx + 0x3c0] */
  eax = R32((uint32_t)(ebx + 0x3c0u));
/* 75b1a9: xor ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75b1ab: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 75b1ae: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75b1b0: mov dword ptr [ebx + 0x3c0], eax */
  W32((uint32_t)(ebx + 0x3c0u), eax);
/* 75b1b6: mov edx, dword ptr [ebp + 0x3c0] */
  edx = R32((uint32_t)(ebp + 0x3c0u));
/* 75b1bc: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 75b1be: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 75b1c1: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 75b1c3: mov dword ptr [ebx + 0x3c0], edx */
  W32((uint32_t)(ebx + 0x3c0u), edx);
/* 75b1c9: mov eax, dword ptr [ebp + 0x3c4] */
  eax = R32((uint32_t)(ebp + 0x3c4u));
/* 75b1cf: mov dword ptr [ebx + 0x3c4], eax */
  W32((uint32_t)(ebx + 0x3c4u), eax);
/* 75b1d5: mov ecx, dword ptr [ebp + 0x3c8] */
  ecx = R32((uint32_t)(ebp + 0x3c8u));
/* 75b1db: mov dword ptr [ebx + 0x3c8], ecx */
  W32((uint32_t)(ebx + 0x3c8u), ecx);
/* 75b1e1: mov edx, dword ptr [ebp + 0x3cc] */
  edx = R32((uint32_t)(ebp + 0x3ccu));
/* 75b1e7: lea ecx, [ebp + 0x3d4] */
  ecx = (uint32_t)(ebp + 0x3d4u);
/* 75b1ed: mov dword ptr [ebx + 0x3cc], edx */
  W32((uint32_t)(ebx + 0x3ccu), edx);
/* 75b1f3: mov eax, dword ptr [ebp + 0x3d0] */
  eax = R32((uint32_t)(ebp + 0x3d0u));
/* 75b1f9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75b1fa: lea ecx, [ebx + 0x3d4] */
  ecx = (uint32_t)(ebx + 0x3d4u);
/* 75b200: mov dword ptr [ebx + 0x3d0], eax */
  W32((uint32_t)(ebx + 0x3d0u), eax);
/* 75b206: call 0x6c4246 */
  esp -= 4; W32(esp, 0x75b20bu); SPILL(); f_6c4246(); if (g_unwind) return; RELOAD();
/* 75b20b: lea edx, [ebp + 0x3e0] */
  edx = (uint32_t)(ebp + 0x3e0u);
/* 75b211: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 75b212: lea ecx, [ebx + 0x3e0] */
  ecx = (uint32_t)(ebx + 0x3e0u);
/* 75b218: call 0x6c4246 */
  esp -= 4; W32(esp, 0x75b21du); SPILL(); f_6c4246(); if (g_unwind) return; RELOAD();
/* 75b21d: lea eax, [ebp + 0x3ec] */
  eax = (uint32_t)(ebp + 0x3ecu);
/* 75b223: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75b224: lea ecx, [ebx + 0x3ec] */
  ecx = (uint32_t)(ebx + 0x3ecu);
/* 75b22a: call 0x6c5ecf */
  esp -= 4; W32(esp, 0x75b22fu); SPILL(); f_6c5ecf(); if (g_unwind) return; RELOAD();
/* 75b22f: mov ecx, dword ptr [ebp + 0x3f8] */
  ecx = R32((uint32_t)(ebp + 0x3f8u));
/* 75b235: mov dword ptr [ebx + 0x3f8], ecx */
  W32((uint32_t)(ebx + 0x3f8u), ecx);
/* 75b23b: lea esi, [ebp + 0x3fc] */
  esi = (uint32_t)(ebp + 0x3fcu);
/* 75b241: lea edi, [ebx + 0x3fc] */
  edi = (uint32_t)(ebx + 0x3fcu);
/* 75b247: mov ecx, 7 */
  ecx = 0x7u;
/* 75b24c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 75b24e: lea edx, [ebp + 0x418] */
  edx = (uint32_t)(ebp + 0x418u);
/* 75b254: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 75b256: lea eax, [ebx + 0x418] */
  eax = (uint32_t)(ebx + 0x418u);
/* 75b25c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 75b25e: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 75b261: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 75b264: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 75b267: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 75b26a: mov eax, dword ptr [ebp + 0x424] */
  eax = R32((uint32_t)(ebp + 0x424u));
/* 75b270: mov dword ptr [ebx + 0x424], eax */
  W32((uint32_t)(ebx + 0x424u), eax);
/* 75b276: mov ecx, dword ptr [ebp + 0x428] */
  ecx = R32((uint32_t)(ebp + 0x428u));
/* 75b27c: mov dword ptr [ebx + 0x428], ecx */
  W32((uint32_t)(ebx + 0x428u), ecx);
/* 75b282: mov edx, dword ptr [ebp + 0x42c] */
  edx = R32((uint32_t)(ebp + 0x42cu));
/* 75b288: lea eax, [ebp + 0x430] */
  eax = (uint32_t)(ebp + 0x430u);
/* 75b28e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75b28f: lea ecx, [ebx + 0x430] */
  ecx = (uint32_t)(ebx + 0x430u);
/* 75b295: mov dword ptr [ebx + 0x42c], edx */
  W32((uint32_t)(ebx + 0x42cu), edx);
/* 75b29b: call 0x6caede */
  esp -= 4; W32(esp, 0x75b2a0u); SPILL(); f_6caede(); if (g_unwind) return; RELOAD();
/* 75b2a0: mov ecx, dword ptr [ebp + 0x43c] */
  ecx = R32((uint32_t)(ebp + 0x43cu));
/* 75b2a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75b2a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75b2a8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 75b2a9: mov dword ptr [ebx + 0x43c], ecx */
  W32((uint32_t)(ebx + 0x43cu), ecx);
/* 75b2af: mov eax, ebx */
  eax = ebx;
/* 75b2b1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75b2b2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75b380(void) {
  LOAD_REGS();
L_75b380: /* 75b380: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75b381: mov esi, ecx */
  esi = ecx;
/* 75b383: call 0x6c99b2 */
  esp -= 4; W32(esp, 0x75b388u); SPILL(); f_6c99b2(); if (g_unwind) return; RELOAD();
/* 75b388: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75b38d: je 0x75b39e */
  if (zf) goto L_75b39e;
L_75b38f: /* 75b38f: push 0x440 */
  { uint32_t v = 0x440u; esp -= 4; W32(esp, v); }
/* 75b394: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75b395: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x75b39bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 75b39b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75b39e: /* 75b39e: mov eax, esi */
  eax = esi;
/* 75b3a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75b3a1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75b3c0(void) {
  LOAD_REGS();
L_75b3c0: /* 75b3c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75b3c1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 75b3c5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75b3c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75b3c9: mov esi, ecx */
  esi = ecx;
/* 75b3cb: je 0x75b400 */
  if (zf) goto L_75b400;
L_75b3cd: /* 75b3cd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 75b3d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75b3d1: push 0x6c99b2 */
  { uint32_t v = 0x6c99b2u; esp -= 4; W32(esp, v); }
/* 75b3d6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 75b3d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75b3da: push 0x440 */
  { uint32_t v = 0x440u; esp -= 4; W32(esp, v); }
/* 75b3df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75b3e0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x75b3e5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 75b3e5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75b3e8: je 0x75b3f8 */
  if (zf) goto L_75b3f8;
L_75b3ea: /* 75b3ea: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 75b3f0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 75b3f2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 75b3f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75b3f5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x75b3f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_75b3f8: /* 75b3f8: mov eax, edi */
  eax = edi;
/* 75b3fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75b3fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75b3fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75b3fd: ret 4 */
  esp += 8; SPILL(); return;
L_75b400: /* 75b400: mov ecx, esi */
  ecx = esi;
/* 75b402: call 0x6c99b2 */
  esp -= 4; W32(esp, 0x75b407u); SPILL(); f_6c99b2(); if (g_unwind) return; RELOAD();
/* 75b407: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75b40a: je 0x75b41b */
  if (zf) goto L_75b41b;
L_75b40c: /* 75b40c: push 0x440 */
  { uint32_t v = 0x440u; esp -= 4; W32(esp, v); }
/* 75b411: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75b412: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x75b418u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 75b418: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75b41b: /* 75b41b: mov eax, esi */
  eax = esi;
/* 75b41d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75b41e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75b41f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75b450(void) {
  LOAD_REGS();
L_75b450: /* 75b450: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75b452: push 0x9c96f9 */
  { uint32_t v = 0x9c96f9u; esp -= 4; W32(esp, v); }
/* 75b457: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75b45d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75b45e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75b465: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75b466: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75b467: mov esi, ecx */
  esi = ecx;
/* 75b469: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75b46d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75b470: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75b471: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 75b473: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 75b47b: call 0x6c9fe3 */
  esp -= 4; W32(esp, 0x75b480u); SPILL(); f_6c9fe3(); if (g_unwind) return; RELOAD();
/* 75b480: mov ecx, esi */
  ecx = esi;
/* 75b482: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 75b48a: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x75b490u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 75b490: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75b494: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75b495: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75b49c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75b49f: ret  */
  esp += 4; SPILL(); return;
}

void f_75b4c0(void) {
  LOAD_REGS();
L_75b4c0: /* 75b4c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75b4c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75b4c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75b4c3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 75b4c7: mov esi, ecx */
  esi = ecx;
/* 75b4c9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 75b4cb: je 0x75b50d */
  if (zf) goto L_75b50d;
L_75b4cd: /* 75b4cd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 75b4d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75b4d1: call 0x6c4d2c */
  esp -= 4; W32(esp, 0x75b4d6u); SPILL(); f_6c4d2c(); if (g_unwind) return; RELOAD();
/* 75b4d6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 75b4d9: xor ebx, ebx */
  ebx = 0;
/* 75b4db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 75b4dd: jle 0x75b50d */
  if ((zf || sf != of)) goto L_75b50d;
L_75b4df: /* 75b4df: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75b4e0: xor ebp, ebp */
  ebp = 0;
L_75b4e2: /* 75b4e2: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 75b4e4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 75b4e6: mov ecx, esi */
  ecx = esi;
/* 75b4e8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x75b4eeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 75b4ee: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 75b4f1: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 75b4f3: je 0x75b501 */
  if (zf) goto L_75b501;
L_75b4f5: /* 75b4f5: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 75b4f7: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 75b4f9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75b4fa: mov ecx, eax */
  ecx = eax;
/* 75b4fc: call 0x6c8693 */
  esp -= 4; W32(esp, 0x75b501u); SPILL(); f_6c8693(); if (g_unwind) return; RELOAD();
L_75b501: /* 75b501: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 75b504: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 75b505: add ebp, 0x1c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 75b508: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75b50a: jl 0x75b4e2 */
  if ((sf != of)) goto L_75b4e2;
L_75b50c: /* 75b50c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_75b50d: /* 75b50d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75b50e: mov eax, esi */
  eax = esi;
/* 75b510: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75b511: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75b512: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75b540(void) {
  LOAD_REGS();
L_75b540: /* 75b540: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75b542: push 0x9c9719 */
  { uint32_t v = 0x9c9719u; esp -= 4; W32(esp, v); }
/* 75b547: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75b54d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75b54e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75b555: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75b556: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75b557: mov esi, ecx */
  esi = ecx;
/* 75b559: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75b55d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75b560: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75b561: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 75b563: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 75b56b: call 0x6c982c */
  esp -= 4; W32(esp, 0x75b570u); SPILL(); f_6c982c(); if (g_unwind) return; RELOAD();
/* 75b570: mov ecx, esi */
  ecx = esi;
/* 75b572: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 75b57a: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x75b580u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 75b580: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75b584: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75b585: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75b58c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75b58f: ret  */
  esp += 4; SPILL(); return;
}

void f_75b5b0(void) {
  LOAD_REGS();
L_75b5b0: /* 75b5b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75b5b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75b5b2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75b5b3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 75b5b7: mov esi, ecx */
  esi = ecx;
/* 75b5b9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 75b5bb: je 0x75b600 */
  if (zf) goto L_75b600;
L_75b5bd: /* 75b5bd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 75b5c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75b5c1: call 0x6c8ef4 */
  esp -= 4; W32(esp, 0x75b5c6u); SPILL(); f_6c8ef4(); if (g_unwind) return; RELOAD();
/* 75b5c6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 75b5c9: xor ebx, ebx */
  ebx = 0;
/* 75b5cb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 75b5cd: jle 0x75b600 */
  if ((zf || sf != of)) goto L_75b600;
L_75b5cf: /* 75b5cf: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75b5d0: xor ebp, ebp */
  ebp = 0;
L_75b5d2: /* 75b5d2: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 75b5d4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 75b5d6: mov ecx, esi */
  ecx = esi;
/* 75b5d8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x75b5deu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 75b5de: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 75b5e0: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 75b5e3: lea ecx, [edx + ecx*8] */
  ecx = (uint32_t)(edx + ecx*8);
/* 75b5e6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75b5e8: je 0x75b5f4 */
  if (zf) goto L_75b5f4;
L_75b5ea: /* 75b5ea: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 75b5ec: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 75b5ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75b5ef: call 0x6ca79f */
  esp -= 4; W32(esp, 0x75b5f4u); SPILL(); f_6ca79f(); if (g_unwind) return; RELOAD();
L_75b5f4: /* 75b5f4: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 75b5f7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 75b5f8: add ebp, 0x28 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 75b5fb: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75b5fd: jl 0x75b5d2 */
  if ((sf != of)) goto L_75b5d2;
L_75b5ff: /* 75b5ff: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_75b600: /* 75b600: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75b601: mov eax, esi */
  eax = esi;
/* 75b603: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75b604: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75b605: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75b630(void) {
  LOAD_REGS();
L_75b630: /* 75b630: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75b632: push 0x9c9739 */
  { uint32_t v = 0x9c9739u; esp -= 4; W32(esp, v); }
/* 75b637: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75b63d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75b63e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75b645: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75b646: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75b647: mov esi, ecx */
  esi = ecx;
/* 75b649: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75b64d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75b650: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75b651: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 75b653: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 75b65b: call 0x6c5560 */
  esp -= 4; W32(esp, 0x75b660u); SPILL(); f_6c5560(); if (g_unwind) return; RELOAD();
/* 75b660: mov ecx, esi */
  ecx = esi;
/* 75b662: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 75b66a: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x75b670u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 75b670: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75b674: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75b675: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75b67c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75b67f: ret  */
  esp += 4; SPILL(); return;
}

void f_75b6a0(void) {
  LOAD_REGS();
L_75b6a0: /* 75b6a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75b6a1: mov ebp, esp */
  ebp = esp;
/* 75b6a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75b6a5: push 0x9c9750 */
  { uint32_t v = 0x9c9750u; esp -= 4; W32(esp, v); }
/* 75b6aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75b6b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75b6b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75b6b8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 75b6bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75b6bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75b6bd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 75b6c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75b6c1: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 75b6c4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 75b6c7: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 75b6c9: xor ebx, ebx */
  ebx = 0;
/* 75b6cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75b6cc: mov ecx, edi */
  ecx = edi;
/* 75b6ce: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 75b6d1: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x75b6d7u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 75b6d7: mov ecx, esi */
  ecx = esi;
/* 75b6d9: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x75b6dfu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 75b6df: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 75b6e1: je 0x75b73a */
  if (zf) goto L_75b73a;
L_75b6e3: /* 75b6e3: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 75b6e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75b6e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75b6e8: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x75b6eeu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 75b6ee: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 75b6f1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75b6f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75b6f5: mov ecx, edi */
  ecx = edi;
/* 75b6f7: call 0x6c2536 */
  esp -= 4; W32(esp, 0x75b6fcu); SPILL(); f_6c2536(); if (g_unwind) return; RELOAD();
/* 75b6fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_75b700: /* 75b700: cmp ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75b703: jge 0x75b770 */
  if ((sf == of)) goto L_75b770;
L_75b705: /* 75b705: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 75b707: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 75b709: mov ecx, edi */
  ecx = edi;
/* 75b70b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x75b711u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 75b711: imul eax, eax, 0x34 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x34u);
  eax = (uint32_t)r;
  }
/* 75b714: add eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 75b716: mov esi, eax */
  esi = eax;
/* 75b718: je 0x75b725 */
  if (zf) goto L_75b725;
L_75b71a: /* 75b71a: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 75b71d: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x75b723u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 75b723: jmp 0x75b727 */
  goto L_75b727;
L_75b725: /* 75b725: xor esi, esi */
  esi = 0;
L_75b727: /* 75b727: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 75b72a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75b72b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 75b72c: call 0x6c7c2a */
  esp -= 4; W32(esp, 0x75b731u); SPILL(); f_6c7c2a(); if (g_unwind) return; RELOAD();
/* 75b731: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 75b734: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75b737: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 75b738: jmp 0x75b700 */
  goto L_75b700;
L_75b73a: /* 75b73a: lea ebx, [edi + 4] */
  ebx = (uint32_t)(edi + 0x4u);
/* 75b73d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75b73e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75b73f: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x75b745u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 75b745: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75b748: xor esi, esi */
  esi = 0;
/* 75b74a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_75b750: /* 75b750: cmp esi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75b752: jge 0x75b76d */
  if ((sf == of)) goto L_75b76d;
L_75b754: /* 75b754: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 75b756: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 75b759: mov eax, esi */
  eax = esi;
/* 75b75b: imul eax, eax, 0x34 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x34u);
  eax = (uint32_t)r;
  }
/* 75b75e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 75b760: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75b761: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75b762: call 0x6c7c2a */
  esp -= 4; W32(esp, 0x75b767u); SPILL(); f_6c7c2a(); if (g_unwind) return; RELOAD();
/* 75b767: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75b76a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 75b76b: jmp 0x75b750 */
  goto L_75b750;
L_75b76d: /* 75b76d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_75b770: /* 75b770: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 75b773: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75b774: mov eax, esi */
  eax = esi;
/* 75b776: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75b777: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75b77e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75b77f: mov esp, ebp */
  esp = ebp;
/* 75b781: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 75b782: ret  */
  esp += 4; SPILL(); return;
}

void f_75b783(void) {
  LOAD_REGS();
L_75b783: /* 75b783: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 75b786: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 75b78b: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 75b78e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75b78f: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 75b792: call 0x99caf8 */
  esp -= 4; W32(esp, 0x75b797u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_75b797(); return;
}

void f_75b797(void) {
  LOAD_REGS();
L_75b797: /* 75b797: push 0xa05a80 */
  { uint32_t v = 0xa05a80u; esp -= 4; W32(esp, v); }
/* 75b79c: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 75b7a1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x75b7a7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 75b7a7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75b7aa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 75b7ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 75b7ae: call 0x99caf8 */
  esp -= 4; W32(esp, 0x75b7b3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_75b7b3: guest_badaddr(0x75b7b3); return;
}

void f_75b810(void) {
  LOAD_REGS();
L_75b810: /* 75b810: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75b811: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75b812: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75b813: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 75b817: mov esi, ecx */
  esi = ecx;
/* 75b819: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 75b81b: je 0x75b85d */
  if (zf) goto L_75b85d;
L_75b81d: /* 75b81d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 75b820: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75b821: call 0x6c2536 */
  esp -= 4; W32(esp, 0x75b826u); SPILL(); f_6c2536(); if (g_unwind) return; RELOAD();
/* 75b826: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 75b829: xor ebx, ebx */
  ebx = 0;
/* 75b82b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 75b82d: jle 0x75b85d */
  if ((zf || sf != of)) goto L_75b85d;
L_75b82f: /* 75b82f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75b830: xor ebp, ebp */
  ebp = 0;
L_75b832: /* 75b832: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 75b834: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 75b836: mov ecx, esi */
  ecx = esi;
/* 75b838: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x75b83eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 75b83e: imul eax, eax, 0x34 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x34u);
  eax = (uint32_t)r;
  }
/* 75b841: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 75b843: je 0x75b851 */
  if (zf) goto L_75b851;
L_75b845: /* 75b845: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 75b847: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 75b849: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75b84a: mov ecx, eax */
  ecx = eax;
/* 75b84c: call 0x6ccad6 */
  esp -= 4; W32(esp, 0x75b851u); SPILL(); f_6ccad6(); if (g_unwind) return; RELOAD();
L_75b851: /* 75b851: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 75b854: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 75b855: add ebp, 0x34 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 75b858: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75b85a: jl 0x75b832 */
  if ((sf != of)) goto L_75b832;
L_75b85c: /* 75b85c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_75b85d: /* 75b85d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75b85e: mov eax, esi */
  eax = esi;
/* 75b860: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75b861: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75b862: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75b890(void) {
  LOAD_REGS();
L_75b890: /* 75b890: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75b892: push 0x9c9769 */
  { uint32_t v = 0x9c9769u; esp -= 4; W32(esp, v); }
/* 75b897: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75b89d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75b89e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75b8a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75b8a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75b8a7: mov esi, ecx */
  esi = ecx;
/* 75b8a9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75b8ad: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75b8b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75b8b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 75b8b3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 75b8bb: call 0x6c8d64 */
  esp -= 4; W32(esp, 0x75b8c0u); SPILL(); f_6c8d64(); if (g_unwind) return; RELOAD();
/* 75b8c0: mov ecx, esi */
  ecx = esi;
/* 75b8c2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 75b8ca: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x75b8d0u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 75b8d0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75b8d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75b8d5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75b8dc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75b8df: ret  */
  esp += 4; SPILL(); return;
}

void f_75b900(void) {
  LOAD_REGS();
L_75b900: /* 75b900: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75b902: push 0x9c9789 */
  { uint32_t v = 0x9c9789u; esp -= 4; W32(esp, v); }
/* 75b907: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75b90d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75b90e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75b915: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75b916: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75b917: mov esi, ecx */
  esi = ecx;
/* 75b919: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75b91d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75b920: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75b921: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 75b923: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 75b92b: call 0x6c34bd */
  esp -= 4; W32(esp, 0x75b930u); SPILL(); f_6c34bd(); if (g_unwind) return; RELOAD();
/* 75b930: mov ecx, esi */
  ecx = esi;
/* 75b932: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 75b93a: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x75b940u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 75b940: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75b944: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75b945: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75b94c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75b94f: ret  */
  esp += 4; SPILL(); return;
}

void f_75b970(void) {
  LOAD_REGS();
L_75b970: /* 75b970: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75b971: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75b972: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75b973: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 75b977: mov esi, ecx */
  esi = ecx;
/* 75b979: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 75b97b: je 0x75b9bd */
  if (zf) goto L_75b9bd;
L_75b97d: /* 75b97d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 75b980: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75b981: call 0x6cc1f8 */
  esp -= 4; W32(esp, 0x75b986u); SPILL(); f_6cc1f8(); if (g_unwind) return; RELOAD();
/* 75b986: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 75b989: xor ebx, ebx */
  ebx = 0;
/* 75b98b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 75b98d: jle 0x75b9bd */
  if ((zf || sf != of)) goto L_75b9bd;
L_75b98f: /* 75b98f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75b990: xor ebp, ebp */
  ebp = 0;
L_75b992: /* 75b992: push 0x6c */
  { uint32_t v = 0x6cu; esp -= 4; W32(esp, v); }
/* 75b994: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 75b996: mov ecx, esi */
  ecx = esi;
/* 75b998: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x75b99eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 75b99e: imul eax, eax, 0x6c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x6cu);
  eax = (uint32_t)r;
  }
/* 75b9a1: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 75b9a3: je 0x75b9b1 */
  if (zf) goto L_75b9b1;
L_75b9a5: /* 75b9a5: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 75b9a7: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 75b9a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75b9aa: mov ecx, eax */
  ecx = eax;
/* 75b9ac: call 0x6c9859 */
  esp -= 4; W32(esp, 0x75b9b1u); SPILL(); f_6c9859(); if (g_unwind) return; RELOAD();
L_75b9b1: /* 75b9b1: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 75b9b4: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 75b9b5: add ebp, 0x6c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 75b9b8: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75b9ba: jl 0x75b992 */
  if ((sf != of)) goto L_75b992;
L_75b9bc: /* 75b9bc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_75b9bd: /* 75b9bd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75b9be: mov eax, esi */
  eax = esi;
/* 75b9c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75b9c1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75b9c2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75b9f0(void) {
  LOAD_REGS();
L_75b9f0: /* 75b9f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75b9f2: push 0x9c97a9 */
  { uint32_t v = 0x9c97a9u; esp -= 4; W32(esp, v); }
/* 75b9f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75b9fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75b9fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75ba05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75ba06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75ba07: mov esi, ecx */
  esi = ecx;
/* 75ba09: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75ba0d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75ba10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75ba11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 75ba13: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 75ba1b: call 0x6c2b6c */
  esp -= 4; W32(esp, 0x75ba20u); SPILL(); f_6c2b6c(); if (g_unwind) return; RELOAD();
/* 75ba20: mov ecx, esi */
  ecx = esi;
/* 75ba22: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 75ba2a: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x75ba30u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 75ba30: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75ba34: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75ba35: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75ba3c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75ba3f: ret  */
  esp += 4; SPILL(); return;
}

void f_75ba60(void) {
  LOAD_REGS();
L_75ba60: /* 75ba60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75ba61: mov esi, ecx */
  esi = ecx;
/* 75ba63: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75ba66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75ba67: xor edi, edi */
  edi = 0;
/* 75ba69: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 75ba6b: jle 0x75ba85 */
  if ((zf || sf != of)) goto L_75ba85;
L_75ba6d: /* 75ba6d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75ba6e: xor ebx, ebx */
  ebx = 0;
L_75ba70: /* 75ba70: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 75ba72: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 75ba74: call 0x6c4273 */
  esp -= 4; W32(esp, 0x75ba79u); SPILL(); f_6c4273(); if (g_unwind) return; RELOAD();
/* 75ba79: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75ba7c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 75ba7d: add ebx, 0x58 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 75ba80: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75ba82: jl 0x75ba70 */
  if ((sf != of)) goto L_75ba70;
L_75ba84: /* 75ba84: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_75ba85: /* 75ba85: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 75ba89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75ba8a: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 75ba8c: mov ecx, esi */
  ecx = esi;
/* 75ba8e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x75ba94u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 75ba94: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75ba95: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75ba96: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75bab0(void) {
  LOAD_REGS();
L_75bab0: /* 75bab0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75bab1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75bab2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75bab3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 75bab7: mov esi, ecx */
  esi = ecx;
/* 75bab9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 75babb: je 0x75bafd */
  if (zf) goto L_75bafd;
L_75babd: /* 75babd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 75bac0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75bac1: call 0x6c1e01 */
  esp -= 4; W32(esp, 0x75bac6u); SPILL(); f_6c1e01(); if (g_unwind) return; RELOAD();
/* 75bac6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 75bac9: xor ebx, ebx */
  ebx = 0;
/* 75bacb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 75bacd: jle 0x75bafd */
  if ((zf || sf != of)) goto L_75bafd;
L_75bacf: /* 75bacf: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75bad0: xor ebp, ebp */
  ebp = 0;
L_75bad2: /* 75bad2: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 75bad4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 75bad6: mov ecx, esi */
  ecx = esi;
/* 75bad8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x75badeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 75bade: imul eax, eax, 0x58 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x58u);
  eax = (uint32_t)r;
  }
/* 75bae1: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 75bae3: je 0x75baf1 */
  if (zf) goto L_75baf1;
L_75bae5: /* 75bae5: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 75bae7: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 75bae9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75baea: mov ecx, eax */
  ecx = eax;
/* 75baec: call 0x6c9da4 */
  esp -= 4; W32(esp, 0x75baf1u); SPILL(); f_6c9da4(); if (g_unwind) return; RELOAD();
L_75baf1: /* 75baf1: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 75baf4: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 75baf5: add ebp, 0x58 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 75baf8: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75bafa: jl 0x75bad2 */
  if ((sf != of)) goto L_75bad2;
L_75bafc: /* 75bafc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_75bafd: /* 75bafd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75bafe: mov eax, esi */
  eax = esi;
/* 75bb00: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75bb01: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75bb02: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75bb30(void) {
  LOAD_REGS();
L_75bb30: /* 75bb30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75bb31: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75bb32: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 75bb36: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75bb37: mov esi, ecx */
  esi = ecx;
/* 75bb39: call 0x6c824c */
  esp -= 4; W32(esp, 0x75bb3eu); SPILL(); f_6c824c(); if (g_unwind) return; RELOAD();
/* 75bb3e: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 75bb41: mov ecx, esi */
  ecx = esi;
/* 75bb43: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 75bb46: call 0x6cb398 */
  esp -= 4; W32(esp, 0x75bb4bu); SPILL(); f_6cb398(); if (g_unwind) return; RELOAD();
/* 75bb4b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75bb4c: mov eax, esi */
  eax = esi;
/* 75bb4e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75bb4f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75bb70(void) {
  LOAD_REGS();
L_75bb70: /* 75bb70: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75bb72: push 0x9c97c8 */
  { uint32_t v = 0x9c97c8u; esp -= 4; W32(esp, v); }
/* 75bb77: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75bb7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75bb7e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75bb85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75bb86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75bb87: mov esi, ecx */
  esi = ecx;
/* 75bb89: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75bb8d: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x75bb93u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 75bb93: xor eax, eax */
  eax = 0;
/* 75bb95: mov ecx, esi */
  ecx = esi;
/* 75bb97: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 75bb9b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 75bb9e: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 75bba5: call 0x6cb398 */
  esp -= 4; W32(esp, 0x75bbaau); SPILL(); f_6cb398(); if (g_unwind) return; RELOAD();
/* 75bbaa: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75bbae: mov eax, esi */
  eax = esi;
/* 75bbb0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75bbb1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75bbb8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75bbbb: ret  */
  esp += 4; SPILL(); return;
}

void f_75bbe0(void) {
  LOAD_REGS();
L_75bbe0: /* 75bbe0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75bbe2: push 0x9c97e8 */
  { uint32_t v = 0x9c97e8u; esp -= 4; W32(esp, v); }
/* 75bbe7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75bbed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75bbee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75bbf5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75bbf6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75bbf7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75bbf8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 75bbfc: mov esi, ecx */
  esi = ecx;
/* 75bbfe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75bbff: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 75bc03: call 0x6c5ec0 */
  esp -= 4; W32(esp, 0x75bc08u); SPILL(); f_6c5ec0(); if (g_unwind) return; RELOAD();
/* 75bc08: xor eax, eax */
  eax = 0;
/* 75bc0a: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 75bc0e: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 75bc11: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 75bc14: mov ecx, esi */
  ecx = esi;
/* 75bc16: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 75bc19: call 0x6cb398 */
  esp -= 4; W32(esp, 0x75bc1eu); SPILL(); f_6cb398(); if (g_unwind) return; RELOAD();
/* 75bc1e: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 75bc22: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75bc23: mov eax, esi */
  eax = esi;
/* 75bc25: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75bc26: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75bc2d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75bc30: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75bc60(void) {
  LOAD_REGS();
L_75bc60: /* 75bc60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75bc62: push 0x9c9808 */
  { uint32_t v = 0x9c9808u; esp -= 4; W32(esp, v); }
/* 75bc67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75bc6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75bc6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75bc75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75bc76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75bc77: mov esi, ecx */
  esi = ecx;
/* 75bc79: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75bc7d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 75bc80: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75bc82: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 75bc8a: je 0x75bc9a */
  if (zf) goto L_75bc9a;
L_75bc8c: /* 75bc8c: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 75bc92: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 75bc94: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 75bc96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75bc97: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x75bc9au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_75bc9a: /* 75bc9a: mov ecx, esi */
  ecx = esi;
/* 75bc9c: mov dword ptr [esi + 0xc], 0 */
  W32((uint32_t)(esi + 0xcu), 0x0u);
/* 75bca3: mov dword ptr [esi + 0x10], 0 */
  W32((uint32_t)(esi + 0x10u), 0x0u);
/* 75bcaa: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 75bcb2: call 0x6c2f13 */
  esp -= 4; W32(esp, 0x75bcb7u); SPILL(); f_6c2f13(); if (g_unwind) return; RELOAD();
/* 75bcb7: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75bcbb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75bcbc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75bcc3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75bcc6: ret  */
  esp += 4; SPILL(); return;
}

void f_75bcf0(void) {
  LOAD_REGS();
L_75bcf0: /* 75bcf0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75bcf2: push 0x9c9829 */
  { uint32_t v = 0x9c9829u; esp -= 4; W32(esp, v); }
/* 75bcf7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75bcfd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75bcfe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75bd05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75bd06: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75bd07: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75bd08: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75bd09: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 75bd0d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 75bd10: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 75bd12: mov esi, ecx */
  esi = ecx;
/* 75bd14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75bd15: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 75bd19: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x75bd1fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 75bd1f: xor ebx, ebx */
  ebx = 0;
/* 75bd21: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 75bd24: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75bd27: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 75bd2b: jle 0x75bd5b */
  if ((zf || sf != of)) goto L_75bd5b;
L_75bd2d: /* 75bd2d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75bd2e: xor ebp, ebp */
  ebp = 0;
L_75bd30: /* 75bd30: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 75bd32: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 75bd34: mov ecx, esi */
  ecx = esi;
/* 75bd36: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x75bd3cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 75bd3c: imul eax, eax, 0x5c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x5cu);
  eax = (uint32_t)r;
  }
/* 75bd3f: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 75bd41: je 0x75bd4f */
  if (zf) goto L_75bd4f;
L_75bd43: /* 75bd43: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 75bd45: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 75bd47: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75bd48: mov ecx, eax */
  ecx = eax;
/* 75bd4a: call 0x6c7752 */
  esp -= 4; W32(esp, 0x75bd4fu); SPILL(); f_6c7752(); if (g_unwind) return; RELOAD();
L_75bd4f: /* 75bd4f: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 75bd52: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 75bd53: add ebp, 0x5c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 75bd56: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75bd58: jl 0x75bd30 */
  if ((sf != of)) goto L_75bd30;
L_75bd5a: /* 75bd5a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_75bd5b: /* 75bd5b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 75bd5f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75bd60: mov eax, esi */
  eax = esi;
/* 75bd62: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75bd63: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75bd64: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75bd6b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75bd6e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75bdb0(void) {
  LOAD_REGS();
L_75bdb0: /* 75bdb0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75bdb2: push 0x9c9849 */
  { uint32_t v = 0x9c9849u; esp -= 4; W32(esp, v); }
/* 75bdb7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75bdbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75bdbe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75bdc5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75bdc6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75bdc7: mov esi, ecx */
  esi = ecx;
/* 75bdc9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75bdcd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75bdd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75bdd1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 75bdd3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 75bddb: call 0x6c87ce */
  esp -= 4; W32(esp, 0x75bde0u); SPILL(); f_6c87ce(); if (g_unwind) return; RELOAD();
/* 75bde0: mov ecx, esi */
  ecx = esi;
/* 75bde2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 75bdea: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x75bdf0u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 75bdf0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75bdf4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75bdf5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75bdfc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75bdff: ret  */
  esp += 4; SPILL(); return;
}

void f_75be20(void) {
  LOAD_REGS();
L_75be20: /* 75be20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75be21: mov esi, ecx */
  esi = ecx;
/* 75be23: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75be26: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75be27: xor edi, edi */
  edi = 0;
/* 75be29: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 75be2b: jle 0x75be45 */
  if ((zf || sf != of)) goto L_75be45;
L_75be2d: /* 75be2d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75be2e: xor ebx, ebx */
  ebx = 0;
L_75be30: /* 75be30: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 75be32: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 75be34: call 0x6ccf86 */
  esp -= 4; W32(esp, 0x75be39u); SPILL(); f_6ccf86(); if (g_unwind) return; RELOAD();
/* 75be39: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75be3c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 75be3d: add ebx, 0x28 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 75be40: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75be42: jl 0x75be30 */
  if ((sf != of)) goto L_75be30;
L_75be44: /* 75be44: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_75be45: /* 75be45: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 75be49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75be4a: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 75be4c: mov ecx, esi */
  ecx = esi;
/* 75be4e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x75be54u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 75be54: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75be55: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75be56: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75be70(void) {
  LOAD_REGS();
L_75be70: /* 75be70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75be71: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75be72: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75be73: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 75be77: mov esi, ecx */
  esi = ecx;
/* 75be79: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 75be7b: je 0x75bec0 */
  if (zf) goto L_75bec0;
L_75be7d: /* 75be7d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 75be80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75be81: call 0x6cb5d2 */
  esp -= 4; W32(esp, 0x75be86u); SPILL(); f_6cb5d2(); if (g_unwind) return; RELOAD();
/* 75be86: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 75be89: xor ebx, ebx */
  ebx = 0;
/* 75be8b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 75be8d: jle 0x75bec0 */
  if ((zf || sf != of)) goto L_75bec0;
L_75be8f: /* 75be8f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75be90: xor ebp, ebp */
  ebp = 0;
L_75be92: /* 75be92: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 75be94: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 75be96: mov ecx, esi */
  ecx = esi;
/* 75be98: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x75be9eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 75be9e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 75bea0: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 75bea3: lea ecx, [edx + ecx*8] */
  ecx = (uint32_t)(edx + ecx*8);
/* 75bea6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75bea8: je 0x75beb4 */
  if (zf) goto L_75beb4;
L_75beaa: /* 75beaa: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 75beac: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 75beae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75beaf: call 0x6c4746 */
  esp -= 4; W32(esp, 0x75beb4u); SPILL(); f_6c4746(); if (g_unwind) return; RELOAD();
L_75beb4: /* 75beb4: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 75beb7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 75beb8: add ebp, 0x28 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 75bebb: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75bebd: jl 0x75be92 */
  if ((sf != of)) goto L_75be92;
L_75bebf: /* 75bebf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_75bec0: /* 75bec0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75bec1: mov eax, esi */
  eax = esi;
/* 75bec3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75bec4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75bec5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75bef0(void) {
  LOAD_REGS();
L_75bef0: /* 75bef0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75bef2: push 0x9c9869 */
  { uint32_t v = 0x9c9869u; esp -= 4; W32(esp, v); }
/* 75bef7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75befd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75befe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75bf05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75bf06: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75bf07: mov esi, ecx */
  esi = ecx;
/* 75bf09: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75bf0d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75bf10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75bf11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 75bf13: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 75bf1b: call 0x6c8f6c */
  esp -= 4; W32(esp, 0x75bf20u); SPILL(); f_6c8f6c(); if (g_unwind) return; RELOAD();
/* 75bf20: mov ecx, esi */
  ecx = esi;
/* 75bf22: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 75bf2a: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x75bf30u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 75bf30: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75bf34: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75bf35: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75bf3c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75bf3f: ret  */
  esp += 4; SPILL(); return;
}

void f_75bf60(void) {
  LOAD_REGS();
L_75bf60: /* 75bf60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75bf61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75bf62: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75bf63: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 75bf67: mov esi, ecx */
  esi = ecx;
/* 75bf69: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 75bf6b: je 0x75bfb0 */
  if (zf) goto L_75bfb0;
L_75bf6d: /* 75bf6d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 75bf70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75bf71: call 0x6c1a0f */
  esp -= 4; W32(esp, 0x75bf76u); SPILL(); f_6c1a0f(); if (g_unwind) return; RELOAD();
/* 75bf76: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 75bf79: xor ebx, ebx */
  ebx = 0;
/* 75bf7b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 75bf7d: jle 0x75bfb0 */
  if ((zf || sf != of)) goto L_75bfb0;
L_75bf7f: /* 75bf7f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75bf80: xor ebp, ebp */
  ebp = 0;
L_75bf82: /* 75bf82: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 75bf84: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 75bf86: mov ecx, esi */
  ecx = esi;
/* 75bf88: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x75bf8eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 75bf8e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 75bf90: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 75bf93: lea ecx, [edx + ecx*8] */
  ecx = (uint32_t)(edx + ecx*8);
/* 75bf96: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75bf98: je 0x75bfa4 */
  if (zf) goto L_75bfa4;
L_75bf9a: /* 75bf9a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 75bf9c: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 75bf9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75bf9f: call 0x6c7860 */
  esp -= 4; W32(esp, 0x75bfa4u); SPILL(); f_6c7860(); if (g_unwind) return; RELOAD();
L_75bfa4: /* 75bfa4: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 75bfa7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 75bfa8: add ebp, 0x18 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 75bfab: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75bfad: jl 0x75bf82 */
  if ((sf != of)) goto L_75bf82;
L_75bfaf: /* 75bfaf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_75bfb0: /* 75bfb0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75bfb1: mov eax, esi */
  eax = esi;
/* 75bfb3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75bfb4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75bfb5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75bfe0(void) {
  LOAD_REGS();
L_75bfe0: /* 75bfe0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75bfe2: push 0x9c9889 */
  { uint32_t v = 0x9c9889u; esp -= 4; W32(esp, v); }
/* 75bfe7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75bfed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75bfee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75bff5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75bff6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75bff7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75bff8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75bff9: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 75bffd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 75c000: push 0x11c */
  { uint32_t v = 0x11cu; esp -= 4; W32(esp, v); }
/* 75c005: mov esi, ecx */
  esi = ecx;
/* 75c007: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75c008: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 75c00c: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x75c012u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 75c012: xor ebx, ebx */
  ebx = 0;
/* 75c014: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 75c017: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75c01a: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 75c01e: jle 0x75c057 */
  if ((zf || sf != of)) goto L_75c057;
L_75c020: /* 75c020: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75c021: xor ebp, ebp */
  ebp = 0;
L_75c023: /* 75c023: push 0x11c */
  { uint32_t v = 0x11cu; esp -= 4; W32(esp, v); }
/* 75c028: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 75c02a: mov ecx, esi */
  ecx = esi;
/* 75c02c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x75c032u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 75c032: imul eax, eax, 0x11c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x11cu);
  eax = (uint32_t)r;
  }
/* 75c038: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 75c03a: je 0x75c048 */
  if (zf) goto L_75c048;
L_75c03c: /* 75c03c: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 75c03e: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 75c040: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75c041: mov ecx, eax */
  ecx = eax;
/* 75c043: call 0x6c40ed */
  esp -= 4; W32(esp, 0x75c048u); SPILL(); f_6c40ed(); if (g_unwind) return; RELOAD();
L_75c048: /* 75c048: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 75c04b: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 75c04c: add ebp, 0x11c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x11cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 75c052: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75c054: jl 0x75c023 */
  if ((sf != of)) goto L_75c023;
L_75c056: /* 75c056: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_75c057: /* 75c057: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 75c05b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75c05c: mov eax, esi */
  eax = esi;
/* 75c05e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75c05f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75c060: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75c067: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75c06a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75c0a0(void) {
  LOAD_REGS();
L_75c0a0: /* 75c0a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75c0a2: push 0x9c98a9 */
  { uint32_t v = 0x9c98a9u; esp -= 4; W32(esp, v); }
/* 75c0a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75c0ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75c0ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75c0b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75c0b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75c0b7: mov esi, ecx */
  esi = ecx;
/* 75c0b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75c0bd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75c0c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75c0c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 75c0c3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 75c0cb: call 0x6c16b8 */
  esp -= 4; W32(esp, 0x75c0d0u); SPILL(); f_6c16b8(); if (g_unwind) return; RELOAD();
/* 75c0d0: mov ecx, esi */
  ecx = esi;
/* 75c0d2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 75c0da: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x75c0e0u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 75c0e0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75c0e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75c0e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75c0ec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75c0ef: ret  */
  esp += 4; SPILL(); return;
}

void f_75c110(void) {
  LOAD_REGS();
L_75c110: /* 75c110: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75c111: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75c112: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75c113: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 75c117: mov esi, ecx */
  esi = ecx;
/* 75c119: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 75c11b: je 0x75c15f */
  if (zf) goto L_75c15f;
L_75c11d: /* 75c11d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 75c120: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75c121: call 0x6c93e5 */
  esp -= 4; W32(esp, 0x75c126u); SPILL(); f_6c93e5(); if (g_unwind) return; RELOAD();
/* 75c126: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 75c129: xor ebx, ebx */
  ebx = 0;
/* 75c12b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 75c12d: jle 0x75c15f */
  if ((zf || sf != of)) goto L_75c15f;
L_75c12f: /* 75c12f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75c130: xor ebp, ebp */
  ebp = 0;
L_75c132: /* 75c132: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 75c134: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 75c136: mov ecx, esi */
  ecx = esi;
/* 75c138: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x75c13eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 75c13e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 75c140: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 75c143: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 75c145: je 0x75c153 */
  if (zf) goto L_75c153;
L_75c147: /* 75c147: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 75c149: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 75c14b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75c14c: mov ecx, eax */
  ecx = eax;
/* 75c14e: call 0x6c1e9c */
  esp -= 4; W32(esp, 0x75c153u); SPILL(); f_6c1e9c(); if (g_unwind) return; RELOAD();
L_75c153: /* 75c153: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 75c156: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 75c157: add ebp, 0x10 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 75c15a: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75c15c: jl 0x75c132 */
  if ((sf != of)) goto L_75c132;
L_75c15e: /* 75c15e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_75c15f: /* 75c15f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75c160: mov eax, esi */
  eax = esi;
/* 75c162: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75c163: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75c164: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75c190(void) {
  LOAD_REGS();
L_75c190: /* 75c190: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75c192: push 0x9c98c9 */
  { uint32_t v = 0x9c98c9u; esp -= 4; W32(esp, v); }
/* 75c197: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75c19d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75c19e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75c1a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75c1a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75c1a7: mov esi, ecx */
  esi = ecx;
/* 75c1a9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75c1ad: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75c1b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75c1b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 75c1b3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 75c1bb: call 0x6c79af */
  esp -= 4; W32(esp, 0x75c1c0u); SPILL(); f_6c79af(); if (g_unwind) return; RELOAD();
/* 75c1c0: mov ecx, esi */
  ecx = esi;
/* 75c1c2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 75c1ca: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x75c1d0u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 75c1d0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75c1d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75c1d5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75c1dc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75c1df: ret  */
  esp += 4; SPILL(); return;
}

void f_75c200(void) {
  LOAD_REGS();
L_75c200: /* 75c200: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75c201: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75c202: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75c203: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 75c207: mov esi, ecx */
  esi = ecx;
/* 75c209: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 75c20b: je 0x75c250 */
  if (zf) goto L_75c250;
L_75c20d: /* 75c20d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 75c210: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75c211: call 0x6c5c95 */
  esp -= 4; W32(esp, 0x75c216u); SPILL(); f_6c5c95(); if (g_unwind) return; RELOAD();
/* 75c216: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 75c219: xor ebx, ebx */
  ebx = 0;
/* 75c21b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 75c21d: jle 0x75c250 */
  if ((zf || sf != of)) goto L_75c250;
L_75c21f: /* 75c21f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75c220: xor ebp, ebp */
  ebp = 0;
L_75c222: /* 75c222: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 75c224: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 75c226: mov ecx, esi */
  ecx = esi;
/* 75c228: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x75c22eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 75c22e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 75c230: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 75c233: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 75c236: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75c238: je 0x75c244 */
  if (zf) goto L_75c244;
L_75c23a: /* 75c23a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 75c23c: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 75c23e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75c23f: call 0x6c2789 */
  esp -= 4; W32(esp, 0x75c244u); SPILL(); f_6c2789(); if (g_unwind) return; RELOAD();
L_75c244: /* 75c244: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 75c247: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 75c248: add ebp, 0x14 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 75c24b: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75c24d: jl 0x75c222 */
  if ((sf != of)) goto L_75c222;
L_75c24f: /* 75c24f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_75c250: /* 75c250: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75c251: mov eax, esi */
  eax = esi;
/* 75c253: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75c254: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75c255: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75c280(void) {
  LOAD_REGS();
L_75c280: /* 75c280: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75c282: push 0x9c98e9 */
  { uint32_t v = 0x9c98e9u; esp -= 4; W32(esp, v); }
/* 75c287: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75c28d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75c28e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75c295: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75c296: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75c297: mov esi, ecx */
  esi = ecx;
/* 75c299: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75c29d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75c2a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75c2a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 75c2a3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 75c2ab: call 0x6c4dd1 */
  esp -= 4; W32(esp, 0x75c2b0u); SPILL(); f_6c4dd1(); if (g_unwind) return; RELOAD();
/* 75c2b0: mov ecx, esi */
  ecx = esi;
/* 75c2b2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 75c2ba: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x75c2c0u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 75c2c0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75c2c4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75c2c5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75c2cc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75c2cf: ret  */
  esp += 4; SPILL(); return;
}

void f_75c2f0(void) {
  LOAD_REGS();
L_75c2f0: /* 75c2f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75c2f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75c2f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75c2f3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 75c2f7: mov esi, ecx */
  esi = ecx;
/* 75c2f9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 75c2fb: je 0x75c340 */
  if (zf) goto L_75c340;
L_75c2fd: /* 75c2fd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 75c300: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75c301: call 0x6c3a21 */
  esp -= 4; W32(esp, 0x75c306u); SPILL(); f_6c3a21(); if (g_unwind) return; RELOAD();
/* 75c306: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 75c309: xor ebx, ebx */
  ebx = 0;
/* 75c30b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 75c30d: jle 0x75c340 */
  if ((zf || sf != of)) goto L_75c340;
L_75c30f: /* 75c30f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75c310: xor ebp, ebp */
  ebp = 0;
L_75c312: /* 75c312: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 75c314: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 75c316: mov ecx, esi */
  ecx = esi;
/* 75c318: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x75c31eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 75c31e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 75c320: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 75c323: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 75c326: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75c328: je 0x75c334 */
  if (zf) goto L_75c334;
L_75c32a: /* 75c32a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 75c32c: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 75c32e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75c32f: call 0x6c9552 */
  esp -= 4; W32(esp, 0x75c334u); SPILL(); f_6c9552(); if (g_unwind) return; RELOAD();
L_75c334: /* 75c334: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 75c337: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 75c338: add ebp, 0x14 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 75c33b: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75c33d: jl 0x75c312 */
  if ((sf != of)) goto L_75c312;
L_75c33f: /* 75c33f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_75c340: /* 75c340: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75c341: mov eax, esi */
  eax = esi;
/* 75c343: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75c344: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75c345: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75c370(void) {
  LOAD_REGS();
L_75c370: /* 75c370: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75c372: push 0x9c9909 */
  { uint32_t v = 0x9c9909u; esp -= 4; W32(esp, v); }
/* 75c377: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75c37d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75c37e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75c385: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75c386: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75c387: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75c388: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75c389: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75c38a: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 75c38e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 75c391: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 75c393: mov esi, ecx */
  esi = ecx;
/* 75c395: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75c396: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 75c39a: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x75c3a0u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 75c3a0: xor ebx, ebx */
  ebx = 0;
/* 75c3a2: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 75c3a5: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 75c3a8: xor ebp, ebp */
  ebp = 0;
/* 75c3aa: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75c3ac: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
/* 75c3b0: jle 0x75c40e */
  if ((zf || sf != of)) goto L_75c40e;
L_75c3b2: /* 75c3b2: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 75c3b4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 75c3b6: mov ecx, esi */
  ecx = esi;
/* 75c3b8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x75c3beu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 75c3be: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 75c3c0: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 75c3c3: lea ecx, [edx + ecx*8] */
  ecx = (uint32_t)(edx + ecx*8);
/* 75c3c6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75c3c8: je 0x75c403 */
  if (zf) goto L_75c403;
L_75c3ca: /* 75c3ca: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 75c3cc: mov edx, dword ptr [eax + ebx] */
  edx = R32((uint32_t)(eax + ebx));
/* 75c3cf: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 75c3d1: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 75c3d3: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 75c3d6: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 75c3d9: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 75c3dc: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 75c3df: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 75c3e2: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 75c3e5: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 75c3e8: mov dword ptr [ecx + 0x10], edx */
  W32((uint32_t)(ecx + 0x10u), edx);
/* 75c3eb: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 75c3ee: mov dword ptr [ecx + 0x14], edx */
  W32((uint32_t)(ecx + 0x14u), edx);
/* 75c3f1: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* 75c3f4: add eax, 0x1c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 75c3f7: mov dword ptr [ecx + 0x18], edx */
  W32((uint32_t)(ecx + 0x18u), edx);
/* 75c3fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75c3fb: add ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 75c3fe: call 0x6c727f */
  esp -= 4; W32(esp, 0x75c403u); SPILL(); f_6c727f(); if (g_unwind) return; RELOAD();
L_75c403: /* 75c403: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 75c406: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 75c407: add ebx, 0x28 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 75c40a: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75c40c: jl 0x75c3b2 */
  if ((sf != of)) goto L_75c3b2;
L_75c40e: /* 75c40e: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 75c412: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75c413: mov eax, esi */
  eax = esi;
/* 75c415: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75c416: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 75c417: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75c418: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75c41f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75c422: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75c460(void) {
  LOAD_REGS();
L_75c460: /* 75c460: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75c461: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75c462: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 75c466: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75c467: mov esi, ecx */
  esi = ecx;
/* 75c469: call 0x6c28d3 */
  esp -= 4; W32(esp, 0x75c46eu); SPILL(); f_6c28d3(); if (g_unwind) return; RELOAD();
/* 75c46e: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 75c471: mov ecx, esi */
  ecx = esi;
/* 75c473: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 75c476: call 0x6c5fce */
  esp -= 4; W32(esp, 0x75c47bu); SPILL(); f_6c5fce(); if (g_unwind) return; RELOAD();
/* 75c47b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75c47c: mov eax, esi */
  eax = esi;
/* 75c47e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75c47f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75c4a0(void) {
  LOAD_REGS();
L_75c4a0: /* 75c4a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75c4a2: push 0x9c9928 */
  { uint32_t v = 0x9c9928u; esp -= 4; W32(esp, v); }
/* 75c4a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75c4ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75c4ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75c4b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75c4b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75c4b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75c4b8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 75c4bc: mov esi, ecx */
  esi = ecx;
/* 75c4be: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75c4bf: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 75c4c3: call 0x6c4de5 */
  esp -= 4; W32(esp, 0x75c4c8u); SPILL(); f_6c4de5(); if (g_unwind) return; RELOAD();
/* 75c4c8: xor eax, eax */
  eax = 0;
/* 75c4ca: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 75c4ce: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 75c4d1: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 75c4d4: mov ecx, esi */
  ecx = esi;
/* 75c4d6: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 75c4d9: call 0x6c5fce */
  esp -= 4; W32(esp, 0x75c4deu); SPILL(); f_6c5fce(); if (g_unwind) return; RELOAD();
/* 75c4de: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 75c4e2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75c4e3: mov eax, esi */
  eax = esi;
/* 75c4e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75c4e6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75c4ed: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75c4f0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75c520(void) {
  LOAD_REGS();
L_75c520: /* 75c520: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75c522: push 0x9c9948 */
  { uint32_t v = 0x9c9948u; esp -= 4; W32(esp, v); }
/* 75c527: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75c52d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75c52e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75c535: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75c536: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75c537: mov esi, ecx */
  esi = ecx;
/* 75c539: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75c53d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 75c540: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75c542: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 75c54a: je 0x75c55a */
  if (zf) goto L_75c55a;
L_75c54c: /* 75c54c: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 75c552: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 75c554: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 75c556: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75c557: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x75c55au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_75c55a: /* 75c55a: mov ecx, esi */
  ecx = esi;
/* 75c55c: mov dword ptr [esi + 0xc], 0 */
  W32((uint32_t)(esi + 0xcu), 0x0u);
/* 75c563: mov dword ptr [esi + 0x10], 0 */
  W32((uint32_t)(esi + 0x10u), 0x0u);
/* 75c56a: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 75c572: call 0x6c2d06 */
  esp -= 4; W32(esp, 0x75c577u); SPILL(); f_6c2d06(); if (g_unwind) return; RELOAD();
/* 75c577: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75c57b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75c57c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75c583: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75c586: ret  */
  esp += 4; SPILL(); return;
}

void f_75c5b0(void) {
  LOAD_REGS();
L_75c5b0: /* 75c5b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75c5b1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 75c5b5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 75c5b7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75c5b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75c5b9: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 75c5bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75c5c0: mov ebp, ecx */
  ebp = ecx;
/* 75c5c2: jge 0x75c5d8 */
  if ((sf == of)) goto L_75c5d8;
L_75c5c4: /* 75c5c4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 75c5c9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 75c5ce: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 75c5d3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x75c5d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75c5d5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75c5d8: /* 75c5d8: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75c5db: jle 0x75c5f1 */
  if ((zf || sf != of)) goto L_75c5f1;
L_75c5dd: /* 75c5dd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 75c5e2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 75c5e7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 75c5ec: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x75c5eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75c5ee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75c5f1: /* 75c5f1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 75c5f5: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 75c5f8: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75c5fb: jle 0x75c611 */
  if ((zf || sf != of)) goto L_75c611;
L_75c5fd: /* 75c5fd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 75c602: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 75c607: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 75c60c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x75c60eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75c60e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75c611: /* 75c611: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75c613: jge 0x75c630 */
  if ((sf == of)) goto L_75c630;
L_75c615: /* 75c615: mov esi, ebx */
  esi = ebx;
/* 75c617: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 75c61a: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 75c61c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_75c620: /* 75c620: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 75c623: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 75c625: call 0x6c2428 */
  esp -= 4; W32(esp, 0x75c62au); SPILL(); f_6c2428(); if (g_unwind) return; RELOAD();
/* 75c62a: add esi, 0x1c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 75c62d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 75c62e: jne 0x75c620 */
  if (!zf) goto L_75c620;
L_75c630: /* 75c630: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 75c634: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 75c636: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75c637: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75c638: mov ecx, ebp */
  ecx = ebp;
/* 75c63a: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x75c640u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 75c640: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75c641: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75c642: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 75c643: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75c644: ret 8 */
  esp += 12; SPILL(); return;
}

void f_75c680(void) {
  LOAD_REGS();
L_75c680: /* 75c680: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75c681: mov esi, ecx */
  esi = ecx;
/* 75c683: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75c686: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75c687: xor edi, edi */
  edi = 0;
/* 75c689: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 75c68b: jle 0x75c6a5 */
  if ((zf || sf != of)) goto L_75c6a5;
L_75c68d: /* 75c68d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75c68e: xor ebx, ebx */
  ebx = 0;
L_75c690: /* 75c690: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 75c692: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 75c694: call 0x6c2428 */
  esp -= 4; W32(esp, 0x75c699u); SPILL(); f_6c2428(); if (g_unwind) return; RELOAD();
/* 75c699: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75c69c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 75c69d: add ebx, 0x1c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 75c6a0: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75c6a2: jl 0x75c690 */
  if ((sf != of)) goto L_75c690;
L_75c6a4: /* 75c6a4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_75c6a5: /* 75c6a5: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 75c6a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75c6aa: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 75c6ac: mov ecx, esi */
  ecx = esi;
/* 75c6ae: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x75c6b4u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 75c6b4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75c6b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75c6b6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75c6d0(void) {
  LOAD_REGS();
L_75c6d0: /* 75c6d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75c6d1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 75c6d5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 75c6d7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75c6d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75c6d9: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 75c6df: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75c6e0: mov ebp, ecx */
  ebp = ecx;
/* 75c6e2: jge 0x75c6f8 */
  if ((sf == of)) goto L_75c6f8;
L_75c6e4: /* 75c6e4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 75c6e9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 75c6ee: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 75c6f3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x75c6f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75c6f5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75c6f8: /* 75c6f8: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75c6fb: jle 0x75c711 */
  if ((zf || sf != of)) goto L_75c711;
L_75c6fd: /* 75c6fd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 75c702: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 75c707: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 75c70c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x75c70eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75c70e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75c711: /* 75c711: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 75c715: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 75c718: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75c71b: jle 0x75c731 */
  if ((zf || sf != of)) goto L_75c731;
L_75c71d: /* 75c71d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 75c722: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 75c727: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 75c72c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x75c72eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75c72e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75c731: /* 75c731: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75c733: jge 0x75c750 */
  if ((sf == of)) goto L_75c750;
L_75c735: /* 75c735: mov esi, ebx */
  esi = ebx;
/* 75c737: imul esi, esi, 0x78 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x78u);
  esi = (uint32_t)r;
  }
/* 75c73a: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 75c73c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_75c740: /* 75c740: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 75c743: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 75c745: call 0x6c3418 */
  esp -= 4; W32(esp, 0x75c74au); SPILL(); f_6c3418(); if (g_unwind) return; RELOAD();
/* 75c74a: add esi, 0x78 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 75c74d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 75c74e: jne 0x75c740 */
  if (!zf) goto L_75c740;
L_75c750: /* 75c750: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 75c754: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 75c756: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75c757: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75c758: mov ecx, ebp */
  ecx = ebp;
/* 75c75a: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x75c760u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 75c760: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75c761: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75c762: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 75c763: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75c764: ret 8 */
  esp += 12; SPILL(); return;
}

void f_75c7a0(void) {
  LOAD_REGS();
L_75c7a0: /* 75c7a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75c7a1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 75c7a5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75c7a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75c7a7: mov esi, ecx */
  esi = ecx;
/* 75c7a9: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 75c7ab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75c7ac: je 0x75c852 */
  if (zf) goto L_75c852;
L_75c7b2: /* 75c7b2: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 75c7b7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 75c7b9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75c7bb: mov edi, dword ptr [ebx + 4] */
  edi = R32((uint32_t)(ebx + 0x4u));
/* 75c7be: je 0x75c7de */
  if (zf) goto L_75c7de;
L_75c7c0: /* 75c7c0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75c7c3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 75c7c5: push 0x6c62f8 */
  { uint32_t v = 0x6c62f8u; esp -= 4; W32(esp, v); }
/* 75c7ca: push 0x6c181b */
  { uint32_t v = 0x6c181bu; esp -= 4; W32(esp, v); }
/* 75c7cf: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 75c7d1: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75c7d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75c7d4: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 75c7d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 75c7d9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75c7da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75c7db: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x75c7deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_75c7de: /* 75c7de: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75c7df: mov ecx, esi */
  ecx = esi;
/* 75c7e1: call 0x6c9273 */
  esp -= 4; W32(esp, 0x75c7e6u); SPILL(); f_6c9273(); if (g_unwind) return; RELOAD();
/* 75c7e6: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 75c7e9: xor ebp, ebp */
  ebp = 0;
/* 75c7eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 75c7ed: jle 0x75c852 */
  if ((zf || sf != of)) goto L_75c852;
L_75c7ef: /* 75c7ef: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
L_75c7f3: /* 75c7f3: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 75c7f5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 75c7f7: mov ecx, esi */
  ecx = esi;
/* 75c7f9: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x75c7ffu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 75c7ff: mov ecx, dword ptr [0xcfa3d4] */
  ecx = R32((uint32_t)(0xcfa3d4u));
/* 75c805: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 75c807: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75c809: mov edi, eax */
  edi = eax;
/* 75c80b: je 0x75c828 */
  if (zf) goto L_75c828;
L_75c80d: /* 75c80d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 75c810: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 75c812: push 0x6c62f8 */
  { uint32_t v = 0x6c62f8u; esp -= 4; W32(esp, v); }
/* 75c817: push 0x6c181b */
  { uint32_t v = 0x6c181bu; esp -= 4; W32(esp, v); }
/* 75c81c: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 75c81e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 75c820: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 75c822: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75c823: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75c824: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75c825: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x75c828u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_75c828: /* 75c828: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 75c82a: shl edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 75c82d: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  edi = r;
  }
/* 75c82f: mov ecx, edi */
  ecx = edi;
/* 75c831: je 0x75c83f */
  if (zf) goto L_75c83f;
L_75c833: /* 75c833: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 75c835: add edx, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 75c839: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 75c83a: call 0x6c4435 */
  esp -= 4; W32(esp, 0x75c83fu); SPILL(); f_6c4435(); if (g_unwind) return; RELOAD();
L_75c83f: /* 75c83f: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 75c843: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 75c846: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 75c847: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 75c84a: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75c84c: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 75c850: jl 0x75c7f3 */
  if ((sf != of)) goto L_75c7f3;
L_75c852: /* 75c852: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75c853: mov eax, esi */
  eax = esi;
/* 75c855: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75c856: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 75c857: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75c858: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75c890(void) {
  LOAD_REGS();
L_75c890: /* 75c890: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75c891: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 75c895: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 75c897: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75c898: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75c899: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 75c89f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75c8a0: mov ebp, ecx */
  ebp = ecx;
/* 75c8a2: jge 0x75c8b8 */
  if ((sf == of)) goto L_75c8b8;
L_75c8a4: /* 75c8a4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 75c8a9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 75c8ae: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 75c8b3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x75c8b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75c8b5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75c8b8: /* 75c8b8: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75c8bb: jle 0x75c8d1 */
  if ((zf || sf != of)) goto L_75c8d1;
L_75c8bd: /* 75c8bd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 75c8c2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 75c8c7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 75c8cc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x75c8ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75c8ce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75c8d1: /* 75c8d1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 75c8d5: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 75c8d8: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75c8db: jle 0x75c8f1 */
  if ((zf || sf != of)) goto L_75c8f1;
L_75c8dd: /* 75c8dd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 75c8e2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 75c8e7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 75c8ec: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x75c8eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75c8ee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75c8f1: /* 75c8f1: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75c8f3: jge 0x75c910 */
  if ((sf == of)) goto L_75c910;
L_75c8f5: /* 75c8f5: mov esi, ebx */
  esi = ebx;
/* 75c8f7: imul esi, esi, 0x2c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x2cu);
  esi = (uint32_t)r;
  }
/* 75c8fa: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 75c8fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_75c900: /* 75c900: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 75c903: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 75c905: call 0x6c76d5 */
  esp -= 4; W32(esp, 0x75c90au); SPILL(); f_6c76d5(); if (g_unwind) return; RELOAD();
/* 75c90a: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 75c90d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 75c90e: jne 0x75c900 */
  if (!zf) goto L_75c900;
L_75c910: /* 75c910: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 75c914: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 75c916: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75c917: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75c918: mov ecx, ebp */
  ecx = ebp;
/* 75c91a: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x75c920u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 75c920: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75c921: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75c922: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 75c923: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75c924: ret 8 */
  esp += 12; SPILL(); return;
}

void f_75c960(void) {
  LOAD_REGS();
L_75c960: /* 75c960: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75c961: mov esi, ecx */
  esi = ecx;
/* 75c963: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75c966: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75c967: xor edi, edi */
  edi = 0;
/* 75c969: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 75c96b: jle 0x75c985 */
  if ((zf || sf != of)) goto L_75c985;
L_75c96d: /* 75c96d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75c96e: xor ebx, ebx */
  ebx = 0;
L_75c970: /* 75c970: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 75c972: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 75c974: call 0x6c76d5 */
  esp -= 4; W32(esp, 0x75c979u); SPILL(); f_6c76d5(); if (g_unwind) return; RELOAD();
/* 75c979: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75c97c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 75c97d: add ebx, 0x2c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 75c980: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75c982: jl 0x75c970 */
  if ((sf != of)) goto L_75c970;
L_75c984: /* 75c984: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_75c985: /* 75c985: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 75c989: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75c98a: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 75c98c: mov ecx, esi */
  ecx = esi;
/* 75c98e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x75c994u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 75c994: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75c995: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75c996: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75c9b0(void) {
  LOAD_REGS();
L_75c9b0: /* 75c9b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75c9b1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 75c9b5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 75c9b7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75c9b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75c9b9: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 75c9bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75c9c0: mov ebp, ecx */
  ebp = ecx;
/* 75c9c2: jge 0x75c9d8 */
  if ((sf == of)) goto L_75c9d8;
L_75c9c4: /* 75c9c4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 75c9c9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 75c9ce: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 75c9d3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x75c9d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75c9d5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75c9d8: /* 75c9d8: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75c9db: jle 0x75c9f1 */
  if ((zf || sf != of)) goto L_75c9f1;
L_75c9dd: /* 75c9dd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 75c9e2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 75c9e7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 75c9ec: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x75c9eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75c9ee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75c9f1: /* 75c9f1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 75c9f5: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 75c9f8: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75c9fb: jle 0x75ca11 */
  if ((zf || sf != of)) goto L_75ca11;
L_75c9fd: /* 75c9fd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 75ca02: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 75ca07: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 75ca0c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x75ca0eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75ca0e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75ca11: /* 75ca11: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75ca13: jge 0x75ca30 */
  if ((sf == of)) goto L_75ca30;
L_75ca15: /* 75ca15: mov esi, ebx */
  esi = ebx;
/* 75ca17: imul esi, esi, 0x2c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x2cu);
  esi = (uint32_t)r;
  }
/* 75ca1a: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 75ca1c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_75ca20: /* 75ca20: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 75ca23: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 75ca25: call 0x6c3265 */
  esp -= 4; W32(esp, 0x75ca2au); SPILL(); f_6c3265(); if (g_unwind) return; RELOAD();
/* 75ca2a: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 75ca2d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 75ca2e: jne 0x75ca20 */
  if (!zf) goto L_75ca20;
L_75ca30: /* 75ca30: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 75ca34: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 75ca36: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75ca37: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75ca38: mov ecx, ebp */
  ecx = ebp;
/* 75ca3a: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x75ca40u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 75ca40: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75ca41: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75ca42: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 75ca43: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75ca44: ret 8 */
  esp += 12; SPILL(); return;
}

void f_75ca80(void) {
  LOAD_REGS();
L_75ca80: /* 75ca80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75ca81: mov esi, ecx */
  esi = ecx;
/* 75ca83: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75ca86: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75ca87: xor edi, edi */
  edi = 0;
/* 75ca89: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 75ca8b: jle 0x75caa5 */
  if ((zf || sf != of)) goto L_75caa5;
L_75ca8d: /* 75ca8d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75ca8e: xor ebx, ebx */
  ebx = 0;
L_75ca90: /* 75ca90: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 75ca92: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 75ca94: call 0x6c3265 */
  esp -= 4; W32(esp, 0x75ca99u); SPILL(); f_6c3265(); if (g_unwind) return; RELOAD();
/* 75ca99: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75ca9c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 75ca9d: add ebx, 0x2c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 75caa0: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75caa2: jl 0x75ca90 */
  if ((sf != of)) goto L_75ca90;
L_75caa4: /* 75caa4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_75caa5: /* 75caa5: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 75caa9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75caaa: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 75caac: mov ecx, esi */
  ecx = esi;
/* 75caae: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x75cab4u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 75cab4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75cab5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75cab6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75cad0(void) {
  LOAD_REGS();
L_75cad0: /* 75cad0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75cad1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 75cad5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 75cad7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75cad8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75cad9: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 75cadf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75cae0: mov ebp, ecx */
  ebp = ecx;
/* 75cae2: jge 0x75caf8 */
  if ((sf == of)) goto L_75caf8;
L_75cae4: /* 75cae4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 75cae9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 75caee: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 75caf3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x75caf5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75caf5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75caf8: /* 75caf8: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75cafb: jle 0x75cb11 */
  if ((zf || sf != of)) goto L_75cb11;
L_75cafd: /* 75cafd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 75cb02: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 75cb07: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 75cb0c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x75cb0eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75cb0e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75cb11: /* 75cb11: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 75cb15: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 75cb18: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75cb1b: jle 0x75cb31 */
  if ((zf || sf != of)) goto L_75cb31;
L_75cb1d: /* 75cb1d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 75cb22: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 75cb27: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 75cb2c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x75cb2eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75cb2e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75cb31: /* 75cb31: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75cb33: jge 0x75cb50 */
  if ((sf == of)) goto L_75cb50;
L_75cb35: /* 75cb35: lea esi, [ebx + ebx*8] */
  esi = (uint32_t)(ebx + ebx*8);
/* 75cb38: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 75cb3b: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 75cb3d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_75cb40: /* 75cb40: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 75cb43: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 75cb45: call 0x6c3986 */
  esp -= 4; W32(esp, 0x75cb4au); SPILL(); f_6c3986(); if (g_unwind) return; RELOAD();
/* 75cb4a: add esi, 0x48 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 75cb4d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 75cb4e: jne 0x75cb40 */
  if (!zf) goto L_75cb40;
L_75cb50: /* 75cb50: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 75cb54: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 75cb56: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75cb57: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75cb58: mov ecx, ebp */
  ecx = ebp;
/* 75cb5a: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x75cb60u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 75cb60: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75cb61: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75cb62: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 75cb63: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75cb64: ret 8 */
  esp += 12; SPILL(); return;
}

void f_75cba0(void) {
  LOAD_REGS();
L_75cba0: /* 75cba0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75cba1: mov esi, ecx */
  esi = ecx;
/* 75cba3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75cba6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75cba7: xor edi, edi */
  edi = 0;
/* 75cba9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 75cbab: jle 0x75cbc5 */
  if ((zf || sf != of)) goto L_75cbc5;
L_75cbad: /* 75cbad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75cbae: xor ebx, ebx */
  ebx = 0;
L_75cbb0: /* 75cbb0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 75cbb2: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 75cbb4: call 0x6c3986 */
  esp -= 4; W32(esp, 0x75cbb9u); SPILL(); f_6c3986(); if (g_unwind) return; RELOAD();
/* 75cbb9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75cbbc: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 75cbbd: add ebx, 0x48 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 75cbc0: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75cbc2: jl 0x75cbb0 */
  if ((sf != of)) goto L_75cbb0;
L_75cbc4: /* 75cbc4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_75cbc5: /* 75cbc5: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 75cbc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75cbca: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 75cbcc: mov ecx, esi */
  ecx = esi;
/* 75cbce: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x75cbd4u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 75cbd4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75cbd5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75cbd6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75cbf0(void) {
  LOAD_REGS();
L_75cbf0: /* 75cbf0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75cbf1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 75cbf5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 75cbf7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75cbf8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75cbf9: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 75cbff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75cc00: mov ebp, ecx */
  ebp = ecx;
/* 75cc02: jge 0x75cc18 */
  if ((sf == of)) goto L_75cc18;
L_75cc04: /* 75cc04: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 75cc09: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 75cc0e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 75cc13: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x75cc15u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75cc15: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75cc18: /* 75cc18: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75cc1b: jle 0x75cc31 */
  if ((zf || sf != of)) goto L_75cc31;
L_75cc1d: /* 75cc1d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 75cc22: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 75cc27: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 75cc2c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x75cc2eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75cc2e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75cc31: /* 75cc31: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 75cc35: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 75cc38: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75cc3b: jle 0x75cc51 */
  if ((zf || sf != of)) goto L_75cc51;
L_75cc3d: /* 75cc3d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 75cc42: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 75cc47: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 75cc4c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x75cc4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75cc4e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75cc51: /* 75cc51: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75cc53: jge 0x75cc70 */
  if ((sf == of)) goto L_75cc70;
L_75cc55: /* 75cc55: lea esi, [ebx + ebx*2] */
  esi = (uint32_t)(ebx + ebx*2);
/* 75cc58: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 75cc5b: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 75cc5d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_75cc60: /* 75cc60: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 75cc63: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 75cc65: call 0x6cc8a6 */
  esp -= 4; W32(esp, 0x75cc6au); SPILL(); f_6cc8a6(); if (g_unwind) return; RELOAD();
/* 75cc6a: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 75cc6d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 75cc6e: jne 0x75cc60 */
  if (!zf) goto L_75cc60;
L_75cc70: /* 75cc70: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 75cc74: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 75cc76: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75cc77: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75cc78: mov ecx, ebp */
  ecx = ebp;
/* 75cc7a: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x75cc80u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 75cc80: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75cc81: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75cc82: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 75cc83: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75cc84: ret 8 */
  esp += 12; SPILL(); return;
}

void f_75ccc0(void) {
  LOAD_REGS();
L_75ccc0: /* 75ccc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75ccc1: mov esi, ecx */
  esi = ecx;
/* 75ccc3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75ccc6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75ccc7: xor edi, edi */
  edi = 0;
/* 75ccc9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 75cccb: jle 0x75cce5 */
  if ((zf || sf != of)) goto L_75cce5;
L_75cccd: /* 75cccd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75ccce: xor ebx, ebx */
  ebx = 0;
L_75ccd0: /* 75ccd0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 75ccd2: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 75ccd4: call 0x6cc8a6 */
  esp -= 4; W32(esp, 0x75ccd9u); SPILL(); f_6cc8a6(); if (g_unwind) return; RELOAD();
/* 75ccd9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75ccdc: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 75ccdd: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 75cce0: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75cce2: jl 0x75ccd0 */
  if ((sf != of)) goto L_75ccd0;
L_75cce4: /* 75cce4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_75cce5: /* 75cce5: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 75cce9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75ccea: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 75ccec: mov ecx, esi */
  ecx = esi;
/* 75ccee: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x75ccf4u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 75ccf4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75ccf5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75ccf6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75cd10(void) {
  LOAD_REGS();
L_75cd10: /* 75cd10: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75cd11: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 75cd15: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 75cd17: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75cd18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75cd19: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 75cd1f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75cd20: mov ebp, ecx */
  ebp = ecx;
/* 75cd22: jge 0x75cd38 */
  if ((sf == of)) goto L_75cd38;
L_75cd24: /* 75cd24: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 75cd29: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 75cd2e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 75cd33: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x75cd35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75cd35: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75cd38: /* 75cd38: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75cd3b: jle 0x75cd51 */
  if ((zf || sf != of)) goto L_75cd51;
L_75cd3d: /* 75cd3d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 75cd42: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 75cd47: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 75cd4c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x75cd4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75cd4e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75cd51: /* 75cd51: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 75cd55: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 75cd58: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75cd5b: jle 0x75cd71 */
  if ((zf || sf != of)) goto L_75cd71;
L_75cd5d: /* 75cd5d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 75cd62: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 75cd67: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 75cd6c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x75cd6eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75cd6e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75cd71: /* 75cd71: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75cd73: jge 0x75cd90 */
  if ((sf == of)) goto L_75cd90;
L_75cd75: /* 75cd75: lea esi, [ebx + ebx*2] */
  esi = (uint32_t)(ebx + ebx*2);
/* 75cd78: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 75cd7b: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 75cd7d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_75cd80: /* 75cd80: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 75cd83: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 75cd85: call 0x6c4e21 */
  esp -= 4; W32(esp, 0x75cd8au); SPILL(); f_6c4e21(); if (g_unwind) return; RELOAD();
/* 75cd8a: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 75cd8d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 75cd8e: jne 0x75cd80 */
  if (!zf) goto L_75cd80;
L_75cd90: /* 75cd90: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 75cd94: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 75cd96: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75cd97: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75cd98: mov ecx, ebp */
  ecx = ebp;
/* 75cd9a: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x75cda0u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 75cda0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75cda1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75cda2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 75cda3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75cda4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_75cde0(void) {
  LOAD_REGS();
L_75cde0: /* 75cde0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75cde1: mov esi, ecx */
  esi = ecx;
/* 75cde3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75cde6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75cde7: xor edi, edi */
  edi = 0;
/* 75cde9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 75cdeb: jle 0x75ce05 */
  if ((zf || sf != of)) goto L_75ce05;
L_75cded: /* 75cded: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75cdee: xor ebx, ebx */
  ebx = 0;
L_75cdf0: /* 75cdf0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 75cdf2: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 75cdf4: call 0x6c4e21 */
  esp -= 4; W32(esp, 0x75cdf9u); SPILL(); f_6c4e21(); if (g_unwind) return; RELOAD();
/* 75cdf9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75cdfc: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 75cdfd: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 75ce00: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75ce02: jl 0x75cdf0 */
  if ((sf != of)) goto L_75cdf0;
L_75ce04: /* 75ce04: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_75ce05: /* 75ce05: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 75ce09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75ce0a: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 75ce0c: mov ecx, esi */
  ecx = esi;
/* 75ce0e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x75ce14u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 75ce14: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75ce15: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75ce16: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75ce30(void) {
  LOAD_REGS();
L_75ce30: /* 75ce30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75ce31: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 75ce35: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 75ce37: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75ce38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75ce39: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 75ce3f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75ce40: mov ebp, ecx */
  ebp = ecx;
/* 75ce42: jge 0x75ce58 */
  if ((sf == of)) goto L_75ce58;
L_75ce44: /* 75ce44: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 75ce49: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 75ce4e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 75ce53: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x75ce55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75ce55: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75ce58: /* 75ce58: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75ce5b: jle 0x75ce71 */
  if ((zf || sf != of)) goto L_75ce71;
L_75ce5d: /* 75ce5d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 75ce62: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 75ce67: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 75ce6c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x75ce6eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75ce6e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75ce71: /* 75ce71: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 75ce75: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 75ce78: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75ce7b: jle 0x75ce91 */
  if ((zf || sf != of)) goto L_75ce91;
L_75ce7d: /* 75ce7d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 75ce82: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 75ce87: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 75ce8c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x75ce8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75ce8e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75ce91: /* 75ce91: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75ce93: jge 0x75ceb0 */
  if ((sf == of)) goto L_75ceb0;
L_75ce95: /* 75ce95: mov esi, ebx */
  esi = ebx;
/* 75ce97: imul esi, esi, 0x2c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x2cu);
  esi = (uint32_t)r;
  }
/* 75ce9a: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 75ce9c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_75cea0: /* 75cea0: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 75cea3: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 75cea5: call 0x6cc44b */
  esp -= 4; W32(esp, 0x75ceaau); SPILL(); f_6cc44b(); if (g_unwind) return; RELOAD();
/* 75ceaa: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 75cead: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 75ceae: jne 0x75cea0 */
  if (!zf) goto L_75cea0;
L_75ceb0: /* 75ceb0: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 75ceb4: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 75ceb6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75ceb7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75ceb8: mov ecx, ebp */
  ecx = ebp;
/* 75ceba: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x75cec0u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 75cec0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75cec1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75cec2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 75cec3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75cec4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_75cf00(void) {
  LOAD_REGS();
L_75cf00: /* 75cf00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75cf01: mov esi, ecx */
  esi = ecx;
/* 75cf03: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75cf06: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75cf07: xor edi, edi */
  edi = 0;
/* 75cf09: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 75cf0b: jle 0x75cf25 */
  if ((zf || sf != of)) goto L_75cf25;
L_75cf0d: /* 75cf0d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75cf0e: xor ebx, ebx */
  ebx = 0;
L_75cf10: /* 75cf10: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 75cf12: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 75cf14: call 0x6cc44b */
  esp -= 4; W32(esp, 0x75cf19u); SPILL(); f_6cc44b(); if (g_unwind) return; RELOAD();
/* 75cf19: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75cf1c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 75cf1d: add ebx, 0x2c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 75cf20: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75cf22: jl 0x75cf10 */
  if ((sf != of)) goto L_75cf10;
L_75cf24: /* 75cf24: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_75cf25: /* 75cf25: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 75cf29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75cf2a: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 75cf2c: mov ecx, esi */
  ecx = esi;
/* 75cf2e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x75cf34u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 75cf34: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75cf35: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75cf36: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75cf50(void) {
  LOAD_REGS();
L_75cf50: /* 75cf50: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75cf52: push 0x9c9969 */
  { uint32_t v = 0x9c9969u; esp -= 4; W32(esp, v); }
/* 75cf57: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75cf5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75cf5e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75cf65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75cf66: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75cf67: mov esi, ecx */
  esi = ecx;
/* 75cf69: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75cf6d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75cf70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75cf71: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 75cf73: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 75cf7b: call 0x6cbe83 */
  esp -= 4; W32(esp, 0x75cf80u); SPILL(); f_6cbe83(); if (g_unwind) return; RELOAD();
/* 75cf80: mov ecx, esi */
  ecx = esi;
/* 75cf82: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 75cf8a: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x75cf90u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 75cf90: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75cf94: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75cf95: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75cf9c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75cf9f: ret  */
  esp += 4; SPILL(); return;
}

void f_75cfc0(void) {
  LOAD_REGS();
L_75cfc0: /* 75cfc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75cfc1: mov esi, ecx */
  esi = ecx;
/* 75cfc3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75cfc6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75cfc7: xor edi, edi */
  edi = 0;
/* 75cfc9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 75cfcb: jle 0x75cfe5 */
  if ((zf || sf != of)) goto L_75cfe5;
L_75cfcd: /* 75cfcd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75cfce: xor ebx, ebx */
  ebx = 0;
L_75cfd0: /* 75cfd0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 75cfd2: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 75cfd4: call 0x6c5920 */
  esp -= 4; W32(esp, 0x75cfd9u); SPILL(); f_6c5920(); if (g_unwind) return; RELOAD();
/* 75cfd9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75cfdc: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 75cfdd: add ebx, 0x1c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 75cfe0: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75cfe2: jl 0x75cfd0 */
  if ((sf != of)) goto L_75cfd0;
L_75cfe4: /* 75cfe4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_75cfe5: /* 75cfe5: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 75cfe9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75cfea: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 75cfec: mov ecx, esi */
  ecx = esi;
/* 75cfee: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x75cff4u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 75cff4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75cff5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75cff6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75d010(void) {
  LOAD_REGS();
L_75d010: /* 75d010: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75d011: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75d012: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75d013: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 75d017: mov esi, ecx */
  esi = ecx;
/* 75d019: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 75d01b: je 0x75d05d */
  if (zf) goto L_75d05d;
L_75d01d: /* 75d01d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 75d020: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75d021: call 0x6c8c6f */
  esp -= 4; W32(esp, 0x75d026u); SPILL(); f_6c8c6f(); if (g_unwind) return; RELOAD();
/* 75d026: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 75d029: xor ebx, ebx */
  ebx = 0;
/* 75d02b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 75d02d: jle 0x75d05d */
  if ((zf || sf != of)) goto L_75d05d;
L_75d02f: /* 75d02f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75d030: xor ebp, ebp */
  ebp = 0;
L_75d032: /* 75d032: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 75d034: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 75d036: mov ecx, esi */
  ecx = esi;
/* 75d038: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x75d03eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 75d03e: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 75d041: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 75d043: je 0x75d051 */
  if (zf) goto L_75d051;
L_75d045: /* 75d045: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 75d047: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 75d049: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75d04a: mov ecx, eax */
  ecx = eax;
/* 75d04c: call 0x6c85c6 */
  esp -= 4; W32(esp, 0x75d051u); SPILL(); f_6c85c6(); if (g_unwind) return; RELOAD();
L_75d051: /* 75d051: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 75d054: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 75d055: add ebp, 0x1c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 75d058: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75d05a: jl 0x75d032 */
  if ((sf != of)) goto L_75d032;
L_75d05c: /* 75d05c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_75d05d: /* 75d05d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75d05e: mov eax, esi */
  eax = esi;
/* 75d060: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75d061: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75d062: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75d090(void) {
  LOAD_REGS();
L_75d090: /* 75d090: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75d091: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 75d095: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 75d097: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75d098: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75d099: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 75d09f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75d0a0: mov ebp, ecx */
  ebp = ecx;
/* 75d0a2: jge 0x75d0b8 */
  if ((sf == of)) goto L_75d0b8;
L_75d0a4: /* 75d0a4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 75d0a9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 75d0ae: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 75d0b3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x75d0b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75d0b5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75d0b8: /* 75d0b8: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75d0bb: jle 0x75d0d1 */
  if ((zf || sf != of)) goto L_75d0d1;
L_75d0bd: /* 75d0bd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 75d0c2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 75d0c7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 75d0cc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x75d0ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75d0ce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75d0d1: /* 75d0d1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 75d0d5: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 75d0d8: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75d0db: jle 0x75d0f1 */
  if ((zf || sf != of)) goto L_75d0f1;
L_75d0dd: /* 75d0dd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 75d0e2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 75d0e7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 75d0ec: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x75d0eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75d0ee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75d0f1: /* 75d0f1: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75d0f3: jge 0x75d110 */
  if ((sf == of)) goto L_75d110;
L_75d0f5: /* 75d0f5: mov esi, ebx */
  esi = ebx;
/* 75d0f7: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 75d0fa: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 75d0fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_75d100: /* 75d100: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 75d103: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 75d105: call 0x6c1028 */
  esp -= 4; W32(esp, 0x75d10au); SPILL(); f_6c1028(); if (g_unwind) return; RELOAD();
/* 75d10a: add esi, 0x1c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 75d10d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 75d10e: jne 0x75d100 */
  if (!zf) goto L_75d100;
L_75d110: /* 75d110: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 75d114: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 75d116: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75d117: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75d118: mov ecx, ebp */
  ecx = ebp;
/* 75d11a: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x75d120u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 75d120: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75d121: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75d122: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 75d123: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75d124: ret 8 */
  esp += 12; SPILL(); return;
}

void f_75d160(void) {
  LOAD_REGS();
L_75d160: /* 75d160: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75d161: mov esi, ecx */
  esi = ecx;
/* 75d163: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75d166: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75d167: xor edi, edi */
  edi = 0;
/* 75d169: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 75d16b: jle 0x75d185 */
  if ((zf || sf != of)) goto L_75d185;
L_75d16d: /* 75d16d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75d16e: xor ebx, ebx */
  ebx = 0;
L_75d170: /* 75d170: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 75d172: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 75d174: call 0x6c1028 */
  esp -= 4; W32(esp, 0x75d179u); SPILL(); f_6c1028(); if (g_unwind) return; RELOAD();
/* 75d179: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75d17c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 75d17d: add ebx, 0x1c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 75d180: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75d182: jl 0x75d170 */
  if ((sf != of)) goto L_75d170;
L_75d184: /* 75d184: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_75d185: /* 75d185: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 75d189: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75d18a: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 75d18c: mov ecx, esi */
  ecx = esi;
/* 75d18e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x75d194u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 75d194: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75d195: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75d196: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75d1b0(void) {
  LOAD_REGS();
L_75d1b0: /* 75d1b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75d1b1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 75d1b5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 75d1b7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75d1b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75d1b9: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 75d1bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75d1c0: mov ebp, ecx */
  ebp = ecx;
/* 75d1c2: jge 0x75d1d8 */
  if ((sf == of)) goto L_75d1d8;
L_75d1c4: /* 75d1c4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 75d1c9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 75d1ce: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 75d1d3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x75d1d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75d1d5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75d1d8: /* 75d1d8: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75d1db: jle 0x75d1f1 */
  if ((zf || sf != of)) goto L_75d1f1;
L_75d1dd: /* 75d1dd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 75d1e2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 75d1e7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 75d1ec: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x75d1eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75d1ee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75d1f1: /* 75d1f1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 75d1f5: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 75d1f8: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75d1fb: jle 0x75d211 */
  if ((zf || sf != of)) goto L_75d211;
L_75d1fd: /* 75d1fd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 75d202: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 75d207: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 75d20c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x75d20eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75d20e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75d211: /* 75d211: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75d213: jge 0x75d230 */
  if ((sf == of)) goto L_75d230;
L_75d215: /* 75d215: mov esi, ebx */
  esi = ebx;
/* 75d217: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 75d21a: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 75d21c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_75d220: /* 75d220: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 75d223: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 75d225: call 0x6c1f50 */
  esp -= 4; W32(esp, 0x75d22au); SPILL(); f_6c1f50(); if (g_unwind) return; RELOAD();
/* 75d22a: add esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 75d22d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 75d22e: jne 0x75d220 */
  if (!zf) goto L_75d220;
L_75d230: /* 75d230: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 75d234: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 75d236: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75d237: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75d238: mov ecx, ebp */
  ecx = ebp;
/* 75d23a: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x75d240u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 75d240: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75d241: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75d242: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 75d243: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75d244: ret 8 */
  esp += 12; SPILL(); return;
}

void f_75d280(void) {
  LOAD_REGS();
L_75d280: /* 75d280: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75d281: mov esi, ecx */
  esi = ecx;
/* 75d283: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75d286: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75d287: xor edi, edi */
  edi = 0;
/* 75d289: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 75d28b: jle 0x75d2a5 */
  if ((zf || sf != of)) goto L_75d2a5;
L_75d28d: /* 75d28d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75d28e: xor ebx, ebx */
  ebx = 0;
L_75d290: /* 75d290: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 75d292: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 75d294: call 0x6c1f50 */
  esp -= 4; W32(esp, 0x75d299u); SPILL(); f_6c1f50(); if (g_unwind) return; RELOAD();
/* 75d299: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75d29c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 75d29d: add ebx, 0x20 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 75d2a0: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75d2a2: jl 0x75d290 */
  if ((sf != of)) goto L_75d290;
L_75d2a4: /* 75d2a4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_75d2a5: /* 75d2a5: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 75d2a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75d2aa: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 75d2ac: mov ecx, esi */
  ecx = esi;
/* 75d2ae: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x75d2b4u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 75d2b4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75d2b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75d2b6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75d2d0(void) {
  LOAD_REGS();
L_75d2d0: /* 75d2d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75d2d1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 75d2d5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 75d2d7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75d2d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75d2d9: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 75d2df: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75d2e0: mov ebp, ecx */
  ebp = ecx;
/* 75d2e2: jge 0x75d2f8 */
  if ((sf == of)) goto L_75d2f8;
L_75d2e4: /* 75d2e4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 75d2e9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 75d2ee: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 75d2f3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x75d2f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75d2f5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75d2f8: /* 75d2f8: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75d2fb: jle 0x75d311 */
  if ((zf || sf != of)) goto L_75d311;
L_75d2fd: /* 75d2fd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 75d302: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 75d307: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 75d30c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x75d30eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75d30e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75d311: /* 75d311: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 75d315: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 75d318: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75d31b: jle 0x75d331 */
  if ((zf || sf != of)) goto L_75d331;
L_75d31d: /* 75d31d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 75d322: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 75d327: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 75d32c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x75d32eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75d32e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75d331: /* 75d331: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75d333: jge 0x75d350 */
  if ((sf == of)) goto L_75d350;
L_75d335: /* 75d335: lea esi, [ebx + ebx*4] */
  esi = (uint32_t)(ebx + ebx*4);
/* 75d338: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 75d33b: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 75d33d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_75d340: /* 75d340: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 75d343: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 75d345: call 0x6c56b9 */
  esp -= 4; W32(esp, 0x75d34au); SPILL(); f_6c56b9(); if (g_unwind) return; RELOAD();
/* 75d34a: add esi, 0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 75d34d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 75d34e: jne 0x75d340 */
  if (!zf) goto L_75d340;
L_75d350: /* 75d350: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 75d354: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 75d356: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75d357: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75d358: mov ecx, ebp */
  ecx = ebp;
/* 75d35a: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x75d360u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 75d360: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75d361: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75d362: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 75d363: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75d364: ret 8 */
  esp += 12; SPILL(); return;
}

void f_75d3a0(void) {
  LOAD_REGS();
L_75d3a0: /* 75d3a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75d3a1: mov esi, ecx */
  esi = ecx;
/* 75d3a3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75d3a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75d3a7: xor edi, edi */
  edi = 0;
/* 75d3a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 75d3ab: jle 0x75d3c5 */
  if ((zf || sf != of)) goto L_75d3c5;
L_75d3ad: /* 75d3ad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75d3ae: xor ebx, ebx */
  ebx = 0;
L_75d3b0: /* 75d3b0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 75d3b2: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 75d3b4: call 0x6c56b9 */
  esp -= 4; W32(esp, 0x75d3b9u); SPILL(); f_6c56b9(); if (g_unwind) return; RELOAD();
/* 75d3b9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75d3bc: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 75d3bd: add ebx, 0x28 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 75d3c0: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75d3c2: jl 0x75d3b0 */
  if ((sf != of)) goto L_75d3b0;
L_75d3c4: /* 75d3c4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_75d3c5: /* 75d3c5: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 75d3c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75d3ca: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 75d3cc: mov ecx, esi */
  ecx = esi;
/* 75d3ce: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x75d3d4u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 75d3d4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75d3d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75d3d6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75d3f0(void) {
  LOAD_REGS();
L_75d3f0: /* 75d3f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75d3f1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 75d3f5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 75d3f7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75d3f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75d3f9: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 75d3ff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75d400: mov ebp, ecx */
  ebp = ecx;
/* 75d402: jge 0x75d418 */
  if ((sf == of)) goto L_75d418;
L_75d404: /* 75d404: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 75d409: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 75d40e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 75d413: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x75d415u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75d415: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75d418: /* 75d418: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75d41b: jle 0x75d431 */
  if ((zf || sf != of)) goto L_75d431;
L_75d41d: /* 75d41d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 75d422: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 75d427: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 75d42c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x75d42eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75d42e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75d431: /* 75d431: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 75d435: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 75d438: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75d43b: jle 0x75d451 */
  if ((zf || sf != of)) goto L_75d451;
L_75d43d: /* 75d43d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 75d442: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 75d447: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 75d44c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x75d44eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75d44e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75d451: /* 75d451: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75d453: jge 0x75d470 */
  if ((sf == of)) goto L_75d470;
L_75d455: /* 75d455: mov esi, ebx */
  esi = ebx;
/* 75d457: imul esi, esi, 0x34 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x34u);
  esi = (uint32_t)r;
  }
/* 75d45a: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 75d45c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_75d460: /* 75d460: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 75d463: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 75d465: call 0x6cb780 */
  esp -= 4; W32(esp, 0x75d46au); SPILL(); f_6cb780(); if (g_unwind) return; RELOAD();
/* 75d46a: add esi, 0x34 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 75d46d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 75d46e: jne 0x75d460 */
  if (!zf) goto L_75d460;
L_75d470: /* 75d470: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 75d474: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 75d476: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75d477: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75d478: mov ecx, ebp */
  ecx = ebp;
/* 75d47a: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x75d480u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 75d480: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75d481: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75d482: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 75d483: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75d484: ret 8 */
  esp += 12; SPILL(); return;
}

void f_75d4c0(void) {
  LOAD_REGS();
L_75d4c0: /* 75d4c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75d4c1: mov esi, ecx */
  esi = ecx;
/* 75d4c3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75d4c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75d4c7: xor edi, edi */
  edi = 0;
/* 75d4c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 75d4cb: jle 0x75d4e5 */
  if ((zf || sf != of)) goto L_75d4e5;
L_75d4cd: /* 75d4cd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75d4ce: xor ebx, ebx */
  ebx = 0;
L_75d4d0: /* 75d4d0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 75d4d2: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 75d4d4: call 0x6cb780 */
  esp -= 4; W32(esp, 0x75d4d9u); SPILL(); f_6cb780(); if (g_unwind) return; RELOAD();
/* 75d4d9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75d4dc: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 75d4dd: add ebx, 0x34 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 75d4e0: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75d4e2: jl 0x75d4d0 */
  if ((sf != of)) goto L_75d4d0;
L_75d4e4: /* 75d4e4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_75d4e5: /* 75d4e5: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 75d4e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75d4ea: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 75d4ec: mov ecx, esi */
  ecx = esi;
/* 75d4ee: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x75d4f4u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 75d4f4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75d4f5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75d4f6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75d510(void) {
  LOAD_REGS();
L_75d510: /* 75d510: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75d511: mov esi, ecx */
  esi = ecx;
/* 75d513: call 0x6c8580 */
  esp -= 4; W32(esp, 0x75d518u); SPILL(); f_6c8580(); if (g_unwind) return; RELOAD();
/* 75d518: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75d51d: je 0x75d52c */
  if (zf) goto L_75d52c;
L_75d51f: /* 75d51f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 75d524: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 75d526: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 75d528: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75d529: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x75d52cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_75d52c: /* 75d52c: mov eax, esi */
  eax = esi;
/* 75d52e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75d52f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75d550(void) {
  LOAD_REGS();
L_75d550: /* 75d550: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75d551: mov esi, ecx */
  esi = ecx;
/* 75d553: call 0x6ca84e */
  esp -= 4; W32(esp, 0x75d558u); SPILL(); f_6ca84e(); if (g_unwind) return; RELOAD();
/* 75d558: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75d55d: je 0x75d56c */
  if (zf) goto L_75d56c;
L_75d55f: /* 75d55f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 75d564: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 75d566: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 75d568: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75d569: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x75d56cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_75d56c: /* 75d56c: mov eax, esi */
  eax = esi;
/* 75d56e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75d56f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75d590(void) {
  LOAD_REGS();
L_75d590: /* 75d590: jmp 0x6c6a37 */
  SPILL(); f_6c6a37(); return;
}

void f_75d5b0(void) {
  LOAD_REGS();
L_75d5b0: /* 75d5b0: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 75d5b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75d5b6: mov esi, ecx */
  esi = ecx;
/* 75d5b8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 75d5ba: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75d5bc: je 0x75d5dc */
  if (zf) goto L_75d5dc;
L_75d5be: /* 75d5be: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 75d5c1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 75d5c3: push 0x6c286a */
  { uint32_t v = 0x6c286au; esp -= 4; W32(esp, v); }
/* 75d5c8: push 0x6c32dd */
  { uint32_t v = 0x6c32ddu; esp -= 4; W32(esp, v); }
/* 75d5cd: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 75d5cf: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75d5d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75d5d2: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 75d5d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 75d5d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75d5d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75d5d9: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x75d5dcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_75d5dc: /* 75d5dc: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75d5e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75d5e1: mov ecx, esi */
  ecx = esi;
/* 75d5e3: call 0x6c9110 */
  esp -= 4; W32(esp, 0x75d5e8u); SPILL(); f_6c9110(); if (g_unwind) return; RELOAD();
/* 75d5e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75d5e9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75d600(void) {
  LOAD_REGS();
L_75d600: /* 75d600: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75d601: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 75d605: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75d606: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 75d608: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 75d60a: mov ecx, esi */
  ecx = esi;
/* 75d60c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x75d612u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 75d612: mov edi, eax */
  edi = eax;
/* 75d614: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 75d619: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 75d61b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75d61d: je 0x75d63a */
  if (zf) goto L_75d63a;
L_75d61f: /* 75d61f: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 75d622: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 75d624: push 0x6c286a */
  { uint32_t v = 0x6c286au; esp -= 4; W32(esp, v); }
/* 75d629: push 0x6c32dd */
  { uint32_t v = 0x6c32ddu; esp -= 4; W32(esp, v); }
/* 75d62e: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 75d630: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 75d632: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 75d634: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75d635: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75d636: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75d637: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x75d63au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_75d63a: /* 75d63a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 75d63c: mov eax, edi */
  eax = edi;
/* 75d63e: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 75d641: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75d642: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 75d644: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75d645: ret  */
  esp += 4; SPILL(); return;
}

void f_75d670(void) {
  LOAD_REGS();
L_75d670: /* 75d670: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75d672: push 0x9c9a28 */
  { uint32_t v = 0x9c9a28u; esp -= 4; W32(esp, v); }
/* 75d677: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75d67d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75d67e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75d685: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75d686: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75d687: mov esi, ecx */
  esi = ecx;
/* 75d689: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75d68d: lea ecx, [esi + 0x104] */
  ecx = (uint32_t)(esi + 0x104u);
/* 75d693: mov dword ptr [esp + 0x10], 0xc */
  W32((uint32_t)(esp + 0x10u), 0xcu);
/* 75d69b: call 0x6c880f */
  esp -= 4; W32(esp, 0x75d6a0u); SPILL(); f_6c880f(); if (g_unwind) return; RELOAD();
/* 75d6a0: push 0x6c8828 */
  { uint32_t v = 0x6c8828u; esp -= 4; W32(esp, v); }
/* 75d6a5: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 75d6a7: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 75d6a9: lea eax, [esi + 0xb0] */
  eax = (uint32_t)(esi + 0xb0u);
/* 75d6af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75d6b0: mov byte ptr [esp + 0x20], 0xb */
  W8((uint32_t)(esp + 0x20u), 0xbu);
/* 75d6b5: call 0x99ca3d */
  esp -= 4; W32(esp, 0x75d6bau); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 75d6ba: lea ecx, [esi + 0xa4] */
  ecx = (uint32_t)(esi + 0xa4u);
/* 75d6c0: mov byte ptr [esp + 0x10], 0xa */
  W8((uint32_t)(esp + 0x10u), 0xau);
/* 75d6c5: call 0x6c1cdf */
  esp -= 4; W32(esp, 0x75d6cau); SPILL(); f_6c1cdf(); if (g_unwind) return; RELOAD();
/* 75d6ca: lea ecx, [esi + 0x98] */
  ecx = (uint32_t)(esi + 0x98u);
/* 75d6d0: mov byte ptr [esp + 0x10], 9 */
  W8((uint32_t)(esp + 0x10u), 0x9u);
/* 75d6d5: call 0x6c1cdf */
  esp -= 4; W32(esp, 0x75d6dau); SPILL(); f_6c1cdf(); if (g_unwind) return; RELOAD();
/* 75d6da: lea ecx, [esi + 0x8c] */
  ecx = (uint32_t)(esi + 0x8cu);
/* 75d6e0: mov byte ptr [esp + 0x10], 8 */
  W8((uint32_t)(esp + 0x10u), 0x8u);
/* 75d6e5: call 0x6c1cdf */
  esp -= 4; W32(esp, 0x75d6eau); SPILL(); f_6c1cdf(); if (g_unwind) return; RELOAD();
/* 75d6ea: lea ecx, [esi + 0x80] */
  ecx = (uint32_t)(esi + 0x80u);
/* 75d6f0: mov byte ptr [esp + 0x10], 7 */
  W8((uint32_t)(esp + 0x10u), 0x7u);
/* 75d6f5: call 0x6c1cdf */
  esp -= 4; W32(esp, 0x75d6fau); SPILL(); f_6c1cdf(); if (g_unwind) return; RELOAD();
/* 75d6fa: lea ecx, [esi + 0x74] */
  ecx = (uint32_t)(esi + 0x74u);
/* 75d6fd: mov byte ptr [esp + 0x10], 6 */
  W8((uint32_t)(esp + 0x10u), 0x6u);
/* 75d702: call 0x6c1cdf */
  esp -= 4; W32(esp, 0x75d707u); SPILL(); f_6c1cdf(); if (g_unwind) return; RELOAD();
/* 75d707: lea ecx, [esi + 0x68] */
  ecx = (uint32_t)(esi + 0x68u);
/* 75d70a: mov byte ptr [esp + 0x10], 5 */
  W8((uint32_t)(esp + 0x10u), 0x5u);
/* 75d70f: call 0x6c1cdf */
  esp -= 4; W32(esp, 0x75d714u); SPILL(); f_6c1cdf(); if (g_unwind) return; RELOAD();
/* 75d714: lea ecx, [esi + 0x5c] */
  ecx = (uint32_t)(esi + 0x5cu);
/* 75d717: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* 75d71c: call 0x6c2ed2 */
  esp -= 4; W32(esp, 0x75d721u); SPILL(); f_6c2ed2(); if (g_unwind) return; RELOAD();
/* 75d721: lea ecx, [esi + 0x50] */
  ecx = (uint32_t)(esi + 0x50u);
/* 75d724: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 75d729: call 0x6c2ed2 */
  esp -= 4; W32(esp, 0x75d72eu); SPILL(); f_6c2ed2(); if (g_unwind) return; RELOAD();
/* 75d72e: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 75d731: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 75d736: call 0x6c1cdf */
  esp -= 4; W32(esp, 0x75d73bu); SPILL(); f_6c1cdf(); if (g_unwind) return; RELOAD();
/* 75d73b: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 75d73e: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 75d743: call 0x6c1cdf */
  esp -= 4; W32(esp, 0x75d748u); SPILL(); f_6c1cdf(); if (g_unwind) return; RELOAD();
/* 75d748: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 75d74b: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 75d750: call 0x6cbadc */
  esp -= 4; W32(esp, 0x75d755u); SPILL(); f_6cbadc(); if (g_unwind) return; RELOAD();
/* 75d755: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 75d758: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 75d760: call 0x6cbadc */
  esp -= 4; W32(esp, 0x75d765u); SPILL(); f_6cbadc(); if (g_unwind) return; RELOAD();
/* 75d765: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75d769: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75d76a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75d771: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75d774: ret  */
  esp += 4; SPILL(); return;
}

void f_75d7d0(void) {
  LOAD_REGS();
L_75d7d0: /* 75d7d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75d7d2: push 0x9c9af0 */
  { uint32_t v = 0x9c9af0u; esp -= 4; W32(esp, v); }
/* 75d7d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75d7dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75d7de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75d7e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75d7e6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75d7e7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75d7e8: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 75d7ec: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 75d7ef: mov ebx, ecx */
  ebx = ecx;
/* 75d7f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75d7f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75d7f3: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 75d7f5: lea esi, [ebp + 4] */
  esi = (uint32_t)(ebp + 0x4u);
/* 75d7f8: lea edi, [ebx + 4] */
  edi = (uint32_t)(ebx + 0x4u);
/* 75d7fb: mov ecx, 7 */
  ecx = 0x7u;
/* 75d800: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 75d802: lea ecx, [ebp + 0x20] */
  ecx = (uint32_t)(ebp + 0x20u);
/* 75d805: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75d806: lea ecx, [ebx + 0x20] */
  ecx = (uint32_t)(ebx + 0x20u);
/* 75d809: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 75d80d: call 0x6c70a4 */
  esp -= 4; W32(esp, 0x75d812u); SPILL(); f_6c70a4(); if (g_unwind) return; RELOAD();
/* 75d812: lea edx, [ebp + 0x2c] */
  edx = (uint32_t)(ebp + 0x2cu);
/* 75d815: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 75d816: lea ecx, [ebx + 0x2c] */
  ecx = (uint32_t)(ebx + 0x2cu);
/* 75d819: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 75d821: call 0x6c70a4 */
  esp -= 4; W32(esp, 0x75d826u); SPILL(); f_6c70a4(); if (g_unwind) return; RELOAD();
/* 75d826: lea eax, [ebp + 0x38] */
  eax = (uint32_t)(ebp + 0x38u);
/* 75d829: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75d82a: lea ecx, [ebx + 0x38] */
  ecx = (uint32_t)(ebx + 0x38u);
/* 75d82d: mov byte ptr [esp + 0x20], 1 */
  W8((uint32_t)(esp + 0x20u), 0x1u);
/* 75d832: call 0x6cabe1 */
  esp -= 4; W32(esp, 0x75d837u); SPILL(); f_6cabe1(); if (g_unwind) return; RELOAD();
/* 75d837: lea ecx, [ebp + 0x44] */
  ecx = (uint32_t)(ebp + 0x44u);
/* 75d83a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75d83b: lea ecx, [ebx + 0x44] */
  ecx = (uint32_t)(ebx + 0x44u);
/* 75d83e: mov byte ptr [esp + 0x20], 2 */
  W8((uint32_t)(esp + 0x20u), 0x2u);
/* 75d843: call 0x6cabe1 */
  esp -= 4; W32(esp, 0x75d848u); SPILL(); f_6cabe1(); if (g_unwind) return; RELOAD();
/* 75d848: lea edx, [ebp + 0x50] */
  edx = (uint32_t)(ebp + 0x50u);
/* 75d84b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 75d84c: lea ecx, [ebx + 0x50] */
  ecx = (uint32_t)(ebx + 0x50u);
/* 75d84f: mov byte ptr [esp + 0x20], 3 */
  W8((uint32_t)(esp + 0x20u), 0x3u);
/* 75d854: call 0x6c85e4 */
  esp -= 4; W32(esp, 0x75d859u); SPILL(); f_6c85e4(); if (g_unwind) return; RELOAD();
/* 75d859: lea eax, [ebp + 0x5c] */
  eax = (uint32_t)(ebp + 0x5cu);
/* 75d85c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75d85d: lea ecx, [ebx + 0x5c] */
  ecx = (uint32_t)(ebx + 0x5cu);
/* 75d860: mov byte ptr [esp + 0x20], 4 */
  W8((uint32_t)(esp + 0x20u), 0x4u);
/* 75d865: call 0x6c85e4 */
  esp -= 4; W32(esp, 0x75d86au); SPILL(); f_6c85e4(); if (g_unwind) return; RELOAD();
/* 75d86a: lea ecx, [ebp + 0x68] */
  ecx = (uint32_t)(ebp + 0x68u);
/* 75d86d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75d86e: lea ecx, [ebx + 0x68] */
  ecx = (uint32_t)(ebx + 0x68u);
/* 75d871: mov byte ptr [esp + 0x20], 5 */
  W8((uint32_t)(esp + 0x20u), 0x5u);
/* 75d876: call 0x6cabe1 */
  esp -= 4; W32(esp, 0x75d87bu); SPILL(); f_6cabe1(); if (g_unwind) return; RELOAD();
/* 75d87b: lea edx, [ebp + 0x74] */
  edx = (uint32_t)(ebp + 0x74u);
/* 75d87e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 75d87f: lea ecx, [ebx + 0x74] */
  ecx = (uint32_t)(ebx + 0x74u);
/* 75d882: mov byte ptr [esp + 0x20], 6 */
  W8((uint32_t)(esp + 0x20u), 0x6u);
/* 75d887: call 0x6cabe1 */
  esp -= 4; W32(esp, 0x75d88cu); SPILL(); f_6cabe1(); if (g_unwind) return; RELOAD();
/* 75d88c: lea eax, [ebp + 0x80] */
  eax = (uint32_t)(ebp + 0x80u);
/* 75d892: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75d893: lea ecx, [ebx + 0x80] */
  ecx = (uint32_t)(ebx + 0x80u);
/* 75d899: mov byte ptr [esp + 0x20], 7 */
  W8((uint32_t)(esp + 0x20u), 0x7u);
/* 75d89e: call 0x6cabe1 */
  esp -= 4; W32(esp, 0x75d8a3u); SPILL(); f_6cabe1(); if (g_unwind) return; RELOAD();
/* 75d8a3: lea ecx, [ebp + 0x8c] */
  ecx = (uint32_t)(ebp + 0x8cu);
/* 75d8a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75d8aa: lea ecx, [ebx + 0x8c] */
  ecx = (uint32_t)(ebx + 0x8cu);
/* 75d8b0: mov byte ptr [esp + 0x20], 8 */
  W8((uint32_t)(esp + 0x20u), 0x8u);
/* 75d8b5: call 0x6cabe1 */
  esp -= 4; W32(esp, 0x75d8bau); SPILL(); f_6cabe1(); if (g_unwind) return; RELOAD();
/* 75d8ba: lea edx, [ebp + 0x98] */
  edx = (uint32_t)(ebp + 0x98u);
/* 75d8c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 75d8c1: lea ecx, [ebx + 0x98] */
  ecx = (uint32_t)(ebx + 0x98u);
/* 75d8c7: mov byte ptr [esp + 0x20], 9 */
  W8((uint32_t)(esp + 0x20u), 0x9u);
/* 75d8cc: call 0x6cabe1 */
  esp -= 4; W32(esp, 0x75d8d1u); SPILL(); f_6cabe1(); if (g_unwind) return; RELOAD();
/* 75d8d1: lea eax, [ebp + 0xa4] */
  eax = (uint32_t)(ebp + 0xa4u);
/* 75d8d7: mov byte ptr [esp + 0x1c], 0xa */
  W8((uint32_t)(esp + 0x1cu), 0xau);
/* 75d8dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75d8dd: lea ecx, [ebx + 0xa4] */
  ecx = (uint32_t)(ebx + 0xa4u);
/* 75d8e3: call 0x6cabe1 */
  esp -= 4; W32(esp, 0x75d8e8u); SPILL(); f_6cabe1(); if (g_unwind) return; RELOAD();
/* 75d8e8: push 0x6c8828 */
  { uint32_t v = 0x6c8828u; esp -= 4; W32(esp, v); }
/* 75d8ed: push 0x6c80d0 */
  { uint32_t v = 0x6c80d0u; esp -= 4; W32(esp, v); }
/* 75d8f2: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 75d8f4: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 75d8f6: lea ecx, [ebp + 0xb0] */
  ecx = (uint32_t)(ebp + 0xb0u);
/* 75d8fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75d8fd: lea edx, [ebx + 0xb0] */
  edx = (uint32_t)(ebx + 0xb0u);
/* 75d903: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 75d904: mov byte ptr [esp + 0x34], 0xb */
  W8((uint32_t)(esp + 0x34u), 0xbu);
/* 75d909: call 0x99cb60 */
  esp -= 4; W32(esp, 0x75d90eu); SPILL(); f_99cb60(); if (g_unwind) return; RELOAD();
/* 75d90e: add ebp, 0x104 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 75d914: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75d915: lea ecx, [ebx + 0x104] */
  ecx = (uint32_t)(ebx + 0x104u);
/* 75d91b: call 0x6ca191 */
  esp -= 4; W32(esp, 0x75d920u); SPILL(); f_6ca191(); if (g_unwind) return; RELOAD();
/* 75d920: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 75d924: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75d925: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75d926: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 75d927: mov eax, ebx */
  eax = ebx;
/* 75d929: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75d92a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75d931: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75d934: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75d9a0(void) {
  LOAD_REGS();
L_75d9a0: /* 75d9a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75d9a1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75d9a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75d9a3: mov esi, ecx */
  esi = ecx;
/* 75d9a5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75d9a6: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 75d9aa: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 75d9ac: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 75d9ae: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 75d9b1: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 75d9b4: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 75d9b7: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 75d9ba: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 75d9bd: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 75d9c0: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 75d9c3: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 75d9c6: mov edx, dword ptr [edi + 0x14] */
  edx = R32((uint32_t)(edi + 0x14u));
/* 75d9c9: mov dword ptr [esi + 0x14], edx */
  W32((uint32_t)(esi + 0x14u), edx);
/* 75d9cc: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 75d9cf: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 75d9d2: mov ecx, dword ptr [edi + 0x1c] */
  ecx = R32((uint32_t)(edi + 0x1cu));
/* 75d9d5: lea edx, [edi + 0x20] */
  edx = (uint32_t)(edi + 0x20u);
/* 75d9d8: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 75d9db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 75d9dc: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 75d9df: call 0x6cca95 */
  esp -= 4; W32(esp, 0x75d9e4u); SPILL(); f_6cca95(); if (g_unwind) return; RELOAD();
/* 75d9e4: lea eax, [edi + 0x2c] */
  eax = (uint32_t)(edi + 0x2cu);
/* 75d9e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75d9e8: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 75d9eb: call 0x6cca95 */
  esp -= 4; W32(esp, 0x75d9f0u); SPILL(); f_6cca95(); if (g_unwind) return; RELOAD();
/* 75d9f0: lea ecx, [edi + 0x38] */
  ecx = (uint32_t)(edi + 0x38u);
/* 75d9f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75d9f4: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 75d9f7: call 0x6caf0b */
  esp -= 4; W32(esp, 0x75d9fcu); SPILL(); f_6caf0b(); if (g_unwind) return; RELOAD();
/* 75d9fc: lea edx, [edi + 0x44] */
  edx = (uint32_t)(edi + 0x44u);
/* 75d9ff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 75da00: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 75da03: call 0x6caf0b */
  esp -= 4; W32(esp, 0x75da08u); SPILL(); f_6caf0b(); if (g_unwind) return; RELOAD();
/* 75da08: lea eax, [edi + 0x50] */
  eax = (uint32_t)(edi + 0x50u);
/* 75da0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75da0c: lea ecx, [esi + 0x50] */
  ecx = (uint32_t)(esi + 0x50u);
/* 75da0f: call 0x6c4246 */
  esp -= 4; W32(esp, 0x75da14u); SPILL(); f_6c4246(); if (g_unwind) return; RELOAD();
/* 75da14: lea ecx, [edi + 0x5c] */
  ecx = (uint32_t)(edi + 0x5cu);
/* 75da17: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75da18: lea ecx, [esi + 0x5c] */
  ecx = (uint32_t)(esi + 0x5cu);
/* 75da1b: call 0x6c4246 */
  esp -= 4; W32(esp, 0x75da20u); SPILL(); f_6c4246(); if (g_unwind) return; RELOAD();
/* 75da20: lea edx, [edi + 0x68] */
  edx = (uint32_t)(edi + 0x68u);
/* 75da23: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 75da24: lea ecx, [esi + 0x68] */
  ecx = (uint32_t)(esi + 0x68u);
/* 75da27: call 0x6caf0b */
  esp -= 4; W32(esp, 0x75da2cu); SPILL(); f_6caf0b(); if (g_unwind) return; RELOAD();
/* 75da2c: lea eax, [edi + 0x74] */
  eax = (uint32_t)(edi + 0x74u);
/* 75da2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75da30: lea ecx, [esi + 0x74] */
  ecx = (uint32_t)(esi + 0x74u);
/* 75da33: call 0x6caf0b */
  esp -= 4; W32(esp, 0x75da38u); SPILL(); f_6caf0b(); if (g_unwind) return; RELOAD();
/* 75da38: lea ecx, [edi + 0x80] */
  ecx = (uint32_t)(edi + 0x80u);
/* 75da3e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75da3f: lea ecx, [esi + 0x80] */
  ecx = (uint32_t)(esi + 0x80u);
/* 75da45: call 0x6caf0b */
  esp -= 4; W32(esp, 0x75da4au); SPILL(); f_6caf0b(); if (g_unwind) return; RELOAD();
/* 75da4a: lea edx, [edi + 0x8c] */
  edx = (uint32_t)(edi + 0x8cu);
/* 75da50: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 75da51: lea ecx, [esi + 0x8c] */
  ecx = (uint32_t)(esi + 0x8cu);
/* 75da57: call 0x6caf0b */
  esp -= 4; W32(esp, 0x75da5cu); SPILL(); f_6caf0b(); if (g_unwind) return; RELOAD();
/* 75da5c: lea eax, [edi + 0x98] */
  eax = (uint32_t)(edi + 0x98u);
/* 75da62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75da63: lea ecx, [esi + 0x98] */
  ecx = (uint32_t)(esi + 0x98u);
/* 75da69: call 0x6caf0b */
  esp -= 4; W32(esp, 0x75da6eu); SPILL(); f_6caf0b(); if (g_unwind) return; RELOAD();
/* 75da6e: lea ecx, [edi + 0xa4] */
  ecx = (uint32_t)(edi + 0xa4u);
/* 75da74: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75da75: lea ecx, [esi + 0xa4] */
  ecx = (uint32_t)(esi + 0xa4u);
/* 75da7b: call 0x6caf0b */
  esp -= 4; W32(esp, 0x75da80u); SPILL(); f_6caf0b(); if (g_unwind) return; RELOAD();
/* 75da80: mov ebp, edi */
  ebp = edi;
/* 75da82: lea ebx, [esi + 0xb0] */
  ebx = (uint32_t)(esi + 0xb0u);
/* 75da88: sub ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 75da8a: mov dword ptr [esp + 0x14], 7 */
  W32((uint32_t)(esp + 0x14u), 0x7u);
L_75da92: /* 75da92: lea edx, [ebx + ebp] */
  edx = (uint32_t)(ebx + ebp);
/* 75da95: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 75da96: mov ecx, ebx */
  ecx = ebx;
/* 75da98: call 0x6c9322 */
  esp -= 4; W32(esp, 0x75da9du); SPILL(); f_6c9322(); if (g_unwind) return; RELOAD();
/* 75da9d: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 75daa1: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 75daa4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 75daa5: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 75daa9: jne 0x75da92 */
  if (!zf) goto L_75da92;
L_75daab: /* 75daab: add edi, 0x104 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 75dab1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75dab2: lea ecx, [esi + 0x104] */
  ecx = (uint32_t)(esi + 0x104u);
/* 75dab8: call 0x6cc225 */
  esp -= 4; W32(esp, 0x75dabdu); SPILL(); f_6cc225(); if (g_unwind) return; RELOAD();
/* 75dabd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75dabe: mov eax, esi */
  eax = esi;
/* 75dac0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75dac1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 75dac2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75dac3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75db20(void) {
  LOAD_REGS();
L_75db20: /* 75db20: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75db24: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75db26: je 0x75db2d */
  if (zf) goto L_75db2d;
L_75db28: /* 75db28: jmp 0x6c38e6 */
  SPILL(); f_6c38e6(); return;
L_75db2d: /* 75db2d: ret  */
  esp += 4; SPILL(); return;
}

void f_75db40(void) {
  LOAD_REGS();
L_75db40: /* 75db40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75db42: push 0x9c9b36 */
  { uint32_t v = 0x9c9b36u; esp -= 4; W32(esp, v); }
/* 75db47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75db4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75db4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75db55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75db56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75db57: mov esi, ecx */
  esi = ecx;
/* 75db59: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75db5d: mov dword ptr [esi], 0xa05a98 */
  W32((uint32_t)(esi), 0xa05a98u);
/* 75db63: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 75db6b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x75db71u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 75db71: lea ecx, [esi + 0xac] */
  ecx = (uint32_t)(esi + 0xacu);
/* 75db77: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 75db7c: call 0x6c7a7c */
  esp -= 4; W32(esp, 0x75db81u); SPILL(); f_6c7a7c(); if (g_unwind) return; RELOAD();
/* 75db81: mov ecx, esi */
  ecx = esi;
/* 75db83: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 75db8b: call 0x6c1023 */
  esp -= 4; W32(esp, 0x75db90u); SPILL(); f_6c1023(); if (g_unwind) return; RELOAD();
/* 75db90: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75db94: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75db95: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75db9c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75db9f: ret  */
  esp += 4; SPILL(); return;
}

void f_75dbc0(void) {
  LOAD_REGS();
L_75dbc0: /* 75dbc0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75dbc2: push 0x9c9b58 */
  { uint32_t v = 0x9c9b58u; esp -= 4; W32(esp, v); }
/* 75dbc7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75dbcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75dbce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75dbd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75dbd6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75dbd7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75dbd8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 75dbdc: mov esi, ecx */
  esi = ecx;
/* 75dbde: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75dbdf: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 75dbe3: call 0x6c5b4b */
  esp -= 4; W32(esp, 0x75dbe8u); SPILL(); f_6c5b4b(); if (g_unwind) return; RELOAD();
/* 75dbe8: mov dword ptr [esi], 0xa05a98 */
  W32((uint32_t)(esi), 0xa05a98u);
/* 75dbee: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 75dbf1: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 75dbf4: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* 75dbf7: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* 75dbfa: mov edx, dword ptr [edi + 0x58] */
  edx = R32((uint32_t)(edi + 0x58u));
/* 75dbfd: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
/* 75dc00: mov eax, dword ptr [edi + 0x5c] */
  eax = R32((uint32_t)(edi + 0x5cu));
/* 75dc03: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* 75dc06: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 75dc09: mov dword ptr [esi + 0x60], ecx */
  W32((uint32_t)(esi + 0x60u), ecx);
/* 75dc0c: mov edx, dword ptr [edi + 0x64] */
  edx = R32((uint32_t)(edi + 0x64u));
/* 75dc0f: mov dword ptr [esi + 0x64], edx */
  W32((uint32_t)(esi + 0x64u), edx);
/* 75dc12: mov eax, dword ptr [edi + 0x68] */
  eax = R32((uint32_t)(edi + 0x68u));
/* 75dc15: mov dword ptr [esi + 0x68], eax */
  W32((uint32_t)(esi + 0x68u), eax);
/* 75dc18: mov ecx, dword ptr [edi + 0x6c] */
  ecx = R32((uint32_t)(edi + 0x6cu));
/* 75dc1b: mov dword ptr [esi + 0x6c], ecx */
  W32((uint32_t)(esi + 0x6cu), ecx);
/* 75dc1e: mov edx, dword ptr [edi + 0x70] */
  edx = R32((uint32_t)(edi + 0x70u));
/* 75dc21: mov dword ptr [esi + 0x70], edx */
  W32((uint32_t)(esi + 0x70u), edx);
/* 75dc24: mov al, byte ptr [edi + 0x74] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x74u))) & 0xffu);
/* 75dc27: mov edx, dword ptr [esi + 0x7c] */
  edx = R32((uint32_t)(esi + 0x7cu));
/* 75dc2a: mov byte ptr [esi + 0x74], al */
  W8((uint32_t)(esi + 0x74u), (eax & 0xffu));
/* 75dc2d: mov ecx, dword ptr [edi + 0x78] */
  ecx = R32((uint32_t)(edi + 0x78u));
/* 75dc30: mov dword ptr [esi + 0x78], ecx */
  W32((uint32_t)(esi + 0x78u), ecx);
/* 75dc33: xor edx, dword ptr [edi + 0x7c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x7cu)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 75dc36: mov eax, dword ptr [esi + 0x7c] */
  eax = R32((uint32_t)(esi + 0x7cu));
/* 75dc39: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 75dc3c: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75dc3e: mov dword ptr [esi + 0x7c], eax */
  W32((uint32_t)(esi + 0x7cu), eax);
/* 75dc41: mov ecx, eax */
  ecx = eax;
/* 75dc43: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
/* 75dc46: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75dc48: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 75dc4b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75dc4d: mov dword ptr [esi + 0x7c], eax */
  W32((uint32_t)(esi + 0x7cu), eax);
/* 75dc50: mov ecx, dword ptr [edi + 0x7c] */
  ecx = R32((uint32_t)(edi + 0x7cu));
/* 75dc53: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75dc55: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 75dc58: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75dc5a: mov dword ptr [esi + 0x7c], ecx */
  W32((uint32_t)(esi + 0x7cu), ecx);
/* 75dc5d: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
/* 75dc60: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75dc62: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 75dc65: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75dc67: mov dword ptr [esi + 0x7c], eax */
  W32((uint32_t)(esi + 0x7cu), eax);
/* 75dc6a: mov ecx, dword ptr [edi + 0x7c] */
  ecx = R32((uint32_t)(edi + 0x7cu));
/* 75dc6d: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75dc6f: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 75dc72: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75dc74: mov dword ptr [esi + 0x7c], ecx */
  W32((uint32_t)(esi + 0x7cu), ecx);
/* 75dc77: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
/* 75dc7a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75dc7c: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 75dc7f: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75dc81: mov dword ptr [esi + 0x7c], eax */
  W32((uint32_t)(esi + 0x7cu), eax);
/* 75dc84: mov ecx, dword ptr [edi + 0x7c] */
  ecx = R32((uint32_t)(edi + 0x7cu));
/* 75dc87: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75dc89: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 75dc8c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75dc8e: mov dword ptr [esi + 0x7c], ecx */
  W32((uint32_t)(esi + 0x7cu), ecx);
/* 75dc91: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
/* 75dc94: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75dc96: and eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 75dc9b: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75dc9d: mov dword ptr [esi + 0x7c], eax */
  W32((uint32_t)(esi + 0x7cu), eax);
/* 75dca0: mov ecx, dword ptr [edi + 0x7c] */
  ecx = R32((uint32_t)(edi + 0x7cu));
/* 75dca3: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75dca5: and ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 75dcab: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75dcad: mov dword ptr [esi + 0x7c], ecx */
  W32((uint32_t)(esi + 0x7cu), ecx);
/* 75dcb0: mov dl, byte ptr [edi + 0x80] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x80u))) & 0xffu);
/* 75dcb6: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 75dcbe: mov byte ptr [esi + 0x80], dl */
  W8((uint32_t)(esi + 0x80u), (edx & 0xffu));
/* 75dcc4: mov eax, dword ptr [edi + 0x84] */
  eax = R32((uint32_t)(edi + 0x84u));
/* 75dcca: mov dword ptr [esi + 0x84], eax */
  W32((uint32_t)(esi + 0x84u), eax);
/* 75dcd0: mov ecx, dword ptr [edi + 0x88] */
  ecx = R32((uint32_t)(edi + 0x88u));
/* 75dcd6: mov dword ptr [esi + 0x88], ecx */
  W32((uint32_t)(esi + 0x88u), ecx);
/* 75dcdc: mov edx, dword ptr [edi + 0x8c] */
  edx = R32((uint32_t)(edi + 0x8cu));
/* 75dce2: mov dword ptr [esi + 0x8c], edx */
  W32((uint32_t)(esi + 0x8cu), edx);
/* 75dce8: mov eax, dword ptr [edi + 0x90] */
  eax = R32((uint32_t)(edi + 0x90u));
/* 75dcee: mov dword ptr [esi + 0x90], eax */
  W32((uint32_t)(esi + 0x90u), eax);
/* 75dcf4: mov ecx, dword ptr [edi + 0x94] */
  ecx = R32((uint32_t)(edi + 0x94u));
/* 75dcfa: mov dword ptr [esi + 0x94], ecx */
  W32((uint32_t)(esi + 0x94u), ecx);
/* 75dd00: mov edx, dword ptr [edi + 0x98] */
  edx = R32((uint32_t)(edi + 0x98u));
/* 75dd06: mov dword ptr [esi + 0x98], edx */
  W32((uint32_t)(esi + 0x98u), edx);
/* 75dd0c: mov al, byte ptr [edi + 0x9c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x9cu))) & 0xffu);
/* 75dd12: mov byte ptr [esi + 0x9c], al */
  W8((uint32_t)(esi + 0x9cu), (eax & 0xffu));
/* 75dd18: mov cl, byte ptr [edi + 0x9d] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x9du))) & 0xffu);
/* 75dd1e: mov byte ptr [esi + 0x9d], cl */
  W8((uint32_t)(esi + 0x9du), (ecx & 0xffu));
/* 75dd24: mov edx, dword ptr [edi + 0xa0] */
  edx = R32((uint32_t)(edi + 0xa0u));
/* 75dd2a: mov dword ptr [esi + 0xa0], edx */
  W32((uint32_t)(esi + 0xa0u), edx);
/* 75dd30: mov eax, dword ptr [edi + 0xa4] */
  eax = R32((uint32_t)(edi + 0xa4u));
/* 75dd36: mov dword ptr [esi + 0xa4], eax */
  W32((uint32_t)(esi + 0xa4u), eax);
/* 75dd3c: mov ecx, dword ptr [edi + 0xa8] */
  ecx = R32((uint32_t)(edi + 0xa8u));
/* 75dd42: lea edx, [edi + 0xac] */
  edx = (uint32_t)(edi + 0xacu);
/* 75dd48: mov dword ptr [esi + 0xa8], ecx */
  W32((uint32_t)(esi + 0xa8u), ecx);
/* 75dd4e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 75dd4f: lea ecx, [esi + 0xac] */
  ecx = (uint32_t)(esi + 0xacu);
/* 75dd55: call 0x6c7617 */
  esp -= 4; W32(esp, 0x75dd5au); SPILL(); f_6c7617(); if (g_unwind) return; RELOAD();
/* 75dd5a: mov al, byte ptr [edi + 0xb8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xb8u))) & 0xffu);
/* 75dd60: mov byte ptr [esi + 0xb8], al */
  W8((uint32_t)(esi + 0xb8u), (eax & 0xffu));
/* 75dd66: mov cl, byte ptr [edi + 0xb9] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xb9u))) & 0xffu);
/* 75dd6c: mov byte ptr [esi + 0xb9], cl */
  W8((uint32_t)(esi + 0xb9u), (ecx & 0xffu));
/* 75dd72: mov dl, byte ptr [edi + 0xba] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xbau))) & 0xffu);
/* 75dd78: mov byte ptr [esi + 0xba], dl */
  W8((uint32_t)(esi + 0xbau), (edx & 0xffu));
/* 75dd7e: mov eax, dword ptr [edi + 0xbc] */
  eax = R32((uint32_t)(edi + 0xbcu));
/* 75dd84: mov dword ptr [esi + 0xbc], eax */
  W32((uint32_t)(esi + 0xbcu), eax);
/* 75dd8a: mov ecx, dword ptr [edi + 0xc0] */
  ecx = R32((uint32_t)(edi + 0xc0u));
/* 75dd90: mov dword ptr [esi + 0xc0], ecx */
  W32((uint32_t)(esi + 0xc0u), ecx);
/* 75dd96: mov edx, dword ptr [edi + 0xc4] */
  edx = R32((uint32_t)(edi + 0xc4u));
/* 75dd9c: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 75dda0: mov dword ptr [esi + 0xc4], edx */
  W32((uint32_t)(esi + 0xc4u), edx);
/* 75dda6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75dda7: mov eax, esi */
  eax = esi;
/* 75dda9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75ddaa: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75ddb1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75ddb4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75de40(void) {
  LOAD_REGS();
L_75de40: /* 75de40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75de41: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75de42: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 75de46: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75de47: mov esi, ecx */
  esi = ecx;
/* 75de49: call 0x6caa33 */
  esp -= 4; W32(esp, 0x75de4eu); SPILL(); f_6caa33(); if (g_unwind) return; RELOAD();
/* 75de4e: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 75de51: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 75de54: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* 75de57: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* 75de5a: mov edx, dword ptr [edi + 0x58] */
  edx = R32((uint32_t)(edi + 0x58u));
/* 75de5d: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
/* 75de60: mov eax, dword ptr [edi + 0x5c] */
  eax = R32((uint32_t)(edi + 0x5cu));
/* 75de63: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* 75de66: mov ecx, dword ptr [edi + 0x60] */
  ecx = R32((uint32_t)(edi + 0x60u));
/* 75de69: mov dword ptr [esi + 0x60], ecx */
  W32((uint32_t)(esi + 0x60u), ecx);
/* 75de6c: mov edx, dword ptr [edi + 0x64] */
  edx = R32((uint32_t)(edi + 0x64u));
/* 75de6f: mov dword ptr [esi + 0x64], edx */
  W32((uint32_t)(esi + 0x64u), edx);
/* 75de72: mov eax, dword ptr [edi + 0x68] */
  eax = R32((uint32_t)(edi + 0x68u));
/* 75de75: mov dword ptr [esi + 0x68], eax */
  W32((uint32_t)(esi + 0x68u), eax);
/* 75de78: mov ecx, dword ptr [edi + 0x6c] */
  ecx = R32((uint32_t)(edi + 0x6cu));
/* 75de7b: mov dword ptr [esi + 0x6c], ecx */
  W32((uint32_t)(esi + 0x6cu), ecx);
/* 75de7e: mov edx, dword ptr [edi + 0x70] */
  edx = R32((uint32_t)(edi + 0x70u));
/* 75de81: mov dword ptr [esi + 0x70], edx */
  W32((uint32_t)(esi + 0x70u), edx);
/* 75de84: mov al, byte ptr [edi + 0x74] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x74u))) & 0xffu);
/* 75de87: mov edx, dword ptr [esi + 0x7c] */
  edx = R32((uint32_t)(esi + 0x7cu));
/* 75de8a: mov byte ptr [esi + 0x74], al */
  W8((uint32_t)(esi + 0x74u), (eax & 0xffu));
/* 75de8d: mov ecx, dword ptr [edi + 0x78] */
  ecx = R32((uint32_t)(edi + 0x78u));
/* 75de90: mov dword ptr [esi + 0x78], ecx */
  W32((uint32_t)(esi + 0x78u), ecx);
/* 75de93: xor edx, dword ptr [edi + 0x7c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x7cu)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 75de96: mov eax, dword ptr [esi + 0x7c] */
  eax = R32((uint32_t)(esi + 0x7cu));
/* 75de99: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 75de9c: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75de9e: mov dword ptr [esi + 0x7c], eax */
  W32((uint32_t)(esi + 0x7cu), eax);
/* 75dea1: mov ecx, eax */
  ecx = eax;
/* 75dea3: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
/* 75dea6: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75dea8: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 75deab: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75dead: mov dword ptr [esi + 0x7c], eax */
  W32((uint32_t)(esi + 0x7cu), eax);
/* 75deb0: mov ecx, dword ptr [edi + 0x7c] */
  ecx = R32((uint32_t)(edi + 0x7cu));
/* 75deb3: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75deb5: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 75deb8: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75deba: mov dword ptr [esi + 0x7c], ecx */
  W32((uint32_t)(esi + 0x7cu), ecx);
/* 75debd: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
/* 75dec0: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75dec2: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 75dec5: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75dec7: mov dword ptr [esi + 0x7c], eax */
  W32((uint32_t)(esi + 0x7cu), eax);
/* 75deca: mov ecx, dword ptr [edi + 0x7c] */
  ecx = R32((uint32_t)(edi + 0x7cu));
/* 75decd: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75decf: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 75ded2: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75ded4: mov dword ptr [esi + 0x7c], ecx */
  W32((uint32_t)(esi + 0x7cu), ecx);
/* 75ded7: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
/* 75deda: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75dedc: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 75dedf: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75dee1: mov dword ptr [esi + 0x7c], eax */
  W32((uint32_t)(esi + 0x7cu), eax);
/* 75dee4: mov ecx, dword ptr [edi + 0x7c] */
  ecx = R32((uint32_t)(edi + 0x7cu));
/* 75dee7: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75dee9: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 75deec: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75deee: mov dword ptr [esi + 0x7c], ecx */
  W32((uint32_t)(esi + 0x7cu), ecx);
/* 75def1: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
/* 75def4: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75def6: and eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 75defb: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 75defd: mov dword ptr [esi + 0x7c], eax */
  W32((uint32_t)(esi + 0x7cu), eax);
/* 75df00: mov ecx, dword ptr [edi + 0x7c] */
  ecx = R32((uint32_t)(edi + 0x7cu));
/* 75df03: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75df05: and ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 75df0b: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 75df0d: mov dword ptr [esi + 0x7c], ecx */
  W32((uint32_t)(esi + 0x7cu), ecx);
/* 75df10: mov dl, byte ptr [edi + 0x80] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x80u))) & 0xffu);
/* 75df16: mov byte ptr [esi + 0x80], dl */
  W8((uint32_t)(esi + 0x80u), (edx & 0xffu));
/* 75df1c: mov eax, dword ptr [edi + 0x84] */
  eax = R32((uint32_t)(edi + 0x84u));
/* 75df22: mov dword ptr [esi + 0x84], eax */
  W32((uint32_t)(esi + 0x84u), eax);
/* 75df28: mov ecx, dword ptr [edi + 0x88] */
  ecx = R32((uint32_t)(edi + 0x88u));
/* 75df2e: mov dword ptr [esi + 0x88], ecx */
  W32((uint32_t)(esi + 0x88u), ecx);
/* 75df34: mov edx, dword ptr [edi + 0x8c] */
  edx = R32((uint32_t)(edi + 0x8cu));
/* 75df3a: mov dword ptr [esi + 0x8c], edx */
  W32((uint32_t)(esi + 0x8cu), edx);
/* 75df40: mov eax, dword ptr [edi + 0x90] */
  eax = R32((uint32_t)(edi + 0x90u));
/* 75df46: mov dword ptr [esi + 0x90], eax */
  W32((uint32_t)(esi + 0x90u), eax);
/* 75df4c: mov ecx, dword ptr [edi + 0x94] */
  ecx = R32((uint32_t)(edi + 0x94u));
/* 75df52: mov dword ptr [esi + 0x94], ecx */
  W32((uint32_t)(esi + 0x94u), ecx);
/* 75df58: mov edx, dword ptr [edi + 0x98] */
  edx = R32((uint32_t)(edi + 0x98u));
/* 75df5e: mov dword ptr [esi + 0x98], edx */
  W32((uint32_t)(esi + 0x98u), edx);
/* 75df64: mov al, byte ptr [edi + 0x9c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x9cu))) & 0xffu);
/* 75df6a: mov byte ptr [esi + 0x9c], al */
  W8((uint32_t)(esi + 0x9cu), (eax & 0xffu));
/* 75df70: mov cl, byte ptr [edi + 0x9d] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x9du))) & 0xffu);
/* 75df76: mov byte ptr [esi + 0x9d], cl */
  W8((uint32_t)(esi + 0x9du), (ecx & 0xffu));
/* 75df7c: mov edx, dword ptr [edi + 0xa0] */
  edx = R32((uint32_t)(edi + 0xa0u));
/* 75df82: mov dword ptr [esi + 0xa0], edx */
  W32((uint32_t)(esi + 0xa0u), edx);
/* 75df88: mov eax, dword ptr [edi + 0xa4] */
  eax = R32((uint32_t)(edi + 0xa4u));
/* 75df8e: mov dword ptr [esi + 0xa4], eax */
  W32((uint32_t)(esi + 0xa4u), eax);
/* 75df94: mov ecx, dword ptr [edi + 0xa8] */
  ecx = R32((uint32_t)(edi + 0xa8u));
/* 75df9a: lea edx, [edi + 0xac] */
  edx = (uint32_t)(edi + 0xacu);
/* 75dfa0: mov dword ptr [esi + 0xa8], ecx */
  W32((uint32_t)(esi + 0xa8u), ecx);
/* 75dfa6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 75dfa7: lea ecx, [esi + 0xac] */
  ecx = (uint32_t)(esi + 0xacu);
/* 75dfad: call 0x6c24e1 */
  esp -= 4; W32(esp, 0x75dfb2u); SPILL(); f_6c24e1(); if (g_unwind) return; RELOAD();
/* 75dfb2: mov al, byte ptr [edi + 0xb8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xb8u))) & 0xffu);
/* 75dfb8: mov byte ptr [esi + 0xb8], al */
  W8((uint32_t)(esi + 0xb8u), (eax & 0xffu));
/* 75dfbe: mov cl, byte ptr [edi + 0xb9] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xb9u))) & 0xffu);
/* 75dfc4: mov byte ptr [esi + 0xb9], cl */
  W8((uint32_t)(esi + 0xb9u), (ecx & 0xffu));
/* 75dfca: mov dl, byte ptr [edi + 0xba] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0xbau))) & 0xffu);
/* 75dfd0: mov byte ptr [esi + 0xba], dl */
  W8((uint32_t)(esi + 0xbau), (edx & 0xffu));
/* 75dfd6: mov eax, dword ptr [edi + 0xbc] */
  eax = R32((uint32_t)(edi + 0xbcu));
/* 75dfdc: mov dword ptr [esi + 0xbc], eax */
  W32((uint32_t)(esi + 0xbcu), eax);
/* 75dfe2: mov ecx, dword ptr [edi + 0xc0] */
  ecx = R32((uint32_t)(edi + 0xc0u));
/* 75dfe8: mov dword ptr [esi + 0xc0], ecx */
  W32((uint32_t)(esi + 0xc0u), ecx);
/* 75dfee: mov edx, dword ptr [edi + 0xc4] */
  edx = R32((uint32_t)(edi + 0xc4u));
/* 75dff4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75dff5: mov dword ptr [esi + 0xc4], edx */
  W32((uint32_t)(esi + 0xc4u), edx);
/* 75dffb: mov eax, esi */
  eax = esi;
/* 75dffd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75dffe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75e090(void) {
  LOAD_REGS();
L_75e090: /* 75e090: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75e091: mov esi, ecx */
  esi = ecx;
/* 75e093: call 0x6c4192 */
  esp -= 4; W32(esp, 0x75e098u); SPILL(); f_6c4192(); if (g_unwind) return; RELOAD();
/* 75e098: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75e09d: je 0x75e0ae */
  if (zf) goto L_75e0ae;
L_75e09f: /* 75e09f: push 0xc8 */
  { uint32_t v = 0xc8u; esp -= 4; W32(esp, v); }
/* 75e0a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75e0a5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x75e0abu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 75e0ab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75e0ae: /* 75e0ae: mov eax, esi */
  eax = esi;
/* 75e0b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75e0b1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75e0d0(void) {
  LOAD_REGS();
L_75e0d0: /* 75e0d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75e0d1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 75e0d5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75e0d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75e0d9: mov esi, ecx */
  esi = ecx;
/* 75e0db: je 0x75e110 */
  if (zf) goto L_75e110;
L_75e0dd: /* 75e0dd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 75e0e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75e0e1: push 0x6c4192 */
  { uint32_t v = 0x6c4192u; esp -= 4; W32(esp, v); }
/* 75e0e6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 75e0e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75e0ea: push 0xc8 */
  { uint32_t v = 0xc8u; esp -= 4; W32(esp, v); }
/* 75e0ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75e0f0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x75e0f5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 75e0f5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75e0f8: je 0x75e108 */
  if (zf) goto L_75e108;
L_75e0fa: /* 75e0fa: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 75e100: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 75e102: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 75e104: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75e105: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x75e108u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_75e108: /* 75e108: mov eax, edi */
  eax = edi;
/* 75e10a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75e10b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75e10c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75e10d: ret 4 */
  esp += 8; SPILL(); return;
L_75e110: /* 75e110: mov ecx, esi */
  ecx = esi;
/* 75e112: call 0x6c4192 */
  esp -= 4; W32(esp, 0x75e117u); SPILL(); f_6c4192(); if (g_unwind) return; RELOAD();
/* 75e117: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75e11a: je 0x75e12b */
  if (zf) goto L_75e12b;
L_75e11c: /* 75e11c: push 0xc8 */
  { uint32_t v = 0xc8u; esp -= 4; W32(esp, v); }
/* 75e121: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75e122: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x75e128u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 75e128: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75e12b: /* 75e12b: mov eax, esi */
  eax = esi;
/* 75e12d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75e12e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75e12f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75e160(void) {
  LOAD_REGS();
L_75e160: /* 75e160: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75e162: push 0x9c9b78 */
  { uint32_t v = 0x9c9b78u; esp -= 4; W32(esp, v); }
/* 75e167: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75e16d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75e16e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75e175: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75e176: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75e177: mov esi, ecx */
  esi = ecx;
/* 75e179: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75e17d: mov dword ptr [esi], 0xa05b88 */
  W32((uint32_t)(esi), 0xa05b88u);
/* 75e183: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 75e18b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x75e191u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 75e191: mov ecx, esi */
  ecx = esi;
/* 75e193: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 75e19b: call 0x6c4192 */
  esp -= 4; W32(esp, 0x75e1a0u); SPILL(); f_6c4192(); if (g_unwind) return; RELOAD();
/* 75e1a0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75e1a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75e1a5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75e1ac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75e1af: ret  */
  esp += 4; SPILL(); return;
}

void f_75e1d0(void) {
  LOAD_REGS();
L_75e1d0: /* 75e1d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75e1d1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75e1d2: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 75e1d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75e1d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75e1d8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75e1d9: mov ebx, ecx */
  ebx = ecx;
/* 75e1db: call 0x6c3df0 */
  esp -= 4; W32(esp, 0x75e1e0u); SPILL(); f_6c3df0(); if (g_unwind) return; RELOAD();
/* 75e1e0: mov dword ptr [ebx], 0xa05b88 */
  W32((uint32_t)(ebx), 0xa05b88u);
/* 75e1e6: lea esi, [ebp + 0xc8] */
  esi = (uint32_t)(ebp + 0xc8u);
/* 75e1ec: lea edi, [ebx + 0xc8] */
  edi = (uint32_t)(ebx + 0xc8u);
/* 75e1f2: mov ecx, 6 */
  ecx = 0x6u;
/* 75e1f7: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 75e1f9: mov eax, dword ptr [ebp + 0xe0] */
  eax = R32((uint32_t)(ebp + 0xe0u));
/* 75e1ff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75e200: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75e201: mov dword ptr [ebx + 0xe0], eax */
  W32((uint32_t)(ebx + 0xe0u), eax);
/* 75e207: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 75e208: mov eax, ebx */
  eax = ebx;
/* 75e20a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75e20b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75e220(void) {
  LOAD_REGS();
L_75e220: /* 75e220: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75e221: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75e222: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 75e226: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75e227: mov esi, ecx */
  esi = ecx;
/* 75e229: call 0x6cc9be */
  esp -= 4; W32(esp, 0x75e22eu); SPILL(); f_6cc9be(); if (g_unwind) return; RELOAD();
/* 75e22e: mov eax, dword ptr [edi + 0xc8] */
  eax = R32((uint32_t)(edi + 0xc8u));
/* 75e234: mov dword ptr [esi + 0xc8], eax */
  W32((uint32_t)(esi + 0xc8u), eax);
/* 75e23a: mov ecx, dword ptr [edi + 0xcc] */
  ecx = R32((uint32_t)(edi + 0xccu));
/* 75e240: mov dword ptr [esi + 0xcc], ecx */
  W32((uint32_t)(esi + 0xccu), ecx);
/* 75e246: mov edx, dword ptr [edi + 0xd0] */
  edx = R32((uint32_t)(edi + 0xd0u));
/* 75e24c: mov dword ptr [esi + 0xd0], edx */
  W32((uint32_t)(esi + 0xd0u), edx);
/* 75e252: mov eax, dword ptr [edi + 0xd4] */
  eax = R32((uint32_t)(edi + 0xd4u));
/* 75e258: mov dword ptr [esi + 0xd4], eax */
  W32((uint32_t)(esi + 0xd4u), eax);
/* 75e25e: mov ecx, dword ptr [edi + 0xd8] */
  ecx = R32((uint32_t)(edi + 0xd8u));
/* 75e264: mov dword ptr [esi + 0xd8], ecx */
  W32((uint32_t)(esi + 0xd8u), ecx);
/* 75e26a: mov edx, dword ptr [edi + 0xdc] */
  edx = R32((uint32_t)(edi + 0xdcu));
/* 75e270: mov dword ptr [esi + 0xdc], edx */
  W32((uint32_t)(esi + 0xdcu), edx);
/* 75e276: mov eax, dword ptr [edi + 0xe0] */
  eax = R32((uint32_t)(edi + 0xe0u));
/* 75e27c: mov dword ptr [esi + 0xe0], eax */
  W32((uint32_t)(esi + 0xe0u), eax);
/* 75e282: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75e283: mov eax, esi */
  eax = esi;
/* 75e285: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75e286: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75e2b0(void) {
  LOAD_REGS();
L_75e2b0: /* 75e2b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75e2b1: mov esi, ecx */
  esi = ecx;
/* 75e2b3: call 0x6c7545 */
  esp -= 4; W32(esp, 0x75e2b8u); SPILL(); f_6c7545(); if (g_unwind) return; RELOAD();
/* 75e2b8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75e2bd: je 0x75e2ce */
  if (zf) goto L_75e2ce;
L_75e2bf: /* 75e2bf: push 0xe4 */
  { uint32_t v = 0xe4u; esp -= 4; W32(esp, v); }
/* 75e2c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75e2c5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x75e2cbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 75e2cb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75e2ce: /* 75e2ce: mov eax, esi */
  eax = esi;
/* 75e2d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75e2d1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75e2f0(void) {
  LOAD_REGS();
L_75e2f0: /* 75e2f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75e2f1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 75e2f5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75e2f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75e2f9: mov esi, ecx */
  esi = ecx;
/* 75e2fb: je 0x75e330 */
  if (zf) goto L_75e330;
L_75e2fd: /* 75e2fd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 75e300: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75e301: push 0x6c7545 */
  { uint32_t v = 0x6c7545u; esp -= 4; W32(esp, v); }
/* 75e306: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 75e309: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75e30a: push 0xe4 */
  { uint32_t v = 0xe4u; esp -= 4; W32(esp, v); }
/* 75e30f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75e310: call 0x99ca3d */
  esp -= 4; W32(esp, 0x75e315u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 75e315: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75e318: je 0x75e328 */
  if (zf) goto L_75e328;
L_75e31a: /* 75e31a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 75e320: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 75e322: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 75e324: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75e325: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x75e328u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_75e328: /* 75e328: mov eax, edi */
  eax = edi;
/* 75e32a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75e32b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75e32c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75e32d: ret 4 */
  esp += 8; SPILL(); return;
L_75e330: /* 75e330: mov ecx, esi */
  ecx = esi;
/* 75e332: call 0x6c7545 */
  esp -= 4; W32(esp, 0x75e337u); SPILL(); f_6c7545(); if (g_unwind) return; RELOAD();
/* 75e337: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75e33a: je 0x75e34b */
  if (zf) goto L_75e34b;
L_75e33c: /* 75e33c: push 0xe4 */
  { uint32_t v = 0xe4u; esp -= 4; W32(esp, v); }
/* 75e341: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75e342: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x75e348u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 75e348: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75e34b: /* 75e34b: mov eax, esi */
  eax = esi;
/* 75e34d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75e34e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75e34f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75e380(void) {
  LOAD_REGS();
L_75e380: /* 75e380: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75e382: push 0x9c9bba */
  { uint32_t v = 0x9c9bbau; esp -= 4; W32(esp, v); }
/* 75e387: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75e38d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75e38e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75e395: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75e396: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75e397: mov esi, ecx */
  esi = ecx;
/* 75e399: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75e39d: mov dword ptr [esi], 0xa05c78 */
  W32((uint32_t)(esi), 0xa05c78u);
/* 75e3a3: mov dword ptr [esp + 0x10], 3 */
  W32((uint32_t)(esp + 0x10u), 0x3u);
/* 75e3ab: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x75e3b1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 75e3b1: lea ecx, [esi + 0x40] */
  ecx = (uint32_t)(esi + 0x40u);
/* 75e3b4: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 75e3b9: call 0x6cb56e */
  esp -= 4; W32(esp, 0x75e3beu); SPILL(); f_6cb56e(); if (g_unwind) return; RELOAD();
/* 75e3be: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 75e3c1: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 75e3c6: call 0x6c9241 */
  esp -= 4; W32(esp, 0x75e3cbu); SPILL(); f_6c9241(); if (g_unwind) return; RELOAD();
/* 75e3cb: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 75e3ce: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 75e3d3: call 0x6c6acd */
  esp -= 4; W32(esp, 0x75e3d8u); SPILL(); f_6c6acd(); if (g_unwind) return; RELOAD();
/* 75e3d8: mov ecx, esi */
  ecx = esi;
/* 75e3da: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 75e3e2: call dword ptr [0xcfa254] */
  esp -= 4; W32(esp, 0x75e3e8u); SPILL(); f_4e2e55(); if (g_unwind) return; /* Core!??1UObject@@UAE@XZ */ RELOAD();
/* 75e3e8: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75e3ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75e3ed: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75e3f4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75e3f7: ret  */
  esp += 4; SPILL(); return;
}

void f_75e420(void) {
  LOAD_REGS();
L_75e420: /* 75e420: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75e422: push 0x9c9bff */
  { uint32_t v = 0x9c9bffu; esp -= 4; W32(esp, v); }
/* 75e427: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75e42d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75e42e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75e435: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75e436: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75e437: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75e438: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 75e43c: mov esi, ecx */
  esi = ecx;
/* 75e43e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75e43f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 75e443: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x75e449u); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 75e449: lea eax, [edi + 0x28] */
  eax = (uint32_t)(edi + 0x28u);
/* 75e44c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75e44d: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 75e450: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 75e458: mov dword ptr [esi], 0xa05c78 */
  W32((uint32_t)(esi), 0xa05c78u);
/* 75e45e: call 0x6c5b0a */
  esp -= 4; W32(esp, 0x75e463u); SPILL(); f_6c5b0a(); if (g_unwind) return; RELOAD();
/* 75e463: lea ecx, [edi + 0x34] */
  ecx = (uint32_t)(edi + 0x34u);
/* 75e466: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75e467: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 75e46a: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 75e46f: call 0x6c56e6 */
  esp -= 4; W32(esp, 0x75e474u); SPILL(); f_6c56e6(); if (g_unwind) return; RELOAD();
/* 75e474: lea edx, [edi + 0x40] */
  edx = (uint32_t)(edi + 0x40u);
/* 75e477: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 75e478: lea ecx, [esi + 0x40] */
  ecx = (uint32_t)(esi + 0x40u);
/* 75e47b: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* 75e480: call 0x6c83c3 */
  esp -= 4; W32(esp, 0x75e485u); SPILL(); f_6c83c3(); if (g_unwind) return; RELOAD();
/* 75e485: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 75e488: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 75e48b: mov ecx, dword ptr [edi + 0x58] */
  ecx = R32((uint32_t)(edi + 0x58u));
/* 75e48e: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 75e491: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 75e495: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75e496: mov eax, esi */
  eax = esi;
/* 75e498: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75e499: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75e4a0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75e4a3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75e4e0(void) {
  LOAD_REGS();
L_75e4e0: /* 75e4e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75e4e1: mov esi, ecx */
  esi = ecx;
/* 75e4e3: call 0x6c858f */
  esp -= 4; W32(esp, 0x75e4e8u); SPILL(); f_6c858f(); if (g_unwind) return; RELOAD();
/* 75e4e8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75e4ed: je 0x75e4fb */
  if (zf) goto L_75e4fb;
L_75e4ef: /* 75e4ef: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 75e4f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75e4f2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x75e4f8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 75e4f8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75e4fb: /* 75e4fb: mov eax, esi */
  eax = esi;
/* 75e4fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75e4fe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75e520(void) {
  LOAD_REGS();
L_75e520: /* 75e520: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75e521: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 75e525: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75e528: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75e529: mov esi, ecx */
  esi = ecx;
/* 75e52b: je 0x75e55d */
  if (zf) goto L_75e55d;
L_75e52d: /* 75e52d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 75e530: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75e531: push 0x6c858f */
  { uint32_t v = 0x6c858fu; esp -= 4; W32(esp, v); }
/* 75e536: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 75e539: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75e53a: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 75e53c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75e53d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x75e542u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 75e542: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75e545: je 0x75e555 */
  if (zf) goto L_75e555;
L_75e547: /* 75e547: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 75e54d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 75e54f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 75e551: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75e552: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x75e555u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_75e555: /* 75e555: mov eax, edi */
  eax = edi;
/* 75e557: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75e558: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75e559: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75e55a: ret 4 */
  esp += 8; SPILL(); return;
L_75e55d: /* 75e55d: mov ecx, esi */
  ecx = esi;
/* 75e55f: call 0x6c858f */
  esp -= 4; W32(esp, 0x75e564u); SPILL(); f_6c858f(); if (g_unwind) return; RELOAD();
/* 75e564: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75e567: je 0x75e575 */
  if (zf) goto L_75e575;
L_75e569: /* 75e569: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 75e56b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75e56c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x75e572u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 75e572: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75e575: /* 75e575: mov eax, esi */
  eax = esi;
/* 75e577: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75e578: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75e579: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75e5a0(void) {
  LOAD_REGS();
L_75e5a0: /* 75e5a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75e5a2: push 0x9c9c3a */
  { uint32_t v = 0x9c9c3au; esp -= 4; W32(esp, v); }
/* 75e5a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75e5ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75e5ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75e5b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75e5b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75e5b7: mov esi, ecx */
  esi = ecx;
/* 75e5b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75e5bd: mov dword ptr [esi], 0xa05cf8 */
  W32((uint32_t)(esi), 0xa05cf8u);
/* 75e5c3: lea ecx, [esi + 0x8c] */
  ecx = (uint32_t)(esi + 0x8cu);
/* 75e5c9: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 75e5d1: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x75e5d7u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 75e5d7: lea ecx, [esi + 0x98] */
  ecx = (uint32_t)(esi + 0x98u);
/* 75e5dd: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 75e5e2: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x75e5e8u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 75e5e8: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75e5ec: mov eax, esi */
  eax = esi;
/* 75e5ee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75e5ef: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75e5f6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75e5f9: ret  */
  esp += 4; SPILL(); return;
}

void f_75e620(void) {
  LOAD_REGS();
L_75e620: /* 75e620: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75e621: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75e622: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75e623: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 75e627: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75e628: mov edi, dword ptr [0xcfa1f0] */
  edi = R32((uint32_t)(0xcfa1f0u));
/* 75e62e: lea eax, [esi + 0x28] */
  eax = (uint32_t)(esi + 0x28u);
/* 75e631: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75e632: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 75e635: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75e636: lea edx, [esi + 0x1c] */
  edx = (uint32_t)(esi + 0x1cu);
/* 75e639: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 75e63a: lea eax, [esi + 0x18] */
  eax = (uint32_t)(esi + 0x18u);
/* 75e63d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75e63e: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* 75e641: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75e642: lea edx, [esi + 0x10] */
  edx = (uint32_t)(esi + 0x10u);
/* 75e645: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 75e646: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 75e64a: lea eax, [esi + 0xc] */
  eax = (uint32_t)(esi + 0xcu);
/* 75e64d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75e64e: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 75e651: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75e652: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 75e653: lea ebx, [esi + 0x68] */
  ebx = (uint32_t)(esi + 0x68u);
/* 75e656: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x75e658u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75e658: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75e65b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75e65c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x75e65eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75e65e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75e661: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75e662: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x75e664u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75e664: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75e667: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75e668: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x75e66au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75e66a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75e66d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75e66e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x75e670u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75e670: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75e673: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75e674: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x75e676u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75e676: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75e679: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75e67a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x75e67cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75e67c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75e67f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75e680: call 0x6c67da */
  esp -= 4; W32(esp, 0x75e685u); SPILL(); f_6c67da(); if (g_unwind) return; RELOAD();
/* 75e685: mov edi, dword ptr [0xcfa1b4] */
  edi = R32((uint32_t)(0xcfa1b4u));
/* 75e68b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75e68e: lea ecx, [ebx + 8] */
  ecx = (uint32_t)(ebx + 0x8u);
/* 75e691: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75e692: lea edx, [ebx + 4] */
  edx = (uint32_t)(ebx + 0x4u);
/* 75e695: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 75e696: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75e697: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75e698: lea ebp, [esi + 0x74] */
  ebp = (uint32_t)(esi + 0x74u);
/* 75e69b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x75e69du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75e69d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75e6a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75e6a1: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x75e6a3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75e6a3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75e6a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75e6a7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x75e6a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75e6a9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75e6ac: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 75e6af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75e6b0: lea edx, [ebp + 4] */
  edx = (uint32_t)(ebp + 0x4u);
/* 75e6b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 75e6b4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75e6b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75e6b6: lea ebx, [esi + 0x80] */
  ebx = (uint32_t)(esi + 0x80u);
/* 75e6bc: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x75e6beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75e6be: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75e6c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75e6c2: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x75e6c4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75e6c4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75e6c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75e6c8: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x75e6cau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75e6ca: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75e6cd: lea ecx, [ebx + 8] */
  ecx = (uint32_t)(ebx + 0x8u);
/* 75e6d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75e6d1: lea edx, [ebx + 4] */
  edx = (uint32_t)(ebx + 0x4u);
/* 75e6d4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 75e6d5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75e6d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75e6d7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x75e6d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75e6d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75e6dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75e6dd: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x75e6dfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75e6df: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75e6e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75e6e3: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x75e6e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75e6e5: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 75e6e9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75e6ec: mov ecx, edi */
  ecx = edi;
/* 75e6ee: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x75e6f4u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 75e6f4: mov ebx, dword ptr [0xcfa280] */
  ebx = R32((uint32_t)(0xcfa280u));
/* 75e6fa: xor ebp, ebp */
  ebp = 0;
/* 75e6fc: cmp eax, 0x6b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6bu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75e6ff: jl 0x75e72d */
  if ((sf != of)) goto L_75e72d;
L_75e701: /* 75e701: lea eax, [esi + 0x8c] */
  eax = (uint32_t)(esi + 0x8cu);
/* 75e707: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75e708: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75e709: call 0x6c1b2c */
  esp -= 4; W32(esp, 0x75e70eu); SPILL(); f_6c1b2c(); if (g_unwind) return; RELOAD();
/* 75e70e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75e711: mov ecx, edi */
  ecx = edi;
/* 75e713: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x75e719u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 75e719: cmp eax, 0x6c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75e71c: jge 0x75e72d */
  if ((sf == of)) goto L_75e72d;
L_75e71e: /* 75e71e: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 75e722: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75e723: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75e724: mov dword ptr [esp + 0x1c], ebp */
  W32((uint32_t)(esp + 0x1cu), ebp);
/* 75e728: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x75e72au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75e72a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75e72d: /* 75e72d: mov ecx, edi */
  ecx = edi;
/* 75e72f: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x75e735u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 75e735: cmp eax, 0x6e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6eu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75e738: mov ecx, edi */
  ecx = edi;
/* 75e73a: jl 0x75e756 */
  if ((sf != of)) goto L_75e756;
L_75e73c: /* 75e73c: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 75e73e: lea edx, [esi + 0x24] */
  edx = (uint32_t)(esi + 0x24u);
/* 75e741: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 75e742: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 75e745: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75e746: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x75e749u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75e749: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75e74a: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x75e74cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75e74c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75e74f: mov eax, edi */
  eax = edi;
/* 75e751: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75e752: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75e753: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 75e754: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75e755: ret  */
  esp += 4; SPILL(); return;
L_75e756: /* 75e756: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x75e75cu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 75e75c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75e75e: je 0x75e766 */
  if (zf) goto L_75e766;
L_75e760: /* 75e760: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 75e763: mov dword ptr [esi + 0x24], ebp */
  W32((uint32_t)(esi + 0x24u), ebp);
L_75e766: /* 75e766: mov eax, edi */
  eax = edi;
/* 75e768: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75e769: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75e76a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 75e76b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75e76c: ret  */
  esp += 4; SPILL(); return;
}

void f_75e7d0(void) {
  LOAD_REGS();
L_75e7d0: /* 75e7d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75e7d2: push 0x9c9c6a */
  { uint32_t v = 0x9c9c6au; esp -= 4; W32(esp, v); }
/* 75e7d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75e7dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75e7de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75e7e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75e7e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75e7e7: mov esi, ecx */
  esi = ecx;
/* 75e7e9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75e7ed: lea ecx, [esi + 0x98] */
  ecx = (uint32_t)(esi + 0x98u);
/* 75e7f3: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 75e7fb: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x75e800u); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 75e800: lea ecx, [esi + 0x8c] */
  ecx = (uint32_t)(esi + 0x8cu);
/* 75e806: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 75e80b: call 0x6c27f2 */
  esp -= 4; W32(esp, 0x75e810u); SPILL(); f_6c27f2(); if (g_unwind) return; RELOAD();
/* 75e810: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 75e813: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 75e81b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x75e821u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 75e821: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75e825: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75e826: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75e82d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75e830: ret  */
  esp += 4; SPILL(); return;
}

void f_75e860(void) {
  LOAD_REGS();
L_75e860: /* 75e860: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75e862: push 0x9c9c9a */
  { uint32_t v = 0x9c9c9au; esp -= 4; W32(esp, v); }
/* 75e867: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75e86d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75e86e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75e875: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75e876: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75e877: mov ebx, ecx */
  ebx = ecx;
/* 75e879: mov dword ptr [ebx], 0xa05cf8 */
  W32((uint32_t)(ebx), 0xa05cf8u);
/* 75e87f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75e880: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 75e884: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 75e887: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 75e88a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 75e88d: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
/* 75e890: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 75e893: mov dword ptr [ebx + 0xc], edx */
  W32((uint32_t)(ebx + 0xcu), edx);
/* 75e896: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 75e899: mov dword ptr [ebx + 0x10], eax */
  W32((uint32_t)(ebx + 0x10u), eax);
/* 75e89c: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 75e89f: mov dword ptr [ebx + 0x14], ecx */
  W32((uint32_t)(ebx + 0x14u), ecx);
/* 75e8a2: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 75e8a5: mov dword ptr [ebx + 0x18], edx */
  W32((uint32_t)(ebx + 0x18u), edx);
/* 75e8a8: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 75e8ab: mov dword ptr [ebx + 0x1c], eax */
  W32((uint32_t)(ebx + 0x1cu), eax);
/* 75e8ae: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 75e8b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75e8b2: mov dword ptr [ebx + 0x20], ecx */
  W32((uint32_t)(ebx + 0x20u), ecx);
/* 75e8b5: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 75e8b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75e8b9: lea esi, [ebp + 0x28] */
  esi = (uint32_t)(ebp + 0x28u);
/* 75e8bc: lea edi, [ebx + 0x28] */
  edi = (uint32_t)(ebx + 0x28u);
/* 75e8bf: mov ecx, 0x10 */
  ecx = 0x10u;
/* 75e8c4: mov dword ptr [ebx + 0x24], edx */
  W32((uint32_t)(ebx + 0x24u), edx);
/* 75e8c7: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 75e8cb: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 75e8cd: lea eax, [ebp + 0x68] */
  eax = (uint32_t)(ebp + 0x68u);
/* 75e8d0: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 75e8d2: lea ecx, [ebx + 0x68] */
  ecx = (uint32_t)(ebx + 0x68u);
/* 75e8d5: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 75e8d7: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 75e8da: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 75e8dd: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 75e8e0: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 75e8e3: lea ecx, [ebp + 0x74] */
  ecx = (uint32_t)(ebp + 0x74u);
/* 75e8e6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 75e8e8: lea edx, [ebx + 0x74] */
  edx = (uint32_t)(ebx + 0x74u);
/* 75e8eb: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 75e8ed: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 75e8f0: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 75e8f3: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 75e8f6: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 75e8f9: lea edx, [ebp + 0x80] */
  edx = (uint32_t)(ebp + 0x80u);
/* 75e8ff: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 75e901: lea eax, [ebx + 0x80] */
  eax = (uint32_t)(ebx + 0x80u);
/* 75e907: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 75e909: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 75e90c: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 75e90f: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 75e912: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 75e915: lea eax, [ebp + 0x8c] */
  eax = (uint32_t)(ebp + 0x8cu);
/* 75e91b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75e91c: lea ecx, [ebx + 0x8c] */
  ecx = (uint32_t)(ebx + 0x8cu);
/* 75e922: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 75e92a: call 0x6c64dd */
  esp -= 4; W32(esp, 0x75e92fu); SPILL(); f_6c64dd(); if (g_unwind) return; RELOAD();
/* 75e92f: add ebp, 0x98 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 75e935: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75e936: lea ecx, [ebx + 0x98] */
  ecx = (uint32_t)(ebx + 0x98u);
/* 75e93c: mov byte ptr [esp + 0x20], 1 */
  W8((uint32_t)(esp + 0x20u), 0x1u);
/* 75e941: call 0x6cab5f */
  esp -= 4; W32(esp, 0x75e946u); SPILL(); f_6cab5f(); if (g_unwind) return; RELOAD();
/* 75e946: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 75e94a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75e94b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75e94c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 75e94d: mov eax, ebx */
  eax = ebx;
/* 75e94f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75e950: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75e957: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75e95a: ret 4 */
  esp += 8; SPILL(); return;
}
