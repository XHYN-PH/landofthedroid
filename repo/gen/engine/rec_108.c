#include "recomp.h"
#include "rec_mod.h"

void f_8d6cc5(void) {
  LOAD_REGS();
L_8d6cc5: /* 8d6cc5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d6cc8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d6ccd: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8d6cd0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d6cd1: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8d6cd4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d6cd9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d6cd9(); return;
}

void f_8d6cd9(void) {
  LOAD_REGS();
L_8d6cd9: /* 8d6cd9: push 0xa1cdfc */
  { uint32_t v = 0xa1cdfcu; esp -= 4; W32(esp, v); }
/* 8d6cde: push 0xaed1fc */
  { uint32_t v = 0xaed1fcu; esp -= 4; W32(esp, v); }
/* 8d6ce3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d6ce9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d6ce9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d6cec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d6cee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d6cf0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d6cf5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8d6cf5: guest_badaddr(0x8d6cf5); return;
}

void f_8d6d40(void) {
  LOAD_REGS();
L_8d6d40: /* 8d6d40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d6d41: mov ebp, esp */
  ebp = esp;
/* 8d6d43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d6d45: push 0x9d8410 */
  { uint32_t v = 0x9d8410u; esp -= 4; W32(esp, v); }
/* 8d6d4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d6d50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d6d51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d6d58: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d6d5b: mov eax, dword ptr [0xb19068] */
  eax = R32((uint32_t)(0xb19068u));
/* 8d6d60: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d6d62: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d6d63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d6d64: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d6d65: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d6d68: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8d6d6f: je 0x8d6e20 */
  if (zf) goto L_8d6e20;
L_8d6d75: /* 8d6d75: mov ecx, dword ptr [0xb19070] */
  ecx = R32((uint32_t)(0xb19070u));
/* 8d6d7b: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8d6d7e: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 8d6d81: fadd dword ptr [eax + ecx + 0x2f4] */
  ST0 = ST0 + (F32((uint32_t)(eax + ecx + 0x2f4u)));
/* 8d6d88: fstp dword ptr [eax + ecx + 0x2f4] */
  WF32((uint32_t)(eax + ecx + 0x2f4u), ST0); FPOP();
/* 8d6d8f: mov edx, dword ptr [0xb19068] */
  edx = R32((uint32_t)(0xb19068u));
/* 8d6d95: lea eax, [eax + ecx + 0x2f4] */
  eax = (uint32_t)(eax + ecx + 0x2f4u);
/* 8d6d9c: mov eax, edx */
  eax = edx;
/* 8d6d9e: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 8d6da1: fld dword ptr [eax + ecx + 0x2f4] */
  { double v = F32((uint32_t)(eax + ecx + 0x2f4u)); FPUSH(v); }
/* 8d6da8: fcomp dword ptr [0xa110a4] */
  fpu_com(ST0, F32((uint32_t)(0xa110a4u)));
  FPOP();
/* 8d6dae: lea esi, [eax + ecx + 0x2f4] */
  esi = (uint32_t)(eax + ecx + 0x2f4u);
/* 8d6db5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d6db7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d6dba: jne 0x8d6dcc */
  if (!zf) goto L_8d6dcc;
L_8d6dbc: /* 8d6dbc: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8d6dbe: fsub dword ptr [0xa110a4] */
  ST0 = ST0 - (F32((uint32_t)(0xa110a4u)));
/* 8d6dc4: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 8d6dc6: mov edx, dword ptr [0xb19068] */
  edx = R32((uint32_t)(0xb19068u));
L_8d6dcc: /* 8d6dcc: imul edx, edx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x78u);
  edx = (uint32_t)r;
  }
/* 8d6dcf: fld dword ptr [edx + ecx + 0x2f4] */
  { double v = F32((uint32_t)(edx + ecx + 0x2f4u)); FPUSH(v); }
/* 8d6dd6: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8d6ddc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d6dde: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8d6de1: lea edx, [edx + ecx + 0x2f4] */
  edx = (uint32_t)(edx + ecx + 0x2f4u);
/* 8d6de8: jp 0x8d6df4 */
  if (pf) goto L_8d6df4;
L_8d6dea: /* 8d6dea: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 8d6dec: fadd dword ptr [0xa110a4] */
  ST0 = ST0 + (F32((uint32_t)(0xa110a4u)));
/* 8d6df2: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
L_8d6df4: /* 8d6df4: call 0x6c8ee5 */
  esp -= 4; W32(esp, 0x8d6df9u); SPILL(); f_6c8ee5(); if (g_unwind) return; RELOAD();
/* 8d6df9: mov edx, dword ptr [0xce9ec0] */
  edx = R32((uint32_t)(0xce9ec0u));
/* 8d6dff: xor eax, eax */
  eax = 0;
L_8d6e01: /* 8d6e01: cmp eax, dword ptr [edx + 0x30] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d6e04: jge 0x8d6e20 */
  if ((sf == of)) goto L_8d6e20;
L_8d6e06: /* 8d6e06: mov ecx, dword ptr [edx + 0x2c] */
  ecx = R32((uint32_t)(edx + 0x2cu));
/* 8d6e09: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 8d6e0c: mov esi, dword ptr [ecx + 0xa4] */
  esi = R32((uint32_t)(ecx + 0xa4u));
/* 8d6e12: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d6e14: je 0x8d6e33 */
  if (zf) goto L_8d6e33;
L_8d6e16: /* 8d6e16: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d6e18: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d6e1a: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x8d6e20u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8d6e20: /* 8d6e20: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d6e23: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d6e24: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d6e25: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d6e2c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d6e2d: mov esp, ebp */
  esp = ebp;
/* 8d6e2f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d6e30: ret 8 */
  esp += 12; SPILL(); return;
L_8d6e33: /* 8d6e33: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d6e34: jmp 0x8d6e01 */
  goto L_8d6e01;
}

void f_8d6e36(void) {
  LOAD_REGS();
L_8d6e36: /* 8d6e36: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d6e39: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d6e3e: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8d6e41: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d6e42: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8d6e45: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d6e4au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d6e4a(); return;
}

void f_8d6e4a(void) {
  LOAD_REGS();
L_8d6e4a: /* 8d6e4a: push 0xa1ce48 */
  { uint32_t v = 0xa1ce48u; esp -= 4; W32(esp, v); }
/* 8d6e4f: push 0xaed230 */
  { uint32_t v = 0xaed230u; esp -= 4; W32(esp, v); }
/* 8d6e54: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d6e5au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d6e5a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d6e5d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d6e5f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d6e61: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d6e66u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8d6e66: guest_badaddr(0x8d6e66); return;
}

void f_8d6ec0(void) {
  LOAD_REGS();
L_8d6ec0: /* 8d6ec0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d6ec1: mov ebp, esp */
  ebp = esp;
/* 8d6ec3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d6ec5: push 0x9d8420 */
  { uint32_t v = 0x9d8420u; esp -= 4; W32(esp, v); }
/* 8d6eca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d6ed0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d6ed1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d6ed8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d6edb: mov eax, dword ptr [0xb19068] */
  eax = R32((uint32_t)(0xb19068u));
/* 8d6ee0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d6ee2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d6ee3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d6ee4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d6ee5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d6ee8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8d6eef: je 0x8d6f5f */
  if (zf) goto L_8d6f5f;
L_8d6ef1: /* 8d6ef1: mov ecx, dword ptr [0xb19070] */
  ecx = R32((uint32_t)(0xb19070u));
/* 8d6ef7: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8d6efa: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 8d6efd: fadd dword ptr [eax + ecx + 0x2e0] */
  ST0 = ST0 + (F32((uint32_t)(eax + ecx + 0x2e0u)));
/* 8d6f04: fstp dword ptr [eax + ecx + 0x2e0] */
  WF32((uint32_t)(eax + ecx + 0x2e0u), ST0); FPOP();
/* 8d6f0b: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8d6f0e: lea eax, [eax + ecx + 0x2e0] */
  eax = (uint32_t)(eax + ecx + 0x2e0u);
/* 8d6f15: mov eax, dword ptr [0xb19068] */
  eax = R32((uint32_t)(0xb19068u));
/* 8d6f1a: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 8d6f1d: fadd dword ptr [eax + ecx + 0x2e4] */
  ST0 = ST0 + (F32((uint32_t)(eax + ecx + 0x2e4u)));
/* 8d6f24: fstp dword ptr [eax + ecx + 0x2e4] */
  WF32((uint32_t)(eax + ecx + 0x2e4u), ST0); FPOP();
/* 8d6f2b: lea eax, [eax + ecx + 0x2e4] */
  eax = (uint32_t)(eax + ecx + 0x2e4u);
/* 8d6f32: call 0x6c8ee5 */
  esp -= 4; W32(esp, 0x8d6f37u); SPILL(); f_6c8ee5(); if (g_unwind) return; RELOAD();
/* 8d6f37: mov edx, dword ptr [0xce9ec0] */
  edx = R32((uint32_t)(0xce9ec0u));
/* 8d6f3d: xor eax, eax */
  eax = 0;
/* 8d6f3f: nop  */
L_8d6f40: /* 8d6f40: cmp eax, dword ptr [edx + 0x30] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d6f43: jge 0x8d6f5f */
  if ((sf == of)) goto L_8d6f5f;
L_8d6f45: /* 8d6f45: mov ecx, dword ptr [edx + 0x2c] */
  ecx = R32((uint32_t)(edx + 0x2cu));
/* 8d6f48: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 8d6f4b: mov esi, dword ptr [ecx + 0xa4] */
  esi = R32((uint32_t)(ecx + 0xa4u));
/* 8d6f51: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d6f53: je 0x8d6f72 */
  if (zf) goto L_8d6f72;
L_8d6f55: /* 8d6f55: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d6f57: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d6f59: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x8d6f5fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8d6f5f: /* 8d6f5f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d6f62: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d6f63: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d6f64: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d6f6b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d6f6c: mov esp, ebp */
  esp = ebp;
/* 8d6f6e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d6f6f: ret 8 */
  esp += 12; SPILL(); return;
L_8d6f72: /* 8d6f72: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d6f73: jmp 0x8d6f40 */
  goto L_8d6f40;
}

void f_8d6f75(void) {
  LOAD_REGS();
L_8d6f75: /* 8d6f75: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d6f78: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d6f7d: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8d6f80: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d6f81: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8d6f84: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d6f89u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d6f89(); return;
}

void f_8d6f89(void) {
  LOAD_REGS();
L_8d6f89: /* 8d6f89: push 0xa1cea0 */
  { uint32_t v = 0xa1cea0u; esp -= 4; W32(esp, v); }
/* 8d6f8e: push 0xaed260 */
  { uint32_t v = 0xaed260u; esp -= 4; W32(esp, v); }
/* 8d6f93: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d6f99u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d6f99: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d6f9c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d6f9e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d6fa0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d6fa5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8d6fa5: guest_badaddr(0x8d6fa5); return;
}

void f_8d6ff0(void) {
  LOAD_REGS();
L_8d6ff0: /* 8d6ff0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d6ff1: mov ebp, esp */
  ebp = esp;
/* 8d6ff3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d6ff5: push 0x9d8430 */
  { uint32_t v = 0x9d8430u; esp -= 4; W32(esp, v); }
/* 8d6ffa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d7000: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d7001: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d7008: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d700b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d700c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d700d: mov esi, dword ptr [0xb19070] */
  esi = R32((uint32_t)(0xb19070u));
/* 8d7013: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d7015: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d7016: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d7019: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8d7020: je 0x8d7036 */
  if (zf) goto L_8d7036;
L_8d7022: /* 8d7022: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d7024: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 8d7027: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d7028: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0x8d702bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d702b: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 8d702e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d702f: mov ecx, esi */
  ecx = esi;
/* 8d7031: call 0x6cab50 */
  esp -= 4; W32(esp, 0x8d7036u); SPILL(); f_6cab50(); if (g_unwind) return; RELOAD();
L_8d7036: /* 8d7036: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d7039: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d703a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d703b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d7042: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d7043: mov esp, ebp */
  esp = ebp;
/* 8d7045: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d7046: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8d7049(void) {
  LOAD_REGS();
L_8d7049: /* 8d7049: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d704c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d7051: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8d7054: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d7055: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8d7058: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d705du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d705d(); return;
}

void f_8d705d(void) {
  LOAD_REGS();
L_8d705d: /* 8d705d: push 0xa1cef0 */
  { uint32_t v = 0xa1cef0u; esp -= 4; W32(esp, v); }
/* 8d7062: push 0xaed288 */
  { uint32_t v = 0xaed288u; esp -= 4; W32(esp, v); }
/* 8d7067: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d706du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d706d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d7070: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d7072: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d7074: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d7079u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8d7079: guest_badaddr(0x8d7079); return;
}

void f_8d70b0(void) {
  LOAD_REGS();
L_8d70b0: /* 8d70b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d70b1: mov ebp, esp */
  ebp = esp;
/* 8d70b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d70b5: push 0x9d8440 */
  { uint32_t v = 0x9d8440u; esp -= 4; W32(esp, v); }
/* 8d70ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d70c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d70c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d70c8: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d70cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d70cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d70cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d70ce: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d70d1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d70d3: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8d70d6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8d70dd: call dword ptr [0xcfa260] */
  esp -= 4; W32(esp, 0x8d70e3u); SPILL(); f_4e2ffe(); if (g_unwind) return; /* Core!??0FBox@@QAE@H@Z */ RELOAD();
/* 8d70e3: push 0xb1901c */
  { uint32_t v = 0xb1901cu; esp -= 4; W32(esp, v); }
/* 8d70e8: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8d70eb: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x8d70f1u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 8d70f1: mov eax, dword ptr [0xb19070] */
  eax = R32((uint32_t)(0xb19070u));
/* 8d70f6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d70f8: je 0x8d713a */
  if (zf) goto L_8d713a;
L_8d70fa: /* 8d70fa: mov ecx, dword ptr [eax + 0x348] */
  ecx = R32((uint32_t)(eax + 0x348u));
/* 8d7100: fld dword ptr [0xb19024] */
  { double v = F32((uint32_t)(0xb19024u)); FPUSH(v); }
/* 8d7106: fld dword ptr [0xb19020] */
  { double v = F32((uint32_t)(0xb19020u)); FPUSH(v); }
/* 8d710c: mov edx, dword ptr [eax + 0x344] */
  edx = R32((uint32_t)(eax + 0x344u));
/* 8d7112: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8d7115: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8d7118: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 8d711b: fld dword ptr [0xb1901c] */
  { double v = F32((uint32_t)(0xb1901cu)); FPUSH(v); }
/* 8d7121: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8d7124: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 8d7127: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d7128: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8d712b: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8d712e: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8d7131: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8d7134: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x8d713au); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
L_8d713a: /* 8d713a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8d713d: mov ecx, 7 */
  ecx = 0x7u;
/* 8d7142: lea esi, [ebp - 0x44] */
  esi = (uint32_t)(ebp + 0xffffffbcu);
/* 8d7145: mov edi, eax */
  edi = eax;
/* 8d7147: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8d7149: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d714c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d714d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d714e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d7155: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d7156: mov esp, ebp */
  esp = ebp;
/* 8d7158: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d7159: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8d715c(void) {
  LOAD_REGS();
L_8d715c: /* 8d715c: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d715f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d7164: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 8d7167: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d7168: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8d716b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d7170u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d7170(); return;
}

void f_8d7170(void) {
  LOAD_REGS();
L_8d7170: /* 8d7170: push 0xa1cf38 */
  { uint32_t v = 0xa1cf38u; esp -= 4; W32(esp, v); }
/* 8d7175: push 0xaed2e0 */
  { uint32_t v = 0xaed2e0u; esp -= 4; W32(esp, v); }
/* 8d717a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d7180u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d7180: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d7183: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d7185: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d7187: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d718cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8d718c: guest_badaddr(0x8d718c); return;
}

void f_8d71d0(void) {
  LOAD_REGS();
L_8d71d0: /* 8d71d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d71d1: mov ebp, esp */
  ebp = esp;
/* 8d71d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d71d5: push 0x9d8450 */
  { uint32_t v = 0x9d8450u; esp -= 4; W32(esp, v); }
/* 8d71da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d71e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d71e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d71e8: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d71eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d71ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d71ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d71ee: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d71f1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d71f3: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8d71f6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8d71fd: call dword ptr [0xcfa260] */
  esp -= 4; W32(esp, 0x8d7203u); SPILL(); f_4e2ffe(); if (g_unwind) return; /* Core!??0FBox@@QAE@H@Z */ RELOAD();
/* 8d7203: push 0xb1901c */
  { uint32_t v = 0xb1901cu; esp -= 4; W32(esp, v); }
/* 8d7208: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8d720b: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x8d7211u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 8d7211: mov eax, dword ptr [0xb19070] */
  eax = R32((uint32_t)(0xb19070u));
/* 8d7216: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d7218: je 0x8d725a */
  if (zf) goto L_8d725a;
L_8d721a: /* 8d721a: mov ecx, dword ptr [eax + 0x348] */
  ecx = R32((uint32_t)(eax + 0x348u));
/* 8d7220: fld dword ptr [0xb19024] */
  { double v = F32((uint32_t)(0xb19024u)); FPUSH(v); }
/* 8d7226: fld dword ptr [0xb19020] */
  { double v = F32((uint32_t)(0xb19020u)); FPUSH(v); }
/* 8d722c: mov edx, dword ptr [eax + 0x344] */
  edx = R32((uint32_t)(eax + 0x344u));
/* 8d7232: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8d7235: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8d7238: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 8d723b: fld dword ptr [0xb1901c] */
  { double v = F32((uint32_t)(0xb1901cu)); FPUSH(v); }
/* 8d7241: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8d7244: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 8d7247: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d7248: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8d724b: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8d724e: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8d7251: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8d7254: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x8d725au); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
L_8d725a: /* 8d725a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8d725d: mov ecx, 7 */
  ecx = 0x7u;
/* 8d7262: lea esi, [ebp - 0x44] */
  esi = (uint32_t)(ebp + 0xffffffbcu);
/* 8d7265: mov edi, eax */
  edi = eax;
/* 8d7267: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8d7269: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d726c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d726d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d726e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d7275: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d7276: mov esp, ebp */
  esp = ebp;
/* 8d7278: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d7279: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8d727c(void) {
  LOAD_REGS();
L_8d727c: /* 8d727c: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d727f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d7284: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 8d7287: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d7288: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8d728b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d7290u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d7290(); return;
}

void f_8d7290(void) {
  LOAD_REGS();
L_8d7290: /* 8d7290: push 0xa1cf88 */
  { uint32_t v = 0xa1cf88u; esp -= 4; W32(esp, v); }
/* 8d7295: push 0xaed318 */
  { uint32_t v = 0xaed318u; esp -= 4; W32(esp, v); }
/* 8d729a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d72a0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d72a0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d72a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d72a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d72a7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d72acu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8d72ac: guest_badaddr(0x8d72ac); return;
}

void f_8d72f0(void) {
  LOAD_REGS();
L_8d72f0: /* 8d72f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d72f1: mov ebp, esp */
  ebp = esp;
/* 8d72f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d72f5: push 0x9d8460 */
  { uint32_t v = 0x9d8460u; esp -= 4; W32(esp, v); }
/* 8d72fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d7300: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d7301: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d7308: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d730b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d730c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d730d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d730e: xor edi, edi */
  edi = 0;
/* 8d7310: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 8d7313: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d7316: mov ebx, ecx */
  ebx = ecx;
/* 8d7318: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8d731b: jmp 0x8d7320 */
  goto L_8d7320;
L_8d7320: /* 8d7320: cmp edi, dword ptr [ebx + 0x48] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x48u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d7323: jge 0x8d736a */
  if ((sf == of)) goto L_8d736a;
L_8d7325: /* 8d7325: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8d7328: mov ecx, dword ptr [ebx + 0x44] */
  ecx = R32((uint32_t)(ebx + 0x44u));
/* 8d732b: mov esi, edi */
  esi = edi;
/* 8d732d: imul esi, esi, 0x68 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x68u);
  esi = (uint32_t)r;
  }
/* 8d7330: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d7331: lea ecx, [ecx + esi + 4] */
  ecx = (uint32_t)(ecx + esi + 0x4u);
/* 8d7335: call dword ptr [0xcfa8b8] */
  esp -= 4; W32(esp, 0x8d733bu); SPILL(); f_4e3b43(); if (g_unwind) return; /* Core!??8FString@@QBEHABV0@@Z */ RELOAD();
/* 8d733b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d733d: je 0x8d7367 */
  if (zf) goto L_8d7367;
L_8d733f: /* 8d733f: mov edx, dword ptr [ebx + 0x44] */
  edx = R32((uint32_t)(ebx + 0x44u));
/* 8d7342: lea eax, [edx + esi + 0x10] */
  eax = (uint32_t)(edx + esi + 0x10u);
/* 8d7346: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8d7349: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d734a: mov ecx, esi */
  ecx = esi;
/* 8d734c: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x8d7352u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
L_8d7352: /* 8d7352: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d7355: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d7356: mov eax, esi */
  eax = esi;
/* 8d7358: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d7359: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d7360: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d7361: mov esp, ebp */
  esp = ebp;
/* 8d7363: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d7364: ret 8 */
  esp += 12; SPILL(); return;
L_8d7367: /* 8d7367: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8d7368: jmp 0x8d7320 */
  goto L_8d7320;
L_8d736a: /* 8d736a: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8d736d: push 0xaed3d8 */
  { uint32_t v = 0xaed3d8u; esp -= 4; W32(esp, v); }
/* 8d7372: mov ecx, esi */
  ecx = esi;
/* 8d7374: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8d737au); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8d737a: jmp 0x8d7352 */
  goto L_8d7352;
}

void f_8d731d(void) {
  LOAD_REGS();
L_8d731d: /* 8d731d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8d7320: /* 8d7320: cmp edi, dword ptr [ebx + 0x48] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x48u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d7323: jge 0x8d736a */
  if ((sf == of)) goto L_8d736a;
L_8d7325: /* 8d7325: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8d7328: mov ecx, dword ptr [ebx + 0x44] */
  ecx = R32((uint32_t)(ebx + 0x44u));
/* 8d732b: mov esi, edi */
  esi = edi;
/* 8d732d: imul esi, esi, 0x68 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x68u);
  esi = (uint32_t)r;
  }
/* 8d7330: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d7331: lea ecx, [ecx + esi + 4] */
  ecx = (uint32_t)(ecx + esi + 0x4u);
/* 8d7335: call dword ptr [0xcfa8b8] */
  esp -= 4; W32(esp, 0x8d733bu); SPILL(); f_4e3b43(); if (g_unwind) return; /* Core!??8FString@@QBEHABV0@@Z */ RELOAD();
/* 8d733b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d733d: je 0x8d7367 */
  if (zf) goto L_8d7367;
L_8d733f: /* 8d733f: mov edx, dword ptr [ebx + 0x44] */
  edx = R32((uint32_t)(ebx + 0x44u));
/* 8d7342: lea eax, [edx + esi + 0x10] */
  eax = (uint32_t)(edx + esi + 0x10u);
/* 8d7346: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8d7349: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d734a: mov ecx, esi */
  ecx = esi;
/* 8d734c: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x8d7352u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
L_8d7352: /* 8d7352: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d7355: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d7356: mov eax, esi */
  eax = esi;
/* 8d7358: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d7359: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d7360: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d7361: mov esp, ebp */
  esp = ebp;
/* 8d7363: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d7364: ret 8 */
  esp += 12; SPILL(); return;
L_8d7367: /* 8d7367: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8d7368: jmp 0x8d7320 */
  goto L_8d7320;
L_8d736a: /* 8d736a: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8d736d: push 0xaed3d8 */
  { uint32_t v = 0xaed3d8u; esp -= 4; W32(esp, v); }
/* 8d7372: mov ecx, esi */
  ecx = esi;
/* 8d7374: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8d737au); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8d737a: jmp 0x8d7352 */
  goto L_8d7352;
}

void f_8d737c(void) {
  LOAD_REGS();
L_8d737c: /* 8d737c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d737f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d7384: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8d7387: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d7388: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8d738b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d7390u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d7390(); return;
}

void f_8d7390(void) {
  LOAD_REGS();
L_8d7390: /* 8d7390: push 0xa1cfd8 */
  { uint32_t v = 0xa1cfd8u; esp -= 4; W32(esp, v); }
/* 8d7395: push 0xaed3e4 */
  { uint32_t v = 0xaed3e4u; esp -= 4; W32(esp, v); }
/* 8d739a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d73a0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d73a0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d73a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d73a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d73a7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d73acu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8d73ac: guest_badaddr(0x8d73ac); return;
}

void f_8d73e0(void) {
  LOAD_REGS();
L_8d73e0: /* 8d73e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d73e1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 8d73e5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d73e7: je 0x8d73fe */
  if (zf) goto L_8d73fe;
L_8d73e9: /* 8d73e9: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 8d73ee: mov ecx, esi */
  ecx = esi;
/* 8d73f0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8d73f6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8d73f6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d73f8: je 0x8d73fe */
  if (zf) goto L_8d73fe;
L_8d73fa: /* 8d73fa: mov eax, esi */
  eax = esi;
/* 8d73fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d73fd: ret  */
  esp += 4; SPILL(); return;
L_8d73fe: /* 8d73fe: xor eax, eax */
  eax = 0;
/* 8d7400: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d7401: ret  */
  esp += 4; SPILL(); return;
}

void f_8d7420(void) {
  LOAD_REGS();
L_8d7420: /* 8d7420: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8d7424: mov eax, dword ptr [eax + 0x6c] */
  eax = R32((uint32_t)(eax + 0x6cu));
/* 8d7427: mov dl, byte ptr [eax + 0xec1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0xec1u))) & 0xffu);
/* 8d742d: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d742f: je 0x8d746f */
  if (zf) goto L_8d746f;
L_8d7431: /* 8d7431: mov dl, byte ptr [eax + 0xeb1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0xeb1u))) & 0xffu);
/* 8d7437: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d7439: je 0x8d746f */
  if (zf) goto L_8d746f;
L_8d743b: /* 8d743b: lea eax, [ecx + 0x48] */
  eax = (uint32_t)(ecx + 0x48u);
/* 8d743e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d743f: mov esi, dword ptr [0xb1901c] */
  esi = R32((uint32_t)(0xb1901cu));
/* 8d7445: mov edx, eax */
  edx = eax;
/* 8d7447: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 8d7449: mov esi, dword ptr [0xb19020] */
  esi = R32((uint32_t)(0xb19020u));
/* 8d744f: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 8d7452: mov esi, dword ptr [0xb19024] */
  esi = R32((uint32_t)(0xb19024u));
/* 8d7458: mov dword ptr [edx + 8], esi */
  W32((uint32_t)(edx + 0x8u), esi);
/* 8d745b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8d745d: add ecx, 0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d7460: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8d7462: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8d7465: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8d7468: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8d746b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8d746e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_8d746f: /* 8d746f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8d74a0(void) {
  LOAD_REGS();
L_8d74a0: /* 8d74a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d74a1: mov ebp, esp */
  ebp = esp;
/* 8d74a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d74a5: push 0x9d8470 */
  { uint32_t v = 0x9d8470u; esp -= 4; W32(esp, v); }
/* 8d74aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d74b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d74b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d74b8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d74bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d74bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d74bd: mov esi, dword ptr [0xb19070] */
  esi = R32((uint32_t)(0xb19070u));
/* 8d74c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d74c4: xor edi, edi */
  edi = 0;
/* 8d74c6: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d74c8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d74cb: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8d74ce: je 0x8d7538 */
  if (zf) goto L_8d7538;
L_8d74d0: /* 8d74d0: cmp dword ptr [esi + 0x1310], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1310u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d74d6: je 0x8d7538 */
  if (zf) goto L_8d7538;
L_8d74d8: /* 8d74d8: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8d74db: jmp 0x8d74e0 */
  goto L_8d74e0;
L_8d74e0: /* 8d74e0: cmp edi, dword ptr [esi + 0x1310] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1310u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d74e6: jge 0x8d7531 */
  if ((sf == of)) goto L_8d7531;
L_8d74e8: /* 8d74e8: mov ecx, dword ptr [esi + 0x130c] */
  ecx = R32((uint32_t)(esi + 0x130cu));
/* 8d74ee: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* 8d74f1: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 8d74f4: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8d74f7: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8d74fa: imul ecx, dword ptr [esi + 0x128c] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x128cu)));
  ecx = (uint32_t)r;
  }
/* 8d7501: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d7503: mov edx, ecx */
  edx = ecx;
/* 8d7505: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 8d7508: mov eax, 1 */
  eax = 0x1u;
/* 8d750d: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 8d750f: mov ecx, dword ptr [esi + 0x131c] */
  ecx = R32((uint32_t)(esi + 0x131cu));
/* 8d7515: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8d7518: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d751a: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 8d751d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d751f: je 0x8d7528 */
  if (zf) goto L_8d7528;
L_8d7521: /* 8d7521: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 8d7523: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8d7525: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8d7526: jmp 0x8d74e0 */
  goto L_8d74e0;
L_8d7528: /* 8d7528: not eax */
  eax = ~eax;
/* 8d752a: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8d752c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8d752e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8d752f: jmp 0x8d74e0 */
  goto L_8d74e0;
L_8d7531: /* 8d7531: mov ecx, esi */
  ecx = esi;
/* 8d7533: call 0x6c6339 */
  esp -= 4; W32(esp, 0x8d7538u); SPILL(); f_6c6339(); if (g_unwind) return; RELOAD();
L_8d7538: /* 8d7538: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d753b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d753c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d753d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d7544: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d7545: mov esp, ebp */
  esp = ebp;
/* 8d7547: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d7548: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8d74dd(void) {
  LOAD_REGS();
L_8d74dd: /* 8d74dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8d74e0: /* 8d74e0: cmp edi, dword ptr [esi + 0x1310] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1310u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d74e6: jge 0x8d7531 */
  if ((sf == of)) goto L_8d7531;
L_8d74e8: /* 8d74e8: mov ecx, dword ptr [esi + 0x130c] */
  ecx = R32((uint32_t)(esi + 0x130cu));
/* 8d74ee: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* 8d74f1: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 8d74f4: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8d74f7: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8d74fa: imul ecx, dword ptr [esi + 0x128c] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x128cu)));
  ecx = (uint32_t)r;
  }
/* 8d7501: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d7503: mov edx, ecx */
  edx = ecx;
/* 8d7505: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 8d7508: mov eax, 1 */
  eax = 0x1u;
/* 8d750d: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 8d750f: mov ecx, dword ptr [esi + 0x131c] */
  ecx = R32((uint32_t)(esi + 0x131cu));
/* 8d7515: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8d7518: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d751a: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 8d751d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d751f: je 0x8d7528 */
  if (zf) goto L_8d7528;
L_8d7521: /* 8d7521: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 8d7523: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8d7525: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8d7526: jmp 0x8d74e0 */
  goto L_8d74e0;
L_8d7528: /* 8d7528: not eax */
  eax = ~eax;
/* 8d752a: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8d752c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8d752e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8d752f: jmp 0x8d74e0 */
  goto L_8d74e0;
L_8d7531: /* 8d7531: mov ecx, esi */
  ecx = esi;
/* 8d7533: call 0x6c6339 */
  esp -= 4; W32(esp, 0x8d7538u); SPILL(); f_6c6339(); if (g_unwind) return; RELOAD();
/* 8d7538: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d753b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d753c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d753d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d7544: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d7545: mov esp, ebp */
  esp = ebp;
/* 8d7547: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d7548: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8d754b(void) {
  LOAD_REGS();
L_8d754b: /* 8d754b: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d754e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d7553: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8d7556: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d7557: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8d755a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d755fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d755f(); return;
}

void f_8d755f(void) {
  LOAD_REGS();
L_8d755f: /* 8d755f: push 0xa1d030 */
  { uint32_t v = 0xa1d030u; esp -= 4; W32(esp, v); }
/* 8d7564: push 0xaed2d8 */
  { uint32_t v = 0xaed2d8u; esp -= 4; W32(esp, v); }
/* 8d7569: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d756fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d756f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d7572: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d7574: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d7576: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d757bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8d757b: guest_badaddr(0x8d757b); return;
}

void f_8d75c0(void) {
  LOAD_REGS();
L_8d75c0: /* 8d75c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d75c1: mov ebp, esp */
  ebp = esp;
/* 8d75c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d75c5: push 0x9d8480 */
  { uint32_t v = 0x9d8480u; esp -= 4; W32(esp, v); }
/* 8d75ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d75d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d75d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d75d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d75db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d75dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d75dd: mov esi, dword ptr [0xb19070] */
  esi = R32((uint32_t)(0xb19070u));
/* 8d75e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d75e4: xor edi, edi */
  edi = 0;
/* 8d75e6: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d75e8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d75eb: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8d75ee: je 0x8d7658 */
  if (zf) goto L_8d7658;
L_8d75f0: /* 8d75f0: cmp dword ptr [esi + 0x1310], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1310u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d75f6: je 0x8d7658 */
  if (zf) goto L_8d7658;
L_8d75f8: /* 8d75f8: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8d75fb: jmp 0x8d7600 */
  goto L_8d7600;
L_8d7600: /* 8d7600: cmp edi, dword ptr [esi + 0x1310] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1310u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d7606: jge 0x8d7651 */
  if ((sf == of)) goto L_8d7651;
L_8d7608: /* 8d7608: mov ecx, dword ptr [esi + 0x130c] */
  ecx = R32((uint32_t)(esi + 0x130cu));
/* 8d760e: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* 8d7611: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 8d7614: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8d7617: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8d761a: imul ecx, dword ptr [esi + 0x128c] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x128cu)));
  ecx = (uint32_t)r;
  }
/* 8d7621: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d7623: mov edx, ecx */
  edx = ecx;
/* 8d7625: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 8d7628: mov eax, 1 */
  eax = 0x1u;
/* 8d762d: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 8d762f: mov ecx, dword ptr [esi + 0x1328] */
  ecx = R32((uint32_t)(esi + 0x1328u));
/* 8d7635: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8d7638: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d763a: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 8d763d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d763f: je 0x8d7648 */
  if (zf) goto L_8d7648;
L_8d7641: /* 8d7641: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 8d7643: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8d7645: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8d7646: jmp 0x8d7600 */
  goto L_8d7600;
L_8d7648: /* 8d7648: not eax */
  eax = ~eax;
/* 8d764a: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8d764c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8d764e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8d764f: jmp 0x8d7600 */
  goto L_8d7600;
L_8d7651: /* 8d7651: mov ecx, esi */
  ecx = esi;
/* 8d7653: call 0x6c6339 */
  esp -= 4; W32(esp, 0x8d7658u); SPILL(); f_6c6339(); if (g_unwind) return; RELOAD();
L_8d7658: /* 8d7658: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d765b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d765c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d765d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d7664: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d7665: mov esp, ebp */
  esp = ebp;
/* 8d7667: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d7668: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8d75fd(void) {
  LOAD_REGS();
L_8d75fd: /* 8d75fd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8d7600: /* 8d7600: cmp edi, dword ptr [esi + 0x1310] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1310u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d7606: jge 0x8d7651 */
  if ((sf == of)) goto L_8d7651;
L_8d7608: /* 8d7608: mov ecx, dword ptr [esi + 0x130c] */
  ecx = R32((uint32_t)(esi + 0x130cu));
/* 8d760e: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* 8d7611: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 8d7614: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8d7617: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8d761a: imul ecx, dword ptr [esi + 0x128c] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x128cu)));
  ecx = (uint32_t)r;
  }
/* 8d7621: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d7623: mov edx, ecx */
  edx = ecx;
/* 8d7625: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 8d7628: mov eax, 1 */
  eax = 0x1u;
/* 8d762d: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 8d762f: mov ecx, dword ptr [esi + 0x1328] */
  ecx = R32((uint32_t)(esi + 0x1328u));
/* 8d7635: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8d7638: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d763a: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 8d763d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d763f: je 0x8d7648 */
  if (zf) goto L_8d7648;
L_8d7641: /* 8d7641: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 8d7643: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8d7645: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8d7646: jmp 0x8d7600 */
  goto L_8d7600;
L_8d7648: /* 8d7648: not eax */
  eax = ~eax;
/* 8d764a: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8d764c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8d764e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8d764f: jmp 0x8d7600 */
  goto L_8d7600;
L_8d7651: /* 8d7651: mov ecx, esi */
  ecx = esi;
/* 8d7653: call 0x6c6339 */
  esp -= 4; W32(esp, 0x8d7658u); SPILL(); f_6c6339(); if (g_unwind) return; RELOAD();
/* 8d7658: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d765b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d765c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d765d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d7664: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d7665: mov esp, ebp */
  esp = ebp;
/* 8d7667: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d7668: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8d766b(void) {
  LOAD_REGS();
L_8d766b: /* 8d766b: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d766e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d7673: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8d7676: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d7677: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8d767a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d767fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d767f(); return;
}

void f_8d767f(void) {
  LOAD_REGS();
L_8d767f: /* 8d767f: push 0xa1d080 */
  { uint32_t v = 0xa1d080u; esp -= 4; W32(esp, v); }
/* 8d7684: push 0xaed310 */
  { uint32_t v = 0xaed310u; esp -= 4; W32(esp, v); }
/* 8d7689: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d768fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d768f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d7692: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d7694: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d7696: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d769bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8d769b: guest_badaddr(0x8d769b); return;
}

void f_8d76e0(void) {
  LOAD_REGS();
L_8d76e0: /* 8d76e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d76e1: mov ebp, esp */
  ebp = esp;
/* 8d76e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d76e5: push 0x9d8490 */
  { uint32_t v = 0x9d8490u; esp -= 4; W32(esp, v); }
/* 8d76ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d76f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d76f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d76f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d76fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d76fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d76fd: mov esi, ecx */
  esi = ecx;
/* 8d76ff: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* 8d7702: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d7704: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d7705: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d7708: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8d770f: je 0x8d7732 */
  if (zf) goto L_8d7732;
L_8d7711: /* 8d7711: lea ecx, [eax + 0x130c] */
  ecx = (uint32_t)(eax + 0x130cu);
/* 8d7717: xor eax, eax */
  eax = 0;
/* 8d7719: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8d7720: /* 8d7720: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d7723: jge 0x8d7728 */
  if ((sf == of)) goto L_8d7728;
L_8d7725: /* 8d7725: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d7726: jmp 0x8d7720 */
  goto L_8d7720;
L_8d7728: /* 8d7728: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d772a: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8d772c: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8d7732u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
L_8d7732: /* 8d7732: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8d7735: xor eax, eax */
  eax = 0;
L_8d7737: /* 8d7737: cmp eax, dword ptr [esi + 0x48] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x48u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d773a: jge 0x8d7767 */
  if ((sf == of)) goto L_8d7767;
L_8d773c: /* 8d773c: mov edi, dword ptr [esi + 0x44] */
  edi = R32((uint32_t)(esi + 0x44u));
/* 8d773f: mov ecx, eax */
  ecx = eax;
/* 8d7741: imul ecx, ecx, 0x68 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x68u);
  ecx = (uint32_t)r;
  }
/* 8d7744: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d7746: cmp dword ptr [ecx + 0x1c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x1cu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d7749: jne 0x8d7764 */
  if (!zf) goto L_8d7764;
L_8d774b: /* 8d774b: mov dword ptr [esi + 0x50], ecx */
  W32((uint32_t)(esi + 0x50u), ecx);
/* 8d774e: mov dword ptr [esi + 0x3c], edx */
  W32((uint32_t)(esi + 0x3cu), edx);
/* 8d7751: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d7754: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d775b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d775c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d775d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d775e: mov esp, ebp */
  esp = ebp;
/* 8d7760: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d7761: ret 4 */
  esp += 8; SPILL(); return;
L_8d7764: /* 8d7764: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d7765: jmp 0x8d7737 */
  goto L_8d7737;
L_8d7767: /* 8d7767: push 0x345 */
  { uint32_t v = 0x345u; esp -= 4; W32(esp, v); }
/* 8d776c: push 0xaed3b0 */
  { uint32_t v = 0xaed3b0u; esp -= 4; W32(esp, v); }
/* 8d7771: push 0xaed3c4 */
  { uint32_t v = 0xaed3c4u; esp -= 4; W32(esp, v); }
/* 8d7776: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8d777cu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8d777c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d777f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d7782: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d7783: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d7784: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d778b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d778c: mov esp, ebp */
  esp = ebp;
/* 8d778e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d778f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8d7792(void) {
  LOAD_REGS();
L_8d7792: /* 8d7792: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d7795: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d779a: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8d779d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d779e: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8d77a1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d77a6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d77a6(); return;
}

void f_8d77a6(void) {
  LOAD_REGS();
L_8d77a6: /* 8d77a6: push 0xa1d0cc */
  { uint32_t v = 0xa1d0ccu; esp -= 4; W32(esp, v); }
/* 8d77ab: push 0xaed3c8 */
  { uint32_t v = 0xaed3c8u; esp -= 4; W32(esp, v); }
/* 8d77b0: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d77b6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d77b6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d77b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d77bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d77bd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d77c2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8d77c2: guest_badaddr(0x8d77c2); return;
}

void f_8d7810(void) {
  LOAD_REGS();
L_8d7810: /* 8d7810: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d7811: mov ebp, esp */
  ebp = esp;
/* 8d7813: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d7815: push 0x9d84a0 */
  { uint32_t v = 0x9d84a0u; esp -= 4; W32(esp, v); }
/* 8d781a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d7820: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d7821: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d7828: sub esp, 0x90 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x90u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d782e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d782f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d7830: xor ebx, ebx */
  ebx = 0;
/* 8d7832: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d7833: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8d7836: add ecx, 0x64 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d7839: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d783c: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8d783f: xor eax, eax */
  eax = 0;
L_8d7841: /* 8d7841: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d7844: jge 0x8d7849 */
  if ((sf == of)) goto L_8d7849;
L_8d7846: /* 8d7846: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d7847: jmp 0x8d7841 */
  goto L_8d7841;
L_8d7849: /* 8d7849: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d784a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8d784c: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8d7852u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8d7852: mov esi, 0x7fffffff */
  esi = 0x7fffffffu;
/* 8d7857: xor edi, edi */
  edi = 0;
/* 8d7859: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 8d785c: xor edx, edx */
  edx = 0;
/* 8d785e: mov edi, edi */
  edi = edi;
L_8d7860: /* 8d7860: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d7863: mov eax, dword ptr [eax + 0x78] */
  eax = R32((uint32_t)(eax + 0x78u));
/* 8d7866: cmp edx, dword ptr [eax + 0x1310] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1310u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d786c: jge 0x8d789c */
  if ((sf == of)) goto L_8d789c;
L_8d786e: /* 8d786e: mov eax, dword ptr [eax + 0x130c] */
  eax = R32((uint32_t)(eax + 0x130cu));
/* 8d7874: lea ecx, [edx + edx*4] */
  ecx = (uint32_t)(edx + edx*4);
/* 8d7877: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 8d787a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8d787c: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d787e: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 8d7881: jge 0x8d7885 */
  if ((sf == of)) goto L_8d7885;
L_8d7883: /* 8d7883: mov esi, ecx */
  esi = ecx;
L_8d7885: /* 8d7885: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d7887: jle 0x8d788b */
  if ((zf || sf != of)) goto L_8d788b;
L_8d7889: /* 8d7889: mov edi, ecx */
  edi = ecx;
L_8d788b: /* 8d788b: cmp eax, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d788e: jge 0x8d7893 */
  if ((sf == of)) goto L_8d7893;
L_8d7890: /* 8d7890: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_8d7893: /* 8d7893: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d7895: jle 0x8d7899 */
  if ((zf || sf != of)) goto L_8d7899;
L_8d7897: /* 8d7897: mov ebx, eax */
  ebx = eax;
L_8d7899: /* 8d7899: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8d789a: jmp 0x8d7860 */
  goto L_8d7860;
L_8d789c: /* 8d789c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d789f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8d78a0: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8d78a1: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 8d78a2: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8d78a3: mov dword ptr [ebp - 0x3c], ebx */
  W32((uint32_t)(ebp + 0xffffffc4u), ebx);
/* 8d78a6: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 8d78a9: mov dword ptr [ebp - 0x50], esi */
  W32((uint32_t)(ebp + 0xffffffb0u), esi);
/* 8d78ac: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8d78af: xor ebx, ebx */
  ebx = 0;
L_8d78b1: /* 8d78b1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d78b4: mov edx, dword ptr [ecx + 0x78] */
  edx = R32((uint32_t)(ecx + 0x78u));
/* 8d78b7: mov eax, dword ptr [edx + 0xb0] */
  eax = R32((uint32_t)(edx + 0xb0u));
/* 8d78bd: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 8d78c3: cmp ebx, dword ptr [eax + 0x30] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d78c6: jge 0x8d7aa8 */
  if ((sf == of)) goto L_8d7aa8;
L_8d78cc: /* 8d78cc: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 8d78cf: mov edi, dword ptr [ecx + ebx*4] */
  edi = R32((uint32_t)(ecx + ebx*4));
/* 8d78d2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d78d4: je 0x8d7a6f */
  if (zf) goto L_8d7a6f;
L_8d78da: /* 8d78da: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 8d78df: mov ecx, edi */
  ecx = edi;
/* 8d78e1: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8d78e7u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8d78e7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d78e9: je 0x8d7a6f */
  if (zf) goto L_8d7a6f;
L_8d78ef: /* 8d78ef: mov eax, dword ptr [edi + 0x88] */
  eax = R32((uint32_t)(edi + 0x88u));
/* 8d78f5: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d78f8: je 0x8d7a6f */
  if (zf) goto L_8d7a6f;
L_8d78fe: /* 8d78fe: lea esi, [edi + 0x170] */
  esi = (uint32_t)(edi + 0x170u);
/* 8d7904: mov edx, esi */
  edx = esi;
/* 8d7906: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8d7908: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8d790b: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8d790e: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 8d7911: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d7914: mov eax, dword ptr [eax + 0x78] */
  eax = R32((uint32_t)(eax + 0x78u));
/* 8d7917: mov dword ptr [ebp - 0x64], ecx */
  W32((uint32_t)(ebp + 0xffffff9cu), ecx);
/* 8d791a: add eax, 0x12dc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x12dcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d791f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d7920: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 8d7923: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d7924: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 8d7927: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 8d792a: call dword ptr [0xcfa364] */
  esp -= 4; W32(esp, 0x8d7930u); SPILL(); f_4e1af5(); if (g_unwind) return; /* Core!?TransformPointBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8d7930: fild dword ptr [ebp - 0x50] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 8d7933: fcomp dword ptr [ebp - 0x5c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffa4u)));
  FPOP();
/* 8d7936: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d7938: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8d793b: jp 0x8d7a6f */
  if (pf) goto L_8d7a6f;
L_8d7941: /* 8d7941: fild dword ptr [ebp - 0x4c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 8d7944: fcomp dword ptr [ebp - 0x5c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffa4u)));
  FPOP();
/* 8d7947: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d7949: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d794c: jne 0x8d7a6f */
  if (!zf) goto L_8d7a6f;
L_8d7952: /* 8d7952: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8d7955: fcomp dword ptr [ebp - 0x58] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffa8u)));
  FPOP();
/* 8d7958: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d795a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8d795d: jp 0x8d7a6f */
  if (pf) goto L_8d7a6f;
L_8d7963: /* 8d7963: fild dword ptr [ebp - 0x3c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8d7966: fcomp dword ptr [ebp - 0x58] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffa8u)));
  FPOP();
/* 8d7969: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d796b: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d796e: jne 0x8d7a6f */
  if (!zf) goto L_8d7a6f;
L_8d7974: /* 8d7974: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8d7977: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8d7979: fsub dword ptr [0xa1d168] */
  ST0 = ST0 - (F32((uint32_t)(0xa1d168u)));
/* 8d797f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d7981: mov ecx, edx */
  ecx = edx;
/* 8d7983: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 8d7986: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8d7989: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 8d798c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8d798f: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d7992: xor esi, esi */
  esi = 0;
/* 8d7994: fst dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0);
/* 8d7997: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8d799a: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8d799d: fsub dword ptr [0xa1188c] */
  ST0 = ST0 - (F32((uint32_t)(0xa1188cu)));
/* 8d79a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d79a4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d79a7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8d79a9: mov edx, esp */
  edx = esp;
/* 8d79ab: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 8d79ae: mov eax, esi */
  eax = esi;
/* 8d79b0: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8d79b2: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8d79b5: mov ecx, esi */
  ecx = esi;
/* 8d79b7: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8d79ba: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8d79bd: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8d79c0: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d79c3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d79c6: mov ecx, esp */
  ecx = esp;
/* 8d79c8: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8d79ca: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d79cd: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8d79d0: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8d79d3: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8d79d6: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8d79d9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d79dc: mov eax, esp */
  eax = esp;
/* 8d79de: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8d79e0: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8d79e3: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8d79e6: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8d79e9: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d79ec: mov ecx, dword ptr [eax + 0x78] */
  ecx = R32((uint32_t)(eax + 0x78u));
/* 8d79ef: lea edx, [ebp - 0x98] */
  edx = (uint32_t)(ebp + 0xffffff68u);
/* 8d79f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d79f6: mov dword ptr [ebp - 0x98], esi */
  W32((uint32_t)(ebp + 0xffffff68u), esi);
/* 8d79fc: mov dword ptr [ebp - 0x94], esi */
  W32((uint32_t)(ebp + 0xffffff6cu), esi);
/* 8d7a02: mov dword ptr [ebp - 0x90], esi */
  W32((uint32_t)(ebp + 0xffffff70u), esi);
/* 8d7a08: mov dword ptr [ebp - 0x8c], esi */
  W32((uint32_t)(ebp + 0xffffff74u), esi);
/* 8d7a0e: mov dword ptr [ebp - 0x88], esi */
  W32((uint32_t)(ebp + 0xffffff78u), esi);
/* 8d7a14: mov dword ptr [ebp - 0x84], esi */
  W32((uint32_t)(ebp + 0xffffff7cu), esi);
/* 8d7a1a: mov dword ptr [ebp - 0x80], esi */
  W32((uint32_t)(ebp + 0xffffff80u), esi);
/* 8d7a1d: mov dword ptr [ebp - 0x7c], esi */
  W32((uint32_t)(ebp + 0xffffff84u), esi);
/* 8d7a20: mov dword ptr [ebp - 0x78], esi */
  W32((uint32_t)(ebp + 0xffffff88u), esi);
/* 8d7a23: mov dword ptr [ebp - 0x74], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x3f800000u);
/* 8d7a2a: mov dword ptr [ebp - 0x70], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff90u), 0xffffffffu);
/* 8d7a31: mov dword ptr [ebp - 0x6c], esi */
  W32((uint32_t)(ebp + 0xffffff94u), esi);
/* 8d7a34: mov dword ptr [ebp - 0x38], esi */
  W32((uint32_t)(ebp + 0xffffffc8u), esi);
/* 8d7a37: mov dword ptr [ebp - 0x34], esi */
  W32((uint32_t)(ebp + 0xffffffccu), esi);
/* 8d7a3a: mov dword ptr [ebp - 0x30], esi */
  W32((uint32_t)(ebp + 0xffffffd0u), esi);
/* 8d7a3d: call 0x6c23d3 */
  esp -= 4; W32(esp, 0x8d7a42u); SPILL(); f_6c23d3(); if (g_unwind) return; RELOAD();
/* 8d7a42: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d7a44: jne 0x8d7a6f */
  if (!zf) goto L_8d7a6f;
L_8d7a46: /* 8d7a46: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d7a49: add esi, 0x64 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8d7a4c: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8d7a4e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d7a50: mov ecx, esi */
  ecx = esi;
/* 8d7a52: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8d7a58u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8d7a58: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8d7a5a: mov dword ptr [ecx + eax*8], edi */
  W32((uint32_t)(ecx + eax*8), edi);
/* 8d7a5d: fld dword ptr [edi + 0x178] */
  { double v = F32((uint32_t)(edi + 0x178u)); FPUSH(v); }
/* 8d7a63: fsub dword ptr [ebp - 0x88] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff78u)));
/* 8d7a69: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8d7a6b: fstp dword ptr [edx + eax*8 + 4] */
  WF32((uint32_t)(edx + eax*8 + 0x4u), ST0); FPOP();
L_8d7a6f: /* 8d7a6f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8d7a70: jmp 0x8d78b1 */
  goto L_8d78b1;
L_8d7aa8: /* 8d7aa8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d7aab: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d7aac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d7aad: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d7ab4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d7ab5: mov esp, ebp */
  esp = ebp;
/* 8d7ab7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d7ab8: ret  */
  esp += 4; SPILL(); return;
}

void f_8d7a75(void) {
  LOAD_REGS();
L_8d7a75: /* 8d7a75: mov eax, dword ptr [ebp - 0x9c] */
  eax = R32((uint32_t)(ebp + 0xffffff64u));
/* 8d7a7b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d7a80: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 8d7a83: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d7a84: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8d7a87: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d7a8cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d7a8c(); return;
}

void f_8d7a8c(void) {
  LOAD_REGS();
L_8d7a8c: /* 8d7a8c: push 0xa1d118 */
  { uint32_t v = 0xa1d118u; esp -= 4; W32(esp, v); }
/* 8d7a91: push 0xaed3ec */
  { uint32_t v = 0xaed3ecu; esp -= 4; W32(esp, v); }
/* 8d7a96: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d7a9cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d7a9c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d7a9f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d7aa1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d7aa3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d7aa8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8d7aa8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d7aab: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d7aac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d7aad: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d7ab4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d7ab5: mov esp, ebp */
  esp = ebp;
/* 8d7ab7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d7ab8: ret  */
  esp += 4; SPILL(); return;
}

void f_8d7b70(void) {
  LOAD_REGS();
L_8d7b70: /* 8d7b70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d7b71: mov ebp, esp */
  ebp = esp;
/* 8d7b73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d7b75: push 0x9d84b0 */
  { uint32_t v = 0x9d84b0u; esp -= 4; W32(esp, v); }
/* 8d7b7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d7b80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d7b81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d7b88: sub esp, 0x74 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x74u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d7b8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d7b8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d7b8d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d7b8e: xor eax, eax */
  eax = 0;
/* 8d7b90: mov edi, ecx */
  edi = ecx;
/* 8d7b92: xor ecx, ecx */
  ecx = 0;
/* 8d7b94: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d7b97: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 8d7b9a: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8d7b9d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8d7ba0: /* 8d7ba0: cmp ecx, dword ptr [edi + 0x68] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x68u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d7ba3: jge 0x8d7ce0 */
  if ((sf == of)) goto L_8d7ce0;
L_8d7ba9: /* 8d7ba9: mov edx, dword ptr [edi + 0x64] */
  edx = R32((uint32_t)(edi + 0x64u));
/* 8d7bac: mov ebx, dword ptr [edx + ecx*8] */
  ebx = R32((uint32_t)(edx + ecx*8));
/* 8d7baf: fld dword ptr [ebx + 0x178] */
  { double v = F32((uint32_t)(ebx + 0x178u)); FPUSH(v); }
/* 8d7bb5: mov ecx, dword ptr [ebx + 0x170] */
  ecx = R32((uint32_t)(ebx + 0x170u));
/* 8d7bbb: fsub dword ptr [0xa1d168] */
  ST0 = ST0 - (F32((uint32_t)(0xa1d168u)));
/* 8d7bc1: lea esi, [ebx + 0x170] */
  esi = (uint32_t)(ebx + 0x170u);
/* 8d7bc7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d7bc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d7bca: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8d7bcd: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 8d7bd0: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8d7bd3: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d7bd6: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8d7bd9: fst dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0);
/* 8d7bdc: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8d7bdf: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 8d7be2: fsub dword ptr [0xa1188c] */
  ST0 = ST0 - (F32((uint32_t)(0xa1188cu)));
/* 8d7be8: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
/* 8d7beb: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 8d7bee: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8d7bf0: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 8d7bf3: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8d7bf6: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 8d7bf9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d7bfc: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8d7bff: mov edx, esp */
  edx = esp;
/* 8d7c01: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 8d7c08: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8d7c0b: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8d7c0d: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 8d7c14: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8d7c17: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8d7c1a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d7c1d: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 8d7c24: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8d7c27: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8d7c2a: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8d7c2d: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8d7c30: mov ecx, esp */
  ecx = esp;
/* 8d7c32: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8d7c34: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d7c37: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8d7c3a: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8d7c3d: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8d7c40: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8d7c43: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d7c46: mov eax, esp */
  eax = esp;
/* 8d7c48: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8d7c4a: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8d7c4d: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8d7c50: lea edx, [ebp - 0x80] */
  edx = (uint32_t)(ebp + 0xffffff80u);
/* 8d7c53: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8d7c56: mov ecx, dword ptr [edi + 0x78] */
  ecx = R32((uint32_t)(edi + 0x78u));
/* 8d7c59: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d7c5a: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 8d7c61: mov dword ptr [ebp - 0x74], 0 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x0u);
/* 8d7c68: mov dword ptr [ebp - 0x70], 0 */
  W32((uint32_t)(ebp + 0xffffff90u), 0x0u);
/* 8d7c6f: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 8d7c76: mov dword ptr [ebp - 0x68], 0 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x0u);
/* 8d7c7d: mov dword ptr [ebp - 0x64], 0 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x0u);
/* 8d7c84: mov dword ptr [ebp - 0x5c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x3f800000u);
/* 8d7c8b: mov dword ptr [ebp - 0x58], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffa8u), 0xffffffffu);
/* 8d7c92: call 0x6c23d3 */
  esp -= 4; W32(esp, 0x8d7c97u); SPILL(); f_6c23d3(); if (g_unwind) return; RELOAD();
/* 8d7c97: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d7c99: jne 0x8d7cd0 */
  if (!zf) goto L_8d7cd0;
L_8d7c9b: /* 8d7c9b: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 8d7c9e: mov ecx, esi */
  ecx = esi;
/* 8d7ca0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d7ca2: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8d7ca5: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8d7ca8: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 8d7cab: mov edx, dword ptr [edi + 0x64] */
  edx = R32((uint32_t)(edi + 0x64u));
/* 8d7cae: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 8d7cb1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d7cb4: fadd dword ptr [edx + ecx*8 + 4] */
  ST0 = ST0 + (F32((uint32_t)(edx + ecx*8 + 0x4u)));
/* 8d7cb8: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8d7cbb: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 8d7cbd: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 8d7cc0: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8d7cc2: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 8d7cc5: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8d7cc8: mov ecx, ebx */
  ecx = ebx;
/* 8d7cca: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 8d7ccd: call dword ptr [edx + 0x44] */
  { uint32_t t = R32((uint32_t)(edx + 0x44u)); esp -= 4; W32(esp, 0x8d7cd0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8d7cd0: /* 8d7cd0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d7cd3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d7cd4: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8d7cd7: mov ecx, eax */
  ecx = eax;
/* 8d7cd9: xor eax, eax */
  eax = 0;
/* 8d7cdb: jmp 0x8d7ba0 */
  goto L_8d7ba0;
L_8d7ce0: /* 8d7ce0: lea ecx, [edi + 0x64] */
  ecx = (uint32_t)(edi + 0x64u);
/* 8d7ce3: xor edx, edx */
  edx = 0;
L_8d7ce5: /* 8d7ce5: cmp edx, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d7ce8: jge 0x8d7ced */
  if ((sf == of)) goto L_8d7ced;
L_8d7cea: /* 8d7cea: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8d7ceb: jmp 0x8d7ce5 */
  goto L_8d7ce5;
L_8d7ced: /* 8d7ced: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d7cee: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8d7cf0: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8d7cf6u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8d7cf6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d7cf9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d7cfa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d7cfb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d7d02: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d7d03: mov esp, ebp */
  esp = ebp;
/* 8d7d05: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d7d06: ret  */
  esp += 4; SPILL(); return;
}

void f_8d7d07(void) {
  LOAD_REGS();
L_8d7d07: /* 8d7d07: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d7d0a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d7d0f: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 8d7d12: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d7d13: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8d7d16: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d7d1bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d7d1b(); return;
}

void f_8d7d1b(void) {
  LOAD_REGS();
L_8d7d1b: /* 8d7d1b: push 0xa1d170 */
  { uint32_t v = 0xa1d170u; esp -= 4; W32(esp, v); }
/* 8d7d20: push 0xaed3f4 */
  { uint32_t v = 0xaed3f4u; esp -= 4; W32(esp, v); }
/* 8d7d25: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d7d2bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d7d2b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d7d2e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d7d30: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d7d32: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d7d37u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8d7d37: guest_badaddr(0x8d7d37); return;
}

void f_8d7dc0(void) {
  LOAD_REGS();
L_8d7dc0: /* 8d7dc0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d7dc1: mov ebp, esp */
  ebp = esp;
/* 8d7dc3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d7dc5: push 0x9d84c0 */
  { uint32_t v = 0x9d84c0u; esp -= 4; W32(esp, v); }
/* 8d7dca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d7dd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d7dd1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d7dd8: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d7ddb: mov eax, dword ptr [0xb1906c] */
  eax = R32((uint32_t)(0xb1906cu));
/* 8d7de0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d7de1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d7de2: xor ebx, ebx */
  ebx = 0;
/* 8d7de4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d7de6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d7de7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d7dea: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 8d7ded: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8d7df0: jne 0x8d7ea1 */
  if (!zf) goto L_8d7ea1;
L_8d7df6: /* 8d7df6: mov ecx, 0xb18ff8 */
  ecx = 0xb18ff8u;
/* 8d7dfb: call 0x6c4a8e */
  esp -= 4; W32(esp, 0x8d7e00u); SPILL(); f_6c4a8e(); if (g_unwind) return; RELOAD();
/* 8d7e00: cmp dword ptr [ebp + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d7e03: mov eax, dword ptr [0xb18ffc] */
  eax = R32((uint32_t)(0xb18ffcu));
/* 8d7e08: je 0x8d7e40 */
  if (zf) goto L_8d7e40;
L_8d7e0a: /* 8d7e0a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d7e0c: je 0x8d7e1f */
  if (zf) goto L_8d7e1f;
L_8d7e0e: /* 8d7e0e: mov ecx, dword ptr [0xb19048] */
  ecx = R32((uint32_t)(0xb19048u));
/* 8d7e14: mov eax, dword ptr [ecx + 0x60] */
  eax = R32((uint32_t)(ecx + 0x60u));
/* 8d7e17: mov ecx, dword ptr [ecx + 0x5c] */
  ecx = R32((uint32_t)(ecx + 0x5cu));
/* 8d7e1a: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 8d7e1d: jmp 0x8d7e2d */
  goto L_8d7e2d;
L_8d7e1f: /* 8d7e1f: mov edx, dword ptr [0xb1907c] */
  edx = R32((uint32_t)(0xb1907cu));
/* 8d7e25: mov eax, dword ptr [0xb19080] */
  eax = R32((uint32_t)(0xb19080u));
/* 8d7e2a: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
L_8d7e2d: /* 8d7e2d: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8d7e30: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 8d7e32: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 8d7e35: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 8d7e3b: fimul dword ptr [ebp + 8] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(ebp + 0x8u)));
/* 8d7e3e: jmp 0x8d7e75 */
  goto L_8d7e75;
L_8d7e40: /* 8d7e40: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d7e42: je 0x8d7e57 */
  if (zf) goto L_8d7e57;
L_8d7e44: /* 8d7e44: mov eax, dword ptr [0xb19048] */
  eax = R32((uint32_t)(0xb19048u));
/* 8d7e49: mov ecx, dword ptr [eax + 0x60] */
  ecx = R32((uint32_t)(eax + 0x60u));
/* 8d7e4c: mov eax, dword ptr [eax + 0x5c] */
  eax = R32((uint32_t)(eax + 0x5cu));
/* 8d7e4f: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8d7e52: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 8d7e55: jmp 0x8d7e69 */
  goto L_8d7e69;
L_8d7e57: /* 8d7e57: mov edx, dword ptr [0xb19080] */
  edx = R32((uint32_t)(0xb19080u));
/* 8d7e5d: mov ecx, dword ptr [0xb1907c] */
  ecx = R32((uint32_t)(0xb1907cu));
/* 8d7e63: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8d7e66: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
L_8d7e69: /* 8d7e69: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8d7e6c: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 8d7e72: fimul dword ptr [ebp - 0x14] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)));
L_8d7e75: /* 8d7e75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d7e76: mov ecx, dword ptr [0xb19070] */
  ecx = R32((uint32_t)(0xb19070u));
/* 8d7e7c: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8d7e7f: call 0x6cac9a */
  esp -= 4; W32(esp, 0x8d7e84u); SPILL(); f_6cac9a(); if (g_unwind) return; RELOAD();
/* 8d7e84: mov ecx, 0xb18ff8 */
  ecx = 0xb18ff8u;
/* 8d7e89: call 0x6c92c8 */
  esp -= 4; W32(esp, 0x8d7e8eu); SPILL(); f_6c92c8(); if (g_unwind) return; RELOAD();
L_8d7e8e: /* 8d7e8e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d7e91: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d7e98: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d7e99: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d7e9a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d7e9b: mov esp, ebp */
  esp = ebp;
/* 8d7e9d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d7e9e: ret 4 */
  esp += 8; SPILL(); return;
L_8d7ea1: /* 8d7ea1: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 8d7ea4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d7ea5: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 8d7ea8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d7ea9: call 0x6cad71 */
  esp -= 4; W32(esp, 0x8d7eaeu); SPILL(); f_6cad71(); if (g_unwind) return; RELOAD();
/* 8d7eae: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d7eb0: je 0x8d7e8e */
  if (zf) goto L_8d7e8e;
L_8d7eb2: /* 8d7eb2: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d7eb5: jmp 0x8d7ec0 */
  goto L_8d7ec0;
L_8d7ec0: /* 8d7ec0: cmp ebx, dword ptr [edi + 0x1310] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1310u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d7ec6: jge 0x8d7f8c */
  if ((sf == of)) goto L_8d7f8c;
L_8d7ecc: /* 8d7ecc: mov edx, dword ptr [edi + 0x130c] */
  edx = R32((uint32_t)(edi + 0x130cu));
/* 8d7ed2: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d7ed5: lea ecx, [ebx + ebx*4] */
  ecx = (uint32_t)(ebx + ebx*4);
/* 8d7ed8: lea esi, [edx + ecx*4] */
  esi = (uint32_t)(edx + ecx*4);
/* 8d7edb: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8d7ede: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8d7ee0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d7ee1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d7ee3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d7ee4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d7ee5: mov ecx, edi */
  ecx = edi;
/* 8d7ee7: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8d7eecu); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8d7eec: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 8d7eef: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8d7ef2: mov eax, dword ptr [0xb18ffc] */
  eax = R32((uint32_t)(0xb18ffcu));
/* 8d7ef7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d7ef9: je 0x8d7f09 */
  if (zf) goto L_8d7f09;
L_8d7efb: /* 8d7efb: mov ecx, dword ptr [0xb19048] */
  ecx = R32((uint32_t)(0xb19048u));
/* 8d7f01: mov edx, dword ptr [ecx + 0x60] */
  edx = R32((uint32_t)(ecx + 0x60u));
/* 8d7f04: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8d7f07: jmp 0x8d7f11 */
  goto L_8d7f11;
L_8d7f09: /* 8d7f09: mov eax, dword ptr [0xb19080] */
  eax = R32((uint32_t)(0xb19080u));
/* 8d7f0e: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_8d7f11: /* 8d7f11: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8d7f14: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8d7f17: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d7f19: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 8d7f1c: je 0x8d7f3e */
  if (zf) goto L_8d7f3e;
L_8d7f1e: /* 8d7f1e: fiadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)));
/* 8d7f21: fcom dword ptr [0x9f7c10] */
  fpu_com(ST0, F32((uint32_t)(0x9f7c10u)));
/* 8d7f27: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d7f29: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8d7f2c: jp 0x8d7f38 */
  if (pf) goto L_8d7f38;
L_8d7f2e: /* 8d7f2e: call 0x99c958 */
  esp -= 4; W32(esp, 0x8d7f33u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8d7f33: mov byte ptr [ebp - 0x14], al */
  W8((uint32_t)(ebp + 0xffffffecu), (eax & 0xffu));
/* 8d7f36: jmp 0x8d7f5e */
  goto L_8d7f5e;
L_8d7f38: /* 8d7f38: mov byte ptr [ebp - 0x14], 0xff */
  W8((uint32_t)(ebp + 0xffffffecu), 0xffu);
/* 8d7f3c: jmp 0x8d7f5c */
  goto L_8d7f5c;
L_8d7f3e: /* 8d7f3e: fisubr dword ptr [ebp - 0x1c] */
  ST0 = ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u))) - ST0;
/* 8d7f41: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8d7f47: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d7f49: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d7f4c: jne 0x8d7f58 */
  if (!zf) goto L_8d7f58;
L_8d7f4e: /* 8d7f4e: call 0x99c958 */
  esp -= 4; W32(esp, 0x8d7f53u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8d7f53: mov byte ptr [ebp - 0x14], al */
  W8((uint32_t)(ebp + 0xffffffecu), (eax & 0xffu));
/* 8d7f56: jmp 0x8d7f5e */
  goto L_8d7f5e;
L_8d7f58: /* 8d7f58: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_8d7f5c: /* 8d7f5c: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8d7f5e: /* 8d7f5e: mov ecx, dword ptr [0xb1906c] */
  ecx = R32((uint32_t)(0xb1906cu));
/* 8d7f64: fild dword ptr [esi + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8d7f67: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d7f6a: mov eax, dword ptr [0xb19068] */
  eax = R32((uint32_t)(0xb19068u));
/* 8d7f6f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d7f70: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d7f71: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8d7f72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d7f73: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d7f76: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 8d7f7a: mov ecx, edi */
  ecx = edi;
/* 8d7f7c: fild dword ptr [esi] */
  { double v = (double)(int32_t)R32((uint32_t)(esi)); FPUSH(v); }
/* 8d7f7e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8d7f81: call 0x6c2c7f */
  esp -= 4; W32(esp, 0x8d7f86u); SPILL(); f_6c2c7f(); if (g_unwind) return; RELOAD();
/* 8d7f86: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8d7f87: jmp 0x8d7ec0 */
  goto L_8d7ec0;
L_8d7f8c: /* 8d7f8c: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d7f8f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d7f90: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d7f91: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d7f94: call 0x6c772a */
  esp -= 4; W32(esp, 0x8d7f99u); SPILL(); f_6c772a(); if (g_unwind) return; RELOAD();
/* 8d7f99: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d7f9c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d7f9d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d7f9e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d7fa5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d7fa6: mov esp, ebp */
  esp = ebp;
/* 8d7fa8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d7fa9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8d7eb7(void) {
  LOAD_REGS();
L_8d7eb7: /* 8d7eb7: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 8d7ebe: mov edi, edi */
  edi = edi;
L_8d7ec0: /* 8d7ec0: cmp ebx, dword ptr [edi + 0x1310] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1310u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d7ec6: jge 0x8d7f8c */
  if ((sf == of)) goto L_8d7f8c;
L_8d7ecc: /* 8d7ecc: mov edx, dword ptr [edi + 0x130c] */
  edx = R32((uint32_t)(edi + 0x130cu));
/* 8d7ed2: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d7ed5: lea ecx, [ebx + ebx*4] */
  ecx = (uint32_t)(ebx + ebx*4);
/* 8d7ed8: lea esi, [edx + ecx*4] */
  esi = (uint32_t)(edx + ecx*4);
/* 8d7edb: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8d7ede: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8d7ee0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d7ee1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d7ee3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d7ee4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d7ee5: mov ecx, edi */
  ecx = edi;
/* 8d7ee7: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8d7eecu); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8d7eec: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 8d7eef: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8d7ef2: mov eax, dword ptr [0xb18ffc] */
  eax = R32((uint32_t)(0xb18ffcu));
/* 8d7ef7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d7ef9: je 0x8d7f09 */
  if (zf) goto L_8d7f09;
L_8d7efb: /* 8d7efb: mov ecx, dword ptr [0xb19048] */
  ecx = R32((uint32_t)(0xb19048u));
/* 8d7f01: mov edx, dword ptr [ecx + 0x60] */
  edx = R32((uint32_t)(ecx + 0x60u));
/* 8d7f04: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8d7f07: jmp 0x8d7f11 */
  goto L_8d7f11;
L_8d7f09: /* 8d7f09: mov eax, dword ptr [0xb19080] */
  eax = R32((uint32_t)(0xb19080u));
/* 8d7f0e: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_8d7f11: /* 8d7f11: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8d7f14: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8d7f17: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d7f19: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 8d7f1c: je 0x8d7f3e */
  if (zf) goto L_8d7f3e;
L_8d7f1e: /* 8d7f1e: fiadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)));
/* 8d7f21: fcom dword ptr [0x9f7c10] */
  fpu_com(ST0, F32((uint32_t)(0x9f7c10u)));
/* 8d7f27: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d7f29: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8d7f2c: jp 0x8d7f38 */
  if (pf) goto L_8d7f38;
L_8d7f2e: /* 8d7f2e: call 0x99c958 */
  esp -= 4; W32(esp, 0x8d7f33u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8d7f33: mov byte ptr [ebp - 0x14], al */
  W8((uint32_t)(ebp + 0xffffffecu), (eax & 0xffu));
/* 8d7f36: jmp 0x8d7f5e */
  goto L_8d7f5e;
L_8d7f38: /* 8d7f38: mov byte ptr [ebp - 0x14], 0xff */
  W8((uint32_t)(ebp + 0xffffffecu), 0xffu);
/* 8d7f3c: jmp 0x8d7f5c */
  goto L_8d7f5c;
L_8d7f3e: /* 8d7f3e: fisubr dword ptr [ebp - 0x1c] */
  ST0 = ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u))) - ST0;
/* 8d7f41: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8d7f47: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d7f49: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d7f4c: jne 0x8d7f58 */
  if (!zf) goto L_8d7f58;
L_8d7f4e: /* 8d7f4e: call 0x99c958 */
  esp -= 4; W32(esp, 0x8d7f53u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8d7f53: mov byte ptr [ebp - 0x14], al */
  W8((uint32_t)(ebp + 0xffffffecu), (eax & 0xffu));
/* 8d7f56: jmp 0x8d7f5e */
  goto L_8d7f5e;
L_8d7f58: /* 8d7f58: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_8d7f5c: /* 8d7f5c: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8d7f5e: /* 8d7f5e: mov ecx, dword ptr [0xb1906c] */
  ecx = R32((uint32_t)(0xb1906cu));
/* 8d7f64: fild dword ptr [esi + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8d7f67: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d7f6a: mov eax, dword ptr [0xb19068] */
  eax = R32((uint32_t)(0xb19068u));
/* 8d7f6f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d7f70: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d7f71: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8d7f72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d7f73: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d7f76: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 8d7f7a: mov ecx, edi */
  ecx = edi;
/* 8d7f7c: fild dword ptr [esi] */
  { double v = (double)(int32_t)R32((uint32_t)(esi)); FPUSH(v); }
/* 8d7f7e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8d7f81: call 0x6c2c7f */
  esp -= 4; W32(esp, 0x8d7f86u); SPILL(); f_6c2c7f(); if (g_unwind) return; RELOAD();
/* 8d7f86: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8d7f87: jmp 0x8d7ec0 */
  goto L_8d7ec0;
L_8d7f8c: /* 8d7f8c: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d7f8f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d7f90: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d7f91: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d7f94: call 0x6c772a */
  esp -= 4; W32(esp, 0x8d7f99u); SPILL(); f_6c772a(); if (g_unwind) return; RELOAD();
/* 8d7f99: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d7f9c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d7f9d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d7f9e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d7fa5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d7fa6: mov esp, ebp */
  esp = ebp;
/* 8d7fa8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d7fa9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8d7fac(void) {
  LOAD_REGS();
L_8d7fac: /* 8d7fac: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8d7faf: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d7fb4: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8d7fb7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d7fb8: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 8d7fbb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d7fc0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d7fc0(); return;
}

void f_8d7fc0(void) {
  LOAD_REGS();
L_8d7fc0: /* 8d7fc0: push 0xa1d1c4 */
  { uint32_t v = 0xa1d1c4u; esp -= 4; W32(esp, v); }
/* 8d7fc5: push 0xaed140 */
  { uint32_t v = 0xaed140u; esp -= 4; W32(esp, v); }
/* 8d7fca: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d7fd0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d7fd0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d7fd3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d7fd5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d7fd7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d7fdcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8d7fdc: guest_badaddr(0x8d7fdc); return;
}

void f_8d8070(void) {
  LOAD_REGS();
L_8d8070: /* 8d8070: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d8071: mov ebp, esp */
  ebp = esp;
/* 8d8073: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d8075: push 0x9d84d0 */
  { uint32_t v = 0x9d84d0u; esp -= 4; W32(esp, v); }
/* 8d807a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d8080: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d8081: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d8088: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d808b: mov eax, dword ptr [0xb19068] */
  eax = R32((uint32_t)(0xb19068u));
/* 8d8090: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d8091: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d8092: xor esi, esi */
  esi = 0;
/* 8d8094: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d8096: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d8097: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d809a: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 8d809d: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 8d80a0: jne 0x8d8196 */
  if (!zf) goto L_8d8196;
L_8d80a6: /* 8d80a6: mov ecx, 0xb18ff8 */
  ecx = 0xb18ff8u;
/* 8d80ab: call 0x6c4a8e */
  esp -= 4; W32(esp, 0x8d80b0u); SPILL(); f_6c4a8e(); if (g_unwind) return; RELOAD();
/* 8d80b0: mov edi, dword ptr [0xb19070] */
  edi = R32((uint32_t)(0xb19070u));
/* 8d80b6: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 8d80b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8d80c0: /* 8d80c0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d80c3: cmp eax, dword ptr [edi + 0x1310] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1310u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d80c9: jge 0x8d8172 */
  if ((sf == of)) goto L_8d8172;
L_8d80cf: /* 8d80cf: mov eax, dword ptr [0xb18ffc] */
  eax = R32((uint32_t)(0xb18ffcu));
/* 8d80d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d80d6: je 0x8d810e */
  if (zf) goto L_8d810e;
L_8d80d8: /* 8d80d8: mov ecx, dword ptr [0xb19048] */
  ecx = R32((uint32_t)(0xb19048u));
/* 8d80de: mov ebx, dword ptr [ecx + 0x60] */
  ebx = R32((uint32_t)(ecx + 0x60u));
/* 8d80e1: mov esi, ebx */
  esi = ebx;
L_8d80e3: /* 8d80e3: call dword ptr [0xcfa5ec] */
  esp -= 4; W32(esp, 0x8d80e9u); SPILL(); f_4e3d0f(); if (g_unwind) return; /* Core!?appRand@@YAHXZ */ RELOAD();
/* 8d80e9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8d80ea: lea ecx, [ebx + ebx] */
  ecx = (uint32_t)(ebx + ebx);
/* 8d80ed: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x8d80ed);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8d80ef: mov eax, dword ptr [0xb18ffc] */
  eax = R32((uint32_t)(0xb18ffcu));
/* 8d80f4: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 8d80f6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d80f8: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8d80fb: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8d80fe: je 0x8d8118 */
  if (zf) goto L_8d8118;
L_8d8100: /* 8d8100: mov edx, dword ptr [0xb19048] */
  edx = R32((uint32_t)(0xb19048u));
/* 8d8106: mov eax, dword ptr [edx + 0x5c] */
  eax = R32((uint32_t)(edx + 0x5cu));
/* 8d8109: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8d810c: jmp 0x8d8121 */
  goto L_8d8121;
L_8d810e: /* 8d810e: mov esi, dword ptr [0xb19080] */
  esi = R32((uint32_t)(0xb19080u));
/* 8d8114: mov ebx, esi */
  ebx = esi;
/* 8d8116: jmp 0x8d80e3 */
  goto L_8d80e3;
L_8d8118: /* 8d8118: mov ecx, dword ptr [0xb1907c] */
  ecx = R32((uint32_t)(0xb1907cu));
/* 8d811e: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
L_8d8121: /* 8d8121: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8d8124: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d8127: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 8d812a: mov eax, dword ptr [edi + 0x130c] */
  eax = R32((uint32_t)(edi + 0x130cu));
/* 8d8130: mov ecx, dword ptr [eax + edx*4 + 4] */
  ecx = R32((uint32_t)(eax + edx*4 + 0x4u));
/* 8d8134: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8d8136: lea esi, [eax + edx*4] */
  esi = (uint32_t)(eax + edx*4);
/* 8d8139: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8d813b: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 8d8141: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d8142: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8143: mov ecx, edi */
  ecx = edi;
/* 8d8145: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8d8148: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d814a: call 0x6cae8e */
  esp -= 4; W32(esp, 0x8d814fu); SPILL(); f_6cae8e(); if (g_unwind) return; RELOAD();
/* 8d814f: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8d8152: mov ebx, eax */
  ebx = eax;
/* 8d8154: call 0x99c958 */
  esp -= 4; W32(esp, 0x8d8159u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8d8159: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8d815b: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d815d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d815e: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8d8161: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d8162: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d8163: mov ecx, edi */
  ecx = edi;
/* 8d8165: call 0x6cce5f */
  esp -= 4; W32(esp, 0x8d816au); SPILL(); f_6cce5f(); if (g_unwind) return; RELOAD();
/* 8d816a: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 8d816d: jmp 0x8d80c0 */
  goto L_8d80c0;
L_8d8172: /* 8d8172: mov ecx, edi */
  ecx = edi;
/* 8d8174: call 0x6c6339 */
  esp -= 4; W32(esp, 0x8d8179u); SPILL(); f_6c6339(); if (g_unwind) return; RELOAD();
/* 8d8179: mov ecx, 0xb18ff8 */
  ecx = 0xb18ff8u;
/* 8d817e: call 0x6c92c8 */
  esp -= 4; W32(esp, 0x8d8183u); SPILL(); f_6c92c8(); if (g_unwind) return; RELOAD();
L_8d8183: /* 8d8183: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d8186: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d818d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d818e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d818f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d8190: mov esp, ebp */
  esp = ebp;
/* 8d8192: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d8193: ret 4 */
  esp += 8; SPILL(); return;
L_8d8196: /* 8d8196: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 8d8199: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d819a: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 8d819d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d819e: call 0x6cad71 */
  esp -= 4; W32(esp, 0x8d81a3u); SPILL(); f_6cad71(); if (g_unwind) return; RELOAD();
/* 8d81a3: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d81a5: je 0x8d8183 */
  if (zf) goto L_8d8183;
L_8d81a7: /* 8d81a7: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d81aa: xor eax, eax */
  eax = 0;
L_8d81ac: /* 8d81ac: cmp eax, dword ptr [edi + 0x1310] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1310u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d81b2: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8d81b5: jge 0x8d828c */
  if ((sf == of)) goto L_8d828c;
L_8d81bb: /* 8d81bb: mov edx, dword ptr [edi + 0x130c] */
  edx = R32((uint32_t)(edi + 0x130cu));
/* 8d81c1: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 8d81c4: lea esi, [edx + ecx*4] */
  esi = (uint32_t)(edx + ecx*4);
/* 8d81c7: call dword ptr [0xcfa5ec] */
  esp -= 4; W32(esp, 0x8d81cdu); SPILL(); f_4e3d0f(); if (g_unwind) return; /* Core!?appRand@@YAHXZ */ RELOAD();
/* 8d81cd: and eax, 0x800000ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800000ffu);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 8d81d2: jns 0x8d81db */
  if (!sf) goto L_8d81db;
L_8d81d4: /* 8d81d4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8d81d5: or eax, 0xffffff00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffff00u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 8d81da: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_8d81db: /* 8d81db: sub eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8d81e0: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8d81e3: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8d81e6: mov eax, dword ptr [0xb18ffc] */
  eax = R32((uint32_t)(0xb18ffcu));
/* 8d81eb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d81ed: je 0x8d81fc */
  if (zf) goto L_8d81fc;
L_8d81ef: /* 8d81ef: mov eax, dword ptr [0xb19048] */
  eax = R32((uint32_t)(0xb19048u));
/* 8d81f4: mov ecx, dword ptr [eax + 0x5c] */
  ecx = R32((uint32_t)(eax + 0x5cu));
/* 8d81f7: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8d81fa: jmp 0x8d8205 */
  goto L_8d8205;
L_8d81fc: /* 8d81fc: mov edx, dword ptr [0xb1907c] */
  edx = R32((uint32_t)(0xb1907cu));
/* 8d8202: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
L_8d8205: /* 8d8205: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8d8208: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d820b: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8d820e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8d8210: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8d8212: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d8213: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d8215: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d8216: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 8d821c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d821d: mov ecx, edi */
  ecx = edi;
/* 8d821f: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8d8222: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d8224: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8d8229u); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8d8229: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8d822c: mov byte ptr [ebp - 0x14], al */
  W8((uint32_t)(ebp + 0xffffffecu), (eax & 0xffu));
/* 8d822f: movzx ebx, al */
  ebx = (uint32_t)((eax & 0xffu));
/* 8d8232: call 0x99c958 */
  esp -= 4; W32(esp, 0x8d8237u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8d8237: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d8239: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d823e: jle 0x8d8246 */
  if ((zf || sf != of)) goto L_8d8246;
L_8d8240: /* 8d8240: mov byte ptr [ebp - 0x14], 0xff */
  W8((uint32_t)(ebp + 0xffffffecu), 0xffu);
/* 8d8244: jmp 0x8d825b */
  goto L_8d825b;
L_8d8246: /* 8d8246: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8d8248: jge 0x8d8250 */
  if ((sf == of)) goto L_8d8250;
L_8d824a: /* 8d824a: mov byte ptr [ebp - 0x14], 0 */
  W8((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8d824e: jmp 0x8d825b */
  goto L_8d825b;
L_8d8250: /* 8d8250: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8d8253: call 0x99c958 */
  esp -= 4; W32(esp, 0x8d8258u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8d8258: add byte ptr [ebp - 0x14], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffecu))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  W8((uint32_t)(ebp + 0xffffffecu), r);
  }
L_8d825b: /* 8d825b: mov eax, dword ptr [0xb1906c] */
  eax = R32((uint32_t)(0xb1906cu));
/* 8d8260: fild dword ptr [esi + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8d8263: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d8266: mov edx, dword ptr [0xb19068] */
  edx = R32((uint32_t)(0xb19068u));
/* 8d826c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d826d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d826e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 8d826f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8270: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d8273: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 8d8277: mov ecx, edi */
  ecx = edi;
/* 8d8279: fild dword ptr [esi] */
  { double v = (double)(int32_t)R32((uint32_t)(esi)); FPUSH(v); }
/* 8d827b: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8d827e: call 0x6c2c7f */
  esp -= 4; W32(esp, 0x8d8283u); SPILL(); f_6c2c7f(); if (g_unwind) return; RELOAD();
/* 8d8283: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d8286: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d8287: jmp 0x8d81ac */
  goto L_8d81ac;
L_8d828c: /* 8d828c: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d828f: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d8292: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d8293: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d8294: call 0x6c772a */
  esp -= 4; W32(esp, 0x8d8299u); SPILL(); f_6c772a(); if (g_unwind) return; RELOAD();
/* 8d8299: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d829c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d829d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d829e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d82a5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d82a6: mov esp, ebp */
  esp = ebp;
/* 8d82a8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d82a9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8d82ac(void) {
  LOAD_REGS();
L_8d82ac: /* 8d82ac: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8d82af: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d82b4: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8d82b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d82b8: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 8d82bb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d82c0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d82c0(); return;
}

void f_8d82c0(void) {
  LOAD_REGS();
L_8d82c0: /* 8d82c0: push 0xa1d208 */
  { uint32_t v = 0xa1d208u; esp -= 4; W32(esp, v); }
/* 8d82c5: push 0xaed1ac */
  { uint32_t v = 0xaed1acu; esp -= 4; W32(esp, v); }
/* 8d82ca: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d82d0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d82d0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d82d3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d82d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d82d7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d82dcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8d82dc: guest_badaddr(0x8d82dc); return;
}

void f_8d8380(void) {
  LOAD_REGS();
L_8d8380: /* 8d8380: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d8381: mov ebp, esp */
  ebp = esp;
/* 8d8383: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d8385: push 0x9d84e0 */
  { uint32_t v = 0x9d84e0u; esp -= 4; W32(esp, v); }
/* 8d838a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d8390: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d8391: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d8398: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d839b: mov eax, dword ptr [0xb19068] */
  eax = R32((uint32_t)(0xb19068u));
/* 8d83a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d83a2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d83a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d83a4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d83a5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d83a8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8d83af: jne 0x8d8403 */
  if (!zf) goto L_8d8403;
L_8d83b1: /* 8d83b1: mov ecx, 0xb18ff8 */
  ecx = 0xb18ff8u;
/* 8d83b6: call 0x6c4a8e */
  esp -= 4; W32(esp, 0x8d83bbu); SPILL(); f_6c4a8e(); if (g_unwind) return; RELOAD();
/* 8d83bb: mov edi, dword ptr [0xb19070] */
  edi = R32((uint32_t)(0xb19070u));
/* 8d83c1: xor esi, esi */
  esi = 0;
L_8d83c3: /* 8d83c3: cmp esi, dword ptr [edi + 0x1310] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1310u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d83c9: jge 0x8d83f2 */
  if ((sf == of)) goto L_8d83f2;
L_8d83cb: /* 8d83cb: mov ecx, dword ptr [edi + 0x130c] */
  ecx = R32((uint32_t)(edi + 0x130cu));
/* 8d83d1: xor edx, edx */
  edx = 0;
/* 8d83d3: mov dx, word ptr [0xb19018] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0xb19018u))) & 0xffffu);
/* 8d83da: lea eax, [esi + esi*4] */
  eax = (uint32_t)(esi + esi*4);
/* 8d83dd: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8d83e0: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8d83e3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d83e4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8d83e6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d83e7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d83e8: mov ecx, edi */
  ecx = edi;
/* 8d83ea: call 0x6cce5f */
  esp -= 4; W32(esp, 0x8d83efu); SPILL(); f_6cce5f(); if (g_unwind) return; RELOAD();
/* 8d83ef: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8d83f0: jmp 0x8d83c3 */
  goto L_8d83c3;
L_8d83f2: /* 8d83f2: mov ecx, edi */
  ecx = edi;
/* 8d83f4: call 0x6c6339 */
  esp -= 4; W32(esp, 0x8d83f9u); SPILL(); f_6c6339(); if (g_unwind) return; RELOAD();
/* 8d83f9: mov ecx, 0xb18ff8 */
  ecx = 0xb18ff8u;
/* 8d83fe: call 0x6c92c8 */
  esp -= 4; W32(esp, 0x8d8403u); SPILL(); f_6c92c8(); if (g_unwind) return; RELOAD();
L_8d8403: /* 8d8403: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d8406: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d8407: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d8408: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d840f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d8410: mov esp, ebp */
  esp = ebp;
/* 8d8412: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d8413: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8d8416(void) {
  LOAD_REGS();
L_8d8416: /* 8d8416: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d8419: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d841e: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8d8421: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d8422: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8d8425: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d842au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d842a(); return;
}

void f_8d842a(void) {
  LOAD_REGS();
L_8d842a: /* 8d842a: push 0xa1d24c */
  { uint32_t v = 0xa1d24cu; esp -= 4; W32(esp, v); }
/* 8d842f: push 0xaed1d4 */
  { uint32_t v = 0xaed1d4u; esp -= 4; W32(esp, v); }
/* 8d8434: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d843au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d843a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d843d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d843f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d8441: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d8446u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8d8446: guest_badaddr(0x8d8446); return;
}

void f_8d8490(void) {
  LOAD_REGS();
L_8d8490: /* 8d8490: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d8492: push 0x9d84fb */
  { uint32_t v = 0x9d84fbu; esp -= 4; W32(esp, v); }
/* 8d8497: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d849d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d849e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d84a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d84a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d84a7: mov esi, ecx */
  esi = ecx;
/* 8d84a9: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 8d84ac: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 8d84b0: mov dword ptr [esi], 0x9f9448 */
  W32((uint32_t)(esi), 0x9f9448u);
/* 8d84b6: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8d84bcu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8d84bc: lea ecx, [esi + 0x64] */
  ecx = (uint32_t)(esi + 0x64u);
/* 8d84bf: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 8d84c7: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8d84cdu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8d84cd: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8d84d1: mov eax, esi */
  eax = esi;
/* 8d84d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d84d4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d84db: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d84de: ret  */
  esp += 4; SPILL(); return;
}

void f_8d8500(void) {
  LOAD_REGS();
L_8d8500: /* 8d8500: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d8502: push 0x9d851b */
  { uint32_t v = 0x9d851bu; esp -= 4; W32(esp, v); }
/* 8d8507: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d850d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d850e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d8515: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d8516: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d8517: mov esi, ecx */
  esi = ecx;
/* 8d8519: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 8d851d: mov dword ptr [esi], 0x9f9448 */
  W32((uint32_t)(esi), 0x9f9448u);
/* 8d8523: lea ecx, [esi + 0x64] */
  ecx = (uint32_t)(esi + 0x64u);
/* 8d8526: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 8d852e: call 0x6ca510 */
  esp -= 4; W32(esp, 0x8d8533u); SPILL(); f_6ca510(); if (g_unwind) return; RELOAD();
/* 8d8533: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 8d8536: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 8d853e: call 0x6c8738 */
  esp -= 4; W32(esp, 0x8d8543u); SPILL(); f_6c8738(); if (g_unwind) return; RELOAD();
/* 8d8543: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8d8547: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d8548: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d854f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d8552: ret  */
  esp += 4; SPILL(); return;
}

void f_8d8580(void) {
  LOAD_REGS();
L_8d8580: /* 8d8580: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d8581: mov ebp, esp */
  ebp = esp;
/* 8d8583: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d8585: push 0x9d8530 */
  { uint32_t v = 0x9d8530u; esp -= 4; W32(esp, v); }
/* 8d858a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d8590: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d8591: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d8598: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d859b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d859c: mov ebx, dword ptr [0xcfa8a4] */
  ebx = R32((uint32_t)(0xcfa8a4u));
/* 8d85a2: xor eax, eax */
  eax = 0;
/* 8d85a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d85a5: mov esi, ecx */
  esi = ecx;
/* 8d85a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d85a8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d85ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d85ac: push 0xaed320 */
  { uint32_t v = 0xaed320u; esp -= 4; W32(esp, v); }
/* 8d85b1: mov ecx, 1 */
  ecx = 0x1u;
/* 8d85b6: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d85b8: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 8d85bd: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 8d85c0: mov dword ptr [esi + 0x7c], 0x100 */
  W32((uint32_t)(esi + 0x7cu), 0x100u);
/* 8d85c7: mov dword ptr [esi + 0x80], 0x400 */
  W32((uint32_t)(esi + 0x80u), 0x400u);
/* 8d85d1: mov dword ptr [esi + 0x84], 0x64 */
  W32((uint32_t)(esi + 0x84u), 0x64u);
/* 8d85db: mov dword ptr [esi + 0x88], 0x20 */
  W32((uint32_t)(esi + 0x88u), 0x20u);
/* 8d85e5: mov dword ptr [esi + 0x8c], eax */
  W32((uint32_t)(esi + 0x8cu), eax);
/* 8d85eb: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 8d85ee: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 8d85f1: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 8d85f4: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 8d85f7: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 8d85fa: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* 8d85fd: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 8d8600: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8d8603: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 8d8606: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8d8608u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d8608: mov edi, eax */
  edi = eax;
/* 8d860a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d860d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d860f: je 0x8d8622 */
  if (zf) goto L_8d8622;
L_8d8611: /* 8d8611: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 8d8616: mov ecx, edi */
  ecx = edi;
/* 8d8618: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8d861eu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8d861e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d8620: jne 0x8d8624 */
  if (!zf) goto L_8d8624;
L_8d8622: /* 8d8622: xor edi, edi */
  edi = 0;
L_8d8624: /* 8d8624: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d8626: mov dword ptr [esi + 0x30], edi */
  W32((uint32_t)(esi + 0x30u), edi);
/* 8d8629: jne 0x8d8643 */
  if (!zf) goto L_8d8643;
L_8d862b: /* 8d862b: push 0x314 */
  { uint32_t v = 0x314u; esp -= 4; W32(esp, v); }
/* 8d8630: push 0xaed34c */
  { uint32_t v = 0xaed34cu; esp -= 4; W32(esp, v); }
/* 8d8635: push 0xaed360 */
  { uint32_t v = 0xaed360u; esp -= 4; W32(esp, v); }
/* 8d863a: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8d8640u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8d8640: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8d8643: /* 8d8643: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d8645: push 0xaed36c */
  { uint32_t v = 0xaed36cu; esp -= 4; W32(esp, v); }
/* 8d864a: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d864c: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 8d8651: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8d8653u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d8653: mov edi, eax */
  edi = eax;
/* 8d8655: xor ebx, ebx */
  ebx = 0;
/* 8d8657: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d865a: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d865c: je 0x8d866f */
  if (zf) goto L_8d866f;
L_8d865e: /* 8d865e: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 8d8663: mov ecx, edi */
  ecx = edi;
/* 8d8665: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8d866bu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8d866b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d866d: jne 0x8d8671 */
  if (!zf) goto L_8d8671;
L_8d866f: /* 8d866f: xor edi, edi */
  edi = 0;
L_8d8671: /* 8d8671: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d8673: mov dword ptr [esi + 0x34], edi */
  W32((uint32_t)(esi + 0x34u), edi);
/* 8d8676: jne 0x8d8690 */
  if (!zf) goto L_8d8690;
L_8d8678: /* 8d8678: push 0x316 */
  { uint32_t v = 0x316u; esp -= 4; W32(esp, v); }
/* 8d867d: push 0xaed38c */
  { uint32_t v = 0xaed38cu; esp -= 4; W32(esp, v); }
/* 8d8682: push 0xaed3a0 */
  { uint32_t v = 0xaed3a0u; esp -= 4; W32(esp, v); }
/* 8d8687: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8d868du); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8d868d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8d8690: /* 8d8690: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 8d8697: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8d869a: lea eax, [esi + 0x24] */
  eax = (uint32_t)(esi + 0x24u);
/* 8d869d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8d869f: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 8d86a6: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d86a9: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8d86ac: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 8d86b3: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d86b6: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8d86b9: mov al, 0xff */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
/* 8d86bb: mov byte ptr [ebp - 0x14], al */
  W8((uint32_t)(ebp + 0xffffffecu), (eax & 0xffu));
/* 8d86be: mov byte ptr [ebp - 0x13], al */
  W8((uint32_t)(ebp + 0xffffffedu), (eax & 0xffu));
/* 8d86c1: mov byte ptr [ebp - 0x12], al */
  W8((uint32_t)(ebp + 0xffffffeeu), (eax & 0xffu));
/* 8d86c4: mov byte ptr [ebp - 0x11], al */
  W8((uint32_t)(ebp + 0xffffffefu), (eax & 0xffu));
/* 8d86c7: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d86ca: lea edi, [esi + 0x44] */
  edi = (uint32_t)(esi + 0x44u);
/* 8d86cd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d86ce: mov ecx, edi */
  ecx = edi;
/* 8d86d0: mov dword ptr [esi + 0x78], ebx */
  W32((uint32_t)(esi + 0x78u), ebx);
/* 8d86d3: mov dword ptr [esi + 0x70], 0xffffffff */
  W32((uint32_t)(esi + 0x70u), 0xffffffffu);
/* 8d86da: mov dword ptr [esi + 0x74], ebx */
  W32((uint32_t)(esi + 0x74u), ebx);
/* 8d86dd: mov dword ptr [esi + 0x54], ebx */
  W32((uint32_t)(esi + 0x54u), ebx);
/* 8d86e0: mov dword ptr [esi + 0x58], ebx */
  W32((uint32_t)(esi + 0x58u), ebx);
/* 8d86e3: mov dword ptr [esi + 0x5c], ebx */
  W32((uint32_t)(esi + 0x5cu), ebx);
/* 8d86e6: mov dword ptr [esi + 0x60], ebx */
  W32((uint32_t)(esi + 0x60u), ebx);
/* 8d86e9: mov dword ptr [esi + 0x20], ebx */
  W32((uint32_t)(esi + 0x20u), ebx);
/* 8d86ec: mov dword ptr [esi + 0x40], edx */
  W32((uint32_t)(esi + 0x40u), edx);
/* 8d86ef: call 0x6c1e56 */
  esp -= 4; W32(esp, 0x8d86f4u); SPILL(); f_6c1e56(); if (g_unwind) return; RELOAD();
/* 8d86f4: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 8d86f6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d86f8: mov ecx, edi */
  ecx = edi;
/* 8d86fa: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8d8700u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8d8700: imul eax, eax, 0x68 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x68u);
  eax = (uint32_t)r;
  }
/* 8d8703: add eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8d8705: je 0x8d870e */
  if (zf) goto L_8d870e;
L_8d8707: /* 8d8707: mov ecx, eax */
  ecx = eax;
/* 8d8709: call 0x6c81bb */
  esp -= 4; W32(esp, 0x8d870eu); SPILL(); f_6c81bb(); if (g_unwind) return; RELOAD();
L_8d870e: /* 8d870e: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 8d8710: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d8712: mov ecx, edi */
  ecx = edi;
/* 8d8714: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8d871au); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8d871a: imul eax, eax, 0x68 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x68u);
  eax = (uint32_t)r;
  }
/* 8d871d: add eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8d871f: je 0x8d8728 */
  if (zf) goto L_8d8728;
L_8d8721: /* 8d8721: mov ecx, eax */
  ecx = eax;
/* 8d8723: call 0x6c69d3 */
  esp -= 4; W32(esp, 0x8d8728u); SPILL(); f_6c69d3(); if (g_unwind) return; RELOAD();
L_8d8728: /* 8d8728: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 8d872a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d872c: mov ecx, edi */
  ecx = edi;
/* 8d872e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8d8734u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8d8734: imul eax, eax, 0x68 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x68u);
  eax = (uint32_t)r;
  }
/* 8d8737: add eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8d8739: je 0x8d8742 */
  if (zf) goto L_8d8742;
L_8d873b: /* 8d873b: mov ecx, eax */
  ecx = eax;
/* 8d873d: call 0x6c845e */
  esp -= 4; W32(esp, 0x8d8742u); SPILL(); f_6c845e(); if (g_unwind) return; RELOAD();
L_8d8742: /* 8d8742: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 8d8744: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d8746: mov ecx, edi */
  ecx = edi;
/* 8d8748: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8d874eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8d874e: imul eax, eax, 0x68 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x68u);
  eax = (uint32_t)r;
  }
/* 8d8751: add eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8d8753: je 0x8d875c */
  if (zf) goto L_8d875c;
L_8d8755: /* 8d8755: mov ecx, eax */
  ecx = eax;
/* 8d8757: call 0x6c11b3 */
  esp -= 4; W32(esp, 0x8d875cu); SPILL(); f_6c11b3(); if (g_unwind) return; RELOAD();
L_8d875c: /* 8d875c: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 8d875e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d8760: mov ecx, edi */
  ecx = edi;
/* 8d8762: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8d8768u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8d8768: imul eax, eax, 0x68 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x68u);
  eax = (uint32_t)r;
  }
/* 8d876b: add eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8d876d: je 0x8d8776 */
  if (zf) goto L_8d8776;
L_8d876f: /* 8d876f: mov ecx, eax */
  ecx = eax;
/* 8d8771: call 0x6cb825 */
  esp -= 4; W32(esp, 0x8d8776u); SPILL(); f_6cb825(); if (g_unwind) return; RELOAD();
L_8d8776: /* 8d8776: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 8d8778: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d877a: mov ecx, edi */
  ecx = edi;
/* 8d877c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8d8782u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8d8782: imul eax, eax, 0x68 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x68u);
  eax = (uint32_t)r;
  }
/* 8d8785: add eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8d8787: je 0x8d8790 */
  if (zf) goto L_8d8790;
L_8d8789: /* 8d8789: mov ecx, eax */
  ecx = eax;
/* 8d878b: call 0x6c5b5a */
  esp -= 4; W32(esp, 0x8d8790u); SPILL(); f_6c5b5a(); if (g_unwind) return; RELOAD();
L_8d8790: /* 8d8790: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 8d8792: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d8794: mov ecx, edi */
  ecx = edi;
/* 8d8796: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8d879cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8d879c: imul eax, eax, 0x68 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x68u);
  eax = (uint32_t)r;
  }
/* 8d879f: add eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8d87a1: je 0x8d87aa */
  if (zf) goto L_8d87aa;
L_8d87a3: /* 8d87a3: mov ecx, eax */
  ecx = eax;
/* 8d87a5: call 0x6cc2b1 */
  esp -= 4; W32(esp, 0x8d87aau); SPILL(); f_6cc2b1(); if (g_unwind) return; RELOAD();
L_8d87aa: /* 8d87aa: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 8d87ac: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d87ae: mov ecx, edi */
  ecx = edi;
/* 8d87b0: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8d87b6u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8d87b6: imul eax, eax, 0x68 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x68u);
  eax = (uint32_t)r;
  }
/* 8d87b9: add eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8d87bb: je 0x8d87c4 */
  if (zf) goto L_8d87c4;
L_8d87bd: /* 8d87bd: mov ecx, eax */
  ecx = eax;
/* 8d87bf: call 0x6cc3c9 */
  esp -= 4; W32(esp, 0x8d87c4u); SPILL(); f_6cc3c9(); if (g_unwind) return; RELOAD();
L_8d87c4: /* 8d87c4: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 8d87c6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d87c8: mov ecx, edi */
  ecx = edi;
/* 8d87ca: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8d87d0u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8d87d0: imul eax, eax, 0x68 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x68u);
  eax = (uint32_t)r;
  }
/* 8d87d3: add eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8d87d5: je 0x8d87de */
  if (zf) goto L_8d87de;
L_8d87d7: /* 8d87d7: mov ecx, eax */
  ecx = eax;
/* 8d87d9: call 0x6c4de0 */
  esp -= 4; W32(esp, 0x8d87deu); SPILL(); f_6c4de0(); if (g_unwind) return; RELOAD();
L_8d87de: /* 8d87de: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 8d87e0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d87e2: mov ecx, edi */
  ecx = edi;
/* 8d87e4: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8d87eau); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8d87ea: imul eax, eax, 0x68 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x68u);
  eax = (uint32_t)r;
  }
/* 8d87ed: add eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8d87ef: je 0x8d87f8 */
  if (zf) goto L_8d87f8;
L_8d87f1: /* 8d87f1: mov ecx, eax */
  ecx = eax;
/* 8d87f3: call 0x6cb104 */
  esp -= 4; W32(esp, 0x8d87f8u); SPILL(); f_6cb104(); if (g_unwind) return; RELOAD();
L_8d87f8: /* 8d87f8: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 8d87fa: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d87fc: mov ecx, edi */
  ecx = edi;
/* 8d87fe: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8d8804u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8d8804: imul eax, eax, 0x68 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x68u);
  eax = (uint32_t)r;
  }
/* 8d8807: add eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8d8809: je 0x8d8812 */
  if (zf) goto L_8d8812;
L_8d880b: /* 8d880b: mov ecx, eax */
  ecx = eax;
/* 8d880d: call 0x6c809e */
  esp -= 4; W32(esp, 0x8d8812u); SPILL(); f_6c809e(); if (g_unwind) return; RELOAD();
L_8d8812: /* 8d8812: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 8d8814: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d8816: mov ecx, edi */
  ecx = edi;
/* 8d8818: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8d881eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8d881e: imul eax, eax, 0x68 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x68u);
  eax = (uint32_t)r;
  }
/* 8d8821: add eax, dword ptr [edi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8d8823: je 0x8d882c */
  if (zf) goto L_8d882c;
L_8d8825: /* 8d8825: mov ecx, eax */
  ecx = eax;
/* 8d8827: call 0x6c14ab */
  esp -= 4; W32(esp, 0x8d882cu); SPILL(); f_6c14ab(); if (g_unwind) return; RELOAD();
L_8d882c: /* 8d882c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d882d: mov ecx, esi */
  ecx = esi;
/* 8d882f: call 0x6c10aa */
  esp -= 4; W32(esp, 0x8d8834u); SPILL(); f_6c10aa(); if (g_unwind) return; RELOAD();
/* 8d8834: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d8837: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d8838: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d8839: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d8840: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d8841: mov esp, ebp */
  esp = ebp;
/* 8d8843: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d8844: ret  */
  esp += 4; SPILL(); return;
}

void f_8d8845(void) {
  LOAD_REGS();
L_8d8845: /* 8d8845: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d8848: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d884d: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 8d8850: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d8851: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8d8854: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d8859u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d8859(); return;
}

void f_8d8859(void) {
  LOAD_REGS();
L_8d8859: /* 8d8859: push 0xa1d294 */
  { uint32_t v = 0xa1d294u; esp -= 4; W32(esp, v); }
/* 8d885e: push 0xaed3a8 */
  { uint32_t v = 0xaed3a8u; esp -= 4; W32(esp, v); }
/* 8d8863: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d8869u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d8869: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d886c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d886e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d8870: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d8875u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8d8875: guest_badaddr(0x8d8875); return;
}

void f_8d8940(void) {
  LOAD_REGS();
L_8d8940: /* 8d8940: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d8941: mov ebp, esp */
  ebp = esp;
/* 8d8943: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d8945: push 0x9d855c */
  { uint32_t v = 0x9d855cu; esp -= 4; W32(esp, v); }
/* 8d894a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d8950: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d8951: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d8958: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d895b: mov eax, dword ptr [0xb19068] */
  eax = R32((uint32_t)(0xb19068u));
/* 8d8960: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d8961: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d8962: xor ebx, ebx */
  ebx = 0;
/* 8d8964: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d8966: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d8967: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d896a: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 8d896d: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8d8970: jne 0x8d8c1a */
  if (!zf) goto L_8d8c1a;
L_8d8976: /* 8d8976: mov ecx, 0xb18ff8 */
  ecx = 0xb18ff8u;
/* 8d897b: call 0x6c4a8e */
  esp -= 4; W32(esp, 0x8d8980u); SPILL(); f_6c4a8e(); if (g_unwind) return; RELOAD();
/* 8d8980: test byte ptr [0xce9eb8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xce9eb8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d8987: mov esi, dword ptr [0xb19070] */
  esi = R32((uint32_t)(0xb19070u));
/* 8d898d: jne 0x8d89c0 */
  if (!zf) goto L_8d89c0;
L_8d898f: /* 8d898f: or dword ptr [0xce9eb8], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xce9eb8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xce9eb8u), r);
  }
/* 8d8996: mov ecx, 0xce9ea8 */
  ecx = 0xce9ea8u;
/* 8d899b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8d899f: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8d89a5u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8d89a5: push 0x9f20a0 */
  { uint32_t v = 0x9f20a0u; esp -= 4; W32(esp, v); }
/* 8d89aa: call 0x99cbec */
  esp -= 4; W32(esp, 0x8d89afu); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 8d89af: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d89b2: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8d89b5: jmp 0x8d89c0 */
  goto L_8d89c0;
L_8d89c0: /* 8d89c0: cmp ebx, dword ptr [esi + 0x1310] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1310u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d89c6: jge 0x8d8ba2 */
  if ((sf == of)) goto L_8d8ba2;
L_8d89cc: /* 8d89cc: mov eax, dword ptr [esi + 0x130c] */
  eax = R32((uint32_t)(esi + 0x130cu));
/* 8d89d2: lea edi, [ebx + ebx*4] */
  edi = (uint32_t)(ebx + ebx*4);
/* 8d89d5: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8d89d8: mov ecx, dword ptr [eax + edi + 4] */
  ecx = R32((uint32_t)(eax + edi + 0x4u));
/* 8d89dc: mov edx, dword ptr [eax + edi] */
  edx = R32((uint32_t)(eax + edi));
/* 8d89df: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d89e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d89e2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d89e3: mov ecx, esi */
  ecx = esi;
/* 8d89e5: call 0x6cae8e */
  esp -= 4; W32(esp, 0x8d89eau); SPILL(); f_6cae8e(); if (g_unwind) return; RELOAD();
/* 8d89ea: mov ecx, dword ptr [esi + 0x130c] */
  ecx = R32((uint32_t)(esi + 0x130cu));
/* 8d89f0: mov edx, dword ptr [edi + ecx + 4] */
  edx = R32((uint32_t)(edi + ecx + 0x4u));
/* 8d89f4: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 8d89f7: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8d89fa: lea eax, [edi + ecx] */
  eax = (uint32_t)(edi + ecx);
/* 8d89fd: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8d8a00: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8d8a02: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 8d8a03: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8a04: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8d8a05: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 8d8a08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d8a09: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8d8a0c: mov ecx, esi */
  ecx = esi;
/* 8d8a0e: call 0x6cae8e */
  esp -= 4; W32(esp, 0x8d8a13u); SPILL(); f_6cae8e(); if (g_unwind) return; RELOAD();
/* 8d8a13: mov edx, dword ptr [esi + 0x130c] */
  edx = R32((uint32_t)(esi + 0x130cu));
/* 8d8a19: movzx ecx, ax */
  ecx = (uint32_t)((eax & 0xffffu));
/* 8d8a1c: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8d8a1f: mov ecx, dword ptr [edi + edx + 4] */
  ecx = R32((uint32_t)(edi + edx + 0x4u));
/* 8d8a23: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8d8a26: lea eax, [edi + edx] */
  eax = (uint32_t)(edi + edx);
/* 8d8a29: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8d8a2b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8d8a2c: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8d8a2f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d8a30: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8a31: mov ecx, esi */
  ecx = esi;
/* 8d8a33: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8d8a36: call 0x6cae8e */
  esp -= 4; W32(esp, 0x8d8a3bu); SPILL(); f_6cae8e(); if (g_unwind) return; RELOAD();
/* 8d8a3b: mov ecx, dword ptr [esi + 0x130c] */
  ecx = R32((uint32_t)(esi + 0x130cu));
/* 8d8a41: mov edx, dword ptr [edi + ecx + 4] */
  edx = R32((uint32_t)(edi + ecx + 0x4u));
/* 8d8a45: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 8d8a48: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8d8a4b: lea eax, [edi + ecx] */
  eax = (uint32_t)(edi + ecx);
/* 8d8a4e: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8d8a51: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8d8a53: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 8d8a54: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8a55: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8d8a58: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d8a5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d8a5c: mov ecx, esi */
  ecx = esi;
/* 8d8a5e: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8d8a61: call 0x6cae8e */
  esp -= 4; W32(esp, 0x8d8a66u); SPILL(); f_6cae8e(); if (g_unwind) return; RELOAD();
/* 8d8a66: mov edx, dword ptr [esi + 0x130c] */
  edx = R32((uint32_t)(esi + 0x130cu));
/* 8d8a6c: movzx ecx, ax */
  ecx = (uint32_t)((eax & 0xffffu));
/* 8d8a6f: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8d8a72: mov ecx, dword ptr [edi + edx + 4] */
  ecx = R32((uint32_t)(edi + edx + 0x4u));
/* 8d8a76: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8d8a79: lea eax, [edi + edx] */
  eax = (uint32_t)(edi + edx);
/* 8d8a7c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8d8a7e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d8a7f: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8d8a82: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 8d8a83: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8a84: mov ecx, esi */
  ecx = esi;
/* 8d8a86: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8d8a89: call 0x6cae8e */
  esp -= 4; W32(esp, 0x8d8a8eu); SPILL(); f_6cae8e(); if (g_unwind) return; RELOAD();
/* 8d8a8e: mov ecx, dword ptr [esi + 0x130c] */
  ecx = R32((uint32_t)(esi + 0x130cu));
/* 8d8a94: mov edx, dword ptr [edi + ecx + 4] */
  edx = R32((uint32_t)(edi + ecx + 0x4u));
/* 8d8a98: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 8d8a9b: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8d8a9e: lea eax, [edi + ecx] */
  eax = (uint32_t)(edi + ecx);
/* 8d8aa1: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8d8aa4: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8d8aa6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8aa7: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d8aaa: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8d8aad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d8aae: mov ecx, esi */
  ecx = esi;
/* 8d8ab0: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8d8ab3: call 0x6cae8e */
  esp -= 4; W32(esp, 0x8d8ab8u); SPILL(); f_6cae8e(); if (g_unwind) return; RELOAD();
/* 8d8ab8: mov edx, dword ptr [esi + 0x130c] */
  edx = R32((uint32_t)(esi + 0x130cu));
/* 8d8abe: movzx ecx, ax */
  ecx = (uint32_t)((eax & 0xffffu));
/* 8d8ac1: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8d8ac4: mov ecx, dword ptr [edi + edx + 4] */
  ecx = R32((uint32_t)(edi + edx + 0x4u));
/* 8d8ac8: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8d8acb: lea eax, [edi + edx] */
  eax = (uint32_t)(edi + edx);
/* 8d8ace: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8d8ad0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8d8ad1: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8d8ad4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d8ad5: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 8d8ad6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8ad7: mov ecx, esi */
  ecx = esi;
/* 8d8ad9: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8d8adc: call 0x6cae8e */
  esp -= 4; W32(esp, 0x8d8ae1u); SPILL(); f_6cae8e(); if (g_unwind) return; RELOAD();
/* 8d8ae1: mov ecx, dword ptr [esi + 0x130c] */
  ecx = R32((uint32_t)(esi + 0x130cu));
/* 8d8ae7: mov edx, dword ptr [edi + ecx + 4] */
  edx = R32((uint32_t)(edi + ecx + 0x4u));
/* 8d8aeb: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 8d8aee: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8d8af1: lea eax, [edi + ecx] */
  eax = (uint32_t)(edi + ecx);
/* 8d8af4: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8d8af7: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8d8af9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8d8afa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8afb: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8d8afe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d8aff: mov ecx, esi */
  ecx = esi;
/* 8d8b01: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8d8b04: call 0x6cae8e */
  esp -= 4; W32(esp, 0x8d8b09u); SPILL(); f_6cae8e(); if (g_unwind) return; RELOAD();
/* 8d8b09: mov edx, dword ptr [esi + 0x130c] */
  edx = R32((uint32_t)(esi + 0x130cu));
/* 8d8b0f: movzx ecx, ax */
  ecx = (uint32_t)((eax & 0xffffu));
/* 8d8b12: mov eax, dword ptr [edi + edx + 4] */
  eax = R32((uint32_t)(edi + edx + 0x4u));
/* 8d8b16: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8d8b19: mov ecx, dword ptr [edi + edx] */
  ecx = R32((uint32_t)(edi + edx));
/* 8d8b1c: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8d8b1f: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8d8b21: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d8b22: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d8b25: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8d8b28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d8b29: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d8b2a: mov ecx, esi */
  ecx = esi;
/* 8d8b2c: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8d8b2f: call 0x6cae8e */
  esp -= 4; W32(esp, 0x8d8b34u); SPILL(); f_6cae8e(); if (g_unwind) return; RELOAD();
/* 8d8b34: movzx edx, ax */
  edx = (uint32_t)((eax & 0xffffu));
/* 8d8b37: mov eax, dword ptr [0xb18ffc] */
  eax = R32((uint32_t)(0xb18ffcu));
/* 8d8b3c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d8b3e: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8d8b41: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8d8b44: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8d8b47: fmul dword ptr [0xa1d30c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1d30cu)));
/* 8d8b4d: je 0x8d8b5c */
  if (zf) goto L_8d8b5c;
L_8d8b4f: /* 8d8b4f: mov eax, dword ptr [0xb19048] */
  eax = R32((uint32_t)(0xb19048u));
/* 8d8b54: mov ecx, dword ptr [eax + 0x5c] */
  ecx = R32((uint32_t)(eax + 0x5cu));
/* 8d8b57: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8d8b5a: jmp 0x8d8b65 */
  goto L_8d8b65;
L_8d8b5c: /* 8d8b5c: mov edx, dword ptr [0xb1907c] */
  edx = R32((uint32_t)(0xb1907cu));
/* 8d8b62: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
L_8d8b65: /* 8d8b65: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8d8b68: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8d8b6a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d8b6c: mov ecx, 0xce9ea8 */
  ecx = 0xce9ea8u;
/* 8d8b71: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 8d8b77: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8d8b79: fsub dword ptr [ebp - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8d8b7c: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 8d8b7e: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8d8b81: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8d8b84: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8d8b8au); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8d8b8a: mov ecx, dword ptr [0xce9ea8] */
  ecx = R32((uint32_t)(0xce9ea8u));
/* 8d8b90: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8d8b93: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d8b95: je 0x8d8b9c */
  if (zf) goto L_8d8b9c;
L_8d8b97: /* 8d8b97: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d8b9a: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
L_8d8b9c: /* 8d8b9c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8d8b9d: jmp 0x8d89c0 */
  goto L_8d89c0;
L_8d8ba2: /* 8d8ba2: xor edi, edi */
  edi = 0;
L_8d8ba4: /* 8d8ba4: cmp edi, dword ptr [esi + 0x1310] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1310u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d8baa: jge 0x8d8bd8 */
  if ((sf == of)) goto L_8d8bd8;
L_8d8bac: /* 8d8bac: mov edx, dword ptr [0xce9ea8] */
  edx = R32((uint32_t)(0xce9ea8u));
/* 8d8bb2: mov ecx, dword ptr [esi + 0x130c] */
  ecx = R32((uint32_t)(esi + 0x130cu));
/* 8d8bb8: fld dword ptr [edx + edi*4] */
  { double v = F32((uint32_t)(edx + edi*4)); FPUSH(v); }
/* 8d8bbb: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* 8d8bbe: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8d8bc1: call 0x99c958 */
  esp -= 4; W32(esp, 0x8d8bc6u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8d8bc6: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8d8bc8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d8bc9: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 8d8bcc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d8bcd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d8bce: mov ecx, esi */
  ecx = esi;
/* 8d8bd0: call 0x6cce5f */
  esp -= 4; W32(esp, 0x8d8bd5u); SPILL(); f_6cce5f(); if (g_unwind) return; RELOAD();
/* 8d8bd5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8d8bd6: jmp 0x8d8ba4 */
  goto L_8d8ba4;
L_8d8bd8: /* 8d8bd8: mov ecx, dword ptr [0xce9eac] */
  ecx = R32((uint32_t)(0xce9eacu));
/* 8d8bde: xor eax, eax */
  eax = 0;
L_8d8be0: /* 8d8be0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d8be2: jge 0x8d8be7 */
  if ((sf == of)) goto L_8d8be7;
L_8d8be4: /* 8d8be4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d8be5: jmp 0x8d8be0 */
  goto L_8d8be0;
L_8d8be7: /* 8d8be7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d8be9: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8d8beb: mov ecx, 0xce9ea8 */
  ecx = 0xce9ea8u;
/* 8d8bf0: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8d8bf6u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8d8bf6: mov ecx, esi */
  ecx = esi;
/* 8d8bf8: call 0x6c6339 */
  esp -= 4; W32(esp, 0x8d8bfdu); SPILL(); f_6c6339(); if (g_unwind) return; RELOAD();
/* 8d8bfd: mov ecx, 0xb18ff8 */
  ecx = 0xb18ff8u;
/* 8d8c02: call 0x6c92c8 */
  esp -= 4; W32(esp, 0x8d8c07u); SPILL(); f_6c92c8(); if (g_unwind) return; RELOAD();
L_8d8c07: /* 8d8c07: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d8c0a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d8c11: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d8c12: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d8c13: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d8c14: mov esp, ebp */
  esp = ebp;
/* 8d8c16: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d8c17: ret 4 */
  esp += 8; SPILL(); return;
L_8d8c1a: /* 8d8c1a: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 8d8c1d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8c1e: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 8d8c21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d8c22: call 0x6cad71 */
  esp -= 4; W32(esp, 0x8d8c27u); SPILL(); f_6cad71(); if (g_unwind) return; RELOAD();
/* 8d8c27: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8d8c29: je 0x8d8c07 */
  if (zf) goto L_8d8c07;
L_8d8c2b: /* 8d8c2b: test byte ptr [0xce9eb8], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xce9eb8u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d8c32: jne 0x8d8c5b */
  if (!zf) goto L_8d8c5b;
L_8d8c34: /* 8d8c34: or dword ptr [0xce9eb8], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xce9eb8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xce9eb8u), r);
  }
/* 8d8c3b: mov ecx, 0xce9e98 */
  ecx = 0xce9e98u;
/* 8d8c40: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8d8c44: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8d8c4au); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8d8c4a: push 0x9f2080 */
  { uint32_t v = 0x9f2080u; esp -= 4; W32(esp, v); }
/* 8d8c4f: call 0x99cbec */
  esp -= 4; W32(esp, 0x8d8c54u); SPILL(); f_99cbec(); if (g_unwind) return; RELOAD();
/* 8d8c54: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d8c57: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_8d8c5b: /* 8d8c5b: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d8c5e: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d8c61: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 8d8c68: jmp 0x8d8c70 */
  goto L_8d8c70;
L_8d8c70: /* 8d8c70: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d8c73: cmp ecx, dword ptr [edi + 0x1310] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1310u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d8c79: jge 0x8d8e59 */
  if ((sf == of)) goto L_8d8e59;
L_8d8c7f: /* 8d8c7f: mov eax, ecx */
  eax = ecx;
/* 8d8c81: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 8d8c84: mov eax, dword ptr [edi + 0x130c] */
  eax = R32((uint32_t)(edi + 0x130cu));
/* 8d8c8a: mov ecx, dword ptr [eax + edx*4 + 4] */
  ecx = R32((uint32_t)(eax + edx*4 + 0x4u));
/* 8d8c8e: lea esi, [eax + edx*4] */
  esi = (uint32_t)(eax + edx*4);
/* 8d8c91: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8d8c93: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d8c94: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d8c96: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d8c97: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8c98: mov ecx, edi */
  ecx = edi;
/* 8d8c9a: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8d8c9fu); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8d8c9f: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8d8ca2: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8d8ca4: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 8d8ca7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d8ca8: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8d8cab: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8d8cac: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8d8caf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d8cb1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d8cb2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8d8cb3: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 8d8cb6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8cb7: mov ecx, edi */
  ecx = edi;
/* 8d8cb9: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8d8cbc: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8d8cc1u); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8d8cc1: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8d8cc4: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8d8cc6: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 8d8cc9: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8d8ccc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d8ccd: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8d8cd0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d8cd2: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8d8cd3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d8cd4: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8d8cd7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8cd8: mov ecx, edi */
  ecx = edi;
/* 8d8cda: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8d8cdd: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8d8ce2u); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8d8ce2: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8d8ce5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8d8ce7: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 8d8cea: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8d8ced: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d8cee: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8d8cf1: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8d8cf2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d8cf4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d8cf5: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8d8cf8: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 8d8cf9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8cfa: mov ecx, edi */
  ecx = edi;
/* 8d8cfc: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8d8cff: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8d8d04u); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8d8d04: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8d8d07: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8d8d09: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 8d8d0c: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8d8d0f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d8d10: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8d8d13: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d8d15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d8d16: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8d8d17: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8d8d1a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8d1b: mov ecx, edi */
  ecx = edi;
/* 8d8d1d: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8d8d20: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8d8d25u); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8d8d25: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8d8d28: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8d8d2a: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 8d8d2d: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8d8d30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d8d31: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8d8d34: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d8d36: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d8d37: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 8d8d38: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8d8d3b: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8d8d3e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8d3f: mov ecx, edi */
  ecx = edi;
/* 8d8d41: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8d8d46u); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8d8d46: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8d8d49: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8d8d4b: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 8d8d4e: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8d8d51: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d8d52: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8d8d55: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8d8d56: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d8d58: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d8d59: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8d8d5c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8d8d5d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8d5e: mov ecx, edi */
  ecx = edi;
/* 8d8d60: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8d8d63: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8d8d68u); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8d8d68: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8d8d6b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8d8d6d: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 8d8d70: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8d8d73: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d8d74: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8d8d77: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d8d79: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8d8d7a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d8d7b: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8d8d7e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8d7f: mov ecx, edi */
  ecx = edi;
/* 8d8d81: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8d8d84: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8d8d89u); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8d8d89: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8d8d8c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8d8d8e: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 8d8d91: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8d8d94: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d8d95: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8d8d98: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8d8d99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d8d9b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d8d9c: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8d8d9f: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 8d8da0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8da1: mov ecx, edi */
  ecx = edi;
/* 8d8da3: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8d8da6: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8d8dabu); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8d8dab: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 8d8dae: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8d8db1: mov eax, dword ptr [0xb18ffc] */
  eax = R32((uint32_t)(0xb18ffcu));
/* 8d8db6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d8db8: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8d8dbb: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8d8dbe: fmul dword ptr [0xa1d30c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1d30cu)));
/* 8d8dc4: je 0x8d8dd4 */
  if (zf) goto L_8d8dd4;
L_8d8dc6: /* 8d8dc6: mov ecx, dword ptr [0xb19048] */
  ecx = R32((uint32_t)(0xb19048u));
/* 8d8dcc: mov edx, dword ptr [ecx + 0x5c] */
  edx = R32((uint32_t)(ecx + 0x5cu));
/* 8d8dcf: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8d8dd2: jmp 0x8d8ddc */
  goto L_8d8ddc;
L_8d8dd4: /* 8d8dd4: mov eax, dword ptr [0xb1907c] */
  eax = R32((uint32_t)(0xb1907cu));
/* 8d8dd9: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
L_8d8ddc: /* 8d8ddc: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8d8ddf: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 8d8de5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8d8de7: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8d8dea: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 8d8dec: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8d8def: call 0x99c958 */
  esp -= 4; W32(esp, 0x8d8df4u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8d8df4: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8d8df7: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8d8dfa: call 0x99c958 */
  esp -= 4; W32(esp, 0x8d8dffu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8d8dff: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d8e04: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8d8e07: jle 0x8d8e10 */
  if ((zf || sf != of)) goto L_8d8e10;
L_8d8e09: /* 8d8e09: mov dword ptr [ebp - 0x20], 0xff */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xffu);
L_8d8e10: /* 8d8e10: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8d8e13: call 0x99c958 */
  esp -= 4; W32(esp, 0x8d8e18u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8d8e18: xor ecx, ecx */
  ecx = 0;
/* 8d8e1a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8d8e1c: setl cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* 8d8e1f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d8e21: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d8e23: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8d8e24: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8d8e26: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8d8e29: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8d8e2c: mov ecx, 0xce9e98 */
  ecx = 0xce9e98u;
/* 8d8e31: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8d8e34: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8d8e3au); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8d8e3a: mov edx, dword ptr [0xce9e98] */
  edx = R32((uint32_t)(0xce9e98u));
/* 8d8e40: lea esi, [eax + edx] */
  esi = (uint32_t)(eax + edx);
/* 8d8e43: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d8e45: je 0x8d8e51 */
  if (zf) goto L_8d8e51;
L_8d8e47: /* 8d8e47: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8d8e4a: call 0x99c958 */
  esp -= 4; W32(esp, 0x8d8e4fu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8d8e4f: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
L_8d8e51: /* 8d8e51: inc dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8d8e54: jmp 0x8d8c70 */
  goto L_8d8c70;
L_8d8e59: /* 8d8e59: xor esi, esi */
  esi = 0;
/* 8d8e5b: jmp 0x8d8e60 */
  goto L_8d8e60;
L_8d8e60: /* 8d8e60: cmp esi, dword ptr [edi + 0x1310] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1310u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d8e66: jge 0x8d8ea9 */
  if ((sf == of)) goto L_8d8ea9;
L_8d8e68: /* 8d8e68: mov ecx, dword ptr [edi + 0x130c] */
  ecx = R32((uint32_t)(edi + 0x130cu));
/* 8d8e6e: mov edx, dword ptr [0xb1906c] */
  edx = R32((uint32_t)(0xb1906cu));
/* 8d8e74: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8e75: lea eax, [esi + esi*4] */
  eax = (uint32_t)(esi + esi*4);
/* 8d8e78: fild dword ptr [ecx + eax*4 + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + eax*4 + 0x4u)); FPUSH(v); }
/* 8d8e7c: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8d8e7f: mov ecx, dword ptr [0xce9e98] */
  ecx = R32((uint32_t)(0xce9e98u));
/* 8d8e85: xor edx, edx */
  edx = 0;
/* 8d8e87: mov dl, byte ptr [ecx + esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + esi))) & 0xffu);
/* 8d8e8a: mov ecx, dword ptr [0xb19068] */
  ecx = R32((uint32_t)(0xb19068u));
/* 8d8e90: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8d8e91: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8e92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d8e93: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d8e96: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 8d8e9a: mov ecx, edi */
  ecx = edi;
/* 8d8e9c: fild dword ptr [eax] */
  { double v = (double)(int32_t)R32((uint32_t)(eax)); FPUSH(v); }
/* 8d8e9e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8d8ea1: call 0x6c2c7f */
  esp -= 4; W32(esp, 0x8d8ea6u); SPILL(); f_6c2c7f(); if (g_unwind) return; RELOAD();
/* 8d8ea6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8d8ea7: jmp 0x8d8e60 */
  goto L_8d8e60;
L_8d8ea9: /* 8d8ea9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d8eab: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d8ead: mov ecx, 0xce9e98 */
  ecx = 0xce9e98u;
/* 8d8eb2: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8d8eb8u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8d8eb8: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d8ebb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d8ebc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d8ebd: call 0x6c772a */
  esp -= 4; W32(esp, 0x8d8ec2u); SPILL(); f_6c772a(); if (g_unwind) return; RELOAD();
/* 8d8ec2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d8ec5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d8ec6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d8ec7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d8ece: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d8ecf: mov esp, ebp */
  esp = ebp;
/* 8d8ed1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d8ed2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8d89b7(void) {
  LOAD_REGS();
L_8d89b7: /* 8d89b7: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 8d89be: mov edi, edi */
  edi = edi;
L_8d89c0: /* 8d89c0: cmp ebx, dword ptr [esi + 0x1310] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1310u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d89c6: jge 0x8d8ba2 */
  if ((sf == of)) goto L_8d8ba2;
L_8d89cc: /* 8d89cc: mov eax, dword ptr [esi + 0x130c] */
  eax = R32((uint32_t)(esi + 0x130cu));
/* 8d89d2: lea edi, [ebx + ebx*4] */
  edi = (uint32_t)(ebx + ebx*4);
/* 8d89d5: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8d89d8: mov ecx, dword ptr [eax + edi + 4] */
  ecx = R32((uint32_t)(eax + edi + 0x4u));
/* 8d89dc: mov edx, dword ptr [eax + edi] */
  edx = R32((uint32_t)(eax + edi));
/* 8d89df: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d89e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d89e2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d89e3: mov ecx, esi */
  ecx = esi;
/* 8d89e5: call 0x6cae8e */
  esp -= 4; W32(esp, 0x8d89eau); SPILL(); f_6cae8e(); if (g_unwind) return; RELOAD();
/* 8d89ea: mov ecx, dword ptr [esi + 0x130c] */
  ecx = R32((uint32_t)(esi + 0x130cu));
/* 8d89f0: mov edx, dword ptr [edi + ecx + 4] */
  edx = R32((uint32_t)(edi + ecx + 0x4u));
/* 8d89f4: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 8d89f7: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8d89fa: lea eax, [edi + ecx] */
  eax = (uint32_t)(edi + ecx);
/* 8d89fd: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8d8a00: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8d8a02: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 8d8a03: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8a04: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8d8a05: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 8d8a08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d8a09: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8d8a0c: mov ecx, esi */
  ecx = esi;
/* 8d8a0e: call 0x6cae8e */
  esp -= 4; W32(esp, 0x8d8a13u); SPILL(); f_6cae8e(); if (g_unwind) return; RELOAD();
/* 8d8a13: mov edx, dword ptr [esi + 0x130c] */
  edx = R32((uint32_t)(esi + 0x130cu));
/* 8d8a19: movzx ecx, ax */
  ecx = (uint32_t)((eax & 0xffffu));
/* 8d8a1c: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8d8a1f: mov ecx, dword ptr [edi + edx + 4] */
  ecx = R32((uint32_t)(edi + edx + 0x4u));
/* 8d8a23: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8d8a26: lea eax, [edi + edx] */
  eax = (uint32_t)(edi + edx);
/* 8d8a29: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8d8a2b: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8d8a2c: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8d8a2f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d8a30: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8a31: mov ecx, esi */
  ecx = esi;
/* 8d8a33: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8d8a36: call 0x6cae8e */
  esp -= 4; W32(esp, 0x8d8a3bu); SPILL(); f_6cae8e(); if (g_unwind) return; RELOAD();
/* 8d8a3b: mov ecx, dword ptr [esi + 0x130c] */
  ecx = R32((uint32_t)(esi + 0x130cu));
/* 8d8a41: mov edx, dword ptr [edi + ecx + 4] */
  edx = R32((uint32_t)(edi + ecx + 0x4u));
/* 8d8a45: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 8d8a48: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8d8a4b: lea eax, [edi + ecx] */
  eax = (uint32_t)(edi + ecx);
/* 8d8a4e: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8d8a51: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8d8a53: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 8d8a54: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8a55: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8d8a58: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d8a5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d8a5c: mov ecx, esi */
  ecx = esi;
/* 8d8a5e: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8d8a61: call 0x6cae8e */
  esp -= 4; W32(esp, 0x8d8a66u); SPILL(); f_6cae8e(); if (g_unwind) return; RELOAD();
/* 8d8a66: mov edx, dword ptr [esi + 0x130c] */
  edx = R32((uint32_t)(esi + 0x130cu));
/* 8d8a6c: movzx ecx, ax */
  ecx = (uint32_t)((eax & 0xffffu));
/* 8d8a6f: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8d8a72: mov ecx, dword ptr [edi + edx + 4] */
  ecx = R32((uint32_t)(edi + edx + 0x4u));
/* 8d8a76: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8d8a79: lea eax, [edi + edx] */
  eax = (uint32_t)(edi + edx);
/* 8d8a7c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8d8a7e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d8a7f: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8d8a82: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 8d8a83: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8a84: mov ecx, esi */
  ecx = esi;
/* 8d8a86: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8d8a89: call 0x6cae8e */
  esp -= 4; W32(esp, 0x8d8a8eu); SPILL(); f_6cae8e(); if (g_unwind) return; RELOAD();
/* 8d8a8e: mov ecx, dword ptr [esi + 0x130c] */
  ecx = R32((uint32_t)(esi + 0x130cu));
/* 8d8a94: mov edx, dword ptr [edi + ecx + 4] */
  edx = R32((uint32_t)(edi + ecx + 0x4u));
/* 8d8a98: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 8d8a9b: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8d8a9e: lea eax, [edi + ecx] */
  eax = (uint32_t)(edi + ecx);
/* 8d8aa1: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8d8aa4: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8d8aa6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8aa7: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d8aaa: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8d8aad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d8aae: mov ecx, esi */
  ecx = esi;
/* 8d8ab0: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8d8ab3: call 0x6cae8e */
  esp -= 4; W32(esp, 0x8d8ab8u); SPILL(); f_6cae8e(); if (g_unwind) return; RELOAD();
/* 8d8ab8: mov edx, dword ptr [esi + 0x130c] */
  edx = R32((uint32_t)(esi + 0x130cu));
/* 8d8abe: movzx ecx, ax */
  ecx = (uint32_t)((eax & 0xffffu));
/* 8d8ac1: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8d8ac4: mov ecx, dword ptr [edi + edx + 4] */
  ecx = R32((uint32_t)(edi + edx + 0x4u));
/* 8d8ac8: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8d8acb: lea eax, [edi + edx] */
  eax = (uint32_t)(edi + edx);
/* 8d8ace: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8d8ad0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8d8ad1: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8d8ad4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d8ad5: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 8d8ad6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8ad7: mov ecx, esi */
  ecx = esi;
/* 8d8ad9: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8d8adc: call 0x6cae8e */
  esp -= 4; W32(esp, 0x8d8ae1u); SPILL(); f_6cae8e(); if (g_unwind) return; RELOAD();
/* 8d8ae1: mov ecx, dword ptr [esi + 0x130c] */
  ecx = R32((uint32_t)(esi + 0x130cu));
/* 8d8ae7: mov edx, dword ptr [edi + ecx + 4] */
  edx = R32((uint32_t)(edi + ecx + 0x4u));
/* 8d8aeb: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 8d8aee: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8d8af1: lea eax, [edi + ecx] */
  eax = (uint32_t)(edi + ecx);
/* 8d8af4: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8d8af7: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8d8af9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8d8afa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8afb: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8d8afe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d8aff: mov ecx, esi */
  ecx = esi;
/* 8d8b01: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8d8b04: call 0x6cae8e */
  esp -= 4; W32(esp, 0x8d8b09u); SPILL(); f_6cae8e(); if (g_unwind) return; RELOAD();
/* 8d8b09: mov edx, dword ptr [esi + 0x130c] */
  edx = R32((uint32_t)(esi + 0x130cu));
/* 8d8b0f: movzx ecx, ax */
  ecx = (uint32_t)((eax & 0xffffu));
/* 8d8b12: mov eax, dword ptr [edi + edx + 4] */
  eax = R32((uint32_t)(edi + edx + 0x4u));
/* 8d8b16: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8d8b19: mov ecx, dword ptr [edi + edx] */
  ecx = R32((uint32_t)(edi + edx));
/* 8d8b1c: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8d8b1f: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8d8b21: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d8b22: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d8b25: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8d8b28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d8b29: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d8b2a: mov ecx, esi */
  ecx = esi;
/* 8d8b2c: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8d8b2f: call 0x6cae8e */
  esp -= 4; W32(esp, 0x8d8b34u); SPILL(); f_6cae8e(); if (g_unwind) return; RELOAD();
/* 8d8b34: movzx edx, ax */
  edx = (uint32_t)((eax & 0xffffu));
/* 8d8b37: mov eax, dword ptr [0xb18ffc] */
  eax = R32((uint32_t)(0xb18ffcu));
/* 8d8b3c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d8b3e: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8d8b41: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8d8b44: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8d8b47: fmul dword ptr [0xa1d30c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1d30cu)));
/* 8d8b4d: je 0x8d8b5c */
  if (zf) goto L_8d8b5c;
L_8d8b4f: /* 8d8b4f: mov eax, dword ptr [0xb19048] */
  eax = R32((uint32_t)(0xb19048u));
/* 8d8b54: mov ecx, dword ptr [eax + 0x5c] */
  ecx = R32((uint32_t)(eax + 0x5cu));
/* 8d8b57: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8d8b5a: jmp 0x8d8b65 */
  goto L_8d8b65;
L_8d8b5c: /* 8d8b5c: mov edx, dword ptr [0xb1907c] */
  edx = R32((uint32_t)(0xb1907cu));
/* 8d8b62: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
L_8d8b65: /* 8d8b65: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8d8b68: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8d8b6a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d8b6c: mov ecx, 0xce9ea8 */
  ecx = 0xce9ea8u;
/* 8d8b71: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 8d8b77: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8d8b79: fsub dword ptr [ebp - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8d8b7c: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 8d8b7e: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8d8b81: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8d8b84: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8d8b8au); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8d8b8a: mov ecx, dword ptr [0xce9ea8] */
  ecx = R32((uint32_t)(0xce9ea8u));
/* 8d8b90: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8d8b93: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d8b95: je 0x8d8b9c */
  if (zf) goto L_8d8b9c;
L_8d8b97: /* 8d8b97: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d8b9a: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
L_8d8b9c: /* 8d8b9c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8d8b9d: jmp 0x8d89c0 */
  goto L_8d89c0;
L_8d8ba2: /* 8d8ba2: xor edi, edi */
  edi = 0;
L_8d8ba4: /* 8d8ba4: cmp edi, dword ptr [esi + 0x1310] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1310u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d8baa: jge 0x8d8bd8 */
  if ((sf == of)) goto L_8d8bd8;
L_8d8bac: /* 8d8bac: mov edx, dword ptr [0xce9ea8] */
  edx = R32((uint32_t)(0xce9ea8u));
/* 8d8bb2: mov ecx, dword ptr [esi + 0x130c] */
  ecx = R32((uint32_t)(esi + 0x130cu));
/* 8d8bb8: fld dword ptr [edx + edi*4] */
  { double v = F32((uint32_t)(edx + edi*4)); FPUSH(v); }
/* 8d8bbb: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* 8d8bbe: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8d8bc1: call 0x99c958 */
  esp -= 4; W32(esp, 0x8d8bc6u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8d8bc6: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8d8bc8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d8bc9: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 8d8bcc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d8bcd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d8bce: mov ecx, esi */
  ecx = esi;
/* 8d8bd0: call 0x6cce5f */
  esp -= 4; W32(esp, 0x8d8bd5u); SPILL(); f_6cce5f(); if (g_unwind) return; RELOAD();
/* 8d8bd5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8d8bd6: jmp 0x8d8ba4 */
  goto L_8d8ba4;
L_8d8bd8: /* 8d8bd8: mov ecx, dword ptr [0xce9eac] */
  ecx = R32((uint32_t)(0xce9eacu));
/* 8d8bde: xor eax, eax */
  eax = 0;
L_8d8be0: /* 8d8be0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d8be2: jge 0x8d8be7 */
  if ((sf == of)) goto L_8d8be7;
L_8d8be4: /* 8d8be4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d8be5: jmp 0x8d8be0 */
  goto L_8d8be0;
L_8d8be7: /* 8d8be7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d8be9: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8d8beb: mov ecx, 0xce9ea8 */
  ecx = 0xce9ea8u;
/* 8d8bf0: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8d8bf6u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8d8bf6: mov ecx, esi */
  ecx = esi;
/* 8d8bf8: call 0x6c6339 */
  esp -= 4; W32(esp, 0x8d8bfdu); SPILL(); f_6c6339(); if (g_unwind) return; RELOAD();
/* 8d8bfd: mov ecx, 0xb18ff8 */
  ecx = 0xb18ff8u;
/* 8d8c02: call 0x6c92c8 */
  esp -= 4; W32(esp, 0x8d8c07u); SPILL(); f_6c92c8(); if (g_unwind) return; RELOAD();
/* 8d8c07: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d8c0a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d8c11: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d8c12: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d8c13: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d8c14: mov esp, ebp */
  esp = ebp;
/* 8d8c16: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d8c17: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8d8c6a(void) {
  LOAD_REGS();
L_8d8c6a: /* 8d8c6a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8d8c70: /* 8d8c70: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d8c73: cmp ecx, dword ptr [edi + 0x1310] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1310u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d8c79: jge 0x8d8e59 */
  if ((sf == of)) goto L_8d8e59;
L_8d8c7f: /* 8d8c7f: mov eax, ecx */
  eax = ecx;
/* 8d8c81: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 8d8c84: mov eax, dword ptr [edi + 0x130c] */
  eax = R32((uint32_t)(edi + 0x130cu));
/* 8d8c8a: mov ecx, dword ptr [eax + edx*4 + 4] */
  ecx = R32((uint32_t)(eax + edx*4 + 0x4u));
/* 8d8c8e: lea esi, [eax + edx*4] */
  esi = (uint32_t)(eax + edx*4);
/* 8d8c91: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8d8c93: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d8c94: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d8c96: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d8c97: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8c98: mov ecx, edi */
  ecx = edi;
/* 8d8c9a: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8d8c9fu); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8d8c9f: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8d8ca2: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8d8ca4: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 8d8ca7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d8ca8: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8d8cab: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8d8cac: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8d8caf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d8cb1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d8cb2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8d8cb3: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 8d8cb6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8cb7: mov ecx, edi */
  ecx = edi;
/* 8d8cb9: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8d8cbc: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8d8cc1u); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8d8cc1: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8d8cc4: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8d8cc6: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 8d8cc9: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8d8ccc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d8ccd: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8d8cd0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d8cd2: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8d8cd3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d8cd4: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8d8cd7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8cd8: mov ecx, edi */
  ecx = edi;
/* 8d8cda: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8d8cdd: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8d8ce2u); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8d8ce2: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8d8ce5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8d8ce7: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 8d8cea: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8d8ced: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d8cee: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8d8cf1: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8d8cf2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d8cf4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d8cf5: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8d8cf8: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 8d8cf9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8cfa: mov ecx, edi */
  ecx = edi;
/* 8d8cfc: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8d8cff: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8d8d04u); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8d8d04: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8d8d07: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8d8d09: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 8d8d0c: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8d8d0f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d8d10: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8d8d13: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d8d15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d8d16: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8d8d17: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8d8d1a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8d1b: mov ecx, edi */
  ecx = edi;
/* 8d8d1d: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8d8d20: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8d8d25u); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8d8d25: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8d8d28: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8d8d2a: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 8d8d2d: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8d8d30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d8d31: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8d8d34: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d8d36: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d8d37: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 8d8d38: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8d8d3b: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8d8d3e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8d3f: mov ecx, edi */
  ecx = edi;
/* 8d8d41: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8d8d46u); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8d8d46: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8d8d49: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8d8d4b: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 8d8d4e: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8d8d51: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d8d52: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8d8d55: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8d8d56: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d8d58: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d8d59: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8d8d5c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8d8d5d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8d5e: mov ecx, edi */
  ecx = edi;
/* 8d8d60: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8d8d63: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8d8d68u); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8d8d68: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8d8d6b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8d8d6d: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 8d8d70: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8d8d73: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d8d74: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8d8d77: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d8d79: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8d8d7a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d8d7b: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8d8d7e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8d7f: mov ecx, edi */
  ecx = edi;
/* 8d8d81: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8d8d84: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8d8d89u); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8d8d89: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8d8d8c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8d8d8e: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 8d8d91: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8d8d94: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d8d95: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8d8d98: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8d8d99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d8d9b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d8d9c: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8d8d9f: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 8d8da0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8da1: mov ecx, edi */
  ecx = edi;
/* 8d8da3: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8d8da6: call 0x6c2a9a */
  esp -= 4; W32(esp, 0x8d8dabu); SPILL(); f_6c2a9a(); if (g_unwind) return; RELOAD();
/* 8d8dab: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 8d8dae: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8d8db1: mov eax, dword ptr [0xb18ffc] */
  eax = R32((uint32_t)(0xb18ffcu));
/* 8d8db6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d8db8: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8d8dbb: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8d8dbe: fmul dword ptr [0xa1d30c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1d30cu)));
/* 8d8dc4: je 0x8d8dd4 */
  if (zf) goto L_8d8dd4;
L_8d8dc6: /* 8d8dc6: mov ecx, dword ptr [0xb19048] */
  ecx = R32((uint32_t)(0xb19048u));
/* 8d8dcc: mov edx, dword ptr [ecx + 0x5c] */
  edx = R32((uint32_t)(ecx + 0x5cu));
/* 8d8dcf: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8d8dd2: jmp 0x8d8ddc */
  goto L_8d8ddc;
L_8d8dd4: /* 8d8dd4: mov eax, dword ptr [0xb1907c] */
  eax = R32((uint32_t)(0xb1907cu));
/* 8d8dd9: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
L_8d8ddc: /* 8d8ddc: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8d8ddf: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 8d8de5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8d8de7: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8d8dea: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 8d8dec: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8d8def: call 0x99c958 */
  esp -= 4; W32(esp, 0x8d8df4u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8d8df4: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8d8df7: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8d8dfa: call 0x99c958 */
  esp -= 4; W32(esp, 0x8d8dffu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8d8dff: cmp eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d8e04: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8d8e07: jle 0x8d8e10 */
  if ((zf || sf != of)) goto L_8d8e10;
L_8d8e09: /* 8d8e09: mov dword ptr [ebp - 0x20], 0xff */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xffu);
L_8d8e10: /* 8d8e10: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8d8e13: call 0x99c958 */
  esp -= 4; W32(esp, 0x8d8e18u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8d8e18: xor ecx, ecx */
  ecx = 0;
/* 8d8e1a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8d8e1c: setl cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* 8d8e1f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d8e21: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d8e23: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8d8e24: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8d8e26: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8d8e29: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8d8e2c: mov ecx, 0xce9e98 */
  ecx = 0xce9e98u;
/* 8d8e31: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8d8e34: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8d8e3au); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8d8e3a: mov edx, dword ptr [0xce9e98] */
  edx = R32((uint32_t)(0xce9e98u));
/* 8d8e40: lea esi, [eax + edx] */
  esi = (uint32_t)(eax + edx);
/* 8d8e43: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d8e45: je 0x8d8e51 */
  if (zf) goto L_8d8e51;
L_8d8e47: /* 8d8e47: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8d8e4a: call 0x99c958 */
  esp -= 4; W32(esp, 0x8d8e4fu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8d8e4f: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
L_8d8e51: /* 8d8e51: inc dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8d8e54: jmp 0x8d8c70 */
  goto L_8d8c70;
L_8d8e59: /* 8d8e59: xor esi, esi */
  esi = 0;
/* 8d8e5b: jmp 0x8d8e60 */
  goto L_8d8e60;
L_8d8e60: /* 8d8e60: cmp esi, dword ptr [edi + 0x1310] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1310u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d8e66: jge 0x8d8ea9 */
  if ((sf == of)) goto L_8d8ea9;
L_8d8e68: /* 8d8e68: mov ecx, dword ptr [edi + 0x130c] */
  ecx = R32((uint32_t)(edi + 0x130cu));
/* 8d8e6e: mov edx, dword ptr [0xb1906c] */
  edx = R32((uint32_t)(0xb1906cu));
/* 8d8e74: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8e75: lea eax, [esi + esi*4] */
  eax = (uint32_t)(esi + esi*4);
/* 8d8e78: fild dword ptr [ecx + eax*4 + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + eax*4 + 0x4u)); FPUSH(v); }
/* 8d8e7c: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8d8e7f: mov ecx, dword ptr [0xce9e98] */
  ecx = R32((uint32_t)(0xce9e98u));
/* 8d8e85: xor edx, edx */
  edx = 0;
/* 8d8e87: mov dl, byte ptr [ecx + esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + esi))) & 0xffu);
/* 8d8e8a: mov ecx, dword ptr [0xb19068] */
  ecx = R32((uint32_t)(0xb19068u));
/* 8d8e90: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8d8e91: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8e92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d8e93: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d8e96: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 8d8e9a: mov ecx, edi */
  ecx = edi;
/* 8d8e9c: fild dword ptr [eax] */
  { double v = (double)(int32_t)R32((uint32_t)(eax)); FPUSH(v); }
/* 8d8e9e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8d8ea1: call 0x6c2c7f */
  esp -= 4; W32(esp, 0x8d8ea6u); SPILL(); f_6c2c7f(); if (g_unwind) return; RELOAD();
/* 8d8ea6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8d8ea7: jmp 0x8d8e60 */
  goto L_8d8e60;
L_8d8ea9: /* 8d8ea9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d8eab: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d8ead: mov ecx, 0xce9e98 */
  ecx = 0xce9e98u;
/* 8d8eb2: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8d8eb8u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8d8eb8: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d8ebb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d8ebc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d8ebd: call 0x6c772a */
  esp -= 4; W32(esp, 0x8d8ec2u); SPILL(); f_6c772a(); if (g_unwind) return; RELOAD();
/* 8d8ec2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d8ec5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d8ec6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d8ec7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d8ece: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d8ecf: mov esp, ebp */
  esp = ebp;
/* 8d8ed1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d8ed2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8d8e5d(void) {
  LOAD_REGS();
L_8d8e5d: /* 8d8e5d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8d8e60: /* 8d8e60: cmp esi, dword ptr [edi + 0x1310] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1310u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d8e66: jge 0x8d8ea9 */
  if ((sf == of)) goto L_8d8ea9;
L_8d8e68: /* 8d8e68: mov ecx, dword ptr [edi + 0x130c] */
  ecx = R32((uint32_t)(edi + 0x130cu));
/* 8d8e6e: mov edx, dword ptr [0xb1906c] */
  edx = R32((uint32_t)(0xb1906cu));
/* 8d8e74: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8e75: lea eax, [esi + esi*4] */
  eax = (uint32_t)(esi + esi*4);
/* 8d8e78: fild dword ptr [ecx + eax*4 + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + eax*4 + 0x4u)); FPUSH(v); }
/* 8d8e7c: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8d8e7f: mov ecx, dword ptr [0xce9e98] */
  ecx = R32((uint32_t)(0xce9e98u));
/* 8d8e85: xor edx, edx */
  edx = 0;
/* 8d8e87: mov dl, byte ptr [ecx + esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + esi))) & 0xffu);
/* 8d8e8a: mov ecx, dword ptr [0xb19068] */
  ecx = R32((uint32_t)(0xb19068u));
/* 8d8e90: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8d8e91: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d8e92: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d8e93: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d8e96: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 8d8e9a: mov ecx, edi */
  ecx = edi;
/* 8d8e9c: fild dword ptr [eax] */
  { double v = (double)(int32_t)R32((uint32_t)(eax)); FPUSH(v); }
/* 8d8e9e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8d8ea1: call 0x6c2c7f */
  esp -= 4; W32(esp, 0x8d8ea6u); SPILL(); f_6c2c7f(); if (g_unwind) return; RELOAD();
/* 8d8ea6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8d8ea7: jmp 0x8d8e60 */
  goto L_8d8e60;
L_8d8ea9: /* 8d8ea9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d8eab: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8d8ead: mov ecx, 0xce9e98 */
  ecx = 0xce9e98u;
/* 8d8eb2: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8d8eb8u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8d8eb8: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d8ebb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d8ebc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d8ebd: call 0x6c772a */
  esp -= 4; W32(esp, 0x8d8ec2u); SPILL(); f_6c772a(); if (g_unwind) return; RELOAD();
/* 8d8ec2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d8ec5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d8ec6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d8ec7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d8ece: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d8ecf: mov esp, ebp */
  esp = ebp;
/* 8d8ed1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d8ed2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8d8ed5(void) {
  LOAD_REGS();
L_8d8ed5: /* 8d8ed5: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8d8ed8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d8edd: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8d8ee0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d8ee1: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 8d8ee4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d8ee9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d8ee9(); return;
}

void f_8d8ee9(void) {
  LOAD_REGS();
L_8d8ee9: /* 8d8ee9: push 0xa1d2c4 */
  { uint32_t v = 0xa1d2c4u; esp -= 4; W32(esp, v); }
/* 8d8eee: push 0xaed18c */
  { uint32_t v = 0xaed18cu; esp -= 4; W32(esp, v); }
/* 8d8ef3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d8ef9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d8ef9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d8efc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d8efe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d8f00: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d8f05u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8d8f05: guest_badaddr(0x8d8f05); return;
}

void f_8d9090(void) {
  LOAD_REGS();
L_8d9090: /* 8d9090: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d9091: mov esi, ecx */
  esi = ecx;
/* 8d9093: mov al, byte ptr [esi + 0x9d] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x9du))) & 0xffu);
/* 8d9099: cmp al, byte ptr [esi + 0x9c] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi + 0x9cu)));
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 8d909f: jae 0x8d90bf */
  if (!cf) goto L_8d90bf;
L_8d90a1: /* 8d90a1: inc byte ptr [esi + 0x9d] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x9du)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(esi + 0x9du), r);
  }
/* 8d90a7: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8d90a9: mov ecx, esi */
  ecx = esi;
/* 8d90ab: call dword ptr [edx + 0xb0] */
  { uint32_t t = R32((uint32_t)(edx + 0xb0u)); esp -= 4; W32(esp, 0x8d90b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d90b1: mov al, byte ptr [esi + 0x9d] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x9du))) & 0xffu);
/* 8d90b7: cmp al, byte ptr [esi + 0x9c] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(esi + 0x9cu)));
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 8d90bd: jb 0x8d90a1 */
  if (cf) goto L_8d90a1;
L_8d90bf: /* 8d90bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d90c0: ret  */
  esp += 4; SPILL(); return;
}

void f_8d90e0(void) {
  LOAD_REGS();
L_8d90e0: /* 8d90e0: mov eax, dword ptr [ecx + 0x98] */
  eax = R32((uint32_t)(ecx + 0x98u));
/* 8d90e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d90e8: jne 0x8d90f0 */
  if (!zf) goto L_8d90f0;
L_8d90ea: /* 8d90ea: mov dword ptr [ecx + 0x98], ecx */
  W32((uint32_t)(ecx + 0x98u), ecx);
L_8d90f0: /* 8d90f0: mov eax, dword ptr [ecx + 0x98] */
  eax = R32((uint32_t)(ecx + 0x98u));
/* 8d90f6: mov eax, dword ptr [eax + 0x94] */
  eax = R32((uint32_t)(eax + 0x94u));
/* 8d90fc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d90fe: mov dword ptr [ecx + 0x98], eax */
  W32((uint32_t)(ecx + 0x98u), eax);
/* 8d9104: jne 0x8d910c */
  if (!zf) goto L_8d910c;
L_8d9106: /* 8d9106: mov dword ptr [ecx + 0x98], ecx */
  W32((uint32_t)(ecx + 0x98u), ecx);
L_8d910c: /* 8d910c: ret  */
  esp += 4; SPILL(); return;
}

void f_8d9120(void) {
  LOAD_REGS();
L_8d9120: /* 8d9120: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d9121: mov ebp, esp */
  ebp = esp;
/* 8d9123: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d9125: push 0x9d8570 */
  { uint32_t v = 0x9d8570u; esp -= 4; W32(esp, v); }
/* 8d912a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d9130: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d9131: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d9138: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d913b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d913c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d913d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d913e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d9141: mov esi, ecx */
  esi = ecx;
/* 8d9143: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8d914a: call dword ptr [0xcfa214] */
  esp -= 4; W32(esp, 0x8d9150u); SPILL(); f_4e1d11(); if (g_unwind) return; /* Core!?PostEditChange@UObject@@UAEXXZ */ RELOAD();
/* 8d9150: mov eax, dword ptr [esi + 0x7c] */
  eax = R32((uint32_t)(esi + 0x7cu));
/* 8d9153: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d9156: or eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 8d915b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d915c: mov dword ptr [esi + 0x7c], eax */
  W32((uint32_t)(esi + 0x7cu), eax);
/* 8d915f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d9160: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d9167: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d9168: mov esp, ebp */
  esp = ebp;
/* 8d916a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d916b: ret  */
  esp += 4; SPILL(); return;
}

void f_8d916c(void) {
  LOAD_REGS();
L_8d916c: /* 8d916c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d916f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d9174: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8d9177: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d9178: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8d917b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d9180u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d9180(); return;
}

void f_8d9180(void) {
  LOAD_REGS();
L_8d9180: /* 8d9180: push 0xa1d310 */
  { uint32_t v = 0xa1d310u; esp -= 4; W32(esp, v); }
/* 8d9185: push 0xaed52c */
  { uint32_t v = 0xaed52cu; esp -= 4; W32(esp, v); }
/* 8d918a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d9190u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d9190: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d9193: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d9195: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d9197: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d919cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8d919c: guest_badaddr(0x8d919c); return;
}

void f_8d91c0(void) {
  LOAD_REGS();
L_8d91c0: /* 8d91c0: ret  */
  esp += 4; SPILL(); return;
}

void f_8d91e0(void) {
  LOAD_REGS();
L_8d91e0: /* 8d91e0: ret  */
  esp += 4; SPILL(); return;
}

void f_8d9200(void) {
  LOAD_REGS();
L_8d9200: /* 8d9200: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8d9203: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 8d9206: ret  */
  esp += 4; SPILL(); return;
}

void f_8d9220(void) {
  LOAD_REGS();
L_8d9220: /* 8d9220: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 8d9223: mov dl, byte ptr [eax + 0x7c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x7cu))) & 0xffu);
/* 8d9226: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 8d9228: jns 0x8d9234 */
  if (!sf) goto L_8d9234;
L_8d922a: /* 8d922a: inc dword ptr [ecx + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx + 0x10u), r);
  }
/* 8d922d: and dword ptr [eax + 0x7c], 0xffffff7f */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x7cu))); uint32_t b = (uint32_t)(0xffffff7fu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x7cu), r);
  }
L_8d9234: /* 8d9234: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 8d9237: ret  */
  esp += 4; SPILL(); return;
}

void f_8d9250(void) {
  LOAD_REGS();
L_8d9250: /* 8d9250: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 8d9253: mov eax, dword ptr [eax + 0x40] */
  eax = R32((uint32_t)(eax + 0x40u));
/* 8d9256: ret  */
  esp += 4; SPILL(); return;
}

void f_8d9270(void) {
  LOAD_REGS();
L_8d9270: /* 8d9270: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 8d9273: mov eax, dword ptr [eax + 0x44] */
  eax = R32((uint32_t)(eax + 0x44u));
/* 8d9276: ret  */
  esp += 4; SPILL(); return;
}

void f_8d9290(void) {
  LOAD_REGS();
L_8d9290: /* 8d9290: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 8d9293: mov eax, dword ptr [eax + 0xb0] */
  eax = R32((uint32_t)(eax + 0xb0u));
/* 8d9299: ret  */
  esp += 4; SPILL(); return;
}

void f_8d92b0(void) {
  LOAD_REGS();
L_8d92b0: /* 8d92b0: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 8d92b3: movzx eax, byte ptr [eax + 0x38] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x38u)));
/* 8d92b7: ret  */
  esp += 4; SPILL(); return;
}

void f_8d92d0(void) {
  LOAD_REGS();
L_8d92d0: /* 8d92d0: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 8d92d3: movzx eax, byte ptr [eax + 0x39] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x39u)));
/* 8d92d7: ret  */
  esp += 4; SPILL(); return;
}

void f_8d92f0(void) {
  LOAD_REGS();
L_8d92f0: /* 8d92f0: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 8d92f3: movzx eax, byte ptr [eax + 0x3a] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x3au)));
/* 8d92f7: ret  */
  esp += 4; SPILL(); return;
}

void f_8d9310(void) {
  LOAD_REGS();
L_8d9310: /* 8d9310: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 8d9313: ret  */
  esp += 4; SPILL(); return;
}

void f_8d9330(void) {
  LOAD_REGS();
L_8d9330: /* 8d9330: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 8d9333: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 8d9336: ret  */
  esp += 4; SPILL(); return;
}

void f_8d9350(void) {
  LOAD_REGS();
L_8d9350: /* 8d9350: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8d9353: mov dl, byte ptr [eax + 0x7c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x7cu))) & 0xffu);
/* 8d9356: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d9357: mov bl, 0x80 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x80u) & 0xffu);
/* 8d9359: test bl, dl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d935b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d935c: mov esi, 0xffffff7f */
  esi = 0xffffff7fu;
/* 8d9361: je 0x8d9369 */
  if (zf) goto L_8d9369;
L_8d9363: /* 8d9363: inc dword ptr [ecx + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx + 0x10u), r);
  }
/* 8d9366: and dword ptr [eax + 0x7c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x7cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x7cu), r);
  }
L_8d9369: /* 8d9369: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8d936c: mov edx, dword ptr [eax + 0xc8] */
  edx = R32((uint32_t)(eax + 0xc8u));
/* 8d9372: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d9374: je 0x8d9387 */
  if (zf) goto L_8d9387;
L_8d9376: /* 8d9376: test byte ptr [edx + 0x7c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x7cu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d9379: je 0x8d9387 */
  if (zf) goto L_8d9387;
L_8d937b: /* 8d937b: inc dword ptr [ecx + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx + 0x10u), r);
  }
/* 8d937e: mov eax, dword ptr [eax + 0xc8] */
  eax = R32((uint32_t)(eax + 0xc8u));
/* 8d9384: and dword ptr [eax + 0x7c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x7cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x7cu), r);
  }
L_8d9387: /* 8d9387: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8d938a: mov edx, dword ptr [eax + 0xcc] */
  edx = R32((uint32_t)(eax + 0xccu));
/* 8d9390: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d9392: je 0x8d93a5 */
  if (zf) goto L_8d93a5;
L_8d9394: /* 8d9394: test byte ptr [edx + 0x7c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x7cu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d9397: je 0x8d93a5 */
  if (zf) goto L_8d93a5;
L_8d9399: /* 8d9399: inc dword ptr [ecx + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx + 0x10u), r);
  }
/* 8d939c: mov eax, dword ptr [eax + 0xcc] */
  eax = R32((uint32_t)(eax + 0xccu));
/* 8d93a2: and dword ptr [eax + 0x7c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x7cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x7cu), r);
  }
L_8d93a5: /* 8d93a5: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8d93a8: mov edx, dword ptr [eax + 0xd0] */
  edx = R32((uint32_t)(eax + 0xd0u));
/* 8d93ae: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d93b0: je 0x8d93c3 */
  if (zf) goto L_8d93c3;
L_8d93b2: /* 8d93b2: test byte ptr [edx + 0x7c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x7cu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d93b5: je 0x8d93c3 */
  if (zf) goto L_8d93c3;
L_8d93b7: /* 8d93b7: inc dword ptr [ecx + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx + 0x10u), r);
  }
/* 8d93ba: mov eax, dword ptr [eax + 0xd0] */
  eax = R32((uint32_t)(eax + 0xd0u));
/* 8d93c0: and dword ptr [eax + 0x7c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x7cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x7cu), r);
  }
L_8d93c3: /* 8d93c3: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8d93c6: mov edx, dword ptr [eax + 0xd4] */
  edx = R32((uint32_t)(eax + 0xd4u));
/* 8d93cc: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d93ce: je 0x8d93e1 */
  if (zf) goto L_8d93e1;
L_8d93d0: /* 8d93d0: test byte ptr [edx + 0x7c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x7cu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d93d3: je 0x8d93e1 */
  if (zf) goto L_8d93e1;
L_8d93d5: /* 8d93d5: inc dword ptr [ecx + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx + 0x10u), r);
  }
/* 8d93d8: mov eax, dword ptr [eax + 0xd4] */
  eax = R32((uint32_t)(eax + 0xd4u));
/* 8d93de: and dword ptr [eax + 0x7c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x7cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x7cu), r);
  }
L_8d93e1: /* 8d93e1: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8d93e4: mov edx, dword ptr [eax + 0xd8] */
  edx = R32((uint32_t)(eax + 0xd8u));
/* 8d93ea: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d93ec: je 0x8d93ff */
  if (zf) goto L_8d93ff;
L_8d93ee: /* 8d93ee: test byte ptr [edx + 0x7c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x7cu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d93f1: je 0x8d93ff */
  if (zf) goto L_8d93ff;
L_8d93f3: /* 8d93f3: inc dword ptr [ecx + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx + 0x10u), r);
  }
/* 8d93f6: mov eax, dword ptr [eax + 0xd8] */
  eax = R32((uint32_t)(eax + 0xd8u));
/* 8d93fc: and dword ptr [eax + 0x7c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x7cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x7cu), r);
  }
L_8d93ff: /* 8d93ff: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8d9402: mov edx, dword ptr [eax + 0xdc] */
  edx = R32((uint32_t)(eax + 0xdcu));
/* 8d9408: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d940a: je 0x8d941d */
  if (zf) goto L_8d941d;
L_8d940c: /* 8d940c: test byte ptr [edx + 0x7c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x7cu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d940f: je 0x8d941d */
  if (zf) goto L_8d941d;
L_8d9411: /* 8d9411: inc dword ptr [ecx + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx + 0x10u), r);
  }
/* 8d9414: mov eax, dword ptr [eax + 0xdc] */
  eax = R32((uint32_t)(eax + 0xdcu));
/* 8d941a: and dword ptr [eax + 0x7c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x7cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x7cu), r);
  }
L_8d941d: /* 8d941d: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 8d9420: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d9421: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d9422: ret  */
  esp += 4; SPILL(); return;
}

void f_8d9470(void) {
  LOAD_REGS();
L_8d9470: /* 8d9470: mov eax, dword ptr [ecx + 0xe0] */
  eax = R32((uint32_t)(ecx + 0xe0u));
/* 8d9476: ret  */
  esp += 4; SPILL(); return;
}

void f_8d9490(void) {
  LOAD_REGS();
L_8d9490: /* 8d9490: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8d9494: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d9495: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8d9497: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d9498: mov esi, ecx */
  esi = ecx;
/* 8d949a: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x8d94a0u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 8d94a0: mov eax, esi */
  eax = esi;
/* 8d94a2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d94a3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8d94c0(void) {
  LOAD_REGS();
L_8d94c0: /* 8d94c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d94c1: mov esi, ecx */
  esi = ecx;
/* 8d94c3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8d94c9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8d94c9: mov eax, esi */
  eax = esi;
/* 8d94cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d94cc: ret  */
  esp += 4; SPILL(); return;
}

void f_8d94e0(void) {
  LOAD_REGS();
L_8d94e0: /* 8d94e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8d94e4: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 8d94e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d94e7: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8d94edu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8d94ed: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8d9500(void) {
  LOAD_REGS();
L_8d9500: /* 8d9500: mov al, byte ptr [esp + 4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x4u))) & 0xffu);
/* 8d9504: mov cl, byte ptr [esp + 8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 8d9508: cmp al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 8d950a: jae 0x8d950e */
  if (!cf) goto L_8d950e;
L_8d950c: /* 8d950c: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
L_8d950e: /* 8d950e: ret  */
  esp += 4; SPILL(); return;
}

void f_8d9520(void) {
  LOAD_REGS();
L_8d9520: /* 8d9520: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8d9524: imul eax, eax */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(eax);
  eax = (uint32_t)r;
  }
/* 8d9527: ret  */
  esp += 4; SPILL(); return;
}

void f_8d9540(void) {
  LOAD_REGS();
L_8d9540: /* 8d9540: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8d9544: cmp eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8d9547: ja 0x8d957d */
  if ((!cf && !zf)) goto L_8d957d;
L_8d9549: /* 8d9549: movzx eax, byte ptr [eax + 0x8d9598] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x8d9598u)));
/* 8d9550: jmp dword ptr [eax*4 + 0x8d9580] */
  switch (R32((uint32_t)(eax*4 + 0x8d9580u))) {
    case 0x8d9557u: goto L_8d9557;
    case 0x8d9561u: goto L_8d9561;
    case 0x8d9569u: goto L_8d9569;
    case 0x8d956eu: goto L_8d956e;
    case 0x8d9575u: goto L_8d9575;
    case 0x8d957du: goto L_8d957d;
    default: guest_badjump(0x8d9550, R32((uint32_t)(eax*4 + 0x8d9580u))); return;
  }
L_8d9557: /* 8d9557: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8d955b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8d955c: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8d955e: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8d9560: ret  */
  esp += 4; SPILL(); return;
L_8d9561: /* 8d9561: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8d9565: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8d9568: ret  */
  esp += 4; SPILL(); return;
L_8d9569: /* 8d9569: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8d956d: ret  */
  esp += 4; SPILL(); return;
L_8d956e: /* 8d956e: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8d9572: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d9574: ret  */
  esp += 4; SPILL(); return;
L_8d9575: /* 8d9575: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8d9579: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8d957c: ret  */
  esp += 4; SPILL(); return;
L_8d957d: /* 8d957d: xor eax, eax */
  eax = 0;
/* 8d957f: ret  */
  esp += 4; SPILL(); return;
}

void f_8d95d0(void) {
  LOAD_REGS();
L_8d95d0: /* 8d95d0: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d95d3: movzx eax, byte ptr [esp + 0x34] */
  eax = (uint32_t)(R8((uint32_t)(esp + 0x34u)));
/* 8d95d8: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 8d95dc: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d95df: fild dword ptr [esp + 0x3c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 8d95e3: fmul dword ptr [0xa1d36c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1d36cu)));
/* 8d95e9: fst qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0);
/* 8d95ed: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8d95f0: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x8d95f6u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 8d95f6: fadd qword ptr [0xa1d360] */
  ST0 = ST0 + (F64((uint32_t)(0xa1d360u)));
/* 8d95fc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d95ff: fdivr qword ptr [esp] */
  ST0 = (F64((uint32_t)(esp))) / ST0;
/* 8d9603: fmul qword ptr [0xa1d350] */
  ST0 = ST0 * (F64((uint32_t)(0xa1d350u)));
/* 8d9609: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8d960f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d9611: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8d9614: jp 0x8d9620 */
  if (pf) goto L_8d9620;
L_8d9616: /* 8d9616: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d9618: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 8d961e: jmp 0x8d9635 */
  goto L_8d9635;
L_8d9620: /* 8d9620: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 8d9626: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d9628: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8d962b: jnp 0x8d9635 */
  if (!pf) goto L_8d9635;
L_8d962d: /* 8d962d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d962f: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_8d9635: /* 8d9635: mov al, byte ptr [esp + 0x2c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x2cu))) & 0xffu);
/* 8d9639: cmp al, 0x56 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x56u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 8d963b: jae 0x8d9675 */
  if (!cf) goto L_8d9675;
L_8d963d: /* 8d963d: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 8d9640: mov ecx, 0x55 */
  ecx = 0x55u;
/* 8d9645: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8d9647: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 8d964b: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 8d964f: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 8d9657: fild dword ptr [esp + 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 8d965b: fmul dword ptr [0xa1693c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1693cu)));
/* 8d9661: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 8d9665: fild dword ptr [esp + 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 8d9669: fmul dword ptr [0xa1693c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1693cu)));
/* 8d966f: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 8d9673: jmp 0x8d96e9 */
  goto L_8d96e9;
L_8d9675: /* 8d9675: cmp al, 0xab */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xabu);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 8d9677: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 8d967a: jae 0x8d96b0 */
  if (!cf) goto L_8d96b0;
L_8d967c: /* 8d967c: mov edx, 0xaa */
  edx = 0xaau;
/* 8d9681: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 8d9683: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 8d9687: fild dword ptr [esp + 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 8d968b: add eax, -0x55 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffabu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d968e: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* 8d9692: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 8d969a: fmul dword ptr [0xa1693c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1693cu)));
/* 8d96a0: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 8d96a4: fild dword ptr [esp + 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 8d96a8: fmul dword ptr [0xa1693c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1693cu)));
/* 8d96ae: jmp 0x8d96e5 */
  goto L_8d96e5;
L_8d96b0: /* 8d96b0: lea ecx, [eax - 0xaa] */
  ecx = (uint32_t)(eax + 0xffffff56u);
/* 8d96b6: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 8d96ba: fild dword ptr [esp + 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 8d96be: mov edx, 0xff */
  edx = 0xffu;
/* 8d96c3: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 8d96c5: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 8d96c9: fmul dword ptr [0xa1693c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1693cu)));
/* 8d96cf: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 8d96d7: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 8d96db: fild dword ptr [esp + 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 8d96df: fmul dword ptr [0xa16938] */
  ST0 = ST0 * (F32((uint32_t)(0xa16938u)));
L_8d96e5: /* 8d96e5: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
L_8d96e9: /* 8d96e9: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8d96ef: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 8d96f3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8d96f5: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8d96f8: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8d96fb: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 8d96ff: fsub dword ptr [esp] */
  ST0 = ST0 - (F32((uint32_t)(esp)));
/* 8d9703: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8d9709: movzx ecx, byte ptr [esp + 0x30] */
  ecx = (uint32_t)(R8((uint32_t)(esp + 0x30u)));
/* 8d970e: mov dword ptr [esp + 4], edx */
  W32((uint32_t)(esp + 0x4u), edx);
/* 8d9712: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 8d9716: fsub dword ptr [esp + 4] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4u)));
/* 8d971a: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 8d971e: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8d9724: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 8d9728: fsub dword ptr [esp + 8] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x8u)));
/* 8d972c: mov edx, eax */
  edx = eax;
/* 8d972e: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 8d9732: mov dword ptr [eax + 0xc], 0x3f800000 */
  W32((uint32_t)(eax + 0xcu), 0x3f800000u);
/* 8d9739: fild dword ptr [esp + 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 8d973d: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8d9743: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 8d9747: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8d9749: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 8d974d: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 8d9751: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 8d9755: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8d9759: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* 8d975d: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8d9761: fadd dword ptr [esp] */
  ST0 = ST0 + (F32((uint32_t)(esp)));
/* 8d9765: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 8d9769: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8d976b: fadd dword ptr [esp + 4] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4u)));
/* 8d976f: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 8d9773: fadd dword ptr [esp + 8] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x8u)));
/* 8d9777: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 8d977b: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8d977d: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8d9781: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* 8d9785: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8d9789: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8d978b: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8d978d: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 8d9791: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8d9795: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8d9797: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8d979a: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 8d979e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8d97a2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d97a4: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8d97a7: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d97aa: ret  */
  esp += 4; SPILL(); return;
}

void f_8d9830(void) {
  LOAD_REGS();
L_8d9830: /* 8d9830: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d9831: mov ebp, esp */
  ebp = esp;
/* 8d9833: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d9835: push 0x9d8580 */
  { uint32_t v = 0x9d8580u; esp -= 4; W32(esp, v); }
/* 8d983a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d9840: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d9841: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d9848: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d984b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d984c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d984d: mov esi, ecx */
  esi = ecx;
/* 8d984f: fld qword ptr [esi + 0xc0] */
  { double v = F64((uint32_t)(esi + 0xc0u)); FPUSH(v); }
/* 8d9855: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d9856: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8d9859: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d985c: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8d985e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8d9865: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d9867: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d9869: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d986c: jne 0x8d98e9 */
  if (!zf) goto L_8d98e9;
L_8d986e: /* 8d986e: mov eax, dword ptr [esi + 0x7c] */
  eax = R32((uint32_t)(esi + 0x7cu));
/* 8d9871: test al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d9873: je 0x8d987d */
  if (zf) goto L_8d987d;
L_8d9875: /* 8d9875: or eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 8d987a: mov dword ptr [esi + 0x7c], eax */
  W32((uint32_t)(esi + 0x7cu), eax);
L_8d987d: /* 8d987d: fld qword ptr [esi + 0xc0] */
  { double v = F64((uint32_t)(esi + 0xc0u)); FPUSH(v); }
/* 8d9883: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8d9885: fsubr qword ptr [ebp + 8] */
  ST0 = (F64((uint32_t)(ebp + 0x8u))) - ST0;
/* 8d9888: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d9889: mov ecx, esi */
  ecx = esi;
/* 8d988b: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8d988e: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x8d9894u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d9894: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8d9897: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8d989a: mov dword ptr [esi + 0xc0], ecx */
  W32((uint32_t)(esi + 0xc0u), ecx);
/* 8d98a0: mov dword ptr [esi + 0xc4], edx */
  W32((uint32_t)(esi + 0xc4u), edx);
/* 8d98a6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d98a9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d98b0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d98b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d98b2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d98b3: mov esp, ebp */
  esp = ebp;
/* 8d98b5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d98b6: ret 8 */
  esp += 12; SPILL(); return;
L_8d98e9: /* 8d98e9: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8d98ec: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8d98ef: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d98f2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d98f3: mov dword ptr [esi + 0xc0], edx */
  W32((uint32_t)(esi + 0xc0u), edx);
/* 8d98f9: mov dword ptr [esi + 0xc4], eax */
  W32((uint32_t)(esi + 0xc4u), eax);
/* 8d98ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d9900: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d9907: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d9908: mov esp, ebp */
  esp = ebp;
/* 8d990a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d990b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8d98b9(void) {
  LOAD_REGS();
L_8d98b9: /* 8d98b9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d98bc: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d98c1: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8d98c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d98c5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8d98c8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d98cdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d98cd(); return;
}

void f_8d98cd(void) {
  LOAD_REGS();
L_8d98cd: /* 8d98cd: push 0xa1d370 */
  { uint32_t v = 0xa1d370u; esp -= 4; W32(esp, v); }
/* 8d98d2: push 0xaed4a0 */
  { uint32_t v = 0xaed4a0u; esp -= 4; W32(esp, v); }
/* 8d98d7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d98ddu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d98dd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d98e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d98e2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d98e4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d98e9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8d98e9: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8d98ec: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8d98ef: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d98f2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d98f3: mov dword ptr [esi + 0xc0], edx */
  W32((uint32_t)(esi + 0xc0u), edx);
/* 8d98f9: mov dword ptr [esi + 0xc4], eax */
  W32((uint32_t)(esi + 0xc4u), eax);
/* 8d98ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d9900: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d9907: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d9908: mov esp, ebp */
  esp = ebp;
/* 8d990a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d990b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8d9950(void) {
  LOAD_REGS();
L_8d9950: /* 8d9950: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d9951: mov esi, ecx */
  esi = ecx;
/* 8d9953: mov ecx, dword ptr [0xce9ec0] */
  ecx = R32((uint32_t)(0xce9ec0u));
/* 8d9959: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8d995b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d995c: mov edi, dword ptr [esi + 0x84] */
  edi = R32((uint32_t)(esi + 0x84u));
/* 8d9962: je 0x8d9973 */
  if (zf) goto L_8d9973;
L_8d9964: /* 8d9964: movzx eax, byte ptr [esi + 0x80] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x80u)));
/* 8d996b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d996c: call 0x6c2e32 */
  esp -= 4; W32(esp, 0x8d9971u); SPILL(); f_6c2e32(); if (g_unwind) return; RELOAD();
/* 8d9971: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_8d9973: /* 8d9973: mov eax, dword ptr [esi + 0x8c] */
  eax = R32((uint32_t)(esi + 0x8cu));
/* 8d9979: mov esi, dword ptr [esi + 0x88] */
  esi = R32((uint32_t)(esi + 0x88u));
/* 8d997f: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d9981: jge 0x8d9988 */
  if ((sf == of)) goto L_8d9988;
L_8d9983: /* 8d9983: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d9984: mov eax, esi */
  eax = esi;
/* 8d9986: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d9987: ret  */
  esp += 4; SPILL(); return;
L_8d9988: /* 8d9988: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d998a: jge 0x8d998e */
  if ((sf == of)) goto L_8d998e;
L_8d998c: /* 8d998c: mov eax, edi */
  eax = edi;
L_8d998e: /* 8d998e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d998f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d9990: ret  */
  esp += 4; SPILL(); return;
}

void f_8d99c0(void) {
  LOAD_REGS();
L_8d99c0: /* 8d99c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d99c1: mov ebp, esp */
  ebp = esp;
/* 8d99c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d99c5: push 0x9d8590 */
  { uint32_t v = 0x9d8590u; esp -= 4; W32(esp, v); }
/* 8d99ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d99d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d99d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d99d8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d99db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d99dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d99dd: mov esi, ecx */
  esi = ecx;
/* 8d99df: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8d99e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d99e2: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d99e5: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 8d99e8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8d99ef: call dword ptr [eax + 0xc0] */
  { uint32_t t = R32((uint32_t)(eax + 0xc0u)); esp -= 4; W32(esp, 0x8d99f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d99f5: fld dword ptr [esi + 0xa4] */
  { double v = F32((uint32_t)(esi + 0xa4u)); FPUSH(v); }
/* 8d99fb: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8d9a01: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d9a03: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8d9a06: jp 0x8d9a25 */
  if (pf) goto L_8d9a25;
L_8d9a08: /* 8d9a08: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8d9a0a: mov ecx, esi */
  ecx = esi;
/* 8d9a0c: call dword ptr [edx + 0xb0] */
  { uint32_t t = R32((uint32_t)(edx + 0xb0u)); esp -= 4; W32(esp, 0x8d9a12u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d9a12: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d9a15: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d9a1c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d9a1d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d9a1e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d9a1f: mov esp, ebp */
  esp = ebp;
/* 8d9a21: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d9a22: ret 4 */
  esp += 8; SPILL(); return;
L_8d9a25: /* 8d9a25: fld dword ptr [esi + 0xa4] */
  { double v = F32((uint32_t)(esi + 0xa4u)); FPUSH(v); }
/* 8d9a2b: fcom dword ptr [0xa0973c] */
  fpu_com(ST0, F32((uint32_t)(0xa0973cu)));
/* 8d9a31: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d9a33: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8d9a36: jp 0x8d9a42 */
  if (pf) goto L_8d9a42;
L_8d9a38: /* 8d9a38: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d9a3a: fld dword ptr [0xa0973c] */
  { double v = F32((uint32_t)(0xa0973cu)); FPUSH(v); }
/* 8d9a40: jmp 0x8d9a57 */
  goto L_8d9a57;
L_8d9a42: /* 8d9a42: fcom dword ptr [0xa09ac8] */
  fpu_com(ST0, F32((uint32_t)(0xa09ac8u)));
/* 8d9a48: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d9a4a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8d9a4d: jnp 0x8d9a57 */
  if (!pf) goto L_8d9a57;
L_8d9a4f: /* 8d9a4f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d9a51: fld dword ptr [0xa09ac8] */
  { double v = F32((uint32_t)(0xa09ac8u)); FPUSH(v); }
L_8d9a57: /* 8d9a57: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8d9a5d: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 8d9a5f: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8d9a62: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d9a64: fld dword ptr [esi + 0xa0] */
  { double v = F32((uint32_t)(esi + 0xa0u)); FPUSH(v); }
/* 8d9a6a: fcom dword ptr [0xa0973c] */
  fpu_com(ST0, F32((uint32_t)(0xa0973cu)));
/* 8d9a70: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d9a72: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8d9a75: jp 0x8d9a81 */
  if (pf) goto L_8d9a81;
L_8d9a77: /* 8d9a77: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d9a79: fld dword ptr [0xa0973c] */
  { double v = F32((uint32_t)(0xa0973cu)); FPUSH(v); }
/* 8d9a7f: jmp 0x8d9a96 */
  goto L_8d9a96;
L_8d9a81: /* 8d9a81: fcom dword ptr [0xa09ac8] */
  fpu_com(ST0, F32((uint32_t)(0xa09ac8u)));
/* 8d9a87: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d9a89: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8d9a8c: jnp 0x8d9a96 */
  if (!pf) goto L_8d9a96;
L_8d9a8e: /* 8d9a8e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d9a90: fld dword ptr [0xa09ac8] */
  { double v = F32((uint32_t)(0xa09ac8u)); FPUSH(v); }
L_8d9a96: /* 8d9a96: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8d9a9c: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 8d9a9e: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8d9aa1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d9aa3: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8d9aa6: fadd dword ptr [esi + 0xa8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xa8u)));
/* 8d9aac: fcom dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8d9aaf: fst dword ptr [esi + 0xa8] */
  WF32((uint32_t)(esi + 0xa8u), ST0);
/* 8d9ab5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d9ab7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8d9aba: jnp 0x8d9b76 */
  if (!pf) goto L_8d9b76;
L_8d9ac0: /* 8d9ac0: fcomp dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
  FPOP();
/* 8d9ac3: mov ecx, esi */
  ecx = esi;
/* 8d9ac5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d9ac7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8d9aca: jp 0x8d9af1 */
  if (pf) goto L_8d9af1;
L_8d9acc: /* 8d9acc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8d9ace: call dword ptr [eax + 0xb0] */
  { uint32_t t = R32((uint32_t)(eax + 0xb0u)); esp -= 4; W32(esp, 0x8d9ad4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d9ad4: mov dword ptr [esi + 0xa8], 0 */
  W32((uint32_t)(esi + 0xa8u), 0x0u);
/* 8d9ade: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d9ae1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d9ae8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d9ae9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d9aea: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d9aeb: mov esp, ebp */
  esp = ebp;
/* 8d9aed: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d9aee: ret 4 */
  esp += 8; SPILL(); return;
L_8d9af1: /* 8d9af1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8d9af3: call dword ptr [edx + 0xb0] */
  { uint32_t t = R32((uint32_t)(edx + 0xb0u)); esp -= 4; W32(esp, 0x8d9af9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d9af9: fld dword ptr [esi + 0xa8] */
  { double v = F32((uint32_t)(esi + 0xa8u)); FPUSH(v); }
/* 8d9aff: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8d9b02: fst dword ptr [esi + 0xa8] */
  WF32((uint32_t)(esi + 0xa8u), ST0);
/* 8d9b08: fcomp dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
  FPOP();
/* 8d9b0b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8d9b0d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8d9b10: jne 0x8d9b78 */
  if (!zf) goto L_8d9b78;
L_8d9b12: /* 8d9b12: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d9b15: mov dword ptr [esi + 0xa8], eax */
  W32((uint32_t)(esi + 0xa8u), eax);
/* 8d9b1b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d9b1e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d9b25: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d9b26: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d9b27: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d9b28: mov esp, ebp */
  esp = ebp;
/* 8d9b2a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d9b2b: ret 4 */
  esp += 8; SPILL(); return;
L_8d9b76: /* 8d9b76: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8d9b78: /* 8d9b78: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d9b7b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d9b7c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d9b7d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d9b84: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d9b85: mov esp, ebp */
  esp = ebp;
/* 8d9b87: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d9b88: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8d9b2e(void) {
  LOAD_REGS();
L_8d9b2e: /* 8d9b2e: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8d9b31: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d9b36: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 8d9b39: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8d9b3a: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8d9b3d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d9b42u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d9b42(); return;
}

void f_8d9b42(void) {
  LOAD_REGS();
L_8d9b42: /* 8d9b42: mov esi, dword ptr [0xcfa1ec] */
  esi = R32((uint32_t)(0xcfa1ecu));
/* 8d9b48: push 0xa1d398 */
  { uint32_t v = 0xa1d398u; esp -= 4; W32(esp, v); }
/* 8d9b4d: push 0xaed4a8 */
  { uint32_t v = 0xaed4a8u; esp -= 4; W32(esp, v); }
/* 8d9b52: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8d9b54u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d9b54: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d9b57: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d9b5a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d9b5c: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8d9b62u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8d9b62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d9b63: push 0xaed4b0 */
  { uint32_t v = 0xaed4b0u; esp -= 4; W32(esp, v); }
/* 8d9b68: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8d9b6au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d9b6a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d9b6d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d9b6f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d9b71: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d9b76u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8d9b76: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8d9b78: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d9b7b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d9b7c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d9b7d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d9b84: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d9b85: mov esp, ebp */
  esp = ebp;
/* 8d9b87: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d9b88: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8d9c10(void) {
  LOAD_REGS();
L_8d9c10: /* 8d9c10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d9c11: mov ebp, esp */
  ebp = esp;
/* 8d9c13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d9c15: push 0x9d85a0 */
  { uint32_t v = 0x9d85a0u; esp -= 4; W32(esp, v); }
/* 8d9c1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d9c20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d9c21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d9c28: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d9c2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d9c2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d9c2d: mov esi, ecx */
  esi = ecx;
/* 8d9c2f: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 8d9c35: mov eax, dword ptr [esi + 0xbc] */
  eax = R32((uint32_t)(esi + 0xbcu));
/* 8d9c3b: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8d9c3d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8d9c3f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d9c40: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d9c43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d9c44: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8d9c4b: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8d9c4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d9c4e: mov ecx, esi */
  ecx = esi;
/* 8d9c50: mov dword ptr [esi + 0xbc], 0 */
  W32((uint32_t)(esi + 0xbcu), 0x0u);
/* 8d9c5a: call dword ptr [0xcfa22c] */
  esp -= 4; W32(esp, 0x8d9c60u); SPILL(); f_4e2a9a(); if (g_unwind) return; /* Core!?Destroy@UObject@@UAEXXZ */ RELOAD();
/* 8d9c60: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d9c63: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d9c64: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d9c65: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d9c6c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d9c6d: mov esp, ebp */
  esp = ebp;
/* 8d9c6f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d9c70: ret  */
  esp += 4; SPILL(); return;
}

void f_8d9c71(void) {
  LOAD_REGS();
L_8d9c71: /* 8d9c71: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d9c74: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d9c79: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8d9c7c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d9c7d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8d9c80: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d9c85u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d9c85(); return;
}

void f_8d9c85(void) {
  LOAD_REGS();
L_8d9c85: /* 8d9c85: push 0xa1d3bc */
  { uint32_t v = 0xa1d3bcu; esp -= 4; W32(esp, v); }
/* 8d9c8a: push 0xaed524 */
  { uint32_t v = 0xaed524u; esp -= 4; W32(esp, v); }
/* 8d9c8f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d9c95u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d9c95: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d9c98: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d9c9a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d9c9c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d9ca1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8d9ca1: guest_badaddr(0x8d9ca1); return;
}

void f_8d9ce0(void) {
  LOAD_REGS();
L_8d9ce0: /* 8d9ce0: cmp byte ptr [ecx + 0x38], 5 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x38u))); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8d9ce4: jne 0x8d9d19 */
  if (!zf) goto L_8d9d19;
L_8d9ce6: /* 8d9ce6: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* 8d9ce9: imul edx, dword ptr [ecx + 0x44] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(ecx + 0x44u)));
  edx = (uint32_t)r;
  }
/* 8d9ced: xor eax, eax */
  eax = 0;
/* 8d9cef: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8d9cf1: jle 0x8d9d19 */
  if ((zf || sf != of)) goto L_8d9d19;
L_8d9cf3: /* 8d9cf3: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 8d9cf7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d9cf8: jmp 0x8d9d00 */
  goto L_8d9d00;
L_8d9d00: /* 8d9d00: mov esi, dword ptr [ecx + 0xac] */
  esi = R32((uint32_t)(ecx + 0xacu));
/* 8d9d06: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 8d9d09: mov dword ptr [esi + eax*4], edx */
  W32((uint32_t)(esi + eax*4), edx);
/* 8d9d0c: mov esi, dword ptr [ecx + 0x40] */
  esi = R32((uint32_t)(ecx + 0x40u));
/* 8d9d0f: imul esi, dword ptr [ecx + 0x44] */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(R32((uint32_t)(ecx + 0x44u)));
  esi = (uint32_t)r;
  }
/* 8d9d13: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d9d14: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d9d16: jl 0x8d9d00 */
  if ((sf != of)) goto L_8d9d00;
L_8d9d18: /* 8d9d18: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_8d9d19: /* 8d9d19: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8d9cfa(void) {
  LOAD_REGS();
L_8d9cfa: /* 8d9cfa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8d9d00: /* 8d9d00: mov esi, dword ptr [ecx + 0xac] */
  esi = R32((uint32_t)(ecx + 0xacu));
/* 8d9d06: mov esi, dword ptr [esi + 0x1c] */
  esi = R32((uint32_t)(esi + 0x1cu));
/* 8d9d09: mov dword ptr [esi + eax*4], edx */
  W32((uint32_t)(esi + eax*4), edx);
/* 8d9d0c: mov esi, dword ptr [ecx + 0x40] */
  esi = R32((uint32_t)(ecx + 0x40u));
/* 8d9d0f: imul esi, dword ptr [ecx + 0x44] */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(R32((uint32_t)(ecx + 0x44u)));
  esi = (uint32_t)r;
  }
/* 8d9d13: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d9d14: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d9d16: jl 0x8d9d00 */
  if ((sf != of)) goto L_8d9d00;
L_8d9d18: /* 8d9d18: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d9d19: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8d9d30(void) {
  LOAD_REGS();
L_8d9d30: /* 8d9d30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d9d31: mov esi, ecx */
  esi = ecx;
/* 8d9d33: cmp byte ptr [esi + 0x38], 5 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x38u))); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8d9d37: je 0x8d9d4e */
  if (zf) goto L_8d9d4e;
L_8d9d39: /* 8d9d39: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8d9d3d: xor cl, cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 8d9d3f: mov byte ptr [eax], cl */
  W8((uint32_t)(eax), (ecx & 0xffu));
/* 8d9d41: mov byte ptr [eax + 1], cl */
  W8((uint32_t)(eax + 0x1u), (ecx & 0xffu));
/* 8d9d44: mov byte ptr [eax + 2], cl */
  W8((uint32_t)(eax + 0x2u), (ecx & 0xffu));
/* 8d9d47: mov byte ptr [eax + 3], cl */
  W8((uint32_t)(eax + 0x3u), (ecx & 0xffu));
/* 8d9d4a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d9d4b: ret 0x14 */
  esp += 24; SPILL(); return;
L_8d9d4e: /* 8d9d4e: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8d9d52: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d9d53: call 0x99c958 */
  esp -= 4; W32(esp, 0x8d9d58u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8d9d58: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8d9d5c: mov edi, dword ptr [esi + 0x40] */
  edi = R32((uint32_t)(esi + 0x40u));
/* 8d9d5f: imul edi, eax */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(eax);
  edi = (uint32_t)r;
  }
/* 8d9d62: call 0x99c958 */
  esp -= 4; W32(esp, 0x8d9d67u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8d9d67: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8d9d69: mov eax, dword ptr [esi + 0xac] */
  eax = R32((uint32_t)(esi + 0xacu));
/* 8d9d6f: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 8d9d72: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* 8d9d75: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 8d9d79: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d9d7a: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8d9d7c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d9d7d: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_8d9da0(void) {
  LOAD_REGS();
L_8d9da0: /* 8d9da0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8d9da1: mov ebp, esp */
  ebp = esp;
/* 8d9da3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8d9da5: push 0x9d85b0 */
  { uint32_t v = 0x9d85b0u; esp -= 4; W32(esp, v); }
/* 8d9daa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8d9db0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8d9db1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8d9db8: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8d9dbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8d9dbc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8d9dbd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8d9dc0: mov eax, dword ptr [esi + 0xac] */
  eax = R32((uint32_t)(esi + 0xacu));
/* 8d9dc6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8d9dc7: mov edi, ecx */
  edi = ecx;
/* 8d9dc9: lea ecx, [eax + 0x10] */
  ecx = (uint32_t)(eax + 0x10u);
/* 8d9dcc: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8d9dce: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8d9dd1: mov dword ptr [ebp - 0x30], edi */
  W32((uint32_t)(ebp + 0xffffffd0u), edi);
/* 8d9dd4: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8d9ddb: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8d9dddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8d9ddd: fild dword ptr [esi + 0x40] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x40u)); FPUSH(v); }
/* 8d9de0: cmp byte ptr [edi + 0x38], 5 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x38u))); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8d9de4: fidiv dword ptr [edi + 0x40] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(edi + 0x40u)));
/* 8d9de7: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8d9dea: fild dword ptr [esi + 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x44u)); FPUSH(v); }
/* 8d9ded: fidiv dword ptr [edi + 0x44] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(edi + 0x44u)));
/* 8d9df0: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8d9df3: jne 0x8d9fc8 */
  if (!zf) goto L_8d9fc8;
L_8d9df9: /* 8d9df9: xor edx, edx */
  edx = 0;
L_8d9dfb: /* 8d9dfb: cmp edx, dword ptr [edi + 0x44] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x44u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d9dfe: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8d9e01: jge 0x8d9fc8 */
  if ((sf == of)) goto L_8d9fc8;
L_8d9e07: /* 8d9e07: xor ecx, ecx */
  ecx = 0;
/* 8d9e09: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8d9e0c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8d9e10: /* 8d9e10: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 8d9e13: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d9e15: jge 0x8d9f92 */
  if ((sf == of)) goto L_8d9f92;
L_8d9e1b: /* 8d9e1b: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 8d9e1e: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8d9e20: mov ecx, dword ptr [edi + 0xac] */
  ecx = R32((uint32_t)(edi + 0xacu));
/* 8d9e26: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* 8d9e29: mov ebx, dword ptr [edx + eax*4] */
  ebx = R32((uint32_t)(edx + eax*4));
/* 8d9e2c: lea edi, [edx + eax*4] */
  edi = (uint32_t)(edx + eax*4);
/* 8d9e2f: cmp byte ptr [esi + 0x38], 5 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x38u))); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8d9e33: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 8d9e36: je 0x8d9e4f */
  if (zf) goto L_8d9e4f;
L_8d9e38: /* 8d9e38: xor dl, dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 8d9e3a: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 8d9e3c: mov byte ptr [ebp - 0x18], 0 */
  W8((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 8d9e40: mov byte ptr [ebp - 0x17], 0 */
  W8((uint32_t)(ebp + 0xffffffe9u), 0x0u);
/* 8d9e44: mov byte ptr [ebp - 0x16], dl */
  W8((uint32_t)(ebp + 0xffffffeau), (edx & 0xffu));
/* 8d9e47: mov byte ptr [ebp - 0x15], al */
  W8((uint32_t)(ebp + 0xffffffebu), (eax & 0xffu));
/* 8d9e4a: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d9e4d: jmp 0x8d9e89 */
  goto L_8d9e89;
L_8d9e4f: /* 8d9e4f: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8d9e52: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 8d9e55: call 0x99c958 */
  esp -= 4; W32(esp, 0x8d9e5au); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8d9e5a: imul eax, dword ptr [esi + 0x40] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x40u)));
  eax = (uint32_t)r;
  }
/* 8d9e5e: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8d9e61: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 8d9e64: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8d9e67: call 0x99c958 */
  esp -= 4; W32(esp, 0x8d9e6cu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8d9e6c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8d9e6f: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8d9e71: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8d9e74: mov edx, dword ptr [eax + 0xac] */
  edx = R32((uint32_t)(eax + 0xacu));
/* 8d9e7a: mov eax, dword ptr [edx + 0x1c] */
  eax = R32((uint32_t)(edx + 0x1cu));
/* 8d9e7d: mov ecx, dword ptr [eax + ecx*4] */
  ecx = R32((uint32_t)(eax + ecx*4));
/* 8d9e80: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8d9e83: mov dl, byte ptr [ebp - 0x16] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffeau))) & 0xffu);
/* 8d9e86: mov al, byte ptr [ebp - 0x15] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffebu))) & 0xffu);
L_8d9e89: /* 8d9e89: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8d9e8c: cmp esi, 9 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8d9e8f: ja 0x8d9eac */
  if ((!cf && !zf)) goto L_8d9eac;
L_8d9e91: /* 8d9e91: jmp dword ptr [esi*4 + 0x8d9fdc] */
  switch (R32((uint32_t)(esi*4 + 0x8d9fdcu))) {
    case 0x8d9e98u: goto L_8d9e98;
    case 0x8d9e9du: goto L_8d9e9d;
    case 0x8d9ecbu: goto L_8d9ecb;
    case 0x8d9eddu: goto L_8d9edd;
    case 0x8d9eefu: goto L_8d9eef;
    case 0x8d9efeu: goto L_8d9efe;
    case 0x8d9f66u: goto L_8d9f66;
    case 0x8d9f71u: goto L_8d9f71;
    case 0x8d9f7cu: goto L_8d9f7c;
    case 0x8d9f87u: goto L_8d9f87;
    default: guest_badjump(0x8d9e91, R32((uint32_t)(esi*4 + 0x8d9fdcu))); return;
  }
L_8d9e98: /* 8d9e98: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8d9e9b: jmp 0x8d9eaf */
  goto L_8d9eaf;
L_8d9e9d: /* 8d9e9d: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8d9e9f: cmp ebx, 0xff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8d9ea5: jle 0x8d9eac */
  if ((zf || sf != of)) goto L_8d9eac;
L_8d9ea7: /* 8d9ea7: mov ebx, 0xff */
  ebx = 0xffu;
L_8d9eac: /* 8d9eac: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
L_8d9eaf: /* 8d9eaf: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8d9eb2: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8d9eb5: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8d9eb8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8d9eb9: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 8d9ebb: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8d9ebe: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8d9ec1: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8d9ec4: mov ecx, eax */
  ecx = eax;
/* 8d9ec6: jmp 0x8d9e10 */
  goto L_8d9e10;
L_8d9ecb: /* 8d9ecb: sub ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  ebx = r;
  }
/* 8d9ecd: mov eax, 0 */
  eax = 0x0u;
/* 8d9ed2: sets al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((sf) ? 1 : 0) & 0xffu);
/* 8d9ed5: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8d9ed6: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8d9ed8: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8d9edb: jmp 0x8d9eaf */
  goto L_8d9eaf;
L_8d9edd: /* 8d9edd: imul ecx, ebx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(ebx);
  ecx = (uint32_t)r;
  }
/* 8d9ee0: mov eax, 0x80808081 */
  eax = 0x80808081u;
/* 8d9ee5: mul ecx */
  { uint64_t r = (uint64_t)eax * (uint64_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 8d9ee7: shr edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8d9eea: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8d9eed: jmp 0x8d9eaf */
  goto L_8d9eaf;
L_8d9eef: /* 8d9eef: mov byte ptr [ebp - 0x12], al */
  W8((uint32_t)(ebp + 0xffffffeeu), (eax & 0xffu));
/* 8d9ef2: mov byte ptr [ebp - 0x13], al */
  W8((uint32_t)(ebp + 0xffffffedu), (eax & 0xffu));
/* 8d9ef5: mov byte ptr [ebp - 0x14], al */
  W8((uint32_t)(ebp + 0xffffffecu), (eax & 0xffu));
/* 8d9ef8: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8d9efc: jmp 0x8d9eaf */
  goto L_8d9eaf;
L_8d9efe: /* 8d9efe: movzx esi, byte ptr [ebp - 0x2a] */
  esi = (uint32_t)(R8((uint32_t)(ebp + 0xffffffd6u)));
/* 8d9f02: movzx edx, al */
  edx = (uint32_t)((eax & 0xffu));
/* 8d9f05: mov ecx, 0xff */
  ecx = 0xffu;
/* 8d9f0a: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8d9f0c: imul esi, ecx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(ecx);
  esi = (uint32_t)r;
  }
/* 8d9f0f: mov eax, 0x80808081 */
  eax = 0x80808081u;
/* 8d9f14: imul esi */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(esi); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 8d9f16: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8d9f18: sar edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 7;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8d9f1b: mov eax, edx */
  eax = edx;
/* 8d9f1d: movzx esi, bh */
  esi = (uint32_t)(((ebx >> 8) & 0xffu));
/* 8d9f20: imul esi, ecx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(ecx);
  esi = (uint32_t)r;
  }
/* 8d9f23: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8d9f26: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8d9f28: mov byte ptr [ebp - 0x12], dl */
  W8((uint32_t)(ebp + 0xffffffeeu), (edx & 0xffu));
/* 8d9f2b: mov eax, 0x80808081 */
  eax = 0x80808081u;
/* 8d9f30: imul esi */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(esi); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 8d9f32: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8d9f34: movzx esi, bl */
  esi = (uint32_t)((ebx & 0xffu));
/* 8d9f37: imul esi, ecx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(ecx);
  esi = (uint32_t)r;
  }
/* 8d9f3a: sar edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 7;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8d9f3d: mov eax, edx */
  eax = edx;
/* 8d9f3f: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8d9f42: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8d9f44: mov byte ptr [ebp - 0x13], dl */
  W8((uint32_t)(ebp + 0xffffffedu), (edx & 0xffu));
/* 8d9f47: mov eax, 0x80808081 */
  eax = 0x80808081u;
/* 8d9f4c: imul esi */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(esi); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 8d9f4e: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8d9f50: sar edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 7;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8d9f53: mov ecx, edx */
  ecx = edx;
/* 8d9f55: shr ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8d9f58: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8d9f5a: mov byte ptr [ebp - 0x14], dl */
  W8((uint32_t)(ebp + 0xffffffecu), (edx & 0xffu));
/* 8d9f5d: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 8d9f61: jmp 0x8d9eaf */
  goto L_8d9eaf;
L_8d9f66: /* 8d9f66: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 8d9f69: mov byte ptr [ebp - 0x12], dl */
  W8((uint32_t)(ebp + 0xffffffeeu), (edx & 0xffu));
/* 8d9f6c: jmp 0x8d9eaf */
  goto L_8d9eaf;
L_8d9f71: /* 8d9f71: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 8d9f74: mov byte ptr [ebp - 0x13], dl */
  W8((uint32_t)(ebp + 0xffffffedu), (edx & 0xffu));
/* 8d9f77: jmp 0x8d9eaf */
  goto L_8d9eaf;
L_8d9f7c: /* 8d9f7c: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 8d9f7f: mov byte ptr [ebp - 0x14], dl */
  W8((uint32_t)(ebp + 0xffffffecu), (edx & 0xffu));
/* 8d9f82: jmp 0x8d9eaf */
  goto L_8d9eaf;
L_8d9f87: /* 8d9f87: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 8d9f8a: mov byte ptr [ebp - 0x11], dl */
  W8((uint32_t)(ebp + 0xffffffefu), (edx & 0xffu));
/* 8d9f8d: jmp 0x8d9eaf */
  goto L_8d9eaf;
L_8d9f92: /* 8d9f92: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8d9f93: jmp 0x8d9dfb */
  goto L_8d9dfb;
L_8d9fc8: /* 8d9fc8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d9fcb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d9fcc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d9fcd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d9fd4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d9fd5: mov esp, ebp */
  esp = ebp;
/* 8d9fd7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d9fd8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8d9f98(void) {
  LOAD_REGS();
L_8d9f98: /* 8d9f98: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8d9f9b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8d9fa0: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 8d9fa3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8d9fa4: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 8d9fa7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d9facu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8d9fac(); return;
}

void f_8d9fac(void) {
  LOAD_REGS();
L_8d9fac: /* 8d9fac: push 0xa1d3e8 */
  { uint32_t v = 0xa1d3e8u; esp -= 4; W32(esp, v); }
/* 8d9fb1: push 0xaed664 */
  { uint32_t v = 0xaed664u; esp -= 4; W32(esp, v); }
/* 8d9fb6: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8d9fbcu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8d9fbc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8d9fbf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d9fc1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8d9fc3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8d9fc8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8d9fc8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8d9fcb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8d9fcc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8d9fcd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8d9fd4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8d9fd5: mov esp, ebp */
  esp = ebp;
/* 8d9fd7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8d9fd8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8da0b0(void) {
  LOAD_REGS();
L_8da0b0: /* 8da0b0: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 8da0b3: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 8da0b5: sub esp, 0x414 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x414u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8da0bb: xor eax, eax */
  eax = 0;
/* 8da0bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8da0c0: /* 8da0c0: mov dword ptr [esp + eax*4 + 0x14], edx */
  W32((uint32_t)(esp + eax*4 + 0x14u), edx);
/* 8da0c4: mov dword ptr [esp + eax*4 + 0x18], edx */
  W32((uint32_t)(esp + eax*4 + 0x18u), edx);
/* 8da0c8: mov dword ptr [esp + eax*4 + 0x1c], edx */
  W32((uint32_t)(esp + eax*4 + 0x1cu), edx);
/* 8da0cc: mov dword ptr [esp + eax*4 + 0x20], edx */
  W32((uint32_t)(esp + eax*4 + 0x20u), edx);
/* 8da0d0: mov dword ptr [esp + eax*4 + 0x24], edx */
  W32((uint32_t)(esp + eax*4 + 0x24u), edx);
/* 8da0d4: mov dword ptr [esp + eax*4 + 0x28], edx */
  W32((uint32_t)(esp + eax*4 + 0x28u), edx);
/* 8da0d8: mov dword ptr [esp + eax*4 + 0x2c], edx */
  W32((uint32_t)(esp + eax*4 + 0x2cu), edx);
/* 8da0dc: mov dword ptr [esp + eax*4 + 0x30], edx */
  W32((uint32_t)(esp + eax*4 + 0x30u), edx);
/* 8da0e0: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8da0e3: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8da0e8: jl 0x8da0c0 */
  if ((sf != of)) goto L_8da0c0;
L_8da0ea: /* 8da0ea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8da0eb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8da0ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8da0ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8da0ee: xor ebx, ebx */
  ebx = 0;
L_8da0f0: /* 8da0f0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8da0f2: jne 0x8da0fb */
  if (!zf) goto L_8da0fb;
L_8da0f4: /* 8da0f4: mov esi, 1 */
  esi = 0x1u;
/* 8da0f9: jmp 0x8da100 */
  goto L_8da100;
L_8da0fb: /* 8da0fb: mov esi, ebx */
  esi = ebx;
/* 8da0fd: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
L_8da100: /* 8da100: mov edi, dword ptr [ecx + 0x28] */
  edi = R32((uint32_t)(ecx + 0x28u));
/* 8da103: lea edx, [edi + esi*4 + 8] */
  edx = (uint32_t)(edi + esi*4 + 0x8u);
/* 8da107: lea esi, [edi + esi*4 + 4] */
  esi = (uint32_t)(edi + esi*4 + 0x4u);
/* 8da10b: lea eax, [esp + ebx*4 + 0x84] */
  eax = (uint32_t)(esp + ebx*4 + 0x84u);
/* 8da112: mov edi, 4 */
  edi = 0x4u;
L_8da117: /* 8da117: mov ebp, dword ptr [edx - 8] */
  ebp = R32((uint32_t)(edx + 0xfffffff8u));
/* 8da11a: mov dword ptr [eax - 0x20], ebp */
  W32((uint32_t)(eax + 0xffffffe0u), ebp);
/* 8da11d: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 8da11f: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 8da121: mov ebp, dword ptr [edx] */
  ebp = R32((uint32_t)(edx));
/* 8da123: mov dword ptr [eax + 0x20], ebp */
  W32((uint32_t)(eax + 0x20u), ebp);
/* 8da126: mov ebp, dword ptr [edx + 4] */
  ebp = R32((uint32_t)(edx + 0x4u));
/* 8da129: mov dword ptr [eax + 0x40], ebp */
  W32((uint32_t)(eax + 0x40u), ebp);
/* 8da12c: mov ebp, dword ptr [edx + 8] */
  ebp = R32((uint32_t)(edx + 0x8u));
/* 8da12f: mov dword ptr [eax + 0x60], ebp */
  W32((uint32_t)(eax + 0x60u), ebp);
/* 8da132: mov ebp, dword ptr [edx + 0xc] */
  ebp = R32((uint32_t)(edx + 0xcu));
/* 8da135: mov dword ptr [eax + 0x80], ebp */
  W32((uint32_t)(eax + 0x80u), ebp);
/* 8da13b: mov ebp, dword ptr [edx + 0x10] */
  ebp = R32((uint32_t)(edx + 0x10u));
/* 8da13e: mov dword ptr [eax + 0xa0], ebp */
  W32((uint32_t)(eax + 0xa0u), ebp);
/* 8da144: add esi, 0x1c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8da147: add edx, 0x1c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8da14a: add eax, 0xe0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8da14f: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 8da150: jne 0x8da117 */
  if (!zf) goto L_8da117;
L_8da152: /* 8da152: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8da153: cmp ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8da156: jl 0x8da0f0 */
  if ((sf != of)) goto L_8da0f0;
L_8da158: /* 8da158: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* 8da15c: mov edi, 8 */
  edi = 0x8u;
/* 8da161: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 8da163: lea esi, [esp + 0x28] */
  esi = (uint32_t)(esp + 0x28u);
/* 8da167: mov edx, 0xc */
  edx = 0xcu;
/* 8da16c: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 8da16e: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 8da172: lea esi, [esp + 0x28] */
  esi = (uint32_t)(esp + 0x28u);
/* 8da176: mov edx, 0x10 */
  edx = 0x10u;
/* 8da17b: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 8da17d: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 8da181: lea esi, [esp + 0x28] */
  esi = (uint32_t)(esp + 0x28u);
/* 8da185: mov edx, 0x14 */
  edx = 0x14u;
/* 8da18a: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 8da18c: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 8da190: lea esi, [esp + 0x28] */
  esi = (uint32_t)(esp + 0x28u);
/* 8da194: mov edx, 0x18 */
  edx = 0x18u;
/* 8da199: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 8da19b: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 8da19f: mov edx, 0x1c */
  edx = 0x1cu;
/* 8da1a4: lea esi, [esp + 0x28] */
  esi = (uint32_t)(esp + 0x28u);
/* 8da1a8: xor eax, eax */
  eax = 0;
/* 8da1aa: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 8da1ac: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
L_8da1b0: /* 8da1b0: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 8da1b3: mov ebx, dword ptr [esp + eax*4 + 0x24] */
  ebx = R32((uint32_t)(esp + eax*4 + 0x24u));
/* 8da1b7: mov dword ptr [edx + eax*4], ebx */
  W32((uint32_t)(edx + eax*4), ebx);
/* 8da1ba: mov ebx, dword ptr [ecx + 0x28] */
  ebx = R32((uint32_t)(ecx + 0x28u));
/* 8da1bd: mov ebp, dword ptr [esp + eax*4 + 0x2c] */
  ebp = R32((uint32_t)(esp + eax*4 + 0x2cu));
/* 8da1c1: lea esi, [esp + eax*4 + 0x28] */
  esi = (uint32_t)(esp + eax*4 + 0x28u);
/* 8da1c5: mov dl, al */
  edx = (edx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 8da1c7: add dl, 0x10 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8da1ca: mov byte ptr [ebx + eax*4 + 3], dl */
  W8((uint32_t)(ebx + eax*4 + 0x3u), (edx & 0xffu));
/* 8da1ce: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 8da1d1: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* 8da1d3: mov dword ptr [edx + eax*4 + 4], ebx */
  W32((uint32_t)(edx + eax*4 + 0x4u), ebx);
/* 8da1d7: mov ebx, dword ptr [ecx + 0x28] */
  ebx = R32((uint32_t)(ecx + 0x28u));
/* 8da1da: mov dl, al */
  edx = (edx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 8da1dc: add dl, 0x11 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x11u);
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8da1df: mov byte ptr [ebx + eax*4 + 7], dl */
  W8((uint32_t)(ebx + eax*4 + 0x7u), (edx & 0xffu));
/* 8da1e3: mov ebx, dword ptr [ecx + 0x28] */
  ebx = R32((uint32_t)(ecx + 0x28u));
/* 8da1e6: lea edx, [esi + edi] */
  edx = (uint32_t)(esi + edi);
/* 8da1e9: mov dword ptr [edx + ebx], ebp */
  W32((uint32_t)(edx + ebx), ebp);
/* 8da1ec: mov ebx, dword ptr [ecx + 0x28] */
  ebx = R32((uint32_t)(ecx + 0x28u));
/* 8da1ef: mov ebp, dword ptr [esi + 8] */
  ebp = R32((uint32_t)(esi + 0x8u));
/* 8da1f2: mov dl, al */
  edx = (edx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 8da1f4: add dl, 0x12 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x12u);
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8da1f7: mov byte ptr [ebx + eax*4 + 0xb], dl */
  W8((uint32_t)(ebx + eax*4 + 0xbu), (edx & 0xffu));
/* 8da1fb: mov ebx, dword ptr [ecx + 0x28] */
  ebx = R32((uint32_t)(ecx + 0x28u));
/* 8da1fe: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 8da202: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8da204: mov dword ptr [edx + ebx], ebp */
  W32((uint32_t)(edx + ebx), ebp);
/* 8da207: mov ebx, dword ptr [ecx + 0x28] */
  ebx = R32((uint32_t)(ecx + 0x28u));
/* 8da20a: mov ebp, dword ptr [esi + 0xc] */
  ebp = R32((uint32_t)(esi + 0xcu));
/* 8da20d: mov dl, al */
  edx = (edx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 8da20f: add dl, 0x13 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x13u);
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8da212: mov byte ptr [ebx + eax*4 + 0xf], dl */
  W8((uint32_t)(ebx + eax*4 + 0xfu), (edx & 0xffu));
/* 8da216: mov ebx, dword ptr [ecx + 0x28] */
  ebx = R32((uint32_t)(ecx + 0x28u));
/* 8da219: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 8da21d: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8da21f: mov dword ptr [edx + ebx], ebp */
  W32((uint32_t)(edx + ebx), ebp);
/* 8da222: mov ebx, dword ptr [ecx + 0x28] */
  ebx = R32((uint32_t)(ecx + 0x28u));
/* 8da225: mov ebp, dword ptr [esi + 0x10] */
  ebp = R32((uint32_t)(esi + 0x10u));
/* 8da228: mov dl, al */
  edx = (edx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 8da22a: add dl, 0x14 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x14u);
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8da22d: mov byte ptr [ebx + eax*4 + 0x13], dl */
  W8((uint32_t)(ebx + eax*4 + 0x13u), (edx & 0xffu));
/* 8da231: mov ebx, dword ptr [ecx + 0x28] */
  ebx = R32((uint32_t)(ecx + 0x28u));
/* 8da234: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8da238: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8da23a: mov dword ptr [edx + ebx], ebp */
  W32((uint32_t)(edx + ebx), ebp);
/* 8da23d: mov ebx, dword ptr [ecx + 0x28] */
  ebx = R32((uint32_t)(ecx + 0x28u));
/* 8da240: mov ebp, dword ptr [esi + 0x14] */
  ebp = R32((uint32_t)(esi + 0x14u));
/* 8da243: mov dl, al */
  edx = (edx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 8da245: add dl, 0x15 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x15u);
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8da248: mov byte ptr [ebx + eax*4 + 0x17], dl */
  W8((uint32_t)(ebx + eax*4 + 0x17u), (edx & 0xffu));
/* 8da24c: mov ebx, dword ptr [ecx + 0x28] */
  ebx = R32((uint32_t)(ecx + 0x28u));
/* 8da24f: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 8da253: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8da255: mov dword ptr [edx + ebx], ebp */
  W32((uint32_t)(edx + ebx), ebp);
/* 8da258: mov ebx, dword ptr [ecx + 0x28] */
  ebx = R32((uint32_t)(ecx + 0x28u));
/* 8da25b: mov dl, al */
  edx = (edx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 8da25d: add dl, 0x16 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x16u);
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8da260: mov byte ptr [ebx + eax*4 + 0x1b], dl */
  W8((uint32_t)(ebx + eax*4 + 0x1bu), (edx & 0xffu));
/* 8da264: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 8da268: mov ebx, dword ptr [ecx + 0x28] */
  ebx = R32((uint32_t)(ecx + 0x28u));
/* 8da26b: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8da26d: mov esi, dword ptr [esi + 0x18] */
  esi = R32((uint32_t)(esi + 0x18u));
/* 8da270: mov dword ptr [edx + ebx], esi */
  W32((uint32_t)(edx + ebx), esi);
/* 8da273: mov esi, dword ptr [ecx + 0x28] */
  esi = R32((uint32_t)(ecx + 0x28u));
/* 8da276: mov dl, al */
  edx = (edx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* 8da278: add dl, 0x17 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x17u);
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8da27b: mov byte ptr [esi + eax*4 + 0x1f], dl */
  W8((uint32_t)(esi + eax*4 + 0x1fu), (edx & 0xffu));
/* 8da27f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8da282: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8da287: jl 0x8da1b0 */
  if ((sf != of)) goto L_8da1b0;
L_8da28d: /* 8da28d: mov eax, dword ptr [ecx + 0x28] */
  eax = R32((uint32_t)(ecx + 0x28u));
/* 8da290: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8da291: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8da292: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8da293: mov byte ptr [eax + 3], 0 */
  W8((uint32_t)(eax + 0x3u), 0x0u);
/* 8da297: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8da298: add esp, 0x414 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x414u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8da29e: ret  */
  esp += 4; SPILL(); return;
}

void f_8da320(void) {
  LOAD_REGS();
L_8da320: /* 8da320: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8da323: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8da327: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 8da32b: shr edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8da32e: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8da333: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8da334: movzx edx, dl */
  edx = (uint32_t)((edx & 0xffu));
/* 8da337: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8da338: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8da339: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 8da33d: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 8da341: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8da342: movzx edi, dl */
  edi = (uint32_t)((edx & 0xffu));
/* 8da345: movzx edx, dh */
  edx = (uint32_t)(((edx >> 8) & 0xffu));
/* 8da348: mov esi, ecx */
  esi = ecx;
/* 8da34a: mov ebp, 0x7fffffff */
  ebp = 0x7fffffffu;
/* 8da34f: mov ecx, eax */
  ecx = eax;
/* 8da351: mov ebx, ebp */
  ebx = ebp;
/* 8da353: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 8da357: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
/* 8da35b: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 8da35f: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 8da363: jge 0x8da3d7 */
  if ((sf == of)) goto L_8da3d7;
L_8da365: /* 8da365: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* 8da368: lea edi, [ecx + eax*4] */
  edi = (uint32_t)(ecx + eax*4);
/* 8da36b: jmp 0x8da370 */
  goto L_8da370;
L_8da370: /* 8da370: movzx esi, byte ptr [edi + 1] */
  esi = (uint32_t)(R8((uint32_t)(edi + 0x1u)));
/* 8da374: sub esi, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8da378: imul esi, esi */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(esi);
  esi = (uint32_t)r;
  }
/* 8da37b: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8da37d: jge 0x8da3b6 */
  if ((sf == of)) goto L_8da3b6;
L_8da37f: /* 8da37f: movzx ecx, byte ptr [edi + 2] */
  ecx = (uint32_t)(R8((uint32_t)(edi + 0x2u)));
/* 8da383: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 8da387: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 8da38b: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8da38d: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* 8da390: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 8da392: mov eax, ecx */
  eax = ecx;
/* 8da394: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 8da397: lea ecx, [eax + esi*2] */
  ecx = (uint32_t)(eax + esi*2);
/* 8da39a: mov eax, edx */
  eax = edx;
/* 8da39c: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 8da39f: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 8da3a2: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8da3a4: jge 0x8da3b6 */
  if ((sf == of)) goto L_8da3b6;
L_8da3a6: /* 8da3a6: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 8da3aa: lea ebx, [ecx + 7] */
  ebx = (uint32_t)(ecx + 0x7u);
/* 8da3ad: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 8da3b1: mov ebp, ecx */
  ebp = ecx;
/* 8da3b3: sar ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
L_8da3b6: /* 8da3b6: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 8da3ba: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8da3bb: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8da3be: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8da3c3: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 8da3c7: jl 0x8da370 */
  if ((sf != of)) goto L_8da370;
L_8da3c9: /* 8da3c9: mov al, byte ptr [esp + 0x24] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x24u))) & 0xffu);
/* 8da3cd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8da3ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8da3cf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8da3d0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8da3d1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8da3d4: ret 8 */
  esp += 12; SPILL(); return;
L_8da3d7: /* 8da3d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8da3d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8da3d9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8da3da: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 8da3dc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8da3dd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8da3e0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8da36d(void) {
  LOAD_REGS();
L_8da36d: /* 8da36d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8da370: /* 8da370: movzx esi, byte ptr [edi + 1] */
  esi = (uint32_t)(R8((uint32_t)(edi + 0x1u)));
/* 8da374: sub esi, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8da378: imul esi, esi */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(esi);
  esi = (uint32_t)r;
  }
/* 8da37b: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8da37d: jge 0x8da3b6 */
  if ((sf == of)) goto L_8da3b6;
L_8da37f: /* 8da37f: movzx ecx, byte ptr [edi + 2] */
  ecx = (uint32_t)(R8((uint32_t)(edi + 0x2u)));
/* 8da383: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 8da387: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 8da38b: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 8da38d: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* 8da390: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 8da392: mov eax, ecx */
  eax = ecx;
/* 8da394: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 8da397: lea ecx, [eax + esi*2] */
  ecx = (uint32_t)(eax + esi*2);
/* 8da39a: mov eax, edx */
  eax = edx;
/* 8da39c: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 8da39f: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 8da3a2: cmp ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8da3a4: jge 0x8da3b6 */
  if ((sf == of)) goto L_8da3b6;
L_8da3a6: /* 8da3a6: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 8da3aa: lea ebx, [ecx + 7] */
  ebx = (uint32_t)(ecx + 0x7u);
/* 8da3ad: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 8da3b1: mov ebp, ecx */
  ebp = ecx;
/* 8da3b3: sar ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
L_8da3b6: /* 8da3b6: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 8da3ba: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8da3bb: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8da3be: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8da3c3: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 8da3c7: jl 0x8da370 */
  if ((sf != of)) goto L_8da370;
L_8da3c9: /* 8da3c9: mov al, byte ptr [esp + 0x24] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x24u))) & 0xffu);
/* 8da3cd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8da3ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8da3cf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8da3d0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8da3d1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8da3d4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8da430(void) {
  LOAD_REGS();
L_8da430: /* 8da430: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8da433: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8da434: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8da435: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8da436: mov esi, dword ptr [esp + 0x50] */
  esi = R32((uint32_t)(esp + 0x50u));
/* 8da43a: mov ecx, 4 */
  ecx = 0x4u;
/* 8da43f: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8da441: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8da442: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 8da446: jge 0x8da44c */
  if ((sf == of)) goto L_8da44c;
L_8da448: /* 8da448: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
L_8da44c: /* 8da44c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8da44e: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 8da452: jge 0x8da458 */
  if ((sf == of)) goto L_8da458;
L_8da454: /* 8da454: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
L_8da458: /* 8da458: mov ecx, esi */
  ecx = esi;
/* 8da45a: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 8da45d: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 8da460: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* 8da464: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 8da468: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 8da46c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8da46d: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8da470: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8da472: mov edi, eax */
  edi = eax;
/* 8da474: sar edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 8da477: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 8da47f: mov dword ptr [esp + 0x34], edi */
  W32((uint32_t)(esp + 0x34u), edi);
L_8da483: /* 8da483: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8da486: mov eax, edi */
  eax = edi;
/* 8da488: jge 0x8da48f */
  if ((sf == of)) goto L_8da48f;
L_8da48a: /* 8da48a: mov eax, 1 */
  eax = 0x1u;
L_8da48f: /* 8da48f: cmp dword ptr [esp + 0x20], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8da493: jge 0x8da6a9 */
  if ((sf == of)) goto L_8da6a9;
L_8da499: /* 8da499: mov eax, esi */
  eax = esi;
/* 8da49b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8da49c: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8da49f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8da4a1: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8da4a4: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 8da4ac: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
L_8da4b0: /* 8da4b0: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8da4b3: jge 0x8da4ba */
  if ((sf == of)) goto L_8da4ba;
L_8da4b5: /* 8da4b5: mov eax, 1 */
  eax = 0x1u;
L_8da4ba: /* 8da4ba: cmp dword ptr [esp + 0x1c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x1cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8da4be: jge 0x8da692 */
  if ((sf == of)) goto L_8da692;
L_8da4c4: /* 8da4c4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8da4c6: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8da4c9: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 8da4cd: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8da4d0: mov edi, edx */
  edi = edx;
/* 8da4d2: mov ebx, edx */
  ebx = edx;
/* 8da4d4: mov eax, edx */
  eax = edx;
/* 8da4d6: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8da4d8: and eax, 0x300 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x300u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8da4dd: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 8da4e1: mov ecx, edx */
  ecx = edx;
/* 8da4e3: and ecx, 0xe000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xe000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8da4e9: and edi, 0xf800 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xf800u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 8da4ef: and ebx, 0x7e0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7e0u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8da4f5: shl edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8da4f8: or edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 8da4fa: mov ecx, edx */
  ecx = edx;
/* 8da4fc: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8da4ff: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8da502: shl ebx, 5 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 8da505: or ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 8da507: mov eax, edx */
  eax = edx;
/* 8da509: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8da50c: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8da50f: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 8da511: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8da515: mov eax, edx */
  eax = edx;
/* 8da517: shr eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8da51a: mov esi, edx */
  esi = edx;
/* 8da51c: mov ecx, eax */
  ecx = eax;
/* 8da51e: mov ebp, edx */
  ebp = edx;
/* 8da520: and ecx, 0x7000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8da526: and eax, 0xe000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8da52b: and esi, 0xf80000ff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xf80000ffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 8da531: or esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 8da533: mov ecx, edx */
  ecx = edx;
/* 8da535: and edx, 0x1f0000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1f0000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8da53b: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 8da53d: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8da541: or edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 8da543: shr eax, 0xd */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 13;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8da546: shr ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8da549: and ebp, 0x7e00000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x7e00000u);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8da54f: and ecx, 0x180000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x180000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8da555: or ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 8da557: shl edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8da55a: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 8da55c: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 8da560: mov edx, eax */
  edx = eax;
/* 8da562: shr ecx, 0xb */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8da565: or edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 8da567: shr esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 8da56a: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 8da56c: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 8da570: mov edx, ecx */
  edx = ecx;
/* 8da572: imul ecx, ecx, 0x15 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x15u);
  ecx = (uint32_t)r;
  }
/* 8da575: imul edx, edx, 0xb */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0xbu);
  edx = (uint32_t)r;
  }
/* 8da578: mov ebp, ebx */
  ebp = ebx;
/* 8da57a: imul ebx, ebx, 0xb */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0xbu);
  ebx = (uint32_t)r;
  }
/* 8da57d: imul ebp, ebp, 0x15 */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(0x15u);
  ebp = (uint32_t)r;
  }
/* 8da580: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8da582: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 8da586: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 8da58a: imul eax, eax, 0xb */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xbu);
  eax = (uint32_t)r;
  }
/* 8da58d: imul ebp, ebp, 0x15 */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(0x15u);
  ebp = (uint32_t)r;
  }
/* 8da590: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8da592: and eax, 0x1fe0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fe0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8da597: and edx, 0x1fe000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1fe000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8da59d: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 8da59f: mov eax, esi */
  eax = esi;
/* 8da5a1: imul eax, eax, 0xb */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xbu);
  eax = (uint32_t)r;
  }
/* 8da5a4: mov ebp, edi */
  ebp = edi;
/* 8da5a6: imul ebp, ebp, 0x15 */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(0x15u);
  ebp = (uint32_t)r;
  }
/* 8da5a9: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8da5ab: and eax, 0x1fe00000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fe00000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8da5b0: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 8da5b2: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 8da5b6: shr edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8da5b9: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8da5bb: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 8da5bf: and ecx, 0x1fe000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fe000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8da5c5: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8da5c9: imul eax, eax, 0x15 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x15u);
  eax = (uint32_t)r;
  }
/* 8da5cc: imul esi, esi, 0x15 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x15u);
  esi = (uint32_t)r;
  }
/* 8da5cf: imul edx, edx, 0xb */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0xbu);
  edx = (uint32_t)r;
  }
/* 8da5d2: imul edi, edi, 0xb */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0xbu);
  edi = (uint32_t)r;
  }
/* 8da5d5: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8da5d7: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8da5d9: mov edi, dword ptr [esp + 0x50] */
  edi = R32((uint32_t)(esp + 0x50u));
/* 8da5dd: and eax, 0x1fe0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fe0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8da5e2: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 8da5e4: and esi, 0x1fe00000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1fe00000u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 8da5ea: or ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 8da5ec: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 8da5f0: shr ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8da5f3: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 8da5f7: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 8da5fb: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8da5fd: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 8da601: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 8da603: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8da604: xor ebx, ebx */
  ebx = 0;
/* 8da606: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8da608: jle 0x8da669 */
  if ((zf || sf != of)) goto L_8da669;
L_8da60a: /* 8da60a: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 8da60e: mov edi, edi */
  edi = edi;
L_8da610: /* 8da610: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 8da614: xor esi, esi */
  esi = 0;
/* 8da616: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8da618: jle 0x8da659 */
  if ((zf || sf != of)) goto L_8da659;
L_8da61a: /* 8da61a: mov edx, edi */
  edx = edi;
/* 8da61c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8da620: /* 8da620: cmp edx, dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8da624: jae 0x8da6a9 */
  if (!cf) goto L_8da6a9;
L_8da62a: /* 8da62a: mov ecx, ebp */
  ecx = ebp;
/* 8da62c: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8da62f: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8da632: jne 0x8da63e */
  if (!zf) goto L_8da63e;
L_8da634: /* 8da634: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8da636: je 0x8da63e */
  if (zf) goto L_8da63e;
L_8da638: /* 8da638: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 8da63c: jmp 0x8da648 */
  goto L_8da648;
L_8da63e: /* 8da63e: mov ecx, dword ptr [esp + ecx*4 + 0x3c] */
  ecx = R32((uint32_t)(esp + ecx*4 + 0x3cu));
/* 8da642: or ecx, 0xff000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xff000000u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
L_8da648: /* 8da648: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8da64a: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 8da64e: shr ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* 8da651: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8da652: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8da655: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8da657: jl 0x8da620 */
  if ((sf != of)) goto L_8da620;
L_8da659: /* 8da659: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 8da65d: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 8da661: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8da662: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8da664: lea edi, [edi + edx*4] */
  edi = (uint32_t)(edi + edx*4);
/* 8da667: jl 0x8da610 */
  if ((sf != of)) goto L_8da610;
L_8da669: /* 8da669: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 8da66d: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 8da671: mov edi, dword ptr [esp + 0x34] */
  edi = R32((uint32_t)(esp + 0x34u));
/* 8da675: mov esi, dword ptr [esp + 0x54] */
  esi = R32((uint32_t)(esp + 0x54u));
/* 8da679: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8da67c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8da67d: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 8da681: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 8da685: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 8da689: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 8da68d: jmp 0x8da4b0 */
  goto L_8da4b0;
L_8da692: /* 8da692: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 8da696: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 8da699: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 8da69c: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* 8da6a0: inc dword ptr [esp + 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x20u), r);
  }
/* 8da6a4: jmp 0x8da483 */
  goto L_8da483;
L_8da6a9: /* 8da6a9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8da6aa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8da6ab: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8da6ac: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8da6ad: add esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8da6b0: ret  */
  esp += 4; SPILL(); return;
}

void f_8da770(void) {
  LOAD_REGS();
L_8da770: /* 8da770: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8da773: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8da774: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8da775: mov ebp, dword ptr [esp + 0x54] */
  ebp = R32((uint32_t)(esp + 0x54u));
/* 8da779: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8da77a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8da77b: mov edi, dword ptr [esp + 0x58] */
  edi = R32((uint32_t)(esp + 0x58u));
/* 8da77f: mov ecx, 4 */
  ecx = 0x4u;
/* 8da784: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8da786: mov dword ptr [esp + 0x5c], ecx */
  W32((uint32_t)(esp + 0x5cu), ecx);
/* 8da78a: jge 0x8da790 */
  if ((sf == of)) goto L_8da790;
L_8da78c: /* 8da78c: mov dword ptr [esp + 0x5c], edi */
  W32((uint32_t)(esp + 0x5cu), edi);
L_8da790: /* 8da790: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8da792: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 8da796: jge 0x8da79c */
  if ((sf == of)) goto L_8da79c;
L_8da798: /* 8da798: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
L_8da79c: /* 8da79c: mov ecx, edi */
  ecx = edi;
/* 8da79e: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 8da7a1: lea edx, [ebp + ecx*4] */
  edx = (uint32_t)(ebp + ecx*4);
/* 8da7a5: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 8da7a9: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 8da7ad: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8da7ae: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8da7b1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8da7b3: mov esi, eax */
  esi = eax;
/* 8da7b5: sar esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 8da7b8: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 8da7c0: mov dword ptr [esp + 0x38], esi */
  W32((uint32_t)(esp + 0x38u), esi);
L_8da7c4: /* 8da7c4: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8da7c7: mov dword ptr [esp + 0x54], ebp */
  W32((uint32_t)(esp + 0x54u), ebp);
/* 8da7cb: mov eax, esi */
  eax = esi;
/* 8da7cd: jge 0x8da7d4 */
  if ((sf == of)) goto L_8da7d4;
L_8da7cf: /* 8da7cf: mov eax, 1 */
  eax = 0x1u;
L_8da7d4: /* 8da7d4: cmp dword ptr [esp + 0x1c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x1cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8da7d8: jge 0x8daa22 */
  if ((sf == of)) goto L_8daa22;
L_8da7de: /* 8da7de: mov eax, edi */
  eax = edi;
/* 8da7e0: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8da7e1: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8da7e4: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8da7e6: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8da7e9: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 8da7f1: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
L_8da7f5: /* 8da7f5: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8da7f8: jge 0x8da7ff */
  if ((sf == of)) goto L_8da7ff;
L_8da7fa: /* 8da7fa: mov eax, 1 */
  eax = 0x1u;
L_8da7ff: /* 8da7ff: cmp dword ptr [esp + 0x18], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8da803: jge 0x8daa0d */
  if ((sf == of)) goto L_8daa0d;
L_8da809: /* 8da809: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8da80b: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8da80e: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 8da812: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 8da815: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 8da819: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 8da81d: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 8da820: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8da823: mov edi, edx */
  edi = edx;
/* 8da825: mov ebx, edx */
  ebx = edx;
/* 8da827: mov eax, edx */
  eax = edx;
/* 8da829: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8da82b: and eax, 0x300 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x300u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8da830: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 8da834: mov ecx, edx */
  ecx = edx;
/* 8da836: and ecx, 0xe000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xe000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8da83c: and edi, 0xf800 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xf800u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 8da842: and ebx, 0x7e0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7e0u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8da848: shl edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8da84b: or edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 8da84d: mov ecx, edx */
  ecx = edx;
/* 8da84f: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8da852: shl ebx, 5 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 8da855: or ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 8da857: mov eax, edx */
  eax = edx;
/* 8da859: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8da85c: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8da85f: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8da862: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 8da864: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8da868: mov eax, edx */
  eax = edx;
/* 8da86a: mov esi, edx */
  esi = edx;
/* 8da86c: shr eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8da86f: mov ecx, eax */
  ecx = eax;
/* 8da871: mov ebp, edx */
  ebp = edx;
/* 8da873: and ecx, 0x7000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8da879: and eax, 0xe000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8da87e: and esi, 0xf80000ff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xf80000ffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 8da884: or esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 8da886: mov ecx, edx */
  ecx = edx;
/* 8da888: and edx, 0x1f0000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1f0000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8da88e: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 8da890: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8da894: or edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 8da896: and ebp, 0x7e00000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x7e00000u);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8da89c: shr eax, 0xd */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 13;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8da89f: shr ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8da8a2: shl edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8da8a5: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 8da8a7: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 8da8ab: mov edx, eax */
  edx = eax;
/* 8da8ad: and ecx, 0x180000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x180000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8da8b3: or ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 8da8b5: shr ecx, 0xb */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8da8b8: or edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 8da8ba: shr esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 8da8bd: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 8da8bf: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 8da8c3: mov edx, ecx */
  edx = ecx;
/* 8da8c5: imul edx, edx, 0xb */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0xbu);
  edx = (uint32_t)r;
  }
/* 8da8c8: mov ebp, ebx */
  ebp = ebx;
/* 8da8ca: imul ebp, ebp, 0x15 */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(0x15u);
  ebp = (uint32_t)r;
  }
/* 8da8cd: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8da8cf: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 8da8d3: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 8da8d7: imul eax, eax, 0xb */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xbu);
  eax = (uint32_t)r;
  }
/* 8da8da: imul ebp, ebp, 0x15 */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(0x15u);
  ebp = (uint32_t)r;
  }
/* 8da8dd: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8da8df: and eax, 0x1fe0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fe0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8da8e4: and edx, 0x1fe000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1fe000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8da8ea: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 8da8ec: mov eax, esi */
  eax = esi;
/* 8da8ee: imul eax, eax, 0xb */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xbu);
  eax = (uint32_t)r;
  }
/* 8da8f1: mov ebp, edi */
  ebp = edi;
/* 8da8f3: imul ebp, ebp, 0x15 */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(0x15u);
  ebp = (uint32_t)r;
  }
/* 8da8f6: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8da8f8: and eax, 0x1fe00000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fe00000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8da8fd: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 8da8ff: shr edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8da902: imul ecx, ecx, 0x15 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x15u);
  ecx = (uint32_t)r;
  }
/* 8da905: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 8da909: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 8da90d: imul ebx, ebx, 0xb */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0xbu);
  ebx = (uint32_t)r;
  }
/* 8da910: imul esi, esi, 0x15 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x15u);
  esi = (uint32_t)r;
  }
/* 8da913: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8da917: imul eax, eax, 0x15 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x15u);
  eax = (uint32_t)r;
  }
/* 8da91a: imul edi, edi, 0xb */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0xbu);
  edi = (uint32_t)r;
  }
/* 8da91d: mov ebp, dword ptr [esp + 0x5c] */
  ebp = R32((uint32_t)(esp + 0x5cu));
/* 8da921: imul edx, edx, 0xb */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0xbu);
  edx = (uint32_t)r;
  }
/* 8da924: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8da926: and ecx, 0x1fe000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fe000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8da92c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8da92e: and eax, 0x1fe0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fe0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8da933: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 8da935: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 8da939: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8da93b: and esi, 0x1fe00000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1fe00000u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 8da941: or ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 8da943: shr ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8da946: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 8da94a: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 8da94e: xor edi, edi */
  edi = 0;
/* 8da950: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8da952: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 8da956: jle 0x8da9e4 */
  if ((zf || sf != of)) goto L_8da9e4;
L_8da95c: /* 8da95c: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 8da960: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 8da964: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 8da968: jmp 0x8da970 */
  goto L_8da970;
L_8da970: /* 8da970: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8da972: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 8da97a: jle 0x8da9d0 */
  if ((zf || sf != of)) goto L_8da9d0;
L_8da97c: /* 8da97c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8da980: /* 8da980: cmp eax, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8da984: jae 0x8daa22 */
  if (!cf) goto L_8daa22;
L_8da98a: /* 8da98a: cmp edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8da98d: jge 0x8da998 */
  if ((sf == of)) goto L_8da998;
L_8da98f: /* 8da98f: mov ebx, esi */
  ebx = esi;
/* 8da991: mov ebp, esi */
  ebp = esi;
/* 8da993: shr esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 8da996: jmp 0x8da99f */
  goto L_8da99f;
L_8da998: /* 8da998: mov ebx, edx */
  ebx = edx;
/* 8da99a: mov ebp, edx */
  ebp = edx;
/* 8da99c: shr edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
L_8da99f: /* 8da99f: and ebx, 0xf */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8da9a2: shl ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 8da9a5: or ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 8da9a7: mov ebp, ecx */
  ebp = ecx;
/* 8da9a9: shl ebx, 0x18 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 8da9ac: and ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8da9af: or ebx, dword ptr [esp + ebp*4 + 0x40] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + ebp*4 + 0x40u)));
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 8da9b3: mov ebp, dword ptr [esp + 0x5c] */
  ebp = R32((uint32_t)(esp + 0x5cu));
/* 8da9b7: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 8da9b9: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 8da9bd: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8da9c0: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8da9c1: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8da9c4: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8da9c6: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 8da9ca: jl 0x8da980 */
  if ((sf != of)) goto L_8da980;
L_8da9cc: /* 8da9cc: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
L_8da9d0: /* 8da9d0: mov ebx, dword ptr [esp + 0x58] */
  ebx = R32((uint32_t)(esp + 0x58u));
/* 8da9d4: lea eax, [eax + ebx*4] */
  eax = (uint32_t)(eax + ebx*4);
/* 8da9d7: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 8da9db: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8da9dc: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8da9de: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 8da9e2: jl 0x8da970 */
  if ((sf != of)) goto L_8da970;
L_8da9e4: /* 8da9e4: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 8da9e8: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 8da9ec: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 8da9f0: mov edi, dword ptr [esp + 0x58] */
  edi = R32((uint32_t)(esp + 0x58u));
/* 8da9f4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8da9f5: lea ebp, [ecx + ebp*4] */
  ebp = (uint32_t)(ecx + ebp*4);
/* 8da9f8: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 8da9fc: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 8daa00: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 8daa04: mov dword ptr [esp + 0x54], ebp */
  W32((uint32_t)(esp + 0x54u), ebp);
/* 8daa08: jmp 0x8da7f5 */
  goto L_8da7f5;
L_8daa0d: /* 8daa0d: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 8daa11: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 8daa14: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8daa15: lea ebp, [ebp + edx*4] */
  ebp = (uint32_t)(ebp + edx*4);
/* 8daa19: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 8daa1d: jmp 0x8da7c4 */
  goto L_8da7c4;
L_8daa22: /* 8daa22: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8daa23: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8daa24: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8daa25: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8daa26: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8daa29: ret  */
  esp += 4; SPILL(); return;
}

void f_8da96a(void) {
  LOAD_REGS();
  goto L_8da96a;
L_8da7c4: /* 8da7c4: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8da7c7: mov dword ptr [esp + 0x54], ebp */
  W32((uint32_t)(esp + 0x54u), ebp);
/* 8da7cb: mov eax, esi */
  eax = esi;
/* 8da7cd: jge 0x8da7d4 */
  if ((sf == of)) goto L_8da7d4;
L_8da7cf: /* 8da7cf: mov eax, 1 */
  eax = 0x1u;
L_8da7d4: /* 8da7d4: cmp dword ptr [esp + 0x1c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x1cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8da7d8: jge 0x8daa22 */
  if ((sf == of)) goto L_8daa22;
L_8da7de: /* 8da7de: mov eax, edi */
  eax = edi;
/* 8da7e0: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8da7e1: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8da7e4: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8da7e6: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8da7e9: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 8da7f1: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
L_8da7f5: /* 8da7f5: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8da7f8: jge 0x8da7ff */
  if ((sf == of)) goto L_8da7ff;
L_8da7fa: /* 8da7fa: mov eax, 1 */
  eax = 0x1u;
L_8da7ff: /* 8da7ff: cmp dword ptr [esp + 0x18], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8da803: jge 0x8daa0d */
  if ((sf == of)) goto L_8daa0d;
L_8da809: /* 8da809: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8da80b: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8da80e: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 8da812: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 8da815: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* 8da819: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 8da81d: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 8da820: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8da823: mov edi, edx */
  edi = edx;
/* 8da825: mov ebx, edx */
  ebx = edx;
/* 8da827: mov eax, edx */
  eax = edx;
/* 8da829: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8da82b: and eax, 0x300 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x300u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8da830: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* 8da834: mov ecx, edx */
  ecx = edx;
/* 8da836: and ecx, 0xe000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xe000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8da83c: and edi, 0xf800 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xf800u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 8da842: and ebx, 0x7e0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7e0u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8da848: shl edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8da84b: or edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 8da84d: mov ecx, edx */
  ecx = edx;
/* 8da84f: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8da852: shl ebx, 5 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 8da855: or ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 8da857: mov eax, edx */
  eax = edx;
/* 8da859: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8da85c: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8da85f: and ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8da862: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 8da864: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8da868: mov eax, edx */
  eax = edx;
/* 8da86a: mov esi, edx */
  esi = edx;
/* 8da86c: shr eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8da86f: mov ecx, eax */
  ecx = eax;
/* 8da871: mov ebp, edx */
  ebp = edx;
/* 8da873: and ecx, 0x7000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8da879: and eax, 0xe000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8da87e: and esi, 0xf80000ff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xf80000ffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 8da884: or esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 8da886: mov ecx, edx */
  ecx = edx;
/* 8da888: and edx, 0x1f0000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1f0000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8da88e: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 8da890: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8da894: or edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 8da896: and ebp, 0x7e00000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x7e00000u);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8da89c: shr eax, 0xd */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 13;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8da89f: shr ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8da8a2: shl edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8da8a5: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 8da8a7: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 8da8ab: mov edx, eax */
  edx = eax;
/* 8da8ad: and ecx, 0x180000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x180000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8da8b3: or ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 8da8b5: shr ecx, 0xb */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8da8b8: or edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 8da8ba: shr esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 8da8bd: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 8da8bf: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 8da8c3: mov edx, ecx */
  edx = ecx;
/* 8da8c5: imul edx, edx, 0xb */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0xbu);
  edx = (uint32_t)r;
  }
/* 8da8c8: mov ebp, ebx */
  ebp = ebx;
/* 8da8ca: imul ebp, ebp, 0x15 */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(0x15u);
  ebp = (uint32_t)r;
  }
/* 8da8cd: add edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8da8cf: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 8da8d3: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 8da8d7: imul eax, eax, 0xb */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xbu);
  eax = (uint32_t)r;
  }
/* 8da8da: imul ebp, ebp, 0x15 */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(0x15u);
  ebp = (uint32_t)r;
  }
/* 8da8dd: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8da8df: and eax, 0x1fe0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fe0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8da8e4: and edx, 0x1fe000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1fe000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8da8ea: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 8da8ec: mov eax, esi */
  eax = esi;
/* 8da8ee: imul eax, eax, 0xb */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xbu);
  eax = (uint32_t)r;
  }
/* 8da8f1: mov ebp, edi */
  ebp = edi;
/* 8da8f3: imul ebp, ebp, 0x15 */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(0x15u);
  ebp = (uint32_t)r;
  }
/* 8da8f6: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8da8f8: and eax, 0x1fe00000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fe00000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8da8fd: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 8da8ff: shr edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8da902: imul ecx, ecx, 0x15 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x15u);
  ecx = (uint32_t)r;
  }
/* 8da905: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 8da909: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 8da90d: imul ebx, ebx, 0xb */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0xbu);
  ebx = (uint32_t)r;
  }
/* 8da910: imul esi, esi, 0x15 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x15u);
  esi = (uint32_t)r;
  }
/* 8da913: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8da917: imul eax, eax, 0x15 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x15u);
  eax = (uint32_t)r;
  }
/* 8da91a: imul edi, edi, 0xb */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0xbu);
  edi = (uint32_t)r;
  }
/* 8da91d: mov ebp, dword ptr [esp + 0x5c] */
  ebp = R32((uint32_t)(esp + 0x5cu));
/* 8da921: imul edx, edx, 0xb */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0xbu);
  edx = (uint32_t)r;
  }
/* 8da924: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8da926: and ecx, 0x1fe000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fe000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8da92c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8da92e: and eax, 0x1fe0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fe0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8da933: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 8da935: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 8da939: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8da93b: and esi, 0x1fe00000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1fe00000u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 8da941: or ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 8da943: shr ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8da946: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 8da94a: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 8da94e: xor edi, edi */
  edi = 0;
/* 8da950: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8da952: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 8da956: jle 0x8da9e4 */
  if ((zf || sf != of)) goto L_8da9e4;
L_8da95c: /* 8da95c: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* 8da960: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 8da964: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 8da968: jmp 0x8da970 */
  goto L_8da970;
L_8da96a: /* 8da96a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8da970: /* 8da970: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8da972: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 8da97a: jle 0x8da9d0 */
  if ((zf || sf != of)) goto L_8da9d0;
L_8da97c: /* 8da97c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8da980: /* 8da980: cmp eax, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8da984: jae 0x8daa22 */
  if (!cf) goto L_8daa22;
L_8da98a: /* 8da98a: cmp edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8da98d: jge 0x8da998 */
  if ((sf == of)) goto L_8da998;
L_8da98f: /* 8da98f: mov ebx, esi */
  ebx = esi;
/* 8da991: mov ebp, esi */
  ebp = esi;
/* 8da993: shr esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 8da996: jmp 0x8da99f */
  goto L_8da99f;
L_8da998: /* 8da998: mov ebx, edx */
  ebx = edx;
/* 8da99a: mov ebp, edx */
  ebp = edx;
/* 8da99c: shr edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
L_8da99f: /* 8da99f: and ebx, 0xf */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8da9a2: shl ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* 8da9a5: or ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 8da9a7: mov ebp, ecx */
  ebp = ecx;
/* 8da9a9: shl ebx, 0x18 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 8da9ac: and ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8da9af: or ebx, dword ptr [esp + ebp*4 + 0x40] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + ebp*4 + 0x40u)));
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 8da9b3: mov ebp, dword ptr [esp + 0x5c] */
  ebp = R32((uint32_t)(esp + 0x5cu));
/* 8da9b7: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 8da9b9: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 8da9bd: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8da9c0: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8da9c1: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8da9c4: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8da9c6: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 8da9ca: jl 0x8da980 */
  if ((sf != of)) goto L_8da980;
L_8da9cc: /* 8da9cc: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
L_8da9d0: /* 8da9d0: mov ebx, dword ptr [esp + 0x58] */
  ebx = R32((uint32_t)(esp + 0x58u));
/* 8da9d4: lea eax, [eax + ebx*4] */
  eax = (uint32_t)(eax + ebx*4);
/* 8da9d7: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 8da9db: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8da9dc: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8da9de: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 8da9e2: jl 0x8da970 */
  if ((sf != of)) goto L_8da970;
L_8da9e4: /* 8da9e4: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 8da9e8: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 8da9ec: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 8da9f0: mov edi, dword ptr [esp + 0x58] */
  edi = R32((uint32_t)(esp + 0x58u));
/* 8da9f4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8da9f5: lea ebp, [ecx + ebp*4] */
  ebp = (uint32_t)(ecx + ebp*4);
/* 8da9f8: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 8da9fc: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 8daa00: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 8daa04: mov dword ptr [esp + 0x54], ebp */
  W32((uint32_t)(esp + 0x54u), ebp);
/* 8daa08: jmp 0x8da7f5 */
  goto L_8da7f5;
L_8daa0d: /* 8daa0d: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 8daa11: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 8daa14: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8daa15: lea ebp, [ebp + edx*4] */
  ebp = (uint32_t)(ebp + edx*4);
/* 8daa19: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 8daa1d: jmp 0x8da7c4 */
  goto L_8da7c4;
L_8daa22: /* 8daa22: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8daa23: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8daa24: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8daa25: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8daa26: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8daa29: ret  */
  esp += 4; SPILL(); return;
}

void f_8daae0(void) {
  LOAD_REGS();
L_8daae0: /* 8daae0: sub esp, 0x64 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8daae3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8daae4: mov ebx, dword ptr [esp + 0x70] */
  ebx = R32((uint32_t)(esp + 0x70u));
/* 8daae8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8daae9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8daaea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8daaeb: mov edi, ecx */
  edi = ecx;
/* 8daaed: mov ecx, 4 */
  ecx = 0x4u;
/* 8daaf2: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8daaf4: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 8daaf8: jge 0x8daafe */
  if ((sf == of)) goto L_8daafe;
L_8daafa: /* 8daafa: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
L_8daafe: /* 8daafe: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dab00: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 8dab04: jge 0x8dab0a */
  if ((sf == of)) goto L_8dab0a;
L_8dab06: /* 8dab06: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
L_8dab0a: /* 8dab0a: mov esi, dword ptr [esp + 0x78] */
  esi = R32((uint32_t)(esp + 0x78u));
/* 8dab0e: mov ecx, ebx */
  ecx = ebx;
/* 8dab10: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 8dab13: lea edx, [edi + ecx*4] */
  edx = (uint32_t)(edi + ecx*4);
/* 8dab16: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 8dab1a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8dab1b: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8dab1e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8dab20: xor ebp, ebp */
  ebp = 0;
/* 8dab22: mov ecx, eax */
  ecx = eax;
/* 8dab24: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 8dab27: mov dword ptr [esp + 0x20], ebp */
  W32((uint32_t)(esp + 0x20u), ebp);
/* 8dab2b: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
L_8dab2f: /* 8dab2f: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dab32: mov dword ptr [esp + 0x78], edi */
  W32((uint32_t)(esp + 0x78u), edi);
/* 8dab36: mov eax, ecx */
  eax = ecx;
/* 8dab38: jge 0x8dab3f */
  if ((sf == of)) goto L_8dab3f;
L_8dab3a: /* 8dab3a: mov eax, 1 */
  eax = 0x1u;
L_8dab3f: /* 8dab3f: cmp dword ptr [esp + 0x20], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dab43: jge 0x8daebd */
  if ((sf == of)) goto L_8daebd;
L_8dab49: /* 8dab49: mov eax, ebx */
  eax = ebx;
/* 8dab4b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8dab4c: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8dab4f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8dab51: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8dab54: mov dword ptr [esp + 0x1c], ebp */
  W32((uint32_t)(esp + 0x1cu), ebp);
/* 8dab58: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 8dab5c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8dab60: /* 8dab60: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dab63: jge 0x8dab6a */
  if ((sf == of)) goto L_8dab6a;
L_8dab65: /* 8dab65: mov eax, 1 */
  eax = 0x1u;
L_8dab6a: /* 8dab6a: cmp dword ptr [esp + 0x1c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x1cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dab6e: jge 0x8daea9 */
  if ((sf == of)) goto L_8daea9;
L_8dab74: /* 8dab74: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8dab77: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8dab79: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 8dab7c: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8dab7f: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 8dab83: mov ecx, dword ptr [esi - 8] */
  ecx = R32((uint32_t)(esi + 0xfffffff8u));
/* 8dab86: mov dword ptr [esp + 0x38], esi */
  W32((uint32_t)(esp + 0x38u), esi);
/* 8dab8a: mov esi, eax */
  esi = eax;
/* 8dab8c: movzx edi, ah */
  edi = (uint32_t)(((eax >> 8) & 0xffu));
/* 8dab8f: and esi, 0xff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 8dab95: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8dab97: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 8dab9b: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 8dab9f: jbe 0x8dac55 */
  if ((cf | zf)) goto L_8dac55;
L_8daba5: /* 8daba5: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 8daba8: lea ebx, [edi + eax*2] */
  ebx = (uint32_t)(edi + eax*2);
/* 8dabab: mov eax, 0x24924925 */
  eax = 0x24924925u;
/* 8dabb0: mul ebx */
  { uint64_t r = (uint64_t)eax * (uint64_t)(ebx); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 8dabb2: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 8dabb4: shr ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 8dabb6: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8dabb8: shr ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 8dabbb: shl ebx, 0x18 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 8dabbe: mov dword ptr [esp + 0x5c], ebx */
  W32((uint32_t)(esp + 0x5cu), ebx);
/* 8dabc2: lea edx, [esi + esi*4] */
  edx = (uint32_t)(esi + esi*4);
/* 8dabc5: lea ebx, [edx + edi*2] */
  ebx = (uint32_t)(edx + edi*2);
/* 8dabc8: mov eax, 0x24924925 */
  eax = 0x24924925u;
/* 8dabcd: mul ebx */
  { uint64_t r = (uint64_t)eax * (uint64_t)(ebx); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 8dabcf: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 8dabd1: shr ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 8dabd3: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8dabd5: shr ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 8dabd8: shl ebx, 0x18 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 8dabdb: mov dword ptr [esp + 0x60], ebx */
  W32((uint32_t)(esp + 0x60u), ebx);
/* 8dabdf: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 8dabe2: lea ebx, [eax + esi*4] */
  ebx = (uint32_t)(eax + esi*4);
/* 8dabe5: mov eax, 0x24924925 */
  eax = 0x24924925u;
/* 8dabea: mul ebx */
  { uint64_t r = (uint64_t)eax * (uint64_t)(ebx); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 8dabec: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 8dabee: shr ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 8dabf0: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8dabf2: shr ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 8dabf5: shl ebx, 0x18 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 8dabf8: mov dword ptr [esp + 0x64], ebx */
  W32((uint32_t)(esp + 0x64u), ebx);
/* 8dabfc: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 8dabff: lea ebx, [edx + edi*4] */
  ebx = (uint32_t)(edx + edi*4);
/* 8dac02: mov eax, 0x24924925 */
  eax = 0x24924925u;
/* 8dac07: mul ebx */
  { uint64_t r = (uint64_t)eax * (uint64_t)(ebx); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 8dac09: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 8dac0b: shr ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 8dac0d: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8dac0f: shr ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 8dac12: shl ebx, 0x18 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 8dac15: mov dword ptr [esp + 0x68], ebx */
  W32((uint32_t)(esp + 0x68u), ebx);
/* 8dac19: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* 8dac1c: lea ebx, [eax + esi*2] */
  ebx = (uint32_t)(eax + esi*2);
/* 8dac1f: mov eax, 0x24924925 */
  eax = 0x24924925u;
/* 8dac24: mul ebx */
  { uint64_t r = (uint64_t)eax * (uint64_t)(ebx); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 8dac26: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 8dac28: shr ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 8dac2a: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8dac2c: shr ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 8dac2f: shl ebx, 0x18 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 8dac32: mov dword ptr [esp + 0x6c], ebx */
  W32((uint32_t)(esp + 0x6cu), ebx);
/* 8dac36: lea edx, [edi + edi*2] */
  edx = (uint32_t)(edi + edi*2);
/* 8dac39: lea ebx, [esi + edx*2] */
  ebx = (uint32_t)(esi + edx*2);
/* 8dac3c: mov eax, 0x24924925 */
  eax = 0x24924925u;
/* 8dac41: mul ebx */
  { uint64_t r = (uint64_t)eax * (uint64_t)(ebx); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 8dac43: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 8dac45: shr ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 8dac47: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8dac49: shr ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 8dac4c: shl ebx, 0x18 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 8dac4f: mov dword ptr [esp + 0x70], ebx */
  W32((uint32_t)(esp + 0x70u), ebx);
/* 8dac53: jmp 0x8dacb7 */
  goto L_8dacb7;
L_8dac55: /* 8dac55: lea edx, [edi + esi*4] */
  edx = (uint32_t)(edi + esi*4);
/* 8dac58: mov eax, 0xcccccccd */
  eax = 0xcccccccdu;
/* 8dac5d: mul edx */
  { uint64_t r = (uint64_t)eax * (uint64_t)(edx); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 8dac5f: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8dac62: shl edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8dac65: mov dword ptr [esp + 0x5c], edx */
  W32((uint32_t)(esp + 0x5cu), edx);
/* 8dac69: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 8dac6c: lea edx, [eax + edi*2] */
  edx = (uint32_t)(eax + edi*2);
/* 8dac6f: mov eax, 0xcccccccd */
  eax = 0xcccccccdu;
/* 8dac74: mul edx */
  { uint64_t r = (uint64_t)eax * (uint64_t)(edx); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 8dac76: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8dac79: shl edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8dac7c: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 8dac80: lea eax, [edi + edi*2] */
  eax = (uint32_t)(edi + edi*2);
/* 8dac83: lea edx, [eax + esi*2] */
  edx = (uint32_t)(eax + esi*2);
/* 8dac86: mov eax, 0xcccccccd */
  eax = 0xcccccccdu;
/* 8dac8b: mul edx */
  { uint64_t r = (uint64_t)eax * (uint64_t)(edx); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 8dac8d: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8dac90: shl edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8dac93: mov dword ptr [esp + 0x64], edx */
  W32((uint32_t)(esp + 0x64u), edx);
/* 8dac97: lea edx, [esi + edi*4] */
  edx = (uint32_t)(esi + edi*4);
/* 8dac9a: mov eax, 0xcccccccd */
  eax = 0xcccccccdu;
/* 8dac9f: mul edx */
  { uint64_t r = (uint64_t)eax * (uint64_t)(edx); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 8daca1: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8daca4: shl edx, 0x18 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8daca7: mov dword ptr [esp + 0x68], edx */
  W32((uint32_t)(esp + 0x68u), edx);
/* 8dacab: mov dword ptr [esp + 0x6c], ebp */
  W32((uint32_t)(esp + 0x6cu), ebp);
/* 8dacaf: mov dword ptr [esp + 0x70], 0xff000000 */
  W32((uint32_t)(esp + 0x70u), 0xff000000u);
L_8dacb7: /* 8dacb7: mov edx, ecx */
  edx = ecx;
/* 8dacb9: mov eax, ecx */
  eax = ecx;
/* 8dacbb: and eax, 0xe000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8dacc0: shl esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8dacc3: shl edi, 0x18 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8dacc6: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8dacc8: mov dword ptr [esp + 0x54], esi */
  W32((uint32_t)(esp + 0x54u), esi);
/* 8daccc: mov esi, ecx */
  esi = ecx;
/* 8dacce: mov dword ptr [esp + 0x58], edi */
  W32((uint32_t)(esp + 0x58u), edi);
/* 8dacd2: mov edi, ecx */
  edi = ecx;
/* 8dacd4: and edx, 0x300 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x300u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8dacda: mov ebx, ecx */
  ebx = ecx;
/* 8dacdc: and esi, 0xf800 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xf800u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 8dace2: and edi, 0x7e0 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7e0u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 8dace8: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8daceb: or esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 8daced: mov eax, ecx */
  eax = ecx;
/* 8dacef: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8dacf2: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8dacf5: shl edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8dacf8: or edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 8dacfa: mov edx, ecx */
  edx = ecx;
/* 8dacfc: shr ebx, 5 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 8dacff: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8dad02: mov ebp, ecx */
  ebp = ecx;
/* 8dad04: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8dad07: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 8dad09: mov edx, ecx */
  edx = ecx;
/* 8dad0b: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8dad0f: mov eax, ebx */
  eax = ebx;
/* 8dad11: and eax, 0x7000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8dad16: and ebx, 0xe000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xe000u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8dad1c: and edx, 0xf80000ff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xf80000ffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8dad22: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 8dad24: mov eax, ecx */
  eax = ecx;
/* 8dad26: and ecx, 0x1f0000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1f0000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8dad2c: or ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 8dad2e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8dad32: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 8dad34: shr eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8dad37: and ebp, 0x7e00000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x7e00000u);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8dad3d: shr ebx, 0xd */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 13;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 8dad40: and eax, 0x180000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x180000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8dad45: or eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 8dad47: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8dad4a: or ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 8dad4c: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 8dad50: mov ecx, ebx */
  ecx = ebx;
/* 8dad52: shr eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8dad55: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 8dad57: shr edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8dad5a: or ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 8dad5c: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 8dad60: mov ecx, eax */
  ecx = eax;
/* 8dad62: imul eax, eax, 0x15 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x15u);
  eax = (uint32_t)r;
  }
/* 8dad65: imul ecx, ecx, 0xb */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0xbu);
  ecx = (uint32_t)r;
  }
/* 8dad68: mov ebp, edi */
  ebp = edi;
/* 8dad6a: imul edi, edi, 0xb */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0xbu);
  edi = (uint32_t)r;
  }
/* 8dad6d: imul ebp, ebp, 0x15 */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(0x15u);
  ebp = (uint32_t)r;
  }
/* 8dad70: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8dad72: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
/* 8dad76: mov dword ptr [esp + 0x2c], ebx */
  W32((uint32_t)(esp + 0x2cu), ebx);
/* 8dad7a: imul ebx, ebx, 0xb */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0xbu);
  ebx = (uint32_t)r;
  }
/* 8dad7d: imul ebp, ebp, 0x15 */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(0x15u);
  ebp = (uint32_t)r;
  }
/* 8dad80: add ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8dad82: and ebx, 0x1fe0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1fe0u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8dad88: and ecx, 0x1fe000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fe000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8dad8e: or ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 8dad90: mov ebx, edx */
  ebx = edx;
/* 8dad92: imul ebx, ebx, 0xb */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0xbu);
  ebx = (uint32_t)r;
  }
/* 8dad95: mov ebp, esi */
  ebp = esi;
/* 8dad97: imul ebp, ebp, 0x15 */
  { int64_t r = (int64_t)(int32_t)(ebp) * (int64_t)(int32_t)(0x15u);
  ebp = (uint32_t)r;
  }
/* 8dad9a: add ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8dad9c: and ebx, 0x1fe00000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1fe00000u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8dada2: or ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 8dada4: shr ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8dada7: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 8dadab: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 8dadaf: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8dadb1: and eax, 0x1fe000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fe000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8dadb6: imul ecx, ecx, 0x15 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x15u);
  ecx = (uint32_t)r;
  }
/* 8dadb9: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 8dadbd: imul edx, edx, 0x15 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x15u);
  edx = (uint32_t)r;
  }
/* 8dadc0: imul esi, esi, 0xb */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0xbu);
  esi = (uint32_t)r;
  }
/* 8dadc3: imul edi, edi, 0xb */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0xbu);
  edi = (uint32_t)r;
  }
/* 8dadc6: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8dadc8: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 8dadcc: and ecx, 0x1fe0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fe0u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8dadd2: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 8dadd4: mov ecx, dword ptr [esp + 0x78] */
  ecx = R32((uint32_t)(esp + 0x78u));
/* 8dadd8: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8dadda: and edx, 0x1fe00000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1fe00000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8dade0: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 8dade2: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 8dade6: shr eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8dade9: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* 8daded: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 8dadf1: xor ebx, ebx */
  ebx = 0;
/* 8dadf3: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8dadf6: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8dadf8: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 8dadfc: mov dword ptr [esp + 0x2c], ebx */
  W32((uint32_t)(esp + 0x2cu), ebx);
/* 8dae00: jle 0x8dae83 */
  if ((zf || sf != of)) goto L_8dae83;
L_8dae06: /* 8dae06: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 8dae0a: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 8dae0e: mov edi, edi */
  edi = edi;
L_8dae10: /* 8dae10: mov edx, ebx */
  edx = ebx;
/* 8dae12: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 8dae13: je 0x8dae1f */
  if (zf) goto L_8dae1f;
L_8dae15: /* 8dae15: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 8dae16: jne 0x8dae2d */
  if (!zf) goto L_8dae2d;
L_8dae18: /* 8dae18: mov eax, ebp */
  eax = ebp;
/* 8dae1a: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8dae1d: jmp 0x8dae2d */
  goto L_8dae2d;
L_8dae1f: /* 8dae1f: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 8dae23: mov edx, ebp */
  edx = ebp;
/* 8dae25: shr eax, 0x1c */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 28;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8dae28: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8dae2b: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_8dae2d: /* 8dae2d: xor edx, edx */
  edx = 0;
/* 8dae2f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8dae31: jle 0x8dae6b */
  if ((zf || sf != of)) goto L_8dae6b;
L_8dae33: /* 8dae33: cmp ecx, dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8dae37: jae 0x8daebd */
  if (!cf) goto L_8daebd;
L_8dae3d: /* 8dae3d: mov ebx, eax */
  ebx = eax;
/* 8dae3f: and ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8dae42: mov ebx, dword ptr [esp + ebx*4 + 0x54] */
  ebx = R32((uint32_t)(esp + ebx*4 + 0x54u));
/* 8dae46: mov ebp, esi */
  ebp = esi;
/* 8dae48: and ebp, 3 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8dae4b: or ebx, dword ptr [esp + ebp*4 + 0x44] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + ebp*4 + 0x44u)));
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 8dae4f: shr esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 8dae52: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8dae55: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8dae57: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8dae58: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8dae5b: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dae5d: jl 0x8dae33 */
  if ((sf != of)) goto L_8dae33;
L_8dae5f: /* 8dae5f: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 8dae63: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8dae67: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
L_8dae6b: /* 8dae6b: mov edx, dword ptr [esp + 0x7c] */
  edx = R32((uint32_t)(esp + 0x7cu));
/* 8dae6f: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 8dae72: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 8dae76: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8dae77: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dae79: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 8dae7d: mov dword ptr [esp + 0x2c], ebx */
  W32((uint32_t)(esp + 0x2cu), ebx);
/* 8dae81: jl 0x8dae10 */
  if ((sf != of)) goto L_8dae10;
L_8dae83: /* 8dae83: mov eax, dword ptr [esp + 0x78] */
  eax = R32((uint32_t)(esp + 0x78u));
/* 8dae87: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* 8dae8b: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 8dae8f: mov ebx, dword ptr [esp + 0x7c] */
  ebx = R32((uint32_t)(esp + 0x7cu));
/* 8dae93: lea edi, [eax + edi*4] */
  edi = (uint32_t)(eax + edi*4);
/* 8dae96: inc dword ptr [esp + 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x1cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x1cu), r);
  }
/* 8dae9a: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 8dae9e: mov dword ptr [esp + 0x78], edi */
  W32((uint32_t)(esp + 0x78u), edi);
/* 8daea2: xor ebp, ebp */
  ebp = 0;
/* 8daea4: jmp 0x8dab60 */
  goto L_8dab60;
L_8daea9: /* 8daea9: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 8daead: lea edx, [ebx + ebx*2] */
  edx = (uint32_t)(ebx + ebx*2);
/* 8daeb0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8daeb1: lea edi, [edi + edx*4] */
  edi = (uint32_t)(edi + edx*4);
/* 8daeb4: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 8daeb8: jmp 0x8dab2f */
  goto L_8dab2f;
L_8daebd: /* 8daebd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8daebe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8daebf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8daec0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8daec1: add esp, 0x64 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8daec4: ret  */
  esp += 4; SPILL(); return;
}

void f_8dafd0(void) {
  LOAD_REGS();
L_8dafd0: /* 8dafd0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8dafd1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8dafd2: mov esi, ecx */
  esi = ecx;
/* 8dafd4: mov ecx, dword ptr [0xce9ec0] */
  ecx = R32((uint32_t)(0xce9ec0u));
/* 8dafda: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dafdc: mov ebx, dword ptr [esi + 0xc] */
  ebx = R32((uint32_t)(esi + 0xcu));
/* 8dafdf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8dafe0: mov edi, dword ptr [ebx + 0x84] */
  edi = R32((uint32_t)(ebx + 0x84u));
/* 8dafe6: je 0x8daff7 */
  if (zf) goto L_8daff7;
L_8dafe8: /* 8dafe8: movzx eax, byte ptr [ebx + 0x80] */
  eax = (uint32_t)(R8((uint32_t)(ebx + 0x80u)));
/* 8dafef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8daff0: call 0x6c2e32 */
  esp -= 4; W32(esp, 0x8daff5u); SPILL(); f_6c2e32(); if (g_unwind) return; RELOAD();
/* 8daff5: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_8daff7: /* 8daff7: mov eax, dword ptr [ebx + 0x8c] */
  eax = R32((uint32_t)(ebx + 0x8cu));
/* 8daffd: mov ebx, dword ptr [ebx + 0x88] */
  ebx = R32((uint32_t)(ebx + 0x88u));
/* 8db003: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db005: jge 0x8db00b */
  if ((sf == of)) goto L_8db00b;
L_8db007: /* 8db007: mov edi, ebx */
  edi = ebx;
/* 8db009: jmp 0x8db011 */
  goto L_8db011;
L_8db00b: /* 8db00b: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db00d: jl 0x8db011 */
  if ((sf != of)) goto L_8db011;
L_8db00f: /* 8db00f: mov edi, eax */
  edi = eax;
L_8db011: /* 8db011: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8db013: mov ecx, esi */
  ecx = esi;
/* 8db015: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x8db018u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8db018: mov ecx, edi */
  ecx = edi;
/* 8db01a: sar eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
  }
/* 8db01c: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db01f: jge 0x8db046 */
  if ((sf == of)) goto L_8db046;
L_8db021: /* 8db021: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8db023: mov ecx, esi */
  ecx = esi;
/* 8db025: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0x8db028u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8db028: mov ecx, edi */
  ecx = edi;
/* 8db02a: sar eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
  }
/* 8db02c: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db02f: jge 0x8db046 */
  if ((sf == of)) goto L_8db046;
L_8db031: /* 8db031: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8db033: jle 0x8db046 */
  if ((zf || sf != of)) goto L_8db046;
L_8db035: /* 8db035: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8db037: mov ecx, esi */
  ecx = esi;
/* 8db039: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 8db03a: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x8db03du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8db03d: mov ecx, edi */
  ecx = edi;
/* 8db03f: sar eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
  }
/* 8db041: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db044: jl 0x8db021 */
  if ((sf != of)) goto L_8db021;
L_8db046: /* 8db046: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 8db049: mov eax, dword ptr [eax + 0x88] */
  eax = R32((uint32_t)(eax + 0x88u));
/* 8db04f: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db051: jl 0x8db055 */
  if ((sf != of)) goto L_8db055;
L_8db053: /* 8db053: mov eax, edi */
  eax = edi;
L_8db055: /* 8db055: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8db056: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8db057: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8db058: ret  */
  esp += 4; SPILL(); return;
}

void f_8db090(void) {
  LOAD_REGS();
L_8db090: /* 8db090: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 8db093: mov eax, dword ptr [eax + 0x90] */
  eax = R32((uint32_t)(eax + 0x90u));
/* 8db099: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db09c: jg 0x8db0a3 */
  if ((!zf && sf == of)) goto L_8db0a3;
L_8db09e: /* 8db09e: mov eax, 1 */
  eax = 0x1u;
L_8db0a3: /* 8db0a3: ret  */
  esp += 4; SPILL(); return;
}

void f_8db0c0(void) {
  LOAD_REGS();
L_8db0c0: /* 8db0c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8db0c1: mov ebp, esp */
  ebp = esp;
/* 8db0c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8db0c5: push 0x9d85c0 */
  { uint32_t v = 0x9d85c0u; esp -= 4; W32(esp, v); }
/* 8db0ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8db0d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8db0d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8db0d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8db0db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8db0dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8db0dd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8db0e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8db0e1: mov edi, ecx */
  edi = ecx;
/* 8db0e3: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 8db0e6: test byte ptr [eax + 0x7c], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x7cu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8db0ea: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8db0ed: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8db0f4: jne 0x8db109 */
  if (!zf) goto L_8db109;
L_8db0f6: /* 8db0f6: mov edx, dword ptr [eax + 0xac] */
  edx = R32((uint32_t)(eax + 0xacu));
/* 8db0fc: lea ecx, [esi + esi*4] */
  ecx = (uint32_t)(esi + esi*4);
/* 8db0ff: mov eax, dword ptr [edx + ecx*8 + 0x10] */
  eax = R32((uint32_t)(edx + ecx*8 + 0x10u));
/* 8db103: lea ecx, [edx + ecx*8 + 0x10] */
  ecx = (uint32_t)(edx + ecx*8 + 0x10u);
/* 8db107: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8db109u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8db109: /* 8db109: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 8db10c: mov edx, dword ptr [eax + 0xac] */
  edx = R32((uint32_t)(eax + 0xacu));
/* 8db112: lea ecx, [esi + esi*4] */
  ecx = (uint32_t)(esi + esi*4);
/* 8db115: mov eax, dword ptr [edx + ecx*8 + 0x1c] */
  eax = R32((uint32_t)(edx + ecx*8 + 0x1cu));
/* 8db119: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8db11c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8db11d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8db11e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8db125: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8db126: mov esp, ebp */
  esp = ebp;
/* 8db128: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8db129: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8db12c(void) {
  LOAD_REGS();
L_8db12c: /* 8db12c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8db12f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8db134: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8db137: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8db138: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8db13b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8db140u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8db140(); return;
}

void f_8db140(void) {
  LOAD_REGS();
L_8db140: /* 8db140: push 0xa1d418 */
  { uint32_t v = 0xa1d418u; esp -= 4; W32(esp, v); }
/* 8db145: push 0xaed858 */
  { uint32_t v = 0xaed858u; esp -= 4; W32(esp, v); }
/* 8db14a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8db150u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8db150: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8db153: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8db155: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8db157: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8db15cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8db15c: guest_badaddr(0x8db15c); return;
}

void f_8db190(void) {
  LOAD_REGS();
L_8db190: /* 8db190: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8db191: mov ebp, esp */
  ebp = esp;
/* 8db193: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8db195: push 0x9d85d0 */
  { uint32_t v = 0x9d85d0u; esp -= 4; W32(esp, v); }
/* 8db19a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8db1a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8db1a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8db1a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8db1ab: mov eax, dword ptr [0xcfa504] */
  eax = R32((uint32_t)(0xcfa504u));
/* 8db1b0: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db1b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8db1b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8db1b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8db1b6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8db1b9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8db1c0: jne 0x8db1e0 */
  if (!zf) goto L_8db1e0;
L_8db1c2: /* 8db1c2: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* 8db1c5: test byte ptr [ecx + 0x7c], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x7cu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8db1c9: jne 0x8db1e0 */
  if (!zf) goto L_8db1e0;
L_8db1cb: /* 8db1cb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8db1ce: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 8db1d1: mov eax, dword ptr [ecx + 0xac] */
  eax = R32((uint32_t)(ecx + 0xacu));
/* 8db1d7: lea ecx, [eax + edx*8 + 0x10] */
  ecx = (uint32_t)(eax + edx*8 + 0x10u);
/* 8db1db: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8db1dd: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x8db1e0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8db1e0: /* 8db1e0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8db1e3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8db1e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8db1e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8db1ec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8db1ed: mov esp, ebp */
  esp = ebp;
/* 8db1ef: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8db1f0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8db1f3(void) {
  LOAD_REGS();
L_8db1f3: /* 8db1f3: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8db1f6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8db1fb: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8db1fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8db1ff: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8db202: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8db207u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8db207(); return;
}

void f_8db207(void) {
  LOAD_REGS();
L_8db207: /* 8db207: push 0xa1d470 */
  { uint32_t v = 0xa1d470u; esp -= 4; W32(esp, v); }
/* 8db20c: push 0xaed860 */
  { uint32_t v = 0xaed860u; esp -= 4; W32(esp, v); }
/* 8db211: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8db217u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8db217: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8db21a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8db21c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8db21e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8db223u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8db223: guest_badaddr(0x8db223); return;
}

void f_8db260(void) {
  LOAD_REGS();
L_8db260: /* 8db260: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8db261: mov ebp, esp */
  ebp = esp;
/* 8db263: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8db265: push 0x9d85e0 */
  { uint32_t v = 0x9d85e0u; esp -= 4; W32(esp, v); }
/* 8db26a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8db270: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8db271: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8db278: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8db27b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8db27c: mov ebx, ecx */
  ebx = ecx;
/* 8db27e: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 8db281: mov edx, dword ptr [eax + 0xac] */
  edx = R32((uint32_t)(eax + 0xacu));
/* 8db287: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8db288: movzx esi, byte ptr [eax + 0x38] */
  esi = (uint32_t)(R8((uint32_t)(eax + 0x38u)));
/* 8db28c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8db28d: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8db290: lea ecx, [edi + edi*4] */
  ecx = (uint32_t)(edi + edi*4);
/* 8db293: lea ecx, [edx + ecx*8] */
  ecx = (uint32_t)(edx + ecx*8);
/* 8db296: test byte ptr [eax + 0x7c], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x7cu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8db29a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8db29d: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 8db2a0: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8db2a7: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 8db2aa: jne 0x8db2b7 */
  if (!zf) goto L_8db2b7;
L_8db2ac: /* 8db2ac: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 8db2af: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db2b2: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8db2b4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8db2b4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_8db2b7: /* 8db2b7: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* 8db2ba: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8db2bc: jne 0x8db2f4 */
  if (!zf) goto L_8db2f4;
L_8db2be: /* 8db2be: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 8db2c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8db2c2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8db2c3: call dword ptr [0xcfa884] */
  esp -= 4; W32(esp, 0x8db2c9u); SPILL(); f_4e2cde(); if (g_unwind) return; /* Core!?GetPathName@UObject@@QBEPBGPAV1@PAG@Z */ RELOAD();
/* 8db2c9: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 8db2cf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8db2d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8db2d2: push 0xaed868 */
  { uint32_t v = 0xaed868u; esp -= 4; W32(esp, v); }
/* 8db2d7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8db2d8: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8db2deu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8db2de: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8db2e1: /* 8db2e1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8db2e4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8db2eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8db2ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8db2ed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8db2ee: mov esp, ebp */
  esp = ebp;
/* 8db2f0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8db2f1: ret 0x14 */
  esp += 24; SPILL(); return;
L_8db2f4: /* 8db2f4: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 8db2f7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8db2f9: je 0x8db627 */
  if (zf) goto L_8db627;
L_8db2ff: /* 8db2ff: mov cl, byte ptr [0xceb680] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xceb680u))) & 0xffu);
/* 8db305: mov eax, 1 */
  eax = 0x1u;
/* 8db30a: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8db30c: jne 0x8db443 */
  if (!zf) goto L_8db443;
L_8db312: /* 8db312: mov ecx, dword ptr [0xceb680] */
  ecx = R32((uint32_t)(0xceb680u));
/* 8db318: mov bl, 0xff */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
/* 8db31a: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 8db31c: mov al, 0x80 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x80u) & 0xffu);
/* 8db31e: mov dword ptr [0xceb680], ecx */
  W32((uint32_t)(0xceb680u), ecx);
/* 8db324: mov cl, 0xc0 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0xc0u) & 0xffu);
/* 8db326: mov byte ptr [0xceb644], 0 */
  W8((uint32_t)(0xceb644u), 0x0u);
/* 8db32d: mov byte ptr [0xceb645], 0 */
  W8((uint32_t)(0xceb645u), 0x0u);
/* 8db334: mov byte ptr [0xceb646], bl */
  W8((uint32_t)(0xceb646u), (ebx & 0xffu));
/* 8db33a: mov byte ptr [0xceb647], al */
  W8((uint32_t)(0xceb647u), (eax & 0xffu));
/* 8db33f: mov byte ptr [0xceb648], bl */
  W8((uint32_t)(0xceb648u), (ebx & 0xffu));
/* 8db345: mov byte ptr [0xceb649], 0 */
  W8((uint32_t)(0xceb649u), 0x0u);
/* 8db34c: mov byte ptr [0xceb64a], 0 */
  W8((uint32_t)(0xceb64au), 0x0u);
/* 8db353: mov byte ptr [0xceb64b], al */
  W8((uint32_t)(0xceb64bu), (eax & 0xffu));
/* 8db358: mov byte ptr [0xceb64c], 0 */
  W8((uint32_t)(0xceb64cu), 0x0u);
/* 8db35f: mov byte ptr [0xceb64d], bl */
  W8((uint32_t)(0xceb64du), (ebx & 0xffu));
/* 8db365: mov byte ptr [0xceb64e], 0 */
  W8((uint32_t)(0xceb64eu), 0x0u);
/* 8db36c: mov byte ptr [0xceb64f], al */
  W8((uint32_t)(0xceb64fu), (eax & 0xffu));
/* 8db371: mov byte ptr [0xceb650], bl */
  W8((uint32_t)(0xceb650u), (ebx & 0xffu));
/* 8db377: mov byte ptr [0xceb651], 0 */
  W8((uint32_t)(0xceb651u), 0x0u);
/* 8db37e: mov byte ptr [0xceb652], bl */
  W8((uint32_t)(0xceb652u), (ebx & 0xffu));
/* 8db384: mov byte ptr [0xceb653], al */
  W8((uint32_t)(0xceb653u), (eax & 0xffu));
/* 8db389: mov byte ptr [0xceb654], 0 */
  W8((uint32_t)(0xceb654u), 0x0u);
/* 8db390: mov byte ptr [0xceb655], bl */
  W8((uint32_t)(0xceb655u), (ebx & 0xffu));
/* 8db396: mov byte ptr [0xceb656], bl */
  W8((uint32_t)(0xceb656u), (ebx & 0xffu));
/* 8db39c: mov byte ptr [0xceb657], al */
  W8((uint32_t)(0xceb657u), (eax & 0xffu));
/* 8db3a1: mov byte ptr [0xceb658], bl */
  W8((uint32_t)(0xceb658u), (ebx & 0xffu));
/* 8db3a7: mov byte ptr [0xceb659], bl */
  W8((uint32_t)(0xceb659u), (ebx & 0xffu));
/* 8db3ad: mov byte ptr [0xceb65a], 0 */
  W8((uint32_t)(0xceb65au), 0x0u);
/* 8db3b4: mov byte ptr [0xceb65b], al */
  W8((uint32_t)(0xceb65bu), (eax & 0xffu));
/* 8db3b9: mov byte ptr [0xceb65c], 0 */
  W8((uint32_t)(0xceb65cu), 0x0u);
/* 8db3c0: mov byte ptr [0xceb65d], 0 */
  W8((uint32_t)(0xceb65du), 0x0u);
/* 8db3c7: mov byte ptr [0xceb65e], 0 */
  W8((uint32_t)(0xceb65eu), 0x0u);
/* 8db3ce: mov byte ptr [0xceb65f], al */
  W8((uint32_t)(0xceb65fu), (eax & 0xffu));
/* 8db3d3: mov byte ptr [0xceb660], bl */
  W8((uint32_t)(0xceb660u), (ebx & 0xffu));
/* 8db3d9: mov byte ptr [0xceb661], bl */
  W8((uint32_t)(0xceb661u), (ebx & 0xffu));
/* 8db3df: mov byte ptr [0xceb662], bl */
  W8((uint32_t)(0xceb662u), (ebx & 0xffu));
/* 8db3e5: mov byte ptr [0xceb663], al */
  W8((uint32_t)(0xceb663u), (eax & 0xffu));
/* 8db3ea: mov byte ptr [0xceb664], cl */
  W8((uint32_t)(0xceb664u), (ecx & 0xffu));
/* 8db3f0: mov byte ptr [0xceb665], al */
  W8((uint32_t)(0xceb665u), (eax & 0xffu));
/* 8db3f5: mov byte ptr [0xceb666], 0x40 */
  W8((uint32_t)(0xceb666u), 0x40u);
/* 8db3fc: mov byte ptr [0xceb667], al */
  W8((uint32_t)(0xceb667u), (eax & 0xffu));
/* 8db401: mov byte ptr [0xceb668], 0x40 */
  W8((uint32_t)(0xceb668u), 0x40u);
/* 8db408: mov byte ptr [0xceb669], cl */
  W8((uint32_t)(0xceb669u), (ecx & 0xffu));
/* 8db40e: mov byte ptr [0xceb66a], al */
  W8((uint32_t)(0xceb66au), (eax & 0xffu));
/* 8db413: mov byte ptr [0xceb66b], al */
  W8((uint32_t)(0xceb66bu), (eax & 0xffu));
/* 8db418: mov byte ptr [0xceb66c], al */
  W8((uint32_t)(0xceb66cu), (eax & 0xffu));
/* 8db41d: mov byte ptr [0xceb66d], 0x40 */
  W8((uint32_t)(0xceb66du), 0x40u);
/* 8db424: mov byte ptr [0xceb66e], cl */
  W8((uint32_t)(0xceb66eu), (ecx & 0xffu));
/* 8db42a: mov byte ptr [0xceb66f], al */
  W8((uint32_t)(0xceb66fu), (eax & 0xffu));
/* 8db42f: mov byte ptr [0xceb670], al */
  W8((uint32_t)(0xceb670u), (eax & 0xffu));
/* 8db434: mov byte ptr [0xceb671], al */
  W8((uint32_t)(0xceb671u), (eax & 0xffu));
/* 8db439: mov byte ptr [0xceb672], al */
  W8((uint32_t)(0xceb672u), (eax & 0xffu));
/* 8db43e: mov byte ptr [0xceb673], al */
  W8((uint32_t)(0xceb673u), (eax & 0xffu));
L_8db443: /* 8db443: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8db445: jge 0x8db44b */
  if ((sf == of)) goto L_8db44b;
L_8db447: /* 8db447: xor eax, eax */
  eax = 0;
/* 8db449: jmp 0x8db457 */
  goto L_8db457;
L_8db44b: /* 8db44b: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db44e: mov eax, edi */
  eax = edi;
/* 8db450: jl 0x8db457 */
  if ((sf != of)) goto L_8db457;
L_8db452: /* 8db452: mov eax, 0xb */
  eax = 0xbu;
L_8db457: /* 8db457: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 8db45a: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db45d: jne 0x8db513 */
  if (!zf) goto L_8db513;
L_8db463: /* 8db463: movzx cx, byte ptr [eax*4 + 0xceb646] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(eax*4 + 0xceb646u)))) & 0xffffu);
/* 8db46c: movzx dx, byte ptr [eax*4 + 0xceb645] */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(eax*4 + 0xceb645u)))) & 0xffffu);
/* 8db475: mov al, byte ptr [eax*4 + 0xceb644] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax*4 + 0xceb644u))) & 0xffu);
/* 8db47c: shr al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = 3;
  uint8_t r = (uint8_t)((uint32_t)a >> c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8db47f: and ecx, 0xfff8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfff8u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8db485: shl ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8db488: and edx, 0xfffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8db48e: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db490: movzx dx, al */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)((eax & 0xffu))) & 0xffffu);
/* 8db494: lea eax, [edx + ecx*8] */
  eax = (uint32_t)(edx + ecx*8);
/* 8db497: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 8db49a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8db49b: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8db49e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8db4a1: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8db4a4: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8db4a7: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db4aa: mov ecx, eax */
  ecx = eax;
/* 8db4ac: jge 0x8db4b3 */
  if ((sf == of)) goto L_8db4b3;
L_8db4ae: /* 8db4ae: mov ecx, 4 */
  ecx = 0x4u;
L_8db4b3: /* 8db4b3: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 8db4b6: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db4b9: jge 0x8db4c0 */
  if ((sf == of)) goto L_8db4c0;
L_8db4bb: /* 8db4bb: mov eax, 4 */
  eax = 0x4u;
L_8db4c0: /* 8db4c0: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8db4c3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8db4c4: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8db4c7: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8db4c9: mov esi, eax */
  esi = eax;
/* 8db4cb: mov eax, ecx */
  eax = ecx;
/* 8db4cd: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8db4ce: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8db4d1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8db4d3: sar esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 8db4d6: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8db4d9: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
L_8db4e0: /* 8db4e0: cmp dword ptr [ebp + 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db4e3: jge 0x8db67f */
  if ((sf == of)) goto L_8db67f;
L_8db4e9: /* 8db4e9: mov ecx, edi */
  ecx = edi;
/* 8db4eb: xor edx, edx */
  edx = 0;
/* 8db4ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8db4f0: /* 8db4f0: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db4f2: jge 0x8db505 */
  if ((sf == of)) goto L_8db505;
L_8db4f4: /* 8db4f4: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8db4f7: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8db4f9: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8db4fc: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8db4ff: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db502: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8db503: jmp 0x8db4f0 */
  goto L_8db4f0;
L_8db505: /* 8db505: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 8db508: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8db50b: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8db50d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8db50e: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 8db511: jmp 0x8db4e0 */
  goto L_8db4e0;
L_8db513: /* 8db513: cmp ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db516: je 0x8db553 */
  if (zf) goto L_8db553;
L_8db518: /* 8db518: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db51b: je 0x8db553 */
  if (zf) goto L_8db553;
L_8db51d: /* 8db51d: cmp ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db520: jne 0x8db67f */
  if (!zf) goto L_8db67f;
L_8db526: /* 8db526: mov esi, dword ptr [eax*4 + 0xceb644] */
  esi = R32((uint32_t)(eax*4 + 0xceb644u));
/* 8db52d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8db530: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8db533: imul eax, dword ptr [ebp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x10u)));
  eax = (uint32_t)r;
  }
/* 8db537: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8db53a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8db53b: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8db53e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8db540: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_8db543: /* 8db543: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8db545: jle 0x8db67f */
  if ((zf || sf != of)) goto L_8db67f;
L_8db54b: /* 8db54b: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 8db54d: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db550: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8db551: jmp 0x8db543 */
  goto L_8db543;
L_8db553: /* 8db553: movzx dx, byte ptr [eax*4 + 0xceb646] */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(eax*4 + 0xceb646u)))) & 0xffffu);
/* 8db55c: movzx si, byte ptr [eax*4 + 0xceb645] */
  esi = (esi & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(eax*4 + 0xceb645u)))) & 0xffffu);
/* 8db565: movzx eax, byte ptr [eax*4 + 0xceb644] */
  eax = (uint32_t)(R8((uint32_t)(eax*4 + 0xceb644u)));
/* 8db56d: shr al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = 3;
  uint8_t r = (uint8_t)((uint32_t)a >> c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8db570: movzx ax, al */
  eax = (eax & 0xffff0000u) | ((uint32_t)((uint32_t)((eax & 0xffu))) & 0xffffu);
/* 8db574: and edx, 0xfff8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfff8u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8db57a: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8db57d: and esi, 0xfffc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 8db583: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8db585: cmp ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db588: lea eax, [eax + edx*8] */
  eax = (uint32_t)(eax + edx*8);
/* 8db58b: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 8db58e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8db58f: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8db592: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8db595: jne 0x8db5a0 */
  if (!zf) goto L_8db5a0;
L_8db597: /* 8db597: mov esi, 0x77777777 */
  esi = 0x77777777u;
/* 8db59c: mov edi, esi */
  edi = esi;
/* 8db59e: jmp 0x8db5a8 */
  goto L_8db5a8;
L_8db5a0: /* 8db5a0: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 8db5a3: mov edi, 0x8081ffff */
  edi = 0x8081ffffu;
L_8db5a8: /* 8db5a8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8db5ab: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8db5ae: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db5b1: jge 0x8db5b8 */
  if ((sf == of)) goto L_8db5b8;
L_8db5b3: /* 8db5b3: mov ecx, 4 */
  ecx = 0x4u;
L_8db5b8: /* 8db5b8: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8db5bb: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db5be: jge 0x8db5c5 */
  if ((sf == of)) goto L_8db5c5;
L_8db5c0: /* 8db5c0: mov eax, 4 */
  eax = 0x4u;
L_8db5c5: /* 8db5c5: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8db5c6: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8db5c9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8db5cb: mov ebx, eax */
  ebx = eax;
/* 8db5cd: mov eax, ecx */
  eax = ecx;
/* 8db5cf: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8db5d2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8db5d3: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8db5d6: sar ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* 8db5d9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8db5db: mov dword ptr [ebp + 0x18], ebx */
  W32((uint32_t)(ebp + 0x18u), ebx);
/* 8db5de: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8db5e1: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
L_8db5e8: /* 8db5e8: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db5eb: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* 8db5ee: jge 0x8db67f */
  if ((sf == of)) goto L_8db67f;
L_8db5f4: /* 8db5f4: xor edx, edx */
  edx = 0;
L_8db5f6: /* 8db5f6: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db5f8: jge 0x8db613 */
  if ((sf == of)) goto L_8db613;
L_8db5fa: /* 8db5fa: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8db5fd: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 8db5ff: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 8db602: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db605: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8db607: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8db60a: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8db60d: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db610: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8db611: jmp 0x8db5f6 */
  goto L_8db5f6;
L_8db613: /* 8db613: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 8db616: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 8db619: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8db61c: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db61e: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 8db621: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8db622: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 8db625: jmp 0x8db5e8 */
  goto L_8db5e8;
L_8db627: /* 8db627: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8db62a: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db62d: je 0x8db7f1 */
  if (zf) goto L_8db7f1;
L_8db633: /* 8db633: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db636: je 0x8db7f1 */
  if (zf) goto L_8db7f1;
L_8db63c: /* 8db63c: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db63f: je 0x8db7f1 */
  if (zf) goto L_8db7f1;
L_8db645: /* 8db645: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db647: jne 0x8db6ea */
  if (!zf) goto L_8db6ea;
L_8db64d: /* 8db64d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8db650: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8db653: mov ebx, edx */
  ebx = edx;
/* 8db655: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8db658: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8db659: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8db65a: call 0x6ca52e */
  esp -= 4; W32(esp, 0x8db65fu); SPILL(); f_6ca52e(); if (g_unwind) return; RELOAD();
/* 8db65f: mov esi, eax */
  esi = eax;
/* 8db661: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8db664: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8db667: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db669: jne 0x8db6bd */
  if (!zf) goto L_8db6bd;
L_8db66b: /* 8db66b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8db66e: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 8db671: imul ecx, esi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(esi);
  ecx = (uint32_t)r;
  }
/* 8db674: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8db675: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8db676: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_8db677: /* 8db677: call 0x6ca83f */
  esp -= 4; W32(esp, 0x8db67cu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 8db67c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8db67f: /* 8db67f: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 8db685: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db688: jne 0x8db2e1 */
  if (!zf) goto L_8db2e1;
L_8db68e: /* 8db68e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8db691: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8db694: test byte ptr [ecx + 0x7c], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x7cu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8db698: jne 0x8db2e1 */
  if (!zf) goto L_8db2e1;
L_8db69e: /* 8db69e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8db6a1: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 8db6a4: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db6a7: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x8db6aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8db6aa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8db6ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8db6ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8db6af: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8db6b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8db6b7: mov esp, ebp */
  esp = ebp;
/* 8db6b9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8db6ba: ret 0x14 */
  esp += 24; SPILL(); return;
L_8db6bd: /* 8db6bd: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
L_8db6c4: /* 8db6c4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8db6c7: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8db6ca: cmp eax, dword ptr [edx + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db6cd: jge 0x8db67f */
  if ((sf == of)) goto L_8db67f;
L_8db6cf: /* 8db6cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8db6d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8db6d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8db6d2: call 0x6ca83f */
  esp -= 4; W32(esp, 0x8db6d7u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 8db6d7: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8db6da: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8db6dd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8db6e0: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8db6e2: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8db6e4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8db6e5: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8db6e8: jmp 0x8db6c4 */
  goto L_8db6c4;
L_8db6ea: /* 8db6ea: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8db6ec: jne 0x8db783 */
  if (!zf) goto L_8db783;
L_8db6f2: /* 8db6f2: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db6f5: jne 0x8db67f */
  if (!zf) goto L_8db67f;
L_8db6f7: /* 8db6f7: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8db6fa: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 8db6fd: mov eax, dword ptr [ecx + 0x50] */
  eax = R32((uint32_t)(ecx + 0x50u));
/* 8db700: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 8db703: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 8db706: mov ebx, edx */
  ebx = edx;
/* 8db708: lea edx, [ecx*4] */
  edx = (uint32_t)(ecx*4);
/* 8db70f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8db710: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8db711: push 0xceb178 */
  { uint32_t v = 0xceb178u; esp -= 4; W32(esp, v); }
/* 8db716: call 0x6ca83f */
  esp -= 4; W32(esp, 0x8db71bu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 8db71b: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 8db71e: mov al, byte ptr [ecx + 0x7c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x7cu))) & 0xffu);
/* 8db721: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8db724: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8db726: je 0x8db732 */
  if (zf) goto L_8db732;
L_8db728: /* 8db728: mov dword ptr [0xceb178], 0 */
  W32((uint32_t)(0xceb178u), 0x0u);
L_8db732: /* 8db732: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8db735: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 8db738: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 8db73b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8db73e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8db741: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8db744: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8db747: mov dword ptr [ebp + 0x10], 0 */
  W32((uint32_t)(ebp + 0x10u), 0x0u);
/* 8db74e: mov edi, edi */
  edi = edi;
L_8db750: /* 8db750: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8db753: cmp dword ptr [ebp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db756: jge 0x8db67f */
  if ((sf == of)) goto L_8db67f;
L_8db75c: /* 8db75c: xor eax, eax */
  eax = 0;
/* 8db75e: mov edi, edi */
  edi = edi;
L_8db760: /* 8db760: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db762: jge 0x8db775 */
  if ((sf == of)) goto L_8db775;
L_8db764: /* 8db764: movzx edi, byte ptr [eax + ebx] */
  edi = (uint32_t)(R8((uint32_t)(eax + ebx)));
/* 8db768: mov edi, dword ptr [edi*4 + 0xceb178] */
  edi = R32((uint32_t)(edi*4 + 0xceb178u));
/* 8db76f: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* 8db772: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8db773: jmp 0x8db760 */
  goto L_8db760;
L_8db775: /* 8db775: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8db778: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8db77a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8db77b: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 8db77e: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 8db781: jmp 0x8db750 */
  goto L_8db750;
L_8db783: /* 8db783: cmp esi, 0xa */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db786: jne 0x8db67f */
  if (!zf) goto L_8db67f;
L_8db78c: /* 8db78c: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db78f: jne 0x8db67f */
  if (!zf) goto L_8db67f;
L_8db795: /* 8db795: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8db798: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8db79b: mov dword ptr [ebp + 0x14], 0 */
  W32((uint32_t)(ebp + 0x14u), 0x0u);
/* 8db7a2: mov bl, 0xff */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
L_8db7a4: /* 8db7a4: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8db7a7: cmp eax, dword ptr [edi + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db7aa: jge 0x8db67f */
  if ((sf == of)) goto L_8db67f;
L_8db7b0: /* 8db7b0: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8db7b3: xor esi, esi */
  esi = 0;
L_8db7b5: /* 8db7b5: cmp esi, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db7b8: jge 0x8db7d7 */
  if ((sf == of)) goto L_8db7d7;
L_8db7ba: /* 8db7ba: mov al, byte ptr [edx + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x1u))) & 0xffu);
/* 8db7bd: mov byte ptr [ebp + 0xc], al */
  W8((uint32_t)(ebp + 0xcu), (eax & 0xffu));
/* 8db7c0: mov byte ptr [ebp + 0xd], al */
  W8((uint32_t)(ebp + 0xdu), (eax & 0xffu));
/* 8db7c3: mov byte ptr [ebp + 0xe], al */
  W8((uint32_t)(ebp + 0xeu), (eax & 0xffu));
/* 8db7c6: mov byte ptr [ebp + 0xf], bl */
  W8((uint32_t)(ebp + 0xfu), (ebx & 0xffu));
/* 8db7c9: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8db7cc: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 8db7ce: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8db7d1: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db7d4: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8db7d5: jmp 0x8db7b5 */
  goto L_8db7b5;
L_8db7d7: /* 8db7d7: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 8db7da: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 8db7dd: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8db7e0: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8db7e2: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8db7e5: shr esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 8db7e8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8db7e9: lea ecx, [ecx + esi*4] */
  ecx = (uint32_t)(ecx + esi*4);
/* 8db7ec: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 8db7ef: jmp 0x8db7a4 */
  goto L_8db7a4;
L_8db7f1: /* 8db7f1: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db7f3: je 0x8db80d */
  if (zf) goto L_8db80d;
L_8db7f5: /* 8db7f5: push 0x7e8 */
  { uint32_t v = 0x7e8u; esp -= 4; W32(esp, v); }
/* 8db7fa: push 0xaed8b0 */
  { uint32_t v = 0xaed8b0u; esp -= 4; W32(esp, v); }
/* 8db7ff: push 0xaed8bc */
  { uint32_t v = 0xaed8bcu; esp -= 4; W32(esp, v); }
/* 8db804: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8db80au); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8db80a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8db80d: /* 8db80d: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8db810: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8db813: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8db816: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db819: mov edi, dword ptr [edx + 0x1c] */
  edi = R32((uint32_t)(edx + 0x1cu));
/* 8db81c: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* 8db81f: mov ecx, eax */
  ecx = eax;
/* 8db821: jge 0x8db828 */
  if ((sf == of)) goto L_8db828;
L_8db823: /* 8db823: mov ecx, 4 */
  ecx = 0x4u;
L_8db828: /* 8db828: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 8db82b: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db82e: jge 0x8db835 */
  if ((sf == of)) goto L_8db835;
L_8db830: /* 8db830: mov eax, 4 */
  eax = 0x4u;
L_8db835: /* 8db835: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8db836: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8db839: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8db83b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8db83c: mov ebx, eax */
  ebx = eax;
/* 8db83e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8db83f: sar ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* 8db842: call 0x6ca52e */
  esp -= 4; W32(esp, 0x8db847u); SPILL(); f_6ca52e(); if (g_unwind) return; RELOAD();
/* 8db847: mov esi, eax */
  esi = eax;
/* 8db849: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8db84c: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8db84f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8db852: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db854: jne 0x8db864 */
  if (!zf) goto L_8db864;
L_8db856: /* 8db856: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8db859: imul esi, ebx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(ebx);
  esi = (uint32_t)r;
  }
/* 8db85c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8db85d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8db85e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8db85f: jmp 0x8db677 */
  goto L_8db677;
L_8db864: /* 8db864: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
/* 8db86b: jmp 0x8db870 */
  goto L_8db870;
L_8db870: /* 8db870: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db873: jge 0x8db67f */
  if ((sf == of)) goto L_8db67f;
L_8db879: /* 8db879: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8db87c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8db87d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8db87e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8db87f: call 0x6ca83f */
  esp -= 4; W32(esp, 0x8db884u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 8db884: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 8db887: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8db88a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8db88d: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8db88f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8db892: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8db894: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8db895: mov dword ptr [ebp + 0x14], edx */
  W32((uint32_t)(ebp + 0x14u), edx);
/* 8db898: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8db89b: jmp 0x8db870 */
  goto L_8db870;
}

void f_8db2f4(void) {
  LOAD_REGS();
  goto L_8db2f4;
L_8db2e1: /* 8db2e1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8db2e4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8db2eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8db2ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8db2ed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8db2ee: mov esp, ebp */
  esp = ebp;
/* 8db2f0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8db2f1: ret 0x14 */
  esp += 24; SPILL(); return;
L_8db2f4: /* 8db2f4: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 8db2f7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8db2f9: je 0x8db627 */
  if (zf) goto L_8db627;
L_8db2ff: /* 8db2ff: mov cl, byte ptr [0xceb680] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xceb680u))) & 0xffu);
/* 8db305: mov eax, 1 */
  eax = 0x1u;
/* 8db30a: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8db30c: jne 0x8db443 */
  if (!zf) goto L_8db443;
L_8db312: /* 8db312: mov ecx, dword ptr [0xceb680] */
  ecx = R32((uint32_t)(0xceb680u));
/* 8db318: mov bl, 0xff */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
/* 8db31a: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 8db31c: mov al, 0x80 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x80u) & 0xffu);
/* 8db31e: mov dword ptr [0xceb680], ecx */
  W32((uint32_t)(0xceb680u), ecx);
/* 8db324: mov cl, 0xc0 */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0xc0u) & 0xffu);
/* 8db326: mov byte ptr [0xceb644], 0 */
  W8((uint32_t)(0xceb644u), 0x0u);
/* 8db32d: mov byte ptr [0xceb645], 0 */
  W8((uint32_t)(0xceb645u), 0x0u);
/* 8db334: mov byte ptr [0xceb646], bl */
  W8((uint32_t)(0xceb646u), (ebx & 0xffu));
/* 8db33a: mov byte ptr [0xceb647], al */
  W8((uint32_t)(0xceb647u), (eax & 0xffu));
/* 8db33f: mov byte ptr [0xceb648], bl */
  W8((uint32_t)(0xceb648u), (ebx & 0xffu));
/* 8db345: mov byte ptr [0xceb649], 0 */
  W8((uint32_t)(0xceb649u), 0x0u);
/* 8db34c: mov byte ptr [0xceb64a], 0 */
  W8((uint32_t)(0xceb64au), 0x0u);
/* 8db353: mov byte ptr [0xceb64b], al */
  W8((uint32_t)(0xceb64bu), (eax & 0xffu));
/* 8db358: mov byte ptr [0xceb64c], 0 */
  W8((uint32_t)(0xceb64cu), 0x0u);
/* 8db35f: mov byte ptr [0xceb64d], bl */
  W8((uint32_t)(0xceb64du), (ebx & 0xffu));
/* 8db365: mov byte ptr [0xceb64e], 0 */
  W8((uint32_t)(0xceb64eu), 0x0u);
/* 8db36c: mov byte ptr [0xceb64f], al */
  W8((uint32_t)(0xceb64fu), (eax & 0xffu));
/* 8db371: mov byte ptr [0xceb650], bl */
  W8((uint32_t)(0xceb650u), (ebx & 0xffu));
/* 8db377: mov byte ptr [0xceb651], 0 */
  W8((uint32_t)(0xceb651u), 0x0u);
/* 8db37e: mov byte ptr [0xceb652], bl */
  W8((uint32_t)(0xceb652u), (ebx & 0xffu));
/* 8db384: mov byte ptr [0xceb653], al */
  W8((uint32_t)(0xceb653u), (eax & 0xffu));
/* 8db389: mov byte ptr [0xceb654], 0 */
  W8((uint32_t)(0xceb654u), 0x0u);
/* 8db390: mov byte ptr [0xceb655], bl */
  W8((uint32_t)(0xceb655u), (ebx & 0xffu));
/* 8db396: mov byte ptr [0xceb656], bl */
  W8((uint32_t)(0xceb656u), (ebx & 0xffu));
/* 8db39c: mov byte ptr [0xceb657], al */
  W8((uint32_t)(0xceb657u), (eax & 0xffu));
/* 8db3a1: mov byte ptr [0xceb658], bl */
  W8((uint32_t)(0xceb658u), (ebx & 0xffu));
/* 8db3a7: mov byte ptr [0xceb659], bl */
  W8((uint32_t)(0xceb659u), (ebx & 0xffu));
/* 8db3ad: mov byte ptr [0xceb65a], 0 */
  W8((uint32_t)(0xceb65au), 0x0u);
/* 8db3b4: mov byte ptr [0xceb65b], al */
  W8((uint32_t)(0xceb65bu), (eax & 0xffu));
/* 8db3b9: mov byte ptr [0xceb65c], 0 */
  W8((uint32_t)(0xceb65cu), 0x0u);
/* 8db3c0: mov byte ptr [0xceb65d], 0 */
  W8((uint32_t)(0xceb65du), 0x0u);
/* 8db3c7: mov byte ptr [0xceb65e], 0 */
  W8((uint32_t)(0xceb65eu), 0x0u);
/* 8db3ce: mov byte ptr [0xceb65f], al */
  W8((uint32_t)(0xceb65fu), (eax & 0xffu));
/* 8db3d3: mov byte ptr [0xceb660], bl */
  W8((uint32_t)(0xceb660u), (ebx & 0xffu));
/* 8db3d9: mov byte ptr [0xceb661], bl */
  W8((uint32_t)(0xceb661u), (ebx & 0xffu));
/* 8db3df: mov byte ptr [0xceb662], bl */
  W8((uint32_t)(0xceb662u), (ebx & 0xffu));
/* 8db3e5: mov byte ptr [0xceb663], al */
  W8((uint32_t)(0xceb663u), (eax & 0xffu));
/* 8db3ea: mov byte ptr [0xceb664], cl */
  W8((uint32_t)(0xceb664u), (ecx & 0xffu));
/* 8db3f0: mov byte ptr [0xceb665], al */
  W8((uint32_t)(0xceb665u), (eax & 0xffu));
/* 8db3f5: mov byte ptr [0xceb666], 0x40 */
  W8((uint32_t)(0xceb666u), 0x40u);
/* 8db3fc: mov byte ptr [0xceb667], al */
  W8((uint32_t)(0xceb667u), (eax & 0xffu));
/* 8db401: mov byte ptr [0xceb668], 0x40 */
  W8((uint32_t)(0xceb668u), 0x40u);
/* 8db408: mov byte ptr [0xceb669], cl */
  W8((uint32_t)(0xceb669u), (ecx & 0xffu));
/* 8db40e: mov byte ptr [0xceb66a], al */
  W8((uint32_t)(0xceb66au), (eax & 0xffu));
/* 8db413: mov byte ptr [0xceb66b], al */
  W8((uint32_t)(0xceb66bu), (eax & 0xffu));
/* 8db418: mov byte ptr [0xceb66c], al */
  W8((uint32_t)(0xceb66cu), (eax & 0xffu));
/* 8db41d: mov byte ptr [0xceb66d], 0x40 */
  W8((uint32_t)(0xceb66du), 0x40u);
/* 8db424: mov byte ptr [0xceb66e], cl */
  W8((uint32_t)(0xceb66eu), (ecx & 0xffu));
/* 8db42a: mov byte ptr [0xceb66f], al */
  W8((uint32_t)(0xceb66fu), (eax & 0xffu));
/* 8db42f: mov byte ptr [0xceb670], al */
  W8((uint32_t)(0xceb670u), (eax & 0xffu));
/* 8db434: mov byte ptr [0xceb671], al */
  W8((uint32_t)(0xceb671u), (eax & 0xffu));
/* 8db439: mov byte ptr [0xceb672], al */
  W8((uint32_t)(0xceb672u), (eax & 0xffu));
/* 8db43e: mov byte ptr [0xceb673], al */
  W8((uint32_t)(0xceb673u), (eax & 0xffu));
L_8db443: /* 8db443: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8db445: jge 0x8db44b */
  if ((sf == of)) goto L_8db44b;
L_8db447: /* 8db447: xor eax, eax */
  eax = 0;
/* 8db449: jmp 0x8db457 */
  goto L_8db457;
L_8db44b: /* 8db44b: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db44e: mov eax, edi */
  eax = edi;
/* 8db450: jl 0x8db457 */
  if ((sf != of)) goto L_8db457;
L_8db452: /* 8db452: mov eax, 0xb */
  eax = 0xbu;
L_8db457: /* 8db457: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 8db45a: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db45d: jne 0x8db513 */
  if (!zf) goto L_8db513;
L_8db463: /* 8db463: movzx cx, byte ptr [eax*4 + 0xceb646] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(eax*4 + 0xceb646u)))) & 0xffffu);
/* 8db46c: movzx dx, byte ptr [eax*4 + 0xceb645] */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(eax*4 + 0xceb645u)))) & 0xffffu);
/* 8db475: mov al, byte ptr [eax*4 + 0xceb644] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax*4 + 0xceb644u))) & 0xffu);
/* 8db47c: shr al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = 3;
  uint8_t r = (uint8_t)((uint32_t)a >> c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8db47f: and ecx, 0xfff8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfff8u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8db485: shl ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8db488: and edx, 0xfffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8db48e: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db490: movzx dx, al */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)((eax & 0xffu))) & 0xffffu);
/* 8db494: lea eax, [edx + ecx*8] */
  eax = (uint32_t)(edx + ecx*8);
/* 8db497: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 8db49a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8db49b: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8db49e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8db4a1: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8db4a4: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8db4a7: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db4aa: mov ecx, eax */
  ecx = eax;
/* 8db4ac: jge 0x8db4b3 */
  if ((sf == of)) goto L_8db4b3;
L_8db4ae: /* 8db4ae: mov ecx, 4 */
  ecx = 0x4u;
L_8db4b3: /* 8db4b3: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 8db4b6: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db4b9: jge 0x8db4c0 */
  if ((sf == of)) goto L_8db4c0;
L_8db4bb: /* 8db4bb: mov eax, 4 */
  eax = 0x4u;
L_8db4c0: /* 8db4c0: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8db4c3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8db4c4: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8db4c7: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8db4c9: mov esi, eax */
  esi = eax;
/* 8db4cb: mov eax, ecx */
  eax = ecx;
/* 8db4cd: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8db4ce: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8db4d1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8db4d3: sar esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 8db4d6: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8db4d9: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
L_8db4e0: /* 8db4e0: cmp dword ptr [ebp + 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db4e3: jge 0x8db67f */
  if ((sf == of)) goto L_8db67f;
L_8db4e9: /* 8db4e9: mov ecx, edi */
  ecx = edi;
/* 8db4eb: xor edx, edx */
  edx = 0;
/* 8db4ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8db4f0: /* 8db4f0: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db4f2: jge 0x8db505 */
  if ((sf == of)) goto L_8db505;
L_8db4f4: /* 8db4f4: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8db4f7: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8db4f9: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8db4fc: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8db4ff: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db502: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8db503: jmp 0x8db4f0 */
  goto L_8db4f0;
L_8db505: /* 8db505: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 8db508: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8db50b: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8db50d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8db50e: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 8db511: jmp 0x8db4e0 */
  goto L_8db4e0;
L_8db513: /* 8db513: cmp ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db516: je 0x8db553 */
  if (zf) goto L_8db553;
L_8db518: /* 8db518: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db51b: je 0x8db553 */
  if (zf) goto L_8db553;
L_8db51d: /* 8db51d: cmp ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db520: jne 0x8db67f */
  if (!zf) goto L_8db67f;
L_8db526: /* 8db526: mov esi, dword ptr [eax*4 + 0xceb644] */
  esi = R32((uint32_t)(eax*4 + 0xceb644u));
/* 8db52d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8db530: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8db533: imul eax, dword ptr [ebp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x10u)));
  eax = (uint32_t)r;
  }
/* 8db537: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8db53a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8db53b: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8db53e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8db540: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_8db543: /* 8db543: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8db545: jle 0x8db67f */
  if ((zf || sf != of)) goto L_8db67f;
L_8db54b: /* 8db54b: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 8db54d: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db550: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8db551: jmp 0x8db543 */
  goto L_8db543;
L_8db553: /* 8db553: movzx dx, byte ptr [eax*4 + 0xceb646] */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(eax*4 + 0xceb646u)))) & 0xffffu);
/* 8db55c: movzx si, byte ptr [eax*4 + 0xceb645] */
  esi = (esi & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(eax*4 + 0xceb645u)))) & 0xffffu);
/* 8db565: movzx eax, byte ptr [eax*4 + 0xceb644] */
  eax = (uint32_t)(R8((uint32_t)(eax*4 + 0xceb644u)));
/* 8db56d: shr al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = 3;
  uint8_t r = (uint8_t)((uint32_t)a >> c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8db570: movzx ax, al */
  eax = (eax & 0xffff0000u) | ((uint32_t)((uint32_t)((eax & 0xffu))) & 0xffffu);
/* 8db574: and edx, 0xfff8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfff8u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8db57a: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8db57d: and esi, 0xfffc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 8db583: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8db585: cmp ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db588: lea eax, [eax + edx*8] */
  eax = (uint32_t)(eax + edx*8);
/* 8db58b: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 8db58e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8db58f: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8db592: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8db595: jne 0x8db5a0 */
  if (!zf) goto L_8db5a0;
L_8db597: /* 8db597: mov esi, 0x77777777 */
  esi = 0x77777777u;
/* 8db59c: mov edi, esi */
  edi = esi;
/* 8db59e: jmp 0x8db5a8 */
  goto L_8db5a8;
L_8db5a0: /* 8db5a0: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 8db5a3: mov edi, 0x8081ffff */
  edi = 0x8081ffffu;
L_8db5a8: /* 8db5a8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8db5ab: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8db5ae: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db5b1: jge 0x8db5b8 */
  if ((sf == of)) goto L_8db5b8;
L_8db5b3: /* 8db5b3: mov ecx, 4 */
  ecx = 0x4u;
L_8db5b8: /* 8db5b8: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8db5bb: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db5be: jge 0x8db5c5 */
  if ((sf == of)) goto L_8db5c5;
L_8db5c0: /* 8db5c0: mov eax, 4 */
  eax = 0x4u;
L_8db5c5: /* 8db5c5: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8db5c6: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8db5c9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8db5cb: mov ebx, eax */
  ebx = eax;
/* 8db5cd: mov eax, ecx */
  eax = ecx;
/* 8db5cf: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8db5d2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8db5d3: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8db5d6: sar ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* 8db5d9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8db5db: mov dword ptr [ebp + 0x18], ebx */
  W32((uint32_t)(ebp + 0x18u), ebx);
/* 8db5de: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8db5e1: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
L_8db5e8: /* 8db5e8: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db5eb: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* 8db5ee: jge 0x8db67f */
  if ((sf == of)) goto L_8db67f;
L_8db5f4: /* 8db5f4: xor edx, edx */
  edx = 0;
L_8db5f6: /* 8db5f6: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db5f8: jge 0x8db613 */
  if ((sf == of)) goto L_8db613;
L_8db5fa: /* 8db5fa: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8db5fd: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 8db5ff: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 8db602: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db605: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8db607: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8db60a: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8db60d: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db610: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8db611: jmp 0x8db5f6 */
  goto L_8db5f6;
L_8db613: /* 8db613: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 8db616: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 8db619: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8db61c: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db61e: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 8db621: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8db622: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 8db625: jmp 0x8db5e8 */
  goto L_8db5e8;
L_8db627: /* 8db627: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8db62a: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db62d: je 0x8db7f1 */
  if (zf) goto L_8db7f1;
L_8db633: /* 8db633: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db636: je 0x8db7f1 */
  if (zf) goto L_8db7f1;
L_8db63c: /* 8db63c: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db63f: je 0x8db7f1 */
  if (zf) goto L_8db7f1;
L_8db645: /* 8db645: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db647: jne 0x8db6ea */
  if (!zf) goto L_8db6ea;
L_8db64d: /* 8db64d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8db650: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8db653: mov ebx, edx */
  ebx = edx;
/* 8db655: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8db658: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8db659: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8db65a: call 0x6ca52e */
  esp -= 4; W32(esp, 0x8db65fu); SPILL(); f_6ca52e(); if (g_unwind) return; RELOAD();
/* 8db65f: mov esi, eax */
  esi = eax;
/* 8db661: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8db664: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8db667: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db669: jne 0x8db6bd */
  if (!zf) goto L_8db6bd;
L_8db66b: /* 8db66b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8db66e: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 8db671: imul ecx, esi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(esi);
  ecx = (uint32_t)r;
  }
/* 8db674: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8db675: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8db676: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_8db677: /* 8db677: call 0x6ca83f */
  esp -= 4; W32(esp, 0x8db67cu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 8db67c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8db67f: /* 8db67f: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 8db685: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db688: jne 0x8db2e1 */
  if (!zf) goto L_8db2e1;
L_8db68e: /* 8db68e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8db691: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8db694: test byte ptr [ecx + 0x7c], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x7cu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8db698: jne 0x8db2e1 */
  if (!zf) goto L_8db2e1;
L_8db69e: /* 8db69e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8db6a1: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 8db6a4: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db6a7: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x8db6aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8db6aa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8db6ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8db6ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8db6af: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8db6b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8db6b7: mov esp, ebp */
  esp = ebp;
/* 8db6b9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8db6ba: ret 0x14 */
  esp += 24; SPILL(); return;
L_8db6bd: /* 8db6bd: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
L_8db6c4: /* 8db6c4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8db6c7: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8db6ca: cmp eax, dword ptr [edx + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db6cd: jge 0x8db67f */
  if ((sf == of)) goto L_8db67f;
L_8db6cf: /* 8db6cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8db6d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8db6d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8db6d2: call 0x6ca83f */
  esp -= 4; W32(esp, 0x8db6d7u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 8db6d7: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8db6da: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8db6dd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8db6e0: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8db6e2: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8db6e4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8db6e5: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8db6e8: jmp 0x8db6c4 */
  goto L_8db6c4;
L_8db6ea: /* 8db6ea: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8db6ec: jne 0x8db783 */
  if (!zf) goto L_8db783;
L_8db6f2: /* 8db6f2: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db6f5: jne 0x8db67f */
  if (!zf) goto L_8db67f;
L_8db6f7: /* 8db6f7: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8db6fa: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 8db6fd: mov eax, dword ptr [ecx + 0x50] */
  eax = R32((uint32_t)(ecx + 0x50u));
/* 8db700: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 8db703: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 8db706: mov ebx, edx */
  ebx = edx;
/* 8db708: lea edx, [ecx*4] */
  edx = (uint32_t)(ecx*4);
/* 8db70f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8db710: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8db711: push 0xceb178 */
  { uint32_t v = 0xceb178u; esp -= 4; W32(esp, v); }
/* 8db716: call 0x6ca83f */
  esp -= 4; W32(esp, 0x8db71bu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 8db71b: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 8db71e: mov al, byte ptr [ecx + 0x7c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x7cu))) & 0xffu);
/* 8db721: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8db724: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8db726: je 0x8db732 */
  if (zf) goto L_8db732;
L_8db728: /* 8db728: mov dword ptr [0xceb178], 0 */
  W32((uint32_t)(0xceb178u), 0x0u);
L_8db732: /* 8db732: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8db735: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 8db738: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 8db73b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8db73e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8db741: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8db744: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8db747: mov dword ptr [ebp + 0x10], 0 */
  W32((uint32_t)(ebp + 0x10u), 0x0u);
/* 8db74e: mov edi, edi */
  edi = edi;
L_8db750: /* 8db750: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8db753: cmp dword ptr [ebp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db756: jge 0x8db67f */
  if ((sf == of)) goto L_8db67f;
L_8db75c: /* 8db75c: xor eax, eax */
  eax = 0;
/* 8db75e: mov edi, edi */
  edi = edi;
L_8db760: /* 8db760: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db762: jge 0x8db775 */
  if ((sf == of)) goto L_8db775;
L_8db764: /* 8db764: movzx edi, byte ptr [eax + ebx] */
  edi = (uint32_t)(R8((uint32_t)(eax + ebx)));
/* 8db768: mov edi, dword ptr [edi*4 + 0xceb178] */
  edi = R32((uint32_t)(edi*4 + 0xceb178u));
/* 8db76f: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* 8db772: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8db773: jmp 0x8db760 */
  goto L_8db760;
L_8db775: /* 8db775: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8db778: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8db77a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8db77b: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 8db77e: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 8db781: jmp 0x8db750 */
  goto L_8db750;
L_8db783: /* 8db783: cmp esi, 0xa */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db786: jne 0x8db67f */
  if (!zf) goto L_8db67f;
L_8db78c: /* 8db78c: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db78f: jne 0x8db67f */
  if (!zf) goto L_8db67f;
L_8db795: /* 8db795: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8db798: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8db79b: mov dword ptr [ebp + 0x14], 0 */
  W32((uint32_t)(ebp + 0x14u), 0x0u);
/* 8db7a2: mov bl, 0xff */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
L_8db7a4: /* 8db7a4: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8db7a7: cmp eax, dword ptr [edi + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db7aa: jge 0x8db67f */
  if ((sf == of)) goto L_8db67f;
L_8db7b0: /* 8db7b0: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8db7b3: xor esi, esi */
  esi = 0;
L_8db7b5: /* 8db7b5: cmp esi, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db7b8: jge 0x8db7d7 */
  if ((sf == of)) goto L_8db7d7;
L_8db7ba: /* 8db7ba: mov al, byte ptr [edx + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x1u))) & 0xffu);
/* 8db7bd: mov byte ptr [ebp + 0xc], al */
  W8((uint32_t)(ebp + 0xcu), (eax & 0xffu));
/* 8db7c0: mov byte ptr [ebp + 0xd], al */
  W8((uint32_t)(ebp + 0xdu), (eax & 0xffu));
/* 8db7c3: mov byte ptr [ebp + 0xe], al */
  W8((uint32_t)(ebp + 0xeu), (eax & 0xffu));
/* 8db7c6: mov byte ptr [ebp + 0xf], bl */
  W8((uint32_t)(ebp + 0xfu), (ebx & 0xffu));
/* 8db7c9: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8db7cc: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 8db7ce: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8db7d1: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db7d4: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8db7d5: jmp 0x8db7b5 */
  goto L_8db7b5;
L_8db7d7: /* 8db7d7: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 8db7da: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 8db7dd: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8db7e0: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8db7e2: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8db7e5: shr esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 8db7e8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8db7e9: lea ecx, [ecx + esi*4] */
  ecx = (uint32_t)(ecx + esi*4);
/* 8db7ec: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 8db7ef: jmp 0x8db7a4 */
  goto L_8db7a4;
L_8db7f1: /* 8db7f1: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db7f3: je 0x8db80d */
  if (zf) goto L_8db80d;
L_8db7f5: /* 8db7f5: push 0x7e8 */
  { uint32_t v = 0x7e8u; esp -= 4; W32(esp, v); }
/* 8db7fa: push 0xaed8b0 */
  { uint32_t v = 0xaed8b0u; esp -= 4; W32(esp, v); }
/* 8db7ff: push 0xaed8bc */
  { uint32_t v = 0xaed8bcu; esp -= 4; W32(esp, v); }
/* 8db804: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8db80au); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8db80a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8db80d: /* 8db80d: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8db810: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8db813: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8db816: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db819: mov edi, dword ptr [edx + 0x1c] */
  edi = R32((uint32_t)(edx + 0x1cu));
/* 8db81c: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* 8db81f: mov ecx, eax */
  ecx = eax;
/* 8db821: jge 0x8db828 */
  if ((sf == of)) goto L_8db828;
L_8db823: /* 8db823: mov ecx, 4 */
  ecx = 0x4u;
L_8db828: /* 8db828: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 8db82b: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db82e: jge 0x8db835 */
  if ((sf == of)) goto L_8db835;
L_8db830: /* 8db830: mov eax, 4 */
  eax = 0x4u;
L_8db835: /* 8db835: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8db836: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8db839: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8db83b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8db83c: mov ebx, eax */
  ebx = eax;
/* 8db83e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8db83f: sar ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* 8db842: call 0x6ca52e */
  esp -= 4; W32(esp, 0x8db847u); SPILL(); f_6ca52e(); if (g_unwind) return; RELOAD();
/* 8db847: mov esi, eax */
  esi = eax;
/* 8db849: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8db84c: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8db84f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8db852: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db854: jne 0x8db864 */
  if (!zf) goto L_8db864;
L_8db856: /* 8db856: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8db859: imul esi, ebx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(ebx);
  esi = (uint32_t)r;
  }
/* 8db85c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8db85d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8db85e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8db85f: jmp 0x8db677 */
  goto L_8db677;
L_8db864: /* 8db864: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
/* 8db86b: jmp 0x8db870 */
  goto L_8db870;
L_8db870: /* 8db870: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db873: jge 0x8db67f */
  if ((sf == of)) goto L_8db67f;
L_8db879: /* 8db879: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8db87c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8db87d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8db87e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8db87f: call 0x6ca83f */
  esp -= 4; W32(esp, 0x8db884u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 8db884: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 8db887: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8db88a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8db88d: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8db88f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8db892: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8db894: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8db895: mov dword ptr [ebp + 0x14], edx */
  W32((uint32_t)(ebp + 0x14u), edx);
/* 8db898: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8db89b: jmp 0x8db870 */
  goto L_8db870;
}
