#include "recomp.h"
#include "rec_mod.h"

void f_75e9a0(void) {
  LOAD_REGS();
L_75e9a0: /* 75e9a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75e9a1: mov ebx, ecx */
  ebx = ecx;
/* 75e9a3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75e9a4: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 75e9a8: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 75e9ab: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 75e9ae: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 75e9b1: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
/* 75e9b4: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 75e9b7: mov dword ptr [ebx + 0xc], edx */
  W32((uint32_t)(ebx + 0xcu), edx);
/* 75e9ba: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 75e9bd: mov dword ptr [ebx + 0x10], eax */
  W32((uint32_t)(ebx + 0x10u), eax);
/* 75e9c0: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 75e9c3: mov dword ptr [ebx + 0x14], ecx */
  W32((uint32_t)(ebx + 0x14u), ecx);
/* 75e9c6: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 75e9c9: mov dword ptr [ebx + 0x18], edx */
  W32((uint32_t)(ebx + 0x18u), edx);
/* 75e9cc: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 75e9cf: mov dword ptr [ebx + 0x1c], eax */
  W32((uint32_t)(ebx + 0x1cu), eax);
/* 75e9d2: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 75e9d5: mov dword ptr [ebx + 0x20], ecx */
  W32((uint32_t)(ebx + 0x20u), ecx);
/* 75e9d8: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 75e9db: mov dword ptr [ebx + 0x24], edx */
  W32((uint32_t)(ebx + 0x24u), edx);
/* 75e9de: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75e9df: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75e9e0: lea esi, [ebp + 0x28] */
  esi = (uint32_t)(ebp + 0x28u);
/* 75e9e3: lea edi, [ebx + 0x28] */
  edi = (uint32_t)(ebx + 0x28u);
/* 75e9e6: mov ecx, 0x10 */
  ecx = 0x10u;
/* 75e9eb: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 75e9ed: lea eax, [ebp + 0x68] */
  eax = (uint32_t)(ebp + 0x68u);
/* 75e9f0: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 75e9f2: lea ecx, [ebx + 0x68] */
  ecx = (uint32_t)(ebx + 0x68u);
/* 75e9f5: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 75e9f7: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 75e9fa: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 75e9fd: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 75ea00: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 75ea03: lea ecx, [ebp + 0x74] */
  ecx = (uint32_t)(ebp + 0x74u);
/* 75ea06: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 75ea08: lea edx, [ebx + 0x74] */
  edx = (uint32_t)(ebx + 0x74u);
/* 75ea0b: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 75ea0d: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 75ea10: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 75ea13: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 75ea16: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 75ea19: lea edx, [ebp + 0x80] */
  edx = (uint32_t)(ebp + 0x80u);
/* 75ea1f: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 75ea21: lea eax, [ebx + 0x80] */
  eax = (uint32_t)(ebx + 0x80u);
/* 75ea27: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 75ea29: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 75ea2c: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 75ea2f: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 75ea32: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 75ea35: lea eax, [ebp + 0x8c] */
  eax = (uint32_t)(ebp + 0x8cu);
/* 75ea3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75ea3c: lea ecx, [ebx + 0x8c] */
  ecx = (uint32_t)(ebx + 0x8cu);
/* 75ea42: call 0x6c4020 */
  esp -= 4; W32(esp, 0x75ea47u); SPILL(); f_6c4020(); if (g_unwind) return; RELOAD();
/* 75ea47: add ebp, 0x98 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 75ea4d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75ea4e: lea ecx, [ebx + 0x98] */
  ecx = (uint32_t)(ebx + 0x98u);
/* 75ea54: call 0x6c49d0 */
  esp -= 4; W32(esp, 0x75ea59u); SPILL(); f_6c49d0(); if (g_unwind) return; RELOAD();
/* 75ea59: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75ea5a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75ea5b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 75ea5c: mov eax, ebx */
  eax = ebx;
/* 75ea5e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75ea5f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75eab0(void) {
  LOAD_REGS();
L_75eab0: /* 75eab0: jmp 0x6c91d8 */
  SPILL(); f_6c91d8(); return;
}

void f_75ead0(void) {
  LOAD_REGS();
L_75ead0: /* 75ead0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75ead1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75ead2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 75ead6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75ead7: mov esi, ecx */
  esi = ecx;
/* 75ead9: call 0x6c4d90 */
  esp -= 4; W32(esp, 0x75eadeu); SPILL(); f_6c4d90(); if (g_unwind) return; RELOAD();
/* 75eade: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 75eae1: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 75eae4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75eae5: mov eax, esi */
  eax = esi;
/* 75eae7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75eae8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75eb00(void) {
  LOAD_REGS();
L_75eb00: /* 75eb00: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75eb02: push 0x9c9cce */
  { uint32_t v = 0x9c9cceu; esp -= 4; W32(esp, v); }
/* 75eb07: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75eb0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75eb0e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75eb15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75eb16: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75eb17: mov esi, ecx */
  esi = ecx;
/* 75eb19: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75eb1d: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x75eb23u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 75eb23: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 75eb26: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 75eb2e: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x75eb34u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 75eb34: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 75eb37: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 75eb3c: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x75eb42u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 75eb42: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 75eb45: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 75eb4a: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x75eb50u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 75eb50: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75eb54: mov eax, esi */
  eax = esi;
/* 75eb56: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75eb57: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75eb5e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75eb61: ret  */
  esp += 4; SPILL(); return;
}

void f_75eb90(void) {
  LOAD_REGS();
L_75eb90: /* 75eb90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75eb91: mov esi, ecx */
  esi = ecx;
/* 75eb93: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 75eb95: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 75eb98: call 0x6c82fb */
  esp -= 4; W32(esp, 0x75eb9du); SPILL(); f_6c82fb(); if (g_unwind) return; RELOAD();
/* 75eb9d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 75eb9f: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 75eba2: call 0x6c1e01 */
  esp -= 4; W32(esp, 0x75eba7u); SPILL(); f_6c1e01(); if (g_unwind) return; RELOAD();
/* 75eba7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 75eba9: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 75ebac: call 0x6c2cd9 */
  esp -= 4; W32(esp, 0x75ebb1u); SPILL(); f_6c2cd9(); if (g_unwind) return; RELOAD();
/* 75ebb1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 75ebb3: mov ecx, esi */
  ecx = esi;
/* 75ebb5: call 0x6c63ca */
  esp -= 4; W32(esp, 0x75ebbau); SPILL(); f_6c63ca(); if (g_unwind) return; RELOAD();
/* 75ebba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75ebbb: ret  */
  esp += 4; SPILL(); return;
}

void f_75ebd0(void) {
  LOAD_REGS();
L_75ebd0: /* 75ebd0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75ebd2: push 0x9c9d0e */
  { uint32_t v = 0x9c9d0eu; esp -= 4; W32(esp, v); }
/* 75ebd7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75ebdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75ebde: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75ebe5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75ebe6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75ebe7: mov esi, ecx */
  esi = ecx;
/* 75ebe9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75ebed: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 75ebf0: mov dword ptr [esp + 0x10], 2 */
  W32((uint32_t)(esp + 0x10u), 0x2u);
/* 75ebf8: call 0x6cb08c */
  esp -= 4; W32(esp, 0x75ebfdu); SPILL(); f_6cb08c(); if (g_unwind) return; RELOAD();
/* 75ebfd: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 75ec00: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 75ec05: call 0x6cab0a */
  esp -= 4; W32(esp, 0x75ec0au); SPILL(); f_6cab0a(); if (g_unwind) return; RELOAD();
/* 75ec0a: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 75ec0d: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 75ec12: call 0x6c95ca */
  esp -= 4; W32(esp, 0x75ec17u); SPILL(); f_6c95ca(); if (g_unwind) return; RELOAD();
/* 75ec17: mov ecx, esi */
  ecx = esi;
/* 75ec19: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 75ec21: call 0x6ca105 */
  esp -= 4; W32(esp, 0x75ec26u); SPILL(); f_6ca105(); if (g_unwind) return; RELOAD();
/* 75ec26: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75ec2a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75ec2b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75ec32: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75ec35: ret  */
  esp += 4; SPILL(); return;
}

void f_75ec60(void) {
  LOAD_REGS();
L_75ec60: /* 75ec60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75ec62: push 0x9c9d4e */
  { uint32_t v = 0x9c9d4eu; esp -= 4; W32(esp, v); }
/* 75ec67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75ec6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75ec6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75ec75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75ec76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75ec77: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75ec78: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 75ec7c: mov esi, ecx */
  esi = ecx;
/* 75ec7e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75ec7f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 75ec83: call 0x6c7bd5 */
  esp -= 4; W32(esp, 0x75ec88u); SPILL(); f_6c7bd5(); if (g_unwind) return; RELOAD();
/* 75ec88: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 75ec8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75ec8c: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 75ec8f: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 75ec97: call 0x6c9511 */
  esp -= 4; W32(esp, 0x75ec9cu); SPILL(); f_6c9511(); if (g_unwind) return; RELOAD();
/* 75ec9c: lea ecx, [edi + 0x18] */
  ecx = (uint32_t)(edi + 0x18u);
/* 75ec9f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75eca0: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 75eca3: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 75eca8: call 0x6c964c */
  esp -= 4; W32(esp, 0x75ecadu); SPILL(); f_6c964c(); if (g_unwind) return; RELOAD();
/* 75ecad: add edi, 0x24 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 75ecb0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75ecb1: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 75ecb4: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* 75ecb9: call 0x6c5a97 */
  esp -= 4; W32(esp, 0x75ecbeu); SPILL(); f_6c5a97(); if (g_unwind) return; RELOAD();
/* 75ecbe: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 75ecc2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75ecc3: mov eax, esi */
  eax = esi;
/* 75ecc5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75ecc6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75eccd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75ecd0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75ed00(void) {
  LOAD_REGS();
L_75ed00: /* 75ed00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75ed01: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75ed02: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 75ed06: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75ed07: mov esi, ecx */
  esi = ecx;
/* 75ed09: call 0x6c85bc */
  esp -= 4; W32(esp, 0x75ed0eu); SPILL(); f_6c85bc(); if (g_unwind) return; RELOAD();
/* 75ed0e: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 75ed11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75ed12: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 75ed15: call 0x6c531c */
  esp -= 4; W32(esp, 0x75ed1au); SPILL(); f_6c531c(); if (g_unwind) return; RELOAD();
/* 75ed1a: lea ecx, [edi + 0x18] */
  ecx = (uint32_t)(edi + 0x18u);
/* 75ed1d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75ed1e: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 75ed21: call 0x6c7b03 */
  esp -= 4; W32(esp, 0x75ed26u); SPILL(); f_6c7b03(); if (g_unwind) return; RELOAD();
/* 75ed26: add edi, 0x24 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 75ed29: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75ed2a: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 75ed2d: call 0x6c3bed */
  esp -= 4; W32(esp, 0x75ed32u); SPILL(); f_6c3bed(); if (g_unwind) return; RELOAD();
/* 75ed32: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75ed33: mov eax, esi */
  eax = esi;
/* 75ed35: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75ed36: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75ed50(void) {
  LOAD_REGS();
L_75ed50: /* 75ed50: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75ed52: push 0x9c9d84 */
  { uint32_t v = 0x9c9d84u; esp -= 4; W32(esp, v); }
/* 75ed57: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75ed5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75ed5e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75ed65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75ed66: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75ed67: mov esi, ecx */
  esi = ecx;
/* 75ed69: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75ed6d: mov dword ptr [esi], 0xa05d58 */
  W32((uint32_t)(esi), 0xa05d58u);
/* 75ed73: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* 75ed7b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x75ed81u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 75ed81: lea ecx, [esi + 0x4c] */
  ecx = (uint32_t)(esi + 0x4cu);
/* 75ed84: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 75ed89: call 0x6c736a */
  esp -= 4; W32(esp, 0x75ed8eu); SPILL(); f_6c736a(); if (g_unwind) return; RELOAD();
/* 75ed8e: mov ecx, esi */
  ecx = esi;
/* 75ed90: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 75ed98: call dword ptr [0xcfa254] */
  esp -= 4; W32(esp, 0x75ed9eu); SPILL(); f_4e2e55(); if (g_unwind) return; /* Core!??1UObject@@UAE@XZ */ RELOAD();
/* 75ed9e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75eda2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75eda3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75edaa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75edad: ret  */
  esp += 4; SPILL(); return;
}

void f_75edd0(void) {
  LOAD_REGS();
L_75edd0: /* 75edd0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75edd2: push 0x9c9da9 */
  { uint32_t v = 0x9c9da9u; esp -= 4; W32(esp, v); }
/* 75edd7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75eddd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75edde: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75ede5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75ede6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75ede7: mov esi, ecx */
  esi = ecx;
/* 75ede9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75edea: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 75edee: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x75edf4u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 75edf4: xor edi, edi */
  edi = 0;
/* 75edf6: mov dword ptr [esi], 0xa05d58 */
  W32((uint32_t)(esi), 0xa05d58u);
/* 75edfc: lea ecx, [esi + 0x4c] */
  ecx = (uint32_t)(esi + 0x4cu);
/* 75edff: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 75ee03: mov dword ptr [esi + 0x40], edi */
  W32((uint32_t)(esi + 0x40u), edi);
/* 75ee06: mov dword ptr [esi + 0x44], edi */
  W32((uint32_t)(esi + 0x44u), edi);
/* 75ee09: mov dword ptr [esi + 0x48], edi */
  W32((uint32_t)(esi + 0x48u), edi);
/* 75ee0c: call 0x6cba41 */
  esp -= 4; W32(esp, 0x75ee11u); SPILL(); f_6cba41(); if (g_unwind) return; RELOAD();
/* 75ee11: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 75ee15: mov dword ptr [esi + 0x30], edi */
  W32((uint32_t)(esi + 0x30u), edi);
/* 75ee18: mov dword ptr [esi + 0x2c], edi */
  W32((uint32_t)(esi + 0x2cu), edi);
/* 75ee1b: mov dword ptr [esi + 0x28], edi */
  W32((uint32_t)(esi + 0x28u), edi);
/* 75ee1e: mov dword ptr [esi + 0x3c], edi */
  W32((uint32_t)(esi + 0x3cu), edi);
/* 75ee21: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
/* 75ee24: mov dword ptr [esi + 0x34], edi */
  W32((uint32_t)(esi + 0x34u), edi);
/* 75ee27: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75ee28: mov eax, esi */
  eax = esi;
/* 75ee2a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75ee2b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75ee32: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75ee35: ret  */
  esp += 4; SPILL(); return;
}

void f_75ee60(void) {
  LOAD_REGS();
L_75ee60: /* 75ee60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75ee62: push 0x9c9dc9 */
  { uint32_t v = 0x9c9dc9u; esp -= 4; W32(esp, v); }
/* 75ee67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75ee6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75ee6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75ee75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75ee76: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75ee77: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75ee78: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 75ee7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75ee7d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75ee7e: mov ebx, ecx */
  ebx = ecx;
/* 75ee80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75ee81: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 75ee85: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x75ee8bu); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 75ee8b: mov dword ptr [ebx], 0xa05d58 */
  W32((uint32_t)(ebx), 0xa05d58u);
/* 75ee91: lea esi, [ebp + 0x28] */
  esi = (uint32_t)(ebp + 0x28u);
/* 75ee94: lea eax, [ebp + 0x40] */
  eax = (uint32_t)(ebp + 0x40u);
/* 75ee97: lea edi, [ebx + 0x28] */
  edi = (uint32_t)(ebx + 0x28u);
/* 75ee9a: mov ecx, 6 */
  ecx = 0x6u;
/* 75ee9f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 75eea1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 75eea3: lea ecx, [ebx + 0x40] */
  ecx = (uint32_t)(ebx + 0x40u);
/* 75eea6: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 75eea8: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 75eeab: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 75eeae: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 75eeb1: add ebp, 0x4c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 75eeb4: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 75eeb7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75eeb8: lea ecx, [ebx + 0x4c] */
  ecx = (uint32_t)(ebx + 0x4cu);
/* 75eebb: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 75eec3: call 0x6c5b05 */
  esp -= 4; W32(esp, 0x75eec8u); SPILL(); f_6c5b05(); if (g_unwind) return; RELOAD();
/* 75eec8: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 75eecc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75eecd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75eece: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 75eecf: mov eax, ebx */
  eax = ebx;
/* 75eed1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75eed2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75eed9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75eedc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75ef00(void) {
  LOAD_REGS();
L_75ef00: /* 75ef00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75ef01: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75ef02: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75ef03: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 75ef07: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75ef08: mov esi, ecx */
  esi = ecx;
/* 75ef0a: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x75ef10u); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 75ef10: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 75ef13: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 75ef16: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 75ef19: mov dword ptr [esi + 0x2c], ecx */
  W32((uint32_t)(esi + 0x2cu), ecx);
/* 75ef1c: mov edx, dword ptr [edi + 0x30] */
  edx = R32((uint32_t)(edi + 0x30u));
/* 75ef1f: mov dword ptr [esi + 0x30], edx */
  W32((uint32_t)(esi + 0x30u), edx);
/* 75ef22: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 75ef25: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 75ef28: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 75ef2b: mov dword ptr [esi + 0x38], ecx */
  W32((uint32_t)(esi + 0x38u), ecx);
/* 75ef2e: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* 75ef31: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 75ef34: lea eax, [edi + 0x40] */
  eax = (uint32_t)(edi + 0x40u);
/* 75ef37: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 75ef39: lea ecx, [esi + 0x40] */
  ecx = (uint32_t)(esi + 0x40u);
/* 75ef3c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 75ef3e: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 75ef41: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 75ef44: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 75ef47: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 75ef4a: add edi, 0x4c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 75ef4d: lea ebx, [esi + 0x4c] */
  ebx = (uint32_t)(esi + 0x4cu);
/* 75ef50: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75ef51: mov ecx, ebx */
  ecx = ebx;
/* 75ef53: call 0x6c85bc */
  esp -= 4; W32(esp, 0x75ef58u); SPILL(); f_6c85bc(); if (g_unwind) return; RELOAD();
/* 75ef58: lea ecx, [edi + 0xc] */
  ecx = (uint32_t)(edi + 0xcu);
/* 75ef5b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75ef5c: lea ecx, [ebx + 0xc] */
  ecx = (uint32_t)(ebx + 0xcu);
/* 75ef5f: call 0x6c531c */
  esp -= 4; W32(esp, 0x75ef64u); SPILL(); f_6c531c(); if (g_unwind) return; RELOAD();
/* 75ef64: lea edx, [edi + 0x18] */
  edx = (uint32_t)(edi + 0x18u);
/* 75ef67: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 75ef68: lea ecx, [ebx + 0x18] */
  ecx = (uint32_t)(ebx + 0x18u);
/* 75ef6b: call 0x6c7b03 */
  esp -= 4; W32(esp, 0x75ef70u); SPILL(); f_6c7b03(); if (g_unwind) return; RELOAD();
/* 75ef70: add edi, 0x24 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 75ef73: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75ef74: lea ecx, [ebx + 0x24] */
  ecx = (uint32_t)(ebx + 0x24u);
/* 75ef77: call 0x6c3bed */
  esp -= 4; W32(esp, 0x75ef7cu); SPILL(); f_6c3bed(); if (g_unwind) return; RELOAD();
/* 75ef7c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75ef7d: mov eax, esi */
  eax = esi;
/* 75ef7f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75ef80: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75ef81: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75efc0(void) {
  LOAD_REGS();
L_75efc0: /* 75efc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75efc1: mov esi, ecx */
  esi = ecx;
/* 75efc3: call 0x6ca713 */
  esp -= 4; W32(esp, 0x75efc8u); SPILL(); f_6ca713(); if (g_unwind) return; RELOAD();
/* 75efc8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75efcd: je 0x75efdb */
  if (zf) goto L_75efdb;
L_75efcf: /* 75efcf: push 0x7c */
  { uint32_t v = 0x7cu; esp -= 4; W32(esp, v); }
/* 75efd1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75efd2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x75efd8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 75efd8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75efdb: /* 75efdb: mov eax, esi */
  eax = esi;
/* 75efdd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75efde: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75f000(void) {
  LOAD_REGS();
L_75f000: /* 75f000: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75f001: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 75f005: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75f008: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75f009: mov esi, ecx */
  esi = ecx;
/* 75f00b: je 0x75f03d */
  if (zf) goto L_75f03d;
L_75f00d: /* 75f00d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 75f010: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75f011: push 0x6ca713 */
  { uint32_t v = 0x6ca713u; esp -= 4; W32(esp, v); }
/* 75f016: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 75f019: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75f01a: push 0x7c */
  { uint32_t v = 0x7cu; esp -= 4; W32(esp, v); }
/* 75f01c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75f01d: call 0x99ca3d */
  esp -= 4; W32(esp, 0x75f022u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 75f022: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75f025: je 0x75f035 */
  if (zf) goto L_75f035;
L_75f027: /* 75f027: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 75f02d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 75f02f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 75f031: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75f032: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x75f035u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_75f035: /* 75f035: mov eax, edi */
  eax = edi;
/* 75f037: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75f038: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75f039: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75f03a: ret 4 */
  esp += 8; SPILL(); return;
L_75f03d: /* 75f03d: mov ecx, esi */
  ecx = esi;
/* 75f03f: call 0x6ca713 */
  esp -= 4; W32(esp, 0x75f044u); SPILL(); f_6ca713(); if (g_unwind) return; RELOAD();
/* 75f044: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 75f047: je 0x75f055 */
  if (zf) goto L_75f055;
L_75f049: /* 75f049: push 0x7c */
  { uint32_t v = 0x7cu; esp -= 4; W32(esp, v); }
/* 75f04b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75f04c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x75f052u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 75f052: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_75f055: /* 75f055: mov eax, esi */
  eax = esi;
/* 75f057: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75f058: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75f059: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75f080(void) {
  LOAD_REGS();
L_75f080: /* 75f080: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f084: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f086: je 0x75f08d */
  if (zf) goto L_75f08d;
L_75f088: /* 75f088: jmp 0x6c87a6 */
  SPILL(); f_6c87a6(); return;
L_75f08d: /* 75f08d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f0a0(void) {
  LOAD_REGS();
L_75f0a0: /* 75f0a0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f0a4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f0a6: je 0x75f0ad */
  if (zf) goto L_75f0ad;
L_75f0a8: /* 75f0a8: jmp 0x6cb037 */
  SPILL(); f_6cb037(); return;
L_75f0ad: /* 75f0ad: ret  */
  esp += 4; SPILL(); return;
}

void f_75f0c0(void) {
  LOAD_REGS();
L_75f0c0: /* 75f0c0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f0c4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f0c6: je 0x75f0cd */
  if (zf) goto L_75f0cd;
L_75f0c8: /* 75f0c8: jmp 0x6c8698 */
  SPILL(); f_6c8698(); return;
L_75f0cd: /* 75f0cd: ret  */
  esp += 4; SPILL(); return;
}

void f_75f0e0(void) {
  LOAD_REGS();
L_75f0e0: /* 75f0e0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f0e4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f0e6: je 0x75f0ed */
  if (zf) goto L_75f0ed;
L_75f0e8: /* 75f0e8: jmp 0x6c5461 */
  SPILL(); f_6c5461(); return;
L_75f0ed: /* 75f0ed: ret  */
  esp += 4; SPILL(); return;
}

void f_75f100(void) {
  LOAD_REGS();
L_75f100: /* 75f100: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f104: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f106: je 0x75f10d */
  if (zf) goto L_75f10d;
L_75f108: /* 75f108: jmp 0x6cbc8f */
  SPILL(); f_6cbc8f(); return;
L_75f10d: /* 75f10d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f120(void) {
  LOAD_REGS();
L_75f120: /* 75f120: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f124: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f126: je 0x75f12d */
  if (zf) goto L_75f12d;
L_75f128: /* 75f128: jmp 0x6c12b7 */
  SPILL(); f_6c12b7(); return;
L_75f12d: /* 75f12d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f140(void) {
  LOAD_REGS();
L_75f140: /* 75f140: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f144: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f146: je 0x75f14d */
  if (zf) goto L_75f14d;
L_75f148: /* 75f148: jmp 0x6c843b */
  SPILL(); f_6c843b(); return;
L_75f14d: /* 75f14d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f160(void) {
  LOAD_REGS();
L_75f160: /* 75f160: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f164: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f166: je 0x75f16d */
  if (zf) goto L_75f16d;
L_75f168: /* 75f168: jmp 0x6c4bbf */
  SPILL(); f_6c4bbf(); return;
L_75f16d: /* 75f16d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f180(void) {
  LOAD_REGS();
L_75f180: /* 75f180: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f184: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f186: je 0x75f18d */
  if (zf) goto L_75f18d;
L_75f188: /* 75f188: jmp 0x6c31d4 */
  SPILL(); f_6c31d4(); return;
L_75f18d: /* 75f18d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f1a0(void) {
  LOAD_REGS();
L_75f1a0: /* 75f1a0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f1a4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f1a6: je 0x75f1ad */
  if (zf) goto L_75f1ad;
L_75f1a8: /* 75f1a8: jmp 0x6c99b7 */
  SPILL(); f_6c99b7(); return;
L_75f1ad: /* 75f1ad: ret  */
  esp += 4; SPILL(); return;
}

void f_75f1c0(void) {
  LOAD_REGS();
L_75f1c0: /* 75f1c0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f1c4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f1c6: je 0x75f1cd */
  if (zf) goto L_75f1cd;
L_75f1c8: /* 75f1c8: jmp 0x6ca916 */
  SPILL(); f_6ca916(); return;
L_75f1cd: /* 75f1cd: ret  */
  esp += 4; SPILL(); return;
}

void f_75f1e0(void) {
  LOAD_REGS();
L_75f1e0: /* 75f1e0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f1e4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f1e6: je 0x75f1ed */
  if (zf) goto L_75f1ed;
L_75f1e8: /* 75f1e8: jmp 0x6c9f9d */
  SPILL(); f_6c9f9d(); return;
L_75f1ed: /* 75f1ed: ret  */
  esp += 4; SPILL(); return;
}

void f_75f200(void) {
  LOAD_REGS();
L_75f200: /* 75f200: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f204: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f206: je 0x75f20d */
  if (zf) goto L_75f20d;
L_75f208: /* 75f208: jmp 0x6c43d6 */
  SPILL(); f_6c43d6(); return;
L_75f20d: /* 75f20d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f220(void) {
  LOAD_REGS();
L_75f220: /* 75f220: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f224: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f226: je 0x75f22d */
  if (zf) goto L_75f22d;
L_75f228: /* 75f228: jmp 0x6cbb59 */
  SPILL(); f_6cbb59(); return;
L_75f22d: /* 75f22d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f240(void) {
  LOAD_REGS();
L_75f240: /* 75f240: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f244: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f246: je 0x75f24d */
  if (zf) goto L_75f24d;
L_75f248: /* 75f248: jmp 0x6c13ed */
  SPILL(); f_6c13ed(); return;
L_75f24d: /* 75f24d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f260(void) {
  LOAD_REGS();
L_75f260: /* 75f260: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f264: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f266: je 0x75f26d */
  if (zf) goto L_75f26d;
L_75f268: /* 75f268: jmp 0x6c8472 */
  SPILL(); f_6c8472(); return;
L_75f26d: /* 75f26d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f280(void) {
  LOAD_REGS();
L_75f280: /* 75f280: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f284: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f286: je 0x75f28d */
  if (zf) goto L_75f28d;
L_75f288: /* 75f288: jmp 0x6c1050 */
  SPILL(); f_6c1050(); return;
L_75f28d: /* 75f28d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f2a0(void) {
  LOAD_REGS();
L_75f2a0: /* 75f2a0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f2a4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f2a6: je 0x75f2ad */
  if (zf) goto L_75f2ad;
L_75f2a8: /* 75f2a8: jmp 0x6cc8b0 */
  SPILL(); f_6cc8b0(); return;
L_75f2ad: /* 75f2ad: ret  */
  esp += 4; SPILL(); return;
}

void f_75f2c0(void) {
  LOAD_REGS();
L_75f2c0: /* 75f2c0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f2c4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f2c6: je 0x75f2cd */
  if (zf) goto L_75f2cd;
L_75f2c8: /* 75f2c8: jmp 0x6c52ae */
  SPILL(); f_6c52ae(); return;
L_75f2cd: /* 75f2cd: ret  */
  esp += 4; SPILL(); return;
}

void f_75f2e0(void) {
  LOAD_REGS();
L_75f2e0: /* 75f2e0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f2e4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f2e6: je 0x75f2ed */
  if (zf) goto L_75f2ed;
L_75f2e8: /* 75f2e8: jmp 0x6c68c0 */
  SPILL(); f_6c68c0(); return;
L_75f2ed: /* 75f2ed: ret  */
  esp += 4; SPILL(); return;
}

void f_75f300(void) {
  LOAD_REGS();
L_75f300: /* 75f300: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f304: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f306: je 0x75f30d */
  if (zf) goto L_75f30d;
L_75f308: /* 75f308: jmp 0x6cab64 */
  SPILL(); f_6cab64(); return;
L_75f30d: /* 75f30d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f320(void) {
  LOAD_REGS();
L_75f320: /* 75f320: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f324: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f326: je 0x75f32d */
  if (zf) goto L_75f32d;
L_75f328: /* 75f328: jmp 0x6cce64 */
  SPILL(); f_6cce64(); return;
L_75f32d: /* 75f32d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f340(void) {
  LOAD_REGS();
L_75f340: /* 75f340: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f344: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f346: je 0x75f34d */
  if (zf) goto L_75f34d;
L_75f348: /* 75f348: jmp 0x6cc30b */
  SPILL(); f_6cc30b(); return;
L_75f34d: /* 75f34d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f360(void) {
  LOAD_REGS();
L_75f360: /* 75f360: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f364: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f366: je 0x75f36d */
  if (zf) goto L_75f36d;
L_75f368: /* 75f368: jmp 0x6c79f0 */
  SPILL(); f_6c79f0(); return;
L_75f36d: /* 75f36d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f380(void) {
  LOAD_REGS();
L_75f380: /* 75f380: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f384: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f386: je 0x75f38d */
  if (zf) goto L_75f38d;
L_75f388: /* 75f388: jmp 0x6c1e92 */
  SPILL(); f_6c1e92(); return;
L_75f38d: /* 75f38d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f3a0(void) {
  LOAD_REGS();
L_75f3a0: /* 75f3a0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f3a4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f3a6: je 0x75f3ad */
  if (zf) goto L_75f3ad;
L_75f3a8: /* 75f3a8: jmp 0x6c1302 */
  SPILL(); f_6c1302(); return;
L_75f3ad: /* 75f3ad: ret  */
  esp += 4; SPILL(); return;
}

void f_75f3c0(void) {
  LOAD_REGS();
L_75f3c0: /* 75f3c0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f3c4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f3c6: je 0x75f3cd */
  if (zf) goto L_75f3cd;
L_75f3c8: /* 75f3c8: jmp 0x6cc392 */
  SPILL(); f_6cc392(); return;
L_75f3cd: /* 75f3cd: ret  */
  esp += 4; SPILL(); return;
}

void f_75f3e0(void) {
  LOAD_REGS();
L_75f3e0: /* 75f3e0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f3e4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f3e6: je 0x75f3ed */
  if (zf) goto L_75f3ed;
L_75f3e8: /* 75f3e8: jmp 0x6c48fe */
  SPILL(); f_6c48fe(); return;
L_75f3ed: /* 75f3ed: ret  */
  esp += 4; SPILL(); return;
}

void f_75f400(void) {
  LOAD_REGS();
L_75f400: /* 75f400: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f404: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f406: je 0x75f40d */
  if (zf) goto L_75f40d;
L_75f408: /* 75f408: jmp 0x6c5682 */
  SPILL(); f_6c5682(); return;
L_75f40d: /* 75f40d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f420(void) {
  LOAD_REGS();
L_75f420: /* 75f420: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f424: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f426: je 0x75f42d */
  if (zf) goto L_75f42d;
L_75f428: /* 75f428: jmp 0x6c98bd */
  SPILL(); f_6c98bd(); return;
L_75f42d: /* 75f42d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f440(void) {
  LOAD_REGS();
L_75f440: /* 75f440: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f444: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f446: je 0x75f44d */
  if (zf) goto L_75f44d;
L_75f448: /* 75f448: jmp 0x6cb69a */
  SPILL(); f_6cb69a(); return;
L_75f44d: /* 75f44d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f460(void) {
  LOAD_REGS();
L_75f460: /* 75f460: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f464: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f466: je 0x75f46d */
  if (zf) goto L_75f46d;
L_75f468: /* 75f468: jmp 0x6c1cb2 */
  SPILL(); f_6c1cb2(); return;
L_75f46d: /* 75f46d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f480(void) {
  LOAD_REGS();
L_75f480: /* 75f480: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f484: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f486: je 0x75f48d */
  if (zf) goto L_75f48d;
L_75f488: /* 75f488: jmp 0x6c8c42 */
  SPILL(); f_6c8c42(); return;
L_75f48d: /* 75f48d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f4a0(void) {
  LOAD_REGS();
L_75f4a0: /* 75f4a0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f4a4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f4a6: je 0x75f4ad */
  if (zf) goto L_75f4ad;
L_75f4a8: /* 75f4a8: jmp 0x6c2707 */
  SPILL(); f_6c2707(); return;
L_75f4ad: /* 75f4ad: ret  */
  esp += 4; SPILL(); return;
}

void f_75f4c0(void) {
  LOAD_REGS();
L_75f4c0: /* 75f4c0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f4c4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f4c6: je 0x75f4cd */
  if (zf) goto L_75f4cd;
L_75f4c8: /* 75f4c8: jmp 0x6c6a28 */
  SPILL(); f_6c6a28(); return;
L_75f4cd: /* 75f4cd: ret  */
  esp += 4; SPILL(); return;
}

void f_75f4e0(void) {
  LOAD_REGS();
L_75f4e0: /* 75f4e0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f4e4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f4e6: je 0x75f4ed */
  if (zf) goto L_75f4ed;
L_75f4e8: /* 75f4e8: jmp 0x6c957a */
  SPILL(); f_6c957a(); return;
L_75f4ed: /* 75f4ed: ret  */
  esp += 4; SPILL(); return;
}

void f_75f500(void) {
  LOAD_REGS();
L_75f500: /* 75f500: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f504: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f506: je 0x75f50d */
  if (zf) goto L_75f50d;
L_75f508: /* 75f508: jmp 0x6c23bf */
  SPILL(); f_6c23bf(); return;
L_75f50d: /* 75f50d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f520(void) {
  LOAD_REGS();
L_75f520: /* 75f520: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f524: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f526: je 0x75f52d */
  if (zf) goto L_75f52d;
L_75f528: /* 75f528: jmp 0x6cce05 */
  SPILL(); f_6cce05(); return;
L_75f52d: /* 75f52d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f540(void) {
  LOAD_REGS();
L_75f540: /* 75f540: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f544: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f546: je 0x75f54d */
  if (zf) goto L_75f54d;
L_75f548: /* 75f548: jmp 0x6c13e8 */
  SPILL(); f_6c13e8(); return;
L_75f54d: /* 75f54d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f560(void) {
  LOAD_REGS();
L_75f560: /* 75f560: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f564: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f566: je 0x75f56d */
  if (zf) goto L_75f56d;
L_75f568: /* 75f568: jmp 0x6c9b8d */
  SPILL(); f_6c9b8d(); return;
L_75f56d: /* 75f56d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f580(void) {
  LOAD_REGS();
L_75f580: /* 75f580: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f584: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f586: je 0x75f58d */
  if (zf) goto L_75f58d;
L_75f588: /* 75f588: jmp 0x6c4e3f */
  SPILL(); f_6c4e3f(); return;
L_75f58d: /* 75f58d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f5a0(void) {
  LOAD_REGS();
L_75f5a0: /* 75f5a0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f5a4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f5a6: je 0x75f5ad */
  if (zf) goto L_75f5ad;
L_75f5a8: /* 75f5a8: jmp 0x6c9075 */
  SPILL(); f_6c9075(); return;
L_75f5ad: /* 75f5ad: ret  */
  esp += 4; SPILL(); return;
}

void f_75f5c0(void) {
  LOAD_REGS();
L_75f5c0: /* 75f5c0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f5c4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f5c6: je 0x75f5cd */
  if (zf) goto L_75f5cd;
L_75f5c8: /* 75f5c8: jmp 0x6c6d43 */
  SPILL(); f_6c6d43(); return;
L_75f5cd: /* 75f5cd: ret  */
  esp += 4; SPILL(); return;
}

void f_75f5e0(void) {
  LOAD_REGS();
L_75f5e0: /* 75f5e0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f5e4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f5e6: je 0x75f5ed */
  if (zf) goto L_75f5ed;
L_75f5e8: /* 75f5e8: jmp 0x6c2c02 */
  SPILL(); f_6c2c02(); return;
L_75f5ed: /* 75f5ed: ret  */
  esp += 4; SPILL(); return;
}

void f_75f600(void) {
  LOAD_REGS();
L_75f600: /* 75f600: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f604: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f606: je 0x75f60d */
  if (zf) goto L_75f60d;
L_75f608: /* 75f608: jmp 0x6c73f1 */
  SPILL(); f_6c73f1(); return;
L_75f60d: /* 75f60d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f620(void) {
  LOAD_REGS();
L_75f620: /* 75f620: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f624: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f626: je 0x75f62d */
  if (zf) goto L_75f62d;
L_75f628: /* 75f628: jmp 0x6cca27 */
  SPILL(); f_6cca27(); return;
L_75f62d: /* 75f62d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f640(void) {
  LOAD_REGS();
L_75f640: /* 75f640: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f644: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f646: je 0x75f64d */
  if (zf) goto L_75f64d;
L_75f648: /* 75f648: jmp 0x6c8f35 */
  SPILL(); f_6c8f35(); return;
L_75f64d: /* 75f64d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f660(void) {
  LOAD_REGS();
L_75f660: /* 75f660: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f664: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f666: je 0x75f66d */
  if (zf) goto L_75f66d;
L_75f668: /* 75f668: jmp 0x6ca86c */
  SPILL(); f_6ca86c(); return;
L_75f66d: /* 75f66d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f680(void) {
  LOAD_REGS();
L_75f680: /* 75f680: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f684: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f686: je 0x75f68d */
  if (zf) goto L_75f68d;
L_75f688: /* 75f688: jmp 0x6c4d63 */
  SPILL(); f_6c4d63(); return;
L_75f68d: /* 75f68d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f6a0(void) {
  LOAD_REGS();
L_75f6a0: /* 75f6a0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f6a4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f6a6: je 0x75f6ad */
  if (zf) goto L_75f6ad;
L_75f6a8: /* 75f6a8: jmp 0x6c76ad */
  SPILL(); f_6c76ad(); return;
L_75f6ad: /* 75f6ad: ret  */
  esp += 4; SPILL(); return;
}

void f_75f6c0(void) {
  LOAD_REGS();
L_75f6c0: /* 75f6c0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f6c4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f6c6: je 0x75f6cd */
  if (zf) goto L_75f6cd;
L_75f6c8: /* 75f6c8: jmp 0x6cc423 */
  SPILL(); f_6cc423(); return;
L_75f6cd: /* 75f6cd: ret  */
  esp += 4; SPILL(); return;
}

void f_75f6e0(void) {
  LOAD_REGS();
L_75f6e0: /* 75f6e0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f6e4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f6e6: je 0x75f6ed */
  if (zf) goto L_75f6ed;
L_75f6e8: /* 75f6e8: jmp 0x6c2f3b */
  SPILL(); f_6c2f3b(); return;
L_75f6ed: /* 75f6ed: ret  */
  esp += 4; SPILL(); return;
}

void f_75f700(void) {
  LOAD_REGS();
L_75f700: /* 75f700: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f704: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f706: je 0x75f70d */
  if (zf) goto L_75f70d;
L_75f708: /* 75f708: jmp 0x6c2d6f */
  SPILL(); f_6c2d6f(); return;
L_75f70d: /* 75f70d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f720(void) {
  LOAD_REGS();
L_75f720: /* 75f720: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f724: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f726: je 0x75f72d */
  if (zf) goto L_75f72d;
L_75f728: /* 75f728: jmp 0x6c748c */
  SPILL(); f_6c748c(); return;
L_75f72d: /* 75f72d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f740(void) {
  LOAD_REGS();
L_75f740: /* 75f740: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f744: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f746: je 0x75f74d */
  if (zf) goto L_75f74d;
L_75f748: /* 75f748: jmp 0x6c89ef */
  SPILL(); f_6c89ef(); return;
L_75f74d: /* 75f74d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f760(void) {
  LOAD_REGS();
L_75f760: /* 75f760: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f764: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f766: je 0x75f76d */
  if (zf) goto L_75f76d;
L_75f768: /* 75f768: jmp 0x6c84ea */
  SPILL(); f_6c84ea(); return;
L_75f76d: /* 75f76d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f780(void) {
  LOAD_REGS();
L_75f780: /* 75f780: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f784: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f786: je 0x75f78d */
  if (zf) goto L_75f78d;
L_75f788: /* 75f788: jmp 0x6cbc7b */
  SPILL(); f_6cbc7b(); return;
L_75f78d: /* 75f78d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f7a0(void) {
  LOAD_REGS();
L_75f7a0: /* 75f7a0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f7a4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f7a6: je 0x75f7ad */
  if (zf) goto L_75f7ad;
L_75f7a8: /* 75f7a8: jmp 0x6c24fa */
  SPILL(); f_6c24fa(); return;
L_75f7ad: /* 75f7ad: ret  */
  esp += 4; SPILL(); return;
}

void f_75f7c0(void) {
  LOAD_REGS();
L_75f7c0: /* 75f7c0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f7c4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f7c6: je 0x75f7cd */
  if (zf) goto L_75f7cd;
L_75f7c8: /* 75f7c8: jmp 0x6c6fa0 */
  SPILL(); f_6c6fa0(); return;
L_75f7cd: /* 75f7cd: ret  */
  esp += 4; SPILL(); return;
}

void f_75f7e0(void) {
  LOAD_REGS();
L_75f7e0: /* 75f7e0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f7e4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f7e6: je 0x75f7ed */
  if (zf) goto L_75f7ed;
L_75f7e8: /* 75f7e8: jmp 0x6c7e87 */
  SPILL(); f_6c7e87(); return;
L_75f7ed: /* 75f7ed: ret  */
  esp += 4; SPILL(); return;
}

void f_75f800(void) {
  LOAD_REGS();
L_75f800: /* 75f800: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f804: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f806: je 0x75f80d */
  if (zf) goto L_75f80d;
L_75f808: /* 75f808: jmp 0x6c8dd7 */
  SPILL(); f_6c8dd7(); return;
L_75f80d: /* 75f80d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f820(void) {
  LOAD_REGS();
L_75f820: /* 75f820: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f824: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f826: je 0x75f82d */
  if (zf) goto L_75f82d;
L_75f828: /* 75f828: jmp 0x6cb73f */
  SPILL(); f_6cb73f(); return;
L_75f82d: /* 75f82d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f840(void) {
  LOAD_REGS();
L_75f840: /* 75f840: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f844: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f846: je 0x75f84d */
  if (zf) goto L_75f84d;
L_75f848: /* 75f848: jmp 0x6c8f4e */
  SPILL(); f_6c8f4e(); return;
L_75f84d: /* 75f84d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f860(void) {
  LOAD_REGS();
L_75f860: /* 75f860: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f864: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f866: je 0x75f86d */
  if (zf) goto L_75f86d;
L_75f868: /* 75f868: jmp 0x6c55f6 */
  SPILL(); f_6c55f6(); return;
L_75f86d: /* 75f86d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f880(void) {
  LOAD_REGS();
L_75f880: /* 75f880: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f884: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f886: je 0x75f88d */
  if (zf) goto L_75f88d;
L_75f888: /* 75f888: jmp 0x6c4f20 */
  SPILL(); f_6c4f20(); return;
L_75f88d: /* 75f88d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f8a0(void) {
  LOAD_REGS();
L_75f8a0: /* 75f8a0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f8a4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f8a6: je 0x75f8ad */
  if (zf) goto L_75f8ad;
L_75f8a8: /* 75f8a8: jmp 0x6c77e3 */
  SPILL(); f_6c77e3(); return;
L_75f8ad: /* 75f8ad: ret  */
  esp += 4; SPILL(); return;
}

void f_75f8c0(void) {
  LOAD_REGS();
L_75f8c0: /* 75f8c0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f8c4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f8c6: je 0x75f8cd */
  if (zf) goto L_75f8cd;
L_75f8c8: /* 75f8c8: jmp 0x6c6f64 */
  SPILL(); f_6c6f64(); return;
L_75f8cd: /* 75f8cd: ret  */
  esp += 4; SPILL(); return;
}

void f_75f8e0(void) {
  LOAD_REGS();
L_75f8e0: /* 75f8e0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f8e4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f8e6: je 0x75f8ed */
  if (zf) goto L_75f8ed;
L_75f8e8: /* 75f8e8: jmp 0x6c73c9 */
  SPILL(); f_6c73c9(); return;
L_75f8ed: /* 75f8ed: ret  */
  esp += 4; SPILL(); return;
}

void f_75f900(void) {
  LOAD_REGS();
L_75f900: /* 75f900: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f904: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f906: je 0x75f90d */
  if (zf) goto L_75f90d;
L_75f908: /* 75f908: jmp 0x6c9291 */
  SPILL(); f_6c9291(); return;
L_75f90d: /* 75f90d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f920(void) {
  LOAD_REGS();
L_75f920: /* 75f920: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f924: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f926: je 0x75f92d */
  if (zf) goto L_75f92d;
L_75f928: /* 75f928: jmp 0x6c6b9f */
  SPILL(); f_6c6b9f(); return;
L_75f92d: /* 75f92d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f940(void) {
  LOAD_REGS();
L_75f940: /* 75f940: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f944: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f946: je 0x75f94d */
  if (zf) goto L_75f94d;
L_75f948: /* 75f948: jmp 0x6cabff */
  SPILL(); f_6cabff(); return;
L_75f94d: /* 75f94d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f960(void) {
  LOAD_REGS();
L_75f960: /* 75f960: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f964: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f966: je 0x75f96d */
  if (zf) goto L_75f96d;
L_75f968: /* 75f968: jmp 0x6c2897 */
  SPILL(); f_6c2897(); return;
L_75f96d: /* 75f96d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f980(void) {
  LOAD_REGS();
L_75f980: /* 75f980: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f984: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f986: je 0x75f98d */
  if (zf) goto L_75f98d;
L_75f988: /* 75f988: jmp 0x6c95b1 */
  SPILL(); f_6c95b1(); return;
L_75f98d: /* 75f98d: ret  */
  esp += 4; SPILL(); return;
}

void f_75f9a0(void) {
  LOAD_REGS();
L_75f9a0: /* 75f9a0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f9a4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f9a6: je 0x75f9ad */
  if (zf) goto L_75f9ad;
L_75f9a8: /* 75f9a8: jmp 0x6c6b7c */
  SPILL(); f_6c6b7c(); return;
L_75f9ad: /* 75f9ad: ret  */
  esp += 4; SPILL(); return;
}

void f_75f9c0(void) {
  LOAD_REGS();
L_75f9c0: /* 75f9c0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f9c4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f9c6: je 0x75f9cd */
  if (zf) goto L_75f9cd;
L_75f9c8: /* 75f9c8: jmp 0x6c9188 */
  SPILL(); f_6c9188(); return;
L_75f9cd: /* 75f9cd: ret  */
  esp += 4; SPILL(); return;
}

void f_75f9e0(void) {
  LOAD_REGS();
L_75f9e0: /* 75f9e0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75f9e4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75f9e6: je 0x75f9ed */
  if (zf) goto L_75f9ed;
L_75f9e8: /* 75f9e8: jmp 0x6c305d */
  SPILL(); f_6c305d(); return;
L_75f9ed: /* 75f9ed: ret  */
  esp += 4; SPILL(); return;
}

void f_75fa00(void) {
  LOAD_REGS();
L_75fa00: /* 75fa00: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75fa04: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75fa06: je 0x75fa0d */
  if (zf) goto L_75fa0d;
L_75fa08: /* 75fa08: jmp 0x6ca911 */
  SPILL(); f_6ca911(); return;
L_75fa0d: /* 75fa0d: ret  */
  esp += 4; SPILL(); return;
}

void f_75fa20(void) {
  LOAD_REGS();
L_75fa20: /* 75fa20: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75fa24: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75fa26: je 0x75fa2d */
  if (zf) goto L_75fa2d;
L_75fa28: /* 75fa28: jmp 0x6cb91f */
  SPILL(); f_6cb91f(); return;
L_75fa2d: /* 75fa2d: ret  */
  esp += 4; SPILL(); return;
}

void f_75fa40(void) {
  LOAD_REGS();
L_75fa40: /* 75fa40: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75fa44: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75fa46: je 0x75fa4d */
  if (zf) goto L_75fa4d;
L_75fa48: /* 75fa48: jmp 0x6c94ad */
  SPILL(); f_6c94ad(); return;
L_75fa4d: /* 75fa4d: ret  */
  esp += 4; SPILL(); return;
}

void f_75fa60(void) {
  LOAD_REGS();
L_75fa60: /* 75fa60: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75fa64: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75fa66: je 0x75fa6d */
  if (zf) goto L_75fa6d;
L_75fa68: /* 75fa68: jmp 0x6c5065 */
  SPILL(); f_6c5065(); return;
L_75fa6d: /* 75fa6d: ret  */
  esp += 4; SPILL(); return;
}

void f_75fa80(void) {
  LOAD_REGS();
L_75fa80: /* 75fa80: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75fa84: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75fa86: je 0x75fa8d */
  if (zf) goto L_75fa8d;
L_75fa88: /* 75fa88: jmp 0x6cccb6 */
  SPILL(); f_6cccb6(); return;
L_75fa8d: /* 75fa8d: ret  */
  esp += 4; SPILL(); return;
}

void f_75faa0(void) {
  LOAD_REGS();
L_75faa0: /* 75faa0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75faa4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75faa6: je 0x75faad */
  if (zf) goto L_75faad;
L_75faa8: /* 75faa8: jmp 0x6c6447 */
  SPILL(); f_6c6447(); return;
L_75faad: /* 75faad: ret  */
  esp += 4; SPILL(); return;
}

void f_75fac0(void) {
  LOAD_REGS();
L_75fac0: /* 75fac0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75fac4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75fac6: je 0x75facd */
  if (zf) goto L_75facd;
L_75fac8: /* 75fac8: jmp 0x6c92cd */
  SPILL(); f_6c92cd(); return;
L_75facd: /* 75facd: ret  */
  esp += 4; SPILL(); return;
}

void f_75fae0(void) {
  LOAD_REGS();
L_75fae0: /* 75fae0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75fae4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75fae6: je 0x75faed */
  if (zf) goto L_75faed;
L_75fae8: /* 75fae8: jmp 0x6c3ebd */
  SPILL(); f_6c3ebd(); return;
L_75faed: /* 75faed: ret  */
  esp += 4; SPILL(); return;
}

void f_75fb00(void) {
  LOAD_REGS();
L_75fb00: /* 75fb00: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75fb04: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75fb06: je 0x75fb0d */
  if (zf) goto L_75fb0d;
L_75fb08: /* 75fb08: jmp 0x6c50f6 */
  SPILL(); f_6c50f6(); return;
L_75fb0d: /* 75fb0d: ret  */
  esp += 4; SPILL(); return;
}

void f_75fb20(void) {
  LOAD_REGS();
L_75fb20: /* 75fb20: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75fb24: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75fb26: je 0x75fb2d */
  if (zf) goto L_75fb2d;
L_75fb28: /* 75fb28: jmp 0x6c2d56 */
  SPILL(); f_6c2d56(); return;
L_75fb2d: /* 75fb2d: ret  */
  esp += 4; SPILL(); return;
}

void f_75fb40(void) {
  LOAD_REGS();
L_75fb40: /* 75fb40: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75fb44: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75fb46: je 0x75fb4d */
  if (zf) goto L_75fb4d;
L_75fb48: /* 75fb48: jmp 0x6cbe29 */
  SPILL(); f_6cbe29(); return;
L_75fb4d: /* 75fb4d: ret  */
  esp += 4; SPILL(); return;
}

void f_75fb60(void) {
  LOAD_REGS();
L_75fb60: /* 75fb60: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75fb64: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75fb66: je 0x75fb6d */
  if (zf) goto L_75fb6d;
L_75fb68: /* 75fb68: jmp 0x6c820b */
  SPILL(); f_6c820b(); return;
L_75fb6d: /* 75fb6d: ret  */
  esp += 4; SPILL(); return;
}

void f_75fb80(void) {
  LOAD_REGS();
L_75fb80: /* 75fb80: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75fb84: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75fb86: je 0x75fb8d */
  if (zf) goto L_75fb8d;
L_75fb88: /* 75fb88: jmp 0x6c727a */
  SPILL(); f_6c727a(); return;
L_75fb8d: /* 75fb8d: ret  */
  esp += 4; SPILL(); return;
}

void f_75fba0(void) {
  LOAD_REGS();
L_75fba0: /* 75fba0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75fba4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75fba6: je 0x75fbad */
  if (zf) goto L_75fbad;
L_75fba8: /* 75fba8: jmp 0x6c9d90 */
  SPILL(); f_6c9d90(); return;
L_75fbad: /* 75fbad: ret  */
  esp += 4; SPILL(); return;
}

void f_75fbc0(void) {
  LOAD_REGS();
L_75fbc0: /* 75fbc0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75fbc4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75fbc6: je 0x75fbcd */
  if (zf) goto L_75fbcd;
L_75fbc8: /* 75fbc8: jmp 0x6c678a */
  SPILL(); f_6c678a(); return;
L_75fbcd: /* 75fbcd: ret  */
  esp += 4; SPILL(); return;
}

void f_75fbe0(void) {
  LOAD_REGS();
L_75fbe0: /* 75fbe0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75fbe4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75fbe6: je 0x75fbed */
  if (zf) goto L_75fbed;
L_75fbe8: /* 75fbe8: jmp 0x6c54cf */
  SPILL(); f_6c54cf(); return;
L_75fbed: /* 75fbed: ret  */
  esp += 4; SPILL(); return;
}

void f_75fc00(void) {
  LOAD_REGS();
L_75fc00: /* 75fc00: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75fc04: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75fc06: je 0x75fc0d */
  if (zf) goto L_75fc0d;
L_75fc08: /* 75fc08: jmp 0x6c47a5 */
  SPILL(); f_6c47a5(); return;
L_75fc0d: /* 75fc0d: ret  */
  esp += 4; SPILL(); return;
}

void f_75fc20(void) {
  LOAD_REGS();
L_75fc20: /* 75fc20: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75fc24: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75fc26: je 0x75fc2d */
  if (zf) goto L_75fc2d;
L_75fc28: /* 75fc28: jmp 0x6c61bd */
  SPILL(); f_6c61bd(); return;
L_75fc2d: /* 75fc2d: ret  */
  esp += 4; SPILL(); return;
}

void f_75fc40(void) {
  LOAD_REGS();
L_75fc40: /* 75fc40: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75fc44: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75fc46: je 0x75fc4d */
  if (zf) goto L_75fc4d;
L_75fc48: /* 75fc48: jmp 0x6c63f7 */
  SPILL(); f_6c63f7(); return;
L_75fc4d: /* 75fc4d: ret  */
  esp += 4; SPILL(); return;
}

void f_75fc60(void) {
  LOAD_REGS();
L_75fc60: /* 75fc60: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75fc64: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75fc66: je 0x75fc6d */
  if (zf) goto L_75fc6d;
L_75fc68: /* 75fc68: jmp 0x6c85a8 */
  SPILL(); f_6c85a8(); return;
L_75fc6d: /* 75fc6d: ret  */
  esp += 4; SPILL(); return;
}

void f_75fc80(void) {
  LOAD_REGS();
L_75fc80: /* 75fc80: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75fc84: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75fc86: je 0x75fc8d */
  if (zf) goto L_75fc8d;
L_75fc88: /* 75fc88: jmp 0x6c1ce4 */
  SPILL(); f_6c1ce4(); return;
L_75fc8d: /* 75fc8d: ret  */
  esp += 4; SPILL(); return;
}

void f_75fca0(void) {
  LOAD_REGS();
L_75fca0: /* 75fca0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75fca4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75fca6: je 0x75fcad */
  if (zf) goto L_75fcad;
L_75fca8: /* 75fca8: jmp 0x6c30b2 */
  SPILL(); f_6c30b2(); return;
L_75fcad: /* 75fcad: ret  */
  esp += 4; SPILL(); return;
}

void f_75fcc0(void) {
  LOAD_REGS();
L_75fcc0: /* 75fcc0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75fcc4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75fcc6: je 0x75fccd */
  if (zf) goto L_75fccd;
L_75fcc8: /* 75fcc8: jmp 0x6c4c5a */
  SPILL(); f_6c4c5a(); return;
L_75fccd: /* 75fccd: ret  */
  esp += 4; SPILL(); return;
}

void f_75fce0(void) {
  LOAD_REGS();
L_75fce0: /* 75fce0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75fce4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75fce6: je 0x75fced */
  if (zf) goto L_75fced;
L_75fce8: /* 75fce8: jmp 0x6c5074 */
  SPILL(); f_6c5074(); return;
L_75fced: /* 75fced: ret  */
  esp += 4; SPILL(); return;
}

void f_75fd00(void) {
  LOAD_REGS();
L_75fd00: /* 75fd00: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75fd04: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75fd06: je 0x75fd0d */
  if (zf) goto L_75fd0d;
L_75fd08: /* 75fd08: jmp 0x6cbab4 */
  SPILL(); f_6cbab4(); return;
L_75fd0d: /* 75fd0d: ret  */
  esp += 4; SPILL(); return;
}

void f_75fd20(void) {
  LOAD_REGS();
L_75fd20: /* 75fd20: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75fd24: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75fd26: je 0x75fd2d */
  if (zf) goto L_75fd2d;
L_75fd28: /* 75fd28: jmp 0x6c768a */
  SPILL(); f_6c768a(); return;
L_75fd2d: /* 75fd2d: ret  */
  esp += 4; SPILL(); return;
}

void f_75fd40(void) {
  LOAD_REGS();
L_75fd40: /* 75fd40: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75fd44: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75fd46: je 0x75fd4d */
  if (zf) goto L_75fd4d;
L_75fd48: /* 75fd48: jmp 0x6c3cb0 */
  SPILL(); f_6c3cb0(); return;
L_75fd4d: /* 75fd4d: ret  */
  esp += 4; SPILL(); return;
}

void f_75fd60(void) {
  LOAD_REGS();
L_75fd60: /* 75fd60: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75fd64: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75fd66: je 0x75fd6d */
  if (zf) goto L_75fd6d;
L_75fd68: /* 75fd68: jmp 0x6ca90c */
  SPILL(); f_6ca90c(); return;
L_75fd6d: /* 75fd6d: ret  */
  esp += 4; SPILL(); return;
}

void f_75fd80(void) {
  LOAD_REGS();
L_75fd80: /* 75fd80: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75fd84: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75fd86: je 0x75fd8d */
  if (zf) goto L_75fd8d;
L_75fd88: /* 75fd88: jmp 0x6c2cac */
  SPILL(); f_6c2cac(); return;
L_75fd8d: /* 75fd8d: ret  */
  esp += 4; SPILL(); return;
}

void f_75fda0(void) {
  LOAD_REGS();
L_75fda0: /* 75fda0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75fda4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75fda6: je 0x75fdad */
  if (zf) goto L_75fdad;
L_75fda8: /* 75fda8: jmp 0x6c8d37 */
  SPILL(); f_6c8d37(); return;
L_75fdad: /* 75fdad: ret  */
  esp += 4; SPILL(); return;
}

void f_75fdc0(void) {
  LOAD_REGS();
L_75fdc0: /* 75fdc0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75fdc4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75fdc6: je 0x75fdcd */
  if (zf) goto L_75fdcd;
L_75fdc8: /* 75fdc8: jmp 0x6c782e */
  SPILL(); f_6c782e(); return;
L_75fdcd: /* 75fdcd: ret  */
  esp += 4; SPILL(); return;
}

void f_75fde0(void) {
  LOAD_REGS();
L_75fde0: /* 75fde0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75fde4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75fde6: je 0x75fded */
  if (zf) goto L_75fded;
L_75fde8: /* 75fde8: jmp 0x6cbf2d */
  SPILL(); f_6cbf2d(); return;
L_75fded: /* 75fded: ret  */
  esp += 4; SPILL(); return;
}

void f_75fe00(void) {
  LOAD_REGS();
L_75fe00: /* 75fe00: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 75fe04: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75fe06: je 0x75fe0d */
  if (zf) goto L_75fe0d;
L_75fe08: /* 75fe08: jmp 0x6c7bcb */
  SPILL(); f_6c7bcb(); return;
L_75fe0d: /* 75fe0d: ret  */
  esp += 4; SPILL(); return;
}

void f_75fe20(void) {
  LOAD_REGS();
L_75fe20: /* 75fe20: jmp 0x6c312a */
  SPILL(); f_6c312a(); return;
}

void f_75fe40(void) {
  LOAD_REGS();
L_75fe40: /* 75fe40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75fe42: push 0x9c9de8 */
  { uint32_t v = 0x9c9de8u; esp -= 4; W32(esp, v); }
/* 75fe47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75fe4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75fe4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75fe55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75fe56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75fe57: mov esi, ecx */
  esi = ecx;
/* 75fe59: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 75fe5d: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x75fe63u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 75fe63: xor eax, eax */
  eax = 0;
/* 75fe65: mov ecx, esi */
  ecx = esi;
/* 75fe67: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 75fe6b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 75fe6e: mov dword ptr [esi + 0x10], 8 */
  W32((uint32_t)(esi + 0x10u), 0x8u);
/* 75fe75: call 0x6cb398 */
  esp -= 4; W32(esp, 0x75fe7au); SPILL(); f_6cb398(); if (g_unwind) return; RELOAD();
/* 75fe7a: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 75fe7e: mov eax, esi */
  eax = esi;
/* 75fe80: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75fe81: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75fe88: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 75fe8b: ret  */
  esp += 4; SPILL(); return;
}

void f_75feb0(void) {
  LOAD_REGS();
L_75feb0: /* 75feb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 75feb4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75feb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75feb6: mov esi, ecx */
  esi = ecx;
/* 75feb8: call 0x6c2531 */
  esp -= 4; W32(esp, 0x75febdu); SPILL(); f_6c2531(); if (g_unwind) return; RELOAD();
/* 75febd: mov eax, esi */
  eax = esi;
/* 75febf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75fec0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75fee0(void) {
  LOAD_REGS();
L_75fee0: /* 75fee0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 75fee1: mov ebp, esp */
  ebp = esp;
/* 75fee3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 75fee5: push 0x9c9e00 */
  { uint32_t v = 0x9c9e00u; esp -= 4; W32(esp, v); }
/* 75feea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 75fef0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75fef1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 75fef8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 75fefb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 75fefc: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 75feff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 75ff00: mov esi, ecx */
  esi = ecx;
/* 75ff02: mov eax, ebx */
  eax = ebx;
/* 75ff04: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 75ff06: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 75ff08: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 75ff0b: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 75ff0e: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 75ff11: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 75ff14: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 75ff17: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 75ff1a: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* 75ff1d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75ff1e: lea ecx, [ebx + 0x30] */
  ecx = (uint32_t)(ebx + 0x30u);
/* 75ff21: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 75ff24: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 75ff27: mov eax, dword ptr [ebx + 0x14] */
  eax = R32((uint32_t)(ebx + 0x14u));
/* 75ff2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 75ff2b: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* 75ff2e: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 75ff31: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 75ff38: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 75ff3b: call 0x6c2f1d */
  esp -= 4; W32(esp, 0x75ff40u); SPILL(); f_6c2f1d(); if (g_unwind) return; RELOAD();
/* 75ff40: lea edx, [ebx + 0x18] */
  edx = (uint32_t)(ebx + 0x18u);
/* 75ff43: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 75ff44: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 75ff47: call 0x6c5eac */
  esp -= 4; W32(esp, 0x75ff4cu); SPILL(); f_6c5eac(); if (g_unwind) return; RELOAD();
/* 75ff4c: lea eax, [ebx + 0x24] */
  eax = (uint32_t)(ebx + 0x24u);
/* 75ff4f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75ff50: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 75ff53: call 0x6ccba3 */
  esp -= 4; W32(esp, 0x75ff58u); SPILL(); f_6ccba3(); if (g_unwind) return; RELOAD();
/* 75ff58: lea edi, [esi + 0x58] */
  edi = (uint32_t)(esi + 0x58u);
/* 75ff5b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 75ff5d: mov ecx, edi */
  ecx = edi;
/* 75ff5f: call 0x6cb190 */
  esp -= 4; W32(esp, 0x75ff64u); SPILL(); f_6cb190(); if (g_unwind) return; RELOAD();
/* 75ff64: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 75ff67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75ff68: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 75ff6a: mov ecx, edi */
  ecx = edi;
/* 75ff6c: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x75ff72u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 75ff72: xor eax, eax */
  eax = 0;
/* 75ff74: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
L_75ff77: /* 75ff77: cmp eax, dword ptr [ebx + 0x5c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x5cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 75ff7a: jge 0x75ffe9 */
  if ((sf == of)) goto L_75ffe9;
L_75ff7c: /* 75ff7c: mov edi, dword ptr [ebx + 0x58] */
  edi = R32((uint32_t)(ebx + 0x58u));
/* 75ff7f: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 75ff82: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 75ff84: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 75ff87: mov ecx, dword ptr [esi + eax] */
  ecx = R32((uint32_t)(esi + eax));
/* 75ff8a: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 75ff8c: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 75ff8e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75ff90: je 0x75ffb7 */
  if (zf) goto L_75ffb7;
L_75ff92: /* 75ff92: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 75ff94: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x75ff97u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 75ff97: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 75ff99: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75ff9b: je 0x75ffb1 */
  if (zf) goto L_75ffb1;
L_75ff9d: /* 75ff9d: mov dword ptr [eax], 0x9f7674 */
  W32((uint32_t)(eax), 0x9f7674u);
/* 75ffa3: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 75ffa9: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 75ffab: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 75ffad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75ffae: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x75ffb1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_75ffb1: /* 75ffb1: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
L_75ffb7: /* 75ffb7: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 75ffb9: xor eax, eax */
  eax = 0;
/* 75ffbb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75ffbd: je 0x75ffc3 */
  if (zf) goto L_75ffc3;
L_75ffbf: /* 75ffbf: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 75ffc1: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x75ffc3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_75ffc3: /* 75ffc3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 75ffc4: mov ecx, esi */
  ecx = esi;
/* 75ffc6: call 0x6c5e39 */
  esp -= 4; W32(esp, 0x75ffcbu); SPILL(); f_6c5e39(); if (g_unwind) return; RELOAD();
/* 75ffcb: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 75ffcd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75ffcf: je 0x75ffdd */
  if (zf) goto L_75ffdd;
L_75ffd1: /* 75ffd1: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 75ffd3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 75ffd5: je 0x75ffdd */
  if (zf) goto L_75ffdd;
L_75ffd7: /* 75ffd7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 75ffd9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 75ffda: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x75ffddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_75ffdd: /* 75ffdd: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 75ffe0: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 75ffe3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 75ffe4: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 75ffe7: jmp 0x75ff77 */
  goto L_75ff77;
L_75ffe9: /* 75ffe9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 75ffec: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 75ffed: mov eax, esi */
  eax = esi;
/* 75ffef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 75fff0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 75fff7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 75fff8: mov esp, ebp */
  esp = ebp;
/* 75fffa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 75fffb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_75fffe(void) {
  LOAD_REGS();
L_75fffe: /* 75fffe: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 760001: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 760006: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 760009: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76000a: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 76000d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x760012u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_760012(); return;
}

void f_760012(void) {
  LOAD_REGS();
L_760012: /* 760012: push 0xa05dd4 */
  { uint32_t v = 0xa05dd4u; esp -= 4; W32(esp, v); }
/* 760017: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 76001c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x760022u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 760022: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 760025: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 760027: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 760029: call 0x99caf8 */
  esp -= 4; W32(esp, 0x76002eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_76002e: guest_badaddr(0x76002e); return;
}

void f_760090(void) {
  LOAD_REGS();
L_760090: /* 760090: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 760091: mov ebp, esp */
  ebp = esp;
/* 760093: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 760095: push 0x9c9e26 */
  { uint32_t v = 0x9c9e26u; esp -= 4; W32(esp, v); }
/* 76009a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7600a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7600a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7600a8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7600ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7600ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7600ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7600ae: xor esi, esi */
  esi = 0;
/* 7600b0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7600b3: mov edi, ecx */
  edi = ecx;
/* 7600b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7600b6: lea ecx, [edi + 0x18] */
  ecx = (uint32_t)(edi + 0x18u);
/* 7600b9: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7600bb: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 7600be: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7600c1: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x7600c7u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
L_7600c7: /* 7600c7: cmp esi, dword ptr [edi + 0x28] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7600ca: jge 0x7600dd */
  if ((sf == of)) goto L_7600dd;
L_7600cc: /* 7600cc: mov ecx, dword ptr [edi + 0x24] */
  ecx = R32((uint32_t)(edi + 0x24u));
/* 7600cf: lea eax, [esi + esi*4] */
  eax = (uint32_t)(esi + esi*4);
/* 7600d2: lea ecx, [ecx + eax*8] */
  ecx = (uint32_t)(ecx + eax*8);
/* 7600d5: call 0x6c1703 */
  esp -= 4; W32(esp, 0x7600dau); SPILL(); f_6c1703(); if (g_unwind) return; RELOAD();
/* 7600da: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7600db: jmp 0x7600c7 */
  goto L_7600c7;
L_7600dd: /* 7600dd: lea ebx, [edi + 0x24] */
  ebx = (uint32_t)(edi + 0x24u);
/* 7600e0: xor esi, esi */
  esi = 0;
L_7600e2: /* 7600e2: cmp esi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7600e5: jge 0x76011c */
  if ((sf == of)) goto L_76011c;
L_7600e7: /* 7600e7: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 7600e9: lea edx, [esi + esi*4] */
  edx = (uint32_t)(esi + esi*4);
/* 7600ec: lea edi, [eax + edx*8] */
  edi = (uint32_t)(eax + edx*8);
/* 7600ef: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 7600f2: lea ecx, [edi + 0x1c] */
  ecx = (uint32_t)(edi + 0x1cu);
/* 7600f5: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7600f9: call 0x6c2ed2 */
  esp -= 4; W32(esp, 0x7600feu); SPILL(); f_6c2ed2(); if (g_unwind) return; RELOAD();
/* 7600fe: lea ecx, [edi + 0x10] */
  ecx = (uint32_t)(edi + 0x10u);
/* 760101: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 760105: call 0x6c9543 */
  esp -= 4; W32(esp, 0x76010au); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 76010a: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 76010d: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 760111: call 0x6c4499 */
  esp -= 4; W32(esp, 0x760116u); SPILL(); f_6c4499(); if (g_unwind) return; RELOAD();
/* 760116: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 760119: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 76011a: jmp 0x7600e2 */
  goto L_7600e2;
L_76011c: /* 76011c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76011e: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 760120: mov ecx, ebx */
  ecx = ebx;
/* 760122: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x760128u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 760128: xor ebx, ebx */
  ebx = 0;
/* 76012a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_760130: /* 760130: cmp ebx, dword ptr [edi + 0x5c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x5cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 760133: jge 0x760169 */
  if ((sf == of)) goto L_760169;
L_760135: /* 760135: mov ecx, dword ptr [edi + 0x58] */
  ecx = R32((uint32_t)(edi + 0x58u));
/* 760138: lea esi, [ecx + ebx*4] */
  esi = (uint32_t)(ecx + ebx*4);
/* 76013b: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 76013d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76013f: je 0x760166 */
  if (zf) goto L_760166;
L_760141: /* 760141: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 760143: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x760146u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 760146: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 760148: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 76014a: je 0x760160 */
  if (zf) goto L_760160;
L_76014c: /* 76014c: mov dword ptr [eax], 0x9f7674 */
  W32((uint32_t)(eax), 0x9f7674u);
/* 760152: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 760158: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 76015a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 76015c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76015d: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x760160u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_760160: /* 760160: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
L_760166: /* 760166: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 760167: jmp 0x760130 */
  goto L_760130;
L_760169: /* 760169: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76016b: lea ecx, [edi + 0x58] */
  ecx = (uint32_t)(edi + 0x58u);
/* 76016e: call 0x6cb190 */
  esp -= 4; W32(esp, 0x760173u); SPILL(); f_6cb190(); if (g_unwind) return; RELOAD();
/* 760173: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 760176: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 760177: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 760178: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76017f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 760180: mov esp, ebp */
  esp = ebp;
/* 760182: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 760183: ret  */
  esp += 4; SPILL(); return;
}

void f_760184(void) {
  LOAD_REGS();
L_760184: /* 760184: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 760187: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 76018c: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 76018f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 760190: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 760193: call 0x99caf8 */
  esp -= 4; W32(esp, 0x760198u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_760198(); return;
}

void f_760198(void) {
  LOAD_REGS();
L_760198: /* 760198: push 0xa05e10 */
  { uint32_t v = 0xa05e10u; esp -= 4; W32(esp, v); }
/* 76019d: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7601a2: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7601a8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7601a8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7601ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7601ad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7601af: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7601b4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7601b4: guest_badaddr(0x7601b4); return;
}

void f_760210(void) {
  LOAD_REGS();
L_760210: /* 760210: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 760212: push 0x9c9e6c */
  { uint32_t v = 0x9c9e6cu; esp -= 4; W32(esp, v); }
/* 760217: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76021d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76021e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 760225: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 760226: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 760227: mov esi, ecx */
  esi = ecx;
/* 760229: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 76022d: mov dword ptr [esp + 0x10], 3 */
  W32((uint32_t)(esp + 0x10u), 0x3u);
/* 760235: call 0x6c33c3 */
  esp -= 4; W32(esp, 0x76023au); SPILL(); f_6c33c3(); if (g_unwind) return; RELOAD();
/* 76023a: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 76023d: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 760242: call 0x6ca6cd */
  esp -= 4; W32(esp, 0x760247u); SPILL(); f_6ca6cd(); if (g_unwind) return; RELOAD();
/* 760247: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* 76024a: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 76024f: call 0x6ccf86 */
  esp -= 4; W32(esp, 0x760254u); SPILL(); f_6ccf86(); if (g_unwind) return; RELOAD();
/* 760254: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 760257: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 76025c: call 0x6cc98c */
  esp -= 4; W32(esp, 0x760261u); SPILL(); f_6cc98c(); if (g_unwind) return; RELOAD();
/* 760261: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 760264: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 76026c: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x760271u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 760271: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 760275: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 760276: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76027d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 760280: ret  */
  esp += 4; SPILL(); return;
}

void f_7602b0(void) {
  LOAD_REGS();
L_7602b0: /* 7602b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7602b2: push 0x9c9eb1 */
  { uint32_t v = 0x9c9eb1u; esp -= 4; W32(esp, v); }
/* 7602b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7602bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7602be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7602c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7602c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7602c7: mov esi, ecx */
  esi = ecx;
/* 7602c9: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 7602cc: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7602d0: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7602d6u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7602d6: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 7602d9: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 7602e1: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7602e7u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7602e7: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* 7602ea: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 7602ef: call 0x6c22bb */
  esp -= 4; W32(esp, 0x7602f4u); SPILL(); f_6c22bb(); if (g_unwind) return; RELOAD();
/* 7602f4: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 7602f7: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 7602fc: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x760302u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 760302: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 760306: mov eax, esi */
  eax = esi;
/* 760308: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 760309: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 760310: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 760313: ret  */
  esp += 4; SPILL(); return;
}

void f_760340(void) {
  LOAD_REGS();
L_760340: /* 760340: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 760342: push 0x9c9ef1 */
  { uint32_t v = 0x9c9ef1u; esp -= 4; W32(esp, v); }
/* 760347: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76034d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76034e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 760355: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 760356: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 760357: mov esi, ecx */
  esi = ecx;
/* 760359: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76035a: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 76035e: mov eax, edi */
  eax = edi;
/* 760360: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 760362: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 760364: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 760367: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 76036a: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 76036d: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 760370: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 760373: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 760376: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* 760379: lea ecx, [edi + 0x18] */
  ecx = (uint32_t)(edi + 0x18u);
/* 76037c: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 76037f: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 760382: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 760383: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 760386: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 76038a: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 76038d: call 0x6c1a00 */
  esp -= 4; W32(esp, 0x760392u); SPILL(); f_6c1a00(); if (g_unwind) return; RELOAD();
/* 760392: lea edx, [edi + 0x24] */
  edx = (uint32_t)(edi + 0x24u);
/* 760395: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 760396: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 760399: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7603a1: call 0x6c3332 */
  esp -= 4; W32(esp, 0x7603a6u); SPILL(); f_6c3332(); if (g_unwind) return; RELOAD();
/* 7603a6: lea eax, [edi + 0x30] */
  eax = (uint32_t)(edi + 0x30u);
/* 7603a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7603aa: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* 7603ad: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 7603b2: call 0x6c4746 */
  esp -= 4; W32(esp, 0x7603b7u); SPILL(); f_6c4746(); if (g_unwind) return; RELOAD();
/* 7603b7: add edi, 0x58 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7603ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7603bb: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 7603be: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* 7603c3: call 0x6c3850 */
  esp -= 4; W32(esp, 0x7603c8u); SPILL(); f_6c3850(); if (g_unwind) return; RELOAD();
/* 7603c8: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 7603cc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7603cd: mov eax, esi */
  eax = esi;
/* 7603cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7603d0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7603d7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7603da: ret 4 */
  esp += 8; SPILL(); return;
}

void f_760410(void) {
  LOAD_REGS();
L_760410: /* 760410: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 760412: push 0x9ca011 */
  { uint32_t v = 0x9ca011u; esp -= 4; W32(esp, v); }
/* 760417: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76041d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76041e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 760425: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 760426: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 760427: mov esi, ecx */
  esi = ecx;
/* 760429: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 76042d: mov dword ptr [esi], 0xa05e40 */
  W32((uint32_t)(esi), 0xa05e40u);
/* 760433: mov dword ptr [esp + 0x10], 0x12 */
  W32((uint32_t)(esp + 0x10u), 0x12u);
/* 76043b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x760441u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 760441: lea ecx, [esi + 0x330] */
  ecx = (uint32_t)(esi + 0x330u);
/* 760447: mov byte ptr [esp + 0x10], 0x11 */
  W8((uint32_t)(esp + 0x10u), 0x11u);
/* 76044c: call 0x6c8959 */
  esp -= 4; W32(esp, 0x760451u); SPILL(); f_6c8959(); if (g_unwind) return; RELOAD();
/* 760451: lea ecx, [esi + 0x31c] */
  ecx = (uint32_t)(esi + 0x31cu);
/* 760457: mov byte ptr [esp + 0x10], 0x10 */
  W8((uint32_t)(esp + 0x10u), 0x10u);
/* 76045c: call 0x6c1591 */
  esp -= 4; W32(esp, 0x760461u); SPILL(); f_6c1591(); if (g_unwind) return; RELOAD();
/* 760461: lea ecx, [esi + 0x2e8] */
  ecx = (uint32_t)(esi + 0x2e8u);
/* 760467: mov byte ptr [esp + 0x10], 0xf */
  W8((uint32_t)(esp + 0x10u), 0xfu);
/* 76046c: call 0x6c9a61 */
  esp -= 4; W32(esp, 0x760471u); SPILL(); f_6c9a61(); if (g_unwind) return; RELOAD();
/* 760471: lea ecx, [esi + 0x2dc] */
  ecx = (uint32_t)(esi + 0x2dcu);
/* 760477: mov byte ptr [esp + 0x10], 0xe */
  W8((uint32_t)(esp + 0x10u), 0xeu);
/* 76047c: call 0x6c117c */
  esp -= 4; W32(esp, 0x760481u); SPILL(); f_6c117c(); if (g_unwind) return; RELOAD();
/* 760481: lea ecx, [esi + 0x2d0] */
  ecx = (uint32_t)(esi + 0x2d0u);
/* 760487: mov byte ptr [esp + 0x10], 0xd */
  W8((uint32_t)(esp + 0x10u), 0xdu);
/* 76048c: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x760491u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 760491: lea ecx, [esi + 0x188] */
  ecx = (uint32_t)(esi + 0x188u);
/* 760497: mov byte ptr [esp + 0x10], 0xc */
  W8((uint32_t)(esp + 0x10u), 0xcu);
/* 76049c: call 0x6c1285 */
  esp -= 4; W32(esp, 0x7604a1u); SPILL(); f_6c1285(); if (g_unwind) return; RELOAD();
/* 7604a1: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 7604a7: mov byte ptr [esp + 0x10], 0xb */
  W8((uint32_t)(esp + 0x10u), 0xbu);
/* 7604ac: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x7604b1u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 7604b1: lea ecx, [esi + 0x170] */
  ecx = (uint32_t)(esi + 0x170u);
/* 7604b7: mov byte ptr [esp + 0x10], 0xa */
  W8((uint32_t)(esp + 0x10u), 0xau);
/* 7604bc: call 0x6c9543 */
  esp -= 4; W32(esp, 0x7604c1u); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 7604c1: lea ecx, [esi + 0x148] */
  ecx = (uint32_t)(esi + 0x148u);
/* 7604c7: mov byte ptr [esp + 0x10], 9 */
  W8((uint32_t)(esp + 0x10u), 0x9u);
/* 7604cc: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x7604d1u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 7604d1: lea ecx, [esi + 0x13c] */
  ecx = (uint32_t)(esi + 0x13cu);
/* 7604d7: mov byte ptr [esp + 0x10], 8 */
  W8((uint32_t)(esp + 0x10u), 0x8u);
/* 7604dc: call 0x6c9543 */
  esp -= 4; W32(esp, 0x7604e1u); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 7604e1: lea ecx, [esi + 0x130] */
  ecx = (uint32_t)(esi + 0x130u);
/* 7604e7: mov byte ptr [esp + 0x10], 7 */
  W8((uint32_t)(esp + 0x10u), 0x7u);
/* 7604ec: call 0x6c4499 */
  esp -= 4; W32(esp, 0x7604f1u); SPILL(); f_6c4499(); if (g_unwind) return; RELOAD();
/* 7604f1: lea ecx, [esi + 0x11c] */
  ecx = (uint32_t)(esi + 0x11cu);
/* 7604f7: mov byte ptr [esp + 0x10], 6 */
  W8((uint32_t)(esp + 0x10u), 0x6u);
/* 7604fc: call 0x6c3936 */
  esp -= 4; W32(esp, 0x760501u); SPILL(); f_6c3936(); if (g_unwind) return; RELOAD();
/* 760501: lea ecx, [esi + 0x110] */
  ecx = (uint32_t)(esi + 0x110u);
/* 760507: mov byte ptr [esp + 0x10], 5 */
  W8((uint32_t)(esp + 0x10u), 0x5u);
/* 76050c: call 0x6c3936 */
  esp -= 4; W32(esp, 0x760511u); SPILL(); f_6c3936(); if (g_unwind) return; RELOAD();
/* 760511: lea ecx, [esi + 0x104] */
  ecx = (uint32_t)(esi + 0x104u);
/* 760517: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* 76051c: call 0x6c76da */
  esp -= 4; W32(esp, 0x760521u); SPILL(); f_6c76da(); if (g_unwind) return; RELOAD();
/* 760521: lea ecx, [esi + 0xf8] */
  ecx = (uint32_t)(esi + 0xf8u);
/* 760527: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 76052c: call 0x6c1ec4 */
  esp -= 4; W32(esp, 0x760531u); SPILL(); f_6c1ec4(); if (g_unwind) return; RELOAD();
/* 760531: lea ecx, [esi + 0xb4] */
  ecx = (uint32_t)(esi + 0xb4u);
/* 760537: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 76053c: call 0x6c31ac */
  esp -= 4; W32(esp, 0x760541u); SPILL(); f_6c31ac(); if (g_unwind) return; RELOAD();
/* 760541: lea ecx, [esi + 0xa8] */
  ecx = (uint32_t)(esi + 0xa8u);
/* 760547: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 76054c: call 0x6c3b43 */
  esp -= 4; W32(esp, 0x760551u); SPILL(); f_6c3b43(); if (g_unwind) return; RELOAD();
/* 760551: lea ecx, [esi + 0x9c] */
  ecx = (uint32_t)(esi + 0x9cu);
/* 760557: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 76055c: call 0x6ccbee */
  esp -= 4; W32(esp, 0x760561u); SPILL(); f_6ccbee(); if (g_unwind) return; RELOAD();
/* 760561: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 760569: mov ecx, esi */
  ecx = esi;
/* 76056b: call 0x6ccc84 */
  esp -= 4; W32(esp, 0x760570u); SPILL(); f_6ccc84(); if (g_unwind) return; RELOAD();
/* 760570: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 760574: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 760575: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76057c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76057f: ret  */
  esp += 4; SPILL(); return;
}

void f_7605e0(void) {
  LOAD_REGS();
L_7605e0: /* 7605e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7605e2: push 0x9ca15b */
  { uint32_t v = 0x9ca15bu; esp -= 4; W32(esp, v); }
/* 7605e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7605ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7605ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7605f5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7605f8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7605f9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7605fa: mov esi, ecx */
  esi = ecx;
/* 7605fc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7605fd: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 760601: call 0x6cc93c */
  esp -= 4; W32(esp, 0x760606u); SPILL(); f_6cc93c(); if (g_unwind) return; RELOAD();
/* 760606: xor ebp, ebp */
  ebp = 0;
/* 760608: lea ecx, [esi + 0x7c] */
  ecx = (uint32_t)(esi + 0x7cu);
/* 76060b: mov dword ptr [esp + 0x1c], ebp */
  W32((uint32_t)(esp + 0x1cu), ebp);
/* 76060f: mov dword ptr [esi], 0xa05e40 */
  W32((uint32_t)(esi), 0xa05e40u);
/* 760615: call 0x6c8f26 */
  esp -= 4; W32(esp, 0x76061au); SPILL(); f_6c8f26(); if (g_unwind) return; RELOAD();
/* 76061a: lea ecx, [esi + 0xa8] */
  ecx = (uint32_t)(esi + 0xa8u);
/* 760620: mov byte ptr [esp + 0x1c], 1 */
  W8((uint32_t)(esp + 0x1cu), 0x1u);
/* 760625: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x76062bu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 76062b: lea ecx, [esi + 0xb4] */
  ecx = (uint32_t)(esi + 0xb4u);
/* 760631: mov byte ptr [esp + 0x1c], 2 */
  W8((uint32_t)(esp + 0x1cu), 0x2u);
/* 760636: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x76063cu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 76063c: lea ecx, [esi + 0xc0] */
  ecx = (uint32_t)(esi + 0xc0u);
/* 760642: mov byte ptr [esp + 0x1c], 3 */
  W8((uint32_t)(esp + 0x1cu), 0x3u);
/* 760647: call dword ptr [0xcfa434] */
  esp -= 4; W32(esp, 0x76064du); SPILL(); f_4e125d(); if (g_unwind) return; /* Core!??0FCoords@@QAE@XZ */ RELOAD();
/* 76064d: lea ecx, [esi + 0xf8] */
  ecx = (uint32_t)(esi + 0xf8u);
/* 760653: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x760659u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 760659: lea ecx, [esi + 0x104] */
  ecx = (uint32_t)(esi + 0x104u);
/* 76065f: mov byte ptr [esp + 0x1c], 4 */
  W8((uint32_t)(esp + 0x1cu), 0x4u);
/* 760664: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x76066au); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 76066a: lea ecx, [esi + 0x110] */
  ecx = (uint32_t)(esi + 0x110u);
/* 760670: mov byte ptr [esp + 0x1c], 5 */
  W8((uint32_t)(esp + 0x1cu), 0x5u);
/* 760675: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x76067bu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 76067b: lea ecx, [esi + 0x11c] */
  ecx = (uint32_t)(esi + 0x11cu);
/* 760681: mov byte ptr [esp + 0x1c], 6 */
  W8((uint32_t)(esp + 0x1cu), 0x6u);
/* 760686: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x76068cu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 76068c: lea ecx, [esi + 0x130] */
  ecx = (uint32_t)(esi + 0x130u);
/* 760692: mov byte ptr [esp + 0x1c], 7 */
  W8((uint32_t)(esp + 0x1cu), 0x7u);
/* 760697: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x76069du); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 76069d: lea ecx, [esi + 0x13c] */
  ecx = (uint32_t)(esi + 0x13cu);
/* 7606a3: mov byte ptr [esp + 0x1c], 8 */
  W8((uint32_t)(esp + 0x1cu), 0x8u);
/* 7606a8: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7606aeu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7606ae: lea ecx, [esi + 0x148] */
  ecx = (uint32_t)(esi + 0x148u);
/* 7606b4: mov byte ptr [esp + 0x1c], 9 */
  W8((uint32_t)(esp + 0x1cu), 0x9u);
/* 7606b9: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7606bfu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7606bf: lea ecx, [esi + 0x158] */
  ecx = (uint32_t)(esi + 0x158u);
/* 7606c5: mov byte ptr [esp + 0x1c], 0xa */
  W8((uint32_t)(esp + 0x1cu), 0xau);
/* 7606ca: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x7606d0u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 7606d0: lea ecx, [esi + 0x16c] */
  ecx = (uint32_t)(esi + 0x16cu);
/* 7606d6: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x7606dcu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 7606dc: lea ecx, [esi + 0x170] */
  ecx = (uint32_t)(esi + 0x170u);
/* 7606e2: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7606e8u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7606e8: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 7606ee: mov byte ptr [esp + 0x1c], 0xb */
  W8((uint32_t)(esp + 0x1cu), 0xbu);
/* 7606f3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7606f9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7606f9: lea ecx, [esi + 0x188] */
  ecx = (uint32_t)(esi + 0x188u);
/* 7606ff: mov byte ptr [esp + 0x1c], 0xc */
  W8((uint32_t)(esp + 0x1cu), 0xcu);
/* 760704: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x76070au); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 76070a: lea ecx, [esi + 0x1b4] */
  ecx = (uint32_t)(esi + 0x1b4u);
/* 760710: mov byte ptr [esp + 0x1c], 0xd */
  W8((uint32_t)(esp + 0x1cu), 0xdu);
/* 760715: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x76071bu); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 76071b: lea ecx, [esi + 0x1cc] */
  ecx = (uint32_t)(esi + 0x1ccu);
/* 760721: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x760727u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 760727: lea ecx, [esi + 0x1d8] */
  ecx = (uint32_t)(esi + 0x1d8u);
/* 76072d: call dword ptr [0xcfa434] */
  esp -= 4; W32(esp, 0x760733u); SPILL(); f_4e125d(); if (g_unwind) return; /* Core!??0FCoords@@QAE@XZ */ RELOAD();
/* 760733: lea ecx, [esi + 0x210] */
  ecx = (uint32_t)(esi + 0x210u);
/* 760739: call dword ptr [0xcfa434] */
  esp -= 4; W32(esp, 0x76073fu); SPILL(); f_4e125d(); if (g_unwind) return; /* Core!??0FCoords@@QAE@XZ */ RELOAD();
/* 76073f: lea ecx, [esi + 0x240] */
  ecx = (uint32_t)(esi + 0x240u);
/* 760745: call dword ptr [0xcfa434] */
  esp -= 4; W32(esp, 0x76074bu); SPILL(); f_4e125d(); if (g_unwind) return; /* Core!??0FCoords@@QAE@XZ */ RELOAD();
/* 76074b: lea ecx, [esi + 0x270] */
  ecx = (uint32_t)(esi + 0x270u);
/* 760751: call dword ptr [0xcfa434] */
  esp -= 4; W32(esp, 0x760757u); SPILL(); f_4e125d(); if (g_unwind) return; /* Core!??0FCoords@@QAE@XZ */ RELOAD();
/* 760757: lea ecx, [esi + 0x2a0] */
  ecx = (uint32_t)(esi + 0x2a0u);
/* 76075d: call dword ptr [0xcfa434] */
  esp -= 4; W32(esp, 0x760763u); SPILL(); f_4e125d(); if (g_unwind) return; /* Core!??0FCoords@@QAE@XZ */ RELOAD();
/* 760763: lea ecx, [esi + 0x2d0] */
  ecx = (uint32_t)(esi + 0x2d0u);
/* 760769: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x76076fu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 76076f: lea ecx, [esi + 0x2dc] */
  ecx = (uint32_t)(esi + 0x2dcu);
/* 760775: mov byte ptr [esp + 0x1c], 0xe */
  W8((uint32_t)(esp + 0x1cu), 0xeu);
/* 76077a: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x760780u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 760780: lea ecx, [esi + 0x2e8] */
  ecx = (uint32_t)(esi + 0x2e8u);
/* 760786: mov byte ptr [esp + 0x1c], 0xf */
  W8((uint32_t)(esp + 0x1cu), 0xfu);
/* 76078b: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x760791u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 760791: lea ecx, [esi + 0x2fc] */
  ecx = (uint32_t)(esi + 0x2fcu);
/* 760797: mov byte ptr [esp + 0x1c], 0x10 */
  W8((uint32_t)(esp + 0x1cu), 0x10u);
/* 76079c: call dword ptr [0xcfa370] */
  esp -= 4; W32(esp, 0x7607a2u); SPILL(); f_4e205e(); if (g_unwind) return; /* Core!??0FBox@@QAE@XZ */ RELOAD();
/* 7607a2: lea ecx, [esi + 0x31c] */
  ecx = (uint32_t)(esi + 0x31cu);
/* 7607a8: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7607aeu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7607ae: lea edi, [esi + 0x330] */
  edi = (uint32_t)(esi + 0x330u);
/* 7607b4: mov ecx, edi */
  ecx = edi;
/* 7607b6: mov byte ptr [esp + 0x1c], 0x11 */
  W8((uint32_t)(esp + 0x1cu), 0x11u);
/* 7607bb: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 7607bf: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7607c5u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7607c5: mov ecx, edi */
  ecx = edi;
/* 7607c7: mov byte ptr [esp + 0x1c], 0x12 */
  W8((uint32_t)(esp + 0x1cu), 0x12u);
/* 7607cc: mov dword ptr [edi + 0xc], ebp */
  W32((uint32_t)(edi + 0xcu), ebp);
/* 7607cf: mov dword ptr [edi + 0x10], 8 */
  W32((uint32_t)(edi + 0x10u), 0x8u);
/* 7607d6: call 0x6ca2bd */
  esp -= 4; W32(esp, 0x7607dbu); SPILL(); f_6ca2bd(); if (g_unwind) return; RELOAD();
/* 7607db: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7607df: mov dword ptr [esi + 0x15c], ebp */
  W32((uint32_t)(esi + 0x15cu), ebp);
/* 7607e5: mov dword ptr [esi + 0x2f4], ebp */
  W32((uint32_t)(esi + 0x2f4u), ebp);
/* 7607eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7607ec: mov dword ptr [esi + 0x2f8], 0xffffffff */
  W32((uint32_t)(esi + 0x2f8u), 0xffffffffu);
/* 7607f6: mov eax, esi */
  eax = esi;
/* 7607f8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7607f9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7607fa: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 760801: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 760804: ret  */
  esp += 4; SPILL(); return;
}

void f_7608a0(void) {
  LOAD_REGS();
L_7608a0: /* 7608a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7608a2: push 0x9ca2a3 */
  { uint32_t v = 0x9ca2a3u; esp -= 4; W32(esp, v); }
/* 7608a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7608ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7608ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7608b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7608b6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7608b7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7608b8: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 7608bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7608bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7608be: mov ebx, ecx */
  ebx = ecx;
/* 7608c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7608c1: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 7608c5: call 0x6c43b8 */
  esp -= 4; W32(esp, 0x7608cau); SPILL(); f_6c43b8(); if (g_unwind) return; RELOAD();
/* 7608ca: mov dword ptr [ebx], 0xa05e40 */
  W32((uint32_t)(ebx), 0xa05e40u);
/* 7608d0: mov dword ptr [ebx + 0x7c], 0x9f91d0 */
  W32((uint32_t)(ebx + 0x7cu), 0x9f91d0u);
/* 7608d7: mov eax, dword ptr [ebp + 0x80] */
  eax = R32((uint32_t)(ebp + 0x80u));
/* 7608dd: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
/* 7608e3: mov ecx, dword ptr [ebp + 0x84] */
  ecx = R32((uint32_t)(ebp + 0x84u));
/* 7608e9: mov dword ptr [ebx + 0x84], ecx */
  W32((uint32_t)(ebx + 0x84u), ecx);
/* 7608ef: mov edx, dword ptr [ebp + 0x88] */
  edx = R32((uint32_t)(ebp + 0x88u));
/* 7608f5: mov dword ptr [ebx + 0x88], edx */
  W32((uint32_t)(ebx + 0x88u), edx);
/* 7608fb: mov eax, dword ptr [ebp + 0x8c] */
  eax = R32((uint32_t)(ebp + 0x8cu));
/* 760901: mov dword ptr [ebx + 0x8c], eax */
  W32((uint32_t)(ebx + 0x8cu), eax);
/* 760907: mov ecx, dword ptr [ebp + 0x90] */
  ecx = R32((uint32_t)(ebp + 0x90u));
/* 76090d: mov dword ptr [ebx + 0x90], ecx */
  W32((uint32_t)(ebx + 0x90u), ecx);
/* 760913: mov edx, dword ptr [ebp + 0x94] */
  edx = R32((uint32_t)(ebp + 0x94u));
/* 760919: lea ecx, [ebp + 0x9c] */
  ecx = (uint32_t)(ebp + 0x9cu);
/* 76091f: mov dword ptr [ebx + 0x94], edx */
  W32((uint32_t)(ebx + 0x94u), edx);
/* 760925: mov eax, dword ptr [ebp + 0x98] */
  eax = R32((uint32_t)(ebp + 0x98u));
/* 76092b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76092c: lea ecx, [ebx + 0x9c] */
  ecx = (uint32_t)(ebx + 0x9cu);
/* 760932: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 76093a: mov dword ptr [ebx + 0x98], eax */
  W32((uint32_t)(ebx + 0x98u), eax);
/* 760940: call 0x6c3e22 */
  esp -= 4; W32(esp, 0x760945u); SPILL(); f_6c3e22(); if (g_unwind) return; RELOAD();
/* 760945: lea edx, [ebp + 0xa8] */
  edx = (uint32_t)(ebp + 0xa8u);
/* 76094b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76094c: lea ecx, [ebx + 0xa8] */
  ecx = (uint32_t)(ebx + 0xa8u);
/* 760952: mov byte ptr [esp + 0x20], 1 */
  W8((uint32_t)(esp + 0x20u), 0x1u);
/* 760957: call 0x6cac40 */
  esp -= 4; W32(esp, 0x76095cu); SPILL(); f_6cac40(); if (g_unwind) return; RELOAD();
/* 76095c: lea eax, [ebp + 0xb4] */
  eax = (uint32_t)(ebp + 0xb4u);
/* 760962: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 760963: lea ecx, [ebx + 0xb4] */
  ecx = (uint32_t)(ebx + 0xb4u);
/* 760969: mov byte ptr [esp + 0x20], 2 */
  W8((uint32_t)(esp + 0x20u), 0x2u);
/* 76096e: call 0x6c3689 */
  esp -= 4; W32(esp, 0x760973u); SPILL(); f_6c3689(); if (g_unwind) return; RELOAD();
/* 760973: lea esi, [ebp + 0xc0] */
  esi = (uint32_t)(ebp + 0xc0u);
/* 760979: lea edi, [ebx + 0xc0] */
  edi = (uint32_t)(ebx + 0xc0u);
/* 76097f: mov ecx, 0xc */
  ecx = 0xcu;
/* 760984: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 760986: mov ecx, dword ptr [ebp + 0xf0] */
  ecx = R32((uint32_t)(ebp + 0xf0u));
/* 76098c: mov dword ptr [ebx + 0xf0], ecx */
  W32((uint32_t)(ebx + 0xf0u), ecx);
/* 760992: mov edx, dword ptr [ebp + 0xf4] */
  edx = R32((uint32_t)(ebp + 0xf4u));
/* 760998: lea eax, [ebp + 0xf8] */
  eax = (uint32_t)(ebp + 0xf8u);
/* 76099e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76099f: lea ecx, [ebx + 0xf8] */
  ecx = (uint32_t)(ebx + 0xf8u);
/* 7609a5: mov byte ptr [esp + 0x20], 3 */
  W8((uint32_t)(esp + 0x20u), 0x3u);
/* 7609aa: mov dword ptr [ebx + 0xf4], edx */
  W32((uint32_t)(ebx + 0xf4u), edx);
/* 7609b0: call 0x6c7ed7 */
  esp -= 4; W32(esp, 0x7609b5u); SPILL(); f_6c7ed7(); if (g_unwind) return; RELOAD();
/* 7609b5: lea ecx, [ebp + 0x104] */
  ecx = (uint32_t)(ebp + 0x104u);
/* 7609bb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7609bc: lea ecx, [ebx + 0x104] */
  ecx = (uint32_t)(ebx + 0x104u);
/* 7609c2: mov byte ptr [esp + 0x20], 4 */
  W8((uint32_t)(esp + 0x20u), 0x4u);
/* 7609c7: call 0x6c569b */
  esp -= 4; W32(esp, 0x7609ccu); SPILL(); f_6c569b(); if (g_unwind) return; RELOAD();
/* 7609cc: lea edx, [ebp + 0x110] */
  edx = (uint32_t)(ebp + 0x110u);
/* 7609d2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7609d3: lea ecx, [ebx + 0x110] */
  ecx = (uint32_t)(ebx + 0x110u);
/* 7609d9: mov byte ptr [esp + 0x20], 5 */
  W8((uint32_t)(esp + 0x20u), 0x5u);
/* 7609de: call 0x6c2a72 */
  esp -= 4; W32(esp, 0x7609e3u); SPILL(); f_6c2a72(); if (g_unwind) return; RELOAD();
/* 7609e3: lea eax, [ebp + 0x11c] */
  eax = (uint32_t)(ebp + 0x11cu);
/* 7609e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7609ea: lea ecx, [ebx + 0x11c] */
  ecx = (uint32_t)(ebx + 0x11cu);
/* 7609f0: mov byte ptr [esp + 0x20], 6 */
  W8((uint32_t)(esp + 0x20u), 0x6u);
/* 7609f5: call 0x6c2a72 */
  esp -= 4; W32(esp, 0x7609fau); SPILL(); f_6c2a72(); if (g_unwind) return; RELOAD();
/* 7609fa: mov ecx, dword ptr [ebp + 0x128] */
  ecx = R32((uint32_t)(ebp + 0x128u));
/* 760a00: mov dword ptr [ebx + 0x128], ecx */
  W32((uint32_t)(ebx + 0x128u), ecx);
/* 760a06: mov edx, dword ptr [ebp + 0x12c] */
  edx = R32((uint32_t)(ebp + 0x12cu));
/* 760a0c: mov byte ptr [esp + 0x1c], 7 */
  W8((uint32_t)(esp + 0x1cu), 0x7u);
/* 760a11: mov dword ptr [ebx + 0x12c], edx */
  W32((uint32_t)(ebx + 0x12cu), edx);
/* 760a17: lea eax, [ebp + 0x130] */
  eax = (uint32_t)(ebp + 0x130u);
/* 760a1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 760a1e: lea ecx, [ebx + 0x130] */
  ecx = (uint32_t)(ebx + 0x130u);
/* 760a24: call 0x6c7081 */
  esp -= 4; W32(esp, 0x760a29u); SPILL(); f_6c7081(); if (g_unwind) return; RELOAD();
/* 760a29: lea ecx, [ebp + 0x13c] */
  ecx = (uint32_t)(ebp + 0x13cu);
/* 760a2f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 760a30: lea ecx, [ebx + 0x13c] */
  ecx = (uint32_t)(ebx + 0x13cu);
/* 760a36: mov byte ptr [esp + 0x20], 8 */
  W8((uint32_t)(esp + 0x20u), 0x8u);
/* 760a3b: call 0x6cbbae */
  esp -= 4; W32(esp, 0x760a40u); SPILL(); f_6cbbae(); if (g_unwind) return; RELOAD();
/* 760a40: lea edx, [ebp + 0x148] */
  edx = (uint32_t)(ebp + 0x148u);
/* 760a46: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 760a47: lea ecx, [ebx + 0x148] */
  ecx = (uint32_t)(ebx + 0x148u);
/* 760a4d: mov byte ptr [esp + 0x20], 9 */
  W8((uint32_t)(esp + 0x20u), 0x9u);
/* 760a52: call 0x6c1a00 */
  esp -= 4; W32(esp, 0x760a57u); SPILL(); f_6c1a00(); if (g_unwind) return; RELOAD();
/* 760a57: mov eax, dword ptr [ebp + 0x154] */
  eax = R32((uint32_t)(ebp + 0x154u));
/* 760a5d: mov dword ptr [ebx + 0x154], eax */
  W32((uint32_t)(ebx + 0x154u), eax);
/* 760a63: mov ecx, dword ptr [ebp + 0x158] */
  ecx = R32((uint32_t)(ebp + 0x158u));
/* 760a69: mov dword ptr [ebx + 0x158], ecx */
  W32((uint32_t)(ebx + 0x158u), ecx);
/* 760a6f: mov edx, dword ptr [ebp + 0x15c] */
  edx = R32((uint32_t)(ebp + 0x15cu));
/* 760a75: mov dword ptr [ebx + 0x15c], edx */
  W32((uint32_t)(ebx + 0x15cu), edx);
/* 760a7b: mov eax, dword ptr [ebp + 0x160] */
  eax = R32((uint32_t)(ebp + 0x160u));
/* 760a81: mov dword ptr [ebx + 0x160], eax */
  W32((uint32_t)(ebx + 0x160u), eax);
/* 760a87: mov ecx, dword ptr [ebp + 0x164] */
  ecx = R32((uint32_t)(ebp + 0x164u));
/* 760a8d: mov dword ptr [ebx + 0x164], ecx */
  W32((uint32_t)(ebx + 0x164u), ecx);
/* 760a93: mov edx, dword ptr [ebp + 0x168] */
  edx = R32((uint32_t)(ebp + 0x168u));
/* 760a99: lea ecx, [ebp + 0x170] */
  ecx = (uint32_t)(ebp + 0x170u);
/* 760a9f: mov dword ptr [ebx + 0x168], edx */
  W32((uint32_t)(ebx + 0x168u), edx);
/* 760aa5: mov eax, dword ptr [ebp + 0x16c] */
  eax = R32((uint32_t)(ebp + 0x16cu));
/* 760aab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 760aac: lea ecx, [ebx + 0x170] */
  ecx = (uint32_t)(ebx + 0x170u);
/* 760ab2: mov byte ptr [esp + 0x20], 0xa */
  W8((uint32_t)(esp + 0x20u), 0xau);
/* 760ab7: mov dword ptr [ebx + 0x16c], eax */
  W32((uint32_t)(ebx + 0x16cu), eax);
/* 760abd: call 0x6cbbae */
  esp -= 4; W32(esp, 0x760ac2u); SPILL(); f_6cbbae(); if (g_unwind) return; RELOAD();
/* 760ac2: lea edx, [ebp + 0x17c] */
  edx = (uint32_t)(ebp + 0x17cu);
/* 760ac8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 760ac9: lea ecx, [ebx + 0x17c] */
  ecx = (uint32_t)(ebx + 0x17cu);
/* 760acf: mov byte ptr [esp + 0x20], 0xb */
  W8((uint32_t)(esp + 0x20u), 0xbu);
/* 760ad4: call 0x6c1a00 */
  esp -= 4; W32(esp, 0x760ad9u); SPILL(); f_6c1a00(); if (g_unwind) return; RELOAD();
/* 760ad9: lea eax, [ebp + 0x188] */
  eax = (uint32_t)(ebp + 0x188u);
/* 760adf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 760ae0: lea ecx, [ebx + 0x188] */
  ecx = (uint32_t)(ebx + 0x188u);
/* 760ae6: mov byte ptr [esp + 0x20], 0xc */
  W8((uint32_t)(esp + 0x20u), 0xcu);
/* 760aeb: call 0x6c9fca */
  esp -= 4; W32(esp, 0x760af0u); SPILL(); f_6c9fca(); if (g_unwind) return; RELOAD();
/* 760af0: mov ecx, dword ptr [ebp + 0x194] */
  ecx = R32((uint32_t)(ebp + 0x194u));
/* 760af6: mov dword ptr [ebx + 0x194], ecx */
  W32((uint32_t)(ebx + 0x194u), ecx);
/* 760afc: mov edx, dword ptr [ebp + 0x198] */
  edx = R32((uint32_t)(ebp + 0x198u));
/* 760b02: mov dword ptr [ebx + 0x198], edx */
  W32((uint32_t)(ebx + 0x198u), edx);
/* 760b08: mov eax, dword ptr [ebp + 0x19c] */
  eax = R32((uint32_t)(ebp + 0x19cu));
/* 760b0e: mov dword ptr [ebx + 0x19c], eax */
  W32((uint32_t)(ebx + 0x19cu), eax);
/* 760b14: mov ecx, dword ptr [ebp + 0x1a0] */
  ecx = R32((uint32_t)(ebp + 0x1a0u));
/* 760b1a: mov dword ptr [ebx + 0x1a0], ecx */
  W32((uint32_t)(ebx + 0x1a0u), ecx);
/* 760b20: mov edx, dword ptr [ebp + 0x1a4] */
  edx = R32((uint32_t)(ebp + 0x1a4u));
/* 760b26: mov dword ptr [ebx + 0x1a4], edx */
  W32((uint32_t)(ebx + 0x1a4u), edx);
/* 760b2c: lea eax, [ebp + 0x1a8] */
  eax = (uint32_t)(ebp + 0x1a8u);
/* 760b32: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 760b34: lea ecx, [ebx + 0x1a8] */
  ecx = (uint32_t)(ebx + 0x1a8u);
/* 760b3a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 760b3c: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 760b3f: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 760b42: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 760b45: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 760b48: lea ecx, [ebp + 0x1b4] */
  ecx = (uint32_t)(ebp + 0x1b4u);
/* 760b4e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 760b50: lea edx, [ebx + 0x1b4] */
  edx = (uint32_t)(ebx + 0x1b4u);
/* 760b56: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 760b58: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 760b5b: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 760b5e: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 760b61: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 760b64: lea edx, [ebp + 0x1c0] */
  edx = (uint32_t)(ebp + 0x1c0u);
/* 760b6a: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 760b6c: lea eax, [ebx + 0x1c0] */
  eax = (uint32_t)(ebx + 0x1c0u);
/* 760b72: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 760b74: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 760b77: mov byte ptr [esp + 0x1c], 0xd */
  W8((uint32_t)(esp + 0x1cu), 0xdu);
/* 760b7c: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 760b7f: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 760b82: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 760b85: lea eax, [ebp + 0x1cc] */
  eax = (uint32_t)(ebp + 0x1ccu);
/* 760b8b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 760b8d: lea ecx, [ebx + 0x1cc] */
  ecx = (uint32_t)(ebx + 0x1ccu);
/* 760b93: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 760b95: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 760b98: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 760b9b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 760b9e: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 760ba1: lea esi, [ebp + 0x1d8] */
  esi = (uint32_t)(ebp + 0x1d8u);
/* 760ba7: lea edi, [ebx + 0x1d8] */
  edi = (uint32_t)(ebx + 0x1d8u);
/* 760bad: mov ecx, 0xc */
  ecx = 0xcu;
/* 760bb2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 760bb4: mov ecx, dword ptr [ebp + 0x208] */
  ecx = R32((uint32_t)(ebp + 0x208u));
/* 760bba: mov dword ptr [ebx + 0x208], ecx */
  W32((uint32_t)(ebx + 0x208u), ecx);
/* 760bc0: mov edx, dword ptr [ebp + 0x20c] */
  edx = R32((uint32_t)(ebp + 0x20cu));
/* 760bc6: mov dword ptr [ebx + 0x20c], edx */
  W32((uint32_t)(ebx + 0x20cu), edx);
/* 760bcc: lea esi, [ebp + 0x210] */
  esi = (uint32_t)(ebp + 0x210u);
/* 760bd2: lea edi, [ebx + 0x210] */
  edi = (uint32_t)(ebx + 0x210u);
/* 760bd8: mov ecx, 0xc */
  ecx = 0xcu;
/* 760bdd: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 760bdf: lea esi, [ebp + 0x240] */
  esi = (uint32_t)(ebp + 0x240u);
/* 760be5: lea edi, [ebx + 0x240] */
  edi = (uint32_t)(ebx + 0x240u);
/* 760beb: mov ecx, 0xc */
  ecx = 0xcu;
/* 760bf0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 760bf2: lea esi, [ebp + 0x270] */
  esi = (uint32_t)(ebp + 0x270u);
/* 760bf8: lea edi, [ebx + 0x270] */
  edi = (uint32_t)(ebx + 0x270u);
/* 760bfe: mov ecx, 0xc */
  ecx = 0xcu;
/* 760c03: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 760c05: lea esi, [ebp + 0x2a0] */
  esi = (uint32_t)(ebp + 0x2a0u);
/* 760c0b: lea edi, [ebx + 0x2a0] */
  edi = (uint32_t)(ebx + 0x2a0u);
/* 760c11: mov ecx, 0xc */
  ecx = 0xcu;
/* 760c16: lea eax, [ebp + 0x2d0] */
  eax = (uint32_t)(ebp + 0x2d0u);
/* 760c1c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 760c1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 760c1f: lea ecx, [ebx + 0x2d0] */
  ecx = (uint32_t)(ebx + 0x2d0u);
/* 760c25: call 0x6c1a00 */
  esp -= 4; W32(esp, 0x760c2au); SPILL(); f_6c1a00(); if (g_unwind) return; RELOAD();
/* 760c2a: lea ecx, [ebp + 0x2dc] */
  ecx = (uint32_t)(ebp + 0x2dcu);
/* 760c30: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 760c31: lea ecx, [ebx + 0x2dc] */
  ecx = (uint32_t)(ebx + 0x2dcu);
/* 760c37: mov byte ptr [esp + 0x20], 0xe */
  W8((uint32_t)(esp + 0x20u), 0xeu);
/* 760c3c: call 0x6c16a9 */
  esp -= 4; W32(esp, 0x760c41u); SPILL(); f_6c16a9(); if (g_unwind) return; RELOAD();
/* 760c41: lea edx, [ebp + 0x2e8] */
  edx = (uint32_t)(ebp + 0x2e8u);
/* 760c47: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 760c48: lea ecx, [ebx + 0x2e8] */
  ecx = (uint32_t)(ebx + 0x2e8u);
/* 760c4e: mov byte ptr [esp + 0x20], 0xf */
  W8((uint32_t)(esp + 0x20u), 0xfu);
/* 760c53: call 0x6c6839 */
  esp -= 4; W32(esp, 0x760c58u); SPILL(); f_6c6839(); if (g_unwind) return; RELOAD();
/* 760c58: mov eax, dword ptr [ebp + 0x2f4] */
  eax = R32((uint32_t)(ebp + 0x2f4u));
/* 760c5e: mov dword ptr [ebx + 0x2f4], eax */
  W32((uint32_t)(ebx + 0x2f4u), eax);
/* 760c64: mov ecx, dword ptr [ebp + 0x2f8] */
  ecx = R32((uint32_t)(ebp + 0x2f8u));
/* 760c6a: mov dword ptr [ebx + 0x2f8], ecx */
  W32((uint32_t)(ebx + 0x2f8u), ecx);
/* 760c70: lea esi, [ebp + 0x2fc] */
  esi = (uint32_t)(ebp + 0x2fcu);
/* 760c76: lea edi, [ebx + 0x2fc] */
  edi = (uint32_t)(ebx + 0x2fcu);
/* 760c7c: mov ecx, 7 */
  ecx = 0x7u;
/* 760c81: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 760c83: mov edx, dword ptr [ebp + 0x318] */
  edx = R32((uint32_t)(ebp + 0x318u));
/* 760c89: lea eax, [ebp + 0x31c] */
  eax = (uint32_t)(ebp + 0x31cu);
/* 760c8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 760c90: lea ecx, [ebx + 0x31c] */
  ecx = (uint32_t)(ebx + 0x31cu);
/* 760c96: mov byte ptr [esp + 0x20], 0x10 */
  W8((uint32_t)(esp + 0x20u), 0x10u);
/* 760c9b: mov dword ptr [ebx + 0x318], edx */
  W32((uint32_t)(ebx + 0x318u), edx);
/* 760ca1: call 0x6cc964 */
  esp -= 4; W32(esp, 0x760ca6u); SPILL(); f_6cc964(); if (g_unwind) return; RELOAD();
/* 760ca6: mov ecx, dword ptr [ebp + 0x328] */
  ecx = R32((uint32_t)(ebp + 0x328u));
/* 760cac: mov dword ptr [ebx + 0x328], ecx */
  W32((uint32_t)(ebx + 0x328u), ecx);
/* 760cb2: mov edx, dword ptr [ebp + 0x32c] */
  edx = R32((uint32_t)(ebp + 0x32cu));
/* 760cb8: lea eax, [ebp + 0x330] */
  eax = (uint32_t)(ebp + 0x330u);
/* 760cbe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 760cbf: lea ecx, [ebx + 0x330] */
  ecx = (uint32_t)(ebx + 0x330u);
/* 760cc5: mov byte ptr [esp + 0x20], 0x11 */
  W8((uint32_t)(esp + 0x20u), 0x11u);
/* 760cca: mov dword ptr [ebx + 0x32c], edx */
  W32((uint32_t)(ebx + 0x32cu), edx);
/* 760cd0: call 0x6c32ce */
  esp -= 4; W32(esp, 0x760cd5u); SPILL(); f_6c32ce(); if (g_unwind) return; RELOAD();
/* 760cd5: mov ecx, dword ptr [ebp + 0x344] */
  ecx = R32((uint32_t)(ebp + 0x344u));
/* 760cdb: mov dword ptr [ebx + 0x344], ecx */
  W32((uint32_t)(ebx + 0x344u), ecx);
/* 760ce1: mov edx, dword ptr [ebp + 0x348] */
  edx = R32((uint32_t)(ebp + 0x348u));
/* 760ce7: mov dword ptr [ebx + 0x348], edx */
  W32((uint32_t)(ebx + 0x348u), edx);
/* 760ced: mov eax, dword ptr [ebp + 0x34c] */
  eax = R32((uint32_t)(ebp + 0x34cu));
/* 760cf3: mov dword ptr [ebx + 0x34c], eax */
  W32((uint32_t)(ebx + 0x34cu), eax);
/* 760cf9: mov ecx, dword ptr [ebp + 0x350] */
  ecx = R32((uint32_t)(ebp + 0x350u));
/* 760cff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 760d00: mov dword ptr [ebx + 0x350], ecx */
  W32((uint32_t)(ebx + 0x350u), ecx);
/* 760d06: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 760d0a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 760d0b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 760d0c: mov eax, ebx */
  eax = ebx;
/* 760d0e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 760d0f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 760d16: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 760d19: ret 4 */
  esp += 8; SPILL(); return;
}

void f_760e40(void) {
  LOAD_REGS();
L_760e40: /* 760e40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 760e41: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 760e42: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 760e46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 760e47: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 760e48: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 760e49: mov ebx, ecx */
  ebx = ecx;
/* 760e4b: call 0x6c3d4b */
  esp -= 4; W32(esp, 0x760e50u); SPILL(); f_6c3d4b(); if (g_unwind) return; RELOAD();
/* 760e50: mov eax, dword ptr [ebp + 0x80] */
  eax = R32((uint32_t)(ebp + 0x80u));
/* 760e56: mov dword ptr [ebx + 0x80], eax */
  W32((uint32_t)(ebx + 0x80u), eax);
/* 760e5c: mov ecx, dword ptr [ebp + 0x84] */
  ecx = R32((uint32_t)(ebp + 0x84u));
/* 760e62: mov dword ptr [ebx + 0x84], ecx */
  W32((uint32_t)(ebx + 0x84u), ecx);
/* 760e68: mov edx, dword ptr [ebp + 0x88] */
  edx = R32((uint32_t)(ebp + 0x88u));
/* 760e6e: mov dword ptr [ebx + 0x88], edx */
  W32((uint32_t)(ebx + 0x88u), edx);
/* 760e74: mov eax, dword ptr [ebp + 0x8c] */
  eax = R32((uint32_t)(ebp + 0x8cu));
/* 760e7a: mov dword ptr [ebx + 0x8c], eax */
  W32((uint32_t)(ebx + 0x8cu), eax);
/* 760e80: mov ecx, dword ptr [ebp + 0x90] */
  ecx = R32((uint32_t)(ebp + 0x90u));
/* 760e86: mov dword ptr [ebx + 0x90], ecx */
  W32((uint32_t)(ebx + 0x90u), ecx);
/* 760e8c: mov edx, dword ptr [ebp + 0x94] */
  edx = R32((uint32_t)(ebp + 0x94u));
/* 760e92: lea ecx, [ebp + 0x9c] */
  ecx = (uint32_t)(ebp + 0x9cu);
/* 760e98: mov dword ptr [ebx + 0x94], edx */
  W32((uint32_t)(ebx + 0x94u), edx);
/* 760e9e: mov eax, dword ptr [ebp + 0x98] */
  eax = R32((uint32_t)(ebp + 0x98u));
/* 760ea4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 760ea5: lea ecx, [ebx + 0x9c] */
  ecx = (uint32_t)(ebx + 0x9cu);
/* 760eab: mov dword ptr [ebx + 0x98], eax */
  W32((uint32_t)(ebx + 0x98u), eax);
/* 760eb1: call 0x6c7d65 */
  esp -= 4; W32(esp, 0x760eb6u); SPILL(); f_6c7d65(); if (g_unwind) return; RELOAD();
/* 760eb6: lea edx, [ebp + 0xa8] */
  edx = (uint32_t)(ebp + 0xa8u);
/* 760ebc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 760ebd: lea ecx, [ebx + 0xa8] */
  ecx = (uint32_t)(ebx + 0xa8u);
/* 760ec3: call 0x6c32c9 */
  esp -= 4; W32(esp, 0x760ec8u); SPILL(); f_6c32c9(); if (g_unwind) return; RELOAD();
/* 760ec8: lea eax, [ebp + 0xb4] */
  eax = (uint32_t)(ebp + 0xb4u);
/* 760ece: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 760ecf: lea ecx, [ebx + 0xb4] */
  ecx = (uint32_t)(ebx + 0xb4u);
/* 760ed5: call 0x6c8d91 */
  esp -= 4; W32(esp, 0x760edau); SPILL(); f_6c8d91(); if (g_unwind) return; RELOAD();
/* 760eda: lea esi, [ebp + 0xc0] */
  esi = (uint32_t)(ebp + 0xc0u);
/* 760ee0: lea edi, [ebx + 0xc0] */
  edi = (uint32_t)(ebx + 0xc0u);
/* 760ee6: mov ecx, 0xc */
  ecx = 0xcu;
/* 760eeb: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 760eed: mov ecx, dword ptr [ebp + 0xf0] */
  ecx = R32((uint32_t)(ebp + 0xf0u));
/* 760ef3: mov dword ptr [ebx + 0xf0], ecx */
  W32((uint32_t)(ebx + 0xf0u), ecx);
/* 760ef9: mov edx, dword ptr [ebp + 0xf4] */
  edx = R32((uint32_t)(ebp + 0xf4u));
/* 760eff: lea eax, [ebp + 0xf8] */
  eax = (uint32_t)(ebp + 0xf8u);
/* 760f05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 760f06: lea ecx, [ebx + 0xf8] */
  ecx = (uint32_t)(ebx + 0xf8u);
/* 760f0c: mov dword ptr [ebx + 0xf4], edx */
  W32((uint32_t)(ebx + 0xf4u), edx);
/* 760f12: call 0x6caaab */
  esp -= 4; W32(esp, 0x760f17u); SPILL(); f_6caaab(); if (g_unwind) return; RELOAD();
/* 760f17: lea ecx, [ebp + 0x104] */
  ecx = (uint32_t)(ebp + 0x104u);
/* 760f1d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 760f1e: lea ecx, [ebx + 0x104] */
  ecx = (uint32_t)(ebx + 0x104u);
/* 760f24: call 0x6cb483 */
  esp -= 4; W32(esp, 0x760f29u); SPILL(); f_6cb483(); if (g_unwind) return; RELOAD();
/* 760f29: lea edx, [ebp + 0x110] */
  edx = (uint32_t)(ebp + 0x110u);
/* 760f2f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 760f30: lea ecx, [ebx + 0x110] */
  ecx = (uint32_t)(ebx + 0x110u);
/* 760f36: call 0x6ca9e8 */
  esp -= 4; W32(esp, 0x760f3bu); SPILL(); f_6ca9e8(); if (g_unwind) return; RELOAD();
/* 760f3b: lea eax, [ebp + 0x11c] */
  eax = (uint32_t)(ebp + 0x11cu);
/* 760f41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 760f42: lea ecx, [ebx + 0x11c] */
  ecx = (uint32_t)(ebx + 0x11cu);
/* 760f48: call 0x6ca9e8 */
  esp -= 4; W32(esp, 0x760f4du); SPILL(); f_6ca9e8(); if (g_unwind) return; RELOAD();
/* 760f4d: mov ecx, dword ptr [ebp + 0x128] */
  ecx = R32((uint32_t)(ebp + 0x128u));
/* 760f53: mov dword ptr [ebx + 0x128], ecx */
  W32((uint32_t)(ebx + 0x128u), ecx);
/* 760f59: mov edx, dword ptr [ebp + 0x12c] */
  edx = R32((uint32_t)(ebp + 0x12cu));
/* 760f5f: lea eax, [ebp + 0x130] */
  eax = (uint32_t)(ebp + 0x130u);
/* 760f65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 760f66: lea ecx, [ebx + 0x130] */
  ecx = (uint32_t)(ebx + 0x130u);
/* 760f6c: mov dword ptr [ebx + 0x12c], edx */
  W32((uint32_t)(ebx + 0x12cu), edx);
/* 760f72: call 0x6cb99c */
  esp -= 4; W32(esp, 0x760f77u); SPILL(); f_6cb99c(); if (g_unwind) return; RELOAD();
/* 760f77: lea ecx, [ebp + 0x13c] */
  ecx = (uint32_t)(ebp + 0x13cu);
/* 760f7d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 760f7e: lea ecx, [ebx + 0x13c] */
  ecx = (uint32_t)(ebx + 0x13cu);
/* 760f84: call 0x6ca3a3 */
  esp -= 4; W32(esp, 0x760f89u); SPILL(); f_6ca3a3(); if (g_unwind) return; RELOAD();
/* 760f89: lea edx, [ebp + 0x148] */
  edx = (uint32_t)(ebp + 0x148u);
/* 760f8f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 760f90: lea ecx, [ebx + 0x148] */
  ecx = (uint32_t)(ebx + 0x148u);
/* 760f96: call 0x6c5eac */
  esp -= 4; W32(esp, 0x760f9bu); SPILL(); f_6c5eac(); if (g_unwind) return; RELOAD();
/* 760f9b: mov eax, dword ptr [ebp + 0x154] */
  eax = R32((uint32_t)(ebp + 0x154u));
/* 760fa1: mov dword ptr [ebx + 0x154], eax */
  W32((uint32_t)(ebx + 0x154u), eax);
/* 760fa7: mov ecx, dword ptr [ebp + 0x158] */
  ecx = R32((uint32_t)(ebp + 0x158u));
/* 760fad: mov dword ptr [ebx + 0x158], ecx */
  W32((uint32_t)(ebx + 0x158u), ecx);
/* 760fb3: mov edx, dword ptr [ebp + 0x15c] */
  edx = R32((uint32_t)(ebp + 0x15cu));
/* 760fb9: mov dword ptr [ebx + 0x15c], edx */
  W32((uint32_t)(ebx + 0x15cu), edx);
/* 760fbf: mov eax, dword ptr [ebp + 0x160] */
  eax = R32((uint32_t)(ebp + 0x160u));
/* 760fc5: mov dword ptr [ebx + 0x160], eax */
  W32((uint32_t)(ebx + 0x160u), eax);
/* 760fcb: mov ecx, dword ptr [ebp + 0x164] */
  ecx = R32((uint32_t)(ebp + 0x164u));
/* 760fd1: mov dword ptr [ebx + 0x164], ecx */
  W32((uint32_t)(ebx + 0x164u), ecx);
/* 760fd7: mov edx, dword ptr [ebp + 0x168] */
  edx = R32((uint32_t)(ebp + 0x168u));
/* 760fdd: lea ecx, [ebp + 0x170] */
  ecx = (uint32_t)(ebp + 0x170u);
/* 760fe3: mov dword ptr [ebx + 0x168], edx */
  W32((uint32_t)(ebx + 0x168u), edx);
/* 760fe9: mov eax, dword ptr [ebp + 0x16c] */
  eax = R32((uint32_t)(ebp + 0x16cu));
/* 760fef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 760ff0: lea ecx, [ebx + 0x170] */
  ecx = (uint32_t)(ebx + 0x170u);
/* 760ff6: mov dword ptr [ebx + 0x16c], eax */
  W32((uint32_t)(ebx + 0x16cu), eax);
/* 760ffc: call 0x6ca3a3 */
  esp -= 4; W32(esp, 0x761001u); SPILL(); f_6ca3a3(); if (g_unwind) return; RELOAD();
/* 761001: lea edx, [ebp + 0x17c] */
  edx = (uint32_t)(ebp + 0x17cu);
/* 761007: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 761008: lea ecx, [ebx + 0x17c] */
  ecx = (uint32_t)(ebx + 0x17cu);
/* 76100e: call 0x6c5eac */
  esp -= 4; W32(esp, 0x761013u); SPILL(); f_6c5eac(); if (g_unwind) return; RELOAD();
/* 761013: lea eax, [ebp + 0x188] */
  eax = (uint32_t)(ebp + 0x188u);
/* 761019: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76101a: lea ecx, [ebx + 0x188] */
  ecx = (uint32_t)(ebx + 0x188u);
/* 761020: call 0x6cbbd1 */
  esp -= 4; W32(esp, 0x761025u); SPILL(); f_6cbbd1(); if (g_unwind) return; RELOAD();
/* 761025: mov ecx, dword ptr [ebp + 0x194] */
  ecx = R32((uint32_t)(ebp + 0x194u));
/* 76102b: mov dword ptr [ebx + 0x194], ecx */
  W32((uint32_t)(ebx + 0x194u), ecx);
/* 761031: mov edx, dword ptr [ebp + 0x198] */
  edx = R32((uint32_t)(ebp + 0x198u));
/* 761037: mov dword ptr [ebx + 0x198], edx */
  W32((uint32_t)(ebx + 0x198u), edx);
/* 76103d: mov eax, dword ptr [ebp + 0x19c] */
  eax = R32((uint32_t)(ebp + 0x19cu));
/* 761043: mov dword ptr [ebx + 0x19c], eax */
  W32((uint32_t)(ebx + 0x19cu), eax);
/* 761049: mov ecx, dword ptr [ebp + 0x1a0] */
  ecx = R32((uint32_t)(ebp + 0x1a0u));
/* 76104f: mov dword ptr [ebx + 0x1a0], ecx */
  W32((uint32_t)(ebx + 0x1a0u), ecx);
/* 761055: mov edx, dword ptr [ebp + 0x1a4] */
  edx = R32((uint32_t)(ebp + 0x1a4u));
/* 76105b: mov dword ptr [ebx + 0x1a4], edx */
  W32((uint32_t)(ebx + 0x1a4u), edx);
/* 761061: lea eax, [ebp + 0x1a8] */
  eax = (uint32_t)(ebp + 0x1a8u);
/* 761067: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 761069: lea ecx, [ebx + 0x1a8] */
  ecx = (uint32_t)(ebx + 0x1a8u);
/* 76106f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 761071: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 761074: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 761077: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 76107a: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 76107d: lea ecx, [ebp + 0x1b4] */
  ecx = (uint32_t)(ebp + 0x1b4u);
/* 761083: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 761085: lea edx, [ebx + 0x1b4] */
  edx = (uint32_t)(ebx + 0x1b4u);
/* 76108b: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 76108d: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 761090: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 761093: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 761096: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 761099: lea edx, [ebp + 0x1c0] */
  edx = (uint32_t)(ebp + 0x1c0u);
/* 76109f: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7610a1: lea eax, [ebx + 0x1c0] */
  eax = (uint32_t)(ebx + 0x1c0u);
/* 7610a7: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7610a9: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7610ac: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7610af: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7610b2: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7610b5: lea eax, [ebp + 0x1cc] */
  eax = (uint32_t)(ebp + 0x1ccu);
/* 7610bb: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7610bd: lea ecx, [ebx + 0x1cc] */
  ecx = (uint32_t)(ebx + 0x1ccu);
/* 7610c3: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7610c5: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7610c8: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7610cb: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7610ce: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7610d1: lea esi, [ebp + 0x1d8] */
  esi = (uint32_t)(ebp + 0x1d8u);
/* 7610d7: lea edi, [ebx + 0x1d8] */
  edi = (uint32_t)(ebx + 0x1d8u);
/* 7610dd: mov ecx, 0xc */
  ecx = 0xcu;
/* 7610e2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7610e4: mov ecx, dword ptr [ebp + 0x208] */
  ecx = R32((uint32_t)(ebp + 0x208u));
/* 7610ea: mov dword ptr [ebx + 0x208], ecx */
  W32((uint32_t)(ebx + 0x208u), ecx);
/* 7610f0: mov edx, dword ptr [ebp + 0x20c] */
  edx = R32((uint32_t)(ebp + 0x20cu));
/* 7610f6: mov dword ptr [ebx + 0x20c], edx */
  W32((uint32_t)(ebx + 0x20cu), edx);
/* 7610fc: lea esi, [ebp + 0x210] */
  esi = (uint32_t)(ebp + 0x210u);
/* 761102: lea edi, [ebx + 0x210] */
  edi = (uint32_t)(ebx + 0x210u);
/* 761108: mov ecx, 0xc */
  ecx = 0xcu;
/* 76110d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 76110f: lea esi, [ebp + 0x240] */
  esi = (uint32_t)(ebp + 0x240u);
/* 761115: lea edi, [ebx + 0x240] */
  edi = (uint32_t)(ebx + 0x240u);
/* 76111b: mov ecx, 0xc */
  ecx = 0xcu;
/* 761120: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 761122: lea esi, [ebp + 0x270] */
  esi = (uint32_t)(ebp + 0x270u);
/* 761128: lea edi, [ebx + 0x270] */
  edi = (uint32_t)(ebx + 0x270u);
/* 76112e: mov ecx, 0xc */
  ecx = 0xcu;
/* 761133: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 761135: lea esi, [ebp + 0x2a0] */
  esi = (uint32_t)(ebp + 0x2a0u);
/* 76113b: lea edi, [ebx + 0x2a0] */
  edi = (uint32_t)(ebx + 0x2a0u);
/* 761141: mov ecx, 0xc */
  ecx = 0xcu;
/* 761146: lea eax, [ebp + 0x2d0] */
  eax = (uint32_t)(ebp + 0x2d0u);
/* 76114c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 76114e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76114f: lea ecx, [ebx + 0x2d0] */
  ecx = (uint32_t)(ebx + 0x2d0u);
/* 761155: call 0x6c5eac */
  esp -= 4; W32(esp, 0x76115au); SPILL(); f_6c5eac(); if (g_unwind) return; RELOAD();
/* 76115a: lea ecx, [ebp + 0x2dc] */
  ecx = (uint32_t)(ebp + 0x2dcu);
/* 761160: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 761161: lea ecx, [ebx + 0x2dc] */
  ecx = (uint32_t)(ebx + 0x2dcu);
/* 761167: call 0x6ccd38 */
  esp -= 4; W32(esp, 0x76116cu); SPILL(); f_6ccd38(); if (g_unwind) return; RELOAD();
/* 76116c: lea edx, [ebp + 0x2e8] */
  edx = (uint32_t)(ebp + 0x2e8u);
/* 761172: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 761173: lea ecx, [ebx + 0x2e8] */
  ecx = (uint32_t)(ebx + 0x2e8u);
/* 761179: call 0x6c4476 */
  esp -= 4; W32(esp, 0x76117eu); SPILL(); f_6c4476(); if (g_unwind) return; RELOAD();
/* 76117e: mov eax, dword ptr [ebp + 0x2f4] */
  eax = R32((uint32_t)(ebp + 0x2f4u));
/* 761184: mov dword ptr [ebx + 0x2f4], eax */
  W32((uint32_t)(ebx + 0x2f4u), eax);
/* 76118a: mov ecx, dword ptr [ebp + 0x2f8] */
  ecx = R32((uint32_t)(ebp + 0x2f8u));
/* 761190: mov dword ptr [ebx + 0x2f8], ecx */
  W32((uint32_t)(ebx + 0x2f8u), ecx);
/* 761196: lea esi, [ebp + 0x2fc] */
  esi = (uint32_t)(ebp + 0x2fcu);
/* 76119c: lea edi, [ebx + 0x2fc] */
  edi = (uint32_t)(ebx + 0x2fcu);
/* 7611a2: mov ecx, 7 */
  ecx = 0x7u;
/* 7611a7: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7611a9: mov edx, dword ptr [ebp + 0x318] */
  edx = R32((uint32_t)(ebp + 0x318u));
/* 7611af: lea eax, [ebp + 0x31c] */
  eax = (uint32_t)(ebp + 0x31cu);
/* 7611b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7611b6: lea ecx, [ebx + 0x31c] */
  ecx = (uint32_t)(ebx + 0x31cu);
/* 7611bc: mov dword ptr [ebx + 0x318], edx */
  W32((uint32_t)(ebx + 0x318u), edx);
/* 7611c2: call 0x6cb762 */
  esp -= 4; W32(esp, 0x7611c7u); SPILL(); f_6cb762(); if (g_unwind) return; RELOAD();
/* 7611c7: mov ecx, dword ptr [ebp + 0x328] */
  ecx = R32((uint32_t)(ebp + 0x328u));
/* 7611cd: mov dword ptr [ebx + 0x328], ecx */
  W32((uint32_t)(ebx + 0x328u), ecx);
/* 7611d3: mov edx, dword ptr [ebp + 0x32c] */
  edx = R32((uint32_t)(ebp + 0x32cu));
/* 7611d9: lea edi, [ebp + 0x330] */
  edi = (uint32_t)(ebp + 0x330u);
/* 7611df: lea esi, [ebx + 0x330] */
  esi = (uint32_t)(ebx + 0x330u);
/* 7611e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7611e6: mov ecx, esi */
  ecx = esi;
/* 7611e8: mov dword ptr [ebx + 0x32c], edx */
  W32((uint32_t)(ebx + 0x32cu), edx);
/* 7611ee: call 0x6c1947 */
  esp -= 4; W32(esp, 0x7611f3u); SPILL(); f_6c1947(); if (g_unwind) return; RELOAD();
/* 7611f3: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 7611f6: mov ecx, esi */
  ecx = esi;
/* 7611f8: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 7611fb: call 0x6ca2bd */
  esp -= 4; W32(esp, 0x761200u); SPILL(); f_6ca2bd(); if (g_unwind) return; RELOAD();
/* 761200: mov ecx, dword ptr [ebp + 0x344] */
  ecx = R32((uint32_t)(ebp + 0x344u));
/* 761206: mov dword ptr [ebx + 0x344], ecx */
  W32((uint32_t)(ebx + 0x344u), ecx);
/* 76120c: mov edx, dword ptr [ebp + 0x348] */
  edx = R32((uint32_t)(ebp + 0x348u));
/* 761212: mov dword ptr [ebx + 0x348], edx */
  W32((uint32_t)(ebx + 0x348u), edx);
/* 761218: mov eax, dword ptr [ebp + 0x34c] */
  eax = R32((uint32_t)(ebp + 0x34cu));
/* 76121e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76121f: mov dword ptr [ebx + 0x34c], eax */
  W32((uint32_t)(ebx + 0x34cu), eax);
/* 761225: mov ecx, dword ptr [ebp + 0x350] */
  ecx = R32((uint32_t)(ebp + 0x350u));
/* 76122b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76122c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 76122d: mov dword ptr [ebx + 0x350], ecx */
  W32((uint32_t)(ebx + 0x350u), ecx);
/* 761233: mov eax, ebx */
  eax = ebx;
/* 761235: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 761236: ret 4 */
  esp += 8; SPILL(); return;
}

void f_761340(void) {
  LOAD_REGS();
L_761340: /* 761340: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 761341: mov esi, ecx */
  esi = ecx;
/* 761343: call 0x6cb4f1 */
  esp -= 4; W32(esp, 0x761348u); SPILL(); f_6cb4f1(); if (g_unwind) return; RELOAD();
/* 761348: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76134d: je 0x76135e */
  if (zf) goto L_76135e;
L_76134f: /* 76134f: push 0x354 */
  { uint32_t v = 0x354u; esp -= 4; W32(esp, v); }
/* 761354: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 761355: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x76135bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 76135b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76135e: /* 76135e: mov eax, esi */
  eax = esi;
/* 761360: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 761361: ret 4 */
  esp += 8; SPILL(); return;
}

void f_761380(void) {
  LOAD_REGS();
L_761380: /* 761380: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 761381: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 761385: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 761388: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 761389: mov esi, ecx */
  esi = ecx;
/* 76138b: je 0x7613c0 */
  if (zf) goto L_7613c0;
L_76138d: /* 76138d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 761390: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 761391: push 0x6cb4f1 */
  { uint32_t v = 0x6cb4f1u; esp -= 4; W32(esp, v); }
/* 761396: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 761399: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76139a: push 0x354 */
  { uint32_t v = 0x354u; esp -= 4; W32(esp, v); }
/* 76139f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7613a0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x7613a5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 7613a5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7613a8: je 0x7613b8 */
  if (zf) goto L_7613b8;
L_7613aa: /* 7613aa: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7613b0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7613b2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7613b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7613b5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7613b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7613b8: /* 7613b8: mov eax, edi */
  eax = edi;
/* 7613ba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7613bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7613bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7613bd: ret 4 */
  esp += 8; SPILL(); return;
L_7613c0: /* 7613c0: mov ecx, esi */
  ecx = esi;
/* 7613c2: call 0x6cb4f1 */
  esp -= 4; W32(esp, 0x7613c7u); SPILL(); f_6cb4f1(); if (g_unwind) return; RELOAD();
/* 7613c7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7613ca: je 0x7613db */
  if (zf) goto L_7613db;
L_7613cc: /* 7613cc: push 0x354 */
  { uint32_t v = 0x354u; esp -= 4; W32(esp, v); }
/* 7613d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7613d2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7613d8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7613d8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7613db: /* 7613db: mov eax, esi */
  eax = esi;
/* 7613dd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7613de: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7613df: ret 4 */
  esp += 8; SPILL(); return;
}

void f_761410(void) {
  LOAD_REGS();
L_761410: /* 761410: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 761412: push 0x9ca32b */
  { uint32_t v = 0x9ca32bu; esp -= 4; W32(esp, v); }
/* 761417: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76141d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76141e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 761425: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 761426: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 761427: mov esi, ecx */
  esi = ecx;
/* 761429: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 76142d: mov dword ptr [esi], 0xa05fc8 */
  W32((uint32_t)(esi), 0xa05fc8u);
/* 761433: mov dword ptr [esp + 0x10], 4 */
  W32((uint32_t)(esp + 0x10u), 0x4u);
/* 76143b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x761441u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 761441: lea ecx, [esi + 0x98] */
  ecx = (uint32_t)(esi + 0x98u);
/* 761447: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 76144c: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x761452u); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 761452: lea ecx, [esi + 0x80] */
  ecx = (uint32_t)(esi + 0x80u);
/* 761458: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 76145d: call 0x6cb474 */
  esp -= 4; W32(esp, 0x761462u); SPILL(); f_6cb474(); if (g_unwind) return; RELOAD();
/* 761462: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 761465: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 76146a: call 0x6c9949 */
  esp -= 4; W32(esp, 0x76146fu); SPILL(); f_6c9949(); if (g_unwind) return; RELOAD();
/* 76146f: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 761472: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 761477: call 0x6c90e8 */
  esp -= 4; W32(esp, 0x76147cu); SPILL(); f_6c90e8(); if (g_unwind) return; RELOAD();
/* 76147c: mov ecx, esi */
  ecx = esi;
/* 76147e: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 761486: call dword ptr [0xcfa254] */
  esp -= 4; W32(esp, 0x76148cu); SPILL(); f_4e2e55(); if (g_unwind) return; /* Core!??1UObject@@UAE@XZ */ RELOAD();
/* 76148c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 761490: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 761491: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 761498: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76149b: ret  */
  esp += 4; SPILL(); return;
}

void f_7614d0(void) {
  LOAD_REGS();
L_7614d0: /* 7614d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7614d2: push 0x9ca37d */
  { uint32_t v = 0x9ca37du; esp -= 4; W32(esp, v); }
/* 7614d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7614dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7614de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7614e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7614e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7614e7: mov esi, ecx */
  esi = ecx;
/* 7614e9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7614ed: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x7614f3u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 7614f3: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 7614f6: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 7614fe: mov dword ptr [esi], 0xa05fc8 */
  W32((uint32_t)(esi), 0xa05fc8u);
/* 761504: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x76150au); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 76150a: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 76150d: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 761512: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x761518u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 761518: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 76151b: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 761520: call dword ptr [0xcfa370] */
  esp -= 4; W32(esp, 0x761526u); SPILL(); f_4e205e(); if (g_unwind) return; /* Core!??0FBox@@QAE@XZ */ RELOAD();
/* 761526: lea ecx, [esi + 0x80] */
  ecx = (uint32_t)(esi + 0x80u);
/* 76152c: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x761532u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 761532: lea ecx, [esi + 0x94] */
  ecx = (uint32_t)(esi + 0x94u);
/* 761538: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 76153d: call 0x6c89b3 */
  esp -= 4; W32(esp, 0x761542u); SPILL(); f_6c89b3(); if (g_unwind) return; RELOAD();
/* 761542: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 761546: mov eax, esi */
  eax = esi;
/* 761548: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 761549: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 761550: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 761553: ret  */
  esp += 4; SPILL(); return;
}

void f_761590(void) {
  LOAD_REGS();
L_761590: /* 761590: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 761592: push 0x9ca3cd */
  { uint32_t v = 0x9ca3cdu; esp -= 4; W32(esp, v); }
/* 761597: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76159d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76159e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7615a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7615a6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7615a7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7615a8: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 7615ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7615ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7615ae: mov ebx, ecx */
  ebx = ecx;
/* 7615b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7615b1: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 7615b5: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x7615bbu); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 7615bb: lea eax, [ebp + 0x28] */
  eax = (uint32_t)(ebp + 0x28u);
/* 7615be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7615bf: lea ecx, [ebx + 0x28] */
  ecx = (uint32_t)(ebx + 0x28u);
/* 7615c2: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 7615ca: mov dword ptr [ebx], 0xa05fc8 */
  W32((uint32_t)(ebx), 0xa05fc8u);
/* 7615d0: call 0x6c4eb2 */
  esp -= 4; W32(esp, 0x7615d5u); SPILL(); f_6c4eb2(); if (g_unwind) return; RELOAD();
/* 7615d5: lea ecx, [ebp + 0x34] */
  ecx = (uint32_t)(ebp + 0x34u);
/* 7615d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7615d9: lea ecx, [ebx + 0x34] */
  ecx = (uint32_t)(ebx + 0x34u);
/* 7615dc: mov byte ptr [esp + 0x20], 1 */
  W8((uint32_t)(esp + 0x20u), 0x1u);
/* 7615e1: call 0x6c6735 */
  esp -= 4; W32(esp, 0x7615e6u); SPILL(); f_6c6735(); if (g_unwind) return; RELOAD();
/* 7615e6: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* 7615e9: mov dword ptr [ebx + 0x40], edx */
  W32((uint32_t)(ebx + 0x40u), edx);
/* 7615ec: lea esi, [ebp + 0x44] */
  esi = (uint32_t)(ebp + 0x44u);
/* 7615ef: lea edi, [ebx + 0x44] */
  edi = (uint32_t)(ebx + 0x44u);
/* 7615f2: mov ecx, 7 */
  ecx = 0x7u;
/* 7615f7: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7615f9: mov eax, dword ptr [ebp + 0x60] */
  eax = R32((uint32_t)(ebp + 0x60u));
/* 7615fc: mov dword ptr [ebx + 0x60], eax */
  W32((uint32_t)(ebx + 0x60u), eax);
/* 7615ff: mov ecx, dword ptr [ebp + 0x64] */
  ecx = R32((uint32_t)(ebp + 0x64u));
/* 761602: mov dword ptr [ebx + 0x64], ecx */
  W32((uint32_t)(ebx + 0x64u), ecx);
/* 761605: mov edx, dword ptr [ebp + 0x68] */
  edx = R32((uint32_t)(ebp + 0x68u));
/* 761608: mov dword ptr [ebx + 0x68], edx */
  W32((uint32_t)(ebx + 0x68u), edx);
/* 76160b: mov eax, dword ptr [ebp + 0x6c] */
  eax = R32((uint32_t)(ebp + 0x6cu));
/* 76160e: mov dword ptr [ebx + 0x6c], eax */
  W32((uint32_t)(ebx + 0x6cu), eax);
/* 761611: lea ecx, [ebp + 0x70] */
  ecx = (uint32_t)(ebp + 0x70u);
/* 761614: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 761616: lea edx, [ebx + 0x70] */
  edx = (uint32_t)(ebx + 0x70u);
/* 761619: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 76161b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 76161e: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 761621: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 761624: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 761627: mov edx, dword ptr [ebp + 0x7c] */
  edx = R32((uint32_t)(ebp + 0x7cu));
/* 76162a: lea eax, [ebp + 0x80] */
  eax = (uint32_t)(ebp + 0x80u);
/* 761630: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 761631: lea ecx, [ebx + 0x80] */
  ecx = (uint32_t)(ebx + 0x80u);
/* 761637: mov byte ptr [esp + 0x20], 2 */
  W8((uint32_t)(esp + 0x20u), 0x2u);
/* 76163c: mov dword ptr [ebx + 0x7c], edx */
  W32((uint32_t)(ebx + 0x7cu), edx);
/* 76163f: call 0x6c3a71 */
  esp -= 4; W32(esp, 0x761644u); SPILL(); f_6c3a71(); if (g_unwind) return; RELOAD();
/* 761644: mov ecx, dword ptr [ebp + 0x8c] */
  ecx = R32((uint32_t)(ebp + 0x8cu));
/* 76164a: mov dword ptr [ebx + 0x8c], ecx */
  W32((uint32_t)(ebx + 0x8cu), ecx);
/* 761650: mov dx, word ptr [ebp + 0x90] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0x90u))) & 0xffffu);
/* 761657: lea eax, [ebp + 0x98] */
  eax = (uint32_t)(ebp + 0x98u);
/* 76165d: mov word ptr [ebx + 0x90], dx */
  W16((uint32_t)(ebx + 0x90u), (edx & 0xffffu));
/* 761664: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 761665: lea ecx, [ebx + 0x98] */
  ecx = (uint32_t)(ebx + 0x98u);
/* 76166b: mov byte ptr [esp + 0x20], 3 */
  W8((uint32_t)(esp + 0x20u), 0x3u);
/* 761670: mov dword ptr [ebx + 0x94], 0x9f7c44 */
  W32((uint32_t)(ebx + 0x94u), 0x9f7c44u);
/* 76167a: call dword ptr [0xcfa290] */
  esp -= 4; W32(esp, 0x761680u); SPILL(); f_4e447b(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@ABV0@@Z */ RELOAD();
/* 761680: mov ecx, dword ptr [ebp + 0xa4] */
  ecx = R32((uint32_t)(ebp + 0xa4u));
/* 761686: mov dword ptr [ebx + 0xa4], ecx */
  W32((uint32_t)(ebx + 0xa4u), ecx);
/* 76168c: mov edx, dword ptr [ebp + 0xa8] */
  edx = R32((uint32_t)(ebp + 0xa8u));
/* 761692: mov dword ptr [ebx + 0xa8], edx */
  W32((uint32_t)(ebx + 0xa8u), edx);
/* 761698: mov eax, dword ptr [ebp + 0xac] */
  eax = R32((uint32_t)(ebp + 0xacu));
/* 76169e: mov dword ptr [ebx + 0xac], eax */
  W32((uint32_t)(ebx + 0xacu), eax);
/* 7616a4: mov ecx, dword ptr [ebp + 0xb0] */
  ecx = R32((uint32_t)(ebp + 0xb0u));
/* 7616aa: mov dword ptr [ebx + 0xb0], ecx */
  W32((uint32_t)(ebx + 0xb0u), ecx);
/* 7616b0: mov edx, dword ptr [ebp + 0xb4] */
  edx = R32((uint32_t)(ebp + 0xb4u));
/* 7616b6: mov dword ptr [ebx + 0xb4], edx */
  W32((uint32_t)(ebx + 0xb4u), edx);
/* 7616bc: mov eax, dword ptr [ebp + 0xb8] */
  eax = R32((uint32_t)(ebp + 0xb8u));
/* 7616c2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7616c3: mov dword ptr [ebx + 0xb8], eax */
  W32((uint32_t)(ebx + 0xb8u), eax);
/* 7616c9: mov ecx, dword ptr [ebp + 0xbc] */
  ecx = R32((uint32_t)(ebp + 0xbcu));
/* 7616cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7616d0: mov dword ptr [ebx + 0xbc], ecx */
  W32((uint32_t)(ebx + 0xbcu), ecx);
/* 7616d6: mov eax, ebx */
  eax = ebx;
/* 7616d8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7616d9: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7616dd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7616de: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7616e5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7616e8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_761750(void) {
  LOAD_REGS();
L_761750: /* 761750: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 761751: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 761752: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 761756: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 761757: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 761758: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 761759: mov ebx, ecx */
  ebx = ecx;
/* 76175b: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x761761u); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 761761: lea eax, [ebp + 0x28] */
  eax = (uint32_t)(ebp + 0x28u);
/* 761764: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 761765: lea ecx, [ebx + 0x28] */
  ecx = (uint32_t)(ebx + 0x28u);
/* 761768: call 0x6c1c80 */
  esp -= 4; W32(esp, 0x76176du); SPILL(); f_6c1c80(); if (g_unwind) return; RELOAD();
/* 76176d: lea ecx, [ebp + 0x34] */
  ecx = (uint32_t)(ebp + 0x34u);
/* 761770: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 761771: lea ecx, [ebx + 0x34] */
  ecx = (uint32_t)(ebx + 0x34u);
/* 761774: call 0x6cb569 */
  esp -= 4; W32(esp, 0x761779u); SPILL(); f_6cb569(); if (g_unwind) return; RELOAD();
/* 761779: mov edx, dword ptr [ebp + 0x40] */
  edx = R32((uint32_t)(ebp + 0x40u));
/* 76177c: mov dword ptr [ebx + 0x40], edx */
  W32((uint32_t)(ebx + 0x40u), edx);
/* 76177f: lea esi, [ebp + 0x44] */
  esi = (uint32_t)(ebp + 0x44u);
/* 761782: lea edi, [ebx + 0x44] */
  edi = (uint32_t)(ebx + 0x44u);
/* 761785: mov ecx, 7 */
  ecx = 0x7u;
/* 76178a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 76178c: mov eax, dword ptr [ebp + 0x60] */
  eax = R32((uint32_t)(ebp + 0x60u));
/* 76178f: mov dword ptr [ebx + 0x60], eax */
  W32((uint32_t)(ebx + 0x60u), eax);
/* 761792: mov ecx, dword ptr [ebp + 0x64] */
  ecx = R32((uint32_t)(ebp + 0x64u));
/* 761795: mov dword ptr [ebx + 0x64], ecx */
  W32((uint32_t)(ebx + 0x64u), ecx);
/* 761798: mov edx, dword ptr [ebp + 0x68] */
  edx = R32((uint32_t)(ebp + 0x68u));
/* 76179b: mov dword ptr [ebx + 0x68], edx */
  W32((uint32_t)(ebx + 0x68u), edx);
/* 76179e: mov eax, dword ptr [ebp + 0x6c] */
  eax = R32((uint32_t)(ebp + 0x6cu));
/* 7617a1: mov dword ptr [ebx + 0x6c], eax */
  W32((uint32_t)(ebx + 0x6cu), eax);
/* 7617a4: lea ecx, [ebp + 0x70] */
  ecx = (uint32_t)(ebp + 0x70u);
/* 7617a7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7617a9: lea edx, [ebx + 0x70] */
  edx = (uint32_t)(ebx + 0x70u);
/* 7617ac: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7617ae: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7617b1: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7617b4: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7617b7: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7617ba: mov edx, dword ptr [ebp + 0x7c] */
  edx = R32((uint32_t)(ebp + 0x7cu));
/* 7617bd: lea eax, [ebp + 0x80] */
  eax = (uint32_t)(ebp + 0x80u);
/* 7617c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7617c4: lea ecx, [ebx + 0x80] */
  ecx = (uint32_t)(ebx + 0x80u);
/* 7617ca: mov dword ptr [ebx + 0x7c], edx */
  W32((uint32_t)(ebx + 0x7cu), edx);
/* 7617cd: call 0x6c725c */
  esp -= 4; W32(esp, 0x7617d2u); SPILL(); f_6c725c(); if (g_unwind) return; RELOAD();
/* 7617d2: mov ecx, dword ptr [ebp + 0x8c] */
  ecx = R32((uint32_t)(ebp + 0x8cu));
/* 7617d8: mov dword ptr [ebx + 0x8c], ecx */
  W32((uint32_t)(ebx + 0x8cu), ecx);
/* 7617de: mov dx, word ptr [ebp + 0x90] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0x90u))) & 0xffffu);
/* 7617e5: lea eax, [ebp + 0x98] */
  eax = (uint32_t)(ebp + 0x98u);
/* 7617eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7617ec: lea ecx, [ebx + 0x98] */
  ecx = (uint32_t)(ebx + 0x98u);
/* 7617f2: mov word ptr [ebx + 0x90], dx */
  W16((uint32_t)(ebx + 0x90u), (edx & 0xffffu));
/* 7617f9: call dword ptr [0xcfa294] */
  esp -= 4; W32(esp, 0x7617ffu); SPILL(); f_4e2676(); if (g_unwind) return; /* Core!??4?$TArray@G@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7617ff: mov ecx, dword ptr [ebp + 0xa4] */
  ecx = R32((uint32_t)(ebp + 0xa4u));
/* 761805: mov dword ptr [ebx + 0xa4], ecx */
  W32((uint32_t)(ebx + 0xa4u), ecx);
/* 76180b: mov edx, dword ptr [ebp + 0xa8] */
  edx = R32((uint32_t)(ebp + 0xa8u));
/* 761811: mov dword ptr [ebx + 0xa8], edx */
  W32((uint32_t)(ebx + 0xa8u), edx);
/* 761817: mov eax, dword ptr [ebp + 0xac] */
  eax = R32((uint32_t)(ebp + 0xacu));
/* 76181d: mov dword ptr [ebx + 0xac], eax */
  W32((uint32_t)(ebx + 0xacu), eax);
/* 761823: mov ecx, dword ptr [ebp + 0xb0] */
  ecx = R32((uint32_t)(ebp + 0xb0u));
/* 761829: mov dword ptr [ebx + 0xb0], ecx */
  W32((uint32_t)(ebx + 0xb0u), ecx);
/* 76182f: mov edx, dword ptr [ebp + 0xb4] */
  edx = R32((uint32_t)(ebp + 0xb4u));
/* 761835: mov dword ptr [ebx + 0xb4], edx */
  W32((uint32_t)(ebx + 0xb4u), edx);
/* 76183b: mov eax, dword ptr [ebp + 0xb8] */
  eax = R32((uint32_t)(ebp + 0xb8u));
/* 761841: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 761842: mov dword ptr [ebx + 0xb8], eax */
  W32((uint32_t)(ebx + 0xb8u), eax);
/* 761848: mov ecx, dword ptr [ebp + 0xbc] */
  ecx = R32((uint32_t)(ebp + 0xbcu));
/* 76184e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76184f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 761850: mov dword ptr [ebx + 0xbc], ecx */
  W32((uint32_t)(ebx + 0xbcu), ecx);
/* 761856: mov eax, ebx */
  eax = ebx;
/* 761858: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 761859: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7618b0(void) {
  LOAD_REGS();
L_7618b0: /* 7618b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7618b1: mov esi, ecx */
  esi = ecx;
/* 7618b3: call 0x6ca9f7 */
  esp -= 4; W32(esp, 0x7618b8u); SPILL(); f_6ca9f7(); if (g_unwind) return; RELOAD();
/* 7618b8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7618bd: je 0x7618ce */
  if (zf) goto L_7618ce;
L_7618bf: /* 7618bf: push 0xc0 */
  { uint32_t v = 0xc0u; esp -= 4; W32(esp, v); }
/* 7618c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7618c5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7618cbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7618cb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7618ce: /* 7618ce: mov eax, esi */
  eax = esi;
/* 7618d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7618d1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7618f0(void) {
  LOAD_REGS();
L_7618f0: /* 7618f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7618f1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 7618f5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7618f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7618f9: mov esi, ecx */
  esi = ecx;
/* 7618fb: je 0x761930 */
  if (zf) goto L_761930;
L_7618fd: /* 7618fd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 761900: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 761901: push 0x6ca9f7 */
  { uint32_t v = 0x6ca9f7u; esp -= 4; W32(esp, v); }
/* 761906: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 761909: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76190a: push 0xc0 */
  { uint32_t v = 0xc0u; esp -= 4; W32(esp, v); }
/* 76190f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 761910: call 0x99ca3d */
  esp -= 4; W32(esp, 0x761915u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 761915: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 761918: je 0x761928 */
  if (zf) goto L_761928;
L_76191a: /* 76191a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 761920: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 761922: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 761924: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 761925: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x761928u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_761928: /* 761928: mov eax, edi */
  eax = edi;
/* 76192a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76192b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76192c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76192d: ret 4 */
  esp += 8; SPILL(); return;
L_761930: /* 761930: mov ecx, esi */
  ecx = esi;
/* 761932: call 0x6ca9f7 */
  esp -= 4; W32(esp, 0x761937u); SPILL(); f_6ca9f7(); if (g_unwind) return; RELOAD();
/* 761937: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76193a: je 0x76194b */
  if (zf) goto L_76194b;
L_76193c: /* 76193c: push 0xc0 */
  { uint32_t v = 0xc0u; esp -= 4; W32(esp, v); }
/* 761941: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 761942: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x761948u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 761948: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76194b: /* 76194b: mov eax, esi */
  eax = esi;
/* 76194d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76194e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76194f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_761980(void) {
  LOAD_REGS();
L_761980: /* 761980: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 761982: push 0x9ca40f */
  { uint32_t v = 0x9ca40fu; esp -= 4; W32(esp, v); }
/* 761987: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76198d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76198e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 761995: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 761996: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 761997: mov esi, ecx */
  esi = ecx;
/* 761999: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 76199d: mov dword ptr [esi], 0xa06048 */
  W32((uint32_t)(esi), 0xa06048u);
/* 7619a3: mov dword ptr [esp + 0x10], 2 */
  W32((uint32_t)(esp + 0x10u), 0x2u);
/* 7619ab: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x7619b1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 7619b1: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 7619b4: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 7619b9: call 0x6c678f */
  esp -= 4; W32(esp, 0x7619beu); SPILL(); f_6c678f(); if (g_unwind) return; RELOAD();
/* 7619be: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 7619c1: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 7619c6: call 0x6c63ac */
  esp -= 4; W32(esp, 0x7619cbu); SPILL(); f_6c63ac(); if (g_unwind) return; RELOAD();
/* 7619cb: mov ecx, esi */
  ecx = esi;
/* 7619cd: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7619d5: call dword ptr [0xcfa254] */
  esp -= 4; W32(esp, 0x7619dbu); SPILL(); f_4e2e55(); if (g_unwind) return; /* Core!??1UObject@@UAE@XZ */ RELOAD();
/* 7619db: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7619df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7619e0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7619e7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7619ea: ret  */
  esp += 4; SPILL(); return;
}

void f_761a10(void) {
  LOAD_REGS();
L_761a10: /* 761a10: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 761a12: push 0x9ca444 */
  { uint32_t v = 0x9ca444u; esp -= 4; W32(esp, v); }
/* 761a17: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 761a1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 761a1e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 761a25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 761a26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 761a27: mov esi, ecx */
  esi = ecx;
/* 761a29: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 761a2d: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x761a33u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 761a33: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 761a36: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 761a3e: mov dword ptr [esi], 0xa06048 */
  W32((uint32_t)(esi), 0xa06048u);
/* 761a44: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x761a4au); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 761a4a: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* 761a4d: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 761a52: call 0x6c1604 */
  esp -= 4; W32(esp, 0x761a57u); SPILL(); f_6c1604(); if (g_unwind) return; RELOAD();
/* 761a57: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 761a5b: mov eax, esi */
  eax = esi;
/* 761a5d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 761a5e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 761a65: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 761a68: ret  */
  esp += 4; SPILL(); return;
}

void f_761a90(void) {
  LOAD_REGS();
L_761a90: /* 761a90: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 761a92: push 0x9ca474 */
  { uint32_t v = 0x9ca474u; esp -= 4; W32(esp, v); }
/* 761a97: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 761a9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 761a9e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 761aa5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 761aa6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 761aa7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 761aa8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 761aac: mov esi, ecx */
  esi = ecx;
/* 761aae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 761aaf: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 761ab3: call dword ptr [0xcfa26c] */
  esp -= 4; W32(esp, 0x761ab9u); SPILL(); f_4e1078(); if (g_unwind) return; /* Core!??0UObject@@QAE@ABV0@@Z */ RELOAD();
/* 761ab9: lea eax, [edi + 0x28] */
  eax = (uint32_t)(edi + 0x28u);
/* 761abc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 761abd: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 761ac0: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 761ac8: mov dword ptr [esi], 0xa06048 */
  W32((uint32_t)(esi), 0xa06048u);
/* 761ace: call 0x6c94e9 */
  esp -= 4; W32(esp, 0x761ad3u); SPILL(); f_6c94e9(); if (g_unwind) return; RELOAD();
/* 761ad3: lea ecx, [edi + 0x38] */
  ecx = (uint32_t)(edi + 0x38u);
/* 761ad6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 761ad7: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 761ada: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 761adf: mov dword ptr [esi + 0x34], 0x9f8b1c */
  W32((uint32_t)(esi + 0x34u), 0x9f8b1cu);
/* 761ae6: call 0x6c520e */
  esp -= 4; W32(esp, 0x761aebu); SPILL(); f_6c520e(); if (g_unwind) return; RELOAD();
/* 761aeb: mov edx, dword ptr [edi + 0x44] */
  edx = R32((uint32_t)(edi + 0x44u));
/* 761aee: mov dword ptr [esi + 0x44], edx */
  W32((uint32_t)(esi + 0x44u), edx);
/* 761af1: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 761af4: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 761af7: mov ecx, dword ptr [edi + 0x4c] */
  ecx = R32((uint32_t)(edi + 0x4cu));
/* 761afa: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* 761afd: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 761b01: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 761b02: mov eax, esi */
  eax = esi;
/* 761b04: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 761b05: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 761b0c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 761b0f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_761b50(void) {
  LOAD_REGS();
L_761b50: /* 761b50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 761b51: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 761b52: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 761b56: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 761b57: mov esi, ecx */
  esi = ecx;
/* 761b59: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x761b5fu); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 761b5f: lea eax, [edi + 0x28] */
  eax = (uint32_t)(edi + 0x28u);
/* 761b62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 761b63: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 761b66: call 0x6c3c79 */
  esp -= 4; W32(esp, 0x761b6bu); SPILL(); f_6c3c79(); if (g_unwind) return; RELOAD();
/* 761b6b: lea ecx, [edi + 0x38] */
  ecx = (uint32_t)(edi + 0x38u);
/* 761b6e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 761b6f: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 761b72: call 0x6c81e3 */
  esp -= 4; W32(esp, 0x761b77u); SPILL(); f_6c81e3(); if (g_unwind) return; RELOAD();
/* 761b77: mov edx, dword ptr [edi + 0x44] */
  edx = R32((uint32_t)(edi + 0x44u));
/* 761b7a: mov dword ptr [esi + 0x44], edx */
  W32((uint32_t)(esi + 0x44u), edx);
/* 761b7d: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 761b80: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 761b83: mov ecx, dword ptr [edi + 0x4c] */
  ecx = R32((uint32_t)(edi + 0x4cu));
/* 761b86: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 761b87: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* 761b8a: mov eax, esi */
  eax = esi;
/* 761b8c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 761b8d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_761ba0(void) {
  LOAD_REGS();
L_761ba0: /* 761ba0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 761ba1: mov esi, ecx */
  esi = ecx;
/* 761ba3: call 0x6c668b */
  esp -= 4; W32(esp, 0x761ba8u); SPILL(); f_6c668b(); if (g_unwind) return; RELOAD();
/* 761ba8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 761bad: je 0x761bbb */
  if (zf) goto L_761bbb;
L_761baf: /* 761baf: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* 761bb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 761bb2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x761bb8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 761bb8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_761bbb: /* 761bbb: mov eax, esi */
  eax = esi;
/* 761bbd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 761bbe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_761be0(void) {
  LOAD_REGS();
L_761be0: /* 761be0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 761be1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 761be5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 761be8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 761be9: mov esi, ecx */
  esi = ecx;
/* 761beb: je 0x761c1d */
  if (zf) goto L_761c1d;
L_761bed: /* 761bed: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 761bf0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 761bf1: push 0x6c668b */
  { uint32_t v = 0x6c668bu; esp -= 4; W32(esp, v); }
/* 761bf6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 761bf9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 761bfa: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* 761bfc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 761bfd: call 0x99ca3d */
  esp -= 4; W32(esp, 0x761c02u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 761c02: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 761c05: je 0x761c15 */
  if (zf) goto L_761c15;
L_761c07: /* 761c07: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 761c0d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 761c0f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 761c11: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 761c12: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x761c15u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_761c15: /* 761c15: mov eax, edi */
  eax = edi;
/* 761c17: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 761c18: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 761c19: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 761c1a: ret 4 */
  esp += 8; SPILL(); return;
L_761c1d: /* 761c1d: mov ecx, esi */
  ecx = esi;
/* 761c1f: call 0x6c668b */
  esp -= 4; W32(esp, 0x761c24u); SPILL(); f_6c668b(); if (g_unwind) return; RELOAD();
/* 761c24: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 761c27: je 0x761c35 */
  if (zf) goto L_761c35;
L_761c29: /* 761c29: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
/* 761c2b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 761c2c: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x761c32u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 761c32: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_761c35: /* 761c35: mov eax, esi */
  eax = esi;
/* 761c37: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 761c38: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 761c39: ret 4 */
  esp += 8; SPILL(); return;
}

void f_761c60(void) {
  LOAD_REGS();
L_761c60: /* 761c60: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 761c64: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 761c66: je 0x761c6d */
  if (zf) goto L_761c6d;
L_761c68: /* 761c68: jmp 0x6c77bb */
  SPILL(); f_6c77bb(); return;
L_761c6d: /* 761c6d: ret  */
  esp += 4; SPILL(); return;
}

void f_761c80(void) {
  LOAD_REGS();
L_761c80: /* 761c80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 761c84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 761c85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 761c86: mov esi, ecx */
  esi = ecx;
/* 761c88: call 0x6c2e14 */
  esp -= 4; W32(esp, 0x761c8du); SPILL(); f_6c2e14(); if (g_unwind) return; RELOAD();
/* 761c8d: mov eax, esi */
  eax = esi;
/* 761c8f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 761c90: ret 4 */
  esp += 8; SPILL(); return;
}

void f_761cb0(void) {
  LOAD_REGS();
L_761cb0: /* 761cb0: jmp 0x6caa79 */
  SPILL(); f_6caa79(); return;
}

void f_761cd0(void) {
  LOAD_REGS();
L_761cd0: /* 761cd0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 761cd2: push 0x9ca499 */
  { uint32_t v = 0x9ca499u; esp -= 4; W32(esp, v); }
/* 761cd7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 761cdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 761cde: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 761ce5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 761ce6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 761ce7: mov esi, ecx */
  esi = ecx;
/* 761ce9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 761ced: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 761cf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 761cf1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 761cf3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 761cfb: call 0x6ca2e0 */
  esp -= 4; W32(esp, 0x761d00u); SPILL(); f_6ca2e0(); if (g_unwind) return; RELOAD();
/* 761d00: mov ecx, esi */
  ecx = esi;
/* 761d02: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 761d0a: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x761d10u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 761d10: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 761d14: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 761d15: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 761d1c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 761d1f: ret  */
  esp += 4; SPILL(); return;
}

void f_761d40(void) {
  LOAD_REGS();
L_761d40: /* 761d40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 761d41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 761d42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 761d43: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 761d47: mov esi, ecx */
  esi = ecx;
/* 761d49: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 761d4b: je 0x761d8d */
  if (zf) goto L_761d8d;
L_761d4d: /* 761d4d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 761d50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 761d51: call 0x6c1375 */
  esp -= 4; W32(esp, 0x761d56u); SPILL(); f_6c1375(); if (g_unwind) return; RELOAD();
/* 761d56: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 761d59: xor ebx, ebx */
  ebx = 0;
/* 761d5b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 761d5d: jle 0x761d8d */
  if ((zf || sf != of)) goto L_761d8d;
L_761d5f: /* 761d5f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 761d60: xor ebp, ebp */
  ebp = 0;
L_761d62: /* 761d62: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 761d64: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 761d66: mov ecx, esi */
  ecx = esi;
/* 761d68: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x761d6eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 761d6e: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 761d71: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 761d73: je 0x761d81 */
  if (zf) goto L_761d81;
L_761d75: /* 761d75: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 761d77: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 761d79: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 761d7a: mov ecx, eax */
  ecx = eax;
/* 761d7c: call 0x6c8332 */
  esp -= 4; W32(esp, 0x761d81u); SPILL(); f_6c8332(); if (g_unwind) return; RELOAD();
L_761d81: /* 761d81: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 761d84: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 761d85: add ebp, 0x1c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 761d88: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 761d8a: jl 0x761d62 */
  if ((sf != of)) goto L_761d62;
L_761d8c: /* 761d8c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_761d8d: /* 761d8d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 761d8e: mov eax, esi */
  eax = esi;
/* 761d90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 761d91: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 761d92: ret 4 */
  esp += 8; SPILL(); return;
}

void f_761dc0(void) {
  LOAD_REGS();
L_761dc0: /* 761dc0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 761dc2: push 0x9ca4b9 */
  { uint32_t v = 0x9ca4b9u; esp -= 4; W32(esp, v); }
/* 761dc7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 761dcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 761dce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 761dd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 761dd6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 761dd7: mov esi, ecx */
  esi = ecx;
/* 761dd9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 761ddd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 761de0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 761de1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 761de3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 761deb: call 0x6cbe38 */
  esp -= 4; W32(esp, 0x761df0u); SPILL(); f_6cbe38(); if (g_unwind) return; RELOAD();
/* 761df0: mov ecx, esi */
  ecx = esi;
/* 761df2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 761dfa: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x761e00u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 761e00: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 761e04: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 761e05: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 761e0c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 761e0f: ret  */
  esp += 4; SPILL(); return;
}

void f_761e30(void) {
  LOAD_REGS();
L_761e30: /* 761e30: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 761e34: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 761e35: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 761e37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 761e38: mov esi, ecx */
  esi = ecx;
/* 761e3a: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x761e40u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 761e40: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 761e44: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 761e47: mov eax, esi */
  eax = esi;
/* 761e49: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 761e4a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_761e60(void) {
  LOAD_REGS();
L_761e60: /* 761e60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 761e64: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 761e65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 761e66: mov esi, ecx */
  esi = ecx;
/* 761e68: call 0x6c2121 */
  esp -= 4; W32(esp, 0x761e6du); SPILL(); f_6c2121(); if (g_unwind) return; RELOAD();
/* 761e6d: mov eax, esi */
  eax = esi;
/* 761e6f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 761e70: ret 4 */
  esp += 8; SPILL(); return;
}

void f_761e90(void) {
  LOAD_REGS();
L_761e90: /* 761e90: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 761e92: push 0x9ca4d9 */
  { uint32_t v = 0x9ca4d9u; esp -= 4; W32(esp, v); }
/* 761e97: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 761e9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 761e9e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 761ea5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 761ea6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 761ea7: mov esi, ecx */
  esi = ecx;
/* 761ea9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 761ead: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 761eb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 761eb1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 761eb3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 761ebb: call 0x6c25f4 */
  esp -= 4; W32(esp, 0x761ec0u); SPILL(); f_6c25f4(); if (g_unwind) return; RELOAD();
/* 761ec0: mov ecx, esi */
  ecx = esi;
/* 761ec2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 761eca: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x761ed0u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 761ed0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 761ed4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 761ed5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 761edc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 761edf: ret  */
  esp += 4; SPILL(); return;
}

void f_761f00(void) {
  LOAD_REGS();
L_761f00: /* 761f00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 761f01: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 761f02: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 761f03: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 761f07: mov esi, ecx */
  esi = ecx;
/* 761f09: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 761f0b: je 0x761f4d */
  if (zf) goto L_761f4d;
L_761f0d: /* 761f0d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 761f10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 761f11: call 0x6c169a */
  esp -= 4; W32(esp, 0x761f16u); SPILL(); f_6c169a(); if (g_unwind) return; RELOAD();
/* 761f16: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 761f19: xor ebx, ebx */
  ebx = 0;
/* 761f1b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 761f1d: jle 0x761f4d */
  if ((zf || sf != of)) goto L_761f4d;
L_761f1f: /* 761f1f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 761f20: xor ebp, ebp */
  ebp = 0;
L_761f22: /* 761f22: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 761f24: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 761f26: mov ecx, esi */
  ecx = esi;
/* 761f28: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x761f2eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 761f2e: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 761f31: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 761f33: je 0x761f41 */
  if (zf) goto L_761f41;
L_761f35: /* 761f35: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 761f37: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 761f39: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 761f3a: mov ecx, eax */
  ecx = eax;
/* 761f3c: call 0x6caf3d */
  esp -= 4; W32(esp, 0x761f41u); SPILL(); f_6caf3d(); if (g_unwind) return; RELOAD();
L_761f41: /* 761f41: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 761f44: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 761f45: add ebp, 0x2c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 761f48: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 761f4a: jl 0x761f22 */
  if ((sf != of)) goto L_761f22;
L_761f4c: /* 761f4c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_761f4d: /* 761f4d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 761f4e: mov eax, esi */
  eax = esi;
/* 761f50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 761f51: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 761f52: ret 4 */
  esp += 8; SPILL(); return;
}

void f_761f80(void) {
  LOAD_REGS();
L_761f80: /* 761f80: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 761f82: push 0x9ca4f9 */
  { uint32_t v = 0x9ca4f9u; esp -= 4; W32(esp, v); }
/* 761f87: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 761f8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 761f8e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 761f95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 761f96: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 761f97: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 761f98: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 761f99: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 761f9d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 761fa0: push 0xa4 */
  { uint32_t v = 0xa4u; esp -= 4; W32(esp, v); }
/* 761fa5: mov esi, ecx */
  esi = ecx;
/* 761fa7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 761fa8: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 761fac: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x761fb2u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 761fb2: xor ebx, ebx */
  ebx = 0;
/* 761fb4: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 761fb7: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 761fba: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 761fbe: jle 0x761ff7 */
  if ((zf || sf != of)) goto L_761ff7;
L_761fc0: /* 761fc0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 761fc1: xor ebp, ebp */
  ebp = 0;
L_761fc3: /* 761fc3: push 0xa4 */
  { uint32_t v = 0xa4u; esp -= 4; W32(esp, v); }
/* 761fc8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 761fca: mov ecx, esi */
  ecx = esi;
/* 761fcc: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x761fd2u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 761fd2: imul eax, eax, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xa4u);
  eax = (uint32_t)r;
  }
/* 761fd8: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 761fda: je 0x761fe8 */
  if (zf) goto L_761fe8;
L_761fdc: /* 761fdc: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 761fde: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 761fe0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 761fe1: mov ecx, eax */
  ecx = eax;
/* 761fe3: call 0x6cc6da */
  esp -= 4; W32(esp, 0x761fe8u); SPILL(); f_6cc6da(); if (g_unwind) return; RELOAD();
L_761fe8: /* 761fe8: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 761feb: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 761fec: add ebp, 0xa4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xa4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 761ff2: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 761ff4: jl 0x761fc3 */
  if ((sf != of)) goto L_761fc3;
L_761ff6: /* 761ff6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_761ff7: /* 761ff7: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 761ffb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 761ffc: mov eax, esi */
  eax = esi;
/* 761ffe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 761fff: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 762000: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 762007: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76200a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_762040(void) {
  LOAD_REGS();
L_762040: /* 762040: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 762041: mov ebp, esp */
  ebp = esp;
/* 762043: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 762045: push 0x9ca510 */
  { uint32_t v = 0x9ca510u; esp -= 4; W32(esp, v); }
/* 76204a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 762050: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 762051: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 762058: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 76205b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76205c: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 76205f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 762060: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 762063: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 762064: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 762067: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 762069: xor edi, edi */
  edi = 0;
/* 76206b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76206c: mov ecx, ebx */
  ecx = ebx;
/* 76206e: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 762071: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x762077u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 762077: mov ecx, esi */
  ecx = esi;
/* 762079: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x76207fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 76207f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 762081: je 0x7620e2 */
  if (zf) goto L_7620e2;
L_762083: /* 762083: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 762086: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 762087: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 762088: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x76208eu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 76208e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 762091: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 762094: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 762095: mov ecx, ebx */
  ecx = ebx;
/* 762097: call 0x6c1e01 */
  esp -= 4; W32(esp, 0x76209cu); SPILL(); f_6c1e01(); if (g_unwind) return; RELOAD();
/* 76209c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7620a0: /* 7620a0: cmp edi, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7620a3: jge 0x76211b */
  if ((sf == of)) goto L_76211b;
L_7620a5: /* 7620a5: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* 7620a7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7620a9: mov ecx, ebx */
  ecx = ebx;
/* 7620ab: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7620b1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7620b1: imul eax, eax, 0x58 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x58u);
  eax = (uint32_t)r;
  }
/* 7620b4: add eax, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 7620b6: je 0x7620c3 */
  if (zf) goto L_7620c3;
L_7620b8: /* 7620b8: mov ecx, eax */
  ecx = eax;
/* 7620ba: call 0x6c4c64 */
  esp -= 4; W32(esp, 0x7620bfu); SPILL(); f_6c4c64(); if (g_unwind) return; RELOAD();
/* 7620bf: mov esi, eax */
  esi = eax;
/* 7620c1: jmp 0x7620c5 */
  goto L_7620c5;
L_7620c3: /* 7620c3: xor esi, esi */
  esi = 0;
L_7620c5: /* 7620c5: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7620c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7620c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7620ca: call 0x6c67da */
  esp -= 4; W32(esp, 0x7620cfu); SPILL(); f_6c67da(); if (g_unwind) return; RELOAD();
/* 7620cf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7620d2: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7620d5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7620d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7620d7: call 0x6c1505 */
  esp -= 4; W32(esp, 0x7620dcu); SPILL(); f_6c1505(); if (g_unwind) return; RELOAD();
/* 7620dc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7620df: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7620e0: jmp 0x7620a0 */
  goto L_7620a0;
L_7620e2: /* 7620e2: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
/* 7620e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7620e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7620e7: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7620edu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7620ed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7620f0: /* 7620f0: cmp edi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7620f3: jge 0x76211b */
  if ((sf == of)) goto L_76211b;
L_7620f5: /* 7620f5: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 7620f7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7620fa: mov esi, edi */
  esi = edi;
/* 7620fc: imul esi, esi, 0x58 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x58u);
  esi = (uint32_t)r;
  }
/* 7620ff: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 762101: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 762102: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 762103: call 0x6c67da */
  esp -= 4; W32(esp, 0x762108u); SPILL(); f_6c67da(); if (g_unwind) return; RELOAD();
/* 762108: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76210b: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 76210e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76210f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 762110: call 0x6c1505 */
  esp -= 4; W32(esp, 0x762115u); SPILL(); f_6c1505(); if (g_unwind) return; RELOAD();
/* 762115: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 762118: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 762119: jmp 0x7620f0 */
  goto L_7620f0;
L_76211b: /* 76211b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 76211e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 762121: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 762122: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 762123: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76212a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76212b: mov esp, ebp */
  esp = ebp;
/* 76212d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 76212e: ret  */
  esp += 4; SPILL(); return;
}

void f_76212f(void) {
  LOAD_REGS();
L_76212f: /* 76212f: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 762132: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 762137: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 76213a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76213b: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 76213e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x762143u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_762143(); return;
}

void f_762143(void) {
  LOAD_REGS();
L_762143: /* 762143: push 0xa060c4 */
  { uint32_t v = 0xa060c4u; esp -= 4; W32(esp, v); }
/* 762148: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 76214d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x762153u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 762153: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 762156: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 762158: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76215a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x76215fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_76215f: guest_badaddr(0x76215f); return;
}

void f_7621b0(void) {
  LOAD_REGS();
L_7621b0: /* 7621b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7621b2: push 0x9ca529 */
  { uint32_t v = 0x9ca529u; esp -= 4; W32(esp, v); }
/* 7621b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7621bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7621be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7621c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7621c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7621c7: mov esi, ecx */
  esi = ecx;
/* 7621c9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7621cd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7621d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7621d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7621d3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7621db: call 0x6c7928 */
  esp -= 4; W32(esp, 0x7621e0u); SPILL(); f_6c7928(); if (g_unwind) return; RELOAD();
/* 7621e0: mov ecx, esi */
  ecx = esi;
/* 7621e2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7621ea: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7621f0u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7621f0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7621f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7621f5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7621fc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7621ff: ret  */
  esp += 4; SPILL(); return;
}

void f_762220(void) {
  LOAD_REGS();
L_762220: /* 762220: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 762221: mov ebp, esp */
  ebp = esp;
/* 762223: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 762225: push 0x9ca540 */
  { uint32_t v = 0x9ca540u; esp -= 4; W32(esp, v); }
/* 76222a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 762230: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 762231: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 762238: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 76223b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76223c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76223d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 762240: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 762241: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 762244: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 762247: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 762249: xor ebx, ebx */
  ebx = 0;
/* 76224b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76224c: mov ecx, edi */
  ecx = edi;
/* 76224e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 762251: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x762257u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 762257: mov ecx, esi */
  ecx = esi;
/* 762259: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x76225fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 76225f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 762261: je 0x7622bb */
  if (zf) goto L_7622bb;
L_762263: /* 762263: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 762266: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 762267: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 762268: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x76226eu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 76226e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 762271: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 762274: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 762275: mov ecx, edi */
  ecx = edi;
/* 762277: call 0x6c3c65 */
  esp -= 4; W32(esp, 0x76227cu); SPILL(); f_6c3c65(); if (g_unwind) return; RELOAD();
/* 76227c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_762280: /* 762280: cmp ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 762283: jge 0x7622f0 */
  if ((sf == of)) goto L_7622f0;
L_762285: /* 762285: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 762287: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 762289: mov ecx, edi */
  ecx = edi;
/* 76228b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x762291u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 762291: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 762294: add eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 762296: je 0x7622ac */
  if (zf) goto L_7622ac;
L_762298: /* 762298: mov ecx, eax */
  ecx = eax;
/* 76229a: call 0x6c54a2 */
  esp -= 4; W32(esp, 0x76229fu); SPILL(); f_6c54a2(); if (g_unwind) return; RELOAD();
/* 76229f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7622a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7622a1: call 0x6c6f73 */
  esp -= 4; W32(esp, 0x7622a6u); SPILL(); f_6c6f73(); if (g_unwind) return; RELOAD();
/* 7622a6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7622a9: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7622aa: jmp 0x762280 */
  goto L_762280;
L_7622ac: /* 7622ac: xor eax, eax */
  eax = 0;
/* 7622ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7622af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7622b0: call 0x6c6f73 */
  esp -= 4; W32(esp, 0x7622b5u); SPILL(); f_6c6f73(); if (g_unwind) return; RELOAD();
/* 7622b5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7622b8: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7622b9: jmp 0x762280 */
  goto L_762280;
L_7622bb: /* 7622bb: lea ebx, [edi + 4] */
  ebx = (uint32_t)(edi + 0x4u);
/* 7622be: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7622bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7622c0: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x7622c6u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 7622c6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7622c9: xor esi, esi */
  esi = 0;
/* 7622cb: jmp 0x7622d0 */
  goto L_7622d0;
L_7622d0: /* 7622d0: cmp esi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7622d2: jge 0x7622ed */
  if ((sf == of)) goto L_7622ed;
L_7622d4: /* 7622d4: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7622d6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7622d9: mov edx, esi */
  edx = esi;
/* 7622db: imul edx, edx, 0x2c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x2cu);
  edx = (uint32_t)r;
  }
/* 7622de: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7622e0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7622e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7622e2: call 0x6c6f73 */
  esp -= 4; W32(esp, 0x7622e7u); SPILL(); f_6c6f73(); if (g_unwind) return; RELOAD();
/* 7622e7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7622ea: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7622eb: jmp 0x7622d0 */
  goto L_7622d0;
L_7622ed: /* 7622ed: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_7622f0: /* 7622f0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7622f3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7622f4: mov eax, esi */
  eax = esi;
/* 7622f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7622f7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7622fe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7622ff: mov esp, ebp */
  esp = ebp;
/* 762301: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 762302: ret  */
  esp += 4; SPILL(); return;
}

void f_7622cd(void) {
  LOAD_REGS();
L_7622cd: /* 7622cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7622d0: /* 7622d0: cmp esi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7622d2: jge 0x7622ed */
  if ((sf == of)) goto L_7622ed;
L_7622d4: /* 7622d4: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7622d6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7622d9: mov edx, esi */
  edx = esi;
/* 7622db: imul edx, edx, 0x2c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x2cu);
  edx = (uint32_t)r;
  }
/* 7622de: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7622e0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7622e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7622e2: call 0x6c6f73 */
  esp -= 4; W32(esp, 0x7622e7u); SPILL(); f_6c6f73(); if (g_unwind) return; RELOAD();
/* 7622e7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7622ea: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7622eb: jmp 0x7622d0 */
  goto L_7622d0;
L_7622ed: /* 7622ed: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7622f0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7622f3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7622f4: mov eax, esi */
  eax = esi;
/* 7622f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7622f7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7622fe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7622ff: mov esp, ebp */
  esp = ebp;
/* 762301: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 762302: ret  */
  esp += 4; SPILL(); return;
}

void f_762303(void) {
  LOAD_REGS();
L_762303: /* 762303: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 762306: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 76230b: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 76230e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76230f: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 762312: call 0x99caf8 */
  esp -= 4; W32(esp, 0x762317u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_762317(); return;
}

void f_762317(void) {
  LOAD_REGS();
L_762317: /* 762317: push 0xa060dc */
  { uint32_t v = 0xa060dcu; esp -= 4; W32(esp, v); }
/* 76231c: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 762321: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x762327u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 762327: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76232a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76232c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 76232e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x762333u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_762333: guest_badaddr(0x762333); return;
}

void f_762390(void) {
  LOAD_REGS();
L_762390: /* 762390: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 762391: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 762392: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 762393: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 762397: mov esi, ecx */
  esi = ecx;
/* 762399: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 76239b: je 0x7623dd */
  if (zf) goto L_7623dd;
L_76239d: /* 76239d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7623a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7623a1: call 0x6c3c65 */
  esp -= 4; W32(esp, 0x7623a6u); SPILL(); f_6c3c65(); if (g_unwind) return; RELOAD();
/* 7623a6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7623a9: xor ebx, ebx */
  ebx = 0;
/* 7623ab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7623ad: jle 0x7623dd */
  if ((zf || sf != of)) goto L_7623dd;
L_7623af: /* 7623af: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7623b0: xor ebp, ebp */
  ebp = 0;
L_7623b2: /* 7623b2: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 7623b4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7623b6: mov ecx, esi */
  ecx = esi;
/* 7623b8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7623beu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7623be: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 7623c1: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 7623c3: je 0x7623d1 */
  if (zf) goto L_7623d1;
L_7623c5: /* 7623c5: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7623c7: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7623c9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7623ca: mov ecx, eax */
  ecx = eax;
/* 7623cc: call 0x6c73a1 */
  esp -= 4; W32(esp, 0x7623d1u); SPILL(); f_6c73a1(); if (g_unwind) return; RELOAD();
L_7623d1: /* 7623d1: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7623d4: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7623d5: add ebp, 0x2c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 7623d8: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7623da: jl 0x7623b2 */
  if ((sf != of)) goto L_7623b2;
L_7623dc: /* 7623dc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_7623dd: /* 7623dd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7623de: mov eax, esi */
  eax = esi;
/* 7623e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7623e1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7623e2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_762410(void) {
  LOAD_REGS();
L_762410: /* 762410: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 762412: push 0x9ca559 */
  { uint32_t v = 0x9ca559u; esp -= 4; W32(esp, v); }
/* 762417: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76241d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76241e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 762425: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 762426: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 762427: mov esi, ecx */
  esi = ecx;
/* 762429: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 76242d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 762430: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 762431: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 762433: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 76243b: call 0x6c95e8 */
  esp -= 4; W32(esp, 0x762440u); SPILL(); f_6c95e8(); if (g_unwind) return; RELOAD();
/* 762440: mov ecx, esi */
  ecx = esi;
/* 762442: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 76244a: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x762450u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 762450: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 762454: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 762455: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76245c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76245f: ret  */
  esp += 4; SPILL(); return;
}

void f_762480(void) {
  LOAD_REGS();
L_762480: /* 762480: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 762481: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 762482: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 762483: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 762487: mov esi, ecx */
  esi = ecx;
/* 762489: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 76248b: je 0x7624d0 */
  if (zf) goto L_7624d0;
L_76248d: /* 76248d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 762490: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 762491: call 0x6c2171 */
  esp -= 4; W32(esp, 0x762496u); SPILL(); f_6c2171(); if (g_unwind) return; RELOAD();
/* 762496: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 762499: xor ebx, ebx */
  ebx = 0;
/* 76249b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 76249d: jle 0x7624d0 */
  if ((zf || sf != of)) goto L_7624d0;
L_76249f: /* 76249f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7624a0: xor ebp, ebp */
  ebp = 0;
L_7624a2: /* 7624a2: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 7624a4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7624a6: mov ecx, esi */
  ecx = esi;
/* 7624a8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7624aeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7624ae: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7624b0: lea ecx, [eax + eax*8] */
  ecx = (uint32_t)(eax + eax*8);
/* 7624b3: lea ecx, [edx + ecx*8] */
  ecx = (uint32_t)(edx + ecx*8);
/* 7624b6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7624b8: je 0x7624c4 */
  if (zf) goto L_7624c4;
L_7624ba: /* 7624ba: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7624bc: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7624be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7624bf: call 0x6c8e77 */
  esp -= 4; W32(esp, 0x7624c4u); SPILL(); f_6c8e77(); if (g_unwind) return; RELOAD();
L_7624c4: /* 7624c4: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7624c7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7624c8: add ebp, 0x48 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 7624cb: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7624cd: jl 0x7624a2 */
  if ((sf != of)) goto L_7624a2;
L_7624cf: /* 7624cf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_7624d0: /* 7624d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7624d1: mov eax, esi */
  eax = esi;
/* 7624d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7624d4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7624d5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_762500(void) {
  LOAD_REGS();
L_762500: /* 762500: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 762502: push 0x9ca579 */
  { uint32_t v = 0x9ca579u; esp -= 4; W32(esp, v); }
/* 762507: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76250d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76250e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 762515: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 762516: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 762517: mov esi, ecx */
  esi = ecx;
/* 762519: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 76251d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 762520: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 762521: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 762523: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 76252b: call 0x6c9be2 */
  esp -= 4; W32(esp, 0x762530u); SPILL(); f_6c9be2(); if (g_unwind) return; RELOAD();
/* 762530: mov ecx, esi */
  ecx = esi;
/* 762532: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 76253a: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x762540u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 762540: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 762544: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 762545: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76254c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76254f: ret  */
  esp += 4; SPILL(); return;
}

void f_762570(void) {
  LOAD_REGS();
L_762570: /* 762570: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 762571: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 762572: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 762573: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 762577: mov esi, ecx */
  esi = ecx;
/* 762579: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 76257b: je 0x7625c0 */
  if (zf) goto L_7625c0;
L_76257d: /* 76257d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 762580: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 762581: call 0x6c8c2e */
  esp -= 4; W32(esp, 0x762586u); SPILL(); f_6c8c2e(); if (g_unwind) return; RELOAD();
/* 762586: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 762589: xor ebx, ebx */
  ebx = 0;
/* 76258b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 76258d: jle 0x7625c0 */
  if ((zf || sf != of)) goto L_7625c0;
L_76258f: /* 76258f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 762590: xor ebp, ebp */
  ebp = 0;
L_762592: /* 762592: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 762594: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 762596: mov ecx, esi */
  ecx = esi;
/* 762598: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x76259eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 76259e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7625a0: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 7625a3: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 7625a6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7625a8: je 0x7625b4 */
  if (zf) goto L_7625b4;
L_7625aa: /* 7625aa: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 7625ac: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7625ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7625af: call 0x6c7833 */
  esp -= 4; W32(esp, 0x7625b4u); SPILL(); f_6c7833(); if (g_unwind) return; RELOAD();
L_7625b4: /* 7625b4: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7625b7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7625b8: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 7625bb: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7625bd: jl 0x762592 */
  if ((sf != of)) goto L_762592;
L_7625bf: /* 7625bf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_7625c0: /* 7625c0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7625c1: mov eax, esi */
  eax = esi;
/* 7625c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7625c4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7625c5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7625f0(void) {
  LOAD_REGS();
L_7625f0: /* 7625f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7625f2: push 0x9ca599 */
  { uint32_t v = 0x9ca599u; esp -= 4; W32(esp, v); }
/* 7625f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7625fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7625fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 762605: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 762606: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 762607: mov esi, ecx */
  esi = ecx;
/* 762609: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 76260d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 762610: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 762611: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 762613: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 76261b: call 0x6cc83d */
  esp -= 4; W32(esp, 0x762620u); SPILL(); f_6cc83d(); if (g_unwind) return; RELOAD();
/* 762620: mov ecx, esi */
  ecx = esi;
/* 762622: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 76262a: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x762630u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 762630: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 762634: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 762635: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76263c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76263f: ret  */
  esp += 4; SPILL(); return;
}

void f_762660(void) {
  LOAD_REGS();
L_762660: /* 762660: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 762661: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 762662: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 762663: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 762667: mov esi, ecx */
  esi = ecx;
/* 762669: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 76266b: je 0x7626b0 */
  if (zf) goto L_7626b0;
L_76266d: /* 76266d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 762670: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 762671: call 0x6c8508 */
  esp -= 4; W32(esp, 0x762676u); SPILL(); f_6c8508(); if (g_unwind) return; RELOAD();
/* 762676: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 762679: xor ebx, ebx */
  ebx = 0;
/* 76267b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 76267d: jle 0x7626b0 */
  if ((zf || sf != of)) goto L_7626b0;
L_76267f: /* 76267f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 762680: xor ebp, ebp */
  ebp = 0;
L_762682: /* 762682: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 762684: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 762686: mov ecx, esi */
  ecx = esi;
/* 762688: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x76268eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 76268e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 762690: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 762693: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 762696: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 762698: je 0x7626a4 */
  if (zf) goto L_7626a4;
L_76269a: /* 76269a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 76269c: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 76269e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76269f: call 0x6c85ad */
  esp -= 4; W32(esp, 0x7626a4u); SPILL(); f_6c85ad(); if (g_unwind) return; RELOAD();
L_7626a4: /* 7626a4: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7626a7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7626a8: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 7626ab: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7626ad: jl 0x762682 */
  if ((sf != of)) goto L_762682;
L_7626af: /* 7626af: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_7626b0: /* 7626b0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7626b1: mov eax, esi */
  eax = esi;
/* 7626b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7626b4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7626b5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7626e0(void) {
  LOAD_REGS();
L_7626e0: /* 7626e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7626e2: push 0x9ca5b9 */
  { uint32_t v = 0x9ca5b9u; esp -= 4; W32(esp, v); }
/* 7626e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7626ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7626ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7626f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7626f6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7626f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7626f8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7626f9: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 7626fd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 762700: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 762702: mov esi, ecx */
  esi = ecx;
/* 762704: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 762705: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 762709: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x76270fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 76270f: xor ebx, ebx */
  ebx = 0;
/* 762711: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 762714: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 762717: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 76271b: jle 0x76274b */
  if ((zf || sf != of)) goto L_76274b;
L_76271d: /* 76271d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76271e: xor ebp, ebp */
  ebp = 0;
L_762720: /* 762720: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 762722: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 762724: mov ecx, esi */
  ecx = esi;
/* 762726: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x76272cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 76272c: imul eax, eax, 0x64 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x64u);
  eax = (uint32_t)r;
  }
/* 76272f: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 762731: je 0x76273f */
  if (zf) goto L_76273f;
L_762733: /* 762733: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 762735: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 762737: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 762738: mov ecx, eax */
  ecx = eax;
/* 76273a: call 0x6c3bca */
  esp -= 4; W32(esp, 0x76273fu); SPILL(); f_6c3bca(); if (g_unwind) return; RELOAD();
L_76273f: /* 76273f: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 762742: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 762743: add ebp, 0x64 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 762746: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 762748: jl 0x762720 */
  if ((sf != of)) goto L_762720;
L_76274a: /* 76274a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_76274b: /* 76274b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 76274f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 762750: mov eax, esi */
  eax = esi;
/* 762752: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 762753: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 762754: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76275b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76275e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7627a0(void) {
  LOAD_REGS();
L_7627a0: /* 7627a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7627a2: push 0x9ca5d9 */
  { uint32_t v = 0x9ca5d9u; esp -= 4; W32(esp, v); }
/* 7627a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7627ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7627ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7627b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7627b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7627b7: mov esi, ecx */
  esi = ecx;
/* 7627b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7627bd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7627c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7627c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7627c3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7627cb: call 0x6c51cd */
  esp -= 4; W32(esp, 0x7627d0u); SPILL(); f_6c51cd(); if (g_unwind) return; RELOAD();
/* 7627d0: mov ecx, esi */
  ecx = esi;
/* 7627d2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7627da: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7627e0u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7627e0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7627e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7627e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7627ec: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7627ef: ret  */
  esp += 4; SPILL(); return;
}

void f_762810(void) {
  LOAD_REGS();
L_762810: /* 762810: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 762811: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 762812: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 762813: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 762817: mov esi, ecx */
  esi = ecx;
/* 762819: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 76281b: je 0x76285d */
  if (zf) goto L_76285d;
L_76281d: /* 76281d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 762820: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 762821: call 0x6c3d5a */
  esp -= 4; W32(esp, 0x762826u); SPILL(); f_6c3d5a(); if (g_unwind) return; RELOAD();
/* 762826: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 762829: xor ebx, ebx */
  ebx = 0;
/* 76282b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 76282d: jle 0x76285d */
  if ((zf || sf != of)) goto L_76285d;
L_76282f: /* 76282f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 762830: xor ebp, ebp */
  ebp = 0;
L_762832: /* 762832: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 762834: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 762836: mov ecx, esi */
  ecx = esi;
/* 762838: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x76283eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 76283e: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 762841: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 762843: je 0x762851 */
  if (zf) goto L_762851;
L_762845: /* 762845: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 762847: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 762849: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76284a: mov ecx, eax */
  ecx = eax;
/* 76284c: call 0x6ca4c5 */
  esp -= 4; W32(esp, 0x762851u); SPILL(); f_6ca4c5(); if (g_unwind) return; RELOAD();
L_762851: /* 762851: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 762854: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 762855: add ebp, 0x2c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 762858: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76285a: jl 0x762832 */
  if ((sf != of)) goto L_762832;
L_76285c: /* 76285c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_76285d: /* 76285d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76285e: mov eax, esi */
  eax = esi;
/* 762860: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 762861: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 762862: ret 4 */
  esp += 8; SPILL(); return;
}

void f_762890(void) {
  LOAD_REGS();
L_762890: /* 762890: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 762892: push 0x9ca5f9 */
  { uint32_t v = 0x9ca5f9u; esp -= 4; W32(esp, v); }
/* 762897: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76289d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76289e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7628a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7628a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7628a7: mov esi, ecx */
  esi = ecx;
/* 7628a9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7628ad: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7628b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7628b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7628b3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7628bb: call 0x6c254f */
  esp -= 4; W32(esp, 0x7628c0u); SPILL(); f_6c254f(); if (g_unwind) return; RELOAD();
/* 7628c0: mov ecx, esi */
  ecx = esi;
/* 7628c2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7628ca: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7628d0u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7628d0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7628d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7628d5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7628dc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7628df: ret  */
  esp += 4; SPILL(); return;
}

void f_762900(void) {
  LOAD_REGS();
L_762900: /* 762900: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 762901: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 762902: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 762903: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 762907: mov esi, ecx */
  esi = ecx;
/* 762909: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 76290b: je 0x76294d */
  if (zf) goto L_76294d;
L_76290d: /* 76290d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 762910: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 762911: call 0x6c119a */
  esp -= 4; W32(esp, 0x762916u); SPILL(); f_6c119a(); if (g_unwind) return; RELOAD();
/* 762916: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 762919: xor ebx, ebx */
  ebx = 0;
/* 76291b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 76291d: jle 0x76294d */
  if ((zf || sf != of)) goto L_76294d;
L_76291f: /* 76291f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 762920: xor ebp, ebp */
  ebp = 0;
L_762922: /* 762922: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 762924: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 762926: mov ecx, esi */
  ecx = esi;
/* 762928: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x76292eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 76292e: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 762931: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 762933: je 0x762941 */
  if (zf) goto L_762941;
L_762935: /* 762935: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 762937: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 762939: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76293a: mov ecx, eax */
  ecx = eax;
/* 76293c: call 0x6c106e */
  esp -= 4; W32(esp, 0x762941u); SPILL(); f_6c106e(); if (g_unwind) return; RELOAD();
L_762941: /* 762941: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 762944: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 762945: add ebp, 0x1c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 762948: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76294a: jl 0x762922 */
  if ((sf != of)) goto L_762922;
L_76294c: /* 76294c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_76294d: /* 76294d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76294e: mov eax, esi */
  eax = esi;
/* 762950: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 762951: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 762952: ret 4 */
  esp += 8; SPILL(); return;
}

void f_762980(void) {
  LOAD_REGS();
L_762980: /* 762980: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 762982: push 0x9ca619 */
  { uint32_t v = 0x9ca619u; esp -= 4; W32(esp, v); }
/* 762987: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76298d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76298e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 762995: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 762996: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 762997: mov esi, ecx */
  esi = ecx;
/* 762999: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 76299d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7629a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7629a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7629a3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7629ab: call 0x6cc077 */
  esp -= 4; W32(esp, 0x7629b0u); SPILL(); f_6cc077(); if (g_unwind) return; RELOAD();
/* 7629b0: mov ecx, esi */
  ecx = esi;
/* 7629b2: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7629ba: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7629c0u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7629c0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7629c4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7629c5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7629cc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7629cf: ret  */
  esp += 4; SPILL(); return;
}

void f_7629f0(void) {
  LOAD_REGS();
L_7629f0: /* 7629f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7629f1: mov ebp, esp */
  ebp = esp;
/* 7629f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7629f5: push 0x9ca630 */
  { uint32_t v = 0x9ca630u; esp -= 4; W32(esp, v); }
/* 7629fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 762a00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 762a01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 762a08: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 762a0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 762a0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 762a0d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 762a10: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 762a11: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 762a14: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 762a17: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 762a19: xor ebx, ebx */
  ebx = 0;
/* 762a1b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 762a1c: mov ecx, esi */
  ecx = esi;
/* 762a1e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 762a21: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x762a27u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 762a27: mov ecx, edi */
  ecx = edi;
/* 762a29: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x762a2fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 762a2f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 762a31: je 0x762ac1 */
  if (zf) goto L_762ac1;
L_762a37: /* 762a37: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 762a3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 762a3b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 762a3c: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x762a42u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 762a42: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 762a45: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 762a48: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 762a49: mov ecx, esi */
  ecx = esi;
/* 762a4b: call 0x6c448f */
  esp -= 4; W32(esp, 0x762a50u); SPILL(); f_6c448f(); if (g_unwind) return; RELOAD();
/* 762a50: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 762a53: mov ebx, dword ptr [0xcfa280] */
  ebx = R32((uint32_t)(0xcfa280u));
/* 762a59: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_762a60: /* 762a60: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 762a63: cmp edx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 762a66: jge 0x762b1a */
  if ((sf == of)) goto L_762b1a;
L_762a6c: /* 762a6c: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 762a6e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 762a70: mov ecx, esi */
  ecx = esi;
/* 762a72: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x762a78u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 762a78: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 762a7a: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 762a7d: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 762a7f: je 0x762a8c */
  if (zf) goto L_762a8c;
L_762a81: /* 762a81: mov ecx, eax */
  ecx = eax;
/* 762a83: call 0x6c6cfd */
  esp -= 4; W32(esp, 0x762a88u); SPILL(); f_6c6cfd(); if (g_unwind) return; RELOAD();
/* 762a88: mov esi, eax */
  esi = eax;
/* 762a8a: jmp 0x762a8e */
  goto L_762a8e;
L_762a8c: /* 762a8c: xor esi, esi */
  esi = 0;
L_762a8e: /* 762a8e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 762a91: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 762a94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 762a95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 762a96: call 0x6c89a4 */
  esp -= 4; W32(esp, 0x762a9bu); SPILL(); f_6c89a4(); if (g_unwind) return; RELOAD();
/* 762a9b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 762a9e: lea edx, [esi + 0x10] */
  edx = (uint32_t)(esi + 0x10u);
/* 762aa1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 762aa2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 762aa3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x762aa5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 762aa5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 762aa8: add esi, 0x1c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 762aab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 762aac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 762aad: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x762aafu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 762aaf: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 762ab2: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 762ab5: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 762ab8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 762abb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 762abc: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 762abf: jmp 0x762a60 */
  goto L_762a60;
L_762ac1: /* 762ac1: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 762ac4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 762ac5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 762ac6: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x762accu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 762acc: mov ebx, dword ptr [0xcfa280] */
  ebx = R32((uint32_t)(0xcfa280u));
/* 762ad2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 762ad5: xor edi, edi */
  edi = 0;
L_762ad7: /* 762ad7: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 762ada: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 762adc: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 762adf: jge 0x762b17 */
  if ((sf == of)) goto L_762b17;
L_762ae1: /* 762ae1: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 762ae4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 762ae6: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 762ae9: mov esi, edi */
  esi = edi;
/* 762aeb: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 762aee: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 762af0: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 762af3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 762af4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 762af5: call 0x6c89a4 */
  esp -= 4; W32(esp, 0x762afau); SPILL(); f_6c89a4(); if (g_unwind) return; RELOAD();
/* 762afa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 762afd: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 762b00: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 762b01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 762b02: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x762b04u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 762b04: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 762b07: add esi, 0x1c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 762b0a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 762b0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 762b0c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x762b0eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 762b0e: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 762b11: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 762b14: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 762b15: jmp 0x762ad7 */
  goto L_762ad7;
L_762b17: /* 762b17: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_762b1a: /* 762b1a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 762b1d: mov eax, edi */
  eax = edi;
/* 762b1f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 762b20: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 762b21: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 762b28: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 762b29: mov esp, ebp */
  esp = ebp;
/* 762b2b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 762b2c: ret  */
  esp += 4; SPILL(); return;
}

void f_762b2d(void) {
  LOAD_REGS();
L_762b2d: /* 762b2d: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 762b30: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 762b35: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 762b38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 762b39: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 762b3c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x762b41u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_762b41(); return;
}

void f_762b41(void) {
  LOAD_REGS();
L_762b41: /* 762b41: push 0xa060f4 */
  { uint32_t v = 0xa060f4u; esp -= 4; W32(esp, v); }
/* 762b46: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 762b4b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x762b51u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 762b51: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 762b54: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 762b56: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 762b58: call 0x99caf8 */
  esp -= 4; W32(esp, 0x762b5du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_762b5d: guest_badaddr(0x762b5d); return;
}

void f_762bc0(void) {
  LOAD_REGS();
L_762bc0: /* 762bc0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 762bc1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 762bc2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 762bc3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 762bc7: mov esi, ecx */
  esi = ecx;
/* 762bc9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 762bcb: je 0x762c0f */
  if (zf) goto L_762c0f;
L_762bcd: /* 762bcd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 762bd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 762bd1: call 0x6c448f */
  esp -= 4; W32(esp, 0x762bd6u); SPILL(); f_6c448f(); if (g_unwind) return; RELOAD();
/* 762bd6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 762bd9: xor ebx, ebx */
  ebx = 0;
/* 762bdb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 762bdd: jle 0x762c0f */
  if ((zf || sf != of)) goto L_762c0f;
L_762bdf: /* 762bdf: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 762be0: xor ebp, ebp */
  ebp = 0;
L_762be2: /* 762be2: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 762be4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 762be6: mov ecx, esi */
  ecx = esi;
/* 762be8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x762beeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 762bee: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 762bf0: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 762bf3: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 762bf5: je 0x762c03 */
  if (zf) goto L_762c03;
L_762bf7: /* 762bf7: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 762bf9: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 762bfb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 762bfc: mov ecx, eax */
  ecx = eax;
/* 762bfe: call 0x6cd03f */
  esp -= 4; W32(esp, 0x762c03u); SPILL(); f_6cd03f(); if (g_unwind) return; RELOAD();
L_762c03: /* 762c03: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 762c06: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 762c07: add ebp, 0x20 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 762c0a: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 762c0c: jl 0x762be2 */
  if ((sf != of)) goto L_762be2;
L_762c0e: /* 762c0e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_762c0f: /* 762c0f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 762c10: mov eax, esi */
  eax = esi;
/* 762c12: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 762c13: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 762c14: ret 4 */
  esp += 8; SPILL(); return;
}

void f_762c40(void) {
  LOAD_REGS();
L_762c40: /* 762c40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 762c42: push 0x9ca649 */
  { uint32_t v = 0x9ca649u; esp -= 4; W32(esp, v); }
/* 762c47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 762c4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 762c4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 762c55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 762c56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 762c57: mov esi, ecx */
  esi = ecx;
/* 762c59: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 762c5d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 762c60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 762c61: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 762c63: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 762c6b: call 0x6c35da */
  esp -= 4; W32(esp, 0x762c70u); SPILL(); f_6c35da(); if (g_unwind) return; RELOAD();
/* 762c70: mov ecx, esi */
  ecx = esi;
/* 762c72: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 762c7a: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x762c80u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 762c80: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 762c84: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 762c85: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 762c8c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 762c8f: ret  */
  esp += 4; SPILL(); return;
}

void f_762cb0(void) {
  LOAD_REGS();
L_762cb0: /* 762cb0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 762cb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 762cb2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 762cb3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 762cb7: mov esi, ecx */
  esi = ecx;
/* 762cb9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 762cbb: je 0x762d00 */
  if (zf) goto L_762d00;
L_762cbd: /* 762cbd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 762cc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 762cc1: call 0x6c3b70 */
  esp -= 4; W32(esp, 0x762cc6u); SPILL(); f_6c3b70(); if (g_unwind) return; RELOAD();
/* 762cc6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 762cc9: xor ebx, ebx */
  ebx = 0;
/* 762ccb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 762ccd: jle 0x762d00 */
  if ((zf || sf != of)) goto L_762d00;
L_762ccf: /* 762ccf: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 762cd0: xor ebp, ebp */
  ebp = 0;
L_762cd2: /* 762cd2: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 762cd4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 762cd6: mov ecx, esi */
  ecx = esi;
/* 762cd8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x762cdeu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 762cde: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 762ce0: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 762ce3: lea ecx, [edx + ecx*8] */
  ecx = (uint32_t)(edx + ecx*8);
/* 762ce6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 762ce8: je 0x762cf4 */
  if (zf) goto L_762cf4;
L_762cea: /* 762cea: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 762cec: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 762cee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 762cef: call 0x6c7ae0 */
  esp -= 4; W32(esp, 0x762cf4u); SPILL(); f_6c7ae0(); if (g_unwind) return; RELOAD();
L_762cf4: /* 762cf4: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 762cf7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 762cf8: add ebp, 0x28 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 762cfb: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 762cfd: jl 0x762cd2 */
  if ((sf != of)) goto L_762cd2;
L_762cff: /* 762cff: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_762d00: /* 762d00: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 762d01: mov eax, esi */
  eax = esi;
/* 762d03: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 762d04: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 762d05: ret 4 */
  esp += 8; SPILL(); return;
}

void f_762d30(void) {
  LOAD_REGS();
L_762d30: /* 762d30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 762d32: push 0x9ca669 */
  { uint32_t v = 0x9ca669u; esp -= 4; W32(esp, v); }
/* 762d37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 762d3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 762d3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 762d45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 762d46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 762d47: mov esi, ecx */
  esi = ecx;
/* 762d49: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 762d4d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 762d50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 762d51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 762d53: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 762d5b: call 0x6c341d */
  esp -= 4; W32(esp, 0x762d60u); SPILL(); f_6c341d(); if (g_unwind) return; RELOAD();
/* 762d60: mov ecx, esi */
  ecx = esi;
/* 762d62: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 762d6a: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x762d70u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 762d70: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 762d74: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 762d75: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 762d7c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 762d7f: ret  */
  esp += 4; SPILL(); return;
}

void f_762da0(void) {
  LOAD_REGS();
L_762da0: /* 762da0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 762da1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 762da2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 762da3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 762da7: mov esi, ecx */
  esi = ecx;
/* 762da9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 762dab: je 0x762ded */
  if (zf) goto L_762ded;
L_762dad: /* 762dad: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 762db0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 762db1: call 0x6ca529 */
  esp -= 4; W32(esp, 0x762db6u); SPILL(); f_6ca529(); if (g_unwind) return; RELOAD();
/* 762db6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 762db9: xor ebx, ebx */
  ebx = 0;
/* 762dbb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 762dbd: jle 0x762ded */
  if ((zf || sf != of)) goto L_762ded;
L_762dbf: /* 762dbf: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 762dc0: xor ebp, ebp */
  ebp = 0;
L_762dc2: /* 762dc2: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 762dc4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 762dc6: mov ecx, esi */
  ecx = esi;
/* 762dc8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x762dceu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 762dce: imul eax, eax, 0x34 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x34u);
  eax = (uint32_t)r;
  }
/* 762dd1: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 762dd3: je 0x762de1 */
  if (zf) goto L_762de1;
L_762dd5: /* 762dd5: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 762dd7: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 762dd9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 762dda: mov ecx, eax */
  ecx = eax;
/* 762ddc: call 0x6c7fdb */
  esp -= 4; W32(esp, 0x762de1u); SPILL(); f_6c7fdb(); if (g_unwind) return; RELOAD();
L_762de1: /* 762de1: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 762de4: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 762de5: add ebp, 0x34 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 762de8: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 762dea: jl 0x762dc2 */
  if ((sf != of)) goto L_762dc2;
L_762dec: /* 762dec: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_762ded: /* 762ded: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 762dee: mov eax, esi */
  eax = esi;
/* 762df0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 762df1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 762df2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_762e20(void) {
  LOAD_REGS();
L_762e20: /* 762e20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 762e24: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 762e25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 762e26: mov esi, ecx */
  esi = ecx;
/* 762e28: call 0x6c7090 */
  esp -= 4; W32(esp, 0x762e2du); SPILL(); f_6c7090(); if (g_unwind) return; RELOAD();
/* 762e2d: mov eax, esi */
  eax = esi;
/* 762e2f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 762e30: ret 4 */
  esp += 8; SPILL(); return;
}

void f_762e50(void) {
  LOAD_REGS();
L_762e50: /* 762e50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 762e54: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 762e55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 762e56: mov esi, ecx */
  esi = ecx;
/* 762e58: call 0x6c3ecc */
  esp -= 4; W32(esp, 0x762e5du); SPILL(); f_6c3ecc(); if (g_unwind) return; RELOAD();
/* 762e5d: mov eax, esi */
  eax = esi;
/* 762e5f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 762e60: ret 4 */
  esp += 8; SPILL(); return;
}

void f_762e80(void) {
  LOAD_REGS();
L_762e80: /* 762e80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 762e81: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 762e85: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 762e86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 762e87: mov esi, ecx */
  esi = ecx;
/* 762e89: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 762e8b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 762e8c: je 0x762f32 */
  if (zf) goto L_762f32;
L_762e92: /* 762e92: mov eax, dword ptr [0xcfa3d4] */
  eax = R32((uint32_t)(0xcfa3d4u));
/* 762e97: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 762e99: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 762e9b: mov edi, dword ptr [ebx + 4] */
  edi = R32((uint32_t)(ebx + 0x4u));
/* 762e9e: je 0x762ebe */
  if (zf) goto L_762ebe;
L_762ea0: /* 762ea0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 762ea3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 762ea5: push 0x6c286a */
  { uint32_t v = 0x6c286au; esp -= 4; W32(esp, v); }
/* 762eaa: push 0x6c32dd */
  { uint32_t v = 0x6c32ddu; esp -= 4; W32(esp, v); }
/* 762eaf: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 762eb1: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 762eb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 762eb4: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 762eb7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 762eb9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 762eba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 762ebb: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x762ebeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_762ebe: /* 762ebe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 762ebf: mov ecx, esi */
  ecx = esi;
/* 762ec1: call 0x6c9110 */
  esp -= 4; W32(esp, 0x762ec6u); SPILL(); f_6c9110(); if (g_unwind) return; RELOAD();
/* 762ec6: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 762ec9: xor ebp, ebp */
  ebp = 0;
/* 762ecb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 762ecd: jle 0x762f32 */
  if ((zf || sf != of)) goto L_762f32;
L_762ecf: /* 762ecf: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
L_762ed3: /* 762ed3: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 762ed5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 762ed7: mov ecx, esi */
  ecx = esi;
/* 762ed9: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x762edfu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 762edf: mov ecx, dword ptr [0xcfa3d4] */
  ecx = R32((uint32_t)(0xcfa3d4u));
/* 762ee5: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 762ee7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 762ee9: mov edi, eax */
  edi = eax;
/* 762eeb: je 0x762f08 */
  if (zf) goto L_762f08;
L_762eed: /* 762eed: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 762ef0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 762ef2: push 0x6c286a */
  { uint32_t v = 0x6c286au; esp -= 4; W32(esp, v); }
/* 762ef7: push 0x6c32dd */
  { uint32_t v = 0x6c32ddu; esp -= 4; W32(esp, v); }
/* 762efc: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 762efe: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 762f00: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 762f02: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 762f03: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 762f04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 762f05: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x762f08u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_762f08: /* 762f08: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 762f0a: imul edi, edi, 0x78 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x78u);
  edi = (uint32_t)r;
  }
/* 762f0d: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  edi = r;
  }
/* 762f0f: mov ecx, edi */
  ecx = edi;
/* 762f11: je 0x762f1f */
  if (zf) goto L_762f1f;
L_762f13: /* 762f13: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 762f15: add edx, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 762f19: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 762f1a: call 0x6c99ee */
  esp -= 4; W32(esp, 0x762f1fu); SPILL(); f_6c99ee(); if (g_unwind) return; RELOAD();
L_762f1f: /* 762f1f: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 762f23: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 762f26: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 762f27: add ecx, 0x78 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 762f2a: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 762f2c: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 762f30: jl 0x762ed3 */
  if ((sf != of)) goto L_762ed3;
L_762f32: /* 762f32: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 762f33: mov eax, esi */
  eax = esi;
/* 762f35: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 762f36: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 762f37: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 762f38: ret 4 */
  esp += 8; SPILL(); return;
}

void f_762f70(void) {
  LOAD_REGS();
L_762f70: /* 762f70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 762f71: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 762f75: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 762f77: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 762f78: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 762f79: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 762f7f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 762f80: mov ebp, ecx */
  ebp = ecx;
/* 762f82: jge 0x762f98 */
  if ((sf == of)) goto L_762f98;
L_762f84: /* 762f84: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 762f89: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 762f8e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 762f93: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x762f95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 762f95: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_762f98: /* 762f98: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 762f9b: jle 0x762fb1 */
  if ((zf || sf != of)) goto L_762fb1;
L_762f9d: /* 762f9d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 762fa2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 762fa7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 762fac: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x762faeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 762fae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_762fb1: /* 762fb1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 762fb5: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 762fb8: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 762fbb: jle 0x762fd1 */
  if ((zf || sf != of)) goto L_762fd1;
L_762fbd: /* 762fbd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 762fc2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 762fc7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 762fcc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x762fceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 762fce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_762fd1: /* 762fd1: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 762fd3: jge 0x762ff0 */
  if ((sf == of)) goto L_762ff0;
L_762fd5: /* 762fd5: mov esi, ebx */
  esi = ebx;
/* 762fd7: imul esi, esi, 0x5c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x5cu);
  esi = (uint32_t)r;
  }
/* 762fda: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 762fdc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_762fe0: /* 762fe0: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 762fe3: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 762fe5: call 0x6c8580 */
  esp -= 4; W32(esp, 0x762feau); SPILL(); f_6c8580(); if (g_unwind) return; RELOAD();
/* 762fea: add esi, 0x5c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 762fed: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 762fee: jne 0x762fe0 */
  if (!zf) goto L_762fe0;
L_762ff0: /* 762ff0: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 762ff4: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 762ff6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 762ff7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 762ff8: mov ecx, ebp */
  ecx = ebp;
/* 762ffa: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x763000u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 763000: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 763001: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 763002: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 763003: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 763004: ret 8 */
  esp += 12; SPILL(); return;
}

void f_763040(void) {
  LOAD_REGS();
L_763040: /* 763040: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 763041: mov esi, ecx */
  esi = ecx;
/* 763043: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 763046: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 763047: xor edi, edi */
  edi = 0;
/* 763049: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 76304b: jle 0x763065 */
  if ((zf || sf != of)) goto L_763065;
L_76304d: /* 76304d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76304e: xor ebx, ebx */
  ebx = 0;
L_763050: /* 763050: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 763052: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 763054: call 0x6c8580 */
  esp -= 4; W32(esp, 0x763059u); SPILL(); f_6c8580(); if (g_unwind) return; RELOAD();
/* 763059: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 76305c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 76305d: add ebx, 0x5c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 763060: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 763062: jl 0x763050 */
  if ((sf != of)) goto L_763050;
L_763064: /* 763064: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_763065: /* 763065: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 763069: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76306a: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 76306c: mov ecx, esi */
  ecx = esi;
/* 76306e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x763074u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 763074: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 763075: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 763076: ret 4 */
  esp += 8; SPILL(); return;
}

void f_763090(void) {
  LOAD_REGS();
L_763090: /* 763090: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 763091: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 763095: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 763097: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 763098: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 763099: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 76309f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7630a0: mov ebp, ecx */
  ebp = ecx;
/* 7630a2: jge 0x7630b8 */
  if ((sf == of)) goto L_7630b8;
L_7630a4: /* 7630a4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 7630a9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7630ae: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 7630b3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7630b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7630b5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7630b8: /* 7630b8: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7630bb: jle 0x7630d1 */
  if ((zf || sf != of)) goto L_7630d1;
L_7630bd: /* 7630bd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 7630c2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7630c7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 7630cc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7630ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7630ce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7630d1: /* 7630d1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 7630d5: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 7630d8: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7630db: jle 0x7630f1 */
  if ((zf || sf != of)) goto L_7630f1;
L_7630dd: /* 7630dd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 7630e2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 7630e7: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 7630ec: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7630eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7630ee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7630f1: /* 7630f1: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7630f3: jge 0x763113 */
  if ((sf == of)) goto L_763113;
L_7630f5: /* 7630f5: mov esi, ebx */
  esi = ebx;
/* 7630f7: imul esi, esi, 0x11c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x11cu);
  esi = (uint32_t)r;
  }
/* 7630fd: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 7630ff: nop  */
L_763100: /* 763100: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 763103: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 763105: call 0x6ca84e */
  esp -= 4; W32(esp, 0x76310au); SPILL(); f_6ca84e(); if (g_unwind) return; RELOAD();
/* 76310a: add esi, 0x11c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x11cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 763110: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 763111: jne 0x763100 */
  if (!zf) goto L_763100;
L_763113: /* 763113: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 763117: push 0x11c */
  { uint32_t v = 0x11cu; esp -= 4; W32(esp, v); }
/* 76311c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76311d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76311e: mov ecx, ebp */
  ecx = ebp;
/* 763120: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x763126u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 763126: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 763127: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 763128: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 763129: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76312a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_763160(void) {
  LOAD_REGS();
L_763160: /* 763160: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 763161: mov esi, ecx */
  esi = ecx;
/* 763163: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 763166: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 763167: xor edi, edi */
  edi = 0;
/* 763169: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 76316b: jle 0x763188 */
  if ((zf || sf != of)) goto L_763188;
L_76316d: /* 76316d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76316e: xor ebx, ebx */
  ebx = 0;
L_763170: /* 763170: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 763172: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 763174: call 0x6ca84e */
  esp -= 4; W32(esp, 0x763179u); SPILL(); f_6ca84e(); if (g_unwind) return; RELOAD();
/* 763179: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 76317c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 76317d: add ebx, 0x11c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x11cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 763183: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 763185: jl 0x763170 */
  if ((sf != of)) goto L_763170;
L_763187: /* 763187: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_763188: /* 763188: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 76318c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76318d: push 0x11c */
  { uint32_t v = 0x11cu; esp -= 4; W32(esp, v); }
/* 763192: mov ecx, esi */
  ecx = esi;
/* 763194: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x76319au); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 76319a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76319b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76319c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7631b0(void) {
  LOAD_REGS();
L_7631b0: /* 7631b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7631b1: mov esi, ecx */
  esi = ecx;
/* 7631b3: call 0x6c28ab */
  esp -= 4; W32(esp, 0x7631b8u); SPILL(); f_6c28ab(); if (g_unwind) return; RELOAD();
/* 7631b8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7631bd: je 0x7631cc */
  if (zf) goto L_7631cc;
L_7631bf: /* 7631bf: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 7631c4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7631c6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7631c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7631c9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7631ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7631cc: /* 7631cc: mov eax, esi */
  eax = esi;
/* 7631ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7631cf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7631f0(void) {
  LOAD_REGS();
L_7631f0: /* 7631f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7631f1: mov esi, ecx */
  esi = ecx;
/* 7631f3: call 0x6c68a7 */
  esp -= 4; W32(esp, 0x7631f8u); SPILL(); f_6c68a7(); if (g_unwind) return; RELOAD();
/* 7631f8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7631fd: je 0x76320c */
  if (zf) goto L_76320c;
L_7631ff: /* 7631ff: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 763204: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 763206: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 763208: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 763209: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x76320cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_76320c: /* 76320c: mov eax, esi */
  eax = esi;
/* 76320e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76320f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_763230(void) {
  LOAD_REGS();
L_763230: /* 763230: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 763231: mov esi, ecx */
  esi = ecx;
/* 763233: call 0x6c2c89 */
  esp -= 4; W32(esp, 0x763238u); SPILL(); f_6c2c89(); if (g_unwind) return; RELOAD();
/* 763238: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76323d: je 0x76324c */
  if (zf) goto L_76324c;
L_76323f: /* 76323f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 763244: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 763246: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 763248: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 763249: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x76324cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_76324c: /* 76324c: mov eax, esi */
  eax = esi;
/* 76324e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76324f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_763270(void) {
  LOAD_REGS();
L_763270: /* 763270: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 763272: push 0x9ca69e */
  { uint32_t v = 0x9ca69eu; esp -= 4; W32(esp, v); }
/* 763277: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76327d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76327e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 763285: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 763286: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 763287: mov esi, ecx */
  esi = ecx;
/* 763289: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 76328d: mov dword ptr [esi], 0xa06110 */
  W32((uint32_t)(esi), 0xa06110u);
/* 763293: mov dword ptr [esp + 0x10], 2 */
  W32((uint32_t)(esp + 0x10u), 0x2u);
/* 76329b: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x7632a1u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 7632a1: lea ecx, [esi + 0x60] */
  ecx = (uint32_t)(esi + 0x60u);
/* 7632a4: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 7632a9: call 0x6c4179 */
  esp -= 4; W32(esp, 0x7632aeu); SPILL(); f_6c4179(); if (g_unwind) return; RELOAD();
/* 7632ae: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* 7632b1: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 7632b6: call 0x6c22c0 */
  esp -= 4; W32(esp, 0x7632bbu); SPILL(); f_6c22c0(); if (g_unwind) return; RELOAD();
/* 7632bb: mov ecx, esi */
  ecx = esi;
/* 7632bd: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 7632c5: call 0x6c41ec */
  esp -= 4; W32(esp, 0x7632cau); SPILL(); f_6c41ec(); if (g_unwind) return; RELOAD();
/* 7632ca: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7632ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7632cf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7632d6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7632d9: ret  */
  esp += 4; SPILL(); return;
}

void f_763300(void) {
  LOAD_REGS();
L_763300: /* 763300: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 763302: push 0x9ca6d3 */
  { uint32_t v = 0x9ca6d3u; esp -= 4; W32(esp, v); }
/* 763307: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76330d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76330e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 763315: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 763316: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 763317: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 763318: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 76331c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76331d: mov ebx, ecx */
  ebx = ecx;
/* 76331f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 763320: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 763324: call 0x6c67fd */
  esp -= 4; W32(esp, 0x763329u); SPILL(); f_6c67fd(); if (g_unwind) return; RELOAD();
/* 763329: lea eax, [esi + 0x54] */
  eax = (uint32_t)(esi + 0x54u);
/* 76332c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76332d: lea ecx, [ebx + 0x54] */
  ecx = (uint32_t)(ebx + 0x54u);
/* 763330: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 763338: mov dword ptr [ebx], 0xa06110 */
  W32((uint32_t)(ebx), 0xa06110u);
/* 76333e: call 0x6c7e9b */
  esp -= 4; W32(esp, 0x763343u); SPILL(); f_6c7e9b(); if (g_unwind) return; RELOAD();
/* 763343: lea ecx, [esi + 0x60] */
  ecx = (uint32_t)(esi + 0x60u);
/* 763346: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 763347: lea ecx, [ebx + 0x60] */
  ecx = (uint32_t)(ebx + 0x60u);
/* 76334a: mov byte ptr [esp + 0x1c], 1 */
  W8((uint32_t)(esp + 0x1cu), 0x1u);
/* 76334f: call 0x6c8e2c */
  esp -= 4; W32(esp, 0x763354u); SPILL(); f_6c8e2c(); if (g_unwind) return; RELOAD();
/* 763354: add esi, 0x6c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 763357: lea edi, [ebx + 0x6c] */
  edi = (uint32_t)(ebx + 0x6cu);
/* 76335a: mov ecx, 7 */
  ecx = 0x7u;
/* 76335f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 763361: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 763365: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 763366: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 763367: mov eax, ebx */
  eax = ebx;
/* 763369: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76336a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 763371: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 763374: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7633a0(void) {
  LOAD_REGS();
L_7633a0: /* 7633a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7633a1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7633a2: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 7633a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7633a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7633a8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7633a9: mov ebx, ecx */
  ebx = ecx;
/* 7633ab: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x7633b1u); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7633b1: lea esi, [ebp + 0x28] */
  esi = (uint32_t)(ebp + 0x28u);
/* 7633b4: lea edi, [ebx + 0x28] */
  edi = (uint32_t)(ebx + 0x28u);
/* 7633b7: mov ecx, 7 */
  ecx = 0x7u;
/* 7633bc: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7633be: lea eax, [ebp + 0x44] */
  eax = (uint32_t)(ebp + 0x44u);
/* 7633c1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7633c3: lea ecx, [ebx + 0x44] */
  ecx = (uint32_t)(ebx + 0x44u);
/* 7633c6: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7633c8: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7633cb: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7633ce: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 7633d1: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7633d4: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 7633d7: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 7633da: lea ecx, [ebp + 0x54] */
  ecx = (uint32_t)(ebp + 0x54u);
/* 7633dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7633de: lea ecx, [ebx + 0x54] */
  ecx = (uint32_t)(ebx + 0x54u);
/* 7633e1: call 0x6c2798 */
  esp -= 4; W32(esp, 0x7633e6u); SPILL(); f_6c2798(); if (g_unwind) return; RELOAD();
/* 7633e6: lea edx, [ebp + 0x60] */
  edx = (uint32_t)(ebp + 0x60u);
/* 7633e9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7633ea: lea ecx, [ebx + 0x60] */
  ecx = (uint32_t)(ebx + 0x60u);
/* 7633ed: call 0x6cc9d7 */
  esp -= 4; W32(esp, 0x7633f2u); SPILL(); f_6cc9d7(); if (g_unwind) return; RELOAD();
/* 7633f2: lea esi, [ebp + 0x6c] */
  esi = (uint32_t)(ebp + 0x6cu);
/* 7633f5: lea edi, [ebx + 0x6c] */
  edi = (uint32_t)(ebx + 0x6cu);
/* 7633f8: mov ecx, 7 */
  ecx = 0x7u;
/* 7633fd: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7633ff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 763400: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 763401: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 763402: mov eax, ebx */
  eax = ebx;
/* 763404: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 763405: ret 4 */
  esp += 8; SPILL(); return;
}

void f_763430(void) {
  LOAD_REGS();
L_763430: /* 763430: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 763431: mov esi, ecx */
  esi = ecx;
/* 763433: call 0x6c9165 */
  esp -= 4; W32(esp, 0x763438u); SPILL(); f_6c9165(); if (g_unwind) return; RELOAD();
/* 763438: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76343d: je 0x76344e */
  if (zf) goto L_76344e;
L_76343f: /* 76343f: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 763444: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 763445: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x76344bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 76344b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76344e: /* 76344e: mov eax, esi */
  eax = esi;
/* 763450: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 763451: ret 4 */
  esp += 8; SPILL(); return;
}

void f_763470(void) {
  LOAD_REGS();
L_763470: /* 763470: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 763471: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 763475: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 763478: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 763479: mov esi, ecx */
  esi = ecx;
/* 76347b: je 0x7634b0 */
  if (zf) goto L_7634b0;
L_76347d: /* 76347d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 763480: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 763481: push 0x6c9165 */
  { uint32_t v = 0x6c9165u; esp -= 4; W32(esp, v); }
/* 763486: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 763489: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76348a: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 76348f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 763490: call 0x99ca3d */
  esp -= 4; W32(esp, 0x763495u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 763495: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 763498: je 0x7634a8 */
  if (zf) goto L_7634a8;
L_76349a: /* 76349a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7634a0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7634a2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7634a4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7634a5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7634a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7634a8: /* 7634a8: mov eax, edi */
  eax = edi;
/* 7634aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7634ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7634ac: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7634ad: ret 4 */
  esp += 8; SPILL(); return;
L_7634b0: /* 7634b0: mov ecx, esi */
  ecx = esi;
/* 7634b2: call 0x6c9165 */
  esp -= 4; W32(esp, 0x7634b7u); SPILL(); f_6c9165(); if (g_unwind) return; RELOAD();
/* 7634b7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7634ba: je 0x7634cb */
  if (zf) goto L_7634cb;
L_7634bc: /* 7634bc: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 7634c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7634c2: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7634c8u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7634c8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7634cb: /* 7634cb: mov eax, esi */
  eax = esi;
/* 7634cd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7634ce: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7634cf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_763500(void) {
  LOAD_REGS();
L_763500: /* 763500: jmp 0x6c326f */
  SPILL(); f_6c326f(); return;
}

void f_763520(void) {
  LOAD_REGS();
L_763520: /* 763520: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 763521: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 763522: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 763526: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 763527: mov esi, ecx */
  esi = ecx;
/* 763529: call 0x6c2bda */
  esp -= 4; W32(esp, 0x76352eu); SPILL(); f_6c2bda(); if (g_unwind) return; RELOAD();
/* 76352e: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 763531: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 763534: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 763535: mov eax, esi */
  eax = esi;
/* 763537: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 763538: ret 4 */
  esp += 8; SPILL(); return;
}

void f_763550(void) {
  LOAD_REGS();
L_763550: /* 763550: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 763551: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 763555: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 763556: mov ecx, esi */
  ecx = esi;
/* 763558: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x76355eu); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 76355e: cmp eax, 0x71 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x71u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 763561: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 763565: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 763566: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 763567: jge 0x763591 */
  if ((sf == of)) goto L_763591;
L_763569: /* 763569: call 0x6c47af */
  esp -= 4; W32(esp, 0x76356eu); SPILL(); f_6c47af(); if (g_unwind) return; RELOAD();
/* 76356e: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 763571: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 763572: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 763573: call 0x6c550b */
  esp -= 4; W32(esp, 0x763578u); SPILL(); f_6c550b(); if (g_unwind) return; RELOAD();
/* 763578: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 763579: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76357a: call 0x6c47af */
  esp -= 4; W32(esp, 0x76357fu); SPILL(); f_6c47af(); if (g_unwind) return; RELOAD();
/* 76357f: add edi, 0x18 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 763582: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 763583: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 763584: call 0x6c92ff */
  esp -= 4; W32(esp, 0x763589u); SPILL(); f_6c92ff(); if (g_unwind) return; RELOAD();
/* 763589: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76358c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76358d: mov eax, esi */
  eax = esi;
/* 76358f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 763590: ret  */
  esp += 4; SPILL(); return;
L_763591: /* 763591: call 0x6c47af */
  esp -= 4; W32(esp, 0x763596u); SPILL(); f_6c47af(); if (g_unwind) return; RELOAD();
/* 763596: lea ecx, [edi + 0xc] */
  ecx = (uint32_t)(edi + 0xcu);
/* 763599: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76359a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76359b: call 0x6c550b */
  esp -= 4; W32(esp, 0x7635a0u); SPILL(); f_6c550b(); if (g_unwind) return; RELOAD();
/* 7635a0: lea edx, [edi + 0x18] */
  edx = (uint32_t)(edi + 0x18u);
/* 7635a3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7635a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7635a5: call 0x6c92ff */
  esp -= 4; W32(esp, 0x7635aau); SPILL(); f_6c92ff(); if (g_unwind) return; RELOAD();
/* 7635aa: add edi, 0x24 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7635ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7635ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7635af: call 0x6ca70e */
  esp -= 4; W32(esp, 0x7635b4u); SPILL(); f_6ca70e(); if (g_unwind) return; RELOAD();
/* 7635b4: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7635b7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7635b8: mov eax, esi */
  eax = esi;
/* 7635ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7635bb: ret  */
  esp += 4; SPILL(); return;
}

void f_7635e0(void) {
  LOAD_REGS();
L_7635e0: /* 7635e0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7635e4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7635e6: je 0x7635ed */
  if (zf) goto L_7635ed;
L_7635e8: /* 7635e8: jmp 0x6c130c */
  SPILL(); f_6c130c(); return;
L_7635ed: /* 7635ed: ret  */
  esp += 4; SPILL(); return;
}

void f_763600(void) {
  LOAD_REGS();
L_763600: /* 763600: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 763601: mov ebp, esp */
  ebp = esp;
/* 763603: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 763605: push 0x9ca6f0 */
  { uint32_t v = 0x9ca6f0u; esp -= 4; W32(esp, v); }
/* 76360a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 763610: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 763611: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 763618: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 76361b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76361c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 76361f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 763620: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 763621: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 763624: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 763625: mov edi, ecx */
  edi = ecx;
/* 763627: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 76362e: call dword ptr [0xcfa29c] */
  esp -= 4; W32(esp, 0x763634u); SPILL(); f_4e1519(); if (g_unwind) return; /* Core!?Serialize@UObject@@UAEXAAVFArchive@@@Z */ RELOAD();
/* 763634: mov esi, dword ptr [0xcfa1b4] */
  esi = R32((uint32_t)(0xcfa1b4u));
/* 76363a: lea eax, [edi + 0x28] */
  eax = (uint32_t)(edi + 0x28u);
/* 76363d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76363e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76363f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x763641u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 763641: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 763644: lea ecx, [edi + 0x2c] */
  ecx = (uint32_t)(edi + 0x2cu);
/* 763647: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 763648: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 763649: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x76364bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76364b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76364e: lea edx, [edi + 0x30] */
  edx = (uint32_t)(edi + 0x30u);
/* 763651: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 763652: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 763653: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x763655u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 763655: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 763658: lea eax, [edi + 0x34] */
  eax = (uint32_t)(edi + 0x34u);
/* 76365b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76365c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76365d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x76365fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76365f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 763662: lea ecx, [edi + 0x38] */
  ecx = (uint32_t)(edi + 0x38u);
/* 763665: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 763666: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 763667: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x763669u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 763669: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76366c: lea edx, [edi + 0x3c] */
  edx = (uint32_t)(edi + 0x3cu);
/* 76366f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 763670: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 763671: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x763673u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 763673: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 763676: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 763679: lea ebx, [edi + 0x40] */
  ebx = (uint32_t)(edi + 0x40u);
/* 76367c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76367d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76367e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x763680u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 763680: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 763683: lea ecx, [ebx + 4] */
  ecx = (uint32_t)(ebx + 0x4u);
/* 763686: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 763687: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 763688: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x76368au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76368a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76368d: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 763690: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 763691: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 763692: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x763694u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 763694: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 763697: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76369a: add edi, 0x4c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 76369d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76369e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76369f: call 0x6c4002 */
  esp -= 4; W32(esp, 0x7636a4u); SPILL(); f_6c4002(); if (g_unwind) return; RELOAD();
/* 7636a4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7636a7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7636aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7636ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7636ac: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7636b3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7636b4: mov esp, ebp */
  esp = ebp;
/* 7636b6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7636b7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7636ba(void) {
  LOAD_REGS();
L_7636ba: /* 7636ba: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7636bd: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7636c2: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7636c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7636c6: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7636c9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7636ceu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7636ce(); return;
}

void f_7636ce(void) {
  LOAD_REGS();
L_7636ce: /* 7636ce: push 0xa061b8 */
  { uint32_t v = 0xa061b8u; esp -= 4; W32(esp, v); }
/* 7636d3: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 7636d8: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7636deu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7636de: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7636e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7636e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7636e5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7636eau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7636ea: guest_badaddr(0x7636ea); return;
}

void f_763730(void) {
  LOAD_REGS();
L_763730: /* 763730: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 763734: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 763735: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 763736: mov esi, dword ptr [0xcfa280] */
  esi = R32((uint32_t)(0xcfa280u));
/* 76373c: lea ecx, [eax + 0x54] */
  ecx = (uint32_t)(eax + 0x54u);
/* 76373f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 763740: lea edx, [eax + 0x48] */
  edx = (uint32_t)(eax + 0x48u);
/* 763743: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 763744: lea ecx, [eax + 0x44] */
  ecx = (uint32_t)(eax + 0x44u);
/* 763747: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 763748: lea edx, [eax + 0x40] */
  edx = (uint32_t)(eax + 0x40u);
/* 76374b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76374c: lea ecx, [eax + 0x3c] */
  ecx = (uint32_t)(eax + 0x3cu);
/* 76374f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 763750: lea edx, [eax + 0x30] */
  edx = (uint32_t)(eax + 0x30u);
/* 763753: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 763754: lea ecx, [eax + 0x24] */
  ecx = (uint32_t)(eax + 0x24u);
/* 763757: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 763758: lea edx, [eax + 0x18] */
  edx = (uint32_t)(eax + 0x18u);
/* 76375b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76375c: lea ecx, [eax + 0x14] */
  ecx = (uint32_t)(eax + 0x14u);
/* 76375f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 763760: lea edx, [eax + 0x10] */
  edx = (uint32_t)(eax + 0x10u);
/* 763763: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 763764: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 763768: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 76376b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76376c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76376d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76376e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x763770u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 763770: mov edi, dword ptr [0xcfa2dc] */
  edi = R32((uint32_t)(0xcfa2dcu));
/* 763776: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 763779: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76377a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x76377cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76377c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76377f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 763780: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x763782u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 763782: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 763785: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 763786: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x763788u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 763788: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76378b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76378c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x76378eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76378e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 763791: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 763792: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x763794u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 763794: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 763797: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 763798: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x76379au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76379a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76379d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76379e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7637a0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7637a0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7637a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7637a4: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7637a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7637a6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7637a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7637aa: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7637acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7637ac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7637af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7637b0: call 0x6ca7c2 */
  esp -= 4; W32(esp, 0x7637b5u); SPILL(); f_6ca7c2(); if (g_unwind) return; RELOAD();
/* 7637b5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7637b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7637b9: call 0x6cbeb0 */
  esp -= 4; W32(esp, 0x7637beu); SPILL(); f_6cbeb0(); if (g_unwind) return; RELOAD();
/* 7637be: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7637c1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7637c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7637c3: ret  */
  esp += 4; SPILL(); return;
}

void f_763800(void) {
  LOAD_REGS();
L_763800: /* 763800: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 763802: push 0x9ca73b */
  { uint32_t v = 0x9ca73bu; esp -= 4; W32(esp, v); }
/* 763807: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76380d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76380e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 763815: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 763816: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 763817: mov esi, ecx */
  esi = ecx;
/* 763819: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 76381c: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 763820: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x763826u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 763826: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 763829: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 763831: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x763837u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 763837: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 76383a: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 76383f: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x763845u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 763845: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* 763848: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 76384d: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x763853u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 763853: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* 763856: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 76385b: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x763861u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 763861: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* 763864: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* 763869: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x76386fu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 76386f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 763873: mov eax, esi */
  eax = esi;
/* 763875: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 763876: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76387d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 763880: ret  */
  esp += 4; SPILL(); return;
}

void f_7638c0(void) {
  LOAD_REGS();
L_7638c0: /* 7638c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7638c2: push 0x9ca79b */
  { uint32_t v = 0x9ca79bu; esp -= 4; W32(esp, v); }
/* 7638c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7638cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7638ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7638d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7638d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7638d7: mov esi, ecx */
  esi = ecx;
/* 7638d9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 7638dd: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* 7638e0: mov dword ptr [esp + 0x10], 4 */
  W32((uint32_t)(esp + 0x10u), 0x4u);
/* 7638e8: call 0x6c25e5 */
  esp -= 4; W32(esp, 0x7638edu); SPILL(); f_6c25e5(); if (g_unwind) return; RELOAD();
/* 7638ed: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* 7638f0: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 7638f5: call 0x6ca141 */
  esp -= 4; W32(esp, 0x7638fau); SPILL(); f_6ca141(); if (g_unwind) return; RELOAD();
/* 7638fa: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* 7638fd: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 763902: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x763908u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 763908: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 76390b: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 763910: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x763916u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 763916: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 763919: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 76391e: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x763924u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 763924: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 763927: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 76392f: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x763935u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 763935: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 763939: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76393a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 763941: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 763944: ret  */
  esp += 4; SPILL(); return;
}

void f_763980(void) {
  LOAD_REGS();
L_763980: /* 763980: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 763982: push 0x9ca7fb */
  { uint32_t v = 0x9ca7fbu; esp -= 4; W32(esp, v); }
/* 763987: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76398d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76398e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 763995: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 763996: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 763997: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 763998: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 76399c: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 76399e: mov esi, ecx */
  esi = ecx;
/* 7639a0: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 7639a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7639a4: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 7639a7: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 7639ab: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7639ad: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x7639b3u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 7639b3: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* 7639b6: lea ecx, [edi + 0x18] */
  ecx = (uint32_t)(edi + 0x18u);
/* 7639b9: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 7639bc: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 7639bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7639c0: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 7639c3: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 7639cb: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 7639ce: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x7639d4u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 7639d4: lea edx, [edi + 0x24] */
  edx = (uint32_t)(edi + 0x24u);
/* 7639d7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7639d8: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 7639db: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 7639e0: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x7639e6u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 7639e6: lea eax, [edi + 0x30] */
  eax = (uint32_t)(edi + 0x30u);
/* 7639e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7639ea: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* 7639ed: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* 7639f2: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x7639f8u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 7639f8: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 7639fb: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 7639fe: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 763a01: lea ecx, [edi + 0x48] */
  ecx = (uint32_t)(edi + 0x48u);
/* 763a04: mov dword ptr [esi + 0x40], edx */
  W32((uint32_t)(esi + 0x40u), edx);
/* 763a07: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* 763a0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 763a0b: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* 763a0e: mov byte ptr [esp + 0x18], 3 */
  W8((uint32_t)(esp + 0x18u), 0x3u);
/* 763a13: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 763a16: call 0x6c9b88 */
  esp -= 4; W32(esp, 0x763a1bu); SPILL(); f_6c9b88(); if (g_unwind) return; RELOAD();
/* 763a1b: add edi, 0x54 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 763a1e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 763a1f: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* 763a22: mov byte ptr [esp + 0x18], 4 */
  W8((uint32_t)(esp + 0x18u), 0x4u);
/* 763a27: call 0x6c5047 */
  esp -= 4; W32(esp, 0x763a2cu); SPILL(); f_6c5047(); if (g_unwind) return; RELOAD();
/* 763a2c: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 763a30: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 763a31: mov eax, esi */
  eax = esi;
/* 763a33: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 763a34: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 763a3b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 763a3e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_763a90(void) {
  LOAD_REGS();
L_763a90: /* 763a90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 763a91: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 763a92: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 763a96: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 763a98: mov esi, ecx */
  esi = ecx;
/* 763a9a: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 763a9d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 763a9e: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 763aa1: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 763aa3: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x763aa9u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 763aa9: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* 763aac: lea ecx, [edi + 0x18] */
  ecx = (uint32_t)(edi + 0x18u);
/* 763aaf: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 763ab2: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 763ab5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 763ab6: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 763ab9: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 763abc: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x763ac2u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 763ac2: lea edx, [edi + 0x24] */
  edx = (uint32_t)(edi + 0x24u);
/* 763ac5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 763ac6: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* 763ac9: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x763acfu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 763acf: lea eax, [edi + 0x30] */
  eax = (uint32_t)(edi + 0x30u);
/* 763ad2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 763ad3: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* 763ad6: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x763adcu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 763adc: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 763adf: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 763ae2: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 763ae5: lea ecx, [edi + 0x48] */
  ecx = (uint32_t)(edi + 0x48u);
/* 763ae8: mov dword ptr [esi + 0x40], edx */
  W32((uint32_t)(esi + 0x40u), edx);
/* 763aeb: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* 763aee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 763aef: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* 763af2: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 763af5: call 0x6ca5ce */
  esp -= 4; W32(esp, 0x763afau); SPILL(); f_6ca5ce(); if (g_unwind) return; RELOAD();
/* 763afa: add edi, 0x54 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 763afd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 763afe: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* 763b01: call 0x6c1299 */
  esp -= 4; W32(esp, 0x763b06u); SPILL(); f_6c1299(); if (g_unwind) return; RELOAD();
/* 763b06: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 763b07: mov eax, esi */
  eax = esi;
/* 763b09: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 763b0a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_763b30(void) {
  LOAD_REGS();
L_763b30: /* 763b30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 763b32: push 0x9ca8c2 */
  { uint32_t v = 0x9ca8c2u; esp -= 4; W32(esp, v); }
/* 763b37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 763b3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 763b3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 763b45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 763b46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 763b47: mov esi, ecx */
  esi = ecx;
/* 763b49: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 763b4d: mov dword ptr [esi], 0xa06218 */
  W32((uint32_t)(esi), 0xa06218u);
/* 763b53: mov dword ptr [esi + 0x28], 0xa061f0 */
  W32((uint32_t)(esi + 0x28u), 0xa061f0u);
/* 763b5a: mov dword ptr [esp + 0x10], 0xb */
  W32((uint32_t)(esp + 0x10u), 0xbu);
/* 763b62: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x763b68u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 763b68: lea ecx, [esi + 0x11a4] */
  ecx = (uint32_t)(esi + 0x11a4u);
/* 763b6e: mov byte ptr [esp + 0x10], 0xa */
  W8((uint32_t)(esp + 0x10u), 0xau);
/* 763b73: call 0x6c8959 */
  esp -= 4; W32(esp, 0x763b78u); SPILL(); f_6c8959(); if (g_unwind) return; RELOAD();
/* 763b78: lea ecx, [esi + 0x1190] */
  ecx = (uint32_t)(esi + 0x1190u);
/* 763b7e: mov byte ptr [esp + 0x10], 9 */
  W8((uint32_t)(esp + 0x10u), 0x9u);
/* 763b83: call 0x6c4683 */
  esp -= 4; W32(esp, 0x763b88u); SPILL(); f_6c4683(); if (g_unwind) return; RELOAD();
/* 763b88: lea ecx, [esi + 0x1184] */
  ecx = (uint32_t)(esi + 0x1184u);
/* 763b8e: mov byte ptr [esp + 0x10], 8 */
  W8((uint32_t)(esp + 0x10u), 0x8u);
/* 763b93: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x763b98u); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 763b98: lea ecx, [esi + 0x1178] */
  ecx = (uint32_t)(esi + 0x1178u);
/* 763b9e: mov byte ptr [esp + 0x10], 7 */
  W8((uint32_t)(esp + 0x10u), 0x7u);
/* 763ba3: call 0x6ccce8 */
  esp -= 4; W32(esp, 0x763ba8u); SPILL(); f_6ccce8(); if (g_unwind) return; RELOAD();
/* 763ba8: lea ecx, [esi + 0x116c] */
  ecx = (uint32_t)(esi + 0x116cu);
/* 763bae: mov byte ptr [esp + 0x10], 6 */
  W8((uint32_t)(esp + 0x10u), 0x6u);
/* 763bb3: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x763bb8u); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 763bb8: lea ecx, [esi + 0x1140] */
  ecx = (uint32_t)(esi + 0x1140u);
/* 763bbe: mov byte ptr [esp + 0x10], 5 */
  W8((uint32_t)(esp + 0x10u), 0x5u);
/* 763bc3: call 0x6c80a3 */
  esp -= 4; W32(esp, 0x763bc8u); SPILL(); f_6c80a3(); if (g_unwind) return; RELOAD();
/* 763bc8: lea ecx, [esi + 0x1134] */
  ecx = (uint32_t)(esi + 0x1134u);
/* 763bce: mov byte ptr [esp + 0x10], 4 */
  W8((uint32_t)(esp + 0x10u), 0x4u);
/* 763bd3: call 0x6cafce */
  esp -= 4; W32(esp, 0x763bd8u); SPILL(); f_6cafce(); if (g_unwind) return; RELOAD();
/* 763bd8: lea ecx, [esi + 0x1128] */
  ecx = (uint32_t)(esi + 0x1128u);
/* 763bde: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* 763be3: call 0x6c1b04 */
  esp -= 4; W32(esp, 0x763be8u); SPILL(); f_6c1b04(); if (g_unwind) return; RELOAD();
/* 763be8: lea ecx, [esi + 0x111c] */
  ecx = (uint32_t)(esi + 0x111cu);
/* 763bee: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 763bf3: call 0x6c9944 */
  esp -= 4; W32(esp, 0x763bf8u); SPILL(); f_6c9944(); if (g_unwind) return; RELOAD();
/* 763bf8: lea ecx, [esi + 0x1110] */
  ecx = (uint32_t)(esi + 0x1110u);
/* 763bfe: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 763c03: call 0x6c2239 */
  esp -= 4; W32(esp, 0x763c08u); SPILL(); f_6c2239(); if (g_unwind) return; RELOAD();
/* 763c08: lea ecx, [esi + 0xd8] */
  ecx = (uint32_t)(esi + 0xd8u);
/* 763c0e: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 763c13: call 0x6c312a */
  esp -= 4; W32(esp, 0x763c18u); SPILL(); f_6c312a(); if (g_unwind) return; RELOAD();
/* 763c18: mov ecx, esi */
  ecx = esi;
/* 763c1a: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 763c22: call 0x6ca5ba */
  esp -= 4; W32(esp, 0x763c27u); SPILL(); f_6ca5ba(); if (g_unwind) return; RELOAD();
/* 763c27: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 763c2b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 763c2c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 763c33: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 763c36: ret  */
  esp += 4; SPILL(); return;
}

void f_763c90(void) {
  LOAD_REGS();
L_763c90: /* 763c90: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 763c92: push 0x9ca9ac */
  { uint32_t v = 0x9ca9acu; esp -= 4; W32(esp, v); }
/* 763c97: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 763c9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 763c9e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 763ca5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 763ca8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 763ca9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 763caa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 763cab: mov esi, ecx */
  esi = ecx;
/* 763cad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 763cae: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 763cb2: call 0x6c5376 */
  esp -= 4; W32(esp, 0x763cb7u); SPILL(); f_6c5376(); if (g_unwind) return; RELOAD();
/* 763cb7: lea edi, [esi + 0xd8] */
  edi = (uint32_t)(esi + 0xd8u);
/* 763cbd: xor ebp, ebp */
  ebp = 0;
/* 763cbf: mov ecx, edi */
  ecx = edi;
/* 763cc1: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 763cc5: mov dword ptr [esi], 0xa06218 */
  W32((uint32_t)(esi), 0xa06218u);
/* 763ccb: mov dword ptr [esi + 0x28], 0xa061f0 */
  W32((uint32_t)(esi + 0x28u), 0xa061f0u);
/* 763cd2: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 763cd6: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x763cdcu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 763cdc: mov ebx, 8 */
  ebx = 0x8u;
/* 763ce1: mov ecx, edi */
  ecx = edi;
/* 763ce3: mov byte ptr [esp + 0x20], 1 */
  W8((uint32_t)(esp + 0x20u), 0x1u);
/* 763ce8: mov dword ptr [edi + 0xc], ebp */
  W32((uint32_t)(edi + 0xcu), ebp);
/* 763ceb: mov dword ptr [edi + 0x10], ebx */
  W32((uint32_t)(edi + 0x10u), ebx);
/* 763cee: call 0x6cb398 */
  esp -= 4; W32(esp, 0x763cf3u); SPILL(); f_6cb398(); if (g_unwind) return; RELOAD();
/* 763cf3: lea ecx, [esi + 0x1110] */
  ecx = (uint32_t)(esi + 0x1110u);
/* 763cf9: mov byte ptr [esp + 0x20], 2 */
  W8((uint32_t)(esp + 0x20u), 0x2u);
/* 763cfe: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x763d04u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 763d04: lea ecx, [esi + 0x111c] */
  ecx = (uint32_t)(esi + 0x111cu);
/* 763d0a: mov byte ptr [esp + 0x20], 3 */
  W8((uint32_t)(esp + 0x20u), 0x3u);
/* 763d0f: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x763d15u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 763d15: lea ecx, [esi + 0x1128] */
  ecx = (uint32_t)(esi + 0x1128u);
/* 763d1b: mov byte ptr [esp + 0x20], 4 */
  W8((uint32_t)(esp + 0x20u), 0x4u);
/* 763d20: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x763d26u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 763d26: lea ecx, [esi + 0x1134] */
  ecx = (uint32_t)(esi + 0x1134u);
/* 763d2c: mov byte ptr [esp + 0x20], 5 */
  W8((uint32_t)(esp + 0x20u), 0x5u);
/* 763d31: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x763d37u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 763d37: lea ecx, [esi + 0x1140] */
  ecx = (uint32_t)(esi + 0x1140u);
/* 763d3d: mov byte ptr [esp + 0x20], 6 */
  W8((uint32_t)(esp + 0x20u), 0x6u);
/* 763d42: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x763d48u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 763d48: lea ecx, [esi + 0x116c] */
  ecx = (uint32_t)(esi + 0x116cu);
/* 763d4e: mov byte ptr [esp + 0x20], 7 */
  W8((uint32_t)(esp + 0x20u), 0x7u);
/* 763d53: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x763d59u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 763d59: lea ecx, [esi + 0x1178] */
  ecx = (uint32_t)(esi + 0x1178u);
/* 763d5f: mov byte ptr [esp + 0x20], bl */
  W8((uint32_t)(esp + 0x20u), (ebx & 0xffu));
/* 763d63: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x763d69u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 763d69: lea ecx, [esi + 0x1184] */
  ecx = (uint32_t)(esi + 0x1184u);
/* 763d6f: mov byte ptr [esp + 0x20], 9 */
  W8((uint32_t)(esp + 0x20u), 0x9u);
/* 763d74: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x763d7au); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 763d7a: lea edi, [esi + 0x1190] */
  edi = (uint32_t)(esi + 0x1190u);
/* 763d80: mov ecx, edi */
  ecx = edi;
/* 763d82: mov byte ptr [esp + 0x20], 0xa */
  W8((uint32_t)(esp + 0x20u), 0xau);
/* 763d87: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 763d8b: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x763d91u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 763d91: mov ecx, edi */
  ecx = edi;
/* 763d93: mov byte ptr [esp + 0x20], 0xb */
  W8((uint32_t)(esp + 0x20u), 0xbu);
/* 763d98: mov dword ptr [edi + 0xc], ebp */
  W32((uint32_t)(edi + 0xcu), ebp);
/* 763d9b: mov dword ptr [edi + 0x10], ebx */
  W32((uint32_t)(edi + 0x10u), ebx);
/* 763d9e: call 0x6c3fda */
  esp -= 4; W32(esp, 0x763da3u); SPILL(); f_6c3fda(); if (g_unwind) return; RELOAD();
/* 763da3: lea edi, [esi + 0x11a4] */
  edi = (uint32_t)(esi + 0x11a4u);
/* 763da9: mov ecx, edi */
  ecx = edi;
/* 763dab: mov byte ptr [esp + 0x20], 0xc */
  W8((uint32_t)(esp + 0x20u), 0xcu);
/* 763db0: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 763db4: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x763dbau); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 763dba: mov ecx, edi */
  ecx = edi;
/* 763dbc: mov byte ptr [esp + 0x20], 0xd */
  W8((uint32_t)(esp + 0x20u), 0xdu);
/* 763dc1: mov dword ptr [edi + 0xc], ebp */
  W32((uint32_t)(edi + 0xcu), ebp);
/* 763dc4: mov dword ptr [edi + 0x10], ebx */
  W32((uint32_t)(edi + 0x10u), ebx);
/* 763dc7: call 0x6ca2bd */
  esp -= 4; W32(esp, 0x763dccu); SPILL(); f_6ca2bd(); if (g_unwind) return; RELOAD();
/* 763dcc: mov eax, esi */
  eax = esi;
/* 763dce: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 763dcf: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 763dd3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 763dd4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 763dd5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 763dd6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 763ddd: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 763de0: ret  */
  esp += 4; SPILL(); return;
}

void f_763e50(void) {
  LOAD_REGS();
L_763e50: /* 763e50: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 763e52: push 0x9caa84 */
  { uint32_t v = 0x9caa84u; esp -= 4; W32(esp, v); }
/* 763e57: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 763e5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 763e5e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 763e65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 763e66: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 763e67: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 763e68: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 763e6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 763e6d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 763e6e: mov ebx, ecx */
  ebx = ecx;
/* 763e70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 763e71: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 763e75: call 0x6c8215 */
  esp -= 4; W32(esp, 0x763e7au); SPILL(); f_6c8215(); if (g_unwind) return; RELOAD();
/* 763e7a: mov dword ptr [ebx], 0xa06218 */
  W32((uint32_t)(ebx), 0xa06218u);
/* 763e80: mov dword ptr [ebx + 0x28], 0xa061f0 */
  W32((uint32_t)(ebx + 0x28u), 0xa061f0u);
/* 763e87: mov eax, dword ptr [ebp + 0x8c] */
  eax = R32((uint32_t)(ebp + 0x8cu));
/* 763e8d: mov dword ptr [ebx + 0x8c], eax */
  W32((uint32_t)(ebx + 0x8cu), eax);
/* 763e93: lea esi, [ebp + 0x90] */
  esi = (uint32_t)(ebp + 0x90u);
/* 763e99: lea edi, [ebx + 0x90] */
  edi = (uint32_t)(ebx + 0x90u);
/* 763e9f: mov ecx, 0x10 */
  ecx = 0x10u;
/* 763ea4: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 763ea6: mov ecx, dword ptr [ebp + 0xd0] */
  ecx = R32((uint32_t)(ebp + 0xd0u));
/* 763eac: mov dword ptr [ebx + 0xd0], ecx */
  W32((uint32_t)(ebx + 0xd0u), ecx);
/* 763eb2: mov edx, dword ptr [ebp + 0xd4] */
  edx = R32((uint32_t)(ebp + 0xd4u));
/* 763eb8: lea eax, [ebp + 0xd8] */
  eax = (uint32_t)(ebp + 0xd8u);
/* 763ebe: lea ecx, [ebx + 0xd8] */
  ecx = (uint32_t)(ebx + 0xd8u);
/* 763ec4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 763ec5: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 763ecd: mov dword ptr [ebx + 0xd4], edx */
  W32((uint32_t)(ebx + 0xd4u), edx);
/* 763ed3: call 0x6c2531 */
  esp -= 4; W32(esp, 0x763ed8u); SPILL(); f_6c2531(); if (g_unwind) return; RELOAD();
/* 763ed8: mov ecx, dword ptr [ebp + 0xec] */
  ecx = R32((uint32_t)(ebp + 0xecu));
/* 763ede: mov dword ptr [ebx + 0xec], ecx */
  W32((uint32_t)(ebx + 0xecu), ecx);
/* 763ee4: mov edx, dword ptr [ebp + 0xf0] */
  edx = R32((uint32_t)(ebp + 0xf0u));
/* 763eea: mov dword ptr [ebx + 0xf0], edx */
  W32((uint32_t)(ebx + 0xf0u), edx);
/* 763ef0: mov eax, dword ptr [ebp + 0xf4] */
  eax = R32((uint32_t)(ebp + 0xf4u));
/* 763ef6: mov dword ptr [ebx + 0xf4], eax */
  W32((uint32_t)(ebx + 0xf4u), eax);
/* 763efc: mov ecx, dword ptr [ebp + 0xf8] */
  ecx = R32((uint32_t)(ebp + 0xf8u));
/* 763f02: mov dword ptr [ebx + 0xf8], ecx */
  W32((uint32_t)(ebx + 0xf8u), ecx);
/* 763f08: mov edx, dword ptr [ebp + 0xfc] */
  edx = R32((uint32_t)(ebp + 0xfcu));
/* 763f0e: mov dword ptr [ebx + 0xfc], edx */
  W32((uint32_t)(ebx + 0xfcu), edx);
/* 763f14: mov eax, dword ptr [ebp + 0x100] */
  eax = R32((uint32_t)(ebp + 0x100u));
/* 763f1a: mov dword ptr [ebx + 0x100], eax */
  W32((uint32_t)(ebx + 0x100u), eax);
/* 763f20: mov ecx, dword ptr [ebp + 0x104] */
  ecx = R32((uint32_t)(ebp + 0x104u));
/* 763f26: mov dword ptr [ebx + 0x104], ecx */
  W32((uint32_t)(ebx + 0x104u), ecx);
/* 763f2c: mov edx, dword ptr [ebp + 0x108] */
  edx = R32((uint32_t)(ebp + 0x108u));
/* 763f32: mov dword ptr [ebx + 0x108], edx */
  W32((uint32_t)(ebx + 0x108u), edx);
/* 763f38: mov eax, dword ptr [ebp + 0x10c] */
  eax = R32((uint32_t)(ebp + 0x10cu));
/* 763f3e: mov dword ptr [ebx + 0x10c], eax */
  W32((uint32_t)(ebx + 0x10cu), eax);
/* 763f44: mov ecx, 0x400 */
  ecx = 0x400u;
/* 763f49: lea esi, [ebp + 0x110] */
  esi = (uint32_t)(ebp + 0x110u);
/* 763f4f: lea edi, [ebx + 0x110] */
  edi = (uint32_t)(ebx + 0x110u);
/* 763f55: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 763f57: lea ecx, [ebp + 0x1110] */
  ecx = (uint32_t)(ebp + 0x1110u);
/* 763f5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 763f5e: lea ecx, [ebx + 0x1110] */
  ecx = (uint32_t)(ebx + 0x1110u);
/* 763f64: mov byte ptr [esp + 0x20], 1 */
  W8((uint32_t)(esp + 0x20u), 0x1u);
/* 763f69: call 0x6c229d */
  esp -= 4; W32(esp, 0x763f6eu); SPILL(); f_6c229d(); if (g_unwind) return; RELOAD();
/* 763f6e: lea edx, [ebp + 0x111c] */
  edx = (uint32_t)(ebp + 0x111cu);
/* 763f74: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 763f75: lea ecx, [ebx + 0x111c] */
  ecx = (uint32_t)(ebx + 0x111cu);
/* 763f7b: mov byte ptr [esp + 0x20], 2 */
  W8((uint32_t)(esp + 0x20u), 0x2u);
/* 763f80: call 0x6c76d0 */
  esp -= 4; W32(esp, 0x763f85u); SPILL(); f_6c76d0(); if (g_unwind) return; RELOAD();
/* 763f85: lea eax, [ebp + 0x1128] */
  eax = (uint32_t)(ebp + 0x1128u);
/* 763f8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 763f8c: lea ecx, [ebx + 0x1128] */
  ecx = (uint32_t)(ebx + 0x1128u);
/* 763f92: mov byte ptr [esp + 0x20], 3 */
  W8((uint32_t)(esp + 0x20u), 0x3u);
/* 763f97: call 0x6c8283 */
  esp -= 4; W32(esp, 0x763f9cu); SPILL(); f_6c8283(); if (g_unwind) return; RELOAD();
/* 763f9c: lea ecx, [ebp + 0x1134] */
  ecx = (uint32_t)(ebp + 0x1134u);
/* 763fa2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 763fa3: lea ecx, [ebx + 0x1134] */
  ecx = (uint32_t)(ebx + 0x1134u);
/* 763fa9: mov byte ptr [esp + 0x20], 4 */
  W8((uint32_t)(esp + 0x20u), 0x4u);
/* 763fae: call 0x6c8af8 */
  esp -= 4; W32(esp, 0x763fb3u); SPILL(); f_6c8af8(); if (g_unwind) return; RELOAD();
/* 763fb3: lea edx, [ebp + 0x1140] */
  edx = (uint32_t)(ebp + 0x1140u);
/* 763fb9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 763fba: lea ecx, [ebx + 0x1140] */
  ecx = (uint32_t)(ebx + 0x1140u);
/* 763fc0: mov byte ptr [esp + 0x20], 5 */
  W8((uint32_t)(esp + 0x20u), 0x5u);
/* 763fc5: call 0x6cab5f */
  esp -= 4; W32(esp, 0x763fcau); SPILL(); f_6cab5f(); if (g_unwind) return; RELOAD();
/* 763fca: mov byte ptr [esp + 0x1c], 6 */
  W8((uint32_t)(esp + 0x1cu), 0x6u);
/* 763fcf: mov eax, dword ptr [ebp + 0x114c] */
  eax = R32((uint32_t)(ebp + 0x114cu));
/* 763fd5: mov dword ptr [ebx + 0x114c], eax */
  W32((uint32_t)(ebx + 0x114cu), eax);
/* 763fdb: mov ecx, dword ptr [ebp + 0x1150] */
  ecx = R32((uint32_t)(ebp + 0x1150u));
/* 763fe1: mov dword ptr [ebx + 0x1150], ecx */
  W32((uint32_t)(ebx + 0x1150u), ecx);
/* 763fe7: mov edx, dword ptr [ebp + 0x1154] */
  edx = R32((uint32_t)(ebp + 0x1154u));
/* 763fed: mov dword ptr [ebx + 0x1154], edx */
  W32((uint32_t)(ebx + 0x1154u), edx);
/* 763ff3: mov eax, dword ptr [ebp + 0x1158] */
  eax = R32((uint32_t)(ebp + 0x1158u));
/* 763ff9: mov dword ptr [ebx + 0x1158], eax */
  W32((uint32_t)(ebx + 0x1158u), eax);
/* 763fff: mov ecx, dword ptr [ebp + 0x115c] */
  ecx = R32((uint32_t)(ebp + 0x115cu));
/* 764005: mov dword ptr [ebx + 0x115c], ecx */
  W32((uint32_t)(ebx + 0x115cu), ecx);
/* 76400b: mov edx, dword ptr [ebp + 0x1160] */
  edx = R32((uint32_t)(ebp + 0x1160u));
/* 764011: mov dword ptr [ebx + 0x1160], edx */
  W32((uint32_t)(ebx + 0x1160u), edx);
/* 764017: mov eax, dword ptr [ebp + 0x1164] */
  eax = R32((uint32_t)(ebp + 0x1164u));
/* 76401d: mov dword ptr [ebx + 0x1164], eax */
  W32((uint32_t)(ebx + 0x1164u), eax);
/* 764023: mov ecx, dword ptr [ebp + 0x1168] */
  ecx = R32((uint32_t)(ebp + 0x1168u));
/* 764029: lea edx, [ebp + 0x116c] */
  edx = (uint32_t)(ebp + 0x116cu);
/* 76402f: mov dword ptr [ebx + 0x1168], ecx */
  W32((uint32_t)(ebx + 0x1168u), ecx);
/* 764035: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 764036: lea ecx, [ebx + 0x116c] */
  ecx = (uint32_t)(ebx + 0x116cu);
/* 76403c: call 0x6cab5f */
  esp -= 4; W32(esp, 0x764041u); SPILL(); f_6cab5f(); if (g_unwind) return; RELOAD();
/* 764041: lea eax, [ebp + 0x1178] */
  eax = (uint32_t)(ebp + 0x1178u);
/* 764047: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 764048: lea ecx, [ebx + 0x1178] */
  ecx = (uint32_t)(ebx + 0x1178u);
/* 76404e: mov byte ptr [esp + 0x20], 7 */
  W8((uint32_t)(esp + 0x20u), 0x7u);
/* 764053: call 0x6c33dc */
  esp -= 4; W32(esp, 0x764058u); SPILL(); f_6c33dc(); if (g_unwind) return; RELOAD();
/* 764058: lea ecx, [ebp + 0x1184] */
  ecx = (uint32_t)(ebp + 0x1184u);
/* 76405e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76405f: lea ecx, [ebx + 0x1184] */
  ecx = (uint32_t)(ebx + 0x1184u);
/* 764065: mov byte ptr [esp + 0x20], 8 */
  W8((uint32_t)(esp + 0x20u), 0x8u);
/* 76406a: call 0x6cab5f */
  esp -= 4; W32(esp, 0x76406fu); SPILL(); f_6cab5f(); if (g_unwind) return; RELOAD();
/* 76406f: lea edx, [ebp + 0x1190] */
  edx = (uint32_t)(ebp + 0x1190u);
/* 764075: lea ecx, [ebx + 0x1190] */
  ecx = (uint32_t)(ebx + 0x1190u);
/* 76407b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76407c: mov byte ptr [esp + 0x20], 9 */
  W8((uint32_t)(esp + 0x20u), 0x9u);
/* 764081: call 0x6c9e03 */
  esp -= 4; W32(esp, 0x764086u); SPILL(); f_6c9e03(); if (g_unwind) return; RELOAD();
/* 764086: add ebp, 0x11a4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x11a4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 76408c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76408d: lea ecx, [ebx + 0x11a4] */
  ecx = (uint32_t)(ebx + 0x11a4u);
/* 764093: mov byte ptr [esp + 0x20], 0xa */
  W8((uint32_t)(esp + 0x20u), 0xau);
/* 764098: call 0x6c32ce */
  esp -= 4; W32(esp, 0x76409du); SPILL(); f_6c32ce(); if (g_unwind) return; RELOAD();
/* 76409d: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7640a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7640a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7640a3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7640a4: mov eax, ebx */
  eax = ebx;
/* 7640a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7640a7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7640ae: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7640b1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_764160(void) {
  LOAD_REGS();
L_764160: /* 764160: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 764161: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 764162: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 764163: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 764164: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 764168: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 764169: mov esi, ecx */
  esi = ecx;
/* 76416b: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x764171u); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 764171: lea eax, [edi + 0x2c] */
  eax = (uint32_t)(edi + 0x2cu);
/* 764174: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 764175: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 764178: call 0x6ca998 */
  esp -= 4; W32(esp, 0x76417du); SPILL(); f_6ca998(); if (g_unwind) return; RELOAD();
/* 76417d: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 764180: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 764183: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 764186: lea eax, [edi + 0x44] */
  eax = (uint32_t)(edi + 0x44u);
/* 764189: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76418a: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 76418d: mov dword ptr [esi + 0x40], edx */
  W32((uint32_t)(esi + 0x40u), edx);
/* 764190: call 0x6ca50b */
  esp -= 4; W32(esp, 0x764195u); SPILL(); f_6ca50b(); if (g_unwind) return; RELOAD();
/* 764195: mov ecx, dword ptr [edi + 0x88] */
  ecx = R32((uint32_t)(edi + 0x88u));
/* 76419b: mov dword ptr [esi + 0x88], ecx */
  W32((uint32_t)(esi + 0x88u), ecx);
/* 7641a1: mov edx, dword ptr [edi + 0x8c] */
  edx = R32((uint32_t)(edi + 0x8cu));
/* 7641a7: mov ebp, edi */
  ebp = edi;
/* 7641a9: mov dword ptr [esi + 0x8c], edx */
  W32((uint32_t)(esi + 0x8cu), edx);
/* 7641af: lea eax, [esi + 0x90] */
  eax = (uint32_t)(esi + 0x90u);
/* 7641b5: sub ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 7641b7: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7641bc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7641c0: /* 7641c0: mov edx, dword ptr [eax + ebp] */
  edx = R32((uint32_t)(eax + ebp));
/* 7641c3: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7641c5: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7641c8: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 7641c9: jne 0x7641c0 */
  if (!zf) goto L_7641c0;
L_7641cb: /* 7641cb: mov eax, dword ptr [edi + 0xd0] */
  eax = R32((uint32_t)(edi + 0xd0u));
/* 7641d1: mov dword ptr [esi + 0xd0], eax */
  W32((uint32_t)(esi + 0xd0u), eax);
/* 7641d7: mov ecx, dword ptr [edi + 0xd4] */
  ecx = R32((uint32_t)(edi + 0xd4u));
/* 7641dd: lea eax, [edi + 0xd8] */
  eax = (uint32_t)(edi + 0xd8u);
/* 7641e3: mov dword ptr [esi + 0xd4], ecx */
  W32((uint32_t)(esi + 0xd4u), ecx);
/* 7641e9: lea ebx, [esi + 0xd8] */
  ebx = (uint32_t)(esi + 0xd8u);
/* 7641ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7641f0: mov ecx, ebx */
  ecx = ebx;
/* 7641f2: call 0x6c824c */
  esp -= 4; W32(esp, 0x7641f7u); SPILL(); f_6c824c(); if (g_unwind) return; RELOAD();
/* 7641f7: mov edx, dword ptr [edi + 0xe8] */
  edx = R32((uint32_t)(edi + 0xe8u));
/* 7641fd: mov ecx, ebx */
  ecx = ebx;
/* 7641ff: mov dword ptr [ebx + 0x10], edx */
  W32((uint32_t)(ebx + 0x10u), edx);
/* 764202: call 0x6cb398 */
  esp -= 4; W32(esp, 0x764207u); SPILL(); f_6cb398(); if (g_unwind) return; RELOAD();
/* 764207: mov eax, dword ptr [edi + 0xec] */
  eax = R32((uint32_t)(edi + 0xecu));
/* 76420d: mov dword ptr [esi + 0xec], eax */
  W32((uint32_t)(esi + 0xecu), eax);
/* 764213: mov ecx, dword ptr [edi + 0xf0] */
  ecx = R32((uint32_t)(edi + 0xf0u));
/* 764219: mov dword ptr [esi + 0xf0], ecx */
  W32((uint32_t)(esi + 0xf0u), ecx);
/* 76421f: mov edx, dword ptr [edi + 0xf4] */
  edx = R32((uint32_t)(edi + 0xf4u));
/* 764225: mov dword ptr [esi + 0xf4], edx */
  W32((uint32_t)(esi + 0xf4u), edx);
/* 76422b: mov eax, dword ptr [edi + 0xf8] */
  eax = R32((uint32_t)(edi + 0xf8u));
/* 764231: mov dword ptr [esi + 0xf8], eax */
  W32((uint32_t)(esi + 0xf8u), eax);
/* 764237: mov ecx, dword ptr [edi + 0xfc] */
  ecx = R32((uint32_t)(edi + 0xfcu));
/* 76423d: mov dword ptr [esi + 0xfc], ecx */
  W32((uint32_t)(esi + 0xfcu), ecx);
/* 764243: mov edx, dword ptr [edi + 0x100] */
  edx = R32((uint32_t)(edi + 0x100u));
/* 764249: mov dword ptr [esi + 0x100], edx */
  W32((uint32_t)(esi + 0x100u), edx);
/* 76424f: mov eax, dword ptr [edi + 0x104] */
  eax = R32((uint32_t)(edi + 0x104u));
/* 764255: mov dword ptr [esi + 0x104], eax */
  W32((uint32_t)(esi + 0x104u), eax);
/* 76425b: mov ecx, dword ptr [edi + 0x108] */
  ecx = R32((uint32_t)(edi + 0x108u));
/* 764261: mov dword ptr [esi + 0x108], ecx */
  W32((uint32_t)(esi + 0x108u), ecx);
/* 764267: mov edx, dword ptr [edi + 0x10c] */
  edx = R32((uint32_t)(edi + 0x10cu));
/* 76426d: mov dword ptr [esi + 0x10c], edx */
  W32((uint32_t)(esi + 0x10cu), edx);
/* 764273: lea eax, [esi + 0x110] */
  eax = (uint32_t)(esi + 0x110u);
/* 764279: mov ecx, 0x1000 */
  ecx = 0x1000u;
/* 76427e: mov edi, edi */
  edi = edi;
L_764280: /* 764280: mov dl, byte ptr [eax + ebp] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ebp))) & 0xffu);
/* 764283: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 764285: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 764286: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 764287: jne 0x764280 */
  if (!zf) goto L_764280;
L_764289: /* 764289: lea eax, [edi + 0x1110] */
  eax = (uint32_t)(edi + 0x1110u);
/* 76428f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 764290: lea ecx, [esi + 0x1110] */
  ecx = (uint32_t)(esi + 0x1110u);
/* 764296: call 0x6ca4f7 */
  esp -= 4; W32(esp, 0x76429bu); SPILL(); f_6ca4f7(); if (g_unwind) return; RELOAD();
/* 76429b: lea ecx, [edi + 0x111c] */
  ecx = (uint32_t)(edi + 0x111cu);
/* 7642a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7642a2: lea ecx, [esi + 0x111c] */
  ecx = (uint32_t)(esi + 0x111cu);
/* 7642a8: call 0x6c89ea */
  esp -= 4; W32(esp, 0x7642adu); SPILL(); f_6c89ea(); if (g_unwind) return; RELOAD();
/* 7642ad: lea edx, [edi + 0x1128] */
  edx = (uint32_t)(edi + 0x1128u);
/* 7642b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7642b4: lea ecx, [esi + 0x1128] */
  ecx = (uint32_t)(esi + 0x1128u);
/* 7642ba: call 0x6c414c */
  esp -= 4; W32(esp, 0x7642bfu); SPILL(); f_6c414c(); if (g_unwind) return; RELOAD();
/* 7642bf: lea eax, [edi + 0x1134] */
  eax = (uint32_t)(edi + 0x1134u);
/* 7642c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7642c6: lea ecx, [esi + 0x1134] */
  ecx = (uint32_t)(esi + 0x1134u);
/* 7642cc: call 0x6c6d57 */
  esp -= 4; W32(esp, 0x7642d1u); SPILL(); f_6c6d57(); if (g_unwind) return; RELOAD();
/* 7642d1: lea ecx, [edi + 0x1140] */
  ecx = (uint32_t)(edi + 0x1140u);
/* 7642d7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7642d8: lea ecx, [esi + 0x1140] */
  ecx = (uint32_t)(esi + 0x1140u);
/* 7642de: call 0x6c49d0 */
  esp -= 4; W32(esp, 0x7642e3u); SPILL(); f_6c49d0(); if (g_unwind) return; RELOAD();
/* 7642e3: mov edx, dword ptr [edi + 0x114c] */
  edx = R32((uint32_t)(edi + 0x114cu));
/* 7642e9: mov dword ptr [esi + 0x114c], edx */
  W32((uint32_t)(esi + 0x114cu), edx);
/* 7642ef: mov eax, dword ptr [edi + 0x1150] */
  eax = R32((uint32_t)(edi + 0x1150u));
/* 7642f5: mov dword ptr [esi + 0x1150], eax */
  W32((uint32_t)(esi + 0x1150u), eax);
/* 7642fb: mov ecx, dword ptr [edi + 0x1154] */
  ecx = R32((uint32_t)(edi + 0x1154u));
/* 764301: mov dword ptr [esi + 0x1154], ecx */
  W32((uint32_t)(esi + 0x1154u), ecx);
/* 764307: mov edx, dword ptr [edi + 0x1158] */
  edx = R32((uint32_t)(edi + 0x1158u));
/* 76430d: mov dword ptr [esi + 0x1158], edx */
  W32((uint32_t)(esi + 0x1158u), edx);
/* 764313: mov eax, dword ptr [edi + 0x115c] */
  eax = R32((uint32_t)(edi + 0x115cu));
/* 764319: mov dword ptr [esi + 0x115c], eax */
  W32((uint32_t)(esi + 0x115cu), eax);
/* 76431f: mov ecx, dword ptr [edi + 0x1160] */
  ecx = R32((uint32_t)(edi + 0x1160u));
/* 764325: mov dword ptr [esi + 0x1160], ecx */
  W32((uint32_t)(esi + 0x1160u), ecx);
/* 76432b: mov edx, dword ptr [edi + 0x1164] */
  edx = R32((uint32_t)(edi + 0x1164u));
/* 764331: lea ecx, [edi + 0x116c] */
  ecx = (uint32_t)(edi + 0x116cu);
/* 764337: mov dword ptr [esi + 0x1164], edx */
  W32((uint32_t)(esi + 0x1164u), edx);
/* 76433d: mov eax, dword ptr [edi + 0x1168] */
  eax = R32((uint32_t)(edi + 0x1168u));
/* 764343: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 764344: lea ecx, [esi + 0x116c] */
  ecx = (uint32_t)(esi + 0x116cu);
/* 76434a: mov dword ptr [esi + 0x1168], eax */
  W32((uint32_t)(esi + 0x1168u), eax);
/* 764350: call 0x6c49d0 */
  esp -= 4; W32(esp, 0x764355u); SPILL(); f_6c49d0(); if (g_unwind) return; RELOAD();
/* 764355: lea edx, [edi + 0x1178] */
  edx = (uint32_t)(edi + 0x1178u);
/* 76435b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76435c: lea ecx, [esi + 0x1178] */
  ecx = (uint32_t)(esi + 0x1178u);
/* 764362: call 0x6c5e98 */
  esp -= 4; W32(esp, 0x764367u); SPILL(); f_6c5e98(); if (g_unwind) return; RELOAD();
/* 764367: lea eax, [edi + 0x1184] */
  eax = (uint32_t)(edi + 0x1184u);
/* 76436d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76436e: lea ecx, [esi + 0x1184] */
  ecx = (uint32_t)(esi + 0x1184u);
/* 764374: call 0x6c49d0 */
  esp -= 4; W32(esp, 0x764379u); SPILL(); f_6c49d0(); if (g_unwind) return; RELOAD();
/* 764379: lea ebp, [edi + 0x1190] */
  ebp = (uint32_t)(edi + 0x1190u);
/* 76437f: lea ebx, [esi + 0x1190] */
  ebx = (uint32_t)(esi + 0x1190u);
/* 764385: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 764386: mov ecx, ebx */
  ecx = ebx;
/* 764388: call 0x6c93ae */
  esp -= 4; W32(esp, 0x76438du); SPILL(); f_6c93ae(); if (g_unwind) return; RELOAD();
/* 76438d: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 764390: mov dword ptr [ebx + 0x10], ecx */
  W32((uint32_t)(ebx + 0x10u), ecx);
/* 764393: mov ecx, ebx */
  ecx = ebx;
/* 764395: call 0x6c3fda */
  esp -= 4; W32(esp, 0x76439au); SPILL(); f_6c3fda(); if (g_unwind) return; RELOAD();
/* 76439a: lea ebx, [edi + 0x11a4] */
  ebx = (uint32_t)(edi + 0x11a4u);
/* 7643a0: lea edi, [esi + 0x11a4] */
  edi = (uint32_t)(esi + 0x11a4u);
/* 7643a6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7643a7: mov ecx, edi */
  ecx = edi;
/* 7643a9: call 0x6c1947 */
  esp -= 4; W32(esp, 0x7643aeu); SPILL(); f_6c1947(); if (g_unwind) return; RELOAD();
/* 7643ae: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* 7643b1: mov ecx, edi */
  ecx = edi;
/* 7643b3: mov dword ptr [edi + 0x10], edx */
  W32((uint32_t)(edi + 0x10u), edx);
/* 7643b6: call 0x6ca2bd */
  esp -= 4; W32(esp, 0x7643bbu); SPILL(); f_6ca2bd(); if (g_unwind) return; RELOAD();
/* 7643bb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7643bc: mov eax, esi */
  eax = esi;
/* 7643be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7643bf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7643c0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7643c1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_764470(void) {
  LOAD_REGS();
L_764470: /* 764470: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 764471: mov esi, ecx */
  esi = ecx;
/* 764473: call 0x6c54a7 */
  esp -= 4; W32(esp, 0x764478u); SPILL(); f_6c54a7(); if (g_unwind) return; RELOAD();
/* 764478: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76447d: je 0x76448e */
  if (zf) goto L_76448e;
L_76447f: /* 76447f: push 0x11b8 */
  { uint32_t v = 0x11b8u; esp -= 4; W32(esp, v); }
/* 764484: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 764485: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x76448bu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 76448b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76448e: /* 76448e: mov eax, esi */
  eax = esi;
/* 764490: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 764491: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7644b0(void) {
  LOAD_REGS();
L_7644b0: /* 7644b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7644b1: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 7644b5: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7644b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7644b9: mov esi, ecx */
  esi = ecx;
/* 7644bb: je 0x7644f0 */
  if (zf) goto L_7644f0;
L_7644bd: /* 7644bd: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 7644c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7644c1: push 0x6c54a7 */
  { uint32_t v = 0x6c54a7u; esp -= 4; W32(esp, v); }
/* 7644c6: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 7644c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7644ca: push 0x11b8 */
  { uint32_t v = 0x11b8u; esp -= 4; W32(esp, v); }
/* 7644cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7644d0: call 0x99ca3d */
  esp -= 4; W32(esp, 0x7644d5u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 7644d5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7644d8: je 0x7644e8 */
  if (zf) goto L_7644e8;
L_7644da: /* 7644da: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 7644e0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7644e2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7644e4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7644e5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x7644e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7644e8: /* 7644e8: mov eax, edi */
  eax = edi;
/* 7644ea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7644eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7644ec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7644ed: ret 4 */
  esp += 8; SPILL(); return;
L_7644f0: /* 7644f0: mov ecx, esi */
  ecx = esi;
/* 7644f2: call 0x6c54a7 */
  esp -= 4; W32(esp, 0x7644f7u); SPILL(); f_6c54a7(); if (g_unwind) return; RELOAD();
/* 7644f7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7644fa: je 0x76450b */
  if (zf) goto L_76450b;
L_7644fc: /* 7644fc: push 0x11b8 */
  { uint32_t v = 0x11b8u; esp -= 4; W32(esp, v); }
/* 764501: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 764502: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x764508u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 764508: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76450b: /* 76450b: mov eax, esi */
  eax = esi;
/* 76450d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76450e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76450f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_764540(void) {
  LOAD_REGS();
L_764540: /* 764540: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 764544: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 764546: je 0x76454d */
  if (zf) goto L_76454d;
L_764548: /* 764548: jmp 0x6c15af */
  SPILL(); f_6c15af(); return;
L_76454d: /* 76454d: ret  */
  esp += 4; SPILL(); return;
}

void f_764560(void) {
  LOAD_REGS();
L_764560: /* 764560: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 764564: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 764566: je 0x76456d */
  if (zf) goto L_76456d;
L_764568: /* 764568: jmp 0x6c5e4d */
  SPILL(); f_6c5e4d(); return;
L_76456d: /* 76456d: ret  */
  esp += 4; SPILL(); return;
}

void f_764580(void) {
  LOAD_REGS();
L_764580: /* 764580: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 764586: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 764588: push 0x9caae0 */
  { uint32_t v = 0x9caae0u; esp -= 4; W32(esp, v); }
/* 76458d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76458e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 764595: sub esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 764598: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 764599: mov esi, dword ptr [esp + 0x80] */
  esi = R32((uint32_t)(esp + 0x80u));
/* 7645a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7645a1: mov ecx, esi */
  ecx = esi;
/* 7645a3: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x7645a9u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 7645a9: cmp eax, 0x5c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7645ac: mov ecx, esi */
  ecx = esi;
/* 7645ae: jge 0x764619 */
  if ((sf == of)) goto L_764619;
L_7645b0: /* 7645b0: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x7645b6u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 7645b6: cmp eax, 0x4a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4au);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7645b9: mov edi, dword ptr [esp + 0x88] */
  edi = R32((uint32_t)(esp + 0x88u));
/* 7645c0: jl 0x7645d2 */
  if ((sf != of)) goto L_7645d2;
L_7645c2: /* 7645c2: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 7645c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7645c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7645c7: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x7645cdu); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 7645cd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7645d0: jmp 0x7645e5 */
  goto L_7645e5;
L_7645d2: /* 7645d2: mov ecx, esi */
  ecx = esi;
/* 7645d4: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x7645dau); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 7645da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7645dc: je 0x7645e5 */
  if (zf) goto L_7645e5;
L_7645de: /* 7645de: mov dword ptr [edi + 4], 0 */
  W32((uint32_t)(edi + 0x4u), 0x0u);
L_7645e5: /* 7645e5: lea ecx, [esp + 0x84] */
  ecx = (uint32_t)(esp + 0x84u);
/* 7645ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7645ed: lea edx, [esp + 0xc] */
  edx = (uint32_t)(esp + 0xcu);
/* 7645f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7645f2: lea eax, [edi + 0xe] */
  eax = (uint32_t)(edi + 0xeu);
/* 7645f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7645f6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 7645f8: lea ecx, [edi + 0x12] */
  ecx = (uint32_t)(edi + 0x12u);
/* 7645fb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7645fc: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 764600: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 764601: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 764602: mov ecx, esi */
  ecx = esi;
/* 764604: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x764607u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 764607: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 764608: call dword ptr [0xcfa27c] */
  esp -= 4; W32(esp, 0x76460eu); SPILL(); f_4e4165(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAK@Z */ RELOAD();
/* 76460e: mov edi, dword ptr [0xcfa354] */
  edi = R32((uint32_t)(0xcfa354u));
/* 764614: jmp 0x76478e */
  goto L_76478e;
L_764619: /* 764619: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x76461fu); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 76461f: cmp eax, 0x70 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x70u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 764622: jge 0x76475c */
  if ((sf == of)) goto L_76475c;
L_764628: /* 764628: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 764629: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76462a: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 76462e: call 0x6c3030 */
  esp -= 4; W32(esp, 0x764633u); SPILL(); f_6c3030(); if (g_unwind) return; RELOAD();
/* 764633: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 764637: mov dword ptr [esp + 0x84], 0 */
  W32((uint32_t)(esp + 0x84u), 0x0u);
/* 764642: call 0x6c89b3 */
  esp -= 4; W32(esp, 0x764647u); SPILL(); f_6c89b3(); if (g_unwind) return; RELOAD();
/* 764647: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 76464b: mov byte ptr [esp + 0x84], 1 */
  W8((uint32_t)(esp + 0x84u), 0x1u);
/* 764653: call 0x6c89b3 */
  esp -= 4; W32(esp, 0x764658u); SPILL(); f_6c89b3(); if (g_unwind) return; RELOAD();
/* 764658: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 76465c: mov byte ptr [esp + 0x84], 2 */
  W8((uint32_t)(esp + 0x84u), 0x2u);
/* 764664: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x76466au); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 76466a: mov edi, dword ptr [esp + 0x90] */
  edi = R32((uint32_t)(esp + 0x90u));
/* 764671: mov ebp, dword ptr [0xcfa280] */
  ebp = R32((uint32_t)(0xcfa280u));
/* 764677: lea ecx, [edi + 0x10] */
  ecx = (uint32_t)(edi + 0x10u);
/* 76467a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76467b: lea edx, [edi + 0xe] */
  edx = (uint32_t)(edi + 0xeu);
/* 76467e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76467f: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 764682: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 764683: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 764684: mov byte ptr [esp + 0x94], 3 */
  W8((uint32_t)(esp + 0x94u), 0x3u);
/* 76468c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x76468eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76468e: mov ebx, dword ptr [0xcfa354] */
  ebx = R32((uint32_t)(0xcfa354u));
/* 764694: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 764697: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 764698: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x76469au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76469a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76469d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76469e: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7646a0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7646a0: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7646a2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7646a5: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 7646a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7646aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7646ab: mov ecx, eax */
  ecx = eax;
/* 7646ad: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x7646b0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7646b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7646b1: call dword ptr [0xcfa27c] */
  esp -= 4; W32(esp, 0x7646b7u); SPILL(); f_4e4165(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAK@Z */ RELOAD();
/* 7646b7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7646ba: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 7646be: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7646bf: lea edx, [esp + 0x64] */
  edx = (uint32_t)(esp + 0x64u);
/* 7646c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7646c4: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 7646c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7646c9: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* 7646cd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7646ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7646cf: call 0x6c83dc */
  esp -= 4; W32(esp, 0x7646d4u); SPILL(); f_6c83dc(); if (g_unwind) return; RELOAD();
/* 7646d4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7646d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7646d8: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x7646dau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7646da: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7646dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7646de: call 0x6c5dd0 */
  esp -= 4; W32(esp, 0x7646e3u); SPILL(); f_6c5dd0(); if (g_unwind) return; RELOAD();
/* 7646e3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7646e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7646e7: call 0x6c5dd0 */
  esp -= 4; W32(esp, 0x7646ecu); SPILL(); f_6c5dd0(); if (g_unwind) return; RELOAD();
/* 7646ec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7646ef: mov ecx, esi */
  ecx = esi;
/* 7646f1: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x7646f7u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 7646f7: cmp eax, 0x6f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6fu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7646fa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7646fb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7646fc: jl 0x76470c */
  if ((sf != of)) goto L_76470c;
L_7646fe: /* 7646fe: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 764702: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 764703: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 764704: call 0x6c5cfe */
  esp -= 4; W32(esp, 0x764709u); SPILL(); f_6c5cfe(); if (g_unwind) return; RELOAD();
/* 764709: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76470c: /* 76470c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 764710: mov byte ptr [esp + 0x7c], 2 */
  W8((uint32_t)(esp + 0x7cu), 0x2u);
/* 764715: call 0x6c5a24 */
  esp -= 4; W32(esp, 0x76471au); SPILL(); f_6c5a24(); if (g_unwind) return; RELOAD();
/* 76471a: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 76471e: mov byte ptr [esp + 0x7c], 1 */
  W8((uint32_t)(esp + 0x7cu), 0x1u);
/* 764723: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x764729u); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 764729: lea ecx, [esp + 0x5c] */
  ecx = (uint32_t)(esp + 0x5cu);
/* 76472d: mov byte ptr [esp + 0x7c], 0 */
  W8((uint32_t)(esp + 0x7cu), 0x0u);
/* 764732: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x764738u); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 764738: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 76473c: mov dword ptr [esp + 0x7c], 0xffffffff */
  W32((uint32_t)(esp + 0x7cu), 0xffffffffu);
/* 764744: call 0x6c943f */
  esp -= 4; W32(esp, 0x764749u); SPILL(); f_6c943f(); if (g_unwind) return; RELOAD();
/* 764749: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76474a: mov eax, esi */
  eax = esi;
/* 76474c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76474d: mov ecx, dword ptr [esp + 0x6c] */
  ecx = R32((uint32_t)(esp + 0x6cu));
/* 764751: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 764758: add esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76475b: ret  */
  esp += 4; SPILL(); return;
L_76475c: /* 76475c: mov eax, dword ptr [esp + 0x88] */
  eax = R32((uint32_t)(esp + 0x88u));
/* 764763: lea ecx, [eax + 0x10] */
  ecx = (uint32_t)(eax + 0x10u);
/* 764766: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 764767: lea edx, [eax + 0xe] */
  edx = (uint32_t)(eax + 0xeu);
/* 76476a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76476b: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 76476e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76476f: lea edx, [eax + 0xa] */
  edx = (uint32_t)(eax + 0xau);
/* 764772: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 764773: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 764776: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 764777: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 76477a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76477b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 76477c: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x764782u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 764782: mov edi, dword ptr [0xcfa354] */
  edi = R32((uint32_t)(0xcfa354u));
/* 764788: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76478b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76478c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x76478eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_76478e: /* 76478e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 764791: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 764792: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x764794u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 764794: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 764797: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 764798: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x76479au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76479a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76479d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76479e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7647a0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7647a0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7647a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7647a4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7647a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7647a6: mov ecx, dword ptr [esp + 0x7c] */
  ecx = R32((uint32_t)(esp + 0x7cu));
/* 7647aa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7647ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7647ae: mov eax, esi */
  eax = esi;
/* 7647b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7647b1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7647b8: add esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7647bb: ret  */
  esp += 4; SPILL(); return;
}

void f_764850(void) {
  LOAD_REGS();
L_764850: /* 764850: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 764852: push 0x9cabbd */
  { uint32_t v = 0x9cabbdu; esp -= 4; W32(esp, v); }
/* 764857: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76485d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76485e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 764865: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 764868: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 764869: mov esi, ecx */
  esi = ecx;
/* 76486b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 76486c: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 764870: mov dword ptr [esi], 0xa06350 */
  W32((uint32_t)(esi), 0xa06350u);
/* 764876: mov dword ptr [esp + 0x18], 0xd */
  W32((uint32_t)(esp + 0x18u), 0xdu);
/* 76487e: call dword ptr [0xcfa258] */
  esp -= 4; W32(esp, 0x764884u); SPILL(); f_4e2559(); if (g_unwind) return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */ RELOAD();
/* 764884: lea ecx, [esi + 0x178] */
  ecx = (uint32_t)(esi + 0x178u);
/* 76488a: mov byte ptr [esp + 0x18], 0xc */
  W8((uint32_t)(esp + 0x18u), 0xcu);
/* 76488f: call 0x6c9543 */
  esp -= 4; W32(esp, 0x764894u); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 764894: lea ecx, [esi + 0x16c] */
  ecx = (uint32_t)(esi + 0x16cu);
/* 76489a: mov byte ptr [esp + 0x18], 0xb */
  W8((uint32_t)(esp + 0x18u), 0xbu);
/* 76489f: call 0x6ccb49 */
  esp -= 4; W32(esp, 0x7648a4u); SPILL(); f_6ccb49(); if (g_unwind) return; RELOAD();
/* 7648a4: lea ecx, [esi + 0x14c] */
  ecx = (uint32_t)(esi + 0x14cu);
/* 7648aa: mov byte ptr [esp + 0x18], 0xa */
  W8((uint32_t)(esp + 0x18u), 0xau);
/* 7648af: call 0x6c2ed2 */
  esp -= 4; W32(esp, 0x7648b4u); SPILL(); f_6c2ed2(); if (g_unwind) return; RELOAD();
/* 7648b4: lea ecx, [esi + 0x130] */
  ecx = (uint32_t)(esi + 0x130u);
/* 7648ba: mov byte ptr [esp + 0x18], 9 */
  W8((uint32_t)(esp + 0x18u), 0x9u);
/* 7648bf: call 0x6c3cf1 */
  esp -= 4; W32(esp, 0x7648c4u); SPILL(); f_6c3cf1(); if (g_unwind) return; RELOAD();
/* 7648c4: lea edi, [esi + 0x108] */
  edi = (uint32_t)(esi + 0x108u);
/* 7648ca: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* 7648ce: lea ecx, [edi + 0xc] */
  ecx = (uint32_t)(edi + 0xcu);
/* 7648d1: mov byte ptr [esp + 0x18], 0xe */
  W8((uint32_t)(esp + 0x18u), 0xeu);
/* 7648d6: call 0x6c9a07 */
  esp -= 4; W32(esp, 0x7648dbu); SPILL(); f_6c9a07(); if (g_unwind) return; RELOAD();
/* 7648db: mov ecx, edi */
  ecx = edi;
/* 7648dd: mov byte ptr [esp + 0x18], 8 */
  W8((uint32_t)(esp + 0x18u), 0x8u);
/* 7648e2: call 0x6ca588 */
  esp -= 4; W32(esp, 0x7648e7u); SPILL(); f_6ca588(); if (g_unwind) return; RELOAD();
/* 7648e7: lea ecx, [esi + 0xf8] */
  ecx = (uint32_t)(esi + 0xf8u);
/* 7648ed: mov byte ptr [esp + 0x18], 7 */
  W8((uint32_t)(esp + 0x18u), 0x7u);
/* 7648f2: call 0x6ca75e */
  esp -= 4; W32(esp, 0x7648f7u); SPILL(); f_6ca75e(); if (g_unwind) return; RELOAD();
/* 7648f7: lea ecx, [esi + 0xe0] */
  ecx = (uint32_t)(esi + 0xe0u);
/* 7648fd: mov byte ptr [esp + 0x18], 6 */
  W8((uint32_t)(esp + 0x18u), 0x6u);
/* 764902: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x764908u); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 764908: lea ecx, [esi + 0xc4] */
  ecx = (uint32_t)(esi + 0xc4u);
/* 76490e: mov byte ptr [esp + 0x18], 5 */
  W8((uint32_t)(esp + 0x18u), 0x5u);
/* 764913: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x764919u); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
/* 764919: lea ecx, [esi + 0xb4] */
  ecx = (uint32_t)(esi + 0xb4u);
/* 76491f: mov byte ptr [esp + 0x18], 4 */
  W8((uint32_t)(esp + 0x18u), 0x4u);
/* 764924: call 0x6c5a24 */
  esp -= 4; W32(esp, 0x764929u); SPILL(); f_6c5a24(); if (g_unwind) return; RELOAD();
/* 764929: lea ecx, [esi + 0x9c] */
  ecx = (uint32_t)(esi + 0x9cu);
/* 76492f: mov byte ptr [esp + 0x18], 3 */
  W8((uint32_t)(esp + 0x18u), 0x3u);
/* 764934: call 0x6c678f */
  esp -= 4; W32(esp, 0x764939u); SPILL(); f_6c678f(); if (g_unwind) return; RELOAD();
/* 764939: lea ecx, [esi + 0x80] */
  ecx = (uint32_t)(esi + 0x80u);
/* 76493f: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* 764944: call 0x6c678f */
  esp -= 4; W32(esp, 0x764949u); SPILL(); f_6c678f(); if (g_unwind) return; RELOAD();
/* 764949: lea ecx, [esi + 0x64] */
  ecx = (uint32_t)(esi + 0x64u);
/* 76494c: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 764951: call 0x6c943f */
  esp -= 4; W32(esp, 0x764956u); SPILL(); f_6c943f(); if (g_unwind) return; RELOAD();
/* 764956: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* 764959: mov byte ptr [esp + 0x18], 0 */
  W8((uint32_t)(esp + 0x18u), 0x0u);
/* 76495e: call 0x6c2fe5 */
  esp -= 4; W32(esp, 0x764963u); SPILL(); f_6c2fe5(); if (g_unwind) return; RELOAD();
/* 764963: mov ecx, esi */
  ecx = esi;
/* 764965: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 76496d: call 0x6c41ec */
  esp -= 4; W32(esp, 0x764972u); SPILL(); f_6c41ec(); if (g_unwind) return; RELOAD();
/* 764972: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 764976: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 764977: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 764978: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76497f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 764982: ret  */
  esp += 4; SPILL(); return;
}

void f_7649e0(void) {
  LOAD_REGS();
L_7649e0: /* 7649e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7649e2: push 0x9caca7 */
  { uint32_t v = 0x9caca7u; esp -= 4; W32(esp, v); }
/* 7649e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7649ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7649ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7649f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7649f6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7649f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7649f8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7649f9: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 7649fd: mov esi, ecx */
  esi = ecx;
/* 7649ff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 764a00: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 764a04: call 0x6c67fd */
  esp -= 4; W32(esp, 0x764a09u); SPILL(); f_6c67fd(); if (g_unwind) return; RELOAD();
/* 764a09: lea eax, [edi + 0x54] */
  eax = (uint32_t)(edi + 0x54u);
/* 764a0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 764a0d: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* 764a10: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 764a18: mov dword ptr [esi], 0xa06350 */
  W32((uint32_t)(esi), 0xa06350u);
/* 764a1e: call 0x6cc1cb */
  esp -= 4; W32(esp, 0x764a23u); SPILL(); f_6cc1cb(); if (g_unwind) return; RELOAD();
/* 764a23: lea ecx, [edi + 0x64] */
  ecx = (uint32_t)(edi + 0x64u);
/* 764a26: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 764a27: lea ecx, [esi + 0x64] */
  ecx = (uint32_t)(esi + 0x64u);
/* 764a2a: mov byte ptr [esp + 0x1c], 1 */
  W8((uint32_t)(esp + 0x1cu), 0x1u);
/* 764a2f: mov dword ptr [esi + 0x60], 0x9f944c */
  W32((uint32_t)(esi + 0x60u), 0x9f944cu);
/* 764a36: call 0x6c3477 */
  esp -= 4; W32(esp, 0x764a3bu); SPILL(); f_6c3477(); if (g_unwind) return; RELOAD();
/* 764a3b: mov edx, dword ptr [edi + 0x70] */
  edx = R32((uint32_t)(edi + 0x70u));
/* 764a3e: mov dword ptr [esi + 0x70], edx */
  W32((uint32_t)(esi + 0x70u), edx);
/* 764a41: mov eax, dword ptr [edi + 0x74] */
  eax = R32((uint32_t)(edi + 0x74u));
/* 764a44: mov dword ptr [esi + 0x74], eax */
  W32((uint32_t)(esi + 0x74u), eax);
/* 764a47: mov ecx, dword ptr [edi + 0x78] */
  ecx = R32((uint32_t)(edi + 0x78u));
/* 764a4a: mov dword ptr [esi + 0x78], ecx */
  W32((uint32_t)(esi + 0x78u), ecx);
/* 764a4d: lea edx, [edi + 0x80] */
  edx = (uint32_t)(edi + 0x80u);
/* 764a53: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 764a54: lea ecx, [esi + 0x80] */
  ecx = (uint32_t)(esi + 0x80u);
/* 764a5a: mov byte ptr [esp + 0x1c], 2 */
  W8((uint32_t)(esp + 0x1cu), 0x2u);
/* 764a5f: mov dword ptr [esi + 0x7c], 0x9f8b1c */
  W32((uint32_t)(esi + 0x7cu), 0x9f8b1cu);
/* 764a66: call 0x6c520e */
  esp -= 4; W32(esp, 0x764a6bu); SPILL(); f_6c520e(); if (g_unwind) return; RELOAD();
/* 764a6b: mov eax, dword ptr [edi + 0x8c] */
  eax = R32((uint32_t)(edi + 0x8cu));
/* 764a71: mov dword ptr [esi + 0x8c], eax */
  W32((uint32_t)(esi + 0x8cu), eax);
/* 764a77: mov ecx, dword ptr [edi + 0x90] */
  ecx = R32((uint32_t)(edi + 0x90u));
/* 764a7d: mov dword ptr [esi + 0x90], ecx */
  W32((uint32_t)(esi + 0x90u), ecx);
/* 764a83: mov edx, dword ptr [edi + 0x94] */
  edx = R32((uint32_t)(edi + 0x94u));
/* 764a89: mov ebx, 0x9f9478 */
  ebx = 0x9f9478u;
/* 764a8e: mov dword ptr [esi + 0x94], edx */
  W32((uint32_t)(esi + 0x94u), edx);
/* 764a94: mov dword ptr [esi + 0x7c], ebx */
  W32((uint32_t)(esi + 0x7cu), ebx);
/* 764a97: lea eax, [edi + 0x9c] */
  eax = (uint32_t)(edi + 0x9cu);
/* 764a9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 764a9e: lea ecx, [esi + 0x9c] */
  ecx = (uint32_t)(esi + 0x9cu);
/* 764aa4: mov byte ptr [esp + 0x1c], 3 */
  W8((uint32_t)(esp + 0x1cu), 0x3u);
/* 764aa9: mov dword ptr [esi + 0x98], 0x9f8b1c */
  W32((uint32_t)(esi + 0x98u), 0x9f8b1cu);
/* 764ab3: call 0x6c520e */
  esp -= 4; W32(esp, 0x764ab8u); SPILL(); f_6c520e(); if (g_unwind) return; RELOAD();
/* 764ab8: mov ecx, dword ptr [edi + 0xa8] */
  ecx = R32((uint32_t)(edi + 0xa8u));
/* 764abe: mov dword ptr [esi + 0xa8], ecx */
  W32((uint32_t)(esi + 0xa8u), ecx);
/* 764ac4: mov edx, dword ptr [edi + 0xac] */
  edx = R32((uint32_t)(edi + 0xacu));
/* 764aca: mov dword ptr [esi + 0xac], edx */
  W32((uint32_t)(esi + 0xacu), edx);
/* 764ad0: mov eax, dword ptr [edi + 0xb0] */
  eax = R32((uint32_t)(edi + 0xb0u));
/* 764ad6: mov dword ptr [esi + 0xb0], eax */
  W32((uint32_t)(esi + 0xb0u), eax);
/* 764adc: mov dword ptr [esi + 0x98], ebx */
  W32((uint32_t)(esi + 0x98u), ebx);
/* 764ae2: lea ecx, [edi + 0xb4] */
  ecx = (uint32_t)(edi + 0xb4u);
/* 764ae8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 764ae9: lea ecx, [esi + 0xb4] */
  ecx = (uint32_t)(esi + 0xb4u);
/* 764aef: mov byte ptr [esp + 0x1c], 4 */
  W8((uint32_t)(esp + 0x1cu), 0x4u);
/* 764af4: call 0x6c9665 */
  esp -= 4; W32(esp, 0x764af9u); SPILL(); f_6c9665(); if (g_unwind) return; RELOAD();
/* 764af9: lea edx, [edi + 0xc4] */
  edx = (uint32_t)(edi + 0xc4u);
/* 764aff: mov ebx, 0x9f7c44 */
  ebx = 0x9f7c44u;
/* 764b04: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 764b05: lea ecx, [esi + 0xc4] */
  ecx = (uint32_t)(esi + 0xc4u);
/* 764b0b: mov byte ptr [esp + 0x1c], 5 */
  W8((uint32_t)(esp + 0x1cu), 0x5u);
/* 764b10: mov dword ptr [esi + 0xc0], ebx */
  W32((uint32_t)(esi + 0xc0u), ebx);
/* 764b16: call dword ptr [0xcfa290] */
  esp -= 4; W32(esp, 0x764b1cu); SPILL(); f_4e447b(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@ABV0@@Z */ RELOAD();
/* 764b1c: mov eax, dword ptr [edi + 0xd0] */
  eax = R32((uint32_t)(edi + 0xd0u));
/* 764b22: mov dword ptr [esi + 0xd0], eax */
  W32((uint32_t)(esi + 0xd0u), eax);
/* 764b28: mov ecx, dword ptr [edi + 0xd4] */
  ecx = R32((uint32_t)(edi + 0xd4u));
/* 764b2e: mov dword ptr [esi + 0xd4], ecx */
  W32((uint32_t)(esi + 0xd4u), ecx);
/* 764b34: mov edx, dword ptr [edi + 0xd8] */
  edx = R32((uint32_t)(edi + 0xd8u));
/* 764b3a: mov dword ptr [esi + 0xd8], edx */
  W32((uint32_t)(esi + 0xd8u), edx);
/* 764b40: mov byte ptr [esp + 0x18], 6 */
  W8((uint32_t)(esp + 0x18u), 0x6u);
/* 764b45: mov dword ptr [esi + 0xdc], ebx */
  W32((uint32_t)(esi + 0xdcu), ebx);
/* 764b4b: lea eax, [edi + 0xe0] */
  eax = (uint32_t)(edi + 0xe0u);
/* 764b51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 764b52: lea ecx, [esi + 0xe0] */
  ecx = (uint32_t)(esi + 0xe0u);
/* 764b58: call dword ptr [0xcfa290] */
  esp -= 4; W32(esp, 0x764b5eu); SPILL(); f_4e447b(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@ABV0@@Z */ RELOAD();
/* 764b5e: mov ecx, dword ptr [edi + 0xec] */
  ecx = R32((uint32_t)(edi + 0xecu));
/* 764b64: mov dword ptr [esi + 0xec], ecx */
  W32((uint32_t)(esi + 0xecu), ecx);
/* 764b6a: mov edx, dword ptr [edi + 0xf0] */
  edx = R32((uint32_t)(edi + 0xf0u));
/* 764b70: mov dword ptr [esi + 0xf0], edx */
  W32((uint32_t)(esi + 0xf0u), edx);
/* 764b76: mov eax, dword ptr [edi + 0xf4] */
  eax = R32((uint32_t)(edi + 0xf4u));
/* 764b7c: mov dword ptr [esi + 0xf4], eax */
  W32((uint32_t)(esi + 0xf4u), eax);
/* 764b82: lea ecx, [edi + 0xf8] */
  ecx = (uint32_t)(edi + 0xf8u);
/* 764b88: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 764b89: lea ecx, [esi + 0xf8] */
  ecx = (uint32_t)(esi + 0xf8u);
/* 764b8f: mov byte ptr [esp + 0x1c], 7 */
  W8((uint32_t)(esp + 0x1cu), 0x7u);
/* 764b94: call 0x6c10a5 */
  esp -= 4; W32(esp, 0x764b99u); SPILL(); f_6c10a5(); if (g_unwind) return; RELOAD();
/* 764b99: mov edx, dword ptr [edi + 0x104] */
  edx = R32((uint32_t)(edi + 0x104u));
/* 764b9f: lea eax, [edi + 0x108] */
  eax = (uint32_t)(edi + 0x108u);
/* 764ba5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 764ba6: lea ecx, [esi + 0x108] */
  ecx = (uint32_t)(esi + 0x108u);
/* 764bac: mov byte ptr [esp + 0x1c], 8 */
  W8((uint32_t)(esp + 0x1cu), 0x8u);
/* 764bb1: mov dword ptr [esi + 0x104], edx */
  W32((uint32_t)(esi + 0x104u), edx);
/* 764bb7: call 0x6ca33f */
  esp -= 4; W32(esp, 0x764bbcu); SPILL(); f_6ca33f(); if (g_unwind) return; RELOAD();
/* 764bbc: mov ecx, dword ptr [edi + 0x120] */
  ecx = R32((uint32_t)(edi + 0x120u));
/* 764bc2: mov dword ptr [esi + 0x120], ecx */
  W32((uint32_t)(esi + 0x120u), ecx);
/* 764bc8: mov edx, dword ptr [edi + 0x124] */
  edx = R32((uint32_t)(edi + 0x124u));
/* 764bce: mov dword ptr [esi + 0x124], edx */
  W32((uint32_t)(esi + 0x124u), edx);
/* 764bd4: mov eax, dword ptr [edi + 0x128] */
  eax = R32((uint32_t)(edi + 0x128u));
/* 764bda: mov dword ptr [esi + 0x128], eax */
  W32((uint32_t)(esi + 0x128u), eax);
/* 764be0: mov ecx, dword ptr [edi + 0x12c] */
  ecx = R32((uint32_t)(edi + 0x12cu));
/* 764be6: lea ebx, [edi + 0x130] */
  ebx = (uint32_t)(edi + 0x130u);
/* 764bec: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 764bee: mov byte ptr [esp + 0x18], 9 */
  W8((uint32_t)(esp + 0x18u), 0x9u);
/* 764bf3: mov dword ptr [esi + 0x12c], ecx */
  W32((uint32_t)(esi + 0x12cu), ecx);
/* 764bf9: je 0x764c00 */
  if (zf) goto L_764c00;
L_764bfb: /* 764bfb: lea eax, [ebx + 0xc] */
  eax = (uint32_t)(ebx + 0xcu);
/* 764bfe: jmp 0x764c02 */
  goto L_764c02;
L_764c00: /* 764c00: xor eax, eax */
  eax = 0;
L_764c02: /* 764c02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 764c03: lea ecx, [esi + 0x13c] */
  ecx = (uint32_t)(esi + 0x13cu);
/* 764c09: call 0x6c6ea1 */
  esp -= 4; W32(esp, 0x764c0eu); SPILL(); f_6c6ea1(); if (g_unwind) return; RELOAD();
/* 764c0e: mov dword ptr [esi + 0x130], 0x9f401c */
  W32((uint32_t)(esi + 0x130u), 0x9f401cu);
/* 764c18: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 764c1b: mov dword ptr [esi + 0x134], edx */
  W32((uint32_t)(esi + 0x134u), edx);
/* 764c21: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 764c24: mov dword ptr [esi + 0x138], eax */
  W32((uint32_t)(esi + 0x138u), eax);
/* 764c2a: mov dword ptr [esi + 0x130], 0x9f94d0 */
  W32((uint32_t)(esi + 0x130u), 0x9f94d0u);
/* 764c34: mov ecx, dword ptr [edi + 0x148] */
  ecx = R32((uint32_t)(edi + 0x148u));
/* 764c3a: lea edx, [edi + 0x14c] */
  edx = (uint32_t)(edi + 0x14cu);
/* 764c40: mov dword ptr [esi + 0x148], ecx */
  W32((uint32_t)(esi + 0x148u), ecx);
/* 764c46: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 764c47: lea ecx, [esi + 0x14c] */
  ecx = (uint32_t)(esi + 0x14cu);
/* 764c4d: mov byte ptr [esp + 0x1c], 0xa */
  W8((uint32_t)(esp + 0x1cu), 0xau);
/* 764c52: call 0x6c85e4 */
  esp -= 4; W32(esp, 0x764c57u); SPILL(); f_6c85e4(); if (g_unwind) return; RELOAD();
/* 764c57: mov eax, dword ptr [edi + 0x158] */
  eax = R32((uint32_t)(edi + 0x158u));
/* 764c5d: mov dword ptr [esi + 0x158], eax */
  W32((uint32_t)(esi + 0x158u), eax);
/* 764c63: mov ecx, dword ptr [edi + 0x15c] */
  ecx = R32((uint32_t)(edi + 0x15cu));
/* 764c69: mov dword ptr [esi + 0x15c], ecx */
  W32((uint32_t)(esi + 0x15cu), ecx);
/* 764c6f: mov edx, dword ptr [edi + 0x160] */
  edx = R32((uint32_t)(edi + 0x160u));
/* 764c75: mov dword ptr [esi + 0x160], edx */
  W32((uint32_t)(esi + 0x160u), edx);
/* 764c7b: mov eax, dword ptr [edi + 0x164] */
  eax = R32((uint32_t)(edi + 0x164u));
/* 764c81: mov dword ptr [esi + 0x164], eax */
  W32((uint32_t)(esi + 0x164u), eax);
/* 764c87: mov ecx, dword ptr [edi + 0x168] */
  ecx = R32((uint32_t)(edi + 0x168u));
/* 764c8d: lea edx, [edi + 0x16c] */
  edx = (uint32_t)(edi + 0x16cu);
/* 764c93: mov dword ptr [esi + 0x168], ecx */
  W32((uint32_t)(esi + 0x168u), ecx);
/* 764c99: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 764c9a: lea ecx, [esi + 0x16c] */
  ecx = (uint32_t)(esi + 0x16cu);
/* 764ca0: mov byte ptr [esp + 0x1c], 0xb */
  W8((uint32_t)(esp + 0x1cu), 0xbu);
/* 764ca5: call 0x6ca2a4 */
  esp -= 4; W32(esp, 0x764caau); SPILL(); f_6ca2a4(); if (g_unwind) return; RELOAD();
/* 764caa: add edi, 0x178 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x178u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 764cb0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 764cb1: lea ecx, [esi + 0x178] */
  ecx = (uint32_t)(esi + 0x178u);
/* 764cb7: mov byte ptr [esp + 0x1c], 0xc */
  W8((uint32_t)(esp + 0x1cu), 0xcu);
/* 764cbc: call 0x6cbbae */
  esp -= 4; W32(esp, 0x764cc1u); SPILL(); f_6cbbae(); if (g_unwind) return; RELOAD();
/* 764cc1: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 764cc5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 764cc6: mov eax, esi */
  eax = esi;
/* 764cc8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 764cc9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 764cca: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 764cd1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 764cd4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_764da0(void) {
  LOAD_REGS();
L_764da0: /* 764da0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 764da1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 764da2: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 764da6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 764da7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 764da8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 764da9: mov ebx, ecx */
  ebx = ecx;
/* 764dab: call dword ptr [0xcfa270] */
  esp -= 4; W32(esp, 0x764db1u); SPILL(); f_4e1c67(); if (g_unwind) return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 764db1: lea esi, [ebp + 0x28] */
  esi = (uint32_t)(ebp + 0x28u);
/* 764db4: lea edi, [ebx + 0x28] */
  edi = (uint32_t)(ebx + 0x28u);
/* 764db7: mov ecx, 7 */
  ecx = 0x7u;
/* 764dbc: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 764dbe: lea eax, [ebp + 0x44] */
  eax = (uint32_t)(ebp + 0x44u);
/* 764dc1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 764dc3: lea ecx, [ebx + 0x44] */
  ecx = (uint32_t)(ebx + 0x44u);
/* 764dc6: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 764dc8: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 764dcb: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 764dce: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 764dd1: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 764dd4: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 764dd7: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 764dda: lea ecx, [ebp + 0x54] */
  ecx = (uint32_t)(ebp + 0x54u);
/* 764ddd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 764dde: lea ecx, [ebx + 0x54] */
  ecx = (uint32_t)(ebx + 0x54u);
/* 764de1: call 0x6c8085 */
  esp -= 4; W32(esp, 0x764de6u); SPILL(); f_6c8085(); if (g_unwind) return; RELOAD();
/* 764de6: lea edx, [ebp + 0x64] */
  edx = (uint32_t)(ebp + 0x64u);
/* 764de9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 764dea: lea ecx, [ebx + 0x64] */
  ecx = (uint32_t)(ebx + 0x64u);
/* 764ded: call 0x6caf33 */
  esp -= 4; W32(esp, 0x764df2u); SPILL(); f_6caf33(); if (g_unwind) return; RELOAD();
/* 764df2: mov eax, dword ptr [ebp + 0x70] */
  eax = R32((uint32_t)(ebp + 0x70u));
/* 764df5: mov dword ptr [ebx + 0x70], eax */
  W32((uint32_t)(ebx + 0x70u), eax);
/* 764df8: mov ecx, dword ptr [ebp + 0x74] */
  ecx = R32((uint32_t)(ebp + 0x74u));
/* 764dfb: mov dword ptr [ebx + 0x74], ecx */
  W32((uint32_t)(ebx + 0x74u), ecx);
/* 764dfe: mov edx, dword ptr [ebp + 0x78] */
  edx = R32((uint32_t)(ebp + 0x78u));
/* 764e01: lea eax, [ebp + 0x80] */
  eax = (uint32_t)(ebp + 0x80u);
/* 764e07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 764e08: lea ecx, [ebx + 0x80] */
  ecx = (uint32_t)(ebx + 0x80u);
/* 764e0e: mov dword ptr [ebx + 0x78], edx */
  W32((uint32_t)(ebx + 0x78u), edx);
/* 764e11: call 0x6c81e3 */
  esp -= 4; W32(esp, 0x764e16u); SPILL(); f_6c81e3(); if (g_unwind) return; RELOAD();
/* 764e16: mov ecx, dword ptr [ebp + 0x8c] */
  ecx = R32((uint32_t)(ebp + 0x8cu));
/* 764e1c: mov dword ptr [ebx + 0x8c], ecx */
  W32((uint32_t)(ebx + 0x8cu), ecx);
/* 764e22: mov edx, dword ptr [ebp + 0x90] */
  edx = R32((uint32_t)(ebp + 0x90u));
/* 764e28: lea ecx, [ebp + 0x9c] */
  ecx = (uint32_t)(ebp + 0x9cu);
/* 764e2e: mov dword ptr [ebx + 0x90], edx */
  W32((uint32_t)(ebx + 0x90u), edx);
/* 764e34: mov eax, dword ptr [ebp + 0x94] */
  eax = R32((uint32_t)(ebp + 0x94u));
/* 764e3a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 764e3b: lea ecx, [ebx + 0x9c] */
  ecx = (uint32_t)(ebx + 0x9cu);
/* 764e41: mov dword ptr [ebx + 0x94], eax */
  W32((uint32_t)(ebx + 0x94u), eax);
/* 764e47: call 0x6c81e3 */
  esp -= 4; W32(esp, 0x764e4cu); SPILL(); f_6c81e3(); if (g_unwind) return; RELOAD();
/* 764e4c: mov edx, dword ptr [ebp + 0xa8] */
  edx = R32((uint32_t)(ebp + 0xa8u));
/* 764e52: mov dword ptr [ebx + 0xa8], edx */
  W32((uint32_t)(ebx + 0xa8u), edx);
/* 764e58: mov eax, dword ptr [ebp + 0xac] */
  eax = R32((uint32_t)(ebp + 0xacu));
/* 764e5e: mov dword ptr [ebx + 0xac], eax */
  W32((uint32_t)(ebx + 0xacu), eax);
/* 764e64: mov ecx, dword ptr [ebp + 0xb0] */
  ecx = R32((uint32_t)(ebp + 0xb0u));
/* 764e6a: lea edx, [ebp + 0xb4] */
  edx = (uint32_t)(ebp + 0xb4u);
/* 764e70: mov dword ptr [ebx + 0xb0], ecx */
  W32((uint32_t)(ebx + 0xb0u), ecx);
/* 764e76: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 764e77: lea ecx, [ebx + 0xb4] */
  ecx = (uint32_t)(ebx + 0xb4u);
/* 764e7d: call 0x6c3f4e */
  esp -= 4; W32(esp, 0x764e82u); SPILL(); f_6c3f4e(); if (g_unwind) return; RELOAD();
/* 764e82: lea eax, [ebp + 0xc4] */
  eax = (uint32_t)(ebp + 0xc4u);
/* 764e88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 764e89: lea ecx, [ebx + 0xc4] */
  ecx = (uint32_t)(ebx + 0xc4u);
/* 764e8f: call dword ptr [0xcfa294] */
  esp -= 4; W32(esp, 0x764e95u); SPILL(); f_4e2676(); if (g_unwind) return; /* Core!??4?$TArray@G@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 764e95: mov ecx, dword ptr [ebp + 0xd0] */
  ecx = R32((uint32_t)(ebp + 0xd0u));
/* 764e9b: mov dword ptr [ebx + 0xd0], ecx */
  W32((uint32_t)(ebx + 0xd0u), ecx);
/* 764ea1: mov edx, dword ptr [ebp + 0xd4] */
  edx = R32((uint32_t)(ebp + 0xd4u));
/* 764ea7: lea ecx, [ebp + 0xe0] */
  ecx = (uint32_t)(ebp + 0xe0u);
/* 764ead: mov dword ptr [ebx + 0xd4], edx */
  W32((uint32_t)(ebx + 0xd4u), edx);
/* 764eb3: mov eax, dword ptr [ebp + 0xd8] */
  eax = R32((uint32_t)(ebp + 0xd8u));
/* 764eb9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 764eba: lea ecx, [ebx + 0xe0] */
  ecx = (uint32_t)(ebx + 0xe0u);
/* 764ec0: mov dword ptr [ebx + 0xd8], eax */
  W32((uint32_t)(ebx + 0xd8u), eax);
/* 764ec6: call dword ptr [0xcfa294] */
  esp -= 4; W32(esp, 0x764eccu); SPILL(); f_4e2676(); if (g_unwind) return; /* Core!??4?$TArray@G@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 764ecc: mov edx, dword ptr [ebp + 0xec] */
  edx = R32((uint32_t)(ebp + 0xecu));
/* 764ed2: mov dword ptr [ebx + 0xec], edx */
  W32((uint32_t)(ebx + 0xecu), edx);
/* 764ed8: mov eax, dword ptr [ebp + 0xf0] */
  eax = R32((uint32_t)(ebp + 0xf0u));
/* 764ede: mov dword ptr [ebx + 0xf0], eax */
  W32((uint32_t)(ebx + 0xf0u), eax);
/* 764ee4: mov ecx, dword ptr [ebp + 0xf4] */
  ecx = R32((uint32_t)(ebp + 0xf4u));
/* 764eea: mov dword ptr [ebx + 0xf4], ecx */
  W32((uint32_t)(ebx + 0xf4u), ecx);
/* 764ef0: lea edx, [ebp + 0xf8] */
  edx = (uint32_t)(ebp + 0xf8u);
/* 764ef6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 764ef7: lea ecx, [ebx + 0xf8] */
  ecx = (uint32_t)(ebx + 0xf8u);
/* 764efd: call 0x6c8bb6 */
  esp -= 4; W32(esp, 0x764f02u); SPILL(); f_6c8bb6(); if (g_unwind) return; RELOAD();
/* 764f02: mov eax, dword ptr [ebp + 0x104] */
  eax = R32((uint32_t)(ebp + 0x104u));
/* 764f08: lea esi, [ebp + 0x108] */
  esi = (uint32_t)(ebp + 0x108u);
/* 764f0e: lea edi, [ebx + 0x108] */
  edi = (uint32_t)(ebx + 0x108u);
/* 764f14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 764f15: mov ecx, edi */
  ecx = edi;
/* 764f17: mov dword ptr [ebx + 0x104], eax */
  W32((uint32_t)(ebx + 0x104u), eax);
/* 764f1d: call 0x6c9d9a */
  esp -= 4; W32(esp, 0x764f22u); SPILL(); f_6c9d9a(); if (g_unwind) return; RELOAD();
/* 764f22: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 764f25: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 764f26: lea ecx, [edi + 0xc] */
  ecx = (uint32_t)(edi + 0xcu);
/* 764f29: call 0x6c9773 */
  esp -= 4; W32(esp, 0x764f2eu); SPILL(); f_6c9773(); if (g_unwind) return; RELOAD();
/* 764f2e: mov ecx, dword ptr [ebp + 0x120] */
  ecx = R32((uint32_t)(ebp + 0x120u));
/* 764f34: mov dword ptr [ebx + 0x120], ecx */
  W32((uint32_t)(ebx + 0x120u), ecx);
/* 764f3a: mov edx, dword ptr [ebp + 0x124] */
  edx = R32((uint32_t)(ebp + 0x124u));
/* 764f40: mov dword ptr [ebx + 0x124], edx */
  W32((uint32_t)(ebx + 0x124u), edx);
/* 764f46: mov eax, dword ptr [ebp + 0x128] */
  eax = R32((uint32_t)(ebp + 0x128u));
/* 764f4c: mov dword ptr [ebx + 0x128], eax */
  W32((uint32_t)(ebx + 0x128u), eax);
/* 764f52: mov ecx, dword ptr [ebp + 0x12c] */
  ecx = R32((uint32_t)(ebp + 0x12cu));
/* 764f58: lea esi, [ebp + 0x130] */
  esi = (uint32_t)(ebp + 0x130u);
/* 764f5e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 764f60: mov dword ptr [ebx + 0x12c], ecx */
  W32((uint32_t)(ebx + 0x12cu), ecx);
/* 764f66: je 0x764f6d */
  if (zf) goto L_764f6d;
L_764f68: /* 764f68: lea eax, [esi + 0xc] */
  eax = (uint32_t)(esi + 0xcu);
/* 764f6b: jmp 0x764f6f */
  goto L_764f6f;
L_764f6d: /* 764f6d: xor eax, eax */
  eax = 0;
L_764f6f: /* 764f6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 764f70: lea ecx, [ebx + 0x13c] */
  ecx = (uint32_t)(ebx + 0x13cu);
/* 764f76: call 0x6c89b8 */
  esp -= 4; W32(esp, 0x764f7bu); SPILL(); f_6c89b8(); if (g_unwind) return; RELOAD();
/* 764f7b: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 764f7e: mov dword ptr [ebx + 0x134], edx */
  W32((uint32_t)(ebx + 0x134u), edx);
/* 764f84: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 764f87: mov dword ptr [ebx + 0x138], eax */
  W32((uint32_t)(ebx + 0x138u), eax);
/* 764f8d: mov ecx, dword ptr [ebp + 0x148] */
  ecx = R32((uint32_t)(ebp + 0x148u));
/* 764f93: lea edx, [ebp + 0x14c] */
  edx = (uint32_t)(ebp + 0x14cu);
/* 764f99: mov dword ptr [ebx + 0x148], ecx */
  W32((uint32_t)(ebx + 0x148u), ecx);
/* 764f9f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 764fa0: lea ecx, [ebx + 0x14c] */
  ecx = (uint32_t)(ebx + 0x14cu);
/* 764fa6: call 0x6c4246 */
  esp -= 4; W32(esp, 0x764fabu); SPILL(); f_6c4246(); if (g_unwind) return; RELOAD();
/* 764fab: mov eax, dword ptr [ebp + 0x158] */
  eax = R32((uint32_t)(ebp + 0x158u));
/* 764fb1: mov dword ptr [ebx + 0x158], eax */
  W32((uint32_t)(ebx + 0x158u), eax);
/* 764fb7: mov ecx, dword ptr [ebp + 0x15c] */
  ecx = R32((uint32_t)(ebp + 0x15cu));
/* 764fbd: mov dword ptr [ebx + 0x15c], ecx */
  W32((uint32_t)(ebx + 0x15cu), ecx);
/* 764fc3: mov edx, dword ptr [ebp + 0x160] */
  edx = R32((uint32_t)(ebp + 0x160u));
/* 764fc9: mov dword ptr [ebx + 0x160], edx */
  W32((uint32_t)(ebx + 0x160u), edx);
/* 764fcf: mov eax, dword ptr [ebp + 0x164] */
  eax = R32((uint32_t)(ebp + 0x164u));
/* 764fd5: mov dword ptr [ebx + 0x164], eax */
  W32((uint32_t)(ebx + 0x164u), eax);
/* 764fdb: mov ecx, dword ptr [ebp + 0x168] */
  ecx = R32((uint32_t)(ebp + 0x168u));
/* 764fe1: lea edx, [ebp + 0x16c] */
  edx = (uint32_t)(ebp + 0x16cu);
/* 764fe7: mov dword ptr [ebx + 0x168], ecx */
  W32((uint32_t)(ebx + 0x168u), ecx);
/* 764fed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 764fee: lea ecx, [ebx + 0x16c] */
  ecx = (uint32_t)(ebx + 0x16cu);
/* 764ff4: call 0x6c42dc */
  esp -= 4; W32(esp, 0x764ff9u); SPILL(); f_6c42dc(); if (g_unwind) return; RELOAD();
/* 764ff9: add ebp, 0x178 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x178u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 764fff: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 765000: lea ecx, [ebx + 0x178] */
  ecx = (uint32_t)(ebx + 0x178u);
/* 765006: call 0x6ca3a3 */
  esp -= 4; W32(esp, 0x76500bu); SPILL(); f_6ca3a3(); if (g_unwind) return; RELOAD();
/* 76500b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76500c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76500d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 76500e: mov eax, ebx */
  eax = ebx;
/* 765010: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 765011: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7650c0(void) {
  LOAD_REGS();
L_7650c0: /* 7650c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7650c1: mov esi, ecx */
  esi = ecx;
/* 7650c3: call 0x6cc680 */
  esp -= 4; W32(esp, 0x7650c8u); SPILL(); f_6cc680(); if (g_unwind) return; RELOAD();
/* 7650c8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7650cd: je 0x7650de */
  if (zf) goto L_7650de;
L_7650cf: /* 7650cf: push 0x184 */
  { uint32_t v = 0x184u; esp -= 4; W32(esp, v); }
/* 7650d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7650d5: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x7650dbu); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 7650db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7650de: /* 7650de: mov eax, esi */
  eax = esi;
/* 7650e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7650e1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_765100(void) {
  LOAD_REGS();
L_765100: /* 765100: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 765101: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 765105: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 765108: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 765109: mov esi, ecx */
  esi = ecx;
/* 76510b: je 0x765140 */
  if (zf) goto L_765140;
L_76510d: /* 76510d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 765110: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 765111: push 0x6cc680 */
  { uint32_t v = 0x6cc680u; esp -= 4; W32(esp, v); }
/* 765116: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 765119: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76511a: push 0x184 */
  { uint32_t v = 0x184u; esp -= 4; W32(esp, v); }
/* 76511f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 765120: call 0x99ca3d */
  esp -= 4; W32(esp, 0x765125u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 765125: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 765128: je 0x765138 */
  if (zf) goto L_765138;
L_76512a: /* 76512a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 765130: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 765132: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 765134: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 765135: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x765138u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_765138: /* 765138: mov eax, edi */
  eax = edi;
/* 76513a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76513b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76513c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76513d: ret 4 */
  esp += 8; SPILL(); return;
L_765140: /* 765140: mov ecx, esi */
  ecx = esi;
/* 765142: call 0x6cc680 */
  esp -= 4; W32(esp, 0x765147u); SPILL(); f_6cc680(); if (g_unwind) return; RELOAD();
/* 765147: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 76514a: je 0x76515b */
  if (zf) goto L_76515b;
L_76514c: /* 76514c: push 0x184 */
  { uint32_t v = 0x184u; esp -= 4; W32(esp, v); }
/* 765151: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 765152: call dword ptr [0xcfa274] */
  esp -= 4; W32(esp, 0x765158u); SPILL(); f_4e3fb2(); if (g_unwind) return; /* Core!??3UObject@@SAXPAXI@Z */ RELOAD();
/* 765158: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_76515b: /* 76515b: mov eax, esi */
  eax = esi;
/* 76515d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76515e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76515f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_765190(void) {
  LOAD_REGS();
L_765190: /* 765190: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 765194: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 765196: je 0x76519d */
  if (zf) goto L_76519d;
L_765198: /* 765198: jmp 0x6ca93e */
  SPILL(); f_6ca93e(); return;
L_76519d: /* 76519d: ret  */
  esp += 4; SPILL(); return;
}

void f_7651b0(void) {
  LOAD_REGS();
L_7651b0: /* 7651b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7651b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7651b5: mov esi, ecx */
  esi = ecx;
/* 7651b7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7651b9: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 7651bb: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7651be: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 7651c1: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 7651c4: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7651c7: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 7651ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7651cb: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 7651ce: call 0x6c9890 */
  esp -= 4; W32(esp, 0x7651d3u); SPILL(); f_6c9890(); if (g_unwind) return; RELOAD();
/* 7651d3: mov eax, esi */
  eax = esi;
/* 7651d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7651d6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7651f0(void) {
  LOAD_REGS();
L_7651f0: /* 7651f0: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7651f3: jmp 0x6c900c */
  SPILL(); f_6c900c(); return;
}

void f_765210(void) {
  LOAD_REGS();
L_765210: /* 765210: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 765214: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 765215: mov esi, ecx */
  esi = ecx;
/* 765217: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 765219: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 76521b: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 76521e: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 765221: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 765224: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 765227: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 76522a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76522b: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 76522e: call 0x6c5e2f */
  esp -= 4; W32(esp, 0x765233u); SPILL(); f_6c5e2f(); if (g_unwind) return; RELOAD();
/* 765233: mov eax, esi */
  eax = esi;
/* 765235: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 765236: ret 4 */
  esp += 8; SPILL(); return;
}

void f_765250(void) {
  LOAD_REGS();
L_765250: /* 765250: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 765252: push 0x9cad01 */
  { uint32_t v = 0x9cad01u; esp -= 4; W32(esp, v); }
/* 765257: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76525d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76525e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 765265: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 765266: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 765267: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 765268: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 76526c: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 76526e: mov esi, ecx */
  esi = ecx;
/* 765270: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 765272: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 765275: lea edx, [edi + 8] */
  edx = (uint32_t)(edi + 0x8u);
/* 765278: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 76527b: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 76527e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 76527f: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 765283: call 0x6c2e14 */
  esp -= 4; W32(esp, 0x765288u); SPILL(); f_6c2e14(); if (g_unwind) return; RELOAD();
/* 765288: lea eax, [edi + 0x1c] */
  eax = (uint32_t)(edi + 0x1cu);
/* 76528b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76528c: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 76528f: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 765297: call 0x6ccc57 */
  esp -= 4; W32(esp, 0x76529cu); SPILL(); f_6ccc57(); if (g_unwind) return; RELOAD();
/* 76529c: lea ecx, [edi + 0x28] */
  ecx = (uint32_t)(edi + 0x28u);
/* 76529f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7652a0: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 7652a3: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 7652a8: call 0x6c1a00 */
  esp -= 4; W32(esp, 0x7652adu); SPILL(); f_6c1a00(); if (g_unwind) return; RELOAD();
/* 7652ad: mov edx, dword ptr [edi + 0x34] */
  edx = R32((uint32_t)(edi + 0x34u));
/* 7652b0: mov dword ptr [esi + 0x34], edx */
  W32((uint32_t)(esi + 0x34u), edx);
/* 7652b3: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 7652b6: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 7652b9: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 7652bc: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 7652bf: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 7652c2: mov dword ptr [esi + 0x40], edx */
  W32((uint32_t)(esi + 0x40u), edx);
/* 7652c5: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* 7652c8: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 7652cb: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 7652ce: mov dword ptr [esi + 0x48], ecx */
  W32((uint32_t)(esi + 0x48u), ecx);
/* 7652d1: mov edx, dword ptr [edi + 0x4c] */
  edx = R32((uint32_t)(edi + 0x4cu));
/* 7652d4: mov dword ptr [esi + 0x4c], edx */
  W32((uint32_t)(esi + 0x4cu), edx);
/* 7652d7: mov al, byte ptr [edi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x50u))) & 0xffu);
/* 7652da: add edi, 0x54 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7652dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7652de: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* 7652e1: mov byte ptr [esp + 0x18], 2 */
  W8((uint32_t)(esp + 0x18u), 0x2u);
/* 7652e6: mov byte ptr [esi + 0x50], al */
  W8((uint32_t)(esi + 0x50u), (eax & 0xffu));
/* 7652e9: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x7652efu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 7652ef: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 7652f3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7652f4: mov eax, esi */
  eax = esi;
/* 7652f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7652f7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7652fe: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 765301: ret 4 */
  esp += 8; SPILL(); return;
}

void f_765340(void) {
  LOAD_REGS();
L_765340: /* 765340: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 765341: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 765342: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 765343: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 765344: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 765348: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 76534a: mov esi, ecx */
  esi = ecx;
/* 76534c: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 76534e: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 765351: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 765354: lea ebp, [edi + 8] */
  ebp = (uint32_t)(edi + 0x8u);
/* 765357: lea ebx, [esi + 8] */
  ebx = (uint32_t)(esi + 0x8u);
/* 76535a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76535b: mov ecx, ebx */
  ecx = ebx;
/* 76535d: call 0x6c28d3 */
  esp -= 4; W32(esp, 0x765362u); SPILL(); f_6c28d3(); if (g_unwind) return; RELOAD();
/* 765362: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 765365: mov ecx, ebx */
  ecx = ebx;
/* 765367: mov dword ptr [ebx + 0x10], edx */
  W32((uint32_t)(ebx + 0x10u), edx);
/* 76536a: call 0x6c5fce */
  esp -= 4; W32(esp, 0x76536fu); SPILL(); f_6c5fce(); if (g_unwind) return; RELOAD();
/* 76536f: lea eax, [edi + 0x1c] */
  eax = (uint32_t)(edi + 0x1cu);
/* 765372: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 765373: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 765376: call 0x6ccf54 */
  esp -= 4; W32(esp, 0x76537bu); SPILL(); f_6ccf54(); if (g_unwind) return; RELOAD();
/* 76537b: lea ecx, [edi + 0x28] */
  ecx = (uint32_t)(edi + 0x28u);
/* 76537e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76537f: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 765382: call 0x6c5eac */
  esp -= 4; W32(esp, 0x765387u); SPILL(); f_6c5eac(); if (g_unwind) return; RELOAD();
/* 765387: mov edx, dword ptr [edi + 0x34] */
  edx = R32((uint32_t)(edi + 0x34u));
/* 76538a: mov dword ptr [esi + 0x34], edx */
  W32((uint32_t)(esi + 0x34u), edx);
/* 76538d: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 765390: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 765393: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* 765396: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* 765399: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 76539c: mov dword ptr [esi + 0x40], edx */
  W32((uint32_t)(esi + 0x40u), edx);
/* 76539f: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* 7653a2: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 7653a5: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 7653a8: mov dword ptr [esi + 0x48], ecx */
  W32((uint32_t)(esi + 0x48u), ecx);
/* 7653ab: mov edx, dword ptr [edi + 0x4c] */
  edx = R32((uint32_t)(edi + 0x4cu));
/* 7653ae: mov dword ptr [esi + 0x4c], edx */
  W32((uint32_t)(esi + 0x4cu), edx);
/* 7653b1: mov al, byte ptr [edi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x50u))) & 0xffu);
/* 7653b4: add edi, 0x54 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7653b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7653b8: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* 7653bb: mov byte ptr [esi + 0x50], al */
  W8((uint32_t)(esi + 0x50u), (eax & 0xffu));
/* 7653be: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7653c4u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7653c4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7653c5: mov eax, esi */
  eax = esi;
/* 7653c7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7653c8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7653c9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7653ca: ret 4 */
  esp += 8; SPILL(); return;
}

void f_765400(void) {
  LOAD_REGS();
L_765400: /* 765400: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 765404: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 765405: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 765407: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 765408: mov esi, ecx */
  esi = ecx;
/* 76540a: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x765410u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 765410: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 765414: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 765417: mov eax, esi */
  eax = esi;
/* 765419: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76541a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_765430(void) {
  LOAD_REGS();
L_765430: /* 765430: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 765434: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 765435: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 765436: mov esi, ecx */
  esi = ecx;
/* 765438: call 0x6c3a49 */
  esp -= 4; W32(esp, 0x76543du); SPILL(); f_6c3a49(); if (g_unwind) return; RELOAD();
/* 76543d: mov eax, esi */
  eax = esi;
/* 76543f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 765440: ret 4 */
  esp += 8; SPILL(); return;
}

void f_765460(void) {
  LOAD_REGS();
L_765460: /* 765460: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 765462: push 0x9cad29 */
  { uint32_t v = 0x9cad29u; esp -= 4; W32(esp, v); }
/* 765467: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76546d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76546e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 765475: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 765476: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 765477: mov esi, ecx */
  esi = ecx;
/* 765479: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 76547d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 765480: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 765481: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 765483: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 76548b: call 0x6c4561 */
  esp -= 4; W32(esp, 0x765490u); SPILL(); f_6c4561(); if (g_unwind) return; RELOAD();
/* 765490: mov ecx, esi */
  ecx = esi;
/* 765492: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 76549a: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x7654a0u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 7654a0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7654a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7654a5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7654ac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7654af: ret  */
  esp += 4; SPILL(); return;
}

void f_7654d0(void) {
  LOAD_REGS();
L_7654d0: /* 7654d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7654d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7654d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7654d3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 7654d7: mov esi, ecx */
  esi = ecx;
/* 7654d9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7654db: je 0x76551d */
  if (zf) goto L_76551d;
L_7654dd: /* 7654dd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7654e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7654e1: call 0x6cb5a5 */
  esp -= 4; W32(esp, 0x7654e6u); SPILL(); f_6cb5a5(); if (g_unwind) return; RELOAD();
/* 7654e6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7654e9: xor ebx, ebx */
  ebx = 0;
/* 7654eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7654ed: jle 0x76551d */
  if ((zf || sf != of)) goto L_76551d;
L_7654ef: /* 7654ef: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7654f0: xor ebp, ebp */
  ebp = 0;
L_7654f2: /* 7654f2: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 7654f4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7654f6: mov ecx, esi */
  ecx = esi;
/* 7654f8: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7654feu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7654fe: imul eax, eax, 0x5c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x5cu);
  eax = (uint32_t)r;
  }
/* 765501: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 765503: je 0x765511 */
  if (zf) goto L_765511;
L_765505: /* 765505: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 765507: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 765509: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76550a: mov ecx, eax */
  ecx = eax;
/* 76550c: call 0x6c7752 */
  esp -= 4; W32(esp, 0x765511u); SPILL(); f_6c7752(); if (g_unwind) return; RELOAD();
L_765511: /* 765511: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 765514: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 765515: add ebp, 0x5c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 765518: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76551a: jl 0x7654f2 */
  if ((sf != of)) goto L_7654f2;
L_76551c: /* 76551c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_76551d: /* 76551d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76551e: mov eax, esi */
  eax = esi;
/* 765520: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 765521: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 765522: ret 4 */
  esp += 8; SPILL(); return;
}

void f_765550(void) {
  LOAD_REGS();
L_765550: /* 765550: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 765552: push 0x9cad49 */
  { uint32_t v = 0x9cad49u; esp -= 4; W32(esp, v); }
/* 765557: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76555d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76555e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 765565: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 765566: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 765567: mov esi, ecx */
  esi = ecx;
/* 765569: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 76556d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 765570: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 765571: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 765573: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 76557b: call 0x6ca5f1 */
  esp -= 4; W32(esp, 0x765580u); SPILL(); f_6ca5f1(); if (g_unwind) return; RELOAD();
/* 765580: mov ecx, esi */
  ecx = esi;
/* 765582: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 76558a: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x765590u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 765590: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 765594: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 765595: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 76559c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 76559f: ret  */
  esp += 4; SPILL(); return;
}

void f_7655c0(void) {
  LOAD_REGS();
L_7655c0: /* 7655c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7655c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7655c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7655c3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 7655c7: mov esi, ecx */
  esi = ecx;
/* 7655c9: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7655cb: je 0x765616 */
  if (zf) goto L_765616;
L_7655cd: /* 7655cd: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7655d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7655d1: call 0x6ccafe */
  esp -= 4; W32(esp, 0x7655d6u); SPILL(); f_6ccafe(); if (g_unwind) return; RELOAD();
/* 7655d6: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7655d9: xor ebx, ebx */
  ebx = 0;
/* 7655db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7655dd: jle 0x765616 */
  if ((zf || sf != of)) goto L_765616;
L_7655df: /* 7655df: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7655e0: xor ebp, ebp */
  ebp = 0;
L_7655e2: /* 7655e2: push 0x11c */
  { uint32_t v = 0x11cu; esp -= 4; W32(esp, v); }
/* 7655e7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7655e9: mov ecx, esi */
  ecx = esi;
/* 7655eb: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7655f1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7655f1: imul eax, eax, 0x11c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x11cu);
  eax = (uint32_t)r;
  }
/* 7655f7: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 7655f9: je 0x765607 */
  if (zf) goto L_765607;
L_7655fb: /* 7655fb: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7655fd: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7655ff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 765600: mov ecx, eax */
  ecx = eax;
/* 765602: call 0x6c40ed */
  esp -= 4; W32(esp, 0x765607u); SPILL(); f_6c40ed(); if (g_unwind) return; RELOAD();
L_765607: /* 765607: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 76560a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 76560b: add ebp, 0x11c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x11cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 765611: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 765613: jl 0x7655e2 */
  if ((sf != of)) goto L_7655e2;
L_765615: /* 765615: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_765616: /* 765616: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 765617: mov eax, esi */
  eax = esi;
/* 765619: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76561a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76561b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_765640(void) {
  LOAD_REGS();
L_765640: /* 765640: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 765642: push 0x9cad69 */
  { uint32_t v = 0x9cad69u; esp -= 4; W32(esp, v); }
/* 765647: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 76564d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76564e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 765655: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 765656: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 765657: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 765658: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 765659: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 76565d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 765660: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 765662: mov esi, ecx */
  esi = ecx;
/* 765664: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 765665: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 765669: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x76566fu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 76566f: xor ebx, ebx */
  ebx = 0;
/* 765671: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 765674: cmp dword ptr [edi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 765677: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 76567b: jle 0x7656ae */
  if ((zf || sf != of)) goto L_7656ae;
L_76567d: /* 76567d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 76567e: xor ebp, ebp */
  ebp = 0;
L_765680: /* 765680: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 765682: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 765684: mov ecx, esi */
  ecx = esi;
/* 765686: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x76568cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 76568c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 76568e: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 765691: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 765694: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 765696: je 0x7656a2 */
  if (zf) goto L_7656a2;
L_765698: /* 765698: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 76569a: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 76569c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76569d: call 0x6c7090 */
  esp -= 4; W32(esp, 0x7656a2u); SPILL(); f_6c7090(); if (g_unwind) return; RELOAD();
L_7656a2: /* 7656a2: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 7656a5: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7656a6: add ebp, 0xc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 7656a9: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7656ab: jl 0x765680 */
  if ((sf != of)) goto L_765680;
L_7656ad: /* 7656ad: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_7656ae: /* 7656ae: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7656b2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7656b3: mov eax, esi */
  eax = esi;
/* 7656b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7656b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7656b7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7656be: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7656c1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_765700(void) {
  LOAD_REGS();
L_765700: /* 765700: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 765701: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 765705: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 765707: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 765708: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 765709: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 76570f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 765710: mov ebp, ecx */
  ebp = ecx;
/* 765712: jge 0x765728 */
  if ((sf == of)) goto L_765728;
L_765714: /* 765714: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 765719: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 76571e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 765723: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x765725u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 765725: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_765728: /* 765728: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76572b: jle 0x765741 */
  if ((zf || sf != of)) goto L_765741;
L_76572d: /* 76572d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 765732: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 765737: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 76573c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x76573eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76573e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_765741: /* 765741: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 765745: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 765748: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76574b: jle 0x765761 */
  if ((zf || sf != of)) goto L_765761;
L_76574d: /* 76574d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 765752: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 765757: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 76575c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x76575eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76575e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_765761: /* 765761: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 765763: jge 0x765783 */
  if ((sf == of)) goto L_765783;
L_765765: /* 765765: mov esi, ebx */
  esi = ebx;
/* 765767: imul esi, esi, 0xa4 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0xa4u);
  esi = (uint32_t)r;
  }
/* 76576d: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 76576f: nop  */
L_765770: /* 765770: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 765773: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 765775: call 0x6c28ab */
  esp -= 4; W32(esp, 0x76577au); SPILL(); f_6c28ab(); if (g_unwind) return; RELOAD();
/* 76577a: add esi, 0xa4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xa4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 765780: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 765781: jne 0x765770 */
  if (!zf) goto L_765770;
L_765783: /* 765783: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 765787: push 0xa4 */
  { uint32_t v = 0xa4u; esp -= 4; W32(esp, v); }
/* 76578c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 76578d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 76578e: mov ecx, ebp */
  ecx = ebp;
/* 765790: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x765796u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 765796: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 765797: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 765798: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 765799: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 76579a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7657d0(void) {
  LOAD_REGS();
L_7657d0: /* 7657d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7657d1: mov esi, ecx */
  esi = ecx;
/* 7657d3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7657d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7657d7: xor edi, edi */
  edi = 0;
/* 7657d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7657db: jle 0x7657f8 */
  if ((zf || sf != of)) goto L_7657f8;
L_7657dd: /* 7657dd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7657de: xor ebx, ebx */
  ebx = 0;
L_7657e0: /* 7657e0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7657e2: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7657e4: call 0x6c28ab */
  esp -= 4; W32(esp, 0x7657e9u); SPILL(); f_6c28ab(); if (g_unwind) return; RELOAD();
/* 7657e9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7657ec: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7657ed: add ebx, 0xa4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xa4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7657f3: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7657f5: jl 0x7657e0 */
  if ((sf != of)) goto L_7657e0;
L_7657f7: /* 7657f7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_7657f8: /* 7657f8: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7657fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7657fd: push 0xa4 */
  { uint32_t v = 0xa4u; esp -= 4; W32(esp, v); }
/* 765802: mov ecx, esi */
  ecx = esi;
/* 765804: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x76580au); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 76580a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 76580b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 76580c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_765820(void) {
  LOAD_REGS();
L_765820: /* 765820: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 765821: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 765825: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 765827: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 765828: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 765829: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 76582f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 765830: mov ebp, ecx */
  ebp = ecx;
/* 765832: jge 0x765848 */
  if ((sf == of)) goto L_765848;
L_765834: /* 765834: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 765839: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 76583e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 765843: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x765845u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 765845: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_765848: /* 765848: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76584b: jle 0x765861 */
  if ((zf || sf != of)) goto L_765861;
L_76584d: /* 76584d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 765852: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 765857: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 76585c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x76585eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76585e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_765861: /* 765861: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 765865: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 765868: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 76586b: jle 0x765881 */
  if ((zf || sf != of)) goto L_765881;
L_76586d: /* 76586d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 765872: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 765877: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 76587c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x76587eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 76587e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_765881: /* 765881: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 765883: jge 0x7658a0 */
  if ((sf == of)) goto L_7658a0;
L_765885: /* 765885: mov esi, ebx */
  esi = ebx;
/* 765887: imul esi, esi, 0x64 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x64u);
  esi = (uint32_t)r;
  }
/* 76588a: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 76588c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_765890: /* 765890: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 765893: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 765895: call 0x6c68a7 */
  esp -= 4; W32(esp, 0x76589au); SPILL(); f_6c68a7(); if (g_unwind) return; RELOAD();
/* 76589a: add esi, 0x64 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 76589d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 76589e: jne 0x765890 */
  if (!zf) goto L_765890;
L_7658a0: /* 7658a0: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 7658a4: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 7658a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7658a7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7658a8: mov ecx, ebp */
  ecx = ebp;
/* 7658aa: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x7658b0u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 7658b0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7658b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7658b2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7658b3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7658b4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7658f0(void) {
  LOAD_REGS();
L_7658f0: /* 7658f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7658f1: mov esi, ecx */
  esi = ecx;
/* 7658f3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7658f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7658f7: xor edi, edi */
  edi = 0;
/* 7658f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7658fb: jle 0x765915 */
  if ((zf || sf != of)) goto L_765915;
L_7658fd: /* 7658fd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7658fe: xor ebx, ebx */
  ebx = 0;
L_765900: /* 765900: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 765902: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 765904: call 0x6c68a7 */
  esp -= 4; W32(esp, 0x765909u); SPILL(); f_6c68a7(); if (g_unwind) return; RELOAD();
/* 765909: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 76590c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 76590d: add ebx, 0x64 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 765910: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 765912: jl 0x765900 */
  if ((sf != of)) goto L_765900;
L_765914: /* 765914: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_765915: /* 765915: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 765919: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 76591a: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 76591c: mov ecx, esi */
  ecx = esi;
/* 76591e: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x765924u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 765924: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 765925: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 765926: ret 4 */
  esp += 8; SPILL(); return;
}
