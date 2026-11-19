#include "recomp.h"
#include "rec_mod.h"

void f_461028(void) { hle_strlen(); }

void f_461036(void) {
  LOAD_REGS();
L_461036: /* 461036: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 461037: mov esi, dword ptr [ecx + 0x18] */
  esi = R32((uint32_t)(ecx + 0x18u));
/* 46103a: cmp esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46103d: lea eax, [ecx + 4] */
  eax = (uint32_t)(ecx + 0x4u);
/* 461040: jae 0x463396 */
  if (!cf) goto L_463396;
L_461046: /* 461046: mov edx, eax */
  edx = eax;
L_461048: /* 461048: cmp edx, dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 46104c: ja 0x461066 */
  if ((!cf && !zf)) goto L_461066;
L_46104e: /* 46104e: cmp esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 461051: jae 0x46339d */
  if (!cf) goto L_46339d;
L_461057: /* 461057: mov ecx, dword ptr [ecx + 0x14] */
  ecx = R32((uint32_t)(ecx + 0x14u));
/* 46105a: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46105c: cmp dword ptr [esp + 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 461060: jb 0x4633a4 */
  if (cf) goto L_4633a4;
L_461066: /* 461066: xor eax, eax */
  eax = 0;
L_461068: /* 461068: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 461069: ret 4 */
  esp += 8; SPILL(); return;
L_463396: /* 463396: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 463398: jmp 0x461048 */
  goto L_461048;
L_46339d: /* 46339d: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 46339f: jmp 0x461057 */
  goto L_461057;
L_4633a4: /* 4633a4: xor eax, eax */
  eax = 0;
/* 4633a6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4633a7: jmp 0x461068 */
  goto L_461068;
}

void f_46106c(void) {
  LOAD_REGS();
L_46106c: /* 46106c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46106d: mov al, byte ptr [esp + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x3u))) & 0xffu);
/* 461071: mov byte ptr [0x4d0ed8], al */
  W8((uint32_t)(0x4d0ed8u), (eax & 0xffu));
/* 461076: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 461077: ret  */
  esp += 4; SPILL(); return;
}

void f_461078(void) {
  LOAD_REGS();
L_461078: /* 461078: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 461079: mov esi, dword ptr [ecx + 0x18] */
  esi = R32((uint32_t)(ecx + 0x18u));
/* 46107c: cmp esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46107f: lea eax, [ecx + 4] */
  eax = (uint32_t)(ecx + 0x4u);
/* 461082: jae 0x4636c4 */
  if (!cf) goto L_4636c4;
L_461088: /* 461088: mov edx, eax */
  edx = eax;
L_46108a: /* 46108a: cmp edx, dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 46108e: ja 0x4610a9 */
  if ((!cf && !zf)) goto L_4610a9;
L_461090: /* 461090: cmp esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 461093: jae 0x4636cb */
  if (!cf) goto L_4636cb;
L_461099: /* 461099: mov ecx, dword ptr [ecx + 0x14] */
  ecx = R32((uint32_t)(ecx + 0x14u));
/* 46109c: lea eax, [eax + ecx*2] */
  eax = (uint32_t)(eax + ecx*2);
/* 46109f: cmp dword ptr [esp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4610a3: jb 0x4636d2 */
  if (cf) goto L_4636d2;
L_4610a9: /* 4610a9: xor eax, eax */
  eax = 0;
L_4610ab: /* 4610ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4610ac: ret 4 */
  esp += 8; SPILL(); return;
L_4636c4: /* 4636c4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 4636c6: jmp 0x46108a */
  goto L_46108a;
L_4636cb: /* 4636cb: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 4636cd: jmp 0x461099 */
  goto L_461099;
L_4636d2: /* 4636d2: xor eax, eax */
  eax = 0;
/* 4636d4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4636d5: jmp 0x4610ab */
  goto L_4610ab;
}

void f_4610af(void) {
  LOAD_REGS();
L_4610af: /* 4610af: cmp dword ptr [ecx + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4610b3: jb 0x4610c1 */
  if (cf) goto L_4610c1;
L_4610b5: /* 4610b5: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
L_4610b8: /* 4610b8: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4610bc: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4610be: ret 4 */
  esp += 8; SPILL(); return;
L_4610c1: /* 4610c1: lea eax, [ecx + 4] */
  eax = (uint32_t)(ecx + 0x4u);
/* 4610c4: jmp 0x4610b8 */
  goto L_4610b8;
}

void f_4610d5(void) {
  LOAD_REGS();
L_4610d5: /* 4610d5: jmp dword ptr [0x48e0f4] */
  SPILL(); f_41aeed(); return; /* MSVCR70!__uncaught_exception */
}

void f_461123(void) {
  LOAD_REGS();
L_461123: /* 461123: cmp dword ptr [ecx + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 461127: jb 0x461136 */
  if (cf) goto L_461136;
L_461129: /* 461129: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
L_46112c: /* 46112c: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 461130: lea eax, [eax + ecx*2] */
  eax = (uint32_t)(eax + ecx*2);
/* 461133: ret 4 */
  esp += 8; SPILL(); return;
L_461136: /* 461136: lea eax, [ecx + 4] */
  eax = (uint32_t)(ecx + 0x4u);
/* 461139: jmp 0x46112c */
  goto L_46112c;
}

void f_46114c(void) {
  LOAD_REGS();
L_46114c: /* 46114c: mov eax, dword ptr [0x4d0cbc] */
  eax = R32((uint32_t)(0x4d0cbcu));
/* 461151: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 461154: mov dword ptr [eax + 0x4d0cbc], 0x4c7730 */
  W32((uint32_t)(eax + 0x4d0cbcu), 0x4c7730u);
/* 46115e: mov ecx, 0x4d0cc4 */
  ecx = 0x4d0cc4u;
/* 461163: jmp 0x461c2d */
  SPILL(); f_461c2d(); return;
}

void f_461168(void) {
  LOAD_REGS();
L_461168: /* 461168: mov eax, dword ptr [0x4d0c1c] */
  eax = R32((uint32_t)(0x4d0c1cu));
/* 46116d: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 461170: mov dword ptr [eax + 0x4d0c1c], 0x4c7680 */
  W32((uint32_t)(eax + 0x4d0c1cu), 0x4c7680u);
/* 46117a: mov ecx, 0x4d0c20 */
  ecx = 0x4d0c20u;
/* 46117f: jmp 0x461c2d */
  SPILL(); f_461c2d(); return;
}

void f_461184(void) {
  LOAD_REGS();
L_461184: /* 461184: mov ecx, 0x4d0bb8 */
  ecx = 0x4d0bb8u;
/* 461189: jmp 0x461cd8 */
  SPILL(); f_461cd8(); return;
}

void f_46118e(void) {
  LOAD_REGS();
L_46118e: /* 46118e: mov eax, dword ptr [0x4d0acc] */
  eax = R32((uint32_t)(0x4d0accu));
/* 461193: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 461196: mov dword ptr [eax + 0x4d0acc], 0x4c7788 */
  W32((uint32_t)(eax + 0x4d0accu), 0x4c7788u);
/* 4611a0: mov ecx, 0x4d0ad4 */
  ecx = 0x4d0ad4u;
/* 4611a5: jmp 0x462de1 */
  SPILL(); f_462de1(); return;
}

void f_4611aa(void) {
  LOAD_REGS();
L_4611aa: /* 4611aa: mov eax, dword ptr [0x4d098c] */
  eax = R32((uint32_t)(0x4d098cu));
/* 4611af: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4611b2: mov dword ptr [eax + 0x4d098c], 0x4c76d8 */
  W32((uint32_t)(eax + 0x4d098cu), 0x4c76d8u);
/* 4611bc: mov ecx, 0x4d0990 */
  ecx = 0x4d0990u;
/* 4611c1: jmp 0x462de1 */
  SPILL(); f_462de1(); return;
}

void f_4611c6(void) {
  LOAD_REGS();
L_4611c6: /* 4611c6: mov ecx, 0x4d0928 */
  ecx = 0x4d0928u;
/* 4611cb: jmp 0x46130d */
  SPILL(); f_46130d(); return;
}

void f_4611d0(void) {
  LOAD_REGS();
L_4611d0: /* 4611d0: mov eax, dword ptr [0x4d06dc] */
  eax = R32((uint32_t)(0x4d06dcu));
/* 4611d5: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4611d8: mov dword ptr [eax + 0x4d06dc], 0x4c702c */
  W32((uint32_t)(eax + 0x4d06dcu), 0x4c702cu);
/* 4611e2: mov ecx, 0x4d06e4 */
  ecx = 0x4d06e4u;
/* 4611e7: jmp 0x462e5d */
  SPILL(); f_462e5d(); return;
}

void f_4611ec(void) {
  LOAD_REGS();
L_4611ec: /* 4611ec: mov ecx, 0x4d06d8 */
  ecx = 0x4d06d8u;
/* 4611f1: jmp 0x462d80 */
  goto L_462d80;
L_462d80: /* 462d80: push 0x4d05b0 */
  { uint32_t v = 0x4d05b0u; esp -= 4; W32(esp, v); }
/* 462d85: call dword ptr [0x48e034] */
  esp -= 4; W32(esp, 0x462d8bu); SPILL(); call_ind(R32(0x48e034u)); if (g_unwind) return; /* KERNEL32!InterlockedDecrement */ RELOAD();
/* 462d8b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 462d8d: jl 0x462d90 */
  if ((sf != of)) goto L_462d90;
L_462d8f: /* 462d8f: ret  */
  esp += 4; SPILL(); return;
L_462d90: /* 462d90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462d91: mov esi, 0x4d0e48 */
  esi = 0x4d0e48u;
L_462d96: /* 462d96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462d97: call 0x461d64 */
  esp -= 4; W32(esp, 0x462d9cu); SPILL(); f_461d64(); if (g_unwind) return; RELOAD();
/* 462d9c: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 462d9f: cmp esi, 0x4d0ea8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4d0ea8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 462da5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 462da6: jl 0x462d96 */
  if ((sf != of)) goto L_462d96;
L_462da8: /* 462da8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 462da9: jmp 0x462d8f */
  goto L_462d8f;
}

void f_4611f6(void) {
  LOAD_REGS();
L_4611f6: /* 4611f6: mov eax, dword ptr [0x4d063c] */
  eax = R32((uint32_t)(0x4d063cu));
/* 4611fb: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4611fe: mov dword ptr [eax + 0x4d063c], 0x4c6cc0 */
  W32((uint32_t)(eax + 0x4d063cu), 0x4c6cc0u);
/* 461208: mov ecx, 0x4d0640 */
  ecx = 0x4d0640u;
/* 46120d: jmp 0x462e5d */
  SPILL(); f_462e5d(); return;
}

void f_461212(void) {
  LOAD_REGS();
L_461212: /* 461212: mov ecx, 0x4d05d8 */
  ecx = 0x4d05d8u;
/* 461217: jmp 0x4622d2 */
  SPILL(); f_4622d2(); return;
}

void f_46121c(void) {
  LOAD_REGS();
L_46121c: /* 46121c: mov ecx, 0x4d0638 */
  ecx = 0x4d0638u;
/* 461221: jmp 0x462d80 */
  goto L_462d80;
L_462d80: /* 462d80: push 0x4d05b0 */
  { uint32_t v = 0x4d05b0u; esp -= 4; W32(esp, v); }
/* 462d85: call dword ptr [0x48e034] */
  esp -= 4; W32(esp, 0x462d8bu); SPILL(); call_ind(R32(0x48e034u)); if (g_unwind) return; /* KERNEL32!InterlockedDecrement */ RELOAD();
/* 462d8b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 462d8d: jl 0x462d90 */
  if ((sf != of)) goto L_462d90;
L_462d8f: /* 462d8f: ret  */
  esp += 4; SPILL(); return;
L_462d90: /* 462d90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462d91: mov esi, 0x4d0e48 */
  esi = 0x4d0e48u;
L_462d96: /* 462d96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462d97: call 0x461d64 */
  esp -= 4; W32(esp, 0x462d9cu); SPILL(); f_461d64(); if (g_unwind) return; RELOAD();
/* 462d9c: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 462d9f: cmp esi, 0x4d0ea8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4d0ea8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 462da5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 462da6: jl 0x462d96 */
  if ((sf != of)) goto L_462d96;
L_462da8: /* 462da8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 462da9: jmp 0x462d8f */
  goto L_462d8f;
}

void f_461226(void) {
  LOAD_REGS();
L_461226: /* 461226: mov eax, 0x48c26a */
  eax = 0x48c26au;
/* 46122b: call 0x4616c0 */
  esp -= 4; W32(esp, 0x461230u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 461230: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 461231: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 461232: mov esi, ecx */
  esi = ecx;
/* 461234: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 461237: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 46123a: mov dword ptr [esi], 0x4c7298 */
  W32((uint32_t)(esi), 0x4c7298u);
/* 461240: call 0x461a9e */
  esp -= 4; W32(esp, 0x461245u); SPILL(); f_461a9e(); if (g_unwind) return; RELOAD();
/* 461245: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 461249: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 46124b: call 0x4620da */
  esp -= 4; W32(esp, 0x461250u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 461250: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 461252: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 461253: je 0x461275 */
  if (zf) goto L_461275;
L_461255: /* 461255: mov ecx, eax */
  ecx = eax;
/* 461257: call 0x461279 */
  esp -= 4; W32(esp, 0x46125cu); SPILL(); f_461279(); if (g_unwind) return; RELOAD();
L_46125c: /* 46125c: mov ecx, esi */
  ecx = esi;
/* 46125e: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 461261: call 0x461f3f */
  esp -= 4; W32(esp, 0x461266u); SPILL(); f_461f3f(); if (g_unwind) return; RELOAD();
/* 461266: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 461269: mov eax, esi */
  eax = esi;
/* 46126b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46126c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 461273: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 461274: ret  */
  esp += 4; SPILL(); return;
L_461275: /* 461275: xor eax, eax */
  eax = 0;
/* 461277: jmp 0x46125c */
  goto L_46125c;
}

void f_461279(void) {
  LOAD_REGS();
L_461279: /* 461279: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46127a: mov esi, ecx */
  esi = ecx;
/* 46127c: call 0x461689 */
  esp -= 4; W32(esp, 0x461281u); SPILL(); f_461689(); if (g_unwind) return; RELOAD();
/* 461281: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 461283: mov ecx, dword ptr [0x4d0e34] */
  ecx = R32((uint32_t)(0x4d0e34u));
/* 461289: call 0x461292 */
  esp -= 4; W32(esp, 0x46128eu); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 46128e: mov eax, esi */
  eax = esi;
/* 461290: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 461291: ret  */
  esp += 4; SPILL(); return;
}

void f_461292(void) {
  LOAD_REGS();
L_461292: /* 461292: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 461293: mov ebp, esp */
  ebp = esp;
/* 461295: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 461296: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 461297: mov esi, ecx */
  esi = ecx;
/* 461299: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46129b: lea ecx, [ebp - 4] */
  ecx = (uint32_t)(ebp + 0xfffffffcu);
/* 46129e: call 0x4612ba */
  esp -= 4; W32(esp, 0x4612a3u); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 4612a3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4612a6: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4612a9: jae 0x4612af */
  if (!cf) goto L_4612af;
L_4612ab: /* 4612ab: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4612ac: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
L_4612af: /* 4612af: lea ecx, [ebp - 4] */
  ecx = (uint32_t)(ebp + 0xfffffffcu);
/* 4612b2: call 0x4613d8 */
  esp -= 4; W32(esp, 0x4612b7u); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 4612b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4612b8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4612b9: ret  */
  esp += 4; SPILL(); return;
}

void f_4612ba(void) {
  LOAD_REGS();
L_4612ba: /* 4612ba: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4612be: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4612c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4612c2: mov esi, ecx */
  esi = ecx;
/* 4612c4: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 4612c6: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 4612c9: lea eax, [eax*8 + 0x4d0e48] */
  eax = (uint32_t)(eax*8 + 0x4d0e48u);
/* 4612d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4612d1: call 0x4612dd */
  esp -= 4; W32(esp, 0x4612d6u); SPILL(); f_4612dd(); if (g_unwind) return; RELOAD();
/* 4612d6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4612d7: mov eax, esi */
  eax = esi;
/* 4612d9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4612da: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4612dd(void) {
  LOAD_REGS();
L_4612dd: /* 4612dd: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 4612e1: call dword ptr [0x48e01c] */
  esp -= 4; W32(esp, 0x4612e7u); SPILL(); call_ind(R32(0x48e01cu)); if (g_unwind) return; /* KERNEL32!EnterCriticalSection */ RELOAD();
/* 4612e7: ret  */
  esp += 4; SPILL(); return;
}

void f_4612e8(void) {
  LOAD_REGS();
L_4612e8: /* 4612e8: call dword ptr [0x48e074] */
  esp -= 4; W32(esp, 0x4612eeu); SPILL(); f_40f9d9(); if (g_unwind) return; /* MSVCR70!__iob_func */ RELOAD();
/* 4612ee: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4612f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4612f2: mov ecx, 0x4d0b08 */
  ecx = 0x4d0b08u;
/* 4612f7: call 0x461fa1 */
  esp -= 4; W32(esp, 0x4612fcu); SPILL(); f_461fa1(); if (g_unwind) return; RELOAD();
/* 4612fc: push 0x461308 */
  { uint32_t v = 0x461308u; esp -= 4; W32(esp, v); }
/* 461301: call 0x461586 */
  esp -= 4; W32(esp, 0x461306u); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 461306: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 461307: ret  */
  esp += 4; SPILL(); return;
}

void f_461308(void) {
  LOAD_REGS();
L_461308: /* 461308: mov ecx, 0x4d0b08 */
  ecx = 0x4d0b08u;
  SPILL(); f_46130d(); return;
}

void f_46130d(void) {
  LOAD_REGS();
L_46130d: /* 46130d: mov eax, 0x48d368 */
  eax = 0x48d368u;
/* 461312: call 0x4616c0 */
  esp -= 4; W32(esp, 0x461317u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 461317: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 461318: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 461319: mov esi, ecx */
  esi = ecx;
/* 46131b: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 46131e: mov dword ptr [esi], 0x4c79e0 */
  W32((uint32_t)(esi), 0x4c79e0u);
/* 461324: cmp byte ptr [esi + 0x54], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x54u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 461328: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 46132f: jne 0x463a65 */
  if (!zf) goto L_463a65;
L_461335: /* 461335: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 461338: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46133a: jne 0x463a6f */
  if (!zf) goto L_463a6f;
L_461340: /* 461340: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 461343: call 0x461389 */
  esp -= 4; W32(esp, 0x461348u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 461348: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46134c: mov ecx, esi */
  ecx = esi;
/* 46134e: call 0x461360 */
  esp -= 4; W32(esp, 0x461353u); SPILL(); f_461360(); if (g_unwind) return; RELOAD();
/* 461353: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 461356: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 461357: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46135e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46135f: ret  */
  esp += 4; SPILL(); return;
L_463a65: /* 463a65: call 0x480c07 */
  esp -= 4; W32(esp, 0x463a6au); SPILL(); f_480c07(); if (g_unwind) return; RELOAD();
/* 463a6a: jmp 0x461335 */
  goto L_461335;
L_463a6f: /* 463a6f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 463a71: call 0x465c86 */
  esp -= 4; W32(esp, 0x463a76u); SPILL(); f_465c86(); if (g_unwind) return; RELOAD();
/* 463a76: jmp 0x461340 */
  goto L_461340;
}

void f_461360(void) {
  LOAD_REGS();
L_461360: /* 461360: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 461361: mov esi, ecx */
  esi = ecx;
/* 461363: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 461364: mov edi, dword ptr [esi + 0x38] */
  edi = R32((uint32_t)(esi + 0x38u));
/* 461367: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 461369: mov dword ptr [esi], 0x4c7298 */
  W32((uint32_t)(esi), 0x4c7298u);
/* 46136f: je 0x46137f */
  if (zf) goto L_46137f;
L_461371: /* 461371: mov ecx, edi */
  ecx = edi;
/* 461373: call 0x461389 */
  esp -= 4; W32(esp, 0x461378u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 461378: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 461379: call 0x461c65 */
  esp -= 4; W32(esp, 0x46137eu); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 46137e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46137f: /* 46137f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 461380: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 461383: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 461384: jmp 0x461d4f */
  SPILL(); f_461d4f(); return;
}

void f_461389(void) {
  LOAD_REGS();
L_461389: /* 461389: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 46138b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46138d: je 0x46139c */
  if (zf) goto L_46139c;
L_46138f: /* 46138f: call 0x46139d */
  esp -= 4; W32(esp, 0x461394u); SPILL(); f_46139d(); if (g_unwind) return; RELOAD();
/* 461394: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 461396: jne 0x462e68 */
  if (!zf) goto L_462e68;
L_46139c: /* 46139c: ret  */
  esp += 4; SPILL(); return;
L_462e68: /* 462e68: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 462e6a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 462e6c: mov ecx, eax */
  ecx = eax;
/* 462e6e: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x462e70u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 462e70: jmp 0x46139c */
  goto L_46139c;
}

void f_46139d(void) {
  LOAD_REGS();
L_46139d: /* 46139d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46139e: mov ebp, esp */
  ebp = esp;
/* 4613a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4613a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4613a2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4613a3: mov edi, ecx */
  edi = ecx;
/* 4613a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4613a7: lea ecx, [ebp - 4] */
  ecx = (uint32_t)(ebp + 0xfffffffcu);
/* 4613aa: call 0x4612ba */
  esp -= 4; W32(esp, 0x4613afu); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 4613af: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 4613b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 4613b4: jbe 0x4613bf */
  if ((cf | zf)) goto L_4613bf;
L_4613b6: /* 4613b6: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4613b9: jae 0x4613bf */
  if (!cf) goto L_4613bf;
L_4613bb: /* 4613bb: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 4613bc: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
L_4613bf: /* 4613bf: mov esi, dword ptr [edi + 4] */
  esi = R32((uint32_t)(edi + 0x4u));
/* 4613c2: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  esi = r;
  }
/* 4613c4: sbb esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  esi = r;
  }
/* 4613c6: not esi */
  esi = ~esi;
/* 4613c8: lea ecx, [ebp - 4] */
  ecx = (uint32_t)(ebp + 0xfffffffcu);
/* 4613cb: and esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 4613cd: call 0x4613d8 */
  esp -= 4; W32(esp, 0x4613d2u); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 4613d2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4613d3: mov eax, esi */
  eax = esi;
/* 4613d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4613d6: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4613d7: ret  */
  esp += 4; SPILL(); return;
}

void f_4613d8(void) {
  LOAD_REGS();
L_4613d8: /* 4613d8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4613da: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 4613dd: lea eax, [eax*8 + 0x4d0e48] */
  eax = (uint32_t)(eax*8 + 0x4d0e48u);
/* 4613e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4613e5: call 0x4613ec */
  esp -= 4; W32(esp, 0x4613eau); SPILL(); f_4613ec(); if (g_unwind) return; RELOAD();
/* 4613ea: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4613eb: ret  */
  esp += 4; SPILL(); return;
}

void f_4613ec(void) {
  LOAD_REGS();
L_4613ec: /* 4613ec: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 4613f0: call dword ptr [0x48e018] */
  esp -= 4; W32(esp, 0x4613f6u); SPILL(); call_ind(R32(0x48e018u)); if (g_unwind) return; /* KERNEL32!LeaveCriticalSection */ RELOAD();
/* 4613f6: ret  */
  esp += 4; SPILL(); return;
}

void f_4613f7(void) {
  LOAD_REGS();
L_4613f7: /* 4613f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4613f8: call dword ptr [esp + 8] */
  { uint32_t t = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, 0x4613fcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4613fc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4613fd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_461400(void) {
  LOAD_REGS();
L_461400: /* 461400: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 461401: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 461405: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 461407: mov ecx, esi */
  ecx = esi;
/* 461409: call 0x4620f5 */
  esp -= 4; W32(esp, 0x46140eu); SPILL(); f_4620f5(); if (g_unwind) return; RELOAD();
/* 46140e: mov ecx, esi */
  ecx = esi;
/* 461410: call 0x461419 */
  esp -= 4; W32(esp, 0x461415u); SPILL(); f_461419(); if (g_unwind) return; RELOAD();
/* 461415: mov eax, esi */
  eax = esi;
/* 461417: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 461418: ret  */
  esp += 4; SPILL(); return;
}

void f_461419(void) {
  LOAD_REGS();
L_461419: /* 461419: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46141a: mov esi, ecx */
  esi = ecx;
/* 46141c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46141e: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 461421: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 461422: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 461424: xor edi, edi */
  edi = 0;
/* 461426: test byte ptr [eax + 4], 6 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4u))); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46142a: jne 0x46143f */
  if (!zf) goto L_46143f;
L_46142c: /* 46142c: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 46142f: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 461431: mov ecx, eax */
  ecx = eax;
/* 461433: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x461436u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 461436: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 461439: je 0x4634c1 */
  if (zf) goto L_4634c1;
L_46143f: /* 46143f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 461441: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 461444: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 461446: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 461447: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 461449: call 0x461453 */
  esp -= 4; W32(esp, 0x46144eu); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 46144e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46144f: mov eax, esi */
  eax = esi;
/* 461451: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 461452: ret  */
  esp += 4; SPILL(); return;
L_4634c1: /* 4634c1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4634c3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4634c4: jmp 0x46143f */
  goto L_46143f;
}

void f_461453(void) {
  LOAD_REGS();
L_461453: /* 461453: cmp dword ptr [esp + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 461458: jne 0x4633ac */
  if (!zf) goto L_4633ac;
L_46145e: /* 46145e: ret 8 */
  esp += 12; SPILL(); return;
L_4633ac: /* 4633ac: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4633af: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4633b3: or eax, dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4633b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4633b8: call 0x464bb2 */
  esp -= 4; W32(esp, 0x4633bdu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 4633bd: jmp 0x46145e */
  goto L_46145e;
}

void f_461495(void) {
  LOAD_REGS();
  goto L_461495;
L_461000: /* 461000: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 461001: call dword ptr [0x48e190] */
  esp -= 4; W32(esp, 0x461007u); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* 461007: and dword ptr [0x4d0ee8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4d0ee8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(0x4d0ee8u), r);
  }
/* 46100e: jmp 0x461513 */
  goto L_461513;
L_461013: /* 461013: xor eax, eax */
  eax = 0;
/* 461015: jmp 0x461517 */
  goto L_461517;
L_461495: /* 461495: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 461499: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46149b: jne 0x4614af */
  if (!zf) goto L_4614af;
L_46149d: /* 46149d: cmp dword ptr [0x4d0ed4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4d0ed4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4614a3: jle 0x461013 */
  if ((zf || sf != of)) goto L_461013;
L_4614a9: /* 4614a9: dec dword ptr [0x4d0ed4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4d0ed4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(0x4d0ed4u), r);
  }
L_4614af: /* 4614af: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4614b2: mov ecx, dword ptr [0x48e160] */
  ecx = R32((uint32_t)(0x48e160u));
/* 4614b8: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 4614ba: mov dword ptr [0x4d0edc], ecx */
  W32((uint32_t)(0x4d0edcu), ecx);
/* 4614c0: jne 0x462efe */
  if (!zf) goto L_462efe;
L_4614c6: /* 4614c6: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* 4614cb: call dword ptr [0x48e0e4] */
  esp -= 4; W32(esp, 0x4614d1u); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* 4614d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4614d3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4614d4: mov dword ptr [0x4d0ee8], eax */
  W32((uint32_t)(0x4d0ee8u), eax);
/* 4614d9: je 0x461013 */
  if (zf) goto L_461013;
L_4614df: /* 4614df: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 4614e2: mov eax, dword ptr [0x4d0ee8] */
  eax = R32((uint32_t)(0x4d0ee8u));
/* 4614e7: mov dword ptr [0x4d0ee4], eax */
  W32((uint32_t)(0x4d0ee4u), eax);
/* 4614ec: call 0x46258f */
  esp -= 4; W32(esp, 0x4614f1u); SPILL(); f_46258f(); if (g_unwind) return; RELOAD();
/* 4614f1: push 0x462f3b */
  { uint32_t v = 0x462f3bu; esp -= 4; W32(esp, v); }
/* 4614f6: call 0x461586 */
  esp -= 4; W32(esp, 0x4614fbu); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 4614fb: mov dword ptr [esp], 0x4cf0dc */
  W32((uint32_t)(esp), 0x4cf0dcu);
/* 461502: push 0x4cf000 */
  { uint32_t v = 0x4cf000u; esp -= 4; W32(esp, v); }
/* 461507: call 0x46151a */
  esp -= 4; W32(esp, 0x46150cu); SPILL(); f_46151a(); if (g_unwind) return; RELOAD();
/* 46150c: inc dword ptr [0x4d0ed4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4d0ed4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x4d0ed4u), r);
  }
/* 461512: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_461513: /* 461513: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_461514: /* 461514: xor eax, eax */
  eax = 0;
/* 461516: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_461517: /* 461517: ret 0xc */
  esp += 16; SPILL(); return;
L_462efe: /* 462efe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 462f00: jne 0x461514 */
  if (!zf) goto L_461514;
L_462f06: /* 462f06: mov eax, dword ptr [0x4d0ee8] */
  eax = R32((uint32_t)(0x4d0ee8u));
/* 462f0b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 462f0d: je 0x461514 */
  if (zf) goto L_461514;
L_462f13: /* 462f13: sub dword ptr [0x4d0ee4], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4d0ee4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(0x4d0ee4u), r);
  }
/* 462f1a: cmp dword ptr [0x4d0ee4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4d0ee4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 462f20: jb 0x461000 */
  if (cf) goto L_461000;
L_462f26: /* 462f26: mov ecx, dword ptr [0x4d0ee4] */
  ecx = R32((uint32_t)(0x4d0ee4u));
/* 462f2c: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 462f2e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 462f30: je 0x462f13 */
  if (zf) goto L_462f13;
L_462f32: /* 462f32: call ecx */
  { uint32_t t = ecx; esp -= 4; W32(esp, 0x462f34u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 462f34: mov eax, dword ptr [0x4d0ee8] */
  eax = R32((uint32_t)(0x4d0ee8u));
/* 462f39: jmp 0x462f13 */
  goto L_462f13;
}

void f_46151a(void) {
  LOAD_REGS();
L_46151a: /* 46151a: jmp dword ptr [0x48e15c] */
  SPILL(); f_4011ee(); return; /* MSVCR70!_initterm */
}

void f_461520(void) {
  LOAD_REGS();
L_461520: /* 461520: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 461521: mov ebp, esp */
  ebp = esp;
/* 461523: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 461526: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 461527: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 46152a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46152b: call dword ptr [0x48e000] */
  esp -= 4; W32(esp, 0x461531u); SPILL(); call_ind(R32(0x48e000u)); if (g_unwind) return; /* KERNEL32!GetSystemTimeAsFileTime */ RELOAD();
/* 461531: mov esi, dword ptr [ebp - 4] */
  esi = R32((uint32_t)(ebp + 0xfffffffcu));
/* 461534: xor esi, dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 461537: call dword ptr [0x48e004] */
  esp -= 4; W32(esp, 0x46153du); SPILL(); call_ind(R32(0x48e004u)); if (g_unwind) return; /* KERNEL32!GetCurrentProcessId */ RELOAD();
/* 46153d: xor esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 46153f: call dword ptr [0x48e008] */
  esp -= 4; W32(esp, 0x461545u); SPILL(); call_ind(R32(0x48e008u)); if (g_unwind) return; /* KERNEL32!GetCurrentThreadId */ RELOAD();
/* 461545: xor esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 461547: call dword ptr [0x48e00c] */
  esp -= 4; W32(esp, 0x46154du); SPILL(); call_ind(R32(0x48e00cu)); if (g_unwind) return; /* KERNEL32!GetTickCount */ RELOAD();
/* 46154d: xor esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 46154f: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 461552: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 461553: call dword ptr [0x48e010] */
  esp -= 4; W32(esp, 0x461559u); SPILL(); call_ind(R32(0x48e010u)); if (g_unwind) return; /* KERNEL32!QueryPerformanceCounter */ RELOAD();
/* 461559: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46155c: xor eax, dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 46155f: xor esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  zf = (r) == 0;
  esi = r;
  }
/* 461561: mov dword ptr [0x4d05d0], esi */
  W32((uint32_t)(0x4d05d0u), esi);
/* 461567: je 0x463d38 */
  if (zf) goto L_463d38;
L_46156d: /* 46156d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46156e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46156f: ret  */
  esp += 4; SPILL(); return;
L_463d38: /* 463d38: mov dword ptr [0x4d05d0], 0xbb40e64e */
  W32((uint32_t)(0x4d05d0u), 0xbb40e64eu);
/* 463d42: jmp 0x46156d */
  goto L_46156d;
}

void f_461570(void) {
  LOAD_REGS();
L_461570: /* 461570: mov ecx, 0x4d0638 */
  ecx = 0x4d0638u;
/* 461575: call 0x462769 */
  esp -= 4; W32(esp, 0x46157au); SPILL(); f_462769(); if (g_unwind) return; RELOAD();
/* 46157a: push 0x46121c */
  { uint32_t v = 0x46121cu; esp -= 4; W32(esp, v); }
/* 46157f: call 0x461586 */
  esp -= 4; W32(esp, 0x461584u); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 461584: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 461585: ret  */
  esp += 4; SPILL(); return;
}

void f_461586(void) {
  LOAD_REGS();
L_461586: /* 461586: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 46158a: call 0x461598 */
  esp -= 4; W32(esp, 0x46158fu); SPILL(); f_461598(); if (g_unwind) return; RELOAD();
/* 46158f: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 461591: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 461593: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 461595: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 461596: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 461597: ret  */
  esp += 4; SPILL(); return;
}

void f_461598(void) {
  LOAD_REGS();
L_461598: /* 461598: cmp dword ptr [0x4d0ee8], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4d0ee8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46159f: je 0x463cfc */
  if (zf) goto L_463cfc;
L_4615a5: /* 4615a5: push 0x4d0ee4 */
  { uint32_t v = 0x4d0ee4u; esp -= 4; W32(esp, v); }
/* 4615aa: push 0x4d0ee8 */
  { uint32_t v = 0x4d0ee8u; esp -= 4; W32(esp, v); }
/* 4615af: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4615b3: call 0x4615bc */
  esp -= 4; W32(esp, 0x4615b8u); SPILL(); f_4615bc(); if (g_unwind) return; RELOAD();
/* 4615b8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4615bb: ret  */
  esp += 4; SPILL(); return;
L_463cfc: /* 463cfc: jmp dword ptr [0x48e158] */
  SPILL(); f_404cc9(); return; /* MSVCR70!_onexit */
}

void f_4615bc(void) {
  LOAD_REGS();
L_4615bc: /* 4615bc: jmp dword ptr [0x48e154] */
  SPILL(); f_40259b(); return; /* MSVCR70!__dllonexit */
}

void f_4615c2(void) {
  LOAD_REGS();
L_4615c2: /* 4615c2: call dword ptr [0x48e074] */
  esp -= 4; W32(esp, 0x4615c8u); SPILL(); f_40f9d9(); if (g_unwind) return; /* MSVCR70!__iob_func */ RELOAD();
/* 4615c8: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4615cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4615cc: mov ecx, 0x4d05d8 */
  ecx = 0x4d05d8u;
/* 4615d1: call 0x4615e2 */
  esp -= 4; W32(esp, 0x4615d6u); SPILL(); f_4615e2(); if (g_unwind) return; RELOAD();
/* 4615d6: push 0x461212 */
  { uint32_t v = 0x461212u; esp -= 4; W32(esp, v); }
/* 4615db: call 0x461586 */
  esp -= 4; W32(esp, 0x4615e0u); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 4615e0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4615e1: ret  */
  esp += 4; SPILL(); return;
}

void f_4615e2(void) {
  LOAD_REGS();
L_4615e2: /* 4615e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4615e3: mov esi, ecx */
  esi = ecx;
/* 4615e5: call 0x461eec */
  esp -= 4; W32(esp, 0x4615eau); SPILL(); f_461eec(); if (g_unwind) return; RELOAD();
/* 4615ea: and dword ptr [esi + 0x48], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x48u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x48u), r);
  }
/* 4615ee: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 4615f1: mov dword ptr [esi], 0x4c6f3c */
  W32((uint32_t)(esi), 0x4c6f3cu);
/* 4615f7: call 0x461279 */
  esp -= 4; W32(esp, 0x4615fcu); SPILL(); f_461279(); if (g_unwind) return; RELOAD();
/* 4615fc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4615fe: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 461602: mov ecx, esi */
  ecx = esi;
/* 461604: call 0x46160f */
  esp -= 4; W32(esp, 0x461609u); SPILL(); f_46160f(); if (g_unwind) return; RELOAD();
/* 461609: mov eax, esi */
  eax = esi;
/* 46160b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46160c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46160f(void) {
  LOAD_REGS();
L_46160f: /* 46160f: cmp dword ptr [esp + 8], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 461614: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 461615: mov esi, ecx */
  esi = ecx;
/* 461617: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 46161a: and byte ptr [esi + 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x4cu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esi + 0x4cu), r);
  }
/* 46161e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46161f: mov byte ptr [esi + 0x54], al */
  W8((uint32_t)(esi + 0x54u), (eax & 0xffu));
/* 461622: call 0x461f3f */
  esp -= 4; W32(esp, 0x461627u); SPILL(); f_461f3f(); if (g_unwind) return; RELOAD();
/* 461627: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 46162b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46162d: je 0x461642 */
  if (zf) goto L_461642;
L_46162f: /* 46162f: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 461632: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 461633: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 461634: lea eax, [edi + 8] */
  eax = (uint32_t)(edi + 0x8u);
/* 461637: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 461638: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 461639: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46163a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46163b: mov ecx, esi */
  ecx = esi;
/* 46163d: call 0x46165e */
  esp -= 4; W32(esp, 0x461642u); SPILL(); f_46165e(); if (g_unwind) return; RELOAD();
L_461642: /* 461642: mov dword ptr [esi + 0x5c], edi */
  W32((uint32_t)(esi + 0x5cu), edi);
/* 461645: mov eax, dword ptr [0x4d05d4] */
  eax = R32((uint32_t)(0x4d05d4u));
/* 46164a: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 46164d: mov eax, dword ptr [0x4d05d4] */
  eax = R32((uint32_t)(0x4d05d4u));
/* 461652: and dword ptr [esi + 0x3c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x3cu), r);
  }
/* 461656: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 461657: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 46165a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46165b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46165e(void) {
  LOAD_REGS();
L_46165e: /* 46165e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46165f: mov ebp, esp */
  ebp = esp;
/* 461661: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 461664: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 461667: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 46166a: mov dword ptr [ecx + 0x14], eax */
  W32((uint32_t)(ecx + 0x14u), eax);
/* 46166d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 461670: mov dword ptr [ecx + 0x20], eax */
  W32((uint32_t)(ecx + 0x20u), eax);
/* 461673: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 461676: mov dword ptr [ecx + 0x24], eax */
  W32((uint32_t)(ecx + 0x24u), eax);
/* 461679: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 46167c: mov dword ptr [ecx + 0x30], eax */
  W32((uint32_t)(ecx + 0x30u), eax);
/* 46167f: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 461682: mov dword ptr [ecx + 0x34], eax */
  W32((uint32_t)(ecx + 0x34u), eax);
/* 461685: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 461686: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_461689(void) {
  LOAD_REGS();
L_461689: /* 461689: mov eax, 0x48dd69 */
  eax = 0x48dd69u;
/* 46168e: call 0x4616c0 */
  esp -= 4; W32(esp, 0x461693u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 461693: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 461694: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 461695: mov eax, dword ptr [0x4d0e34] */
  eax = R32((uint32_t)(0x4d0e34u));
/* 46169a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46169c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46169d: mov esi, eax */
  esi = eax;
/* 46169f: je 0x4625c6 */
  if (zf) goto L_4625c6;
L_4616a5: /* 4616a5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4616a8: mov eax, esi */
  eax = esi;
/* 4616aa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4616ab: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4616b2: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4616b3: ret  */
  esp += 4; SPILL(); return;
L_4625c6: /* 4625c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4625c7: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 4625ca: call 0x4612ba */
  esp -= 4; W32(esp, 0x4625cfu); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 4625cf: mov eax, dword ptr [0x4d0e34] */
  eax = R32((uint32_t)(0x4d0e34u));
/* 4625d4: and dword ptr [ebp - 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4625d7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4625d9: mov esi, eax */
  esi = eax;
/* 4625db: jne 0x462631 */
  if (!zf) goto L_462631;
L_4625dd: /* 4625dd: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 4625df: call 0x4620da */
  esp -= 4; W32(esp, 0x4625e4u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 4625e4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4625e5: mov ecx, eax */
  ecx = eax;
/* 4625e7: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 4625ea: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4625ec: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4625f0: je 0x462642 */
  if (zf) goto L_462642;
L_4625f2: /* 4625f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4625f3: call 0x4616df */
  esp -= 4; W32(esp, 0x4625f8u); SPILL(); f_4616df(); if (g_unwind) return; RELOAD();
/* 4625f8: mov esi, eax */
  esi = eax;
L_4625fa: /* 4625fa: and byte ptr [ebp - 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffcu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4625fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4625ff: call 0x462646 */
  esp -= 4; W32(esp, 0x462604u); SPILL(); f_462646(); if (g_unwind) return; RELOAD();
/* 462604: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 462607: mov dword ptr [esi + 0x10], 0x3f */
  W32((uint32_t)(esi + 0x10u), 0x3fu);
/* 46260e: mov dword ptr [esp], 0x48e1b8 */
  W32((uint32_t)(esp), 0x48e1b8u);
/* 462615: call 0x46174a */
  esp -= 4; W32(esp, 0x46261au); SPILL(); f_46174a(); if (g_unwind) return; RELOAD();
/* 46261a: mov ecx, esi */
  ecx = esi;
/* 46261c: mov dword ptr [0x4d0e38], esi */
  W32((uint32_t)(0x4d0e38u), esi);
/* 462622: call 0x461292 */
  esp -= 4; W32(esp, 0x462627u); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 462627: mov eax, dword ptr [0x4d0e38] */
  eax = R32((uint32_t)(0x4d0e38u));
/* 46262c: mov dword ptr [0x4d0e40], eax */
  W32((uint32_t)(0x4d0e40u), eax);
L_462631: /* 462631: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 462635: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 462638: call 0x4613d8 */
  esp -= 4; W32(esp, 0x46263du); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 46263d: jmp 0x4616a5 */
  goto L_4616a5;
L_462642: /* 462642: xor esi, esi */
  esi = 0;
/* 462644: jmp 0x4625fa */
  goto L_4625fa;
}

void f_4616c0(void) {
  LOAD_REGS();
L_4616c0: /* 4616c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4616c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4616c3: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 4616c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4616ca: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4616ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 4616d5: mov dword ptr [esp + 0xc], ebp */
  W32((uint32_t)(esp + 0xcu), ebp);
/* 4616d9: lea ebp, [esp + 0xc] */
  ebp = (uint32_t)(esp + 0xcu);
/* 4616dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4616de: ret  */
  esp += 4; SPILL(); return;
}

void f_4616df(void) {
  LOAD_REGS();
L_4616df: /* 4616df: mov eax, 0x48dd0f */
  eax = 0x48dd0fu;
/* 4616e4: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4616e9u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4616e9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4616ea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4616eb: mov esi, ecx */
  esi = ecx;
/* 4616ed: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 4616f0: mov dword ptr [esi + 4], 1 */
  W32((uint32_t)(esi + 0x4u), 0x1u);
/* 4616f7: xor eax, eax */
  eax = 0;
/* 4616f9: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4616fc: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4616ff: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 461702: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 461705: mov al, byte ptr [ebp + 8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x8u))) & 0xffu);
/* 461708: push 0x48e1bc */
  { uint32_t v = 0x48e1bcu; esp -= 4; W32(esp, v); }
/* 46170d: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 461710: mov dword ptr [esi], 0x4c8bc8 */
  W32((uint32_t)(esi), 0x4c8bc8u);
/* 461716: mov byte ptr [esi + 0x14], al */
  W8((uint32_t)(esi + 0x14u), (eax & 0xffu));
/* 461719: call 0x46172f */
  esp -= 4; W32(esp, 0x46171eu); SPILL(); f_46172f(); if (g_unwind) return; RELOAD();
/* 46171e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 461721: mov eax, esi */
  eax = esi;
/* 461723: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 461724: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46172b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46172c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46172f(void) {
  LOAD_REGS();
L_46172f: /* 46172f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 461730: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 461732: mov esi, ecx */
  esi = ecx;
/* 461734: call 0x461ea8 */
  esp -= 4; W32(esp, 0x461739u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 461739: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46173d: mov ecx, esi */
  ecx = esi;
/* 46173f: call 0x46174a */
  esp -= 4; W32(esp, 0x461744u); SPILL(); f_46174a(); if (g_unwind) return; RELOAD();
/* 461744: mov eax, esi */
  eax = esi;
/* 461746: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 461747: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46174a(void) {
  LOAD_REGS();
L_46174a: /* 46174a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46174b: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46174f: mov esi, ecx */
  esi = ecx;
/* 461751: call 0x461028 */
  esp -= 4; W32(esp, 0x461756u); SPILL(); hle_strlen(); RELOAD();
/* 461756: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 461757: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 461758: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46175c: mov ecx, esi */
  ecx = esi;
/* 46175e: call 0x461767 */
  esp -= 4; W32(esp, 0x461763u); SPILL(); f_461767(); if (g_unwind) return; RELOAD();
/* 461763: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 461764: ret 4 */
  esp += 8; SPILL(); return;
}

void f_461767(void) {
  LOAD_REGS();
  goto L_461767;
L_46102e: /* 46102e: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 461031: jmp 0x46179c */
  goto L_46179c;
L_461767: /* 461767: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 461768: mov ebp, esp */
  ebp = esp;
/* 46176a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46176b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46176c: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 46176f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 461770: mov esi, ecx */
  esi = ecx;
/* 461772: call 0x461036 */
  esp -= 4; W32(esp, 0x461777u); SPILL(); f_461036(); if (g_unwind) return; RELOAD();
/* 461777: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 461779: jne 0x4634e4 */
  if (!zf) goto L_4634e4;
L_46177f: /* 46177f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 461781: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 461784: mov ecx, esi */
  ecx = esi;
/* 461786: call 0x461e63 */
  esp -= 4; W32(esp, 0x46178bu); SPILL(); f_461e63(); if (g_unwind) return; RELOAD();
/* 46178b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46178d: je 0x4617b3 */
  if (zf) goto L_4617b3;
L_46178f: /* 46178f: cmp dword ptr [esi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 461793: jae 0x46102e */
  if (!cf) goto L_46102e;
L_461799: /* 461799: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
L_46179c: /* 46179c: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46179f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4617a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4617a1: call 0x4617bb */
  esp -= 4; W32(esp, 0x4617a6u); SPILL(); hle_memcpy(); RELOAD();
/* 4617a6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4617a9: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4617ac: mov ecx, esi */
  ecx = esi;
/* 4617ae: call 0x461ed0 */
  esp -= 4; W32(esp, 0x4617b3u); SPILL(); f_461ed0(); if (g_unwind) return; RELOAD();
L_4617b3: /* 4617b3: mov eax, esi */
  eax = esi;
L_4617b5: /* 4617b5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4617b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4617b7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4617b8: ret 8 */
  esp += 12; SPILL(); return;
L_4634e4: /* 4634e4: cmp dword ptr [esi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4634e8: jb 0x4634ef */
  if (cf) goto L_4634ef;
L_4634ea: /* 4634ea: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4634ed: jmp 0x4634f2 */
  goto L_4634f2;
L_4634ef: /* 4634ef: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
L_4634f2: /* 4634f2: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4634f5: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 4634f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4634f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4634f9: mov ecx, esi */
  ecx = esi;
/* 4634fb: call 0x467320 */
  esp -= 4; W32(esp, 0x463500u); SPILL(); f_467320(); if (g_unwind) return; RELOAD();
/* 463500: jmp 0x4617b5 */
  goto L_4617b5;
}

void f_4617bb(void) { hle_memcpy(); }

void f_4617c1(void) {
  LOAD_REGS();
L_4617c1: /* 4617c1: mov eax, 0x48c301 */
  eax = 0x48c301u;
/* 4617c6: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4617cbu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4617cb: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4617ce: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 4617d1: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 4617d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4617d5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4617d6: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 4617d9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4617db: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4617de: mov eax, dword ptr [eax + esi + 0x14] */
  eax = R32((uint32_t)(eax + esi + 0x14u));
/* 4617e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4617e3: xor edi, edi */
  edi = 0;
/* 4617e5: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4617e7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 4617ea: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 4617ed: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 4617f0: jg 0x4636da */
  if ((!zf && sf == of)) goto L_4636da;
L_4617f6: /* 4617f6: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
L_4617f9: /* 4617f9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4617fa: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 4617fd: call 0x462178 */
  esp -= 4; W32(esp, 0x461802u); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 461802: cmp byte ptr [ebp - 0x24], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffdcu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 461806: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 461809: je 0x4636ec */
  if (zf) goto L_4636ec;
L_46180f: /* 46180f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 461811: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 461814: mov eax, dword ptr [eax + esi + 0xc] */
  eax = R32((uint32_t)(eax + esi + 0xcu));
/* 461818: and eax, 0x1c0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1c0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 46181d: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 461820: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 461824: je 0x461838 */
  if (zf) goto L_461838;
L_461826: /* 461826: cmp dword ptr [ebp - 0x18], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 461829: ja 0x4636f8 */
  if ((!cf && !zf)) goto L_4636f8;
L_46182f: /* 46182f: cmp dword ptr [ebp - 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 461832: jne 0x46220c */
  if (!zf) goto L_46220c;
L_461838: /* 461838: xor ebx, ebx */
  ebx = 0;
L_46183a: /* 46183a: cmp ebx, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46183d: jae 0x4621fe */
  if (!cf) goto L_4621fe;
L_461843: /* 461843: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 461845: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 461848: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 46184b: mov edi, dword ptr [eax + esi + 0x28] */
  edi = R32((uint32_t)(eax + esi + 0x28u));
/* 46184f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 461850: call 0x4610af */
  esp -= 4; W32(esp, 0x461855u); SPILL(); f_4610af(); if (g_unwind) return; RELOAD();
/* 461855: movsx eax, byte ptr [eax] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax)));
/* 461858: nop  */
/* 461859: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46185a: mov ecx, edi */
  ecx = edi;
/* 46185c: call 0x46186f */
  esp -= 4; W32(esp, 0x461861u); SPILL(); f_46186f(); if (g_unwind) return; RELOAD();
/* 461861: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 461864: je 0x463720 */
  if (zf) goto L_463720;
L_46186a: /* 46186a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 46186b: xor edi, edi */
  edi = 0;
/* 46186d: jmp 0x46183a */
  goto L_46183a;
L_4621fe: /* 4621fe: cmp dword ptr [ebp - 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 462201: jne 0x46220c */
  if (!zf) goto L_46220c;
L_462203: /* 462203: cmp dword ptr [ebp - 0x18], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 462206: ja 0x46372b */
  if ((!cf && !zf)) goto L_46372b;
L_46220c: /* 46220c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46220e: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 462211: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 462213: mov dword ptr [eax + 0x14], edi */
  W32((uint32_t)(eax + 0x14u), edi);
L_462216: /* 462216: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 462218: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46221b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46221c: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 46221f: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 462221: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 462224: call 0x461453 */
  esp -= 4; W32(esp, 0x462229u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 462229: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46222d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 462230: call 0x462246 */
  esp -= 4; W32(esp, 0x462235u); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 462235: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 462238: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 462239: mov eax, esi */
  eax = esi;
/* 46223b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46223c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 462243: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 462244: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 462245: ret  */
  esp += 4; SPILL(); return;
L_4636da: /* 4636da: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4636dc: jbe 0x4617f6 */
  if ((cf | zf)) goto L_4617f6;
L_4636e2: /* 4636e2: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4636e4: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 4636e7: jmp 0x4617f9 */
  goto L_4617f9;
L_4636ec: /* 4636ec: mov dword ptr [ebp - 0x14], 4 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x4u);
/* 4636f3: jmp 0x462216 */
  goto L_462216;
L_4636f8: /* 4636f8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4636fa: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4636fd: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4636ff: mov cl, byte ptr [eax + 0x30] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x30u))) & 0xffu);
/* 463702: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 463705: mov byte ptr [ebp - 0x1c], cl */
  W8((uint32_t)(ebp + 0xffffffe4u), (ecx & 0xffu));
/* 463708: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 46370b: mov ecx, eax */
  ecx = eax;
/* 46370d: call 0x46186f */
  esp -= 4; W32(esp, 0x463712u); SPILL(); f_46186f(); if (g_unwind) return; RELOAD();
/* 463712: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 463715: jne 0x463753 */
  if (!zf) goto L_463753;
L_463717: /* 463717: or dword ptr [ebp - 0x14], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 46371b: jmp 0x46182f */
  goto L_46182f;
L_463720: /* 463720: or dword ptr [ebp - 0x14], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 463724: xor edi, edi */
  edi = 0;
/* 463726: jmp 0x4621fe */
  goto L_4621fe;
L_46372b: /* 46372b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46372d: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 463730: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 463732: mov cl, byte ptr [eax + 0x30] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x30u))) & 0xffu);
/* 463735: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 463738: mov byte ptr [ebp + 0xc], cl */
  W8((uint32_t)(ebp + 0xcu), (ecx & 0xffu));
/* 46373b: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46373e: mov ecx, eax */
  ecx = eax;
/* 463740: call 0x46186f */
  esp -= 4; W32(esp, 0x463745u); SPILL(); f_46186f(); if (g_unwind) return; RELOAD();
/* 463745: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 463748: jne 0x46375b */
  if (!zf) goto L_46375b;
L_46374a: /* 46374a: or dword ptr [ebp - 0x14], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 46374e: jmp 0x46220c */
  goto L_46220c;
L_463753: /* 463753: dec dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 463756: jmp 0x461826 */
  goto L_461826;
L_46375b: /* 46375b: dec dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 46375e: jmp 0x462203 */
  goto L_462203;
}

void f_46186f(void) {
  LOAD_REGS();
L_46186f: /* 46186f: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 461872: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 461873: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 461875: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 461877: jne 0x4633e4 */
  if (!zf) goto L_4633e4;
L_46187d: /* 46187d: movzx edx, byte ptr [esp + 8] */
  edx = (uint32_t)(R8((uint32_t)(esp + 0x8u)));
/* 461882: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 461884: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 461885: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x461888u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_461888: /* 461888: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 461889: ret 4 */
  esp += 8; SPILL(); return;
L_4633e4: /* 4633e4: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 4633e7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 4633e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4633ea: lea edi, [edx + esi] */
  edi = (uint32_t)(edx + esi);
/* 4633ed: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4633ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4633f0: jae 0x46187d */
  if (!cf) goto L_46187d;
L_4633f6: /* 4633f6: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 4633f7: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 4633f9: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 4633fc: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4633fe: lea edx, [ecx + 1] */
  edx = (uint32_t)(ecx + 0x1u);
/* 463401: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 463403: mov al, byte ptr [esp + 8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 463407: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 463409: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 46340c: jmp 0x461888 */
  goto L_461888;
}

void f_46188c(void) {
  LOAD_REGS();
  goto L_46188c;
L_4610c6: /* 4610c6: xor eax, eax */
  eax = 0;
/* 4610c8: jmp 0x4618f1 */
  goto L_4618f1;
L_4610cd: /* 4610cd: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4610d0: jmp 0x4618f0 */
  goto L_4618f0;
L_46188c: /* 46188c: mov eax, 0x48c09b */
  eax = 0x48c09bu;
/* 461891: call 0x4616c0 */
  esp -= 4; W32(esp, 0x461896u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 461896: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 461899: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 46189e: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4618a1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4618a2: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 4618a5: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4618a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4618a9: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 4618ac: mov esi, ecx */
  esi = ecx;
/* 4618ae: je 0x4610c6 */
  if (zf) goto L_4610c6;
L_4618b4: /* 4618b4: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 4618b7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 4618b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4618ba: xor edi, edi */
  edi = 0;
/* 4618bc: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4618be: jne 0x463555 */
  if (!zf) goto L_463555;
L_4618c4: /* 4618c4: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* 4618c7: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4618c9: je 0x4610cd */
  if (zf) goto L_4610cd;
L_4618cf: /* 4618cf: cmp dword ptr [esi + 0x3c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4618d2: jne 0x46357c */
  if (!zf) goto L_46357c;
L_4618d8: /* 4618d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4618d9: movsx eax, bl */
  eax = (uint32_t)(int32_t)(int8_t)((ebx & 0xffu));
/* 4618dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4618dd: call dword ptr [0x48e058] */
  esp -= 4; W32(esp, 0x4618e3u); SPILL(); f_42c814(); if (g_unwind) return; /* MSVCR70!fputc */ RELOAD();
/* 4618e3: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4618e6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4618e7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4618e8: je 0x4610cd */
  if (zf) goto L_4610cd;
L_4618ee: /* 4618ee: mov eax, ebx */
  eax = ebx;
L_4618f0: /* 4618f0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4618f1: /* 4618f1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4618f4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4618fb: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 4618fe: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 461901: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 461902: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 461903: call 0x46190c */
  esp -= 4; W32(esp, 0x461908u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 461908: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 461909: ret 4 */
  esp += 8; SPILL(); return;
L_463555: /* 463555: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 463558: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 46355a: lea edi, [ecx + edx] */
  edi = (uint32_t)(ecx + edx);
/* 46355d: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46355f: jae 0x463575 */
  if (!cf) goto L_463575;
L_463561: /* 463561: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 463562: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 463564: mov esi, dword ptr [esi + 0x24] */
  esi = R32((uint32_t)(esi + 0x24u));
/* 463567: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 463569: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 46356c: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 46356e: mov byte ptr [eax], bl */
  W8((uint32_t)(eax), (ebx & 0xffu));
/* 463570: jmp 0x4618ee */
  goto L_4618ee;
L_463575: /* 463575: xor edi, edi */
  edi = 0;
/* 463577: jmp 0x4618c4 */
  goto L_4618c4;
L_46357c: /* 46357c: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 46357f: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 463581: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 463582: mov byte ptr [ebp - 0x11], bl */
  W8((uint32_t)(ebp + 0xffffffefu), (ebx & 0xffu));
/* 463585: call 0x466522 */
  esp -= 4; W32(esp, 0x46358au); SPILL(); f_466522(); if (g_unwind) return; RELOAD();
/* 46358a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46358b: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 46358e: mov dword ptr [ebp - 0x24], 0xf */
  W32((uint32_t)(ebp + 0xffffffdcu), 0xfu);
/* 463595: call 0x461ed0 */
  esp -= 4; W32(esp, 0x46359au); SPILL(); f_461ed0(); if (g_unwind) return; RELOAD();
/* 46359a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46359b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 46359d: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 4635a0: call 0x4661b6 */
  esp -= 4; W32(esp, 0x4635a5u); SPILL(); f_4661b6(); if (g_unwind) return; RELOAD();
/* 4635a5: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
L_4635a8: /* 4635a8: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 4635ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4635ac: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 4635af: call 0x465162 */
  esp -= 4; W32(esp, 0x4635b4u); SPILL(); f_465162(); if (g_unwind) return; RELOAD();
/* 4635b4: cmp dword ptr [ebp - 0x24], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4635b8: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 4635ba: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 4635bd: jae 0x4635c2 */
  if (!cf) goto L_4635c2;
L_4635bf: /* 4635bf: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
L_4635c2: /* 4635c2: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 4635c5: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 4635c7: lea ebx, [ebp - 0x18] */
  ebx = (uint32_t)(ebp + 0xffffffe8u);
/* 4635ca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4635cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4635cc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4635cd: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 4635d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4635d1: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 4635d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4635d5: lea eax, [ebp - 0x11] */
  eax = (uint32_t)(ebp + 0xffffffefu);
/* 4635d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4635d9: lea eax, [esi + 0x50] */
  eax = (uint32_t)(esi + 0x50u);
/* 4635dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4635dd: call dword ptr [edi + 0x14] */
  { uint32_t t = R32((uint32_t)(edi + 0x14u)); esp -= 4; W32(esp, 0x4635e0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4635e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4635e2: jl 0x463679 */
  if ((sf != of)) goto L_463679;
L_4635e8: /* 4635e8: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4635eb: jg 0x463644 */
  if ((!zf && sf == of)) goto L_463644;
L_4635ed: /* 4635ed: cmp dword ptr [ebp - 0x24], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4635f1: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 4635f4: jae 0x4635f9 */
  if (!cf) goto L_4635f9;
L_4635f6: /* 4635f6: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
L_4635f9: /* 4635f9: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 4635fc: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  edi = r;
  }
/* 4635fe: je 0x463620 */
  if (zf) goto L_463620;
L_463600: /* 463600: cmp dword ptr [ebp - 0x24], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 463604: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 463607: jae 0x46360c */
  if (!cf) goto L_46360c;
L_463609: /* 463609: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
L_46360c: /* 46360c: push dword ptr [esi + 0x5c] */
  { uint32_t v = R32((uint32_t)(esi + 0x5cu)); esp -= 4; W32(esp, v); }
/* 46360f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 463610: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 463612: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 463613: call dword ptr [0x48e054] */
  esp -= 4; W32(esp, 0x463619u); SPILL(); f_42cf72(); if (g_unwind) return; /* MSVCR70!fwrite */ RELOAD();
/* 463619: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46361c: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46361e: jne 0x463665 */
  if (!zf) goto L_463665;
L_463620: /* 463620: lea eax, [ebp - 0x11] */
  eax = (uint32_t)(ebp + 0xffffffefu);
/* 463623: cmp dword ptr [ebp - 0x1c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 463626: mov byte ptr [esi + 0x4c], 1 */
  W8((uint32_t)(esi + 0x4cu), 0x1u);
/* 46362a: jne 0x463660 */
  if (!zf) goto L_463660;
L_46362c: /* 46362c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46362e: jne 0x4635a8 */
  if (!zf) goto L_4635a8;
L_463634: /* 463634: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 463635: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 463637: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 46363a: call 0x466156 */
  esp -= 4; W32(esp, 0x46363fu); SPILL(); f_466156(); if (g_unwind) return; RELOAD();
/* 46363f: jmp 0x4635a8 */
  goto L_4635a8;
L_463644: /* 463644: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 463647: jne 0x463679 */
  if (!zf) goto L_463679;
L_463649: /* 463649: movsx eax, byte ptr [ebp - 0x11] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebp + 0xffffffefu)));
/* 46364d: push dword ptr [esi + 0x5c] */
  { uint32_t v = R32((uint32_t)(esi + 0x5cu)); esp -= 4; W32(esp, v); }
/* 463650: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 463651: call dword ptr [0x48e058] */
  esp -= 4; W32(esp, 0x463657u); SPILL(); f_42c814(); if (g_unwind) return; /* MSVCR70!fputc */ RELOAD();
/* 463657: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 46365a: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46365c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46365d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46365e: je 0x463668 */
  if (zf) goto L_463668;
L_463660: /* 463660: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 463663: jmp 0x463668 */
  goto L_463668;
L_463665: /* 463665: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_463668: /* 463668: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 46366a: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 46366d: call 0x461ea8 */
  esp -= 4; W32(esp, 0x463672u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 463672: mov eax, esi */
  eax = esi;
/* 463674: jmp 0x4618f0 */
  goto L_4618f0;
L_463679: /* 463679: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 46367b: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 46367e: call 0x461ea8 */
  esp -= 4; W32(esp, 0x463683u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 463683: jmp 0x4610cd */
  goto L_4610cd;
}

void f_46190c(void) {
  LOAD_REGS();
L_46190c: /* 46190c: cmp ecx, dword ptr [0x4d05d0] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x4d05d0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 461912: jne 0x48be90 */
  if (!zf) goto L_48be90;
L_461918: /* 461918: ret  */
  esp += 4; SPILL(); return;
L_48be90: /* 48be90: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 48be92: push 0x4c92c0 */
  { uint32_t v = 0x4c92c0u; esp -= 4; W32(esp, v); }
/* 48be97: call 0x462f61 */
  esp -= 4; W32(esp, 0x48be9cu); SPILL(); f_462f61(); if (g_unwind) return; RELOAD();
/* 48be9c: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48bea0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 48bea2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 48bea4: call 0x48bf68 */
  esp -= 4; W32(esp, 0x48bea9u); SPILL(); f_48bf68(); if (g_unwind) return; RELOAD();
/* 48bea9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48beaa: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 48beab: jmp 0x48beb4 */
  goto L_48beb4;
L_48beb4: /* 48beb4: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 48beb8: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 48beba: call dword ptr [0x48e014] */
  esp -= 4; W32(esp, 0x48bec0u); SPILL(); call_ind(R32(0x48e014u)); if (g_unwind) return; /* KERNEL32!ExitProcess */ RELOAD();
/* 48bec0: jmp dword ptr [0x48e178] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
}

void f_461919(void) {
  LOAD_REGS();
L_461919: /* 461919: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46191a: mov esi, ecx */
  esi = ecx;
/* 46191c: cmp dword ptr [esi + 0x5c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x5cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 461920: je 0x461940 */
  if (zf) goto L_461940;
L_461922: /* 461922: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 461924: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 461926: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x461929u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 461929: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46192c: je 0x461940 */
  if (zf) goto L_461940;
L_46192e: /* 46192e: push dword ptr [esi + 0x5c] */
  { uint32_t v = R32((uint32_t)(esi + 0x5cu)); esp -= 4; W32(esp, v); }
/* 461931: call dword ptr [0x48e048] */
  esp -= 4; W32(esp, 0x461937u); SPILL(); f_413954(); if (g_unwind) return; /* MSVCR70!fflush */ RELOAD();
/* 461937: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 461939: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46193a: jl 0x4634d5 */
  if ((sf != of)) goto L_4634d5;
L_461940: /* 461940: xor eax, eax */
  eax = 0;
/* 461942: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 461943: ret  */
  esp += 4; SPILL(); return;
L_4634d5: /* 4634d5: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4634d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4634d9: ret  */
  esp += 4; SPILL(); return;
}

void f_461944(void) {
  LOAD_REGS();
  goto L_461944;
L_4610db: /* 4610db: cmp dword ptr [ebp - 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4610de: jne 0x4610e9 */
  if (!zf) goto L_4610e9;
L_4610e0: /* 4610e0: cmp dword ptr [ebp - 0x18], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4610e3: ja 0x4637db */
  if ((!cf && !zf)) goto L_4637db;
L_4610e9: /* 4610e9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4610eb: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4610ee: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4610f0: mov dword ptr [eax + 0x14], edi */
  W32((uint32_t)(eax + 0x14u), edi);
L_4610f3: /* 4610f3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4610f5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4610f8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4610f9: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 4610fc: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4610fe: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 461101: call 0x461453 */
  esp -= 4; W32(esp, 0x461106u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 461106: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46110a: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 46110d: call 0x462246 */
  esp -= 4; W32(esp, 0x461112u); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 461112: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 461115: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 461116: mov eax, esi */
  eax = esi;
/* 461118: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 461119: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 461120: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 461121: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 461122: ret  */
  esp += 4; SPILL(); return;
L_461944: /* 461944: mov eax, 0x48c313 */
  eax = 0x48c313u;
/* 461949: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46194eu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46194e: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 461951: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 461954: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 461957: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 461958: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 461959: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 46195c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46195e: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 461961: mov eax, dword ptr [eax + esi + 0x14] */
  eax = R32((uint32_t)(eax + esi + 0x14u));
/* 461965: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 461966: xor edi, edi */
  edi = 0;
/* 461968: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 46196a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 46196d: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 461970: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 461973: jg 0x46378b */
  if ((!zf && sf == of)) goto L_46378b;
L_461979: /* 461979: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
L_46197c: /* 46197c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46197d: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 461980: call 0x462178 */
  esp -= 4; W32(esp, 0x461985u); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 461985: cmp byte ptr [ebp - 0x20], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe0u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 461989: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 46198c: je 0x46379d */
  if (zf) goto L_46379d;
L_461992: /* 461992: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 461994: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 461997: mov eax, dword ptr [eax + esi + 0xc] */
  eax = R32((uint32_t)(eax + esi + 0xcu));
/* 46199b: and eax, 0x1c0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1c0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4619a0: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4619a3: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4619a7: je 0x4619bb */
  if (zf) goto L_4619bb;
L_4619a9: /* 4619a9: cmp dword ptr [ebp - 0x18], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4619ac: ja 0x4637a9 */
  if ((!cf && !zf)) goto L_4637a9;
L_4619b2: /* 4619b2: cmp dword ptr [ebp - 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4619b5: jne 0x4610e9 */
  if (!zf) goto L_4610e9;
L_4619bb: /* 4619bb: xor ebx, ebx */
  ebx = 0;
L_4619bd: /* 4619bd: cmp ebx, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4619c0: jae 0x4610db */
  if (!cf) goto L_4610db;
L_4619c6: /* 4619c6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4619c8: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4619cb: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 4619ce: mov edi, dword ptr [eax + esi + 0x28] */
  edi = R32((uint32_t)(eax + esi + 0x28u));
/* 4619d2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4619d3: call 0x461123 */
  esp -= 4; W32(esp, 0x4619d8u); SPILL(); f_461123(); if (g_unwind) return; RELOAD();
/* 4619d8: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 4619db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4619dc: mov ecx, edi */
  ecx = edi;
/* 4619de: call 0x4619f2 */
  esp -= 4; W32(esp, 0x4619e3u); SPILL(); f_4619f2(); if (g_unwind) return; RELOAD();
/* 4619e3: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4619e7: je 0x4637d0 */
  if (zf) goto L_4637d0;
L_4619ed: /* 4619ed: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4619ee: xor edi, edi */
  edi = 0;
/* 4619f0: jmp 0x4619bd */
  goto L_4619bd;
L_46378b: /* 46378b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 46378d: jbe 0x461979 */
  if ((cf | zf)) goto L_461979;
L_463793: /* 463793: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 463795: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 463798: jmp 0x46197c */
  goto L_46197c;
L_46379d: /* 46379d: mov dword ptr [ebp - 0x14], 4 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x4u);
/* 4637a4: jmp 0x4610f3 */
  goto L_4610f3;
L_4637a9: /* 4637a9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4637ab: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4637ae: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4637b0: xor edx, edx */
  edx = 0;
/* 4637b2: mov dx, word ptr [eax + 0x30] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x30u))) & 0xffffu);
/* 4637b6: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 4637b9: mov ecx, eax */
  ecx = eax;
/* 4637bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4637bc: call 0x4619f2 */
  esp -= 4; W32(esp, 0x4637c1u); SPILL(); f_4619f2(); if (g_unwind) return; RELOAD();
/* 4637c1: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4637c5: jne 0x463802 */
  if (!zf) goto L_463802;
L_4637c7: /* 4637c7: or dword ptr [ebp - 0x14], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 4637cb: jmp 0x4619b2 */
  goto L_4619b2;
L_4637d0: /* 4637d0: or dword ptr [ebp - 0x14], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 4637d4: xor edi, edi */
  edi = 0;
/* 4637d6: jmp 0x4610db */
  goto L_4610db;
L_4637db: /* 4637db: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4637dd: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4637e0: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4637e2: xor edx, edx */
  edx = 0;
/* 4637e4: mov dx, word ptr [eax + 0x30] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x30u))) & 0xffffu);
/* 4637e8: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 4637eb: mov ecx, eax */
  ecx = eax;
/* 4637ed: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4637ee: call 0x4619f2 */
  esp -= 4; W32(esp, 0x4637f3u); SPILL(); f_4619f2(); if (g_unwind) return; RELOAD();
/* 4637f3: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4637f7: jne 0x46380a */
  if (!zf) goto L_46380a;
L_4637f9: /* 4637f9: or dword ptr [ebp - 0x14], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 4637fd: jmp 0x4610e9 */
  goto L_4610e9;
L_463802: /* 463802: dec dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 463805: jmp 0x4619a9 */
  goto L_4619a9;
L_46380a: /* 46380a: dec dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 46380d: jmp 0x4610e0 */
  goto L_4610e0;
}

void f_4619f2(void) {
  LOAD_REGS();
L_4619f2: /* 4619f2: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 4619f5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4619f6: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 4619f8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4619fa: jne 0x463411 */
  if (!zf) goto L_463411;
L_461a00: /* 461a00: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 461a02: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 461a03: jmp dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); SPILL(); call_ind(t); return; }
L_463411: /* 463411: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 463414: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 463416: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 463417: lea edi, [esi + edx*2] */
  edi = (uint32_t)(esi + edx*2);
/* 46341a: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46341c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46341d: jae 0x461a00 */
  if (!cf) goto L_461a00;
L_463423: /* 463423: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 463424: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 463426: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 463429: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 46342b: lea edx, [ecx + 2] */
  edx = (uint32_t)(ecx + 0x2u);
/* 46342e: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 463430: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 463434: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
/* 463437: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 463438: ret 4 */
  esp += 8; SPILL(); return;
}

void f_461a06(void) {
  LOAD_REGS();
  goto L_461a06;
L_46113b: /* 46113b: xor ax, ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0) & 0xffffu);
/* 46113e: jmp 0x461a67 */
  goto L_461a67;
L_461143: /* 461143: or ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a | b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 461147: jmp 0x461a66 */
  goto L_461a66;
L_461a06: /* 461a06: mov eax, 0x48d0bf */
  eax = 0x48d0bfu;
/* 461a0b: call 0x4616c0 */
  esp -= 4; W32(esp, 0x461a10u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 461a10: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 461a13: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 461a18: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 461a1b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 461a1c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 461a1d: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 461a20: cmp di, -1 */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 461a24: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 461a27: mov esi, ecx */
  esi = ecx;
/* 461a29: je 0x46113b */
  if (zf) goto L_46113b;
L_461a2f: /* 461a2f: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 461a32: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 461a34: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 461a35: xor ebx, ebx */
  ebx = 0;
/* 461a37: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 461a39: jne 0x463907 */
  if (!zf) goto L_463907;
L_461a3f: /* 461a3f: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* 461a42: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 461a44: je 0x461143 */
  if (zf) goto L_461143;
L_461a4a: /* 461a4a: cmp dword ptr [esi + 0x3c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 461a4d: jne 0x46393c */
  if (!zf) goto L_46393c;
L_461a53: /* 461a53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 461a54: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 461a55: call 0x461a82 */
  esp -= 4; W32(esp, 0x461a5au); SPILL(); f_461a82(); if (g_unwind) return; RELOAD();
/* 461a5a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 461a5b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 461a5d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 461a5e: mov eax, edi */
  eax = edi;
/* 461a60: je 0x463932 */
  if (zf) goto L_463932;
L_461a66: /* 461a66: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_461a67: /* 461a67: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 461a6a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 461a71: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 461a74: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 461a77: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 461a78: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 461a79: call 0x46190c */
  esp -= 4; W32(esp, 0x461a7eu); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 461a7e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 461a7f: ret 4 */
  esp += 8; SPILL(); return;
L_463907: /* 463907: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 46390a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 46390c: lea ebx, [edx + ecx*2] */
  ebx = (uint32_t)(edx + ecx*2);
/* 46390f: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 463911: jae 0x46392b */
  if (!cf) goto L_46392b;
L_463913: /* 463913: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 463914: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 463916: mov esi, dword ptr [esi + 0x24] */
  esi = R32((uint32_t)(esi + 0x24u));
/* 463919: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46391b: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 46391e: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 463920: mov word ptr [eax], di */
  W16((uint32_t)(eax), (edi & 0xffffu));
/* 463923: mov ax, di */
  eax = (eax & 0xffff0000u) | ((uint32_t)((edi & 0xffffu)) & 0xffffu);
/* 463926: jmp 0x461a66 */
  goto L_461a66;
L_46392b: /* 46392b: xor ebx, ebx */
  ebx = 0;
/* 46392d: jmp 0x461a3f */
  goto L_461a3f;
L_463932: /* 463932: mov eax, 0xffff */
  eax = 0xffffu;
/* 463937: jmp 0x461a66 */
  goto L_461a66;
L_46393c: /* 46393c: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 46393f: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 463941: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 463942: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 463945: call 0x466522 */
  esp -= 4; W32(esp, 0x46394au); SPILL(); f_466522(); if (g_unwind) return; RELOAD();
/* 46394a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46394b: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 46394e: mov dword ptr [ebp - 0x24], 0xf */
  W32((uint32_t)(ebp + 0xffffffdcu), 0xfu);
/* 463955: call 0x461ed0 */
  esp -= 4; W32(esp, 0x46395au); SPILL(); f_461ed0(); if (g_unwind) return; RELOAD();
/* 46395a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46395b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 46395d: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 463960: call 0x4661b6 */
  esp -= 4; W32(esp, 0x463965u); SPILL(); f_4661b6(); if (g_unwind) return; RELOAD();
/* 463965: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
L_463968: /* 463968: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 46396b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46396c: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 46396f: call 0x465162 */
  esp -= 4; W32(esp, 0x463974u); SPILL(); f_465162(); if (g_unwind) return; RELOAD();
/* 463974: cmp dword ptr [ebp - 0x24], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 463978: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 46397a: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 46397d: jae 0x463982 */
  if (!cf) goto L_463982;
L_46397f: /* 46397f: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
L_463982: /* 463982: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 463985: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 463987: lea ebx, [ebp - 0x18] */
  ebx = (uint32_t)(ebp + 0xffffffe8u);
/* 46398a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46398b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46398c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 46398d: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 463990: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 463991: lea eax, [ebp - 0x12] */
  eax = (uint32_t)(ebp + 0xffffffeeu);
/* 463994: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 463995: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 463998: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 463999: lea eax, [esi + 0x50] */
  eax = (uint32_t)(esi + 0x50u);
/* 46399c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46399d: call dword ptr [edi + 0x14] */
  { uint32_t t = R32((uint32_t)(edi + 0x14u)); esp -= 4; W32(esp, 0x4639a0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4639a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4639a2: jl 0x463a40 */
  if ((sf != of)) goto L_463a40;
L_4639a8: /* 4639a8: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4639ab: jg 0x463a04 */
  if ((!zf && sf == of)) goto L_463a04;
L_4639ad: /* 4639ad: cmp dword ptr [ebp - 0x24], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4639b1: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 4639b4: jae 0x4639b9 */
  if (!cf) goto L_4639b9;
L_4639b6: /* 4639b6: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
L_4639b9: /* 4639b9: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 4639bc: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  edi = r;
  }
/* 4639be: je 0x4639e0 */
  if (zf) goto L_4639e0;
L_4639c0: /* 4639c0: cmp dword ptr [ebp - 0x24], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4639c4: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 4639c7: jae 0x4639cc */
  if (!cf) goto L_4639cc;
L_4639c9: /* 4639c9: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
L_4639cc: /* 4639cc: push dword ptr [esi + 0x5c] */
  { uint32_t v = R32((uint32_t)(esi + 0x5cu)); esp -= 4; W32(esp, v); }
/* 4639cf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4639d0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4639d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4639d3: call dword ptr [0x48e054] */
  esp -= 4; W32(esp, 0x4639d9u); SPILL(); f_42cf72(); if (g_unwind) return; /* MSVCR70!fwrite */ RELOAD();
/* 4639d9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4639dc: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4639de: jne 0x463a24 */
  if (!zf) goto L_463a24;
L_4639e0: /* 4639e0: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 4639e3: cmp dword ptr [ebp - 0x1c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4639e6: mov byte ptr [esi + 0x4c], 1 */
  W8((uint32_t)(esi + 0x4cu), 0x1u);
/* 4639ea: jne 0x463a3a */
  if (!zf) goto L_463a3a;
L_4639ec: /* 4639ec: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4639ee: jne 0x463968 */
  if (!zf) goto L_463968;
L_4639f4: /* 4639f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4639f5: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 4639f7: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 4639fa: call 0x466156 */
  esp -= 4; W32(esp, 0x4639ffu); SPILL(); f_466156(); if (g_unwind) return; RELOAD();
/* 4639ff: jmp 0x463968 */
  goto L_463968;
L_463a04: /* 463a04: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 463a07: jne 0x463a40 */
  if (!zf) goto L_463a40;
L_463a09: /* 463a09: push dword ptr [esi + 0x5c] */
  { uint32_t v = R32((uint32_t)(esi + 0x5cu)); esp -= 4; W32(esp, v); }
/* 463a0c: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 463a0f: call 0x461a82 */
  esp -= 4; W32(esp, 0x463a14u); SPILL(); f_461a82(); if (g_unwind) return; RELOAD();
/* 463a14: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 463a16: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 463a19: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 463a1a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 463a1b: jne 0x463a28 */
  if (!zf) goto L_463a28;
L_463a1d: /* 463a1d: mov esi, 0xffff */
  esi = 0xffffu;
/* 463a22: jmp 0x463a28 */
  goto L_463a28;
L_463a24: /* 463a24: or si, 0xffff */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a | b);
  esi = (esi & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
L_463a28: /* 463a28: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 463a2a: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 463a2d: call 0x461ea8 */
  esp -= 4; W32(esp, 0x463a32u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 463a32: mov ax, si */
  eax = (eax & 0xffff0000u) | ((uint32_t)((esi & 0xffffu)) & 0xffffu);
/* 463a35: jmp 0x461a66 */
  goto L_461a66;
L_463a3a: /* 463a3a: mov si, word ptr [ebp + 8] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0x8u))) & 0xffffu);
/* 463a3e: jmp 0x463a28 */
  goto L_463a28;
L_463a40: /* 463a40: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 463a42: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 463a45: call 0x461ea8 */
  esp -= 4; W32(esp, 0x463a4au); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 463a4a: jmp 0x461143 */
  goto L_461143;
}

void f_461a82(void) {
  LOAD_REGS();
L_461a82: /* 461a82: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 461a86: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 461a8a: call dword ptr [0x48e0a4] */
  esp -= 4; W32(esp, 0x461a90u); SPILL(); f_42c8dd(); if (g_unwind) return; /* MSVCR70!fputwc */ RELOAD();
/* 461a90: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 461a91: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 461a92: xor ecx, ecx */
  ecx = 0;
/* 461a94: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 461a98: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 461a9b: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 461a9d: ret  */
  esp += 4; SPILL(); return;
}

void f_461a9e(void) {
  LOAD_REGS();
L_461a9e: /* 461a9e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 461a9f: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 461aa1: mov esi, ecx */
  esi = ecx;
/* 461aa3: call 0x4620da */
  esp -= 4; W32(esp, 0x461aa8u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 461aa8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 461aa9: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 461aab: call 0x461ab6 */
  esp -= 4; W32(esp, 0x461ab0u); SPILL(); f_461ab6(); if (g_unwind) return; RELOAD();
/* 461ab0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 461ab1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 461ab2: mov eax, esi */
  eax = esi;
/* 461ab4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 461ab5: ret  */
  esp += 4; SPILL(); return;
}

void f_461ab6(void) {
  LOAD_REGS();
L_461ab6: /* 461ab6: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 461aba: call dword ptr [0x48e024] */
  esp -= 4; W32(esp, 0x461ac0u); SPILL(); call_ind(R32(0x48e024u)); if (g_unwind) return; /* KERNEL32!InitializeCriticalSection */ RELOAD();
/* 461ac0: ret  */
  esp += 4; SPILL(); return;
}

void f_461ac1(void) {
  LOAD_REGS();
L_461ac1: /* 461ac1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 461ac3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 461ac5: push 0x4d0928 */
  { uint32_t v = 0x4d0928u; esp -= 4; W32(esp, v); }
/* 461aca: mov ecx, 0x4d098c */
  ecx = 0x4d098cu;
/* 461acf: call 0x461ae0 */
  esp -= 4; W32(esp, 0x461ad4u); SPILL(); f_461ae0(); if (g_unwind) return; RELOAD();
/* 461ad4: push 0x4611aa */
  { uint32_t v = 0x4611aau; esp -= 4; W32(esp, v); }
/* 461ad9: call 0x461586 */
  esp -= 4; W32(esp, 0x461adeu); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 461ade: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 461adf: ret  */
  esp += 4; SPILL(); return;
}

void f_461ae0(void) {
  LOAD_REGS();
L_461ae0: /* 461ae0: mov eax, 0x48c182 */
  eax = 0x48c182u;
/* 461ae5: call 0x4616c0 */
  esp -= 4; W32(esp, 0x461aeau); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 461aea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 461aeb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 461aec: xor eax, eax */
  eax = 0;
/* 461aee: cmp dword ptr [ebp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 461af1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 461af2: mov esi, ecx */
  esi = ecx;
/* 461af4: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 461af7: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 461afa: je 0x461b16 */
  if (zf) goto L_461b16;
L_461afc: /* 461afc: mov dword ptr [esi], 0x48e22c */
  W32((uint32_t)(esi), 0x48e22cu);
/* 461b02: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 461b05: mov dword ptr [esi + 4], 0x4c762c */
  W32((uint32_t)(esi + 0x4u), 0x4c762cu);
/* 461b0c: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 461b0f: mov dword ptr [ebp - 0x10], 1 */
  W32((uint32_t)(ebp + 0xfffffff0u), 0x1u);
L_461b16: /* 461b16: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 461b18: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 461b1b: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 461b1e: mov dword ptr [esi + eax], 0x4c76d8 */
  W32((uint32_t)(esi + eax), 0x4c76d8u);
/* 461b25: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 461b27: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 461b2a: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 461b2d: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 461b2f: call 0x461b45 */
  esp -= 4; W32(esp, 0x461b34u); SPILL(); f_461b45(); if (g_unwind) return; RELOAD();
/* 461b34: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 461b37: mov eax, esi */
  eax = esi;
/* 461b39: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 461b3a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 461b41: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 461b42: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_461b45(void) {
  LOAD_REGS();
L_461b45: /* 461b45: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 461b49: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 461b4a: mov esi, ecx */
  esi = ecx;
/* 461b4c: and dword ptr [esi + 0x2c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x2cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x2cu), r);
  }
/* 461b50: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 461b52: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 461b55: call 0x461d6f */
  esp -= 4; W32(esp, 0x461b5au); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 461b5a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 461b5b: mov ecx, esi */
  ecx = esi;
/* 461b5d: mov word ptr [esi + 0x30], ax */
  W16((uint32_t)(esi + 0x30u), (eax & 0xffffu));
/* 461b61: call 0x461b7f */
  esp -= 4; W32(esp, 0x461b66u); SPILL(); f_461b7f(); if (g_unwind) return; RELOAD();
/* 461b66: cmp dword ptr [esi + 0x28], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x28u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 461b6a: je 0x46369e */
  if (zf) goto L_46369e;
L_461b70: /* 461b70: cmp byte ptr [esp + 0xc], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0xcu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 461b75: jne 0x4636b3 */
  if (!zf) goto L_4636b3;
L_461b7b: /* 461b7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 461b7c: ret 8 */
  esp += 12; SPILL(); return;
L_46369e: /* 46369e: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4636a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4636a3: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4636a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4636a7: mov ecx, esi */
  ecx = esi;
/* 4636a9: call 0x464bb2 */
  esp -= 4; W32(esp, 0x4636aeu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 4636ae: jmp 0x461b70 */
  goto L_461b70;
L_4636b3: /* 4636b3: mov ecx, esi */
  ecx = esi;
/* 4636b5: call 0x489208 */
  esp -= 4; W32(esp, 0x4636bau); SPILL(); f_489208(); if (g_unwind) return; RELOAD();
/* 4636ba: jmp 0x461b7b */
  goto L_461b7b;
}

void f_461b7f(void) {
  LOAD_REGS();
L_461b7f: /* 461b7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 461b80: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 461b81: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 461b83: mov esi, ecx */
  esi = ecx;
/* 461b85: call 0x4620da */
  esp -= 4; W32(esp, 0x461b8au); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 461b8a: xor edi, edi */
  edi = 0;
/* 461b8c: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 461b8e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 461b8f: je 0x461bc1 */
  if (zf) goto L_461bc1;
L_461b91: /* 461b91: mov ecx, eax */
  ecx = eax;
/* 461b93: call 0x461279 */
  esp -= 4; W32(esp, 0x461b98u); SPILL(); f_461279(); if (g_unwind) return; RELOAD();
L_461b98: /* 461b98: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 461b99: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 461b9a: mov ecx, esi */
  ecx = esi;
/* 461b9c: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 461b9f: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 461ba2: mov dword ptr [esi + 0xc], 0x201 */
  W32((uint32_t)(esi + 0xcu), 0x201u);
/* 461ba9: mov dword ptr [esi + 0x10], 6 */
  W32((uint32_t)(esi + 0x10u), 0x6u);
/* 461bb0: mov dword ptr [esi + 0x14], edi */
  W32((uint32_t)(esi + 0x14u), edi);
/* 461bb3: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* 461bb6: mov dword ptr [esi + 0x1c], edi */
  W32((uint32_t)(esi + 0x1cu), edi);
/* 461bb9: call 0x461bc5 */
  esp -= 4; W32(esp, 0x461bbeu); SPILL(); f_461bc5(); if (g_unwind) return; RELOAD();
/* 461bbe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 461bbf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 461bc0: ret  */
  esp += 4; SPILL(); return;
L_461bc1: /* 461bc1: xor eax, eax */
  eax = 0;
/* 461bc3: jmp 0x461b98 */
  goto L_461b98;
}

void f_461bc5(void) {
  LOAD_REGS();
L_461bc5: /* 461bc5: mov eax, 0x48ddb4 */
  eax = 0x48ddb4u;
/* 461bca: call 0x4616c0 */
  esp -= 4; W32(esp, 0x461bcfu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 461bcf: sub esp, 0x88 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x88u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 461bd5: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 461bd8: and eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 461bdb: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 461bde: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 461be1: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* 461be3: jne 0x463c4f */
  if (!zf) goto L_463c4f;
L_461be9: /* 461be9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 461bec: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 461bf3: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 461bf4: ret 8 */
  esp += 12; SPILL(); return;
L_4620e6: /* 4620e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4620e7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x4620e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4620e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4620eb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4620ec: je 0x463ce3 */
  if (zf) goto L_463ce3;
L_4620f2: /* 4620f2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4620f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4620f4: ret  */
  esp += 4; SPILL(); return;
L_463c4f: /* 463c4f: xor ebx, ebx */
  ebx = 0;
/* 463c51: cmp byte ptr [ebp + 0xc], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xcu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 463c54: je 0x463c5d */
  if (zf) goto L_463c5d;
L_463c56: /* 463c56: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 463c57: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 463c58: jmp 0x463cde */
  goto L_463cde;
L_463c5d: /* 463c5d: test cl, 4 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 463c60: je 0x463c8f */
  if (zf) goto L_463c8f;
L_463c62: /* 463c62: push 0x4c9110 */
  { uint32_t v = 0x4c9110u; esp -= 4; W32(esp, v); }
/* 463c67: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 463c6a: call 0x46172f */
  esp -= 4; W32(esp, 0x463c6fu); SPILL(); f_46172f(); if (g_unwind) return; RELOAD();
/* 463c6f: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
L_463c72: /* 463c72: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 463c75: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 463c76: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 463c79: call 0x486cac */
  esp -= 4; W32(esp, 0x463c7eu); SPILL(); f_486cac(); if (g_unwind) return; RELOAD();
/* 463c7e: mov dword ptr [ebp - 0x34], 0x4c90d4 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x4c90d4u);
/* 463c85: push 0x4ce4c0 */
  { uint32_t v = 0x4ce4c0u; esp -= 4; W32(esp, v); }
/* 463c8a: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 463c8d: jmp 0x463cdd */
  goto L_463cdd;
L_463c8f: /* 463c8f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 463c91: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 463c92: test bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 463c94: je 0x463cac */
  if (zf) goto L_463cac;
L_463c96: /* 463c96: push 0x4c90f8 */
  { uint32_t v = 0x4c90f8u; esp -= 4; W32(esp, v); }
/* 463c9b: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 463c9e: call 0x46172f */
  esp -= 4; W32(esp, 0x463ca3u); SPILL(); f_46172f(); if (g_unwind) return; RELOAD();
/* 463ca3: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 463caa: jmp 0x463c72 */
  goto L_463c72;
L_463cac: /* 463cac: push 0x4c90e0 */
  { uint32_t v = 0x4c90e0u; esp -= 4; W32(esp, v); }
/* 463cb1: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 463cb7: call 0x46172f */
  esp -= 4; W32(esp, 0x463cbcu); SPILL(); f_46172f(); if (g_unwind) return; RELOAD();
/* 463cbc: lea eax, [ebp - 0x94] */
  eax = (uint32_t)(ebp + 0xffffff6cu);
/* 463cc2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 463cc3: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 463cc6: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 463cc9: call 0x486cac */
  esp -= 4; W32(esp, 0x463cceu); SPILL(); f_486cac(); if (g_unwind) return; RELOAD();
/* 463cce: mov dword ptr [ebp - 0x78], 0x4c90d4 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x4c90d4u);
/* 463cd5: push 0x4ce4c0 */
  { uint32_t v = 0x4ce4c0u; esp -= 4; W32(esp, v); }
/* 463cda: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
L_463cdd: /* 463cdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_463cde: /* 463cde: call 0x48bed8 */
  esp -= 4; W32(esp, 0x463ce3u); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
L_463ce3: /* 463ce3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 463ce4: call 0x48bf4a */
  esp -= 4; W32(esp, 0x463ce9u); SPILL(); f_48bf4a(); if (g_unwind) return; RELOAD();
/* 463ce9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 463ceb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 463cec: jne 0x4620e6 */
  if (!zf) goto L_4620e6;
L_463cf2: /* 463cf2: call 0x4875f2 */
  esp -= 4; W32(esp, 0x463cf7u); SPILL(); f_4875f2(); if (g_unwind) return; RELOAD();
/* 463cf7: jmp 0x4620e6 */
  goto L_4620e6;
}

void f_461bf7(void) {
  LOAD_REGS();
L_461bf7: /* 461bf7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 461bf9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 461bfb: push 0x4d0d98 */
  { uint32_t v = 0x4d0d98u; esp -= 4; W32(esp, v); }
/* 461c00: mov ecx, 0x4d0dfc */
  ecx = 0x4d0dfcu;
/* 461c05: call 0x462a4e */
  esp -= 4; W32(esp, 0x461c0au); SPILL(); f_462a4e(); if (g_unwind) return; RELOAD();
/* 461c0a: push 0x461c16 */
  { uint32_t v = 0x461c16u; esp -= 4; W32(esp, v); }
/* 461c0f: call 0x461586 */
  esp -= 4; W32(esp, 0x461c14u); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 461c14: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 461c15: ret  */
  esp += 4; SPILL(); return;
}

void f_461c16(void) {
  LOAD_REGS();
L_461c16: /* 461c16: mov eax, dword ptr [0x4d0dfc] */
  eax = R32((uint32_t)(0x4d0dfcu));
/* 461c1b: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 461c1e: mov dword ptr [eax + 0x4d0dfc], 0x4c7680 */
  W32((uint32_t)(eax + 0x4d0dfcu), 0x4c7680u);
/* 461c28: mov ecx, 0x4d0e00 */
  ecx = 0x4d0e00u;
  SPILL(); f_461c2d(); return;
}

void f_461c2d(void) {
  LOAD_REGS();
L_461c2d: /* 461c2d: mov dword ptr [ecx], 0x4c75d8 */
  W32((uint32_t)(ecx), 0x4c75d8u);
  SPILL(); f_461c33(); return;
}

void f_461c33(void) {
  LOAD_REGS();
L_461c33: /* 461c33: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 461c34: mov esi, ecx */
  esi = ecx;
/* 461c36: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 461c39: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 461c3b: mov dword ptr [esi], 0x4c6c70 */
  W32((uint32_t)(esi), 0x4c6c70u);
/* 461c41: ja 0x463c34 */
  if ((!cf && !zf)) goto L_463c34;
L_461c47: /* 461c47: mov ecx, esi */
  ecx = esi;
/* 461c49: call 0x461c73 */
  esp -= 4; W32(esp, 0x461c4eu); SPILL(); f_461c73(); if (g_unwind) return; RELOAD();
/* 461c4e: mov esi, dword ptr [esi + 0x20] */
  esi = R32((uint32_t)(esi + 0x20u));
/* 461c51: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 461c53: je 0x461c63 */
  if (zf) goto L_461c63;
L_461c55: /* 461c55: mov ecx, esi */
  ecx = esi;
/* 461c57: call 0x461389 */
  esp -= 4; W32(esp, 0x461c5cu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 461c5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 461c5d: call 0x461c65 */
  esp -= 4; W32(esp, 0x461c62u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 461c62: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_461c63: /* 461c63: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 461c64: ret  */
  esp += 4; SPILL(); return;
L_463c34: /* 463c34: dec byte ptr [eax + 0x4d1138] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4d1138u)));
  uint8_t r = (uint8_t)(a - 1);
  W8((uint32_t)(eax + 0x4d1138u), r);
  }
/* 463c3a: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 463c3d: cmp byte ptr [eax + 0x4d1138], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4d1138u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 463c44: jg 0x461c63 */
  if ((!zf && sf == of)) goto L_461c63;
L_463c4a: /* 463c4a: jmp 0x461c47 */
  goto L_461c47;
}

void f_461c65(void) {
  LOAD_REGS();
L_461c65: /* 461c65: jmp dword ptr [0x48e184] */
  SPILL(); f_401216(); return; /* MSVCR70!??3@YAXPAX@Z */
}

void f_461c6b(void) {
  LOAD_REGS();
L_461c6b: /* 461c6b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 461c6d: call 0x461ea8 */
  esp -= 4; W32(esp, 0x461c72u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 461c72: ret  */
  esp += 4; SPILL(); return;
}

void f_461c73(void) {
  LOAD_REGS();
L_461c73: /* 461c73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 461c74: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 461c75: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 461c77: mov esi, ecx */
  esi = ecx;
/* 461c79: call 0x461c9f */
  esp -= 4; W32(esp, 0x461c7eu); SPILL(); f_461c9f(); if (g_unwind) return; RELOAD();
/* 461c7e: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 461c81: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 461c83: jne 0x463c0c */
  if (!zf) goto L_463c0c;
L_461c89: /* 461c89: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 461c8c: and dword ptr [esi + 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x18u), r);
  }
/* 461c90: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 461c92: jne 0x463c20 */
  if (!zf) goto L_463c20;
L_461c98: /* 461c98: and dword ptr [esi + 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x1cu), r);
  }
/* 461c9c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 461c9d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 461c9e: ret  */
  esp += 4; SPILL(); return;
L_463c0c: /* 463c0c: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 463c0e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 463c0f: call 0x461c65 */
  esp -= 4; W32(esp, 0x463c14u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 463c14: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 463c16: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 463c17: mov eax, edi */
  eax = edi;
/* 463c19: jne 0x463c0c */
  if (!zf) goto L_463c0c;
L_463c1b: /* 463c1b: jmp 0x461c89 */
  goto L_461c89;
L_463c20: /* 463c20: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 463c22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 463c23: call 0x461c65 */
  esp -= 4; W32(esp, 0x463c28u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 463c28: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 463c2a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 463c2b: mov eax, edi */
  eax = edi;
/* 463c2d: jne 0x463c20 */
  if (!zf) goto L_463c20;
L_463c2f: /* 463c2f: jmp 0x461c98 */
  goto L_461c98;
}

void f_461c9f(void) {
  LOAD_REGS();
L_461c9f: /* 461c9f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 461ca0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 461ca1: mov edi, ecx */
  edi = ecx;
/* 461ca3: mov esi, dword ptr [edi + 0x1c] */
  esi = R32((uint32_t)(edi + 0x1cu));
L_461ca6: /* 461ca6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 461ca8: jne 0x463bf7 */
  if (!zf) goto L_463bf7;
L_461cae: /* 461cae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 461caf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 461cb0: ret 4 */
  esp += 8; SPILL(); return;
L_463bf7: /* 463bf7: push dword ptr [esi + 4] */
  { uint32_t v = R32((uint32_t)(esi + 0x4u)); esp -= 4; W32(esp, v); }
/* 463bfa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 463bfb: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 463bff: call dword ptr [esi + 8] */
  { uint32_t t = R32((uint32_t)(esi + 0x8u)); esp -= 4; W32(esp, 0x463c02u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 463c02: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 463c04: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 463c07: jmp 0x461ca6 */
  goto L_461ca6;
}

void f_461cb3(void) {
  LOAD_REGS();
L_461cb3: /* 461cb3: call dword ptr [0x48e074] */
  esp -= 4; W32(esp, 0x461cb9u); SPILL(); f_40f9d9(); if (g_unwind) return; /* MSVCR70!__iob_func */ RELOAD();
/* 461cb9: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 461cbc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 461cbd: mov ecx, 0x4d0d98 */
  ecx = 0x4d0d98u;
/* 461cc2: call 0x462024 */
  esp -= 4; W32(esp, 0x461cc7u); SPILL(); f_462024(); if (g_unwind) return; RELOAD();
/* 461cc7: push 0x461cd3 */
  { uint32_t v = 0x461cd3u; esp -= 4; W32(esp, v); }
/* 461ccc: call 0x461586 */
  esp -= 4; W32(esp, 0x461cd1u); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 461cd1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 461cd2: ret  */
  esp += 4; SPILL(); return;
}

void f_461cd3(void) {
  LOAD_REGS();
L_461cd3: /* 461cd3: mov ecx, 0x4d0d98 */
  ecx = 0x4d0d98u;
  SPILL(); f_461cd8(); return;
}

void f_461cd8(void) {
  LOAD_REGS();
L_461cd8: /* 461cd8: mov eax, 0x48d34b */
  eax = 0x48d34bu;
/* 461cdd: call 0x4616c0 */
  esp -= 4; W32(esp, 0x461ce2u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 461ce2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 461ce3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 461ce4: mov esi, ecx */
  esi = ecx;
/* 461ce6: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 461ce9: mov dword ptr [esi], 0x4c7960 */
  W32((uint32_t)(esi), 0x4c7960u);
/* 461cef: cmp byte ptr [esi + 0x54], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x54u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 461cf3: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 461cfa: jne 0x463a4f */
  if (!zf) goto L_463a4f;
L_461d00: /* 461d00: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 461d03: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 461d05: jne 0x463a59 */
  if (!zf) goto L_463a59;
L_461d0b: /* 461d0b: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 461d0e: call 0x461389 */
  esp -= 4; W32(esp, 0x461d13u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 461d13: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 461d17: mov ecx, esi */
  ecx = esi;
/* 461d19: call 0x461d2b */
  esp -= 4; W32(esp, 0x461d1eu); SPILL(); f_461d2b(); if (g_unwind) return; RELOAD();
/* 461d1e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 461d21: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 461d22: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 461d29: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 461d2a: ret  */
  esp += 4; SPILL(); return;
L_463a4f: /* 463a4f: call 0x480a22 */
  esp -= 4; W32(esp, 0x463a54u); SPILL(); f_480a22(); if (g_unwind) return; RELOAD();
/* 463a54: jmp 0x461d00 */
  goto L_461d00;
L_463a59: /* 463a59: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 463a5b: call 0x465c86 */
  esp -= 4; W32(esp, 0x463a60u); SPILL(); f_465c86(); if (g_unwind) return; RELOAD();
/* 463a60: jmp 0x461d0b */
  goto L_461d0b;
}

void f_461d2b(void) {
  LOAD_REGS();
L_461d2b: /* 461d2b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 461d2c: mov esi, ecx */
  esi = ecx;
/* 461d2e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 461d2f: mov edi, dword ptr [esi + 0x38] */
  edi = R32((uint32_t)(esi + 0x38u));
/* 461d32: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 461d34: mov dword ptr [esi], 0x4c721c */
  W32((uint32_t)(esi), 0x4c721cu);
/* 461d3a: je 0x461d4a */
  if (zf) goto L_461d4a;
L_461d3c: /* 461d3c: mov ecx, edi */
  ecx = edi;
/* 461d3e: call 0x461389 */
  esp -= 4; W32(esp, 0x461d43u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 461d43: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 461d44: call 0x461c65 */
  esp -= 4; W32(esp, 0x461d49u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 461d49: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_461d4a: /* 461d4a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 461d4b: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 461d4e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
  SPILL(); f_461d4f(); return;
}

void f_461d4f(void) {
  LOAD_REGS();
L_461d4f: /* 461d4f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 461d50: mov esi, ecx */
  esi = ecx;
/* 461d52: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 461d54: call 0x461d64 */
  esp -= 4; W32(esp, 0x461d59u); SPILL(); f_461d64(); if (g_unwind) return; RELOAD();
/* 461d59: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 461d5b: call 0x461c65 */
  esp -= 4; W32(esp, 0x461d60u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 461d60: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 461d61: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 461d62: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 461d63: ret  */
  esp += 4; SPILL(); return;
}

void f_461d64(void) {
  LOAD_REGS();
L_461d64: /* 461d64: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 461d68: call dword ptr [0x48e020] */
  esp -= 4; W32(esp, 0x461d6eu); SPILL(); call_ind(R32(0x48e020u)); if (g_unwind) return; /* KERNEL32!DeleteCriticalSection */ RELOAD();
/* 461d6e: ret  */
  esp += 4; SPILL(); return;
}

void f_461d6f(void) {
  LOAD_REGS();
L_461d6f: /* 461d6f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 461d70: mov ebp, esp */
  ebp = esp;
/* 461d72: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 461d73: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 461d74: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 461d77: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 461d7a: je 0x463bbb */
  if (zf) goto L_463bbb;
L_461d80: /* 461d80: and dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 461d84: mov byte ptr [ebp + 0xb], al */
  W8((uint32_t)(ebp + 0xbu), (eax & 0xffu));
/* 461d87: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 461d89: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 461d8c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 461d8d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 461d8f: lea eax, [ebp + 0xb] */
  eax = (uint32_t)(ebp + 0xbu);
/* 461d92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 461d93: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 461d96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 461d97: call 0x461dae */
  esp -= 4; W32(esp, 0x461d9cu); SPILL(); f_461dae(); if (g_unwind) return; RELOAD();
/* 461d9c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 461d9f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 461da1: mov eax, 0xffff */
  eax = 0xffffu;
/* 461da6: jl 0x461dac */
  if ((sf != of)) goto L_461dac;
L_461da8: /* 461da8: movzx eax, word ptr [ebp - 4] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffffcu)));
L_461dac: /* 461dac: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 461dad: ret  */
  esp += 4; SPILL(); return;
L_463bbb: /* 463bbb: or ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a | b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 463bbf: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 463bc0: ret  */
  esp += 4; SPILL(); return;
}

void f_461dae(void) {
  LOAD_REGS();
L_461dae: /* 461dae: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 461daf: mov ebp, esp */
  ebp = esp;
/* 461db1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 461db2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 461db3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 461db4: mov esi, dword ptr [0x48e11c] */
  esi = R32((uint32_t)(0x48e11cu));
/* 461dba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 461dbb: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x461dbdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 461dbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 461dbe: call dword ptr [0x48e030] */
  esp -= 4; W32(esp, 0x461dc4u); SPILL(); call_ind(R32(0x48e030u)); if (g_unwind) return; /* KERNEL32!InterlockedIncrement */ RELOAD();
/* 461dc4: call dword ptr [0x48e118] */
  esp -= 4; W32(esp, 0x461dcau); SPILL(); f_4126b5(); if (g_unwind) return; /* MSVCR70!___setlc_active_func */ RELOAD();
/* 461dca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 461dcc: mov edi, dword ptr [0x48e034] */
  edi = R32((uint32_t)(0x48e034u));
/* 461dd2: jne 0x463b95 */
  if (!zf) goto L_463b95;
L_461dd8: /* 461dd8: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_461ddc: /* 461ddc: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 461ddf: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 461de2: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 461de5: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 461de8: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 461deb: call 0x461e0a */
  esp -= 4; W32(esp, 0x461df0u); SPILL(); f_461e0a(); if (g_unwind) return; RELOAD();
/* 461df0: cmp dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 461df4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 461df5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 461df6: mov ebx, eax */
  ebx = eax;
/* 461df8: jne 0x463bae */
  if (!zf) goto L_463bae;
L_461dfe: /* 461dfe: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x461e00u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 461e00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 461e01: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x461e03u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_461e03: /* 461e03: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 461e04: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 461e05: mov eax, ebx */
  eax = ebx;
/* 461e07: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 461e08: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 461e09: ret  */
  esp += 4; SPILL(); return;
L_463b95: /* 463b95: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x463b97u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 463b97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 463b98: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x463b9au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 463b9a: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 463b9c: call 0x48bf32 */
  esp -= 4; W32(esp, 0x463ba1u); SPILL(); f_48bf32(); if (g_unwind) return; RELOAD();
/* 463ba1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 463ba2: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 463ba9: jmp 0x461ddc */
  goto L_461ddc;
L_463bae: /* 463bae: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 463bb0: call 0x48bf2c */
  esp -= 4; W32(esp, 0x463bb5u); SPILL(); f_48bf2c(); if (g_unwind) return; RELOAD();
/* 463bb5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 463bb6: jmp 0x461e03 */
  goto L_461e03;
}

void f_461e0a(void) {
  LOAD_REGS();
L_461e0a: /* 461e0a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 461e0b: mov ebp, esp */
  ebp = esp;
/* 461e0d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 461e0e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 461e0f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 461e10: mov edi, ecx */
  edi = ecx;
/* 461e12: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 461e14: je 0x461e58 */
  if (zf) goto L_461e58;
L_461e16: /* 461e16: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 461e1a: je 0x461e58 */
  if (zf) goto L_461e58;
L_461e1c: /* 461e1c: cmp byte ptr [edi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 461e1f: je 0x463aa8 */
  if (zf) goto L_463aa8;
L_461e25: /* 461e25: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 461e27: jne 0x461e5c */
  if (!zf) goto L_461e5c;
L_461e29: /* 461e29: call dword ptr [0x48e10c] */
  esp -= 4; W32(esp, 0x461e2fu); SPILL(); f_412ffe(); if (g_unwind) return; /* MSVCR70!___lc_handle_func */ RELOAD();
/* 461e2f: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 461e32: call dword ptr [0x48e108] */
  esp -= 4; W32(esp, 0x461e38u); SPILL(); f_412fcc(); if (g_unwind) return; /* MSVCR70!___lc_codepage_func */ RELOAD();
L_461e38: /* 461e38: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 461e3a: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 461e3d: jne 0x463abc */
  if (!zf) goto L_463abc;
L_461e43: /* 461e43: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 461e46: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 461e48: je 0x461e51 */
  if (zf) goto L_461e51;
L_461e4a: /* 461e4a: movzx cx, byte ptr [edi] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(edi)))) & 0xffffu);
/* 461e4e: mov word ptr [eax], cx */
  W16((uint32_t)(eax), (ecx & 0xffffu));
L_461e51: /* 461e51: xor eax, eax */
  eax = 0;
/* 461e53: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_461e54: /* 461e54: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 461e55: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 461e56: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 461e57: ret  */
  esp += 4; SPILL(); return;
L_461e58: /* 461e58: xor eax, eax */
  eax = 0;
/* 461e5a: jmp 0x461e54 */
  goto L_461e54;
L_461e5c: /* 461e5c: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 461e5e: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 461e61: jmp 0x461e38 */
  goto L_461e38;
L_463aa8: /* 463aa8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 463aab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 463aad: je 0x461e58 */
  if (zf) goto L_461e58;
L_463ab3: /* 463ab3: and word ptr [eax], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(eax), r);
  }
/* 463ab7: jmp 0x461e58 */
  goto L_461e58;
L_463abc: /* 463abc: cmp dword ptr [ebx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 463abf: je 0x463b12 */
  if (zf) goto L_463b12;
L_463ac1: /* 463ac1: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 463ac3: mov edi, dword ptr [0x48e17c] */
  edi = R32((uint32_t)(0x48e17cu));
/* 463ac9: mov byte ptr [ebx + 1], al */
  W8((uint32_t)(ebx + 0x1u), (eax & 0xffu));
/* 463acc: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x463aceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 463ace: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 463ad1: jle 0x463afb */
  if ((zf || sf != of)) goto L_463afb;
L_463ad3: /* 463ad3: xor eax, eax */
  eax = 0;
/* 463ad5: cmp dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 463ad8: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 463adb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 463adc: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 463adf: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 463ae1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 463ae2: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 463ae4: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 463ae7: call dword ptr [0x48e038] */
  esp -= 4; W32(esp, 0x463aedu); SPILL(); call_ind(R32(0x48e038u)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 463aed: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 463aef: je 0x463afb */
  if (zf) goto L_463afb;
L_463af1: /* 463af1: and dword ptr [ebx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebx), r);
  }
/* 463af4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x463af6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 463af6: jmp 0x461e54 */
  goto L_461e54;
L_463afb: /* 463afb: and dword ptr [ebx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebx), r);
  }
L_463afe: /* 463afe: call dword ptr [0x48e0b0] */
  esp -= 4; W32(esp, 0x463b04u); SPILL(); f_4102a5(); if (g_unwind) return; /* MSVCR70!_errno */ RELOAD();
/* 463b04: mov dword ptr [eax], 0x2a */
  W32((uint32_t)(eax), 0x2au);
/* 463b0a: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 463b0d: jmp 0x461e54 */
  goto L_461e54;
L_463b12: /* 463b12: call dword ptr [0x48e104] */
  esp -= 4; W32(esp, 0x463b18u); SPILL(); f_41253b(); if (g_unwind) return; /* MSVCR70!__pctype_func */ RELOAD();
/* 463b18: movzx ecx, byte ptr [edi] */
  ecx = (uint32_t)(R8((uint32_t)(edi)));
/* 463b1b: test byte ptr [eax + ecx*2 + 1], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + ecx*2 + 0x1u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 463b20: je 0x463b6e */
  if (zf) goto L_463b6e;
L_463b22: /* 463b22: mov esi, dword ptr [0x48e17c] */
  esi = R32((uint32_t)(0x48e17cu));
/* 463b28: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x463b2au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 463b2a: cmp dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 463b2d: jae 0x463b3b */
  if (!cf) goto L_463b3b;
L_463b2f: /* 463b2f: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 463b31: push -2 */
  { uint32_t v = 0xfffffffeu; esp -= 4; W32(esp, v); }
/* 463b33: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* 463b35: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 463b36: jmp 0x461e54 */
  goto L_461e54;
L_463b3b: /* 463b3b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x463b3du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 463b3d: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 463b40: jle 0x463b61 */
  if ((zf || sf != of)) goto L_463b61;
L_463b42: /* 463b42: xor eax, eax */
  eax = 0;
/* 463b44: cmp dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 463b47: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 463b4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 463b4b: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 463b4e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x463b50u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 463b50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 463b51: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 463b52: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 463b54: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 463b57: call dword ptr [0x48e038] */
  esp -= 4; W32(esp, 0x463b5du); SPILL(); call_ind(R32(0x48e038u)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 463b5d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 463b5f: jne 0x463b67 */
  if (!zf) goto L_463b67;
L_463b61: /* 463b61: cmp byte ptr [edi + 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x1u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 463b65: je 0x463afb */
  if (zf) goto L_463afb;
L_463b67: /* 463b67: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x463b69u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 463b69: jmp 0x461e54 */
  goto L_461e54;
L_463b6e: /* 463b6e: xor eax, eax */
  eax = 0;
/* 463b70: cmp dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 463b73: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 463b76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 463b77: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 463b7a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 463b7c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 463b7d: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 463b7f: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 463b82: call dword ptr [0x48e038] */
  esp -= 4; W32(esp, 0x463b88u); SPILL(); call_ind(R32(0x48e038u)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 463b88: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 463b8a: jne 0x461e51 */
  if (!zf) goto L_461e51;
L_463b90: /* 463b90: jmp 0x463afe */
  goto L_463afe;
}

void f_461e63(void) {
  LOAD_REGS();
L_461e63: /* 461e63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 461e64: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 461e65: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 461e69: cmp edi, -2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 461e6c: mov esi, ecx */
  esi = ecx;
/* 461e6e: ja 0x4634a2 */
  if ((!cf && !zf)) goto L_4634a2;
L_461e74: /* 461e74: xor eax, eax */
  eax = 0;
/* 461e76: cmp dword ptr [esi + 0x18], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 461e79: jb 0x46268a */
  if (cf) goto L_46268a;
L_461e7f: /* 461e7f: cmp byte ptr [esp + 0x10], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x10u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 461e83: je 0x4626a2 */
  if (zf) goto L_4626a2;
L_461e89: /* 461e89: cmp edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 461e8c: jae 0x4626a2 */
  if (!cf) goto L_4626a2;
L_461e92: /* 461e92: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 461e94: mov ecx, esi */
  ecx = esi;
/* 461e96: call 0x461ea8 */
  esp -= 4; W32(esp, 0x461e9bu); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
L_461e9b: /* 461e9b: xor eax, eax */
  eax = 0;
/* 461e9d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 461e9f: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 461ea1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 461ea2: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 461ea4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 461ea5: ret 8 */
  esp += 12; SPILL(); return;
L_46268a: /* 46268a: cmp byte ptr [esp + 0x10], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x10u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46268e: je 0x4634ac */
  if (zf) goto L_4634ac;
L_462694: /* 462694: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 462695: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 462696: mov ecx, esi */
  ecx = esi;
/* 462698: call 0x4626af */
  esp -= 4; W32(esp, 0x46269du); SPILL(); f_4626af(); if (g_unwind) return; RELOAD();
/* 46269d: jmp 0x461e9b */
  goto L_461e9b;
L_4626a2: /* 4626a2: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4626a4: jne 0x461e9b */
  if (!zf) goto L_461e9b;
L_4626aa: /* 4626aa: jmp 0x4634b4 */
  goto L_4634b4;
L_4634a2: /* 4634a2: call 0x4877fe */
  esp -= 4; W32(esp, 0x4634a7u); SPILL(); f_4877fe(); if (g_unwind) return; RELOAD();
/* 4634a7: jmp 0x461e74 */
  goto L_461e74;
L_4634ac: /* 4634ac: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 4634af: jmp 0x462694 */
  goto L_462694;
L_4634b4: /* 4634b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4634b5: mov ecx, esi */
  ecx = esi;
/* 4634b7: call 0x461ed0 */
  esp -= 4; W32(esp, 0x4634bcu); SPILL(); f_461ed0(); if (g_unwind) return; RELOAD();
/* 4634bc: jmp 0x461e9b */
  goto L_461e9b;
}

void f_461ea8(void) {
  LOAD_REGS();
  goto L_461ea8;
L_46101a: /* 46101a: push dword ptr [esi + 4] */
  { uint32_t v = R32((uint32_t)(esi + 0x4u)); esp -= 4; W32(esp, v); }
/* 46101d: call 0x461c65 */
  esp -= 4; W32(esp, 0x461022u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 461022: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 461023: jmp 0x461ebc */
  goto L_461ebc;
L_461ea8: /* 461ea8: cmp byte ptr [esp + 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 461ead: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 461eae: mov esi, ecx */
  esi = ecx;
/* 461eb0: je 0x461ebc */
  if (zf) goto L_461ebc;
L_461eb2: /* 461eb2: cmp dword ptr [esi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 461eb6: jae 0x46101a */
  if (!cf) goto L_46101a;
L_461ebc: /* 461ebc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 461ebe: mov ecx, esi */
  ecx = esi;
/* 461ec0: mov dword ptr [esi + 0x18], 0xf */
  W32((uint32_t)(esi + 0x18u), 0xfu);
/* 461ec7: call 0x461ed0 */
  esp -= 4; W32(esp, 0x461eccu); SPILL(); f_461ed0(); if (g_unwind) return; RELOAD();
/* 461ecc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 461ecd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_461ed0(void) {
  LOAD_REGS();
L_461ed0: /* 461ed0: cmp dword ptr [ecx + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 461ed4: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 461ed8: mov dword ptr [ecx + 0x14], eax */
  W32((uint32_t)(ecx + 0x14u), eax);
/* 461edb: jae 0x461ee7 */
  if (!cf) goto L_461ee7;
L_461edd: /* 461edd: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_461ee0: /* 461ee0: and byte ptr [ecx + eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ecx + eax), r);
  }
/* 461ee4: ret 4 */
  esp += 8; SPILL(); return;
L_461ee7: /* 461ee7: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 461eea: jmp 0x461ee0 */
  goto L_461ee0;
}

void f_461eec(void) {
  LOAD_REGS();
L_461eec: /* 461eec: mov eax, 0x48bff3 */
  eax = 0x48bff3u;
/* 461ef1: call 0x4616c0 */
  esp -= 4; W32(esp, 0x461ef6u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 461ef6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 461ef7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 461ef8: mov esi, ecx */
  esi = ecx;
/* 461efa: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 461efd: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 461f00: mov dword ptr [esi], 0x4c6ec0 */
  W32((uint32_t)(esi), 0x4c6ec0u);
/* 461f06: call 0x461a9e */
  esp -= 4; W32(esp, 0x461f0bu); SPILL(); f_461a9e(); if (g_unwind) return; RELOAD();
/* 461f0b: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 461f0f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 461f11: call 0x4620da */
  esp -= 4; W32(esp, 0x461f16u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 461f16: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 461f18: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 461f19: je 0x461f3b */
  if (zf) goto L_461f3b;
L_461f1b: /* 461f1b: mov ecx, eax */
  ecx = eax;
/* 461f1d: call 0x461279 */
  esp -= 4; W32(esp, 0x461f22u); SPILL(); f_461279(); if (g_unwind) return; RELOAD();
L_461f22: /* 461f22: mov ecx, esi */
  ecx = esi;
/* 461f24: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 461f27: call 0x461f3f */
  esp -= 4; W32(esp, 0x461f2cu); SPILL(); f_461f3f(); if (g_unwind) return; RELOAD();
/* 461f2c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 461f2f: mov eax, esi */
  eax = esi;
/* 461f31: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 461f32: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 461f39: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 461f3a: ret  */
  esp += 4; SPILL(); return;
L_461f3b: /* 461f3b: xor eax, eax */
  eax = 0;
/* 461f3d: jmp 0x461f22 */
  goto L_461f22;
}

void f_461f3f(void) {
  LOAD_REGS();
L_461f3f: /* 461f3f: lea edx, [ecx + 0x18] */
  edx = (uint32_t)(ecx + 0x18u);
/* 461f42: mov dword ptr [ecx + 0x20], edx */
  W32((uint32_t)(ecx + 0x20u), edx);
/* 461f45: lea edx, [ecx + 0x1c] */
  edx = (uint32_t)(ecx + 0x1cu);
/* 461f48: mov dword ptr [ecx + 0x24], edx */
  W32((uint32_t)(ecx + 0x24u), edx);
/* 461f4b: lea edx, [ecx + 0x28] */
  edx = (uint32_t)(ecx + 0x28u);
/* 461f4e: mov dword ptr [ecx + 0x30], edx */
  W32((uint32_t)(ecx + 0x30u), edx);
/* 461f51: lea eax, [ecx + 8] */
  eax = (uint32_t)(ecx + 0x8u);
/* 461f54: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 461f57: lea edx, [ecx + 0x2c] */
  edx = (uint32_t)(ecx + 0x2cu);
/* 461f5a: mov dword ptr [ecx + 0x34], edx */
  W32((uint32_t)(ecx + 0x34u), edx);
/* 461f5d: xor edx, edx */
  edx = 0;
/* 461f5f: lea eax, [ecx + 0xc] */
  eax = (uint32_t)(ecx + 0xcu);
/* 461f62: mov dword ptr [ecx + 0x14], eax */
  W32((uint32_t)(ecx + 0x14u), eax);
/* 461f65: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 461f67: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 461f6a: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 461f6c: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 461f6f: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 461f71: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 461f74: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 461f76: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 461f79: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 461f7b: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 461f7e: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 461f80: ret  */
  esp += 4; SPILL(); return;
}

void f_461f81(void) {
  LOAD_REGS();
L_461f81: /* 461f81: call dword ptr [0x48e074] */
  esp -= 4; W32(esp, 0x461f87u); SPILL(); f_40f9d9(); if (g_unwind) return; /* MSVCR70!__iob_func */ RELOAD();
/* 461f87: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 461f8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 461f8b: mov ecx, 0x4d0928 */
  ecx = 0x4d0928u;
/* 461f90: call 0x461fa1 */
  esp -= 4; W32(esp, 0x461f95u); SPILL(); f_461fa1(); if (g_unwind) return; RELOAD();
/* 461f95: push 0x4611c6 */
  { uint32_t v = 0x4611c6u; esp -= 4; W32(esp, v); }
/* 461f9a: call 0x461586 */
  esp -= 4; W32(esp, 0x461f9fu); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 461f9f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 461fa0: ret  */
  esp += 4; SPILL(); return;
}

void f_461fa1(void) {
  LOAD_REGS();
L_461fa1: /* 461fa1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 461fa2: mov esi, ecx */
  esi = ecx;
/* 461fa4: call 0x461226 */
  esp -= 4; W32(esp, 0x461fa9u); SPILL(); f_461226(); if (g_unwind) return; RELOAD();
/* 461fa9: and dword ptr [esi + 0x48], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x48u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x48u), r);
  }
/* 461fad: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 461fb0: mov dword ptr [esi], 0x4c79e0 */
  W32((uint32_t)(esi), 0x4c79e0u);
/* 461fb6: call 0x461279 */
  esp -= 4; W32(esp, 0x461fbbu); SPILL(); f_461279(); if (g_unwind) return; RELOAD();
/* 461fbb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 461fbd: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 461fc1: mov ecx, esi */
  ecx = esi;
/* 461fc3: call 0x461fce */
  esp -= 4; W32(esp, 0x461fc8u); SPILL(); f_461fce(); if (g_unwind) return; RELOAD();
/* 461fc8: mov eax, esi */
  eax = esi;
/* 461fca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 461fcb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_461fce(void) {
  LOAD_REGS();
L_461fce: /* 461fce: cmp dword ptr [esp + 8], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 461fd3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 461fd4: mov esi, ecx */
  esi = ecx;
/* 461fd6: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 461fd9: and byte ptr [esi + 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x4cu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esi + 0x4cu), r);
  }
/* 461fdd: mov byte ptr [esi + 0x54], al */
  W8((uint32_t)(esi + 0x54u), (eax & 0xffu));
/* 461fe0: call 0x461f3f */
  esp -= 4; W32(esp, 0x461fe5u); SPILL(); f_461f3f(); if (g_unwind) return; RELOAD();
/* 461fe5: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 461fe9: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* 461fec: mov eax, dword ptr [0x4d0858] */
  eax = R32((uint32_t)(0x4d0858u));
/* 461ff1: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 461ff4: mov eax, dword ptr [0x4d0858] */
  eax = R32((uint32_t)(0x4d0858u));
/* 461ff9: and dword ptr [esi + 0x3c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x3cu), r);
  }
/* 461ffd: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 462000: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 462001: ret 8 */
  esp += 12; SPILL(); return;
}

void f_462004(void) {
  LOAD_REGS();
L_462004: /* 462004: call dword ptr [0x48e074] */
  esp -= 4; W32(esp, 0x46200au); SPILL(); f_40f9d9(); if (g_unwind) return; /* MSVCR70!__iob_func */ RELOAD();
/* 46200a: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46200d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46200e: mov ecx, 0x4d0bb8 */
  ecx = 0x4d0bb8u;
/* 462013: call 0x462024 */
  esp -= 4; W32(esp, 0x462018u); SPILL(); f_462024(); if (g_unwind) return; RELOAD();
/* 462018: push 0x461184 */
  { uint32_t v = 0x461184u; esp -= 4; W32(esp, v); }
/* 46201d: call 0x461586 */
  esp -= 4; W32(esp, 0x462022u); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 462022: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 462023: ret  */
  esp += 4; SPILL(); return;
}

void f_462024(void) {
  LOAD_REGS();
L_462024: /* 462024: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462025: mov esi, ecx */
  esi = ecx;
/* 462027: call 0x462087 */
  esp -= 4; W32(esp, 0x46202cu); SPILL(); f_462087(); if (g_unwind) return; RELOAD();
/* 46202c: and dword ptr [esi + 0x48], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x48u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x48u), r);
  }
/* 462030: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 462033: mov dword ptr [esi], 0x4c7960 */
  W32((uint32_t)(esi), 0x4c7960u);
/* 462039: call 0x461279 */
  esp -= 4; W32(esp, 0x46203eu); SPILL(); f_461279(); if (g_unwind) return; RELOAD();
/* 46203e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 462040: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 462044: mov ecx, esi */
  ecx = esi;
/* 462046: call 0x462051 */
  esp -= 4; W32(esp, 0x46204bu); SPILL(); f_462051(); if (g_unwind) return; RELOAD();
/* 46204b: mov eax, esi */
  eax = esi;
/* 46204d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46204e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_462051(void) {
  LOAD_REGS();
L_462051: /* 462051: cmp dword ptr [esp + 8], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 462056: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462057: mov esi, ecx */
  esi = ecx;
/* 462059: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 46205c: and byte ptr [esi + 0x4c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x4cu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esi + 0x4cu), r);
  }
/* 462060: mov byte ptr [esi + 0x54], al */
  W8((uint32_t)(esi + 0x54u), (eax & 0xffu));
/* 462063: call 0x461f3f */
  esp -= 4; W32(esp, 0x462068u); SPILL(); f_461f3f(); if (g_unwind) return; RELOAD();
/* 462068: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 46206c: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* 46206f: mov eax, dword ptr [0x4d0854] */
  eax = R32((uint32_t)(0x4d0854u));
/* 462074: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 462077: mov eax, dword ptr [0x4d0854] */
  eax = R32((uint32_t)(0x4d0854u));
/* 46207c: and dword ptr [esi + 0x3c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x3cu), r);
  }
/* 462080: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 462083: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 462084: ret 8 */
  esp += 12; SPILL(); return;
}

void f_462087(void) {
  LOAD_REGS();
L_462087: /* 462087: mov eax, 0x48c26a */
  eax = 0x48c26au;
/* 46208c: call 0x4616c0 */
  esp -= 4; W32(esp, 0x462091u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 462091: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 462092: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462093: mov esi, ecx */
  esi = ecx;
/* 462095: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 462098: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 46209b: mov dword ptr [esi], 0x4c721c */
  W32((uint32_t)(esi), 0x4c721cu);
/* 4620a1: call 0x461a9e */
  esp -= 4; W32(esp, 0x4620a6u); SPILL(); f_461a9e(); if (g_unwind) return; RELOAD();
/* 4620a6: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4620aa: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4620ac: call 0x4620da */
  esp -= 4; W32(esp, 0x4620b1u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 4620b1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4620b3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4620b4: je 0x4620d6 */
  if (zf) goto L_4620d6;
L_4620b6: /* 4620b6: mov ecx, eax */
  ecx = eax;
/* 4620b8: call 0x461279 */
  esp -= 4; W32(esp, 0x4620bdu); SPILL(); f_461279(); if (g_unwind) return; RELOAD();
L_4620bd: /* 4620bd: mov ecx, esi */
  ecx = esi;
/* 4620bf: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 4620c2: call 0x461f3f */
  esp -= 4; W32(esp, 0x4620c7u); SPILL(); f_461f3f(); if (g_unwind) return; RELOAD();
/* 4620c7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4620ca: mov eax, esi */
  eax = esi;
/* 4620cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4620cd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4620d4: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4620d5: ret  */
  esp += 4; SPILL(); return;
L_4620d6: /* 4620d6: xor eax, eax */
  eax = 0;
/* 4620d8: jmp 0x4620bd */
  goto L_4620bd;
}

void f_4620da(void) {
  LOAD_REGS();
L_4620da: /* 4620da: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4620db: mov esi, dword ptr [0x48e0e4] */
  esi = R32((uint32_t)(0x48e0e4u));
/* 4620e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4620e2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
L_4620e6: /* 4620e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4620e7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x4620e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4620e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4620eb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4620ec: je 0x463ce3 */
  if (zf) goto L_463ce3;
L_4620f2: /* 4620f2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4620f3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4620f4: ret  */
  esp += 4; SPILL(); return;
L_463ce3: /* 463ce3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 463ce4: call 0x48bf4a */
  esp -= 4; W32(esp, 0x463ce9u); SPILL(); f_48bf4a(); if (g_unwind) return; RELOAD();
/* 463ce9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 463ceb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 463cec: jne 0x4620e6 */
  if (!zf) goto L_4620e6;
L_463cf2: /* 463cf2: call 0x4875f2 */
  esp -= 4; W32(esp, 0x463cf7u); SPILL(); f_4875f2(); if (g_unwind) return; RELOAD();
/* 463cf7: jmp 0x4620e6 */
  goto L_4620e6;
}

void f_4620f5(void) {
  LOAD_REGS();
L_4620f5: /* 4620f5: mov eax, 0x48c077 */
  eax = 0x48c077u;
/* 4620fa: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4620ffu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4620ff: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 462102: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 462103: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462104: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 462105: mov esi, ecx */
  esi = ecx;
/* 462107: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 46210a: xor ebx, ebx */
  ebx = 0;
/* 46210c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46210d: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 462110: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 462113: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 462116: call 0x462178 */
  esp -= 4; W32(esp, 0x46211bu); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 46211b: cmp byte ptr [ebp - 0x1c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46211e: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 462121: je 0x46216f */
  if (zf) goto L_46216f;
L_462123: /* 462123: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 462125: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 462128: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46212b: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 46212f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 462133: call 0x46186f */
  esp -= 4; W32(esp, 0x462138u); SPILL(); f_46186f(); if (g_unwind) return; RELOAD();
/* 462138: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46213b: je 0x46216f */
  if (zf) goto L_46216f;
L_46213d: /* 46213d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46213f: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 462142: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 462143: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 462146: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 462148: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46214b: call 0x461453 */
  esp -= 4; W32(esp, 0x462150u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 462150: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 462154: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 462157: call 0x462246 */
  esp -= 4; W32(esp, 0x46215cu); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 46215c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46215f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 462160: mov eax, esi */
  eax = esi;
/* 462162: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 462163: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46216a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46216b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46216c: ret 4 */
  esp += 8; SPILL(); return;
L_46216f: /* 46216f: mov dword ptr [ebp - 0x14], 4 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x4u);
/* 462176: jmp 0x46213d */
  goto L_46213d;
}

void f_46216f(void) {
  LOAD_REGS();
  goto L_46216f;
L_46213d: /* 46213d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46213f: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 462142: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 462143: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 462146: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 462148: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46214b: call 0x461453 */
  esp -= 4; W32(esp, 0x462150u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 462150: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 462154: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 462157: call 0x462246 */
  esp -= 4; W32(esp, 0x46215cu); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 46215c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46215f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 462160: mov eax, esi */
  eax = esi;
/* 462162: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 462163: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46216a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46216b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46216c: ret 4 */
  esp += 8; SPILL(); return;
L_46216f: /* 46216f: mov dword ptr [ebp - 0x14], 4 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x4u);
/* 462176: jmp 0x46213d */
  goto L_46213d;
}

void f_462178(void) {
  LOAD_REGS();
L_462178: /* 462178: mov eax, 0x48bfcc */
  eax = 0x48bfccu;
/* 46217d: call 0x4616c0 */
  esp -= 4; W32(esp, 0x462182u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 462182: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 462183: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462184: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 462187: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 462188: mov edi, ecx */
  edi = ecx;
/* 46218a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46218b: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* 46218e: call 0x4621d1 */
  esp -= 4; W32(esp, 0x462193u); SPILL(); f_4621d1(); if (g_unwind) return; RELOAD();
/* 462193: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 462195: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 462198: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46219c: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46219e: cmp dword ptr [eax + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4621a2: jne 0x4621af */
  if (!zf) goto L_4621af;
L_4621a4: /* 4621a4: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 4621a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4621a9: jne 0x4634c9 */
  if (!zf) goto L_4634c9;
L_4621af: /* 4621af: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4621b1: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4621b4: cmp dword ptr [eax + esi + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + esi + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4621b9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4621bc: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 4621bf: mov byte ptr [edi + 4], al */
  W8((uint32_t)(edi + 0x4u), (eax & 0xffu));
/* 4621c2: mov eax, edi */
  eax = edi;
/* 4621c4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4621c5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4621c6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4621cd: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4621ce: ret 4 */
  esp += 8; SPILL(); return;
L_4634c9: /* 4634c9: mov ecx, eax */
  ecx = eax;
/* 4634cb: call 0x461419 */
  esp -= 4; W32(esp, 0x4634d0u); SPILL(); f_461419(); if (g_unwind) return; RELOAD();
/* 4634d0: jmp 0x4621af */
  goto L_4621af;
}

void f_4621d1(void) {
  LOAD_REGS();
L_4621d1: /* 4621d1: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4621d5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4621d6: mov esi, ecx */
  esi = ecx;
/* 4621d8: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 4621da: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4621dc: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4621df: mov eax, dword ptr [ecx + eax + 0x28] */
  eax = R32((uint32_t)(ecx + eax + 0x28u));
/* 4621e3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4621e5: je 0x4621ef */
  if (zf) goto L_4621ef;
L_4621e7: /* 4621e7: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 4621ea: call 0x4621f5 */
  esp -= 4; W32(esp, 0x4621efu); SPILL(); f_4621f5(); if (g_unwind) return; RELOAD();
L_4621ef: /* 4621ef: mov eax, esi */
  eax = esi;
/* 4621f1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4621f2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4621f5(void) {
  LOAD_REGS();
L_4621f5: /* 4621f5: push dword ptr [ecx] */
  { uint32_t v = R32((uint32_t)(ecx)); esp -= 4; W32(esp, v); }
/* 4621f7: call 0x4612dd */
  esp -= 4; W32(esp, 0x4621fcu); SPILL(); f_4612dd(); if (g_unwind) return; RELOAD();
/* 4621fc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4621fd: ret  */
  esp += 4; SPILL(); return;
}

void f_462246(void) {
  LOAD_REGS();
L_462246: /* 462246: mov eax, 0x48bfcc */
  eax = 0x48bfccu;
/* 46224b: call 0x4616c0 */
  esp -= 4; W32(esp, 0x462250u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 462250: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 462251: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462252: mov esi, ecx */
  esi = ecx;
/* 462254: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 462257: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46225b: call 0x4610d5 */
  esp -= 4; W32(esp, 0x462260u); SPILL(); f_4610d5(); if (g_unwind) return; RELOAD();
/* 462260: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 462262: jne 0x462276 */
  if (!zf) goto L_462276;
L_462264: /* 462264: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 462266: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 462268: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46226b: test byte ptr [eax + ecx + 0xc], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + ecx + 0xcu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 462270: jne 0x4634da */
  if (!zf) goto L_4634da;
L_462276: /* 462276: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46227a: mov ecx, esi */
  ecx = esi;
/* 46227c: call 0x46228e */
  esp -= 4; W32(esp, 0x462281u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 462281: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 462284: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 462285: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46228c: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46228d: ret  */
  esp += 4; SPILL(); return;
L_4634da: /* 4634da: call 0x461419 */
  esp -= 4; W32(esp, 0x4634dfu); SPILL(); f_461419(); if (g_unwind) return; RELOAD();
/* 4634df: jmp 0x462276 */
  goto L_462276;
}

void f_46228e(void) {
  LOAD_REGS();
L_46228e: /* 46228e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 462290: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 462292: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 462295: mov eax, dword ptr [ecx + eax + 0x28] */
  eax = R32((uint32_t)(ecx + eax + 0x28u));
/* 462299: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46229b: je 0x4633c2 */
  if (zf) goto L_4633c2;
L_4622a1: /* 4622a1: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
  SPILL(); f_4622a4(); return;
L_4633c2: /* 4633c2: ret  */
  esp += 4; SPILL(); return;
}

void f_4622a4(void) {
  LOAD_REGS();
L_4622a4: /* 4622a4: push dword ptr [ecx] */
  { uint32_t v = R32((uint32_t)(ecx)); esp -= 4; W32(esp, v); }
/* 4622a6: call 0x4613ec */
  esp -= 4; W32(esp, 0x4622abu); SPILL(); f_4613ec(); if (g_unwind) return; RELOAD();
/* 4622ab: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4622ac: ret  */
  esp += 4; SPILL(); return;
}

void f_4622ad(void) {
  LOAD_REGS();
L_4622ad: /* 4622ad: call dword ptr [0x48e074] */
  esp -= 4; W32(esp, 0x4622b3u); SPILL(); f_40f9d9(); if (g_unwind) return; /* MSVCR70!__iob_func */ RELOAD();
/* 4622b3: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4622b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4622b7: mov ecx, 0x4d07b8 */
  ecx = 0x4d07b8u;
/* 4622bc: call 0x4615e2 */
  esp -= 4; W32(esp, 0x4622c1u); SPILL(); f_4615e2(); if (g_unwind) return; RELOAD();
/* 4622c1: push 0x4622cd */
  { uint32_t v = 0x4622cdu; esp -= 4; W32(esp, v); }
/* 4622c6: call 0x461586 */
  esp -= 4; W32(esp, 0x4622cbu); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 4622cb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4622cc: ret  */
  esp += 4; SPILL(); return;
}

void f_4622cd(void) {
  LOAD_REGS();
L_4622cd: /* 4622cd: mov ecx, 0x4d07b8 */
  ecx = 0x4d07b8u;
  SPILL(); f_4622d2(); return;
}

void f_4622d2(void) {
  LOAD_REGS();
L_4622d2: /* 4622d2: mov eax, 0x48c0ca */
  eax = 0x48c0cau;
/* 4622d7: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4622dcu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4622dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4622dd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4622de: mov esi, ecx */
  esi = ecx;
/* 4622e0: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 4622e3: mov dword ptr [esi], 0x4c6f3c */
  W32((uint32_t)(esi), 0x4c6f3cu);
/* 4622e9: cmp byte ptr [esi + 0x54], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x54u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4622ed: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4622f4: jne 0x463688 */
  if (!zf) goto L_463688;
L_4622fa: /* 4622fa: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 4622fd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4622ff: jne 0x463692 */
  if (!zf) goto L_463692;
L_462305: /* 462305: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 462308: call 0x461389 */
  esp -= 4; W32(esp, 0x46230du); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 46230d: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 462311: mov ecx, esi */
  ecx = esi;
/* 462313: call 0x462325 */
  esp -= 4; W32(esp, 0x462318u); SPILL(); f_462325(); if (g_unwind) return; RELOAD();
/* 462318: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46231b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46231c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 462323: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 462324: ret  */
  esp += 4; SPILL(); return;
L_463688: /* 463688: call 0x46789a */
  esp -= 4; W32(esp, 0x46368du); SPILL(); f_46789a(); if (g_unwind) return; RELOAD();
/* 46368d: jmp 0x4622fa */
  goto L_4622fa;
L_463692: /* 463692: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 463694: call 0x465c86 */
  esp -= 4; W32(esp, 0x463699u); SPILL(); f_465c86(); if (g_unwind) return; RELOAD();
/* 463699: jmp 0x462305 */
  goto L_462305;
}

void f_462325(void) {
  LOAD_REGS();
L_462325: /* 462325: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462326: mov esi, ecx */
  esi = ecx;
/* 462328: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 462329: mov edi, dword ptr [esi + 0x38] */
  edi = R32((uint32_t)(esi + 0x38u));
/* 46232c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46232e: mov dword ptr [esi], 0x4c6ec0 */
  W32((uint32_t)(esi), 0x4c6ec0u);
/* 462334: je 0x462344 */
  if (zf) goto L_462344;
L_462336: /* 462336: mov ecx, edi */
  ecx = edi;
/* 462338: call 0x461389 */
  esp -= 4; W32(esp, 0x46233du); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 46233d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46233e: call 0x461c65 */
  esp -= 4; W32(esp, 0x462343u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 462343: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_462344: /* 462344: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 462345: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 462348: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 462349: jmp 0x461d4f */
  SPILL(); f_461d4f(); return;
}

void f_46234e(void) {
  LOAD_REGS();
L_46234e: /* 46234e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 462350: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 462352: push 0x4d05d8 */
  { uint32_t v = 0x4d05d8u; esp -= 4; W32(esp, v); }
/* 462357: mov ecx, 0x4d063c */
  ecx = 0x4d063cu;
/* 46235c: call 0x46236d */
  esp -= 4; W32(esp, 0x462361u); SPILL(); f_46236d(); if (g_unwind) return; RELOAD();
/* 462361: push 0x4611f6 */
  { uint32_t v = 0x4611f6u; esp -= 4; W32(esp, v); }
/* 462366: call 0x461586 */
  esp -= 4; W32(esp, 0x46236bu); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 46236b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46236c: ret  */
  esp += 4; SPILL(); return;
}

void f_46236d(void) {
  LOAD_REGS();
L_46236d: /* 46236d: mov eax, 0x48bfba */
  eax = 0x48bfbau;
/* 462372: call 0x4616c0 */
  esp -= 4; W32(esp, 0x462377u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 462377: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 462378: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 462379: xor eax, eax */
  eax = 0;
/* 46237b: cmp dword ptr [ebp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46237e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46237f: mov esi, ecx */
  esi = ecx;
/* 462381: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 462384: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 462387: je 0x4623a3 */
  if (zf) goto L_4623a3;
L_462389: /* 462389: mov dword ptr [esi], 0x48e22c */
  W32((uint32_t)(esi), 0x48e22cu);
/* 46238f: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 462392: mov dword ptr [esi + 4], 0x4c6d18 */
  W32((uint32_t)(esi + 0x4u), 0x4c6d18u);
/* 462399: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 46239c: mov dword ptr [ebp - 0x10], 1 */
  W32((uint32_t)(ebp + 0xfffffff0u), 0x1u);
L_4623a3: /* 4623a3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4623a5: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4623a8: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4623ab: mov dword ptr [esi + eax], 0x4c6cc0 */
  W32((uint32_t)(esi + eax), 0x4c6cc0u);
/* 4623b2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4623b4: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4623b7: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4623ba: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4623bc: call 0x4623d2 */
  esp -= 4; W32(esp, 0x4623c1u); SPILL(); f_4623d2(); if (g_unwind) return; RELOAD();
/* 4623c1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4623c4: mov eax, esi */
  eax = esi;
/* 4623c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4623c7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4623ce: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4623cf: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_4623d2(void) {
  LOAD_REGS();
L_4623d2: /* 4623d2: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4623d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4623d7: mov esi, ecx */
  esi = ecx;
/* 4623d9: and dword ptr [esi + 0x2c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x2cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x2cu), r);
  }
/* 4623dd: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 4623e0: mov byte ptr [esi + 0x30], 0x20 */
  W8((uint32_t)(esi + 0x30u), 0x20u);
/* 4623e4: call 0x461b7f */
  esp -= 4; W32(esp, 0x4623e9u); SPILL(); f_461b7f(); if (g_unwind) return; RELOAD();
/* 4623e9: cmp dword ptr [esi + 0x28], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x28u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4623ed: je 0x4633c3 */
  if (zf) goto L_4633c3;
L_4623f3: /* 4623f3: cmp byte ptr [esp + 0xc], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0xcu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4623f8: jne 0x4633d8 */
  if (!zf) goto L_4633d8;
L_4623fe: /* 4623fe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4623ff: ret 8 */
  esp += 12; SPILL(); return;
L_4633c3: /* 4633c3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4633c6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4633c8: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4633cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4633cc: mov ecx, esi */
  ecx = esi;
/* 4633ce: call 0x464bb2 */
  esp -= 4; W32(esp, 0x4633d3u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 4633d3: jmp 0x4623f3 */
  goto L_4623f3;
L_4633d8: /* 4633d8: mov ecx, esi */
  ecx = esi;
/* 4633da: call 0x489208 */
  esp -= 4; W32(esp, 0x4633dfu); SPILL(); f_489208(); if (g_unwind) return; RELOAD();
/* 4633df: jmp 0x4623fe */
  goto L_4623fe;
}

void f_462402(void) {
  LOAD_REGS();
L_462402: /* 462402: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462403: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 462404: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 462408: cmp edi, 0x7ffffffe */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7ffffffeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 46240e: mov esi, ecx */
  esi = ecx;
/* 462410: ja 0x4638a4 */
  if ((!cf && !zf)) goto L_4638a4;
L_462416: /* 462416: xor eax, eax */
  eax = 0;
/* 462418: cmp dword ptr [esi + 0x18], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46241b: jae 0x4638b6 */
  if (!cf) goto L_4638b6;
L_462421: /* 462421: cmp byte ptr [esp + 0x10], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x10u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 462425: je 0x4638ae */
  if (zf) goto L_4638ae;
L_46242b: /* 46242b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46242c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46242d: mov ecx, esi */
  ecx = esi;
/* 46242f: call 0x462441 */
  esp -= 4; W32(esp, 0x462434u); SPILL(); f_462441(); if (g_unwind) return; RELOAD();
L_462434: /* 462434: xor eax, eax */
  eax = 0;
/* 462436: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 462438: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 46243a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46243b: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 46243d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46243e: ret 8 */
  esp += 12; SPILL(); return;
L_4638a4: /* 4638a4: call 0x4877fe */
  esp -= 4; W32(esp, 0x4638a9u); SPILL(); f_4877fe(); if (g_unwind) return; RELOAD();
/* 4638a9: jmp 0x462416 */
  goto L_462416;
L_4638ae: /* 4638ae: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 4638b1: jmp 0x46242b */
  goto L_46242b;
L_4638b6: /* 4638b6: cmp byte ptr [esp + 0x10], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x10u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4638ba: je 0x4638cf */
  if (zf) goto L_4638cf;
L_4638bc: /* 4638bc: cmp edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4638bf: jae 0x4638cf */
  if (!cf) goto L_4638cf;
L_4638c1: /* 4638c1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4638c3: mov ecx, esi */
  ecx = esi;
/* 4638c5: call 0x4624b0 */
  esp -= 4; W32(esp, 0x4638cau); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 4638ca: jmp 0x462434 */
  goto L_462434;
L_4638cf: /* 4638cf: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4638d1: jne 0x462434 */
  if (!zf) goto L_462434;
L_4638d7: /* 4638d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4638d8: mov ecx, esi */
  ecx = esi;
/* 4638da: call 0x4624dd */
  esp -= 4; W32(esp, 0x4638dfu); SPILL(); f_4624dd(); if (g_unwind) return; RELOAD();
/* 4638df: jmp 0x462434 */
  goto L_462434;
}

void f_462441(void) {
  LOAD_REGS();
L_462441: /* 462441: mov eax, 0x48c31d */
  eax = 0x48c31du;
/* 462446: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46244bu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46244b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46244e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46244f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462450: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 462451: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 462454: or edi, 7 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 462457: cmp edi, 0x7ffffffe */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7ffffffeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 46245d: mov esi, ecx */
  esi = ecx;
/* 46245f: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 462462: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 462465: ja 0x46383a */
  if ((!cf && !zf)) goto L_46383a;
L_46246b: /* 46246b: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46246f: lea eax, [edi + edi + 2] */
  eax = (uint32_t)(edi + edi + 0x2u);
/* 462473: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 462474: call 0x4620da */
  esp -= 4; W32(esp, 0x462479u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 462479: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46247a: mov ebx, eax */
  ebx = eax;
/* 46247c: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 462480: ja 0x463871 */
  if ((!cf && !zf)) goto L_463871;
L_462486: /* 462486: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 462488: mov ecx, esi */
  ecx = esi;
/* 46248a: call 0x4624b0 */
  esp -= 4; W32(esp, 0x46248fu); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 46248f: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 462492: mov ecx, esi */
  ecx = esi;
/* 462494: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 462497: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* 46249a: call 0x4624dd */
  esp -= 4; W32(esp, 0x46249fu); SPILL(); f_4624dd(); if (g_unwind) return; RELOAD();
/* 46249f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4624a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4624a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4624a4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4624ab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4624ac: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4624ad: ret 8 */
  esp += 12; SPILL(); return;
L_46383a: /* 46383a: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 46383d: jmp 0x46246b */
  goto L_46246b;
L_463871: /* 463871: cmp dword ptr [esi + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 463875: jb 0x46387c */
  if (cf) goto L_46387c;
L_463877: /* 463877: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 46387a: jmp 0x46387f */
  goto L_46387f;
L_46387c: /* 46387c: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
L_46387f: /* 46387f: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 463882: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 463883: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 463884: call 0x462cb0 */
  esp -= 4; W32(esp, 0x463889u); SPILL(); f_462cb0(); if (g_unwind) return; RELOAD();
/* 463889: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46388c: jmp 0x462486 */
  goto L_462486;
}

void f_4624b0(void) {
  LOAD_REGS();
L_4624b0: /* 4624b0: cmp byte ptr [esp + 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4624b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4624b6: mov esi, ecx */
  esi = ecx;
/* 4624b8: je 0x4624c9 */
  if (zf) goto L_4624c9;
L_4624ba: /* 4624ba: cmp dword ptr [esi + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4624be: jb 0x4624c9 */
  if (cf) goto L_4624c9;
L_4624c0: /* 4624c0: push dword ptr [esi + 4] */
  { uint32_t v = R32((uint32_t)(esi + 0x4u)); esp -= 4; W32(esp, v); }
/* 4624c3: call 0x461c65 */
  esp -= 4; W32(esp, 0x4624c8u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 4624c8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4624c9: /* 4624c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4624cb: mov ecx, esi */
  ecx = esi;
/* 4624cd: mov dword ptr [esi + 0x18], 7 */
  W32((uint32_t)(esi + 0x18u), 0x7u);
/* 4624d4: call 0x4624dd */
  esp -= 4; W32(esp, 0x4624d9u); SPILL(); f_4624dd(); if (g_unwind) return; RELOAD();
/* 4624d9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4624da: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4624dd(void) {
  LOAD_REGS();
L_4624dd: /* 4624dd: cmp dword ptr [ecx + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4624e1: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4624e5: mov dword ptr [ecx + 0x14], eax */
  W32((uint32_t)(ecx + 0x14u), eax);
/* 4624e8: jae 0x4624f5 */
  if (!cf) goto L_4624f5;
L_4624ea: /* 4624ea: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_4624ed: /* 4624ed: and word ptr [ecx + eax*2], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + eax*2))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(ecx + eax*2), r);
  }
/* 4624f2: ret 4 */
  esp += 8; SPILL(); return;
L_4624f5: /* 4624f5: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4624f8: jmp 0x4624ed */
  goto L_4624ed;
}

void f_462529(void) {
  LOAD_REGS();
  goto L_462529;
L_461461: /* 461461: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 461463: jne 0x46251f */
  if (!zf) goto L_46251f;
L_461469: /* 461469: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46146a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46146b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46146c: call 0x461495 */
  esp -= 4; W32(esp, 0x461471u); SPILL(); f_461495(); if (g_unwind) return; RELOAD();
/* 461471: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 461473: je 0x463d23 */
  if (zf) goto L_463d23;
L_461479: /* 461479: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46147d: je 0x462565 */
  if (zf) goto L_462565;
L_461483: /* 461483: mov eax, dword ptr [0x4d0ee0] */
  eax = R32((uint32_t)(0x4d0ee0u));
/* 461488: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46148a: je 0x462565 */
  if (zf) goto L_462565;
L_461490: /* 461490: jmp 0x463d2b */
  goto L_463d2b;
L_4624fa: /* 4624fa: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4624fd: jne 0x462518 */
  if (!zf) goto L_462518;
L_4624ff: /* 4624ff: mov eax, dword ptr [0x4d0ee0] */
  eax = R32((uint32_t)(0x4d0ee0u));
/* 462504: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 462506: jne 0x463d02 */
  if (!zf) goto L_463d02;
L_46250c: /* 46250c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46250d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46250e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46250f: call 0x461495 */
  esp -= 4; W32(esp, 0x462514u); SPILL(); f_461495(); if (g_unwind) return; RELOAD();
/* 462514: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 462516: jmp 0x462543 */
  goto L_462543;
L_462518: /* 462518: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46251b: jne 0x462549 */
  if (!zf) goto L_462549;
L_46251d: /* 46251d: jmp 0x4624ff */
  goto L_4624ff;
L_46251f: /* 46251f: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 462522: jne 0x462565 */
  if (!zf) goto L_462565;
L_462524: /* 462524: jmp 0x461469 */
  goto L_461469;
L_462529: /* 462529: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46252a: mov ebp, esp */
  ebp = esp;
/* 46252c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46252d: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 462530: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462531: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 462534: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 462536: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 462537: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 46253a: jne 0x4624fa */
  if (!zf) goto L_4624fa;
L_46253c: /* 46253c: cmp dword ptr [0x4d0ed4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4d0ed4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_462543: /* 462543: je 0x463d0f */
  if (zf) goto L_463d0f;
L_462549: /* 462549: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46254a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46254b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46254c: call 0x46256f */
  esp -= 4; W32(esp, 0x462551u); SPILL(); f_46256f(); if (g_unwind) return; RELOAD();
/* 462551: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 462554: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 462557: jne 0x461461 */
  if (!zf) goto L_461461;
L_46255d: /* 46255d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46255f: je 0x463d16 */
  if (zf) goto L_463d16;
L_462565: /* 462565: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
L_462568: /* 462568: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 462569: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46256a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46256b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 46256c: ret 0xc */
  esp += 16; SPILL(); return;
L_463d02: /* 463d02: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 463d03: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 463d04: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 463d05: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x463d07u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 463d07: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 463d09: jne 0x46250c */
  if (!zf) goto L_46250c;
L_463d0f: /* 463d0f: xor eax, eax */
  eax = 0;
/* 463d11: jmp 0x462568 */
  goto L_462568;
L_463d16: /* 463d16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 463d17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 463d18: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 463d19: call 0x461495 */
  esp -= 4; W32(esp, 0x463d1eu); SPILL(); f_461495(); if (g_unwind) return; RELOAD();
/* 463d1e: jmp 0x461461 */
  goto L_461461;
L_463d23: /* 463d23: and dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 463d26: jmp 0x461479 */
  goto L_461479;
L_463d2b: /* 463d2b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 463d2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 463d2d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 463d2e: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x463d30u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 463d30: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 463d33: jmp 0x462565 */
  goto L_462565;
}

void f_46256f(void) {
  LOAD_REGS();
L_46256f: /* 46256f: cmp dword ptr [esp + 8], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 462574: jne 0x462589 */
  if (!zf) goto L_462589;
L_462576: /* 462576: cmp dword ptr [0x4d0ee0], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4d0ee0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46257d: jne 0x462589 */
  if (!zf) goto L_462589;
L_46257f: /* 46257f: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 462583: call dword ptr [0x48e03c] */
  esp -= 4; W32(esp, 0x462589u); SPILL(); call_ind(R32(0x48e03cu)); if (g_unwind) return; /* KERNEL32!DisableThreadLibraryCalls */ RELOAD();
L_462589: /* 462589: xor eax, eax */
  eax = 0;
/* 46258b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 46258c: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_46258f(void) {
  LOAD_REGS();
L_46258f: /* 46258f: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 462591: push 0x48e418 */
  { uint32_t v = 0x48e418u; esp -= 4; W32(esp, v); }
/* 462596: call 0x462f61 */
  esp -= 4; W32(esp, 0x46259bu); SPILL(); f_462f61(); if (g_unwind) return; RELOAD();
/* 46259b: mov dword ptr [ebp - 0x1c], 0x48e510 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x48e510u);
L_4625a2: /* 4625a2: cmp dword ptr [ebp - 0x1c], 0x48e510 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x48e510u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4625a9: jb 0x463d47 */
  if (cf) goto L_463d47;
L_4625af: /* 4625af: call 0x4625b5 */
  esp -= 4; W32(esp, 0x4625b4u); SPILL(); f_4625b5(); if (g_unwind) return; RELOAD();
/* 4625b4: ret  */
  esp += 4; SPILL(); return;
L_463d47: /* 463d47: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 463d4b: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 463d4e: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 463d50: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 463d52: je 0x463d5f */
  if (zf) goto L_463d5f;
L_463d54: /* 463d54: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x463d56u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 463d56: jmp 0x463d5f */
  goto L_463d5f;
L_463d5f: /* 463d5f: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 463d63: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 463d67: jmp 0x4625a2 */
  goto L_4625a2;
}

void f_4625b5(void) {
  LOAD_REGS();
L_4625b5: /* 4625b5: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 4625b8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4625bf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4625c0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4625c1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4625c2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4625c3: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4625c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4625c5: ret  */
  esp += 4; SPILL(); return;
}

void f_462646(void) {
  LOAD_REGS();
L_462646: /* 462646: cmp byte ptr [0x4d0e44], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x4d0e44u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46264d: jne 0x462661 */
  if (!zf) goto L_462661;
L_46264f: /* 46264f: push 0x462dec */
  { uint32_t v = 0x462decu; esp -= 4; W32(esp, v); }
/* 462654: mov byte ptr [0x4d0e44], 1 */
  W8((uint32_t)(0x4d0e44u), 0x1u);
/* 46265b: call 0x46266b */
  esp -= 4; W32(esp, 0x462660u); SPILL(); f_46266b(); if (g_unwind) return; RELOAD();
/* 462660: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_462661: /* 462661: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 462665: mov dword ptr [0x4d0e34], eax */
  W32((uint32_t)(0x4d0e34u), eax);
/* 46266a: ret  */
  esp += 4; SPILL(); return;
}

void f_46266b(void) {
  LOAD_REGS();
L_46266b: /* 46266b: mov eax, dword ptr [0x4d0578] */
  eax = R32((uint32_t)(0x4d0578u));
/* 462670: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 462672: je 0x463a7b */
  if (zf) goto L_463a7b;
L_462678: /* 462678: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 46267c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 46267d: mov dword ptr [0x4d0578], eax */
  W32((uint32_t)(0x4d0578u), eax);
/* 462682: mov dword ptr [eax*4 + 0x4d08f8], ecx */
  W32((uint32_t)(eax*4 + 0x4d08f8u), ecx);
/* 462689: ret  */
  esp += 4; SPILL(); return;
L_463a7b: /* 463a7b: jmp dword ptr [0x48e0d0] */
  SPILL(); f_41278b(); return; /* MSVCR70!abort */
}

void f_4626af(void) {
  LOAD_REGS();
L_4626af: /* 4626af: mov eax, 0x48bf9a */
  eax = 0x48bf9au;
/* 4626b4: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4626b9u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4626b9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4626bc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4626bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4626be: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4626bf: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 4626c2: or edi, 0xf */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 4626c5: cmp edi, -2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4626c8: mov esi, ecx */
  esi = ecx;
/* 4626ca: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 4626cd: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 4626d0: ja 0x46343b */
  if ((!cf && !zf)) goto L_46343b;
L_4626d6: /* 4626d6: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4626da: lea eax, [edi + 1] */
  eax = (uint32_t)(edi + 0x1u);
/* 4626dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4626de: call 0x4620da */
  esp -= 4; W32(esp, 0x4626e3u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 4626e3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4626e4: mov ebx, eax */
  ebx = eax;
/* 4626e6: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4626ea: ja 0x46346f */
  if ((!cf && !zf)) goto L_46346f;
L_4626f0: /* 4626f0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4626f2: mov ecx, esi */
  ecx = esi;
/* 4626f4: call 0x461ea8 */
  esp -= 4; W32(esp, 0x4626f9u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 4626f9: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4626fc: mov ecx, esi */
  ecx = esi;
/* 4626fe: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 462701: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* 462704: call 0x461ed0 */
  esp -= 4; W32(esp, 0x462709u); SPILL(); f_461ed0(); if (g_unwind) return; RELOAD();
/* 462709: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46270c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46270d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46270e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 462715: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 462716: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 462717: ret 8 */
  esp += 12; SPILL(); return;
L_46343b: /* 46343b: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 46343e: jmp 0x4626d6 */
  goto L_4626d6;
L_46346f: /* 46346f: cmp dword ptr [esi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 463473: jb 0x46347a */
  if (cf) goto L_46347a;
L_463475: /* 463475: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 463478: jmp 0x46347d */
  goto L_46347d;
L_46347a: /* 46347a: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
L_46347d: /* 46347d: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 463480: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 463481: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 463482: call 0x4617bb */
  esp -= 4; W32(esp, 0x463487u); SPILL(); hle_memcpy(); RELOAD();
/* 463487: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46348a: jmp 0x4626f0 */
  goto L_4626f0;
}

void f_46271a(void) {
  LOAD_REGS();
L_46271a: /* 46271a: mov ecx, 0x4d0639 */
  ecx = 0x4d0639u;
/* 46271f: mov edx, dword ptr [0x4d08dc] */
  edx = R32((uint32_t)(0x4d08dcu));
/* 462725: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462726: mov eax, ecx */
  eax = ecx;
/* 462728: mov ecx, dword ptr [0x4d063c] */
  ecx = R32((uint32_t)(0x4d063cu));
/* 46272e: mov esi, 0x4d063c */
  esi = 0x4d063cu;
/* 462733: mov dword ptr [0x4d08e0], esi */
  W32((uint32_t)(0x4d08e0u), esi);
/* 462739: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 46273c: mov dword ptr [ecx + 0x4d0668], edx */
  W32((uint32_t)(ecx + 0x4d0668u), edx);
/* 462742: mov ecx, dword ptr [0x4d063c] */
  ecx = R32((uint32_t)(0x4d063cu));
/* 462748: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 46274b: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 46274d: or dword ptr [edx + 0xc], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0xcu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edx + 0xcu), r);
  }
/* 462751: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 462752: ret  */
  esp += 4; SPILL(); return;
}

void f_462753(void) {
  LOAD_REGS();
L_462753: /* 462753: mov ecx, 0x4d06d8 */
  ecx = 0x4d06d8u;
/* 462758: call 0x462769 */
  esp -= 4; W32(esp, 0x46275du); SPILL(); f_462769(); if (g_unwind) return; RELOAD();
/* 46275d: push 0x4611ec */
  { uint32_t v = 0x4611ecu; esp -= 4; W32(esp, v); }
/* 462762: call 0x461586 */
  esp -= 4; W32(esp, 0x462767u); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 462767: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 462768: ret  */
  esp += 4; SPILL(); return;
}

void f_462769(void) {
  LOAD_REGS();
L_462769: /* 462769: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46276a: push 0x4d05b0 */
  { uint32_t v = 0x4d05b0u; esp -= 4; W32(esp, v); }
/* 46276f: mov edi, ecx */
  edi = ecx;
/* 462771: call dword ptr [0x48e030] */
  esp -= 4; W32(esp, 0x462777u); SPILL(); call_ind(R32(0x48e030u)); if (g_unwind) return; /* KERNEL32!InterlockedIncrement */ RELOAD();
/* 462777: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 462779: je 0x46277f */
  if (zf) goto L_46277f;
L_46277b: /* 46277b: mov eax, edi */
  eax = edi;
/* 46277d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46277e: ret  */
  esp += 4; SPILL(); return;
L_46277f: /* 46277f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462780: mov esi, 0x4d0e48 */
  esi = 0x4d0e48u;
L_462785: /* 462785: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462786: call 0x461ab6 */
  esp -= 4; W32(esp, 0x46278bu); SPILL(); f_461ab6(); if (g_unwind) return; RELOAD();
/* 46278b: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 46278e: cmp esi, 0x4d0ea8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4d0ea8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 462794: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 462795: jl 0x462785 */
  if ((sf != of)) goto L_462785;
L_462797: /* 462797: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 462798: jmp 0x46277b */
  goto L_46277b;
}

void f_46279a(void) {
  LOAD_REGS();
L_46279a: /* 46279a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 46279c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46279e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4627a0: push 0x4d0678 */
  { uint32_t v = 0x4d0678u; esp -= 4; W32(esp, v); }
/* 4627a5: mov ecx, 0x4d06dc */
  ecx = 0x4d06dcu;
/* 4627aa: call 0x4627bb */
  esp -= 4; W32(esp, 0x4627afu); SPILL(); f_4627bb(); if (g_unwind) return; RELOAD();
/* 4627af: push 0x4611d0 */
  { uint32_t v = 0x4611d0u; esp -= 4; W32(esp, v); }
/* 4627b4: call 0x461586 */
  esp -= 4; W32(esp, 0x4627b9u); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 4627b9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4627ba: ret  */
  esp += 4; SPILL(); return;
}

void f_4627bb(void) {
  LOAD_REGS();
L_4627bb: /* 4627bb: mov eax, 0x48c110 */
  eax = 0x48c110u;
/* 4627c0: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4627c5u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4627c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4627c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4627c7: xor eax, eax */
  eax = 0;
/* 4627c9: cmp dword ptr [ebp + 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4627cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4627cd: mov esi, ecx */
  esi = ecx;
/* 4627cf: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 4627d2: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 4627d5: je 0x4627f1 */
  if (zf) goto L_4627f1;
L_4627d7: /* 4627d7: mov dword ptr [esi], 0x48e234 */
  W32((uint32_t)(esi), 0x48e234u);
/* 4627dd: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 4627e0: mov dword ptr [esi + 8], 0x4c6d18 */
  W32((uint32_t)(esi + 0x8u), 0x4c6d18u);
/* 4627e7: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4627ea: mov dword ptr [ebp - 0x10], 1 */
  W32((uint32_t)(ebp + 0xfffffff0u), 0x1u);
L_4627f1: /* 4627f1: cmp byte ptr [ebp + 0x10], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4627f4: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4627f6: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4627f9: mov dword ptr [esi + ecx], 0x4c702c */
  W32((uint32_t)(esi + ecx), 0x4c702cu);
/* 462800: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 462803: jne 0x462817 */
  if (!zf) goto L_462817;
L_462805: /* 462805: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 462808: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46280a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46280d: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 462810: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 462812: call 0x4623d2 */
  esp -= 4; W32(esp, 0x462817u); SPILL(); f_4623d2(); if (g_unwind) return; RELOAD();
L_462817: /* 462817: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46281a: mov eax, esi */
  eax = esi;
/* 46281c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46281d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 462824: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 462825: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_462828(void) {
  LOAD_REGS();
L_462828: /* 462828: mov ecx, 0x4d06d9 */
  ecx = 0x4d06d9u;
/* 46282d: mov edx, dword ptr [0x4d08dc] */
  edx = R32((uint32_t)(0x4d08dcu));
/* 462833: mov eax, ecx */
  eax = ecx;
/* 462835: mov ecx, dword ptr [0x4d06dc] */
  ecx = R32((uint32_t)(0x4d06dcu));
/* 46283b: mov dword ptr [0x4d08d8], 0x4d06dc */
  W32((uint32_t)(0x4d08d8u), 0x4d06dcu);
/* 462845: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 462848: mov dword ptr [ecx + 0x4d0708], edx */
  W32((uint32_t)(ecx + 0x4d0708u), edx);
/* 46284e: ret  */
  esp += 4; SPILL(); return;
}

void f_46284f(void) {
  LOAD_REGS();
L_46284f: /* 46284f: mov ecx, 0x4d0779 */
  ecx = 0x4d0779u;
/* 462854: mov edx, dword ptr [0x4d08dc] */
  edx = R32((uint32_t)(0x4d08dcu));
/* 46285a: mov eax, ecx */
  eax = ecx;
/* 46285c: mov ecx, dword ptr [0x4d077c] */
  ecx = R32((uint32_t)(0x4d077cu));
/* 462862: mov dword ptr [0x4d08e4], 0x4d077c */
  W32((uint32_t)(0x4d08e4u), 0x4d077cu);
/* 46286c: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 46286f: mov dword ptr [ecx + 0x4d07a8], edx */
  W32((uint32_t)(ecx + 0x4d07a8u), edx);
/* 462875: ret  */
  esp += 4; SPILL(); return;
}

void f_462876(void) {
  LOAD_REGS();
L_462876: /* 462876: mov ecx, 0x4d0819 */
  ecx = 0x4d0819u;
/* 46287b: mov edx, dword ptr [0x4d08d8] */
  edx = R32((uint32_t)(0x4d08d8u));
/* 462881: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 462883: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462884: mov esi, 0x4d081c */
  esi = 0x4d081cu;
/* 462889: mov eax, ecx */
  eax = ecx;
/* 46288b: mov dword ptr [0x4d08dc], esi */
  W32((uint32_t)(0x4d08dcu), esi);
/* 462891: je 0x46289c */
  if (zf) goto L_46289c;
L_462893: /* 462893: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 462895: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 462898: mov dword ptr [ecx + edx + 0x2c], esi */
  W32((uint32_t)(ecx + edx + 0x2cu), esi);
L_46289c: /* 46289c: mov edx, dword ptr [0x4d08e0] */
  edx = R32((uint32_t)(0x4d08e0u));
/* 4628a2: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4628a4: je 0x4628b5 */
  if (zf) goto L_4628b5;
L_4628a6: /* 4628a6: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 4628a8: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4628ab: mov esi, dword ptr [0x4d08dc] */
  esi = R32((uint32_t)(0x4d08dcu));
/* 4628b1: mov dword ptr [ecx + edx + 0x2c], esi */
  W32((uint32_t)(ecx + edx + 0x2cu), esi);
L_4628b5: /* 4628b5: mov edx, dword ptr [0x4d08e4] */
  edx = R32((uint32_t)(0x4d08e4u));
/* 4628bb: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4628bd: je 0x4628ce */
  if (zf) goto L_4628ce;
L_4628bf: /* 4628bf: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 4628c1: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4628c4: mov esi, dword ptr [0x4d08dc] */
  esi = R32((uint32_t)(0x4d08dcu));
/* 4628ca: mov dword ptr [ecx + edx + 0x2c], esi */
  W32((uint32_t)(ecx + edx + 0x2cu), esi);
L_4628ce: /* 4628ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4628cf: ret  */
  esp += 4; SPILL(); return;
}

void f_4628d0(void) {
  LOAD_REGS();
L_4628d0: /* 4628d0: mov ecx, 0x4d0989 */
  ecx = 0x4d0989u;
/* 4628d5: mov edx, dword ptr [0x4d0ba8] */
  edx = R32((uint32_t)(0x4d0ba8u));
/* 4628db: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4628dc: mov eax, ecx */
  eax = ecx;
/* 4628de: mov ecx, dword ptr [0x4d098c] */
  ecx = R32((uint32_t)(0x4d098cu));
/* 4628e4: mov esi, 0x4d098c */
  esi = 0x4d098cu;
/* 4628e9: mov dword ptr [0x4d0bac], esi */
  W32((uint32_t)(0x4d0bacu), esi);
/* 4628ef: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4628f2: mov dword ptr [ecx + 0x4d09b8], edx */
  W32((uint32_t)(ecx + 0x4d09b8u), edx);
/* 4628f8: mov ecx, dword ptr [0x4d098c] */
  ecx = R32((uint32_t)(0x4d098cu));
/* 4628fe: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 462901: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 462903: or dword ptr [edx + 0xc], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0xcu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edx + 0xcu), r);
  }
/* 462907: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 462908: ret  */
  esp += 4; SPILL(); return;
}

void f_462909(void) {
  LOAD_REGS();
L_462909: /* 462909: mov ecx, 0x4d0a29 */
  ecx = 0x4d0a29u;
/* 46290e: mov edx, dword ptr [0x4d0ba4] */
  edx = R32((uint32_t)(0x4d0ba4u));
/* 462914: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 462916: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462917: mov esi, 0x4d0a2c */
  esi = 0x4d0a2cu;
/* 46291c: mov eax, ecx */
  eax = ecx;
/* 46291e: mov dword ptr [0x4d0ba8], esi */
  W32((uint32_t)(0x4d0ba8u), esi);
/* 462924: jne 0x463a86 */
  if (!zf) goto L_463a86;
L_46292a: /* 46292a: mov edx, dword ptr [0x4d0bac] */
  edx = R32((uint32_t)(0x4d0bacu));
/* 462930: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 462932: je 0x462943 */
  if (zf) goto L_462943;
L_462934: /* 462934: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 462936: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 462939: mov esi, dword ptr [0x4d0ba8] */
  esi = R32((uint32_t)(0x4d0ba8u));
/* 46293f: mov dword ptr [ecx + edx + 0x2c], esi */
  W32((uint32_t)(ecx + edx + 0x2cu), esi);
L_462943: /* 462943: mov edx, dword ptr [0x4d0bb0] */
  edx = R32((uint32_t)(0x4d0bb0u));
/* 462949: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46294b: jne 0x463a94 */
  if (!zf) goto L_463a94;
L_462951: /* 462951: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 462952: ret  */
  esp += 4; SPILL(); return;
L_463a86: /* 463a86: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 463a88: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 463a8b: mov dword ptr [ecx + edx + 0x2c], esi */
  W32((uint32_t)(ecx + edx + 0x2cu), esi);
/* 463a8f: jmp 0x46292a */
  goto L_46292a;
L_463a94: /* 463a94: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 463a96: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 463a99: mov esi, dword ptr [0x4d0ba8] */
  esi = R32((uint32_t)(0x4d0ba8u));
/* 463a9f: mov dword ptr [ecx + edx + 0x2c], esi */
  W32((uint32_t)(ecx + edx + 0x2cu), esi);
/* 463aa3: jmp 0x462951 */
  goto L_462951;
}

void f_462953(void) {
  LOAD_REGS();
L_462953: /* 462953: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 462955: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 462957: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 462959: push 0x4d0a68 */
  { uint32_t v = 0x4d0a68u; esp -= 4; W32(esp, v); }
/* 46295e: mov ecx, 0x4d0acc */
  ecx = 0x4d0accu;
/* 462963: call 0x462974 */
  esp -= 4; W32(esp, 0x462968u); SPILL(); f_462974(); if (g_unwind) return; RELOAD();
/* 462968: push 0x46118e */
  { uint32_t v = 0x46118eu; esp -= 4; W32(esp, v); }
/* 46296d: call 0x461586 */
  esp -= 4; W32(esp, 0x462972u); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 462972: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 462973: ret  */
  esp += 4; SPILL(); return;
}

void f_462974(void) {
  LOAD_REGS();
L_462974: /* 462974: mov eax, 0x48c1e2 */
  eax = 0x48c1e2u;
/* 462979: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46297eu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46297e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46297f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 462980: xor eax, eax */
  eax = 0;
/* 462982: cmp dword ptr [ebp + 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 462985: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462986: mov esi, ecx */
  esi = ecx;
/* 462988: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 46298b: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 46298e: je 0x4629aa */
  if (zf) goto L_4629aa;
L_462990: /* 462990: mov dword ptr [esi], 0x48e234 */
  W32((uint32_t)(esi), 0x48e234u);
/* 462996: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 462999: mov dword ptr [esi + 8], 0x4c762c */
  W32((uint32_t)(esi + 0x8u), 0x4c762cu);
/* 4629a0: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4629a3: mov dword ptr [ebp - 0x10], 1 */
  W32((uint32_t)(ebp + 0xfffffff0u), 0x1u);
L_4629aa: /* 4629aa: cmp byte ptr [ebp + 0x10], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4629ad: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4629af: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4629b2: mov dword ptr [esi + ecx], 0x4c7788 */
  W32((uint32_t)(esi + ecx), 0x4c7788u);
/* 4629b9: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4629bc: jne 0x4629d0 */
  if (!zf) goto L_4629d0;
L_4629be: /* 4629be: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4629c1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4629c3: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4629c6: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4629c9: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4629cb: call 0x461b45 */
  esp -= 4; W32(esp, 0x4629d0u); SPILL(); f_461b45(); if (g_unwind) return; RELOAD();
L_4629d0: /* 4629d0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4629d3: mov eax, esi */
  eax = esi;
/* 4629d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4629d6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4629dd: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4629de: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_4629e1(void) {
  LOAD_REGS();
L_4629e1: /* 4629e1: mov ecx, 0x4d0ac9 */
  ecx = 0x4d0ac9u;
/* 4629e6: mov edx, dword ptr [0x4d0ba8] */
  edx = R32((uint32_t)(0x4d0ba8u));
/* 4629ec: mov eax, ecx */
  eax = ecx;
/* 4629ee: mov ecx, dword ptr [0x4d0acc] */
  ecx = R32((uint32_t)(0x4d0accu));
/* 4629f4: mov dword ptr [0x4d0ba4], 0x4d0acc */
  W32((uint32_t)(0x4d0ba4u), 0x4d0accu);
/* 4629fe: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 462a01: mov dword ptr [ecx + 0x4d0af8], edx */
  W32((uint32_t)(ecx + 0x4d0af8u), edx);
/* 462a07: ret  */
  esp += 4; SPILL(); return;
}

void f_462a08(void) {
  LOAD_REGS();
L_462a08: /* 462a08: mov ecx, 0x4d0b69 */
  ecx = 0x4d0b69u;
/* 462a0d: mov edx, dword ptr [0x4d0ba8] */
  edx = R32((uint32_t)(0x4d0ba8u));
/* 462a13: mov eax, ecx */
  eax = ecx;
/* 462a15: mov ecx, dword ptr [0x4d0b6c] */
  ecx = R32((uint32_t)(0x4d0b6cu));
/* 462a1b: mov dword ptr [0x4d0bb0], 0x4d0b6c */
  W32((uint32_t)(0x4d0bb0u), 0x4d0b6cu);
/* 462a25: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 462a28: mov dword ptr [ecx + 0x4d0b98], edx */
  W32((uint32_t)(ecx + 0x4d0b98u), edx);
/* 462a2e: ret  */
  esp += 4; SPILL(); return;
}

void f_462a2f(void) {
  LOAD_REGS();
L_462a2f: /* 462a2f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 462a31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 462a33: push 0x4d0bb8 */
  { uint32_t v = 0x4d0bb8u; esp -= 4; W32(esp, v); }
/* 462a38: mov ecx, 0x4d0c1c */
  ecx = 0x4d0c1cu;
/* 462a3d: call 0x462a4e */
  esp -= 4; W32(esp, 0x462a42u); SPILL(); f_462a4e(); if (g_unwind) return; RELOAD();
/* 462a42: push 0x461168 */
  { uint32_t v = 0x461168u; esp -= 4; W32(esp, v); }
/* 462a47: call 0x461586 */
  esp -= 4; W32(esp, 0x462a4cu); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 462a4c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 462a4d: ret  */
  esp += 4; SPILL(); return;
}

void f_462a4e(void) {
  LOAD_REGS();
L_462a4e: /* 462a4e: mov eax, 0x48c162 */
  eax = 0x48c162u;
/* 462a53: call 0x4616c0 */
  esp -= 4; W32(esp, 0x462a58u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 462a58: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 462a59: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 462a5a: xor eax, eax */
  eax = 0;
/* 462a5c: cmp dword ptr [ebp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 462a5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462a60: mov esi, ecx */
  esi = ecx;
/* 462a62: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 462a65: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 462a68: je 0x462a84 */
  if (zf) goto L_462a84;
L_462a6a: /* 462a6a: mov dword ptr [esi], 0x48e22c */
  W32((uint32_t)(esi), 0x48e22cu);
/* 462a70: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 462a73: mov dword ptr [esi + 4], 0x4c75d8 */
  W32((uint32_t)(esi + 0x4u), 0x4c75d8u);
/* 462a7a: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 462a7d: mov dword ptr [ebp - 0x10], 1 */
  W32((uint32_t)(ebp + 0xfffffff0u), 0x1u);
L_462a84: /* 462a84: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 462a86: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 462a89: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 462a8c: mov dword ptr [esi + eax], 0x4c7680 */
  W32((uint32_t)(esi + eax), 0x4c7680u);
/* 462a93: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 462a95: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 462a98: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 462a9b: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 462a9d: call 0x461b45 */
  esp -= 4; W32(esp, 0x462aa2u); SPILL(); f_461b45(); if (g_unwind) return; RELOAD();
/* 462aa2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 462aa5: mov eax, esi */
  eax = esi;
/* 462aa7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 462aa8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 462aaf: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 462ab0: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_462ab3(void) {
  LOAD_REGS();
L_462ab3: /* 462ab3: mov ecx, 0x4d0c19 */
  ecx = 0x4d0c19u;
/* 462ab8: mov edx, dword ptr [0x4d08ec] */
  edx = R32((uint32_t)(0x4d08ecu));
/* 462abe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462abf: mov eax, ecx */
  eax = ecx;
/* 462ac1: mov ecx, dword ptr [0x4d0c1c] */
  ecx = R32((uint32_t)(0x4d0c1cu));
/* 462ac7: mov esi, 0x4d0c1c */
  esi = 0x4d0c1cu;
/* 462acc: mov dword ptr [0x4d08f0], esi */
  W32((uint32_t)(0x4d08f0u), esi);
/* 462ad2: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 462ad5: mov dword ptr [ecx + 0x4d0c48], edx */
  W32((uint32_t)(ecx + 0x4d0c48u), edx);
/* 462adb: mov ecx, dword ptr [0x4d0c1c] */
  ecx = R32((uint32_t)(0x4d0c1cu));
/* 462ae1: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 462ae4: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 462ae6: or dword ptr [edx + 0xc], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0xcu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edx + 0xcu), r);
  }
/* 462aea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 462aeb: ret  */
  esp += 4; SPILL(); return;
}

void f_462aec(void) {
  LOAD_REGS();
L_462aec: /* 462aec: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 462aee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 462af0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 462af2: push 0x4d0c58 */
  { uint32_t v = 0x4d0c58u; esp -= 4; W32(esp, v); }
/* 462af7: mov ecx, 0x4d0cbc */
  ecx = 0x4d0cbcu;
/* 462afc: call 0x462b0d */
  esp -= 4; W32(esp, 0x462b01u); SPILL(); f_462b0d(); if (g_unwind) return; RELOAD();
/* 462b01: push 0x46114c */
  { uint32_t v = 0x46114cu; esp -= 4; W32(esp, v); }
/* 462b06: call 0x461586 */
  esp -= 4; W32(esp, 0x462b0bu); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 462b0b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 462b0c: ret  */
  esp += 4; SPILL(); return;
}

void f_462b0d(void) {
  LOAD_REGS();
L_462b0d: /* 462b0d: mov eax, 0x48c1c2 */
  eax = 0x48c1c2u;
/* 462b12: call 0x4616c0 */
  esp -= 4; W32(esp, 0x462b17u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 462b17: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 462b18: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 462b19: xor eax, eax */
  eax = 0;
/* 462b1b: cmp dword ptr [ebp + 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 462b1e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462b1f: mov esi, ecx */
  esi = ecx;
/* 462b21: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 462b24: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 462b27: je 0x462b43 */
  if (zf) goto L_462b43;
L_462b29: /* 462b29: mov dword ptr [esi], 0x48e234 */
  W32((uint32_t)(esi), 0x48e234u);
/* 462b2f: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 462b32: mov dword ptr [esi + 8], 0x4c75d8 */
  W32((uint32_t)(esi + 0x8u), 0x4c75d8u);
/* 462b39: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 462b3c: mov dword ptr [ebp - 0x10], 1 */
  W32((uint32_t)(ebp + 0xfffffff0u), 0x1u);
L_462b43: /* 462b43: cmp byte ptr [ebp + 0x10], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 462b46: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 462b48: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 462b4b: mov dword ptr [esi + ecx], 0x4c7730 */
  W32((uint32_t)(esi + ecx), 0x4c7730u);
/* 462b52: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 462b55: jne 0x462b69 */
  if (!zf) goto L_462b69;
L_462b57: /* 462b57: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 462b5a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 462b5c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 462b5f: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 462b62: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 462b64: call 0x461b45 */
  esp -= 4; W32(esp, 0x462b69u); SPILL(); f_461b45(); if (g_unwind) return; RELOAD();
L_462b69: /* 462b69: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 462b6c: mov eax, esi */
  eax = esi;
/* 462b6e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 462b6f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 462b76: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 462b77: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_462b7a(void) {
  LOAD_REGS();
L_462b7a: /* 462b7a: mov ecx, 0x4d0cb9 */
  ecx = 0x4d0cb9u;
/* 462b7f: mov edx, dword ptr [0x4d08ec] */
  edx = R32((uint32_t)(0x4d08ecu));
/* 462b85: mov eax, ecx */
  eax = ecx;
/* 462b87: mov ecx, dword ptr [0x4d0cbc] */
  ecx = R32((uint32_t)(0x4d0cbcu));
/* 462b8d: mov dword ptr [0x4d08e8], 0x4d0cbc */
  W32((uint32_t)(0x4d08e8u), 0x4d0cbcu);
/* 462b97: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 462b9a: mov dword ptr [ecx + 0x4d0ce8], edx */
  W32((uint32_t)(ecx + 0x4d0ce8u), edx);
/* 462ba0: ret  */
  esp += 4; SPILL(); return;
}

void f_462ba1(void) {
  LOAD_REGS();
L_462ba1: /* 462ba1: mov ecx, 0x4d0d59 */
  ecx = 0x4d0d59u;
/* 462ba6: mov edx, dword ptr [0x4d08ec] */
  edx = R32((uint32_t)(0x4d08ecu));
/* 462bac: mov eax, ecx */
  eax = ecx;
/* 462bae: mov ecx, dword ptr [0x4d0d5c] */
  ecx = R32((uint32_t)(0x4d0d5cu));
/* 462bb4: mov dword ptr [0x4d08f4], 0x4d0d5c */
  W32((uint32_t)(0x4d08f4u), 0x4d0d5cu);
/* 462bbe: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 462bc1: mov dword ptr [ecx + 0x4d0d88], edx */
  W32((uint32_t)(ecx + 0x4d0d88u), edx);
/* 462bc7: ret  */
  esp += 4; SPILL(); return;
}

void f_462bc8(void) {
  LOAD_REGS();
L_462bc8: /* 462bc8: mov ecx, 0x4d0df9 */
  ecx = 0x4d0df9u;
/* 462bcd: mov edx, dword ptr [0x4d08e8] */
  edx = R32((uint32_t)(0x4d08e8u));
/* 462bd3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 462bd5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462bd6: mov esi, 0x4d0dfc */
  esi = 0x4d0dfcu;
/* 462bdb: mov eax, ecx */
  eax = ecx;
/* 462bdd: mov dword ptr [0x4d08ec], esi */
  W32((uint32_t)(0x4d08ecu), esi);
/* 462be3: je 0x462bee */
  if (zf) goto L_462bee;
L_462be5: /* 462be5: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 462be7: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 462bea: mov dword ptr [ecx + edx + 0x2c], esi */
  W32((uint32_t)(ecx + edx + 0x2cu), esi);
L_462bee: /* 462bee: mov edx, dword ptr [0x4d08f0] */
  edx = R32((uint32_t)(0x4d08f0u));
/* 462bf4: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 462bf6: je 0x462c07 */
  if (zf) goto L_462c07;
L_462bf8: /* 462bf8: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 462bfa: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 462bfd: mov esi, dword ptr [0x4d08ec] */
  esi = R32((uint32_t)(0x4d08ecu));
/* 462c03: mov dword ptr [ecx + edx + 0x2c], esi */
  W32((uint32_t)(ecx + edx + 0x2cu), esi);
L_462c07: /* 462c07: mov edx, dword ptr [0x4d08f4] */
  edx = R32((uint32_t)(0x4d08f4u));
/* 462c0d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 462c0f: je 0x462c20 */
  if (zf) goto L_462c20;
L_462c11: /* 462c11: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 462c13: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 462c16: mov esi, dword ptr [0x4d08ec] */
  esi = R32((uint32_t)(0x4d08ecu));
/* 462c1c: mov dword ptr [ecx + edx + 0x2c], esi */
  W32((uint32_t)(ecx + edx + 0x2cu), esi);
L_462c20: /* 462c20: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 462c21: ret  */
  esp += 4; SPILL(); return;
}

void f_462c22(void) {
  LOAD_REGS();
L_462c22: /* 462c22: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462c23: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 462c25: mov esi, ecx */
  esi = ecx;
/* 462c27: call 0x4624b0 */
  esp -= 4; W32(esp, 0x462c2cu); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 462c2c: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 462c30: mov ecx, esi */
  ecx = esi;
/* 462c32: call 0x462c3d */
  esp -= 4; W32(esp, 0x462c37u); SPILL(); f_462c3d(); if (g_unwind) return; RELOAD();
/* 462c37: mov eax, esi */
  eax = esi;
/* 462c39: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 462c3a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_462c3d(void) {
  LOAD_REGS();
L_462c3d: /* 462c3d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462c3e: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 462c42: mov esi, ecx */
  esi = ecx;
/* 462c44: call dword ptr [0x48e1a4] */
  esp -= 4; W32(esp, 0x462c4au); SPILL(); f_4013b8(); if (g_unwind) return; /* MSVCR70!wcslen */ RELOAD();
/* 462c4a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 462c4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 462c4c: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 462c50: mov ecx, esi */
  ecx = esi;
/* 462c52: call 0x462c5b */
  esp -= 4; W32(esp, 0x462c57u); SPILL(); f_462c5b(); if (g_unwind) return; RELOAD();
/* 462c57: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 462c58: ret 4 */
  esp += 8; SPILL(); return;
}

void f_462c5b(void) {
  LOAD_REGS();
L_462c5b: /* 462c5b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 462c5c: mov ebp, esp */
  ebp = esp;
/* 462c5e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462c5f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 462c60: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 462c63: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 462c64: mov esi, ecx */
  esi = ecx;
/* 462c66: call 0x461078 */
  esp -= 4; W32(esp, 0x462c6bu); SPILL(); f_461078(); if (g_unwind) return; RELOAD();
/* 462c6b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 462c6d: jne 0x4638e4 */
  if (!zf) goto L_4638e4;
L_462c73: /* 462c73: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 462c75: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 462c78: mov ecx, esi */
  ecx = esi;
/* 462c7a: call 0x462402 */
  esp -= 4; W32(esp, 0x462c7fu); SPILL(); f_462402(); if (g_unwind) return; RELOAD();
/* 462c7f: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 462c81: je 0x462ca3 */
  if (zf) goto L_462ca3;
L_462c83: /* 462c83: cmp dword ptr [esi + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 462c87: jb 0x462cab */
  if (cf) goto L_462cab;
L_462c89: /* 462c89: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
L_462c8c: /* 462c8c: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 462c8f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 462c90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 462c91: call 0x462cb0 */
  esp -= 4; W32(esp, 0x462c96u); SPILL(); f_462cb0(); if (g_unwind) return; RELOAD();
/* 462c96: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 462c99: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 462c9c: mov ecx, esi */
  ecx = esi;
/* 462c9e: call 0x4624dd */
  esp -= 4; W32(esp, 0x462ca3u); SPILL(); f_4624dd(); if (g_unwind) return; RELOAD();
L_462ca3: /* 462ca3: mov eax, esi */
  eax = esi;
L_462ca5: /* 462ca5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 462ca6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 462ca7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 462ca8: ret 8 */
  esp += 12; SPILL(); return;
L_462cab: /* 462cab: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 462cae: jmp 0x462c8c */
  goto L_462c8c;
L_4638e4: /* 4638e4: cmp dword ptr [esi + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4638e8: jb 0x4638ef */
  if (cf) goto L_4638ef;
L_4638ea: /* 4638ea: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4638ed: jmp 0x4638f2 */
  goto L_4638f2;
L_4638ef: /* 4638ef: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
L_4638f2: /* 4638f2: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4638f5: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 4638f7: sar edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 4638f9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4638fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4638fb: mov ecx, esi */
  ecx = esi;
/* 4638fd: call 0x47a171 */
  esp -= 4; W32(esp, 0x463902u); SPILL(); f_47a171(); if (g_unwind) return; RELOAD();
/* 463902: jmp 0x462ca5 */
  goto L_462ca5;
}

void f_462cb0(void) {
  LOAD_REGS();
L_462cb0: /* 462cb0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 462cb4: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 462cb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 462cb7: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 462cbb: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 462cbf: call 0x4617bb */
  esp -= 4; W32(esp, 0x462cc4u); SPILL(); hle_memcpy(); RELOAD();
/* 462cc4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 462cc7: ret  */
  esp += 4; SPILL(); return;
}

void f_462cc8(void) {
  LOAD_REGS();
L_462cc8: /* 462cc8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462cc9: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 462ccd: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 462ccf: mov ecx, esi */
  ecx = esi;
/* 462cd1: call 0x462ce1 */
  esp -= 4; W32(esp, 0x462cd6u); SPILL(); f_462ce1(); if (g_unwind) return; RELOAD();
/* 462cd6: mov ecx, esi */
  ecx = esi;
/* 462cd8: call 0x461419 */
  esp -= 4; W32(esp, 0x462cddu); SPILL(); f_461419(); if (g_unwind) return; RELOAD();
/* 462cdd: mov eax, esi */
  eax = esi;
/* 462cdf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 462ce0: ret  */
  esp += 4; SPILL(); return;
}

void f_462ce1(void) {
  LOAD_REGS();
L_462ce1: /* 462ce1: mov eax, 0x48c089 */
  eax = 0x48c089u;
/* 462ce6: call 0x4616c0 */
  esp -= 4; W32(esp, 0x462cebu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 462ceb: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 462cee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 462cef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462cf0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 462cf1: mov esi, ecx */
  esi = ecx;
/* 462cf3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 462cf6: xor ebx, ebx */
  ebx = 0;
/* 462cf8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462cf9: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 462cfc: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 462cff: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 462d02: call 0x462178 */
  esp -= 4; W32(esp, 0x462d07u); SPILL(); f_462178(); if (g_unwind) return; RELOAD();
/* 462d07: cmp byte ptr [ebp - 0x1c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 462d0a: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 462d0d: je 0x462d5c */
  if (zf) goto L_462d5c;
L_462d0f: /* 462d0f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 462d11: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 462d14: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 462d17: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 462d1b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 462d1f: call 0x4619f2 */
  esp -= 4; W32(esp, 0x462d24u); SPILL(); f_4619f2(); if (g_unwind) return; RELOAD();
/* 462d24: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 462d28: je 0x462d5c */
  if (zf) goto L_462d5c;
L_462d2a: /* 462d2a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 462d2c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 462d2f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 462d30: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 462d33: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 462d35: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 462d38: call 0x461453 */
  esp -= 4; W32(esp, 0x462d3du); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 462d3d: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 462d41: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 462d44: call 0x462246 */
  esp -= 4; W32(esp, 0x462d49u); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 462d49: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 462d4c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 462d4d: mov eax, esi */
  eax = esi;
/* 462d4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 462d50: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 462d57: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 462d58: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 462d59: ret 4 */
  esp += 8; SPILL(); return;
L_462d5c: /* 462d5c: mov dword ptr [ebp - 0x14], 4 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x4u);
/* 462d63: jmp 0x462d2a */
  goto L_462d2a;
}

void f_462d5c(void) {
  LOAD_REGS();
  goto L_462d5c;
L_462d2a: /* 462d2a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 462d2c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 462d2f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 462d30: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 462d33: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 462d35: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 462d38: call 0x461453 */
  esp -= 4; W32(esp, 0x462d3du); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 462d3d: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 462d41: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 462d44: call 0x462246 */
  esp -= 4; W32(esp, 0x462d49u); SPILL(); f_462246(); if (g_unwind) return; RELOAD();
/* 462d49: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 462d4c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 462d4d: mov eax, esi */
  eax = esi;
/* 462d4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 462d50: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 462d57: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 462d58: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 462d59: ret 4 */
  esp += 8; SPILL(); return;
L_462d5c: /* 462d5c: mov dword ptr [ebp - 0x14], 4 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x4u);
/* 462d63: jmp 0x462d2a */
  goto L_462d2a;
}

void f_462d65(void) {
  LOAD_REGS();
L_462d65: /* 462d65: mov ecx, 0x4d0ea8 */
  ecx = 0x4d0ea8u;
/* 462d6a: call 0x462769 */
  esp -= 4; W32(esp, 0x462d6fu); SPILL(); f_462769(); if (g_unwind) return; RELOAD();
/* 462d6f: push 0x462d7b */
  { uint32_t v = 0x462d7bu; esp -= 4; W32(esp, v); }
/* 462d74: call 0x461586 */
  esp -= 4; W32(esp, 0x462d79u); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 462d79: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 462d7a: ret  */
  esp += 4; SPILL(); return;
}

void f_462d7b(void) {
  LOAD_REGS();
L_462d7b: /* 462d7b: mov ecx, 0x4d0ea8 */
  ecx = 0x4d0ea8u;
/* 462d80: push 0x4d05b0 */
  { uint32_t v = 0x4d05b0u; esp -= 4; W32(esp, v); }
/* 462d85: call dword ptr [0x48e034] */
  esp -= 4; W32(esp, 0x462d8bu); SPILL(); call_ind(R32(0x48e034u)); if (g_unwind) return; /* KERNEL32!InterlockedDecrement */ RELOAD();
/* 462d8b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 462d8d: jl 0x462d90 */
  if ((sf != of)) goto L_462d90;
L_462d8f: /* 462d8f: ret  */
  esp += 4; SPILL(); return;
L_462d90: /* 462d90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462d91: mov esi, 0x4d0e48 */
  esi = 0x4d0e48u;
L_462d96: /* 462d96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462d97: call 0x461d64 */
  esp -= 4; W32(esp, 0x462d9cu); SPILL(); f_461d64(); if (g_unwind) return; RELOAD();
/* 462d9c: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 462d9f: cmp esi, 0x4d0ea8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4d0ea8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 462da5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 462da6: jl 0x462d96 */
  if ((sf != of)) goto L_462d96;
L_462da8: /* 462da8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 462da9: jmp 0x462d8f */
  goto L_462d8f;
}

void f_462dab(void) {
  LOAD_REGS();
L_462dab: /* 462dab: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 462dad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 462daf: push 0x4d0b08 */
  { uint32_t v = 0x4d0b08u; esp -= 4; W32(esp, v); }
/* 462db4: mov ecx, 0x4d0b6c */
  ecx = 0x4d0b6cu;
/* 462db9: call 0x461ae0 */
  esp -= 4; W32(esp, 0x462dbeu); SPILL(); f_461ae0(); if (g_unwind) return; RELOAD();
/* 462dbe: push 0x462dca */
  { uint32_t v = 0x462dcau; esp -= 4; W32(esp, v); }
/* 462dc3: call 0x461586 */
  esp -= 4; W32(esp, 0x462dc8u); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 462dc8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 462dc9: ret  */
  esp += 4; SPILL(); return;
}

void f_462dca(void) {
  LOAD_REGS();
L_462dca: /* 462dca: mov eax, dword ptr [0x4d0b6c] */
  eax = R32((uint32_t)(0x4d0b6cu));
/* 462dcf: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 462dd2: mov dword ptr [eax + 0x4d0b6c], 0x4c76d8 */
  W32((uint32_t)(eax + 0x4d0b6cu), 0x4c76d8u);
/* 462ddc: mov ecx, 0x4d0b70 */
  ecx = 0x4d0b70u;
  SPILL(); f_462de1(); return;
}

void f_462de1(void) {
  LOAD_REGS();
L_462de1: /* 462de1: mov dword ptr [ecx], 0x4c762c */
  W32((uint32_t)(ecx), 0x4c762cu);
/* 462de7: jmp 0x461c33 */
  SPILL(); f_461c33(); return;
}

void f_462dec(void) {
  LOAD_REGS();
L_462dec: /* 462dec: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 462ded: mov ebp, esp */
  ebp = esp;
/* 462def: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 462df0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 462df2: lea ecx, [ebp - 4] */
  ecx = (uint32_t)(ebp + 0xfffffffcu);
/* 462df5: call 0x4612ba */
  esp -= 4; W32(esp, 0x462dfau); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 462dfa: push 0x4d0e34 */
  { uint32_t v = 0x4d0e34u; esp -= 4; W32(esp, v); }
/* 462dff: call 0x462e0f */
  esp -= 4; W32(esp, 0x462e04u); SPILL(); f_462e0f(); if (g_unwind) return; RELOAD();
/* 462e04: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 462e05: lea ecx, [ebp - 4] */
  ecx = (uint32_t)(ebp + 0xfffffffcu);
/* 462e08: call 0x4613d8 */
  esp -= 4; W32(esp, 0x462e0du); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 462e0d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 462e0e: ret  */
  esp += 4; SPILL(); return;
}

void f_462e0f(void) {
  LOAD_REGS();
L_462e0f: /* 462e0f: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 462e13: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 462e15: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 462e17: je 0x462e26 */
  if (zf) goto L_462e26;
L_462e19: /* 462e19: call 0x46139d */
  esp -= 4; W32(esp, 0x462e1eu); SPILL(); f_46139d(); if (g_unwind) return; RELOAD();
/* 462e1e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 462e20: jne 0x463bc1 */
  if (!zf) goto L_463bc1;
L_462e26: /* 462e26: ret  */
  esp += 4; SPILL(); return;
L_463bc1: /* 463bc1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 463bc3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 463bc5: mov ecx, eax */
  ecx = eax;
/* 463bc7: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x463bc9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 463bc9: jmp 0x462e26 */
  goto L_462e26;
}

void f_462e27(void) {
  LOAD_REGS();
L_462e27: /* 462e27: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 462e29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 462e2b: push 0x4d07b8 */
  { uint32_t v = 0x4d07b8u; esp -= 4; W32(esp, v); }
/* 462e30: mov ecx, 0x4d081c */
  ecx = 0x4d081cu;
/* 462e35: call 0x46236d */
  esp -= 4; W32(esp, 0x462e3au); SPILL(); f_46236d(); if (g_unwind) return; RELOAD();
/* 462e3a: push 0x462e46 */
  { uint32_t v = 0x462e46u; esp -= 4; W32(esp, v); }
/* 462e3f: call 0x461586 */
  esp -= 4; W32(esp, 0x462e44u); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 462e44: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 462e45: ret  */
  esp += 4; SPILL(); return;
}

void f_462e46(void) {
  LOAD_REGS();
L_462e46: /* 462e46: mov eax, dword ptr [0x4d081c] */
  eax = R32((uint32_t)(0x4d081cu));
/* 462e4b: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 462e4e: mov dword ptr [eax + 0x4d081c], 0x4c6cc0 */
  W32((uint32_t)(eax + 0x4d081cu), 0x4c6cc0u);
/* 462e58: mov ecx, 0x4d0820 */
  ecx = 0x4d0820u;
  SPILL(); f_462e5d(); return;
}

void f_462e5d(void) {
  LOAD_REGS();
L_462e5d: /* 462e5d: mov dword ptr [ecx], 0x4c6d18 */
  W32((uint32_t)(ecx), 0x4c6d18u);
/* 462e63: jmp 0x461c33 */
  SPILL(); f_461c33(); return;
}

void f_462e75(void) {
  LOAD_REGS();
L_462e75: /* 462e75: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462e76: mov esi, ecx */
  esi = ecx;
/* 462e78: call 0x462e91 */
  esp -= 4; W32(esp, 0x462e7du); SPILL(); f_462e91(); if (g_unwind) return; RELOAD();
/* 462e7d: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 462e82: je 0x462e8b */
  if (zf) goto L_462e8b;
L_462e84: /* 462e84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462e85: call 0x461c65 */
  esp -= 4; W32(esp, 0x462e8au); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 462e8a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_462e8b: /* 462e8b: mov eax, esi */
  eax = esi;
/* 462e8d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 462e8e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_462e91(void) {
  LOAD_REGS();
L_462e91: /* 462e91: mov eax, 0x48dcdb */
  eax = 0x48dcdbu;
/* 462e96: call 0x4616c0 */
  esp -= 4; W32(esp, 0x462e9bu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 462e9b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 462e9c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 462e9d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462e9e: mov esi, ecx */
  esi = ecx;
/* 462ea0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 462ea1: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 462ea4: mov dword ptr [esi], 0x4c8bc8 */
  W32((uint32_t)(esi), 0x4c8bc8u);
/* 462eaa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 462eac: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 462eaf: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 462eb6: call 0x4612ba */
  esp -= 4; W32(esp, 0x462ebbu); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 462ebb: mov edi, dword ptr [esi + 0xc] */
  edi = R32((uint32_t)(esi + 0xcu));
/* 462ebe: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
L_462ec2: /* 462ec2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 462ec4: ja 0x463bce */
  if ((!cf && !zf)) goto L_463bce;
L_462eca: /* 462eca: push dword ptr [esi + 8] */
  { uint32_t v = R32((uint32_t)(esi + 0x8u)); esp -= 4; W32(esp, v); }
/* 462ecd: call dword ptr [0x48e190] */
  esp -= 4; W32(esp, 0x462ed3u); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* 462ed3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 462ed4: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 462ed7: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 462edb: call 0x4613d8 */
  esp -= 4; W32(esp, 0x462ee0u); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 462ee0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 462ee2: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 462ee5: call 0x461ea8 */
  esp -= 4; W32(esp, 0x462eeau); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 462eea: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 462eed: mov dword ptr [esi], 0x4c6a70 */
  W32((uint32_t)(esi), 0x4c6a70u);
/* 462ef3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 462ef4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 462ef5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 462efc: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 462efd: ret  */
  esp += 4; SPILL(); return;
L_463bce: /* 463bce: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 463bd1: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 463bd2: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* 463bd5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 463bd7: je 0x462ec2 */
  if (zf) goto L_462ec2;
L_463bdd: /* 463bdd: call 0x46139d */
  esp -= 4; W32(esp, 0x463be2u); SPILL(); f_46139d(); if (g_unwind) return; RELOAD();
/* 463be2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 463be4: je 0x462ec2 */
  if (zf) goto L_462ec2;
L_463bea: /* 463bea: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 463bec: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 463bee: mov ecx, eax */
  ecx = eax;
/* 463bf0: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x463bf2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 463bf2: jmp 0x462ec2 */
  goto L_462ec2;
}

void f_462f3b(void) {
  LOAD_REGS();
L_462f3b: /* 462f3b: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 462f3d: push 0x48e428 */
  { uint32_t v = 0x48e428u; esp -= 4; W32(esp, v); }
/* 462f42: call 0x462f61 */
  esp -= 4; W32(esp, 0x462f47u); SPILL(); f_462f61(); if (g_unwind) return; RELOAD();
/* 462f47: mov dword ptr [ebp - 0x1c], 0x48e518 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x48e518u);
L_462f4e: /* 462f4e: cmp dword ptr [ebp - 0x1c], 0x48e518 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x48e518u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 462f55: jb 0x463d6c */
  if (cf) goto L_463d6c;
L_462f5b: /* 462f5b: call 0x4625b5 */
  esp -= 4; W32(esp, 0x462f60u); SPILL(); f_4625b5(); if (g_unwind) return; RELOAD();
/* 462f60: ret  */
  esp += 4; SPILL(); return;
L_463d6c: /* 463d6c: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 463d70: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 463d73: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 463d75: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 463d77: je 0x463d84 */
  if (zf) goto L_463d84;
L_463d79: /* 463d79: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x463d7bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 463d7b: jmp 0x463d84 */
  goto L_463d84;
L_463d84: /* 463d84: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 463d88: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 463d8c: jmp 0x462f4e */
  goto L_462f4e;
}

void f_462f61(void) {
  LOAD_REGS();
L_462f61: /* 462f61: push 0x48bf6e */
  { uint32_t v = 0x48bf6eu; esp -= 4; W32(esp, v); }
/* 462f66: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 462f6c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 462f6d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 462f71: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 462f75: lea ebp, [esp + 0x10] */
  ebp = (uint32_t)(esp + 0x10u);
/* 462f79: sub esp, eax */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 462f7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 462f7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462f7d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 462f7e: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 462f81: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 462f84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 462f85: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 462f88: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 462f8f: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 462f92: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 462f95: mov dword ptr fs:[0], eax */
  W32((uint32_t)(FS_BASE + 0x0u), eax);
/* 462f9b: ret  */
  esp += 4; SPILL(); return;
}

void f_462f9c(void) {
  LOAD_REGS();
L_462f9c: /* 462f9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462f9d: mov esi, ecx */
  esi = ecx;
/* 462f9f: cmp dword ptr [esi + 0x5c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x5cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 462fa3: je 0x462fc7 */
  if (zf) goto L_462fc7;
L_462fa5: /* 462fa5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 462fa7: push 0xffff */
  { uint32_t v = 0xffffu; esp -= 4; W32(esp, v); }
/* 462fac: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x462fafu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 462faf: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 462fb3: je 0x462fc7 */
  if (zf) goto L_462fc7;
L_462fb5: /* 462fb5: push dword ptr [esi + 0x5c] */
  { uint32_t v = R32((uint32_t)(esi + 0x5cu)); esp -= 4; W32(esp, v); }
/* 462fb8: call dword ptr [0x48e048] */
  esp -= 4; W32(esp, 0x462fbeu); SPILL(); f_413954(); if (g_unwind) return; /* MSVCR70!fflush */ RELOAD();
/* 462fbe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 462fc0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 462fc1: jl 0x4636bf */
  if ((sf != of)) goto L_4636bf;
L_462fc7: /* 462fc7: xor eax, eax */
  eax = 0;
/* 462fc9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 462fca: ret  */
  esp += 4; SPILL(); return;
L_4636bf: /* 4636bf: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4636c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4636c3: ret  */
  esp += 4; SPILL(); return;
}

void f_462fcb(void) {
  LOAD_REGS();
L_462fcb: /* 462fcb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 462fcd: call 0x4624b0 */
  esp -= 4; W32(esp, 0x462fd2u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 462fd2: ret  */
  esp += 4; SPILL(); return;
}

void f_462fd3(void) {
  LOAD_REGS();
L_462fd3: /* 462fd3: call dword ptr [0x48e074] */
  esp -= 4; W32(esp, 0x462fd9u); SPILL(); f_40f9d9(); if (g_unwind) return; /* MSVCR70!__iob_func */ RELOAD();
/* 462fd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 462fda: mov ecx, 0x4d0678 */
  ecx = 0x4d0678u;
/* 462fdf: call 0x4615e2 */
  esp -= 4; W32(esp, 0x462fe4u); SPILL(); f_4615e2(); if (g_unwind) return; RELOAD();
/* 462fe4: push 0x462ff0 */
  { uint32_t v = 0x462ff0u; esp -= 4; W32(esp, v); }
/* 462fe9: call 0x461586 */
  esp -= 4; W32(esp, 0x462feeu); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 462fee: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 462fef: ret  */
  esp += 4; SPILL(); return;
}

void f_462ff0(void) {
  LOAD_REGS();
L_462ff0: /* 462ff0: mov ecx, 0x4d0678 */
  ecx = 0x4d0678u;
/* 462ff5: jmp 0x4622d2 */
  SPILL(); f_4622d2(); return;
}

void f_462ffa(void) {
  LOAD_REGS();
L_462ffa: /* 462ffa: mov ecx, 0x4d0778 */
  ecx = 0x4d0778u;
/* 462fff: call 0x462769 */
  esp -= 4; W32(esp, 0x463004u); SPILL(); f_462769(); if (g_unwind) return; RELOAD();
/* 463004: push 0x463010 */
  { uint32_t v = 0x463010u; esp -= 4; W32(esp, v); }
/* 463009: call 0x461586 */
  esp -= 4; W32(esp, 0x46300eu); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 46300e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46300f: ret  */
  esp += 4; SPILL(); return;
}

void f_463010(void) {
  LOAD_REGS();
  goto L_463010;
L_462d80: /* 462d80: push 0x4d05b0 */
  { uint32_t v = 0x4d05b0u; esp -= 4; W32(esp, v); }
/* 462d85: call dword ptr [0x48e034] */
  esp -= 4; W32(esp, 0x462d8bu); SPILL(); call_ind(R32(0x48e034u)); if (g_unwind) return; /* KERNEL32!InterlockedDecrement */ RELOAD();
/* 462d8b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 462d8d: jl 0x462d90 */
  if ((sf != of)) goto L_462d90;
L_462d8f: /* 462d8f: ret  */
  esp += 4; SPILL(); return;
L_462d90: /* 462d90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462d91: mov esi, 0x4d0e48 */
  esi = 0x4d0e48u;
L_462d96: /* 462d96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462d97: call 0x461d64 */
  esp -= 4; W32(esp, 0x462d9cu); SPILL(); f_461d64(); if (g_unwind) return; RELOAD();
/* 462d9c: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 462d9f: cmp esi, 0x4d0ea8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4d0ea8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 462da5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 462da6: jl 0x462d96 */
  if ((sf != of)) goto L_462d96;
L_462da8: /* 462da8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 462da9: jmp 0x462d8f */
  goto L_462d8f;
L_463010: /* 463010: mov ecx, 0x4d0778 */
  ecx = 0x4d0778u;
/* 463015: jmp 0x462d80 */
  goto L_462d80;
}

void f_46301a(void) {
  LOAD_REGS();
L_46301a: /* 46301a: call dword ptr [0x48e074] */
  esp -= 4; W32(esp, 0x463020u); SPILL(); f_40f9d9(); if (g_unwind) return; /* MSVCR70!__iob_func */ RELOAD();
/* 463020: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 463023: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 463024: mov ecx, 0x4d0718 */
  ecx = 0x4d0718u;
/* 463029: call 0x4615e2 */
  esp -= 4; W32(esp, 0x46302eu); SPILL(); f_4615e2(); if (g_unwind) return; RELOAD();
/* 46302e: push 0x46303a */
  { uint32_t v = 0x46303au; esp -= 4; W32(esp, v); }
/* 463033: call 0x461586 */
  esp -= 4; W32(esp, 0x463038u); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 463038: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 463039: ret  */
  esp += 4; SPILL(); return;
}

void f_46303a(void) {
  LOAD_REGS();
L_46303a: /* 46303a: mov ecx, 0x4d0718 */
  ecx = 0x4d0718u;
/* 46303f: jmp 0x4622d2 */
  SPILL(); f_4622d2(); return;
}

void f_463044(void) {
  LOAD_REGS();
L_463044: /* 463044: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 463046: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 463048: push 0x4d0718 */
  { uint32_t v = 0x4d0718u; esp -= 4; W32(esp, v); }
/* 46304d: mov ecx, 0x4d077c */
  ecx = 0x4d077cu;
/* 463052: call 0x46236d */
  esp -= 4; W32(esp, 0x463057u); SPILL(); f_46236d(); if (g_unwind) return; RELOAD();
/* 463057: push 0x463063 */
  { uint32_t v = 0x463063u; esp -= 4; W32(esp, v); }
/* 46305c: call 0x461586 */
  esp -= 4; W32(esp, 0x463061u); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 463061: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 463062: ret  */
  esp += 4; SPILL(); return;
}

void f_463063(void) {
  LOAD_REGS();
L_463063: /* 463063: mov eax, dword ptr [0x4d077c] */
  eax = R32((uint32_t)(0x4d077cu));
/* 463068: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46306b: mov dword ptr [eax + 0x4d077c], 0x4c6cc0 */
  W32((uint32_t)(eax + 0x4d077cu), 0x4c6cc0u);
/* 463075: mov ecx, 0x4d0780 */
  ecx = 0x4d0780u;
/* 46307a: jmp 0x462e5d */
  SPILL(); f_462e5d(); return;
}

void f_46307f(void) {
  LOAD_REGS();
L_46307f: /* 46307f: mov ecx, 0x4d0818 */
  ecx = 0x4d0818u;
/* 463084: call 0x462769 */
  esp -= 4; W32(esp, 0x463089u); SPILL(); f_462769(); if (g_unwind) return; RELOAD();
/* 463089: push 0x463095 */
  { uint32_t v = 0x463095u; esp -= 4; W32(esp, v); }
/* 46308e: call 0x461586 */
  esp -= 4; W32(esp, 0x463093u); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 463093: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 463094: ret  */
  esp += 4; SPILL(); return;
}

void f_463095(void) {
  LOAD_REGS();
  goto L_463095;
L_462d80: /* 462d80: push 0x4d05b0 */
  { uint32_t v = 0x4d05b0u; esp -= 4; W32(esp, v); }
/* 462d85: call dword ptr [0x48e034] */
  esp -= 4; W32(esp, 0x462d8bu); SPILL(); call_ind(R32(0x48e034u)); if (g_unwind) return; /* KERNEL32!InterlockedDecrement */ RELOAD();
/* 462d8b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 462d8d: jl 0x462d90 */
  if ((sf != of)) goto L_462d90;
L_462d8f: /* 462d8f: ret  */
  esp += 4; SPILL(); return;
L_462d90: /* 462d90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462d91: mov esi, 0x4d0e48 */
  esi = 0x4d0e48u;
L_462d96: /* 462d96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462d97: call 0x461d64 */
  esp -= 4; W32(esp, 0x462d9cu); SPILL(); f_461d64(); if (g_unwind) return; RELOAD();
/* 462d9c: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 462d9f: cmp esi, 0x4d0ea8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4d0ea8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 462da5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 462da6: jl 0x462d96 */
  if ((sf != of)) goto L_462d96;
L_462da8: /* 462da8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 462da9: jmp 0x462d8f */
  goto L_462d8f;
L_463095: /* 463095: mov ecx, 0x4d0818 */
  ecx = 0x4d0818u;
/* 46309a: jmp 0x462d80 */
  goto L_462d80;
}

void f_46309f(void) {
  LOAD_REGS();
L_46309f: /* 46309f: mov ecx, 0x4d0920 */
  ecx = 0x4d0920u;
/* 4630a4: call 0x462769 */
  esp -= 4; W32(esp, 0x4630a9u); SPILL(); f_462769(); if (g_unwind) return; RELOAD();
/* 4630a9: push 0x4630b5 */
  { uint32_t v = 0x4630b5u; esp -= 4; W32(esp, v); }
/* 4630ae: call 0x461586 */
  esp -= 4; W32(esp, 0x4630b3u); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 4630b3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4630b4: ret  */
  esp += 4; SPILL(); return;
}

void f_4630b5(void) {
  LOAD_REGS();
  goto L_4630b5;
L_462d80: /* 462d80: push 0x4d05b0 */
  { uint32_t v = 0x4d05b0u; esp -= 4; W32(esp, v); }
/* 462d85: call dword ptr [0x48e034] */
  esp -= 4; W32(esp, 0x462d8bu); SPILL(); call_ind(R32(0x48e034u)); if (g_unwind) return; /* KERNEL32!InterlockedDecrement */ RELOAD();
/* 462d8b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 462d8d: jl 0x462d90 */
  if ((sf != of)) goto L_462d90;
L_462d8f: /* 462d8f: ret  */
  esp += 4; SPILL(); return;
L_462d90: /* 462d90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462d91: mov esi, 0x4d0e48 */
  esi = 0x4d0e48u;
L_462d96: /* 462d96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462d97: call 0x461d64 */
  esp -= 4; W32(esp, 0x462d9cu); SPILL(); f_461d64(); if (g_unwind) return; RELOAD();
/* 462d9c: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 462d9f: cmp esi, 0x4d0ea8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4d0ea8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 462da5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 462da6: jl 0x462d96 */
  if ((sf != of)) goto L_462d96;
L_462da8: /* 462da8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 462da9: jmp 0x462d8f */
  goto L_462d8f;
L_4630b5: /* 4630b5: mov ecx, 0x4d0920 */
  ecx = 0x4d0920u;
/* 4630ba: jmp 0x462d80 */
  goto L_462d80;
}

void f_4630bf(void) {
  LOAD_REGS();
L_4630bf: /* 4630bf: push 0x4630cb */
  { uint32_t v = 0x4630cbu; esp -= 4; W32(esp, v); }
/* 4630c4: call 0x461586 */
  esp -= 4; W32(esp, 0x4630c9u); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 4630c9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4630ca: ret  */
  esp += 4; SPILL(); return;
}

void f_4630cb(void) {
  LOAD_REGS();
L_4630cb: /* 4630cb: mov ecx, 0x4d0921 */
  ecx = 0x4d0921u;
/* 4630d0: jmp 0x463317 */
  SPILL(); f_463317(); return;
}

void f_4630d5(void) {
  LOAD_REGS();
L_4630d5: /* 4630d5: mov ecx, 0x4d0988 */
  ecx = 0x4d0988u;
/* 4630da: call 0x462769 */
  esp -= 4; W32(esp, 0x4630dfu); SPILL(); f_462769(); if (g_unwind) return; RELOAD();
/* 4630df: push 0x4630eb */
  { uint32_t v = 0x4630ebu; esp -= 4; W32(esp, v); }
/* 4630e4: call 0x461586 */
  esp -= 4; W32(esp, 0x4630e9u); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 4630e9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4630ea: ret  */
  esp += 4; SPILL(); return;
}

void f_4630eb(void) {
  LOAD_REGS();
  goto L_4630eb;
L_462d80: /* 462d80: push 0x4d05b0 */
  { uint32_t v = 0x4d05b0u; esp -= 4; W32(esp, v); }
/* 462d85: call dword ptr [0x48e034] */
  esp -= 4; W32(esp, 0x462d8bu); SPILL(); call_ind(R32(0x48e034u)); if (g_unwind) return; /* KERNEL32!InterlockedDecrement */ RELOAD();
/* 462d8b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 462d8d: jl 0x462d90 */
  if ((sf != of)) goto L_462d90;
L_462d8f: /* 462d8f: ret  */
  esp += 4; SPILL(); return;
L_462d90: /* 462d90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462d91: mov esi, 0x4d0e48 */
  esi = 0x4d0e48u;
L_462d96: /* 462d96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462d97: call 0x461d64 */
  esp -= 4; W32(esp, 0x462d9cu); SPILL(); f_461d64(); if (g_unwind) return; RELOAD();
/* 462d9c: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 462d9f: cmp esi, 0x4d0ea8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4d0ea8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 462da5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 462da6: jl 0x462d96 */
  if ((sf != of)) goto L_462d96;
L_462da8: /* 462da8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 462da9: jmp 0x462d8f */
  goto L_462d8f;
L_4630eb: /* 4630eb: mov ecx, 0x4d0988 */
  ecx = 0x4d0988u;
/* 4630f0: jmp 0x462d80 */
  goto L_462d80;
}

void f_4630f5(void) {
  LOAD_REGS();
L_4630f5: /* 4630f5: mov ecx, 0x4d0a28 */
  ecx = 0x4d0a28u;
/* 4630fa: call 0x462769 */
  esp -= 4; W32(esp, 0x4630ffu); SPILL(); f_462769(); if (g_unwind) return; RELOAD();
/* 4630ff: push 0x46310b */
  { uint32_t v = 0x46310bu; esp -= 4; W32(esp, v); }
/* 463104: call 0x461586 */
  esp -= 4; W32(esp, 0x463109u); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 463109: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46310a: ret  */
  esp += 4; SPILL(); return;
}

void f_46310b(void) {
  LOAD_REGS();
  goto L_46310b;
L_462d80: /* 462d80: push 0x4d05b0 */
  { uint32_t v = 0x4d05b0u; esp -= 4; W32(esp, v); }
/* 462d85: call dword ptr [0x48e034] */
  esp -= 4; W32(esp, 0x462d8bu); SPILL(); call_ind(R32(0x48e034u)); if (g_unwind) return; /* KERNEL32!InterlockedDecrement */ RELOAD();
/* 462d8b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 462d8d: jl 0x462d90 */
  if ((sf != of)) goto L_462d90;
L_462d8f: /* 462d8f: ret  */
  esp += 4; SPILL(); return;
L_462d90: /* 462d90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462d91: mov esi, 0x4d0e48 */
  esi = 0x4d0e48u;
L_462d96: /* 462d96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462d97: call 0x461d64 */
  esp -= 4; W32(esp, 0x462d9cu); SPILL(); f_461d64(); if (g_unwind) return; RELOAD();
/* 462d9c: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 462d9f: cmp esi, 0x4d0ea8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4d0ea8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 462da5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 462da6: jl 0x462d96 */
  if ((sf != of)) goto L_462d96;
L_462da8: /* 462da8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 462da9: jmp 0x462d8f */
  goto L_462d8f;
L_46310b: /* 46310b: mov ecx, 0x4d0a28 */
  ecx = 0x4d0a28u;
/* 463110: jmp 0x462d80 */
  goto L_462d80;
}

void f_463115(void) {
  LOAD_REGS();
L_463115: /* 463115: call dword ptr [0x48e074] */
  esp -= 4; W32(esp, 0x46311bu); SPILL(); f_40f9d9(); if (g_unwind) return; /* MSVCR70!__iob_func */ RELOAD();
/* 46311b: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46311e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46311f: mov ecx, 0x4d09c8 */
  ecx = 0x4d09c8u;
/* 463124: call 0x461fa1 */
  esp -= 4; W32(esp, 0x463129u); SPILL(); f_461fa1(); if (g_unwind) return; RELOAD();
/* 463129: push 0x463135 */
  { uint32_t v = 0x463135u; esp -= 4; W32(esp, v); }
/* 46312e: call 0x461586 */
  esp -= 4; W32(esp, 0x463133u); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 463133: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 463134: ret  */
  esp += 4; SPILL(); return;
}

void f_463135(void) {
  LOAD_REGS();
L_463135: /* 463135: mov ecx, 0x4d09c8 */
  ecx = 0x4d09c8u;
/* 46313a: jmp 0x46130d */
  SPILL(); f_46130d(); return;
}

void f_46313f(void) {
  LOAD_REGS();
L_46313f: /* 46313f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 463141: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 463143: push 0x4d09c8 */
  { uint32_t v = 0x4d09c8u; esp -= 4; W32(esp, v); }
/* 463148: mov ecx, 0x4d0a2c */
  ecx = 0x4d0a2cu;
/* 46314d: call 0x461ae0 */
  esp -= 4; W32(esp, 0x463152u); SPILL(); f_461ae0(); if (g_unwind) return; RELOAD();
/* 463152: push 0x46315e */
  { uint32_t v = 0x46315eu; esp -= 4; W32(esp, v); }
/* 463157: call 0x461586 */
  esp -= 4; W32(esp, 0x46315cu); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 46315c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46315d: ret  */
  esp += 4; SPILL(); return;
}

void f_46315e(void) {
  LOAD_REGS();
L_46315e: /* 46315e: mov eax, dword ptr [0x4d0a2c] */
  eax = R32((uint32_t)(0x4d0a2cu));
/* 463163: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 463166: mov dword ptr [eax + 0x4d0a2c], 0x4c76d8 */
  W32((uint32_t)(eax + 0x4d0a2cu), 0x4c76d8u);
/* 463170: mov ecx, 0x4d0a30 */
  ecx = 0x4d0a30u;
/* 463175: jmp 0x462de1 */
  SPILL(); f_462de1(); return;
}

void f_46317a(void) {
  LOAD_REGS();
L_46317a: /* 46317a: mov ecx, 0x4d0ac8 */
  ecx = 0x4d0ac8u;
/* 46317f: call 0x462769 */
  esp -= 4; W32(esp, 0x463184u); SPILL(); f_462769(); if (g_unwind) return; RELOAD();
/* 463184: push 0x463190 */
  { uint32_t v = 0x463190u; esp -= 4; W32(esp, v); }
/* 463189: call 0x461586 */
  esp -= 4; W32(esp, 0x46318eu); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 46318e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46318f: ret  */
  esp += 4; SPILL(); return;
}

void f_463190(void) {
  LOAD_REGS();
  goto L_463190;
L_462d80: /* 462d80: push 0x4d05b0 */
  { uint32_t v = 0x4d05b0u; esp -= 4; W32(esp, v); }
/* 462d85: call dword ptr [0x48e034] */
  esp -= 4; W32(esp, 0x462d8bu); SPILL(); call_ind(R32(0x48e034u)); if (g_unwind) return; /* KERNEL32!InterlockedDecrement */ RELOAD();
/* 462d8b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 462d8d: jl 0x462d90 */
  if ((sf != of)) goto L_462d90;
L_462d8f: /* 462d8f: ret  */
  esp += 4; SPILL(); return;
L_462d90: /* 462d90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462d91: mov esi, 0x4d0e48 */
  esi = 0x4d0e48u;
L_462d96: /* 462d96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462d97: call 0x461d64 */
  esp -= 4; W32(esp, 0x462d9cu); SPILL(); f_461d64(); if (g_unwind) return; RELOAD();
/* 462d9c: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 462d9f: cmp esi, 0x4d0ea8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4d0ea8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 462da5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 462da6: jl 0x462d96 */
  if ((sf != of)) goto L_462d96;
L_462da8: /* 462da8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 462da9: jmp 0x462d8f */
  goto L_462d8f;
L_463190: /* 463190: mov ecx, 0x4d0ac8 */
  ecx = 0x4d0ac8u;
/* 463195: jmp 0x462d80 */
  goto L_462d80;
}

void f_46319a(void) {
  LOAD_REGS();
L_46319a: /* 46319a: call dword ptr [0x48e074] */
  esp -= 4; W32(esp, 0x4631a0u); SPILL(); f_40f9d9(); if (g_unwind) return; /* MSVCR70!__iob_func */ RELOAD();
/* 4631a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4631a1: mov ecx, 0x4d0a68 */
  ecx = 0x4d0a68u;
/* 4631a6: call 0x461fa1 */
  esp -= 4; W32(esp, 0x4631abu); SPILL(); f_461fa1(); if (g_unwind) return; RELOAD();
/* 4631ab: push 0x4631b7 */
  { uint32_t v = 0x4631b7u; esp -= 4; W32(esp, v); }
/* 4631b0: call 0x461586 */
  esp -= 4; W32(esp, 0x4631b5u); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 4631b5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4631b6: ret  */
  esp += 4; SPILL(); return;
}

void f_4631b7(void) {
  LOAD_REGS();
L_4631b7: /* 4631b7: mov ecx, 0x4d0a68 */
  ecx = 0x4d0a68u;
/* 4631bc: jmp 0x46130d */
  SPILL(); f_46130d(); return;
}

void f_4631c1(void) {
  LOAD_REGS();
L_4631c1: /* 4631c1: mov ecx, 0x4d0b68 */
  ecx = 0x4d0b68u;
/* 4631c6: call 0x462769 */
  esp -= 4; W32(esp, 0x4631cbu); SPILL(); f_462769(); if (g_unwind) return; RELOAD();
/* 4631cb: push 0x4631d7 */
  { uint32_t v = 0x4631d7u; esp -= 4; W32(esp, v); }
/* 4631d0: call 0x461586 */
  esp -= 4; W32(esp, 0x4631d5u); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 4631d5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4631d6: ret  */
  esp += 4; SPILL(); return;
}

void f_4631d7(void) {
  LOAD_REGS();
  goto L_4631d7;
L_462d80: /* 462d80: push 0x4d05b0 */
  { uint32_t v = 0x4d05b0u; esp -= 4; W32(esp, v); }
/* 462d85: call dword ptr [0x48e034] */
  esp -= 4; W32(esp, 0x462d8bu); SPILL(); call_ind(R32(0x48e034u)); if (g_unwind) return; /* KERNEL32!InterlockedDecrement */ RELOAD();
/* 462d8b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 462d8d: jl 0x462d90 */
  if ((sf != of)) goto L_462d90;
L_462d8f: /* 462d8f: ret  */
  esp += 4; SPILL(); return;
L_462d90: /* 462d90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462d91: mov esi, 0x4d0e48 */
  esi = 0x4d0e48u;
L_462d96: /* 462d96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462d97: call 0x461d64 */
  esp -= 4; W32(esp, 0x462d9cu); SPILL(); f_461d64(); if (g_unwind) return; RELOAD();
/* 462d9c: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 462d9f: cmp esi, 0x4d0ea8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4d0ea8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 462da5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 462da6: jl 0x462d96 */
  if ((sf != of)) goto L_462d96;
L_462da8: /* 462da8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 462da9: jmp 0x462d8f */
  goto L_462d8f;
L_4631d7: /* 4631d7: mov ecx, 0x4d0b68 */
  ecx = 0x4d0b68u;
/* 4631dc: jmp 0x462d80 */
  goto L_462d80;
}

void f_4631e1(void) {
  LOAD_REGS();
L_4631e1: /* 4631e1: mov ecx, 0x4d0c18 */
  ecx = 0x4d0c18u;
/* 4631e6: call 0x462769 */
  esp -= 4; W32(esp, 0x4631ebu); SPILL(); f_462769(); if (g_unwind) return; RELOAD();
/* 4631eb: push 0x4631f7 */
  { uint32_t v = 0x4631f7u; esp -= 4; W32(esp, v); }
/* 4631f0: call 0x461586 */
  esp -= 4; W32(esp, 0x4631f5u); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 4631f5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4631f6: ret  */
  esp += 4; SPILL(); return;
}

void f_4631f7(void) {
  LOAD_REGS();
  goto L_4631f7;
L_462d80: /* 462d80: push 0x4d05b0 */
  { uint32_t v = 0x4d05b0u; esp -= 4; W32(esp, v); }
/* 462d85: call dword ptr [0x48e034] */
  esp -= 4; W32(esp, 0x462d8bu); SPILL(); call_ind(R32(0x48e034u)); if (g_unwind) return; /* KERNEL32!InterlockedDecrement */ RELOAD();
/* 462d8b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 462d8d: jl 0x462d90 */
  if ((sf != of)) goto L_462d90;
L_462d8f: /* 462d8f: ret  */
  esp += 4; SPILL(); return;
L_462d90: /* 462d90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462d91: mov esi, 0x4d0e48 */
  esi = 0x4d0e48u;
L_462d96: /* 462d96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462d97: call 0x461d64 */
  esp -= 4; W32(esp, 0x462d9cu); SPILL(); f_461d64(); if (g_unwind) return; RELOAD();
/* 462d9c: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 462d9f: cmp esi, 0x4d0ea8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4d0ea8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 462da5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 462da6: jl 0x462d96 */
  if ((sf != of)) goto L_462d96;
L_462da8: /* 462da8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 462da9: jmp 0x462d8f */
  goto L_462d8f;
L_4631f7: /* 4631f7: mov ecx, 0x4d0c18 */
  ecx = 0x4d0c18u;
/* 4631fc: jmp 0x462d80 */
  goto L_462d80;
}

void f_463201(void) {
  LOAD_REGS();
L_463201: /* 463201: mov ecx, 0x4d0cb8 */
  ecx = 0x4d0cb8u;
/* 463206: call 0x462769 */
  esp -= 4; W32(esp, 0x46320bu); SPILL(); f_462769(); if (g_unwind) return; RELOAD();
/* 46320b: push 0x463217 */
  { uint32_t v = 0x463217u; esp -= 4; W32(esp, v); }
/* 463210: call 0x461586 */
  esp -= 4; W32(esp, 0x463215u); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 463215: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 463216: ret  */
  esp += 4; SPILL(); return;
}

void f_463217(void) {
  LOAD_REGS();
  goto L_463217;
L_462d80: /* 462d80: push 0x4d05b0 */
  { uint32_t v = 0x4d05b0u; esp -= 4; W32(esp, v); }
/* 462d85: call dword ptr [0x48e034] */
  esp -= 4; W32(esp, 0x462d8bu); SPILL(); call_ind(R32(0x48e034u)); if (g_unwind) return; /* KERNEL32!InterlockedDecrement */ RELOAD();
/* 462d8b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 462d8d: jl 0x462d90 */
  if ((sf != of)) goto L_462d90;
L_462d8f: /* 462d8f: ret  */
  esp += 4; SPILL(); return;
L_462d90: /* 462d90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462d91: mov esi, 0x4d0e48 */
  esi = 0x4d0e48u;
L_462d96: /* 462d96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462d97: call 0x461d64 */
  esp -= 4; W32(esp, 0x462d9cu); SPILL(); f_461d64(); if (g_unwind) return; RELOAD();
/* 462d9c: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 462d9f: cmp esi, 0x4d0ea8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4d0ea8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 462da5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 462da6: jl 0x462d96 */
  if ((sf != of)) goto L_462d96;
L_462da8: /* 462da8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 462da9: jmp 0x462d8f */
  goto L_462d8f;
L_463217: /* 463217: mov ecx, 0x4d0cb8 */
  ecx = 0x4d0cb8u;
/* 46321c: jmp 0x462d80 */
  goto L_462d80;
}

void f_463221(void) {
  LOAD_REGS();
L_463221: /* 463221: call dword ptr [0x48e074] */
  esp -= 4; W32(esp, 0x463227u); SPILL(); f_40f9d9(); if (g_unwind) return; /* MSVCR70!__iob_func */ RELOAD();
/* 463227: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 463228: mov ecx, 0x4d0c58 */
  ecx = 0x4d0c58u;
/* 46322d: call 0x462024 */
  esp -= 4; W32(esp, 0x463232u); SPILL(); f_462024(); if (g_unwind) return; RELOAD();
/* 463232: push 0x46323e */
  { uint32_t v = 0x46323eu; esp -= 4; W32(esp, v); }
/* 463237: call 0x461586 */
  esp -= 4; W32(esp, 0x46323cu); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 46323c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46323d: ret  */
  esp += 4; SPILL(); return;
}

void f_46323e(void) {
  LOAD_REGS();
L_46323e: /* 46323e: mov ecx, 0x4d0c58 */
  ecx = 0x4d0c58u;
/* 463243: jmp 0x461cd8 */
  SPILL(); f_461cd8(); return;
}

void f_463248(void) {
  LOAD_REGS();
L_463248: /* 463248: mov ecx, 0x4d0d58 */
  ecx = 0x4d0d58u;
/* 46324d: call 0x462769 */
  esp -= 4; W32(esp, 0x463252u); SPILL(); f_462769(); if (g_unwind) return; RELOAD();
/* 463252: push 0x46325e */
  { uint32_t v = 0x46325eu; esp -= 4; W32(esp, v); }
/* 463257: call 0x461586 */
  esp -= 4; W32(esp, 0x46325cu); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 46325c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46325d: ret  */
  esp += 4; SPILL(); return;
}

void f_46325e(void) {
  LOAD_REGS();
  goto L_46325e;
L_462d80: /* 462d80: push 0x4d05b0 */
  { uint32_t v = 0x4d05b0u; esp -= 4; W32(esp, v); }
/* 462d85: call dword ptr [0x48e034] */
  esp -= 4; W32(esp, 0x462d8bu); SPILL(); call_ind(R32(0x48e034u)); if (g_unwind) return; /* KERNEL32!InterlockedDecrement */ RELOAD();
/* 462d8b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 462d8d: jl 0x462d90 */
  if ((sf != of)) goto L_462d90;
L_462d8f: /* 462d8f: ret  */
  esp += 4; SPILL(); return;
L_462d90: /* 462d90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462d91: mov esi, 0x4d0e48 */
  esi = 0x4d0e48u;
L_462d96: /* 462d96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462d97: call 0x461d64 */
  esp -= 4; W32(esp, 0x462d9cu); SPILL(); f_461d64(); if (g_unwind) return; RELOAD();
/* 462d9c: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 462d9f: cmp esi, 0x4d0ea8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4d0ea8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 462da5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 462da6: jl 0x462d96 */
  if ((sf != of)) goto L_462d96;
L_462da8: /* 462da8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 462da9: jmp 0x462d8f */
  goto L_462d8f;
L_46325e: /* 46325e: mov ecx, 0x4d0d58 */
  ecx = 0x4d0d58u;
/* 463263: jmp 0x462d80 */
  goto L_462d80;
}

void f_463268(void) {
  LOAD_REGS();
L_463268: /* 463268: call dword ptr [0x48e074] */
  esp -= 4; W32(esp, 0x46326eu); SPILL(); f_40f9d9(); if (g_unwind) return; /* MSVCR70!__iob_func */ RELOAD();
/* 46326e: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 463271: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 463272: mov ecx, 0x4d0cf8 */
  ecx = 0x4d0cf8u;
/* 463277: call 0x462024 */
  esp -= 4; W32(esp, 0x46327cu); SPILL(); f_462024(); if (g_unwind) return; RELOAD();
/* 46327c: push 0x463288 */
  { uint32_t v = 0x463288u; esp -= 4; W32(esp, v); }
/* 463281: call 0x461586 */
  esp -= 4; W32(esp, 0x463286u); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 463286: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 463287: ret  */
  esp += 4; SPILL(); return;
}

void f_463288(void) {
  LOAD_REGS();
L_463288: /* 463288: mov ecx, 0x4d0cf8 */
  ecx = 0x4d0cf8u;
/* 46328d: jmp 0x461cd8 */
  SPILL(); f_461cd8(); return;
}

void f_463292(void) {
  LOAD_REGS();
L_463292: /* 463292: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 463294: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 463296: push 0x4d0cf8 */
  { uint32_t v = 0x4d0cf8u; esp -= 4; W32(esp, v); }
/* 46329b: mov ecx, 0x4d0d5c */
  ecx = 0x4d0d5cu;
/* 4632a0: call 0x462a4e */
  esp -= 4; W32(esp, 0x4632a5u); SPILL(); f_462a4e(); if (g_unwind) return; RELOAD();
/* 4632a5: push 0x4632b1 */
  { uint32_t v = 0x4632b1u; esp -= 4; W32(esp, v); }
/* 4632aa: call 0x461586 */
  esp -= 4; W32(esp, 0x4632afu); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 4632af: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4632b0: ret  */
  esp += 4; SPILL(); return;
}

void f_4632b1(void) {
  LOAD_REGS();
L_4632b1: /* 4632b1: mov eax, dword ptr [0x4d0d5c] */
  eax = R32((uint32_t)(0x4d0d5cu));
/* 4632b6: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4632b9: mov dword ptr [eax + 0x4d0d5c], 0x4c7680 */
  W32((uint32_t)(eax + 0x4d0d5cu), 0x4c7680u);
/* 4632c3: mov ecx, 0x4d0d60 */
  ecx = 0x4d0d60u;
/* 4632c8: jmp 0x461c2d */
  SPILL(); f_461c2d(); return;
}

void f_4632cd(void) {
  LOAD_REGS();
L_4632cd: /* 4632cd: mov ecx, 0x4d0df8 */
  ecx = 0x4d0df8u;
/* 4632d2: call 0x462769 */
  esp -= 4; W32(esp, 0x4632d7u); SPILL(); f_462769(); if (g_unwind) return; RELOAD();
/* 4632d7: push 0x4632e3 */
  { uint32_t v = 0x4632e3u; esp -= 4; W32(esp, v); }
/* 4632dc: call 0x461586 */
  esp -= 4; W32(esp, 0x4632e1u); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 4632e1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4632e2: ret  */
  esp += 4; SPILL(); return;
}

void f_4632e3(void) {
  LOAD_REGS();
  goto L_4632e3;
L_462d80: /* 462d80: push 0x4d05b0 */
  { uint32_t v = 0x4d05b0u; esp -= 4; W32(esp, v); }
/* 462d85: call dword ptr [0x48e034] */
  esp -= 4; W32(esp, 0x462d8bu); SPILL(); call_ind(R32(0x48e034u)); if (g_unwind) return; /* KERNEL32!InterlockedDecrement */ RELOAD();
/* 462d8b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 462d8d: jl 0x462d90 */
  if ((sf != of)) goto L_462d90;
L_462d8f: /* 462d8f: ret  */
  esp += 4; SPILL(); return;
L_462d90: /* 462d90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462d91: mov esi, 0x4d0e48 */
  esi = 0x4d0e48u;
L_462d96: /* 462d96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 462d97: call 0x461d64 */
  esp -= 4; W32(esp, 0x462d9cu); SPILL(); f_461d64(); if (g_unwind) return; RELOAD();
/* 462d9c: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 462d9f: cmp esi, 0x4d0ea8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4d0ea8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 462da5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 462da6: jl 0x462d96 */
  if ((sf != of)) goto L_462d96;
L_462da8: /* 462da8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 462da9: jmp 0x462d8f */
  goto L_462d8f;
L_4632e3: /* 4632e3: mov ecx, 0x4d0df8 */
  ecx = 0x4d0df8u;
/* 4632e8: jmp 0x462d80 */
  goto L_462d80;
}

void f_4632ed(void) {
  LOAD_REGS();
L_4632ed: /* 4632ed: push 0x4632f9 */
  { uint32_t v = 0x4632f9u; esp -= 4; W32(esp, v); }
/* 4632f2: call 0x461586 */
  esp -= 4; W32(esp, 0x4632f7u); SPILL(); f_461586(); if (g_unwind) return; RELOAD();
/* 4632f7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4632f8: ret  */
  esp += 4; SPILL(); return;
}

void f_4632f9(void) {
  LOAD_REGS();
L_4632f9: /* 4632f9: mov ecx, 0x4d0e40 */
  ecx = 0x4d0e40u;
/* 4632fe: jmp 0x461389 */
  SPILL(); f_461389(); return;
}

void f_463317(void) {
  LOAD_REGS();
  goto L_463317;
L_463303: /* 463303: mov eax, dword ptr [0x4d0578] */
  eax = R32((uint32_t)(0x4d0578u));
/* 463308: mov eax, dword ptr [eax*4 + 0x4d08f8] */
  eax = R32((uint32_t)(eax*4 + 0x4d08f8u));
/* 46330f: inc dword ptr [0x4d0578] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4d0578u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x4d0578u), r);
  }
/* 463315: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x463317u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
  SPILL(); f_463317(); return;
L_463317: /* 463317: cmp dword ptr [0x4d0578], 0xa */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4d0578u))); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46331e: jb 0x463303 */
  if (cf) goto L_463303;
L_463320: /* 463320: ret  */
  esp += 4; SPILL(); return;
}

void f_463321(void) {
  LOAD_REGS();
L_463321: /* 463321: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 463322: mov ebp, esp */
  ebp = esp;
/* 463324: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 463327: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 46332a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 46332c: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* 463330: fistp qword ptr [esp + 0x10] */
  W64((uint32_t)(esp + 0x10u), (uint64_t)fpu_toint64(ST0)); FPOP();
/* 463334: fild qword ptr [esp + 0x10] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 463338: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 46333c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 463340: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 463342: je 0x463380 */
  if (zf) goto L_463380;
L_463344: /* 463344: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 463346: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 463348: jns 0x463368 */
  if (!sf) goto L_463368;
L_46334a: /* 46334a: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 46334d: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* 463350: xor ecx, 0x80000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 463356: add ecx, 0x7fffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 46335c: adc eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  cf = cin ? ((r) <= (a)) : ((r) < (a));
  eax = r;
  }
/* 46335f: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 463363: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 463366: jmp 0x463394 */
  goto L_463394;
L_463368: /* 463368: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 46336b: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* 46336e: add ecx, 0x7fffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 463374: sbb eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* 463377: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 46337b: sbb edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* 46337e: jmp 0x463394 */
  goto L_463394;
L_463380: /* 463380: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 463384: test edx, 0x7fffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46338a: jne 0x463344 */
  if (!zf) goto L_463344;
L_46338c: /* 46338c: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 463390: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
L_463394: /* 463394: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 463395: ret  */
  esp += 4; SPILL(); return;
}

void f_463443(void) {
  LOAD_REGS();
L_463443: /* 463443: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 463446: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 463449: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 46344a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 46344d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46344e: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 463452: call 0x4620da */
  esp -= 4; W32(esp, 0x463457u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 463457: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 46345a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46345b: mov eax, 0x463461 */
  eax = 0x463461u;
/* 463460: ret  */
  esp += 4; SPILL(); return;
}

void f_463461(void) {
  LOAD_REGS();
  goto L_463461;
L_4626e6: /* 4626e6: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4626ea: ja 0x46346f */
  if ((!cf && !zf)) goto L_46346f;
L_4626f0: /* 4626f0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4626f2: mov ecx, esi */
  ecx = esi;
/* 4626f4: call 0x461ea8 */
  esp -= 4; W32(esp, 0x4626f9u); SPILL(); f_461ea8(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x463461u: guest_unwind_done(); RELOAD(); goto L_463461; } return; } RELOAD();
/* 4626f9: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4626fc: mov ecx, esi */
  ecx = esi;
/* 4626fe: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 462701: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* 462704: call 0x461ed0 */
  esp -= 4; W32(esp, 0x462709u); SPILL(); f_461ed0(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x463461u: guest_unwind_done(); RELOAD(); goto L_463461; } return; } RELOAD();
/* 462709: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46270c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46270d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46270e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 462715: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 462716: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 462717: ret 8 */
  esp += 12; SPILL(); return;
L_463461: /* 463461: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 463464: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 463467: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 46346a: jmp 0x4626e6 */
  goto L_4626e6;
L_46346f: /* 46346f: cmp dword ptr [esi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 463473: jb 0x46347a */
  if (cf) goto L_46347a;
L_463475: /* 463475: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 463478: jmp 0x46347d */
  goto L_46347d;
L_46347a: /* 46347a: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
L_46347d: /* 46347d: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 463480: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 463481: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 463482: call 0x4617bb */
  esp -= 4; W32(esp, 0x463487u); SPILL(); hle_memcpy(); RELOAD();
/* 463487: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46348a: jmp 0x4626f0 */
  goto L_4626f0;
}

void f_46348f(void) {
  LOAD_REGS();
  goto L_46348f;
L_461e74: /* 461e74: xor eax, eax */
  eax = 0;
/* 461e76: cmp dword ptr [esi + 0x18], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 461e79: jb 0x46268a */
  if (cf) goto L_46268a;
L_461e7f: /* 461e7f: cmp byte ptr [esp + 0x10], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x10u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 461e83: je 0x4626a2 */
  if (zf) goto L_4626a2;
L_461e89: /* 461e89: cmp edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 461e8c: jae 0x4626a2 */
  if (!cf) goto L_4626a2;
L_461e92: /* 461e92: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 461e94: mov ecx, esi */
  ecx = esi;
/* 461e96: call 0x461ea8 */
  esp -= 4; W32(esp, 0x461e9bu); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
L_461e9b: /* 461e9b: xor eax, eax */
  eax = 0;
/* 461e9d: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 461e9f: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 461ea1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 461ea2: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 461ea4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 461ea5: ret 8 */
  esp += 12; SPILL(); return;
L_46268a: /* 46268a: cmp byte ptr [esp + 0x10], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x10u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46268e: je 0x4634ac */
  if (zf) goto L_4634ac;
L_462694: /* 462694: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 462695: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 462696: mov ecx, esi */
  ecx = esi;
/* 462698: call 0x4626af */
  esp -= 4; W32(esp, 0x46269du); SPILL(); f_4626af(); if (g_unwind) return; RELOAD();
/* 46269d: jmp 0x461e9b */
  goto L_461e9b;
L_4626a2: /* 4626a2: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4626a4: jne 0x461e9b */
  if (!zf) goto L_461e9b;
L_4626aa: /* 4626aa: jmp 0x4634b4 */
  goto L_4634b4;
L_46348f: /* 46348f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 463492: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 463494: call 0x461ea8 */
  esp -= 4; W32(esp, 0x463499u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 463499: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46349b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46349d: call 0x48bed8 */
  esp -= 4; W32(esp, 0x4634a2u); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
/* 4634a2: call 0x4877fe */
  esp -= 4; W32(esp, 0x4634a7u); SPILL(); f_4877fe(); if (g_unwind) return; RELOAD();
/* 4634a7: jmp 0x461e74 */
  goto L_461e74;
L_4634ac: /* 4634ac: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 4634af: jmp 0x462694 */
  goto L_462694;
L_4634b4: /* 4634b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4634b5: mov ecx, esi */
  ecx = esi;
/* 4634b7: call 0x461ed0 */
  esp -= 4; W32(esp, 0x4634bcu); SPILL(); f_461ed0(); if (g_unwind) return; RELOAD();
/* 4634bc: jmp 0x461e9b */
  goto L_461e9b;
}

void f_463505(void) {
  LOAD_REGS();
L_463505: /* 463505: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 463508: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 46350a: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 46350d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46350f: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 463512: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 463514: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 463517: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 463518: call 0x464bb2 */
  esp -= 4; W32(esp, 0x46351du); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 46351d: mov eax, 0x463523 */
  eax = 0x463523u;
/* 463522: ret  */
  esp += 4; SPILL(); return;
}

void f_463523(void) {
  LOAD_REGS();
  goto L_463523;
L_46213d: /* 46213d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46213f: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 462142: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 462143: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 462146: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 462148: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46214b: call 0x461453 */
  esp -= 4; W32(esp, 0x462150u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x463523u: guest_unwind_done(); RELOAD(); goto L_463523; } return; } RELOAD();
/* 462150: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 462154: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 462157: call 0x462246 */
  esp -= 4; W32(esp, 0x46215cu); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x463523u: guest_unwind_done(); RELOAD(); goto L_463523; } return; } RELOAD();
/* 46215c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46215f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 462160: mov eax, esi */
  eax = esi;
/* 462162: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 462163: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46216a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46216b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46216c: ret 4 */
  esp += 8; SPILL(); return;
L_463523: /* 463523: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 463526: xor ebx, ebx */
  ebx = 0;
/* 463528: jmp 0x46213d */
  goto L_46213d;
}

void f_46352d(void) {
  LOAD_REGS();
L_46352d: /* 46352d: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 463530: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 463532: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 463535: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 463537: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 46353a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 46353c: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 46353f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 463540: call 0x464bb2 */
  esp -= 4; W32(esp, 0x463545u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 463545: mov eax, 0x46354b */
  eax = 0x46354bu;
/* 46354a: ret  */
  esp += 4; SPILL(); return;
}

void f_46354b(void) {
  LOAD_REGS();
  goto L_46354b;
L_462d2a: /* 462d2a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 462d2c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 462d2f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 462d30: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 462d33: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 462d35: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 462d38: call 0x461453 */
  esp -= 4; W32(esp, 0x462d3du); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x46354bu: guest_unwind_done(); RELOAD(); goto L_46354b; } return; } RELOAD();
/* 462d3d: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 462d41: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 462d44: call 0x462246 */
  esp -= 4; W32(esp, 0x462d49u); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x46354bu: guest_unwind_done(); RELOAD(); goto L_46354b; } return; } RELOAD();
/* 462d49: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 462d4c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 462d4d: mov eax, esi */
  eax = esi;
/* 462d4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 462d50: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 462d57: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 462d58: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 462d59: ret 4 */
  esp += 8; SPILL(); return;
L_46354b: /* 46354b: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 46354e: xor ebx, ebx */
  ebx = 0;
/* 463550: jmp 0x462d2a */
  goto L_462d2a;
}

void f_463763(void) {
  LOAD_REGS();
L_463763: /* 463763: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 463766: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 463768: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 46376b: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46376d: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 463770: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 463772: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 463775: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 463776: call 0x464bb2 */
  esp -= 4; W32(esp, 0x46377bu); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 46377b: mov eax, 0x463781 */
  eax = 0x463781u;
/* 463780: ret  */
  esp += 4; SPILL(); return;
}

void f_463781(void) {
  LOAD_REGS();
  goto L_463781;
L_462216: /* 462216: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 462218: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46221b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46221c: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 46221f: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 462221: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 462224: call 0x461453 */
  esp -= 4; W32(esp, 0x462229u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x463781u: guest_unwind_done(); RELOAD(); goto L_463781; } return; } RELOAD();
/* 462229: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46222d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 462230: call 0x462246 */
  esp -= 4; W32(esp, 0x462235u); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x463781u: guest_unwind_done(); RELOAD(); goto L_463781; } return; } RELOAD();
/* 462235: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 462238: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 462239: mov eax, esi */
  eax = esi;
/* 46223b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46223c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 462243: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 462244: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 462245: ret  */
  esp += 4; SPILL(); return;
L_463781: /* 463781: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 463784: xor edi, edi */
  edi = 0;
/* 463786: jmp 0x462216 */
  goto L_462216;
}

void f_463812(void) {
  LOAD_REGS();
L_463812: /* 463812: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 463815: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 463817: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 46381a: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46381c: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 46381f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 463821: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 463824: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 463825: call 0x464bb2 */
  esp -= 4; W32(esp, 0x46382au); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 46382a: mov eax, 0x463830 */
  eax = 0x463830u;
/* 46382f: ret  */
  esp += 4; SPILL(); return;
}

void f_463830(void) {
  LOAD_REGS();
  goto L_463830;
L_4610f3: /* 4610f3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4610f5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4610f8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4610f9: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 4610fc: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4610fe: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 461101: call 0x461453 */
  esp -= 4; W32(esp, 0x461106u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x463830u: guest_unwind_done(); RELOAD(); goto L_463830; } return; } RELOAD();
/* 461106: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46110a: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 46110d: call 0x462246 */
  esp -= 4; W32(esp, 0x461112u); SPILL(); f_462246(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x463830u: guest_unwind_done(); RELOAD(); goto L_463830; } return; } RELOAD();
/* 461112: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 461115: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 461116: mov eax, esi */
  eax = esi;
/* 461118: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 461119: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 461120: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 461121: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 461122: ret  */
  esp += 4; SPILL(); return;
L_463830: /* 463830: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 463833: xor edi, edi */
  edi = 0;
/* 463835: jmp 0x4610f3 */
  goto L_4610f3;
}

void f_463842(void) {
  LOAD_REGS();
L_463842: /* 463842: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 463845: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 463848: lea eax, [eax + eax + 2] */
  eax = (uint32_t)(eax + eax + 0x2u);
/* 46384c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 46384f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 463850: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 463854: call 0x4620da */
  esp -= 4; W32(esp, 0x463859u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 463859: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 46385c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46385d: mov eax, 0x463863 */
  eax = 0x463863u;
/* 463862: ret  */
  esp += 4; SPILL(); return;
}

void f_463863(void) {
  LOAD_REGS();
  goto L_463863;
L_46247c: /* 46247c: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 462480: ja 0x463871 */
  if ((!cf && !zf)) goto L_463871;
L_462486: /* 462486: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 462488: mov ecx, esi */
  ecx = esi;
/* 46248a: call 0x4624b0 */
  esp -= 4; W32(esp, 0x46248fu); SPILL(); f_4624b0(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x463863u: guest_unwind_done(); RELOAD(); goto L_463863; } return; } RELOAD();
/* 46248f: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 462492: mov ecx, esi */
  ecx = esi;
/* 462494: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 462497: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* 46249a: call 0x4624dd */
  esp -= 4; W32(esp, 0x46249fu); SPILL(); f_4624dd(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x463863u: guest_unwind_done(); RELOAD(); goto L_463863; } return; } RELOAD();
/* 46249f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4624a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4624a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4624a4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4624ab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4624ac: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4624ad: ret 8 */
  esp += 12; SPILL(); return;
L_463863: /* 463863: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 463866: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 463869: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 46386c: jmp 0x46247c */
  goto L_46247c;
L_463871: /* 463871: cmp dword ptr [esi + 0x18], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 463875: jb 0x46387c */
  if (cf) goto L_46387c;
L_463877: /* 463877: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 46387a: jmp 0x46387f */
  goto L_46387f;
L_46387c: /* 46387c: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
L_46387f: /* 46387f: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 463882: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 463883: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 463884: call 0x462cb0 */
  esp -= 4; W32(esp, 0x463889u); SPILL(); f_462cb0(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x463863u: guest_unwind_done(); RELOAD(); goto L_463863; } return; } RELOAD();
/* 463889: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46388c: jmp 0x462486 */
  goto L_462486;
}

void f_463891(void) {
  LOAD_REGS();
  goto L_463891;
L_462416: /* 462416: xor eax, eax */
  eax = 0;
/* 462418: cmp dword ptr [esi + 0x18], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46241b: jae 0x4638b6 */
  if (!cf) goto L_4638b6;
L_462421: /* 462421: cmp byte ptr [esp + 0x10], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x10u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 462425: je 0x4638ae */
  if (zf) goto L_4638ae;
L_46242b: /* 46242b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46242c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46242d: mov ecx, esi */
  ecx = esi;
/* 46242f: call 0x462441 */
  esp -= 4; W32(esp, 0x462434u); SPILL(); f_462441(); if (g_unwind) return; RELOAD();
L_462434: /* 462434: xor eax, eax */
  eax = 0;
/* 462436: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 462438: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 46243a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46243b: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 46243d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46243e: ret 8 */
  esp += 12; SPILL(); return;
L_463891: /* 463891: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 463894: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 463896: call 0x4624b0 */
  esp -= 4; W32(esp, 0x46389bu); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 46389b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46389d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46389f: call 0x48bed8 */
  esp -= 4; W32(esp, 0x4638a4u); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
/* 4638a4: call 0x4877fe */
  esp -= 4; W32(esp, 0x4638a9u); SPILL(); f_4877fe(); if (g_unwind) return; RELOAD();
/* 4638a9: jmp 0x462416 */
  goto L_462416;
L_4638ae: /* 4638ae: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 4638b1: jmp 0x46242b */
  goto L_46242b;
L_4638b6: /* 4638b6: cmp byte ptr [esp + 0x10], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x10u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4638ba: je 0x4638cf */
  if (zf) goto L_4638cf;
L_4638bc: /* 4638bc: cmp edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4638bf: jae 0x4638cf */
  if (!cf) goto L_4638cf;
L_4638c1: /* 4638c1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4638c3: mov ecx, esi */
  ecx = esi;
/* 4638c5: call 0x4624b0 */
  esp -= 4; W32(esp, 0x4638cau); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 4638ca: jmp 0x462434 */
  goto L_462434;
L_4638cf: /* 4638cf: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4638d1: jne 0x462434 */
  if (!zf) goto L_462434;
L_4638d7: /* 4638d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4638d8: mov ecx, esi */
  ecx = esi;
/* 4638da: call 0x4624dd */
  esp -= 4; W32(esp, 0x4638dfu); SPILL(); f_4624dd(); if (g_unwind) return; RELOAD();
/* 4638df: jmp 0x462434 */
  goto L_462434;
}

void f_463a81(void) {
  LOAD_REGS();
L_463a81: /* 463a81: jmp 0x463317 */
  SPILL(); f_463317(); return;
}

void f_463d58(void) {
  LOAD_REGS();
L_463d58: /* 463d58: xor eax, eax */
  eax = 0;
/* 463d5a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 463d5b: ret  */
  esp += 4; SPILL(); return;
}

void f_463d5c(void) {
  LOAD_REGS();
  goto L_463d5c;
L_4625a2: /* 4625a2: cmp dword ptr [ebp - 0x1c], 0x48e510 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x48e510u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4625a9: jb 0x463d47 */
  if (cf) goto L_463d47;
L_4625af: /* 4625af: call 0x4625b5 */
  esp -= 4; W32(esp, 0x4625b4u); SPILL(); f_4625b5(); if (g_unwind) return; RELOAD();
/* 4625b4: ret  */
  esp += 4; SPILL(); return;
L_463d47: /* 463d47: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 463d4b: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 463d4e: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 463d50: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 463d52: je 0x463d5f */
  if (zf) goto L_463d5f;
L_463d54: /* 463d54: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x463d56u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 463d56: jmp 0x463d5f */
  goto L_463d5f;
L_463d5c: /* 463d5c: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
L_463d5f: /* 463d5f: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 463d63: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 463d67: jmp 0x4625a2 */
  goto L_4625a2;
}

void f_463d7d(void) {
  LOAD_REGS();
L_463d7d: /* 463d7d: xor eax, eax */
  eax = 0;
/* 463d7f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 463d80: ret  */
  esp += 4; SPILL(); return;
}

void f_463d81(void) {
  LOAD_REGS();
  goto L_463d81;
L_462f4e: /* 462f4e: cmp dword ptr [ebp - 0x1c], 0x48e518 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x48e518u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 462f55: jb 0x463d6c */
  if (cf) goto L_463d6c;
L_462f5b: /* 462f5b: call 0x4625b5 */
  esp -= 4; W32(esp, 0x462f60u); SPILL(); f_4625b5(); if (g_unwind) return; RELOAD();
/* 462f60: ret  */
  esp += 4; SPILL(); return;
L_463d6c: /* 463d6c: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 463d70: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 463d73: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 463d75: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 463d77: je 0x463d84 */
  if (zf) goto L_463d84;
L_463d79: /* 463d79: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x463d7bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 463d7b: jmp 0x463d84 */
  goto L_463d84;
L_463d81: /* 463d81: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
L_463d84: /* 463d84: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 463d88: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 463d8c: jmp 0x462f4e */
  goto L_462f4e;
}

void f_463d91(void) {
  LOAD_REGS();
L_463d91: /* 463d91: cmp dword ptr [esp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 463d96: jbe 0x463dae */
  if ((cf | zf)) goto L_463dae;
L_463d98: /* 463d98: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
L_463d9c: /* 463d9c: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 463d9f: cmp cx, word ptr [esp + 8] */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(esp + 0x8u)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 463da4: je 0x463db0 */
  if (zf) goto L_463db0;
L_463da6: /* 463da6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 463da7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 463da8: dec dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0xcu), r);
  }
/* 463dac: jne 0x463d9c */
  if (!zf) goto L_463d9c;
L_463dae: /* 463dae: xor eax, eax */
  eax = 0;
L_463db0: /* 463db0: ret  */
  esp += 4; SPILL(); return;
}

void f_463db1(void) {
  LOAD_REGS();
L_463db1: /* 463db1: cmp dword ptr [esp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 463db6: jbe 0x463dd2 */
  if ((cf | zf)) goto L_463dd2;
L_463db8: /* 463db8: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 463dbc: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
L_463dc0: /* 463dc0: mov dx, word ptr [eax] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 463dc3: cmp dx, word ptr [ecx] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ecx)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 463dc6: jne 0x463dd5 */
  if (!zf) goto L_463dd5;
L_463dc8: /* 463dc8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 463dc9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 463dca: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 463dcb: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 463dcc: dec dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0xcu), r);
  }
/* 463dd0: jne 0x463dc0 */
  if (!zf) goto L_463dc0;
L_463dd2: /* 463dd2: xor eax, eax */
  eax = 0;
/* 463dd4: ret  */
  esp += 4; SPILL(); return;
L_463dd5: /* 463dd5: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 463dd8: cmp ax, word ptr [ecx] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ecx)));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 463ddb: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 463ddd: and eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 463de0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 463de1: ret  */
  esp += 4; SPILL(); return;
}

void f_463de2(void) {
  LOAD_REGS();
L_463de2: /* 463de2: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 463de6: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 463de8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 463de9: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 463ded: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 463df1: call dword ptr [0x48e1a8] */
  esp -= 4; W32(esp, 0x463df7u); SPILL(); hle_memcpy(); if (g_unwind) return; /* MSVCR70!memmove */ RELOAD();
/* 463df7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 463dfa: ret  */
  esp += 4; SPILL(); return;
}

void f_463dfb(void) {
  LOAD_REGS();
L_463dfb: /* 463dfb: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 463dff: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 463e01: jbe 0x463e21 */
  if ((cf | zf)) goto L_463e21;
L_463e03: /* 463e03: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 463e07: mov dx, ax */
  edx = (edx & 0xffff0000u) | ((uint32_t)((eax & 0xffffu)) & 0xffffu);
/* 463e0a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 463e0b: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* 463e0f: shl edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 463e12: mov dx, ax */
  edx = (edx & 0xffff0000u) | ((uint32_t)((eax & 0xffffu)) & 0xffffu);
/* 463e15: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  ecx = r;
  }
/* 463e17: mov eax, edx */
  eax = edx;
/* 463e19: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 463e1b: adc ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* 463e1d: rep stosw word ptr es:[edi], ax */
  if (!DF) { guest_stos16(edi, (uint16_t)eax, ecx); edi += ecx * 2; ecx = 0; } else { while (ecx) { W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2); ecx--; } }
/* 463e20: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_463e21: /* 463e21: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 463e25: ret  */
  esp += 4; SPILL(); return;
}

void f_463e26(void) {
  LOAD_REGS();
L_463e26: /* 463e26: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 463e2a: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 463e2d: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 463e31: sub ax, word ptr [ecx] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ecx)));
  uint16_t r = (uint16_t)(a - b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 463e34: neg ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 463e37: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 463e39: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 463e3a: ret  */
  esp += 4; SPILL(); return;
}

void f_463e3b(void) {
  LOAD_REGS();
L_463e3b: /* 463e3b: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 463e3f: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 463e42: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 463e46: cmp ax, word ptr [ecx] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ecx)));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 463e49: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 463e4b: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 463e4d: ret  */
  esp += 4; SPILL(); return;
}

void f_463e4e(void) {
  LOAD_REGS();
L_463e4e: /* 463e4e: jmp dword ptr [0x48e1a4] */
  SPILL(); f_4013b8(); return; /* MSVCR70!wcslen */
}

void f_463e54(void) {
  LOAD_REGS();
L_463e54: /* 463e54: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 463e58: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 463e5b: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 463e5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 463e60: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 463e64: call 0x463d91 */
  esp -= 4; W32(esp, 0x463e69u); SPILL(); f_463d91(); if (g_unwind) return; RELOAD();
/* 463e69: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 463e6c: ret  */
  esp += 4; SPILL(); return;
}

void f_463e6d(void) {
  LOAD_REGS();
L_463e6d: /* 463e6d: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 463e71: xor ecx, ecx */
  ecx = 0;
/* 463e73: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 463e76: mov ax, cx */
  eax = (eax & 0xffff0000u) | ((uint32_t)((ecx & 0xffffu)) & 0xffffu);
/* 463e79: inc ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + 1);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 463e7b: neg ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 463e7e: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 463e80: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 463e82: ret  */
  esp += 4; SPILL(); return;
}

void f_463e83(void) {
  LOAD_REGS();
L_463e83: /* 463e83: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 463e87: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 463e8a: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 463e8e: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
/* 463e91: ret  */
  esp += 4; SPILL(); return;
}

void f_463e92(void) {
  LOAD_REGS();
L_463e92: /* 463e92: jmp 0x463db1 */
  SPILL(); f_463db1(); return;
}

void f_463e97(void) {
  LOAD_REGS();
L_463e97: /* 463e97: jmp 0x462cb0 */
  SPILL(); f_462cb0(); return;
}

void f_463e9c(void) {
  LOAD_REGS();
L_463e9c: /* 463e9c: jmp 0x463de2 */
  SPILL(); f_463de2(); return;
}

void f_463ea1(void) {
  LOAD_REGS();
L_463ea1: /* 463ea1: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 463ea5: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 463ea9: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 463ead: call 0x463dfb */
  esp -= 4; W32(esp, 0x463eb2u); SPILL(); f_463dfb(); if (g_unwind) return; RELOAD();
/* 463eb2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 463eb5: ret  */
  esp += 4; SPILL(); return;
}

void f_463eb6(void) {
  LOAD_REGS();
L_463eb6: /* 463eb6: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 463eba: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 463ebd: ret  */
  esp += 4; SPILL(); return;
}

void f_463ebe(void) {
  LOAD_REGS();
L_463ebe: /* 463ebe: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 463ec2: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 463ec4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 463ec8: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 463eca: ret  */
  esp += 4; SPILL(); return;
}

void f_463ecb(void) {
  LOAD_REGS();
L_463ecb: /* 463ecb: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 463ecf: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 463ed1: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 463ed5: sub al, byte ptr [ecx] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ecx)));
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 463ed7: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 463ed9: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 463edb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 463edc: ret  */
  esp += 4; SPILL(); return;
}

void f_463edd(void) {
  LOAD_REGS();
L_463edd: /* 463edd: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 463ee1: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 463ee3: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 463ee7: xor ecx, ecx */
  ecx = 0;
/* 463ee9: cmp al, byte ptr [edx] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edx)));
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 463eeb: setl cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* 463eee: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 463ef0: ret  */
  esp += 4; SPILL(); return;
}

void f_463ef1(void) {
  LOAD_REGS();
L_463ef1: /* 463ef1: jmp 0x48bd70 */
  SPILL(); f_48bd70(); return;
}

void f_463ef6(void) {
  LOAD_REGS();
L_463ef6: /* 463ef6: jmp 0x461028 */
  SPILL(); hle_strlen(); return;
}

void f_463efb(void) {
  LOAD_REGS();
L_463efb: /* 463efb: jmp 0x4617bb */
  SPILL(); hle_memcpy(); return;
}

void f_463f00(void) {
  LOAD_REGS();
L_463f00: /* 463f00: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 463f04: movsx eax, byte ptr [eax] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax)));
/* 463f07: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 463f0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 463f0c: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 463f10: call dword ptr [0x48e198] */
  esp -= 4; W32(esp, 0x463f16u); SPILL(); f_407d4d(); if (g_unwind) return; /* MSVCR70!memchr */ RELOAD();
/* 463f16: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 463f19: ret  */
  esp += 4; SPILL(); return;
}

void f_463f1a(void) { hle_memcpy(); }

void f_463f20(void) {
  LOAD_REGS();
L_463f20: /* 463f20: movsx eax, byte ptr [esp + 0xc] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(esp + 0xcu)));
/* 463f25: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 463f29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 463f2a: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 463f2e: call 0x48bd76 */
  esp -= 4; W32(esp, 0x463f33u); SPILL(); hle_memset(); RELOAD();
/* 463f33: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 463f36: ret  */
  esp += 4; SPILL(); return;
}

void f_463f37(void) {
  LOAD_REGS();
L_463f37: /* 463f37: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 463f3b: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 463f3d: ret  */
  esp += 4; SPILL(); return;
}

void f_463f3e(void) {
  LOAD_REGS();
L_463f3e: /* 463f3e: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 463f42: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* 463f45: ret  */
  esp += 4; SPILL(); return;
}

void f_463f46(void) {
  LOAD_REGS();
L_463f46: /* 463f46: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 463f4a: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 463f4c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 463f50: sub eax, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 463f52: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 463f54: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 463f56: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 463f57: ret  */
  esp += 4; SPILL(); return;
}

void f_463f58(void) {
  LOAD_REGS();
L_463f58: /* 463f58: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 463f5c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 463f5e: mov eax, ecx */
  eax = ecx;
/* 463f60: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 463f61: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 463f63: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 463f65: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 463f67: ret  */
  esp += 4; SPILL(); return;
}

void f_463f68(void) {
  LOAD_REGS();
L_463f68: /* 463f68: mov eax, ecx */
  eax = ecx;
/* 463f6a: ret  */
  esp += 4; SPILL(); return;
}

void f_463f6b(void) {
  LOAD_REGS();
L_463f6b: /* 463f6b: mov eax, ecx */
  eax = ecx;
/* 463f6d: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 463f71: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 463f73: ret 4 */
  esp += 8; SPILL(); return;
}

void f_463f76(void) {
  LOAD_REGS();
L_463f76: /* 463f76: push dword ptr [ecx] */
  { uint32_t v = R32((uint32_t)(ecx)); esp -= 4; W32(esp, v); }
/* 463f78: call dword ptr [0x48e190] */
  esp -= 4; W32(esp, 0x463f7eu); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* 463f7e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 463f7f: ret  */
  esp += 4; SPILL(); return;
}

void f_463f80(void) {
  LOAD_REGS();
L_463f80: /* 463f80: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 463f82: ret  */
  esp += 4; SPILL(); return;
}

void f_463f83(void) {
  LOAD_REGS();
L_463f83: /* 463f83: call 0x4885f7 */
  esp -= 4; W32(esp, 0x463f88u); SPILL(); f_4885f7(); if (g_unwind) return; RELOAD();
/* 463f88: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 463f8c: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 463f8e: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 463f91: mov eax, ecx */
  eax = ecx;
/* 463f93: ret 4 */
  esp += 8; SPILL(); return;
}

void f_463f96(void) {
  LOAD_REGS();
L_463f96: /* 463f96: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 463f97: mov ebp, esp */
  ebp = esp;
/* 463f99: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 463f9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 463f9d: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 463fa0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 463fa1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 463fa2: call 0x488bc1 */
  esp -= 4; W32(esp, 0x463fa7u); SPILL(); f_488bc1(); if (g_unwind) return; RELOAD();
/* 463fa7: mov esi, eax */
  esi = eax;
/* 463fa9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 463fac: mov edi, eax */
  edi = eax;
/* 463fae: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 463faf: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 463fb0: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 463fb1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 463fb2: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 463fb3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 463fb4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 463fb5: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 463fb6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_463fb9(void) {
  LOAD_REGS();
L_463fb9: /* 463fb9: call 0x4887f7 */
  esp -= 4; W32(esp, 0x463fbeu); SPILL(); f_4887f7(); if (g_unwind) return; RELOAD();
/* 463fbe: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 463fc2: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 463fc4: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 463fc7: mov eax, ecx */
  eax = ecx;
/* 463fc9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_463fcc(void) {
  LOAD_REGS();
L_463fcc: /* 463fcc: jmp dword ptr [0x48e18c] */
  SPILL(); f_412cf8(); return; /* MSVCR70!localeconv */
}

void f_463fd2(void) {
  LOAD_REGS();
L_463fd2: /* 463fd2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 463fd3: mov ebp, esp */
  ebp = esp;
/* 463fd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 463fd6: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 463fda: call 0x48bd7c */
  esp -= 4; W32(esp, 0x463fdfu); SPILL(); f_48bd7c(); if (g_unwind) return; RELOAD();
/* 463fdf: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 463fe2: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 463fe4: mov eax, ecx */
  eax = ecx;
/* 463fe6: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 463fe7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_463fea(void) {
  LOAD_REGS();
L_463fea: /* 463fea: mov eax, 0x4c8c60 */
  eax = 0x4c8c60u;
/* 463fef: ret  */
  esp += 4; SPILL(); return;
}

void f_463ff0(void) {
  LOAD_REGS();
L_463ff0: /* 463ff0: mov eax, 0x4c8c68 */
  eax = 0x4c8c68u;
/* 463ff5: ret  */
  esp += 4; SPILL(); return;
}

void f_463ff6(void) {
  LOAD_REGS();
L_463ff6: /* 463ff6: jmp 0x488d07 */
  SPILL(); f_488d07(); return;
}

void f_463ffb(void) {
  LOAD_REGS();
L_463ffb: /* 463ffb: push 0x48e1b8 */
  { uint32_t v = 0x48e1b8u; esp -= 4; W32(esp, v); }
/* 464000: call 0x488f1b */
  esp -= 4; W32(esp, 0x464005u); SPILL(); f_488f1b(); if (g_unwind) return; RELOAD();
/* 464005: ret  */
  esp += 4; SPILL(); return;
}

void f_464006(void) {
  LOAD_REGS();
L_464006: /* 464006: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 464007: mov ebp, esp */
  ebp = esp;
/* 464009: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46400a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46400b: mov esi, ecx */
  esi = ecx;
/* 46400d: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 464010: jne 0x464036 */
  if (!zf) goto L_464036;
L_464012: /* 464012: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 464014: lea ecx, [ebp - 4] */
  ecx = (uint32_t)(ebp + 0xfffffffcu);
/* 464017: call 0x4612ba */
  esp -= 4; W32(esp, 0x46401cu); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 46401c: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46401f: jne 0x46402e */
  if (!zf) goto L_46402e;
L_464021: /* 464021: inc dword ptr [0x4d0e3c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4d0e3cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x4d0e3cu), r);
  }
/* 464027: mov eax, dword ptr [0x4d0e3c] */
  eax = R32((uint32_t)(0x4d0e3cu));
/* 46402c: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_46402e: /* 46402e: lea ecx, [ebp - 4] */
  ecx = (uint32_t)(ebp + 0xfffffffcu);
/* 464031: call 0x4613d8 */
  esp -= 4; W32(esp, 0x464036u); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
L_464036: /* 464036: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 464038: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 464039: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46403a: ret  */
  esp += 4; SPILL(); return;
}

void f_46403b(void) {
  LOAD_REGS();
L_46403b: /* 46403b: mov eax, ecx */
  eax = ecx;
/* 46403d: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 464041: mov dword ptr [eax], 0x4c6a70 */
  W32((uint32_t)(eax), 0x4c6a70u);
/* 464047: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 46404a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46404d(void) {
  LOAD_REGS();
L_46404d: /* 46404d: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 464051: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 464052: mov esi, ecx */
  esi = ecx;
/* 464054: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 464056: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 464058: call 0x461292 */
  esp -= 4; W32(esp, 0x46405du); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 46405d: mov eax, esi */
  eax = esi;
/* 46405f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 464060: ret 4 */
  esp += 8; SPILL(); return;
}

void f_464063(void) {
  LOAD_REGS();
L_464063: /* 464063: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 464064: mov esi, ecx */
  esi = ecx;
/* 464066: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 464068: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 464069: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 46406d: cmp ecx, dword ptr [edi] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46406f: je 0x46408b */
  if (zf) goto L_46408b;
L_464071: /* 464071: call 0x46139d */
  esp -= 4; W32(esp, 0x464076u); SPILL(); f_46139d(); if (g_unwind) return; RELOAD();
/* 464076: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 464078: je 0x464082 */
  if (zf) goto L_464082;
L_46407a: /* 46407a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 46407c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 46407e: mov ecx, eax */
  ecx = eax;
/* 464080: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x464082u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_464082: /* 464082: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 464084: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 464086: call 0x461292 */
  esp -= 4; W32(esp, 0x46408bu); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
L_46408b: /* 46408b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46408c: mov eax, esi */
  eax = esi;
/* 46408e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46408f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_464092(void) {
  LOAD_REGS();
L_464092: /* 464092: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 464096: call 0x488e6f */
  esp -= 4; W32(esp, 0x46409bu); SPILL(); f_488e6f(); if (g_unwind) return; RELOAD();
/* 46409b: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 46409d: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 46409f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4640a0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4640a3(void) {
  LOAD_REGS();
L_4640a3: /* 4640a3: and dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx), r);
  }
/* 4640a6: ret  */
  esp += 4; SPILL(); return;
}

void f_4640a7(void) {
  LOAD_REGS();
L_4640a7: /* 4640a7: and dword ptr [ecx + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0x4u), r);
  }
/* 4640ab: mov dword ptr [ecx], 0x4c6a70 */
  W32((uint32_t)(ecx), 0x4c6a70u);
/* 4640b1: ret  */
  esp += 4; SPILL(); return;
}

void f_4640b2(void) {
  LOAD_REGS();
L_4640b2: /* 4640b2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4640b3: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 4640b7: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4640ba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4640bb: mov esi, ecx */
  esi = ecx;
/* 4640bd: je 0x4640e3 */
  if (zf) goto L_4640e3;
L_4640bf: /* 4640bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4640c0: push 0x4697da */
  { uint32_t v = 0x4697dau; esp -= 4; W32(esp, v); }
/* 4640c5: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 4640c8: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 4640ca: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 4640cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4640cd: call 0x48be30 */
  esp -= 4; W32(esp, 0x4640d2u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 4640d2: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4640d5: je 0x4640de */
  if (zf) goto L_4640de;
L_4640d7: /* 4640d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4640d8: call 0x48bdcd */
  esp -= 4; W32(esp, 0x4640ddu); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 4640dd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4640de: /* 4640de: mov eax, edi */
  eax = edi;
/* 4640e0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4640e1: jmp 0x4640f7 */
  goto L_4640f7;
L_4640e3: /* 4640e3: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4640e6: mov dword ptr [esi], 0x4c6a70 */
  W32((uint32_t)(esi), 0x4c6a70u);
/* 4640ec: je 0x4640f5 */
  if (zf) goto L_4640f5;
L_4640ee: /* 4640ee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4640ef: call 0x461c65 */
  esp -= 4; W32(esp, 0x4640f4u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 4640f4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4640f5: /* 4640f5: mov eax, esi */
  eax = esi;
L_4640f7: /* 4640f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4640f8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4640f9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4640fc(void) {
  LOAD_REGS();
L_4640fc: /* 4640fc: mov eax, ecx */
  eax = ecx;
/* 4640fe: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 464102: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 464105: mov dword ptr [eax], 0x4c6abc */
  W32((uint32_t)(eax), 0x4c6abcu);
/* 46410b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46410e(void) {
  LOAD_REGS();
L_46410e: /* 46410e: xor eax, eax */
  eax = 0;
/* 464110: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 464111: ret  */
  esp += 4; SPILL(); return;
}

void f_464112(void) {
  LOAD_REGS();
L_464112: /* 464112: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 464114: call 0x4640fc */
  esp -= 4; W32(esp, 0x464119u); SPILL(); f_4640fc(); if (g_unwind) return; RELOAD();
/* 464119: ret  */
  esp += 4; SPILL(); return;
}

void f_46411a(void) {
  LOAD_REGS();
L_46411a: /* 46411a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46411b: mov ebp, esp */
  ebp = esp;
/* 46411d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46411e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 464121: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 464122: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 464125: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 464126: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 464129: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 46412b: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 46412e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46412f: mov edi, dword ptr [ebp + 0x20] */
  edi = R32((uint32_t)(ebp + 0x20u));
/* 464132: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 464135: xor ecx, ecx */
  ecx = 0;
/* 464137: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 464139: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46413b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46413d: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 464140: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 464142: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* 464145: je 0x464196 */
  if (zf) goto L_464196;
L_464147: /* 464147: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 464149: cmp ecx, dword ptr [ebp + 0x1c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46414c: je 0x464196 */
  if (zf) goto L_464196;
L_46414e: /* 46414e: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 464151: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 464153: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 464156: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 464157: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46415a: mov edx, ebx */
  edx = ebx;
/* 46415c: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 46415e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 46415f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 464160: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 464161: call 0x461dae */
  esp -= 4; W32(esp, 0x464166u); SPILL(); f_461dae(); if (g_unwind) return; RELOAD();
/* 464166: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 464169: cmp eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46416c: je 0x464194 */
  if (zf) goto L_464194;
L_46416e: /* 46416e: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 464171: je 0x46418f */
  if (zf) goto L_46418f;
L_464173: /* 464173: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 464175: jne 0x464180 */
  if (!zf) goto L_464180;
L_464177: /* 464177: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 464179: call 0x461028 */
  esp -= 4; W32(esp, 0x46417eu); SPILL(); hle_strlen(); RELOAD();
/* 46417e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46417f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_464180: /* 464180: add dword ptr [esi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi), r);
  }
/* 464182: add dword ptr [edi], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edi), r);
  }
/* 464185: and dword ptr [ebp + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0x14u), r);
  }
/* 464189: cmp dword ptr [esi], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46418b: jne 0x464147 */
  if (!zf) goto L_464147;
L_46418d: /* 46418d: jmp 0x464196 */
  goto L_464196;
L_46418f: /* 46418f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 464191: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 464192: jmp 0x464199 */
  goto L_464199;
L_464194: /* 464194: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
L_464196: /* 464196: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
L_464199: /* 464199: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46419a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46419b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46419c: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46419d: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_4641a0(void) {
  LOAD_REGS();
L_4641a0: /* 4641a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4641a1: mov ebp, esp */
  ebp = esp;
/* 4641a3: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4641a6: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 4641ab: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4641ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4641af: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4641b2: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 4641b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4641b6: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 4641b9: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 4641bb: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 4641be: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4641bf: mov edi, dword ptr [ebp + 0x20] */
  edi = R32((uint32_t)(ebp + 0x20u));
/* 4641c2: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
/* 4641c5: xor ecx, ecx */
  ecx = 0;
/* 4641c7: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 4641c9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4641cb: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4641ce: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 4641d1: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4641d4: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* 4641d7: je 0x464281 */
  if (zf) goto L_464281;
L_4641dd: /* 4641dd: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 4641e0: cmp dword ptr [edi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4641e2: je 0x464281 */
  if (zf) goto L_464281;
L_4641e8: /* 4641e8: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 4641ea: call dword ptr [0x48e17c] */
  esp -= 4; W32(esp, 0x4641f0u); SPILL(); f_412fc6(); if (g_unwind) return; /* MSVCR70!___mb_cur_max_func */ RELOAD();
/* 4641f0: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 4641f3: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 4641f5: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4641f7: jg 0x46421d */
  if ((!zf && sf == of)) goto L_46421d;
L_4641f9: /* 4641f9: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 4641fc: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4641ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 464200: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 464202: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 464205: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 464208: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 464209: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46420a: call 0x488a00 */
  esp -= 4; W32(esp, 0x46420fu); SPILL(); f_488a00(); if (g_unwind) return; RELOAD();
/* 46420f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 464212: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 464214: jle 0x464274 */
  if ((zf || sf != of)) goto L_464274;
L_464216: /* 464216: add dword ptr [esi], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi), r);
  }
/* 464219: add dword ptr [edi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edi), r);
  }
/* 46421b: jmp 0x464263 */
  goto L_464263;
L_46421d: /* 46421d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 464220: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 464222: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 464225: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 464228: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46422b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46422c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46422d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46422f: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 464232: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 464233: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 464236: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 464237: call 0x488a00 */
  esp -= 4; W32(esp, 0x46423cu); SPILL(); f_488a00(); if (g_unwind) return; RELOAD();
/* 46423c: mov ebx, eax */
  ebx = eax;
/* 46423e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 464241: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 464243: jle 0x464274 */
  if ((zf || sf != of)) goto L_464274;
L_464245: /* 464245: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 464247: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 46424a: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 46424c: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 46424e: jl 0x464279 */
  if ((sf != of)) goto L_464279;
L_464250: /* 464250: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 464251: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 464254: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 464255: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 464256: call 0x4617bb */
  esp -= 4; W32(esp, 0x46425bu); SPILL(); hle_memcpy(); RELOAD();
/* 46425b: add dword ptr [esi], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi), r);
  }
/* 46425e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 464261: add dword ptr [edi], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edi), r);
  }
L_464263: /* 464263: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 464266: and dword ptr [ebp + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0x14u), r);
  }
/* 46426a: cmp dword ptr [esi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46426c: jne 0x4641dd */
  if (!zf) goto L_4641dd;
L_464272: /* 464272: jmp 0x464281 */
  goto L_464281;
L_464274: /* 464274: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 464276: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 464277: jmp 0x464284 */
  goto L_464284;
L_464279: /* 464279: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 46427c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 46427f: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_464281: /* 464281: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
L_464284: /* 464284: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 464287: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 46428a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46428b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46428c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46428d: call 0x46190c */
  esp -= 4; W32(esp, 0x464292u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 464292: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 464293: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_464296(void) {
  LOAD_REGS();
L_464296: /* 464296: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 464297: mov ebp, esp */
  ebp = esp;
/* 464299: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46429a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46429d: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 46429f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4642a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4642a1: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 4642a4: xor ebx, ebx */
  ebx = 0;
/* 4642a6: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4642a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4642aa: mov edi, ecx */
  edi = ecx;
/* 4642ac: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4642af: jbe 0x4642ef */
  if ((cf | zf)) goto L_4642ef;
L_4642b1: /* 4642b1: cmp esi, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4642b4: je 0x4642ef */
  if (zf) goto L_4642ef;
L_4642b6: /* 4642b6: lea eax, [edi + 8] */
  eax = (uint32_t)(edi + 0x8u);
/* 4642b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4642ba: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 4642bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4642be: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 4642c1: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4642c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4642c4: lea eax, [ebp + 0xa] */
  eax = (uint32_t)(ebp + 0xau);
/* 4642c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4642c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4642c9: call 0x461dae */
  esp -= 4; W32(esp, 0x4642ceu); SPILL(); f_461dae(); if (g_unwind) return; RELOAD();
/* 4642ce: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4642d1: cmp eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4642d4: je 0x4642ef */
  if (zf) goto L_4642ef;
L_4642d6: /* 4642d6: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4642d9: je 0x4642ef */
  if (zf) goto L_4642ef;
L_4642db: /* 4642db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4642dd: jne 0x4642e7 */
  if (!zf) goto L_4642e7;
L_4642df: /* 4642df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4642e0: call 0x461028 */
  esp -= 4; W32(esp, 0x4642e5u); SPILL(); hle_strlen(); RELOAD();
/* 4642e5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4642e6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_4642e7: /* 4642e7: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4642e9: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4642ea: cmp ebx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4642ed: jb 0x4642b1 */
  if (cf) goto L_4642b1;
L_4642ef: /* 4642ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4642f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4642f1: mov eax, ebx */
  eax = ebx;
/* 4642f3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4642f4: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4642f5: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_4642f8(void) {
  LOAD_REGS();
L_4642f8: /* 4642f8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4642f9: mov ebp, esp */
  ebp = esp;
/* 4642fb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4642fd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4642fe: jmp dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); SPILL(); call_ind(t); return; }
}

void f_464301(void) {
  LOAD_REGS();
L_464301: /* 464301: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 464302: mov ebp, esp */
  ebp = esp;
/* 464304: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 464306: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 464307: jmp dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); SPILL(); call_ind(t); return; }
}

void f_46430a(void) {
  LOAD_REGS();
L_46430a: /* 46430a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46430b: mov ebp, esp */
  ebp = esp;
/* 46430d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 464310: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 464315: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 464318: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 464319: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 46431c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46431d: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 464320: and dword ptr [ebp + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0x14u), r);
  }
/* 464324: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 464327: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 46432a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46432b: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46432e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46432f: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 464331: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 464333: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 464334: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 464337: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 46433a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46433c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46433d: call 0x488a00 */
  esp -= 4; W32(esp, 0x464342u); SPILL(); f_488a00(); if (g_unwind) return; RELOAD();
/* 464342: mov edi, eax */
  edi = eax;
/* 464344: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 464347: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 464349: jg 0x464354 */
  if ((!zf && sf == of)) goto L_464354;
L_46434b: /* 46434b: mov dword ptr [ebp + 0x14], 2 */
  W32((uint32_t)(ebp + 0x14u), 0x2u);
/* 464352: jmp 0x464382 */
  goto L_464382;
L_464354: /* 464354: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 464356: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 464359: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 46435a: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 46435c: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 46435e: jge 0x46436e */
  if ((sf == of)) goto L_46436e;
L_464360: /* 464360: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 464363: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 464365: mov dword ptr [ebp + 0x14], 1 */
  W32((uint32_t)(ebp + 0x14u), 0x1u);
/* 46436c: jmp 0x464382 */
  goto L_464382;
L_46436e: /* 46436e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 464370: jle 0x464382 */
  if ((zf || sf != of)) goto L_464382;
L_464372: /* 464372: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 464373: lea ecx, [ebp - 0xc] */
  ecx = (uint32_t)(ebp + 0xfffffff4u);
/* 464376: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 464377: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 464378: call 0x4617bb */
  esp -= 4; W32(esp, 0x46437du); SPILL(); hle_memcpy(); RELOAD();
/* 46437d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 464380: add dword ptr [esi], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi), r);
  }
L_464382: /* 464382: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 464385: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 464388: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 46438b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46438c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46438d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46438e: call 0x46190c */
  esp -= 4; W32(esp, 0x464393u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 464393: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 464394: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_464397(void) {
  LOAD_REGS();
L_464397: /* 464397: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 464399: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 46439a: ret  */
  esp += 4; SPILL(); return;
}

void f_46439b(void) {
  LOAD_REGS();
L_46439b: /* 46439b: mov eax, ecx */
  eax = ecx;
/* 46439d: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4643a1: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4643a4: mov dword ptr [eax], 0x4c6b18 */
  W32((uint32_t)(eax), 0x4c6b18u);
/* 4643aa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4643ad(void) {
  LOAD_REGS();
L_4643ad: /* 4643ad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4643af: call 0x46439b */
  esp -= 4; W32(esp, 0x4643b4u); SPILL(); f_46439b(); if (g_unwind) return; RELOAD();
/* 4643b4: ret  */
  esp += 4; SPILL(); return;
}

void f_4643b5(void) {
  LOAD_REGS();
L_4643b5: /* 4643b5: movzx eax, byte ptr [esp + 8] */
  eax = (uint32_t)(R8((uint32_t)(esp + 0x8u)));
/* 4643ba: mov ecx, dword ptr [ecx + 0x10] */
  ecx = R32((uint32_t)(ecx + 0x10u));
/* 4643bd: movsx eax, word ptr [ecx + eax*2] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ecx + eax*2)));
/* 4643c1: and eax, dword ptr [esp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x4u)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4643c5: neg ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 4643c8: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4643ca: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 4643cc: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4643cf(void) {
  LOAD_REGS();
L_4643cf: /* 4643cf: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4643d3: cmp eax, dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4643d7: je 0x4643f7 */
  if (zf) goto L_4643f7;
L_4643d9: /* 4643d9: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4643dd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4643de: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_4643df: /* 4643df: movzx esi, byte ptr [eax] */
  esi = (uint32_t)(R8((uint32_t)(eax)));
/* 4643e2: mov edi, dword ptr [ecx + 0x10] */
  edi = R32((uint32_t)(ecx + 0x10u));
/* 4643e5: mov si, word ptr [edi + esi*2] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + esi*2))) & 0xffffu);
/* 4643e9: mov word ptr [edx], si */
  W16((uint32_t)(edx), (esi & 0xffffu));
/* 4643ec: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4643ed: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 4643ee: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 4643ef: cmp eax, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4643f3: jne 0x4643df */
  if (!zf) goto L_4643df;
L_4643f5: /* 4643f5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4643f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_4643f7: /* 4643f7: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_4643fa(void) {
  LOAD_REGS();
L_4643fa: /* 4643fa: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4643fe: cmp eax, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 464402: je 0x46441e */
  if (zf) goto L_46441e;
L_464404: /* 464404: mov ecx, dword ptr [ecx + 0x10] */
  ecx = R32((uint32_t)(ecx + 0x10u));
L_464407: /* 464407: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 46440a: movsx edx, word ptr [ecx + edx*2] */
  edx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ecx + edx*2)));
/* 46440e: and edx, dword ptr [esp + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x4u)));
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 464412: test dx, dx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 464415: jne 0x46441e */
  if (!zf) goto L_46441e;
L_464417: /* 464417: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 464418: cmp eax, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46441c: jne 0x464407 */
  if (!zf) goto L_464407;
L_46441e: /* 46441e: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_464421(void) {
  LOAD_REGS();
L_464421: /* 464421: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 464425: cmp eax, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 464429: je 0x464445 */
  if (zf) goto L_464445;
L_46442b: /* 46442b: mov ecx, dword ptr [ecx + 0x10] */
  ecx = R32((uint32_t)(ecx + 0x10u));
L_46442e: /* 46442e: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 464431: movsx edx, word ptr [ecx + edx*2] */
  edx = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ecx + edx*2)));
/* 464435: and edx, dword ptr [esp + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x4u)));
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 464439: test dx, dx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 46443c: je 0x464445 */
  if (zf) goto L_464445;
L_46443e: /* 46443e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 46443f: cmp eax, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 464443: jne 0x46442e */
  if (!zf) goto L_46442e;
L_464445: /* 464445: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_464448(void) {
  LOAD_REGS();
L_464448: /* 464448: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 464449: mov ebp, esp */
  ebp = esp;
/* 46444b: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46444e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46444f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 464450: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 464453: mov edi, ecx */
  edi = ecx;
/* 464455: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 464458: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 464459: call 0x463f96 */
  esp -= 4; W32(esp, 0x46445eu); SPILL(); f_463f96(); if (g_unwind) return; RELOAD();
/* 46445e: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 464461: mov esi, eax */
  esi = eax;
/* 464463: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 464464: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 464465: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 464466: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 464467: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 464468: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 464469: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46446a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46446d(void) {
  LOAD_REGS();
L_46446d: /* 46446d: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 464470: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 464472: jle 0x46447f */
  if ((zf || sf != of)) goto L_46447f;
L_464474: /* 464474: push dword ptr [ecx + 0x10] */
  { uint32_t v = R32((uint32_t)(ecx + 0x10u)); esp -= 4; W32(esp, v); }
/* 464477: call dword ptr [0x48e190] */
  esp -= 4; W32(esp, 0x46447du); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* 46447d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46447e: ret  */
  esp += 4; SPILL(); return;
L_46447f: /* 46447f: jge 0x46448a */
  if ((sf == of)) goto L_46448a;
L_464481: /* 464481: push dword ptr [ecx + 0x10] */
  { uint32_t v = R32((uint32_t)(ecx + 0x10u)); esp -= 4; W32(esp, v); }
/* 464484: call 0x48bdcd */
  esp -= 4; W32(esp, 0x464489u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 464489: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46448a: /* 46448a: ret  */
  esp += 4; SPILL(); return;
}

void f_46448b(void) {
  LOAD_REGS();
L_46448b: /* 46448b: movzx eax, byte ptr [esp + 4] */
  eax = (uint32_t)(R8((uint32_t)(esp + 0x4u)));
/* 464490: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 464493: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 464494: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 464495: call 0x488c7b */
  esp -= 4; W32(esp, 0x46449au); SPILL(); f_488c7b(); if (g_unwind) return; RELOAD();
/* 46449a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46449b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46449c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46449f(void) {
  LOAD_REGS();
L_46449f: /* 46449f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4644a0: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 4644a4: cmp esi, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4644a8: je 0x4644c4 */
  if (zf) goto L_4644c4;
L_4644aa: /* 4644aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4644ab: lea edi, [ecx + 8] */
  edi = (uint32_t)(ecx + 0x8u);
L_4644ae: /* 4644ae: movzx eax, byte ptr [esi] */
  eax = (uint32_t)(R8((uint32_t)(esi)));
/* 4644b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4644b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4644b3: call 0x488c7b */
  esp -= 4; W32(esp, 0x4644b8u); SPILL(); f_488c7b(); if (g_unwind) return; RELOAD();
/* 4644b8: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 4644ba: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4644bb: cmp esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4644bf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4644c0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4644c1: jne 0x4644ae */
  if (!zf) goto L_4644ae;
L_4644c3: /* 4644c3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4644c4: /* 4644c4: mov eax, esi */
  eax = esi;
/* 4644c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4644c7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4644ca(void) {
  LOAD_REGS();
L_4644ca: /* 4644ca: movzx eax, byte ptr [esp + 4] */
  eax = (uint32_t)(R8((uint32_t)(esp + 0x4u)));
/* 4644cf: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4644d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4644d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4644d4: call 0x4890fb */
  esp -= 4; W32(esp, 0x4644d9u); SPILL(); f_4890fb(); if (g_unwind) return; RELOAD();
/* 4644d9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4644da: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4644db: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4644de(void) {
  LOAD_REGS();
L_4644de: /* 4644de: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4644df: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 4644e3: cmp esi, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4644e7: je 0x464503 */
  if (zf) goto L_464503;
L_4644e9: /* 4644e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4644ea: lea edi, [ecx + 8] */
  edi = (uint32_t)(ecx + 0x8u);
L_4644ed: /* 4644ed: movzx eax, byte ptr [esi] */
  eax = (uint32_t)(R8((uint32_t)(esi)));
/* 4644f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4644f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4644f2: call 0x4890fb */
  esp -= 4; W32(esp, 0x4644f7u); SPILL(); f_4890fb(); if (g_unwind) return; RELOAD();
/* 4644f7: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 4644f9: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4644fa: cmp esi, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4644fe: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4644ff: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 464500: jne 0x4644ed */
  if (!zf) goto L_4644ed;
L_464502: /* 464502: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_464503: /* 464503: mov eax, esi */
  eax = esi;
/* 464505: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 464506: ret 8 */
  esp += 12; SPILL(); return;
}

void f_464509(void) {
  LOAD_REGS();
L_464509: /* 464509: mov al, byte ptr [esp + 4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x4u))) & 0xffu);
/* 46450d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_464510(void) {
  LOAD_REGS();
L_464510: /* 464510: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 464511: mov ebp, esp */
  ebp = esp;
/* 464513: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 464516: sub eax, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 464519: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46451a: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46451d: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 464520: call 0x4617bb */
  esp -= 4; W32(esp, 0x464525u); SPILL(); hle_memcpy(); RELOAD();
/* 464525: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 464528: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46452b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 46452c: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_46452f(void) {
  LOAD_REGS();
L_46452f: /* 46452f: mov al, byte ptr [esp + 4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x4u))) & 0xffu);
/* 464533: ret 8 */
  esp += 12; SPILL(); return;
}

void f_464536(void) {
  LOAD_REGS();
L_464536: /* 464536: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 464537: mov ebp, esp */
  ebp = esp;
/* 464539: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 46453c: sub eax, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46453f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 464540: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 464543: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 464546: call 0x4617bb */
  esp -= 4; W32(esp, 0x46454bu); SPILL(); hle_memcpy(); RELOAD();
/* 46454b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 46454e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 464551: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 464552: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_464555(void) {
  LOAD_REGS();
L_464555: /* 464555: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 464558: ret  */
  esp += 4; SPILL(); return;
}

void f_464559(void) {
  LOAD_REGS();
L_464559: /* 464559: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46455a: mov esi, ecx */
  esi = ecx;
/* 46455c: cmp dword ptr [esi + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 464560: mov dword ptr [esi], 0x4c6b68 */
  W32((uint32_t)(esi), 0x4c6b68u);
/* 464566: je 0x464572 */
  if (zf) goto L_464572;
L_464568: /* 464568: push dword ptr [esi + 0x10] */
  { uint32_t v = R32((uint32_t)(esi + 0x10u)); esp -= 4; W32(esp, v); }
/* 46456b: call dword ptr [0x48e190] */
  esp -= 4; W32(esp, 0x464571u); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* 464571: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_464572: /* 464572: mov dword ptr [esi], 0x4c6a70 */
  W32((uint32_t)(esi), 0x4c6a70u);
/* 464578: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 464579: ret  */
  esp += 4; SPILL(); return;
}

void f_46457a(void) {
  LOAD_REGS();
L_46457a: /* 46457a: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46457d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46457e: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 464582: call 0x489187 */
  esp -= 4; W32(esp, 0x464587u); SPILL(); f_489187(); if (g_unwind) return; RELOAD();
/* 464587: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 464588: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 464589: and eax, dword ptr [esp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x4u)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 46458d: neg ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 464590: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 464592: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 464594: ret 8 */
  esp += 12; SPILL(); return;
}

void f_464597(void) {
  LOAD_REGS();
L_464597: /* 464597: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46459a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46459b: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46459f: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4645a3: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4645a7: call 0x4891b2 */
  esp -= 4; W32(esp, 0x4645acu); SPILL(); f_4891b2(); if (g_unwind) return; RELOAD();
/* 4645ac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4645af: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_4645b2(void) {
  LOAD_REGS();
L_4645b2: /* 4645b2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4645b3: mov ebp, esp */
  ebp = esp;
/* 4645b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4645b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4645b7: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 4645ba: cmp edi, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4645bd: mov esi, ecx */
  esi = ecx;
/* 4645bf: je 0x4645f8 */
  if (zf) goto L_4645f8;
L_4645c1: /* 4645c1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4645c2: lea ebx, [esi + 8] */
  ebx = (uint32_t)(esi + 0x8u);
L_4645c5: /* 4645c5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 4645c7: xor eax, eax */
  eax = 0;
/* 4645c9: mov ax, word ptr [edi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 4645cc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4645cd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4645cf: mov ecx, esi */
  ecx = esi;
/* 4645d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4645d2: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x4645d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4645d5: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 4645d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4645d9: call 0x488c7b */
  esp -= 4; W32(esp, 0x4645deu); SPILL(); f_488c7b(); if (g_unwind) return; RELOAD();
/* 4645de: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4645df: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4645e0: mov byte ptr [ebp + 8], al */
  W8((uint32_t)(ebp + 0x8u), (eax & 0xffu));
/* 4645e3: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4645e6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4645e8: mov ecx, esi */
  ecx = esi;
/* 4645ea: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x4645edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4645ed: mov word ptr [edi], ax */
  W16((uint32_t)(edi), (eax & 0xffffu));
/* 4645f0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 4645f1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 4645f2: cmp edi, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4645f5: jne 0x4645c5 */
  if (!zf) goto L_4645c5;
L_4645f7: /* 4645f7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_4645f8: /* 4645f8: mov eax, edi */
  eax = edi;
/* 4645fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4645fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4645fc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4645fd: ret 8 */
  esp += 12; SPILL(); return;
}

void f_464600(void) {
  LOAD_REGS();
L_464600: /* 464600: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 464601: mov ebp, esp */
  ebp = esp;
/* 464603: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 464604: mov esi, ecx */
  esi = ecx;
/* 464606: lea eax, [esi + 8] */
  eax = (uint32_t)(esi + 0x8u);
/* 464609: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46460a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46460c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46460e: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 464611: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0x464614u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 464614: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 464617: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 464618: call 0x4890fb */
  esp -= 4; W32(esp, 0x46461du); SPILL(); f_4890fb(); if (g_unwind) return; RELOAD();
/* 46461d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46461e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46461f: mov byte ptr [ebp + 8], al */
  W8((uint32_t)(ebp + 0x8u), (eax & 0xffu));
/* 464622: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 464625: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 464627: mov ecx, esi */
  ecx = esi;
/* 464629: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x46462cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 46462c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46462d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 46462e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_464631(void) {
  LOAD_REGS();
L_464631: /* 464631: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 464632: mov ebp, esp */
  ebp = esp;
/* 464634: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 464635: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 464639: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46463a: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 46463d: cmp esi, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 464640: je 0x464675 */
  if (zf) goto L_464675;
L_464642: /* 464642: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 464643: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 464644: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 464647: lea ebx, [ecx + 0x18] */
  ebx = (uint32_t)(ecx + 0x18u);
L_46464a: /* 46464a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46464b: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 46464e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46464f: xor eax, eax */
  eax = 0;
/* 464651: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 464654: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 464655: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 464656: call 0x488a00 */
  esp -= 4; W32(esp, 0x46465bu); SPILL(); f_488a00(); if (g_unwind) return; RELOAD();
/* 46465b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46465e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 464660: jg 0x46466a */
  if ((!zf && sf == of)) goto L_46466a;
L_464662: /* 464662: mov cl, byte ptr [ebp + 0x10] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x10u))) & 0xffu);
/* 464665: xor eax, eax */
  eax = 0;
/* 464667: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 464668: mov byte ptr [edi], cl */
  W8((uint32_t)(edi), (ecx & 0xffu));
L_46466a: /* 46466a: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 46466c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 46466d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 46466e: cmp esi, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 464671: jne 0x46464a */
  if (!zf) goto L_46464a;
L_464673: /* 464673: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 464674: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_464675: /* 464675: mov eax, esi */
  eax = esi;
/* 464677: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 464678: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 464679: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_46467c(void) {
  LOAD_REGS();
L_46467c: /* 46467c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46467d: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 464681: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 464684: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 464685: mov esi, ecx */
  esi = ecx;
/* 464687: je 0x4646ad */
  if (zf) goto L_4646ad;
L_464689: /* 464689: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46468a: push 0x464559 */
  { uint32_t v = 0x464559u; esp -= 4; W32(esp, v); }
/* 46468f: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 464692: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 464694: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 464696: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 464697: call 0x48be30 */
  esp -= 4; W32(esp, 0x46469cu); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 46469c: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46469f: je 0x4646a8 */
  if (zf) goto L_4646a8;
L_4646a1: /* 4646a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4646a2: call 0x48bdcd */
  esp -= 4; W32(esp, 0x4646a7u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 4646a7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4646a8: /* 4646a8: mov eax, edi */
  eax = edi;
/* 4646aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4646ab: jmp 0x4646c2 */
  goto L_4646c2;
L_4646ad: /* 4646ad: mov ecx, esi */
  ecx = esi;
/* 4646af: call 0x464559 */
  esp -= 4; W32(esp, 0x4646b4u); SPILL(); f_464559(); if (g_unwind) return; RELOAD();
/* 4646b4: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4646b7: je 0x4646c0 */
  if (zf) goto L_4646c0;
L_4646b9: /* 4646b9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4646ba: call 0x461c65 */
  esp -= 4; W32(esp, 0x4646bfu); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 4646bf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4646c0: /* 4646c0: mov eax, esi */
  eax = esi;
L_4646c2: /* 4646c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4646c3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4646c4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4646c7(void) {
  LOAD_REGS();
L_4646c7: /* 4646c7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4646c9: jmp dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); SPILL(); call_ind(t); return; }
}

void f_4646cc(void) {
  LOAD_REGS();
L_4646cc: /* 4646cc: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4646ce: jmp dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); SPILL(); call_ind(t); return; }
}

void f_4646d1(void) {
  LOAD_REGS();
L_4646d1: /* 4646d1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4646d3: jmp dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); SPILL(); call_ind(t); return; }
}

void f_4646d6(void) {
  LOAD_REGS();
L_4646d6: /* 4646d6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4646d8: jmp dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); SPILL(); call_ind(t); return; }
}

void f_4646db(void) {
  LOAD_REGS();
L_4646db: /* 4646db: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4646dd: jmp dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); SPILL(); call_ind(t); return; }
}

void f_4646e0(void) {
  LOAD_REGS();
L_4646e0: /* 4646e0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4646e2: jmp dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); SPILL(); call_ind(t); return; }
}

void f_4646e5(void) {
  LOAD_REGS();
L_4646e5: /* 4646e5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4646e7: jmp dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); SPILL(); call_ind(t); return; }
}

void f_4646ea(void) {
  LOAD_REGS();
L_4646ea: /* 4646ea: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4646ec: jmp dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); SPILL(); call_ind(t); return; }
}

void f_4646ef(void) {
  LOAD_REGS();
L_4646ef: /* 4646ef: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4646f1: jmp dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); SPILL(); call_ind(t); return; }
}

void f_4646f4(void) {
  LOAD_REGS();
L_4646f4: /* 4646f4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4646f6: jmp dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); SPILL(); call_ind(t); return; }
}

void f_4646f9(void) {
  LOAD_REGS();
L_4646f9: /* 4646f9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4646fa: mov esi, ecx */
  esi = ecx;
/* 4646fc: cmp dword ptr [esi + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 464700: mov dword ptr [esi], 0x4c6bec */
  W32((uint32_t)(esi), 0x4c6becu);
/* 464706: je 0x464712 */
  if (zf) goto L_464712;
L_464708: /* 464708: push dword ptr [esi + 0x10] */
  { uint32_t v = R32((uint32_t)(esi + 0x10u)); esp -= 4; W32(esp, v); }
/* 46470b: call dword ptr [0x48e190] */
  esp -= 4; W32(esp, 0x464711u); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* 464711: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_464712: /* 464712: mov dword ptr [esi], 0x4c6a70 */
  W32((uint32_t)(esi), 0x4c6a70u);
/* 464718: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 464719: ret  */
  esp += 4; SPILL(); return;
}

void f_46471a(void) {
  LOAD_REGS();
L_46471a: /* 46471a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46471b: mov ebp, esp */
  ebp = esp;
/* 46471d: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 464720: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 464721: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 464722: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 464723: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 464726: mov ebx, ecx */
  ebx = ecx;
/* 464728: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 46472b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46472c: call 0x463f96 */
  esp -= 4; W32(esp, 0x464731u); SPILL(); f_463f96(); if (g_unwind) return; RELOAD();
/* 464731: mov esi, eax */
  esi = eax;
/* 464733: lea edi, [ebx + 8] */
  edi = (uint32_t)(ebx + 0x8u);
/* 464736: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 464737: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 464738: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 464739: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46473a: call 0x4887f7 */
  esp -= 4; W32(esp, 0x46473fu); SPILL(); f_4887f7(); if (g_unwind) return; RELOAD();
/* 46473f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 464740: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 464741: mov dword ptr [ebx + 0x18], eax */
  W32((uint32_t)(ebx + 0x18u), eax);
/* 464744: mov dword ptr [ebx + 0x1c], edx */
  W32((uint32_t)(ebx + 0x1cu), edx);
/* 464747: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 464748: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 464749: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46474c(void) {
  LOAD_REGS();
L_46474c: /* 46474c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46474d: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 464751: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 464752: mov edi, ecx */
  edi = ecx;
/* 464754: jmp 0x46476d */
  goto L_46476d;
L_464756: /* 464756: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 464758: xor eax, eax */
  eax = 0;
/* 46475a: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 46475d: mov ecx, edi */
  ecx = edi;
/* 46475f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 464760: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 464764: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x464767u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 464767: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 464769: jne 0x464773 */
  if (!zf) goto L_464773;
L_46476b: /* 46476b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 46476c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_46476d: /* 46476d: cmp esi, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 464771: jne 0x464756 */
  if (!zf) goto L_464756;
L_464773: /* 464773: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 464774: mov eax, esi */
  eax = esi;
/* 464776: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 464777: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_46477a(void) {
  LOAD_REGS();
L_46477a: /* 46477a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46477b: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 46477f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 464780: mov edi, ecx */
  edi = ecx;
/* 464782: jmp 0x46479b */
  goto L_46479b;
L_464784: /* 464784: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 464786: xor eax, eax */
  eax = 0;
/* 464788: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 46478b: mov ecx, edi */
  ecx = edi;
/* 46478d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46478e: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 464792: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x464795u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 464795: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 464797: je 0x4647a1 */
  if (zf) goto L_4647a1;
L_464799: /* 464799: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 46479a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_46479b: /* 46479b: cmp esi, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46479f: jne 0x464784 */
  if (!zf) goto L_464784;
L_4647a1: /* 4647a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4647a2: mov eax, esi */
  eax = esi;
/* 4647a4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4647a5: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_4647a8(void) {
  LOAD_REGS();
L_4647a8: /* 4647a8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4647a9: mov ebp, esp */
  ebp = esp;
/* 4647ab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4647ac: mov esi, ecx */
  esi = ecx;
/* 4647ae: lea eax, [esi + 8] */
  eax = (uint32_t)(esi + 0x8u);
/* 4647b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4647b2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4647b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4647b6: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4647b9: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0x4647bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4647bc: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 4647bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4647c0: call 0x488c7b */
  esp -= 4; W32(esp, 0x4647c5u); SPILL(); f_488c7b(); if (g_unwind) return; RELOAD();
/* 4647c5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4647c6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4647c7: mov byte ptr [ebp + 8], al */
  W8((uint32_t)(ebp + 0x8u), (eax & 0xffu));
/* 4647ca: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4647cd: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4647cf: mov ecx, esi */
  ecx = esi;
/* 4647d1: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x4647d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4647d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4647d5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4647d6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4647d9(void) {
  LOAD_REGS();
L_4647d9: /* 4647d9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4647da: mov ebp, esp */
  ebp = esp;
/* 4647dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4647dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4647de: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 4647e1: cmp edi, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4647e4: mov esi, ecx */
  esi = ecx;
/* 4647e6: je 0x46481f */
  if (zf) goto L_46481f;
L_4647e8: /* 4647e8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4647e9: lea ebx, [esi + 8] */
  ebx = (uint32_t)(esi + 0x8u);
L_4647ec: /* 4647ec: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 4647ee: xor eax, eax */
  eax = 0;
/* 4647f0: mov ax, word ptr [edi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 4647f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4647f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4647f6: mov ecx, esi */
  ecx = esi;
/* 4647f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4647f9: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x4647fcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4647fc: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 4647ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 464800: call 0x4890fb */
  esp -= 4; W32(esp, 0x464805u); SPILL(); f_4890fb(); if (g_unwind) return; RELOAD();
/* 464805: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 464806: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 464807: mov byte ptr [ebp + 8], al */
  W8((uint32_t)(ebp + 0x8u), (eax & 0xffu));
/* 46480a: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46480d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46480f: mov ecx, esi */
  ecx = esi;
/* 464811: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x464814u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 464814: mov word ptr [edi], ax */
  W16((uint32_t)(edi), (eax & 0xffffu));
/* 464817: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 464818: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 464819: cmp edi, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46481c: jne 0x4647ec */
  if (!zf) goto L_4647ec;
L_46481e: /* 46481e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_46481f: /* 46481f: mov eax, edi */
  eax = edi;
/* 464821: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 464822: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 464823: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 464824: ret 8 */
  esp += 12; SPILL(); return;
}

void f_464827(void) {
  LOAD_REGS();
L_464827: /* 464827: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 464828: mov ebp, esp */
  ebp = esp;
/* 46482a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46482b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46482c: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 464830: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 464833: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 464834: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 464837: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 464838: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 46483a: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 46483d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46483e: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 464841: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 464842: call 0x461dae */
  esp -= 4; W32(esp, 0x464847u); SPILL(); f_461dae(); if (g_unwind) return; RELOAD();
/* 464847: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46484a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 46484c: jg 0x464855 */
  if ((!zf && sf == of)) goto L_464855;
L_46484e: /* 46484e: movzx ax, byte ptr [ebp + 8] */
  eax = (eax & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(ebp + 0x8u)))) & 0xffffu);
/* 464853: jmp 0x464858 */
  goto L_464858;
L_464855: /* 464855: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
L_464858: /* 464858: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 464859: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46485c(void) {
  LOAD_REGS();
L_46485c: /* 46485c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46485d: mov ebp, esp */
  ebp = esp;
/* 46485f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 464860: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 464864: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 464865: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 464868: cmp esi, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46486b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46486c: je 0x4648a6 */
  if (zf) goto L_4648a6;
L_46486e: /* 46486e: lea edi, [ecx + 0x18] */
  edi = (uint32_t)(ecx + 0x18u);
L_464871: /* 464871: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 464872: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 464875: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 464876: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 464879: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46487b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46487c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46487d: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 464880: call 0x461dae */
  esp -= 4; W32(esp, 0x464885u); SPILL(); f_461dae(); if (g_unwind) return; RELOAD();
/* 464885: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 464888: cmp eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 46488b: jl 0x46489b */
  if ((sf != of)) goto L_46489b;
L_46488d: /* 46488d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 46488f: jl 0x4648a6 */
  if ((sf != of)) goto L_4648a6;
L_464891: /* 464891: jne 0x46489b */
  if (!zf) goto L_46489b;
L_464893: /* 464893: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 464894: call 0x461028 */
  esp -= 4; W32(esp, 0x464899u); SPILL(); hle_strlen(); RELOAD();
/* 464899: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46489a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_46489b: /* 46489b: add dword ptr [ebp + 0x10], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 46489f: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4648a1: cmp esi, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4648a4: jne 0x464871 */
  if (!zf) goto L_464871;
L_4648a6: /* 4648a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4648a7: mov eax, esi */
  eax = esi;
/* 4648a9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4648aa: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4648ab: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_4648ae(void) {
  LOAD_REGS();
L_4648ae: /* 4648ae: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4648af: mov ebp, esp */
  ebp = esp;
/* 4648b1: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4648b4: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 4648b9: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4648bc: and dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 4648c0: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4648c3: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4648c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4648c7: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 4648ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4648cb: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4648ce: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 4648d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4648d2: call 0x488a00 */
  esp -= 4; W32(esp, 0x4648d7u); SPILL(); f_488a00(); if (g_unwind) return; RELOAD();
/* 4648d7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4648da: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4648dd: mov al, byte ptr [ebp + 0xc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xcu))) & 0xffu);
/* 4648e0: jne 0x4648e5 */
  if (!zf) goto L_4648e5;
L_4648e2: /* 4648e2: mov al, byte ptr [ebp - 0x10] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xfffffff0u))) & 0xffu);
L_4648e5: /* 4648e5: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4648e8: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4648eb: call 0x46190c */
  esp -= 4; W32(esp, 0x4648f0u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 4648f0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4648f1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4648f4(void) {
  LOAD_REGS();
L_4648f4: /* 4648f4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4648f5: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 4648f9: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4648fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4648fd: mov esi, ecx */
  esi = ecx;
/* 4648ff: je 0x464925 */
  if (zf) goto L_464925;
L_464901: /* 464901: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 464902: push 0x4646f9 */
  { uint32_t v = 0x4646f9u; esp -= 4; W32(esp, v); }
/* 464907: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 46490a: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 46490c: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 46490e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46490f: call 0x48be30 */
  esp -= 4; W32(esp, 0x464914u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 464914: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 464917: je 0x464920 */
  if (zf) goto L_464920;
L_464919: /* 464919: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46491a: call 0x48bdcd */
  esp -= 4; W32(esp, 0x46491fu); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 46491f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_464920: /* 464920: mov eax, edi */
  eax = edi;
/* 464922: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 464923: jmp 0x46493a */
  goto L_46493a;
L_464925: /* 464925: mov ecx, esi */
  ecx = esi;
/* 464927: call 0x4646f9 */
  esp -= 4; W32(esp, 0x46492cu); SPILL(); f_4646f9(); if (g_unwind) return; RELOAD();
/* 46492c: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46492f: je 0x464938 */
  if (zf) goto L_464938;
L_464931: /* 464931: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 464932: call 0x461c65 */
  esp -= 4; W32(esp, 0x464937u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 464937: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_464938: /* 464938: mov eax, esi */
  eax = esi;
L_46493a: /* 46493a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46493b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46493c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46493f(void) {
  LOAD_REGS();
L_46493f: /* 46493f: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 464943: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 464944: mov esi, ecx */
  esi = ecx;
/* 464946: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 464948: je 0x464958 */
  if (zf) goto L_464958;
L_46494a: /* 46494a: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46494d: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 464950: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 464951: mov ecx, esi */
  ecx = esi;
/* 464953: call 0x4893bc */
  esp -= 4; W32(esp, 0x464958u); SPILL(); f_4893bc(); if (g_unwind) return; RELOAD();
L_464958: /* 464958: mov eax, esi */
  eax = esi;
/* 46495a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46495b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46495e(void) {
  LOAD_REGS();
L_46495e: /* 46495e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 464960: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 464964: call 0x461bc5 */
  esp -= 4; W32(esp, 0x464969u); SPILL(); f_461bc5(); if (g_unwind) return; RELOAD();
/* 464969: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46496c(void) {
  LOAD_REGS();
L_46496c: /* 46496c: cmp dword ptr [esp + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 464971: je 0x464984 */
  if (zf) goto L_464984;
L_464973: /* 464973: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 464976: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46497a: or eax, dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 46497e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46497f: call 0x461bc5 */
  esp -= 4; W32(esp, 0x464984u); SPILL(); f_461bc5(); if (g_unwind) return; RELOAD();
L_464984: /* 464984: ret 8 */
  esp += 12; SPILL(); return;
}

void f_464987(void) {
  LOAD_REGS();
L_464987: /* 464987: cmp dword ptr [esp + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46498c: je 0x46499d */
  if (zf) goto L_46499d;
L_46498e: /* 46498e: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 464991: or eax, dword ptr [esp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x4u)));
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 464995: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 464997: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 464998: call 0x461bc5 */
  esp -= 4; W32(esp, 0x46499du); SPILL(); f_461bc5(); if (g_unwind) return; RELOAD();
L_46499d: /* 46499d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4649a0(void) {
  LOAD_REGS();
L_4649a0: /* 4649a0: jmp 0x464987 */
  SPILL(); f_464987(); return;
}

void f_4649a2(void) {
  LOAD_REGS();
L_4649a2: /* 4649a2: xor eax, eax */
  eax = 0;
/* 4649a4: cmp dword ptr [ecx + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4649a7: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 4649aa: ret  */
  esp += 4; SPILL(); return;
}

void f_4649ab(void) {
  LOAD_REGS();
L_4649ab: /* 4649ab: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4649ae: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4649b1: ret  */
  esp += 4; SPILL(); return;
}

void f_4649b2(void) {
  LOAD_REGS();
L_4649b2: /* 4649b2: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4649b5: and al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4649b7: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4649b9: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4649bb: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 4649bd: ret  */
  esp += 4; SPILL(); return;
}

void f_4649be(void) {
  LOAD_REGS();
L_4649be: /* 4649be: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4649c1: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 4649c4: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4649c7: ret  */
  esp += 4; SPILL(); return;
}

void f_4649c8(void) {
  LOAD_REGS();
L_4649c8: /* 4649c8: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 4649cb: ret  */
  esp += 4; SPILL(); return;
}

void f_4649cc(void) {
  LOAD_REGS();
L_4649cc: /* 4649cc: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4649d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4649d2: push dword ptr [ecx + 4] */
  { uint32_t v = R32((uint32_t)(ecx + 0x4u)); esp -= 4; W32(esp, v); }
/* 4649d5: and eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4649d8: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 4649db: call 0x461bc5 */
  esp -= 4; W32(esp, 0x4649e0u); SPILL(); f_461bc5(); if (g_unwind) return; RELOAD();
/* 4649e0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4649e3(void) {
  LOAD_REGS();
L_4649e3: /* 4649e3: jmp 0x4649cc */
  SPILL(); f_4649cc(); return;
}

void f_4649e5(void) {
  LOAD_REGS();
L_4649e5: /* 4649e5: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 4649e8: ret  */
  esp += 4; SPILL(); return;
}

void f_4649e9(void) {
  LOAD_REGS();
L_4649e9: /* 4649e9: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4649ed: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 4649f0: and edx, 0x7fff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4649f6: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 4649f9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4649fc(void) {
  LOAD_REGS();
L_4649fc: /* 4649fc: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 464a00: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 464a03: and edx, 0x7fff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 464a09: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 464a0b: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 464a0e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_464a11(void) {
  LOAD_REGS();
L_464a11: /* 464a11: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 464a15: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 464a18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 464a19: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 464a1d: and esi, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 464a21: not edx */
  edx = ~edx;
/* 464a23: and esi, 0x7fff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 464a29: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 464a2b: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 464a2d: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 464a30: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 464a31: ret 8 */
  esp += 12; SPILL(); return;
}

void f_464a34(void) {
  LOAD_REGS();
L_464a34: /* 464a34: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 464a38: not eax */
  eax = ~eax;
/* 464a3a: and dword ptr [ecx + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0xcu), r);
  }
/* 464a3d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_464a40(void) {
  LOAD_REGS();
L_464a40: /* 464a40: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 464a44: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 464a47: mov dword ptr [ecx + 0x10], edx */
  W32((uint32_t)(ecx + 0x10u), edx);
/* 464a4a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_464a4d(void) {
  LOAD_REGS();
L_464a4d: /* 464a4d: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 464a51: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 464a54: mov dword ptr [ecx + 0x14], edx */
  W32((uint32_t)(ecx + 0x14u), edx);
/* 464a57: ret 4 */
  esp += 8; SPILL(); return;
}

void f_464a5a(void) {
  LOAD_REGS();
L_464a5a: /* 464a5a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 464a5b: mov ebp, esp */
  ebp = esp;
/* 464a5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 464a5e: push dword ptr [ecx + 0x20] */
  { uint32_t v = R32((uint32_t)(ecx + 0x20u)); esp -= 4; W32(esp, v); }
/* 464a61: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 464a64: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 464a68: call 0x46404d */
  esp -= 4; W32(esp, 0x464a6du); SPILL(); f_46404d(); if (g_unwind) return; RELOAD();
/* 464a6d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 464a70: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 464a71: ret 4 */
  esp += 8; SPILL(); return;
}

void f_464a74(void) {
  LOAD_REGS();
L_464a74: /* 464a74: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 464a75: mov ebp, esp */
  ebp = esp;
/* 464a77: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 464a78: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 464a79: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 464a7b: lea ecx, [ebp - 4] */
  ecx = (uint32_t)(ebp + 0xfffffffcu);
/* 464a7e: call 0x4612ba */
  esp -= 4; W32(esp, 0x464a83u); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 464a83: mov esi, dword ptr [0x4d0eb8] */
  esi = R32((uint32_t)(0x4d0eb8u));
/* 464a89: inc dword ptr [0x4d0eb8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4d0eb8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x4d0eb8u), r);
  }
/* 464a8f: lea ecx, [ebp - 4] */
  ecx = (uint32_t)(ebp + 0xfffffffcu);
/* 464a92: call 0x4613d8 */
  esp -= 4; W32(esp, 0x464a97u); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 464a97: mov eax, esi */
  eax = esi;
/* 464a99: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 464a9a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 464a9b: ret  */
  esp += 4; SPILL(); return;
}

void f_464a9c(void) {
  LOAD_REGS();
L_464a9c: /* 464a9c: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 464aa0: call 0x4892fc */
  esp -= 4; W32(esp, 0x464aa5u); SPILL(); f_4892fc(); if (g_unwind) return; RELOAD();
/* 464aa5: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 464aa8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_464aab(void) {
  LOAD_REGS();
L_464aab: /* 464aab: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 464aaf: call 0x4892fc */
  esp -= 4; W32(esp, 0x464ab4u); SPILL(); f_4892fc(); if (g_unwind) return; RELOAD();
/* 464ab4: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 464ab7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_464aba(void) {
  LOAD_REGS();
L_464aba: /* 464aba: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 464abb: mov ebp, esp */
  ebp = esp;
/* 464abd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 464abe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 464abf: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 464ac1: lea ecx, [ebp - 4] */
  ecx = (uint32_t)(ebp + 0xfffffffcu);
/* 464ac4: call 0x4612ba */
  esp -= 4; W32(esp, 0x464ac9u); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 464ac9: mov al, byte ptr [ebp + 8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x8u))) & 0xffu);
/* 464acc: mov bl, byte ptr [0x4d05b4] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0x4d05b4u))) & 0xffu);
/* 464ad2: lea ecx, [ebp - 4] */
  ecx = (uint32_t)(ebp + 0xfffffffcu);
/* 464ad5: mov byte ptr [0x4d05b4], al */
  W8((uint32_t)(0x4d05b4u), (eax & 0xffu));
/* 464ada: call 0x4613d8 */
  esp -= 4; W32(esp, 0x464adfu); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 464adf: mov al, bl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 464ae1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 464ae2: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 464ae3: ret  */
  esp += 4; SPILL(); return;
}

void f_464ae4(void) {
  LOAD_REGS();
L_464ae4: /* 464ae4: mov eax, ecx */
  eax = ecx;
/* 464ae6: and dword ptr [eax + 0x24], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x24u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x24u), r);
  }
/* 464aea: mov dword ptr [eax], 0x4c6c70 */
  W32((uint32_t)(eax), 0x4c6c70u);
/* 464af0: ret  */
  esp += 4; SPILL(); return;
}

void f_464af1(void) {
  LOAD_REGS();
L_464af1: /* 464af1: mov eax, ecx */
  eax = ecx;
/* 464af3: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 464af7: mov edx, ecx */
  edx = ecx;
/* 464af9: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edx = r;
  }
/* 464afb: sbb edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* 464afd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 464afe: lea esi, [ecx + 4] */
  esi = (uint32_t)(ecx + 0x4u);
/* 464b01: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 464b03: mov dl, byte ptr [edx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 464b05: mov byte ptr [eax + 4], dl */
  W8((uint32_t)(eax + 0x4u), (edx & 0xffu));
/* 464b08: mov dword ptr [eax], 0x4c6c70 */
  W32((uint32_t)(eax), 0x4c6c70u);
/* 464b0e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 464b10: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 464b13: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 464b16: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 464b19: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 464b1c: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 464b1f: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 464b22: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 464b25: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 464b28: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 464b2b: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* 464b2e: mov dword ptr [eax + 0x18], edx */
  W32((uint32_t)(eax + 0x18u), edx);
/* 464b31: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* 464b34: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 464b37: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 464b3a: mov dword ptr [eax + 0x20], edx */
  W32((uint32_t)(eax + 0x20u), edx);
/* 464b3d: mov ecx, dword ptr [ecx + 0x24] */
  ecx = R32((uint32_t)(ecx + 0x24u));
/* 464b40: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* 464b43: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 464b44: ret 4 */
  esp += 8; SPILL(); return;
}

void f_464b47(void) {
  LOAD_REGS();
L_464b47: /* 464b47: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 464b48: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 464b4c: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 464b4f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 464b50: mov esi, ecx */
  esi = ecx;
/* 464b52: je 0x464b78 */
  if (zf) goto L_464b78;
L_464b54: /* 464b54: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 464b55: push 0x461c33 */
  { uint32_t v = 0x461c33u; esp -= 4; W32(esp, v); }
/* 464b5a: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 464b5d: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 464b5f: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 464b61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 464b62: call 0x48be30 */
  esp -= 4; W32(esp, 0x464b67u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 464b67: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 464b6a: je 0x464b73 */
  if (zf) goto L_464b73;
L_464b6c: /* 464b6c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 464b6d: call 0x48bdcd */
  esp -= 4; W32(esp, 0x464b72u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 464b72: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_464b73: /* 464b73: mov eax, edi */
  eax = edi;
/* 464b75: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 464b76: jmp 0x464b8d */
  goto L_464b8d;
L_464b78: /* 464b78: mov ecx, esi */
  ecx = esi;
/* 464b7a: call 0x461c33 */
  esp -= 4; W32(esp, 0x464b7fu); SPILL(); f_461c33(); if (g_unwind) return; RELOAD();
/* 464b7f: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 464b82: je 0x464b8b */
  if (zf) goto L_464b8b;
L_464b84: /* 464b84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 464b85: call 0x461c65 */
  esp -= 4; W32(esp, 0x464b8au); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 464b8a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_464b8b: /* 464b8b: mov eax, esi */
  eax = esi;
L_464b8d: /* 464b8d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 464b8e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 464b8f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_464b92(void) {
  LOAD_REGS();
L_464b92: /* 464b92: mov eax, dword ptr [ecx - 4] */
  eax = R32((uint32_t)(ecx + 0xfffffffcu));
/* 464b95: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 464b98: mov dword ptr [eax + ecx - 4], 0x4c6cc0 */
  W32((uint32_t)(eax + ecx + 0xfffffffcu), 0x4c6cc0u);
/* 464ba0: ret  */
  esp += 4; SPILL(); return;
}

void f_464ba1(void) {
  LOAD_REGS();
L_464ba1: /* 464ba1: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 464ba5: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 464ba8: mov dword ptr [ecx + 0x2c], edx */
  W32((uint32_t)(ecx + 0x2cu), edx);
/* 464bab: ret 4 */
  esp += 8; SPILL(); return;
}

void f_464bae(void) {
  LOAD_REGS();
L_464bae: /* 464bae: mov eax, dword ptr [ecx + 0x28] */
  eax = R32((uint32_t)(ecx + 0x28u));
/* 464bb1: ret  */
  esp += 4; SPILL(); return;
}

void f_464bb2(void) {
  LOAD_REGS();
L_464bb2: /* 464bb2: cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x28u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 464bb6: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 464bba: jne 0x464bbf */
  if (!zf) goto L_464bbf;
L_464bbc: /* 464bbc: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_464bbf: /* 464bbf: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 464bc3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 464bc4: call 0x461bc5 */
  esp -= 4; W32(esp, 0x464bc9u); SPILL(); f_461bc5(); if (g_unwind) return; RELOAD();
/* 464bc9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_464bcc(void) {
  LOAD_REGS();
L_464bcc: /* 464bcc: mov eax, ecx */
  eax = ecx;
/* 464bce: and dword ptr [eax + 0x24], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x24u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x24u), r);
  }
/* 464bd2: mov dword ptr [eax], 0x4c6d18 */
  W32((uint32_t)(eax), 0x4c6d18u);
/* 464bd8: ret  */
  esp += 4; SPILL(); return;
}

void f_464bd9(void) {
  LOAD_REGS();
L_464bd9: /* 464bd9: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 464bdc: jmp 0x4622a4 */
  SPILL(); f_4622a4(); return;
}

void f_464be1(void) {
  LOAD_REGS();
L_464be1: /* 464be1: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 464be4: mov ecx, dword ptr [ecx + 0x20] */
  ecx = R32((uint32_t)(ecx + 0x20u));
/* 464be7: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 464be9: add eax, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 464beb: ret  */
  esp += 4; SPILL(); return;
}

void f_464bec(void) {
  LOAD_REGS();
L_464bec: /* 464bec: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 464bef: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 464bf3: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 464bf5: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 464bf8: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 464bfc: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 464bfe: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 464c02: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 464c04: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 464c07: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 464c09: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_464c0c(void) {
  LOAD_REGS();
L_464c0c: /* 464c0c: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 464c0f: mov ecx, dword ptr [ecx + 0x24] */
  ecx = R32((uint32_t)(ecx + 0x24u));
/* 464c12: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 464c14: add eax, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 464c16: ret  */
  esp += 4; SPILL(); return;
}

void f_464c17(void) {
  LOAD_REGS();
L_464c17: /* 464c17: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 464c1a: dec dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax), r);
  }
/* 464c1c: mov ecx, dword ptr [ecx + 0x20] */
  ecx = R32((uint32_t)(ecx + 0x20u));
/* 464c1f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 464c21: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
/* 464c24: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 464c26: ret  */
  esp += 4; SPILL(); return;
}

void f_464c27(void) {
  LOAD_REGS();
L_464c27: /* 464c27: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 464c2a: dec dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax), r);
  }
/* 464c2c: mov ecx, dword ptr [ecx + 0x24] */
  ecx = R32((uint32_t)(ecx + 0x24u));
/* 464c2f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 464c31: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
/* 464c34: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 464c36: ret  */
  esp += 4; SPILL(); return;
}

void f_464c37(void) {
  LOAD_REGS();
L_464c37: /* 464c37: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 464c3a: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 464c3c: ret  */
  esp += 4; SPILL(); return;
}

void f_464c3d(void) {
  LOAD_REGS();
L_464c3d: /* 464c3d: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 464c40: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 464c42: ret  */
  esp += 4; SPILL(); return;
}

void f_464c43(void) {
  LOAD_REGS();
L_464c43: /* 464c43: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 464c46: mov ecx, dword ptr [ecx + 0x20] */
  ecx = R32((uint32_t)(ecx + 0x20u));
/* 464c49: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 464c4b: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 464c4d: lea eax, [ecx + eax*2] */
  eax = (uint32_t)(ecx + eax*2);
/* 464c50: ret  */
  esp += 4; SPILL(); return;
}

void f_464c51(void) {
  LOAD_REGS();
L_464c51: /* 464c51: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 464c54: mov ecx, dword ptr [ecx + 0x24] */
  ecx = R32((uint32_t)(ecx + 0x24u));
/* 464c57: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 464c59: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 464c5b: lea eax, [ecx + eax*2] */
  eax = (uint32_t)(ecx + eax*2);
/* 464c5e: ret  */
  esp += 4; SPILL(); return;
}

void f_464c5f(void) {
  LOAD_REGS();
L_464c5f: /* 464c5f: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 464c62: dec dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax), r);
  }
/* 464c64: mov ecx, dword ptr [ecx + 0x20] */
  ecx = R32((uint32_t)(ecx + 0x20u));
/* 464c67: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 464c69: lea edx, [eax + 2] */
  edx = (uint32_t)(eax + 0x2u);
/* 464c6c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 464c6e: ret  */
  esp += 4; SPILL(); return;
}

void f_464c6f(void) {
  LOAD_REGS();
L_464c6f: /* 464c6f: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* 464c72: ret  */
  esp += 4; SPILL(); return;
}

void f_464c73(void) {
  LOAD_REGS();
L_464c73: /* 464c73: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 464c76: jmp 0x4621f5 */
  SPILL(); f_4621f5(); return;
}

void f_464c7b(void) {
  LOAD_REGS();
L_464c7b: /* 464c7b: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 464c7e: dec dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax), r);
  }
/* 464c80: mov ecx, dword ptr [ecx + 0x24] */
  ecx = R32((uint32_t)(ecx + 0x24u));
/* 464c83: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 464c85: lea edx, [eax + 2] */
  edx = (uint32_t)(eax + 0x2u);
/* 464c88: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 464c8a: ret  */
  esp += 4; SPILL(); return;
}

void f_464c8b(void) {
  LOAD_REGS();
L_464c8b: /* 464c8b: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 464c8e: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 464c92: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 464c94: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* 464c97: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 464c99: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 464c9d: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 464c9f: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 464ca2: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 464ca4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_464ca7(void) {
  LOAD_REGS();
L_464ca7: /* 464ca7: mov eax, ecx */
  eax = ecx;
/* 464ca9: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 464cad: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 464caf: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 464cb1: and dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx), r);
  }
/* 464cb4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_464cb7(void) {
  LOAD_REGS();
L_464cb7: /* 464cb7: mov eax, 0x48c0dc */
  eax = 0x48c0dcu;
/* 464cbc: call 0x4616c0 */
  esp -= 4; W32(esp, 0x464cc1u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 464cc1: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 464cc4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 464cc7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 464cc8: mov esi, ecx */
  esi = ecx;
/* 464cca: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 464ccd: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 464cd0: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 464cd4: push 0x48e1b8 */
  { uint32_t v = 0x48e1b8u; esp -= 4; W32(esp, v); }
/* 464cd9: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 464cdf: mov dword ptr [esi], 0x4c6d6c */
  W32((uint32_t)(esi), 0x4c6d6cu);
/* 464ce5: call 0x488f1b */
  esp -= 4; W32(esp, 0x464ceau); SPILL(); f_488f1b(); if (g_unwind) return; RELOAD();
/* 464cea: call 0x4887f7 */
  esp -= 4; W32(esp, 0x464cefu); SPILL(); f_4887f7(); if (g_unwind) return; RELOAD();
/* 464cef: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 464cf5: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 464cf8: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 464cfb: call 0x488e1d */
  esp -= 4; W32(esp, 0x464d00u); SPILL(); f_488e1d(); if (g_unwind) return; RELOAD();
/* 464d00: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 464d03: mov eax, esi */
  eax = esi;
/* 464d05: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 464d06: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 464d0d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 464d0e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_464d11(void) {
  LOAD_REGS();
L_464d11: /* 464d11: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 464d15: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 464d16: mov esi, ecx */
  esi = ecx;
/* 464d18: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 464d1b: mov dword ptr [esi], 0x4c6d6c */
  W32((uint32_t)(esi), 0x4c6d6cu);
/* 464d21: call 0x4887f7 */
  esp -= 4; W32(esp, 0x464d26u); SPILL(); f_4887f7(); if (g_unwind) return; RELOAD();
/* 464d26: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 464d29: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 464d2c: mov eax, esi */
  eax = esi;
/* 464d2e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 464d2f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_464d32(void) {
  LOAD_REGS();
L_464d32: /* 464d32: mov eax, 0x48bf7e */
  eax = 0x48bf7eu;
/* 464d37: call 0x4616c0 */
  esp -= 4; W32(esp, 0x464d3cu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 464d3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 464d3d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 464d40: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 464d42: je 0x464d6b */
  if (zf) goto L_464d6b;
L_464d44: /* 464d44: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 464d47: jne 0x464d6b */
  if (!zf) goto L_464d6b;
L_464d49: /* 464d49: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 464d4b: call 0x4620da */
  esp -= 4; W32(esp, 0x464d50u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 464d50: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 464d51: mov ecx, eax */
  ecx = eax;
/* 464d53: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 464d56: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 464d5a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 464d5c: je 0x464d67 */
  if (zf) goto L_464d67;
L_464d5e: /* 464d5e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 464d60: call 0x464cb7 */
  esp -= 4; W32(esp, 0x464d65u); SPILL(); f_464cb7(); if (g_unwind) return; RELOAD();
/* 464d65: jmp 0x464d69 */
  goto L_464d69;
L_464d67: /* 464d67: xor eax, eax */
  eax = 0;
L_464d69: /* 464d69: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_464d6b: /* 464d6b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 464d6e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 464d70: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 464d71: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 464d72: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 464d79: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 464d7a: ret  */
  esp += 4; SPILL(); return;
}

void f_464d7b(void) {
  LOAD_REGS();
L_464d7b: /* 464d7b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 464d7d: call 0x464cb7 */
  esp -= 4; W32(esp, 0x464d82u); SPILL(); f_464cb7(); if (g_unwind) return; RELOAD();
/* 464d82: ret  */
  esp += 4; SPILL(); return;
}

void f_464d83(void) {
  LOAD_REGS();
L_464d83: /* 464d83: mov eax, 0x48c0dc */
  eax = 0x48c0dcu;
/* 464d88: call 0x4616c0 */
  esp -= 4; W32(esp, 0x464d8du); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 464d8d: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 464d90: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 464d93: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 464d94: mov esi, ecx */
  esi = ecx;
/* 464d96: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 464d99: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 464d9c: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 464da0: push 0x48e1b8 */
  { uint32_t v = 0x48e1b8u; esp -= 4; W32(esp, v); }
/* 464da5: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 464dab: mov dword ptr [esi], 0x4c6ddc */
  W32((uint32_t)(esi), 0x4c6ddcu);
/* 464db1: call 0x488f1b */
  esp -= 4; W32(esp, 0x464db6u); SPILL(); f_488f1b(); if (g_unwind) return; RELOAD();
/* 464db6: call 0x4887f7 */
  esp -= 4; W32(esp, 0x464dbbu); SPILL(); f_4887f7(); if (g_unwind) return; RELOAD();
/* 464dbb: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 464dc1: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 464dc4: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 464dc7: call 0x488e1d */
  esp -= 4; W32(esp, 0x464dccu); SPILL(); f_488e1d(); if (g_unwind) return; RELOAD();
/* 464dcc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 464dcf: mov eax, esi */
  eax = esi;
/* 464dd1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 464dd2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 464dd9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 464dda: ret 4 */
  esp += 8; SPILL(); return;
}

void f_464ddd(void) {
  LOAD_REGS();
L_464ddd: /* 464ddd: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 464de1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 464de2: mov esi, ecx */
  esi = ecx;
/* 464de4: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 464de7: mov dword ptr [esi], 0x4c6ddc */
  W32((uint32_t)(esi), 0x4c6ddcu);
/* 464ded: call 0x4887f7 */
  esp -= 4; W32(esp, 0x464df2u); SPILL(); f_4887f7(); if (g_unwind) return; RELOAD();
/* 464df2: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 464df5: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 464df8: mov eax, esi */
  eax = esi;
/* 464dfa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 464dfb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_464dfe(void) {
  LOAD_REGS();
L_464dfe: /* 464dfe: mov eax, 0x48bf7e */
  eax = 0x48bf7eu;
/* 464e03: call 0x4616c0 */
  esp -= 4; W32(esp, 0x464e08u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 464e08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 464e09: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 464e0c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 464e0e: je 0x464e37 */
  if (zf) goto L_464e37;
L_464e10: /* 464e10: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 464e13: jne 0x464e37 */
  if (!zf) goto L_464e37;
L_464e15: /* 464e15: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 464e17: call 0x4620da */
  esp -= 4; W32(esp, 0x464e1cu); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 464e1c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 464e1d: mov ecx, eax */
  ecx = eax;
/* 464e1f: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 464e22: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 464e26: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 464e28: je 0x464e33 */
  if (zf) goto L_464e33;
L_464e2a: /* 464e2a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 464e2c: call 0x464d83 */
  esp -= 4; W32(esp, 0x464e31u); SPILL(); f_464d83(); if (g_unwind) return; RELOAD();
/* 464e31: jmp 0x464e35 */
  goto L_464e35;
L_464e33: /* 464e33: xor eax, eax */
  eax = 0;
L_464e35: /* 464e35: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_464e37: /* 464e37: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 464e3a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 464e3c: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 464e3d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 464e3e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 464e45: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 464e46: ret  */
  esp += 4; SPILL(); return;
}

void f_464e47(void) {
  LOAD_REGS();
L_464e47: /* 464e47: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 464e49: call 0x464d83 */
  esp -= 4; W32(esp, 0x464e4eu); SPILL(); f_464d83(); if (g_unwind) return; RELOAD();
/* 464e4e: ret  */
  esp += 4; SPILL(); return;
}

void f_464e4f(void) {
  LOAD_REGS();
L_464e4f: /* 464e4f: mov eax, 0x48c0dc */
  eax = 0x48c0dcu;
/* 464e54: call 0x4616c0 */
  esp -= 4; W32(esp, 0x464e59u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 464e59: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 464e5c: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 464e5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 464e60: mov esi, ecx */
  esi = ecx;
/* 464e62: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 464e63: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 464e66: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 464e69: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 464e6d: push 0x48e1b8 */
  { uint32_t v = 0x48e1b8u; esp -= 4; W32(esp, v); }
/* 464e72: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 464e78: mov dword ptr [esi], 0x4c6e4c */
  W32((uint32_t)(esi), 0x4c6e4cu);
/* 464e7e: call 0x488f1b */
  esp -= 4; W32(esp, 0x464e83u); SPILL(); f_488f1b(); if (g_unwind) return; RELOAD();
/* 464e83: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 464e84: mov ecx, esi */
  ecx = esi;
/* 464e86: call 0x464448 */
  esp -= 4; W32(esp, 0x464e8bu); SPILL(); f_464448(); if (g_unwind) return; RELOAD();
/* 464e8b: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 464e91: call 0x488e1d */
  esp -= 4; W32(esp, 0x464e96u); SPILL(); f_488e1d(); if (g_unwind) return; RELOAD();
/* 464e96: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 464e99: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 464e9b: je 0x464eb1 */
  if (zf) goto L_464eb1;
L_464e9d: /* 464e9d: mov ecx, esi */
  ecx = esi;
/* 464e9f: call 0x46446d */
  esp -= 4; W32(esp, 0x464ea4u); SPILL(); f_46446d(); if (g_unwind) return; RELOAD();
/* 464ea4: mov al, byte ptr [ebp + 0xc] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xcu))) & 0xffu);
/* 464ea7: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 464ea9: mov dword ptr [esi + 0x10], edi */
  W32((uint32_t)(esi + 0x10u), edi);
/* 464eac: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 464eae: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
L_464eb1: /* 464eb1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 464eb4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 464eb5: mov eax, esi */
  eax = esi;
/* 464eb7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 464eb8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 464ebf: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 464ec0: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_464ec3(void) {
  LOAD_REGS();
L_464ec3: /* 464ec3: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 464ec7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 464ec8: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 464ecc: mov esi, ecx */
  esi = ecx;
/* 464ece: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 464ed1: mov dword ptr [esi], 0x4c6e4c */
  W32((uint32_t)(esi), 0x4c6e4cu);
/* 464ed7: call 0x464448 */
  esp -= 4; W32(esp, 0x464edcu); SPILL(); f_464448(); if (g_unwind) return; RELOAD();
/* 464edc: mov eax, esi */
  eax = esi;
/* 464ede: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 464edf: ret 8 */
  esp += 12; SPILL(); return;
}

void f_464ee2(void) {
  LOAD_REGS();
L_464ee2: /* 464ee2: mov eax, 0x48bf7e */
  eax = 0x48bf7eu;
/* 464ee7: call 0x4616c0 */
  esp -= 4; W32(esp, 0x464eecu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 464eec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 464eed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 464eee: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 464ef1: xor esi, esi */
  esi = 0;
/* 464ef3: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 464ef5: je 0x464f1d */
  if (zf) goto L_464f1d;
L_464ef7: /* 464ef7: cmp dword ptr [edi], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 464ef9: jne 0x464f1d */
  if (!zf) goto L_464f1d;
L_464efb: /* 464efb: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 464efd: call 0x4620da */
  esp -= 4; W32(esp, 0x464f02u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 464f02: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 464f03: mov ecx, eax */
  ecx = eax;
/* 464f05: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 464f08: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 464f0a: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 464f0d: je 0x464f19 */
  if (zf) goto L_464f19;
L_464f0f: /* 464f0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 464f10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 464f11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 464f12: call 0x464e4f */
  esp -= 4; W32(esp, 0x464f17u); SPILL(); f_464e4f(); if (g_unwind) return; RELOAD();
/* 464f17: jmp 0x464f1b */
  goto L_464f1b;
L_464f19: /* 464f19: xor eax, eax */
  eax = 0;
L_464f1b: /* 464f1b: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
L_464f1d: /* 464f1d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 464f20: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 464f22: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 464f23: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 464f24: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 464f25: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 464f2c: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 464f2d: ret  */
  esp += 4; SPILL(); return;
}

void f_464f2e(void) {
  LOAD_REGS();
L_464f2e: /* 464f2e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 464f2f: mov esi, ecx */
  esi = ecx;
/* 464f31: mov dword ptr [esi], 0x4c6e4c */
  W32((uint32_t)(esi), 0x4c6e4cu);
/* 464f37: call 0x46446d */
  esp -= 4; W32(esp, 0x464f3cu); SPILL(); f_46446d(); if (g_unwind) return; RELOAD();
/* 464f3c: mov dword ptr [esi], 0x4c6a70 */
  W32((uint32_t)(esi), 0x4c6a70u);
/* 464f42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 464f43: ret  */
  esp += 4; SPILL(); return;
}

void f_464f44(void) {
  LOAD_REGS();
L_464f44: /* 464f44: xor eax, eax */
  eax = 0;
/* 464f46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 464f47: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 464f48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 464f49: call 0x464e4f */
  esp -= 4; W32(esp, 0x464f4eu); SPILL(); f_464e4f(); if (g_unwind) return; RELOAD();
/* 464f4e: ret  */
  esp += 4; SPILL(); return;
}

void f_464f4f(void) {
  LOAD_REGS();
L_464f4f: /* 464f4f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 464f50: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 464f54: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 464f57: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 464f58: mov esi, ecx */
  esi = ecx;
/* 464f5a: je 0x464f80 */
  if (zf) goto L_464f80;
L_464f5c: /* 464f5c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 464f5d: push 0x464f2e */
  { uint32_t v = 0x464f2eu; esp -= 4; W32(esp, v); }
/* 464f62: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 464f65: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 464f67: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 464f69: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 464f6a: call 0x48be30 */
  esp -= 4; W32(esp, 0x464f6fu); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 464f6f: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 464f72: je 0x464f7b */
  if (zf) goto L_464f7b;
L_464f74: /* 464f74: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 464f75: call 0x48bdcd */
  esp -= 4; W32(esp, 0x464f7au); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 464f7a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_464f7b: /* 464f7b: mov eax, edi */
  eax = edi;
/* 464f7d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 464f7e: jmp 0x464f95 */
  goto L_464f95;
L_464f80: /* 464f80: mov ecx, esi */
  ecx = esi;
/* 464f82: call 0x464f2e */
  esp -= 4; W32(esp, 0x464f87u); SPILL(); f_464f2e(); if (g_unwind) return; RELOAD();
/* 464f87: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 464f8a: je 0x464f93 */
  if (zf) goto L_464f93;
L_464f8c: /* 464f8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 464f8d: call 0x461c65 */
  esp -= 4; W32(esp, 0x464f92u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 464f92: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_464f93: /* 464f93: mov eax, esi */
  eax = esi;
L_464f95: /* 464f95: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 464f96: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 464f97: ret 4 */
  esp += 8; SPILL(); return;
}

void f_464f9a(void) {
  LOAD_REGS();
L_464f9a: /* 464f9a: mov eax, 0x48c0dc */
  eax = 0x48c0dcu;
/* 464f9f: call 0x4616c0 */
  esp -= 4; W32(esp, 0x464fa4u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 464fa4: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 464fa7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 464faa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 464fab: mov esi, ecx */
  esi = ecx;
/* 464fad: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 464fb0: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 464fb3: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 464fb7: push 0x48e1b8 */
  { uint32_t v = 0x48e1b8u; esp -= 4; W32(esp, v); }
/* 464fbc: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 464fc2: mov dword ptr [esi], 0x4c6b68 */
  W32((uint32_t)(esi), 0x4c6b68u);
/* 464fc8: call 0x488f1b */
  esp -= 4; W32(esp, 0x464fcdu); SPILL(); f_488f1b(); if (g_unwind) return; RELOAD();
/* 464fcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 464fce: mov ecx, esi */
  ecx = esi;
/* 464fd0: call 0x46471a */
  esp -= 4; W32(esp, 0x464fd5u); SPILL(); f_46471a(); if (g_unwind) return; RELOAD();
/* 464fd5: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 464fdb: call 0x488e1d */
  esp -= 4; W32(esp, 0x464fe0u); SPILL(); f_488e1d(); if (g_unwind) return; RELOAD();
/* 464fe0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 464fe3: mov eax, esi */
  eax = esi;
/* 464fe5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 464fe6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 464fed: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 464fee: ret 4 */
  esp += 8; SPILL(); return;
}

void f_464ff1(void) {
  LOAD_REGS();
L_464ff1: /* 464ff1: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 464ff5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 464ff6: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 464ffa: mov esi, ecx */
  esi = ecx;
/* 464ffc: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 464fff: mov dword ptr [esi], 0x4c6b68 */
  W32((uint32_t)(esi), 0x4c6b68u);
/* 465005: call 0x46471a */
  esp -= 4; W32(esp, 0x46500au); SPILL(); f_46471a(); if (g_unwind) return; RELOAD();
/* 46500a: mov eax, esi */
  eax = esi;
/* 46500c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46500d: ret 8 */
  esp += 12; SPILL(); return;
}
