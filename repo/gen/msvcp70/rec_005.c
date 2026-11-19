#include "recomp.h"
#include "rec_mod.h"

void f_473e13(void) {
  LOAD_REGS();
L_473e13: /* 473e13: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 473e16: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 473e18: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 473e1b: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 473e1d: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 473e20: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 473e22: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 473e25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473e26: call 0x464bb2 */
  esp -= 4; W32(esp, 0x473e2bu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 473e2b: mov eax, 0x473e31 */
  eax = 0x473e31u;
/* 473e30: ret  */
  esp += 4; SPILL(); return;
}

void f_473e31(void) {
  LOAD_REGS();
L_473e31: /* 473e31: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 473e34: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 473e36: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 473e39: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 473e3d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 473e3f: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 473e42: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 473e44: call 0x461453 */
  esp -= 4; W32(esp, 0x473e49u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x473e31u: guest_unwind_done(); RELOAD(); goto L_473e31; } return; } RELOAD();
/* 473e49: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 473e4d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 473e50: call 0x46228e */
  esp -= 4; W32(esp, 0x473e55u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x473e31u: guest_unwind_done(); RELOAD(); goto L_473e31; } return; } RELOAD();
/* 473e55: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 473e58: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 473e59: mov eax, esi */
  eax = esi;
/* 473e5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 473e5c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 473e63: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 473e64: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 473e65: ret 4 */
  esp += 8; SPILL(); return;
}

void f_473e68(void) {
  LOAD_REGS();
L_473e68: /* 473e68: mov eax, 0x48c84a */
  eax = 0x48c84au;
/* 473e6d: call 0x4616c0 */
  esp -= 4; W32(esp, 0x473e72u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 473e72: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 473e75: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 473e76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 473e77: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 473e78: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 473e7b: mov esi, ecx */
  esi = ecx;
/* 473e7d: xor ebx, ebx */
  ebx = 0;
/* 473e7f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 473e80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 473e81: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 473e84: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 473e87: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 473e8a: call 0x466d1b */
  esp -= 4; W32(esp, 0x473e8fu); SPILL(); f_466d1b(); if (g_unwind) return; RELOAD();
/* 473e8f: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 473e92: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 473e95: je 0x473f46 */
  if (zf) goto L_473f46;
L_473e9b: /* 473e9b: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 473e9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473e9f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 473ea1: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 473ea4: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 473ea7: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 473ea9: call 0x464a5a */
  esp -= 4; W32(esp, 0x473eaeu); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 473eae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473eaf: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 473eb3: call 0x46e41b */
  esp -= 4; W32(esp, 0x473eb8u); SPILL(); f_46e41b(); if (g_unwind) return; RELOAD();
/* 473eb8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 473eb9: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 473ebc: mov edi, eax */
  edi = eax;
/* 473ebe: call 0x461389 */
  esp -= 4; W32(esp, 0x473ec3u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 473ec3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 473ec5: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 473ec8: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 473eca: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 473ecd: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 473ecf: lea ebx, [ebp - 0x1c] */
  ebx = (uint32_t)(ebp + 0xffffffe4u);
/* 473ed2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 473ed3: lea ebx, [ebp - 0x14] */
  ebx = (uint32_t)(ebp + 0xffffffecu);
/* 473ed6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 473ed7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473ed8: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 473edb: mov byte ptr [ebp - 0x2c], 1 */
  W8((uint32_t)(ebp + 0xffffffd4u), 0x1u);
/* 473edf: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 473ee2: xor eax, eax */
  eax = 0;
/* 473ee4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473ee5: mov byte ptr [ebp - 0x34], dl */
  W8((uint32_t)(ebp + 0xffffffccu), (edx & 0xffu));
/* 473ee8: push dword ptr [ebp - 0x34] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffccu)); esp -= 4; W32(esp, v); }
/* 473eeb: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 473eed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 473eee: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 473ef1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473ef2: mov ecx, edi */
  ecx = edi;
/* 473ef4: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 473ef8: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0x473efbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 473efb: jmp 0x473f1e */
  goto L_473f1e;
L_473f1e: /* 473f1e: xor ebx, ebx */
  ebx = 0;
/* 473f20: test byte ptr [ebp - 0x14], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffecu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 473f24: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 473f27: jne 0x473f42 */
  if (!zf) goto L_473f42;
L_473f29: /* 473f29: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 473f2c: cmp eax, 0xffff8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffff8000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 473f31: jl 0x473f42 */
  if ((sf != of)) goto L_473f42;
L_473f33: /* 473f33: cmp eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 473f38: jg 0x473f42 */
  if ((!zf && sf == of)) goto L_473f42;
L_473f3a: /* 473f3a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 473f3d: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
/* 473f40: jmp 0x473f46 */
  goto L_473f46;
L_473f42: /* 473f42: or dword ptr [ebp - 0x14], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
L_473f46: /* 473f46: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 473f48: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 473f4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 473f4c: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 473f4f: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 473f51: call 0x461453 */
  esp -= 4; W32(esp, 0x473f56u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 473f56: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 473f5a: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 473f5d: call 0x46228e */
  esp -= 4; W32(esp, 0x473f62u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 473f62: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 473f65: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 473f66: mov eax, esi */
  eax = esi;
/* 473f68: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 473f69: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 473f70: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 473f71: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 473f72: ret 4 */
  esp += 8; SPILL(); return;
}

void f_473efd(void) {
  LOAD_REGS();
L_473efd: /* 473efd: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 473f00: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 473f02: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 473f05: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 473f07: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 473f0a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 473f0c: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 473f0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473f10: call 0x464bb2 */
  esp -= 4; W32(esp, 0x473f15u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 473f15: mov eax, 0x473f1b */
  eax = 0x473f1bu;
/* 473f1a: ret  */
  esp += 4; SPILL(); return;
}

void f_473f1b(void) {
  LOAD_REGS();
L_473f1b: /* 473f1b: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 473f1e: xor ebx, ebx */
  ebx = 0;
/* 473f20: test byte ptr [ebp - 0x14], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffecu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 473f24: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 473f27: jne 0x473f42 */
  if (!zf) goto L_473f42;
L_473f29: /* 473f29: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 473f2c: cmp eax, 0xffff8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffff8000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 473f31: jl 0x473f42 */
  if ((sf != of)) goto L_473f42;
L_473f33: /* 473f33: cmp eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 473f38: jg 0x473f42 */
  if ((!zf && sf == of)) goto L_473f42;
L_473f3a: /* 473f3a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 473f3d: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
/* 473f40: jmp 0x473f46 */
  goto L_473f46;
L_473f42: /* 473f42: or dword ptr [ebp - 0x14], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
L_473f46: /* 473f46: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 473f48: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 473f4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 473f4c: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 473f4f: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 473f51: call 0x461453 */
  esp -= 4; W32(esp, 0x473f56u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x473f1bu: guest_unwind_done(); RELOAD(); goto L_473f1b; } return; } RELOAD();
/* 473f56: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 473f5a: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 473f5d: call 0x46228e */
  esp -= 4; W32(esp, 0x473f62u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x473f1bu: guest_unwind_done(); RELOAD(); goto L_473f1b; } return; } RELOAD();
/* 473f62: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 473f65: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 473f66: mov eax, esi */
  eax = esi;
/* 473f68: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 473f69: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 473f70: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 473f71: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 473f72: ret 4 */
  esp += 8; SPILL(); return;
}

void f_473f75(void) {
  LOAD_REGS();
L_473f75: /* 473f75: mov eax, 0x48c864 */
  eax = 0x48c864u;
/* 473f7a: call 0x4616c0 */
  esp -= 4; W32(esp, 0x473f7fu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 473f7f: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 473f82: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 473f83: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 473f84: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 473f85: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 473f88: mov esi, ecx */
  esi = ecx;
/* 473f8a: xor ebx, ebx */
  ebx = 0;
/* 473f8c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 473f8d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 473f8e: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 473f91: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 473f94: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 473f97: call 0x466d1b */
  esp -= 4; W32(esp, 0x473f9cu); SPILL(); f_466d1b(); if (g_unwind) return; RELOAD();
/* 473f9c: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 473f9f: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 473fa2: je 0x474023 */
  if (zf) goto L_474023;
L_473fa4: /* 473fa4: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 473fa7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473fa8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 473faa: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 473fad: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 473faf: call 0x464a5a */
  esp -= 4; W32(esp, 0x473fb4u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 473fb4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473fb5: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 473fb9: call 0x46e41b */
  esp -= 4; W32(esp, 0x473fbeu); SPILL(); f_46e41b(); if (g_unwind) return; RELOAD();
/* 473fbe: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 473fbf: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 473fc2: mov edi, eax */
  edi = eax;
/* 473fc4: call 0x461389 */
  esp -= 4; W32(esp, 0x473fc9u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 473fc9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 473fcb: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 473fce: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 473fd1: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 473fd3: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 473fd6: xor edx, edx */
  edx = 0;
/* 473fd8: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 473fda: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 473fdd: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 473fe0: lea ebx, [ebp - 0x18] */
  ebx = (uint32_t)(ebp + 0xffffffe8u);
/* 473fe3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 473fe4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473fe5: mov byte ptr [ebp - 0x1c], 1 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 473fe9: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 473fec: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 473fef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 473ff0: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 473ff3: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 473ff7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 473ff8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 473ff9: mov ecx, edi */
  ecx = edi;
/* 473ffb: call 0x4689a8 */
  esp -= 4; W32(esp, 0x474000u); SPILL(); f_4689a8(); if (g_unwind) return; RELOAD();
/* 474000: jmp 0x474023 */
  goto L_474023;
L_474023: /* 474023: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474025: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 474028: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47402c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47402e: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 474031: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 474033: call 0x461453 */
  esp -= 4; W32(esp, 0x474038u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 474038: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47403c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 47403f: call 0x46228e */
  esp -= 4; W32(esp, 0x474044u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 474044: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 474047: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 474048: mov eax, esi */
  eax = esi;
/* 47404a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47404b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 474052: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 474053: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 474054: ret 4 */
  esp += 8; SPILL(); return;
}

void f_474002(void) {
  LOAD_REGS();
L_474002: /* 474002: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 474005: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 474007: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 47400a: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47400c: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 47400f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 474011: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 474014: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 474015: call 0x464bb2 */
  esp -= 4; W32(esp, 0x47401au); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 47401a: mov eax, 0x474020 */
  eax = 0x474020u;
/* 47401f: ret  */
  esp += 4; SPILL(); return;
}

void f_474020(void) {
  LOAD_REGS();
L_474020: /* 474020: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 474023: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474025: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 474028: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47402c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47402e: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 474031: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 474033: call 0x461453 */
  esp -= 4; W32(esp, 0x474038u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x474020u: guest_unwind_done(); RELOAD(); goto L_474020; } return; } RELOAD();
/* 474038: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47403c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 47403f: call 0x46228e */
  esp -= 4; W32(esp, 0x474044u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x474020u: guest_unwind_done(); RELOAD(); goto L_474020; } return; } RELOAD();
/* 474044: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 474047: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 474048: mov eax, esi */
  eax = esi;
/* 47404a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47404b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 474052: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 474053: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 474054: ret 4 */
  esp += 8; SPILL(); return;
}

void f_474057(void) {
  LOAD_REGS();
L_474057: /* 474057: mov eax, 0x48c87e */
  eax = 0x48c87eu;
/* 47405c: call 0x4616c0 */
  esp -= 4; W32(esp, 0x474061u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 474061: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 474064: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 474065: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 474066: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 474067: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 47406a: mov esi, ecx */
  esi = ecx;
/* 47406c: xor ebx, ebx */
  ebx = 0;
/* 47406e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47406f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 474070: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 474073: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 474076: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 474079: call 0x466d1b */
  esp -= 4; W32(esp, 0x47407eu); SPILL(); f_466d1b(); if (g_unwind) return; RELOAD();
/* 47407e: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 474081: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 474084: je 0x474134 */
  if (zf) goto L_474134;
L_47408a: /* 47408a: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 47408d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47408e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474090: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 474093: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 474096: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 474098: call 0x464a5a */
  esp -= 4; W32(esp, 0x47409du); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47409d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47409e: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4740a2: call 0x46e41b */
  esp -= 4; W32(esp, 0x4740a7u); SPILL(); f_46e41b(); if (g_unwind) return; RELOAD();
/* 4740a7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4740a8: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 4740ab: mov edi, eax */
  edi = eax;
/* 4740ad: call 0x461389 */
  esp -= 4; W32(esp, 0x4740b2u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 4740b2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4740b4: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4740b7: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4740b9: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 4740bc: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4740be: lea ebx, [ebp - 0x1c] */
  ebx = (uint32_t)(ebp + 0xffffffe4u);
/* 4740c1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4740c2: lea ebx, [ebp - 0x14] */
  ebx = (uint32_t)(ebp + 0xffffffecu);
/* 4740c5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4740c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4740c7: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 4740ca: mov byte ptr [ebp - 0x2c], 1 */
  W8((uint32_t)(ebp + 0xffffffd4u), 0x1u);
/* 4740ce: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 4740d1: xor eax, eax */
  eax = 0;
/* 4740d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4740d4: mov byte ptr [ebp - 0x34], dl */
  W8((uint32_t)(ebp + 0xffffffccu), (edx & 0xffu));
/* 4740d7: push dword ptr [ebp - 0x34] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffccu)); esp -= 4; W32(esp, v); }
/* 4740da: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 4740dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4740dd: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 4740e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4740e1: mov ecx, edi */
  ecx = edi;
/* 4740e3: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 4740e7: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0x4740eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4740ea: jmp 0x47410d */
  goto L_47410d;
L_47410d: /* 47410d: xor ebx, ebx */
  ebx = 0;
/* 47410f: test byte ptr [ebp - 0x14], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffecu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 474113: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 474116: jne 0x474130 */
  if (!zf) goto L_474130;
L_474118: /* 474118: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 47411b: cmp eax, 0x80000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 474120: jl 0x474130 */
  if ((sf != of)) goto L_474130;
L_474122: /* 474122: cmp eax, 0x7fffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 474127: jg 0x474130 */
  if ((!zf && sf == of)) goto L_474130;
L_474129: /* 474129: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 47412c: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 47412e: jmp 0x474134 */
  goto L_474134;
L_474130: /* 474130: or dword ptr [ebp - 0x14], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
L_474134: /* 474134: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474136: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 474139: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47413a: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 47413d: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47413f: call 0x461453 */
  esp -= 4; W32(esp, 0x474144u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 474144: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 474148: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 47414b: call 0x46228e */
  esp -= 4; W32(esp, 0x474150u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 474150: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 474153: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 474154: mov eax, esi */
  eax = esi;
/* 474156: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 474157: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47415e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47415f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 474160: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4740ec(void) {
  LOAD_REGS();
L_4740ec: /* 4740ec: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 4740ef: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4740f1: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4740f4: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4740f6: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4740f9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4740fb: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4740fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4740ff: call 0x464bb2 */
  esp -= 4; W32(esp, 0x474104u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 474104: mov eax, 0x47410a */
  eax = 0x47410au;
/* 474109: ret  */
  esp += 4; SPILL(); return;
}

void f_47410a(void) {
  LOAD_REGS();
L_47410a: /* 47410a: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 47410d: xor ebx, ebx */
  ebx = 0;
/* 47410f: test byte ptr [ebp - 0x14], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffecu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 474113: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 474116: jne 0x474130 */
  if (!zf) goto L_474130;
L_474118: /* 474118: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 47411b: cmp eax, 0x80000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 474120: jl 0x474130 */
  if ((sf != of)) goto L_474130;
L_474122: /* 474122: cmp eax, 0x7fffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 474127: jg 0x474130 */
  if ((!zf && sf == of)) goto L_474130;
L_474129: /* 474129: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 47412c: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 47412e: jmp 0x474134 */
  goto L_474134;
L_474130: /* 474130: or dword ptr [ebp - 0x14], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
L_474134: /* 474134: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474136: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 474139: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47413a: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 47413d: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47413f: call 0x461453 */
  esp -= 4; W32(esp, 0x474144u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47410au: guest_unwind_done(); RELOAD(); goto L_47410a; } return; } RELOAD();
/* 474144: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 474148: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 47414b: call 0x46228e */
  esp -= 4; W32(esp, 0x474150u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47410au: guest_unwind_done(); RELOAD(); goto L_47410a; } return; } RELOAD();
/* 474150: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 474153: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 474154: mov eax, esi */
  eax = esi;
/* 474156: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 474157: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47415e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47415f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 474160: ret 4 */
  esp += 8; SPILL(); return;
}

void f_474163(void) {
  LOAD_REGS();
L_474163: /* 474163: mov eax, 0x48c898 */
  eax = 0x48c898u;
/* 474168: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47416du); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47416d: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 474170: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 474171: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 474172: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 474173: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 474176: mov esi, ecx */
  esi = ecx;
/* 474178: xor ebx, ebx */
  ebx = 0;
/* 47417a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47417b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47417c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 47417f: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 474182: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 474185: call 0x466d1b */
  esp -= 4; W32(esp, 0x47418au); SPILL(); f_466d1b(); if (g_unwind) return; RELOAD();
/* 47418a: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47418d: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 474190: je 0x474211 */
  if (zf) goto L_474211;
L_474192: /* 474192: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 474195: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 474196: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474198: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47419b: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47419d: call 0x464a5a */
  esp -= 4; W32(esp, 0x4741a2u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 4741a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4741a3: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4741a7: call 0x46e41b */
  esp -= 4; W32(esp, 0x4741acu); SPILL(); f_46e41b(); if (g_unwind) return; RELOAD();
/* 4741ac: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4741ad: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 4741b0: mov edi, eax */
  edi = eax;
/* 4741b2: call 0x461389 */
  esp -= 4; W32(esp, 0x4741b7u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 4741b7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4741b9: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4741bc: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4741bf: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4741c1: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 4741c4: xor edx, edx */
  edx = 0;
/* 4741c6: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4741c8: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 4741cb: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 4741ce: lea ebx, [ebp - 0x18] */
  ebx = (uint32_t)(ebp + 0xffffffe8u);
/* 4741d1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4741d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4741d3: mov byte ptr [ebp - 0x1c], 1 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 4741d7: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 4741da: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 4741dd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4741de: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 4741e1: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 4741e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4741e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4741e7: mov ecx, edi */
  ecx = edi;
/* 4741e9: call 0x4689cf */
  esp -= 4; W32(esp, 0x4741eeu); SPILL(); f_4689cf(); if (g_unwind) return; RELOAD();
/* 4741ee: jmp 0x474211 */
  goto L_474211;
L_474211: /* 474211: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474213: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 474216: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47421a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47421c: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 47421f: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 474221: call 0x461453 */
  esp -= 4; W32(esp, 0x474226u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 474226: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47422a: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 47422d: call 0x46228e */
  esp -= 4; W32(esp, 0x474232u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 474232: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 474235: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 474236: mov eax, esi */
  eax = esi;
/* 474238: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 474239: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 474240: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 474241: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 474242: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4741f0(void) {
  LOAD_REGS();
L_4741f0: /* 4741f0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 4741f3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4741f5: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4741f8: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4741fa: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4741fd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4741ff: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 474202: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 474203: call 0x464bb2 */
  esp -= 4; W32(esp, 0x474208u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 474208: mov eax, 0x47420e */
  eax = 0x47420eu;
/* 47420d: ret  */
  esp += 4; SPILL(); return;
}

void f_47420e(void) {
  LOAD_REGS();
L_47420e: /* 47420e: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 474211: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474213: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 474216: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47421a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47421c: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 47421f: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 474221: call 0x461453 */
  esp -= 4; W32(esp, 0x474226u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47420eu: guest_unwind_done(); RELOAD(); goto L_47420e; } return; } RELOAD();
/* 474226: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47422a: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 47422d: call 0x46228e */
  esp -= 4; W32(esp, 0x474232u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47420eu: guest_unwind_done(); RELOAD(); goto L_47420e; } return; } RELOAD();
/* 474232: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 474235: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 474236: mov eax, esi */
  eax = esi;
/* 474238: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 474239: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 474240: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 474241: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 474242: ret 4 */
  esp += 8; SPILL(); return;
}

void f_474245(void) {
  LOAD_REGS();
L_474245: /* 474245: mov eax, 0x48c8b2 */
  eax = 0x48c8b2u;
/* 47424a: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47424fu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47424f: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 474252: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 474253: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 474254: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 474255: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 474258: mov esi, ecx */
  esi = ecx;
/* 47425a: xor ebx, ebx */
  ebx = 0;
/* 47425c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47425d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47425e: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 474261: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 474264: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 474267: call 0x466d1b */
  esp -= 4; W32(esp, 0x47426cu); SPILL(); f_466d1b(); if (g_unwind) return; RELOAD();
/* 47426c: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47426f: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 474272: je 0x4742f3 */
  if (zf) goto L_4742f3;
L_474274: /* 474274: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 474277: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 474278: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47427a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47427d: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47427f: call 0x464a5a */
  esp -= 4; W32(esp, 0x474284u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 474284: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 474285: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 474289: call 0x46e41b */
  esp -= 4; W32(esp, 0x47428eu); SPILL(); f_46e41b(); if (g_unwind) return; RELOAD();
/* 47428e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47428f: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 474292: mov edi, eax */
  edi = eax;
/* 474294: call 0x461389 */
  esp -= 4; W32(esp, 0x474299u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 474299: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47429b: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47429e: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4742a1: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4742a3: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 4742a6: xor edx, edx */
  edx = 0;
/* 4742a8: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4742aa: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 4742ad: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 4742b0: lea ebx, [ebp - 0x18] */
  ebx = (uint32_t)(ebp + 0xffffffe8u);
/* 4742b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4742b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4742b5: mov byte ptr [ebp - 0x1c], 1 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 4742b9: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 4742bc: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 4742bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4742c0: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 4742c3: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 4742c7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4742c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4742c9: mov ecx, edi */
  ecx = edi;
/* 4742cb: call 0x4689f6 */
  esp -= 4; W32(esp, 0x4742d0u); SPILL(); f_4689f6(); if (g_unwind) return; RELOAD();
/* 4742d0: jmp 0x4742f3 */
  goto L_4742f3;
L_4742f3: /* 4742f3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4742f5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4742f8: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4742fc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4742fe: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 474301: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 474303: call 0x461453 */
  esp -= 4; W32(esp, 0x474308u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 474308: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47430c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 47430f: call 0x46228e */
  esp -= 4; W32(esp, 0x474314u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 474314: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 474317: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 474318: mov eax, esi */
  eax = esi;
/* 47431a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47431b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 474322: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 474323: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 474324: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4742d2(void) {
  LOAD_REGS();
L_4742d2: /* 4742d2: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 4742d5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4742d7: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4742da: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4742dc: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4742df: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4742e1: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4742e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4742e5: call 0x464bb2 */
  esp -= 4; W32(esp, 0x4742eau); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 4742ea: mov eax, 0x4742f0 */
  eax = 0x4742f0u;
/* 4742ef: ret  */
  esp += 4; SPILL(); return;
}

void f_4742f0(void) {
  LOAD_REGS();
L_4742f0: /* 4742f0: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 4742f3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4742f5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4742f8: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4742fc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4742fe: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 474301: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 474303: call 0x461453 */
  esp -= 4; W32(esp, 0x474308u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4742f0u: guest_unwind_done(); RELOAD(); goto L_4742f0; } return; } RELOAD();
/* 474308: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47430c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 47430f: call 0x46228e */
  esp -= 4; W32(esp, 0x474314u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4742f0u: guest_unwind_done(); RELOAD(); goto L_4742f0; } return; } RELOAD();
/* 474314: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 474317: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 474318: mov eax, esi */
  eax = esi;
/* 47431a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47431b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 474322: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 474323: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 474324: ret 4 */
  esp += 8; SPILL(); return;
}

void f_474327(void) {
  LOAD_REGS();
L_474327: /* 474327: mov eax, 0x48c8cc */
  eax = 0x48c8ccu;
/* 47432c: call 0x4616c0 */
  esp -= 4; W32(esp, 0x474331u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 474331: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 474334: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 474335: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 474336: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 474337: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 47433a: mov esi, ecx */
  esi = ecx;
/* 47433c: xor ebx, ebx */
  ebx = 0;
/* 47433e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47433f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 474340: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 474343: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 474346: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 474349: call 0x466d1b */
  esp -= 4; W32(esp, 0x47434eu); SPILL(); f_466d1b(); if (g_unwind) return; RELOAD();
/* 47434e: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 474351: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 474354: je 0x4743d5 */
  if (zf) goto L_4743d5;
L_474356: /* 474356: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 474359: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47435a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47435c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47435f: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 474361: call 0x464a5a */
  esp -= 4; W32(esp, 0x474366u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 474366: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 474367: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 47436b: call 0x46e41b */
  esp -= 4; W32(esp, 0x474370u); SPILL(); f_46e41b(); if (g_unwind) return; RELOAD();
/* 474370: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 474371: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 474374: mov edi, eax */
  edi = eax;
/* 474376: call 0x461389 */
  esp -= 4; W32(esp, 0x47437bu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47437b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47437d: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 474380: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 474383: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 474385: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 474388: xor edx, edx */
  edx = 0;
/* 47438a: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47438c: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 47438f: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 474392: lea ebx, [ebp - 0x18] */
  ebx = (uint32_t)(ebp + 0xffffffe8u);
/* 474395: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 474396: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 474397: mov byte ptr [ebp - 0x1c], 1 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 47439b: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 47439e: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 4743a1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4743a2: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 4743a5: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 4743a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4743aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4743ab: mov ecx, edi */
  ecx = edi;
/* 4743ad: call 0x468836 */
  esp -= 4; W32(esp, 0x4743b2u); SPILL(); f_468836(); if (g_unwind) return; RELOAD();
/* 4743b2: jmp 0x4743d5 */
  goto L_4743d5;
L_4743d5: /* 4743d5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4743d7: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4743da: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4743de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4743e0: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 4743e3: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4743e5: call 0x461453 */
  esp -= 4; W32(esp, 0x4743eau); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 4743ea: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4743ee: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4743f1: call 0x46228e */
  esp -= 4; W32(esp, 0x4743f6u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 4743f6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4743f9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4743fa: mov eax, esi */
  eax = esi;
/* 4743fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4743fd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 474404: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 474405: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 474406: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4743b4(void) {
  LOAD_REGS();
L_4743b4: /* 4743b4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 4743b7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4743b9: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4743bc: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4743be: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4743c1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4743c3: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4743c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4743c7: call 0x464bb2 */
  esp -= 4; W32(esp, 0x4743ccu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 4743cc: mov eax, 0x4743d2 */
  eax = 0x4743d2u;
/* 4743d1: ret  */
  esp += 4; SPILL(); return;
}

void f_4743d2(void) {
  LOAD_REGS();
L_4743d2: /* 4743d2: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 4743d5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4743d7: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4743da: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4743de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4743e0: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 4743e3: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4743e5: call 0x461453 */
  esp -= 4; W32(esp, 0x4743eau); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4743d2u: guest_unwind_done(); RELOAD(); goto L_4743d2; } return; } RELOAD();
/* 4743ea: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4743ee: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4743f1: call 0x46228e */
  esp -= 4; W32(esp, 0x4743f6u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4743d2u: guest_unwind_done(); RELOAD(); goto L_4743d2; } return; } RELOAD();
/* 4743f6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4743f9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4743fa: mov eax, esi */
  eax = esi;
/* 4743fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4743fd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 474404: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 474405: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 474406: ret 4 */
  esp += 8; SPILL(); return;
}

void f_474409(void) {
  LOAD_REGS();
L_474409: /* 474409: mov eax, 0x48c8e6 */
  eax = 0x48c8e6u;
/* 47440e: call 0x4616c0 */
  esp -= 4; W32(esp, 0x474413u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 474413: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 474416: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 474417: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 474418: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 474419: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 47441c: mov esi, ecx */
  esi = ecx;
/* 47441e: xor ebx, ebx */
  ebx = 0;
/* 474420: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 474421: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 474422: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 474425: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 474428: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 47442b: call 0x466d1b */
  esp -= 4; W32(esp, 0x474430u); SPILL(); f_466d1b(); if (g_unwind) return; RELOAD();
/* 474430: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 474433: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 474436: je 0x4744b7 */
  if (zf) goto L_4744b7;
L_474438: /* 474438: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 47443b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47443c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47443e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 474441: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 474443: call 0x464a5a */
  esp -= 4; W32(esp, 0x474448u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 474448: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 474449: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 47444d: call 0x46e41b */
  esp -= 4; W32(esp, 0x474452u); SPILL(); f_46e41b(); if (g_unwind) return; RELOAD();
/* 474452: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 474453: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 474456: mov edi, eax */
  edi = eax;
/* 474458: call 0x461389 */
  esp -= 4; W32(esp, 0x47445du); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47445d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47445f: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 474462: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 474465: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 474467: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 47446a: xor edx, edx */
  edx = 0;
/* 47446c: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47446e: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 474471: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 474474: lea ebx, [ebp - 0x18] */
  ebx = (uint32_t)(ebp + 0xffffffe8u);
/* 474477: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 474478: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 474479: mov byte ptr [ebp - 0x1c], 1 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 47447d: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 474480: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 474483: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 474484: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 474487: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 47448b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47448c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47448d: mov ecx, edi */
  ecx = edi;
/* 47448f: call 0x46885d */
  esp -= 4; W32(esp, 0x474494u); SPILL(); f_46885d(); if (g_unwind) return; RELOAD();
/* 474494: jmp 0x4744b7 */
  goto L_4744b7;
L_4744b7: /* 4744b7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4744b9: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4744bc: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4744c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4744c2: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 4744c5: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4744c7: call 0x461453 */
  esp -= 4; W32(esp, 0x4744ccu); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 4744cc: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4744d0: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4744d3: call 0x46228e */
  esp -= 4; W32(esp, 0x4744d8u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 4744d8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4744db: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4744dc: mov eax, esi */
  eax = esi;
/* 4744de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4744df: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4744e6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4744e7: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4744e8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_474496(void) {
  LOAD_REGS();
L_474496: /* 474496: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 474499: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 47449b: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 47449e: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4744a0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4744a3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4744a5: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4744a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4744a9: call 0x464bb2 */
  esp -= 4; W32(esp, 0x4744aeu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 4744ae: mov eax, 0x4744b4 */
  eax = 0x4744b4u;
/* 4744b3: ret  */
  esp += 4; SPILL(); return;
}

void f_4744b4(void) {
  LOAD_REGS();
L_4744b4: /* 4744b4: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 4744b7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4744b9: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4744bc: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4744c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4744c2: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 4744c5: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4744c7: call 0x461453 */
  esp -= 4; W32(esp, 0x4744ccu); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4744b4u: guest_unwind_done(); RELOAD(); goto L_4744b4; } return; } RELOAD();
/* 4744cc: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4744d0: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4744d3: call 0x46228e */
  esp -= 4; W32(esp, 0x4744d8u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4744b4u: guest_unwind_done(); RELOAD(); goto L_4744b4; } return; } RELOAD();
/* 4744d8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4744db: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4744dc: mov eax, esi */
  eax = esi;
/* 4744de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4744df: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4744e6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4744e7: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4744e8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4744eb(void) {
  LOAD_REGS();
L_4744eb: /* 4744eb: mov eax, 0x48c900 */
  eax = 0x48c900u;
/* 4744f0: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4744f5u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4744f5: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4744f8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4744f9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4744fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4744fb: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 4744fe: mov esi, ecx */
  esi = ecx;
/* 474500: xor ebx, ebx */
  ebx = 0;
/* 474502: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 474503: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 474504: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 474507: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 47450a: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 47450d: call 0x466d1b */
  esp -= 4; W32(esp, 0x474512u); SPILL(); f_466d1b(); if (g_unwind) return; RELOAD();
/* 474512: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 474515: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 474518: je 0x474599 */
  if (zf) goto L_474599;
L_47451a: /* 47451a: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 47451d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47451e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474520: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 474523: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 474525: call 0x464a5a */
  esp -= 4; W32(esp, 0x47452au); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47452a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47452b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 47452f: call 0x46e41b */
  esp -= 4; W32(esp, 0x474534u); SPILL(); f_46e41b(); if (g_unwind) return; RELOAD();
/* 474534: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 474535: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 474538: mov edi, eax */
  edi = eax;
/* 47453a: call 0x461389 */
  esp -= 4; W32(esp, 0x47453fu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47453f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474541: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 474544: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 474547: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 474549: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 47454c: xor edx, edx */
  edx = 0;
/* 47454e: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 474550: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 474553: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 474556: lea ebx, [ebp - 0x18] */
  ebx = (uint32_t)(ebp + 0xffffffe8u);
/* 474559: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47455a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47455b: mov byte ptr [ebp - 0x1c], 1 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 47455f: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 474562: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 474565: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 474566: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 474569: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 47456d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47456e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47456f: mov ecx, edi */
  ecx = edi;
/* 474571: call 0x4696e7 */
  esp -= 4; W32(esp, 0x474576u); SPILL(); f_4696e7(); if (g_unwind) return; RELOAD();
/* 474576: jmp 0x474599 */
  goto L_474599;
L_474599: /* 474599: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47459b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47459e: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4745a2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4745a4: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 4745a7: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4745a9: call 0x461453 */
  esp -= 4; W32(esp, 0x4745aeu); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 4745ae: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4745b2: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4745b5: call 0x46228e */
  esp -= 4; W32(esp, 0x4745bau); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 4745ba: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4745bd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4745be: mov eax, esi */
  eax = esi;
/* 4745c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4745c1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4745c8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4745c9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4745ca: ret 4 */
  esp += 8; SPILL(); return;
}

void f_474578(void) {
  LOAD_REGS();
L_474578: /* 474578: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 47457b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 47457d: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 474580: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 474582: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 474585: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 474587: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 47458a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47458b: call 0x464bb2 */
  esp -= 4; W32(esp, 0x474590u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 474590: mov eax, 0x474596 */
  eax = 0x474596u;
/* 474595: ret  */
  esp += 4; SPILL(); return;
}

void f_474596(void) {
  LOAD_REGS();
L_474596: /* 474596: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 474599: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47459b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47459e: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4745a2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4745a4: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 4745a7: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4745a9: call 0x461453 */
  esp -= 4; W32(esp, 0x4745aeu); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x474596u: guest_unwind_done(); RELOAD(); goto L_474596; } return; } RELOAD();
/* 4745ae: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4745b2: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4745b5: call 0x46228e */
  esp -= 4; W32(esp, 0x4745bau); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x474596u: guest_unwind_done(); RELOAD(); goto L_474596; } return; } RELOAD();
/* 4745ba: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4745bd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4745be: mov eax, esi */
  eax = esi;
/* 4745c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4745c1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4745c8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4745c9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4745ca: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4745cd(void) {
  LOAD_REGS();
L_4745cd: /* 4745cd: mov eax, 0x48c91a */
  eax = 0x48c91au;
/* 4745d2: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4745d7u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4745d7: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4745da: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4745db: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4745dc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4745dd: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 4745e0: mov esi, ecx */
  esi = ecx;
/* 4745e2: xor ebx, ebx */
  ebx = 0;
/* 4745e4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4745e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4745e6: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4745e9: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 4745ec: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 4745ef: call 0x466d1b */
  esp -= 4; W32(esp, 0x4745f4u); SPILL(); f_466d1b(); if (g_unwind) return; RELOAD();
/* 4745f4: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4745f7: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4745fa: je 0x47467b */
  if (zf) goto L_47467b;
L_4745fc: /* 4745fc: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 4745ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 474600: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474602: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 474605: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 474607: call 0x464a5a */
  esp -= 4; W32(esp, 0x47460cu); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47460c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47460d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 474611: call 0x46e41b */
  esp -= 4; W32(esp, 0x474616u); SPILL(); f_46e41b(); if (g_unwind) return; RELOAD();
/* 474616: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 474617: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 47461a: mov edi, eax */
  edi = eax;
/* 47461c: call 0x461389 */
  esp -= 4; W32(esp, 0x474621u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 474621: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474623: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 474626: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 474629: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 47462b: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 47462e: xor edx, edx */
  edx = 0;
/* 474630: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 474632: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 474635: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 474638: lea ebx, [ebp - 0x18] */
  ebx = (uint32_t)(ebp + 0xffffffe8u);
/* 47463b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47463c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47463d: mov byte ptr [ebp - 0x1c], 1 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 474641: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 474644: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 474647: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 474648: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 47464b: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 47464f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 474650: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 474651: mov ecx, edi */
  ecx = edi;
/* 474653: call 0x468884 */
  esp -= 4; W32(esp, 0x474658u); SPILL(); f_468884(); if (g_unwind) return; RELOAD();
/* 474658: jmp 0x47467b */
  goto L_47467b;
L_47467b: /* 47467b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47467d: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 474680: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 474684: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 474686: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 474689: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47468b: call 0x461453 */
  esp -= 4; W32(esp, 0x474690u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 474690: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 474694: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 474697: call 0x46228e */
  esp -= 4; W32(esp, 0x47469cu); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 47469c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47469f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4746a0: mov eax, esi */
  eax = esi;
/* 4746a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4746a3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4746aa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4746ab: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4746ac: ret 4 */
  esp += 8; SPILL(); return;
}

void f_47465a(void) {
  LOAD_REGS();
L_47465a: /* 47465a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 47465d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 47465f: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 474662: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 474664: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 474667: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 474669: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 47466c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47466d: call 0x464bb2 */
  esp -= 4; W32(esp, 0x474672u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 474672: mov eax, 0x474678 */
  eax = 0x474678u;
/* 474677: ret  */
  esp += 4; SPILL(); return;
}

void f_474678(void) {
  LOAD_REGS();
L_474678: /* 474678: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 47467b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47467d: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 474680: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 474684: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 474686: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 474689: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47468b: call 0x461453 */
  esp -= 4; W32(esp, 0x474690u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x474678u: guest_unwind_done(); RELOAD(); goto L_474678; } return; } RELOAD();
/* 474690: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 474694: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 474697: call 0x46228e */
  esp -= 4; W32(esp, 0x47469cu); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x474678u: guest_unwind_done(); RELOAD(); goto L_474678; } return; } RELOAD();
/* 47469c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47469f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4746a0: mov eax, esi */
  eax = esi;
/* 4746a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4746a3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4746aa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4746ab: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4746ac: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4746af(void) {
  LOAD_REGS();
L_4746af: /* 4746af: mov eax, 0x48c934 */
  eax = 0x48c934u;
/* 4746b4: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4746b9u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4746b9: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4746bc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4746bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4746be: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4746bf: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 4746c2: mov esi, ecx */
  esi = ecx;
/* 4746c4: xor ebx, ebx */
  ebx = 0;
/* 4746c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4746c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4746c8: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4746cb: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 4746ce: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 4746d1: call 0x466d1b */
  esp -= 4; W32(esp, 0x4746d6u); SPILL(); f_466d1b(); if (g_unwind) return; RELOAD();
/* 4746d6: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4746d9: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4746dc: je 0x47475d */
  if (zf) goto L_47475d;
L_4746de: /* 4746de: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 4746e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4746e2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4746e4: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4746e7: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4746e9: call 0x464a5a */
  esp -= 4; W32(esp, 0x4746eeu); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 4746ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4746ef: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4746f3: call 0x46e41b */
  esp -= 4; W32(esp, 0x4746f8u); SPILL(); f_46e41b(); if (g_unwind) return; RELOAD();
/* 4746f8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4746f9: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 4746fc: mov edi, eax */
  edi = eax;
/* 4746fe: call 0x461389 */
  esp -= 4; W32(esp, 0x474703u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 474703: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474705: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 474708: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47470b: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 47470d: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 474710: xor edx, edx */
  edx = 0;
/* 474712: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 474714: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 474717: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 47471a: lea ebx, [ebp - 0x18] */
  ebx = (uint32_t)(ebp + 0xffffffe8u);
/* 47471d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47471e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47471f: mov byte ptr [ebp - 0x1c], 1 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 474723: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 474726: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 474729: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 47472a: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 47472d: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 474731: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 474732: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 474733: mov ecx, edi */
  ecx = edi;
/* 474735: call 0x4688ab */
  esp -= 4; W32(esp, 0x47473au); SPILL(); f_4688ab(); if (g_unwind) return; RELOAD();
/* 47473a: jmp 0x47475d */
  goto L_47475d;
L_47475d: /* 47475d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47475f: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 474762: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 474766: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 474768: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 47476b: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47476d: call 0x461453 */
  esp -= 4; W32(esp, 0x474772u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 474772: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 474776: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 474779: call 0x46228e */
  esp -= 4; W32(esp, 0x47477eu); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 47477e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 474781: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 474782: mov eax, esi */
  eax = esi;
/* 474784: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 474785: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47478c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47478d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47478e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_47473c(void) {
  LOAD_REGS();
L_47473c: /* 47473c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 47473f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 474741: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 474744: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 474746: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 474749: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47474b: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 47474e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47474f: call 0x464bb2 */
  esp -= 4; W32(esp, 0x474754u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 474754: mov eax, 0x47475a */
  eax = 0x47475au;
/* 474759: ret  */
  esp += 4; SPILL(); return;
}

void f_47475a(void) {
  LOAD_REGS();
L_47475a: /* 47475a: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 47475d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47475f: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 474762: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 474766: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 474768: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 47476b: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47476d: call 0x461453 */
  esp -= 4; W32(esp, 0x474772u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47475au: guest_unwind_done(); RELOAD(); goto L_47475a; } return; } RELOAD();
/* 474772: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 474776: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 474779: call 0x46228e */
  esp -= 4; W32(esp, 0x47477eu); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47475au: guest_unwind_done(); RELOAD(); goto L_47475a; } return; } RELOAD();
/* 47477e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 474781: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 474782: mov eax, esi */
  eax = esi;
/* 474784: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 474785: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47478c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47478d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47478e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_474791(void) {
  LOAD_REGS();
L_474791: /* 474791: mov eax, 0x48c94e */
  eax = 0x48c94eu;
/* 474796: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47479bu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47479b: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47479e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47479f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4747a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4747a1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 4747a4: mov esi, ecx */
  esi = ecx;
/* 4747a6: xor ebx, ebx */
  ebx = 0;
/* 4747a8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4747a9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4747aa: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4747ad: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 4747b0: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 4747b3: call 0x466d1b */
  esp -= 4; W32(esp, 0x4747b8u); SPILL(); f_466d1b(); if (g_unwind) return; RELOAD();
/* 4747b8: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4747bb: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4747be: je 0x47483f */
  if (zf) goto L_47483f;
L_4747c0: /* 4747c0: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 4747c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4747c4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4747c6: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4747c9: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4747cb: call 0x464a5a */
  esp -= 4; W32(esp, 0x4747d0u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 4747d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4747d1: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4747d5: call 0x46e41b */
  esp -= 4; W32(esp, 0x4747dau); SPILL(); f_46e41b(); if (g_unwind) return; RELOAD();
/* 4747da: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4747db: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 4747de: mov edi, eax */
  edi = eax;
/* 4747e0: call 0x461389 */
  esp -= 4; W32(esp, 0x4747e5u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 4747e5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4747e7: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4747ea: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4747ed: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4747ef: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 4747f2: xor edx, edx */
  edx = 0;
/* 4747f4: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4747f6: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 4747f9: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 4747fc: lea ebx, [ebp - 0x18] */
  ebx = (uint32_t)(ebp + 0xffffffe8u);
/* 4747ff: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 474800: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 474801: mov byte ptr [ebp - 0x1c], 1 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 474805: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 474808: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 47480b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 47480c: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 47480f: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 474813: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 474814: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 474815: mov ecx, edi */
  ecx = edi;
/* 474817: call 0x4688d2 */
  esp -= 4; W32(esp, 0x47481cu); SPILL(); f_4688d2(); if (g_unwind) return; RELOAD();
/* 47481c: jmp 0x47483f */
  goto L_47483f;
L_47483f: /* 47483f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474841: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 474844: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 474848: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47484a: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 47484d: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47484f: call 0x461453 */
  esp -= 4; W32(esp, 0x474854u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 474854: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 474858: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 47485b: call 0x46228e */
  esp -= 4; W32(esp, 0x474860u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 474860: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 474863: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 474864: mov eax, esi */
  eax = esi;
/* 474866: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 474867: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47486e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47486f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 474870: ret 4 */
  esp += 8; SPILL(); return;
}

void f_47481e(void) {
  LOAD_REGS();
L_47481e: /* 47481e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 474821: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 474823: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 474826: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 474828: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 47482b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47482d: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 474830: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 474831: call 0x464bb2 */
  esp -= 4; W32(esp, 0x474836u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 474836: mov eax, 0x47483c */
  eax = 0x47483cu;
/* 47483b: ret  */
  esp += 4; SPILL(); return;
}

void f_47483c(void) {
  LOAD_REGS();
L_47483c: /* 47483c: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 47483f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474841: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 474844: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 474848: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47484a: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 47484d: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47484f: call 0x461453 */
  esp -= 4; W32(esp, 0x474854u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47483cu: guest_unwind_done(); RELOAD(); goto L_47483c; } return; } RELOAD();
/* 474854: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 474858: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 47485b: call 0x46228e */
  esp -= 4; W32(esp, 0x474860u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47483cu: guest_unwind_done(); RELOAD(); goto L_47483c; } return; } RELOAD();
/* 474860: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 474863: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 474864: mov eax, esi */
  eax = esi;
/* 474866: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 474867: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47486e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47486f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 474870: ret 4 */
  esp += 8; SPILL(); return;
}

void f_474873(void) {
  LOAD_REGS();
L_474873: /* 474873: mov eax, 0x48c968 */
  eax = 0x48c968u;
/* 474878: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47487du); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47487d: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 474880: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 474881: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 474882: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 474883: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 474886: mov esi, ecx */
  esi = ecx;
/* 474888: xor ebx, ebx */
  ebx = 0;
/* 47488a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47488b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47488c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 47488f: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 474892: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 474895: call 0x466d1b */
  esp -= 4; W32(esp, 0x47489au); SPILL(); f_466d1b(); if (g_unwind) return; RELOAD();
/* 47489a: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47489d: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4748a0: je 0x474921 */
  if (zf) goto L_474921;
L_4748a2: /* 4748a2: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 4748a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4748a6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4748a8: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4748ab: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4748ad: call 0x464a5a */
  esp -= 4; W32(esp, 0x4748b2u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 4748b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4748b3: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4748b7: call 0x46e41b */
  esp -= 4; W32(esp, 0x4748bcu); SPILL(); f_46e41b(); if (g_unwind) return; RELOAD();
/* 4748bc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4748bd: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 4748c0: mov edi, eax */
  edi = eax;
/* 4748c2: call 0x461389 */
  esp -= 4; W32(esp, 0x4748c7u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 4748c7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4748c9: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4748cc: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4748cf: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4748d1: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 4748d4: xor edx, edx */
  edx = 0;
/* 4748d6: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4748d8: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 4748db: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 4748de: lea ebx, [ebp - 0x18] */
  ebx = (uint32_t)(ebp + 0xffffffe8u);
/* 4748e1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4748e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4748e3: mov byte ptr [ebp - 0x1c], 1 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 4748e7: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 4748ea: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 4748ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4748ee: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 4748f1: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 4748f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4748f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4748f7: mov ecx, edi */
  ecx = edi;
/* 4748f9: call 0x4688f9 */
  esp -= 4; W32(esp, 0x4748feu); SPILL(); f_4688f9(); if (g_unwind) return; RELOAD();
/* 4748fe: jmp 0x474921 */
  goto L_474921;
L_474921: /* 474921: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474923: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 474926: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47492a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47492c: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 47492f: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 474931: call 0x461453 */
  esp -= 4; W32(esp, 0x474936u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 474936: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47493a: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 47493d: call 0x46228e */
  esp -= 4; W32(esp, 0x474942u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 474942: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 474945: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 474946: mov eax, esi */
  eax = esi;
/* 474948: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 474949: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 474950: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 474951: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 474952: ret 4 */
  esp += 8; SPILL(); return;
}

void f_474900(void) {
  LOAD_REGS();
L_474900: /* 474900: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 474903: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 474905: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 474908: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47490a: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 47490d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47490f: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 474912: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 474913: call 0x464bb2 */
  esp -= 4; W32(esp, 0x474918u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 474918: mov eax, 0x47491e */
  eax = 0x47491eu;
/* 47491d: ret  */
  esp += 4; SPILL(); return;
}

void f_47491e(void) {
  LOAD_REGS();
L_47491e: /* 47491e: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 474921: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474923: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 474926: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47492a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47492c: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 47492f: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 474931: call 0x461453 */
  esp -= 4; W32(esp, 0x474936u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47491eu: guest_unwind_done(); RELOAD(); goto L_47491e; } return; } RELOAD();
/* 474936: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47493a: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 47493d: call 0x46228e */
  esp -= 4; W32(esp, 0x474942u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47491eu: guest_unwind_done(); RELOAD(); goto L_47491e; } return; } RELOAD();
/* 474942: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 474945: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 474946: mov eax, esi */
  eax = esi;
/* 474948: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 474949: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 474950: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 474951: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 474952: ret 4 */
  esp += 8; SPILL(); return;
}

void f_474955(void) {
  LOAD_REGS();
L_474955: /* 474955: mov eax, 0x48c97a */
  eax = 0x48c97au;
/* 47495a: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47495fu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47495f: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 474962: and byte ptr [ebp - 0x11], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffefu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffefu), r);
  }
/* 474966: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 474967: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 474968: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 474969: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 47496c: mov esi, ecx */
  esi = ecx;
/* 47496e: xor edi, edi */
  edi = 0;
/* 474970: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 474971: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 474972: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 474975: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 474978: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 47497b: call 0x466d1b */
  esp -= 4; W32(esp, 0x474980u); SPILL(); f_466d1b(); if (g_unwind) return; RELOAD();
/* 474980: cmp byte ptr [ebp - 0x20], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe0u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 474984: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 474987: je 0x4749df */
  if (zf) goto L_4749df;
L_474989: /* 474989: cmp dword ptr [ebp + 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47498c: je 0x4749df */
  if (zf) goto L_4749df;
L_47498e: /* 47498e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474990: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 474993: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 474997: xor ebx, ebx */
  ebx = 0;
/* 474999: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 47499a: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 47499d: call 0x46567c */
  esp -= 4; W32(esp, 0x4749a2u); SPILL(); f_46567c(); if (g_unwind) return; RELOAD();
L_4749a2: /* 4749a2: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4749a5: jne 0x4749ab */
  if (!zf) goto L_4749ab;
L_4749a7: /* 4749a7: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 4749a9: jmp 0x4749df */
  goto L_4749df;
L_4749ab: /* 4749ab: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4749ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4749af: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 4749b3: call 0x46186f */
  esp -= 4; W32(esp, 0x4749b8u); SPILL(); f_46186f(); if (g_unwind) return; RELOAD();
/* 4749b8: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4749bb: je 0x4749df */
  if (zf) goto L_4749df;
L_4749bd: /* 4749bd: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4749bf: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4749c2: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 4749c6: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4749c9: mov byte ptr [ebp - 0x11], bl */
  W8((uint32_t)(ebp + 0xffffffefu), (ebx & 0xffu));
/* 4749cc: call 0x465c50 */
  esp -= 4; W32(esp, 0x4749d1u); SPILL(); f_465c50(); if (g_unwind) return; RELOAD();
/* 4749d1: jmp 0x4749a2 */
  goto L_4749a2;
L_4749df: /* 4749df: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4749e3: cmp byte ptr [ebp - 0x11], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffefu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4749e7: jne 0x4749ec */
  if (!zf) goto L_4749ec;
L_4749e9: /* 4749e9: or edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_4749ec: /* 4749ec: mov eax, edi */
  eax = edi;
/* 4749ee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4749f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4749f1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4749f3: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4749f6: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4749f8: call 0x461453 */
  esp -= 4; W32(esp, 0x4749fdu); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 4749fd: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 474a01: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 474a04: call 0x46228e */
  esp -= 4; W32(esp, 0x474a09u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 474a09: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 474a0c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 474a0d: mov eax, esi */
  eax = esi;
/* 474a0f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 474a10: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 474a17: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 474a18: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 474a19: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4749d3(void) {
  LOAD_REGS();
L_4749d3: /* 4749d3: mov eax, 0x4749d9 */
  eax = 0x4749d9u;
/* 4749d8: ret  */
  esp += 4; SPILL(); return;
}

void f_4749d9(void) {
  LOAD_REGS();
L_4749d9: /* 4749d9: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 4749dc: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 4749df: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4749e3: cmp byte ptr [ebp - 0x11], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffefu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4749e7: jne 0x4749ec */
  if (!zf) goto L_4749ec;
L_4749e9: /* 4749e9: or edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_4749ec: /* 4749ec: mov eax, edi */
  eax = edi;
/* 4749ee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4749f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4749f1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4749f3: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4749f6: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4749f8: call 0x461453 */
  esp -= 4; W32(esp, 0x4749fdu); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4749d9u: guest_unwind_done(); RELOAD(); goto L_4749d9; } return; } RELOAD();
/* 4749fd: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 474a01: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 474a04: call 0x46228e */
  esp -= 4; W32(esp, 0x474a09u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4749d9u: guest_unwind_done(); RELOAD(); goto L_4749d9; } return; } RELOAD();
/* 474a09: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 474a0c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 474a0d: mov eax, esi */
  eax = esi;
/* 474a0f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 474a10: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 474a17: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 474a18: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 474a19: ret 4 */
  esp += 8; SPILL(); return;
}

void f_474a1c(void) {
  LOAD_REGS();
L_474a1c: /* 474a1c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 474a1f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 474a21: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 474a24: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 474a26: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 474a29: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 474a2b: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 474a2e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 474a2f: call 0x464bb2 */
  esp -= 4; W32(esp, 0x474a34u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 474a34: mov eax, 0x4749d9 */
  eax = 0x4749d9u;
/* 474a39: ret  */
  esp += 4; SPILL(); return;
}

void f_474a3a(void) {
  LOAD_REGS();
L_474a3a: /* 474a3a: mov eax, 0x48c98c */
  eax = 0x48c98cu;
/* 474a3f: call 0x4616c0 */
  esp -= 4; W32(esp, 0x474a44u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 474a44: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 474a47: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 474a48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 474a49: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 474a4a: mov esi, ecx */
  esi = ecx;
/* 474a4c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 474a4f: xor ebx, ebx */
  ebx = 0;
/* 474a51: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 474a53: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 474a54: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 474a57: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 474a5a: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 474a5d: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 474a60: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 474a63: call 0x466d1b */
  esp -= 4; W32(esp, 0x474a68u); SPILL(); f_466d1b(); if (g_unwind) return; RELOAD();
/* 474a68: cmp byte ptr [ebp - 0x20], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe0u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 474a6b: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 474a6e: jne 0x474a75 */
  if (!zf) goto L_474a75;
L_474a70: /* 474a70: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 474a73: jmp 0x474ac2 */
  goto L_474ac2;
L_474a75: /* 474a75: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474a77: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 474a7a: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 474a7e: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 474a82: call 0x46581a */
  esp -= 4; W32(esp, 0x474a87u); SPILL(); f_46581a(); if (g_unwind) return; RELOAD();
/* 474a87: mov edi, eax */
  edi = eax;
/* 474a89: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 474a8c: jne 0x474a97 */
  if (!zf) goto L_474a97;
L_474a8e: /* 474a8e: mov dword ptr [ebp - 0x18], 3 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3u);
/* 474a95: jmp 0x474ac2 */
  goto L_474ac2;
L_474a97: /* 474a97: inc dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 474a9a: jmp 0x474ac2 */
  goto L_474ac2;
L_474ac2: /* 474ac2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474ac4: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 474ac7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 474ac8: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 474acb: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 474acd: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 474ad0: call 0x461453 */
  esp -= 4; W32(esp, 0x474ad5u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 474ad5: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 474ad9: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 474adc: call 0x46228e */
  esp -= 4; W32(esp, 0x474ae1u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 474ae1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 474ae4: mov eax, edi */
  eax = edi;
/* 474ae6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 474ae7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 474ae8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 474aef: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 474af0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 474af1: ret  */
  esp += 4; SPILL(); return;
}

void f_474a9c(void) {
  LOAD_REGS();
L_474a9c: /* 474a9c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 474a9f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 474aa1: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 474aa4: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 474aa6: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 474aa9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 474aab: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 474aae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 474aaf: call 0x464bb2 */
  esp -= 4; W32(esp, 0x474ab4u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 474ab4: mov eax, 0x474aba */
  eax = 0x474abau;
/* 474ab9: ret  */
  esp += 4; SPILL(); return;
}

void f_474aba(void) {
  LOAD_REGS();
L_474aba: /* 474aba: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 474abd: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 474ac0: xor ebx, ebx */
  ebx = 0;
/* 474ac2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474ac4: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 474ac7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 474ac8: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 474acb: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 474acd: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 474ad0: call 0x461453 */
  esp -= 4; W32(esp, 0x474ad5u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x474abau: guest_unwind_done(); RELOAD(); goto L_474aba; } return; } RELOAD();
/* 474ad5: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 474ad9: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 474adc: call 0x46228e */
  esp -= 4; W32(esp, 0x474ae1u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x474abau: guest_unwind_done(); RELOAD(); goto L_474aba; } return; } RELOAD();
/* 474ae1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 474ae4: mov eax, edi */
  eax = edi;
/* 474ae6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 474ae7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 474ae8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 474aef: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 474af0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 474af1: ret  */
  esp += 4; SPILL(); return;
}

void f_474af2(void) {
  LOAD_REGS();
L_474af2: /* 474af2: mov eax, 0x48c99e */
  eax = 0x48c99eu;
/* 474af7: call 0x4616c0 */
  esp -= 4; W32(esp, 0x474afcu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 474afc: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 474aff: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 474b00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 474b01: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 474b02: mov esi, ecx */
  esi = ecx;
/* 474b04: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 474b07: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 474b09: xor ebx, ebx */
  ebx = 0;
/* 474b0b: xor edi, edi */
  edi = 0;
/* 474b0d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 474b0e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 474b11: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 474b14: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 474b17: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 474b1a: call 0x466d1b */
  esp -= 4; W32(esp, 0x474b1fu); SPILL(); f_466d1b(); if (g_unwind) return; RELOAD();
/* 474b1f: cmp byte ptr [ebp - 0x1c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 474b22: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 474b25: je 0x474b96 */
  if (zf) goto L_474b96;
L_474b27: /* 474b27: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 474b2a: jle 0x474b96 */
  if ((zf || sf != of)) goto L_474b96;
L_474b2c: /* 474b2c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474b2e: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 474b31: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 474b35: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 474b39: call 0x46567c */
  esp -= 4; W32(esp, 0x474b3eu); SPILL(); f_46567c(); if (g_unwind) return; RELOAD();
L_474b3e: /* 474b3e: dec dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 474b41: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 474b44: jle 0x474b96 */
  if ((zf || sf != of)) goto L_474b96;
L_474b46: /* 474b46: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 474b49: jne 0x474b50 */
  if (!zf) goto L_474b50;
L_474b4b: /* 474b4b: or edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 474b4e: jmp 0x474b96 */
  goto L_474b96;
L_474b50: /* 474b50: cmp al, byte ptr [ebp + 0x10] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebp + 0x10u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 474b53: je 0x474b96 */
  if (zf) goto L_474b96;
L_474b55: /* 474b55: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 474b58: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 474b5b: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 474b5d: inc dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 474b60: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474b62: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 474b65: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 474b69: call 0x465c50 */
  esp -= 4; W32(esp, 0x474b6eu); SPILL(); f_465c50(); if (g_unwind) return; RELOAD();
/* 474b6e: jmp 0x474b3e */
  goto L_474b3e;
L_474b96: /* 474b96: cmp dword ptr [esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 474b99: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 474b9c: jne 0x474ba1 */
  if (!zf) goto L_474ba1;
L_474b9e: /* 474b9e: or edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_474ba1: /* 474ba1: mov eax, edi */
  eax = edi;
/* 474ba3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 474ba4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 474ba5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474ba7: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 474baa: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 474bac: call 0x461453 */
  esp -= 4; W32(esp, 0x474bb1u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 474bb1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 474bb4: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 474bb8: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 474bbb: mov byte ptr [eax], bl */
  W8((uint32_t)(eax), (ebx & 0xffu));
/* 474bbd: call 0x46228e */
  esp -= 4; W32(esp, 0x474bc2u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 474bc2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 474bc5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 474bc6: mov eax, esi */
  eax = esi;
/* 474bc8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 474bc9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 474bd0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 474bd1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 474bd2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_474b70(void) {
  LOAD_REGS();
L_474b70: /* 474b70: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 474b73: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 474b75: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 474b78: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 474b7a: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 474b7d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 474b7f: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 474b82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 474b83: call 0x464bb2 */
  esp -= 4; W32(esp, 0x474b88u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 474b88: mov eax, 0x474b8e */
  eax = 0x474b8eu;
/* 474b8d: ret  */
  esp += 4; SPILL(); return;
}

void f_474b8e(void) {
  LOAD_REGS();
L_474b8e: /* 474b8e: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 474b91: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 474b94: xor ebx, ebx */
  ebx = 0;
/* 474b96: cmp dword ptr [esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 474b99: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 474b9c: jne 0x474ba1 */
  if (!zf) goto L_474ba1;
L_474b9e: /* 474b9e: or edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_474ba1: /* 474ba1: mov eax, edi */
  eax = edi;
/* 474ba3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 474ba4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 474ba5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474ba7: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 474baa: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 474bac: call 0x461453 */
  esp -= 4; W32(esp, 0x474bb1u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x474b8eu: guest_unwind_done(); RELOAD(); goto L_474b8e; } return; } RELOAD();
/* 474bb1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 474bb4: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 474bb8: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 474bbb: mov byte ptr [eax], bl */
  W8((uint32_t)(eax), (ebx & 0xffu));
/* 474bbd: call 0x46228e */
  esp -= 4; W32(esp, 0x474bc2u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x474b8eu: guest_unwind_done(); RELOAD(); goto L_474b8e; } return; } RELOAD();
/* 474bc2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 474bc5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 474bc6: mov eax, esi */
  eax = esi;
/* 474bc8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 474bc9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 474bd0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 474bd1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 474bd2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_474bd5(void) {
  LOAD_REGS();
L_474bd5: /* 474bd5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 474bd6: mov esi, ecx */
  esi = ecx;
/* 474bd8: call 0x474a3a */
  esp -= 4; W32(esp, 0x474bddu); SPILL(); f_474a3a(); if (g_unwind) return; RELOAD();
/* 474bdd: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 474be0: je 0x474be8 */
  if (zf) goto L_474be8;
L_474be2: /* 474be2: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 474be6: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
L_474be8: /* 474be8: mov eax, esi */
  eax = esi;
/* 474bea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 474beb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_474bee(void) {
  LOAD_REGS();
L_474bee: /* 474bee: mov eax, 0x48c9b0 */
  eax = 0x48c9b0u;
/* 474bf3: call 0x4616c0 */
  esp -= 4; W32(esp, 0x474bf8u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 474bf8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 474bfb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 474bfc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 474bfd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 474bfe: mov esi, ecx */
  esi = ecx;
/* 474c00: xor ebx, ebx */
  ebx = 0;
/* 474c02: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 474c05: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 474c06: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 474c07: xor edi, edi */
  edi = 0;
/* 474c09: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 474c0a: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 474c0d: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 474c10: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 474c13: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 474c16: call 0x466d1b */
  esp -= 4; W32(esp, 0x474c1bu); SPILL(); f_466d1b(); if (g_unwind) return; RELOAD();
/* 474c1b: cmp byte ptr [ebp - 0x1c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 474c1f: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 474c22: je 0x474c75 */
  if (zf) goto L_474c75;
L_474c24: /* 474c24: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474c26: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 474c29: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 474c2d: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 474c30: call 0x46567c */
  esp -= 4; W32(esp, 0x474c35u); SPILL(); f_46567c(); if (g_unwind) return; RELOAD();
L_474c35: /* 474c35: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 474c38: jne 0x474c3f */
  if (!zf) goto L_474c3f;
L_474c3a: /* 474c3a: or dword ptr [ebp - 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 474c3d: jmp 0x474c75 */
  goto L_474c75;
L_474c3f: /* 474c3f: cmp al, byte ptr [ebp + 0xc] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebp + 0xcu)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 474c42: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 474c46: je 0x474c75 */
  if (zf) goto L_474c75;
L_474c48: /* 474c48: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 474c4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 474c4c: call 0x46186f */
  esp -= 4; W32(esp, 0x474c51u); SPILL(); f_46186f(); if (g_unwind) return; RELOAD();
/* 474c51: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 474c54: je 0x474c75 */
  if (zf) goto L_474c75;
L_474c56: /* 474c56: inc dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 474c59: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474c5b: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 474c5e: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 474c62: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 474c65: call 0x465c50 */
  esp -= 4; W32(esp, 0x474c6au); SPILL(); f_465c50(); if (g_unwind) return; RELOAD();
/* 474c6a: jmp 0x474c35 */
  goto L_474c35;
L_474c75: /* 474c75: xor eax, eax */
  eax = 0;
/* 474c77: cmp dword ptr [esi + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 474c7a: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 474c7d: jne 0x474c83 */
  if (!zf) goto L_474c83;
L_474c7f: /* 474c7f: or dword ptr [ebp - 0x14], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
L_474c83: /* 474c83: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 474c84: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474c86: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 474c89: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 474c8c: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 474c8e: call 0x461453 */
  esp -= 4; W32(esp, 0x474c93u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 474c93: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 474c97: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 474c9a: call 0x46228e */
  esp -= 4; W32(esp, 0x474c9fu); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 474c9f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 474ca2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 474ca3: mov eax, esi */
  eax = esi;
/* 474ca5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 474ca6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 474cad: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 474cae: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 474caf: ret 8 */
  esp += 12; SPILL(); return;
}

void f_474c6c(void) {
  LOAD_REGS();
L_474c6c: /* 474c6c: mov eax, 0x474c72 */
  eax = 0x474c72u;
/* 474c71: ret  */
  esp += 4; SPILL(); return;
}

void f_474c72(void) {
  LOAD_REGS();
L_474c72: /* 474c72: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 474c75: xor eax, eax */
  eax = 0;
/* 474c77: cmp dword ptr [esi + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 474c7a: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 474c7d: jne 0x474c83 */
  if (!zf) goto L_474c83;
L_474c7f: /* 474c7f: or dword ptr [ebp - 0x14], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
L_474c83: /* 474c83: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 474c84: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474c86: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 474c89: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 474c8c: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 474c8e: call 0x461453 */
  esp -= 4; W32(esp, 0x474c93u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x474c72u: guest_unwind_done(); RELOAD(); goto L_474c72; } return; } RELOAD();
/* 474c93: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 474c97: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 474c9a: call 0x46228e */
  esp -= 4; W32(esp, 0x474c9fu); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x474c72u: guest_unwind_done(); RELOAD(); goto L_474c72; } return; } RELOAD();
/* 474c9f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 474ca2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 474ca3: mov eax, esi */
  eax = esi;
/* 474ca5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 474ca6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 474cad: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 474cae: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 474caf: ret 8 */
  esp += 12; SPILL(); return;
}

void f_474cb2(void) {
  LOAD_REGS();
L_474cb2: /* 474cb2: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 474cb5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 474cb7: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 474cba: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 474cbc: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 474cbf: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 474cc1: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 474cc4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 474cc5: call 0x464bb2 */
  esp -= 4; W32(esp, 0x474ccau); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 474cca: mov eax, 0x474c72 */
  eax = 0x474c72u;
/* 474ccf: ret  */
  esp += 4; SPILL(); return;
}

void f_474cd0(void) {
  LOAD_REGS();
L_474cd0: /* 474cd0: mov eax, 0x48c9c2 */
  eax = 0x48c9c2u;
/* 474cd5: call 0x4616c0 */
  esp -= 4; W32(esp, 0x474cdau); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 474cda: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 474cdd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 474cde: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 474cdf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 474ce0: mov esi, ecx */
  esi = ecx;
/* 474ce2: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 474ce5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 474ce7: xor ebx, ebx */
  ebx = 0;
/* 474ce9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 474cea: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 474ced: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 474cf0: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 474cf3: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 474cf6: call 0x466d1b */
  esp -= 4; W32(esp, 0x474cfbu); SPILL(); f_466d1b(); if (g_unwind) return; RELOAD();
/* 474cfb: cmp byte ptr [ebp - 0x1c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 474cfe: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 474d01: je 0x474d94 */
  if (zf) goto L_474d94;
L_474d07: /* 474d07: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 474d0a: jle 0x474d94 */
  if ((zf || sf != of)) goto L_474d94;
L_474d10: /* 474d10: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474d12: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 474d15: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 474d19: movzx edi, byte ptr [ebp + 0x10] */
  edi = (uint32_t)(R8((uint32_t)(ebp + 0x10u)));
/* 474d1d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 474d21: call 0x46567c */
  esp -= 4; W32(esp, 0x474d26u); SPILL(); f_46567c(); if (g_unwind) return; RELOAD();
L_474d26: /* 474d26: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 474d29: jne 0x474d30 */
  if (!zf) goto L_474d30;
L_474d2b: /* 474d2b: or ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 474d2e: jmp 0x474d94 */
  goto L_474d94;
L_474d30: /* 474d30: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 474d32: jne 0x474d47 */
  if (!zf) goto L_474d47;
L_474d34: /* 474d34: inc dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 474d37: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474d39: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 474d3c: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 474d40: call 0x46581a */
  esp -= 4; W32(esp, 0x474d45u); SPILL(); f_46581a(); if (g_unwind) return; RELOAD();
/* 474d45: jmp 0x474d94 */
  goto L_474d94;
L_474d47: /* 474d47: dec dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 474d4a: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 474d4e: jg 0x474d55 */
  if ((!zf && sf == of)) goto L_474d55;
L_474d50: /* 474d50: or ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 474d53: jmp 0x474d94 */
  goto L_474d94;
L_474d55: /* 474d55: inc dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 474d58: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 474d5b: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 474d5e: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 474d60: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474d62: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 474d65: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 474d69: call 0x465c50 */
  esp -= 4; W32(esp, 0x474d6eu); SPILL(); f_465c50(); if (g_unwind) return; RELOAD();
/* 474d6e: jmp 0x474d26 */
  goto L_474d26;
L_474d94: /* 474d94: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 474d97: xor ecx, ecx */
  ecx = 0;
/* 474d99: and byte ptr [eax], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* 474d9b: cmp dword ptr [esi + 4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 474d9e: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 474da1: jne 0x474da6 */
  if (!zf) goto L_474da6;
L_474da3: /* 474da3: or ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_474da6: /* 474da6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 474da7: mov eax, ebx */
  eax = ebx;
/* 474da9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 474daa: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474dac: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 474daf: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 474db1: call 0x461453 */
  esp -= 4; W32(esp, 0x474db6u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 474db6: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 474dba: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 474dbd: call 0x46228e */
  esp -= 4; W32(esp, 0x474dc2u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 474dc2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 474dc5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 474dc6: mov eax, esi */
  eax = esi;
/* 474dc8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 474dc9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 474dd0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 474dd1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 474dd2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_474d70(void) {
  LOAD_REGS();
L_474d70: /* 474d70: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 474d73: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 474d75: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 474d78: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 474d7a: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 474d7d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 474d7f: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 474d82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 474d83: call 0x464bb2 */
  esp -= 4; W32(esp, 0x474d88u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 474d88: mov eax, 0x474d8e */
  eax = 0x474d8eu;
/* 474d8d: ret  */
  esp += 4; SPILL(); return;
}

void f_474d8e(void) {
  LOAD_REGS();
L_474d8e: /* 474d8e: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 474d91: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 474d94: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 474d97: xor ecx, ecx */
  ecx = 0;
/* 474d99: and byte ptr [eax], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* 474d9b: cmp dword ptr [esi + 4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 474d9e: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 474da1: jne 0x474da6 */
  if (!zf) goto L_474da6;
L_474da3: /* 474da3: or ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_474da6: /* 474da6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 474da7: mov eax, ebx */
  eax = ebx;
/* 474da9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 474daa: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474dac: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 474daf: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 474db1: call 0x461453 */
  esp -= 4; W32(esp, 0x474db6u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x474d8eu: guest_unwind_done(); RELOAD(); goto L_474d8e; } return; } RELOAD();
/* 474db6: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 474dba: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 474dbd: call 0x46228e */
  esp -= 4; W32(esp, 0x474dc2u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x474d8eu: guest_unwind_done(); RELOAD(); goto L_474d8e; } return; } RELOAD();
/* 474dc2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 474dc5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 474dc6: mov eax, esi */
  eax = esi;
/* 474dc8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 474dc9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 474dd0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 474dd1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 474dd2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_474dd5(void) {
  LOAD_REGS();
L_474dd5: /* 474dd5: mov eax, 0x48c9d4 */
  eax = 0x48c9d4u;
/* 474dda: call 0x4616c0 */
  esp -= 4; W32(esp, 0x474ddfu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 474ddf: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 474de2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 474de3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 474de4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 474de5: mov esi, ecx */
  esi = ecx;
/* 474de7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 474dea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 474dec: xor ebx, ebx */
  ebx = 0;
/* 474dee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 474def: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 474df2: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 474df5: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 474df8: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 474dfb: call 0x466d1b */
  esp -= 4; W32(esp, 0x474e00u); SPILL(); f_466d1b(); if (g_unwind) return; RELOAD();
/* 474e00: cmp byte ptr [ebp - 0x1c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 474e03: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 474e06: je 0x474e65 */
  if (zf) goto L_474e65;
L_474e08: /* 474e08: cmp dword ptr [ebp + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 474e0b: jle 0x474e65 */
  if ((zf || sf != of)) goto L_474e65;
L_474e0d: /* 474e0d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
L_474e11: /* 474e11: cmp dword ptr [ebp + 8], 0x7fffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 474e18: je 0x474e1f */
  if (zf) goto L_474e1f;
L_474e1a: /* 474e1a: dec dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 474e1d: js 0x474e65 */
  if (sf) goto L_474e65;
L_474e1f: /* 474e1f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474e21: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 474e24: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 474e28: call 0x46581a */
  esp -= 4; W32(esp, 0x474e2du); SPILL(); f_46581a(); if (g_unwind) return; RELOAD();
/* 474e2d: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 474e30: jne 0x474e38 */
  if (!zf) goto L_474e38;
L_474e32: /* 474e32: or dword ptr [ebp - 0x14], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 474e36: jmp 0x474e65 */
  goto L_474e65;
L_474e38: /* 474e38: inc dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 474e3b: cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 474e3e: jne 0x474e11 */
  if (!zf) goto L_474e11;
L_474e40: /* 474e40: jmp 0x474e65 */
  goto L_474e65;
L_474e65: /* 474e65: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474e67: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 474e6a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 474e6b: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 474e6e: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 474e70: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 474e73: call 0x461453 */
  esp -= 4; W32(esp, 0x474e78u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 474e78: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 474e7c: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 474e7f: call 0x46228e */
  esp -= 4; W32(esp, 0x474e84u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 474e84: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 474e87: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 474e88: mov eax, esi */
  eax = esi;
/* 474e8a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 474e8b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 474e92: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 474e93: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 474e94: ret 8 */
  esp += 12; SPILL(); return;
}

void f_474e42(void) {
  LOAD_REGS();
L_474e42: /* 474e42: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 474e45: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 474e47: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 474e4a: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 474e4c: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 474e4f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 474e51: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 474e54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 474e55: call 0x464bb2 */
  esp -= 4; W32(esp, 0x474e5au); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 474e5a: mov eax, 0x474e60 */
  eax = 0x474e60u;
/* 474e5f: ret  */
  esp += 4; SPILL(); return;
}

void f_474e60(void) {
  LOAD_REGS();
L_474e60: /* 474e60: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 474e63: xor ebx, ebx */
  ebx = 0;
/* 474e65: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474e67: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 474e6a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 474e6b: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 474e6e: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 474e70: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 474e73: call 0x461453 */
  esp -= 4; W32(esp, 0x474e78u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x474e60u: guest_unwind_done(); RELOAD(); goto L_474e60; } return; } RELOAD();
/* 474e78: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 474e7c: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 474e7f: call 0x46228e */
  esp -= 4; W32(esp, 0x474e84u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x474e60u: guest_unwind_done(); RELOAD(); goto L_474e60; } return; } RELOAD();
/* 474e84: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 474e87: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 474e88: mov eax, esi */
  eax = esi;
/* 474e8a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 474e8b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 474e92: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 474e93: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 474e94: ret 8 */
  esp += 12; SPILL(); return;
}

void f_474e97(void) {
  LOAD_REGS();
L_474e97: /* 474e97: mov eax, 0x48c9e6 */
  eax = 0x48c9e6u;
/* 474e9c: call 0x4616c0 */
  esp -= 4; W32(esp, 0x474ea1u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 474ea1: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 474ea4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 474ea5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 474ea6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 474ea7: mov esi, ecx */
  esi = ecx;
/* 474ea9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 474eac: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 474eae: xor ebx, ebx */
  ebx = 0;
/* 474eb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 474eb1: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 474eb4: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 474eb7: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 474eba: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 474ebd: call 0x466d1b */
  esp -= 4; W32(esp, 0x474ec2u); SPILL(); f_466d1b(); if (g_unwind) return; RELOAD();
/* 474ec2: cmp byte ptr [ebp - 0x1c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 474ec5: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 474ec8: je 0x474f16 */
  if (zf) goto L_474f16;
L_474eca: /* 474eca: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474ecc: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 474ecf: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 474ed2: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 474ed6: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 474ed9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 474edb: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 474edf: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x474ee2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 474ee2: add dword ptr [esi + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 474ee5: cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 474ee8: je 0x474f16 */
  if (zf) goto L_474f16;
L_474eea: /* 474eea: mov dword ptr [ebp - 0x18], 3 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3u);
/* 474ef1: jmp 0x474f16 */
  goto L_474f16;
L_474f16: /* 474f16: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474f18: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 474f1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 474f1c: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 474f1f: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 474f21: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 474f24: call 0x461453 */
  esp -= 4; W32(esp, 0x474f29u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 474f29: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 474f2d: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 474f30: call 0x46228e */
  esp -= 4; W32(esp, 0x474f35u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 474f35: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 474f38: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 474f39: mov eax, esi */
  eax = esi;
/* 474f3b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 474f3c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 474f43: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 474f44: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 474f45: ret 8 */
  esp += 12; SPILL(); return;
}

void f_474ef3(void) {
  LOAD_REGS();
L_474ef3: /* 474ef3: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 474ef6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 474ef8: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 474efb: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 474efd: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 474f00: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 474f02: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 474f05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 474f06: call 0x464bb2 */
  esp -= 4; W32(esp, 0x474f0bu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 474f0b: mov eax, 0x474f11 */
  eax = 0x474f11u;
/* 474f10: ret  */
  esp += 4; SPILL(); return;
}

void f_474f11(void) {
  LOAD_REGS();
L_474f11: /* 474f11: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 474f14: xor ebx, ebx */
  ebx = 0;
/* 474f16: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474f18: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 474f1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 474f1c: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 474f1f: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 474f21: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 474f24: call 0x461453 */
  esp -= 4; W32(esp, 0x474f29u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x474f11u: guest_unwind_done(); RELOAD(); goto L_474f11; } return; } RELOAD();
/* 474f29: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 474f2d: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 474f30: call 0x46228e */
  esp -= 4; W32(esp, 0x474f35u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x474f11u: guest_unwind_done(); RELOAD(); goto L_474f11; } return; } RELOAD();
/* 474f35: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 474f38: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 474f39: mov eax, esi */
  eax = esi;
/* 474f3b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 474f3c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 474f43: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 474f44: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 474f45: ret 8 */
  esp += 12; SPILL(); return;
}

void f_474f48(void) {
  LOAD_REGS();
L_474f48: /* 474f48: mov eax, 0x48ce04 */
  eax = 0x48ce04u;
/* 474f4d: call 0x4616c0 */
  esp -= 4; W32(esp, 0x474f52u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 474f52: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 474f53: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 474f54: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 474f55: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 474f56: mov esi, ecx */
  esi = ecx;
/* 474f58: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 474f5a: xor edi, edi */
  edi = 0;
/* 474f5c: and dword ptr [esi + 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 474f5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 474f60: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 474f63: call 0x466d1b */
  esp -= 4; W32(esp, 0x474f68u); SPILL(); f_466d1b(); if (g_unwind) return; RELOAD();
/* 474f68: and dword ptr [ebp - 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 474f6b: cmp byte ptr [ebp - 0x10], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff0u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 474f6f: jne 0x474f76 */
  if (!zf) goto L_474f76;
L_474f71: /* 474f71: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 474f73: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 474f74: jmp 0x474fa2 */
  goto L_474fa2;
L_474f76: /* 474f76: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474f78: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 474f7b: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 474f7f: call 0x46b09b */
  esp -= 4; W32(esp, 0x474f84u); SPILL(); f_46b09b(); if (g_unwind) return; RELOAD();
/* 474f84: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 474f86: jge 0x474f8d */
  if ((sf == of)) goto L_474f8d;
L_474f88: /* 474f88: xor edi, edi */
  edi = 0;
/* 474f8a: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 474f8b: jmp 0x474fa2 */
  goto L_474fa2;
L_474f8d: /* 474f8d: jle 0x474fa2 */
  if ((zf || sf != of)) goto L_474fa2;
L_474f8f: /* 474f8f: cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 474f92: jl 0x474f97 */
  if ((sf != of)) goto L_474f97;
L_474f94: /* 474f94: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
L_474f97: /* 474f97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 474f98: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 474f9b: mov ecx, esi */
  ecx = esi;
/* 474f9d: call 0x474e97 */
  esp -= 4; W32(esp, 0x474fa2u); SPILL(); f_474e97(); if (g_unwind) return; RELOAD();
L_474fa2: /* 474fa2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 474fa4: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 474fa7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 474fa9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 474faa: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 474fac: call 0x461453 */
  esp -= 4; W32(esp, 0x474fb1u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 474fb1: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 474fb4: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 474fb8: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 474fbb: call 0x46228e */
  esp -= 4; W32(esp, 0x474fc0u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 474fc0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 474fc3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 474fc4: mov eax, esi */
  eax = esi;
/* 474fc6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 474fc7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 474fce: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 474fcf: ret 8 */
  esp += 12; SPILL(); return;
}

void f_474fd2(void) {
  LOAD_REGS();
L_474fd2: /* 474fd2: mov eax, 0x48c9f8 */
  eax = 0x48c9f8u;
/* 474fd7: call 0x4616c0 */
  esp -= 4; W32(esp, 0x474fdcu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 474fdc: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 474fdf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 474fe0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 474fe1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 474fe2: mov esi, ecx */
  esi = ecx;
/* 474fe4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 474fe7: xor ebx, ebx */
  ebx = 0;
/* 474fe9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 474feb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 474fec: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 474fef: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 474ff2: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 474ff5: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 474ff8: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 474ffb: call 0x466d1b */
  esp -= 4; W32(esp, 0x475000u); SPILL(); f_466d1b(); if (g_unwind) return; RELOAD();
/* 475000: cmp byte ptr [ebp - 0x20], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe0u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 475003: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 475006: jne 0x47500d */
  if (!zf) goto L_47500d;
L_475008: /* 475008: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 47500b: jmp 0x475055 */
  goto L_475055;
L_47500d: /* 47500d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47500f: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 475012: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 475016: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 47501a: call 0x46567c */
  esp -= 4; W32(esp, 0x47501fu); SPILL(); f_46567c(); if (g_unwind) return; RELOAD();
/* 47501f: mov edi, eax */
  edi = eax;
/* 475021: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 475024: jne 0x475055 */
  if (!zf) goto L_475055;
L_475026: /* 475026: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
/* 47502d: jmp 0x475055 */
  goto L_475055;
L_475055: /* 475055: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475057: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47505a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47505b: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 47505e: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475060: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 475063: call 0x461453 */
  esp -= 4; W32(esp, 0x475068u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 475068: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47506c: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 47506f: call 0x46228e */
  esp -= 4; W32(esp, 0x475074u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 475074: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 475077: mov eax, edi */
  eax = edi;
/* 475079: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47507a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47507b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 475082: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 475083: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 475084: ret  */
  esp += 4; SPILL(); return;
}

void f_47502f(void) {
  LOAD_REGS();
L_47502f: /* 47502f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 475032: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 475034: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 475037: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475039: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 47503c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47503e: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 475041: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475042: call 0x464bb2 */
  esp -= 4; W32(esp, 0x475047u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 475047: mov eax, 0x47504d */
  eax = 0x47504du;
/* 47504c: ret  */
  esp += 4; SPILL(); return;
}

void f_47504d(void) {
  LOAD_REGS();
L_47504d: /* 47504d: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 475050: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 475053: xor ebx, ebx */
  ebx = 0;
/* 475055: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475057: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47505a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47505b: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 47505e: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475060: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 475063: call 0x461453 */
  esp -= 4; W32(esp, 0x475068u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47504du: guest_unwind_done(); RELOAD(); goto L_47504d; } return; } RELOAD();
/* 475068: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47506c: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 47506f: call 0x46228e */
  esp -= 4; W32(esp, 0x475074u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47504du: guest_unwind_done(); RELOAD(); goto L_47504d; } return; } RELOAD();
/* 475074: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 475077: mov eax, edi */
  eax = edi;
/* 475079: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47507a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47507b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 475082: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 475083: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 475084: ret  */
  esp += 4; SPILL(); return;
}

void f_475085(void) {
  LOAD_REGS();
L_475085: /* 475085: mov eax, 0x48ca0a */
  eax = 0x48ca0au;
/* 47508a: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47508fu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47508f: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 475092: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 475093: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 475094: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 475095: mov esi, ecx */
  esi = ecx;
/* 475097: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 47509a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47509c: xor ebx, ebx */
  ebx = 0;
/* 47509e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47509f: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 4750a2: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 4750a5: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 4750a8: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 4750ab: call 0x466d1b */
  esp -= 4; W32(esp, 0x4750b0u); SPILL(); f_466d1b(); if (g_unwind) return; RELOAD();
/* 4750b0: cmp byte ptr [ebp - 0x1c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4750b3: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4750b6: je 0x4750fe */
  if (zf) goto L_4750fe;
L_4750b8: /* 4750b8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4750ba: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4750bd: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4750c0: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 4750c4: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4750c8: call 0x46b0ba */
  esp -= 4; W32(esp, 0x4750cdu); SPILL(); f_46b0ba(); if (g_unwind) return; RELOAD();
/* 4750cd: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4750d0: jne 0x4750fe */
  if (!zf) goto L_4750fe;
L_4750d2: /* 4750d2: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* 4750d9: jmp 0x4750fe */
  goto L_4750fe;
L_4750fe: /* 4750fe: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475100: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 475103: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 475104: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 475107: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475109: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 47510c: call 0x461453 */
  esp -= 4; W32(esp, 0x475111u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 475111: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 475115: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 475118: call 0x46228e */
  esp -= 4; W32(esp, 0x47511du); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 47511d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 475120: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 475121: mov eax, esi */
  eax = esi;
/* 475123: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 475124: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47512b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47512c: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47512d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4750db(void) {
  LOAD_REGS();
L_4750db: /* 4750db: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 4750de: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4750e0: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4750e3: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4750e5: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4750e8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4750ea: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4750ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4750ee: call 0x464bb2 */
  esp -= 4; W32(esp, 0x4750f3u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 4750f3: mov eax, 0x4750f9 */
  eax = 0x4750f9u;
/* 4750f8: ret  */
  esp += 4; SPILL(); return;
}

void f_4750f9(void) {
  LOAD_REGS();
L_4750f9: /* 4750f9: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 4750fc: xor ebx, ebx */
  ebx = 0;
/* 4750fe: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475100: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 475103: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 475104: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 475107: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475109: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 47510c: call 0x461453 */
  esp -= 4; W32(esp, 0x475111u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4750f9u: guest_unwind_done(); RELOAD(); goto L_4750f9; } return; } RELOAD();
/* 475111: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 475115: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 475118: call 0x46228e */
  esp -= 4; W32(esp, 0x47511du); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4750f9u: guest_unwind_done(); RELOAD(); goto L_4750f9; } return; } RELOAD();
/* 47511d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 475120: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 475121: mov eax, esi */
  eax = esi;
/* 475123: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 475124: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47512b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47512c: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47512d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_475130(void) {
  LOAD_REGS();
L_475130: /* 475130: mov eax, 0x48ca1c */
  eax = 0x48ca1cu;
/* 475135: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47513au); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47513a: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47513d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47513e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47513f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 475140: mov esi, ecx */
  esi = ecx;
/* 475142: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 475145: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 475147: xor ebx, ebx */
  ebx = 0;
/* 475149: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47514a: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 47514d: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 475150: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 475153: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 475156: call 0x466d1b */
  esp -= 4; W32(esp, 0x47515bu); SPILL(); f_466d1b(); if (g_unwind) return; RELOAD();
/* 47515b: cmp byte ptr [ebp - 0x1c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47515e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 475161: je 0x4751a6 */
  if (zf) goto L_4751a6;
L_475163: /* 475163: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475165: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 475168: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 47516c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 475170: call 0x46b11d */
  esp -= 4; W32(esp, 0x475175u); SPILL(); f_46b11d(); if (g_unwind) return; RELOAD();
/* 475175: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 475178: jne 0x4751a6 */
  if (!zf) goto L_4751a6;
L_47517a: /* 47517a: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* 475181: jmp 0x4751a6 */
  goto L_4751a6;
L_4751a6: /* 4751a6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4751a8: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4751ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4751ac: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 4751af: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4751b1: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4751b4: call 0x461453 */
  esp -= 4; W32(esp, 0x4751b9u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 4751b9: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4751bd: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 4751c0: call 0x46228e */
  esp -= 4; W32(esp, 0x4751c5u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 4751c5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4751c8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4751c9: mov eax, esi */
  eax = esi;
/* 4751cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4751cc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4751d3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4751d4: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4751d5: ret  */
  esp += 4; SPILL(); return;
}

void f_475183(void) {
  LOAD_REGS();
L_475183: /* 475183: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 475186: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 475188: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 47518b: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47518d: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 475190: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 475192: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 475195: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475196: call 0x464bb2 */
  esp -= 4; W32(esp, 0x47519bu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 47519b: mov eax, 0x4751a1 */
  eax = 0x4751a1u;
/* 4751a0: ret  */
  esp += 4; SPILL(); return;
}

void f_4751a1(void) {
  LOAD_REGS();
L_4751a1: /* 4751a1: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 4751a4: xor ebx, ebx */
  ebx = 0;
/* 4751a6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4751a8: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4751ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4751ac: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 4751af: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4751b1: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4751b4: call 0x461453 */
  esp -= 4; W32(esp, 0x4751b9u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4751a1u: guest_unwind_done(); RELOAD(); goto L_4751a1; } return; } RELOAD();
/* 4751b9: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4751bd: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 4751c0: call 0x46228e */
  esp -= 4; W32(esp, 0x4751c5u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4751a1u: guest_unwind_done(); RELOAD(); goto L_4751a1; } return; } RELOAD();
/* 4751c5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4751c8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4751c9: mov eax, esi */
  eax = esi;
/* 4751cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4751cc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4751d3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4751d4: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4751d5: ret  */
  esp += 4; SPILL(); return;
}

void f_4751d6(void) {
  LOAD_REGS();
L_4751d6: /* 4751d6: mov eax, 0x48ca36 */
  eax = 0x48ca36u;
/* 4751db: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4751e0u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4751e0: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4751e3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4751e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4751e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4751e6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 4751e9: mov esi, ecx */
  esi = ecx;
/* 4751eb: xor ebx, ebx */
  ebx = 0;
/* 4751ed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4751ee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4751ef: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4751f2: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 4751f5: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 4751f8: call 0x466d56 */
  esp -= 4; W32(esp, 0x4751fdu); SPILL(); f_466d56(); if (g_unwind) return; RELOAD();
/* 4751fd: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 475200: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 475203: je 0x475284 */
  if (zf) goto L_475284;
L_475205: /* 475205: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 475208: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475209: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47520b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47520e: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475210: call 0x464a5a */
  esp -= 4; W32(esp, 0x475215u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 475215: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475216: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 47521a: call 0x46e4bd */
  esp -= 4; W32(esp, 0x47521fu); SPILL(); f_46e4bd(); if (g_unwind) return; RELOAD();
/* 47521f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 475220: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 475223: mov edi, eax */
  edi = eax;
/* 475225: call 0x461389 */
  esp -= 4; W32(esp, 0x47522au); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47522a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47522c: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47522f: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 475232: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 475234: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 475237: xor edx, edx */
  edx = 0;
/* 475239: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47523b: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 47523e: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 475241: lea ebx, [ebp - 0x18] */
  ebx = (uint32_t)(ebp + 0xffffffe8u);
/* 475244: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 475245: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475246: mov byte ptr [ebp - 0x1c], 1 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 47524a: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 47524d: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 475250: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 475251: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 475254: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 475258: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 475259: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47525a: mov ecx, edi */
  ecx = edi;
/* 47525c: call 0x468981 */
  esp -= 4; W32(esp, 0x475261u); SPILL(); f_468981(); if (g_unwind) return; RELOAD();
/* 475261: jmp 0x475284 */
  goto L_475284;
L_475284: /* 475284: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475286: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 475289: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47528d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47528f: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 475292: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475294: call 0x461453 */
  esp -= 4; W32(esp, 0x475299u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 475299: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47529d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4752a0: call 0x46228e */
  esp -= 4; W32(esp, 0x4752a5u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 4752a5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4752a8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4752a9: mov eax, esi */
  eax = esi;
/* 4752ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4752ac: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4752b3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4752b4: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4752b5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_475263(void) {
  LOAD_REGS();
L_475263: /* 475263: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 475266: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 475268: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 47526b: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47526d: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 475270: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 475272: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 475275: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475276: call 0x464bb2 */
  esp -= 4; W32(esp, 0x47527bu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 47527b: mov eax, 0x475281 */
  eax = 0x475281u;
/* 475280: ret  */
  esp += 4; SPILL(); return;
}

void f_475281(void) {
  LOAD_REGS();
L_475281: /* 475281: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 475284: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475286: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 475289: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47528d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47528f: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 475292: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475294: call 0x461453 */
  esp -= 4; W32(esp, 0x475299u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x475281u: guest_unwind_done(); RELOAD(); goto L_475281; } return; } RELOAD();
/* 475299: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47529d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4752a0: call 0x46228e */
  esp -= 4; W32(esp, 0x4752a5u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x475281u: guest_unwind_done(); RELOAD(); goto L_475281; } return; } RELOAD();
/* 4752a5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4752a8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4752a9: mov eax, esi */
  eax = esi;
/* 4752ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4752ac: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4752b3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4752b4: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4752b5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4752b8(void) {
  LOAD_REGS();
L_4752b8: /* 4752b8: mov eax, 0x48ca50 */
  eax = 0x48ca50u;
/* 4752bd: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4752c2u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4752c2: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4752c5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4752c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4752c7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4752c8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 4752cb: mov esi, ecx */
  esi = ecx;
/* 4752cd: xor ebx, ebx */
  ebx = 0;
/* 4752cf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4752d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4752d1: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4752d4: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 4752d7: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 4752da: call 0x466d56 */
  esp -= 4; W32(esp, 0x4752dfu); SPILL(); f_466d56(); if (g_unwind) return; RELOAD();
/* 4752df: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4752e2: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4752e5: je 0x475396 */
  if (zf) goto L_475396;
L_4752eb: /* 4752eb: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 4752ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4752ef: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4752f1: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 4752f4: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4752f7: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4752f9: call 0x464a5a */
  esp -= 4; W32(esp, 0x4752feu); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 4752fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4752ff: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 475303: call 0x46e4bd */
  esp -= 4; W32(esp, 0x475308u); SPILL(); f_46e4bd(); if (g_unwind) return; RELOAD();
/* 475308: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 475309: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 47530c: mov edi, eax */
  edi = eax;
/* 47530e: call 0x461389 */
  esp -= 4; W32(esp, 0x475313u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 475313: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475315: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 475318: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 47531a: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 47531d: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47531f: lea ebx, [ebp - 0x1c] */
  ebx = (uint32_t)(ebp + 0xffffffe4u);
/* 475322: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 475323: lea ebx, [ebp - 0x14] */
  ebx = (uint32_t)(ebp + 0xffffffecu);
/* 475326: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 475327: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475328: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 47532b: mov byte ptr [ebp - 0x2c], 1 */
  W8((uint32_t)(ebp + 0xffffffd4u), 0x1u);
/* 47532f: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 475332: xor eax, eax */
  eax = 0;
/* 475334: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475335: mov byte ptr [ebp - 0x34], dl */
  W8((uint32_t)(ebp + 0xffffffccu), (edx & 0xffu));
/* 475338: push dword ptr [ebp - 0x34] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffccu)); esp -= 4; W32(esp, v); }
/* 47533b: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 47533d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47533e: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 475341: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475342: mov ecx, edi */
  ecx = edi;
/* 475344: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 475348: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0x47534bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47534b: jmp 0x47536e */
  goto L_47536e;
L_47536e: /* 47536e: xor ebx, ebx */
  ebx = 0;
/* 475370: test byte ptr [ebp - 0x14], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffecu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 475374: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 475377: jne 0x475392 */
  if (!zf) goto L_475392;
L_475379: /* 475379: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 47537c: cmp eax, 0xffff8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffff8000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 475381: jl 0x475392 */
  if ((sf != of)) goto L_475392;
L_475383: /* 475383: cmp eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 475388: jg 0x475392 */
  if ((!zf && sf == of)) goto L_475392;
L_47538a: /* 47538a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 47538d: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
/* 475390: jmp 0x475396 */
  goto L_475396;
L_475392: /* 475392: or dword ptr [ebp - 0x14], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
L_475396: /* 475396: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475398: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47539b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47539c: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 47539f: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4753a1: call 0x461453 */
  esp -= 4; W32(esp, 0x4753a6u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 4753a6: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4753aa: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4753ad: call 0x46228e */
  esp -= 4; W32(esp, 0x4753b2u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 4753b2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4753b5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4753b6: mov eax, esi */
  eax = esi;
/* 4753b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4753b9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4753c0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4753c1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4753c2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_47534d(void) {
  LOAD_REGS();
L_47534d: /* 47534d: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 475350: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 475352: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 475355: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475357: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 47535a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47535c: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 47535f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475360: call 0x464bb2 */
  esp -= 4; W32(esp, 0x475365u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 475365: mov eax, 0x47536b */
  eax = 0x47536bu;
/* 47536a: ret  */
  esp += 4; SPILL(); return;
}

void f_47536b(void) {
  LOAD_REGS();
L_47536b: /* 47536b: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 47536e: xor ebx, ebx */
  ebx = 0;
/* 475370: test byte ptr [ebp - 0x14], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffecu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 475374: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 475377: jne 0x475392 */
  if (!zf) goto L_475392;
L_475379: /* 475379: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 47537c: cmp eax, 0xffff8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffff8000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 475381: jl 0x475392 */
  if ((sf != of)) goto L_475392;
L_475383: /* 475383: cmp eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 475388: jg 0x475392 */
  if ((!zf && sf == of)) goto L_475392;
L_47538a: /* 47538a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 47538d: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
/* 475390: jmp 0x475396 */
  goto L_475396;
L_475392: /* 475392: or dword ptr [ebp - 0x14], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
L_475396: /* 475396: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475398: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47539b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47539c: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 47539f: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4753a1: call 0x461453 */
  esp -= 4; W32(esp, 0x4753a6u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47536bu: guest_unwind_done(); RELOAD(); goto L_47536b; } return; } RELOAD();
/* 4753a6: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4753aa: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4753ad: call 0x46228e */
  esp -= 4; W32(esp, 0x4753b2u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47536bu: guest_unwind_done(); RELOAD(); goto L_47536b; } return; } RELOAD();
/* 4753b2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4753b5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4753b6: mov eax, esi */
  eax = esi;
/* 4753b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4753b9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4753c0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4753c1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4753c2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4753c5(void) {
  LOAD_REGS();
L_4753c5: /* 4753c5: mov eax, 0x48ca6a */
  eax = 0x48ca6au;
/* 4753ca: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4753cfu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4753cf: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4753d2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4753d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4753d4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4753d5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 4753d8: mov esi, ecx */
  esi = ecx;
/* 4753da: xor ebx, ebx */
  ebx = 0;
/* 4753dc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4753dd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4753de: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4753e1: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 4753e4: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 4753e7: call 0x466d56 */
  esp -= 4; W32(esp, 0x4753ecu); SPILL(); f_466d56(); if (g_unwind) return; RELOAD();
/* 4753ec: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4753ef: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4753f2: je 0x475473 */
  if (zf) goto L_475473;
L_4753f4: /* 4753f4: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 4753f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4753f8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4753fa: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4753fd: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4753ff: call 0x464a5a */
  esp -= 4; W32(esp, 0x475404u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 475404: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475405: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 475409: call 0x46e4bd */
  esp -= 4; W32(esp, 0x47540eu); SPILL(); f_46e4bd(); if (g_unwind) return; RELOAD();
/* 47540e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47540f: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 475412: mov edi, eax */
  edi = eax;
/* 475414: call 0x461389 */
  esp -= 4; W32(esp, 0x475419u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 475419: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47541b: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47541e: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 475421: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 475423: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 475426: xor edx, edx */
  edx = 0;
/* 475428: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47542a: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 47542d: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 475430: lea ebx, [ebp - 0x18] */
  ebx = (uint32_t)(ebp + 0xffffffe8u);
/* 475433: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 475434: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475435: mov byte ptr [ebp - 0x1c], 1 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 475439: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 47543c: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 47543f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 475440: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 475443: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 475447: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 475448: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475449: mov ecx, edi */
  ecx = edi;
/* 47544b: call 0x4689a8 */
  esp -= 4; W32(esp, 0x475450u); SPILL(); f_4689a8(); if (g_unwind) return; RELOAD();
/* 475450: jmp 0x475473 */
  goto L_475473;
L_475473: /* 475473: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475475: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 475478: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47547c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47547e: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 475481: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475483: call 0x461453 */
  esp -= 4; W32(esp, 0x475488u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 475488: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47548c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 47548f: call 0x46228e */
  esp -= 4; W32(esp, 0x475494u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 475494: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 475497: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 475498: mov eax, esi */
  eax = esi;
/* 47549a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47549b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4754a2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4754a3: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4754a4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_475452(void) {
  LOAD_REGS();
L_475452: /* 475452: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 475455: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 475457: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 47545a: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47545c: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 47545f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 475461: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 475464: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475465: call 0x464bb2 */
  esp -= 4; W32(esp, 0x47546au); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 47546a: mov eax, 0x475470 */
  eax = 0x475470u;
/* 47546f: ret  */
  esp += 4; SPILL(); return;
}

void f_475470(void) {
  LOAD_REGS();
L_475470: /* 475470: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 475473: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475475: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 475478: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47547c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47547e: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 475481: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475483: call 0x461453 */
  esp -= 4; W32(esp, 0x475488u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x475470u: guest_unwind_done(); RELOAD(); goto L_475470; } return; } RELOAD();
/* 475488: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47548c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 47548f: call 0x46228e */
  esp -= 4; W32(esp, 0x475494u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x475470u: guest_unwind_done(); RELOAD(); goto L_475470; } return; } RELOAD();
/* 475494: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 475497: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 475498: mov eax, esi */
  eax = esi;
/* 47549a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47549b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4754a2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4754a3: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4754a4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4754a7(void) {
  LOAD_REGS();
L_4754a7: /* 4754a7: mov eax, 0x48ca84 */
  eax = 0x48ca84u;
/* 4754ac: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4754b1u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4754b1: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4754b4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4754b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4754b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4754b7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 4754ba: mov esi, ecx */
  esi = ecx;
/* 4754bc: xor ebx, ebx */
  ebx = 0;
/* 4754be: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4754bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4754c0: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4754c3: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 4754c6: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 4754c9: call 0x466d56 */
  esp -= 4; W32(esp, 0x4754ceu); SPILL(); f_466d56(); if (g_unwind) return; RELOAD();
/* 4754ce: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4754d1: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4754d4: je 0x475584 */
  if (zf) goto L_475584;
L_4754da: /* 4754da: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 4754dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4754de: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4754e0: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 4754e3: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4754e6: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4754e8: call 0x464a5a */
  esp -= 4; W32(esp, 0x4754edu); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 4754ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4754ee: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4754f2: call 0x46e4bd */
  esp -= 4; W32(esp, 0x4754f7u); SPILL(); f_46e4bd(); if (g_unwind) return; RELOAD();
/* 4754f7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4754f8: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 4754fb: mov edi, eax */
  edi = eax;
/* 4754fd: call 0x461389 */
  esp -= 4; W32(esp, 0x475502u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 475502: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475504: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 475507: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 475509: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 47550c: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47550e: lea ebx, [ebp - 0x1c] */
  ebx = (uint32_t)(ebp + 0xffffffe4u);
/* 475511: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 475512: lea ebx, [ebp - 0x14] */
  ebx = (uint32_t)(ebp + 0xffffffecu);
/* 475515: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 475516: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475517: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 47551a: mov byte ptr [ebp - 0x2c], 1 */
  W8((uint32_t)(ebp + 0xffffffd4u), 0x1u);
/* 47551e: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 475521: xor eax, eax */
  eax = 0;
/* 475523: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475524: mov byte ptr [ebp - 0x34], dl */
  W8((uint32_t)(ebp + 0xffffffccu), (edx & 0xffu));
/* 475527: push dword ptr [ebp - 0x34] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffccu)); esp -= 4; W32(esp, v); }
/* 47552a: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 47552c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47552d: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 475530: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475531: mov ecx, edi */
  ecx = edi;
/* 475533: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 475537: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0x47553au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47553a: jmp 0x47555d */
  goto L_47555d;
L_47555d: /* 47555d: xor ebx, ebx */
  ebx = 0;
/* 47555f: test byte ptr [ebp - 0x14], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffecu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 475563: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 475566: jne 0x475580 */
  if (!zf) goto L_475580;
L_475568: /* 475568: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 47556b: cmp eax, 0x80000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 475570: jl 0x475580 */
  if ((sf != of)) goto L_475580;
L_475572: /* 475572: cmp eax, 0x7fffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 475577: jg 0x475580 */
  if ((!zf && sf == of)) goto L_475580;
L_475579: /* 475579: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 47557c: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 47557e: jmp 0x475584 */
  goto L_475584;
L_475580: /* 475580: or dword ptr [ebp - 0x14], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
L_475584: /* 475584: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475586: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 475589: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47558a: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 47558d: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47558f: call 0x461453 */
  esp -= 4; W32(esp, 0x475594u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 475594: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 475598: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 47559b: call 0x46228e */
  esp -= 4; W32(esp, 0x4755a0u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 4755a0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4755a3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4755a4: mov eax, esi */
  eax = esi;
/* 4755a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4755a7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4755ae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4755af: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4755b0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_47553c(void) {
  LOAD_REGS();
L_47553c: /* 47553c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 47553f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 475541: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 475544: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475546: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 475549: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47554b: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 47554e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47554f: call 0x464bb2 */
  esp -= 4; W32(esp, 0x475554u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 475554: mov eax, 0x47555a */
  eax = 0x47555au;
/* 475559: ret  */
  esp += 4; SPILL(); return;
}

void f_47555a(void) {
  LOAD_REGS();
L_47555a: /* 47555a: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 47555d: xor ebx, ebx */
  ebx = 0;
/* 47555f: test byte ptr [ebp - 0x14], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffecu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 475563: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 475566: jne 0x475580 */
  if (!zf) goto L_475580;
L_475568: /* 475568: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 47556b: cmp eax, 0x80000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 475570: jl 0x475580 */
  if ((sf != of)) goto L_475580;
L_475572: /* 475572: cmp eax, 0x7fffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 475577: jg 0x475580 */
  if ((!zf && sf == of)) goto L_475580;
L_475579: /* 475579: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 47557c: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 47557e: jmp 0x475584 */
  goto L_475584;
L_475580: /* 475580: or dword ptr [ebp - 0x14], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
L_475584: /* 475584: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475586: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 475589: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47558a: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 47558d: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47558f: call 0x461453 */
  esp -= 4; W32(esp, 0x475594u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47555au: guest_unwind_done(); RELOAD(); goto L_47555a; } return; } RELOAD();
/* 475594: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 475598: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 47559b: call 0x46228e */
  esp -= 4; W32(esp, 0x4755a0u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47555au: guest_unwind_done(); RELOAD(); goto L_47555a; } return; } RELOAD();
/* 4755a0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4755a3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4755a4: mov eax, esi */
  eax = esi;
/* 4755a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4755a7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4755ae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4755af: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4755b0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4755b3(void) {
  LOAD_REGS();
L_4755b3: /* 4755b3: mov eax, 0x48ca9e */
  eax = 0x48ca9eu;
/* 4755b8: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4755bdu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4755bd: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4755c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4755c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4755c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4755c3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 4755c6: mov esi, ecx */
  esi = ecx;
/* 4755c8: xor ebx, ebx */
  ebx = 0;
/* 4755ca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4755cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4755cc: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4755cf: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 4755d2: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 4755d5: call 0x466d56 */
  esp -= 4; W32(esp, 0x4755dau); SPILL(); f_466d56(); if (g_unwind) return; RELOAD();
/* 4755da: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4755dd: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4755e0: je 0x475661 */
  if (zf) goto L_475661;
L_4755e2: /* 4755e2: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 4755e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4755e6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4755e8: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4755eb: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4755ed: call 0x464a5a */
  esp -= 4; W32(esp, 0x4755f2u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 4755f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4755f3: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4755f7: call 0x46e4bd */
  esp -= 4; W32(esp, 0x4755fcu); SPILL(); f_46e4bd(); if (g_unwind) return; RELOAD();
/* 4755fc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4755fd: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 475600: mov edi, eax */
  edi = eax;
/* 475602: call 0x461389 */
  esp -= 4; W32(esp, 0x475607u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 475607: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475609: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47560c: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47560f: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 475611: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 475614: xor edx, edx */
  edx = 0;
/* 475616: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 475618: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 47561b: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 47561e: lea ebx, [ebp - 0x18] */
  ebx = (uint32_t)(ebp + 0xffffffe8u);
/* 475621: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 475622: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475623: mov byte ptr [ebp - 0x1c], 1 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 475627: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 47562a: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 47562d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 47562e: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 475631: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 475635: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 475636: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475637: mov ecx, edi */
  ecx = edi;
/* 475639: call 0x4689cf */
  esp -= 4; W32(esp, 0x47563eu); SPILL(); f_4689cf(); if (g_unwind) return; RELOAD();
/* 47563e: jmp 0x475661 */
  goto L_475661;
L_475661: /* 475661: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475663: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 475666: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47566a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47566c: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 47566f: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475671: call 0x461453 */
  esp -= 4; W32(esp, 0x475676u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 475676: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47567a: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 47567d: call 0x46228e */
  esp -= 4; W32(esp, 0x475682u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 475682: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 475685: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 475686: mov eax, esi */
  eax = esi;
/* 475688: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 475689: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 475690: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 475691: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 475692: ret 4 */
  esp += 8; SPILL(); return;
}

void f_475640(void) {
  LOAD_REGS();
L_475640: /* 475640: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 475643: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 475645: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 475648: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47564a: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 47564d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47564f: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 475652: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475653: call 0x464bb2 */
  esp -= 4; W32(esp, 0x475658u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 475658: mov eax, 0x47565e */
  eax = 0x47565eu;
/* 47565d: ret  */
  esp += 4; SPILL(); return;
}

void f_47565e(void) {
  LOAD_REGS();
L_47565e: /* 47565e: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 475661: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475663: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 475666: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47566a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47566c: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 47566f: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475671: call 0x461453 */
  esp -= 4; W32(esp, 0x475676u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47565eu: guest_unwind_done(); RELOAD(); goto L_47565e; } return; } RELOAD();
/* 475676: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47567a: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 47567d: call 0x46228e */
  esp -= 4; W32(esp, 0x475682u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47565eu: guest_unwind_done(); RELOAD(); goto L_47565e; } return; } RELOAD();
/* 475682: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 475685: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 475686: mov eax, esi */
  eax = esi;
/* 475688: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 475689: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 475690: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 475691: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 475692: ret 4 */
  esp += 8; SPILL(); return;
}

void f_475695(void) {
  LOAD_REGS();
L_475695: /* 475695: mov eax, 0x48cab8 */
  eax = 0x48cab8u;
/* 47569a: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47569fu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47569f: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4756a2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4756a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4756a4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4756a5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 4756a8: mov esi, ecx */
  esi = ecx;
/* 4756aa: xor ebx, ebx */
  ebx = 0;
/* 4756ac: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4756ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4756ae: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4756b1: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 4756b4: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 4756b7: call 0x466d56 */
  esp -= 4; W32(esp, 0x4756bcu); SPILL(); f_466d56(); if (g_unwind) return; RELOAD();
/* 4756bc: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4756bf: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4756c2: je 0x475743 */
  if (zf) goto L_475743;
L_4756c4: /* 4756c4: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 4756c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4756c8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4756ca: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4756cd: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4756cf: call 0x464a5a */
  esp -= 4; W32(esp, 0x4756d4u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 4756d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4756d5: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4756d9: call 0x46e4bd */
  esp -= 4; W32(esp, 0x4756deu); SPILL(); f_46e4bd(); if (g_unwind) return; RELOAD();
/* 4756de: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4756df: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 4756e2: mov edi, eax */
  edi = eax;
/* 4756e4: call 0x461389 */
  esp -= 4; W32(esp, 0x4756e9u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 4756e9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4756eb: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4756ee: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4756f1: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4756f3: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 4756f6: xor edx, edx */
  edx = 0;
/* 4756f8: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4756fa: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 4756fd: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 475700: lea ebx, [ebp - 0x18] */
  ebx = (uint32_t)(ebp + 0xffffffe8u);
/* 475703: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 475704: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475705: mov byte ptr [ebp - 0x1c], 1 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 475709: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 47570c: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 47570f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 475710: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 475713: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 475717: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 475718: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475719: mov ecx, edi */
  ecx = edi;
/* 47571b: call 0x4689f6 */
  esp -= 4; W32(esp, 0x475720u); SPILL(); f_4689f6(); if (g_unwind) return; RELOAD();
/* 475720: jmp 0x475743 */
  goto L_475743;
L_475743: /* 475743: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475745: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 475748: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47574c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47574e: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 475751: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475753: call 0x461453 */
  esp -= 4; W32(esp, 0x475758u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 475758: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47575c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 47575f: call 0x46228e */
  esp -= 4; W32(esp, 0x475764u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 475764: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 475767: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 475768: mov eax, esi */
  eax = esi;
/* 47576a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47576b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 475772: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 475773: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 475774: ret 4 */
  esp += 8; SPILL(); return;
}

void f_475722(void) {
  LOAD_REGS();
L_475722: /* 475722: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 475725: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 475727: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 47572a: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47572c: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 47572f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 475731: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 475734: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475735: call 0x464bb2 */
  esp -= 4; W32(esp, 0x47573au); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 47573a: mov eax, 0x475740 */
  eax = 0x475740u;
/* 47573f: ret  */
  esp += 4; SPILL(); return;
}

void f_475740(void) {
  LOAD_REGS();
L_475740: /* 475740: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 475743: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475745: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 475748: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47574c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47574e: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 475751: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475753: call 0x461453 */
  esp -= 4; W32(esp, 0x475758u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x475740u: guest_unwind_done(); RELOAD(); goto L_475740; } return; } RELOAD();
/* 475758: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47575c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 47575f: call 0x46228e */
  esp -= 4; W32(esp, 0x475764u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x475740u: guest_unwind_done(); RELOAD(); goto L_475740; } return; } RELOAD();
/* 475764: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 475767: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 475768: mov eax, esi */
  eax = esi;
/* 47576a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47576b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 475772: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 475773: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 475774: ret 4 */
  esp += 8; SPILL(); return;
}

void f_475777(void) {
  LOAD_REGS();
L_475777: /* 475777: mov eax, 0x48cad2 */
  eax = 0x48cad2u;
/* 47577c: call 0x4616c0 */
  esp -= 4; W32(esp, 0x475781u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 475781: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 475784: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 475785: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 475786: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 475787: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 47578a: mov esi, ecx */
  esi = ecx;
/* 47578c: xor ebx, ebx */
  ebx = 0;
/* 47578e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47578f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 475790: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 475793: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 475796: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 475799: call 0x466d56 */
  esp -= 4; W32(esp, 0x47579eu); SPILL(); f_466d56(); if (g_unwind) return; RELOAD();
/* 47579e: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4757a1: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4757a4: je 0x475825 */
  if (zf) goto L_475825;
L_4757a6: /* 4757a6: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 4757a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4757aa: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4757ac: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4757af: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4757b1: call 0x464a5a */
  esp -= 4; W32(esp, 0x4757b6u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 4757b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4757b7: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4757bb: call 0x46e4bd */
  esp -= 4; W32(esp, 0x4757c0u); SPILL(); f_46e4bd(); if (g_unwind) return; RELOAD();
/* 4757c0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4757c1: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 4757c4: mov edi, eax */
  edi = eax;
/* 4757c6: call 0x461389 */
  esp -= 4; W32(esp, 0x4757cbu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 4757cb: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4757cd: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4757d0: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4757d3: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4757d5: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 4757d8: xor edx, edx */
  edx = 0;
/* 4757da: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4757dc: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 4757df: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 4757e2: lea ebx, [ebp - 0x18] */
  ebx = (uint32_t)(ebp + 0xffffffe8u);
/* 4757e5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4757e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4757e7: mov byte ptr [ebp - 0x1c], 1 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 4757eb: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 4757ee: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 4757f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4757f2: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 4757f5: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 4757f9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4757fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4757fb: mov ecx, edi */
  ecx = edi;
/* 4757fd: call 0x468836 */
  esp -= 4; W32(esp, 0x475802u); SPILL(); f_468836(); if (g_unwind) return; RELOAD();
/* 475802: jmp 0x475825 */
  goto L_475825;
L_475825: /* 475825: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475827: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47582a: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47582e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 475830: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 475833: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475835: call 0x461453 */
  esp -= 4; W32(esp, 0x47583au); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 47583a: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47583e: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 475841: call 0x46228e */
  esp -= 4; W32(esp, 0x475846u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 475846: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 475849: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47584a: mov eax, esi */
  eax = esi;
/* 47584c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47584d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 475854: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 475855: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 475856: ret 4 */
  esp += 8; SPILL(); return;
}

void f_475804(void) {
  LOAD_REGS();
L_475804: /* 475804: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 475807: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 475809: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 47580c: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47580e: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 475811: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 475813: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 475816: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475817: call 0x464bb2 */
  esp -= 4; W32(esp, 0x47581cu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 47581c: mov eax, 0x475822 */
  eax = 0x475822u;
/* 475821: ret  */
  esp += 4; SPILL(); return;
}

void f_475822(void) {
  LOAD_REGS();
L_475822: /* 475822: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 475825: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475827: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47582a: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47582e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 475830: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 475833: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475835: call 0x461453 */
  esp -= 4; W32(esp, 0x47583au); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x475822u: guest_unwind_done(); RELOAD(); goto L_475822; } return; } RELOAD();
/* 47583a: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47583e: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 475841: call 0x46228e */
  esp -= 4; W32(esp, 0x475846u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x475822u: guest_unwind_done(); RELOAD(); goto L_475822; } return; } RELOAD();
/* 475846: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 475849: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47584a: mov eax, esi */
  eax = esi;
/* 47584c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47584d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 475854: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 475855: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 475856: ret 4 */
  esp += 8; SPILL(); return;
}

void f_475859(void) {
  LOAD_REGS();
L_475859: /* 475859: mov eax, 0x48caec */
  eax = 0x48caecu;
/* 47585e: call 0x4616c0 */
  esp -= 4; W32(esp, 0x475863u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 475863: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 475866: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 475867: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 475868: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 475869: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 47586c: mov esi, ecx */
  esi = ecx;
/* 47586e: xor ebx, ebx */
  ebx = 0;
/* 475870: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 475871: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 475872: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 475875: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 475878: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 47587b: call 0x466d56 */
  esp -= 4; W32(esp, 0x475880u); SPILL(); f_466d56(); if (g_unwind) return; RELOAD();
/* 475880: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 475883: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 475886: je 0x475907 */
  if (zf) goto L_475907;
L_475888: /* 475888: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 47588b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47588c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47588e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 475891: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475893: call 0x464a5a */
  esp -= 4; W32(esp, 0x475898u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 475898: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475899: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 47589d: call 0x46e4bd */
  esp -= 4; W32(esp, 0x4758a2u); SPILL(); f_46e4bd(); if (g_unwind) return; RELOAD();
/* 4758a2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4758a3: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 4758a6: mov edi, eax */
  edi = eax;
/* 4758a8: call 0x461389 */
  esp -= 4; W32(esp, 0x4758adu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 4758ad: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4758af: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4758b2: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4758b5: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4758b7: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 4758ba: xor edx, edx */
  edx = 0;
/* 4758bc: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4758be: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 4758c1: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 4758c4: lea ebx, [ebp - 0x18] */
  ebx = (uint32_t)(ebp + 0xffffffe8u);
/* 4758c7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4758c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4758c9: mov byte ptr [ebp - 0x1c], 1 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 4758cd: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 4758d0: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 4758d3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4758d4: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 4758d7: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 4758db: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4758dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4758dd: mov ecx, edi */
  ecx = edi;
/* 4758df: call 0x46885d */
  esp -= 4; W32(esp, 0x4758e4u); SPILL(); f_46885d(); if (g_unwind) return; RELOAD();
/* 4758e4: jmp 0x475907 */
  goto L_475907;
L_475907: /* 475907: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475909: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47590c: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 475910: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 475912: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 475915: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475917: call 0x461453 */
  esp -= 4; W32(esp, 0x47591cu); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 47591c: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 475920: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 475923: call 0x46228e */
  esp -= 4; W32(esp, 0x475928u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 475928: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47592b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47592c: mov eax, esi */
  eax = esi;
/* 47592e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47592f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 475936: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 475937: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 475938: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4758e6(void) {
  LOAD_REGS();
L_4758e6: /* 4758e6: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 4758e9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4758eb: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4758ee: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4758f0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4758f3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4758f5: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4758f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4758f9: call 0x464bb2 */
  esp -= 4; W32(esp, 0x4758feu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 4758fe: mov eax, 0x475904 */
  eax = 0x475904u;
/* 475903: ret  */
  esp += 4; SPILL(); return;
}

void f_475904(void) {
  LOAD_REGS();
L_475904: /* 475904: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 475907: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475909: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47590c: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 475910: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 475912: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 475915: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475917: call 0x461453 */
  esp -= 4; W32(esp, 0x47591cu); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x475904u: guest_unwind_done(); RELOAD(); goto L_475904; } return; } RELOAD();
/* 47591c: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 475920: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 475923: call 0x46228e */
  esp -= 4; W32(esp, 0x475928u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x475904u: guest_unwind_done(); RELOAD(); goto L_475904; } return; } RELOAD();
/* 475928: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47592b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47592c: mov eax, esi */
  eax = esi;
/* 47592e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47592f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 475936: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 475937: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 475938: ret 4 */
  esp += 8; SPILL(); return;
}

void f_47593b(void) {
  LOAD_REGS();
L_47593b: /* 47593b: mov eax, 0x48cb06 */
  eax = 0x48cb06u;
/* 475940: call 0x4616c0 */
  esp -= 4; W32(esp, 0x475945u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 475945: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 475948: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 475949: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47594a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47594b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 47594e: mov esi, ecx */
  esi = ecx;
/* 475950: xor ebx, ebx */
  ebx = 0;
/* 475952: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 475953: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 475954: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 475957: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 47595a: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 47595d: call 0x466d56 */
  esp -= 4; W32(esp, 0x475962u); SPILL(); f_466d56(); if (g_unwind) return; RELOAD();
/* 475962: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 475965: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 475968: je 0x4759e9 */
  if (zf) goto L_4759e9;
L_47596a: /* 47596a: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 47596d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47596e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475970: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 475973: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475975: call 0x464a5a */
  esp -= 4; W32(esp, 0x47597au); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47597a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47597b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 47597f: call 0x46e4bd */
  esp -= 4; W32(esp, 0x475984u); SPILL(); f_46e4bd(); if (g_unwind) return; RELOAD();
/* 475984: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 475985: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 475988: mov edi, eax */
  edi = eax;
/* 47598a: call 0x461389 */
  esp -= 4; W32(esp, 0x47598fu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47598f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475991: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 475994: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 475997: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 475999: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 47599c: xor edx, edx */
  edx = 0;
/* 47599e: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4759a0: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 4759a3: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 4759a6: lea ebx, [ebp - 0x18] */
  ebx = (uint32_t)(ebp + 0xffffffe8u);
/* 4759a9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4759aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4759ab: mov byte ptr [ebp - 0x1c], 1 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 4759af: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 4759b2: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 4759b5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4759b6: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 4759b9: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 4759bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4759be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4759bf: mov ecx, edi */
  ecx = edi;
/* 4759c1: call 0x4696e7 */
  esp -= 4; W32(esp, 0x4759c6u); SPILL(); f_4696e7(); if (g_unwind) return; RELOAD();
/* 4759c6: jmp 0x4759e9 */
  goto L_4759e9;
L_4759e9: /* 4759e9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4759eb: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4759ee: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4759f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4759f4: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 4759f7: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4759f9: call 0x461453 */
  esp -= 4; W32(esp, 0x4759feu); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 4759fe: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 475a02: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 475a05: call 0x46228e */
  esp -= 4; W32(esp, 0x475a0au); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 475a0a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 475a0d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 475a0e: mov eax, esi */
  eax = esi;
/* 475a10: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 475a11: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 475a18: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 475a19: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 475a1a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4759c8(void) {
  LOAD_REGS();
L_4759c8: /* 4759c8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 4759cb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4759cd: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4759d0: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4759d2: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4759d5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4759d7: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4759da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4759db: call 0x464bb2 */
  esp -= 4; W32(esp, 0x4759e0u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 4759e0: mov eax, 0x4759e6 */
  eax = 0x4759e6u;
/* 4759e5: ret  */
  esp += 4; SPILL(); return;
}

void f_4759e6(void) {
  LOAD_REGS();
L_4759e6: /* 4759e6: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 4759e9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4759eb: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4759ee: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4759f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4759f4: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 4759f7: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4759f9: call 0x461453 */
  esp -= 4; W32(esp, 0x4759feu); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4759e6u: guest_unwind_done(); RELOAD(); goto L_4759e6; } return; } RELOAD();
/* 4759fe: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 475a02: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 475a05: call 0x46228e */
  esp -= 4; W32(esp, 0x475a0au); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4759e6u: guest_unwind_done(); RELOAD(); goto L_4759e6; } return; } RELOAD();
/* 475a0a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 475a0d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 475a0e: mov eax, esi */
  eax = esi;
/* 475a10: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 475a11: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 475a18: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 475a19: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 475a1a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_475a1d(void) {
  LOAD_REGS();
L_475a1d: /* 475a1d: mov eax, 0x48cb20 */
  eax = 0x48cb20u;
/* 475a22: call 0x4616c0 */
  esp -= 4; W32(esp, 0x475a27u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 475a27: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 475a2a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 475a2b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 475a2c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 475a2d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 475a30: mov esi, ecx */
  esi = ecx;
/* 475a32: xor ebx, ebx */
  ebx = 0;
/* 475a34: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 475a35: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 475a36: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 475a39: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 475a3c: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 475a3f: call 0x466d56 */
  esp -= 4; W32(esp, 0x475a44u); SPILL(); f_466d56(); if (g_unwind) return; RELOAD();
/* 475a44: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 475a47: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 475a4a: je 0x475acb */
  if (zf) goto L_475acb;
L_475a4c: /* 475a4c: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 475a4f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475a50: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475a52: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 475a55: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475a57: call 0x464a5a */
  esp -= 4; W32(esp, 0x475a5cu); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 475a5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475a5d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 475a61: call 0x46e4bd */
  esp -= 4; W32(esp, 0x475a66u); SPILL(); f_46e4bd(); if (g_unwind) return; RELOAD();
/* 475a66: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 475a67: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 475a6a: mov edi, eax */
  edi = eax;
/* 475a6c: call 0x461389 */
  esp -= 4; W32(esp, 0x475a71u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 475a71: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475a73: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 475a76: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 475a79: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 475a7b: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 475a7e: xor edx, edx */
  edx = 0;
/* 475a80: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 475a82: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 475a85: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 475a88: lea ebx, [ebp - 0x18] */
  ebx = (uint32_t)(ebp + 0xffffffe8u);
/* 475a8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 475a8c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475a8d: mov byte ptr [ebp - 0x1c], 1 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 475a91: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 475a94: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 475a97: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 475a98: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 475a9b: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 475a9f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 475aa0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475aa1: mov ecx, edi */
  ecx = edi;
/* 475aa3: call 0x468884 */
  esp -= 4; W32(esp, 0x475aa8u); SPILL(); f_468884(); if (g_unwind) return; RELOAD();
/* 475aa8: jmp 0x475acb */
  goto L_475acb;
L_475acb: /* 475acb: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475acd: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 475ad0: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 475ad4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 475ad6: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 475ad9: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475adb: call 0x461453 */
  esp -= 4; W32(esp, 0x475ae0u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 475ae0: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 475ae4: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 475ae7: call 0x46228e */
  esp -= 4; W32(esp, 0x475aecu); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 475aec: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 475aef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 475af0: mov eax, esi */
  eax = esi;
/* 475af2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 475af3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 475afa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 475afb: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 475afc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_475aaa(void) {
  LOAD_REGS();
L_475aaa: /* 475aaa: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 475aad: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 475aaf: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 475ab2: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475ab4: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 475ab7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 475ab9: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 475abc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475abd: call 0x464bb2 */
  esp -= 4; W32(esp, 0x475ac2u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 475ac2: mov eax, 0x475ac8 */
  eax = 0x475ac8u;
/* 475ac7: ret  */
  esp += 4; SPILL(); return;
}

void f_475ac8(void) {
  LOAD_REGS();
L_475ac8: /* 475ac8: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 475acb: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475acd: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 475ad0: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 475ad4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 475ad6: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 475ad9: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475adb: call 0x461453 */
  esp -= 4; W32(esp, 0x475ae0u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x475ac8u: guest_unwind_done(); RELOAD(); goto L_475ac8; } return; } RELOAD();
/* 475ae0: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 475ae4: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 475ae7: call 0x46228e */
  esp -= 4; W32(esp, 0x475aecu); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x475ac8u: guest_unwind_done(); RELOAD(); goto L_475ac8; } return; } RELOAD();
/* 475aec: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 475aef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 475af0: mov eax, esi */
  eax = esi;
/* 475af2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 475af3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 475afa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 475afb: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 475afc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_475aff(void) {
  LOAD_REGS();
L_475aff: /* 475aff: mov eax, 0x48cb3a */
  eax = 0x48cb3au;
/* 475b04: call 0x4616c0 */
  esp -= 4; W32(esp, 0x475b09u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 475b09: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 475b0c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 475b0d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 475b0e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 475b0f: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 475b12: mov esi, ecx */
  esi = ecx;
/* 475b14: xor ebx, ebx */
  ebx = 0;
/* 475b16: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 475b17: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 475b18: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 475b1b: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 475b1e: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 475b21: call 0x466d56 */
  esp -= 4; W32(esp, 0x475b26u); SPILL(); f_466d56(); if (g_unwind) return; RELOAD();
/* 475b26: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 475b29: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 475b2c: je 0x475bad */
  if (zf) goto L_475bad;
L_475b2e: /* 475b2e: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 475b31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475b32: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475b34: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 475b37: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475b39: call 0x464a5a */
  esp -= 4; W32(esp, 0x475b3eu); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 475b3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475b3f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 475b43: call 0x46e4bd */
  esp -= 4; W32(esp, 0x475b48u); SPILL(); f_46e4bd(); if (g_unwind) return; RELOAD();
/* 475b48: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 475b49: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 475b4c: mov edi, eax */
  edi = eax;
/* 475b4e: call 0x461389 */
  esp -= 4; W32(esp, 0x475b53u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 475b53: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475b55: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 475b58: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 475b5b: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 475b5d: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 475b60: xor edx, edx */
  edx = 0;
/* 475b62: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 475b64: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 475b67: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 475b6a: lea ebx, [ebp - 0x18] */
  ebx = (uint32_t)(ebp + 0xffffffe8u);
/* 475b6d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 475b6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475b6f: mov byte ptr [ebp - 0x1c], 1 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 475b73: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 475b76: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 475b79: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 475b7a: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 475b7d: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 475b81: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 475b82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475b83: mov ecx, edi */
  ecx = edi;
/* 475b85: call 0x4688ab */
  esp -= 4; W32(esp, 0x475b8au); SPILL(); f_4688ab(); if (g_unwind) return; RELOAD();
/* 475b8a: jmp 0x475bad */
  goto L_475bad;
L_475bad: /* 475bad: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475baf: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 475bb2: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 475bb6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 475bb8: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 475bbb: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475bbd: call 0x461453 */
  esp -= 4; W32(esp, 0x475bc2u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 475bc2: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 475bc6: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 475bc9: call 0x46228e */
  esp -= 4; W32(esp, 0x475bceu); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 475bce: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 475bd1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 475bd2: mov eax, esi */
  eax = esi;
/* 475bd4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 475bd5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 475bdc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 475bdd: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 475bde: ret 4 */
  esp += 8; SPILL(); return;
}

void f_475b8c(void) {
  LOAD_REGS();
L_475b8c: /* 475b8c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 475b8f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 475b91: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 475b94: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475b96: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 475b99: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 475b9b: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 475b9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475b9f: call 0x464bb2 */
  esp -= 4; W32(esp, 0x475ba4u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 475ba4: mov eax, 0x475baa */
  eax = 0x475baau;
/* 475ba9: ret  */
  esp += 4; SPILL(); return;
}

void f_475baa(void) {
  LOAD_REGS();
L_475baa: /* 475baa: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 475bad: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475baf: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 475bb2: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 475bb6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 475bb8: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 475bbb: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475bbd: call 0x461453 */
  esp -= 4; W32(esp, 0x475bc2u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x475baau: guest_unwind_done(); RELOAD(); goto L_475baa; } return; } RELOAD();
/* 475bc2: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 475bc6: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 475bc9: call 0x46228e */
  esp -= 4; W32(esp, 0x475bceu); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x475baau: guest_unwind_done(); RELOAD(); goto L_475baa; } return; } RELOAD();
/* 475bce: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 475bd1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 475bd2: mov eax, esi */
  eax = esi;
/* 475bd4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 475bd5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 475bdc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 475bdd: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 475bde: ret 4 */
  esp += 8; SPILL(); return;
}

void f_475be1(void) {
  LOAD_REGS();
L_475be1: /* 475be1: mov eax, 0x48cb54 */
  eax = 0x48cb54u;
/* 475be6: call 0x4616c0 */
  esp -= 4; W32(esp, 0x475bebu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 475beb: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 475bee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 475bef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 475bf0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 475bf1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 475bf4: mov esi, ecx */
  esi = ecx;
/* 475bf6: xor ebx, ebx */
  ebx = 0;
/* 475bf8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 475bf9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 475bfa: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 475bfd: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 475c00: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 475c03: call 0x466d56 */
  esp -= 4; W32(esp, 0x475c08u); SPILL(); f_466d56(); if (g_unwind) return; RELOAD();
/* 475c08: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 475c0b: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 475c0e: je 0x475c8f */
  if (zf) goto L_475c8f;
L_475c10: /* 475c10: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 475c13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475c14: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475c16: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 475c19: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475c1b: call 0x464a5a */
  esp -= 4; W32(esp, 0x475c20u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 475c20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475c21: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 475c25: call 0x46e4bd */
  esp -= 4; W32(esp, 0x475c2au); SPILL(); f_46e4bd(); if (g_unwind) return; RELOAD();
/* 475c2a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 475c2b: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 475c2e: mov edi, eax */
  edi = eax;
/* 475c30: call 0x461389 */
  esp -= 4; W32(esp, 0x475c35u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 475c35: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475c37: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 475c3a: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 475c3d: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 475c3f: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 475c42: xor edx, edx */
  edx = 0;
/* 475c44: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 475c46: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 475c49: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 475c4c: lea ebx, [ebp - 0x18] */
  ebx = (uint32_t)(ebp + 0xffffffe8u);
/* 475c4f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 475c50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475c51: mov byte ptr [ebp - 0x1c], 1 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 475c55: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 475c58: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 475c5b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 475c5c: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 475c5f: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 475c63: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 475c64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475c65: mov ecx, edi */
  ecx = edi;
/* 475c67: call 0x4688d2 */
  esp -= 4; W32(esp, 0x475c6cu); SPILL(); f_4688d2(); if (g_unwind) return; RELOAD();
/* 475c6c: jmp 0x475c8f */
  goto L_475c8f;
L_475c8f: /* 475c8f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475c91: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 475c94: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 475c98: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 475c9a: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 475c9d: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475c9f: call 0x461453 */
  esp -= 4; W32(esp, 0x475ca4u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 475ca4: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 475ca8: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 475cab: call 0x46228e */
  esp -= 4; W32(esp, 0x475cb0u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 475cb0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 475cb3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 475cb4: mov eax, esi */
  eax = esi;
/* 475cb6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 475cb7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 475cbe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 475cbf: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 475cc0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_475c6e(void) {
  LOAD_REGS();
L_475c6e: /* 475c6e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 475c71: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 475c73: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 475c76: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475c78: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 475c7b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 475c7d: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 475c80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475c81: call 0x464bb2 */
  esp -= 4; W32(esp, 0x475c86u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 475c86: mov eax, 0x475c8c */
  eax = 0x475c8cu;
/* 475c8b: ret  */
  esp += 4; SPILL(); return;
}

void f_475c8c(void) {
  LOAD_REGS();
L_475c8c: /* 475c8c: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 475c8f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475c91: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 475c94: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 475c98: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 475c9a: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 475c9d: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475c9f: call 0x461453 */
  esp -= 4; W32(esp, 0x475ca4u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x475c8cu: guest_unwind_done(); RELOAD(); goto L_475c8c; } return; } RELOAD();
/* 475ca4: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 475ca8: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 475cab: call 0x46228e */
  esp -= 4; W32(esp, 0x475cb0u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x475c8cu: guest_unwind_done(); RELOAD(); goto L_475c8c; } return; } RELOAD();
/* 475cb0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 475cb3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 475cb4: mov eax, esi */
  eax = esi;
/* 475cb6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 475cb7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 475cbe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 475cbf: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 475cc0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_475cc3(void) {
  LOAD_REGS();
L_475cc3: /* 475cc3: mov eax, 0x48cb6e */
  eax = 0x48cb6eu;
/* 475cc8: call 0x4616c0 */
  esp -= 4; W32(esp, 0x475ccdu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 475ccd: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 475cd0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 475cd1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 475cd2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 475cd3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 475cd6: mov esi, ecx */
  esi = ecx;
/* 475cd8: xor ebx, ebx */
  ebx = 0;
/* 475cda: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 475cdb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 475cdc: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 475cdf: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 475ce2: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 475ce5: call 0x466d56 */
  esp -= 4; W32(esp, 0x475ceau); SPILL(); f_466d56(); if (g_unwind) return; RELOAD();
/* 475cea: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 475ced: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 475cf0: je 0x475d71 */
  if (zf) goto L_475d71;
L_475cf2: /* 475cf2: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 475cf5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475cf6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475cf8: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 475cfb: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475cfd: call 0x464a5a */
  esp -= 4; W32(esp, 0x475d02u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 475d02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475d03: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 475d07: call 0x46e4bd */
  esp -= 4; W32(esp, 0x475d0cu); SPILL(); f_46e4bd(); if (g_unwind) return; RELOAD();
/* 475d0c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 475d0d: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 475d10: mov edi, eax */
  edi = eax;
/* 475d12: call 0x461389 */
  esp -= 4; W32(esp, 0x475d17u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 475d17: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475d19: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 475d1c: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 475d1f: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 475d21: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 475d24: xor edx, edx */
  edx = 0;
/* 475d26: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 475d28: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 475d2b: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 475d2e: lea ebx, [ebp - 0x18] */
  ebx = (uint32_t)(ebp + 0xffffffe8u);
/* 475d31: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 475d32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475d33: mov byte ptr [ebp - 0x1c], 1 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 475d37: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 475d3a: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 475d3d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 475d3e: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 475d41: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 475d45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 475d46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475d47: mov ecx, edi */
  ecx = edi;
/* 475d49: call 0x4688f9 */
  esp -= 4; W32(esp, 0x475d4eu); SPILL(); f_4688f9(); if (g_unwind) return; RELOAD();
/* 475d4e: jmp 0x475d71 */
  goto L_475d71;
L_475d71: /* 475d71: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475d73: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 475d76: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 475d7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 475d7c: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 475d7f: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475d81: call 0x461453 */
  esp -= 4; W32(esp, 0x475d86u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 475d86: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 475d8a: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 475d8d: call 0x46228e */
  esp -= 4; W32(esp, 0x475d92u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 475d92: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 475d95: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 475d96: mov eax, esi */
  eax = esi;
/* 475d98: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 475d99: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 475da0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 475da1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 475da2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_475d50(void) {
  LOAD_REGS();
L_475d50: /* 475d50: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 475d53: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 475d55: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 475d58: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475d5a: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 475d5d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 475d5f: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 475d62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475d63: call 0x464bb2 */
  esp -= 4; W32(esp, 0x475d68u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 475d68: mov eax, 0x475d6e */
  eax = 0x475d6eu;
/* 475d6d: ret  */
  esp += 4; SPILL(); return;
}

void f_475d6e(void) {
  LOAD_REGS();
L_475d6e: /* 475d6e: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 475d71: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475d73: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 475d76: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 475d7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 475d7c: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 475d7f: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475d81: call 0x461453 */
  esp -= 4; W32(esp, 0x475d86u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x475d6eu: guest_unwind_done(); RELOAD(); goto L_475d6e; } return; } RELOAD();
/* 475d86: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 475d8a: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 475d8d: call 0x46228e */
  esp -= 4; W32(esp, 0x475d92u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x475d6eu: guest_unwind_done(); RELOAD(); goto L_475d6e; } return; } RELOAD();
/* 475d92: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 475d95: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 475d96: mov eax, esi */
  eax = esi;
/* 475d98: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 475d99: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 475da0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 475da1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 475da2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_475da5(void) {
  LOAD_REGS();
L_475da5: /* 475da5: mov eax, 0x48cb80 */
  eax = 0x48cb80u;
/* 475daa: call 0x4616c0 */
  esp -= 4; W32(esp, 0x475dafu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 475daf: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 475db2: and byte ptr [ebp - 0x11], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffefu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffefu), r);
  }
/* 475db6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 475db7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 475db8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 475db9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 475dbc: mov esi, ecx */
  esi = ecx;
/* 475dbe: xor edi, edi */
  edi = 0;
/* 475dc0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 475dc1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 475dc2: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 475dc5: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 475dc8: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 475dcb: call 0x466d56 */
  esp -= 4; W32(esp, 0x475dd0u); SPILL(); f_466d56(); if (g_unwind) return; RELOAD();
/* 475dd0: cmp byte ptr [ebp - 0x20], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe0u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 475dd4: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 475dd7: je 0x475e31 */
  if (zf) goto L_475e31;
L_475dd9: /* 475dd9: cmp dword ptr [ebp + 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 475ddc: je 0x475e31 */
  if (zf) goto L_475e31;
L_475dde: /* 475dde: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475de0: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 475de3: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 475de7: xor ebx, ebx */
  ebx = 0;
/* 475de9: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 475dea: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 475ded: call 0x4657fc */
  esp -= 4; W32(esp, 0x475df2u); SPILL(); f_4657fc(); if (g_unwind) return; RELOAD();
L_475df2: /* 475df2: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 475df6: jne 0x475dfc */
  if (!zf) goto L_475dfc;
L_475df8: /* 475df8: or edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 475dfa: jmp 0x475e31 */
  goto L_475e31;
L_475dfc: /* 475dfc: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 475dff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475e00: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 475e04: call 0x4619f2 */
  esp -= 4; W32(esp, 0x475e09u); SPILL(); f_4619f2(); if (g_unwind) return; RELOAD();
/* 475e09: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 475e0d: je 0x475e31 */
  if (zf) goto L_475e31;
L_475e0f: /* 475e0f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475e11: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 475e14: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 475e18: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 475e1b: mov byte ptr [ebp - 0x11], bl */
  W8((uint32_t)(ebp + 0xffffffefu), (ebx & 0xffu));
/* 475e1e: call 0x465c69 */
  esp -= 4; W32(esp, 0x475e23u); SPILL(); f_465c69(); if (g_unwind) return; RELOAD();
/* 475e23: jmp 0x475df2 */
  goto L_475df2;
L_475e31: /* 475e31: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 475e35: cmp byte ptr [ebp - 0x11], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffefu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 475e39: jne 0x475e3e */
  if (!zf) goto L_475e3e;
L_475e3b: /* 475e3b: or edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_475e3e: /* 475e3e: mov eax, edi */
  eax = edi;
/* 475e40: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 475e42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475e43: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475e45: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 475e48: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475e4a: call 0x461453 */
  esp -= 4; W32(esp, 0x475e4fu); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 475e4f: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 475e53: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 475e56: call 0x46228e */
  esp -= 4; W32(esp, 0x475e5bu); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 475e5b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 475e5e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 475e5f: mov eax, esi */
  eax = esi;
/* 475e61: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 475e62: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 475e69: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 475e6a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 475e6b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_475e25(void) {
  LOAD_REGS();
L_475e25: /* 475e25: mov eax, 0x475e2b */
  eax = 0x475e2bu;
/* 475e2a: ret  */
  esp += 4; SPILL(); return;
}

void f_475e2b(void) {
  LOAD_REGS();
L_475e2b: /* 475e2b: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 475e2e: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 475e31: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 475e35: cmp byte ptr [ebp - 0x11], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffefu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 475e39: jne 0x475e3e */
  if (!zf) goto L_475e3e;
L_475e3b: /* 475e3b: or edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_475e3e: /* 475e3e: mov eax, edi */
  eax = edi;
/* 475e40: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 475e42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475e43: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475e45: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 475e48: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475e4a: call 0x461453 */
  esp -= 4; W32(esp, 0x475e4fu); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x475e2bu: guest_unwind_done(); RELOAD(); goto L_475e2b; } return; } RELOAD();
/* 475e4f: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 475e53: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 475e56: call 0x46228e */
  esp -= 4; W32(esp, 0x475e5bu); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x475e2bu: guest_unwind_done(); RELOAD(); goto L_475e2b; } return; } RELOAD();
/* 475e5b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 475e5e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 475e5f: mov eax, esi */
  eax = esi;
/* 475e61: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 475e62: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 475e69: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 475e6a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 475e6b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_475e6e(void) {
  LOAD_REGS();
L_475e6e: /* 475e6e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 475e71: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 475e73: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 475e76: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475e78: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 475e7b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 475e7d: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 475e80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475e81: call 0x464bb2 */
  esp -= 4; W32(esp, 0x475e86u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 475e86: mov eax, 0x475e2b */
  eax = 0x475e2bu;
/* 475e8b: ret  */
  esp += 4; SPILL(); return;
}

void f_475e8c(void) {
  LOAD_REGS();
L_475e8c: /* 475e8c: mov eax, 0x48cb92 */
  eax = 0x48cb92u;
/* 475e91: call 0x4616c0 */
  esp -= 4; W32(esp, 0x475e96u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 475e96: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 475e99: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 475e9a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 475e9b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 475e9c: mov esi, ecx */
  esi = ecx;
/* 475e9e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 475ea1: xor ebx, ebx */
  ebx = 0;
/* 475ea3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 475ea5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 475ea6: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 475ea9: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 475eac: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 475eaf: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 475eb2: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 475eb5: call 0x466d56 */
  esp -= 4; W32(esp, 0x475ebau); SPILL(); f_466d56(); if (g_unwind) return; RELOAD();
/* 475eba: cmp byte ptr [ebp - 0x20], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe0u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 475ebd: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 475ec0: jne 0x475ec9 */
  if (!zf) goto L_475ec9;
L_475ec2: /* 475ec2: mov edi, 0xffff */
  edi = 0xffffu;
/* 475ec7: jmp 0x475f17 */
  goto L_475f17;
L_475ec9: /* 475ec9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475ecb: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 475ece: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 475ed2: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 475ed6: call 0x46584a */
  esp -= 4; W32(esp, 0x475edbu); SPILL(); f_46584a(); if (g_unwind) return; RELOAD();
/* 475edb: mov edi, eax */
  edi = eax;
/* 475edd: cmp di, -1 */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 475ee1: jne 0x475eec */
  if (!zf) goto L_475eec;
L_475ee3: /* 475ee3: mov dword ptr [ebp - 0x18], 3 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3u);
/* 475eea: jmp 0x475f17 */
  goto L_475f17;
L_475eec: /* 475eec: inc dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 475eef: jmp 0x475f17 */
  goto L_475f17;
L_475f17: /* 475f17: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475f19: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 475f1c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 475f1d: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 475f20: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475f22: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 475f25: call 0x461453 */
  esp -= 4; W32(esp, 0x475f2au); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 475f2a: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 475f2e: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 475f31: call 0x46228e */
  esp -= 4; W32(esp, 0x475f36u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 475f36: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 475f39: mov ax, di */
  eax = (eax & 0xffff0000u) | ((uint32_t)((edi & 0xffffu)) & 0xffffu);
/* 475f3c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 475f3d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 475f3e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 475f45: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 475f46: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 475f47: ret  */
  esp += 4; SPILL(); return;
}

void f_475ef1(void) {
  LOAD_REGS();
L_475ef1: /* 475ef1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 475ef4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 475ef6: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 475ef9: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475efb: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 475efe: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 475f00: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 475f03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475f04: call 0x464bb2 */
  esp -= 4; W32(esp, 0x475f09u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 475f09: mov eax, 0x475f0f */
  eax = 0x475f0fu;
/* 475f0e: ret  */
  esp += 4; SPILL(); return;
}

void f_475f0f(void) {
  LOAD_REGS();
L_475f0f: /* 475f0f: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 475f12: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 475f15: xor ebx, ebx */
  ebx = 0;
/* 475f17: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475f19: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 475f1c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 475f1d: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 475f20: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475f22: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 475f25: call 0x461453 */
  esp -= 4; W32(esp, 0x475f2au); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x475f0fu: guest_unwind_done(); RELOAD(); goto L_475f0f; } return; } RELOAD();
/* 475f2a: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 475f2e: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 475f31: call 0x46228e */
  esp -= 4; W32(esp, 0x475f36u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x475f0fu: guest_unwind_done(); RELOAD(); goto L_475f0f; } return; } RELOAD();
/* 475f36: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 475f39: mov ax, di */
  eax = (eax & 0xffff0000u) | ((uint32_t)((edi & 0xffffu)) & 0xffffu);
/* 475f3c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 475f3d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 475f3e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 475f45: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 475f46: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 475f47: ret  */
  esp += 4; SPILL(); return;
}

void f_475f48(void) {
  LOAD_REGS();
L_475f48: /* 475f48: mov eax, 0x48cba4 */
  eax = 0x48cba4u;
/* 475f4d: call 0x4616c0 */
  esp -= 4; W32(esp, 0x475f52u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 475f52: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 475f55: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 475f56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 475f57: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 475f58: mov esi, ecx */
  esi = ecx;
/* 475f5a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 475f5d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 475f5f: xor ebx, ebx */
  ebx = 0;
/* 475f61: xor edi, edi */
  edi = 0;
/* 475f63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 475f64: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 475f67: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 475f6a: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 475f6d: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 475f70: call 0x466d56 */
  esp -= 4; W32(esp, 0x475f75u); SPILL(); f_466d56(); if (g_unwind) return; RELOAD();
/* 475f75: cmp byte ptr [ebp - 0x1c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 475f78: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 475f7b: je 0x475ff0 */
  if (zf) goto L_475ff0;
L_475f7d: /* 475f7d: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 475f80: jle 0x475ff0 */
  if ((zf || sf != of)) goto L_475ff0;
L_475f82: /* 475f82: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475f84: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 475f87: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 475f8b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 475f8f: call 0x4657fc */
  esp -= 4; W32(esp, 0x475f94u); SPILL(); f_4657fc(); if (g_unwind) return; RELOAD();
L_475f94: /* 475f94: dec dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 475f97: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 475f9a: jle 0x475ff0 */
  if ((zf || sf != of)) goto L_475ff0;
L_475f9c: /* 475f9c: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 475fa0: jne 0x475fa7 */
  if (!zf) goto L_475fa7;
L_475fa2: /* 475fa2: or edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 475fa5: jmp 0x475ff0 */
  goto L_475ff0;
L_475fa7: /* 475fa7: cmp ax, word ptr [ebp + 0x10] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebp + 0x10u)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 475fab: je 0x475ff0 */
  if (zf) goto L_475ff0;
L_475fad: /* 475fad: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 475fb0: add dword ptr [ebp + 8], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 475fb4: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
/* 475fb7: inc dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 475fba: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 475fbc: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 475fbf: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 475fc3: call 0x465c69 */
  esp -= 4; W32(esp, 0x475fc8u); SPILL(); f_465c69(); if (g_unwind) return; RELOAD();
/* 475fc8: jmp 0x475f94 */
  goto L_475f94;
L_475ff0: /* 475ff0: cmp dword ptr [esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 475ff3: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 475ff6: jne 0x475ffb */
  if (!zf) goto L_475ffb;
L_475ff8: /* 475ff8: or edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_475ffb: /* 475ffb: mov eax, edi */
  eax = edi;
/* 475ffd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 475ffe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475fff: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476001: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 476004: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 476006: call 0x461453 */
  esp -= 4; W32(esp, 0x47600bu); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 47600b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47600e: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 476012: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 476015: mov word ptr [eax], bx */
  W16((uint32_t)(eax), (ebx & 0xffffu));
/* 476018: call 0x46228e */
  esp -= 4; W32(esp, 0x47601du); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 47601d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 476020: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 476021: mov eax, esi */
  eax = esi;
/* 476023: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 476024: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47602b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47602c: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47602d: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_475fca(void) {
  LOAD_REGS();
L_475fca: /* 475fca: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 475fcd: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 475fcf: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 475fd2: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 475fd4: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 475fd7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 475fd9: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 475fdc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475fdd: call 0x464bb2 */
  esp -= 4; W32(esp, 0x475fe2u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 475fe2: mov eax, 0x475fe8 */
  eax = 0x475fe8u;
/* 475fe7: ret  */
  esp += 4; SPILL(); return;
}

void f_475fe8(void) {
  LOAD_REGS();
L_475fe8: /* 475fe8: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 475feb: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 475fee: xor ebx, ebx */
  ebx = 0;
/* 475ff0: cmp dword ptr [esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 475ff3: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 475ff6: jne 0x475ffb */
  if (!zf) goto L_475ffb;
L_475ff8: /* 475ff8: or edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_475ffb: /* 475ffb: mov eax, edi */
  eax = edi;
/* 475ffd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 475ffe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 475fff: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476001: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 476004: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 476006: call 0x461453 */
  esp -= 4; W32(esp, 0x47600bu); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x475fe8u: guest_unwind_done(); RELOAD(); goto L_475fe8; } return; } RELOAD();
/* 47600b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47600e: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 476012: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 476015: mov word ptr [eax], bx */
  W16((uint32_t)(eax), (ebx & 0xffffu));
/* 476018: call 0x46228e */
  esp -= 4; W32(esp, 0x47601du); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x475fe8u: guest_unwind_done(); RELOAD(); goto L_475fe8; } return; } RELOAD();
/* 47601d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 476020: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 476021: mov eax, esi */
  eax = esi;
/* 476023: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 476024: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47602b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47602c: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47602d: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_476030(void) {
  LOAD_REGS();
L_476030: /* 476030: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 476031: mov esi, ecx */
  esi = ecx;
/* 476033: call 0x475e8c */
  esp -= 4; W32(esp, 0x476038u); SPILL(); f_475e8c(); if (g_unwind) return; RELOAD();
/* 476038: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47603c: je 0x476045 */
  if (zf) goto L_476045;
L_47603e: /* 47603e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 476042: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
L_476045: /* 476045: mov eax, esi */
  eax = esi;
/* 476047: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 476048: ret 4 */
  esp += 8; SPILL(); return;
}

void f_47604b(void) {
  LOAD_REGS();
L_47604b: /* 47604b: mov eax, 0x48cbb6 */
  eax = 0x48cbb6u;
/* 476050: call 0x4616c0 */
  esp -= 4; W32(esp, 0x476055u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 476055: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 476058: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 476059: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47605a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47605b: mov esi, ecx */
  esi = ecx;
/* 47605d: xor ebx, ebx */
  ebx = 0;
/* 47605f: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 476062: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 476063: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 476064: xor edi, edi */
  edi = 0;
/* 476066: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 476067: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 47606a: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 47606d: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 476070: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 476073: call 0x466d56 */
  esp -= 4; W32(esp, 0x476078u); SPILL(); f_466d56(); if (g_unwind) return; RELOAD();
/* 476078: cmp byte ptr [ebp - 0x1c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47607c: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 47607f: je 0x4760d5 */
  if (zf) goto L_4760d5;
L_476081: /* 476081: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476083: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 476086: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 47608a: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 47608d: call 0x4657fc */
  esp -= 4; W32(esp, 0x476092u); SPILL(); f_4657fc(); if (g_unwind) return; RELOAD();
L_476092: /* 476092: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 476096: jne 0x47609d */
  if (!zf) goto L_47609d;
L_476098: /* 476098: or dword ptr [ebp - 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 47609b: jmp 0x4760d5 */
  goto L_4760d5;
L_47609d: /* 47609d: cmp ax, word ptr [ebp + 0xc] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebp + 0xcu)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4760a1: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 4760a5: je 0x4760d5 */
  if (zf) goto L_4760d5;
L_4760a7: /* 4760a7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4760aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4760ab: call 0x4619f2 */
  esp -= 4; W32(esp, 0x4760b0u); SPILL(); f_4619f2(); if (g_unwind) return; RELOAD();
/* 4760b0: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4760b4: je 0x4760d5 */
  if (zf) goto L_4760d5;
L_4760b6: /* 4760b6: inc dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 4760b9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4760bb: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4760be: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 4760c2: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4760c5: call 0x465c69 */
  esp -= 4; W32(esp, 0x4760cau); SPILL(); f_465c69(); if (g_unwind) return; RELOAD();
/* 4760ca: jmp 0x476092 */
  goto L_476092;
L_4760d5: /* 4760d5: xor eax, eax */
  eax = 0;
/* 4760d7: cmp dword ptr [esi + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4760da: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4760dd: jne 0x4760e3 */
  if (!zf) goto L_4760e3;
L_4760df: /* 4760df: or dword ptr [ebp - 0x14], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
L_4760e3: /* 4760e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4760e4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4760e6: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4760e9: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 4760ec: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4760ee: call 0x461453 */
  esp -= 4; W32(esp, 0x4760f3u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 4760f3: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4760f7: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 4760fa: call 0x46228e */
  esp -= 4; W32(esp, 0x4760ffu); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 4760ff: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 476102: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 476103: mov eax, esi */
  eax = esi;
/* 476105: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 476106: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47610d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47610e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47610f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4760cc(void) {
  LOAD_REGS();
L_4760cc: /* 4760cc: mov eax, 0x4760d2 */
  eax = 0x4760d2u;
/* 4760d1: ret  */
  esp += 4; SPILL(); return;
}

void f_4760d2(void) {
  LOAD_REGS();
L_4760d2: /* 4760d2: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 4760d5: xor eax, eax */
  eax = 0;
/* 4760d7: cmp dword ptr [esi + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4760da: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4760dd: jne 0x4760e3 */
  if (!zf) goto L_4760e3;
L_4760df: /* 4760df: or dword ptr [ebp - 0x14], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
L_4760e3: /* 4760e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4760e4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4760e6: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4760e9: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 4760ec: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4760ee: call 0x461453 */
  esp -= 4; W32(esp, 0x4760f3u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4760d2u: guest_unwind_done(); RELOAD(); goto L_4760d2; } return; } RELOAD();
/* 4760f3: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4760f7: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 4760fa: call 0x46228e */
  esp -= 4; W32(esp, 0x4760ffu); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4760d2u: guest_unwind_done(); RELOAD(); goto L_4760d2; } return; } RELOAD();
/* 4760ff: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 476102: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 476103: mov eax, esi */
  eax = esi;
/* 476105: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 476106: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47610d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47610e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47610f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_476112(void) {
  LOAD_REGS();
L_476112: /* 476112: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 476115: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 476117: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 47611a: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47611c: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 47611f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 476121: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 476124: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476125: call 0x464bb2 */
  esp -= 4; W32(esp, 0x47612au); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 47612a: mov eax, 0x4760d2 */
  eax = 0x4760d2u;
/* 47612f: ret  */
  esp += 4; SPILL(); return;
}

void f_476130(void) {
  LOAD_REGS();
L_476130: /* 476130: mov eax, 0x48cbc8 */
  eax = 0x48cbc8u;
/* 476135: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47613au); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47613a: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47613d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47613e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47613f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 476140: mov esi, ecx */
  esi = ecx;
/* 476142: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 476145: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 476147: xor ebx, ebx */
  ebx = 0;
/* 476149: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47614a: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 47614d: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 476150: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 476153: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 476156: call 0x466d56 */
  esp -= 4; W32(esp, 0x47615bu); SPILL(); f_466d56(); if (g_unwind) return; RELOAD();
/* 47615b: cmp byte ptr [ebp - 0x1c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47615e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 476161: je 0x4761f7 */
  if (zf) goto L_4761f7;
L_476167: /* 476167: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 47616a: jle 0x4761f7 */
  if ((zf || sf != of)) goto L_4761f7;
L_476170: /* 476170: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476172: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 476175: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 476179: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 47617c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 476180: call 0x4657fc */
  esp -= 4; W32(esp, 0x476185u); SPILL(); f_4657fc(); if (g_unwind) return; RELOAD();
L_476185: /* 476185: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 476189: jne 0x476190 */
  if (!zf) goto L_476190;
L_47618b: /* 47618b: or ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 47618e: jmp 0x4761f7 */
  goto L_4761f7;
L_476190: /* 476190: cmp ax, di */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 476193: jne 0x4761a8 */
  if (!zf) goto L_4761a8;
L_476195: /* 476195: inc dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 476198: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47619a: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47619d: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 4761a1: call 0x46584a */
  esp -= 4; W32(esp, 0x4761a6u); SPILL(); f_46584a(); if (g_unwind) return; RELOAD();
/* 4761a6: jmp 0x4761f7 */
  goto L_4761f7;
L_4761a8: /* 4761a8: dec dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 4761ab: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4761af: jg 0x4761b6 */
  if ((!zf && sf == of)) goto L_4761b6;
L_4761b1: /* 4761b1: or ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 4761b4: jmp 0x4761f7 */
  goto L_4761f7;
L_4761b6: /* 4761b6: inc dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 4761b9: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4761bc: add dword ptr [ebp + 8], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 4761c0: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
/* 4761c3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4761c5: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4761c8: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 4761cc: call 0x465c69 */
  esp -= 4; W32(esp, 0x4761d1u); SPILL(); f_465c69(); if (g_unwind) return; RELOAD();
/* 4761d1: jmp 0x476185 */
  goto L_476185;
L_4761f7: /* 4761f7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4761fa: xor ecx, ecx */
  ecx = 0;
/* 4761fc: mov word ptr [eax], cx */
  W16((uint32_t)(eax), (ecx & 0xffffu));
/* 4761ff: cmp dword ptr [esi + 4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 476202: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 476205: jne 0x47620a */
  if (!zf) goto L_47620a;
L_476207: /* 476207: or ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_47620a: /* 47620a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47620b: mov eax, ebx */
  eax = ebx;
/* 47620d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47620e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476210: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 476213: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 476215: call 0x461453 */
  esp -= 4; W32(esp, 0x47621au); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 47621a: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47621e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 476221: call 0x46228e */
  esp -= 4; W32(esp, 0x476226u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 476226: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 476229: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47622a: mov eax, esi */
  eax = esi;
/* 47622c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47622d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 476234: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 476235: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 476236: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_4761d3(void) {
  LOAD_REGS();
L_4761d3: /* 4761d3: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 4761d6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4761d8: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4761db: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4761dd: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4761e0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4761e2: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4761e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4761e6: call 0x464bb2 */
  esp -= 4; W32(esp, 0x4761ebu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 4761eb: mov eax, 0x4761f1 */
  eax = 0x4761f1u;
/* 4761f0: ret  */
  esp += 4; SPILL(); return;
}

void f_4761f1(void) {
  LOAD_REGS();
L_4761f1: /* 4761f1: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 4761f4: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 4761f7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4761fa: xor ecx, ecx */
  ecx = 0;
/* 4761fc: mov word ptr [eax], cx */
  W16((uint32_t)(eax), (ecx & 0xffffu));
/* 4761ff: cmp dword ptr [esi + 4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 476202: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 476205: jne 0x47620a */
  if (!zf) goto L_47620a;
L_476207: /* 476207: or ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_47620a: /* 47620a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47620b: mov eax, ebx */
  eax = ebx;
/* 47620d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47620e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476210: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 476213: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 476215: call 0x461453 */
  esp -= 4; W32(esp, 0x47621au); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4761f1u: guest_unwind_done(); RELOAD(); goto L_4761f1; } return; } RELOAD();
/* 47621a: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47621e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 476221: call 0x46228e */
  esp -= 4; W32(esp, 0x476226u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4761f1u: guest_unwind_done(); RELOAD(); goto L_4761f1; } return; } RELOAD();
/* 476226: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 476229: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47622a: mov eax, esi */
  eax = esi;
/* 47622c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47622d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 476234: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 476235: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 476236: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_476239(void) {
  LOAD_REGS();
L_476239: /* 476239: mov eax, 0x48cbda */
  eax = 0x48cbdau;
/* 47623e: call 0x4616c0 */
  esp -= 4; W32(esp, 0x476243u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 476243: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 476246: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 476247: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 476248: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 476249: mov esi, ecx */
  esi = ecx;
/* 47624b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 47624e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 476250: xor ebx, ebx */
  ebx = 0;
/* 476252: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 476253: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 476256: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 476259: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 47625c: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 47625f: call 0x466d56 */
  esp -= 4; W32(esp, 0x476264u); SPILL(); f_466d56(); if (g_unwind) return; RELOAD();
/* 476264: cmp byte ptr [ebp - 0x1c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 476267: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 47626a: je 0x4762cb */
  if (zf) goto L_4762cb;
L_47626c: /* 47626c: cmp dword ptr [ebp + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 47626f: jle 0x4762cb */
  if ((zf || sf != of)) goto L_4762cb;
L_476271: /* 476271: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
L_476275: /* 476275: cmp dword ptr [ebp + 8], 0x7fffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47627c: je 0x476283 */
  if (zf) goto L_476283;
L_47627e: /* 47627e: dec dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 476281: js 0x4762cb */
  if (sf) goto L_4762cb;
L_476283: /* 476283: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476285: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 476288: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 47628c: call 0x46584a */
  esp -= 4; W32(esp, 0x476291u); SPILL(); f_46584a(); if (g_unwind) return; RELOAD();
/* 476291: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 476295: jne 0x47629d */
  if (!zf) goto L_47629d;
L_476297: /* 476297: or dword ptr [ebp - 0x14], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 47629b: jmp 0x4762cb */
  goto L_4762cb;
L_47629d: /* 47629d: inc dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 4762a0: cmp ax, word ptr [ebp + 0xc] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebp + 0xcu)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4762a4: jne 0x476275 */
  if (!zf) goto L_476275;
L_4762a6: /* 4762a6: jmp 0x4762cb */
  goto L_4762cb;
L_4762cb: /* 4762cb: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4762cd: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4762d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4762d1: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 4762d4: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4762d6: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4762d9: call 0x461453 */
  esp -= 4; W32(esp, 0x4762deu); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 4762de: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4762e2: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 4762e5: call 0x46228e */
  esp -= 4; W32(esp, 0x4762eau); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 4762ea: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4762ed: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4762ee: mov eax, esi */
  eax = esi;
/* 4762f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4762f1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4762f8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4762f9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4762fa: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4762a8(void) {
  LOAD_REGS();
L_4762a8: /* 4762a8: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 4762ab: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4762ad: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4762b0: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4762b2: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4762b5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4762b7: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4762ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4762bb: call 0x464bb2 */
  esp -= 4; W32(esp, 0x4762c0u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 4762c0: mov eax, 0x4762c6 */
  eax = 0x4762c6u;
/* 4762c5: ret  */
  esp += 4; SPILL(); return;
}

void f_4762c6(void) {
  LOAD_REGS();
L_4762c6: /* 4762c6: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 4762c9: xor ebx, ebx */
  ebx = 0;
/* 4762cb: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4762cd: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4762d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4762d1: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 4762d4: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4762d6: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4762d9: call 0x461453 */
  esp -= 4; W32(esp, 0x4762deu); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4762c6u: guest_unwind_done(); RELOAD(); goto L_4762c6; } return; } RELOAD();
/* 4762de: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4762e2: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 4762e5: call 0x46228e */
  esp -= 4; W32(esp, 0x4762eau); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4762c6u: guest_unwind_done(); RELOAD(); goto L_4762c6; } return; } RELOAD();
/* 4762ea: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4762ed: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4762ee: mov eax, esi */
  eax = esi;
/* 4762f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4762f1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4762f8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4762f9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4762fa: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4762fd(void) {
  LOAD_REGS();
L_4762fd: /* 4762fd: mov eax, 0x48cbec */
  eax = 0x48cbecu;
/* 476302: call 0x4616c0 */
  esp -= 4; W32(esp, 0x476307u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 476307: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47630a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47630b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47630c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47630d: mov esi, ecx */
  esi = ecx;
/* 47630f: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 476312: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 476314: xor ebx, ebx */
  ebx = 0;
/* 476316: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 476317: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 47631a: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 47631d: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 476320: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 476323: call 0x466d56 */
  esp -= 4; W32(esp, 0x476328u); SPILL(); f_466d56(); if (g_unwind) return; RELOAD();
/* 476328: cmp byte ptr [ebp - 0x1c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47632b: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 47632e: je 0x47637c */
  if (zf) goto L_47637c;
L_476330: /* 476330: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476332: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 476335: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 476338: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 47633c: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47633f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 476341: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 476345: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x476348u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 476348: add dword ptr [esi + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 47634b: cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47634e: je 0x47637c */
  if (zf) goto L_47637c;
L_476350: /* 476350: mov dword ptr [ebp - 0x18], 3 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3u);
/* 476357: jmp 0x47637c */
  goto L_47637c;
L_47637c: /* 47637c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47637e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 476381: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 476382: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 476385: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 476387: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 47638a: call 0x461453 */
  esp -= 4; W32(esp, 0x47638fu); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 47638f: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 476393: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 476396: call 0x46228e */
  esp -= 4; W32(esp, 0x47639bu); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 47639b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47639e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47639f: mov eax, esi */
  eax = esi;
/* 4763a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4763a2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4763a9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4763aa: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4763ab: ret 8 */
  esp += 12; SPILL(); return;
}

void f_476359(void) {
  LOAD_REGS();
L_476359: /* 476359: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 47635c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 47635e: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 476361: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 476363: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 476366: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 476368: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 47636b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47636c: call 0x464bb2 */
  esp -= 4; W32(esp, 0x476371u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 476371: mov eax, 0x476377 */
  eax = 0x476377u;
/* 476376: ret  */
  esp += 4; SPILL(); return;
}

void f_476377(void) {
  LOAD_REGS();
L_476377: /* 476377: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 47637a: xor ebx, ebx */
  ebx = 0;
/* 47637c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47637e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 476381: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 476382: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 476385: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 476387: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 47638a: call 0x461453 */
  esp -= 4; W32(esp, 0x47638fu); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x476377u: guest_unwind_done(); RELOAD(); goto L_476377; } return; } RELOAD();
/* 47638f: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 476393: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 476396: call 0x46228e */
  esp -= 4; W32(esp, 0x47639bu); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x476377u: guest_unwind_done(); RELOAD(); goto L_476377; } return; } RELOAD();
/* 47639b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47639e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47639f: mov eax, esi */
  eax = esi;
/* 4763a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4763a2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4763a9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4763aa: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4763ab: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4763ae(void) {
  LOAD_REGS();
L_4763ae: /* 4763ae: mov eax, 0x48ce04 */
  eax = 0x48ce04u;
/* 4763b3: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4763b8u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4763b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4763b9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4763ba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4763bb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4763bc: mov esi, ecx */
  esi = ecx;
/* 4763be: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4763c0: xor edi, edi */
  edi = 0;
/* 4763c2: and dword ptr [esi + 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 4763c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4763c6: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 4763c9: call 0x466d56 */
  esp -= 4; W32(esp, 0x4763ceu); SPILL(); f_466d56(); if (g_unwind) return; RELOAD();
/* 4763ce: and dword ptr [ebp - 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4763d1: cmp byte ptr [ebp - 0x10], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff0u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4763d5: jne 0x4763dc */
  if (!zf) goto L_4763dc;
L_4763d7: /* 4763d7: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4763d9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4763da: jmp 0x476408 */
  goto L_476408;
L_4763dc: /* 4763dc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4763de: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4763e1: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 4763e5: call 0x46b1c1 */
  esp -= 4; W32(esp, 0x4763eau); SPILL(); f_46b1c1(); if (g_unwind) return; RELOAD();
/* 4763ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4763ec: jge 0x4763f3 */
  if ((sf == of)) goto L_4763f3;
L_4763ee: /* 4763ee: xor edi, edi */
  edi = 0;
/* 4763f0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 4763f1: jmp 0x476408 */
  goto L_476408;
L_4763f3: /* 4763f3: jle 0x476408 */
  if ((zf || sf != of)) goto L_476408;
L_4763f5: /* 4763f5: cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4763f8: jl 0x4763fd */
  if ((sf != of)) goto L_4763fd;
L_4763fa: /* 4763fa: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
L_4763fd: /* 4763fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4763fe: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 476401: mov ecx, esi */
  ecx = esi;
/* 476403: call 0x4762fd */
  esp -= 4; W32(esp, 0x476408u); SPILL(); f_4762fd(); if (g_unwind) return; RELOAD();
L_476408: /* 476408: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47640a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47640d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47640f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 476410: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 476412: call 0x461453 */
  esp -= 4; W32(esp, 0x476417u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 476417: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 47641a: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47641e: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 476421: call 0x46228e */
  esp -= 4; W32(esp, 0x476426u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 476426: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 476429: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47642a: mov eax, esi */
  eax = esi;
/* 47642c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47642d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 476434: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 476435: ret 8 */
  esp += 12; SPILL(); return;
}

void f_476438(void) {
  LOAD_REGS();
L_476438: /* 476438: mov eax, 0x48cbfe */
  eax = 0x48cbfeu;
/* 47643d: call 0x4616c0 */
  esp -= 4; W32(esp, 0x476442u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 476442: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 476445: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 476446: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 476447: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 476448: mov esi, ecx */
  esi = ecx;
/* 47644a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 47644d: xor ebx, ebx */
  ebx = 0;
/* 47644f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 476451: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 476452: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 476455: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 476458: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 47645b: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 47645e: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 476461: call 0x466d56 */
  esp -= 4; W32(esp, 0x476466u); SPILL(); f_466d56(); if (g_unwind) return; RELOAD();
/* 476466: cmp byte ptr [ebp - 0x20], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe0u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 476469: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 47646c: jne 0x476475 */
  if (!zf) goto L_476475;
L_47646e: /* 47646e: mov edi, 0xffff */
  edi = 0xffffu;
/* 476473: jmp 0x4764be */
  goto L_4764be;
L_476475: /* 476475: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476477: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47647a: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 47647e: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 476482: call 0x4657fc */
  esp -= 4; W32(esp, 0x476487u); SPILL(); f_4657fc(); if (g_unwind) return; RELOAD();
/* 476487: mov edi, eax */
  edi = eax;
/* 476489: cmp di, -1 */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47648d: jne 0x4764be */
  if (!zf) goto L_4764be;
L_47648f: /* 47648f: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
/* 476496: jmp 0x4764be */
  goto L_4764be;
L_4764be: /* 4764be: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4764c0: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4764c3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4764c4: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 4764c7: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4764c9: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4764cc: call 0x461453 */
  esp -= 4; W32(esp, 0x4764d1u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 4764d1: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4764d5: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 4764d8: call 0x46228e */
  esp -= 4; W32(esp, 0x4764ddu); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 4764dd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4764e0: mov ax, di */
  eax = (eax & 0xffff0000u) | ((uint32_t)((edi & 0xffffu)) & 0xffffu);
/* 4764e3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4764e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4764e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4764ec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4764ed: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4764ee: ret  */
  esp += 4; SPILL(); return;
}

void f_476498(void) {
  LOAD_REGS();
L_476498: /* 476498: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 47649b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 47649d: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4764a0: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4764a2: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4764a5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4764a7: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4764aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4764ab: call 0x464bb2 */
  esp -= 4; W32(esp, 0x4764b0u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 4764b0: mov eax, 0x4764b6 */
  eax = 0x4764b6u;
/* 4764b5: ret  */
  esp += 4; SPILL(); return;
}

void f_4764b6(void) {
  LOAD_REGS();
L_4764b6: /* 4764b6: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 4764b9: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 4764bc: xor ebx, ebx */
  ebx = 0;
/* 4764be: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4764c0: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4764c3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4764c4: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 4764c7: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4764c9: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4764cc: call 0x461453 */
  esp -= 4; W32(esp, 0x4764d1u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4764b6u: guest_unwind_done(); RELOAD(); goto L_4764b6; } return; } RELOAD();
/* 4764d1: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4764d5: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 4764d8: call 0x46228e */
  esp -= 4; W32(esp, 0x4764ddu); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4764b6u: guest_unwind_done(); RELOAD(); goto L_4764b6; } return; } RELOAD();
/* 4764dd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4764e0: mov ax, di */
  eax = (eax & 0xffff0000u) | ((uint32_t)((edi & 0xffffu)) & 0xffffu);
/* 4764e3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4764e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4764e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4764ec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4764ed: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4764ee: ret  */
  esp += 4; SPILL(); return;
}

void f_4764ef(void) {
  LOAD_REGS();
L_4764ef: /* 4764ef: mov eax, 0x48cc10 */
  eax = 0x48cc10u;
/* 4764f4: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4764f9u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4764f9: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4764fc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4764fd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4764fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4764ff: mov esi, ecx */
  esi = ecx;
/* 476501: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 476504: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 476506: xor ebx, ebx */
  ebx = 0;
/* 476508: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 476509: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 47650c: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 47650f: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 476512: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 476515: call 0x466d56 */
  esp -= 4; W32(esp, 0x47651au); SPILL(); f_466d56(); if (g_unwind) return; RELOAD();
/* 47651a: cmp byte ptr [ebp - 0x1c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47651d: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 476520: je 0x476569 */
  if (zf) goto L_476569;
L_476522: /* 476522: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476524: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 476527: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47652a: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 47652e: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 476532: call 0x46b148 */
  esp -= 4; W32(esp, 0x476537u); SPILL(); f_46b148(); if (g_unwind) return; RELOAD();
/* 476537: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47653b: jne 0x476569 */
  if (!zf) goto L_476569;
L_47653d: /* 47653d: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* 476544: jmp 0x476569 */
  goto L_476569;
L_476569: /* 476569: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47656b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47656e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47656f: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 476572: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 476574: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 476577: call 0x461453 */
  esp -= 4; W32(esp, 0x47657cu); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 47657c: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 476580: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 476583: call 0x46228e */
  esp -= 4; W32(esp, 0x476588u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 476588: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47658b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47658c: mov eax, esi */
  eax = esi;
/* 47658e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47658f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 476596: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 476597: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 476598: ret 4 */
  esp += 8; SPILL(); return;
}

void f_476546(void) {
  LOAD_REGS();
L_476546: /* 476546: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 476549: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 47654b: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 47654e: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 476550: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 476553: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 476555: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 476558: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476559: call 0x464bb2 */
  esp -= 4; W32(esp, 0x47655eu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 47655e: mov eax, 0x476564 */
  eax = 0x476564u;
/* 476563: ret  */
  esp += 4; SPILL(); return;
}

void f_476564(void) {
  LOAD_REGS();
L_476564: /* 476564: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 476567: xor ebx, ebx */
  ebx = 0;
/* 476569: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47656b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47656e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47656f: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 476572: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 476574: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 476577: call 0x461453 */
  esp -= 4; W32(esp, 0x47657cu); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x476564u: guest_unwind_done(); RELOAD(); goto L_476564; } return; } RELOAD();
/* 47657c: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 476580: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 476583: call 0x46228e */
  esp -= 4; W32(esp, 0x476588u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x476564u: guest_unwind_done(); RELOAD(); goto L_476564; } return; } RELOAD();
/* 476588: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47658b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47658c: mov eax, esi */
  eax = esi;
/* 47658e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47658f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 476596: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 476597: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 476598: ret 4 */
  esp += 8; SPILL(); return;
}

void f_47659b(void) {
  LOAD_REGS();
L_47659b: /* 47659b: mov eax, 0x48cc22 */
  eax = 0x48cc22u;
/* 4765a0: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4765a5u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4765a5: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4765a8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4765a9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4765aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4765ab: mov esi, ecx */
  esi = ecx;
/* 4765ad: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 4765b0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4765b2: xor ebx, ebx */
  ebx = 0;
/* 4765b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4765b5: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 4765b8: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 4765bb: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 4765be: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 4765c1: call 0x466d56 */
  esp -= 4; W32(esp, 0x4765c6u); SPILL(); f_466d56(); if (g_unwind) return; RELOAD();
/* 4765c6: cmp byte ptr [ebp - 0x1c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4765c9: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4765cc: je 0x476612 */
  if (zf) goto L_476612;
L_4765ce: /* 4765ce: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4765d0: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4765d3: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 4765d7: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4765db: call 0x46b1e2 */
  esp -= 4; W32(esp, 0x4765e0u); SPILL(); f_46b1e2(); if (g_unwind) return; RELOAD();
/* 4765e0: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4765e4: jne 0x476612 */
  if (!zf) goto L_476612;
L_4765e6: /* 4765e6: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* 4765ed: jmp 0x476612 */
  goto L_476612;
L_476612: /* 476612: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476614: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 476617: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 476618: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 47661b: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47661d: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 476620: call 0x461453 */
  esp -= 4; W32(esp, 0x476625u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 476625: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 476629: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 47662c: call 0x46228e */
  esp -= 4; W32(esp, 0x476631u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 476631: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 476634: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 476635: mov eax, esi */
  eax = esi;
/* 476637: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 476638: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47663f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 476640: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 476641: ret  */
  esp += 4; SPILL(); return;
}

void f_4765ef(void) {
  LOAD_REGS();
L_4765ef: /* 4765ef: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 4765f2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4765f4: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4765f7: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4765f9: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4765fc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4765fe: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 476601: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476602: call 0x464bb2 */
  esp -= 4; W32(esp, 0x476607u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 476607: mov eax, 0x47660d */
  eax = 0x47660du;
/* 47660c: ret  */
  esp += 4; SPILL(); return;
}

void f_47660d(void) {
  LOAD_REGS();
L_47660d: /* 47660d: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 476610: xor ebx, ebx */
  ebx = 0;
/* 476612: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476614: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 476617: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 476618: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 47661b: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47661d: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 476620: call 0x461453 */
  esp -= 4; W32(esp, 0x476625u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47660du: guest_unwind_done(); RELOAD(); goto L_47660d; } return; } RELOAD();
/* 476625: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 476629: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 47662c: call 0x46228e */
  esp -= 4; W32(esp, 0x476631u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47660du: guest_unwind_done(); RELOAD(); goto L_47660d; } return; } RELOAD();
/* 476631: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 476634: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 476635: mov eax, esi */
  eax = esi;
/* 476637: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 476638: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47663f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 476640: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 476641: ret  */
  esp += 4; SPILL(); return;
}

void f_476642(void) {
  LOAD_REGS();
L_476642: /* 476642: mov eax, 0x48cc3c */
  eax = 0x48cc3cu;
/* 476647: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47664cu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47664c: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47664f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 476650: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 476651: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 476652: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 476655: mov esi, ecx */
  esi = ecx;
/* 476657: xor ebx, ebx */
  ebx = 0;
/* 476659: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47665a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47665b: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 47665e: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 476661: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 476664: call 0x466d91 */
  esp -= 4; W32(esp, 0x476669u); SPILL(); f_466d91(); if (g_unwind) return; RELOAD();
/* 476669: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47666c: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 47666f: je 0x4766f0 */
  if (zf) goto L_4766f0;
L_476671: /* 476671: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 476674: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476675: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476677: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47667a: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47667c: call 0x464a5a */
  esp -= 4; W32(esp, 0x476681u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 476681: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476682: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 476686: call 0x46e55f */
  esp -= 4; W32(esp, 0x47668bu); SPILL(); f_46e55f(); if (g_unwind) return; RELOAD();
/* 47668b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47668c: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 47668f: mov edi, eax */
  edi = eax;
/* 476691: call 0x461389 */
  esp -= 4; W32(esp, 0x476696u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 476696: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476698: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47669b: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47669e: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4766a0: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 4766a3: xor edx, edx */
  edx = 0;
/* 4766a5: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4766a7: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 4766aa: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 4766ad: lea ebx, [ebp - 0x18] */
  ebx = (uint32_t)(ebp + 0xffffffe8u);
/* 4766b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4766b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4766b2: mov byte ptr [ebp - 0x1c], 1 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 4766b6: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 4766b9: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 4766bc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4766bd: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 4766c0: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 4766c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4766c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4766c6: mov ecx, edi */
  ecx = edi;
/* 4766c8: call 0x468981 */
  esp -= 4; W32(esp, 0x4766cdu); SPILL(); f_468981(); if (g_unwind) return; RELOAD();
/* 4766cd: jmp 0x4766f0 */
  goto L_4766f0;
L_4766f0: /* 4766f0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4766f2: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4766f5: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4766f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4766fb: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 4766fe: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 476700: call 0x461453 */
  esp -= 4; W32(esp, 0x476705u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 476705: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 476709: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 47670c: call 0x46228e */
  esp -= 4; W32(esp, 0x476711u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 476711: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 476714: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 476715: mov eax, esi */
  eax = esi;
/* 476717: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 476718: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47671f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 476720: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 476721: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4766cf(void) {
  LOAD_REGS();
L_4766cf: /* 4766cf: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 4766d2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4766d4: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4766d7: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4766d9: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4766dc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4766de: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4766e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4766e2: call 0x464bb2 */
  esp -= 4; W32(esp, 0x4766e7u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 4766e7: mov eax, 0x4766ed */
  eax = 0x4766edu;
/* 4766ec: ret  */
  esp += 4; SPILL(); return;
}

void f_4766ed(void) {
  LOAD_REGS();
L_4766ed: /* 4766ed: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 4766f0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4766f2: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4766f5: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4766f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4766fb: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 4766fe: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 476700: call 0x461453 */
  esp -= 4; W32(esp, 0x476705u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4766edu: guest_unwind_done(); RELOAD(); goto L_4766ed; } return; } RELOAD();
/* 476705: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 476709: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 47670c: call 0x46228e */
  esp -= 4; W32(esp, 0x476711u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4766edu: guest_unwind_done(); RELOAD(); goto L_4766ed; } return; } RELOAD();
/* 476711: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 476714: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 476715: mov eax, esi */
  eax = esi;
/* 476717: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 476718: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47671f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 476720: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 476721: ret 4 */
  esp += 8; SPILL(); return;
}

void f_476724(void) {
  LOAD_REGS();
L_476724: /* 476724: mov eax, 0x48cc56 */
  eax = 0x48cc56u;
/* 476729: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47672eu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47672e: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 476731: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 476732: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 476733: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 476734: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 476737: mov esi, ecx */
  esi = ecx;
/* 476739: xor ebx, ebx */
  ebx = 0;
/* 47673b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47673c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47673d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 476740: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 476743: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 476746: call 0x466d91 */
  esp -= 4; W32(esp, 0x47674bu); SPILL(); f_466d91(); if (g_unwind) return; RELOAD();
/* 47674b: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47674e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 476751: je 0x476802 */
  if (zf) goto L_476802;
L_476757: /* 476757: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 47675a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47675b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47675d: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 476760: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 476763: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 476765: call 0x464a5a */
  esp -= 4; W32(esp, 0x47676au); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47676a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47676b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 47676f: call 0x46e55f */
  esp -= 4; W32(esp, 0x476774u); SPILL(); f_46e55f(); if (g_unwind) return; RELOAD();
/* 476774: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 476775: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 476778: mov edi, eax */
  edi = eax;
/* 47677a: call 0x461389 */
  esp -= 4; W32(esp, 0x47677fu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47677f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476781: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 476784: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 476786: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 476789: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47678b: lea ebx, [ebp - 0x1c] */
  ebx = (uint32_t)(ebp + 0xffffffe4u);
/* 47678e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47678f: lea ebx, [ebp - 0x14] */
  ebx = (uint32_t)(ebp + 0xffffffecu);
/* 476792: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 476793: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476794: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 476797: mov byte ptr [ebp - 0x2c], 1 */
  W8((uint32_t)(ebp + 0xffffffd4u), 0x1u);
/* 47679b: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 47679e: xor eax, eax */
  eax = 0;
/* 4767a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4767a1: mov byte ptr [ebp - 0x34], dl */
  W8((uint32_t)(ebp + 0xffffffccu), (edx & 0xffu));
/* 4767a4: push dword ptr [ebp - 0x34] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffccu)); esp -= 4; W32(esp, v); }
/* 4767a7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 4767a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4767aa: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 4767ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4767ae: mov ecx, edi */
  ecx = edi;
/* 4767b0: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 4767b4: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0x4767b7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4767b7: jmp 0x4767da */
  goto L_4767da;
L_4767da: /* 4767da: xor ebx, ebx */
  ebx = 0;
/* 4767dc: test byte ptr [ebp - 0x14], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffecu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4767e0: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4767e3: jne 0x4767fe */
  if (!zf) goto L_4767fe;
L_4767e5: /* 4767e5: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 4767e8: cmp eax, 0xffff8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffff8000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4767ed: jl 0x4767fe */
  if ((sf != of)) goto L_4767fe;
L_4767ef: /* 4767ef: cmp eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4767f4: jg 0x4767fe */
  if ((!zf && sf == of)) goto L_4767fe;
L_4767f6: /* 4767f6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4767f9: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
/* 4767fc: jmp 0x476802 */
  goto L_476802;
L_4767fe: /* 4767fe: or dword ptr [ebp - 0x14], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
L_476802: /* 476802: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476804: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 476807: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 476808: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 47680b: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47680d: call 0x461453 */
  esp -= 4; W32(esp, 0x476812u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 476812: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 476816: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 476819: call 0x46228e */
  esp -= 4; W32(esp, 0x47681eu); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 47681e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 476821: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 476822: mov eax, esi */
  eax = esi;
/* 476824: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 476825: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47682c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47682d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47682e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4767b9(void) {
  LOAD_REGS();
L_4767b9: /* 4767b9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 4767bc: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4767be: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4767c1: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4767c3: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4767c6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4767c8: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4767cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4767cc: call 0x464bb2 */
  esp -= 4; W32(esp, 0x4767d1u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 4767d1: mov eax, 0x4767d7 */
  eax = 0x4767d7u;
/* 4767d6: ret  */
  esp += 4; SPILL(); return;
}

void f_4767d7(void) {
  LOAD_REGS();
L_4767d7: /* 4767d7: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 4767da: xor ebx, ebx */
  ebx = 0;
/* 4767dc: test byte ptr [ebp - 0x14], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffecu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4767e0: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4767e3: jne 0x4767fe */
  if (!zf) goto L_4767fe;
L_4767e5: /* 4767e5: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 4767e8: cmp eax, 0xffff8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffff8000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4767ed: jl 0x4767fe */
  if ((sf != of)) goto L_4767fe;
L_4767ef: /* 4767ef: cmp eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4767f4: jg 0x4767fe */
  if ((!zf && sf == of)) goto L_4767fe;
L_4767f6: /* 4767f6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4767f9: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
/* 4767fc: jmp 0x476802 */
  goto L_476802;
L_4767fe: /* 4767fe: or dword ptr [ebp - 0x14], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
L_476802: /* 476802: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476804: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 476807: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 476808: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 47680b: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47680d: call 0x461453 */
  esp -= 4; W32(esp, 0x476812u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4767d7u: guest_unwind_done(); RELOAD(); goto L_4767d7; } return; } RELOAD();
/* 476812: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 476816: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 476819: call 0x46228e */
  esp -= 4; W32(esp, 0x47681eu); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4767d7u: guest_unwind_done(); RELOAD(); goto L_4767d7; } return; } RELOAD();
/* 47681e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 476821: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 476822: mov eax, esi */
  eax = esi;
/* 476824: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 476825: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47682c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47682d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47682e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_476831(void) {
  LOAD_REGS();
L_476831: /* 476831: mov eax, 0x48cc70 */
  eax = 0x48cc70u;
/* 476836: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47683bu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47683b: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47683e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47683f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 476840: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 476841: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 476844: mov esi, ecx */
  esi = ecx;
/* 476846: xor ebx, ebx */
  ebx = 0;
/* 476848: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 476849: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47684a: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 47684d: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 476850: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 476853: call 0x466d91 */
  esp -= 4; W32(esp, 0x476858u); SPILL(); f_466d91(); if (g_unwind) return; RELOAD();
/* 476858: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47685b: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 47685e: je 0x4768df */
  if (zf) goto L_4768df;
L_476860: /* 476860: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 476863: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476864: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476866: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 476869: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47686b: call 0x464a5a */
  esp -= 4; W32(esp, 0x476870u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 476870: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476871: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 476875: call 0x46e55f */
  esp -= 4; W32(esp, 0x47687au); SPILL(); f_46e55f(); if (g_unwind) return; RELOAD();
/* 47687a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47687b: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 47687e: mov edi, eax */
  edi = eax;
/* 476880: call 0x461389 */
  esp -= 4; W32(esp, 0x476885u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 476885: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476887: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47688a: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47688d: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 47688f: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 476892: xor edx, edx */
  edx = 0;
/* 476894: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 476896: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 476899: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 47689c: lea ebx, [ebp - 0x18] */
  ebx = (uint32_t)(ebp + 0xffffffe8u);
/* 47689f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4768a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4768a1: mov byte ptr [ebp - 0x1c], 1 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 4768a5: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 4768a8: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 4768ab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4768ac: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 4768af: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 4768b3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4768b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4768b5: mov ecx, edi */
  ecx = edi;
/* 4768b7: call 0x4689a8 */
  esp -= 4; W32(esp, 0x4768bcu); SPILL(); f_4689a8(); if (g_unwind) return; RELOAD();
/* 4768bc: jmp 0x4768df */
  goto L_4768df;
L_4768df: /* 4768df: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4768e1: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4768e4: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4768e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4768ea: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 4768ed: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4768ef: call 0x461453 */
  esp -= 4; W32(esp, 0x4768f4u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 4768f4: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4768f8: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4768fb: call 0x46228e */
  esp -= 4; W32(esp, 0x476900u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 476900: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 476903: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 476904: mov eax, esi */
  eax = esi;
/* 476906: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 476907: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47690e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47690f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 476910: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4768be(void) {
  LOAD_REGS();
L_4768be: /* 4768be: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 4768c1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4768c3: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4768c6: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4768c8: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4768cb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4768cd: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4768d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4768d1: call 0x464bb2 */
  esp -= 4; W32(esp, 0x4768d6u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 4768d6: mov eax, 0x4768dc */
  eax = 0x4768dcu;
/* 4768db: ret  */
  esp += 4; SPILL(); return;
}

void f_4768dc(void) {
  LOAD_REGS();
L_4768dc: /* 4768dc: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 4768df: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4768e1: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4768e4: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4768e8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4768ea: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 4768ed: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4768ef: call 0x461453 */
  esp -= 4; W32(esp, 0x4768f4u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4768dcu: guest_unwind_done(); RELOAD(); goto L_4768dc; } return; } RELOAD();
/* 4768f4: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4768f8: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4768fb: call 0x46228e */
  esp -= 4; W32(esp, 0x476900u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4768dcu: guest_unwind_done(); RELOAD(); goto L_4768dc; } return; } RELOAD();
/* 476900: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 476903: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 476904: mov eax, esi */
  eax = esi;
/* 476906: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 476907: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47690e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47690f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 476910: ret 4 */
  esp += 8; SPILL(); return;
}

void f_476913(void) {
  LOAD_REGS();
L_476913: /* 476913: mov eax, 0x48cc8a */
  eax = 0x48cc8au;
/* 476918: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47691du); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47691d: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 476920: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 476921: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 476922: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 476923: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 476926: mov esi, ecx */
  esi = ecx;
/* 476928: xor ebx, ebx */
  ebx = 0;
/* 47692a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47692b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47692c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 47692f: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 476932: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 476935: call 0x466d91 */
  esp -= 4; W32(esp, 0x47693au); SPILL(); f_466d91(); if (g_unwind) return; RELOAD();
/* 47693a: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47693d: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 476940: je 0x4769f0 */
  if (zf) goto L_4769f0;
L_476946: /* 476946: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 476949: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47694a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47694c: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 47694f: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 476952: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 476954: call 0x464a5a */
  esp -= 4; W32(esp, 0x476959u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 476959: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47695a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 47695e: call 0x46e55f */
  esp -= 4; W32(esp, 0x476963u); SPILL(); f_46e55f(); if (g_unwind) return; RELOAD();
/* 476963: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 476964: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 476967: mov edi, eax */
  edi = eax;
/* 476969: call 0x461389 */
  esp -= 4; W32(esp, 0x47696eu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47696e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476970: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 476973: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 476975: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 476978: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47697a: lea ebx, [ebp - 0x1c] */
  ebx = (uint32_t)(ebp + 0xffffffe4u);
/* 47697d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47697e: lea ebx, [ebp - 0x14] */
  ebx = (uint32_t)(ebp + 0xffffffecu);
/* 476981: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 476982: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476983: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 476986: mov byte ptr [ebp - 0x2c], 1 */
  W8((uint32_t)(ebp + 0xffffffd4u), 0x1u);
/* 47698a: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 47698d: xor eax, eax */
  eax = 0;
/* 47698f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476990: mov byte ptr [ebp - 0x34], dl */
  W8((uint32_t)(ebp + 0xffffffccu), (edx & 0xffu));
/* 476993: push dword ptr [ebp - 0x34] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffccu)); esp -= 4; W32(esp, v); }
/* 476996: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 476998: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 476999: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 47699c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47699d: mov ecx, edi */
  ecx = edi;
/* 47699f: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 4769a3: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0x4769a6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4769a6: jmp 0x4769c9 */
  goto L_4769c9;
L_4769c9: /* 4769c9: xor ebx, ebx */
  ebx = 0;
/* 4769cb: test byte ptr [ebp - 0x14], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffecu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4769cf: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4769d2: jne 0x4769ec */
  if (!zf) goto L_4769ec;
L_4769d4: /* 4769d4: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 4769d7: cmp eax, 0x80000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4769dc: jl 0x4769ec */
  if ((sf != of)) goto L_4769ec;
L_4769de: /* 4769de: cmp eax, 0x7fffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4769e3: jg 0x4769ec */
  if ((!zf && sf == of)) goto L_4769ec;
L_4769e5: /* 4769e5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4769e8: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 4769ea: jmp 0x4769f0 */
  goto L_4769f0;
L_4769ec: /* 4769ec: or dword ptr [ebp - 0x14], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
L_4769f0: /* 4769f0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4769f2: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4769f5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4769f6: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 4769f9: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4769fb: call 0x461453 */
  esp -= 4; W32(esp, 0x476a00u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 476a00: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 476a04: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 476a07: call 0x46228e */
  esp -= 4; W32(esp, 0x476a0cu); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 476a0c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 476a0f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 476a10: mov eax, esi */
  eax = esi;
/* 476a12: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 476a13: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 476a1a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 476a1b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 476a1c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4769a8(void) {
  LOAD_REGS();
L_4769a8: /* 4769a8: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 4769ab: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4769ad: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4769b0: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4769b2: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4769b5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4769b7: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4769ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4769bb: call 0x464bb2 */
  esp -= 4; W32(esp, 0x4769c0u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 4769c0: mov eax, 0x4769c6 */
  eax = 0x4769c6u;
/* 4769c5: ret  */
  esp += 4; SPILL(); return;
}

void f_4769c6(void) {
  LOAD_REGS();
L_4769c6: /* 4769c6: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 4769c9: xor ebx, ebx */
  ebx = 0;
/* 4769cb: test byte ptr [ebp - 0x14], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffecu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4769cf: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4769d2: jne 0x4769ec */
  if (!zf) goto L_4769ec;
L_4769d4: /* 4769d4: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 4769d7: cmp eax, 0x80000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4769dc: jl 0x4769ec */
  if ((sf != of)) goto L_4769ec;
L_4769de: /* 4769de: cmp eax, 0x7fffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4769e3: jg 0x4769ec */
  if ((!zf && sf == of)) goto L_4769ec;
L_4769e5: /* 4769e5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4769e8: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 4769ea: jmp 0x4769f0 */
  goto L_4769f0;
L_4769ec: /* 4769ec: or dword ptr [ebp - 0x14], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
L_4769f0: /* 4769f0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4769f2: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4769f5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4769f6: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 4769f9: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4769fb: call 0x461453 */
  esp -= 4; W32(esp, 0x476a00u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4769c6u: guest_unwind_done(); RELOAD(); goto L_4769c6; } return; } RELOAD();
/* 476a00: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 476a04: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 476a07: call 0x46228e */
  esp -= 4; W32(esp, 0x476a0cu); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4769c6u: guest_unwind_done(); RELOAD(); goto L_4769c6; } return; } RELOAD();
/* 476a0c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 476a0f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 476a10: mov eax, esi */
  eax = esi;
/* 476a12: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 476a13: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 476a1a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 476a1b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 476a1c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_476a1f(void) {
  LOAD_REGS();
L_476a1f: /* 476a1f: mov eax, 0x48cca4 */
  eax = 0x48cca4u;
/* 476a24: call 0x4616c0 */
  esp -= 4; W32(esp, 0x476a29u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 476a29: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 476a2c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 476a2d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 476a2e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 476a2f: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 476a32: mov esi, ecx */
  esi = ecx;
/* 476a34: xor ebx, ebx */
  ebx = 0;
/* 476a36: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 476a37: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 476a38: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 476a3b: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 476a3e: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 476a41: call 0x466d91 */
  esp -= 4; W32(esp, 0x476a46u); SPILL(); f_466d91(); if (g_unwind) return; RELOAD();
/* 476a46: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 476a49: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 476a4c: je 0x476acd */
  if (zf) goto L_476acd;
L_476a4e: /* 476a4e: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 476a51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476a52: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476a54: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 476a57: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 476a59: call 0x464a5a */
  esp -= 4; W32(esp, 0x476a5eu); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 476a5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476a5f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 476a63: call 0x46e55f */
  esp -= 4; W32(esp, 0x476a68u); SPILL(); f_46e55f(); if (g_unwind) return; RELOAD();
/* 476a68: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 476a69: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 476a6c: mov edi, eax */
  edi = eax;
/* 476a6e: call 0x461389 */
  esp -= 4; W32(esp, 0x476a73u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 476a73: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476a75: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 476a78: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 476a7b: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 476a7d: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 476a80: xor edx, edx */
  edx = 0;
/* 476a82: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 476a84: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 476a87: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 476a8a: lea ebx, [ebp - 0x18] */
  ebx = (uint32_t)(ebp + 0xffffffe8u);
/* 476a8d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 476a8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476a8f: mov byte ptr [ebp - 0x1c], 1 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 476a93: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 476a96: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 476a99: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 476a9a: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 476a9d: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 476aa1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 476aa2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476aa3: mov ecx, edi */
  ecx = edi;
/* 476aa5: call 0x4689cf */
  esp -= 4; W32(esp, 0x476aaau); SPILL(); f_4689cf(); if (g_unwind) return; RELOAD();
/* 476aaa: jmp 0x476acd */
  goto L_476acd;
L_476acd: /* 476acd: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476acf: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 476ad2: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 476ad6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 476ad8: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 476adb: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 476add: call 0x461453 */
  esp -= 4; W32(esp, 0x476ae2u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 476ae2: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 476ae6: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 476ae9: call 0x46228e */
  esp -= 4; W32(esp, 0x476aeeu); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 476aee: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 476af1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 476af2: mov eax, esi */
  eax = esi;
/* 476af4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 476af5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 476afc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 476afd: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 476afe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_476aac(void) {
  LOAD_REGS();
L_476aac: /* 476aac: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 476aaf: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 476ab1: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 476ab4: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 476ab6: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 476ab9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 476abb: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 476abe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476abf: call 0x464bb2 */
  esp -= 4; W32(esp, 0x476ac4u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 476ac4: mov eax, 0x476aca */
  eax = 0x476acau;
/* 476ac9: ret  */
  esp += 4; SPILL(); return;
}

void f_476aca(void) {
  LOAD_REGS();
L_476aca: /* 476aca: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 476acd: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476acf: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 476ad2: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 476ad6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 476ad8: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 476adb: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 476add: call 0x461453 */
  esp -= 4; W32(esp, 0x476ae2u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x476acau: guest_unwind_done(); RELOAD(); goto L_476aca; } return; } RELOAD();
/* 476ae2: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 476ae6: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 476ae9: call 0x46228e */
  esp -= 4; W32(esp, 0x476aeeu); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x476acau: guest_unwind_done(); RELOAD(); goto L_476aca; } return; } RELOAD();
/* 476aee: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 476af1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 476af2: mov eax, esi */
  eax = esi;
/* 476af4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 476af5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 476afc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 476afd: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 476afe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_476b01(void) {
  LOAD_REGS();
L_476b01: /* 476b01: mov eax, 0x48ccbe */
  eax = 0x48ccbeu;
/* 476b06: call 0x4616c0 */
  esp -= 4; W32(esp, 0x476b0bu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 476b0b: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 476b0e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 476b0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 476b10: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 476b11: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 476b14: mov esi, ecx */
  esi = ecx;
/* 476b16: xor ebx, ebx */
  ebx = 0;
/* 476b18: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 476b19: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 476b1a: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 476b1d: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 476b20: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 476b23: call 0x466d91 */
  esp -= 4; W32(esp, 0x476b28u); SPILL(); f_466d91(); if (g_unwind) return; RELOAD();
/* 476b28: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 476b2b: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 476b2e: je 0x476baf */
  if (zf) goto L_476baf;
L_476b30: /* 476b30: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 476b33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476b34: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476b36: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 476b39: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 476b3b: call 0x464a5a */
  esp -= 4; W32(esp, 0x476b40u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 476b40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476b41: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 476b45: call 0x46e55f */
  esp -= 4; W32(esp, 0x476b4au); SPILL(); f_46e55f(); if (g_unwind) return; RELOAD();
/* 476b4a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 476b4b: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 476b4e: mov edi, eax */
  edi = eax;
/* 476b50: call 0x461389 */
  esp -= 4; W32(esp, 0x476b55u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 476b55: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476b57: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 476b5a: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 476b5d: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 476b5f: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 476b62: xor edx, edx */
  edx = 0;
/* 476b64: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 476b66: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 476b69: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 476b6c: lea ebx, [ebp - 0x18] */
  ebx = (uint32_t)(ebp + 0xffffffe8u);
/* 476b6f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 476b70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476b71: mov byte ptr [ebp - 0x1c], 1 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 476b75: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 476b78: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 476b7b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 476b7c: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 476b7f: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 476b83: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 476b84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476b85: mov ecx, edi */
  ecx = edi;
/* 476b87: call 0x4689f6 */
  esp -= 4; W32(esp, 0x476b8cu); SPILL(); f_4689f6(); if (g_unwind) return; RELOAD();
/* 476b8c: jmp 0x476baf */
  goto L_476baf;
L_476baf: /* 476baf: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476bb1: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 476bb4: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 476bb8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 476bba: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 476bbd: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 476bbf: call 0x461453 */
  esp -= 4; W32(esp, 0x476bc4u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 476bc4: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 476bc8: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 476bcb: call 0x46228e */
  esp -= 4; W32(esp, 0x476bd0u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 476bd0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 476bd3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 476bd4: mov eax, esi */
  eax = esi;
/* 476bd6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 476bd7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 476bde: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 476bdf: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 476be0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_476b8e(void) {
  LOAD_REGS();
L_476b8e: /* 476b8e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 476b91: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 476b93: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 476b96: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 476b98: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 476b9b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 476b9d: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 476ba0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476ba1: call 0x464bb2 */
  esp -= 4; W32(esp, 0x476ba6u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 476ba6: mov eax, 0x476bac */
  eax = 0x476bacu;
/* 476bab: ret  */
  esp += 4; SPILL(); return;
}

void f_476bac(void) {
  LOAD_REGS();
L_476bac: /* 476bac: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 476baf: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476bb1: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 476bb4: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 476bb8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 476bba: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 476bbd: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 476bbf: call 0x461453 */
  esp -= 4; W32(esp, 0x476bc4u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x476bacu: guest_unwind_done(); RELOAD(); goto L_476bac; } return; } RELOAD();
/* 476bc4: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 476bc8: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 476bcb: call 0x46228e */
  esp -= 4; W32(esp, 0x476bd0u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x476bacu: guest_unwind_done(); RELOAD(); goto L_476bac; } return; } RELOAD();
/* 476bd0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 476bd3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 476bd4: mov eax, esi */
  eax = esi;
/* 476bd6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 476bd7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 476bde: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 476bdf: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 476be0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_476be3(void) {
  LOAD_REGS();
L_476be3: /* 476be3: mov eax, 0x48ccd8 */
  eax = 0x48ccd8u;
/* 476be8: call 0x4616c0 */
  esp -= 4; W32(esp, 0x476bedu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 476bed: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 476bf0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 476bf1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 476bf2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 476bf3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 476bf6: mov esi, ecx */
  esi = ecx;
/* 476bf8: xor ebx, ebx */
  ebx = 0;
/* 476bfa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 476bfb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 476bfc: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 476bff: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 476c02: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 476c05: call 0x466d91 */
  esp -= 4; W32(esp, 0x476c0au); SPILL(); f_466d91(); if (g_unwind) return; RELOAD();
/* 476c0a: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 476c0d: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 476c10: je 0x476c91 */
  if (zf) goto L_476c91;
L_476c12: /* 476c12: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 476c15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476c16: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476c18: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 476c1b: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 476c1d: call 0x464a5a */
  esp -= 4; W32(esp, 0x476c22u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 476c22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476c23: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 476c27: call 0x46e55f */
  esp -= 4; W32(esp, 0x476c2cu); SPILL(); f_46e55f(); if (g_unwind) return; RELOAD();
/* 476c2c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 476c2d: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 476c30: mov edi, eax */
  edi = eax;
/* 476c32: call 0x461389 */
  esp -= 4; W32(esp, 0x476c37u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 476c37: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476c39: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 476c3c: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 476c3f: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 476c41: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 476c44: xor edx, edx */
  edx = 0;
/* 476c46: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 476c48: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 476c4b: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 476c4e: lea ebx, [ebp - 0x18] */
  ebx = (uint32_t)(ebp + 0xffffffe8u);
/* 476c51: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 476c52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476c53: mov byte ptr [ebp - 0x1c], 1 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 476c57: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 476c5a: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 476c5d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 476c5e: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 476c61: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 476c65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 476c66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476c67: mov ecx, edi */
  ecx = edi;
/* 476c69: call 0x468836 */
  esp -= 4; W32(esp, 0x476c6eu); SPILL(); f_468836(); if (g_unwind) return; RELOAD();
/* 476c6e: jmp 0x476c91 */
  goto L_476c91;
L_476c91: /* 476c91: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476c93: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 476c96: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 476c9a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 476c9c: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 476c9f: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 476ca1: call 0x461453 */
  esp -= 4; W32(esp, 0x476ca6u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 476ca6: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 476caa: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 476cad: call 0x46228e */
  esp -= 4; W32(esp, 0x476cb2u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 476cb2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 476cb5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 476cb6: mov eax, esi */
  eax = esi;
/* 476cb8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 476cb9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 476cc0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 476cc1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 476cc2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_476c70(void) {
  LOAD_REGS();
L_476c70: /* 476c70: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 476c73: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 476c75: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 476c78: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 476c7a: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 476c7d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 476c7f: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 476c82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476c83: call 0x464bb2 */
  esp -= 4; W32(esp, 0x476c88u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 476c88: mov eax, 0x476c8e */
  eax = 0x476c8eu;
/* 476c8d: ret  */
  esp += 4; SPILL(); return;
}

void f_476c8e(void) {
  LOAD_REGS();
L_476c8e: /* 476c8e: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 476c91: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476c93: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 476c96: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 476c9a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 476c9c: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 476c9f: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 476ca1: call 0x461453 */
  esp -= 4; W32(esp, 0x476ca6u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x476c8eu: guest_unwind_done(); RELOAD(); goto L_476c8e; } return; } RELOAD();
/* 476ca6: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 476caa: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 476cad: call 0x46228e */
  esp -= 4; W32(esp, 0x476cb2u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x476c8eu: guest_unwind_done(); RELOAD(); goto L_476c8e; } return; } RELOAD();
/* 476cb2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 476cb5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 476cb6: mov eax, esi */
  eax = esi;
/* 476cb8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 476cb9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 476cc0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 476cc1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 476cc2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_476cc5(void) {
  LOAD_REGS();
L_476cc5: /* 476cc5: mov eax, 0x48ccf2 */
  eax = 0x48ccf2u;
/* 476cca: call 0x4616c0 */
  esp -= 4; W32(esp, 0x476ccfu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 476ccf: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 476cd2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 476cd3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 476cd4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 476cd5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 476cd8: mov esi, ecx */
  esi = ecx;
/* 476cda: xor ebx, ebx */
  ebx = 0;
/* 476cdc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 476cdd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 476cde: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 476ce1: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 476ce4: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 476ce7: call 0x466d91 */
  esp -= 4; W32(esp, 0x476cecu); SPILL(); f_466d91(); if (g_unwind) return; RELOAD();
/* 476cec: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 476cef: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 476cf2: je 0x476d73 */
  if (zf) goto L_476d73;
L_476cf4: /* 476cf4: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 476cf7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476cf8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476cfa: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 476cfd: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 476cff: call 0x464a5a */
  esp -= 4; W32(esp, 0x476d04u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 476d04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476d05: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 476d09: call 0x46e55f */
  esp -= 4; W32(esp, 0x476d0eu); SPILL(); f_46e55f(); if (g_unwind) return; RELOAD();
/* 476d0e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 476d0f: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 476d12: mov edi, eax */
  edi = eax;
/* 476d14: call 0x461389 */
  esp -= 4; W32(esp, 0x476d19u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 476d19: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476d1b: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 476d1e: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 476d21: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 476d23: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 476d26: xor edx, edx */
  edx = 0;
/* 476d28: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 476d2a: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 476d2d: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 476d30: lea ebx, [ebp - 0x18] */
  ebx = (uint32_t)(ebp + 0xffffffe8u);
/* 476d33: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 476d34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476d35: mov byte ptr [ebp - 0x1c], 1 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 476d39: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 476d3c: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 476d3f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 476d40: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 476d43: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 476d47: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 476d48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476d49: mov ecx, edi */
  ecx = edi;
/* 476d4b: call 0x46885d */
  esp -= 4; W32(esp, 0x476d50u); SPILL(); f_46885d(); if (g_unwind) return; RELOAD();
/* 476d50: jmp 0x476d73 */
  goto L_476d73;
L_476d73: /* 476d73: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476d75: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 476d78: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 476d7c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 476d7e: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 476d81: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 476d83: call 0x461453 */
  esp -= 4; W32(esp, 0x476d88u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 476d88: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 476d8c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 476d8f: call 0x46228e */
  esp -= 4; W32(esp, 0x476d94u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 476d94: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 476d97: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 476d98: mov eax, esi */
  eax = esi;
/* 476d9a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 476d9b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 476da2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 476da3: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 476da4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_476d52(void) {
  LOAD_REGS();
L_476d52: /* 476d52: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 476d55: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 476d57: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 476d5a: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 476d5c: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 476d5f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 476d61: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 476d64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476d65: call 0x464bb2 */
  esp -= 4; W32(esp, 0x476d6au); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 476d6a: mov eax, 0x476d70 */
  eax = 0x476d70u;
/* 476d6f: ret  */
  esp += 4; SPILL(); return;
}

void f_476d70(void) {
  LOAD_REGS();
L_476d70: /* 476d70: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 476d73: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476d75: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 476d78: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 476d7c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 476d7e: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 476d81: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 476d83: call 0x461453 */
  esp -= 4; W32(esp, 0x476d88u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x476d70u: guest_unwind_done(); RELOAD(); goto L_476d70; } return; } RELOAD();
/* 476d88: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 476d8c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 476d8f: call 0x46228e */
  esp -= 4; W32(esp, 0x476d94u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x476d70u: guest_unwind_done(); RELOAD(); goto L_476d70; } return; } RELOAD();
/* 476d94: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 476d97: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 476d98: mov eax, esi */
  eax = esi;
/* 476d9a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 476d9b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 476da2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 476da3: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 476da4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_476da7(void) {
  LOAD_REGS();
L_476da7: /* 476da7: mov eax, 0x48cd0c */
  eax = 0x48cd0cu;
/* 476dac: call 0x4616c0 */
  esp -= 4; W32(esp, 0x476db1u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 476db1: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 476db4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 476db5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 476db6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 476db7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 476dba: mov esi, ecx */
  esi = ecx;
/* 476dbc: xor ebx, ebx */
  ebx = 0;
/* 476dbe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 476dbf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 476dc0: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 476dc3: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 476dc6: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 476dc9: call 0x466d91 */
  esp -= 4; W32(esp, 0x476dceu); SPILL(); f_466d91(); if (g_unwind) return; RELOAD();
/* 476dce: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 476dd1: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 476dd4: je 0x476e55 */
  if (zf) goto L_476e55;
L_476dd6: /* 476dd6: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 476dd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476dda: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476ddc: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 476ddf: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 476de1: call 0x464a5a */
  esp -= 4; W32(esp, 0x476de6u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 476de6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476de7: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 476deb: call 0x46e55f */
  esp -= 4; W32(esp, 0x476df0u); SPILL(); f_46e55f(); if (g_unwind) return; RELOAD();
/* 476df0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 476df1: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 476df4: mov edi, eax */
  edi = eax;
/* 476df6: call 0x461389 */
  esp -= 4; W32(esp, 0x476dfbu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 476dfb: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476dfd: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 476e00: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 476e03: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 476e05: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 476e08: xor edx, edx */
  edx = 0;
/* 476e0a: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 476e0c: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 476e0f: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 476e12: lea ebx, [ebp - 0x18] */
  ebx = (uint32_t)(ebp + 0xffffffe8u);
/* 476e15: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 476e16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476e17: mov byte ptr [ebp - 0x1c], 1 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 476e1b: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 476e1e: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 476e21: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 476e22: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 476e25: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 476e29: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 476e2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476e2b: mov ecx, edi */
  ecx = edi;
/* 476e2d: call 0x4696e7 */
  esp -= 4; W32(esp, 0x476e32u); SPILL(); f_4696e7(); if (g_unwind) return; RELOAD();
/* 476e32: jmp 0x476e55 */
  goto L_476e55;
L_476e55: /* 476e55: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476e57: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 476e5a: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 476e5e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 476e60: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 476e63: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 476e65: call 0x461453 */
  esp -= 4; W32(esp, 0x476e6au); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 476e6a: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 476e6e: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 476e71: call 0x46228e */
  esp -= 4; W32(esp, 0x476e76u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 476e76: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 476e79: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 476e7a: mov eax, esi */
  eax = esi;
/* 476e7c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 476e7d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 476e84: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 476e85: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 476e86: ret 4 */
  esp += 8; SPILL(); return;
}

void f_476e34(void) {
  LOAD_REGS();
L_476e34: /* 476e34: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 476e37: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 476e39: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 476e3c: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 476e3e: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 476e41: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 476e43: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 476e46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476e47: call 0x464bb2 */
  esp -= 4; W32(esp, 0x476e4cu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 476e4c: mov eax, 0x476e52 */
  eax = 0x476e52u;
/* 476e51: ret  */
  esp += 4; SPILL(); return;
}

void f_476e52(void) {
  LOAD_REGS();
L_476e52: /* 476e52: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 476e55: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476e57: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 476e5a: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 476e5e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 476e60: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 476e63: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 476e65: call 0x461453 */
  esp -= 4; W32(esp, 0x476e6au); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x476e52u: guest_unwind_done(); RELOAD(); goto L_476e52; } return; } RELOAD();
/* 476e6a: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 476e6e: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 476e71: call 0x46228e */
  esp -= 4; W32(esp, 0x476e76u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x476e52u: guest_unwind_done(); RELOAD(); goto L_476e52; } return; } RELOAD();
/* 476e76: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 476e79: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 476e7a: mov eax, esi */
  eax = esi;
/* 476e7c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 476e7d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 476e84: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 476e85: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 476e86: ret 4 */
  esp += 8; SPILL(); return;
}

void f_476e89(void) {
  LOAD_REGS();
L_476e89: /* 476e89: mov eax, 0x48cd26 */
  eax = 0x48cd26u;
/* 476e8e: call 0x4616c0 */
  esp -= 4; W32(esp, 0x476e93u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 476e93: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 476e96: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 476e97: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 476e98: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 476e99: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 476e9c: mov esi, ecx */
  esi = ecx;
/* 476e9e: xor ebx, ebx */
  ebx = 0;
/* 476ea0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 476ea1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 476ea2: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 476ea5: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 476ea8: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 476eab: call 0x466d91 */
  esp -= 4; W32(esp, 0x476eb0u); SPILL(); f_466d91(); if (g_unwind) return; RELOAD();
/* 476eb0: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 476eb3: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 476eb6: je 0x476f37 */
  if (zf) goto L_476f37;
L_476eb8: /* 476eb8: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 476ebb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476ebc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476ebe: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 476ec1: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 476ec3: call 0x464a5a */
  esp -= 4; W32(esp, 0x476ec8u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 476ec8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476ec9: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 476ecd: call 0x46e55f */
  esp -= 4; W32(esp, 0x476ed2u); SPILL(); f_46e55f(); if (g_unwind) return; RELOAD();
/* 476ed2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 476ed3: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 476ed6: mov edi, eax */
  edi = eax;
/* 476ed8: call 0x461389 */
  esp -= 4; W32(esp, 0x476eddu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 476edd: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476edf: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 476ee2: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 476ee5: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 476ee7: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 476eea: xor edx, edx */
  edx = 0;
/* 476eec: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 476eee: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 476ef1: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 476ef4: lea ebx, [ebp - 0x18] */
  ebx = (uint32_t)(ebp + 0xffffffe8u);
/* 476ef7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 476ef8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476ef9: mov byte ptr [ebp - 0x1c], 1 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 476efd: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 476f00: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 476f03: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 476f04: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 476f07: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 476f0b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 476f0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476f0d: mov ecx, edi */
  ecx = edi;
/* 476f0f: call 0x468884 */
  esp -= 4; W32(esp, 0x476f14u); SPILL(); f_468884(); if (g_unwind) return; RELOAD();
/* 476f14: jmp 0x476f37 */
  goto L_476f37;
L_476f37: /* 476f37: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476f39: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 476f3c: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 476f40: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 476f42: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 476f45: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 476f47: call 0x461453 */
  esp -= 4; W32(esp, 0x476f4cu); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 476f4c: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 476f50: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 476f53: call 0x46228e */
  esp -= 4; W32(esp, 0x476f58u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 476f58: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 476f5b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 476f5c: mov eax, esi */
  eax = esi;
/* 476f5e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 476f5f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 476f66: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 476f67: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 476f68: ret 4 */
  esp += 8; SPILL(); return;
}

void f_476f16(void) {
  LOAD_REGS();
L_476f16: /* 476f16: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 476f19: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 476f1b: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 476f1e: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 476f20: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 476f23: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 476f25: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 476f28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476f29: call 0x464bb2 */
  esp -= 4; W32(esp, 0x476f2eu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 476f2e: mov eax, 0x476f34 */
  eax = 0x476f34u;
/* 476f33: ret  */
  esp += 4; SPILL(); return;
}

void f_476f34(void) {
  LOAD_REGS();
L_476f34: /* 476f34: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 476f37: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476f39: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 476f3c: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 476f40: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 476f42: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 476f45: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 476f47: call 0x461453 */
  esp -= 4; W32(esp, 0x476f4cu); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x476f34u: guest_unwind_done(); RELOAD(); goto L_476f34; } return; } RELOAD();
/* 476f4c: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 476f50: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 476f53: call 0x46228e */
  esp -= 4; W32(esp, 0x476f58u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x476f34u: guest_unwind_done(); RELOAD(); goto L_476f34; } return; } RELOAD();
/* 476f58: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 476f5b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 476f5c: mov eax, esi */
  eax = esi;
/* 476f5e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 476f5f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 476f66: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 476f67: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 476f68: ret 4 */
  esp += 8; SPILL(); return;
}

void f_476f6b(void) {
  LOAD_REGS();
L_476f6b: /* 476f6b: mov eax, 0x48cd40 */
  eax = 0x48cd40u;
/* 476f70: call 0x4616c0 */
  esp -= 4; W32(esp, 0x476f75u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 476f75: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 476f78: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 476f79: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 476f7a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 476f7b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 476f7e: mov esi, ecx */
  esi = ecx;
/* 476f80: xor ebx, ebx */
  ebx = 0;
/* 476f82: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 476f83: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 476f84: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 476f87: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 476f8a: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 476f8d: call 0x466d91 */
  esp -= 4; W32(esp, 0x476f92u); SPILL(); f_466d91(); if (g_unwind) return; RELOAD();
/* 476f92: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 476f95: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 476f98: je 0x477019 */
  if (zf) goto L_477019;
L_476f9a: /* 476f9a: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 476f9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476f9e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476fa0: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 476fa3: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 476fa5: call 0x464a5a */
  esp -= 4; W32(esp, 0x476faau); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 476faa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476fab: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 476faf: call 0x46e55f */
  esp -= 4; W32(esp, 0x476fb4u); SPILL(); f_46e55f(); if (g_unwind) return; RELOAD();
/* 476fb4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 476fb5: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 476fb8: mov edi, eax */
  edi = eax;
/* 476fba: call 0x461389 */
  esp -= 4; W32(esp, 0x476fbfu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 476fbf: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 476fc1: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 476fc4: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 476fc7: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 476fc9: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 476fcc: xor edx, edx */
  edx = 0;
/* 476fce: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 476fd0: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 476fd3: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 476fd6: lea ebx, [ebp - 0x18] */
  ebx = (uint32_t)(ebp + 0xffffffe8u);
/* 476fd9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 476fda: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476fdb: mov byte ptr [ebp - 0x1c], 1 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 476fdf: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 476fe2: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 476fe5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 476fe6: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 476fe9: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 476fed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 476fee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 476fef: mov ecx, edi */
  ecx = edi;
/* 476ff1: call 0x4688ab */
  esp -= 4; W32(esp, 0x476ff6u); SPILL(); f_4688ab(); if (g_unwind) return; RELOAD();
/* 476ff6: jmp 0x477019 */
  goto L_477019;
L_477019: /* 477019: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47701b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47701e: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 477022: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 477024: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 477027: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 477029: call 0x461453 */
  esp -= 4; W32(esp, 0x47702eu); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 47702e: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 477032: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 477035: call 0x46228e */
  esp -= 4; W32(esp, 0x47703au); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 47703a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47703d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47703e: mov eax, esi */
  eax = esi;
/* 477040: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 477041: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 477048: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 477049: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47704a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_476ff8(void) {
  LOAD_REGS();
L_476ff8: /* 476ff8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 476ffb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 476ffd: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 477000: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 477002: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 477005: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 477007: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 47700a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47700b: call 0x464bb2 */
  esp -= 4; W32(esp, 0x477010u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 477010: mov eax, 0x477016 */
  eax = 0x477016u;
/* 477015: ret  */
  esp += 4; SPILL(); return;
}

void f_477016(void) {
  LOAD_REGS();
L_477016: /* 477016: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 477019: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47701b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47701e: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 477022: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 477024: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 477027: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 477029: call 0x461453 */
  esp -= 4; W32(esp, 0x47702eu); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x477016u: guest_unwind_done(); RELOAD(); goto L_477016; } return; } RELOAD();
/* 47702e: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 477032: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 477035: call 0x46228e */
  esp -= 4; W32(esp, 0x47703au); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x477016u: guest_unwind_done(); RELOAD(); goto L_477016; } return; } RELOAD();
/* 47703a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47703d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47703e: mov eax, esi */
  eax = esi;
/* 477040: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 477041: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 477048: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 477049: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47704a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_47704d(void) {
  LOAD_REGS();
L_47704d: /* 47704d: mov eax, 0x48cd5a */
  eax = 0x48cd5au;
/* 477052: call 0x4616c0 */
  esp -= 4; W32(esp, 0x477057u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 477057: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47705a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47705b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47705c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47705d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 477060: mov esi, ecx */
  esi = ecx;
/* 477062: xor ebx, ebx */
  ebx = 0;
/* 477064: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 477065: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 477066: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 477069: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 47706c: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 47706f: call 0x466d91 */
  esp -= 4; W32(esp, 0x477074u); SPILL(); f_466d91(); if (g_unwind) return; RELOAD();
/* 477074: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 477077: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 47707a: je 0x4770fb */
  if (zf) goto L_4770fb;
L_47707c: /* 47707c: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 47707f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477080: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 477082: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 477085: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 477087: call 0x464a5a */
  esp -= 4; W32(esp, 0x47708cu); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47708c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47708d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 477091: call 0x46e55f */
  esp -= 4; W32(esp, 0x477096u); SPILL(); f_46e55f(); if (g_unwind) return; RELOAD();
/* 477096: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 477097: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 47709a: mov edi, eax */
  edi = eax;
/* 47709c: call 0x461389 */
  esp -= 4; W32(esp, 0x4770a1u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 4770a1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4770a3: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4770a6: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4770a9: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4770ab: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 4770ae: xor edx, edx */
  edx = 0;
/* 4770b0: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4770b2: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 4770b5: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 4770b8: lea ebx, [ebp - 0x18] */
  ebx = (uint32_t)(ebp + 0xffffffe8u);
/* 4770bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4770bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4770bd: mov byte ptr [ebp - 0x1c], 1 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 4770c1: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 4770c4: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 4770c7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4770c8: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 4770cb: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 4770cf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4770d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4770d1: mov ecx, edi */
  ecx = edi;
/* 4770d3: call 0x4688d2 */
  esp -= 4; W32(esp, 0x4770d8u); SPILL(); f_4688d2(); if (g_unwind) return; RELOAD();
/* 4770d8: jmp 0x4770fb */
  goto L_4770fb;
L_4770fb: /* 4770fb: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4770fd: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 477100: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 477104: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 477106: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 477109: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47710b: call 0x461453 */
  esp -= 4; W32(esp, 0x477110u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 477110: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 477114: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 477117: call 0x46228e */
  esp -= 4; W32(esp, 0x47711cu); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 47711c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47711f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 477120: mov eax, esi */
  eax = esi;
/* 477122: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 477123: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47712a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47712b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47712c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4770da(void) {
  LOAD_REGS();
L_4770da: /* 4770da: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 4770dd: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4770df: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4770e2: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4770e4: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4770e7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4770e9: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4770ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4770ed: call 0x464bb2 */
  esp -= 4; W32(esp, 0x4770f2u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 4770f2: mov eax, 0x4770f8 */
  eax = 0x4770f8u;
/* 4770f7: ret  */
  esp += 4; SPILL(); return;
}

void f_4770f8(void) {
  LOAD_REGS();
L_4770f8: /* 4770f8: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 4770fb: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4770fd: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 477100: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 477104: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 477106: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 477109: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47710b: call 0x461453 */
  esp -= 4; W32(esp, 0x477110u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4770f8u: guest_unwind_done(); RELOAD(); goto L_4770f8; } return; } RELOAD();
/* 477110: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 477114: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 477117: call 0x46228e */
  esp -= 4; W32(esp, 0x47711cu); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x4770f8u: guest_unwind_done(); RELOAD(); goto L_4770f8; } return; } RELOAD();
/* 47711c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47711f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 477120: mov eax, esi */
  eax = esi;
/* 477122: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 477123: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47712a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47712b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47712c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_47712f(void) {
  LOAD_REGS();
L_47712f: /* 47712f: mov eax, 0x48cd74 */
  eax = 0x48cd74u;
/* 477134: call 0x4616c0 */
  esp -= 4; W32(esp, 0x477139u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 477139: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47713c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47713d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47713e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47713f: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 477142: mov esi, ecx */
  esi = ecx;
/* 477144: xor ebx, ebx */
  ebx = 0;
/* 477146: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 477147: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 477148: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 47714b: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 47714e: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 477151: call 0x466d91 */
  esp -= 4; W32(esp, 0x477156u); SPILL(); f_466d91(); if (g_unwind) return; RELOAD();
/* 477156: cmp byte ptr [ebp - 0x24], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 477159: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 47715c: je 0x4771dd */
  if (zf) goto L_4771dd;
L_47715e: /* 47715e: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 477161: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 477162: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 477164: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 477167: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 477169: call 0x464a5a */
  esp -= 4; W32(esp, 0x47716eu); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47716e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47716f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 477173: call 0x46e55f */
  esp -= 4; W32(esp, 0x477178u); SPILL(); f_46e55f(); if (g_unwind) return; RELOAD();
/* 477178: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 477179: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 47717c: mov edi, eax */
  edi = eax;
/* 47717e: call 0x461389 */
  esp -= 4; W32(esp, 0x477183u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 477183: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 477185: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 477188: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47718b: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 47718d: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 477190: xor edx, edx */
  edx = 0;
/* 477192: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 477194: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 477197: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
/* 47719a: lea ebx, [ebp - 0x18] */
  ebx = (uint32_t)(ebp + 0xffffffe8u);
/* 47719d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47719e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47719f: mov byte ptr [ebp - 0x1c], 1 */
  W8((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 4771a3: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 4771a6: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 4771a9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4771aa: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 4771ad: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 4771b1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4771b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4771b3: mov ecx, edi */
  ecx = edi;
/* 4771b5: call 0x4688f9 */
  esp -= 4; W32(esp, 0x4771bau); SPILL(); f_4688f9(); if (g_unwind) return; RELOAD();
/* 4771ba: jmp 0x4771dd */
  goto L_4771dd;
L_4771dd: /* 4771dd: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4771df: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4771e2: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4771e6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4771e8: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 4771eb: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4771ed: call 0x461453 */
  esp -= 4; W32(esp, 0x4771f2u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 4771f2: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4771f6: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4771f9: call 0x46228e */
  esp -= 4; W32(esp, 0x4771feu); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 4771fe: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 477201: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 477202: mov eax, esi */
  eax = esi;
/* 477204: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 477205: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47720c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47720d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47720e: ret 4 */
  esp += 8; SPILL(); return;
}
